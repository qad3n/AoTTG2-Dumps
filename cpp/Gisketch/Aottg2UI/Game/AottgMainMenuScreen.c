// Type: Gisketch.Aottg2UI.Game.AottgMainMenuScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___cctor (const MethodInfo* method);
// 0x44f7cc0

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aecc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aecc0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o* __this, const MethodInfo* method);
// 0x44f7d30

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* account, const MethodInfo* method);
// 0x44f7d40

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___Build_b__6_0
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *account,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgProfileBanner_o *__this_00;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Il2CppObject *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  
  if (g_data_057aecc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileBanner);
    g_data_057aecc1 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgProfileBanner_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfileBanner);
  __this_02 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  Gisketch_Aottg2UI_Game_AottgProfileBanner___ctor(__this_00,(MethodInfo *)0x0);
  if (account != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (account,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"mainMenuOverlayBody");
    il2cpp_runtime_helper_023445d0(&"main-menu-tip-layer");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aecc2 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "mainMenuOverlayBody";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","FlexEnd","Absolute",(System_String_o *)0x0,0.0,width,
                      height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_02,style,build,"main-menu-tip-layer",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aecc3 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x44f7880

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,MethodInfo *method)

{
  if (g_data_057aecbd == '\0') {
    il2cpp_runtime_helper_023445d0(&"mainMenuOverlay");
    g_data_057aecbd = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x44f78b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aecbe == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aecbe = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","FlexStart",(System_String_o *)0x0,(System_String_o *)0x0,0.0
                      ,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen__Build (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44f7980

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen__Build
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  long lVar1;
  System_String_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_01;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  System_String_o *pSVar4;
  
  if (g_data_057aecbf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuTipPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"main.quit");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"mainMenuTipPanel");
    il2cpp_runtime_helper_023445d0(&"account-banner-layer");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aecbf = '\x01';
  }
  __this_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgMainMenuPanel);
  pSVar4 = __this_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___ctor
            ((Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *)__this_00,"main.quit",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgMainMenuTipPanel);
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_01,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Component(ui,__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = "default";
    build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (build == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 8) = build;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,build);
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","FlexStart","Absolute",(System_String_o *)0x0,0.0,width,
                        height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,1.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,pSVar4,build,"account-banner-layer",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar4 = "mainMenuTipPanel";
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuTipPanel",(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).motion = pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).motion,pGVar3);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("mainMenuTipPanel",(System_String_o *)0x0,0.12,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar2->fields).enter = pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).enter,pGVar3);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar4,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x44f7cb0

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


