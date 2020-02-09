# LeraningCpp
Code generated during learning C ++  
https://atcoder.jp/contests/apg4b  
bits/std++.hを使うためにgccを用意  
デフォルトのClangではコンパイルできない  
Atcoder beginners selectionを使用して勉強  
https://atcoder.jp/contests/abs

### 計算量オーダー
https://qiita.com/drken/items/872ebc3a2b5caaa4a0d0

### for文
①カウンタ変数の宣言と初期化、②継続条件の指定、③カウンタ変数の増減、はそれぞれ省略可能

### イテレータ
配列やmapなどのコンテナの各要素に対して順番に処理を行うときにイテレータを用いる  
イテレータを変数に入れるときはautoを用いる  
イテレータを用いると処理を一般化できることが多く，STLにおいて一連の要素に対して何かを行うような関数はイテレータを引数に取る形で実装されている  

### STL関数
Standard Template Library

### 'と"の違い
string型を表すために" "で囲ったように、char型を表すためには' 'で囲います。

### cinの入力書式
C++ の標準入力においては半角空白も改行も同列に区切り文字と見なされる

### 多重ループ（ネスト構造）を一気にbreak
1. ~~goto~~
2. ループ終了の判定用の変数(フラグ)を用意し、if文で毎回チェック(https://programming.pc-note.net/c/multipleloop.html)

### bool型
論理型でtrue or false

### intの割り算
小数点以下は切り捨てされる

### sort
大小関係が定められたたくさんのデータを、小さい順（昇順）あるいは大きい順（降順）に並べ替える関数  
実装のアルゴリズムとしては、クイックソートの改良版であるイントロソート

### Beginners selection解説
https://qiita.com/drken/items/fd4e5e3630d0f5859067#5-過去問精選-10-問

### Homebrew
Mac OSにおいて、プログラミング上必要となってくる
パッケージをインストールしたりアンインストールしたり出来るシステムです。
このようなものをパッケージ管理システムと呼びます。
つまり、Homebrewを使えば、便利なアイテムのダウンロードが非常に簡単になってきます。
プログラミング言語の環境構築などでは必須のアイテムになっています。

### Visual Studio Code
### ワークスペース
