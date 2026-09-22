# Circuit Calculator 项目约定

## 目的

学 C 语言（本学期考试科目），用「电路计算器」项目逐个引出 C 考点，同时服务《电路分析》课。

## 范围

按学习阶梯推进，每版引入一个 C 考点：

| 版本 | C 考点 | 功能 |
|---|---|---|
| v1 | 顺序结构 | 欧姆定律 V=I×R |
| v2 | scanf 输入 | 交互输入 |
| v3 | if/else | 菜单选择 + 除零保护 |
| v4 | 数组 + for | 串联/并联电阻 |
| v5 | 函数 | 抽成函数 |

## 约定

- 代码内（含 printf 提示语）一律英文，避免 CodeBlocks GBK/UTF-8 中文乱码。
- 文档中文，代码与变量名英文。
- 单文件 `circuit_calc.c` 随版本逐步扩展，不建多余文件。
- 标准 C99，在 CodeBlocks 中编译运行（F9 / Build and run）。

## 运行

CodeBlocks 打开 `circuit_calc.c` → F9 编译运行。
