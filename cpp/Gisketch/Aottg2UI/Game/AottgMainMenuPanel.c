// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.MainMenuOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this, System_String_o* label, System_String_o* searchTitle, System_String_o* localeKey, System_String_o* actionId, System_String_o* icon, const MethodInfo* method);
// 0x181de7b80

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o *__this,System_String_o *label,
               System_String_o *searchTitle,System_String_o *localeKey,System_String_o *actionId,
               System_String_o *icon,MethodInfo *method)

{
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier((void **)__this,label);
  (__this->fields).SearchTitle = searchTitle;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SearchTitle,searchTitle);
  (__this->fields).LocaleKey = localeKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleKey,localeKey);
  (__this->fields).ActionId = actionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ActionId,actionId);
  (__this->fields).Icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Icon,icon);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.MainMenuOption$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption__get_Id (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this, const MethodInfo* method);
// 0x181de7c00

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption__get_Id
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344b12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_184344b12 = '\x01';
  }
  pSVar1 = (__this->fields).Label;
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__Replace_1970e80
                         (pSVar1," ","-",(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.FooterIcon$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this, System_String_o* label, System_String_o* localeKey, System_String_o* sprite, System_String_o* actionId, const MethodInfo* method);
// 0x1816e8730

void
Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon___ctor(Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this, System_String_o* label, System_String_o* localeKey, System_String_o* sprite, System_String_o* actionId, MethodInfo* method)

{
  (__this->fields).Key = key;
  Il2CppCodeGenWriteBarrier((void **)__this,key);
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Label,label);
  (__this->fields).Sprite = sprite;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sprite,sprite);
  (__this->fields).Keywords = keywords;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Keywords,keywords);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.FooterIcon$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon__get_Id (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this, const MethodInfo* method);
// 0x181de7b60

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon__get_Id
          (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).Label;
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___cctor (const MethodInfo* method);
// 0x181defbc0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_184344b13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c);
    Il2CppMethodInitialized_184344b13 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___ctor(Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$<Build>b__28_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__28_1 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* logo, const MethodInfo* method);
// 0x181deb2a0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__28_1
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *logo
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184344b14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI/AoTTG/MainMenu/LogoTextOnly");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuLogoBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-logo-text");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuLogoText");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/AoTTG/MainMenu/LogoBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuLogo");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-logo-blades");
    Il2CppMethodInitialized_184344b14 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Absolute",(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("mainMenuLogoBlades",(System_String_o *)0x0,0.24000001,0.030000001,0.0,2,
                      (MethodInfo *)0x0);
  if (logo != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (logo,"UI/AoTTG/MainMenu/LogoBlades","mainMenuLogo","main-menu-logo-blades",pGVar3,pGVar4,
               (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        "Absolute",(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuLogoText",(System_String_o *)0x0,0.24000001,0.030000001,0.0,1,
                        (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (logo,"UI/AoTTG/MainMenu/LogoTextOnly","mainMenuLogo","main-menu-logo-text",pGVar3,pGVar4,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$<Build>b__28_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__28_3 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x181deb5c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181deb6af: nop 

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__28_3
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *pGVar1;
  System_String_o *pSVar2;
  System_String_o *sprite;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *pGVar3;
  System_String_o *label;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  System_String_o *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184344b15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-footer-");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuFooterIconIntro");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-footer");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuFooterSpriteButton");
    Il2CppMethodInitialized_184344b15 = '\x01';
  }
  uVar6 = 0;
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->FooterIcons;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)0x0) break;
    if ((int)pGVar1->max_length <= (int)uVar6) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->FooterIcons;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)0x0) break;
    if ((uint)pGVar1->max_length <= uVar6) {
      ThrowIndexOutOfRangeException();
    }
    pSVar5 = pGVar1->m_Items[(int)uVar6].fields.Label;
    pSVar2 = pGVar1->m_Items[(int)uVar6].fields.LocaleKey;
    sprite = pGVar1->m_Items[(int)uVar6].fields.Sprite;
    actionId = pGVar1->m_Items[(int)uVar6].fields.ActionId;
    if (Il2CppMethodInitialized_184344b10 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
      Il2CppMethodInitialized_184344b10 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Localizer;
    if (pGVar3 == (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0) break;
    label = (System_String_o *)
            il2cpp_runtime_helper_18001c6b0(0,TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,pGVar3,pSVar2,pSVar5);
    if (pSVar5 == (System_String_o *)0x0) break;
    pSVar4 = System_String__ToLowerInvariant(pSVar5,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_1969e50("main-menu-footer-",pSVar4,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                      ("mainMenuFooterIconIntro","main-menu-footer",0.120000005,0.024,0.009000001,uVar6 + 0x14,
                       (MethodInfo *)0x0);
    if (footer == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    node = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     (footer,sprite,label,actionId,pSVar4,"mainMenuFooterSpriteButton",layout,enter,(MethodInfo *)0x0
                     );
    if (Il2CppMethodInitialized_184344b10 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
      Il2CppMethodInitialized_184344b10 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Localizer;
    if (pGVar3 == (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0) break;
    pSVar5 = (System_String_o *)
             il2cpp_runtime_helper_18001c6b0(0,TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,pGVar3,pSVar2,pSVar5);
    Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
              (node,pSVar5,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
               (System_String_o *)0x0,(System_String_o *)0x0,false,(MethodInfo *)0x0);
    uVar6 = uVar6 + 1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass28_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___ctor(Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass28_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* menu, const MethodInfo* method);
// 0x181dee0f0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *menu,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *pGVar2;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar8;
  
  if (Il2CppMethodInitialized_184344b16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c_Build_b__28_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c_Build_b__28_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass28_0_Build_b__2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-logo-slot");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-panel-visual");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuLogoSlot");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/AoTTG/MainMenu/MainMenuPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-buttons");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-footer");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_184344b16 = '\x01';
  }
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(979.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(1080.0,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Absolute",(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                    ("mainMenuPanel",(System_String_o *)0x0,0.33600003,0.0,0.0,0,(MethodInfo *)0x0);
  if (menu != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (menu,"UI/AoTTG/MainMenu/MainMenuPanel","mainMenuPanel","main-menu-panel-visual",pGVar7,enter,
               (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c);
    }
    pSVar4 = "mainMenuLogoSlot";
    pUVar8 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9__28_1;
    if (pUVar8 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c)
        ;
      }
      pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9;
      pUVar8 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar8,pIVar1,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c_Build_b__28_1,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9__28_1 =
           (System_Action_AottgUi__o *)pUVar8;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9__28_1,pUVar8);
    }
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"FlexStart",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,70.0,
                        0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (menu,pSVar4,(System_Action_AottgUi__o *)pUVar8,"main-menu-logo-slot",pGVar7,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar4 = "default";
    pUVar8 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
    if (pUVar8 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      pUVar8 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar8,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass28_0_Build_b__2
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__2 = (System_Action_AottgUi__o *)pUVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,pUVar8);
    }
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields).brushWidth,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points
                         ((float)((int)pGVar2->max_length + -1) * 74.0 + 118.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"FlexStart",
                          "Absolute",(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-86.0,
                          -360.0,0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (menu,pSVar4,(System_Action_AottgUi__o *)pUVar8,"main-menu-buttons",pGVar7,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c)
        ;
      }
      pSVar4 = "default";
      pUVar8 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9__28_3;
      if (pUVar8 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9;
        pUVar8 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (pUVar8,pIVar1,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c_Build_b__28_3,
                   (MethodInfo *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9__28_3 =
             (System_Action_AottgUi__o *)pUVar8;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9__28_3,pUVar8);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
      }
      if (Il2CppMethodInitialized_184344b0f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
        Il2CppMethodInitialized_184344b0f = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
      }
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->FooterIcons;
      if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)0x0) {
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points
                           ((float)((int)pGVar3->max_length + -1) * 10.0 +
                            (float)(int)pGVar3->max_length * 48.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,"Center",
                            "Absolute",(System_String_o *)0x0,10.0,pGVar5,pGVar6,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,22.0,
                            -1018.0,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (menu,pSVar4,(System_Action_AottgUi__o *)pUVar8,"main-menu-footer",pGVar7,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass28_0$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___Build_b__2 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* buttons, const MethodInfo* method);
// 0x181dee8f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dee91f: nop 

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0___Build_b__2
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *buttons,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *pGVar2;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *pGVar3;
  uint index;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o local_58;
  
  if (Il2CppMethodInitialized_184344b17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    Il2CppMethodInitialized_184344b17 = '\x01';
  }
  index = 0;
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)0x0) break;
    if ((int)pGVar2->max_length <= (int)index) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)0x0) break;
    if ((uint)pGVar2->max_length <= index) {
      ThrowIndexOutOfRangeException();
    }
    pGVar3 = (__this->fields).__4__this;
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *)0x0) break;
    local_58.fields.Label = pGVar2->m_Items[(int)index].fields.Label;
    local_58.fields.SearchTitle = pGVar2->m_Items[(int)index].fields.SearchTitle;
    ppSVar1 = &pGVar2->m_Items[(int)index].fields.LocaleKey;
    local_58.fields.LocaleKey = *ppSVar1;
    local_58.fields.ActionId = ppSVar1[1];
    local_58.fields.Icon = pGVar2->m_Items[(int)index].fields.Icon;
    Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption
              (buttons,&local_58,index,(__this->fields).brushWidth,(pGVar3->fields)._quitActionId,
               (MethodInfo *)0x0);
    index = index + 1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___ctor(Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$<AddOption>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___AddOption_b__0 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181dee9f0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___AddOption_b__0
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *actionId;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344b18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"main.quit");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/Elements/Brush");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-option-");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuBrushButton");
    Il2CppMethodInitialized_184344b18 = '\x01';
  }
  bVar1 = System_String__op_Equality
                    ((__this->fields).option.fields.ActionId,"main.quit",(MethodInfo *)0x0);
  pSVar2 = (__this->fields).option.fields.LocaleKey;
  pSVar3 = (__this->fields).option.fields.Label;
  actionId = (&(__this->fields).option.fields.ActionId)[(ulonglong)bVar1 * 2];
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize(pSVar2,pSVar3,(MethodInfo *)0x0);
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344b12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&" ");
      il2cpp_codegen_initialize_runtime_metadata(&"-");
      Il2CppMethodInitialized_184344b12 = '\x01';
    }
    pSVar3 = (__this->fields).option.fields.Label;
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = System_String__Replace_1970e80
                           (pSVar3," ","-",(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969e50("main-menu-option-",pSVar3,(MethodInfo *)0x0);
        if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             (row,3,pSVar2,actionId,pSVar3,(System_String_o *)0x0,(__this->fields).enter,
                              (__this->fields).option.fields.Icon,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar4->fields).style = "mainMenuBrushButton";
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style,"mainMenuBrushButton");
            (pGVar4->fields).sprite = "UI/Sprites/Elements/Brush";
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).sprite,"UI/Sprites/Elements/Brush");
            bVar1 = System_String__IsNullOrEmpty((__this->fields).option.fields.Icon,(MethodInfo *)0x0);
            (pGVar4->fields).hasIcon = !bVar1;
            pSVar2 = Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize
                               ((__this->fields).option.fields.LocaleKey,
                                (__this->fields).option.fields.SearchTitle,(MethodInfo *)0x0);
            value = Gisketch_Aottg2UI_Code_AottgUi__Search
                              (pSVar2,(System_String_o *)0x0,false,(__this->fields).option.fields.Icon,
                               (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,false,
                               (MethodInfo *)0x0);
            (pGVar4->fields).search = value;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).search,value);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o* __this, System_String_o* quitActionId, const MethodInfo* method);
// 0x1812b8cd0

void
Gisketch_Aottg2UI_Game_AottgMainMenuPanel___ctor_12b8cd0(Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o* __this, System_String_o* quitActionId, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._quitActionId = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._quitActionId,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Build (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181de1d00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181de1e49: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Build
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *pGVar1;
  System_String_o *value;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *value_00;
  uint uVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184344b0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass28_0_Build_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass28_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-panel");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuPanel");
    Il2CppMethodInitialized_184344b0c = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass28_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass28_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    if (Il2CppMethodInitialized_184344b0e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
      Il2CppMethodInitialized_184344b0e = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)0x0) {
      uVar5 = 0;
      uVar4 = uVar5;
      for (; (int)uVar5 < (int)pGVar1->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pGVar1->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        value = pGVar1->m_Items[(int)uVar5].fields.Label;
        bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar2) {
          if (value == (System_String_o *)0x0) goto label_181de2118;
          if ((int)uVar4 < (value->fields)._stringLength) {
            uVar4 = (value->fields)._stringLength;
          }
        }
      }
      (object->fields).brushWidth = (float)(int)uVar4 * 37.0 + 32.0;
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass28_0_Build_b__0
                 ,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(979.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"FlexStart",
                          "FlexStart",(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      contentLayout =
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,36.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__ScaleBox
                           (ui,"main-menu-panel",979.0,1080.0,(System_Action_AottgUi__o *)__this_00,
                            "main-menu-panel",layout,contentLayout,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        value_00 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                             ("mainMenuPanel",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar3->fields).exit = value_00;
          Il2CppCodeGenWriteBarrier(&(pGVar3->fields).exit,value_00);
          return;
        }
      }
    }
  }
label_181de2118:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$AddOption
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption (Gisketch_Aottg2UI_Code_AottgUi_o* buttons, Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option, int32_t index, float brushWidth, System_String_o* quitActionId, const MethodInfo* method);
// 0x181de18e0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption
               (Gisketch_Aottg2UI_Code_AottgUi_o *buttons,
               Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o *option,int32_t index,
               float brushWidth,System_String_o *quitActionId,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *object;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *value;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0_AddOption_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0);
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuBrushIntro");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-buttons");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-button-");
    Il2CppMethodInitialized_184344b0d = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0) {
    pSVar3 = (option->fields).SearchTitle;
    pSVar1 = (option->fields).LocaleKey;
    pSVar2 = (option->fields).ActionId;
    (object->fields).option.fields.Label = (option->fields).Label;
    (object->fields).option.fields.SearchTitle = pSVar3;
    pSVar3 = (option->fields).Icon;
    (object->fields).option.fields.LocaleKey = pSVar1;
    (object->fields).option.fields.ActionId = pSVar2;
    (object->fields).option.fields.Icon = pSVar3;
    Il2CppCodeGenWriteBarrier((void **)&object->fields,(void *)0x0);
    (object->fields).quitActionId = quitActionId;
    Il2CppCodeGenWriteBarrier(&(object->fields).quitActionId,quitActionId);
    value = Gisketch_Aottg2UI_Code_AottgUi__Motion
                      ("mainMenuBrushIntro","main-menu-buttons",0.120000005,0.030000001,0.027000003,
                       index + 10,(MethodInfo *)0x0);
    (object->fields).enter = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).enter,value);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0_AddOption_b__0,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344b12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&" ");
      il2cpp_codegen_initialize_runtime_metadata(&"-");
      Il2CppMethodInitialized_184344b12 = '\x01';
    }
    pSVar3 = (object->fields).option.fields.Label;
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = System_String__Replace_1970e80
                           (pSVar3," ","-",(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969e50("main-menu-button-",pSVar3,(MethodInfo *)0x0);
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(brushWidth,(MethodInfo *)0x0);
        height = Gisketch_Aottg2UI_Code_AottgUi__Points(118.0,(MethodInfo *)0x0);
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,"FlexStart",
                            "Absolute",(System_String_o *)0x0,0.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                            (float)-index * 74.0,0.0,1.0,(MethodInfo *)0x0);
        if (buttons != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (buttons,"default",(System_Action_AottgUi__o *)__this,pSVar3,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$BrushWidth
// il2cpp: float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__BrushWidth (const MethodInfo* method);
// 0x181de1c20

float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__BrushWidth(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *pGVar1;
  System_String_o *value;
  bool bVar2;
  int32_t iVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184344b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    Il2CppMethodInitialized_184344b0e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)0x0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      if ((int)pGVar1->max_length <= (int)uVar4) {
        return (float)iVar3 * 37.0 + 32.0;
      }
      if ((uint)pGVar1->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      value = pGVar1->m_Items[(int)uVar4].fields.Label;
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (!bVar2) {
        if (value == (System_String_o *)0x0) break;
        if (iVar3 < (value->fields)._stringLength) {
          iVar3 = (value->fields)._stringLength;
        }
      }
      uVar4 = uVar4 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$FooterWidth
// il2cpp: float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__FooterWidth (const MethodInfo* method);
// 0x181de2130

float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__FooterWidth(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *pGVar1;
  
  if (Il2CppMethodInitialized_184344b0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    Il2CppMethodInitialized_184344b0f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->FooterIcons;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)0x0) {
    return (float)((int)pGVar1->max_length + -1) * 10.0 + (float)(int)pGVar1->max_length * 48.0;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$Localize
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x181de21b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Localize
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *pGVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344b10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
    Il2CppMethodInitialized_184344b10 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Localizer;
  if (pGVar1 != (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0) {
    pSVar2 = (System_String_o *)
             il2cpp_runtime_helper_18001c6b0(0,TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,pGVar1,key,fallback);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___cctor (const MethodInfo* method);
// 0x181de2240

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *value;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *value_00;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *__this;
  System_String_o *local_218;
  System_String_o *pSStack_210;
  System_String_o *pSStack_208;
  System_String_o *pSStack_200;
  System_String_o *local_1f8;
  System_String_o *pSStack_1f0;
  System_String_o *pSStack_1e8;
  System_String_o *pSStack_1e0;
  System_String_o *local_1d8;
  System_String_o *pSStack_1d0;
  System_String_o *pSStack_1c8;
  System_String_o *pSStack_1c0;
  System_String_o *local_1b8;
  System_String_o *pSStack_1b0;
  System_String_o *pSStack_1a8;
  System_String_o *pSStack_1a0;
  System_String_o *local_198;
  System_String_o *pSStack_190;
  System_String_o *pSStack_188;
  System_String_o *pSStack_180;
  System_String_o *local_178;
  System_String_o *pSStack_170;
  System_String_o *pSStack_168;
  System_String_o *pSStack_160;
  System_String_o *pSStack_158;
  System_String_o *local_150;
  System_String_o *pSStack_148;
  System_String_o *pSStack_140;
  System_String_o *pSStack_138;
  System_String_o *pSStack_130;
  System_String_o *local_128;
  System_String_o *pSStack_120;
  System_String_o *pSStack_118;
  System_String_o *pSStack_110;
  System_String_o *pSStack_108;
  System_String_o *local_100;
  System_String_o *pSStack_f8;
  System_String_o *pSStack_f0;
  System_String_o *pSStack_e8;
  System_String_o *pSStack_e0;
  System_String_o *local_d8;
  System_String_o *pSStack_d0;
  System_String_o *pSStack_c8;
  System_String_o *pSStack_c0;
  System_String_o *pSStack_b8;
  System_String_o *local_b0;
  System_String_o *pSStack_a8;
  System_String_o *pSStack_a0;
  System_String_o *pSStack_98;
  System_String_o *pSStack_90;
  System_String_o *local_88;
  System_String_o *pSStack_80;
  System_String_o *pSStack_78;
  System_String_o *pSStack_70;
  System_String_o *pSStack_68;
  System_String_o *local_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  System_String_o *apSStack_40 [2];
  
  if (Il2CppMethodInitialized_184344b11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&"TUTORIAL");
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"main.patreon");
    il2cpp_codegen_initialize_runtime_metadata(&"Patreon");
    il2cpp_codegen_initialize_runtime_metadata(&"singleplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"home");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"MULTIPLAYER");
    il2cpp_codegen_initialize_runtime_metadata(&"main.tutorial");
    il2cpp_codegen_initialize_runtime_metadata(&"PROFILE");
    il2cpp_codegen_initialize_runtime_metadata(&"main.credits");
    il2cpp_codegen_initialize_runtime_metadata(&"CREDITS");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.SingleplayerButton");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Intro/ProfileIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"exit");
    il2cpp_codegen_initialize_runtime_metadata(&"main.settings");
    il2cpp_codegen_initialize_runtime_metadata(&"QUIT");
    il2cpp_codegen_initialize_runtime_metadata(&"TOOLS");
    il2cpp_codegen_initialize_runtime_metadata(&"main.quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Quests");
    il2cpp_codegen_initialize_runtime_metadata(&"Multiplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"main.multiplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"main.social");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.PatreonButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Profile");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Intro/SocialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"SETTINGS");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Tools");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits");
    il2cpp_codegen_initialize_runtime_metadata(&"Single Player");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Intro/LeaderboardIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"wrench");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.CreditsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Intro/PatreonIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Help");
    il2cpp_codegen_initialize_runtime_metadata(&"SINGLEPLAYER");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.MultiplayerButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Social");
    il2cpp_codegen_initialize_runtime_metadata(&"main.tools");
    il2cpp_codegen_initialize_runtime_metadata(&"main.profile");
    il2cpp_codegen_initialize_runtime_metadata(&"question");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"Help");
    il2cpp_codegen_initialize_runtime_metadata(&"Profile");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Intro/UserIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"trophy");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.QuestButton");
    il2cpp_codegen_initialize_runtime_metadata(&"main.leaderboard");
    il2cpp_codegen_initialize_runtime_metadata(&"main.singleplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"main.quests");
    il2cpp_codegen_initialize_runtime_metadata(&"Leaderboard");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"Tutorial");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.LeaderboardPopup.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.ToolsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Social");
    il2cpp_codegen_initialize_runtime_metadata(&"main.help");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.TutorialButton");
    Il2CppMethodInitialized_184344b11 = '\x01';
  }
  value = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)
          SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array,8);
  pSVar4 = "MainMenu.Intro.TutorialButton";
  pSVar3 = "question";
  pSVar2 = "main.tutorial";
  pSVar1 = "Tutorial";
  pSStack_170 = (System_String_o *)0x0;
  pSStack_168 = (System_String_o *)0x0;
  local_178 = "TUTORIAL";
  pSStack_160 = (System_String_o *)0x0;
  pSStack_158 = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&local_178,"TUTORIAL");
  pSStack_170 = pSVar1;
  Il2CppCodeGenWriteBarrier(&pSStack_170,pSVar1);
  pSStack_168 = pSVar4;
  Il2CppCodeGenWriteBarrier(&pSStack_168,pSVar4);
  pSStack_160 = pSVar2;
  Il2CppCodeGenWriteBarrier(&pSStack_160,pSVar2);
  pSStack_158 = pSVar3;
  Il2CppCodeGenWriteBarrier(&pSStack_158,pSVar3);
  if (value != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0].fields.Label = local_178;
      value->m_Items[0].fields.SearchTitle = pSStack_170;
      value->m_Items[0].fields.LocaleKey = pSStack_168;
      value->m_Items[0].fields.ActionId = pSStack_160;
      value->m_Items[0].fields.Icon = pSStack_158;
      Il2CppCodeGenWriteBarrier((void **)value->m_Items,(void *)0x0);
      pSVar4 = "MainMenu.Intro.SingleplayerButton";
      pSVar3 = "singleplayer";
      pSVar2 = "Single Player";
      pSVar1 = "main.singleplayer";
      pSStack_148 = (System_String_o *)0x0;
      pSStack_140 = (System_String_o *)0x0;
      local_150 = "SINGLEPLAYER";
      pSStack_138 = (System_String_o *)0x0;
      pSStack_130 = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&local_150,"SINGLEPLAYER");
      pSStack_148 = pSVar2;
      Il2CppCodeGenWriteBarrier(&pSStack_148,pSVar2);
      pSStack_140 = pSVar4;
      Il2CppCodeGenWriteBarrier(&pSStack_140,pSVar4);
      pSStack_138 = pSVar1;
      Il2CppCodeGenWriteBarrier(&pSStack_138,pSVar1);
      pSStack_130 = pSVar3;
      Il2CppCodeGenWriteBarrier(&pSStack_130,pSVar3);
      if (1 < (uint)value->max_length) {
        value->m_Items[1].fields.Label = local_150;
        value->m_Items[1].fields.SearchTitle = pSStack_148;
        value->m_Items[1].fields.LocaleKey = pSStack_140;
        value->m_Items[1].fields.ActionId = pSStack_138;
        value->m_Items[1].fields.Icon = pSStack_130;
        Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 1),(void *)0x0);
        pSVar4 = "MainMenu.Intro.MultiplayerButton";
        pSVar3 = "multiplayer";
        pSVar2 = "main.multiplayer";
        pSVar1 = "Multiplayer";
        pSStack_120 = (System_String_o *)0x0;
        pSStack_118 = (System_String_o *)0x0;
        local_128 = "MULTIPLAYER";
        pSStack_110 = (System_String_o *)0x0;
        pSStack_108 = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&local_128,"MULTIPLAYER");
        pSStack_120 = pSVar1;
        Il2CppCodeGenWriteBarrier(&pSStack_120,pSVar1);
        pSStack_118 = pSVar4;
        Il2CppCodeGenWriteBarrier(&pSStack_118,pSVar4);
        pSStack_110 = pSVar2;
        Il2CppCodeGenWriteBarrier(&pSStack_110,pSVar2);
        pSStack_108 = pSVar3;
        Il2CppCodeGenWriteBarrier(&pSStack_108,pSVar3);
        if (2 < (uint)value->max_length) {
          value->m_Items[2].fields.Label = local_128;
          value->m_Items[2].fields.SearchTitle = pSStack_120;
          value->m_Items[2].fields.LocaleKey = pSStack_118;
          value->m_Items[2].fields.ActionId = pSStack_110;
          value->m_Items[2].fields.Icon = pSStack_108;
          Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 2),(void *)0x0);
          pSVar4 = "home";
          pSVar3 = "Profile";
          pSVar2 = "main.profile";
          pSVar1 = "Common.Profile";
          pSStack_f8 = (System_String_o *)0x0;
          pSStack_f0 = (System_String_o *)0x0;
          local_100 = "PROFILE";
          pSStack_e8 = (System_String_o *)0x0;
          pSStack_e0 = (System_String_o *)0x0;
          Il2CppCodeGenWriteBarrier(&local_100,"PROFILE");
          pSStack_f8 = pSVar3;
          Il2CppCodeGenWriteBarrier(&pSStack_f8,pSVar3);
          pSStack_f0 = pSVar1;
          Il2CppCodeGenWriteBarrier(&pSStack_f0,pSVar1);
          pSStack_e8 = pSVar2;
          Il2CppCodeGenWriteBarrier(&pSStack_e8,pSVar2);
          pSStack_e0 = pSVar4;
          Il2CppCodeGenWriteBarrier(&pSStack_e0,pSVar4);
          if (3 < (uint)value->max_length) {
            value->m_Items[3].fields.Label = local_100;
            value->m_Items[3].fields.SearchTitle = pSStack_f8;
            value->m_Items[3].fields.LocaleKey = pSStack_f0;
            value->m_Items[3].fields.ActionId = pSStack_e8;
            value->m_Items[3].fields.Icon = pSStack_e0;
            Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 3),(void *)0x0);
            pSVar4 = "gear";
            pSVar3 = "Settings";
            pSVar2 = "main.settings";
            pSVar1 = "Common.Settings";
            pSStack_d0 = (System_String_o *)0x0;
            pSStack_c8 = (System_String_o *)0x0;
            local_d8 = "SETTINGS";
            pSStack_c0 = (System_String_o *)0x0;
            pSStack_b8 = (System_String_o *)0x0;
            Il2CppCodeGenWriteBarrier(&local_d8,"SETTINGS");
            pSStack_d0 = pSVar3;
            Il2CppCodeGenWriteBarrier(&pSStack_d0,pSVar3);
            pSStack_c8 = pSVar1;
            Il2CppCodeGenWriteBarrier(&pSStack_c8,pSVar1);
            pSStack_c0 = pSVar2;
            Il2CppCodeGenWriteBarrier(&pSStack_c0,pSVar2);
            pSStack_b8 = pSVar4;
            Il2CppCodeGenWriteBarrier(&pSStack_b8,pSVar4);
            if (4 < (uint)value->max_length) {
              value->m_Items[4].fields.Label = local_d8;
              value->m_Items[4].fields.SearchTitle = pSStack_d0;
              value->m_Items[4].fields.LocaleKey = pSStack_c8;
              value->m_Items[4].fields.ActionId = pSStack_c0;
              value->m_Items[4].fields.Icon = pSStack_b8;
              Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 4),(void *)0x0);
              pSVar4 = "MainMenu.Intro.ToolsButton";
              pSVar3 = "main.tools";
              pSVar2 = "wrench";
              pSVar1 = "Tools";
              pSStack_a8 = (System_String_o *)0x0;
              pSStack_a0 = (System_String_o *)0x0;
              local_b0 = "TOOLS";
              pSStack_98 = (System_String_o *)0x0;
              pSStack_90 = (System_String_o *)0x0;
              Il2CppCodeGenWriteBarrier(&local_b0,"TOOLS");
              pSStack_a8 = pSVar1;
              Il2CppCodeGenWriteBarrier(&pSStack_a8,pSVar1);
              pSStack_a0 = pSVar4;
              Il2CppCodeGenWriteBarrier(&pSStack_a0,pSVar4);
              pSStack_98 = pSVar3;
              Il2CppCodeGenWriteBarrier(&pSStack_98,pSVar3);
              pSStack_90 = pSVar2;
              Il2CppCodeGenWriteBarrier(&pSStack_90,pSVar2);
              if (5 < (uint)value->max_length) {
                value->m_Items[5].fields.Label = local_b0;
                value->m_Items[5].fields.SearchTitle = pSStack_a8;
                value->m_Items[5].fields.LocaleKey = pSStack_a0;
                value->m_Items[5].fields.ActionId = pSStack_98;
                value->m_Items[5].fields.Icon = pSStack_90;
                Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 5),(void *)0x0);
                pSVar4 = "MainMenu.Intro.CreditsButton";
                pSVar3 = "Credits";
                pSVar2 = "main.credits";
                pSVar1 = "trophy";
                pSStack_80 = (System_String_o *)0x0;
                pSStack_78 = (System_String_o *)0x0;
                local_88 = "CREDITS";
                pSStack_70 = (System_String_o *)0x0;
                pSStack_68 = (System_String_o *)0x0;
                Il2CppCodeGenWriteBarrier(&local_88,"CREDITS");
                pSStack_80 = pSVar3;
                Il2CppCodeGenWriteBarrier(&pSStack_80,pSVar3);
                pSStack_78 = pSVar4;
                Il2CppCodeGenWriteBarrier(&pSStack_78,pSVar4);
                pSStack_70 = pSVar2;
                Il2CppCodeGenWriteBarrier(&pSStack_70,pSVar2);
                pSStack_68 = pSVar1;
                Il2CppCodeGenWriteBarrier(&pSStack_68,pSVar1);
                if (6 < (uint)value->max_length) {
                  value->m_Items[6].fields.Label = local_88;
                  value->m_Items[6].fields.SearchTitle = pSStack_80;
                  value->m_Items[6].fields.LocaleKey = pSStack_78;
                  value->m_Items[6].fields.ActionId = pSStack_70;
                  value->m_Items[6].fields.Icon = pSStack_68;
                  Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 6),(void *)0x0);
                  pSVar4 = "Quit";
                  pSVar3 = "exit";
                  pSVar2 = "main.quit";
                  pSVar1 = "Common.Quit";
                  pSStack_58 = (System_String_o *)0x0;
                  pSStack_50 = (System_String_o *)0x0;
                  local_60 = "QUIT";
                  pSStack_48 = (System_String_o *)0x0;
                  apSStack_40[0] = (System_String_o *)0x0;
                  Il2CppCodeGenWriteBarrier(&local_60,"QUIT");
                  pSStack_58 = pSVar4;
                  Il2CppCodeGenWriteBarrier(&pSStack_58,pSVar4);
                  pSStack_50 = pSVar1;
                  Il2CppCodeGenWriteBarrier(&pSStack_50,pSVar1);
                  pSStack_48 = pSVar2;
                  Il2CppCodeGenWriteBarrier(&pSStack_48,pSVar2);
                  apSStack_40[0] = pSVar3;
                  Il2CppCodeGenWriteBarrier(apSStack_40,pSVar3);
                  if (7 < (uint)value->max_length) {
                    value->m_Items[7].fields.Label = local_60;
                    value->m_Items[7].fields.SearchTitle = pSStack_58;
                    value->m_Items[7].fields.LocaleKey = pSStack_50;
                    value->m_Items[7].fields.ActionId = pSStack_48;
                    value->m_Items[7].fields.Icon = apSStack_40[0];
                    Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 7),(void *)0x0);
                    TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options = value;
                    Il2CppCodeGenWriteBarrier
                              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options,
                               value);
                    value_00 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)
                               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array,
                                          5);
                    pSVar3 = "MainMenu.Intro.QuestButton";
                    pSVar2 = "main.quests";
                    pSVar1 = "UI/Icons/Intro/UserIcon";
                    pSStack_210 = (System_String_o *)0x0;
                    pSStack_208 = (System_String_o *)0x0;
                    local_218 = "Quests";
                    pSStack_200 = (System_String_o *)0x0;
                    Il2CppCodeGenWriteBarrier(&local_218,"Quests");
                    pSStack_210 = pSVar3;
                    Il2CppCodeGenWriteBarrier(&pSStack_210,pSVar3);
                    pSStack_208 = pSVar1;
                    Il2CppCodeGenWriteBarrier(&pSStack_208,pSVar1);
                    pSStack_200 = pSVar2;
                    Il2CppCodeGenWriteBarrier(&pSStack_200,pSVar2);
                    if (value_00 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)0x0)
                    goto label_181de2fb1;
                    if ((int)value_00->max_length != 0) {
                      value_00->m_Items[0].fields.Label = local_218;
                      value_00->m_Items[0].fields.LocaleKey = pSStack_210;
                      value_00->m_Items[0].fields.Sprite = pSStack_208;
                      value_00->m_Items[0].fields.ActionId = pSStack_200;
                      Il2CppCodeGenWriteBarrier((void **)value_00->m_Items,(void *)0x0);
                      pSVar3 = "MainMenu.LeaderboardPopup.Title";
                      pSVar2 = "main.leaderboard";
                      pSVar1 = "UI/Icons/Intro/LeaderboardIcon";
                      pSStack_1f0 = (System_String_o *)0x0;
                      pSStack_1e8 = (System_String_o *)0x0;
                      local_1f8 = "Leaderboard";
                      pSStack_1e0 = (System_String_o *)0x0;
                      Il2CppCodeGenWriteBarrier(&local_1f8,"Leaderboard");
                      pSStack_1f0 = pSVar3;
                      Il2CppCodeGenWriteBarrier(&pSStack_1f0,pSVar3);
                      pSStack_1e8 = pSVar1;
                      Il2CppCodeGenWriteBarrier(&pSStack_1e8,pSVar1);
                      pSStack_1e0 = pSVar2;
                      Il2CppCodeGenWriteBarrier(&pSStack_1e0,pSVar2);
                      if (1 < (uint)value_00->max_length) {
                        value_00->m_Items[1].fields.Label = local_1f8;
                        value_00->m_Items[1].fields.LocaleKey = pSStack_1f0;
                        value_00->m_Items[1].fields.Sprite = pSStack_1e8;
                        value_00->m_Items[1].fields.ActionId = pSStack_1e0;
                        Il2CppCodeGenWriteBarrier((void **)(value_00->m_Items + 1),(void *)0x0);
                        pSVar3 = "main.social";
                        pSVar2 = "UI/Icons/Intro/SocialIcon";
                        pSVar1 = "Common.Social";
                        pSStack_1d0 = (System_String_o *)0x0;
                        pSStack_1c8 = (System_String_o *)0x0;
                        local_1d8 = "Social";
                        pSStack_1c0 = (System_String_o *)0x0;
                        Il2CppCodeGenWriteBarrier(&local_1d8,"Social");
                        pSStack_1d0 = pSVar1;
                        Il2CppCodeGenWriteBarrier(&pSStack_1d0,pSVar1);
                        pSStack_1c8 = pSVar2;
                        Il2CppCodeGenWriteBarrier(&pSStack_1c8,pSVar2);
                        pSStack_1c0 = pSVar3;
                        Il2CppCodeGenWriteBarrier(&pSStack_1c0,pSVar3);
                        if (2 < (uint)value_00->max_length) {
                          value_00->m_Items[2].fields.Label = local_1d8;
                          value_00->m_Items[2].fields.LocaleKey = pSStack_1d0;
                          value_00->m_Items[2].fields.Sprite = pSStack_1c8;
                          value_00->m_Items[2].fields.ActionId = pSStack_1c0;
                          Il2CppCodeGenWriteBarrier((void **)(value_00->m_Items + 2),(void *)0x0);
                          pSVar3 = "main.help";
                          pSVar2 = "UI/Icons/Intro/ProfileIcon";
                          pSVar1 = "Common.Help";
                          pSStack_1b0 = (System_String_o *)0x0;
                          pSStack_1a8 = (System_String_o *)0x0;
                          local_1b8 = "Help";
                          pSStack_1a0 = (System_String_o *)0x0;
                          Il2CppCodeGenWriteBarrier(&local_1b8,"Help");
                          pSStack_1b0 = pSVar1;
                          Il2CppCodeGenWriteBarrier(&pSStack_1b0,pSVar1);
                          pSStack_1a8 = pSVar2;
                          Il2CppCodeGenWriteBarrier(&pSStack_1a8,pSVar2);
                          pSStack_1a0 = pSVar3;
                          Il2CppCodeGenWriteBarrier(&pSStack_1a0,pSVar3);
                          if (3 < (uint)value_00->max_length) {
                            value_00->m_Items[3].fields.Label = local_1b8;
                            value_00->m_Items[3].fields.LocaleKey = pSStack_1b0;
                            value_00->m_Items[3].fields.Sprite = pSStack_1a8;
                            value_00->m_Items[3].fields.ActionId = pSStack_1a0;
                            Il2CppCodeGenWriteBarrier((void **)(value_00->m_Items + 3),(void *)0x0);
                            pSVar3 = "MainMenu.Intro.PatreonButton";
                            pSVar2 = "main.patreon";
                            pSVar1 = "UI/Icons/Intro/PatreonIcon";
                            pSStack_190 = (System_String_o *)0x0;
                            pSStack_188 = (System_String_o *)0x0;
                            local_198 = "Patreon";
                            pSStack_180 = (System_String_o *)0x0;
                            Il2CppCodeGenWriteBarrier(&local_198,"Patreon");
                            pSStack_190 = pSVar3;
                            Il2CppCodeGenWriteBarrier(&pSStack_190,pSVar3);
                            pSStack_188 = pSVar1;
                            Il2CppCodeGenWriteBarrier(&pSStack_188,pSVar1);
                            pSStack_180 = pSVar2;
                            Il2CppCodeGenWriteBarrier(&pSStack_180,pSVar2);
                            if (4 < (uint)value_00->max_length) {
                              value_00->m_Items[4].fields.Label = local_198;
                              value_00->m_Items[4].fields.LocaleKey = pSStack_190;
                              value_00->m_Items[4].fields.Sprite = pSStack_188;
                              value_00->m_Items[4].fields.ActionId = pSStack_180;
                              Il2CppCodeGenWriteBarrier((void **)(value_00->m_Items + 4),(void *)0x0);
                              TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->FooterIcons =
                                   value_00;
                              Il2CppCodeGenWriteBarrier
                                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->
                                          FooterIcons,value_00);
                              __this = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)
                                       il2cpp_codegen_object_new
                                                 ((Il2CppClass *)
                                                  TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer
                                                 );
                              Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
                                        ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,
                                         (MethodInfo *)0x0);
                              TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Localizer =
                                   __this;
                              Il2CppCodeGenWriteBarrier
                                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->
                                          Localizer,__this);
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
    ThrowIndexOutOfRangeException();
  }
label_181de2fb1:
  ThrowNullReferenceException();
}


