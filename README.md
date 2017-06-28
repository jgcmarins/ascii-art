# ascii-art
Given a `image.bmp` and a `M x N` group of pixels, generate a text that represents the `image.bmp` in ascii characters.

## results
Before|After
|---|---|
![Socrates image](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/in/socrates.bmp?token=AE5Uim_zYiqke8KkJhujPYfH1jb9lPsdks5ZXGQswA%3D%3D)|![Socrates ascii](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/results/socrates.png?token=AE5Uimgca-VAbgcB1I8k_rPxP0MwJuDRks5ZXGQgwA%3D%3D)
![Woman image](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/in/woman.bmp?token=AE5UiktDsCll7DG9MU_ZJW06REKKAgcMks5ZXGThwA%3D%3D)|![Woman ascii](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/results/woman.png?token=AE5UigzbV1z9-721X9iUSI2GC1p720Xvks5ZXGTUwA%3D%3D)
![JS image](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/in/js.bmp?token=AE5Uig5SiQ5S-F1rgamHQkXEgJlvOUCqks5ZXGUJwA%3D%3D)|![JS ascii](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/results/js.png?token=AE5UitzJK6DH5forWakoRiYCyvGluP1nks5ZXGT2wA%3D%3D)

## outputs
You can also check the outputs [here](https://github.com/jgcmarins/ascii-art/tree/master/out).

## usage
First, build the executable
```
$ make
```
Then, run:
```
$ make run /path/to/image.bmp M N
```
I would recommend to choose M and N based on image resolution and also to direct the output like this:
```
$ make run /path/to/image.bmp M N > output.txt
```
## notices
Sorry for my bad C++. It's been a long time :laughing:

## License
[MIT](https://github.com/jgcmarins/ascii-art/blob/master/LICENSE)
