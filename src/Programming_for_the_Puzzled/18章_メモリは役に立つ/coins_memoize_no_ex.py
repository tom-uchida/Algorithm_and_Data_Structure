# 例外は通常の演算よりも大幅に時間を食うため，できるだけ例外を投げないようにする必要がある．
def coinsMemoizeNoEx(row, memo):
    if len(row) == 0:
        memo[0] = 0
        return (0, memo)

    elif len(row) == 1:
        memo[1] = row[0]
        return (row[0], memo)
    
    if len(row) in memo:
        return (memo[len(row)], memo)
    else:
        pick = coinsMemoize(row[2:], memo)[0] + row[0]
        skip = coinsMemoize(row[1:], memo)[0]
        result = max(pick, skip)
        memo[len(row)] = result
        return (result, memo)

if __name__ == "__main__":
    print(coinsMemoizeNoEx([14, 3, 27, 4, 5, 15, 1], memo={}))