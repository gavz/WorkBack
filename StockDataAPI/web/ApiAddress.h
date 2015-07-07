#pragma once

//-------------------腾讯-----------------------------------------------
#define QQ_STOCK_ADDRESS "qt.gtimg.cn"       //域名
const LPCSTR QQ_MARK_FH[] = {"sz", "sh"};    //股票市场代码（深市、沪市）

#define QQ_STOCK_CODE "http://qt.gtimg.cn/q=%s"  //sz000858"
/************************************************************************
个股实时数据
返回数据：v_sz000858="51~五 粮 液~000858~32.64~32.86~33.00~450847~231980~218866~32.64~3~32.63~57~32.61~231~32.60~6~32.59~26~32.65~13~32.66~30~32.67~7~32.68~134~32.69~104~11:06:47/32.64/1/M/3264/6221|11:06:44/32.63/4/S/13058/6217|11:06:38/32.65/188/B/613458/6212|11:06:35/32.63/36/B/117468/6207|11:06:29/32.63/14/B/45663/6204|11:06:26/32.60/14/S/45647/6200~20150625110647~-0.22~-0.67~33.20~31.74~32.59/449791/1457204890~450847~146064~1.19~22.87~~33.20~31.74~4.44~1238.89~1239.00~2.98~36.15~29.57~";
0: 未知~1: 名字~2: 代码~3: 当前价格~4: 昨收~5: 今开~6: 成交量（手）~7: 外盘~8: 内盘~9: 买一~10: 买一量（手）~11-18: 买二 买五~19: 卖一~20: 卖一量~21-28: 卖二 卖五~29: 最近逐笔成交~30: 时间~31: 涨跌~32: 涨跌%~33: 最高~34: 最低~35: 价格/成交量（手）/成交额~36: 成交量（手）~37: 成交额（万）~38: 换手率~39: 市盈率~40:  ~41: 最高~42: 最低~43: 振幅~44: 流通市值~45: 总市值~46: 市净率~47: 涨停价~48: 跌停价~
************************************************************************/
#define QQ_STOCK_FLOW "http://qt.gtimg.cn/q=ff_%s"   //sz000858"
/************************************************************************
资金流向
返回数据：v_ff_sz000858="sz000858~70745.27~67152.69~3592.59~2.43~5348.38~4327.56~1020.82~0.69~147573.90~572122.86~538080.09~五 粮 液~20150625~20150624^196528.88^172532.46~20150623^117625.25^102012.79~20150619^78639.26^84193.85~20150618^108584.20^112188.30";
0: 代码~1: 主力流入~2: 主力流出~3: 主力净流入~4: 主力净流入/资金流入流出总和~5: 散户流入~6: 散户流出~7: 散户净流入~8: 散户净流入/资金流入流出总和~9: 资金流入流出总和1+2+5+6~10: 未知~11: 未知~12: 名字~13: 日期  
************************************************************************/
#define QQ_STOCK_PK "http://qt.gtimg.cn/q=s_pk%s"  //sz000858"
/************************************************************************
盘口分析
返回数据：v_s_pksz000858="0.337~0.174~0.323~0.165";
0: 买盘大单~1: 买盘小单~2: 卖盘大单~3: 卖盘小单
************************************************************************/
#define QQ_STOCK_JY "http://qt.gtimg.cn/q=s_%s"  //sz000858"
/************************************************************************
简要信息
返回数据：v_s_sz000858="51~五 粮 液~000858~32.45~-0.41~-1.25~488620~158360~~1231.79";
0: 未知~1: 名字~2: 代码~3: 当前价格~4: 涨跌~5: 涨跌%~6: 成交量（手）~7: 成交额（万）8:   ~9: 总市值  
************************************************************************/

//--------------新浪----------------------------------------------------
#define SINA_STOCK_ADDRESS "hq.sinajs.cn"       //域名

#define SINA_STOCK_CODE "http://hq.sinajs.cn/list=%s"  //sh601006
/************************************************************************
个股实时数据
返回数据：var hq_str_sh601006="大秦铁路,13.70,13.88,14.05,14.21,13.57,14.04,14.05,202684322,2816855195,10700,14.04,15800,14.03,91600,14.02,65100,14.01,292600,14.00,13600,14.05,117738,14.06,415400,14.07,90852,14.08,268214,14.09,2015-06-25,11:35:51,00";
0：股票名字,1：今日开盘价,2：昨日收盘价,3：当前价格,4：今日最高价,5：今日最低价,6：买一,7：卖一,8：成交的股票数,9：成交金额,10：买一量，11：买一，12：买二量，13：买二，14：买三量，15：买三16：买四量
17：买四，18：买五量，19：买五，20：卖一量，21：卖一，(22, 23), (24, 25), (26,27), (28, 29)分别为“卖二”至“卖四的情况”，30：日期，31：时间
************************************************************************/
#define SINA_STOCK_DP "http://hq.sinajs.cn/list=s_%s"  //sh000001"
/************************************************************************
大盘指数
返回数据：var hq_str_s_sh000001="上证指数,4702.227,12.077,0.26,3199706,48988374";
指数名称，当前点数，当前价格，涨跌率，成交量（手），成交额（万元）；
************************************************************************/

//------------------网易------------------------------------------------
#define EASE_STOCK_CODE "http://api.money.126.net/data/feed/%s"  //0600026（0：深市；1：沪市）
/************************************************************************
个股实时数据
返回数据：_ntes_quote_callback({"1000002":{"code": "1000002", "percent": -0.054225, "high": 14.25, "askvol3": 469400, "askvol2": 821920, "askvol5": 213761, "askvol4": 181600, "price": 13.43, "open": 13.96, "bid5": 13.39, "bid4": 13.4, "bid3": 13.41, "bid2": 13.42, "bid1": 13.43, "low": 12.8, "updown": -0.77, "type": "SZ", "bidvol1": 616760, "status": 0, "bidvol3": 7300, "bidvol2": 34700, "symbol": "000002", "update": "2015/06/26 15:34:26", "bidvol5": 73000, "bidvol4": 48000, "volume": 307064141, "askvol1": 1343656, "ask5": 13.48, "ask4": 13.47, "ask1": 13.44, "name": "\u4e07  \u79d1\uff21", "ask3": 13.46, "ask2": 13.45, "arrow": "\u2193", "time": "2015/06/26 15:34:21", "yestclose": 14.2, "turnover": 4166709641.96} });
************************************************************************/

//-------------------和讯网---------------------------------------------
#define HEXUN_STOCK_CODE "http://bdcjhq.hexun.com/quote?s2=%s"  //000001.sh,399001.sz,399300.sz,601186.sh"
/************************************************************************
个股实时数据
返回数据：<html><head><meta http-equiv="Content-Type" content="text/html; charset=GBK"><script type='text/javascript'>document.domain='hexun.com';</script></head><body></body><script>try{parent.bdcallback({"000001.sh":{na:"上证指数",pc:"4527.779",op:"4399.933",vo:"565217874",tu:"78783574",hi:"4456.896",lo:"4139.530",la:"4192.873",type:"1",time:"2015-06-26 15:01:16"},"399001.sz":{na:"深证成指",pc:"15692.444",op:"15196.558",vo:"187071888",tu:"32521929",hi:"15229.001",lo:"14321.052",la:"14398.785",type:"1",time:"2015-06-26 15:00:47"},"399300.sz":{na:"沪深300 ",pc:"4706.516",op:"4573.872",vo:"446639790",tu:"61295947",hi:"4650.186",lo:"4278.675",la:"4336.195",type:"1",time:"2015-06-26 15:04:26"},"601186.sh":{na:"中国铁建",pc:"16.30",op:"15.90",vo:"2370709",tu:"371388",hi:"16.86",lo:"14.67",la:"14.87",type:"2",time:"2015-06-26 15:00:22",sy:"15.93",lt:"102.61",sz:"1834.59",hs:"2.31",is:"0"},"tofnow":{time:"2015-06-26 16:46:52"}})}catch(e){}</script></html>     
************************************************************************/