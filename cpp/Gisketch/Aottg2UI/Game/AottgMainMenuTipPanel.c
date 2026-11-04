// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuTipPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___cctor (const MethodInfo* method);
// 0x181defae0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_184344b25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
    Il2CppMethodInitialized_184344b25 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___ctor(Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* layer, const MethodInfo* method);
// 0x181debb80

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__6_0
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *layer,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_184344b26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c_Build_b__6_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-tip-panel");
    Il2CppMethodInitialized_184344b26 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
  }
  style = "mainMenuTipPanel";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9__6_1;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c_Build_b__6_1,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9__6_1 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9__6_1,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(600.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,10.0,-10.0,
                      0.0,0.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("mainMenuTipPanel",(System_String_o *)0x0,0.28,0.0,0.0,0x28,(MethodInfo *)0x0);
  if (layer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (layer,style,(System_Action_AottgUi__o *)__this_00,"main-menu-tip-panel",layout,pGVar1,
                        (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuTipPanel",(System_String_o *)0x0,0.12,0.0,0.0,0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).exit = pGVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).exit,pGVar1);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$<Build>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__6_1 (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* tip, const MethodInfo* method);
// 0x181debeb0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__6_1
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *tip,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344b27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-tip-text");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/Elements/Brush");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-tip-bg");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenu.tipText");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipText");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_184344b27 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(720.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(240.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
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
                       (tip,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"mainMenuTipText",
                        "main-menu-tip-text",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).text = "mainMenu.tipText";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,"mainMenu.tipText");
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind,__this_00);
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            "Absolute",(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,40.0,40.0,5.0,10.0,0.0,
                            16.0,0.0,1.0,(MethodInfo *)0x0);
        (pGVar4->fields).layout = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout,pGVar3);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel__Build (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181de3c90

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel__Build
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344b24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c_Build_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlayBody");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-tip-layer");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_184344b24 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
  }
  style = "mainMenuOverlayBody";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9__6_0;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c_Build_b__6_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9__6_0 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9__6_0,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","FlexEnd","Absolute",
                      (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this_00,"main-menu-tip-layer",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___ctor(Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


