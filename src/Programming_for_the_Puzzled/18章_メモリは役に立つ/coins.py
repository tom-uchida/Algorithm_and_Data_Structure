def coins(row, table):
    if len(row) == 0:
        table[0] = 0
        return 0, table
    
    elif len(row) == 1:
        table[1] = row[0]
        return row[0], table

    # 硬貨列の最初の硬貨を選択するかスキップするかに応じた再帰呼び出し
    pick = coins(row[2:], table)[0] + row[0] # 値row[0]を選択する場合は，row[1]をスキップ
    skip = coins(row[1:], table)[0] # 値row[0]を選択しないため，必要ならrow[1]を選択できる

    # 呼び出し結果の大きかったほうを結果の値とする
    result = max(pick , skip)

    # 辞書の項目を更新
    table[len(row)] = result

    # もし，硬貨列問題で最大値だけが欲しい場合は，
    # 単にresultを返すだけでよく，tableは必要ない．
    return result, table

if __name__ == "__main__":
    print(coins([14, 3, 27, 4, 5, 15, 1], table={}))