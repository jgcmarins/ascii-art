# ascii-art
Given a `image.bmp` and a `M x N` group of pixels, generate a text that represents the `image.bmp` in ascii characters.

## results
Before|After
|---|---|
![Socrates image](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/in/socrates.bmp)|![Socrates ascii](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/results/socrates.png)
![Woman image](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/in/woman.bmp)|![Woman ascii](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/results/woman.png)
![JS image](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/in/js.bmp)|![JS ascii](https://raw.githubusercontent.com/jgcmarins/ascii-art/master/results/js.png)

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
