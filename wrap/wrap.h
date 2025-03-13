#ifndef __WRAP_H_
#define __WRAP_H_

// 错误处理函数，用于在出错时打印错误信息并退出程序
void perr_exit(const char *s);

// 封装的网络相关函数，用于简化代码并统一错误处理

// 接受客户端连接
int Accept(int fd, struct sockaddr *sa, socklen_t *salenptr);

// 绑定套接字到指定地址和端口
int Bind(int fd, const struct sockaddr *sa, socklen_t salen);

// 连接到服务器
int Connect(int fd, const struct sockaddr *sa, socklen_t salen);

// 开始监听套接字
int Listen(int fd, int backlog);

// 创建套接字
int Socket(int family, int type, int protocol);

// 读取数据
ssize_t Read(int fd, void *ptr, size_t nbytes);

// 写入数据
ssize_t Write(int fd, const void *ptr, size_t nbytes);

// 关闭文件描述符
int Close(int fd);

// 读取指定数量的数据
ssize_t Readn(int fd, void *vptr, size_t n);

// 写入指定数量的数据
ssize_t Writen(int fd, const void *vptr, size_t n);

#endif