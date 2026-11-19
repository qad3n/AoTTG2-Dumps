// Type: Gisketch.Aottg2UI.Game.AottgMainMenuScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___cctor (const MethodInfo* method);
// 0x58c1b60

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075453dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c);
    Il2CppMethodInitialized_075453dd = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o* __this, const MethodInfo* method);
// 0x58c1bd0

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$<Build>b__7_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___Build_b__7_0 (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* account, const MethodInfo* method);
// 0x58c1be0

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___Build_b__7_0
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *account,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileBanner_o *__this_00;
  
  if (Il2CppMethodInitialized_075453de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner);
    Il2CppMethodInitialized_075453de = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner);
  Gisketch_Aottg2UI_Game_AottgProfileBanner___ctor(__this_00,(MethodInfo *)0x0);
  if (account == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (account,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x58c1660

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075453da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_075453da = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x58c1690

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075453db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_075453db = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","FlexStart",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen__Build (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58c1760

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen__Build
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_StaticFields *pGVar3;
  System_Action_AottgUi__o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgMenuStatusLabel_o *__this_03;
  
  if (Il2CppMethodInitialized_075453dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c_Build_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"main.quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-layer");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuStatusText");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-status");
    Il2CppMethodInitialized_075453dc = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel___ctor(__this_00,"main.quit",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel);
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c);
    }
    pSVar1 = "default";
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->static_fields;
    __this_02 = pGVar3->__9__7_0;
    if (__this_02 == (System_Action_AottgUi__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c);
        pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->static_fields;
      }
      object = (Il2CppObject *)pGVar3->__9;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_02,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c_Build_b__7_0,
                 (MethodInfo_4A81BE0 *)0x0);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->static_fields;
      pGVar3->__9__7_0 = __this_02;
      Il2CppCodeGenWriteBarrier(&pGVar3->__9__7_0);
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","FlexStart",
                        "Absolute",(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,1.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,pSVar1,__this_02,"account-banner-layer",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuTipPanel",(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).enter = pGVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).enter);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("mainMenuTipPanel",(System_String_o *)0x0,0.12,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar4->fields).exit = pGVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).exit);
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMenuStatusLabel);
      pSVar2 = "mainMenuStatusText";
      pSVar1 = "main-menu-status";
      Gisketch_Aottg2UI_Code_AottgComponent___ctor
                ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_03,(MethodInfo *)0x0);
      (__this_03->fields)._id = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields)._id);
      (__this_03->fields)._style = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this_03->fields)._style);
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_03,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x58c1b50

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


