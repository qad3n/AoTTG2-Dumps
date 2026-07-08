// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuPanel.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.MainMenuOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this, System_String_o* label, System_String_o* searchTitle, System_String_o* localeKey, System_String_o* actionId, System_String_o* icon, const MethodInfo* method);
// 0x41c5330

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this,
               System_String_o *label,System_String_o *searchTitle,System_String_o *localeKey,
               System_String_o *actionId,System_String_o *icon,MethodInfo *method)

{
  label->klass = (System_String_c *)searchTitle;
  il2cpp_runtime_glue();
  label->monitor = localeKey;
  il2cpp_runtime_glue(&label->monitor,localeKey);
  label->fields = (System_String_Fields)actionId;
  il2cpp_runtime_glue(&label->fields,actionId);
  label[1].klass = (System_String_c *)icon;
  il2cpp_runtime_glue(label + 1,icon);
  label[1].monitor = method;
  il2cpp_runtime_glue(&label[1].monitor,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.MainMenuOption$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption__get_Id (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this, const MethodInfo* method);
// 0x41c4050

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption__get_Id
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704de1 == '\0') {
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"-");
    DAT_05704de1 = '\x01';
  }
  if ((System_String_o *)method->methodPointer != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLowerInvariant
                       ((System_String_o *)method->methodPointer,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__Replace(pSVar1," ","-",(MethodInfo *)0x0);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.FooterIcon$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this, System_String_o* label, System_String_o* localeKey, System_String_o* sprite, System_String_o* actionId, const MethodInfo* method);
// 0x41c53a0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this,System_String_o *label
               ,System_String_o *localeKey,System_String_o *sprite,System_String_o *actionId,
               MethodInfo *method)

{
  label->klass = (System_String_c *)localeKey;
  il2cpp_runtime_glue();
  label->monitor = sprite;
  il2cpp_runtime_glue(&label->monitor,sprite);
  label->fields = (System_String_Fields)actionId;
  il2cpp_runtime_glue(&label->fields,actionId);
  label[1].klass = (System_String_c *)method;
  il2cpp_runtime_glue(label + 1,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.FooterIcon$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon__get_Id (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this, const MethodInfo* method);
// 0x41c5400

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon__get_Id
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((System_String_o *)method->methodPointer != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLowerInvariant
                       ((System_String_o *)method->methodPointer,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___cctor (const MethodInfo* method);
// 0x41c5420

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704de2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704de2 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, const MethodInfo* method);
// 0x41c5490

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$<Build>b__28_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__28_1 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* logo, const MethodInfo* method);
// 0x41c54a0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_<>c__<Build>b__28_1
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *logo,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  
  if (DAT_05704de3 == '\0') {
    il2cpp_init_method_metadata(&"UI/AoTTG/MainMenu/LogoTextOnly");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"mainMenuLogoBlades");
    il2cpp_init_method_metadata(&"main-menu-logo-text");
    il2cpp_init_method_metadata(&"mainMenuLogoText");
    il2cpp_init_method_metadata(&"UI/AoTTG/MainMenu/LogoBlades");
    il2cpp_init_method_metadata(&"Absolute");
    il2cpp_init_method_metadata(&"mainMenuLogo");
    il2cpp_init_method_metadata();
    DAT_05704de3 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                      (System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("mainMenuLogoBlades",(System_String_o *)0x0,0.24000001,0.030000001,0.0,2,
                      (MethodInfo *)0x0);
  if (logo != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (logo,"UI/AoTTG/MainMenu/LogoBlades","mainMenuLogo","main-menu-logo-blades",pGVar3,pGVar4,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                        (System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuLogoText",(System_String_o *)0x0,0.24000001,0.030000001,0.0,1,
                        (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (logo,"UI/AoTTG/MainMenu/LogoTextOnly","mainMenuLogo","main-menu-logo-text",pGVar3,pGVar4,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$<Build>b__28_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__28_3 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x41c5740

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_<>c__<Build>b__28_3
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  int iVar1;
  System_String_o *fallback;
  System_String_o *sprite;
  System_String_o *actionId;
  long lVar2;
  System_String_o *label;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  long lVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  uint uVar5;
  
  if (DAT_05704de4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuPanel);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"main-menu-footer-");
    il2cpp_init_method_metadata(&"mainMenuFooterIconIntro");
    il2cpp_init_method_metadata(&"main-menu-footer");
    il2cpp_init_method_metadata(&"mainMenuFooterSpriteButton");
    DAT_05704de4 = '\x01';
    method = extraout_RDX;
  }
  uVar5 = 0;
  iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_init_class();
      method = extraout_RDX_00;
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) <= (int)uVar5) {
      return;
    }
    if (*(int *)(TypeInfo_AottgMainMenuPanel + 0xe4) == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
      method = extraout_RDX_01;
      if (lVar2 == 0) break;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar4 = (long)(int)uVar5 * 0x20;
    fallback = *(System_String_o **)(lVar2 + 0x20 + lVar4);
    sprite = *(System_String_o **)(lVar2 + 0x30 + lVar4);
    actionId = *(System_String_o **)(lVar2 + 0x38 + lVar4);
    label = Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize
                      (*(System_String_o **)(lVar2 + 0x28 + lVar4),fallback,method);
    if (fallback == (System_String_o *)0x0) break;
    pSVar3 = System_String__ToLowerInvariant(fallback,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat("main-menu-footer-",pSVar3,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                      ("mainMenuFooterIconIntro","main-menu-footer",0.120000005,0.024,0.009000001,uVar5 + 0x14,
                       (MethodInfo *)0x0);
    if (footer == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    node = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     (footer,sprite,label,actionId,pSVar3,"mainMenuFooterSpriteButton",layout,enter,
                      (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
              (node,fallback,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
               (System_String_o *)0x0,(System_String_o *)0x0,0,(MethodInfo *)0x0);
    uVar5 = uVar5 + 1;
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
    method = extraout_RDX_02;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass28_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x41c3bf0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_<>c__DisplayClass28_0___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass28_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* menu, const MethodInfo* method);
// 0x41c59f0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_<>c__DisplayClass28_0__<Build>b__0
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *menu,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  System_Action_AottgUi__o *pSVar7;
  
  if (DAT_05704de5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuPanel);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__28_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__28_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"main-menu-logo-slot");
    il2cpp_init_method_metadata(&"main-menu-panel-visual");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"mainMenuLogoSlot");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"FlexStart");
    il2cpp_init_method_metadata(&"mainMenuPanel");
    il2cpp_init_method_metadata(&"UI/AoTTG/MainMenu/MainMenuPanel");
    il2cpp_init_method_metadata(&"main-menu-buttons");
    il2cpp_init_method_metadata(&"main-menu-footer");
    il2cpp_init_method_metadata();
    DAT_05704de5 = '\x01';
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(979.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(1080.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                    ("mainMenuPanel",(System_String_o *)0x0,0.33600003,0.0,0.0,0,(MethodInfo *)0x0);
  if (menu == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto LAB_041c6106;
  Gisketch_Aottg2UI_Code_AottgUi__Image
            (menu,"UI/AoTTG/MainMenu/MainMenuPanel","mainMenuPanel","main-menu-panel-visual",pGVar6,enter,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = "mainMenuLogoSlot";
  pSVar7 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 8) = pSVar7;
    il2cpp_runtime_glue(lVar2 + 8,pSVar7);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,70.0,0.0,1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (menu,pSVar3,pSVar7,"main-menu-logo-slot",pGVar6,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar3 = "default";
  pSVar7 = (__this->fields).__9__2;
  if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    (__this->fields).__9__2 = pSVar7;
    il2cpp_runtime_glue(&(__this->fields).__9__2,pSVar7);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields).brushWidth,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgMainMenuPanel + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (**(long **)(TypeInfo_AottgMainMenuPanel + 0xb8) == 0) goto LAB_041c6106;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points
                     ((float)(*(int *)(**(long **)(TypeInfo_AottgMainMenuPanel + 0xb8) + 0x18) + -1) * 74.0 + 118.0
                      ,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart","Absolute",
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      -86.0,-360.0,0.0,1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (menu,pSVar3,pSVar7,"main-menu-buttons",pGVar6,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = "default";
  pSVar7 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x10) = pSVar7;
    il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
    if (*(int *)(TypeInfo_AottgMainMenuPanel + 0xe4) == 0) goto LAB_041c60b5;
LAB_041c5f15:
    if (DAT_05704dde != '\0') goto LAB_041c5f22;
LAB_041c60c7:
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuPanel);
    DAT_05704dde = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AottgMainMenuPanel + 0xe4) != 0) goto LAB_041c5f15;
LAB_041c60b5:
    il2cpp_init_class();
    if (DAT_05704dde == '\0') goto LAB_041c60c7;
LAB_041c5f22:
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points
                       ((float)(*(int *)(lVar2 + 0x18) + -1) * 10.0 +
                        (float)*(int *)(lVar2 + 0x18) * 48.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center","Absolute",
                        (System_String_o *)0x0,10.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        22.0,-1018.0,0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (menu,pSVar3,pSVar7,"main-menu-footer",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
LAB_041c6106:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass28_0$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___Build_b__2 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* buttons, const MethodInfo* method);
// 0x41c6110

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_<>c__DisplayClass28_0__<Build>b__2
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *buttons,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (DAT_05704de6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuPanel);
    DAT_05704de6 = '\x01';
  }
  lVar6 = 0x20;
  uVar5 = 0;
  iVar2 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    lVar4 = **(long **)(TypeInfo_AottgMainMenuPanel + 0xb8);
    if (lVar4 == 0) break;
    if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar5) {
      return;
    }
    if (*(int *)(TypeInfo_AottgMainMenuPanel + 0xe4) == 0) {
      il2cpp_init_class();
      lVar4 = **(long **)(TypeInfo_AottgMainMenuPanel + 0xb8);
      if (lVar4 == 0) break;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_00 = *(MethodInfo **)(lVar4 + 0x20 + lVar6);
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar6);
    pGVar3 = (__this->fields).__4__this;
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *)0x0) break;
    option.fields.LocaleKey = (System_String_o *)*puVar1;
    option.fields._0_16_ = *(undefined1 (*) [16])(lVar4 + lVar6);
    option.fields.ActionId = (System_String_o *)puVar1[1];
    option.fields.Icon = (System_String_o *)method_00;
    Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption
              (buttons,option,(int32_t)uVar5,(__this->fields).brushWidth,
               (pGVar3->fields)._quitActionId,method_00);
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 0x28;
    iVar2 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x41c4040

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_<>c__DisplayClass29_0___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$<AddOption>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___AddOption_b__0 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41c6250

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_<>c__DisplayClass29_0__<AddOption>b__0
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *actionId;
  uint uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05704de7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuPanel);
    il2cpp_init_method_metadata(&"main.quit");
    il2cpp_init_method_metadata(&"UI/Sprites/Elements/Brush");
    il2cpp_init_method_metadata(&"main-menu-option-");
    il2cpp_init_method_metadata(&"mainMenuBrushButton");
    DAT_05704de7 = '\x01';
  }
  uVar1 = System_String__op_Equality
                    ((__this->fields).option.fields.ActionId,"main.quit",(MethodInfo *)0x0);
  actionId = (&(__this->fields).option.fields.ActionId)[(ulong)(uVar1 & 0xff) * 2];
  pSVar3 = (__this->fields).option.fields.Label;
  pSVar4 = (__this->fields).option.fields.LocaleKey;
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_AottgMainMenuPanel + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize(pSVar4,pSVar3,method_00);
  if (pSVar3 != (System_String_o *)0x0) {
    pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
    if (DAT_05704de1 == '\0') {
      il2cpp_init_method_metadata(&" ");
      il2cpp_init_method_metadata(&"-");
      DAT_05704de1 = '\x01';
    }
    pSVar4 = (__this->fields).option.fields.Label;
    if (pSVar4 != (System_String_o *)0x0) {
      pSVar4 = System_String__ToLowerInvariant(pSVar4,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_o *)0x0) {
        pSVar4 = System_String__Replace(pSVar4," ","-",(MethodInfo *)0x0);
        pSVar4 = System_String__Concat("main-menu-option-",pSVar4,(MethodInfo *)0x0);
        if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             (row,3,pSVar3,actionId,pSVar4,(System_String_o *)0x0,
                              (__this->fields).enter,(__this->fields).option.fields.Icon,
                              (MethodInfo *)0x0);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).style = "mainMenuBrushButton";
            il2cpp_runtime_glue(&(pGVar5->fields).style);
            (pGVar5->fields).sprite = "UI/Sprites/Elements/Brush";
            il2cpp_runtime_glue(&(pGVar5->fields).sprite);
            bVar2 = System_String__IsNullOrEmpty
                              ((__this->fields).option.fields.Icon,(MethodInfo *)0x0);
            *(byte *)&(pGVar5->fields).hasIcon = (byte)bVar2 ^ 1;
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Search
                               ((__this->fields).option.fields.SearchTitle,(System_String_o *)0x0,0,
                                (__this->fields).option.fields.Icon,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0,(MethodInfo *)0x0);
            (pGVar5->fields).popover = (System_String_o *)pGVar6;
            il2cpp_runtime_glue(&(pGVar5->fields).popover,pGVar6);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o* __this, System_String_o* quitActionId, const MethodInfo* method);
// 0x41c3900

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *__this,System_String_o *quitActionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._quitActionId = quitActionId;
  il2cpp_runtime_glue(&__this->fields,quitActionId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Build (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41c3930

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Build
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  MethodInfo *method_00;
  float fVar3;
  
  if (DAT_05704ddb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuPanel);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass28_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"main-menu-panel");
    il2cpp_init_method_metadata(&"FlexStart");
    il2cpp_init_method_metadata(&"mainMenuPanel");
    DAT_05704ddb = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass28_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = __this;
    il2cpp_runtime_glue(&__this_00[1].monitor,__this);
    method_00 = TypeInfo_AottgMainMenuPanel;
    if (*(int *)((long)&TypeInfo_AottgMainMenuPanel[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    fVar3 = Gisketch_Aottg2UI_Game_AottgMainMenuPanel__BrushWidth(method_00);
    *(float *)&__this_00[1].klass = fVar3;
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(979.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"FlexStart","FlexStart",
                        (System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    contentLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                    (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,36.0,0.0,0.0,0.0,0.0,0.0,
                    0.0,0.0,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ScaleBox
                         (ui,"main-menu-panel",979.0,1080.0,build,"main-menu-panel",layout,contentLayout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                         );
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("mainMenuPanel",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).enter = pGVar2;
        il2cpp_runtime_glue(&(pGVar1->fields).enter,pGVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$AddOption
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption (Gisketch_Aottg2UI_Code_AottgUi_o* buttons, Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option, int32_t index, float brushWidth, System_String_o* quitActionId, const MethodInfo* method);
// 0x41c3d20

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption
               (Gisketch_Aottg2UI_Code_AottgUi_o *buttons,
               Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option,int32_t index,
               float brushWidth,System_String_o *quitActionId,MethodInfo *method)

{
  Il2CppObject *__this;
  Il2CppClass *pIVar1;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (DAT_05704ddc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__AddOption_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass29_0);
    il2cpp_init_method_metadata(&"mainMenuBrushIntro");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"FlexStart");
    il2cpp_init_method_metadata(&"main-menu-buttons");
    il2cpp_init_method_metadata(&"Absolute");
    il2cpp_init_method_metadata(&"main-menu-button-");
    DAT_05704ddc = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass29_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[3].klass = (Il2CppClass *)option.fields.Icon;
    local_58 = option.fields.Label._0_4_;
    uStack_54 = option.fields.Label._4_4_;
    uStack_50 = option.fields.SearchTitle._0_4_;
    uStack_4c = option.fields.SearchTitle._4_4_;
    local_48 = option.fields.LocaleKey._0_4_;
    uStack_44 = option.fields.LocaleKey._4_4_;
    uStack_40 = option.fields.ActionId._0_4_;
    uStack_3c = option.fields.ActionId._4_4_;
    *(undefined4 *)&__this[2].klass = local_48;
    *(undefined4 *)((long)&__this[2].klass + 4) = uStack_44;
    *(undefined4 *)&__this[2].monitor = uStack_40;
    *(undefined4 *)((long)&__this[2].monitor + 4) = uStack_3c;
    *(undefined4 *)&__this[1].klass = local_58;
    *(undefined4 *)((long)&__this[1].klass + 4) = uStack_54;
    *(undefined4 *)&__this[1].monitor = uStack_50;
    *(undefined4 *)((long)&__this[1].monitor + 4) = uStack_4c;
    il2cpp_runtime_glue(__this + 1,0);
    __this[3].monitor = quitActionId;
    il2cpp_runtime_glue(&__this[3].monitor,quitActionId);
    pIVar1 = (Il2CppClass *)
             Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuBrushIntro","main-menu-buttons",0.120000005,0.030000001,0.027000003,index + 10,
                        (MethodInfo *)0x0);
    __this[4].klass = pIVar1;
    il2cpp_runtime_glue(__this + 4,pIVar1);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    if (DAT_05704de1 == '\0') {
      il2cpp_init_method_metadata(&" ");
      il2cpp_init_method_metadata(&"-");
      DAT_05704de1 = '\x01';
    }
    pIVar1 = __this[1].klass;
    if (pIVar1 != (Il2CppClass *)0x0) {
      pSVar2 = System_String__ToLowerInvariant((System_String_o *)pIVar1,(MethodInfo *)0x0);
      if (pSVar2 != (System_String_o *)0x0) {
        pSVar2 = System_String__Replace(pSVar2," ","-",(MethodInfo *)0x0);
        pSVar2 = System_String__Concat("main-menu-button-",pSVar2,(MethodInfo *)0x0);
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(brushWidth,(MethodInfo *)0x0);
        height = Gisketch_Aottg2UI_Code_AottgUi__Points(118.0,(MethodInfo *)0x0);
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,"FlexStart","Absolute",
                            (System_String_o *)0x0,0.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                            0.0,0.0,(float)-index * 74.0,0.0,1.0,(MethodInfo *)0x0);
        if (buttons != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (buttons,"default",build,pSVar2,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$BrushWidth
// il2cpp: float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__BrushWidth (const MethodInfo* method);
// 0x41c3c00

float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__BrushWidth(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *value;
  bool_conflict bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (DAT_05704ddd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuPanel);
    DAT_05704ddd = '\x01';
    iVar6 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  else {
    iVar6 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  if (iVar6 == 0) {
    il2cpp_init_class();
    lVar2 = **(long **)(TypeInfo_AottgMainMenuPanel + 0xb8);
  }
  else {
    lVar2 = **(long **)(TypeInfo_AottgMainMenuPanel + 0xb8);
  }
  if (lVar2 == 0) {
LAB_041c3ca2:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
    iVar6 = 0;
LAB_041c3cf1:
    return (float)iVar6 * 37.0 + 32.0;
  }
  puVar5 = (undefined8 *)(lVar2 + 0x20);
  iVar6 = 0;
  uVar4 = 0;
  if ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) != 0) {
    do {
      value = (System_String_o *)*puVar5;
      bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (value == (System_String_o *)0x0) goto LAB_041c3ca2;
        iVar1 = (value->fields)._stringLength;
        if (iVar6 <= iVar1) {
          iVar6 = iVar1;
        }
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 5;
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar4) goto LAB_041c3cf1;
    } while (uVar4 < *(uint *)(lVar2 + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$FooterWidth
// il2cpp: float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__FooterWidth (const MethodInfo* method);
// 0x41c40c0

float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__FooterWidth(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05704dde == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuPanel);
    DAT_05704dde = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    return (float)(*(int *)(lVar2 + 0x18) + -1) * 10.0 + (float)*(int *)(lVar2 + 0x18) * 48.0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$Localize
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x41c4160

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
  
  if (DAT_05704ddf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuPanel);
    il2cpp_init_method_metadata(&TypeInfo_IGisketchLocalizer);
    DAT_05704ddf = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgMainMenuPanel + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = *(long **)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 0x10);
  }
  else {
    plVar2 = *(long **)(*(long *)(TypeInfo_AottgMainMenuPanel + 0xb8) + 0x10);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar3 = *plVar2;
  if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
    lVar6 = 0;
    do {
      if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar6) == TypeInfo_IGisketchLocalizer) {
        puVar4 = (undefined8 *)
                 (lVar3 + (long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar6) * 0x10 + 0x138);
        goto LAB_041c4254;
      }
      lVar6 = lVar6 + 0x10;
    } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar6);
  }
  puVar4 = (undefined8 *)il2cpp_runtime_glue(plVar2,TypeInfo_IGisketchLocalizer,0);
LAB_041c4254:
  pSVar5 = (System_String_o *)(*(code *)*puVar4)(plVar2,key,fallback,puVar4[1],(code *)*puVar4);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___cctor (const MethodInfo* method);
// 0x41c4270

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___cctor(MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this;
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
  
  if (DAT_05704de0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuPanel);
    il2cpp_init_method_metadata(&TypeInfo_FooterIcon);
    il2cpp_init_method_metadata(&TypeInfo_MainMenuOption);
    il2cpp_init_method_metadata(&"TUTORIAL");
    il2cpp_init_method_metadata(&"gear");
    il2cpp_init_method_metadata(&"main.patreon");
    il2cpp_init_method_metadata(&"Patreon");
    il2cpp_init_method_metadata(&"singleplayer");
    il2cpp_init_method_metadata(&"home");
    il2cpp_init_method_metadata(&"Settings");
    il2cpp_init_method_metadata(&"MULTIPLAYER");
    il2cpp_init_method_metadata(&"main.tutorial");
    il2cpp_init_method_metadata(&"PROFILE");
    il2cpp_init_method_metadata(&"main.credits");
    il2cpp_init_method_metadata(&"CREDITS");
    il2cpp_init_method_metadata(&"MainMenu.Intro.SingleplayerButton");
    il2cpp_init_method_metadata(&"UI/Icons/Intro/ProfileIcon");
    il2cpp_init_method_metadata(&"exit");
    il2cpp_init_method_metadata(&"main.settings");
    il2cpp_init_method_metadata(&"QUIT");
    il2cpp_init_method_metadata(&"TOOLS");
    il2cpp_init_method_metadata(&"main.quit");
    il2cpp_init_method_metadata(&"Quests");
    il2cpp_init_method_metadata(&"Multiplayer");
    il2cpp_init_method_metadata(&"main.multiplayer");
    il2cpp_init_method_metadata(&"main.social");
    il2cpp_init_method_metadata(&"Common.Quit");
    il2cpp_init_method_metadata(&"Common.Profile");
    il2cpp_init_method_metadata(&"UI/Icons/Intro/SocialIcon");
    il2cpp_init_method_metadata(&"SETTINGS");
    il2cpp_init_method_metadata(&"Quit");
    il2cpp_init_method_metadata(&"Tools");
    il2cpp_init_method_metadata(&"Credits");
    il2cpp_init_method_metadata(&"Single Player");
    il2cpp_init_method_metadata(&"UI/Icons/Intro/LeaderboardIcon");
    il2cpp_init_method_metadata(&"wrench");
    il2cpp_init_method_metadata(&"MainMenu.Intro.CreditsButton");
    il2cpp_init_method_metadata(&"UI/Icons/Intro/PatreonIcon");
    il2cpp_init_method_metadata(&"Common.Help");
    il2cpp_init_method_metadata(&"SINGLEPLAYER");
    il2cpp_init_method_metadata(&"MainMenu.Intro.MultiplayerButton");
    il2cpp_init_method_metadata(&"Social");
    il2cpp_init_method_metadata(&"main.tools");
    il2cpp_init_method_metadata(&"main.profile");
    il2cpp_init_method_metadata(&"question");
    il2cpp_init_method_metadata(&"Common.Settings");
    il2cpp_init_method_metadata(&"Help");
    il2cpp_init_method_metadata(&"Profile");
    il2cpp_init_method_metadata(&"UI/Icons/Intro/UserIcon");
    il2cpp_init_method_metadata(&"trophy");
    il2cpp_init_method_metadata(&"main.leaderboard");
    il2cpp_init_method_metadata(&"main.singleplayer");
    il2cpp_init_method_metadata(&"main.quests");
    il2cpp_init_method_metadata(&"Leaderboard");
    il2cpp_init_method_metadata(&"multiplayer");
    il2cpp_init_method_metadata(&"Tutorial");
    il2cpp_init_method_metadata(&"MainMenu.LeaderboardPopup.Title");
    il2cpp_init_method_metadata(&"MainMenu.Intro.ToolsButton");
    il2cpp_init_method_metadata(&"Common.Social");
    il2cpp_init_method_metadata(&"main.help");
    il2cpp_init_method_metadata(&"MainMenu.Intro.TutorialButton");
    DAT_05704de0 = '\x01';
  }
  lVar6 = il2cpp_glue_02274930(TypeInfo_MainMenuOption,8);
  uVar5 = "question";
  uVar4 = "main.tutorial";
  uVar3 = "Tutorial";
  uVar2 = "MainMenu.Intro.TutorialButton";
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = "TUTORIAL";
  il2cpp_runtime_glue(&uStack_58);
  uStack_50 = uVar3;
  il2cpp_runtime_glue(&uStack_50,uVar3);
  uStack_48 = uVar2;
  il2cpp_runtime_glue(&uStack_48,uVar2);
  uStack_40 = uVar4;
  il2cpp_runtime_glue(&uStack_40,uVar4);
  uStack_38 = uVar5;
  il2cpp_runtime_glue(&uStack_38,uVar5);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x40) = uStack_38;
      *(undefined4 *)(lVar6 + 0x30) = (undefined4)uStack_48;
      *(undefined4 *)(lVar6 + 0x34) = uStack_48._4_4_;
      *(undefined4 *)(lVar6 + 0x38) = (undefined4)uStack_40;
      *(undefined4 *)(lVar6 + 0x3c) = uStack_40._4_4_;
      *(undefined4 *)(lVar6 + 0x20) = (undefined4)uStack_58;
      *(undefined4 *)(lVar6 + 0x24) = uStack_58._4_4_;
      *(undefined4 *)(lVar6 + 0x28) = (undefined4)uStack_50;
      *(undefined4 *)(lVar6 + 0x2c) = uStack_50._4_4_;
      il2cpp_runtime_glue(lVar6 + 0x20,0);
      uVar5 = "singleplayer";
      uVar4 = "main.singleplayer";
      uVar3 = "Single Player";
      uVar2 = "MainMenu.Intro.SingleplayerButton";
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = "SINGLEPLAYER";
      il2cpp_runtime_glue(&uStack_80);
      uStack_78 = uVar3;
      il2cpp_runtime_glue(&uStack_78,uVar3);
      uStack_70 = uVar2;
      il2cpp_runtime_glue(&uStack_70,uVar2);
      uStack_68 = uVar4;
      il2cpp_runtime_glue(&uStack_68,uVar4);
      uStack_60 = uVar5;
      il2cpp_runtime_glue(&uStack_60,uVar5);
      if (1 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + 0x68) = uStack_60;
        *(undefined4 *)(lVar6 + 0x58) = (undefined4)uStack_70;
        *(undefined4 *)(lVar6 + 0x5c) = uStack_70._4_4_;
        *(undefined4 *)(lVar6 + 0x60) = (undefined4)uStack_68;
        *(undefined4 *)(lVar6 + 100) = uStack_68._4_4_;
        *(undefined4 *)(lVar6 + 0x48) = (undefined4)uStack_80;
        *(undefined4 *)(lVar6 + 0x4c) = uStack_80._4_4_;
        *(undefined4 *)(lVar6 + 0x50) = (undefined4)uStack_78;
        *(undefined4 *)(lVar6 + 0x54) = uStack_78._4_4_;
        il2cpp_runtime_glue(lVar6 + 0x48,0);
        uVar5 = "multiplayer";
        uVar4 = "main.multiplayer";
        uVar3 = "Multiplayer";
        uVar2 = "MainMenu.Intro.MultiplayerButton";
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_a8 = "MULTIPLAYER";
        il2cpp_runtime_glue(&uStack_a8);
        uStack_a0 = uVar3;
        il2cpp_runtime_glue(&uStack_a0,uVar3);
        uStack_98 = uVar2;
        il2cpp_runtime_glue(&uStack_98,uVar2);
        uStack_90 = uVar4;
        il2cpp_runtime_glue(&uStack_90,uVar4);
        uStack_88 = uVar5;
        il2cpp_runtime_glue(&uStack_88,uVar5);
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x90) = uStack_88;
          *(undefined4 *)(lVar6 + 0x80) = (undefined4)uStack_98;
          *(undefined4 *)(lVar6 + 0x84) = uStack_98._4_4_;
          *(undefined4 *)(lVar6 + 0x88) = (undefined4)uStack_90;
          *(undefined4 *)(lVar6 + 0x8c) = uStack_90._4_4_;
          *(undefined4 *)(lVar6 + 0x70) = (undefined4)uStack_a8;
          *(undefined4 *)(lVar6 + 0x74) = uStack_a8._4_4_;
          *(undefined4 *)(lVar6 + 0x78) = (undefined4)uStack_a0;
          *(undefined4 *)(lVar6 + 0x7c) = uStack_a0._4_4_;
          il2cpp_runtime_glue(lVar6 + 0x70,0);
          uVar5 = "main.profile";
          uVar4 = "home";
          uVar3 = "Profile";
          uVar2 = "Common.Profile";
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          uStack_d0 = "PROFILE";
          il2cpp_runtime_glue(&uStack_d0);
          uStack_c8 = uVar3;
          il2cpp_runtime_glue(&uStack_c8,uVar3);
          uStack_c0 = uVar2;
          il2cpp_runtime_glue(&uStack_c0,uVar2);
          uStack_b8 = uVar5;
          il2cpp_runtime_glue(&uStack_b8,uVar5);
          uStack_b0 = uVar4;
          il2cpp_runtime_glue(&uStack_b0,uVar4);
          if (3 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0xb8) = uStack_b0;
            *(undefined4 *)(lVar6 + 0xa8) = (undefined4)uStack_c0;
            *(undefined4 *)(lVar6 + 0xac) = uStack_c0._4_4_;
            *(undefined4 *)(lVar6 + 0xb0) = (undefined4)uStack_b8;
            *(undefined4 *)(lVar6 + 0xb4) = uStack_b8._4_4_;
            *(undefined4 *)(lVar6 + 0x98) = (undefined4)uStack_d0;
            *(undefined4 *)(lVar6 + 0x9c) = uStack_d0._4_4_;
            *(undefined4 *)(lVar6 + 0xa0) = (undefined4)uStack_c8;
            *(undefined4 *)(lVar6 + 0xa4) = uStack_c8._4_4_;
            il2cpp_runtime_glue(lVar6 + 0x98,0);
            uVar5 = "main.settings";
            uVar4 = "gear";
            uVar3 = "Settings";
            uVar2 = "Common.Settings";
            uStack_e0 = 0;
            uStack_d8 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_f8 = "SETTINGS";
            il2cpp_runtime_glue(&uStack_f8);
            uStack_f0 = uVar3;
            il2cpp_runtime_glue(&uStack_f0,uVar3);
            uStack_e8 = uVar2;
            il2cpp_runtime_glue(&uStack_e8,uVar2);
            uStack_e0 = uVar5;
            il2cpp_runtime_glue(&uStack_e0,uVar5);
            uStack_d8 = uVar4;
            il2cpp_runtime_glue(&uStack_d8,uVar4);
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0xe0) = uStack_d8;
              *(undefined4 *)(lVar6 + 0xd0) = (undefined4)uStack_e8;
              *(undefined4 *)(lVar6 + 0xd4) = uStack_e8._4_4_;
              *(undefined4 *)(lVar6 + 0xd8) = (undefined4)uStack_e0;
              *(undefined4 *)(lVar6 + 0xdc) = uStack_e0._4_4_;
              *(undefined4 *)(lVar6 + 0xc0) = (undefined4)uStack_f8;
              *(undefined4 *)(lVar6 + 0xc4) = uStack_f8._4_4_;
              *(undefined4 *)(lVar6 + 200) = (undefined4)uStack_f0;
              *(undefined4 *)(lVar6 + 0xcc) = uStack_f0._4_4_;
              il2cpp_runtime_glue(lVar6 + 0xc0,0);
              uVar5 = "wrench";
              uVar4 = "main.tools";
              uVar3 = "Tools";
              uVar2 = "MainMenu.Intro.ToolsButton";
              uStack_108 = 0;
              uStack_100 = 0;
              uStack_118 = 0;
              uStack_110 = 0;
              uStack_120 = "TOOLS";
              il2cpp_runtime_glue(&uStack_120);
              uStack_118 = uVar3;
              il2cpp_runtime_glue(&uStack_118,uVar3);
              uStack_110 = uVar2;
              il2cpp_runtime_glue(&uStack_110,uVar2);
              uStack_108 = uVar4;
              il2cpp_runtime_glue(&uStack_108,uVar4);
              uStack_100 = uVar5;
              il2cpp_runtime_glue(&uStack_100,uVar5);
              if (5 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x108) = uStack_100;
                *(undefined4 *)(lVar6 + 0xf8) = (undefined4)uStack_110;
                *(undefined4 *)(lVar6 + 0xfc) = uStack_110._4_4_;
                *(undefined4 *)(lVar6 + 0x100) = (undefined4)uStack_108;
                *(undefined4 *)(lVar6 + 0x104) = uStack_108._4_4_;
                *(undefined4 *)(lVar6 + 0xe8) = (undefined4)uStack_120;
                *(undefined4 *)(lVar6 + 0xec) = uStack_120._4_4_;
                *(undefined4 *)(lVar6 + 0xf0) = (undefined4)uStack_118;
                *(undefined4 *)(lVar6 + 0xf4) = uStack_118._4_4_;
                il2cpp_runtime_glue(lVar6 + 0xe8,0);
                uVar5 = "trophy";
                uVar4 = "main.credits";
                uVar3 = "MainMenu.Intro.CreditsButton";
                uVar2 = "Credits";
                uStack_130 = 0;
                uStack_128 = 0;
                uStack_140 = 0;
                uStack_138 = 0;
                uStack_148 = "CREDITS";
                il2cpp_runtime_glue(&uStack_148);
                uStack_140 = uVar2;
                il2cpp_runtime_glue(&uStack_140,uVar2);
                uStack_138 = uVar3;
                il2cpp_runtime_glue(&uStack_138,uVar3);
                uStack_130 = uVar4;
                il2cpp_runtime_glue(&uStack_130,uVar4);
                uStack_128 = uVar5;
                il2cpp_runtime_glue(&uStack_128,uVar5);
                if (6 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x130) = uStack_128;
                  *(undefined4 *)(lVar6 + 0x120) = (undefined4)uStack_138;
                  *(undefined4 *)(lVar6 + 0x124) = uStack_138._4_4_;
                  *(undefined4 *)(lVar6 + 0x128) = (undefined4)uStack_130;
                  *(undefined4 *)(lVar6 + 300) = uStack_130._4_4_;
                  *(undefined4 *)(lVar6 + 0x110) = (undefined4)uStack_148;
                  *(undefined4 *)(lVar6 + 0x114) = uStack_148._4_4_;
                  *(undefined4 *)(lVar6 + 0x118) = (undefined4)uStack_140;
                  *(undefined4 *)(lVar6 + 0x11c) = uStack_140._4_4_;
                  il2cpp_runtime_glue(lVar6 + 0x110,0);
                  uVar5 = "main.quit";
                  uVar4 = "exit";
                  uVar3 = "Quit";
                  uVar2 = "Common.Quit";
                  uStack_158 = 0;
                  uStack_150 = 0;
                  uStack_168 = 0;
                  uStack_160 = 0;
                  uStack_170 = "QUIT";
                  il2cpp_runtime_glue(&uStack_170);
                  uStack_168 = uVar3;
                  il2cpp_runtime_glue(&uStack_168,uVar3);
                  uStack_160 = uVar2;
                  il2cpp_runtime_glue(&uStack_160,uVar2);
                  uStack_158 = uVar5;
                  il2cpp_runtime_glue(&uStack_158,uVar5);
                  uStack_150 = uVar4;
                  il2cpp_runtime_glue(&uStack_150,uVar4);
                  if (7 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined8 *)(lVar6 + 0x158) = uStack_150;
                    *(undefined4 *)(lVar6 + 0x148) = (undefined4)uStack_160;
                    *(undefined4 *)(lVar6 + 0x14c) = uStack_160._4_4_;
                    *(undefined4 *)(lVar6 + 0x150) = (undefined4)uStack_158;
                    *(undefined4 *)(lVar6 + 0x154) = uStack_158._4_4_;
                    *(undefined4 *)(lVar6 + 0x138) = (undefined4)uStack_170;
                    *(undefined4 *)(lVar6 + 0x13c) = uStack_170._4_4_;
                    *(undefined4 *)(lVar6 + 0x140) = (undefined4)uStack_168;
                    *(undefined4 *)(lVar6 + 0x144) = uStack_168._4_4_;
                    il2cpp_runtime_glue(lVar6 + 0x138,0);
                    **(long **)(TypeInfo_AottgMainMenuPanel + 0xb8) = lVar6;
                    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgMainMenuPanel + 0xb8),lVar6);
                    lVar6 = il2cpp_glue_02274930(TypeInfo_FooterIcon,5);
                    uVar3 = "main.quests";
                    uVar2 = "UI/Icons/Intro/UserIcon";
                    uStack_188 = 0;
                    uStack_180 = 0;
                    uStack_178 = 0;
                    uStack_190 = "Quests";
                    il2cpp_runtime_glue(&uStack_190);
                    uStack_188 = 0;
                    il2cpp_runtime_glue(&uStack_188,0);
                    uStack_180 = uVar2;
                    il2cpp_runtime_glue(&uStack_180,uVar2);
                    uStack_178 = uVar3;
                    il2cpp_runtime_glue(&uStack_178,uVar3);
                    if (lVar6 == 0) goto LAB_041c531d;
                    if (*(int *)(lVar6 + 0x18) != 0) {
                      *(undefined4 *)(lVar6 + 0x30) = (undefined4)uStack_180;
                      *(undefined4 *)(lVar6 + 0x34) = uStack_180._4_4_;
                      *(undefined4 *)(lVar6 + 0x38) = (undefined4)uStack_178;
                      *(undefined4 *)(lVar6 + 0x3c) = uStack_178._4_4_;
                      *(undefined4 *)(lVar6 + 0x20) = (undefined4)uStack_190;
                      *(undefined4 *)(lVar6 + 0x24) = uStack_190._4_4_;
                      *(undefined4 *)(lVar6 + 0x28) = (undefined4)uStack_188;
                      *(undefined4 *)(lVar6 + 0x2c) = uStack_188._4_4_;
                      il2cpp_runtime_glue(lVar6 + 0x20,0);
                      uVar4 = "main.leaderboard";
                      uVar3 = "UI/Icons/Intro/LeaderboardIcon";
                      uVar2 = "MainMenu.LeaderboardPopup.Title";
                      uStack_1a8 = 0;
                      uStack_1a0 = 0;
                      uStack_198 = 0;
                      uStack_1b0 = "Leaderboard";
                      il2cpp_runtime_glue(&uStack_1b0);
                      uStack_1a8 = uVar2;
                      il2cpp_runtime_glue(&uStack_1a8,uVar2);
                      uStack_1a0 = uVar3;
                      il2cpp_runtime_glue(&uStack_1a0,uVar3);
                      uStack_198 = uVar4;
                      il2cpp_runtime_glue(&uStack_198,uVar4);
                      if (1 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined4 *)(lVar6 + 0x50) = (undefined4)uStack_1a0;
                        *(undefined4 *)(lVar6 + 0x54) = uStack_1a0._4_4_;
                        *(undefined4 *)(lVar6 + 0x58) = (undefined4)uStack_198;
                        *(undefined4 *)(lVar6 + 0x5c) = uStack_198._4_4_;
                        *(undefined4 *)(lVar6 + 0x40) = (undefined4)uStack_1b0;
                        *(undefined4 *)(lVar6 + 0x44) = uStack_1b0._4_4_;
                        *(undefined4 *)(lVar6 + 0x48) = (undefined4)uStack_1a8;
                        *(undefined4 *)(lVar6 + 0x4c) = uStack_1a8._4_4_;
                        il2cpp_runtime_glue(lVar6 + 0x40,0);
                        uVar4 = "main.social";
                        uVar3 = "UI/Icons/Intro/SocialIcon";
                        uVar2 = "Common.Social";
                        uStack_1c8 = 0;
                        uStack_1c0 = 0;
                        uStack_1b8 = 0;
                        uStack_1d0 = "Social";
                        il2cpp_runtime_glue(&uStack_1d0);
                        uStack_1c8 = uVar2;
                        il2cpp_runtime_glue(&uStack_1c8,uVar2);
                        uStack_1c0 = uVar3;
                        il2cpp_runtime_glue(&uStack_1c0,uVar3);
                        uStack_1b8 = uVar4;
                        il2cpp_runtime_glue(&uStack_1b8,uVar4);
                        if (2 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined4 *)(lVar6 + 0x70) = (undefined4)uStack_1c0;
                          *(undefined4 *)(lVar6 + 0x74) = uStack_1c0._4_4_;
                          *(undefined4 *)(lVar6 + 0x78) = (undefined4)uStack_1b8;
                          *(undefined4 *)(lVar6 + 0x7c) = uStack_1b8._4_4_;
                          *(undefined4 *)(lVar6 + 0x60) = (undefined4)uStack_1d0;
                          *(undefined4 *)(lVar6 + 100) = uStack_1d0._4_4_;
                          *(undefined4 *)(lVar6 + 0x68) = (undefined4)uStack_1c8;
                          *(undefined4 *)(lVar6 + 0x6c) = uStack_1c8._4_4_;
                          il2cpp_runtime_glue(lVar6 + 0x60,0);
                          uVar4 = "main.help";
                          uVar3 = "UI/Icons/Intro/ProfileIcon";
                          uVar2 = "Common.Help";
                          uStack_1e8 = 0;
                          uStack_1e0 = 0;
                          uStack_1d8 = 0;
                          uStack_1f0 = "Help";
                          il2cpp_runtime_glue(&uStack_1f0);
                          uStack_1e8 = uVar2;
                          il2cpp_runtime_glue(&uStack_1e8,uVar2);
                          uStack_1e0 = uVar3;
                          il2cpp_runtime_glue(&uStack_1e0,uVar3);
                          uStack_1d8 = uVar4;
                          il2cpp_runtime_glue(&uStack_1d8,uVar4);
                          if (3 < *(uint *)(lVar6 + 0x18)) {
                            *(undefined4 *)(lVar6 + 0x90) = (undefined4)uStack_1e0;
                            *(undefined4 *)(lVar6 + 0x94) = uStack_1e0._4_4_;
                            *(undefined4 *)(lVar6 + 0x98) = (undefined4)uStack_1d8;
                            *(undefined4 *)(lVar6 + 0x9c) = uStack_1d8._4_4_;
                            *(undefined4 *)(lVar6 + 0x80) = (undefined4)uStack_1f0;
                            *(undefined4 *)(lVar6 + 0x84) = uStack_1f0._4_4_;
                            *(undefined4 *)(lVar6 + 0x88) = (undefined4)uStack_1e8;
                            *(undefined4 *)(lVar6 + 0x8c) = uStack_1e8._4_4_;
                            il2cpp_runtime_glue(lVar6 + 0x80,0);
                            uVar3 = "main.patreon";
                            uVar2 = "UI/Icons/Intro/PatreonIcon";
                            uStack_208 = 0;
                            uStack_200 = 0;
                            uStack_1f8 = 0;
                            uStack_210 = "Patreon";
                            il2cpp_runtime_glue(&uStack_210);
                            uStack_208 = 0;
                            il2cpp_runtime_glue(&uStack_208,0);
                            uStack_200 = uVar2;
                            il2cpp_runtime_glue(&uStack_200,uVar2);
                            uStack_1f8 = uVar3;
                            il2cpp_runtime_glue(&uStack_1f8,uVar3);
                            if (4 < *(uint *)(lVar6 + 0x18)) {
                              *(undefined4 *)(lVar6 + 0xb0) = (undefined4)uStack_200;
                              *(undefined4 *)(lVar6 + 0xb4) = uStack_200._4_4_;
                              *(undefined4 *)(lVar6 + 0xb8) = (undefined4)uStack_1f8;
                              *(undefined4 *)(lVar6 + 0xbc) = uStack_1f8._4_4_;
                              *(undefined4 *)(lVar6 + 0xa0) = (undefined4)uStack_210;
                              *(undefined4 *)(lVar6 + 0xa4) = uStack_210._4_4_;
                              *(undefined4 *)(lVar6 + 0xa8) = (undefined4)uStack_208;
                              *(undefined4 *)(lVar6 + 0xac) = uStack_208._4_4_;
                              il2cpp_runtime_glue(lVar6 + 0xa0,0);
                              lVar1 = *(long *)(TypeInfo_AottgMainMenuPanel + 0xb8);
                              *(long *)(lVar1 + 8) = lVar6;
                              il2cpp_runtime_glue(lVar1 + 8);
                              __this = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)
                                       il2cpp_runtime_glue(TypeInfo_Aottg2GisketchLocalizer);
                              Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
                                        (__this,(MethodInfo *)0x0);
                              lVar6 = *(long *)(TypeInfo_AottgMainMenuPanel + 0xb8);
                              *(Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o **)
                               (lVar6 + 0x10) = __this;
                              il2cpp_runtime_glue(lVar6 + 0x10,__this);
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041c531d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


