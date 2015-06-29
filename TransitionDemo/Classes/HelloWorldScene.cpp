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

    auto background = Sprite::create("bg1.jpg");
    background->setPosition(visibleSize/2);
    background->setScale(visibleSize.width/background->getTextureRect().getMaxX(), visibleSize.height/background->getTextureRect().getMaxY());
    addChild(background);
    
    scheduleOnce([visibleSize](float f){
        
        auto scene = Scene::create();
        auto newplayground = Sprite::create("bg2.jpg");
        newplayground->setPosition(visibleSize/2);
        newplayground->setScale(visibleSize.width/newplayground->getTextureRect().getMaxX(), visibleSize.height/newplayground->getTextureRect().getMaxY());
        scene->addChild(newplayground);
        
        //直接进行场景转换
        //Director::getInstance()->replaceScene(scene);
        
        //先变暗，再出现
        //auto transition = TransitionFade::create(1, scene);
        
        //淡入淡出效果
        //auto transition = TransitionCrossFade::create(1, scene);
        
        //角落渐变
        //auto transition = TransitionFadeBL::create(1, scene);    //向左下渐变
        //auto transition = TransitionFadeDown::create(1, scene);  //向下渐变
        //auto transition = TransitionFadeTR::create(1, scene);    //向右上渐变
        //auto transition = TransitionFadeUp::create(1, scene);    //向上渐变
        
        //翻转效果
        //auto transition = TransitionZoomFlipAngular::create(1, scene);
        //auto transition = TransitionFlipAngular::create(1, scene);
        //auto transition = TransitionFlipX::create(1, scene);
        //auto transition = TransitionFlipY::create(1, scene);
        
        //跳动
        //auto transition = TransitionJumpZoom::create(1, scene);
        
        //翻页效果。ture，false控制翻页方式
        //auto transition = TransitionPageTurn::create(1, scene, true);
        
        //移入效果，上下左右
        //auto transition = TransitionMoveInB::create(1, scene);
        //auto transition = TransitionMoveInT::create(1, scene);
        //auto transition = TransitionMoveInL::create(1, scene);
        //auto transition = TransitionMoveInR::create(1, scene);
        
        //滑动，上下左右
        //auto transition = TransitionSlideInB::create(1, scene);
        //auto transition = TransitionSlideInL::create(1, scene);
        //auto transition = TransitionSlideInT::create(1, scene);
        //auto transition = TransitionSlideInR::create(1, scene);
        
        //逆时针
        //auto transition = TransitionProgressRadialCCW::create(1, scene);
        
        //顺时针
        //auto transition = TransitionProgressRadialCW::create(1, scene);
        
        //消失
        //auto transition = TransitionProgressHorizontal::create(1, scene);
        
        //行分割
        //auto transition = TransitionSplitRows::create(1, scene);
        
        //列分割
        //auto transition = TransitionSplitCols::create(1, scene);
        
        //缩小放大
        auto transition = TransitionShrinkGrow::create(1, scene);
        
        
        Director::getInstance()->replaceScene(transition);
        
    }, 2,"text");
    
    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
