#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

//    auto role = Sprite::create("1.png");
//    role->setPosition(visibleSize/2);
//    role->setScale(2);
//    addChild(role);
    
//    role->setPositionX(100);
    
    //移动到某个位置
//    role->runAction(MoveTo::create(2, Vec2(visibleSize.width-100,visibleSize.height/2)));
    
    //移动一个向量的位置
//    role->runAction(MoveBy::create(2, Vec2(500,0)));
    
    //顺序执行两个动画
//    auto move1 = MoveBy::create(2, Vec2(800,0));
//    auto move2 = move1->reverse();
//    role->runAction(Sequence::create(move1,move2, NULL));
    
    //同时执行两个动作
//    auto move1 = MoveBy::create(2, Vec2(800,0));
    //缩放
//    auto move2 = ScaleTo::create(2, 3);
//    role->runAction(Spawn::create(move1,move2, NULL));
    
    //跳到一个位置
//    role->runAction(JumpTo::create(2, Vec2(visibleSize.width-100,visibleSize.height/2), 80, 3));
    
    //跳跃一个向量的距离
//    role->runAction(JumpBy::create(2, Vec2(800,0), 80, 3));
    
    //贝塞尔曲线 当使用CCBezierTo时，ccBezierConfig的点都是绝对坐标点。但如果使用CCBezierBy，ccBezierConfig的点都是相对坐标点
//    ccBezierConfig ccb;
//    ccb.endPosition = Vec2(visibleSize.width-100,visibleSize.height/2);
//    ccb.controlPoint_1 = Vec2(300,500);
//    ccb.controlPoint_2 = Vec2(600,200);
//    role->runAction(BezierTo::create(2, ccb));
//    role->runAction(BezierBy::create(2, ccb));
    
    //缩放
//    role->runAction(ScaleBy::create(2, 3));
    
    //旋转，有3个create重载方法，
//    role->runAction(RotateTo::create(2, 180));
//    role->runAction(RotateTo::create(2, 90,180));
//    role->runAction(RotateTo::create(2, Vec3(80,60,70)));
//    role->runAction(RotateBy::create(2, 180));
    
    //闪烁
//    role->runAction(Blink::create(2, 3));
    
    //色调变换
//    role->runAction(TintTo::create(2, 1, 0, 0));
//    role->runAction(TintBy::create(2, 1, 0, 0));
    
    //由无变亮
//    role->runAction(FadeIn::create(2));
    
    //由亮变无
//    role->runAction(FadeOut::create(2));
    
    //变暗到，第二个参数为亮度
//    role->runAction(FadeTo::create(2, 50));
    
    
    //3D特效
    
    auto role = NodeGrid::create();
    role->addChild(Sprite::create("1.png"));
    role->setPosition(visibleSize/2);
    role->setScale(2);
    addChild(role);
    
    //抖动效果
//    role->runAction(Shaky3D::create(10, Size(50,50), 5, false));
    
    //破碎抖动
//    role->runAction(ShakyTiles3D::create(10, Size(50,50), 5, false));
    
    //爆炸效果
//    role->runAction(ShuffleTiles::create(2, Size(50,50), 5));
    
    //破碎抖动+爆炸
//    auto shaky = ShakyTiles3D::create(2, Size(50,50), 5, false);
//    auto shuffle = ShuffleTiles::create(1, Size(50,50), 5);
//    role->runAction(Sequence::create(shaky,shuffle, NULL));
    
    //方块消失
//    role->runAction(TurnOffTiles::create(3, Size(50,50), 10));
    
    //波浪效果
//    role->runAction(Waves3D::create(10, Size(50,50), 10, 20));
    
    //翻转效果
//    role->setPosition(300,visibleSize.height/2);
//    role->runAction(FlipX3D::create(2));
    
//    auto lens = Lens3D::create(10, Size(50,50), Vec2(visibleSize.width/2,visibleSize.height/2), 30);
//    lens->setPosition(visibleSize/2);
//    CCLOG("%f", lens->getLensEffect());
//    role->runAction(lens);
    
//    role->runAction(Ripple3D::create(10, Size(50,50), Vec2(0,0), 5, 5, 40));
    
    //液体效果
//    role->runAction(Liquid::create(10, Size(50,50), 5, 40));
    
    //扭动旋转
//    role->runAction(Twirl::create(5, Size(50,50), Vec2(visibleSize.width/2,visibleSize.height/2), 1, 5));

    //破碎效果
//    role->runAction(ShatteredTiles3D::create(3, Size(50,50), 10, true));
    
    //淡入淡出  百叶窗
//    role->runAction(FadeOutTRTiles::create(5, Size(50,50)));
//    role->runAction(FadeOutUpTiles::create(5, Size(50,50)));
//    role->runAction(FadeOutDownTiles::create(5, Size(50,50)));
//    role->runAction(FadeOutBLTiles::create(5, Size(50,50)));
    
    //分行列消失
//    role->runAction(SplitRows::create(3, 20));
//    role->runAction(SplitCols::create(3, 20));
    
    //翻页效果
    role->runAction(PageTurn3D::create(3, Size(50,50)));
    
    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
