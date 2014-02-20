//
//  vector_delete.cpp
//  IOS_Ex
//
//  Created by XiangChenyu on 14-1-5.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "vector_delete.h"
#include <vector>
#include <algorithm>
//#include "stdio.h"

void normal_print(const int& value)
{
    printf("%d " , value);
}

VectorDelete::VectorDelete()
{
    //2014-1-5 effective c++ 07
    //防止出现异常导致有泄漏
    typedef std::shared_ptr <ATest> spATest;// shared_ptr<ATest> spATest;
    std::vector<spATest> vectorATest;
    for (int i = 0; i < 100; ++i)
    {
        vectorATest.push_back(spATest(new ATest));
    }
    
    //for_each method
    int ia[] = {1, 2, 3, 6, 7, 8, 10, 11, 22};
    std::vector<int> ivec(ia, ia + sizeof(ia) / sizeof(int));
    
    
    std::sort(ivec.begin(),ivec.end());
    for_each(ivec.begin(), ivec.end(), normal_print);
};
VectorDelete::~VectorDelete()
{
    
};