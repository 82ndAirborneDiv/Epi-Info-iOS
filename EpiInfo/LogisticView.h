//
//  LogisticView.h
//  EpiInfo
//
//  Created by John Copeland on 11/9/18.
//  Copyright © 2018 John Copeland. All rights reserved.
//

#import "TablesView.h"
#import "LogisticRegressionResults.h"
#import "VariableRow.h"
#import "InteractionRow.h"
#import "sqlite3.h"

NS_ASSUME_NONNULL_BEGIN

@interface LogisticView : TablesView
{
    sqlite3 *analysisDB;
    NSArray *currentTable;
    NSString *mstrC;
    double mdblC;
    double mdblP;
    int mlngIter;
    double mdblConv;
    double mdblToler;
    BOOL mboolIntercept;
    NSArray *mstraBoolean;
    NSString *mstrMatchVar;
    NSString *mstrWeightVar;
    NSString *mstrDependVar;
    NSMutableArray *mstraTerms;
    NSMutableArray *mStrADiscrete;
    int terms, discrete;
    int lintIntercept, lintweight, NumRows;
}
@end

NS_ASSUME_NONNULL_END
