DE： 这里使用的是codeblocks
sudo apt-get install codeblocks

2.配置linux下的openGL
下载并安装openGL所需要的库
sudo apt-get install mesa-common-dev libgl1-mesa-dev libglu1-mesa-dev
sudo apt-get install freeglut3-dev
sudo apt-get install build-essential gdb subversion
sudo apt-get install automake autoconf libtool
sudo apt-get install libgtk2.0-dev libxmu-dev libxxf86vm-dev

3.配置codeblocks IDE
在Settings->compiler and debugger settings->link settings
添加：

/usr/lib/libGL.so
/usr/lib/libGLU.so
/usr/lib/libglut.so
4. 开发
开发的时候，新建GLUT工程，在main.cpp里面编写代码即可
新建后，自带有一个openGL的例子
———————————————分割线—————————————————
上了一节计算机图形学的课，觉得挺有意思，于是兴冲冲地在windwos下鼓捣opengl。忽然发现windwos下真的很难搞，而且我的windwos还是64位的，算了，换ubuntu。几个命令就搞定了。想想之前的apache+php+mysql也是。
现在发现有些东西用linux配置还真是方便啊！没有恼人的环境变量，没有注册表，最重要的是免费的，不用劳神下D版！


