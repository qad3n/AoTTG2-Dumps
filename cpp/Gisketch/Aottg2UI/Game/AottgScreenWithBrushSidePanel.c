// Type: Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgScreenWithBrushSidePanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass27_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0___ctor(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass27_0$$<BuildSectioned>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0___BuildSectioned_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x181e3f8f0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0___BuildSectioned_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSections
              (__this_00,content,(__this->fields).deferSections,(__this->fields).lazySections,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass27_0$$<BuildSectioned>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0___BuildSectioned_b__1 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x181e3f930

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0___BuildSectioned_b__1
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar1;
  System_String_o *value;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *component;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *value_00;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *value_01;
  System_String_o *value_02;
  
  if (Il2CppMethodInitialized_184344d8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
    Il2CppMethodInitialized_184344d8e = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    value_02 = (pGVar1->fields)._title;
    value_00 = (__this->fields).options;
    value_01 = (pGVar1->fields)._footerOptions;
    value = (pGVar1->fields)._titleKey;
    component = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
    if (Il2CppMethodInitialized_184344d51 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
      il2cpp_codegen_initialize_runtime_metadata(&"OPTIONS");
      Il2CppMethodInitialized_184344d51 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component,(MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrEmpty(value_02,(MethodInfo *)0x0);
    if (bVar2) {
      value_02 = "OPTIONS";
    }
    if (component != (Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *)0x0) {
      (component->fields)._title = value_02;
      Il2CppCodeGenWriteBarrier(&(component->fields)._title,value_02);
      (component->fields)._titleKey = value;
      Il2CppCodeGenWriteBarrier(&(component->fields)._titleKey,value);
      if (value_00 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
        value_00 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
                   SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,0);
      }
      (component->fields)._options = value_00;
      Il2CppCodeGenWriteBarrier(&(component->fields)._options,value_00);
      if (value_01 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
        value_01 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
                   SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,0);
      }
      (component->fields)._footerOptions = value_01;
      Il2CppCodeGenWriteBarrier(&(component->fields)._footerOptions,value_01);
      if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___ctor(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass29_0$$<BuildContentLayer>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___BuildContentLayer_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x181e403a0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___BuildContentLayer_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar1;
  System_Action_AottgUi__o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  float paddingBottom;
  
  if (Il2CppMethodInitialized_184344d8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelScreenScroll");
    il2cpp_codegen_initialize_runtime_metadata(&"-section-owned-content");
    il2cpp_codegen_initialize_runtime_metadata(&"-scroll");
    Il2CppMethodInitialized_184344d8f = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    pSVar2 = (__this->fields).build;
    pSVar4 = (pGVar1->fields)._id;
    if ((pGVar1->fields)._contentScrollMode == 1) {
      pSVar4 = System_String__Concat_1969e50(pSVar4,"-section-owned-content",(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
      }
      if (Il2CppMethodInitialized_184344d7e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Column");
        il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
        Il2CppMethodInitialized_184344d7e = '\x01';
      }
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_181e40a18;
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"clear",pSVar2,pSVar4,pGVar7,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    }
    else {
      pSVar4 = System_String__Concat_1969e50(pSVar4,"-scroll",(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).buildFooter;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
      }
      if (Il2CppMethodInitialized_184344d7d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Column");
        il2cpp_codegen_initialize_runtime_metadata(&"Center");
        Il2CppMethodInitialized_184344d7d = '\x01';
      }
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
        paddingBottom = 56.0;
      }
      else {
        paddingBottom = 188.0;
      }
      contentLayout =
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,48.0,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,98.0,paddingBottom
                      ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_181e40a18;
      Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                (content,"brushSidePanelScreenScroll",pSVar2,pSVar4,pGVar7,contentLayout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    }
    if ((__this->fields).buildFooter == (System_Action_AottgUi__o *)0x0) {
      return;
    }
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
      pSVar2 = (__this->fields).buildFooter;
      if (Il2CppMethodInitialized_184344d7f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass32_0_AddContentFooter_b__0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass32_0);
        il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
        il2cpp_codegen_initialize_runtime_metadata(&"Column");
        il2cpp_codegen_initialize_runtime_metadata(&"default");
        il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
        il2cpp_codegen_initialize_runtime_metadata(&"-content-footer-layer");
        Il2CppMethodInitialized_184344d7f = '\x01';
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass32_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0_o *)0x0) {
        (object->fields).__4__this = pGVar1;
        Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,pGVar1);
        (object->fields).buildFooter = pSVar2;
        Il2CppCodeGenWriteBarrier(&(object->fields).buildFooter,pSVar2);
        __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this_00,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass32_0_AddContentFooter_b__0
                   ,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat_1969e50((pGVar1->fields)._id,"-content-footer-layer",(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column","FlexEnd",(System_String_o *)0x0,
                            "Absolute",(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (content,"default",(System_Action_AottgUi__o *)__this_00,pSVar4,pGVar7,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181e40a18:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass32_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0___ctor(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass32_0$$<AddContentFooter>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0___AddContentFooter_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* layer, const MethodInfo* method);
// 0x181e40b60

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0___AddContentFooter_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *layer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar1;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344d90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass32_0_AddContentFooter_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"-content-footer");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentFooter");
    Il2CppMethodInitialized_184344d90 = '\x01';
  }
  style = "brushSidePanelContentFooter";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass32_0_AddContentFooter_b__1
               ,(MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    id = System_String__Concat_1969e50((pGVar1->fields)._id,"-content-footer",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","Center","Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (layer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (layer,style,(System_Action_AottgUi__o *)__this_00,id,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass32_0$$<AddContentFooter>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0___AddContentFooter_b__1 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x181e40d80

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0___AddContentFooter_b__1
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar1;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-content-footer-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"-content-footer-texture");
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Texture/SeamlessGrunge");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentFooterTexture");
    Il2CppMethodInitialized_184344d91 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    pSVar2 = System_String__Concat_1969e50((pGVar1->fields)._id,"-content-footer-texture",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        "Absolute",(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Image
                (footer,"GisketchUI/Texture/SeamlessGrunge","brushSidePanelContentFooterTexture",pSVar2,pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        if (Il2CppMethodInitialized_184344d80 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          il2cpp_codegen_initialize_runtime_metadata(&"Column");
          il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentFooterTopShadow");
          il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
          il2cpp_codegen_initialize_runtime_metadata(&"Divider");
          il2cpp_codegen_initialize_runtime_metadata(&"-content-footer-top-shadow");
          Il2CppMethodInitialized_184344d80 = '\x01';
        }
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_00->fields).type = "Divider";
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Divider");
          pSVar2 = System_String__Concat_1969e50((pGVar1->fields)._id,"-content-footer-top-shadow",(MethodInfo *)0x0)
          ;
          (__this_00->fields).id = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar2);
          (__this_00->fields).style = "brushSidePanelContentFooterTopShadow";
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"brushSidePanelContentFooterTopShadow");
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(2.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              "Absolute",(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          (__this_00->fields).layout = pGVar5;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,pGVar5);
          Gisketch_Aottg2UI_Code_AottgUi__Add(footer,__this_00,(MethodInfo *)0x0);
          pGVar1 = (__this->fields).__4__this;
          if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
            build = (__this->fields).buildFooter;
            pSVar2 = System_String__Concat_1969e50
                               ((pGVar1->fields)._id,"-content-footer-actions",(MethodInfo *)0x0);
            pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Row","FlexEnd","Center",
                                (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar3,pGVar4,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,20.0,
                                20.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Panel
                      (footer,"default",build,pSVar2,pGVar5,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass34_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0___ctor(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass34_0$$<BuildSections>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0___BuildSections_b__1 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* deferredUi, const MethodInfo* method);
// 0x181e41310
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e41364: jmp 0x181e41332

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0___BuildSections_b__1
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *deferredUi,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar2;
  int index;
  
  index = 0;
  pGVar1 = (__this->fields).__4__this;
  while ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0 &&
         (pGVar2 = (pGVar1->fields)._sections,
         pGVar2 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0))) {
    if ((int)pGVar2->max_length <= index) {
      return;
    }
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) break;
    Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
              (pGVar1,deferredUi,index,(MethodInfo *)0x0);
    index = index + 1;
    pGVar1 = (__this->fields).__4__this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass34_0$$<BuildSections>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0___BuildSections_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* deferredUi, const MethodInfo* method);
// 0x181e412a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e412f1: jmp 0x181e412c1

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0___BuildSections_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *deferredUi,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar2;
  int index;
  
  index = (__this->fields).immediateCount;
  pGVar1 = (__this->fields).__4__this;
  while ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0 &&
         (pGVar2 = (pGVar1->fields)._sections,
         pGVar2 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0))) {
    if ((int)pGVar2->max_length <= index) {
      return;
    }
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) break;
    Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
              (pGVar1,deferredUi,index,(MethodInfo *)0x0);
    index = index + 1;
    pGVar1 = (__this->fields).__4__this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass35_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___ctor(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass35_0$$<BuildSection>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___BuildSection_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x181e41380

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___BuildSection_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar1;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar2;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_88;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o local_68;
  
  if (Il2CppMethodInitialized_184344d92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass35_0_BuildSection_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"card");
    Il2CppMethodInitialized_184344d92 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    if ((pGVar1->fields)._hideSectionChrome != false) {
      pSVar2 = (__this->fields).section.fields._buildContent;
      if (pSVar2 != (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
        local_88.fields._group = (__this->fields).context.fields._group;
        local_88.fields._order = (__this->fields).context.fields._order;
        local_88.fields._12_4_ = *(undefined4 *)&(__this->fields).context.fields.field_0xc;
        local_88.fields._SectionId_k__BackingField =
             (__this->fields).context.fields._SectionId_k__BackingField;
        local_88.fields._SectionTitle_k__BackingField =
             (__this->fields).context.fields._SectionTitle_k__BackingField;
        (*(code *)(pSVar2->fields).invoke_impl)
                  ((pSVar2->fields).method_code,panel,&local_88,(pSVar2->fields).method);
      }
      return;
    }
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
      local_88.fields._group = (__this->fields).context.fields._group;
      local_88.fields._order = (__this->fields).context.fields._order;
      local_88.fields._12_4_ = *(undefined4 *)&(__this->fields).context.fields.field_0xc;
      local_88.fields._SectionId_k__BackingField = (__this->fields).context.fields._SectionId_k__BackingField;
      local_88.fields._SectionTitle_k__BackingField =
           (__this->fields).context.fields._SectionTitle_k__BackingField;
      local_68.fields._buildContent = (__this->fields).section.fields._buildContent;
      local_68.fields._buildHeaderActions = (__this->fields).section.fields._buildHeaderActions;
      local_68.fields.Id = (__this->fields).section.fields.Id;
      local_68.fields.Label = (__this->fields).section.fields.Label;
      local_68.fields.TextKey = (__this->fields).section.fields.TextKey;
      local_68.fields.Icon = (__this->fields).section.fields.Icon;
      local_68.fields.SearchTitle = (__this->fields).section.fields.SearchTitle;
      local_68.fields.Keywords = (__this->fields).section.fields.Keywords;
      local_68.fields.AutoAddKeywords = (__this->fields).section.fields.AutoAddKeywords;
      local_68.fields.HideSearch = (__this->fields).section.fields.HideSearch;
      local_68.fields.HideHeader = (__this->fields).section.fields.HideHeader;
      local_68.fields._67_5_ = *(undefined5 *)&(__this->fields).section.fields.field_0x43;
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddSectionHeader
                (pGVar1,panel,&local_68,&local_88,(MethodInfo *)0x0);
      style = "card";
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
      if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass35_0_BuildSection_b__1
                   ,(MethodInfo *)0x0);
        (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
      }
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        pSVar3 = (__this->fields).section.fields.Id;
        if (Il2CppMethodInitialized_184344d8c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"-body");
          Il2CppMethodInitialized_184344d8c = '\x01';
        }
        if (Il2CppMethodInitialized_184344d8a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"-section-");
          Il2CppMethodInitialized_184344d8a = '\x01';
        }
        pSVar3 = System_String__Concat_1969b70
                           ((pGVar1->fields)._id,"-section-",pSVar3,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969e50(pSVar3,"-body",(MethodInfo *)0x0);
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,"Stretch",
                            (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (panel,style,(System_Action_AottgUi__o *)__this_00,pSVar3,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass35_0$$<BuildSection>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___BuildSection_b__1 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e416b0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___BuildSection_b__1
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  int32_t iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pSVar1 = (__this->fields).section.fields._buildContent;
  if (pSVar1 != (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
    local_28 = *(undefined4 *)&(__this->fields).context.fields._group;
    uStack_24 = *(undefined4 *)((longlong)&(__this->fields).context.fields._group + 4);
    iStack_20 = (__this->fields).context.fields._order;
    uStack_1c = *(undefined4 *)&(__this->fields).context.fields.field_0xc;
    local_18 = *(undefined4 *)&(__this->fields).context.fields._SectionId_k__BackingField;
    uStack_14 = *(undefined4 *)((longlong)&(__this->fields).context.fields._SectionId_k__BackingField + 4);
    uStack_10 = *(undefined4 *)&(__this->fields).context.fields._SectionTitle_k__BackingField;
    uStack_c = *(undefined4 *)((longlong)&(__this->fields).context.fields._SectionTitle_k__BackingField + 4);
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,local_18,&local_28,(pSVar1->fields).method);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass41_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass41_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass41_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass41_0___ctor(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass41_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass41_0$$<AddSectionHeader>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass41_0___AddSectionHeader_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass41_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* headerRow, const MethodInfo* method);
// 0x181e416f0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass41_0___AddSectionHeader_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass41_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *headerRow,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  System_String_o *pSVar1;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  undefined4 local_28;
  undefined4 uStack_24;
  int32_t iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_184344d93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_184344d93 = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    pSVar1 = (__this->fields).section.fields.Label;
    id = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionHeaderId
                   (__this_00,(__this->fields).section.fields.Id,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344d76 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"slideLeft");
      Il2CppMethodInitialized_184344d76 = '\x01';
    }
    enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                      ("slideLeft",(__this->fields).context.fields._group,0.12,0.01,0.018,
                       (__this->fields).context.fields._order,(MethodInfo *)0x0);
    if (headerRow != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (headerRow,pSVar1,"header",id,(System_String_o *)0x0,enter,
                          (MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        pSVar1 = (__this->fields).section.fields.TextKey;
        (pGVar3->fields).textKey = pSVar1;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).textKey,pSVar1);
        value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           1.0,1.0,(MethodInfo *)0x0);
        (pGVar3->fields).layout = value;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,value);
        pSVar2 = (__this->fields).section.fields._buildHeaderActions;
        if (pSVar2 != (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
          local_28 = *(undefined4 *)&(__this->fields).context.fields._group;
          uStack_24 = *(undefined4 *)((longlong)&(__this->fields).context.fields._group + 4);
          iStack_20 = (__this->fields).context.fields._order;
          uStack_1c = *(undefined4 *)&(__this->fields).context.fields.field_0xc;
          local_18 = *(undefined4 *)&(__this->fields).context.fields._SectionId_k__BackingField;
          uStack_14 = *(undefined4 *)
                       ((longlong)&(__this->fields).context.fields._SectionId_k__BackingField + 4);
          uStack_10 = *(undefined4 *)&(__this->fields).context.fields._SectionTitle_k__BackingField;
          uStack_c = *(undefined4 *)
                      ((longlong)&(__this->fields).context.fields._SectionTitle_k__BackingField + 4);
          (*(code *)(pSVar2->fields).invoke_impl)
                    ((pSVar2->fields).method_code,headerRow,&local_28,(pSVar2->fields).method);
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass43_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_0___ctor(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass43_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_1___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_1___ctor(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass43_1$$<SectionOptions>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_1___SectionOptions_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_1_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e41930

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_1___SectionOptions_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_1_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_0_o *pGVar1;
  System_String_o *sectionId;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344d94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    Il2CppMethodInitialized_184344d94 = '\x01';
  }
  pGVar1 = (__this->fields).CS___8__locals1;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_0_o *)0x0) {
    if (((pGVar1->fields).lazySections != false) &&
       (bVar2 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Select
                          ((context->fields).GameObject,(__this->fields).section.fields.Id,(MethodInfo *)0x0),
       bVar2)) {
      return;
    }
    sectionId = (__this->fields).section.fields.Id;
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    }
    Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
              ((context->fields).GameObject,sectionId,false,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___cctor (const MethodInfo* method);
// 0x181e301f0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar2;
  
  if (Il2CppMethodInitialized_184344d5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"DeferredSidePanelSections");
    Il2CppMethodInitialized_184344d5c = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime->static_fields->_registered ==
      false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    pGVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (pGVar2,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildRuntime,
               (MethodInfo *)0x0);
    if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) goto label_181e303bd;
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (pGVar1,"DeferredSidePanelSections",pGVar2,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime->static_fields->_registered = true;
  }
  if (Il2CppMethodInitialized_184344d63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"LazySidePanelSections");
    Il2CppMethodInitialized_184344d63 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime->static_fields->_registered == false)
  {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    pGVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (pGVar2,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_BuildRuntime,
               (MethodInfo *)0x0);
    if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
label_181e303bd:
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (pGVar1,"LazySidePanelSections",pGVar2,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime->static_fields->_registered = true;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o* sidePanel, System_Action_AottgUi__o* buildContent, System_Action_AottgUi__o* buildContentFooter, const MethodInfo* method);
// 0x181e303d0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *sidePanel,System_Action_AottgUi__o *buildContent,
               System_Action_AottgUi__o *buildContentFooter,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344d78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel");
    Il2CppMethodInitialized_184344d78 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = "brush-side-panel";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,"brush-side-panel");
  (__this->fields)._sidePanel = sidePanel;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sidePanel,sidePanel);
  (__this->fields)._buildContent = buildContent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buildContent,buildContent);
  (__this->fields)._buildContentFooter = buildContentFooter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buildContentFooter,buildContentFooter);
  (__this->fields)._contentScrollMode = 0;
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* title, Gisketch_Aottg2UI_Game_AottgScreenSection_array* sections, int32_t layoutMode, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* footerOptions, System_String_o* id, System_Action_AottgUi__o* buildContentFooter, bool deferScrollSections, bool lazySections, bool hideSectionChrome, System_String_o* titleKey, int32_t contentScrollMode, const MethodInfo* method);
// 0x181e30470

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor_1e30470
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,System_String_o *title,
               Gisketch_Aottg2UI_Game_AottgScreenSection_array *sections,int32_t layoutMode,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions,System_String_o *id,
               System_Action_AottgUi__o *buildContentFooter,bool deferScrollSections,bool lazySections,
               bool hideSectionChrome,System_String_o *titleKey,int32_t contentScrollMode,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344d79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array);
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel");
    il2cpp_codegen_initialize_runtime_metadata(&"OPTIONS");
    Il2CppMethodInitialized_184344d79 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    id = "brush-side-panel";
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    (__this->fields)._id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
    bVar1 = System_String__IsNullOrEmpty(title,(MethodInfo *)0x0);
    if (bVar1) {
      title = "OPTIONS";
    }
    (__this->fields)._title = title;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._title,title);
    (__this->fields)._titleKey = titleKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._titleKey,titleKey);
    if (sections == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      sections = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenSection_array,0);
    }
    (__this->fields)._sections = sections;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._sections,sections);
    (__this->fields)._footerOptions = footerOptions;
    (__this->fields)._layoutMode = layoutMode;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._footerOptions,footerOptions);
    (__this->fields)._buildContentFooter = buildContentFooter;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._buildContentFooter,buildContentFooter);
    (__this->fields)._deferScrollSections = deferScrollSections;
    (__this->fields)._lazySections = lazySections;
    (__this->fields)._hideSectionChrome = hideSectionChrome;
    (__this->fields)._contentScrollMode = contentScrollMode;
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__Build (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e2f340

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__Build
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if ((__this->fields)._sections != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSectioned(__this,ui,(MethodInfo *)0x0);
    return;
  }
  if (Il2CppMethodInitialized_184344d7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_BuildLegacy_b__28_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel-layer");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_184344d7b = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
            (__this,ui,(__this->fields)._buildContent,(__this->fields)._buildContentFooter,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_BuildLegacy_b__28_0,
             (MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  }
  layout = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute((MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",(System_Action_AottgUi__o *)__this_00,"brush-side-panel-layer",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSectioned
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSectioned (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e2ea60

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSectioned
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0_o *object;
  System_String_array *value;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *value_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_184344d7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSidePanelLayoutMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass27_0_BuildSectioned_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass27_0_BuildSectioned_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass27_0);
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel-layer");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"-section-navigator");
    il2cpp_codegen_initialize_runtime_metadata(&"SectionNavigator");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_184344d7a = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass27_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass27_0_o *)0x0)
  goto label_181e2eecf;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  value = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds(__this,(MethodInfo *)0x0);
  if (((__this->fields)._lazySections == false) || ((__this->fields)._layoutMode != 1)) {
    bVar2 = false;
  }
  else {
    pGVar1 = (__this->fields)._sections;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto label_181e2eecf;
    bVar2 = 1 < (int)pGVar1->max_length;
  }
  (object->fields).lazySections = bVar2;
  value_00 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions
                       (__this,bVar2,(MethodInfo *)0x0);
  (object->fields).options = value_00;
  Il2CppCodeGenWriteBarrier(&(object->fields).options,value_00);
  if (Il2CppMethodInitialized_184344d86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_184344d86 = '\x01';
  }
  if ((__this->fields)._deferScrollSections == false) {
label_181e2ec37:
    bVar2 = false;
  }
  else {
    if (((__this->fields)._lazySections != false) && ((__this->fields)._layoutMode == 1)) {
      pGVar1 = (__this->fields)._sections;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto label_181e2eecf;
      if (1 < (int)pGVar1->max_length) goto label_181e2ec37;
    }
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((!bVar2) || ((__this->fields)._layoutMode != 0)) goto label_181e2ec37;
    pGVar1 = (__this->fields)._sections;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto label_181e2eecf;
    bVar2 = 1 < (int)pGVar1->max_length;
  }
  (object->fields).deferSections = bVar2;
  pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (pUVar3,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass27_0_BuildSectioned_b__0
             ,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
            (__this,ui,(System_Action_AottgUi__o *)pUVar3,(__this->fields)._buildContentFooter,
             (MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (pUVar3,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass27_0_BuildSectioned_b__1
             ,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  }
  pGVar4 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute((MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",(System_Action_AottgUi__o *)pUVar3,"brush-side-panel-layer",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).type = "SectionNavigator";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"SectionNavigator");
      pSVar5 = System_String__Concat_1969e50((__this->fields)._id,"-section-navigator",(MethodInfo *)0x0);
      (__this_00->fields).id = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar5);
      pSVar5 = (__this->fields)._id;
      (__this_00->fields).text = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,pSVar5);
      local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSidePanelLayoutMode;
      local_38 = (__this->fields)._layoutMode;
      local_48.monitor = &g_data_ffffffffffffffff;
      pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      (__this_00->fields).value = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,pSVar5);
      (__this_00->fields).options = value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).options,value);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          "Absolute",(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (__this_00->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,pGVar4);
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
label_181e2eecf:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildLegacy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildLegacy (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e2e3d0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildLegacy
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344d7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_BuildLegacy_b__28_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel-layer");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_184344d7b = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
            (__this,ui,(__this->fields)._buildContent,(__this->fields)._buildContentFooter,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_BuildLegacy_b__28_0,
             (MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  }
  layout = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute((MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",(System_Action_AottgUi__o *)__this_00,"brush-side-panel-layer",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildContentLayer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Action_AottgUi__o* build, System_Action_AottgUi__o* buildFooter, const MethodInfo* method);
// 0x181e2e1f0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_Action_AottgUi__o *build,
               System_Action_AottgUi__o *buildFooter,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_184344d7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass29_0_BuildContentLayer_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass29_0);
    il2cpp_codegen_initialize_runtime_metadata(&"-content");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentIntro");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelScreenContent");
    Il2CppMethodInitialized_184344d7c = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass29_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).build = build;
    Il2CppCodeGenWriteBarrier(&(object->fields).build,build);
    (object->fields).buildFooter = buildFooter;
    Il2CppCodeGenWriteBarrier(&(object->fields).buildFooter,buildFooter);
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass29_0_BuildContentLayer_b__0
               ,(MethodInfo *)0x0);
    id = System_String__Concat_1969e50((__this->fields)._id,"-content",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
    }
    layout = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute((MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("brushSidePanelContentIntro",(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"brushSidePanelScreenContent",(System_Action_AottgUi__o *)__this_00,id,layout,pGVar1,
                          (MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("brushSidePanelContentIntro",(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).exit = pGVar1;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).exit,pGVar1);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ContentLayerLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ContentLayerLayout (System_Action_AottgUi__o* buildFooter, bool fillsHeight, const MethodInfo* method);
// 0x181e2f690
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2f704: mov rax, r14

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ContentLayerLayout
          (System_Action_AottgUi__o *buildFooter,bool fillsHeight,MethodInfo *method)

{
  System_String_o *direction;
  System_String_o *alignItems;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  float paddingBottom;
  
  if (Il2CppMethodInitialized_184344d7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    Il2CppMethodInitialized_184344d7d = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  alignItems = "Center";
  direction = "Column";
  height = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  if (fillsHeight) {
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  }
  if (buildFooter == (System_Action_AottgUi__o *)0x0) {
    paddingBottom = 56.0;
  }
  else {
    paddingBottom = 188.0;
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     (direction,(System_String_o *)0x0,alignItems,(System_String_o *)0x0,
                      (System_String_o *)0x0,48.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,98.0,paddingBottom
                      ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionOwnedContentLayerLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOwnedContentLayerLayout (const MethodInfo* method);
// 0x181e2ff90

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOwnedContentLayerLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344d7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344d7e = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddContentFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddContentFooter (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, System_Action_AottgUi__o* buildFooter, const MethodInfo* method);
// 0x181e2dae0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddContentFooter
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,System_Action_AottgUi__o *buildFooter,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344d7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass32_0_AddContentFooter_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass32_0);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"-content-footer-layer");
    Il2CppMethodInitialized_184344d7f = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass32_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass32_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).buildFooter = buildFooter;
    Il2CppCodeGenWriteBarrier(&(object->fields).buildFooter,buildFooter);
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass32_0_AddContentFooter_b__0
               ,(MethodInfo *)0x0);
    id = System_String__Concat_1969e50((__this->fields)._id,"-content-footer-layer",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","FlexEnd",(System_String_o *)0x0,
                        "Absolute",(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"default",(System_Action_AottgUi__o *)__this_00,id,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddFooterTopEdge
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x181e2dd00

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  
  if (Il2CppMethodInitialized_184344d80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentFooterTopShadow");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    il2cpp_codegen_initialize_runtime_metadata(&"Divider");
    il2cpp_codegen_initialize_runtime_metadata(&"-content-footer-top-shadow");
    Il2CppMethodInitialized_184344d80 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Divider";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Divider");
    value = System_String__Concat_1969e50((__this->fields)._id,"-content-footer-top-shadow",(MethodInfo *)0x0);
    (__this_00->fields).id = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,value);
    (__this_00->fields).style = "brushSidePanelContentFooterTopShadow";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"brushSidePanelContentFooterTopShadow");
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(2.0,(MethodInfo *)0x0);
    value_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          "Absolute",(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value_00);
    if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(footer,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSections
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSections (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, bool deferSections, bool lazySections, const MethodInfo* method);
// 0x181e2eee0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSections
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,bool deferSections,bool lazySections,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  System_String_array *value;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  int32_t index;
  
  if (Il2CppMethodInitialized_184344d81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass34_0_BuildSections_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass34_0_BuildSections_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass34_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"DeferredSidePanelSections");
    il2cpp_codegen_initialize_runtime_metadata(&"-scroll");
    il2cpp_codegen_initialize_runtime_metadata(&"-lazy-sections");
    il2cpp_codegen_initialize_runtime_metadata(&"LazySidePanelSections");
    il2cpp_codegen_initialize_runtime_metadata(&"-deferred-sections");
    Il2CppMethodInitialized_184344d81 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass34_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass34_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    if (lazySections) {
      pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar3,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass34_0_BuildSections_b__1
                 ,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969e50((__this->fields)._id,"-scroll",(MethodInfo *)0x0);
      if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
                           (content,(System_Action_AottgUi__o *)pUVar3,pSVar4,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_00->fields).type = "LazySidePanelSections";
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"LazySidePanelSections");
          pSVar4 = System_String__Concat_1969e50((__this->fields)._id,"-lazy-sections",(MethodInfo *)0x0)
          ;
          (__this_00->fields).id = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar4);
          pSVar4 = (__this->fields)._id;
          (__this_00->fields).value = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,pSVar4);
          value = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds(__this,(MethodInfo *)0x0);
          (__this_00->fields).options = value;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).options,value);
          (__this_00->fields).deferredChildren = pGVar5;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).deferredChildren,pGVar5);
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          goto label_181e2f24d;
        }
      }
    }
    else {
      index = 0;
      if (deferSections) {
        iVar2 = 0;
      }
      else {
        pGVar1 = (__this->fields)._sections;
        if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto label_181e2f335;
        iVar2 = (int32_t)pGVar1->max_length;
      }
      (object->fields).immediateCount = iVar2;
      for (; index < (object->fields).immediateCount; index = index + 1) {
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                  (__this,content,index,(MethodInfo *)0x0);
      }
      if (!deferSections) {
        return;
      }
      pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar3,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass34_0_BuildSections_b__0
                 ,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969e50((__this->fields)._id,"-scroll",(MethodInfo *)0x0);
      if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
                           (content,(System_Action_AottgUi__o *)pUVar3,pSVar4,(MethodInfo *)0x0);
        if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          return;
        }
        if (pGVar5->max_length == 0) {
          return;
        }
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_00->fields).type = "DeferredSidePanelSections";
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"DeferredSidePanelSections");
          pSVar4 = System_String__Concat_1969e50((__this->fields)._id,"-deferred-sections",(MethodInfo *)0x0)
          ;
          (__this_00->fields).id = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar4);
          (__this_00->fields).active = true;
          (__this_00->fields).deferredChildren = pGVar5;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).deferredChildren,pGVar5);
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
label_181e2f24d:
          value_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
          (__this_00->fields).layout = value_00;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value_00);
          Gisketch_Aottg2UI_Code_AottgUi__Add(content,__this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_181e2f335:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, int32_t index, const MethodInfo* method);
// 0x181e2e4e0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,int32_t index,MethodInfo *method)

{
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o *pGVar9;
  bool bVar10;
  bool bVar11;
  undefined5 uVar12;
  bool bVar13;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar14;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *value_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  float grow;
  float shrink;
  System_String_o *local_58;
  undefined8 uStack_50;
  System_String_o *local_48;
  System_String_o *apSStack_40 [3];
  
  if (Il2CppMethodInitialized_184344d82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass35_0_BuildSection_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass35_0);
    il2cpp_codegen_initialize_runtime_metadata(&"fade");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    Il2CppMethodInitialized_184344d82 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass35_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o *)0x0) {
label_181e2ea3f:
    ThrowNullReferenceException();
  }
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  if (-1 < index) {
    pGVar2 = (__this->fields)._sections;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto label_181e2ea3f;
    if (index < (int)pGVar2->max_length) {
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
        if ((uint)pGVar2->max_length <= (uint)index) {
          ThrowIndexOutOfRangeException();
        }
        pSVar5 = pGVar2->m_Items[index].fields._buildHeaderActions;
        ppSVar1 = &pGVar2->m_Items[index].fields.Id;
        pSVar14 = *ppSVar1;
        pSVar3 = ppSVar1[1];
        ppSVar1 = &pGVar2->m_Items[index].fields.TextKey;
        pSVar4 = *ppSVar1;
        pSVar6 = ppSVar1[1];
        ppSVar1 = &pGVar2->m_Items[index].fields.SearchTitle;
        pSVar7 = *ppSVar1;
        pSVar8 = ppSVar1[1];
        pGVar9 = pGVar2->m_Items + index;
        bVar13 = (pGVar9->fields).AutoAddKeywords;
        bVar10 = (pGVar9->fields).HideSearch;
        bVar11 = (pGVar9->fields).HideHeader;
        uVar12 = *(undefined5 *)&(pGVar9->fields).field_0x43;
        (object->fields).section.fields._buildContent = pGVar2->m_Items[index].fields._buildContent;
        (object->fields).section.fields._buildHeaderActions = pSVar5;
        (object->fields).section.fields.Id = pSVar14;
        (object->fields).section.fields.Label = pSVar3;
        (object->fields).section.fields.TextKey = pSVar4;
        (object->fields).section.fields.Icon = pSVar6;
        (object->fields).section.fields.SearchTitle = pSVar7;
        (object->fields).section.fields.Keywords = pSVar8;
        (object->fields).section.fields.AutoAddKeywords = bVar13;
        (object->fields).section.fields.HideSearch = bVar10;
        (object->fields).section.fields.HideHeader = bVar11;
        *(undefined5 *)&(object->fields).section.fields.field_0x43 = uVar12;
        Il2CppCodeGenWriteBarrier((void **)&(object->fields).section,(void *)0x0);
        pSVar14 = (__this->fields)._id;
        pSVar3 = (object->fields).section.fields.Id;
        pSVar4 = (object->fields).section.fields.SearchTitle;
        local_58 = (System_String_o *)0x0;
        uStack_50 = 0;
        local_48 = (System_String_o *)0x0;
        apSStack_40[0] = (System_String_o *)0x0;
        if (Il2CppMethodInitialized_184344d75 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"-");
          Il2CppMethodInitialized_184344d75 = '\x01';
        }
        local_58 = System_String__Concat_1969b70(pSVar14,"-",pSVar3,(MethodInfo *)0x0);
        Il2CppCodeGenWriteBarrier(&local_58,local_58);
        local_48 = pSVar3;
        Il2CppCodeGenWriteBarrier(&local_48,pSVar3);
        bVar13 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
        apSStack_40[0] = pSVar3;
        if (!bVar13) {
          apSStack_40[0] = pSVar4;
        }
        Il2CppCodeGenWriteBarrier(apSStack_40,apSStack_40[0]);
        uStack_50 = CONCAT44(uStack_50._4_4_,index * 10 + 0x1e);
        (object->fields).context.fields._group = local_58;
        *(undefined8 *)&(object->fields).context.fields._order = uStack_50;
        (object->fields).context.fields._SectionId_k__BackingField = local_48;
        (object->fields).context.fields._SectionTitle_k__BackingField = apSStack_40[0];
        Il2CppCodeGenWriteBarrier((void **)&(object->fields).context,(void *)0x0);
        __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this_00,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass35_0_BuildSection_b__0
                   ,(MethodInfo *)0x0);
        pSVar14 = (object->fields).section.fields.Id;
        if (Il2CppMethodInitialized_184344d8a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"-section-");
          Il2CppMethodInitialized_184344d8a = '\x01';
        }
        pSVar14 = System_String__Concat_1969b70
                            ((__this->fields)._id,"-section-",pSVar14,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_184344d83 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Column");
          il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
          Il2CppMethodInitialized_184344d83 = '\x01';
        }
        if ((__this->fields)._contentScrollMode == 1) {
          width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          shrink = 1.0;
          grow = 1.0;
          maxWidth = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
        }
        else {
          width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(1120.0,(MethodInfo *)0x0);
          shrink = 0.0;
          grow = 0.0;
          height = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
        }
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,"Stretch",
                            (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,grow,shrink,(MethodInfo *)0x0);
        if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          node = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (content,"default",(System_Action_AottgUi__o *)__this_00,pSVar14,layout
                            ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
          }
          Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion
                    (node,(MethodInfo *)0x0);
          value = Gisketch_Aottg2UI_Code_AottgUi__Motion
                            ("fade",(System_String_o *)0x0,0.15,0.0,0.0,index,(MethodInfo *)0x0
                            );
          if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (node->fields).enter = value;
            Il2CppCodeGenWriteBarrier(&(node->fields).enter,value);
            pSVar14 = (object->fields).section.fields.SearchTitle;
            value_00 = Gisketch_Aottg2UI_Code_AottgUi__Search
                                 (pSVar14,(object->fields).section.fields.Keywords,
                                  (object->fields).section.fields.HideSearch,
                                  (object->fields).section.fields.Icon,"section",
                                  (object->fields).section.fields.Id,pSVar14,
                                  (object->fields).section.fields.AutoAddKeywords,(MethodInfo *)0x0);
            (node->fields).search = value_00;
            Il2CppCodeGenWriteBarrier(&(node->fields).search,value_00);
            (node->fields).active = (__this->fields)._layoutMode == 0 || index == 0;
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionLayout (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, const MethodInfo* method);
// 0x181e2fad0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionLayout
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  float grow;
  float shrink;
  
  if (Il2CppMethodInitialized_184344d83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344d83 = '\x01';
  }
  if ((__this->fields)._contentScrollMode == 1) {
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    shrink = 1.0;
    grow = 1.0;
    maxWidth = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(1120.0,(MethodInfo *)0x0);
    shrink = 0.0;
    grow = 0.0;
    height = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,grow,
                      shrink,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ClearSectionEnterMotion
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x181e2f470
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2f56b: movzx eax, byte ptr [rip + 0x2515813]
// asm:   0x181e2f599: nop dword ptr [rax]
// asm:   0x181e2f5d7: mov rbp, qword ptr [rsp + 0x38]
// asm:   0x181e2f5dc: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x181e2f5e1: mov rdi, qword ptr [rsp + 0x40]

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  bool bVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184344d84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    Il2CppMethodInitialized_184344d84 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (((node->fields).bind == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) ||
       (bVar3 = System_String__IsNullOrEmpty((((node->fields).bind)->fields).visible,(MethodInfo *)0x0), bVar3
       )) {
      (node->fields).enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(node->fields).enter,(void *)0x0);
    }
    pGVar1 = (node->fields).children;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
    }
    if (Il2CppMethodInitialized_184344d85 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
      Il2CppMethodInitialized_184344d85 = '\x01';
    }
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      for (uVar4 = 0; (int)uVar4 < (int)pGVar1->max_length; uVar4 = uVar4 + 1) {
        if ((uint)pGVar1->max_length <= uVar4) goto label_181e2f5ec;
        pGVar2 = pGVar1->m_Items[(int)uVar4];
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
        }
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion
                  (pGVar2,(MethodInfo *)0x0);
      }
    }
    pGVar1 = (node->fields).deferredChildren;
    if (Il2CppMethodInitialized_184344d85 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
      Il2CppMethodInitialized_184344d85 = '\x01';
    }
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      for (uVar4 = 0; (int)uVar4 < (int)pGVar1->max_length; uVar4 = uVar4 + 1) {
        if ((uint)pGVar1->max_length <= uVar4) {
label_181e2f5ec:
          ThrowIndexOutOfRangeException();
        }
        pGVar2 = pGVar1->m_Items[(int)uVar4];
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
        }
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion
                  (pGVar2,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ClearSectionEnterMotion
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, const MethodInfo* method);
// 0x181e2f600
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2f66f: mov rsi, qword ptr [rsp + 0x38]
// asm:   0x181e2f674: mov rbx, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion_1e2f600
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  uint uVar1;
  
  if (Il2CppMethodInitialized_184344d85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    Il2CppMethodInitialized_184344d85 = '\x01';
  }
  if (nodes != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    for (uVar1 = 0; (int)uVar1 < (int)nodes->max_length; uVar1 = uVar1 + 1) {
      if ((uint)nodes->max_length <= uVar1) {
        ThrowIndexOutOfRangeException();
      }
      node = nodes->m_Items[(int)uVar1];
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
      }
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion(node,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ShouldDeferSections
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ShouldDeferSections (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, const MethodInfo* method);
// 0x181e300f0

bool Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ShouldDeferSections
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344d86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_184344d86 = '\x01';
  }
  if ((__this->fields)._deferScrollSections != false) {
    if (((__this->fields)._lazySections != false) && ((__this->fields)._layoutMode == 1)) {
      pGVar1 = (__this->fields)._sections;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto label_181e3017a;
      if (1 < (int)pGVar1->max_length) {
        return false;
      }
    }
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((bVar2) && ((__this->fields)._layoutMode == 0)) {
      pGVar1 = (__this->fields)._sections;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
        return 1 < (int)pGVar1->max_length;
      }
label_181e3017a:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ShouldLazySections
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ShouldLazySections (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, const MethodInfo* method);
// 0x181e30180

bool Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ShouldLazySections
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  
  if (((__this->fields)._lazySections != false) && ((__this->fields)._layoutMode == 1)) {
    pGVar1 = (__this->fields)._sections;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      return 1 < (int)pGVar1->max_length;
    }
    ThrowNullReferenceException();
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddSectionHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddSectionHeader (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, Gisketch_Aottg2UI_Game_AottgScreenSection_o section, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x181e2df00

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddSectionHeader
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,Gisketch_Aottg2UI_Game_AottgScreenSection_o *section,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined5 uVar7;
  int32_t iVar8;
  undefined4 uVar9;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass41_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  
  if (Il2CppMethodInitialized_184344d87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass41_0_AddSectionHeader_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass41_0);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    Il2CppMethodInitialized_184344d87 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass41_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass41_0_o *)0x0) {
    pSVar1 = (section->fields)._buildHeaderActions;
    pSVar10 = (section->fields).Id;
    pSVar11 = (section->fields).Label;
    (object->fields).section.fields._buildContent = (section->fields)._buildContent;
    (object->fields).section.fields._buildHeaderActions = pSVar1;
    pSVar2 = (section->fields).TextKey;
    pSVar3 = (section->fields).Icon;
    (object->fields).section.fields.Id = pSVar10;
    (object->fields).section.fields.Label = pSVar11;
    pSVar10 = (section->fields).SearchTitle;
    pSVar11 = (section->fields).Keywords;
    (object->fields).section.fields.TextKey = pSVar2;
    (object->fields).section.fields.Icon = pSVar3;
    bVar4 = (section->fields).AutoAddKeywords;
    bVar5 = (section->fields).HideSearch;
    bVar6 = (section->fields).HideHeader;
    uVar7 = *(undefined5 *)&(section->fields).field_0x43;
    (object->fields).section.fields.SearchTitle = pSVar10;
    (object->fields).section.fields.Keywords = pSVar11;
    (object->fields).section.fields.AutoAddKeywords = bVar4;
    (object->fields).section.fields.HideSearch = bVar5;
    (object->fields).section.fields.HideHeader = bVar6;
    *(undefined5 *)&(object->fields).section.fields.field_0x43 = uVar7;
    Il2CppCodeGenWriteBarrier((void **)&object->fields,(void *)0x0);
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    iVar8 = (context->fields)._order;
    uVar9 = *(undefined4 *)&(context->fields).field_0xc;
    pSVar10 = (context->fields)._SectionId_k__BackingField;
    pSVar11 = (context->fields)._SectionTitle_k__BackingField;
    (object->fields).context.fields._group = (context->fields)._group;
    (object->fields).context.fields._order = iVar8;
    *(undefined4 *)&(object->fields).context.fields.field_0xc = uVar9;
    (object->fields).context.fields._SectionId_k__BackingField = pSVar10;
    (object->fields).context.fields._SectionTitle_k__BackingField = pSVar11;
    Il2CppCodeGenWriteBarrier((void **)&(object->fields).context,(void *)0x0);
    if ((object->fields).section.fields.HideHeader != false) {
      return;
    }
    if ((object->fields).section.fields._buildHeaderActions ==
        (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
      pSVar10 = (object->fields).section.fields.Label;
      pSVar11 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionHeaderId
                          (__this,(object->fields).section.fields.Id,(MethodInfo *)0x0);
      enter = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__HeaderMotion
                        (&(object->fields).context,(MethodInfo *)0x0);
      if ((panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
         (pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              (panel,pSVar10,"header",pSVar11,(System_String_o *)0x0,enter,
                               (MethodInfo *)0x0),
         pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pSVar10 = (object->fields).section.fields.TextKey;
        (pGVar12->fields).textKey = pSVar10;
        Il2CppCodeGenWriteBarrier(&(pGVar12->fields).textKey,pSVar10);
        return;
      }
    }
    else {
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass41_0_AddSectionHeader_b__0
                 ,(MethodInfo *)0x0);
      pSVar10 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionHeaderId
                          (__this,(object->fields).section.fields.Id,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat_1969e50(pSVar10,"-row",(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","SpaceBetween","Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,16.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (panel,"default",(System_Action_AottgUi__o *)__this_00,pSVar10,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionIds
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, const MethodInfo* method);
// 0x181e2fa00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2faae: jmp 0x181e2fa60

System_String_array *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,MethodInfo *method)

{
  System_String_o *value;
  System_String_array *pSVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344d88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184344d88 = '\x01';
  }
  pGVar2 = (__this->fields)._sections;
  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,(uint32_t)pGVar2->max_length);
    pGVar2 = (__this->fields)._sections;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      uVar3 = 0;
      do {
        if ((int)pGVar2->max_length <= (int)uVar3) {
          return pSVar1;
        }
        pGVar2 = (__this->fields)._sections;
        if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
        if ((uint)pGVar2->max_length <= uVar3) {
label_181e2fac9:
          ThrowIndexOutOfRangeException();
        }
        if (pSVar1 == (System_String_array *)0x0) break;
        if ((uint)pSVar1->max_length <= uVar3) goto label_181e2fac9;
        value = pGVar2->m_Items[(int)uVar3].fields.Id;
        pSVar1->m_Items[(int)uVar3] = value;
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + (int)uVar3,value);
        pGVar2 = (__this->fields)._sections;
        uVar3 = uVar3 + 1;
      } while (pGVar2 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionOptions
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, bool lazySections, const MethodInfo* method);
// 0x181e2fc90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2ff42: jmp 0x181e2fd67

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,bool lazySections,MethodInfo *method
          )

{
  System_String_o **ppSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o *pGVar9;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_Fields *pGVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined5 uVar14;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_0_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar15;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar16;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_1_o *object;
  DG_Tweening_Core_DOSetter_Color2__o *__this_01;
  uint uVar17;
  System_String_o *local_68;
  System_String_o *pSStack_60;
  System_String_o *local_58;
  System_String_o *pSStack_50;
  System_String_o *local_48;
  DG_Tweening_Core_DOSetter_Color2__o *pDStack_40;
  ulonglong local_38;
  System_String_o *pSStack_30;
  
  if (Il2CppMethodInitialized_184344d89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass43_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass43_1_SectionOptions_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass43_1);
    Il2CppMethodInitialized_184344d89 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass43_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_0_o *)0x0) {
    (__this_00->fields).lazySections = lazySections;
    pGVar16 = (__this->fields)._sections;
    if (pGVar16 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      pGVar15 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
                SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,
                           (uint32_t)pGVar16->max_length);
      pGVar16 = (__this->fields)._sections;
      if (pGVar16 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
        uVar17 = 0;
        do {
          if ((int)pGVar16->max_length <= (int)uVar17) {
            return pGVar15;
          }
          object = il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass43_1
                             );
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
          if (object == (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass43_1_o *)0x0) {
label_181e2ff81:
            ThrowNullReferenceException();
          }
          (object->fields).CS___8__locals1 = __this_00;
          Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,__this_00);
          pGVar16 = (__this->fields)._sections;
          if (pGVar16 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto label_181e2ff81;
          if ((uint)pGVar16->max_length <= uVar17) {
label_181e2ff7b:
            ThrowIndexOutOfRangeException();
          }
          pSVar6 = pGVar16->m_Items[(int)uVar17].fields._buildHeaderActions;
          ppSVar1 = &pGVar16->m_Items[(int)uVar17].fields.Id;
          pSVar2 = *ppSVar1;
          pSVar3 = ppSVar1[1];
          ppSVar1 = &pGVar16->m_Items[(int)uVar17].fields.TextKey;
          pSVar4 = *ppSVar1;
          pSVar5 = ppSVar1[1];
          ppSVar1 = &pGVar16->m_Items[(int)uVar17].fields.SearchTitle;
          pSVar7 = *ppSVar1;
          pSVar8 = ppSVar1[1];
          pGVar9 = pGVar16->m_Items + (int)uVar17;
          bVar11 = (pGVar9->fields).AutoAddKeywords;
          bVar12 = (pGVar9->fields).HideSearch;
          bVar13 = (pGVar9->fields).HideHeader;
          uVar14 = *(undefined5 *)&(pGVar9->fields).field_0x43;
          (object->fields).section.fields._buildContent = pGVar16->m_Items[(int)uVar17].fields._buildContent;
          (object->fields).section.fields._buildHeaderActions = pSVar6;
          (object->fields).section.fields.Id = pSVar2;
          (object->fields).section.fields.Label = pSVar3;
          (object->fields).section.fields.TextKey = pSVar4;
          (object->fields).section.fields.Icon = pSVar5;
          (object->fields).section.fields.SearchTitle = pSVar7;
          (object->fields).section.fields.Keywords = pSVar8;
          (object->fields).section.fields.AutoAddKeywords = bVar11;
          (object->fields).section.fields.HideSearch = bVar12;
          (object->fields).section.fields.HideHeader = bVar13;
          *(undefined5 *)&(object->fields).section.fields.field_0x43 = uVar14;
          Il2CppCodeGenWriteBarrier((void **)&object->fields,(void *)0x0);
          pSVar2 = (object->fields).section.fields.Id;
          pSVar3 = (object->fields).section.fields.Label;
          __this_01 = (DG_Tweening_Core_DOSetter_Color2__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
          System_Action_GisketchActionContext____ctor
                    (__this_01,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_c__DisplayClass43_1_SectionOptions_b__0
                     ,(MethodInfo_1387DC0 *)0x0);
          pSVar4 = (object->fields).section.fields.Icon;
          pSVar5 = (object->fields).section.fields.TextKey;
          local_58 = (System_String_o *)0x0;
          pSStack_50 = (System_String_o *)0x0;
          local_48 = (System_String_o *)0x0;
          pDStack_40 = (DG_Tweening_Core_DOSetter_Color2__o *)0x0;
          local_38 = 0;
          pSStack_30 = (System_String_o *)0x0;
          pSStack_60 = (System_String_o *)0x0;
          local_68 = pSVar2;
          Il2CppCodeGenWriteBarrier(&local_68,pSVar2);
          pSStack_60 = pSVar3;
          Il2CppCodeGenWriteBarrier(&pSStack_60,pSVar3);
          local_58 = pSVar5;
          Il2CppCodeGenWriteBarrier(&local_58,pSVar5);
          pDStack_40 = __this_01;
          Il2CppCodeGenWriteBarrier(&pDStack_40,__this_01);
          pSStack_50 = pSVar4;
          Il2CppCodeGenWriteBarrier(&pSStack_50,pSVar4);
          local_48 = (System_String_o *)0x0;
          Il2CppCodeGenWriteBarrier(&local_48,(void *)0x0);
          local_38 = local_38 & 0xffffffffffffff00;
          pSStack_30 = (System_String_o *)0x0;
          Il2CppCodeGenWriteBarrier(&pSStack_30,(void *)0x0);
          if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) goto label_181e2ff81;
          if ((uint)pGVar15->max_length <= uVar17) goto label_181e2ff7b;
          pGVar15->m_Items[(int)uVar17].fields._id = local_68;
          pGVar15->m_Items[(int)uVar17].fields.Label = pSStack_60;
          pGVar10 = &pGVar15->m_Items[(int)uVar17].fields;
          pGVar10->TextKey = local_58;
          pGVar10->Icon = pSStack_50;
          pGVar10 = &pGVar15->m_Items[(int)uVar17].fields;
          pGVar10->ActionId = local_48;
          pGVar10->Action = (System_Action_GisketchActionContext__o *)pDStack_40;
          pGVar10 = &pGVar15->m_Items[(int)uVar17].fields;
          *(ulonglong *)&pGVar10->Searchable = local_38;
          pGVar10->Tooltip = pSStack_30;
          Il2CppCodeGenWriteBarrier((void **)(pGVar15->m_Items + (int)uVar17),(void *)0x0);
          uVar17 = uVar17 + 1;
          pGVar16 = (__this->fields)._sections;
        } while (pGVar16 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionRootId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionRootId (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x181e300a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionRootId
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,System_String_o *sectionId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344d8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-section-");
    Il2CppMethodInitialized_184344d8a = '\x01';
  }
  pSVar1 = System_String__Concat_1969b70
                     ((__this->fields)._id,"-section-",sectionId,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionHeaderId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionHeaderId (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x181e2f980

System_String_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionHeaderId
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,System_String_o *sectionId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344d8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    Il2CppMethodInitialized_184344d8b = '\x01';
  }
  if (Il2CppMethodInitialized_184344d8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-section-");
    Il2CppMethodInitialized_184344d8a = '\x01';
  }
  pSVar1 = System_String__Concat_1969b70
                     ((__this->fields)._id,"-section-",sectionId,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50(pSVar1,"-header",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionBodyId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionBodyId (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x181e2f900

System_String_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionBodyId
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,System_String_o *sectionId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344d8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-body");
    Il2CppMethodInitialized_184344d8c = '\x01';
  }
  if (Il2CppMethodInitialized_184344d8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-section-");
    Il2CppMethodInitialized_184344d8a = '\x01';
  }
  pSVar1 = System_String__Concat_1969b70
                     ((__this->fields)._id,"-section-",sectionId,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50(pSVar1,"-body",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$FullScreenAbsolute
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute (const MethodInfo* method);
// 0x181e2f7f0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344d8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_184344d8d = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Absolute",(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$<BuildLegacy>b__28_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___BuildLegacy_b__28_0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x181e301c0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___BuildLegacy_b__28_0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)(__this->fields)._sidePanel,(MethodInfo *)0x0)
    ;
    return;
  }
  ThrowNullReferenceException();
}


