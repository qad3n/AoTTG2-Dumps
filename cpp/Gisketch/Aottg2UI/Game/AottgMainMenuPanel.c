// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.MainMenuOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this, System_String_o* label, System_String_o* searchTitle, System_String_o* localeKey, System_String_o* actionId, System_String_o* icon, const MethodInfo* method);
// 0x44f6200

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this,System_String_o *label,
               System_String_o *searchTitle,System_String_o *localeKey,System_String_o *actionId,
               System_String_o *icon,MethodInfo *method)

{
  label->klass = (System_String_c *)searchTitle;
  il2cpp_runtime_helper_022b4080();
  label->monitor = localeKey;
  il2cpp_runtime_helper_022b4080(&label->monitor,localeKey);
  label->fields = (System_String_Fields)actionId;
  il2cpp_runtime_helper_022b4080(&label->fields,actionId);
  label[1].klass = (System_String_c *)icon;
  il2cpp_runtime_helper_022b4080(label + 1,icon);
  label[1].monitor = method;
  il2cpp_runtime_helper_022b4080(&label[1].monitor,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.MainMenuOption$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption__get_Id (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this, const MethodInfo* method);
// 0x44f4f20

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption__get_Id
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  undefined8 in_RSI;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if (g_data_057aeca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057aeca0 = '\x01';
  }
  if ((System_String_o *)method->methodPointer != (System_String_o *)0x0) {
    in_RSI = 0;
    pSVar4 = System_String__ToLowerInvariant((System_String_o *)method->methodPointer,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_o *)0x0) {
      pSVar4 = System_String__Replace_3af9030(pSVar4," ","-",(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aec9d = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar7 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
    lVar6 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    lVar7 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
    lVar6 = TypeInfo_AottgMainMenuPanel;
  }
  if (lVar7 != 0) {
    TypeInfo_AottgMainMenuPanel = lVar6;
    return (System_String_o *)(ulong)(*(int *)(lVar7 + 0x18) - 1);
  }
  TypeInfo_AottgMainMenuPanel = lVar6;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchLocalizer);
    g_data_057aec9e = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    plVar2 = *(long **)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 0x10);
    lVar7 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    plVar2 = *(long **)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 0x10);
    lVar7 = TypeInfo_AottgMainMenuPanel;
  }
  TypeInfo_AottgMainMenuPanel = lVar7;
  if (plVar2 == (long *)0x0) {
    auVar8 = il2cpp_runtime_helper_022b2c90();
label_044f5112:
    puVar5 = (undefined8 *)(auVar8._0_8_ + (long)*(int *)(auVar8._8_8_ + 8 + lVar7) * 0x10 + 0x138);
  }
  else {
    lVar3 = *plVar2;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      auVar8._8_8_ = *(long *)(lVar3 + 0xb0);
      auVar8._0_8_ = lVar3;
      lVar7 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar7) == TypeInfo_IGisketchLocalizer) goto label_044f5112;
        lVar7 = lVar7 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar7);
    }
    puVar5 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IGisketchLocalizer,0);
  }
  pSVar4 = (System_String_o *)(*(code *)*puVar5)(plVar2,lVar6,in_RSI,puVar5[1],(code *)*puVar5);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.FooterIcon$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this, System_String_o* label, System_String_o* localeKey, System_String_o* sprite, System_String_o* actionId, const MethodInfo* method);
// 0x44f6270

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this,System_String_o *label,
               System_String_o *localeKey,System_String_o *sprite,System_String_o *actionId,MethodInfo *method
               )

{
  label->klass = (System_String_c *)localeKey;
  il2cpp_runtime_helper_022b4080();
  label->monitor = sprite;
  il2cpp_runtime_helper_022b4080(&label->monitor,sprite);
  label->fields = (System_String_Fields)actionId;
  il2cpp_runtime_helper_022b4080(&label->fields,actionId);
  label[1].klass = (System_String_c *)method;
  il2cpp_runtime_helper_022b4080(label + 1,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.FooterIcon$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon__get_Id (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this, const MethodInfo* method);
// 0x44f62d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon__get_Id
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *__this_00;
  
  if ((System_String_o *)method->methodPointer != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLowerInvariant((System_String_o *)method->methodPointer,(MethodInfo *)0x0);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeca1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeca1 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___cctor (const MethodInfo* method);
// 0x44f62f0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aeca1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeca1 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, const MethodInfo* method);
// 0x44f6360

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$<Build>b__28_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__28_1 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* logo, const MethodInfo* method);
// 0x44f6370

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__28_1
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *logo
               ,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  System_String_o *actionId;
  code *pcVar3;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option;
  System_Action_AottgUi__o *style;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  System_String_o *label;
  System_String_o *pSVar8;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  System_Action_AottgUi__o *pSVar9;
  long lVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar11;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  uint uVar12;
  ulong uVar13;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *fallback;
  System_Action_AottgUi__o *buttons;
  System_Action_AottgUi__o *style_00;
  System_String_o *pSVar14;
  long lVar15;
  
  if (g_data_057aeca2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"UI/AoTTG/MainMenu/LogoTextOnly");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"mainMenuLogoBlades");
    il2cpp_runtime_helper_023445d0(&"main-menu-logo-text");
    il2cpp_runtime_helper_023445d0(&"mainMenuLogoText");
    il2cpp_runtime_helper_023445d0(&"UI/AoTTG/MainMenu/LogoBlades");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    il2cpp_runtime_helper_023445d0(&"mainMenuLogo");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeca2 = '\x01';
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("mainMenuLogoBlades",(System_String_o *)0x0,0.24000001,0.030000001,0.0,2,(MethodInfo *)0x0);
  if (logo != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (logo,"UI/AoTTG/MainMenu/LogoBlades","mainMenuLogo","main-menu-logo-blades",pGVar6,pGVar7,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                        (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuLogoText",(System_String_o *)0x0,0.24000001,0.030000001,0.0,1,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (logo,"UI/AoTTG/MainMenu/LogoTextOnly","mainMenuLogo","main-menu-logo-text",pGVar6,pGVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = extraout_RDX;
  __this_01 = __this_00;
  if (g_data_057aeca3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"main-menu-footer-");
    il2cpp_runtime_helper_023445d0(&"mainMenuFooterIconIntro");
    il2cpp_runtime_helper_023445d0(&"main-menu-footer");
    il2cpp_runtime_helper_023445d0(&"mainMenuFooterSpriteButton");
    g_data_057aeca3 = '\x01';
    pMVar11 = extraout_RDX_00;
  }
  uVar12 = 0;
  iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar11 = extraout_RDX_01;
    }
    lVar15 = *(long *)((long)TypeInfo_AottgMainMenuPanel[7].fields + 8);
    pSVar8 = TypeInfo_AottgMainMenuPanel;
    if (lVar15 == 0) break;
    if (*(int *)(lVar15 + 0x18) <= (int)uVar12) {
      return;
    }
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar15 = *(long *)((long)TypeInfo_AottgMainMenuPanel[7].fields + 8);
      pMVar11 = extraout_RDX_02;
      if (lVar15 == 0) break;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar12) goto label_044f68ae;
    lVar10 = (long)(int)uVar12 * 0x20;
    fallback = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(lVar15 + 0x20 + lVar10);
    pSVar8 = *(System_String_o **)(lVar15 + 0x28 + lVar10);
    pSVar14 = *(System_String_o **)(lVar15 + 0x30 + lVar10);
    actionId = *(System_String_o **)(lVar15 + 0x38 + lVar10);
    __this_01 = fallback;
    label = Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize(pSVar8,(System_String_o *)fallback,pMVar11);
    if (fallback == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    pSVar8 = System_String__ToLowerInvariant((System_String_o *)fallback,(MethodInfo *)0x0);
    id = System_String__Concat_3ae5ba0("main-menu-footer-",pSVar8,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    __this_01 = "main-menu-footer";
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuFooterIconIntro",(System_String_o *)"main-menu-footer",0.120000005,0.024,0.009000001,
                        uVar12 + 0x14,(MethodInfo *)0x0);
    pSVar8 = (System_String_o *)0x0;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    node = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     (__this_00,pSVar14,label,actionId,id,"mainMenuFooterSpriteButton",pGVar6,pGVar7,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
              (node,(System_String_o *)fallback,(System_String_o *)0x0,(System_String_o *)0x0,
               (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0,(MethodInfo *)0x0);
    uVar12 = uVar12 + 1;
    iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
    pMVar11 = extraout_RDX_03;
    __this_01 = fallback;
  }
  il2cpp_runtime_helper_022b2c90();
label_044f68ae:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aeca4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__28_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__28_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"main-menu-logo-slot");
    il2cpp_runtime_helper_023445d0(&"main-menu-panel-visual");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"mainMenuLogoSlot");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"mainMenuPanel");
    il2cpp_runtime_helper_023445d0(&"UI/AoTTG/MainMenu/MainMenuPanel");
    il2cpp_runtime_helper_023445d0(&"main-menu-buttons");
    il2cpp_runtime_helper_023445d0(&"main-menu-footer");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeca4 = '\x01';
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(979.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(1080.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  buttons = (System_Action_AottgUi__o *)0x0;
  pSVar14 = "mainMenuPanel";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("mainMenuPanel",(System_String_o *)0x0,0.33600003,0.0,0.0,0,(MethodInfo *)0x0);
  if (__this_01 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_044f6fd6;
  Gisketch_Aottg2UI_Code_AottgUi__Image
            (__this_01,"UI/AoTTG/MainMenu/MainMenuPanel","mainMenuPanel","main-menu-panel-visual",pGVar6,pGVar7,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  buttons = "mainMenuLogoSlot";
  pSVar9 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar9 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar15 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar15 + 8) = pSVar9;
    il2cpp_runtime_helper_022b4080(lVar15 + 8,pSVar9);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,70.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (__this_01,(System_String_o *)buttons,pSVar9,"main-menu-logo-slot",pGVar6,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  style_00 = "default";
  pSVar9 = pSVar8[1].monitor;
  if (pSVar9 == (System_Action_AottgUi__o *)0x0) {
    pSVar9 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar8[1].monitor = pSVar9;
    buttons = pSVar9;
    il2cpp_runtime_helper_022b4080();
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points((float)(pSVar8->fields)._stringLength,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = TypeInfo_AottgMainMenuPanel;
  if (*(long *)TypeInfo_AottgMainMenuPanel[7].fields == 0) goto label_044f6fd6;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points
                     ((float)(*(int *)(*(long *)TypeInfo_AottgMainMenuPanel[7].fields + 0x18) + -1) * 74.0 + 118.0,
                      (MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart","Absolute",(System_String_o *)0x0,0.0
                      ,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-86.0,-360.0,
                      0.0,1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (__this_01,(System_String_o *)style_00,pSVar9,"main-menu-buttons",pGVar6,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "default";
  pSVar9 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar9 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar15 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar15 + 0x10) = pSVar9;
    style_00 = pSVar9;
    il2cpp_runtime_helper_022b4080(lVar15 + 0x10);
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) != 0) goto label_044f6de5;
label_044f6f85:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aec9d != '\0') goto label_044f6df2;
label_044f6f97:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aec9d = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  }
  else {
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) == 0) goto label_044f6f85;
label_044f6de5:
    if (g_data_057aec9d == '\0') goto label_044f6f97;
label_044f6df2:
    iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar15 = *(long *)((long)TypeInfo_AottgMainMenuPanel[7].fields + 8);
    buttons = style_00;
    pSVar14 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    lVar15 = *(long *)((long)TypeInfo_AottgMainMenuPanel[7].fields + 8);
    buttons = style_00;
    pSVar14 = TypeInfo_AottgMainMenuPanel;
  }
  TypeInfo_AottgMainMenuPanel = pSVar14;
  if (lVar15 != 0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points
                       ((float)(*(int *)(lVar15 + 0x18) + -1) * 10.0 + (float)*(int *)(lVar15 + 0x18) * 48.0,
                        (MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center","Absolute",(System_String_o *)0x0,
                        10.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,22.0,
                        -1018.0,0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_01,(System_String_o *)style,pSVar9,(System_String_o *)"main-menu-footer",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_044f6fd6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeca5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aeca5 = '\x01';
  }
  lVar15 = 0x20;
  uVar13 = 0;
  iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar10 = *(long *)TypeInfo_AottgMainMenuPanel[7].fields;
    if (lVar10 == 0) break;
    if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar13) {
      return;
    }
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar10 = *(long *)TypeInfo_AottgMainMenuPanel[7].fields;
      if (lVar10 == 0) break;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar13) goto label_044f7114;
    pMVar11 = *(MethodInfo **)(lVar10 + 0x20 + lVar15);
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar15);
    if (pSVar14[1].klass == (System_String_c *)0x0) break;
    option.fields.LocaleKey = (System_String_o *)*puVar1;
    option.fields._0_16_ = *(undefined1 (*) [16])(lVar10 + lVar15);
    option.fields.ActionId = (System_String_o *)puVar1[1];
    option.fields.Icon = (System_String_o *)pMVar11;
    Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)buttons,option,(int32_t)uVar13,
               (float)(pSVar14->fields)._stringLength,(System_String_o *)((pSVar14[1].klass)->_1).name,pMVar11
              );
    uVar13 = uVar13 + 1;
    lVar15 = lVar15 + 0x28;
    iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  }
  il2cpp_runtime_helper_022b2c90();
label_044f7114:
  il2cpp_runtime_helper_022b2ca0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$<Build>b__28_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__28_3 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x44f6610

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__28_3
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  System_String_o *actionId;
  MethodInfo *method_00;
  code *pcVar3;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option;
  System_Action_AottgUi__o *style;
  System_String_o *label;
  System_String_o *pSVar4;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  System_Action_AottgUi__o *pSVar9;
  long lVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  uint uVar11;
  ulong uVar12;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *fallback;
  System_Action_AottgUi__o *buttons;
  System_Action_AottgUi__o *style_00;
  System_String_o *pSVar13;
  long lVar14;
  
  __this_00 = footer;
  if (g_data_057aeca3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"main-menu-footer-");
    il2cpp_runtime_helper_023445d0(&"mainMenuFooterIconIntro");
    il2cpp_runtime_helper_023445d0(&"main-menu-footer");
    il2cpp_runtime_helper_023445d0(&"mainMenuFooterSpriteButton");
    g_data_057aeca3 = '\x01';
    method = extraout_RDX;
  }
  uVar11 = 0;
  iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      method = extraout_RDX_00;
    }
    lVar14 = *(long *)((long)TypeInfo_AottgMainMenuPanel[7].fields + 8);
    pSVar4 = TypeInfo_AottgMainMenuPanel;
    if (lVar14 == 0) break;
    if (*(int *)(lVar14 + 0x18) <= (int)uVar11) {
      return;
    }
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar14 = *(long *)((long)TypeInfo_AottgMainMenuPanel[7].fields + 8);
      method = extraout_RDX_01;
      if (lVar14 == 0) break;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar11) goto label_044f68ae;
    lVar10 = (long)(int)uVar11 * 0x20;
    fallback = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(lVar14 + 0x20 + lVar10);
    pSVar4 = *(System_String_o **)(lVar14 + 0x28 + lVar10);
    pSVar13 = *(System_String_o **)(lVar14 + 0x30 + lVar10);
    actionId = *(System_String_o **)(lVar14 + 0x38 + lVar10);
    __this_00 = fallback;
    label = Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize(pSVar4,(System_String_o *)fallback,method);
    if (fallback == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    pSVar4 = System_String__ToLowerInvariant((System_String_o *)fallback,(MethodInfo *)0x0);
    id = System_String__Concat_3ae5ba0("main-menu-footer-",pSVar4,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar5,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    __this_00 = "main-menu-footer";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuFooterIconIntro",(System_String_o *)"main-menu-footer",0.120000005,0.024,0.009000001,
                        uVar11 + 0x14,(MethodInfo *)0x0);
    pSVar4 = (System_String_o *)0x0;
    if (footer == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    node = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     (footer,pSVar13,label,actionId,id,"mainMenuFooterSpriteButton",pGVar7,pGVar8,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
              (node,(System_String_o *)fallback,(System_String_o *)0x0,(System_String_o *)0x0,
               (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0,(MethodInfo *)0x0);
    uVar11 = uVar11 + 1;
    iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
    method = extraout_RDX_02;
    __this_00 = fallback;
  }
  il2cpp_runtime_helper_022b2c90();
label_044f68ae:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aeca4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__28_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__28_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"main-menu-logo-slot");
    il2cpp_runtime_helper_023445d0(&"main-menu-panel-visual");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"mainMenuLogoSlot");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"mainMenuPanel");
    il2cpp_runtime_helper_023445d0(&"UI/AoTTG/MainMenu/MainMenuPanel");
    il2cpp_runtime_helper_023445d0(&"main-menu-buttons");
    il2cpp_runtime_helper_023445d0(&"main-menu-footer");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeca4 = '\x01';
  }
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(979.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(1080.0,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                      (System_String_o *)0x0,0.0,pGVar5,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  buttons = (System_Action_AottgUi__o *)0x0;
  pSVar13 = "mainMenuPanel";
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("mainMenuPanel",(System_String_o *)0x0,0.33600003,0.0,0.0,0,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_044f6fd6;
  Gisketch_Aottg2UI_Code_AottgUi__Image
            (__this_00,"UI/AoTTG/MainMenu/MainMenuPanel","mainMenuPanel","main-menu-panel-visual",pGVar7,pGVar8,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  buttons = "mainMenuLogoSlot";
  pSVar9 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar9 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar14 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar14 + 8) = pSVar9;
    il2cpp_runtime_helper_022b4080(lVar14 + 8,pSVar9);
  }
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar5,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,70.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (__this_00,(System_String_o *)buttons,pSVar9,"main-menu-logo-slot",pGVar7,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  style_00 = "default";
  pSVar9 = pSVar4[1].monitor;
  if (pSVar9 == (System_Action_AottgUi__o *)0x0) {
    pSVar9 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar4[1].monitor = pSVar9;
    buttons = pSVar9;
    il2cpp_runtime_helper_022b4080();
  }
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points((float)(pSVar4->fields)._stringLength,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = TypeInfo_AottgMainMenuPanel;
  if (*(long *)TypeInfo_AottgMainMenuPanel[7].fields == 0) goto label_044f6fd6;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points
                     ((float)(*(int *)(*(long *)TypeInfo_AottgMainMenuPanel[7].fields + 0x18) + -1) * 74.0 + 118.0,
                      (MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart","Absolute",(System_String_o *)0x0,0.0
                      ,pGVar5,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-86.0,-360.0,
                      0.0,1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (__this_00,(System_String_o *)style_00,pSVar9,"main-menu-buttons",pGVar7,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "default";
  pSVar9 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar9 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar14 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar14 + 0x10) = pSVar9;
    style_00 = pSVar9;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x10);
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) != 0) goto label_044f6de5;
label_044f6f85:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aec9d != '\0') goto label_044f6df2;
label_044f6f97:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aec9d = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  }
  else {
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) == 0) goto label_044f6f85;
label_044f6de5:
    if (g_data_057aec9d == '\0') goto label_044f6f97;
label_044f6df2:
    iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar14 = *(long *)((long)TypeInfo_AottgMainMenuPanel[7].fields + 8);
    buttons = style_00;
    pSVar13 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    lVar14 = *(long *)((long)TypeInfo_AottgMainMenuPanel[7].fields + 8);
    buttons = style_00;
    pSVar13 = TypeInfo_AottgMainMenuPanel;
  }
  TypeInfo_AottgMainMenuPanel = pSVar13;
  if (lVar14 != 0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points
                       ((float)(*(int *)(lVar14 + 0x18) + -1) * 10.0 + (float)*(int *)(lVar14 + 0x18) * 48.0,
                        (MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center","Absolute",(System_String_o *)0x0,
                        10.0,pGVar5,pGVar6,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,22.0,
                        -1018.0,0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this_00,(System_String_o *)style,pSVar9,(System_String_o *)"main-menu-footer",pGVar7,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_044f6fd6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeca5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aeca5 = '\x01';
  }
  lVar14 = 0x20;
  uVar12 = 0;
  iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar10 = *(long *)TypeInfo_AottgMainMenuPanel[7].fields;
    if (lVar10 == 0) break;
    if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar12) {
      return;
    }
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar10 = *(long *)TypeInfo_AottgMainMenuPanel[7].fields;
      if (lVar10 == 0) break;
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar12) goto label_044f7114;
    method_00 = *(MethodInfo **)(lVar10 + 0x20 + lVar14);
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar14);
    if (pSVar13[1].klass == (System_String_c *)0x0) break;
    option.fields.LocaleKey = (System_String_o *)*puVar1;
    option.fields._0_16_ = *(undefined1 (*) [16])(lVar10 + lVar14);
    option.fields.ActionId = (System_String_o *)puVar1[1];
    option.fields.Icon = (System_String_o *)method_00;
    Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)buttons,option,(int32_t)uVar12,
               (float)(pSVar13->fields)._stringLength,(System_String_o *)((pSVar13[1].klass)->_1).name,
               method_00);
    uVar12 = uVar12 + 1;
    lVar14 = lVar14 + 0x28;
    iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  }
  il2cpp_runtime_helper_022b2c90();
label_044f7114:
  il2cpp_runtime_helper_022b2ca0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass28_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x44f4ad0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass28_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* menu, const MethodInfo* method);
// 0x44f68c0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *menu,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  MethodInfo *method_00;
  code *pcVar3;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option;
  System_Action_AottgUi__o *style;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  System_Action_AottgUi__o *pSVar7;
  long lVar8;
  ulong uVar9;
  System_Action_AottgUi__o *buttons;
  System_Action_AottgUi__o *style_00;
  System_String_o *pSVar10;
  long lVar11;
  
  if (g_data_057aeca4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__28_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__28_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"main-menu-logo-slot");
    il2cpp_runtime_helper_023445d0(&"main-menu-panel-visual");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"mainMenuLogoSlot");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"mainMenuPanel");
    il2cpp_runtime_helper_023445d0(&"UI/AoTTG/MainMenu/MainMenuPanel");
    il2cpp_runtime_helper_023445d0(&"main-menu-buttons");
    il2cpp_runtime_helper_023445d0(&"main-menu-footer");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeca4 = '\x01';
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(979.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(1080.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  buttons = (System_Action_AottgUi__o *)0x0;
  pSVar10 = "mainMenuPanel";
  enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                    ("mainMenuPanel",(System_String_o *)0x0,0.33600003,0.0,0.0,0,(MethodInfo *)0x0);
  if (menu == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_044f6fd6;
  Gisketch_Aottg2UI_Code_AottgUi__Image
            (menu,"UI/AoTTG/MainMenu/MainMenuPanel","mainMenuPanel","main-menu-panel-visual",pGVar6,enter,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  buttons = "mainMenuLogoSlot";
  pSVar7 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar11 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar11 + 8) = pSVar7;
    il2cpp_runtime_helper_022b4080(lVar11 + 8,pSVar7);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,70.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (menu,(System_String_o *)buttons,pSVar7,"main-menu-logo-slot",pGVar6,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  style_00 = "default";
  pSVar7 = (__this->fields).__9__2;
  if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    (__this->fields).__9__2 = pSVar7;
    buttons = pSVar7;
    il2cpp_runtime_helper_022b4080();
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields).brushWidth,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = TypeInfo_AottgMainMenuPanel;
  if (*(long *)TypeInfo_AottgMainMenuPanel[7].fields == 0) goto label_044f6fd6;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points
                     ((float)(*(int *)(*(long *)TypeInfo_AottgMainMenuPanel[7].fields + 0x18) + -1) * 74.0 + 118.0,
                      (MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart","Absolute",(System_String_o *)0x0,0.0
                      ,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-86.0,-360.0,
                      0.0,1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (menu,(System_String_o *)style_00,pSVar7,"main-menu-buttons",pGVar6,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "default";
  pSVar7 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar11 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar11 + 0x10) = pSVar7;
    style_00 = pSVar7;
    il2cpp_runtime_helper_022b4080(lVar11 + 0x10);
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) != 0) goto label_044f6de5;
label_044f6f85:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aec9d != '\0') goto label_044f6df2;
label_044f6f97:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aec9d = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  }
  else {
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) == 0) goto label_044f6f85;
label_044f6de5:
    if (g_data_057aec9d == '\0') goto label_044f6f97;
label_044f6df2:
    iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar11 = *(long *)((long)TypeInfo_AottgMainMenuPanel[7].fields + 8);
    buttons = style_00;
    pSVar10 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    lVar11 = *(long *)((long)TypeInfo_AottgMainMenuPanel[7].fields + 8);
    buttons = style_00;
    pSVar10 = TypeInfo_AottgMainMenuPanel;
  }
  TypeInfo_AottgMainMenuPanel = pSVar10;
  if (lVar11 != 0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points
                       ((float)(*(int *)(lVar11 + 0x18) + -1) * 10.0 + (float)*(int *)(lVar11 + 0x18) * 48.0,
                        (MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center","Absolute",(System_String_o *)0x0,
                        10.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,22.0,
                        -1018.0,0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (menu,(System_String_o *)style,pSVar7,"main-menu-footer",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_044f6fd6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeca5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aeca5 = '\x01';
  }
  lVar11 = 0x20;
  uVar9 = 0;
  iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar8 = *(long *)TypeInfo_AottgMainMenuPanel[7].fields;
    if (lVar8 == 0) break;
    if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar9) {
      return;
    }
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar8 = *(long *)TypeInfo_AottgMainMenuPanel[7].fields;
      if (lVar8 == 0) break;
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar9) goto label_044f7114;
    method_00 = *(MethodInfo **)(lVar8 + 0x20 + lVar11);
    puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar11);
    if (pSVar10[1].klass == (System_String_c *)0x0) break;
    option.fields.LocaleKey = (System_String_o *)*puVar1;
    option.fields._0_16_ = *(undefined1 (*) [16])(lVar8 + lVar11);
    option.fields.ActionId = (System_String_o *)puVar1[1];
    option.fields.Icon = (System_String_o *)method_00;
    Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)buttons,option,(int32_t)uVar9,
               (float)(pSVar10->fields)._stringLength,(System_String_o *)((pSVar10[1].klass)->_1).name,
               method_00);
    uVar9 = uVar9 + 1;
    lVar11 = lVar11 + 0x28;
    iVar2 = *(int *)((long)&TypeInfo_AottgMainMenuPanel[9].monitor + 4);
  }
  il2cpp_runtime_helper_022b2c90();
label_044f7114:
  il2cpp_runtime_helper_022b2ca0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass28_0$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___Build_b__2 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* buttons, const MethodInfo* method);
// 0x44f6fe0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___Build_b__2
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *buttons,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *pGVar3;
  code *pcVar4;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (g_data_057aeca5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aeca5 = '\x01';
  }
  lVar7 = 0x20;
  uVar6 = 0;
  iVar2 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar5 = **(long **)(TypeInfo_AottgMainMenuPanel + 0xb8);
    if (lVar5 == 0) break;
    if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar6) {
      return;
    }
    if (*(int *)(TypeInfo_AottgMainMenuPanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar5 = **(long **)(TypeInfo_AottgMainMenuPanel + 0xb8);
      if (lVar5 == 0) break;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar6) goto label_044f7114;
    method_00 = *(MethodInfo **)(lVar5 + 0x20 + lVar7);
    puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar7);
    pGVar3 = (__this->fields).__4__this;
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *)0x0) break;
    option.fields.LocaleKey = (System_String_o *)*puVar1;
    option.fields._0_16_ = *(undefined1 (*) [16])(lVar5 + lVar7);
    option.fields.ActionId = (System_String_o *)puVar1[1];
    option.fields.Icon = (System_String_o *)method_00;
    Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption
              (buttons,option,(int32_t)uVar6,(__this->fields).brushWidth,(pGVar3->fields)._quitActionId,
               method_00);
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 0x28;
    iVar2 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  il2cpp_runtime_helper_022b2c90();
label_044f7114:
  il2cpp_runtime_helper_022b2ca0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x44f7120

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$<AddOption>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___AddOption_b__0 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x44f7130

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___AddOption_b__0
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *actionId;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this_00;
  uint uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *fallback;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar5;
  undefined8 unaff_RBX;
  Gisketch_Aottg2UI_Code_AottgUi_o *key;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  System_String_o *unaff_R15;
  
  if (g_data_057aecb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&"main.quit");
    il2cpp_runtime_helper_023445d0(&"UI/Sprites/Elements/Brush");
    il2cpp_runtime_helper_023445d0(&"main-menu-option-");
    il2cpp_runtime_helper_023445d0(&"mainMenuBrushButton");
    g_data_057aecb6 = '\x01';
  }
  uVar1 = System_String__op_Equality((__this->fields).option.fields.ActionId,"main.quit",(MethodInfo *)0x0);
  actionId = (&(__this->fields).option.fields.ActionId)[(ulong)(uVar1 & 0xff) * 2];
  fallback = (__this->fields).option.fields.Label;
  key = (Gisketch_Aottg2UI_Code_AottgUi_o *)(__this->fields).option.fields.LocaleKey;
  if (*(int *)(TypeInfo_AottgMainMenuPanel + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize
                     ((System_String_o *)key,fallback,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_o *)0x0) {
    pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
    __this_00.fields.SearchTitle = (System_String_o *)unaff_R12;
    __this_00.fields.Label = (System_String_o *)unaff_RBX;
    __this_00.fields.LocaleKey = (System_String_o *)unaff_R13;
    __this_00.fields.ActionId = (System_String_o *)unaff_R14;
    __this_00.fields.Icon = unaff_R15;
    fallback = Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption__get_Id
                         (__this_00,(MethodInfo *)&__this->fields);
    key = "main-menu-option-";
    id = System_String__Concat_3ae5ba0((System_String_o *)"main-menu-option-",fallback,(MethodInfo *)0x0);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      fallback = (System_String_o *)0x3;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (row,3,pSVar3,actionId,id,(System_String_o *)0x0,(__this->fields).enter,
                          (__this->fields).option.fields.Icon,(MethodInfo *)0x0);
      key = row;
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).style = "mainMenuBrushButton";
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).style);
        (pGVar4->fields).sprite = "UI/Sprites/Elements/Brush";
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).sprite);
        bVar2 = System_String__IsNullOrEmpty((__this->fields).option.fields.Icon,(MethodInfo *)0x0);
        *(byte *)&(pGVar4->fields).hasIcon = (byte)bVar2 ^ 1;
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Search
                           ((__this->fields).option.fields.SearchTitle,(System_String_o *)0x0,0,
                            (__this->fields).option.fields.Icon,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0,(MethodInfo *)0x0);
        (pGVar4->fields).popover = (System_String_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).popover,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (key->fields)._ownerId = fallback;
  il2cpp_runtime_helper_022b4080(&(key->fields)._ownerId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o* __this, System_String_o* quitActionId, const MethodInfo* method);
// 0x44f47e0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *__this,System_String_o *quitActionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._quitActionId = quitActionId;
  il2cpp_runtime_helper_022b4080(&__this->fields,quitActionId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Build (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44f4810

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Build
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *__this_00;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  System_String_o *__this_01;
  MethodInfo *method_00;
  float fVar3;
  
  if (g_data_057aec9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass28_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"main-menu-panel");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"mainMenuPanel");
    g_data_057aec9a = '\x01';
  }
  __this_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass28_0);
  __this_01 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_String_o *)0x0) {
    __this_00[1].klass = (System_String_c *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
    method_00 = TypeInfo_AottgMainMenuPanel;
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar3 = Gisketch_Aottg2UI_Game_AottgMainMenuPanel__BrushWidth(method_00);
    (__this_00->fields)._stringLength = (int32_t)fVar3;
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(979.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"FlexStart","FlexStart",(System_String_o *)0x0,
                        0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    __this_01 = "Column";
    contentLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                    (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,36.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                    1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ScaleBox
                         (ui,"main-menu-panel",979.0,1080.0,build,"main-menu-panel",layout,contentLayout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      __this_01 = "mainMenuPanel";
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("mainMenuPanel",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).enter = pGVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).enter,pGVar2);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$AddOption
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption (Gisketch_Aottg2UI_Code_AottgUi_o* buttons, Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option, int32_t index, float brushWidth, System_String_o* quitActionId, const MethodInfo* method);
// 0x44f4c00

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption
               (Gisketch_Aottg2UI_Code_AottgUi_o *buttons,
               Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option,int32_t index,
               float brushWidth,System_String_o *quitActionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_Fields *pGVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  undefined8 *puVar7;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *pGVar8;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this_00;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (g_data_057aec9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddOption_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass29_0);
    il2cpp_runtime_helper_023445d0(&"mainMenuBrushIntro");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"main-menu-buttons");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    il2cpp_runtime_helper_023445d0(&"main-menu-button-");
    g_data_057aec9b = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass29_0);
  pGVar8 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0;
  __this_00 = __this;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0) {
    pGVar1 = &__this->fields;
    (__this->fields).option.fields.Icon = option.fields.Icon;
    local_58 = option.fields.Label._0_4_;
    uStack_54 = option.fields.Label._4_4_;
    uStack_50 = option.fields.SearchTitle._0_4_;
    uStack_4c = option.fields.SearchTitle._4_4_;
    local_48 = option.fields.LocaleKey._0_4_;
    uStack_44 = option.fields.LocaleKey._4_4_;
    uStack_40 = option.fields.ActionId._0_4_;
    uStack_3c = option.fields.ActionId._4_4_;
    *(undefined4 *)&(__this->fields).option.fields.LocaleKey = local_48;
    *(undefined4 *)((long)&(__this->fields).option.fields.LocaleKey + 4) = uStack_44;
    *(undefined4 *)&(__this->fields).option.fields.ActionId = uStack_40;
    *(undefined4 *)((long)&(__this->fields).option.fields.ActionId + 4) = uStack_3c;
    *(undefined4 *)&(__this->fields).option.fields.Label = local_58;
    *(undefined4 *)((long)&(__this->fields).option.fields.Label + 4) = uStack_54;
    *(undefined4 *)&(__this->fields).option.fields.SearchTitle = uStack_50;
    *(undefined4 *)((long)&(__this->fields).option.fields.SearchTitle + 4) = uStack_4c;
    il2cpp_runtime_helper_022b4080(pGVar1,0);
    (__this->fields).quitActionId = quitActionId;
    il2cpp_runtime_helper_022b4080(&(__this->fields).quitActionId,quitActionId);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuBrushIntro","main-menu-buttons",0.120000005,0.030000001,0.027000003,index + 10,
                        (MethodInfo *)0x0);
    (__this->fields).enter = pGVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields).enter,pGVar5);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar8 = __this;
    if (g_data_057aeca0 == '\0') {
      il2cpp_runtime_helper_023445d0(&" ");
      il2cpp_runtime_helper_023445d0(&"-");
      g_data_057aeca0 = '\x01';
      pGVar8 = __this;
    }
    __this_00 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)
                (pGVar1->option).fields.Label;
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0;
      pSVar6 = System_String__ToLowerInvariant((System_String_o *)__this_00,(MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar6 = System_String__Replace_3af9030(pSVar6," ","-",(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_3ae5ba0("main-menu-button-",pSVar6,(MethodInfo *)0x0);
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(brushWidth,(MethodInfo *)0x0);
        height = Gisketch_Aottg2UI_Code_AottgUi__Points(118.0,(MethodInfo *)0x0);
        pGVar8 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0;
        __this_00 = "Column";
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart","Absolute",
                            (System_String_o *)0x0,0.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                            (float)-index * 74.0,0.0,1.0,(MethodInfo *)0x0);
        if (buttons != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (buttons,"default",build,pSVar6,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057aeca0 = '\x01';
  }
  if ((System_String_c *)__this_00->klass != (System_String_c *)0x0) {
    pGVar8 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0;
    pSVar6 = System_String__ToLowerInvariant((System_String_o *)__this_00->klass,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_o *)0x0) {
      System_String__Replace_3af9030(pSVar6," ","-",(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aec9d = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar10 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
    lVar9 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    lVar10 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
    lVar9 = TypeInfo_AottgMainMenuPanel;
  }
  if (lVar10 != 0) {
    TypeInfo_AottgMainMenuPanel = lVar9;
    return;
  }
  TypeInfo_AottgMainMenuPanel = lVar9;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchLocalizer);
    g_data_057aec9e = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    plVar3 = *(long **)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 0x10);
    lVar10 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    plVar3 = *(long **)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 0x10);
    lVar10 = TypeInfo_AottgMainMenuPanel;
  }
  TypeInfo_AottgMainMenuPanel = lVar10;
  if (plVar3 == (long *)0x0) {
    auVar11 = il2cpp_runtime_helper_022b2c90();
label_044f5112:
    puVar7 = (undefined8 *)(auVar11._0_8_ + (long)*(int *)(auVar11._8_8_ + 8 + lVar10) * 0x10 + 0x138);
  }
  else {
    lVar4 = *plVar3;
    if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
      auVar11._8_8_ = *(long *)(lVar4 + 0xb0);
      auVar11._0_8_ = lVar4;
      lVar10 = 0;
      do {
        if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar10) == TypeInfo_IGisketchLocalizer) goto label_044f5112;
        lVar10 = lVar10 + 0x10;
      } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar10);
    }
    puVar7 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar3,TypeInfo_IGisketchLocalizer,0);
  }
  (*(code *)*puVar7)(plVar3,lVar9,pGVar8,puVar7[1],(code *)*puVar7);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$BrushWidth
// il2cpp: float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__BrushWidth (const MethodInfo* method);
// 0x44f4ae0

float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__BrushWidth(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_Fields *pGVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  void *pvVar6;
  System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *pSVar7;
  System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  bool_conflict bVar10;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar11;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  undefined8 *puVar13;
  System_String_o *extraout_RDX;
  ulong uVar14;
  int iVar15;
  undefined8 in_RSI;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *pGVar16;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar17;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar18;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  Il2CppType *pIVar19;
  undefined8 unaff_R14;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_c *pGVar20;
  int iVar21;
  undefined8 unaff_R15;
  float fVar22;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined1 auVar23 [16];
  System_String_o *unaff_retaddr;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (g_data_057aec9c == '\0') goto label_044f4b87;
  if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[5].fields._actions + 4) == 0) goto label_044f4bb1;
label_044f4b0d:
  pGVar20 = (TypeInfo_AottgMainMenuPanel[4].fields._actions)->klass;
  if (pGVar20 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_c *)0x0) goto label_044f4b82;
label_044f4b1c:
  iVar15 = (int)in_RSI;
  pcVar5 = (pGVar20->_1).namespaze;
  if ((int)pcVar5 < 1) {
    iVar21 = 0;
label_044f4bd1:
    return (float)iVar21 * 37.0 + 32.0;
  }
  pIVar19 = &(pGVar20->_1).byval_arg;
  iVar21 = 0;
  uVar14 = 0;
  pGVar17 = TypeInfo_AottgMainMenuPanel;
  if (((ulong)pcVar5 & 0xffffffff) != 0) {
    do {
      pGVar18 = pIVar19->data;
      in_RSI = 0;
      pGVar17 = pGVar18;
      bVar10 = System_String__IsNullOrEmpty((System_String_o *)pGVar18,(MethodInfo *)0x0);
      iVar15 = (int)in_RSI;
      if ((char)bVar10 == '\0') {
        if (pGVar18 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_044f4b82;
        iVar3 = *(int *)&(pGVar18->fields)._children;
        if (iVar21 <= iVar3) {
          iVar21 = iVar3;
        }
      }
      uVar14 = uVar14 + 1;
      uVar4 = *(uint *)&(pGVar20->_1).namespaze;
      pIVar19 = (Il2CppType *)((long)(pIVar19 + 2) + 8);
      if ((long)(int)uVar4 <= (long)uVar14) goto label_044f4bd1;
      if (uVar4 <= uVar14) break;
    } while( true );
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aec9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddOption_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass29_0);
    il2cpp_runtime_helper_023445d0(&"mainMenuBrushIntro");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"main-menu-buttons");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    il2cpp_runtime_helper_023445d0(&"main-menu-button-");
    g_data_057aec9b = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)
           il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass29_0);
  pGVar16 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0;
  __this_00 = __this;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0) {
    pGVar1 = &__this->fields;
    (__this->fields).option.fields.Icon = unaff_retaddr;
    uStack_80 = (undefined4)unaff_R12;
    uStack_7c = (undefined4)((ulong)unaff_R12 >> 0x20);
    uStack_78 = (undefined4)unaff_R13;
    uStack_74 = (undefined4)((ulong)unaff_R13 >> 0x20);
    uStack_70 = (undefined4)unaff_R14;
    uStack_6c = (undefined4)((ulong)unaff_R14 >> 0x20);
    uStack_68 = (undefined4)unaff_R15;
    uStack_64 = (undefined4)((ulong)unaff_R15 >> 0x20);
    *(undefined4 *)&(__this->fields).option.fields.LocaleKey = uStack_70;
    *(undefined4 *)((long)&(__this->fields).option.fields.LocaleKey + 4) = uStack_6c;
    *(undefined4 *)&(__this->fields).option.fields.ActionId = uStack_68;
    *(undefined4 *)((long)&(__this->fields).option.fields.ActionId + 4) = uStack_64;
    *(undefined4 *)&(__this->fields).option.fields.Label = uStack_80;
    *(undefined4 *)((long)&(__this->fields).option.fields.Label + 4) = uStack_7c;
    *(undefined4 *)&(__this->fields).option.fields.SearchTitle = uStack_78;
    *(undefined4 *)((long)&(__this->fields).option.fields.SearchTitle + 4) = uStack_74;
    il2cpp_runtime_helper_022b4080(pGVar1,0);
    (__this->fields).quitActionId = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(__this->fields).quitActionId,extraout_RDX);
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                        ("mainMenuBrushIntro","main-menu-buttons",0.120000005,0.030000001,0.027000003,iVar15 + 10,
                         (MethodInfo *)0x0);
    (__this->fields).enter = pGVar11;
    il2cpp_runtime_helper_022b4080(&(__this->fields).enter,pGVar11);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar16 = __this;
    if (g_data_057aeca0 == '\0') {
      il2cpp_runtime_helper_023445d0(&" ");
      il2cpp_runtime_helper_023445d0(&"-");
      g_data_057aeca0 = '\x01';
      pGVar16 = __this;
    }
    __this_00 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)
                (pGVar1->option).fields.Label;
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0) {
      pGVar16 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0;
      pSVar12 = System_String__ToLowerInvariant((System_String_o *)__this_00,(MethodInfo *)0x0);
      if (pSVar12 != (System_String_o *)0x0) {
        pSVar12 = System_String__Replace_3af9030(pSVar12," ","-",(MethodInfo *)0x0);
        pSVar12 = System_String__Concat_3ae5ba0("main-menu-button-",pSVar12,(MethodInfo *)0x0);
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar22,(MethodInfo *)0x0);
        height = Gisketch_Aottg2UI_Code_AottgUi__Points(118.0,(MethodInfo *)0x0);
        pGVar16 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0;
        __this_00 = "Column";
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart","Absolute",
                            (System_String_o *)0x0,0.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                            (float)-iVar15 * 74.0,0.0,1.0,(MethodInfo *)0x0);
        if (pGVar17 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (pGVar17,"default",build,pSVar12,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return extraout_XMM0_Da;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeca0 == '\0') {
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057aeca0 = '\x01';
  }
  if ((System_String_c *)__this_00->klass != (System_String_c *)0x0) {
    pGVar16 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0;
    pSVar12 = System_String__ToLowerInvariant((System_String_o *)__this_00->klass,(MethodInfo *)0x0);
    if (pSVar12 != (System_String_o *)0x0) {
      System_String__Replace_3af9030(pSVar12," ","-",(MethodInfo *)0x0);
      return extraout_XMM0_Da_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aec9d = '\x01';
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[5].fields._actions + 4) == 0) goto label_044f5007;
label_044f4fad:
    pvVar6 = (TypeInfo_AottgMainMenuPanel[4].fields._actions)->monitor;
    pGVar17 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[5].fields._actions + 4) != 0) goto label_044f4fad;
label_044f5007:
    il2cpp_runtime_helper_02337ed0();
    pvVar6 = (TypeInfo_AottgMainMenuPanel[4].fields._actions)->monitor;
    pGVar17 = TypeInfo_AottgMainMenuPanel;
  }
  if (pvVar6 != (void *)0x0) {
    TypeInfo_AottgMainMenuPanel = pGVar17;
    return (float)(*(int *)((long)pvVar6 + 0x18) + -1) * 10.0 + (float)*(int *)((long)pvVar6 + 0x18) * 48.0;
  }
  TypeInfo_AottgMainMenuPanel = pGVar17;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchLocalizer);
    g_data_057aec9e = '\x01';
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[5].fields._actions + 4) == 0) goto label_044f50f1;
label_044f505b:
    pSVar7 = ((TypeInfo_AottgMainMenuPanel[4].fields._actions)->fields)._actions;
    pGVar18 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[5].fields._actions + 4) != 0) goto label_044f505b;
label_044f50f1:
    il2cpp_runtime_helper_02337ed0();
    pSVar7 = ((TypeInfo_AottgMainMenuPanel[4].fields._actions)->fields)._actions;
    pGVar18 = TypeInfo_AottgMainMenuPanel;
  }
  TypeInfo_AottgMainMenuPanel = pGVar18;
  if (pSVar7 == (System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *)0x0) {
    auVar23 = il2cpp_runtime_helper_022b2c90();
    goto label_044f5112;
  }
  pSVar8 = pSVar7->klass;
  uVar2._0_1_ = (pSVar8->_2).rank;
  uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
  if ((ulong)uVar2 == 0) goto label_044f50af;
  pIVar9 = (pSVar8->_1).interfaceOffsets;
  auVar23._8_8_ = pIVar9;
  auVar23._0_8_ = pSVar8;
  pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  goto label_044f50a0;
label_044f4bb1:
  while( true ) {
    il2cpp_runtime_helper_02337ed0();
    pGVar20 = (TypeInfo_AottgMainMenuPanel[4].fields._actions)->klass;
    if (pGVar20 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_c *)0x0) break;
label_044f4b82:
    il2cpp_runtime_helper_022b2c90();
label_044f4b87:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aec9c = '\x01';
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[5].fields._actions + 4) != 0) goto label_044f4b0d;
  }
  goto label_044f4b1c;
label_044f5112:
  puVar13 = (undefined8 *)
            (auVar23._0_8_ + (long)*(int *)((long)&pGVar18->monitor + auVar23._8_8_) * 0x10 + 0x138);
  goto label_044f5124;
  while (pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&pGVar18->fields,
        (Gisketch_Aottg2UI_Code_AottgUi_o *)((ulong)uVar2 << 4) != pGVar18) {
label_044f50a0:
    if (*(long *)((long)&pGVar18->klass + (long)pIVar9) == TypeInfo_IGisketchLocalizer) goto label_044f5112;
  }
label_044f50af:
  puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar7,TypeInfo_IGisketchLocalizer,0);
label_044f5124:
  fVar22 = (float)(*(code *)*puVar13)(pSVar7,pGVar17,pGVar16,puVar13[1],(code *)*puVar13);
  return fVar22;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$FooterWidth
// il2cpp: float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__FooterWidth (const MethodInfo* method);
// 0x44f4f90

float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__FooterWidth(MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 in_RSI;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  if (g_data_057aec9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    g_data_057aec9d = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
    lVar5 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    lVar6 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
    lVar5 = TypeInfo_AottgMainMenuPanel;
  }
  if (lVar6 != 0) {
    TypeInfo_AottgMainMenuPanel = lVar5;
    return (float)(*(int *)(lVar6 + 0x18) + -1) * 10.0 + (float)*(int *)(lVar6 + 0x18) * 48.0;
  }
  TypeInfo_AottgMainMenuPanel = lVar5;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchLocalizer);
    g_data_057aec9e = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    plVar2 = *(long **)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 0x10);
    lVar6 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    plVar2 = *(long **)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 0x10);
    lVar6 = TypeInfo_AottgMainMenuPanel;
  }
  TypeInfo_AottgMainMenuPanel = lVar6;
  if (plVar2 == (long *)0x0) {
    auVar8 = il2cpp_runtime_helper_022b2c90();
label_044f5112:
    puVar4 = (undefined8 *)(auVar8._0_8_ + (long)*(int *)(auVar8._8_8_ + 8 + lVar6) * 0x10 + 0x138);
  }
  else {
    lVar3 = *plVar2;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      auVar8._8_8_ = *(long *)(lVar3 + 0xb0);
      auVar8._0_8_ = lVar3;
      lVar6 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar6) == TypeInfo_IGisketchLocalizer) goto label_044f5112;
        lVar6 = lVar6 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar6);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IGisketchLocalizer,0);
  }
  fVar7 = (float)(*(code *)*puVar4)(plVar2,lVar5,in_RSI,puVar4[1],(code *)*puVar4);
  return fVar7;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$Localize
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x44f5030

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  System_String_o *pSVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (g_data_057aec9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchLocalizer);
    g_data_057aec9e = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    plVar2 = *(long **)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 0x10);
    lVar6 = TypeInfo_AottgMainMenuPanel;
  }
  else {
    plVar2 = *(long **)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 0x10);
    lVar6 = TypeInfo_AottgMainMenuPanel;
  }
  TypeInfo_AottgMainMenuPanel = lVar6;
  if (plVar2 == (long *)0x0) {
    auVar7 = il2cpp_runtime_helper_022b2c90();
label_044f5112:
    puVar4 = (undefined8 *)(auVar7._0_8_ + (long)*(int *)(auVar7._8_8_ + 8 + lVar6) * 0x10 + 0x138);
  }
  else {
    lVar3 = *plVar2;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      auVar7._8_8_ = *(long *)(lVar3 + 0xb0);
      auVar7._0_8_ = lVar3;
      lVar6 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar6) == TypeInfo_IGisketchLocalizer) goto label_044f5112;
        lVar6 = lVar6 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar6);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IGisketchLocalizer,0);
  }
  pSVar5 = (System_String_o *)(*(code *)*puVar4)(plVar2,key,fallback,puVar4[1],(code *)*puVar4);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___cctor (const MethodInfo* method);
// 0x44f5140

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___cctor(MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this;
  undefined8 in_RCX;
  undefined8 extraout_RDX;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (g_data_057aec9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMainMenuPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FooterIcon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenuOption);
    il2cpp_runtime_helper_023445d0(&"TUTORIAL");
    il2cpp_runtime_helper_023445d0(&"gear");
    il2cpp_runtime_helper_023445d0(&"main.patreon");
    il2cpp_runtime_helper_023445d0(&"Patreon");
    il2cpp_runtime_helper_023445d0(&"singleplayer");
    il2cpp_runtime_helper_023445d0(&"home");
    il2cpp_runtime_helper_023445d0(&"Settings");
    il2cpp_runtime_helper_023445d0(&"MULTIPLAYER");
    il2cpp_runtime_helper_023445d0(&"main.tutorial");
    il2cpp_runtime_helper_023445d0(&"PROFILE");
    il2cpp_runtime_helper_023445d0(&"main.credits");
    il2cpp_runtime_helper_023445d0(&"CREDITS");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Intro.SingleplayerButton");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Intro/ProfileIcon");
    il2cpp_runtime_helper_023445d0(&"exit");
    il2cpp_runtime_helper_023445d0(&"main.settings");
    il2cpp_runtime_helper_023445d0(&"QUIT");
    il2cpp_runtime_helper_023445d0(&"TOOLS");
    il2cpp_runtime_helper_023445d0(&"main.quit");
    il2cpp_runtime_helper_023445d0(&"Quests");
    il2cpp_runtime_helper_023445d0(&"Multiplayer");
    il2cpp_runtime_helper_023445d0(&"main.multiplayer");
    il2cpp_runtime_helper_023445d0(&"main.social");
    il2cpp_runtime_helper_023445d0(&"Common.Quit");
    il2cpp_runtime_helper_023445d0(&"Common.Profile");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Intro/SocialIcon");
    il2cpp_runtime_helper_023445d0(&"SETTINGS");
    il2cpp_runtime_helper_023445d0(&"Quit");
    il2cpp_runtime_helper_023445d0(&"Tools");
    il2cpp_runtime_helper_023445d0(&"Credits");
    il2cpp_runtime_helper_023445d0(&"Single Player");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Intro/LeaderboardIcon");
    il2cpp_runtime_helper_023445d0(&"wrench");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Intro.CreditsButton");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Intro/PatreonIcon");
    il2cpp_runtime_helper_023445d0(&"Common.Help");
    il2cpp_runtime_helper_023445d0(&"SINGLEPLAYER");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Intro.MultiplayerButton");
    il2cpp_runtime_helper_023445d0(&"Social");
    il2cpp_runtime_helper_023445d0(&"main.tools");
    il2cpp_runtime_helper_023445d0(&"main.profile");
    il2cpp_runtime_helper_023445d0(&"question");
    il2cpp_runtime_helper_023445d0(&"Common.Settings");
    il2cpp_runtime_helper_023445d0(&"Help");
    il2cpp_runtime_helper_023445d0(&"Profile");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Intro/UserIcon");
    il2cpp_runtime_helper_023445d0(&"trophy");
    il2cpp_runtime_helper_023445d0(&"main.leaderboard");
    il2cpp_runtime_helper_023445d0(&"main.singleplayer");
    il2cpp_runtime_helper_023445d0(&"main.quests");
    il2cpp_runtime_helper_023445d0(&"Leaderboard");
    il2cpp_runtime_helper_023445d0(&"multiplayer");
    il2cpp_runtime_helper_023445d0(&"Tutorial");
    il2cpp_runtime_helper_023445d0(&"MainMenu.LeaderboardPopup.Title");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Intro.ToolsButton");
    il2cpp_runtime_helper_023445d0(&"Common.Social");
    il2cpp_runtime_helper_023445d0(&"main.help");
    il2cpp_runtime_helper_023445d0(&"MainMenu.Intro.TutorialButton");
    g_data_057aec9f = '\x01';
  }
  lVar5 = il2cpp_runtime_helper_022b2a40(TypeInfo_MainMenuOption,8);
  uVar6 = "question";
  uVar4 = "main.tutorial";
  uVar3 = "Tutorial";
  uVar2 = "MainMenu.Intro.TutorialButton";
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = "TUTORIAL";
  il2cpp_runtime_helper_022b4080(&uStack_58);
  uStack_50 = uVar3;
  il2cpp_runtime_helper_022b4080(&uStack_50,uVar3);
  uStack_48 = uVar2;
  il2cpp_runtime_helper_022b4080(&uStack_48,uVar2);
  uStack_40 = uVar4;
  il2cpp_runtime_helper_022b4080(&uStack_40,uVar4);
  puVar7 = &uStack_38;
  uStack_38 = uVar6;
  il2cpp_runtime_helper_022b4080();
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x40) = uStack_38;
      *(undefined4 *)(lVar5 + 0x30) = (undefined4)uStack_48;
      *(undefined4 *)(lVar5 + 0x34) = uStack_48._4_4_;
      *(undefined4 *)(lVar5 + 0x38) = (undefined4)uStack_40;
      *(undefined4 *)(lVar5 + 0x3c) = uStack_40._4_4_;
      *(undefined4 *)(lVar5 + 0x20) = (undefined4)uStack_58;
      *(undefined4 *)(lVar5 + 0x24) = uStack_58._4_4_;
      *(undefined4 *)(lVar5 + 0x28) = (undefined4)uStack_50;
      *(undefined4 *)(lVar5 + 0x2c) = uStack_50._4_4_;
      il2cpp_runtime_helper_022b4080(lVar5 + 0x20,0);
      uVar6 = "singleplayer";
      uVar4 = "main.singleplayer";
      uVar3 = "Single Player";
      uVar2 = "MainMenu.Intro.SingleplayerButton";
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = "SINGLEPLAYER";
      il2cpp_runtime_helper_022b4080(&uStack_80);
      uStack_78 = uVar3;
      il2cpp_runtime_helper_022b4080(&uStack_78,uVar3);
      uStack_70 = uVar2;
      il2cpp_runtime_helper_022b4080(&uStack_70,uVar2);
      uStack_68 = uVar4;
      il2cpp_runtime_helper_022b4080(&uStack_68,uVar4);
      puVar7 = &uStack_60;
      uStack_60 = uVar6;
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x68) = uStack_60;
        *(undefined4 *)(lVar5 + 0x58) = (undefined4)uStack_70;
        *(undefined4 *)(lVar5 + 0x5c) = uStack_70._4_4_;
        *(undefined4 *)(lVar5 + 0x60) = (undefined4)uStack_68;
        *(undefined4 *)(lVar5 + 100) = uStack_68._4_4_;
        *(undefined4 *)(lVar5 + 0x48) = (undefined4)uStack_80;
        *(undefined4 *)(lVar5 + 0x4c) = uStack_80._4_4_;
        *(undefined4 *)(lVar5 + 0x50) = (undefined4)uStack_78;
        *(undefined4 *)(lVar5 + 0x54) = uStack_78._4_4_;
        il2cpp_runtime_helper_022b4080(lVar5 + 0x48,0);
        uVar6 = "multiplayer";
        uVar4 = "main.multiplayer";
        uVar3 = "Multiplayer";
        uVar2 = "MainMenu.Intro.MultiplayerButton";
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_a8 = "MULTIPLAYER";
        il2cpp_runtime_helper_022b4080(&uStack_a8);
        uStack_a0 = uVar3;
        il2cpp_runtime_helper_022b4080(&uStack_a0,uVar3);
        uStack_98 = uVar2;
        il2cpp_runtime_helper_022b4080(&uStack_98,uVar2);
        uStack_90 = uVar4;
        il2cpp_runtime_helper_022b4080(&uStack_90,uVar4);
        puVar7 = &uStack_88;
        uStack_88 = uVar6;
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x90) = uStack_88;
          *(undefined4 *)(lVar5 + 0x80) = (undefined4)uStack_98;
          *(undefined4 *)(lVar5 + 0x84) = uStack_98._4_4_;
          *(undefined4 *)(lVar5 + 0x88) = (undefined4)uStack_90;
          *(undefined4 *)(lVar5 + 0x8c) = uStack_90._4_4_;
          *(undefined4 *)(lVar5 + 0x70) = (undefined4)uStack_a8;
          *(undefined4 *)(lVar5 + 0x74) = uStack_a8._4_4_;
          *(undefined4 *)(lVar5 + 0x78) = (undefined4)uStack_a0;
          *(undefined4 *)(lVar5 + 0x7c) = uStack_a0._4_4_;
          il2cpp_runtime_helper_022b4080(lVar5 + 0x70,0);
          uVar4 = "main.profile";
          uVar6 = "home";
          uVar3 = "Profile";
          uVar2 = "Common.Profile";
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_d0 = "PROFILE";
          il2cpp_runtime_helper_022b4080(&uStack_d0);
          uStack_c8 = uVar3;
          il2cpp_runtime_helper_022b4080(&uStack_c8,uVar3);
          uStack_c0 = uVar2;
          il2cpp_runtime_helper_022b4080(&uStack_c0,uVar2);
          uStack_b8 = uVar4;
          il2cpp_runtime_helper_022b4080(&uStack_b8,uVar4);
          puVar7 = &uStack_b0;
          uStack_b0 = uVar6;
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0xb8) = uStack_b0;
            *(undefined4 *)(lVar5 + 0xa8) = (undefined4)uStack_c0;
            *(undefined4 *)(lVar5 + 0xac) = uStack_c0._4_4_;
            *(undefined4 *)(lVar5 + 0xb0) = (undefined4)uStack_b8;
            *(undefined4 *)(lVar5 + 0xb4) = uStack_b8._4_4_;
            *(undefined4 *)(lVar5 + 0x98) = (undefined4)uStack_d0;
            *(undefined4 *)(lVar5 + 0x9c) = uStack_d0._4_4_;
            *(undefined4 *)(lVar5 + 0xa0) = (undefined4)uStack_c8;
            *(undefined4 *)(lVar5 + 0xa4) = uStack_c8._4_4_;
            il2cpp_runtime_helper_022b4080(lVar5 + 0x98,0);
            uVar4 = "main.settings";
            uVar6 = "gear";
            uVar3 = "Settings";
            uVar2 = "Common.Settings";
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_f8 = "SETTINGS";
            il2cpp_runtime_helper_022b4080(&uStack_f8);
            uStack_f0 = uVar3;
            il2cpp_runtime_helper_022b4080(&uStack_f0,uVar3);
            uStack_e8 = uVar2;
            il2cpp_runtime_helper_022b4080(&uStack_e8,uVar2);
            uStack_e0 = uVar4;
            il2cpp_runtime_helper_022b4080(&uStack_e0,uVar4);
            puVar7 = &uStack_d8;
            uStack_d8 = uVar6;
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0xe0) = uStack_d8;
              *(undefined4 *)(lVar5 + 0xd0) = (undefined4)uStack_e8;
              *(undefined4 *)(lVar5 + 0xd4) = uStack_e8._4_4_;
              *(undefined4 *)(lVar5 + 0xd8) = (undefined4)uStack_e0;
              *(undefined4 *)(lVar5 + 0xdc) = uStack_e0._4_4_;
              *(undefined4 *)(lVar5 + 0xc0) = (undefined4)uStack_f8;
              *(undefined4 *)(lVar5 + 0xc4) = uStack_f8._4_4_;
              *(undefined4 *)(lVar5 + 200) = (undefined4)uStack_f0;
              *(undefined4 *)(lVar5 + 0xcc) = uStack_f0._4_4_;
              il2cpp_runtime_helper_022b4080(lVar5 + 0xc0,0);
              uVar6 = "wrench";
              uVar4 = "main.tools";
              uVar3 = "Tools";
              uVar2 = "MainMenu.Intro.ToolsButton";
              uStack_108 = 0;
              uStack_100 = 0;
              uStack_118 = 0;
              uStack_110 = 0;
              uStack_120 = "TOOLS";
              il2cpp_runtime_helper_022b4080(&uStack_120);
              uStack_118 = uVar3;
              il2cpp_runtime_helper_022b4080(&uStack_118,uVar3);
              uStack_110 = uVar2;
              il2cpp_runtime_helper_022b4080(&uStack_110,uVar2);
              uStack_108 = uVar4;
              il2cpp_runtime_helper_022b4080(&uStack_108,uVar4);
              puVar7 = &uStack_100;
              uStack_100 = uVar6;
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x108) = uStack_100;
                *(undefined4 *)(lVar5 + 0xf8) = (undefined4)uStack_110;
                *(undefined4 *)(lVar5 + 0xfc) = uStack_110._4_4_;
                *(undefined4 *)(lVar5 + 0x100) = (undefined4)uStack_108;
                *(undefined4 *)(lVar5 + 0x104) = uStack_108._4_4_;
                *(undefined4 *)(lVar5 + 0xe8) = (undefined4)uStack_120;
                *(undefined4 *)(lVar5 + 0xec) = uStack_120._4_4_;
                *(undefined4 *)(lVar5 + 0xf0) = (undefined4)uStack_118;
                *(undefined4 *)(lVar5 + 0xf4) = uStack_118._4_4_;
                il2cpp_runtime_helper_022b4080(lVar5 + 0xe8,0);
                uVar6 = "trophy";
                uVar4 = "main.credits";
                uVar3 = "MainMenu.Intro.CreditsButton";
                uVar2 = "Credits";
                uStack_130 = 0;
                uStack_128 = 0;
                uStack_140 = 0;
                uStack_138 = 0;
                uStack_148 = "CREDITS";
                il2cpp_runtime_helper_022b4080(&uStack_148);
                uStack_140 = uVar2;
                il2cpp_runtime_helper_022b4080(&uStack_140,uVar2);
                uStack_138 = uVar3;
                il2cpp_runtime_helper_022b4080(&uStack_138,uVar3);
                uStack_130 = uVar4;
                il2cpp_runtime_helper_022b4080(&uStack_130,uVar4);
                puVar7 = &uStack_128;
                uStack_128 = uVar6;
                il2cpp_runtime_helper_022b4080();
                if (6 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x130) = uStack_128;
                  *(undefined4 *)(lVar5 + 0x120) = (undefined4)uStack_138;
                  *(undefined4 *)(lVar5 + 0x124) = uStack_138._4_4_;
                  *(undefined4 *)(lVar5 + 0x128) = (undefined4)uStack_130;
                  *(undefined4 *)(lVar5 + 300) = uStack_130._4_4_;
                  *(undefined4 *)(lVar5 + 0x110) = (undefined4)uStack_148;
                  *(undefined4 *)(lVar5 + 0x114) = uStack_148._4_4_;
                  *(undefined4 *)(lVar5 + 0x118) = (undefined4)uStack_140;
                  *(undefined4 *)(lVar5 + 0x11c) = uStack_140._4_4_;
                  il2cpp_runtime_helper_022b4080(lVar5 + 0x110,0);
                  uVar4 = "main.quit";
                  uVar6 = "exit";
                  uVar3 = "Quit";
                  uVar2 = "Common.Quit";
                  uStack_158 = 0;
                  uStack_150 = 0;
                  uStack_168 = 0;
                  uStack_160 = 0;
                  uStack_170 = "QUIT";
                  il2cpp_runtime_helper_022b4080(&uStack_170);
                  uStack_168 = uVar3;
                  il2cpp_runtime_helper_022b4080(&uStack_168,uVar3);
                  uStack_160 = uVar2;
                  il2cpp_runtime_helper_022b4080(&uStack_160,uVar2);
                  uStack_158 = uVar4;
                  il2cpp_runtime_helper_022b4080(&uStack_158,uVar4);
                  puVar7 = &uStack_150;
                  uStack_150 = uVar6;
                  il2cpp_runtime_helper_022b4080();
                  if (7 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x158) = uStack_150;
                    *(undefined4 *)(lVar5 + 0x148) = (undefined4)uStack_160;
                    *(undefined4 *)(lVar5 + 0x14c) = uStack_160._4_4_;
                    *(undefined4 *)(lVar5 + 0x150) = (undefined4)uStack_158;
                    *(undefined4 *)(lVar5 + 0x154) = uStack_158._4_4_;
                    *(undefined4 *)(lVar5 + 0x138) = (undefined4)uStack_170;
                    *(undefined4 *)(lVar5 + 0x13c) = uStack_170._4_4_;
                    *(undefined4 *)(lVar5 + 0x140) = (undefined4)uStack_168;
                    *(undefined4 *)(lVar5 + 0x144) = uStack_168._4_4_;
                    il2cpp_runtime_helper_022b4080(lVar5 + 0x138,0);
                    **(long **)(TypeInfo_AottgMainMenuPanel + 0xb8) = lVar5;
                    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgMainMenuPanel + 0xb8),lVar5);
                    lVar5 = il2cpp_runtime_helper_022b2a40(TypeInfo_FooterIcon,5);
                    uVar6 = "main.quests";
                    uVar2 = "UI/Icons/Intro/UserIcon";
                    uStack_188 = 0;
                    uStack_180 = 0;
                    uStack_178 = 0;
                    uStack_190 = "Quests";
                    il2cpp_runtime_helper_022b4080(&uStack_190);
                    uStack_188 = 0;
                    il2cpp_runtime_helper_022b4080(&uStack_188,0);
                    uStack_180 = uVar2;
                    il2cpp_runtime_helper_022b4080(&uStack_180,uVar2);
                    puVar7 = &uStack_178;
                    uStack_178 = uVar6;
                    il2cpp_runtime_helper_022b4080();
                    if (lVar5 == 0) goto label_044f61ed;
                    if (*(int *)(lVar5 + 0x18) != 0) {
                      *(undefined4 *)(lVar5 + 0x30) = (undefined4)uStack_180;
                      *(undefined4 *)(lVar5 + 0x34) = uStack_180._4_4_;
                      *(undefined4 *)(lVar5 + 0x38) = (undefined4)uStack_178;
                      *(undefined4 *)(lVar5 + 0x3c) = uStack_178._4_4_;
                      *(undefined4 *)(lVar5 + 0x20) = (undefined4)uStack_190;
                      *(undefined4 *)(lVar5 + 0x24) = uStack_190._4_4_;
                      *(undefined4 *)(lVar5 + 0x28) = (undefined4)uStack_188;
                      *(undefined4 *)(lVar5 + 0x2c) = uStack_188._4_4_;
                      il2cpp_runtime_helper_022b4080(lVar5 + 0x20,0);
                      uVar6 = "main.leaderboard";
                      uVar3 = "UI/Icons/Intro/LeaderboardIcon";
                      uVar2 = "MainMenu.LeaderboardPopup.Title";
                      uStack_1a8 = 0;
                      uStack_1a0 = 0;
                      uStack_198 = 0;
                      uStack_1b0 = "Leaderboard";
                      il2cpp_runtime_helper_022b4080(&uStack_1b0);
                      uStack_1a8 = uVar2;
                      il2cpp_runtime_helper_022b4080(&uStack_1a8,uVar2);
                      uStack_1a0 = uVar3;
                      il2cpp_runtime_helper_022b4080(&uStack_1a0,uVar3);
                      puVar7 = &uStack_198;
                      uStack_198 = uVar6;
                      il2cpp_runtime_helper_022b4080();
                      if (1 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined4 *)(lVar5 + 0x50) = (undefined4)uStack_1a0;
                        *(undefined4 *)(lVar5 + 0x54) = uStack_1a0._4_4_;
                        *(undefined4 *)(lVar5 + 0x58) = (undefined4)uStack_198;
                        *(undefined4 *)(lVar5 + 0x5c) = uStack_198._4_4_;
                        *(undefined4 *)(lVar5 + 0x40) = (undefined4)uStack_1b0;
                        *(undefined4 *)(lVar5 + 0x44) = uStack_1b0._4_4_;
                        *(undefined4 *)(lVar5 + 0x48) = (undefined4)uStack_1a8;
                        *(undefined4 *)(lVar5 + 0x4c) = uStack_1a8._4_4_;
                        il2cpp_runtime_helper_022b4080(lVar5 + 0x40,0);
                        uVar6 = "main.social";
                        uVar3 = "UI/Icons/Intro/SocialIcon";
                        uVar2 = "Common.Social";
                        uStack_1c8 = 0;
                        uStack_1c0 = 0;
                        uStack_1b8 = 0;
                        uStack_1d0 = "Social";
                        il2cpp_runtime_helper_022b4080(&uStack_1d0);
                        uStack_1c8 = uVar2;
                        il2cpp_runtime_helper_022b4080(&uStack_1c8,uVar2);
                        uStack_1c0 = uVar3;
                        il2cpp_runtime_helper_022b4080(&uStack_1c0,uVar3);
                        puVar7 = &uStack_1b8;
                        uStack_1b8 = uVar6;
                        il2cpp_runtime_helper_022b4080();
                        if (2 < *(uint *)(lVar5 + 0x18)) {
                          *(undefined4 *)(lVar5 + 0x70) = (undefined4)uStack_1c0;
                          *(undefined4 *)(lVar5 + 0x74) = uStack_1c0._4_4_;
                          *(undefined4 *)(lVar5 + 0x78) = (undefined4)uStack_1b8;
                          *(undefined4 *)(lVar5 + 0x7c) = uStack_1b8._4_4_;
                          *(undefined4 *)(lVar5 + 0x60) = (undefined4)uStack_1d0;
                          *(undefined4 *)(lVar5 + 100) = uStack_1d0._4_4_;
                          *(undefined4 *)(lVar5 + 0x68) = (undefined4)uStack_1c8;
                          *(undefined4 *)(lVar5 + 0x6c) = uStack_1c8._4_4_;
                          il2cpp_runtime_helper_022b4080(lVar5 + 0x60,0);
                          uVar6 = "main.help";
                          uVar3 = "UI/Icons/Intro/ProfileIcon";
                          uVar2 = "Common.Help";
                          uStack_1e8 = 0;
                          uStack_1e0 = 0;
                          uStack_1d8 = 0;
                          uStack_1f0 = "Help";
                          il2cpp_runtime_helper_022b4080(&uStack_1f0);
                          uStack_1e8 = uVar2;
                          il2cpp_runtime_helper_022b4080(&uStack_1e8,uVar2);
                          uStack_1e0 = uVar3;
                          il2cpp_runtime_helper_022b4080(&uStack_1e0,uVar3);
                          puVar7 = &uStack_1d8;
                          uStack_1d8 = uVar6;
                          il2cpp_runtime_helper_022b4080();
                          if (3 < *(uint *)(lVar5 + 0x18)) {
                            *(undefined4 *)(lVar5 + 0x90) = (undefined4)uStack_1e0;
                            *(undefined4 *)(lVar5 + 0x94) = uStack_1e0._4_4_;
                            *(undefined4 *)(lVar5 + 0x98) = (undefined4)uStack_1d8;
                            *(undefined4 *)(lVar5 + 0x9c) = uStack_1d8._4_4_;
                            *(undefined4 *)(lVar5 + 0x80) = (undefined4)uStack_1f0;
                            *(undefined4 *)(lVar5 + 0x84) = uStack_1f0._4_4_;
                            *(undefined4 *)(lVar5 + 0x88) = (undefined4)uStack_1e8;
                            *(undefined4 *)(lVar5 + 0x8c) = uStack_1e8._4_4_;
                            il2cpp_runtime_helper_022b4080(lVar5 + 0x80,0);
                            uVar6 = "main.patreon";
                            uVar2 = "UI/Icons/Intro/PatreonIcon";
                            uStack_208 = 0;
                            uStack_200 = 0;
                            uStack_1f8 = 0;
                            uStack_210 = "Patreon";
                            il2cpp_runtime_helper_022b4080(&uStack_210);
                            uStack_208 = 0;
                            il2cpp_runtime_helper_022b4080(&uStack_208,0);
                            uStack_200 = uVar2;
                            il2cpp_runtime_helper_022b4080(&uStack_200,uVar2);
                            puVar7 = &uStack_1f8;
                            uStack_1f8 = uVar6;
                            il2cpp_runtime_helper_022b4080();
                            if (4 < *(uint *)(lVar5 + 0x18)) {
                              *(undefined4 *)(lVar5 + 0xb0) = (undefined4)uStack_200;
                              *(undefined4 *)(lVar5 + 0xb4) = uStack_200._4_4_;
                              *(undefined4 *)(lVar5 + 0xb8) = (undefined4)uStack_1f8;
                              *(undefined4 *)(lVar5 + 0xbc) = uStack_1f8._4_4_;
                              *(undefined4 *)(lVar5 + 0xa0) = (undefined4)uStack_210;
                              *(undefined4 *)(lVar5 + 0xa4) = uStack_210._4_4_;
                              *(undefined4 *)(lVar5 + 0xa8) = (undefined4)uStack_208;
                              *(undefined4 *)(lVar5 + 0xac) = uStack_208._4_4_;
                              il2cpp_runtime_helper_022b4080(lVar5 + 0xa0,0);
                              lVar1 = *(long *)(TypeInfo_AottgMainMenuPanel + 0xb8);
                              *(long *)(lVar1 + 8) = lVar5;
                              il2cpp_runtime_helper_022b4080(lVar1 + 8);
                              __this = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)
                                       il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
                              Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
                                        (__this,(MethodInfo *)0x0);
                              lVar5 = *(long *)(TypeInfo_AottgMainMenuPanel + 0xb8);
                              *(Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o **)(lVar5 + 0x10) =
                                   __this;
                              il2cpp_runtime_helper_022b4080(lVar5 + 0x10,__this);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_044f61ed:
  il2cpp_runtime_helper_022b2c90();
  *puVar7 = uVar6;
  il2cpp_runtime_helper_022b4080();
  puVar7[1] = extraout_RDX;
  il2cpp_runtime_helper_022b4080(puVar7 + 1,extraout_RDX);
  puVar7[2] = in_RCX;
  il2cpp_runtime_helper_022b4080(puVar7 + 2,in_RCX);
  puVar7[3] = in_R8;
  il2cpp_runtime_helper_022b4080(puVar7 + 3,in_R8);
  puVar7[4] = in_R9;
  il2cpp_runtime_helper_022b4080(puVar7 + 4,in_R9);
  return;
}


