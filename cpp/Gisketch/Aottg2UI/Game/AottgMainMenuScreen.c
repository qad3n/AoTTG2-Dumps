// Type: Gisketch.Aottg2UI.Game.AottgMainMenuScreen
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___cctor (const MethodInfo* method);
// 0x181defc30

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o *__this;
  
  if (Il2CppMethodInitialized_184344b22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c);
    Il2CppMethodInitialized_184344b22 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->static_fields->__9,__this)
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___ctor(Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* account, const MethodInfo* method);
// 0x181debe40

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___Build_b__6_0
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *account,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileBanner_o *component;
  
  if (Il2CppMethodInitialized_184344b23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner);
    Il2CppMethodInitialized_184344b23 = '\x01';
  }
  component = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component,(MethodInfo *)0x0);
  if (account != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (account,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x181de3480

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344b1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_184344b1f = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x181de3370

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344b20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184344b20 = '\x01';
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
// 0x181de2fc0

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen__Build
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgMainMenuPanel_o *component;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o *component_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184344b21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c_Build_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"main.quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-layer");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_184344b21 = '\x01';
  }
  component = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuPanel);
  pSVar1 = "main.quit";
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component,(MethodInfo *)0x0);
  (component->fields)._quitActionId = pSVar1;
  Il2CppCodeGenWriteBarrier(&(component->fields)._quitActionId,pSVar1);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
    component_00 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel);
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component_00,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component_00,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c);
    }
    pSVar1 = "default";
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->static_fields->__9__6_0;
    if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->static_fields->__9;
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c_Build_b__6_0,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->static_fields->__9__6_0 =
           (System_Action_AottgUi__o *)__this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c->static_fields->__9__6_0,__this_00);
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
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,pSVar1,(System_Action_AottgUi__o *)__this_00,"account-banner-layer",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuTipPanel",(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).enter = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).enter,pGVar3);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("mainMenuTipPanel",(System_String_o *)0x0,0.12,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar2->fields).exit = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).exit,pGVar3);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgMainMenuScreen___ctor(Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


