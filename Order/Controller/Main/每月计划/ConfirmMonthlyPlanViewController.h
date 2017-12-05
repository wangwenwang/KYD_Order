//
//  ConfirmMonthlyPlanViewController.h
//  Order
//
//  Created by 凯东源 on 2017/12/5.
//  Copyright © 2017年 凯东源. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PromotionOrderModel.h"

@interface ConfirmMonthlyPlanViewController : UIViewController

@property (strong, nonatomic) PromotionOrderModel *promotionOrder;

/// 已下单的产品(ProductModel)，本地push过来的
@property (strong, nonatomic) NSMutableArray *productsOfLocal;

/// 已下单的产品(PromotionDetailModel)，服务器获取 (正常品)
@property (strong, nonatomic) NSMutableArray *promotionDetailsOfServer;

/// 已下单的产品(PromotionDetailModel)，服务器获取 (赠品)
@property (strong, nonatomic) NSMutableArray *promotionDetailGiftsOfServer;

/// 用户地址代码
@property (copy, nonatomic) NSString *orderAddressCode;

/// 用户地址IDX
@property (copy, nonatomic) NSString *orderAddressIdx;

/// 支付方式
@property (copy, nonatomic) NSString *orderPayType;

/// 用户id
@property (copy, nonatomic) NSString *partyId;

@end
