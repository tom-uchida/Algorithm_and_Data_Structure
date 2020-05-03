# メモ機能を使った関数では問題を一度しか解かず，解を辞書memoに格納する．
# memoには，len(row)+1個の要素しかない．それぞれ1度だけ計算され，何度も参照される．

# coinsMemoizeでは，再帰呼び出しでmemoを参照して計算を効率化したが，
# coinsでは，変数tableに書き込むだけで参照利用はしていなかった．
def coinsMemoize(row, memo):
    if len(row) == 0:
        memo[0] = 0
        return (0, memo)

    elif len(row) == 1:
        memo[1] = row[0]
        return (row[0], memo)
    
    
    try:
        # 問題の最適値を計算したかどうかを確認
        return (memo[len(row)], memo)

    except KeyError:
        # 元のcoinsのコードと同じように，再帰呼び出しを使って問題を解く
        pick = coinsMemoize(row[2:], memo)[0] + row[0]
        skip = coinsMemoize(row[1:], memo)[0]
        result = max(pick, skip)
        memo[len(row)] = result
        return (result, memo)

if __name__ == "__main__":
    print(coinsMemoize([14, 3, 27, 4, 5, 15, 1], memo={}))