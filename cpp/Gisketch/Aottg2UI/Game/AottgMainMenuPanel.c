// Type: Gisketch.Aottg2UI.Game.AottgMainMenuPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.MainMenuOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o __this, System_String_o* id, System_String_o* localeKey, System_String_o* actionId, System_String_o* icon, const MethodInfo* method);
// 0x58c0050

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o *__this,System_String_o *id,
               System_String_o *localeKey,System_String_o *actionId,System_String_o *icon,MethodInfo *method)

{
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).LocaleKey = localeKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleKey);
  (__this->fields).ActionId = actionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ActionId);
  (__this->fields).Icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Icon);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.FooterIcon$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o __this, System_String_o* id, System_String_o* localeKey, System_String_o* sprite, System_String_o* actionId, const MethodInfo* method);
// 0x58c00b0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_o *__this,System_String_o *id,
               System_String_o *localeKey,System_String_o *sprite,System_String_o *actionId,MethodInfo *method
               )

{
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).LocaleKey = localeKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleKey);
  (__this->fields).Sprite = sprite;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sprite);
  (__this->fields).ActionId = actionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ActionId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___cctor (const MethodInfo* method);
// 0x58c0110

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075453ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c);
    Il2CppMethodInitialized_075453ce = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, const MethodInfo* method);
// 0x58c0180

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$<Build>b__29_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__29_1 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* logo, const MethodInfo* method);
// 0x58c0190

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__29_1
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *logo
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_075453cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI/AoTTG/MainMenu/LogoTextOnly");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuLogoBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-logo-text");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuLogoText");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/AoTTG/MainMenu/LogoBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuLogo");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-logo-blades");
    Il2CppMethodInitialized_075453cf = '\x01';
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
  if (logo == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
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
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("mainMenuLogoText",(System_String_o *)0x0,0.24000001,0.030000001,0.0,1,
                      (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Image
            (logo,"UI/AoTTG/MainMenu/LogoTextOnly","mainMenuLogo","main-menu-logo-text",pGVar3,pGVar4,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c$$<Build>b__29_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__29_3 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x58c0430
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c04c3: nop word ptr cs:[rax + rax]
// asm:   0x58c06c7: jmp 0x58c04d0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c___Build_b__29_3
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *sprite;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *pGVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  long lVar5;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_075453d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-footer-");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuFooterIconIntro");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-footer");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuFooterSpriteButton");
    Il2CppMethodInitialized_075453d0 = '\x01';
  }
  lVar5 = 0x38;
  uVar6 = 0;
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor;
  while( true ) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->FooterIcons;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)0x0) break;
    if ((long)(int)pGVar2->max_length <= (long)uVar6) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->FooterIcons;
      if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)0x0) break;
    }
    if ((uint)pGVar2->max_length <= uVar6) {
      ThrowIndexOutOfRangeException();
    }
    pSVar4 = *(System_String_o **)((long)pGVar2->m_Items + lVar5 + -0x38);
    pSVar3 = *(System_String_o **)((long)pGVar2->m_Items + lVar5 + -0x30);
    sprite = *(System_String_o **)((long)pGVar2->m_Items + lVar5 + -0x28);
    actionId = *(System_String_o **)
                ((long)&(((Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)(pGVar2->m_Items + -1)
                         )->obj).klass + lVar5);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar3,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_52f0320("main-menu-footer-",pSVar4,(MethodInfo *)0x0);
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
                      ("mainMenuFooterIconIntro","main-menu-footer",0.120000005,0.024,0.009000001,
                       (int)uVar6 + 0x14,(MethodInfo *)0x0);
    if (footer == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    node = Gisketch_Aottg2UI_Code_AottgUi__SpriteButton
                     (footer,sprite,pSVar3,actionId,pSVar4,"mainMenuFooterSpriteButton",layout,enter,
                      (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
              (node,pSVar3,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
               (System_String_o *)0x0,(System_String_o *)0x0,false,(MethodInfo *)0x0);
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 0x20;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x58bee70

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* menu, const MethodInfo* method);
// 0x58c06f0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *menu,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *pGVar4;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  System_Action_AottgUi__o *pSVar10;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c_StaticFields *pGVar11;
  
  if (Il2CppMethodInitialized_075453d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c_Build_b__29_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c_Build_b__29_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0_Build_b__2);
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
    Il2CppMethodInitialized_075453d1 = '\x01';
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(979.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(1080.0,(MethodInfo *)0x0);
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Absolute",(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                    ("mainMenuPanel",(System_String_o *)0x0,0.33600003,0.0,0.0,0,(MethodInfo *)0x0);
  if (menu == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_058c0df8;
  Gisketch_Aottg2UI_Code_AottgUi__Image
            (menu,"UI/AoTTG/MainMenu/MainMenuPanel","mainMenuPanel","main-menu-panel-visual",pGVar9,enter,
             (MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c);
  }
  pSVar6 = "mainMenuLogoSlot";
  pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields;
  pSVar10 = pGVar11->__9__29_1;
  if (pSVar10 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c);
      pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields;
    }
    pIVar3 = (Il2CppObject *)pGVar11->__9;
    pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar10,pIVar3,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c_Build_b__29_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields;
    pGVar11->__9__29_1 = pSVar10;
    Il2CppCodeGenWriteBarrier(&pGVar11->__9__29_1);
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(747.175,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(543.4,(MethodInfo *)0x0);
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,70.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (menu,pSVar6,pSVar10,"main-menu-logo-slot",pGVar9,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar6 = "default";
  pSVar10 = (__this->fields).__9__2;
  if (pSVar10 == (System_Action_AottgUi__o *)0x0) {
    pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar10,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0_Build_b__2,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = pSVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields).brushWidth,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
  }
  pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options;
  if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)0x0) goto label_058c0df8;
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points
                     ((float)((int)pGVar4->max_length + -1) * 74.0 + 118.0,(MethodInfo *)0x0);
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart","Absolute"
                      ,(System_String_o *)0x0,0.0,pGVar7,pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                      ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-86.0,-360.0,
                      0.0,1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (menu,pSVar6,pSVar10,"main-menu-buttons",pGVar9,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c);
  }
  pSVar6 = "default";
  pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields;
  pSVar10 = pGVar11->__9__29_3;
  if (pSVar10 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c);
      pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields;
    }
    pIVar3 = (Il2CppObject *)pGVar11->__9;
    pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar10,pIVar3,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c_Build_b__29_3,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c->static_fields;
    pGVar11->__9__29_3 = pSVar10;
    Il2CppCodeGenWriteBarrier(&pGVar11->__9__29_3);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor != 0)
    goto label_058c0c0b;
label_058c0da7:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    if (Il2CppMethodInitialized_075453cc != '\0') goto label_058c0c18;
label_058c0db9:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    Il2CppMethodInitialized_075453cc = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0)
    goto label_058c0da7;
label_058c0c0b:
    if (Il2CppMethodInitialized_075453cc == '\0') goto label_058c0db9;
label_058c0c18:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->FooterIcons;
  }
  else {
    pGVar5 = *(Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel)->static_fields + 8);
  }
  if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)0x0) {
    iVar2 = (int)pGVar5->max_length;
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points
                       ((float)(iVar2 + -1) * 10.0 + (float)iVar2 * 48.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",
                        "Absolute",(System_String_o *)0x0,10.0,pGVar7,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,22.0,
                        -1018.0,0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (menu,pSVar6,pSVar10,"main-menu-footer",pGVar9,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_058c0df8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass29_0$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___Build_b__2 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* buttons, const MethodInfo* method);
// 0x58c0e00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58c0e4b: nop dword ptr [rax + rax]
// asm:   0x58c0ee7: jmp 0x58c0e50

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0___Build_b__2
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *buttons,MethodInfo *method)

{
  undefined8 *puVar1;
  uint32_t uVar2;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *pGVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075453d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    Il2CppMethodInitialized_075453d2 = '\x01';
  }
  lVar5 = 0x20;
  uVar4 = 0;
  uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor;
  while( true ) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options;
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)0x0) break;
    if ((long)(int)pGVar3->max_length <= (long)uVar4) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options;
      if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)0x0) break;
    }
    if ((uint)pGVar3->max_length <= uVar4) {
      ThrowIndexOutOfRangeException();
    }
    method_00 = (MethodInfo *)(__this->fields).__4__this;
    if (method_00 == (MethodInfo *)0x0) break;
    puVar1 = (undefined8 *)((long)pGVar3->m_Items + lVar5 + -0x10);
    option.fields.ActionId = (System_String_o *)*puVar1;
    option.fields._0_16_ =
         *(undefined1 (*) [16])
          ((long)&(((Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)(pGVar3->m_Items + -1))
                  ->obj).klass + lVar5);
    option.fields.Icon = (System_String_o *)puVar1[1];
    Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption
              (buttons,option,(int32_t)uVar4,(__this->fields).brushWidth,
               (System_String_o *)method_00->invoker_method,method_00);
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x20;
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass30_0___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x58bf230

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass30_0___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel.<>c__DisplayClass30_0$$<AddOption>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass30_0___AddOption_b__0 (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass30_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58c0f10

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass30_0___AddOption_b__0
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass30_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *actionId;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *text;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_075453d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"main.quit");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/Elements/Brush");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-option-");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuBrushButton");
    Il2CppMethodInitialized_075453d3 = '\x01';
  }
  bVar1 = System_String__op_Equality
                    ((__this->fields).option.fields.ActionId,"main.quit",(MethodInfo *)0x0);
  actionId = (&(__this->fields).option.fields.ActionId)[(ulong)bVar1 * 2];
  pSVar2 = (__this->fields).option.fields.LocaleKey;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
  text = Gisketch_Aottg2UI_Game_AottgBrushButton__DisplayCase(pSVar2,(MethodInfo *)0x0);
  id = System_String__Concat_52f0320
                 ("main-menu-option-",(__this->fields).option.fields.Id,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (row,3,text,actionId,id,(System_String_o *)0x0,(__this->fields).enter,
                        (__this->fields).option.fields.Icon,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).style = "mainMenuBrushButton";
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).style);
      (pGVar3->fields).sprite = "UI/Sprites/Elements/Brush";
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).sprite);
      bVar1 = System_String__IsNullOrEmpty((__this->fields).option.fields.Icon,(MethodInfo *)0x0);
      (pGVar3->fields).hasIcon = !bVar1;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Search
                         (pSVar2,(System_String_o *)0x0,false,(__this->fields).option.fields.Icon,
                          (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,false,
                          (MethodInfo *)0x0);
      (pGVar3->fields).search = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).search);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$get_MainMenuPanelMobileSafeHeight
// il2cpp: float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__get_MainMenuPanelMobileSafeHeight (const MethodInfo* method);
// 0x58beb50

float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__get_MainMenuPanelMobileSafeHeight(MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
  if (bVar1) {
    return 42.0;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o* __this, System_String_o* quitActionId, const MethodInfo* method);
// 0x58beb70

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *__this,System_String_o *quitActionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._quitActionId = quitActionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._quitActionId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Build (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58beba0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__Build
               (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c *method_00;
  float fVar4;
  
  if (Il2CppMethodInitialized_075453c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0_Build_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-panel");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuPanel");
    Il2CppMethodInitialized_075453c9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass29_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    }
    fVar4 = Gisketch_Aottg2UI_Game_AottgMainMenuPanel__BrushWidth((MethodInfo *)method_00);
    (__this_00->fields).brushWidth = fVar4;
    bVar1 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass29_0_Build_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(979.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"FlexStart",
                        "FlexStart",(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
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
      if (bVar1) {
        fVar4 = 1122.0;
      }
      else {
        fVar4 = 1080.0;
      }
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__ScaleBox
                         (ui,"main-menu-panel",979.0,fVar4,__this_01,"main-menu-panel",layout,
                          contentLayout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("mainMenuPanel",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).exit = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).exit);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$AddOption
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption (Gisketch_Aottg2UI_Code_AottgUi_o* buttons, Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option, int32_t index, float brushWidth, System_String_o* quitActionId, const MethodInfo* method);
// 0x58befb0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel__AddOption
               (Gisketch_Aottg2UI_Code_AottgUi_o *buttons,
               Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_o option,int32_t index,
               float brushWidth,System_String_o *quitActionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass30_0_o *__this;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  System_Action_AottgUi__o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075453ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass30_0_AddOption_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass30_0);
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuBrushIntro");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-buttons");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-button-");
    Il2CppMethodInitialized_075453ca = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass30_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgMainMenuPanel___c__DisplayClass30_0_o *)0x0) {
    (__this->fields).option.fields.ActionId = option.fields.ActionId;
    (__this->fields).option.fields.Icon = option.fields.Icon;
    (__this->fields).option.fields.Id = option.fields.Id;
    (__this->fields).option.fields.LocaleKey = option.fields.LocaleKey;
    Il2CppCodeGenWriteBarrier((void **)&__this->fields);
    (__this->fields).quitActionId = quitActionId;
    Il2CppCodeGenWriteBarrier(&(__this->fields).quitActionId);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuBrushIntro","main-menu-buttons",0.120000005,0.030000001,0.027000003,
                        index + 10,(MethodInfo *)0x0);
    (__this->fields).enter = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).enter);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_c__DisplayClass30_0_AddOption_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    id = System_String__Concat_52f0320
                   ("main-menu-button-",(__this->fields).option.fields.Id,(MethodInfo *)0x0);
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
                (buttons,"default",__this_00,id,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$BrushWidth
// il2cpp: float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__BrushWidth (const MethodInfo* method);
// 0x58bee80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58beeb6: jmp 0x58befa4

float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__BrushWidth(MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *pGVar4;
  ulong uVar5;
  System_String_o *pSVar6;
  ulong uVar7;
  int iVar8;
  System_String_o **ppSVar9;
  float fVar10;
  
  if (Il2CppMethodInitialized_075453cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    Il2CppMethodInitialized_075453cb = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options;
  }
  else {
    pGVar4 = *(Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array **)
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel)->static_fields;
  }
  if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)0x0) {
label_058befa4:
    ThrowNullReferenceException();
  }
  if ((int)pGVar4->max_length < 1) {
    fVar10 = 32.0;
  }
  else {
    uVar5 = pGVar4->max_length & 0xffffffff;
    ppSVar9 = &pGVar4->m_Items[0].fields.LocaleKey;
    uVar7 = 0;
    iVar8 = 0;
    do {
      if (uVar5 <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      pSVar6 = *ppSVar9;
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar6 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar6,(MethodInfo *)0x0);
      if (pSVar6 == (System_String_o *)0x0) goto label_058befa4;
      iVar2 = (pSVar6->fields)._stringLength;
      if (iVar8 < iVar2) {
        iVar8 = iVar2;
      }
      uVar7 = uVar7 + 1;
      uVar3 = (uint)pGVar4->max_length;
      uVar5 = (ulong)uVar3;
      ppSVar9 = ppSVar9 + 4;
    } while ((long)uVar7 < (long)(int)uVar3);
    fVar10 = (float)iVar8 * 37.0 + 32.0;
  }
  return fVar10;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$FooterWidth
// il2cpp: float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__FooterWidth (const MethodInfo* method);
// 0x58bf240

float Gisketch_Aottg2UI_Game_AottgMainMenuPanel__FooterWidth(MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *pGVar3;
  
  if (Il2CppMethodInitialized_075453cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    Il2CppMethodInitialized_075453cc = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->FooterIcons;
  }
  else {
    pGVar3 = *(Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel)->static_fields + 8);
  }
  if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (int)pGVar3->max_length;
  return (float)(iVar2 + -1) * 10.0 + (float)iVar2 * 48.0;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuPanel$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___cctor (const MethodInfo* method);
// 0x58bf2e0

void Gisketch_Aottg2UI_Game_AottgMainMenuPanel___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_StaticFields *pGVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *pGVar5;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *pGVar6;
  System_String_o *pSStack_1d0;
  System_String_o *pSStack_1c8;
  System_String_o *pSStack_1c0;
  System_String_o *pSStack_1b8;
  System_String_o *pSStack_1b0;
  System_String_o *pSStack_1a8;
  System_String_o *pSStack_1a0;
  System_String_o *pSStack_198;
  System_String_o *pSStack_190;
  System_String_o *pSStack_188;
  System_String_o *pSStack_180;
  System_String_o *pSStack_178;
  System_String_o *pSStack_170;
  System_String_o *pSStack_168;
  System_String_o *pSStack_160;
  System_String_o *pSStack_158;
  System_String_o *pSStack_150;
  System_String_o *pSStack_148;
  System_String_o *pSStack_140;
  System_String_o *pSStack_138;
  System_String_o *pSStack_130;
  System_String_o *pSStack_128;
  System_String_o *pSStack_120;
  System_String_o *pSStack_118;
  System_String_o *pSStack_110;
  System_String_o *pSStack_108;
  System_String_o *pSStack_100;
  System_String_o *pSStack_f8;
  System_String_o *pSStack_f0;
  System_String_o *pSStack_e8;
  System_String_o *pSStack_e0;
  System_String_o *pSStack_d8;
  System_String_o *pSStack_d0;
  System_String_o *pSStack_c8;
  System_String_o *pSStack_c0;
  System_String_o *pSStack_b8;
  System_String_o *pSStack_b0;
  System_String_o *pSStack_a8;
  System_String_o *pSStack_a0;
  System_String_o *pSStack_98;
  System_String_o *pSStack_90;
  System_String_o *pSStack_88;
  System_String_o *pSStack_80;
  System_String_o *pSStack_78;
  System_String_o *pSStack_70;
  System_String_o *pSStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_075453cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"main.patreon");
    il2cpp_codegen_initialize_runtime_metadata(&"leaderboard");
    il2cpp_codegen_initialize_runtime_metadata(&"singleplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"home");
    il2cpp_codegen_initialize_runtime_metadata(&"tools");
    il2cpp_codegen_initialize_runtime_metadata(&"credits");
    il2cpp_codegen_initialize_runtime_metadata(&"main.tutorial");
    il2cpp_codegen_initialize_runtime_metadata(&"main.credits");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.SingleplayerButton");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Intro/ProfileIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"exit");
    il2cpp_codegen_initialize_runtime_metadata(&"main.settings");
    il2cpp_codegen_initialize_runtime_metadata(&"patreon");
    il2cpp_codegen_initialize_runtime_metadata(&"main.quit");
    il2cpp_codegen_initialize_runtime_metadata(&"profile");
    il2cpp_codegen_initialize_runtime_metadata(&"main.multiplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"social");
    il2cpp_codegen_initialize_runtime_metadata(&"main.social");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.PatreonButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Profile");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Intro/SocialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Intro/LeaderboardIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"wrench");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Intro/PatreonIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"settings");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Help");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.MultiplayerButton");
    il2cpp_codegen_initialize_runtime_metadata(&"main.tools");
    il2cpp_codegen_initialize_runtime_metadata(&"main.profile");
    il2cpp_codegen_initialize_runtime_metadata(&"question");
    il2cpp_codegen_initialize_runtime_metadata(&"help");
    il2cpp_codegen_initialize_runtime_metadata(&"quests");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"quit");
    il2cpp_codegen_initialize_runtime_metadata(&"tutorial");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Intro/UserIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"trophy");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.QuestButton");
    il2cpp_codegen_initialize_runtime_metadata(&"main.leaderboard");
    il2cpp_codegen_initialize_runtime_metadata(&"main.singleplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"main.quests");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Credits");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.LeaderboardPopup.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.ToolsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Social");
    il2cpp_codegen_initialize_runtime_metadata(&"main.help");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Intro.TutorialButton");
    Il2CppMethodInitialized_075453cd = '\x01';
  }
  pGVar5 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array,8);
  pSVar4 = "question";
  pSVar3 = "main.tutorial";
  pSVar2 = "MainMenu.Intro.TutorialButton";
  pSStack_48 = (System_String_o *)0x0;
  pSStack_40 = (System_String_o *)0x0;
  pSStack_38 = (System_String_o *)0x0;
  pSStack_50 = "tutorial";
  Il2CppCodeGenWriteBarrier(&pSStack_50);
  pSStack_48 = pSVar2;
  Il2CppCodeGenWriteBarrier(&pSStack_48);
  pSStack_40 = pSVar3;
  Il2CppCodeGenWriteBarrier(&pSStack_40);
  pSStack_38 = pSVar4;
  Il2CppCodeGenWriteBarrier(&pSStack_38);
  if (pGVar5 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_MainMenuOption_array *)0x0) {
label_058c004a:
    ThrowNullReferenceException();
  }
  if ((int)pGVar5->max_length != 0) {
    pGVar5->m_Items[0].fields.ActionId = pSStack_40;
    pGVar5->m_Items[0].fields.Icon = pSStack_38;
    pGVar5->m_Items[0].fields.Id = pSStack_50;
    pGVar5->m_Items[0].fields.LocaleKey = pSStack_48;
    Il2CppCodeGenWriteBarrier((void **)pGVar5->m_Items);
    pSVar4 = "singleplayer";
    pSVar3 = "main.singleplayer";
    pSVar2 = "MainMenu.Intro.SingleplayerButton";
    pSStack_68 = (System_String_o *)0x0;
    pSStack_60 = (System_String_o *)0x0;
    pSStack_58 = (System_String_o *)0x0;
    pSStack_70 = "singleplayer";
    Il2CppCodeGenWriteBarrier(&pSStack_70);
    pSStack_68 = pSVar2;
    Il2CppCodeGenWriteBarrier(&pSStack_68);
    pSStack_60 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pSStack_60);
    pSStack_58 = pSVar4;
    Il2CppCodeGenWriteBarrier(&pSStack_58);
    if ((pGVar5->max_length & 0xfffffffe) != 0) {
      pGVar5->m_Items[1].fields.ActionId = pSStack_60;
      pGVar5->m_Items[1].fields.Icon = pSStack_58;
      pGVar5->m_Items[1].fields.Id = pSStack_70;
      pGVar5->m_Items[1].fields.LocaleKey = pSStack_68;
      Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 1));
      pSVar4 = "multiplayer";
      pSVar3 = "main.multiplayer";
      pSVar2 = "MainMenu.Intro.MultiplayerButton";
      pSStack_88 = (System_String_o *)0x0;
      pSStack_80 = (System_String_o *)0x0;
      pSStack_78 = (System_String_o *)0x0;
      pSStack_90 = "multiplayer";
      Il2CppCodeGenWriteBarrier(&pSStack_90);
      pSStack_88 = pSVar2;
      Il2CppCodeGenWriteBarrier(&pSStack_88);
      pSStack_80 = pSVar3;
      Il2CppCodeGenWriteBarrier(&pSStack_80);
      pSStack_78 = pSVar4;
      Il2CppCodeGenWriteBarrier(&pSStack_78);
      if (2 < (uint)pGVar5->max_length) {
        pGVar5->m_Items[2].fields.ActionId = pSStack_80;
        pGVar5->m_Items[2].fields.Icon = pSStack_78;
        pGVar5->m_Items[2].fields.Id = pSStack_90;
        pGVar5->m_Items[2].fields.LocaleKey = pSStack_88;
        Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 2));
        pSVar4 = "main.profile";
        pSVar3 = "home";
        pSVar2 = "Common.Profile";
        pSStack_a8 = (System_String_o *)0x0;
        pSStack_a0 = (System_String_o *)0x0;
        pSStack_98 = (System_String_o *)0x0;
        pSStack_b0 = "profile";
        Il2CppCodeGenWriteBarrier(&pSStack_b0);
        pSStack_a8 = pSVar2;
        Il2CppCodeGenWriteBarrier(&pSStack_a8);
        pSStack_a0 = pSVar4;
        Il2CppCodeGenWriteBarrier(&pSStack_a0);
        pSStack_98 = pSVar3;
        Il2CppCodeGenWriteBarrier(&pSStack_98);
        if ((pGVar5->max_length & 0xfffffffc) != 0) {
          pGVar5->m_Items[3].fields.ActionId = pSStack_a0;
          pGVar5->m_Items[3].fields.Icon = pSStack_98;
          pGVar5->m_Items[3].fields.Id = pSStack_b0;
          pGVar5->m_Items[3].fields.LocaleKey = pSStack_a8;
          Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 3));
          pSVar4 = "main.settings";
          pSVar3 = "gear";
          pSVar2 = "Common.Settings";
          pSStack_c8 = (System_String_o *)0x0;
          pSStack_c0 = (System_String_o *)0x0;
          pSStack_b8 = (System_String_o *)0x0;
          pSStack_d0 = "settings";
          Il2CppCodeGenWriteBarrier(&pSStack_d0);
          pSStack_c8 = pSVar2;
          Il2CppCodeGenWriteBarrier(&pSStack_c8);
          pSStack_c0 = pSVar4;
          Il2CppCodeGenWriteBarrier(&pSStack_c0);
          pSStack_b8 = pSVar3;
          Il2CppCodeGenWriteBarrier(&pSStack_b8);
          if (4 < (uint)pGVar5->max_length) {
            pGVar5->m_Items[4].fields.ActionId = pSStack_c0;
            pGVar5->m_Items[4].fields.Icon = pSStack_b8;
            pGVar5->m_Items[4].fields.Id = pSStack_d0;
            pGVar5->m_Items[4].fields.LocaleKey = pSStack_c8;
            Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 4));
            pSVar4 = "wrench";
            pSVar3 = "main.tools";
            pSVar2 = "MainMenu.Intro.ToolsButton";
            pSStack_e8 = (System_String_o *)0x0;
            pSStack_e0 = (System_String_o *)0x0;
            pSStack_d8 = (System_String_o *)0x0;
            pSStack_f0 = "tools";
            Il2CppCodeGenWriteBarrier(&pSStack_f0);
            pSStack_e8 = pSVar2;
            Il2CppCodeGenWriteBarrier(&pSStack_e8);
            pSStack_e0 = pSVar3;
            Il2CppCodeGenWriteBarrier(&pSStack_e0);
            pSStack_d8 = pSVar4;
            Il2CppCodeGenWriteBarrier(&pSStack_d8);
            if (5 < (uint)pGVar5->max_length) {
              pGVar5->m_Items[5].fields.ActionId = pSStack_e0;
              pGVar5->m_Items[5].fields.Icon = pSStack_d8;
              pGVar5->m_Items[5].fields.Id = pSStack_f0;
              pGVar5->m_Items[5].fields.LocaleKey = pSStack_e8;
              Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 5));
              pSVar4 = "trophy";
              pSVar3 = "main.credits";
              pSVar2 = "Common.Credits";
              pSStack_108 = (System_String_o *)0x0;
              pSStack_100 = (System_String_o *)0x0;
              pSStack_f8 = (System_String_o *)0x0;
              pSStack_110 = "credits";
              Il2CppCodeGenWriteBarrier(&pSStack_110);
              pSStack_108 = pSVar2;
              Il2CppCodeGenWriteBarrier(&pSStack_108);
              pSStack_100 = pSVar3;
              Il2CppCodeGenWriteBarrier(&pSStack_100);
              pSStack_f8 = pSVar4;
              Il2CppCodeGenWriteBarrier(&pSStack_f8);
              if (6 < (uint)pGVar5->max_length) {
                pGVar5->m_Items[6].fields.ActionId = pSStack_100;
                pGVar5->m_Items[6].fields.Icon = pSStack_f8;
                pGVar5->m_Items[6].fields.Id = pSStack_110;
                pGVar5->m_Items[6].fields.LocaleKey = pSStack_108;
                Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 6));
                pSVar4 = "main.quit";
                pSVar3 = "exit";
                pSVar2 = "Common.Quit";
                pSStack_128 = (System_String_o *)0x0;
                pSStack_120 = (System_String_o *)0x0;
                pSStack_118 = (System_String_o *)0x0;
                pSStack_130 = "quit";
                Il2CppCodeGenWriteBarrier(&pSStack_130);
                pSStack_128 = pSVar2;
                Il2CppCodeGenWriteBarrier(&pSStack_128);
                pSStack_120 = pSVar4;
                Il2CppCodeGenWriteBarrier(&pSStack_120);
                pSStack_118 = pSVar3;
                Il2CppCodeGenWriteBarrier(&pSStack_118);
                if ((pGVar5->max_length & 0xfffffff8) != 0) {
                  pGVar5->m_Items[7].fields.ActionId = pSStack_120;
                  pGVar5->m_Items[7].fields.Icon = pSStack_118;
                  pGVar5->m_Items[7].fields.Id = pSStack_130;
                  pGVar5->m_Items[7].fields.LocaleKey = pSStack_128;
                  Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + 7));
                  TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options = pGVar5;
                  Il2CppCodeGenWriteBarrier
                            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields->Options);
                  pGVar6 = (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)
                           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array,5);
                  pSVar4 = "main.quests";
                  pSVar3 = "UI/Icons/Intro/UserIcon";
                  pSVar2 = "MainMenu.Intro.QuestButton";
                  pSStack_148 = (System_String_o *)0x0;
                  pSStack_140 = (System_String_o *)0x0;
                  pSStack_138 = (System_String_o *)0x0;
                  pSStack_150 = "quests";
                  Il2CppCodeGenWriteBarrier(&pSStack_150);
                  pSStack_148 = pSVar2;
                  Il2CppCodeGenWriteBarrier(&pSStack_148);
                  pSStack_140 = pSVar3;
                  Il2CppCodeGenWriteBarrier(&pSStack_140);
                  pSStack_138 = pSVar4;
                  Il2CppCodeGenWriteBarrier(&pSStack_138);
                  if (pGVar6 == (Gisketch_Aottg2UI_Game_AottgMainMenuPanel_FooterIcon_array *)0x0)
                  goto label_058c004a;
                  if ((int)pGVar6->max_length != 0) {
                    pGVar6->m_Items[0].fields.Sprite = pSStack_140;
                    pGVar6->m_Items[0].fields.ActionId = pSStack_138;
                    pGVar6->m_Items[0].fields.Id = pSStack_150;
                    pGVar6->m_Items[0].fields.LocaleKey = pSStack_148;
                    Il2CppCodeGenWriteBarrier((void **)pGVar6->m_Items);
                    pSVar4 = "main.leaderboard";
                    pSVar3 = "UI/Icons/Intro/LeaderboardIcon";
                    pSVar2 = "MainMenu.LeaderboardPopup.Title";
                    pSStack_168 = (System_String_o *)0x0;
                    pSStack_160 = (System_String_o *)0x0;
                    pSStack_158 = (System_String_o *)0x0;
                    pSStack_170 = "leaderboard";
                    Il2CppCodeGenWriteBarrier(&pSStack_170);
                    pSStack_168 = pSVar2;
                    Il2CppCodeGenWriteBarrier(&pSStack_168);
                    pSStack_160 = pSVar3;
                    Il2CppCodeGenWriteBarrier(&pSStack_160);
                    pSStack_158 = pSVar4;
                    Il2CppCodeGenWriteBarrier(&pSStack_158);
                    if ((pGVar6->max_length & 0xfffffffe) != 0) {
                      pGVar6->m_Items[1].fields.Sprite = pSStack_160;
                      pGVar6->m_Items[1].fields.ActionId = pSStack_158;
                      pGVar6->m_Items[1].fields.Id = pSStack_170;
                      pGVar6->m_Items[1].fields.LocaleKey = pSStack_168;
                      Il2CppCodeGenWriteBarrier((void **)(pGVar6->m_Items + 1));
                      pSVar4 = "main.social";
                      pSVar3 = "UI/Icons/Intro/SocialIcon";
                      pSVar2 = "Common.Social";
                      pSStack_188 = (System_String_o *)0x0;
                      pSStack_180 = (System_String_o *)0x0;
                      pSStack_178 = (System_String_o *)0x0;
                      pSStack_190 = "social";
                      Il2CppCodeGenWriteBarrier(&pSStack_190);
                      pSStack_188 = pSVar2;
                      Il2CppCodeGenWriteBarrier(&pSStack_188);
                      pSStack_180 = pSVar3;
                      Il2CppCodeGenWriteBarrier(&pSStack_180);
                      pSStack_178 = pSVar4;
                      Il2CppCodeGenWriteBarrier(&pSStack_178);
                      if (2 < (uint)pGVar6->max_length) {
                        pGVar6->m_Items[2].fields.Sprite = pSStack_180;
                        pGVar6->m_Items[2].fields.ActionId = pSStack_178;
                        pGVar6->m_Items[2].fields.Id = pSStack_190;
                        pGVar6->m_Items[2].fields.LocaleKey = pSStack_188;
                        Il2CppCodeGenWriteBarrier((void **)(pGVar6->m_Items + 2));
                        pSVar4 = "main.help";
                        pSVar3 = "UI/Icons/Intro/ProfileIcon";
                        pSVar2 = "Common.Help";
                        pSStack_1a8 = (System_String_o *)0x0;
                        pSStack_1a0 = (System_String_o *)0x0;
                        pSStack_198 = (System_String_o *)0x0;
                        pSStack_1b0 = "help";
                        Il2CppCodeGenWriteBarrier(&pSStack_1b0);
                        pSStack_1a8 = pSVar2;
                        Il2CppCodeGenWriteBarrier(&pSStack_1a8);
                        pSStack_1a0 = pSVar3;
                        Il2CppCodeGenWriteBarrier(&pSStack_1a0);
                        pSStack_198 = pSVar4;
                        Il2CppCodeGenWriteBarrier(&pSStack_198);
                        if ((pGVar6->max_length & 0xfffffffc) != 0) {
                          pGVar6->m_Items[3].fields.Sprite = pSStack_1a0;
                          pGVar6->m_Items[3].fields.ActionId = pSStack_198;
                          pGVar6->m_Items[3].fields.Id = pSStack_1b0;
                          pGVar6->m_Items[3].fields.LocaleKey = pSStack_1a8;
                          Il2CppCodeGenWriteBarrier((void **)(pGVar6->m_Items + 3));
                          pSVar4 = "main.patreon";
                          pSVar3 = "UI/Icons/Intro/PatreonIcon";
                          pSVar2 = "MainMenu.Intro.PatreonButton";
                          pSStack_1c8 = (System_String_o *)0x0;
                          pSStack_1c0 = (System_String_o *)0x0;
                          pSStack_1b8 = (System_String_o *)0x0;
                          pSStack_1d0 = "patreon";
                          Il2CppCodeGenWriteBarrier(&pSStack_1d0);
                          pSStack_1c8 = pSVar2;
                          Il2CppCodeGenWriteBarrier(&pSStack_1c8);
                          pSStack_1c0 = pSVar3;
                          Il2CppCodeGenWriteBarrier(&pSStack_1c0);
                          pSStack_1b8 = pSVar4;
                          Il2CppCodeGenWriteBarrier(&pSStack_1b8);
                          if (4 < (uint)pGVar6->max_length) {
                            pGVar6->m_Items[4].fields.Sprite = pSStack_1c0;
                            pGVar6->m_Items[4].fields.ActionId = pSStack_1b8;
                            pGVar6->m_Items[4].fields.Id = pSStack_1d0;
                            pGVar6->m_Items[4].fields.LocaleKey = pSStack_1c8;
                            Il2CppCodeGenWriteBarrier((void **)(pGVar6->m_Items + 4));
                            pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel->static_fields;
                            pGVar1->FooterIcons = pGVar6;
                            Il2CppCodeGenWriteBarrier(&pGVar1->FooterIcons);
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


