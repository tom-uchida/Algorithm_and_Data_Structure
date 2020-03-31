cap1 = ['F', 'F', 'B', 'B', 'B', 'F', 'B', 'B', 'B', 'F', 'F', 'B', 'F' ]
cap2 = ['F', 'F', 'B', 'B', 'B', 'F', 'B', 'B', 'B', 'F', 'F', 'F', 'F' ]

def pleaseConformTwopass(caps):
    # Initialize
    start = forward = backward = 0
    caps = caps + ['END']
    intervals = []

    # 第1パス：リストを調べて前向き区間と後向き区間を決定する
    for i in range(1, len(caps)):
        if caps[start] != caps[i]:
            intervals.append((start, i-1, caps[start]))
            if caps[start] == 'F':
                forward += 1
            else:
                backward += 1
            start = i
        # end if
    # end for
    # print(intervals)

    # 第2パス：区間を調べて適切な命令を表示する
    if forward < backward:
        flip = 'F'
    else:
        flip = 'B'
    for t in intervals:
        if t[2] == flip:
            print('People in positions', t[0], 'through', t[1], 'flip your caps!')
        # end if
    # end for

def pleaseConformOnepass(caps):
    # 先頭要素と同じものを追加しておく
    caps = caps + [caps[0]] 

    for i in range(1, len(caps)):
        # 直前の要素と違う要素が初めて出てきたら区間を開始する
        if caps[i] != caps[i-1]:
            if caps[i] != caps[0]:
                print('People in positions', i, end='')
            else:
                print(' through', i-1, 'flip your caps!')

if __name__ == "__main__":
    pleaseConformTwopass(cap1);
    pleaseConformOnepass(cap1);