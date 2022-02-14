import sys
import requests
import re
import urllib.parse
#video down

def gv(url):
    class Fbdl:
        def __init__(self):
            self.req = requests.Session()
            self.banner()

        def banner(self):
            ur = url
            rl = ur.replace(
                'https://m.', 'https://mbasic.').replace('https://www.', 'https://mbasic.')
            self.getlnk(rl)

        def getlnk(self, url):
            r = self.req.get(url)
            rr = re.findall(r'<a href="(.*?)"', r.text)
            all_video = []
            for x in rr:
                if "/video_redirect/?src=" in x:
                    all_video.append(x)
            data = all_video
            self.dl(data)

        def dl(self, link):
            re = link.replace('/video_redirect/?src=', '')
            ree = urllib.parse.unquote(re)
            print("Downloading ... ")
            with open(f"Video.mp4", "wb") as f:
                response = requests.get(ree, stream=True)
                total_length = response.headers.get('content-length')
                if total_length is None:
                    pass
                else:
                    dlw = 0
                    total_length = int(total_length)
                    for data in response.iter_content(chunk_size=4096):
                        ges = int(100*dlw/total_length)
                        dlw += len(data)
                        f.write(data)
                        done = int(25*dlw/total_length)
                        sys.stdout.write(
                            f"\r[{'>'*done}{'='*(25-done)}] {ges+1}% ")
                        sys.stdout.flush()
    Fbdl()

gv("https://www.facebook.com/Memes2ndPaper/videos/7289359601089049")