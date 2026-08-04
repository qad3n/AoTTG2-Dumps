// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuTipPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___cctor (const MethodInfo* method);
// 0x44f7fa0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aecc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aecc3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o* __this, const MethodInfo* method);
// 0x44f8010

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* layer, const MethodInfo* method);
// 0x44f8020

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__6_0
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *layer,MethodInfo *method)

{
  long lVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  
  if (g_data_057aecc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"mainMenuTipPanel");
    il2cpp_runtime_helper_023445d0(&"main-menu-tip-panel");
    g_data_057aecc4 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "mainMenuTipPanel";
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
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(600.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,10.0,-10.0,
                      0.0,0.0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("mainMenuTipPanel",(System_String_o *)0x0,0.28,0.0,0.0,0x28,(MethodInfo *)0x0);
  if (layer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (layer,pSVar8,build,"main-menu-tip-panel",pGVar4,pGVar5,(MethodInfo *)0x0);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuTipPanel",(System_String_o *)0x0,0.12,0.0,0.0,0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).enter = pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).enter,pGVar5);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"main-menu-tip-text");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"main-menu-tip-bg");
    il2cpp_runtime_helper_023445d0(&"mainMenu.tipText");
    il2cpp_runtime_helper_023445d0(&"mainMenuTipBackground");
    il2cpp_runtime_helper_023445d0(&"mainMenuTipText");
    il2cpp_runtime_helper_023445d0();
    g_data_057aecc5 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(720.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(240.0,(MethodInfo *)0x0);
  pSVar8 = (System_String_o *)0x0;
  pGVar4 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Absolute",(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-80.0,30.0,
                      0.0,1.0,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (__this_00,"UI/Sprites/Elements/Brush","mainMenuTipBackground","main-menu-tip-bg",pGVar7,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (__this_00,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"mainMenuTipText",
                        "main-menu-tip-text",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar8 = (System_String_o *)0x0;
    pGVar4 = pGVar7;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar7,(MethodInfo *)0x0);
    pSVar9 = "mainMenu.tipText";
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&pGVar7->fields;
      (pGVar7->fields).direction = "mainMenu.tipText";
      il2cpp_runtime_helper_022b4080();
      pSVar8 = pSVar9;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar7;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar7);
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            "Absolute",(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,40.0,40.0,5.0,10.0,0.0,
                            16.0,0.0,1.0,(MethodInfo *)0x0);
        (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (pGVar4->fields).alignItems = pSVar8;
  il2cpp_runtime_helper_022b4080(&(pGVar4->fields).alignItems);
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip
            ((Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)pGVar4,0,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$<Build>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__6_1 (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* tip, const MethodInfo* method);
// 0x44f8270

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__6_1
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *tip,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  MethodInfo *method_00;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  
  if (g_data_057aecc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"main-menu-tip-text");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"main-menu-tip-bg");
    il2cpp_runtime_helper_023445d0(&"mainMenu.tipText");
    il2cpp_runtime_helper_023445d0(&"mainMenuTipBackground");
    il2cpp_runtime_helper_023445d0(&"mainMenuTipText");
    il2cpp_runtime_helper_023445d0();
    g_data_057aecc5 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(720.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(240.0,(MethodInfo *)0x0);
  pSVar6 = (System_String_o *)0x0;
  pGVar5 = "Column";
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Absolute",(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-80.0,30.0,
                      0.0,1.0,(MethodInfo *)0x0);
  if (tip != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (tip,"UI/Sprites/Elements/Brush","mainMenuTipBackground","main-menu-tip-bg",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (tip,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"mainMenuTipText",
                        "main-menu-tip-text",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar6 = (System_String_o *)0x0;
    pGVar5 = pGVar3;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
    pSVar7 = "mainMenu.tipText";
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&pGVar3->fields;
      (pGVar3->fields).direction = "mainMenu.tipText";
      il2cpp_runtime_helper_022b4080();
      pSVar6 = pSVar7;
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).contentLayout = pGVar3;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar3);
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            "Absolute",(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,40.0,40.0,5.0,10.0,0.0,
                            16.0,0.0,1.0,(MethodInfo *)0x0);
        (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).search,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (pGVar5->fields).alignItems = pSVar6;
  il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignItems);
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController__ShowRandomTip
            ((Gisketch_Aottg2UI_Game_AottgMainMenuTipPanelController_o *)pGVar5,0,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel__Build (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44f7da0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel__Build
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Il2CppObject *__this_00;
  
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
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,build,"main-menu-tip-layer",layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aecc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aecc3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o* __this, const MethodInfo* method);
// 0x44f7ca0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


