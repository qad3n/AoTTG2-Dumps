// Type: Gisketch.Aottg2UI.Game.AottgGameCreateScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___cctor (const MethodInfo* method);
// 0x588a990

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075451fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    Il2CppMethodInitialized_075451fb = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, const MethodInfo* method);
// 0x588aa00

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<.cctor>b__5_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c____cctor_b__5_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x588aa10

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c____cctor_b__5_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  
  if (Il2CppMethodInitialized_075451fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateDescriptionScrollLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    Il2CppMethodInitialized_075451fc = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._28_set_ignoreLayout.methodPtr)
                (pUVar1,true,(pUVar1->klass->vtable)._28_set_ignoreLayout.method);
      UnityEngine_GameObject__AddComponent_object_
                (go,(MethodInfo_353B6A0 *)
                    MethodInfo_UnityEngine_GameObject_AddComponent_AottgGameCreateDescriptionScrollLayout);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<RefreshImmediately>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___RefreshImmediately_b__13_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x588aa90

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___RefreshImmediately_b__13_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *component;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075451fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_075451fd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    component = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanel((MethodInfo *)klass);
  }
  else {
    component = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanel((MethodInfo *)klass);
  }
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildContent>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildContent_b__14_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x588ab10

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildContent_b__14_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075451fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildContent_b__14_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-body");
    Il2CppMethodInitialized_075451fe = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  style = "clear";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  __this_00 = pGVar1->__9__14_1;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildContent_b__14_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar1->__9__14_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__14_1);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,"Wrap",28.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,style,__this_00,"game-create-body",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildContent>b__14_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildContent_b__14_1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x588ad00

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildContent_b__14_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075451ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildMain);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-main");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075451ff = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildMain,
             (MethodInfo_4A81BE0 *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,"clear",__this_00,"game-create-main",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandbox>b__38_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandbox_b__38_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* tabId, const MethodInfo* method);
// 0x588ae60

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandbox_b__38_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *tabId,
               MethodInfo *method)

{
  int32_t index;
  bool bVar1;
  System_Globalization_CultureInfo_o *provider;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_01;
  int32_t iStack_c;
  
  if (Il2CppMethodInitialized_07545200 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_07545200 = '\x01';
  }
  iStack_c = 0;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x7;
  bVar1 = System_Int32__TryParse_54b7c80
                    (tabId,7,(System_IFormatProvider_o *)provider,&iStack_c,(MethodInfo *)0x0);
  index = iStack_c;
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSandboxSection(index,method_00);
      if (bVar1) goto label_0588af17;
    }
    else {
      bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectSandboxSection(iStack_c,method_00);
      if (bVar1) {
label_0588af17:
        method_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)method_01);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxPresetActions>b__39_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxPresetActions_b__39_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x588b220
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588b39f: test r15, r15
// asm:   0x588b3a2: jne 0x588b3e9
// asm:   0x588b3a4: jmp 0x588b943
// asm:   0x588b422: jmp 0x588b943

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxPresetActions_b__39_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  System_String_o *id;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  System_String_o *tooltip;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar7;
  System_Action_GisketchActionContext__o *pSVar8;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_Fields *targetAddress;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545201 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxPresetActions_b__39_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass39_0_BuildSandboxPresetActions_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass39_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-preset-name");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.ShowVariableNames.Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.preset.load");
    il2cpp_codegen_initialize_runtime_metadata(&"save");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-preset-favorite");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.ShowVariableNames");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-save-preset");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.preset.save");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-variable-names");
    il2cpp_codegen_initialize_runtime_metadata(&"open");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.SavePreset");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-load-preset");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets");
    Il2CppMethodInitialized_07545201 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass39_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452dc != '\0') goto label_0588b392;
label_0588b3b7:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452dc = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075452dc == '\0') goto label_0588b3b7;
label_0588b392:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o *)0x0)
  goto label_0588b943;
  targetAddress = &__this_00->fields;
  (__this_00->fields).presetName =
       *(System_String_o **)
        ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x80);
  Il2CppCodeGenWriteBarrier(&targetAddress->presetName);
  bVar2 = System_String__IsNullOrEmpty((__this_00->fields).presetName,(MethodInfo *)0x0);
  if (bVar2) {
    if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0588b943;
  }
  else {
    if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0588b943;
    method_00 = (MethodInfo *)targetAddress->presetName;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (actions,(System_String_o *)method_00,"text","game-create-sandbox-preset-name",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pSVar6 = targetAddress->presetName;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsFavoritePreset(pSVar6,method_00);
    pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar8,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass39_0_BuildSandboxPresetActions_b__1
               ,(MethodInfo_4A803E0 *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoriteButton
              (actions,"game-create-sandbox-preset-favorite",bVar2,pSVar8,(MethodInfo *)0x0);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                     (actions,1,"GameCreate.Presets","gameCreate.preset.load","game-create-sandbox-load-preset",
                      (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                      "open",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0588b943;
  (pGVar3->fields).layout = pGVar5;
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                     (actions,1,"Common.SavePreset","gameCreate.preset.save","game-create-sandbox-save-preset",
                      (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                      "save",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0588b943;
  (pGVar3->fields).layout = pGVar5;
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar6 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Sandbox.ShowVariableNames",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452d9 != '\0') goto label_0588b71c;
label_0588b888:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d9 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075452d9 == '\0') goto label_0588b888;
label_0588b71c:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  id = "game-create-sandbox-variable-names";
  pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  pSVar8 = pGVar7->__9__39_2;
  if (pSVar8 == (System_Action_GisketchActionContext__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar7->__9;
    pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar8,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxPresetActions_b__39_2,
               (MethodInfo_4A803E0 *)0x0);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar7->__9__39_2 = pSVar8;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__39_2);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  tooltip = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Sandbox.ShowVariableNames.Tooltip",(MethodInfo *)0x0)
  ;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                     (actions,id,pSVar6,bVar2,pSVar8,(System_String_o *)0x0,tooltip,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(260.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar3->fields).layout = pGVar5;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
    return;
  }
label_0588b943:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxPresetActions>b__39_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxPresetActions_b__39_2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x588ba70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588bbac: jmp 0x588bae3

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxPresetActions_b__39_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545202 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07545202 = '\x01';
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar2 = false;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar2 = System_String__op_Equality
                      (((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_07545286 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545286 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588bafd;
label_0588bb43:
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)method_00);
    if (bVar3) {
label_0588bb51:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames = bVar2
      ;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
      klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
      goto joined_r0x0588bb81;
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588bb43;
label_0588bafd:
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox
                      ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (bVar3) goto label_0588bb51;
  }
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
joined_r0x0588bb81:
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)klass);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)klass);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxGeneral>b__41_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxGeneral_b__41_2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* values, const MethodInfo* method);
// 0x588bc50

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxGeneral_b__41_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *values,MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545203 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    Il2CppMethodInitialized_07545203 = '\x01';
    method = extraout_RDX;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    method = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldById(values,"general.Difficulty",method);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldById(values,"general.Weather",method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x588bcd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588bd04: cmp byte ptr [rip + 0x1cb95ce], 0
// asm:   0x588bd0b: je 0x588bfa2

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar3;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07545204 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.SpawnDistribution");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-preset-label");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawn*");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-controls");
    Il2CppMethodInitialized_07545204 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d9 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->
                            static_fields + 0x21);
  }
  if (cVar1 == '\0') {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("GameCreate.Sandbox.Titans.SpawnDistribution",(MethodInfo *)0x0);
  }
  else {
    pSVar4 = "titan.TitanSpawn*";
  }
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (row,pSVar4,"text","game-create-titans-spawn-preset-label",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  pSVar4 = "clear";
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  __this_00 = pGVar3->__9__44_2;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar3->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_2,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar3->__9__44_2 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar3->__9__44_2);
  }
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (row,pSVar4,__this_00,"game-create-titans-spawn-controls",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* controls, const MethodInfo* method);
// 0x588c020
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588c16e: mov r12, rbx
// asm:   0x588c171: jmp 0x588c17e
// asm:   0x588c23e: cmp byte ptr [rip + 0x1cb8fa8], 0
// asm:   0x588c245: je 0x588c25f
// asm:   0x588c247: test rbx, rbx
// asm:   0x588c24c: jmp 0x588c45e

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *controls,MethodInfo *method)

{
  System_String_array *values;
  Il2CppObject *pIVar1;
  System_String_o *id;
  bool leftAligned;
  System_String_o *pSVar2;
  System_String_array *labels;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  System_Action_GisketchActionContext__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_02;
  
  if (Il2CppMethodInitialized_07545205 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.Spawns.Config");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-custom");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-preset");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.SpawnPresetOptions");
    Il2CppMethodInitialized_07545205 = '\x01';
  }
  method_02 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnPreset((MethodInfo *)method_02);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  values = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->TitanSpawnPresets;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  labels = UI_UIManager__GetLocaleOptions("GameCreate.Sandbox.Titans.SpawnPresetOptions",(MethodInfo *)0x0);
  options = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ChoiceOptions(values,labels,method_00);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  id = "game-create-titans-spawn-preset";
  pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  pSVar3 = pGVar6->__9__44_3;
  if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar6->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_3,
               (MethodInfo_4A803E0 *)0x0);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar6->__9__44_3 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar6->__9__44_3);
  }
  if (controls != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_5268fb0
                       (controls,id,pSVar2,options,pSVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    method_01 = (MethodInfo *)"Checkbox";
    if (Il2CppMethodInitialized_075451ed == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
      Il2CppMethodInitialized_075451ed = '\x01';
      method_01 = (MethodInfo *)"Checkbox";
    }
    "Checkbox" = (System_String_o *)method_01;
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      leftAligned = System_String__op_Equality
                              ((pGVar4->fields).type,(System_String_o *)method_01,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pGVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout_5785cd0(leftAligned,method_01)
      ;
      (pGVar4->fields).layout = pGVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      }
      pSVar2 = "GameCreate.Sandbox.Titans.Spawns.Config";
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
      pSVar3 = pGVar6->__9__44_4;
      if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
          pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
        }
        pIVar1 = (Il2CppObject *)pGVar6->__9;
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (pSVar3,pIVar1,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_4,
                   (MethodInfo_4A803E0 *)0x0);
        pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
        pGVar6->__9__44_4 = pSVar3;
        Il2CppCodeGenWriteBarrier(&pGVar6->__9__44_4);
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey_526a1d0
                         (controls,1,pSVar2,pSVar3,"game-create-titans-spawn-custom",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"gear",
                          (MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(120.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).layout = pGVar5;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_3 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x588c7b0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_3
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *preset;
  bool bVar1;
  System_String_o **ppSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_07545206 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_07545206 = '\x01';
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar2 = &"Default";
  }
  else {
    ppSVar2 = &((context.fields.Node)->fields).value;
  }
  preset = *ppSVar2;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnPreset(preset,method);
  bVar1 = System_String__op_Equality(preset,"Custom",(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenTitanSpawnAfterDropdown
              (context,"game-create-titans-spawn-custom",(MethodInfo *)0x0);
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_4 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x588cc00

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_4
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_07545207 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-custom");
    Il2CppMethodInitialized_07545207 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnPreset("Custom",method);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenTitanSpawnAfterDropdown
            (context,"game-create-titans-spawn-custom",(MethodInfo *)0x0);
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x588cce0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Il2CppClass *pIVar7;
  
  if (Il2CppMethodInitialized_07545208 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_5);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_6);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-armor");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health");
    Il2CppMethodInitialized_07545208 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  pSVar3 = "clear";
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  pSVar6 = pGVar5->__9__44_5;
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pGVar5->__9;
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar6,pIVar2,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_5,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar5->__9__44_5 = pSVar6;
    Il2CppCodeGenWriteBarrier(&pGVar5->__9__44_5);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar7 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar7 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)pIVar7;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar7);
    pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar7);
  }
  else {
    pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar7);
  }
  if (columns == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar3,pSVar6,"game-create-titans-armor",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  pSVar3 = "clear";
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  pSVar6 = pGVar5->__9__44_6;
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pGVar5->__9;
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar6,pIVar2,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_6,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar5->__9__44_6 = pSVar6;
    Il2CppCodeGenWriteBarrier(&pGVar5->__9__44_6);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar7 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar7 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)pIVar7;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar7);
  }
  pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar7);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar3,pSVar6,"game-create-titans-health",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_5 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* armor, const MethodInfo* method);
// 0x588cf70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588d04f: jmp 0x588d219
// asm:   0x588d16d: jmp 0x588d219

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_5
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *armor,MethodInfo *method)

{
  bool bVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  System_String_array *pSVar5;
  MethodInfo *pMVar6;
  MethodInfo *in_R8;
  
  pMVar6 = (MethodInfo *)armor;
  if (Il2CppMethodInitialized_07545209 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanArmorCrawlerEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanChanceWarded");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanArmor");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-armor-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-warded-fields");
    Il2CppMethodInitialized_07545209 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanArmorEnabled(armor,pMVar6);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0588d062;
label_0588d033:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588d03f;
label_0588d081:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0588d033;
label_0588d062:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588d081;
label_0588d03f:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).TitanArmorEnabled, pSVar4 == (Settings_BoolSetting_o *)0x0))
  goto label_0588d219;
  bVar1 = (pSVar4->fields)._value;
  pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar5 == (System_String_array *)0x0) goto label_0588d219;
  if ((int)pSVar5->max_length == 0) goto label_0588d21e;
  pSVar5->m_Items[0] = "titan.TitanArmorCrawlerEnabled";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
  if ((pSVar5->max_length & 0xfffffffe) == 0) goto label_0588d21e;
  pSVar5->m_Items[1] = "titan.TitanArmor";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
  pMVar6 = (MethodInfo *)"game-create-titans-armor-fields";
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40
            (armor,"game-create-titans-armor-fields",bVar1,pSVar5,in_R8);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanWardedEnabled(armor,pMVar6);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588d191;
label_0588d15d:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588d15d;
label_0588d191:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).TitanWardedEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
    bVar1 = (pSVar4->fields)._value;
    pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    if (pSVar5 != (System_String_array *)0x0) {
      if ((int)pSVar5->max_length != 0) {
        pSVar5->m_Items[0] = "titan.TitanChanceWarded";
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40
                  (armor,"game-create-titans-warded-fields",bVar1,pSVar5,in_R8);
        return;
      }
label_0588d21e:
      ThrowIndexOutOfRangeException();
    }
  }
label_0588d219:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxTitans>b__44_6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_6 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* health, const MethodInfo* method);
// 0x588d230
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588d2d1: cmp byte ptr [rip + 0x1cb7ff5], 0
// asm:   0x588d2d8: je 0x588d309
// asm:   0x588d2f6: jmp 0x588d3fc

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxTitans_b__44_6
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *health,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameTitanSettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  System_String_array *fieldIds;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar6;
  MethodInfo *in_R8;
  
  pMVar6 = (MethodInfo *)health;
  if (Il2CppMethodInitialized_0754520a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHealthMax");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHealthMin");
    Il2CppMethodInitialized_0754520a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHealthEnabled(health,pMVar6);
  pMVar6 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar6 = extraout_RDX_00;
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    pMVar6 = extraout_RDX_01;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    pMVar6 = extraout_RDX_02;
  }
  else {
    pSVar3 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
  }
  if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
      (pSVar4 = (pSVar3->fields).Titan, pSVar4 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar5 = (pSVar4->fields).TitanHealthMode, pSVar5 != (Settings_IntSetting_o *)0x0)) {
    iVar2 = (pSVar5->fields)._value;
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHealthMode(health,iVar2 != 0,pMVar6);
    fieldIds = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    if (fieldIds != (System_String_array *)0x0) {
      if ((int)fieldIds->max_length != 0) {
        fieldIds->m_Items[0] = "titan.TitanHealthMin";
        Il2CppCodeGenWriteBarrier(fieldIds->m_Items);
        if ((fieldIds->max_length & 0xfffffffe) != 0) {
          fieldIds->m_Items[1] = "titan.TitanHealthMax";
          Il2CppCodeGenWriteBarrier(fieldIds->m_Items + 1);
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40
                    (health,"game-create-titans-health-fields",iVar2 != 0,fieldIds,in_R8);
          return;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildTitanHealthMode>b__46_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanHealthMode_b__46_1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x588d410
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588d431: cmp byte ptr [rip + 0x1cb7e95], 0
// asm:   0x588d438: je 0x588d4c3
// asm:   0x588d462: jmp 0x588d570

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanHealthMode_b__46_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_IntSetting_o *__this_00;
  bool bVar4;
  int32_t value;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_0754520b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Scaled");
    Il2CppMethodInitialized_0754520b = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar2 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
  }
  if ((pSVar2 != (Settings_InGameSet_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) {
    __this_00 = (pSVar3->fields).TitanHealthMode;
    if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      value = 1;
    }
    else {
      bVar4 = System_String__op_Equality
                        (((context.fields.Node)->fields).value,"Scaled",(MethodInfo *)0x0);
      value = bVar4 + 1;
    }
    if (__this_00 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,value,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)method_00);
        return;
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom
                (context,(MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildTitanArmorEnabled>b__48_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanArmorEnabled_b__48_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, bool enabled, const MethodInfo* method);
// 0x588d580
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588d5a1: cmp byte ptr [rip + 0x1cb7d25], 0
// asm:   0x588d5c6: jmp 0x588d670

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanArmorEnabled_b__48_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,bool enabled,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_BoolSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_0754520c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_0754520c = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar2 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
  }
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (__this_00 = (pSVar3->fields).TitanArmorEnabled, __this_00 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)__this_00,enabled,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildTitanWardedEnabled>b__49_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanWardedEnabled_b__49_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, bool enabled, const MethodInfo* method);
// 0x588d680
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588d6a1: cmp byte ptr [rip + 0x1cb7c25], 0
// asm:   0x588d6c6: jmp 0x588d770

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildTitanWardedEnabled_b__49_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,bool enabled,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_BoolSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_0754520d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_0754520d = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar2 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
  }
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (__this_00 = (pSVar3->fields).TitanWardedEnabled, __this_00 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)__this_00,enabled,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildMultiplayerRoom>b__63_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildMultiplayerRoom_b__63_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, const MethodInfo* method);
// 0x588d780

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildMultiplayerRoom_b__63_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754520e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    Il2CppMethodInitialized_0754520e = '\x01';
  }
  if (field == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Inequality
                    ((field->fields)._Id_k__BackingField,"misc.VoiceChat",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxCustom>b__73_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__73_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* managers, const MethodInfo* method);
// 0x588d7c0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__73_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *managers,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *pGVar3;
  
  if (Il2CppMethodInitialized_0754520f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Logic");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Maps.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-custom-addons");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Maps");
    il2cpp_codegen_initialize_runtime_metadata(&"menuGrid");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-custom-maps");
    il2cpp_codegen_initialize_runtime_metadata(&"wrench");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-custom-logic");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Logic.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Addons");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Addons.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"plus");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openAddonsManager");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openMapsManager");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openLogicManager");
    Il2CppMethodInitialized_0754520f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Sandbox.Custom.Maps",(MethodInfo *)0x0);
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Sandbox.Custom.Maps.Description",(MethodInfo *)0x0);
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile)
  ;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
            (pGVar3,"game-create-root-custom-maps",pSVar1,pSVar2,"gameCreate.custom.openMapsManager","menuGrid",0,
             (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,0.0,(MethodInfo *)0x0);
  if (managers == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (managers,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar3,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Sandbox.Custom.Logic",(MethodInfo *)0x0);
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Sandbox.Custom.Logic.Description",(MethodInfo *)0x0);
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile)
  ;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
            (pGVar3,"game-create-root-custom-logic",pSVar1,pSVar2,"gameCreate.custom.openLogicManager","wrench",1,
             (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (managers,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar3,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Sandbox.Addons",(MethodInfo *)0x0);
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Sandbox.Custom.Addons.Description",(MethodInfo *)0x0);
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile)
  ;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
            (pGVar3,"game-create-root-custom-addons",pSVar1,pSVar2,"gameCreate.custom.openAddonsManager","plus",2,
             (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (managers,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar3,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxCustom>b__73_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__73_1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x588da90

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__73_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545210 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.export");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-import");
    il2cpp_codegen_initialize_runtime_metadata(&"export");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Export");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-export");
    il2cpp_codegen_initialize_runtime_metadata(&"import");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Import");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.import");
    Il2CppMethodInitialized_07545210 = '\x01';
  }
  if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
            (actions,1,"Common.Import","gameCreate.import","game-create-sandbox-import",
             (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             "import",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
            (actions,1,"Common.Export","gameCreate.export","game-create-sandbox-export",
             (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             "export",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildSandboxCustom>b__73_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__73_2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x588dba0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildSandboxCustom_b__73_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545211 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.OpenLogicFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openLogsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.OpenAddonsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openAddonsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-open-addons-folder");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openLogicFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.OpenLogsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"open");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.OpenMapsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-open-logic-folder");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-open-logs-folder");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.custom.openMapsFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-open-maps-folder");
    Il2CppMethodInitialized_07545211 = '\x01';
  }
  if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
            (actions,1,"GameCreate.Sandbox.Custom.OpenLogicFolder","gameCreate.custom.openLogicFolder","game-create-sandbox-open-logic-folder",
             (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             "open",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
            (actions,1,"GameCreate.Sandbox.Custom.OpenMapsFolder","gameCreate.custom.openMapsFolder","game-create-sandbox-open-maps-folder",
             (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             "open",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
            (actions,1,"GameCreate.Sandbox.Custom.OpenAddonsFolder","gameCreate.custom.openAddonsFolder","game-create-sandbox-open-addons-folder",
             (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             "open",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
            (actions,1,"GameCreate.Sandbox.Custom.OpenLogsFolder","gameCreate.custom.openLogsFolder","game-create-sandbox-open-logs-folder",
             (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             "open",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildFooter>b__74_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildFooter_b__74_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x588dd70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588ddad: jmp 0x588e0c7

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildFooter_b__74_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  System_String_o **ppSVar6;
  System_String_o **ppSVar7;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *pGVar8;
  System_Nullable_bool__Fields aSStack_38 [4];
  System_Nullable_bool__Fields aSStack_30 [4];
  
  if (Il2CppMethodInitialized_07545212 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.SaveAndClose");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Start");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-start");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-save-next-restart");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.restart");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Restart");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelFooterPrimaryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.save.nextRestart");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.start");
    Il2CppMethodInitialized_07545212 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588de61;
label_0588dda0:
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsConfigured
                      ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0588dda0;
label_0588de61:
    pGVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsConfigured((MethodInfo *)pGVar8);
  }
  if (!bVar3) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452dd == '\0') goto label_0588e0e6;
label_0588de91:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075452dd != '\0') goto label_0588de91;
label_0588e0e6:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452dd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  iVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
          _LaunchContext_k__BackingField;
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (iVar2 == 2) {
    if ((footer == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) ||
       (pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                           (footer,1,"GameCreate.SaveAndClose","gameCreate.save.nextRestart","game-create-save-next-restart",
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (System_String_o *)0x0,(MethodInfo *)0x0),
       pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_0588e118;
    (pGVar5->fields).layout = pGVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
    pGVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_CanStart((MethodInfo *)pGVar8);
    aSStack_30[0].hasValue = false;
    aSStack_30[0].value = false;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o *)aSStack_30,bVar3,
               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
    (pGVar5->fields).enabled.fields = aSStack_30[0];
    ppSVar6 = &"gameCreate.restart";
    ppSVar7 = &"Common.Restart";
  }
  else {
    if (footer == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0588e118;
    ppSVar6 = &"gameCreate.start";
    ppSVar7 = &"Common.Start";
  }
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                     (footer,0,*ppSVar7,*ppSVar6,"game-create-start",(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                      (MethodInfo *)0x0);
  pGVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_CanStart((MethodInfo *)pGVar8);
  aSStack_38[0].hasValue = false;
  aSStack_38[0].value = false;
  System_Nullable_bool____ctor
            ((System_Nullable_bool__o *)aSStack_38,bVar3,
             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar5->fields).enabled.fields = aSStack_38[0];
    (pGVar5->fields).style = "brushSidePanelFooterPrimaryButton";
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).style);
    (pGVar5->fields).layout = pGVar4;
    Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
    return;
  }
label_0588e118:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildLockedFields>b__77_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildLockedFields_b__77_0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x588e320
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588e38f: cmp byte ptr [rip + 0x1cb6f48], 0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildLockedFields_b__77_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_07545213 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07545213 = '\x01';
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar2 = false;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar2 = System_String__op_Equality
                      (((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452de = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showLockedSettings = bVar2;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom
            (context,(MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c$$<BuildVariantSelector>b__84_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildVariantSelector_b__84_1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x588e430

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c___BuildVariantSelector_b__84_1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *variant;
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_07545214 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545214 = '\x01';
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar1 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    ppSVar1 = &((context.fields.Node)->fields).value;
  }
  variant = *ppSVar1;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectVariant(variant,method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom
            (context,(MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x587c840

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass16_0$$<BuildCategories>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___BuildCategories_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* browser, const MethodInfo* method);
// 0x588ec90

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___BuildCategories_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *browser,MethodInfo *method)

{
  System_String_array *pSVar1;
  il2cpp_array_size_t iVar2;
  System_String_o *id;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this_01;
  
  if (Il2CppMethodInitialized_07545215 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-category-grid");
    Il2CppMethodInitialized_07545215 = '\x01';
  }
  id = "game-create-category-grid";
  pSVar1 = (__this->fields).categories;
  if (pSVar1 != (System_String_array *)0x0) {
    __this_00 = (__this->fields).__9__1;
    iVar2 = pSVar1->max_length;
    if (__this_00 == (System_Action_AottgUi__o *)0x0) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__1
                 ,(MethodInfo_4A81BE0 *)0x0);
      (__this->fields).__9__1 = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
    Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___ctor
              (__this_01,id,(int)iVar2 + 1,360.0,14.0,__this_00,false,0.0,(MethodInfo *)0x0);
    if (browser != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (browser,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass16_0$$<BuildCategories>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___BuildCategories_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* choices, const MethodInfo* method);
// 0x588edb0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588ee89: xor ecx, ecx
// asm:   0x588ee8b: nop dword ptr [rax + rax]
// asm:   0x588efe3: jmp 0x588f112

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___BuildCategories_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *choices,MethodInfo *method)

{
  uint uVar1;
  System_String_o *category;
  System_String_array *pSVar2;
  MethodInfo *arg0;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  uint uStack_44;
  System_String_o *pSStack_40;
  MethodInfo *pMStack_38;
  
  if (Il2CppMethodInitialized_07545216 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-featured-choices");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.category");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-category-");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Browse");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    Il2CppMethodInitialized_07545216 = '\x01';
  }
  uStack_44 = 0;
  pSVar2 = (__this->fields).categories;
  if (pSVar2 != (System_String_array *)0x0) {
    do {
      pSVar3 = "clear";
      uVar1 = (uint)pSVar2->max_length;
      if ((int)uVar1 <= (int)uStack_44) {
        __this_01 = (__this->fields).__9__2;
        if (__this_01 == (System_Action_AottgUi__o *)0x0) {
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__2
                     ,(MethodInfo_4A81BE0 *)0x0);
          (__this->fields).__9__2 = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
        }
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(260.0,(MethodInfo *)0x0);
        height = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,"Stretch",
                            (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        if (choices != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (choices,pSVar3,__this_01,"game-create-root-featured-choices",layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      if (uVar1 <= uStack_44) {
label_0588f117:
        ThrowIndexOutOfRangeException();
      }
      arg0 = (MethodInfo *)
             UI_ContentLocale__ExperienceCategory(pSVar2->m_Items[(int)uStack_44],(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t *)&uStack_44,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320("game-create-category-",pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("GameCreate.Categories.Browse",(MethodInfo *)0x0);
      method_00 = arg0;
      pSVar4 = System_String__Format(pSVar4,(Il2CppObject *)arg0,(MethodInfo *)0x0);
      uVar1 = uStack_44;
      pSVar2 = (__this->fields).categories;
      if (pSVar2 == (System_String_array *)0x0) break;
      if ((uint)pSVar2->max_length <= uStack_44) goto label_0588f117;
      category = pSVar2->m_Items[(int)uStack_44];
      pSStack_40 = pSVar3;
      pMStack_38 = arg0;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CategoryPreview(category,method_00);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
      Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
                (__this_00,pSStack_40,(System_String_o *)pMStack_38,pSVar4,"gameCreate.select.category",
                 "menuList",uVar1,pSVar3,(System_Action_GisketchActionContext__o *)0x0,0.0,
                 (MethodInfo *)0x0);
      if (choices == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (choices,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
      uStack_44 = uStack_44 + 1;
      pSVar2 = (__this->fields).categories;
    } while (pSVar2 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass16_0$$<BuildCategories>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___BuildCategories_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* featuredChoices, const MethodInfo* method);
// 0x588f120

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0___BuildCategories_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *featuredChoices,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *pGVar4;
  
  if (Il2CppMethodInitialized_07545217 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"star");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.ChoiceDescription");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Title");
    Il2CppMethodInitialized_07545217 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Favorites",(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Favorites.ChoiceDescription",(MethodInfo *)0x0);
  pSVar1 = (__this->fields).categories;
  if (pSVar1 != (System_String_array *)0x0) {
    pGVar4 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
              (pGVar4,"game-create-root-favorites",pSVar2,pSVar3,"gameCreate.open.favorites","star",
               (int32_t)pSVar1->max_length,(System_String_o *)0x0,
               (System_Action_GisketchActionContext__o *)0x0,173.0,(MethodInfo *)0x0);
    if (featuredChoices != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (featuredChoices,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar4,(MethodInfo *)0x0);
      pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("GameCreate.Sandbox.Title",(MethodInfo *)0x0);
      pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("GameCreate.Sandbox.Description",(MethodInfo *)0x0);
      pSVar1 = (__this->fields).categories;
      if (pSVar1 != (System_String_array *)0x0) {
        pGVar4 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
                  (pGVar4,"game-create-root-sandbox",pSVar2,pSVar3,"gameCreate.open.sandbox","gear",
                   (int)pSVar1->max_length + 1,(System_String_o *)0x0,
                   (System_Action_GisketchActionContext__o *)0x0,173.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (featuredChoices,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x587ccd0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass18_0$$<BuildSubcategories>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0___BuildSubcategories_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x588f350

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0___BuildSubcategories_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  System_String_o *subcategory;
  uint index;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o *pGVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *__this_00;
  uint uStack_44;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o *pGStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_07545218 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Subcategories.Browse");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-subcategory-");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.subcategory");
    il2cpp_codegen_initialize_runtime_metadata(&"open");
    Il2CppMethodInitialized_07545218 = '\x01';
  }
  uStack_44 = 0;
  pSVar2 = (__this->fields).subcategories;
  if (pSVar2 != (System_String_array *)0x0) {
    pGStack_40 = __this;
    do {
      pGVar1 = pGStack_40;
      if ((int)pSVar2->max_length <= (int)uStack_44) {
        return;
      }
      pSVar3 = System_Int32__ToString((int32_t *)&uStack_44,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320("game-create-subcategory-",pSVar3,(MethodInfo *)0x0);
      pSVar2 = (pGVar1->fields).subcategories;
      if (pSVar2 == (System_String_array *)0x0) break;
      if ((uint)pSVar2->max_length <= uStack_44) {
label_0588f581:
        ThrowIndexOutOfRangeException();
      }
      pSVar4 = UI_ContentLocale__ExperienceSubcategory(pSVar2->m_Items[(int)uStack_44],(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("GameCreate.Subcategories.Browse",(MethodInfo *)0x0);
      pSVar2 = (pGVar1->fields).subcategories;
      if (pSVar2 == (System_String_array *)0x0) break;
      if ((uint)pSVar2->max_length <= uStack_44) goto label_0588f581;
      method_00 = (MethodInfo *)
                  UI_ContentLocale__ExperienceSubcategory(pSVar2->m_Items[(int)uStack_44],(MethodInfo *)0x0);
      pSVar5 = System_String__Format(pSVar5,(Il2CppObject *)method_00,(MethodInfo *)0x0);
      index = uStack_44;
      pSVar2 = (pGVar1->fields).subcategories;
      if (pSVar2 == (System_String_array *)0x0) break;
      if ((uint)pSVar2->max_length <= uStack_44) goto label_0588f581;
      subcategory = pSVar2->m_Items[(int)uStack_44];
      pSStack_38 = pSVar4;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SubcategoryPreview(subcategory,method_00);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
      Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
                (__this_00,pSVar3,pSStack_38,pSVar5,"gameCreate.select.subcategory","open",index,pSVar4,
                 (System_Action_GisketchActionContext__o *)0x0,0.0,(MethodInfo *)0x0);
      if (grid == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (grid,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
      uStack_44 = uStack_44 + 1;
      pSVar2 = (pGStack_40->fields).subcategories;
    } while (pSVar2 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x587dab0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass20_0$$<BuildExperiences>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0___BuildExperiences_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x588f590
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588f60e: xor ecx, ecx

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0___BuildExperiences_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  uint uVar1;
  Map_Experience_o *pMVar2;
  System_String_o *pSVar3;
  Map_Experience_array *pMVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *pGVar8;
  uint uStack_44;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_40;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o *pGStack_38;
  
  pGStack_40 = grid;
  pGStack_38 = __this;
  if (Il2CppMethodInitialized_07545219 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.experience");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-experience-");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonStart");
    Il2CppMethodInitialized_07545219 = '\x01';
  }
  uStack_44 = 0;
  pMVar4 = (pGStack_38->fields).experiences;
  if (pMVar4 != (Map_Experience_array *)0x0) {
    if (pGStack_40 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if ((int)pMVar4->max_length < 1) {
        return;
      }
      pMVar2 = pMVar4->m_Items[0];
      pSVar5 = System_Int32__ToString((int32_t *)&uStack_44,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_52f0320("game-create-experience-",pSVar5,(MethodInfo *)0x0);
      pSVar6 = UI_ContentLocale__ExperienceName(pMVar2,(MethodInfo *)0x0);
      pSVar7 = UI_ContentLocale__ExperienceDescription(pMVar2,(MethodInfo *)0x0);
      uVar1 = uStack_44;
      if (pMVar2 != (Map_Experience_o *)0x0) {
        pSVar3 = (pMVar2->fields).Preview;
        pGVar8 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
                  (pGVar8,pSVar5,pSVar6,pSVar7,"gameCreate.select.experience","buttonStart",uVar1,pSVar3,
                   (System_Action_GisketchActionContext__o *)0x0,0.0,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
    }
    else {
      do {
        uVar1 = (uint)pMVar4->max_length;
        if ((int)uVar1 <= (int)uStack_44) {
          return;
        }
        if (uVar1 <= uStack_44) {
          ThrowIndexOutOfRangeException();
        }
        pMVar2 = pMVar4->m_Items[(int)uStack_44];
        pSVar5 = System_Int32__ToString((int32_t *)&uStack_44,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_52f0320("game-create-experience-",pSVar5,(MethodInfo *)0x0);
        pSVar6 = UI_ContentLocale__ExperienceName(pMVar2,(MethodInfo *)0x0);
        pSVar7 = UI_ContentLocale__ExperienceDescription(pMVar2,(MethodInfo *)0x0);
        uVar1 = uStack_44;
        if (pMVar2 == (Map_Experience_o *)0x0) break;
        pSVar3 = (pMVar2->fields).Preview;
        pGVar8 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
        Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
                  (pGVar8,pSVar5,pSVar6,pSVar7,"gameCreate.select.experience","buttonStart",uVar1,pSVar3,
                   (System_Action_GisketchActionContext__o *)0x0,0.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (pGStack_40,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar8,(MethodInfo *)0x0);
        uStack_44 = uStack_44 + 1;
        pMVar4 = (pGStack_38->fields).experiences;
      } while (pMVar4 != (Map_Experience_array *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x587e190

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_0$$<BuildFavoriteChoices>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0___BuildFavoriteChoices_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x588f7b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588fa75: xor ecx, ecx
// asm:   0x588fa77: jmp 0x588facb

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0___BuildFavoriteChoices_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  uint32_t uVar1;
  Map_Experience_o *pMVar2;
  Map_Experience_o *pMVar3;
  il2cpp_array_size_t iVar4;
  uint uVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o *pGVar6;
  bool bVar7;
  bool selected;
  Map_Experience_array *pMVar8;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o *__this_00;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_Action_o *pSVar11;
  System_String_array *pSVar12;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  MethodInfo *pMVar13;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o *pGStack_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_38;
  
  pGStack_38 = grid;
  if (Il2CppMethodInitialized_0754521a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_1_BuildFavoriteChoices_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_2_BuildFavoriteChoices_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_2);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-favorite-experience-");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.SandboxPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-favorite-preset-");
    Il2CppMethodInitialized_0754521a = '\x01';
  }
  uStack_58 = 0;
  pMVar8 = (__this->fields).experiences;
  if (pMVar8 != (Map_Experience_array *)0x0) {
    pGStack_40 = __this;
    do {
      pGVar6 = pGStack_40;
      if ((int)pMVar8->max_length <= (int)uStack_58) {
        uStack_5c = 0;
        pSVar12 = (pGStack_40->fields).presets;
        if (pSVar12 != (System_String_array *)0x0) goto label_0588facb;
        break;
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_1);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      pMVar8 = (pGVar6->fields).experiences;
      if (pMVar8 == (Map_Experience_array *)0x0) break;
      if ((uint)pMVar8->max_length <= uStack_58) goto label_0588fcd4;
      if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o *)0x0) break;
      (__this_00->fields).experience = pMVar8->m_Items[(int)uStack_58];
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).experience);
      pSVar9 = System_Int32__ToString((int32_t *)&uStack_58,(MethodInfo *)0x0);
      pSStack_48 = System_String__Concat_52f0320("game-create-favorite-experience-",pSVar9,(MethodInfo *)0x0);
      pSVar9 = UI_ContentLocale__ExperienceName((__this_00->fields).experience,(MethodInfo *)0x0);
      pSVar10 = UI_ContentLocale__ExperienceDescription((__this_00->fields).experience,(MethodInfo *)0x0);
      pMVar2 = (__this_00->fields).experience;
      if (pMVar2 == (Map_Experience_o *)0x0) break;
      pSStack_50 = (pMVar2->fields).Preview;
      uStack_54 = uStack_58;
      bVar7 = (pGVar6->fields).compact;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        if (Il2CppMethodInitialized_075452d2 == '\0') goto label_0588fa2e;
label_0588f9b5:
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (Il2CppMethodInitialized_075452d2 != '\0') goto label_0588f9b5;
label_0588fa2e:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452d2 = '\x01';
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pMVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _Experience_k__BackingField;
      pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
      pMVar13 = (MethodInfo *)0x588f9fe;
      System_Action___ctor
                (pSVar11,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_1_BuildFavoriteChoices_b__1
                 ,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        pMVar13 = (MethodInfo *)0x588fa1a;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoice
                (pGStack_38,pSStack_48,pSVar9,pSVar10,pSStack_50,uStack_54,bVar7,pMVar2 == pMVar3,pSVar11,
                 pMVar13);
      uStack_58 = uStack_58 + 1;
      pMVar8 = (pGStack_40->fields).experiences;
    } while (pMVar8 != (Map_Experience_array *)0x0);
  }
  goto label_0588fccf;
label_0588facb:
  do {
    pGVar6 = pGStack_40;
    if ((int)pSVar12->max_length <= (int)uStack_5c) {
      return;
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_2);
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    pSVar12 = (pGVar6->fields).presets;
    if (pSVar12 == (System_String_array *)0x0) break;
    if ((uint)pSVar12->max_length <= uStack_5c) {
label_0588fcd4:
      ThrowIndexOutOfRangeException();
    }
    if (__this_01 == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o *)0x0) break;
    (__this_01->fields).preset = pSVar12->m_Items[(int)uStack_5c];
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).preset);
    pSVar9 = System_Int32__ToString((int32_t *)&uStack_5c,(MethodInfo *)0x0);
    pSStack_50 = System_String__Concat_52f0320("game-create-favorite-preset-",pSVar9,(MethodInfo *)0x0);
    pSStack_48 = (__this_01->fields).preset;
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar9 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("GameCreate.Favorites.SandboxPreset",(MethodInfo *)0x0);
    uVar5 = uStack_5c;
    pMVar8 = (pGVar6->fields).experiences;
    if (pMVar8 == (Map_Experience_array *)0x0) break;
    uStack_54 = CONCAT31(uStack_54._1_3_,(pGVar6->fields).compact);
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)method_00);
    iVar4 = pMVar8->max_length;
    selected = false;
    if (bVar7) {
      pSVar10 = (__this_01->fields).preset;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        if (g_data_075452dc == '\0') goto label_0588fc87;
label_0588fbf4:
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (g_data_075452dc != '\0') goto label_0588fbf4;
label_0588fc87:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        g_data_075452dc = '\x01';
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      selected = System_String__op_Equality
                           (pSVar10,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                    _SelectedPresetName_k__BackingField,(MethodInfo *)0x0);
    }
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    pMVar13 = (MethodInfo *)0x588fc54;
    System_Action___ctor
              (pSVar11,(Il2CppObject *)__this_01,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_2_BuildFavoriteChoices_b__2
               ,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      pMVar13 = (MethodInfo *)0x588fc70;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoice
              (pGStack_38,pSStack_50,pSStack_48,pSVar9,(System_String_o *)0x0,uVar5 + (int)iVar4,
               uStack_54._0_1_,selected,pSVar11,pMVar13);
    uStack_5c = uStack_5c + 1;
    pSVar12 = (pGStack_40->fields).presets;
  } while (pSVar12 != (System_String_array *)0x0);
label_0588fccf:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o* __this, const MethodInfo* method);
// 0x588fce0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_1$$<BuildFavoriteChoices>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1___BuildFavoriteChoices_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o* __this, const MethodInfo* method);
// 0x588fd00

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1___BuildFavoriteChoices_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_1_o *__this,
               MethodInfo *method)

{
  Map_Experience_o *experience;
  
  if (Il2CppMethodInitialized_0754521b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_0754521b = '\x01';
  }
  experience = (__this->fields).experience;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectExperience(experience,method);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__SelectExperience(experience,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_2$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o* __this, const MethodInfo* method);
// 0x588fcf0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass24_2$$<BuildFavoriteChoices>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2___BuildFavoriteChoices_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o* __this, const MethodInfo* method);
// 0x588fe80

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2___BuildFavoriteChoices_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_2_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754521c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"Unable to load favorite game preset: ");
    Il2CppMethodInitialized_0754521c = '\x01';
  }
  pSVar2 = (__this->fields).preset;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__LoadPreset(pSVar2,method);
  }
  else {
    bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__LoadPreset(pSVar2,method);
  }
  if (bVar1) {
    return;
  }
  pSVar2 = System_String__Concat_52f0320("Unable to load favorite game preset: ",(__this->fields).preset,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass25_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x587e670

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass25_0$$<BuildFavoriteChoice>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0___BuildFavoriteChoice_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5890240

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0___BuildFavoriteChoice_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_Action_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_0754521d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_0754521d = '\x01';
  }
  pSVar1 = (__this->fields).select;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom
            (context,(MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x587e760

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass26_0$$<BuildCategorySelector>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0___BuildCategorySelector_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* selector, const MethodInfo* method);
// 0x58902a0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589037b: xor ecx, ecx
// asm:   0x589037d: lea r13, [rip + 0x19e521c]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession
// asm:   0x5890384: lea r12, [rip + 0x1a65ee5]  ; "gameCreate.select.category"
// asm:   0x589038b: jmp 0x58903c8
// asm:   0x589041f: jmp 0x5890472

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0___BuildCategorySelector_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *selector,MethodInfo *method)

{
  uint uVar1;
  char cVar2;
  uint32_t uVar3;
  bool bVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  bool selected;
  MethodInfo *in_stack_ffffffffffffffa8;
  MethodInfo *in_stack_ffffffffffffffb0;
  uint uStack_3c;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_38;
  
  pGStack_38 = selector;
  if (Il2CppMethodInitialized_0754521e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.category");
    il2cpp_codegen_initialize_runtime_metadata(&"star");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-category-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-root-favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Title");
    Il2CppMethodInitialized_0754521e = '\x01';
  }
  uStack_3c = 0;
  pSVar5 = (__this->fields).categories;
  if (pSVar5 != (System_String_array *)0x0) {
    do {
      uVar1 = (uint)pSVar5->max_length;
      if ((int)uVar1 <= (int)uStack_3c) {
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar6 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                           ("GameCreate.Favorites",(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          if (g_data_075452d1 == '\0') goto label_058906ca;
label_058905a0:
          uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (g_data_075452d1 != '\0') goto label_058905a0;
label_058906ca:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          g_data_075452d1 = '\x01';
          uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        bVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _ShowFavorites_k__BackingField;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCollapsedFeatureChoice
                  (pGStack_38,"star",pSVar6,bVar4,"gameCreate.open.favorites","game-create-root-favorites",
                   in_stack_ffffffffffffffa8);
        selected = false;
        method_00 = (MethodInfo *)"GameCreate.Sandbox.Title";
        pSVar7 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                           ("GameCreate.Sandbox.Title",(MethodInfo *)0x0);
        bVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox(method_00);
        pSVar6 = "gear";
        if (!bVar4) goto label_05890669;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          if (g_data_075452d1 == '\0') goto label_0589070e;
label_05890649:
          uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (g_data_075452d1 != '\0') goto label_05890649;
label_0589070e:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          g_data_075452d1 = '\x01';
          uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        selected = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                   _ShowFavorites_k__BackingField == false;
label_05890669:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCollapsedFeatureChoice
                  (pGStack_38,pSVar6,pSVar7,selected,"gameCreate.open.sandbox","game-create-root-sandbox",
                   in_stack_ffffffffffffffa8);
        return;
      }
      if (uVar1 <= uStack_3c) goto label_05890745;
      pSVar6 = UI_ContentLocale__ExperienceCategory(pSVar5->m_Items[(int)uStack_3c],(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        if (g_data_075452d1 == '\0') goto label_0589043e;
label_058903ff:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
        goto label_0589040c;
label_0589045a:
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        cVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _ShowFavorites_k__BackingField;
      }
      else {
        if (g_data_075452d1 != '\0') goto label_058903ff;
label_0589043e:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        g_data_075452d1 = '\x01';
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
        goto label_0589045a;
label_0589040c:
        cVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                _ShowFavorites_k__BackingField;
      }
      bVar4 = false;
      if (cVar2 == '\0') {
        pSVar5 = (__this->fields).categories;
        if (pSVar5 == (System_String_array *)0x0) break;
        if ((uint)pSVar5->max_length <= uStack_3c) {
label_05890745:
          ThrowIndexOutOfRangeException();
        }
        pSVar7 = pSVar5->m_Items[(int)uStack_3c];
        if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          if (Il2CppMethodInitialized_075452d4 == '\0') goto label_05890528;
label_058904a8:
          uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (Il2CppMethodInitialized_075452d4 != '\0') goto label_058904a8;
label_05890528:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452d4 = '\x01';
          uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        bVar4 = System_String__Equals_52ffe30
                          (pSVar7,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                                  _Category_k__BackingField,5,(MethodInfo *)0x0);
      }
      pSVar7 = System_Int32__ToString((int32_t *)&uStack_3c,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_52f0320("game-create-category-",pSVar7,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      in_stack_ffffffffffffffa8 = (MethodInfo *)0x0;
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactChoice
                (pGStack_38,pSVar6,bVar4,"gameCreate.select.category",pSVar7,0,(System_String_o *)0x0,
                 in_stack_ffffffffffffffb0);
      uStack_3c = uStack_3c + 1;
      pSVar5 = (__this->fields).categories;
    } while (pSVar5 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass28_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass28_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x587ebc0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass28_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass28_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass28_0$$<BuildExperienceSelector>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass28_0___BuildExperienceSelector_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5890750
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58907bb: xor ecx, ecx
// asm:   0x58907bd: lea r15, [rip + 0x19e4ddc]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession
// asm:   0x58907c4: nop word ptr cs:[rax + rax]
// asm:   0x58908f5: jmp 0x589094d

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass28_0___BuildExperienceSelector_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  uint uVar1;
  uint32_t uVar2;
  Map_Experience_o *pMVar3;
  Map_Experience_o *pMVar4;
  Map_Experience_array *pMVar5;
  System_String_o *label;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb0;
  uint uStack_3c;
  MethodInfo *pMStack_38;
  
  pMStack_38 = (MethodInfo *)row;
  if (Il2CppMethodInitialized_0754521f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.experience");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-experience-");
    Il2CppMethodInitialized_0754521f = '\x01';
  }
  uStack_3c = 0;
  pMVar5 = (__this->fields).experiences;
  if (pMVar5 != (Map_Experience_array *)0x0) {
    do {
      uVar1 = (uint)pMVar5->max_length;
      if ((int)uVar1 <= (int)uStack_3c) {
        return;
      }
      if (uVar1 <= uStack_3c) {
label_05890952:
        ThrowIndexOutOfRangeException();
      }
      label = UI_ContentLocale__ExperienceName(pMVar5->m_Items[(int)uStack_3c],(MethodInfo *)0x0);
      pMVar5 = (__this->fields).experiences;
      if (pMVar5 == (Map_Experience_array *)0x0) break;
      if ((uint)pMVar5->max_length <= uStack_3c) goto label_05890952;
      pMVar3 = pMVar5->m_Items[(int)uStack_3c];
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        if (Il2CppMethodInitialized_075452d2 != '\0') goto label_0589082e;
label_05890912:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452d2 = '\x01';
        uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (Il2CppMethodInitialized_075452d2 == '\0') goto label_05890912;
label_0589082e:
        uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pMVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _Experience_k__BackingField;
      pSVar6 = System_Int32__ToString((int32_t *)&uStack_3c,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_52f0320("game-create-experience-",pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      method_00 = pMStack_38;
      pGVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactChoice
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMStack_38,label,pMVar3 == pMVar4,
                          "gameCreate.select.experience",pSVar6,2,(System_String_o *)0x0,in_stack_ffffffffffffffb0);
      pGVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CarouselButtonLayout(method_00);
      if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      (pGVar7->fields).layout = pGVar8;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).layout);
      uStack_3c = uStack_3c + 1;
      pMVar5 = (__this->fields).experiences;
    } while (pMVar5 != (Map_Experience_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x587ebd0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass29_0$$<BuildCompactRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0___BuildCompactRow_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5890960
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58909a8: xor ecx, ecx
// asm:   0x58909aa: jmp 0x58909c8

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0___BuildCompactRow_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  uint uVar1;
  int32_t selectedVariant;
  System_String_o *a;
  bool selected;
  System_String_array *pSVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  MethodInfo *in_stack_ffffffffffffffb0;
  uint uStack_44;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_40;
  System_String_o *pSStack_38;
  
  pGStack_40 = row;
  if (Il2CppMethodInitialized_07545220 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_07545220 = '\x01';
  }
  uStack_44 = 0;
  pSVar2 = (__this->fields).values;
  if (pSVar2 != (System_String_array *)0x0) {
    do {
      uVar1 = (uint)pSVar2->max_length;
      if ((int)uVar1 <= (int)uStack_44) {
        return;
      }
      if (uVar1 <= uStack_44) {
        ThrowIndexOutOfRangeException();
      }
      a = pSVar2->m_Items[(int)uStack_44];
      selected = System_String__Equals_52ffe30(a,(__this->fields).selected,5,(MethodInfo *)0x0);
      pSStack_38 = (__this->fields).actionId;
      pSVar3 = (__this->fields).itemPrefix;
      str1 = System_Int32__ToString((int32_t *)&uStack_44,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320(pSVar3,str1,(MethodInfo *)0x0);
      selectedVariant = (__this->fields).selectedVariant;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactChoice
                         (pGStack_40,a,selected,pSStack_38,pSVar3,selectedVariant,(System_String_o *)0x0,
                          in_stack_ffffffffffffffb0);
      if ((__this->fields).carousel != false) {
        method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pGVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CarouselButtonLayout((MethodInfo *)method_00);
        if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
        (pGVar4->fields).layout = pGVar5;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
      }
      uStack_44 = uStack_44 + 1;
      pSVar2 = (__this->fields).values;
    } while (pSVar2 != (System_String_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass29_0$$<BuildCompactRow>b__1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0___BuildCompactRow_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5890ad0

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0___BuildCompactRow_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o *__this,
               System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_52ffe30(value,(__this->fields).selected,5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x5880040

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$<BuildExperienceContext>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* context, const MethodInfo* method);
// 0x5890af0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *context,MethodInfo *method)

{
  Map_Experience_o *experience;
  System_String_o *style;
  bool bVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07545221 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-description");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-eyebrow");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-heading");
    Il2CppMethodInitialized_07545221 = '\x01';
  }
  if (context == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (context,"GameCreate.Configuration.Title","subtext","game-create-configuration-eyebrow",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  style = "clear";
  __this_00 = (__this->fields).__9__1;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__1
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  value = (System_String_o *)0x0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (context,style,__this_00,"game-create-configuration-heading",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  experience = (__this->fields).experience;
  if (experience != (Map_Experience_o *)0x0) {
    value = UI_ContentLocale__ExperienceDescription(experience,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (context,value,"text","game-create-configuration-description",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$<BuildExperienceContext>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* heading, const MethodInfo* method);
// 0x5890d40

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *heading,MethodInfo *method)

{
  uint32_t uVar1;
  Map_Experience_o *pMVar2;
  System_String_o *id;
  bool favorite;
  MethodInfo *method_00;
  System_Action_GisketchActionContext__o *__this_00;
  
  if (Il2CppMethodInitialized_07545222 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-favorite");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-title");
    Il2CppMethodInitialized_07545222 = '\x01';
  }
  pMVar2 = (__this->fields).experience;
  if (pMVar2 == (Map_Experience_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                          ("GameCreate.Configuration.Title",(MethodInfo *)0x0);
  }
  else {
    method_00 = (MethodInfo *)UI_ContentLocale__ExperienceName(pMVar2,(MethodInfo *)0x0);
  }
  if (heading == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (heading,(System_String_o *)method_00,"header","game-create-configuration-title",
             (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
            );
  pMVar2 = (__this->fields).experience;
  if (pMVar2 == (Map_Experience_o *)0x0) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  favorite = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsFavorite(pMVar2,method_00);
  id = "game-create-configuration-favorite";
  __this_00 = (__this->fields).__9__2;
  if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__2
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__2 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile__BuildFavoriteButton
            (heading,id,favorite,__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass36_0$$<BuildExperienceContext>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext, const MethodInfo* method);
// 0x5891050

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0___BuildExperienceContext_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext,MethodInfo *method)

{
  Map_Experience_o *experience;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_07545223 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545223 = '\x01';
  }
  experience = (__this->fields).experience;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite(experience,method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(actionContext,(MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom
            (actionContext,(MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass37_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o* __this, const MethodInfo* method);
// 0x5880370

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass37_0$$<BuildField>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0___BuildField_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5891160
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58914e5: jmp 0x5891a9b
// asm:   0x5891604: test r14, r14
// asm:   0x58916cb: jmp 0x5891a9b
// asm:   0x5891870: cmp byte ptr [rip + 0x1cb3976], 0
// asm:   0x5891877: jne 0x5891898
// asm:   0x5891903: jmp 0x5891898
// asm:   0x58919b4: jmp 0x5891a9b
// asm:   0x58919c4: jmp 0x5891a9b
// asm:   0x5891a14: jmp 0x5891a9b

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0___BuildField_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  System_String_array *pSVar3;
  Settings_BaseSetting_o *pSVar4;
  Settings_BaseSetting_c *pSVar5;
  Settings_InspectorSettingMetadata_o *pSVar6;
  bool bVar7;
  bool bVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_Func_TSource__TResult__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *labels;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  Settings_ExperienceRuleField_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar13;
  int32_t type;
  System_String_o **ppSVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar15;
  MethodInfo *in_R8;
  float value;
  float min;
  float max;
  System_Nullable_bool__Fields aSStack_48 [4];
  System_Nullable_bool__Fields aSStack_40 [4];
  System_Func_string__string__o **ppSStack_38;
  
  pMVar15 = (MethodInfo *)row;
  if (Il2CppMethodInitialized_07545224 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0_BuildField_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&"slider");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.change.field");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.modeSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_07545224 = '\x01';
  }
  pSVar11 = (__this->fields).field;
  if (pSVar11 == (Settings_ExperienceRuleField_o *)0x0) goto label_05891a9b;
  pSVar9 = (pSVar11->fields).Id;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel(pSVar9,pMVar15);
  pSVar10 = System_String__Concat_52f0320((__this->fields).id,"-label",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLabel(row,pSVar9,"text",pSVar10,in_R8);
  pSVar11 = (__this->fields).field;
  if (pSVar11 == (Settings_ExperienceRuleField_o *)0x0) goto label_05891a9b;
  pMVar15 = (MethodInfo *)"general.GameMode";
  bVar7 = System_String__op_Equality((pSVar11->fields).Id,"general.GameMode",(MethodInfo *)0x0);
  if (bVar7) {
    pSVar11 = (__this->fields).field;
    if (pSVar11 == (Settings_ExperienceRuleField_o *)0x0) goto label_05891a9b;
    if ((pSVar11->fields).Editable == false) {
      bVar7 = false;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor != 0)
      goto label_0589137d;
label_058916e3:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar11,pMVar15);
      if (bVar7 != false) goto label_0589138e;
label_058916f9:
      ppSVar14 = *(System_String_o ***)(g_data_07556758 + 0xb8);
    }
    else {
      pSVar3 = (__this->fields).allowed;
      if (pSVar3 == (System_String_array *)0x0) goto label_05891a9b;
      bVar7 = 1 < (int)pSVar3->max_length;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0)
      goto label_058916e3;
label_0589137d:
      pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar11,pMVar15);
      if (bVar7 == false) goto label_058916f9;
label_0589138e:
      ppSVar14 = &"gameCreate.open.modeSelector";
    }
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05891a9b;
    pSVar10 = (System_String_o *)0x0;
    if (bVar7 != false) {
      pSVar10 = "zoom";
    }
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        (row,1,pSVar9,*ppSVar14,(__this->fields).id,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar10,(MethodInfo *)0x0);
    aSStack_40[0].hasValue = false;
    aSStack_40[0].value = false;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o *)aSStack_40,bVar7,
               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
    if (pGVar12 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05891a9b;
    (pGVar12->fields).enabled.fields = aSStack_40[0];
    pSVar11 = (__this->fields).field;
  }
  else {
    pSVar3 = (__this->fields).allowed;
    if ((pSVar3 == (System_String_array *)0x0) || (pSVar3->max_length == 0)) {
      pSVar11 = (__this->fields).field;
      if (pSVar11 == (Settings_ExperienceRuleField_o *)0x0) goto label_05891a9b;
      pSVar4 = (pSVar11->fields).Setting;
      if (pSVar4 == (Settings_BaseSetting_o *)0x0) {
label_0589155a:
        pSVar4 = (pSVar11->fields).Setting;
        if (pSVar4 != (Settings_BaseSetting_o *)0x0) {
          bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
          if ((bVar1 <= (pSVar4->klass->_2).typeHierarchyDepth) &&
             ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
            pSVar6 = (pSVar4->fields).InspectorMetadata;
            if (pSVar6 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_05891a9b;
            if ((pSVar6->fields).HasSlider != false) {
              pSVar9 = (pSVar11->fields).Id;
              if (pSVar9 == (System_String_o *)0x0) goto label_05891a9b;
              bVar7 = System_String__StartsWith_53002b0(pSVar9,"titan.",5,(MethodInfo *)0x0);
              if (!bVar7) {
                if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05891a9b;
                max = *(float *)((long)&(*(uint64_t *)((char *)pSVar4 + 0x20)) + 4);
                value = *(float *)((long)&(*(uint64_t *)((char *)pSVar4 + 0x18)) + 4);
                min = *(float *)&(*(uint64_t *)((char *)pSVar4 + 0x20));
                pSVar9 = (__this->fields).id;
                goto label_05891a73;
              }
              pSVar11 = (__this->fields).field;
              if (pSVar11 == (Settings_ExperienceRuleField_o *)0x0) goto label_05891a9b;
            }
          }
        }
        pSVar4 = (pSVar11->fields).Setting;
        type = 2;
        if (pSVar4 != (Settings_BaseSetting_o *)0x0) {
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((pSVar4->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
            bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
            if (bVar1 <= (pSVar4->klass->_2).typeHierarchyDepth) {
              type = 2 - (uint)((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                               (Il2CppClass *)TypeInfo_Settings_IntSetting);
            }
          }
          else {
            type = 0;
          }
        }
        if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05891a9b;
        pMVar15 = (MethodInfo *)(__this->fields).id;
        pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                            (row,(System_String_o *)pMVar15,
                             (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),type,
                             "inputField",(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                             (System_Action_GisketchActionContext__o *)0x0,0.2,0,
                             (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
        pSVar11 = (__this->fields).field;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar11,pMVar15);
        if (pGVar12 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05891a9b;
        (pGVar12->fields).value = pSVar9;
        Il2CppCodeGenWriteBarrier(&(pGVar12->fields).value);
        (pGVar12->fields).action = "gameCreate.change.field";
        Il2CppCodeGenWriteBarrier(&(pGVar12->fields).action);
        ppSVar14 = &(pGVar12->fields).commitAction;
        (pGVar12->fields).commitAction = "gameCreate.change.field";
      }
      else {
        pSVar5 = pSVar4->klass;
        bVar1 = (pSVar5->_2).typeHierarchyDepth;
        bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
          bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
          goto label_0589155a;
          pSVar6 = (pSVar4->fields).InspectorMetadata;
          if (pSVar6 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_05891a9b;
          if ((pSVar6->fields).HasSlider == false) goto label_0589155a;
          pSVar9 = (pSVar11->fields).Id;
          if (pSVar9 == (System_String_o *)0x0) goto label_05891a9b;
          bVar7 = System_String__StartsWith_53002b0(pSVar9,"titan.",5,(MethodInfo *)0x0);
          if (bVar7) {
            pSVar11 = (__this->fields).field;
            if (pSVar11 == (Settings_ExperienceRuleField_o *)0x0) goto label_05891a9b;
            goto label_0589155a;
          }
          if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05891a9b;
          value = (float)*(int *)((long)&(*(uint64_t *)((char *)pSVar4 + 0x18)) + 4);
          pSVar9 = (__this->fields).id;
          min = (float)*(int *)&(*(uint64_t *)((char *)pSVar4 + 0x20));
          max = (float)*(int *)((long)&(*(uint64_t *)((char *)pSVar4 + 0x20)) + 4);
label_05891a73:
          pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                              (row,pSVar9,value,true,"gameCreate.change.field","slider",min,max,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pSVar11 = (__this->fields).field;
          goto joined_r0x058914df;
        }
        if ((row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) ||
           (pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                                (row,(__this->fields).id,
                                 (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                 *(bool *)((long)&(*(uint64_t *)((char *)pSVar4 + 0x18)) + 1),
                                 (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,
                                 (System_String_o *)0x0,(MethodInfo *)0x0),
           pGVar12 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_05891a9b;
        ppSVar14 = &(pGVar12->fields).action;
        (pGVar12->fields).action = "gameCreate.change.field";
      }
      Il2CppCodeGenWriteBarrier(ppSVar14);
      pSVar11 = (__this->fields).field;
    }
    else {
      pSVar11 = (__this->fields).field;
      pSVar9 = (__this->fields).id;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar11,pMVar15);
      pSVar3 = (__this->fields).allowed;
      __this_00 = (System_Func_TSource__TResult__o *)(__this->fields).__9__1;
      if (__this_00 == (System_Func_TSource__TResult__o *)0x0) {
        ppSStack_38 = &(__this->fields).__9__1;
        __this_00 = (System_Func_TSource__TResult__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
        System_Func_object__object____ctor
                  ((System_Func_object__object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0_BuildField_b__1
                   ,(MethodInfo_4F19B50 *)0x0);
        (__this->fields).__9__1 = (System_Func_string__string__o *)__this_00;
        Il2CppCodeGenWriteBarrier(ppSStack_38);
      }
      source = System_Linq_Enumerable__Select_object__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,__this_00,
                          (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
      labels = (System_String_array *)
               System_Linq_Enumerable__ToArray_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      pMVar15 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        pMVar15 = extraout_RDX_00;
      }
      options = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ChoiceOptions(pSVar3,labels,pMVar15);
      if ((row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) ||
         (pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_5268fb0
                              (row,pSVar9,pSVar10,options,(System_Action_GisketchActionContext__o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0),
         pGVar12 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_05891a9b;
      (pGVar12->fields).action = "gameCreate.change.field";
      Il2CppCodeGenWriteBarrier(&(pGVar12->fields).action);
      pSVar11 = (__this->fields).field;
    }
  }
joined_r0x058914df:
  if (pSVar11 != (Settings_ExperienceRuleField_o *)0x0) {
    if ((pSVar11->fields).Editable == false) {
      bVar7 = false;
    }
    else {
      bVar8 = System_String__op_Inequality((pSVar11->fields).Id,"general.GameMode",(MethodInfo *)0x0);
      bVar7 = true;
      if (!bVar8) {
        pSVar3 = (__this->fields).allowed;
        if (pSVar3 == (System_String_array *)0x0) goto label_05891a9b;
        bVar7 = 1 < (int)pSVar3->max_length;
      }
    }
    aSStack_48[0].hasValue = false;
    aSStack_48[0].value = false;
    pMVar15 = (MethodInfo *)(ulong)bVar7;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o *)aSStack_48,bVar7,
               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
    if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar12->fields).enabled.fields = aSStack_48[0];
      pSVar11 = (__this->fields).field;
      if (pSVar11 != (Settings_ExperienceRuleField_o *)0x0) {
        pSVar9 = (pSVar11->fields).Id;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel(pSVar9,pMVar15);
        (pGVar12->fields).formLabel = pSVar9;
        Il2CppCodeGenWriteBarrier(&(pGVar12->fields).formLabel);
        (pGVar12->fields).tooltip = (__this->fields).tooltip;
        Il2CppCodeGenWriteBarrier(&(pGVar12->fields).tooltip);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        if (Il2CppMethodInitialized_075451ed == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
          Il2CppMethodInitialized_075451ed = '\x01';
        }
        pMVar15 = (MethodInfo *)"Checkbox";
        bVar7 = System_String__op_Equality((pGVar12->fields).type,"Checkbox",(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pGVar13 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout_5785cd0(bVar7,pMVar15);
        (pGVar12->fields).layout = pGVar13;
        Il2CppCodeGenWriteBarrier(&(pGVar12->fields).layout);
        return;
      }
    }
  }
label_05891a9b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass37_0$$<BuildField>b__1
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0___BuildField_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5891aa0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0___BuildField_b__1
          (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o *__this,System_String_o *value
          ,MethodInfo *method)

{
  Settings_ExperienceRuleField_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07545225 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_07545225 = '\x01';
    method = extraout_RDX;
  }
  pSVar1 = (__this->fields).field;
  if (pSVar1 == (Settings_ExperienceRuleField_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (pSVar1->fields).Id;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    method = extraout_RDX_00;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__OptionLabel(pSVar2,value,method);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass39_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o* __this, const MethodInfo* method);
// 0x588b950

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass39_0$$<BuildSandboxPresetActions>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0___BuildSandboxPresetActions_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5891b10
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5891b5b: cmp byte ptr [rip + 0x1cb3740], 0
// asm:   0x5891b62: jne 0x5891b83
// asm:   0x5891bf4: jmp 0x5891b83

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0___BuildSandboxPresetActions_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass39_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *id;
  Settings_UISettings_o *pSVar1;
  Settings_ListSetting_StringSetting__o *favorites;
  MethodInfo *in_RCX;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_07545226 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_07545226 = '\x01';
  }
  id = (__this->fields).presetName;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075452a2 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar1 == (Settings_UISettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  favorites = (pSVar1->fields).FavoriteSandboxPresets;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ToggleFavorite_57a23a0(favorites,id,4,in_RCX);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom
            (context,(MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass40_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o* __this, const MethodInfo* method);
// 0x5883bb0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass40_0$$<BuildSandboxField>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0___BuildSandboxField_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5891ca0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5891fe3: jmp 0x58921b9
// asm:   0x5892218: cmp byte ptr [rip + 0x1cb2fce], 0
// asm:   0x589221f: jne 0x5892240
// asm:   0x58922e3: jmp 0x5892240
// asm:   0x589232f: jmp 0x5892467
// asm:   0x589237f: jmp 0x5892467
// asm:   0x58923cf: jmp 0x5892467
// asm:   0x5892462: jmp 0x58921b9

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0___BuildSandboxField_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  uint32_t uVar3;
  System_String_array *pSVar4;
  Settings_BaseSetting_o *pSVar5;
  Settings_BaseSetting_c *pSVar6;
  Settings_InspectorSettingMetadata_o *pSVar7;
  bool bVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar12;
  int iVar13;
  System_String_o **ppSVar14;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar15;
  MethodInfo *pMVar16;
  MethodInfo *in_R8;
  float value;
  float min;
  float max;
  System_Nullable_bool__Fields aSStack_40 [4];
  System_Nullable_bool__Fields aSStack_38 [4];
  
  pMVar16 = (MethodInfo *)row;
  if (Il2CppMethodInitialized_07545227 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"slider");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.sandbox.change.field");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.modeSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Password");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_07545227 = '\x01';
  }
  pGVar15 = (__this->fields).field;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldLabel(pGVar15,pMVar16);
  pSVar10 = System_String__Concat_52f0320((__this->fields).id,"-label",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLabel(row,pSVar9,"text",pSVar10,in_R8);
  pGVar15 = (__this->fields).field;
  if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_05892467;
  pMVar16 = (MethodInfo *)"general.GameMode";
  bVar8 = System_String__op_Equality
                    ((pGVar15->fields)._Id_k__BackingField,"general.GameMode",(MethodInfo *)0x0);
  pGVar15 = (__this->fields).field;
  if (bVar8) {
    if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_05892467;
    pSVar4 = (pGVar15->fields)._Options_k__BackingField;
    if (pSVar4 == (System_String_array *)0x0) goto label_05892467;
    iVar13 = (int)pSVar4->max_length;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar15,pMVar16);
      if (iVar13 < 2) goto label_05891f29;
label_05891e68:
      ppSVar14 = &"gameCreate.open.modeSelector";
    }
    else {
      pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar15,pMVar16);
      if (1 < iVar13) goto label_05891e68;
label_05891f29:
      ppSVar14 = *(System_String_o ***)(g_data_07556758 + 0xb8);
    }
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05892467;
    pSVar10 = (System_String_o *)0x0;
    if (1 < iVar13) {
      pSVar10 = "zoom";
    }
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        (row,1,pSVar9,*ppSVar14,(__this->fields).id,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar10,(MethodInfo *)0x0);
    aSStack_38[0].hasValue = false;
    aSStack_38[0].value = false;
    bVar8 = (bool)(1 < iVar13 & (__this->fields).enabled);
    pMVar16 = (MethodInfo *)(ulong)bVar8;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o *)aSStack_38,bVar8,
               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
    if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05892467;
    (pGVar11->fields).enabled.fields = aSStack_38[0];
    pGVar15 = (__this->fields).field;
    uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_05892467;
    pSVar4 = (pGVar15->fields)._Options_k__BackingField;
    if (pSVar4 == (System_String_array *)0x0) goto label_05892467;
    if (pSVar4->max_length == 0) {
      pSVar5 = (pGVar15->fields)._Setting_k__BackingField;
      if (pSVar5 != (Settings_BaseSetting_o *)0x0) {
        pSVar6 = pSVar5->klass;
        bVar1 = (pSVar6->_2).typeHierarchyDepth;
        bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
        if ((bVar2 <= bVar1) &&
           ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
          if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05892467;
          pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                              (row,(__this->fields).id,
                               (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                               *(bool *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 1),
                               (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(MethodInfo *)0x0);
          pMVar16 = (MethodInfo *)"gameCreate.sandbox.change.field";
          goto joined_r0x05892329;
        }
        bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
        goto label_0589204c;
        pSVar7 = (pSVar5->fields).InspectorMetadata;
        if (pSVar7 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_05892467;
        if ((pSVar7->fields).HasSlider == false) goto label_0589204c;
        pSVar9 = (pGVar15->fields)._Id_k__BackingField;
        if (pSVar9 == (System_String_o *)0x0) goto label_05892467;
        bVar8 = System_String__StartsWith_53002b0(pSVar9,"titan.",5,(MethodInfo *)0x0);
        if (bVar8) {
          pGVar15 = (__this->fields).field;
          if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_05892467;
          goto label_0589204c;
        }
        if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05892467;
        value = (float)*(int *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 4);
        pMVar16 = (MethodInfo *)(__this->fields).id;
        min = (float)*(int *)&(*(uint64_t *)((char *)pSVar5 + 0x20));
        max = (float)*(int *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x20)) + 4);
label_05892432:
        pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Slider
                            (row,(System_String_o *)pMVar16,value,true,"gameCreate.sandbox.change.field",
                             "slider",min,max,
                             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar15 = (__this->fields).field;
        uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
        goto joined_r0x0589245c;
      }
label_0589204c:
      pSVar5 = (pGVar15->fields)._Setting_k__BackingField;
      if (pSVar5 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar5->klass->_2).typeHierarchyDepth) &&
           ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          pSVar7 = (pSVar5->fields).InspectorMetadata;
          if (pSVar7 == (Settings_InspectorSettingMetadata_o *)0x0) goto label_05892467;
          if ((pSVar7->fields).HasSlider != false) {
            pSVar9 = (pGVar15->fields)._Id_k__BackingField;
            if (pSVar9 == (System_String_o *)0x0) goto label_05892467;
            bVar8 = System_String__StartsWith_53002b0(pSVar9,"titan.",5,(MethodInfo *)0x0);
            if (!bVar8) {
              if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05892467;
              max = *(float *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x20)) + 4);
              value = *(float *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 4);
              min = *(float *)&(*(uint64_t *)((char *)pSVar5 + 0x20));
              pMVar16 = (MethodInfo *)(__this->fields).id;
              goto label_05892432;
            }
            pGVar15 = (__this->fields).field;
            if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_05892467;
          }
        }
      }
      bVar8 = System_String__op_Equality
                        ((pGVar15->fields)._Id_k__BackingField,"general.Password",(MethodInfo *)0x0);
      iVar13 = 3;
      if (!bVar8) {
        pGVar15 = (__this->fields).field;
        if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_05892467;
        pSVar5 = (pGVar15->fields)._Setting_k__BackingField;
        iVar13 = 2;
        if (pSVar5 != (Settings_BaseSetting_o *)0x0) {
          pSVar6 = pSVar5->klass;
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (bVar1 <= (pSVar6->_2).typeHierarchyDepth) {
            iVar13 = (uint)((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                           (Il2CppClass *)TypeInfo_Settings_StringSetting) * 2;
          }
        }
      }
      if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05892467;
      pMVar16 = (MethodInfo *)(__this->fields).id;
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                          (row,(System_String_o *)pMVar16,
                           (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),iVar13,
                           "inputField",(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (System_Action_GisketchActionContext__o *)0x0,0.2,0,
                           (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
      pGVar15 = (__this->fields).field;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar15,pMVar16);
      if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05892467;
      (pGVar11->fields).value = pSVar9;
      Il2CppCodeGenWriteBarrier(&(pGVar11->fields).value);
      (pGVar11->fields).action = "gameCreate.sandbox.change.field";
      Il2CppCodeGenWriteBarrier(&(pGVar11->fields).action);
      pMVar16 = (MethodInfo *)"gameCreate.sandbox.change.field";
      ppSVar14 = &(pGVar11->fields).commitAction;
      (pGVar11->fields).commitAction = "gameCreate.sandbox.change.field";
    }
    else {
      pSVar9 = (__this->fields).id;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar15,pMVar16);
      pGVar15 = (__this->fields).field;
      if ((pGVar15 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) ||
         (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) goto label_05892467;
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown
                          (row,pSVar9,pSVar10,(pGVar15->fields)._Options_k__BackingField,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
      pMVar16 = (MethodInfo *)"gameCreate.sandbox.change.field";
joined_r0x05892329:
      "gameCreate.sandbox.change.field" = (System_String_o *)pMVar16;
      if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05892467;
      ppSVar14 = &(pGVar11->fields).action;
      (pGVar11->fields).action = (System_String_o *)pMVar16;
    }
    Il2CppCodeGenWriteBarrier(ppSVar14);
    pGVar15 = (__this->fields).field;
    uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
joined_r0x0589245c:
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldLabel(pGVar15,pMVar16);
  if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar11->fields).formLabel = pSVar9;
    Il2CppCodeGenWriteBarrier(&(pGVar11->fields).formLabel);
    (pGVar11->fields).tooltip = (__this->fields).tooltip;
    Il2CppCodeGenWriteBarrier(&(pGVar11->fields).tooltip);
    if ((__this->fields).enabled == false) {
      aSStack_40[0].hasValue = false;
      aSStack_40[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)aSStack_40,false,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      (pGVar11->fields).enabled.fields = aSStack_40[0];
      uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    if (Il2CppMethodInitialized_075451ed == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
      Il2CppMethodInitialized_075451ed = '\x01';
    }
    pMVar16 = (MethodInfo *)"Checkbox";
    bVar8 = System_String__op_Equality((pGVar11->fields).type,"Checkbox",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pGVar12 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout_5785cd0(bVar8,pMVar16);
    (pGVar11->fields).layout = pGVar12;
    Il2CppCodeGenWriteBarrier(&(pGVar11->fields).layout);
    return;
  }
label_05892467:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass41_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0_o* __this, const MethodInfo* method);
// 0x58843f0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass41_0$$<BuildSandboxGeneral>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0___BuildSandboxGeneral_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* core, const MethodInfo* method);
// 0x5892470

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0___BuildSandboxGeneral_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *core,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  
  if (Il2CppMethodInitialized_07545228 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxGeneral_b__41_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass41_0_BuildSandboxGeneral_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-core-selectors");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-core-values");
    Il2CppMethodInitialized_07545228 = '\x01';
  }
  pSVar1 = "clear";
  pSVar2 = (__this->fields).__9__1;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass41_0_BuildSandboxGeneral_b__1
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (core == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (core,pSVar1,pSVar2,"game-create-sandbox-core-selectors",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  pSVar1 = "clear";
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  pSVar2 = pGVar5->__9__41_2;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar5->__9;
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxGeneral_b__41_2
               ,(MethodInfo_4A81BE0 *)0x0);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar5->__9__41_2 = pSVar2;
    Il2CppCodeGenWriteBarrier(&pGVar5->__9__41_2);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(390.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (core,pSVar1,pSVar2,"game-create-sandbox-core-values",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass41_0$$<BuildSandboxGeneral>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0___BuildSandboxGeneral_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* selectors, const MethodInfo* method);
// 0x5892780

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0___BuildSandboxGeneral_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *selectors,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  int32_t iVar2;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *field_00;
  MethodInfo *in_R8;
  
  method_00 = (MethodInfo *)selectors;
  if (Il2CppMethodInitialized_07545229 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_07545229 = '\x01';
  }
  field_00 = (MethodInfo *)(__this->fields).map;
  if (field_00 != (MethodInfo *)0x0) {
    pSVar1 = ((Gisketch_Aottg2UI_Game_AottgSandboxField_Fields *)&field_00->invoker_method)->
             _Id_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    iVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(pSVar1,method_00);
    in_RCX = (MethodInfo *)0x1;
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField
              (selectors,(Gisketch_Aottg2UI_Game_AottgSandboxField_o *)field_00,iVar2,true,in_R8);
    method_00 = field_00;
  }
  field = (__this->fields).mode;
  if (field == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    return;
  }
  pSVar1 = (field->fields)._Id_k__BackingField;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  iVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(pSVar1,method_00);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxModeField(selectors,field,iVar2,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass46_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass46_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass46_0_o* __this, const MethodInfo* method);
// 0x58851a0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass46_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass46_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass46_0$$<BuildTitanHealthMode>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass46_0___BuildTitanHealthMode_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass46_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5892840
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589297b: jmp 0x5892bbf
// asm:   0x5892b2a: cmp byte ptr [rip + 0x1cb26bc], 0
// asm:   0x5892b31: jne 0x5892b52
// asm:   0x5892bbd: jmp 0x5892b52

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass46_0___BuildTitanHealthMode_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass46_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_String_o *value;
  Il2CppObject *object;
  System_String_o *id;
  bool leftAligned;
  System_String_o **ppSVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar5;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  MethodInfo *method_00;
  Il2CppClass *klass;
  System_Nullable_bool__Fields aSStack_48 [4];
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass46_0_o *pGStack_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_38;
  
  if (Il2CppMethodInitialized_0754522a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanHealthMode_b__46_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.HealthMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Fixed");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-mode");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-mode-label");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Scaled");
    Il2CppMethodInitialized_0754522a = '\x01';
  }
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05892bbf;
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (row,"GameCreate.Sandbox.Titans.HealthMode","text","game-create-titans-health-mode-label",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0589295f;
label_0589298e:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0589296b;
label_058929ad:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0589298e;
label_0589295f:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_058929ad;
label_0589296b:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)klass;
  if (pSVar1 != (Settings_InGameSet_o *)0x0) {
    pSVar2 = (pSVar1->fields).Titan;
    if ((pSVar2 != (Settings_InGameTitanSettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).TitanHealthMode, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar3->fields)._value == 2) {
        ppSVar4 = &"Scaled";
      }
      else {
        ppSVar4 = &"Fixed";
      }
      value = *ppSVar4;
      pGStack_38 = row;
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      options = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__TitanHealthModeChoices((MethodInfo *)klass);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      }
      id = "game-create-titans-health-mode";
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
      __this_00 = pGVar5->__9__46_1;
      if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
        pGStack_40 = __this;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
          pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
        }
        object = (Il2CppObject *)pGVar5->__9;
        __this_00 = (System_Action_GisketchActionContext__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_00,object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanHealthMode_b__46_1,
                   (MethodInfo_4A803E0 *)0x0);
        pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
        pGVar5->__9__46_1 = __this_00;
        Il2CppCodeGenWriteBarrier(&pGVar5->__9__46_1);
        __this = pGStack_40;
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_5268fb0
                         (pGStack_38,id,value,options,__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
      aSStack_48[0].hasValue = false;
      aSStack_48[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)aSStack_48,(__this->fields).enabled,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).enabled.fields = aSStack_48[0];
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        if (Il2CppMethodInitialized_075451ed == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
          Il2CppMethodInitialized_075451ed = '\x01';
        }
        method_00 = (MethodInfo *)"Checkbox";
        leftAligned = System_String__op_Equality
                                ((pGVar6->fields).type,"Checkbox",(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pGVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout_5785cd0
                           (leftAligned,method_00);
        (pGVar6->fields).layout = pGVar7;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout);
        return;
      }
    }
  }
label_05892bbf:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass50_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0_o* __this, const MethodInfo* method);
// 0x5885b20

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass50_0$$<BuildTitanToggle>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0___BuildTitanToggle_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5892bd0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0___BuildTitanToggle_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  bool value;
  uint32_t uVar1;
  System_String_o *pSVar2;
  System_String_o *id;
  System_Action_GisketchActionContext__o *__this_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_0754522b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass50_0_BuildTitanToggle_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_0754522b = '\x01';
  }
  pSVar2 = (__this->fields).label;
  id = System_String__Concat_52f0320((__this->fields).id,"-label",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLabel(row,pSVar2,"text",id,in_R8);
  pSVar2 = (__this->fields).id;
  value = (__this->fields).enabled;
  __this_00 = (__this->fields).__9__1;
  if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass50_0_BuildTitanToggle_b__1
               ,(MethodInfo_4A803E0 *)0x0);
    (__this->fields).__9__1 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldSwitch(row,pSVar2,value,__this_00,in_R8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass50_0$$<BuildTitanToggle>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0___BuildTitanToggle_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5892d20

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0___BuildTitanToggle_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_0754522c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_0754522c = '\x01';
  }
  pSVar1 = (__this->fields).setEnabled;
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = System_String__op_Equality
                      (((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
  }
  if (pSVar1 == (System_Action_bool__o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,bVar2,(pSVar1->fields).method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom
            (context,(MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass52_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x5885b30

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass52_0$$<BuildSandboxSwitchById>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0___BuildSandboxSwitchById_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5892dd0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0___BuildSandboxSwitchById_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  bool value;
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  Settings_BoolSetting_o *pSVar2;
  ulong in_RAX;
  System_String_o *pSVar3;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  MethodInfo *pMVar5;
  System_Action_GisketchActionContext__o *__this_00;
  MethodInfo *in_R8;
  ulong uStack_38;
  
  pMVar5 = (MethodInfo *)row;
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_0754522d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass52_0_BuildSandboxSwitchById_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_0754522d = '\x01';
  }
  field = (__this->fields).field;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldLabel(field,pMVar5);
  id = System_String__Concat_52f0320((__this->fields).id,"-label",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLabel(row,pSVar3,"text",id,in_R8);
  pSVar2 = (__this->fields).boolSetting;
  if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
    pMVar5 = (MethodInfo *)(__this->fields).id;
    value = (pSVar2->fields)._value;
    __this_00 = (__this->fields).__9__1;
    if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass52_0_BuildSandboxSwitchById_b__1
                 ,(MethodInfo_4A803E0 *)0x0);
      (__this->fields).__9__1 = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldSwitch
                       (row,(System_String_o *)pMVar5,value,__this_00,in_R8);
    pMVar5 = (MethodInfo *)
             Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldLabel((__this->fields).field,pMVar5);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).formLabel = (System_String_o *)pMVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).formLabel);
      pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip_5783bc0
                         ((__this->fields).field,pMVar5);
      (pGVar4->fields).tooltip = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).tooltip);
      uStack_38 = uStack_38 & 0xffffffffffff0000;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)&uStack_38,(__this->fields).enabled,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      (pGVar4->fields).enabled.fields = uStack_38._0_2_;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass52_0$$<BuildSandboxSwitchById>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0___BuildSandboxSwitchById_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5892fd0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0___BuildSandboxSwitchById_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int32_t index;
  System_String_o *value;
  bool bVar1;
  MethodInfo *in_RCX;
  System_String_o **ppSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_0754522e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_0754522e = '\x01';
  }
  index = (__this->fields).index;
  if (context.fields.Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar2 = &"true";
    bVar1 = System_String__op_Equality
                      (((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
    if (bVar1) goto label_05893048;
  }
  ppSVar2 = &"false";
label_05893048:
  value = *ppSVar2;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ChangeSandboxField(index,value,(System_String_o *)0x0,in_RCX)
  ;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom(context,(MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom
            (context,(MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass53_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o* __this, const MethodInfo* method);
// 0x5885cc0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass53_0$$<FieldSwitch>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___FieldSwitch_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* slot, const MethodInfo* method);
// 0x58933c0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0___FieldSwitch_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *slot,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_0754522f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_0754522f = '\x01';
  }
  if (slot != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Switch
                       (slot,(__this->fields).id,(__this->fields).value,(__this->fields).action,
                        (MethodInfo *)0x0);
    (__this->fields).toggle = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).toggle);
    pGVar1 = (__this->fields).toggle;
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass55_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass55_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass55_0_o* __this, const MethodInfo* method);
// 0x5885dc0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass55_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass55_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass55_0$$<BuildSandboxFieldsByIds>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass55_0___BuildSandboxFieldsByIds_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass55_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, int32_t i, const MethodInfo* method);
// 0x58934d0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass55_0___BuildSandboxFieldsByIds_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass55_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,int32_t i,MethodInfo *method)

{
  System_Collections_Generic_List_AottgSandboxField__o *pSVar1;
  System_String_o *id;
  int32_t index;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar2;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07545230 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item);
    Il2CppMethodInitialized_07545230 = '\x01';
  }
  pSVar1 = (__this->fields).fields;
  if (pSVar1 != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
    field = System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar1,i,
                       (MethodInfo_395CF20 *)
                       MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item);
    pSVar1 = (__this->fields).fields;
    if (pSVar1 != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
      method_00 = (MethodInfo *)(ulong)(uint)i;
      pGVar2 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,i,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Item);
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
        id = (pGVar2->fields)._Id_k__BackingField;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        index = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(id,method_00);
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField
                  (column,field,index,(__this->fields).enabled,in_R8);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass56_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass56_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass56_0_o* __this, const MethodInfo* method);
// 0x5885f20

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass56_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass56_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass56_0$$<BuildSandboxSwitchLine>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass56_0___BuildSandboxSwitchLine_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass56_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, int32_t __, const MethodInfo* method);
// 0x5893590

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass56_0___BuildSandboxSwitchLine_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass56_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,int32_t __,MethodInfo *method)

{
  System_String_o *fieldId;
  
  if (Il2CppMethodInitialized_07545231 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_07545231 = '\x01';
  }
  fieldId = (__this->fields).fieldId;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchById(column,fieldId,true,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass57_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0_o* __this, const MethodInfo* method);
// 0x5885f30

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass57_0$$<BuildFieldColumns>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0___BuildFieldColumns_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x58935f0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0___BuildFieldColumns_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_AottgUi__o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *pGVar5;
  
  if (Il2CppMethodInitialized_07545232 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass57_0_BuildFieldColumns_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass57_0_BuildFieldColumns_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-right");
    il2cpp_codegen_initialize_runtime_metadata(&"-left");
    Il2CppMethodInitialized_07545232 = '\x01';
  }
  pSVar1 = "clear";
  pSVar2 = (__this->fields).__9__1;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass57_0_BuildFieldColumns_b__1
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  pSVar3 = System_String__Concat_52f0320((__this->fields).id,"-left",(MethodInfo *)0x0);
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pGVar5);
  if (columns == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar1,pSVar2,pSVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  pSVar1 = "clear";
  pSVar2 = (__this->fields).__9__2;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass57_0_BuildFieldColumns_b__2
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
  }
  pSVar3 = System_String__Concat_52f0320((__this->fields).id,"-right",(MethodInfo *)0x0);
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pGVar5);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar1,pSVar2,pSVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass57_0$$<BuildFieldColumns>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0___BuildFieldColumns_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x58937d0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0___BuildFieldColumns_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  System_Action_AottgUi__int__o *pSVar1;
  int iVar2;
  
  if (0 < (__this->fields).split) {
    iVar2 = 0;
    do {
      pSVar1 = (__this->fields).build;
      if (pSVar1 == (System_Action_AottgUi__int__o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(code *)(pSVar1->fields).invoke_impl)
                ((pSVar1->fields).method_code,column,iVar2,(pSVar1->fields).method);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (__this->fields).split);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass57_0$$<BuildFieldColumns>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0___BuildFieldColumns_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x5893820
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x589382c: mov r14, rsi
// asm:   0x589382f: mov rbx, rdi
// asm:   0x5893832: nop word ptr cs:[rax + rax]

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0___BuildFieldColumns_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  System_Action_AottgUi__int__o *pSVar1;
  int iVar2;
  
  iVar2 = (__this->fields).split;
  if (iVar2 < (__this->fields).count) {
    do {
      pSVar1 = (__this->fields).build;
      if (pSVar1 == (System_Action_AottgUi__int__o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(code *)(pSVar1->fields).invoke_impl)
                ((pSVar1->fields).method_code,column,iVar2,(pSVar1->fields).method);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (__this->fields).count);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass63_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0_o* __this, const MethodInfo* method);
// 0x58865b0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass63_0$$<BuildMultiplayerRoom>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0___BuildMultiplayerRoom_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x5893870

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0___BuildMultiplayerRoom_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_Action_AottgUi__o *pSVar4;
  Il2CppClass *pIVar5;
  
  if (Il2CppMethodInitialized_07545233 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass63_0_BuildMultiplayerRoom_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass63_0_BuildMultiplayerRoom_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-right");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-left");
    Il2CppMethodInitialized_07545233 = '\x01';
  }
  pSVar2 = "clear";
  pSVar4 = (__this->fields).__9__2;
  if (pSVar4 == (System_Action_AottgUi__o *)0x0) {
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar4,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass63_0_BuildMultiplayerRoom_b__2
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)pIVar5;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar5);
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar5);
  }
  else {
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar5);
  }
  if (columns == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar2,pSVar4,"game-create-room-left",pGVar3,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = "clear";
  pSVar4 = (__this->fields).__9__3;
  if (pSVar4 == (System_Action_AottgUi__o *)0x0) {
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar4,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass63_0_BuildMultiplayerRoom_b__3
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__3 = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)pIVar5;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar5);
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar5);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar2,pSVar4,"game-create-room-right",pGVar3,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass63_0$$<BuildMultiplayerRoom>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0___BuildMultiplayerRoom_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x5893a80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5893b8f: jmp 0x5893bb5

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0___BuildMultiplayerRoom_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar6;
  MethodInfo *pMVar7;
  ulong uVar8;
  long lVar9;
  uint index;
  
  if (Il2CppMethodInitialized_07545234 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_07545234 = '\x01';
  }
  if (0 < (__this->fields).split) {
    index = 0;
    do {
      pIVar1 = (Il2CppObject *)(__this->fields).fields;
      if (pIVar1 == (Il2CppObject *)0x0) goto label_05893c5a;
      pIVar2 = pIVar1->klass;
      uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_AottgSandboxField__c **)
               ((long)&pIVar3->interfaceType + lVar9) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
            pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
            goto label_05893b63;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar8 * 0x10 != lVar9);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar1,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_05893b63:
      pMVar7 = (MethodInfo *)(ulong)index;
      pGVar6 = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)(*pVVar5->methodPtr)(pIVar1,index,pVVar5->method)
      ;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        bVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ShowRoomField(pGVar6,pMVar7);
        if (bVar4) goto label_05893bb5;
      }
      else {
        bVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ShowRoomField(pGVar6,pMVar7);
        if (bVar4) {
label_05893bb5:
          pIVar1 = (Il2CppObject *)(__this->fields).fields;
          if (pIVar1 == (Il2CppObject *)0x0) {
label_05893c5a:
            ThrowNullReferenceException();
          }
          pIVar2 = pIVar1->klass;
          uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar8 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(System_Collections_Generic_IReadOnlyList_AottgSandboxField__c **)
                   ((long)&pIVar3->interfaceType + lVar9) ==
                  TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
                pMVar7 = (MethodInfo *)(pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9));
                goto label_05893c21;
              }
              lVar9 = lVar9 + 0x10;
            } while (uVar8 * 0x10 != lVar9);
          }
          pMVar7 = (MethodInfo *)
                   GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar1,(Il2CppClass *)
                                     TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_05893c21:
          pGVar6 = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)
                   (*pMVar7->methodPointer)(pIVar1,index,(MethodInfo *)pMVar7->virtualMethodPointer);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomField(column,pGVar6,index,pMVar7);
        }
      }
      index = index + 1;
    } while ((int)index < (__this->fields).split);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass63_0$$<BuildMultiplayerRoom>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0___BuildMultiplayerRoom_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x5893c60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5893d0d: nop dword ptr [rax]
// asm:   0x5893ded: jmp 0x5893e05

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0___BuildMultiplayerRoom_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar6;
  MethodInfo *pMVar7;
  ulong uVar8;
  Il2CppObject *pIVar9;
  uint index;
  long lVar10;
  
  if (Il2CppMethodInitialized_07545235 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_07545235 = '\x01';
  }
  pIVar9 = (Il2CppObject *)(__this->fields).fields;
  if (pIVar9 != (Il2CppObject *)0x0) {
    index = (__this->fields).split;
    do {
      pIVar1 = pIVar9->klass;
      uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_AottgSandboxField__c **)
               ((long)&pIVar2->interfaceType + lVar10) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField) {
            pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
            goto label_05893d43;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar8 * 0x10 != lVar10);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar9,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,0);
label_05893d43:
      iVar4 = (*pVVar5->methodPtr)(pIVar9,pVVar5->method);
      if (iVar4 <= (int)index) {
        return;
      }
      pIVar9 = (Il2CppObject *)(__this->fields).fields;
      if (pIVar9 == (Il2CppObject *)0x0) break;
      pIVar1 = pIVar9->klass;
      uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_AottgSandboxField__c **)
               ((long)&pIVar2->interfaceType + lVar10) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
            pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
            goto label_05893dc3;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar8 * 0x10 != lVar10);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar9,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_05893dc3:
      pMVar7 = (MethodInfo *)(ulong)index;
      pGVar6 = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)(*pVVar5->methodPtr)(pIVar9,index,pVVar5->method)
      ;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ShowRoomField(pGVar6,pMVar7);
        if (bVar3) goto label_05893e05;
      }
      else {
        bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ShowRoomField(pGVar6,pMVar7);
        if (bVar3) {
label_05893e05:
          pIVar9 = (Il2CppObject *)(__this->fields).fields;
          if (pIVar9 == (Il2CppObject *)0x0) break;
          pIVar1 = pIVar9->klass;
          uVar8 = (ulong)(pIVar1->_2).interface_offsets_count;
          if (uVar8 != 0) {
            pIVar2 = (pIVar1->_1).interfaceOffsets;
            lVar10 = 0;
            do {
              if (*(System_Collections_Generic_IReadOnlyList_AottgSandboxField__c **)
                   ((long)&pIVar2->interfaceType + lVar10) ==
                  TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
                pMVar7 = (MethodInfo *)(pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10));
                goto label_05893e71;
              }
              lVar10 = lVar10 + 0x10;
            } while (uVar8 * 0x10 != lVar10);
          }
          pMVar7 = (MethodInfo *)
                   GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar9,(Il2CppClass *)
                                     TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_05893e71:
          pGVar6 = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)
                   (*pMVar7->methodPointer)(pIVar9,index,(MethodInfo *)pMVar7->virtualMethodPointer);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomField(column,pGVar6,index,pMVar7);
        }
      }
      index = index + 1;
      pIVar9 = (Il2CppObject *)(__this->fields).fields;
    } while (pIVar9 != (Il2CppObject *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass66_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass66_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass66_0_o* __this, const MethodInfo* method);
// 0x58868d0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass66_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass66_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass66_0$$<BuildRoomField>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass66_0___BuildRoomField_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass66_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5893eb0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5894058: cmp byte ptr [rip + 0x1cb1174], 0
// asm:   0x589405f: je 0x5894245
// asm:   0x5894065: test r14, r14
// asm:   0x5894068: jne 0x5894279
// asm:   0x589406e: jmp 0x589443a
// asm:   0x5894151: test r14, r14
// asm:   0x5894427: mov rbx, rax
// asm:   0x589442a: jmp 0x58942f4

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass66_0___BuildRoomField_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass66_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar4;
  Settings_BaseSetting_o *pSVar5;
  Settings_BaseSetting_c *pSVar6;
  bool bVar7;
  System_String_o *id;
  System_String_o **ppSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar12;
  int32_t type;
  System_String_array *options;
  MethodInfo *pMVar13;
  MethodInfo *in_R8;
  System_Nullable_bool__Fields aSStack_38 [4];
  
  if (Il2CppMethodInitialized_07545236 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.room.change.field");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Password");
    Il2CppMethodInitialized_07545236 = '\x01';
  }
  pGVar4 = (__this->fields).field;
  if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_0589443a;
  pSVar11 = (pGVar4->fields)._Label_k__BackingField;
  id = System_String__Concat_52f0320((__this->fields).id,"-label",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLabel(row,pSVar11,"text",id,in_R8);
  pGVar4 = (__this->fields).field;
  if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_0589443a;
  bVar7 = System_String__op_Equality
                    ((pGVar4->fields)._Id_k__BackingField,"misc.VoiceChat",(MethodInfo *)0x0);
  if (bVar7) {
    pGVar4 = (__this->fields).field;
    if ((pGVar4 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) ||
       (pSVar5 = (pGVar4->fields)._Setting_k__BackingField, pSVar5 == (Settings_BaseSetting_o *)0x0))
    goto label_0589443a;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((pSVar5->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pSVar11 = (__this->fields).id;
    iVar3 = *(int *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 4);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    if (Il2CppMethodInitialized_075451d3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Proximity");
      il2cpp_codegen_initialize_runtime_metadata(&"None");
      il2cpp_codegen_initialize_runtime_metadata(&"Global");
      Il2CppMethodInitialized_075451d3 = '\x01';
    }
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0589443a;
    if (iVar3 == 1) {
      ppSVar8 = &"Proximity";
      options = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->VoiceChatValues;
    }
    else {
      ppSVar8 = &"None";
      options = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->VoiceChatValues;
      if (iVar3 == 0) {
        ppSVar8 = &"Global";
      }
    }
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown
                       (row,pSVar11,*ppSVar8,options,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        8,(MethodInfo *)0x0);
    pGVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__VoiceChatChoices((MethodInfo *)row);
    if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0589443a;
    (pGVar9->fields).choiceOptions = pGVar10;
    Il2CppCodeGenWriteBarrier(&(pGVar9->fields).choiceOptions);
label_058942f4:
    ppSVar8 = &(pGVar9->fields).action;
    (pGVar9->fields).action = "gameCreate.room.change.field";
  }
  else {
    pGVar4 = (__this->fields).field;
    if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_0589443a;
    pSVar5 = (pGVar4->fields)._Setting_k__BackingField;
    if (pSVar5 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (pSVar5->klass->_2).typeHierarchyDepth) &&
         ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)
         ) {
        if ((row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) ||
           (pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                               (row,(__this->fields).id,
                                (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                *(bool *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 1),
                                (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(MethodInfo *)0x0),
           pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_0589443a;
        goto label_058942f4;
      }
    }
    bVar7 = System_String__op_Equality
                      ((pGVar4->fields)._Id_k__BackingField,"general.Password",(MethodInfo *)0x0);
    type = 3;
    if (!bVar7) {
      pGVar4 = (__this->fields).field;
      if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_0589443a;
      pSVar5 = (pGVar4->fields)._Setting_k__BackingField;
      type = 2;
      if (pSVar5 != (Settings_BaseSetting_o *)0x0) {
        pSVar6 = pSVar5->klass;
        bVar1 = (pSVar6->_2).typeHierarchyDepth;
        bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
          if (bVar2 <= bVar1) {
            type = 2 - (uint)((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                             (Il2CppClass *)TypeInfo_Settings_IntSetting);
          }
        }
        else {
          type = 0;
        }
      }
    }
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0589443a;
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (row,(__this->fields).id,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),type
                        ,"inputField",(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    aSStack_38[0].hasValue = false;
    aSStack_38[0].value = false;
    pMVar13 = (MethodInfo *)0x0;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o *)aSStack_38,false,
               (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
    if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0589443a;
    (pGVar9->fields).richText.fields = aSStack_38[0];
    pGVar4 = (__this->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar4,pMVar13);
    (pGVar9->fields).value = pSVar11;
    Il2CppCodeGenWriteBarrier(&(pGVar9->fields).value);
    (pGVar9->fields).action = "gameCreate.room.change.field";
    Il2CppCodeGenWriteBarrier(&(pGVar9->fields).action);
    ppSVar8 = &(pGVar9->fields).commitAction;
    (pGVar9->fields).commitAction = "gameCreate.room.change.field";
  }
  Il2CppCodeGenWriteBarrier(ppSVar8);
  pGVar4 = (__this->fields).field;
  if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    pMVar13 = (MethodInfo *)(pGVar4->fields)._Label_k__BackingField;
    (pGVar9->fields).formLabel = (System_String_o *)pMVar13;
    Il2CppCodeGenWriteBarrier(&(pGVar9->fields).formLabel);
    pGVar4 = (__this->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip_5783bc0(pGVar4,pMVar13);
    (pGVar9->fields).tooltip = pSVar11;
    Il2CppCodeGenWriteBarrier(&(pGVar9->fields).tooltip);
    if (Il2CppMethodInitialized_075451ed == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
      Il2CppMethodInitialized_075451ed = '\x01';
    }
    pMVar13 = (MethodInfo *)"Checkbox";
    bVar7 = System_String__op_Equality((pGVar9->fields).type,"Checkbox",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pGVar12 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout_5785cd0(bVar7,pMVar13);
    (pGVar9->fields).layout = pGVar12;
    Il2CppCodeGenWriteBarrier(&(pGVar9->fields).layout);
    return;
  }
label_0589443a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass72_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass72_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass72_0_o* __this, const MethodInfo* method);
// 0x5886ef0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass72_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass72_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass72_0$$<ChoiceOptions>b__0
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass72_0___ChoiceOptions_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass72_0_o* __this, System_String_o* value, int32_t index, const MethodInfo* method);
// 0x5894450

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass72_0___ChoiceOptions_b__0
          (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass72_0_o *__this,System_String_o *value
          ,int32_t index,MethodInfo *method)

{
  System_String_array *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_07545237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    Il2CppMethodInitialized_07545237 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
    (__this_00->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
    pSVar1 = (__this->fields).labels;
    if (pSVar1 != (System_String_array *)0x0) {
      if ((uint)pSVar1->max_length <= (uint)index) {
        ThrowIndexOutOfRangeException();
      }
      (__this_00->fields).text = pSVar1->m_Items[index];
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass78_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0_o* __this, const MethodInfo* method);
// 0x58877c0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass78_0$$<BuildLockedFieldColumns>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0___BuildLockedFieldColumns_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x58944f0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0___BuildLockedFieldColumns_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_Action_AottgUi__o *pSVar4;
  Il2CppClass *pIVar5;
  
  if (Il2CppMethodInitialized_07545238 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass78_0_BuildLockedFieldColumns_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass78_0_BuildLockedFieldColumns_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-fields-left");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-fields-right");
    Il2CppMethodInitialized_07545238 = '\x01';
  }
  pSVar2 = "clear";
  pSVar4 = (__this->fields).__9__1;
  if (pSVar4 == (System_Action_AottgUi__o *)0x0) {
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar4,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass78_0_BuildLockedFieldColumns_b__1
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)pIVar5;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar5);
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar5);
  }
  else {
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar5);
  }
  if (columns == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar2,pSVar4,"game-create-locked-fields-left",pGVar3,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = "clear";
  pSVar4 = (__this->fields).__9__2;
  if (pSVar4 == (System_Action_AottgUi__o *)0x0) {
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar4,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass78_0_BuildLockedFieldColumns_b__2
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)pIVar5;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar5);
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar5);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar2,pSVar4,"game-create-locked-fields-right",pGVar3,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass78_0$$<BuildLockedFieldColumns>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0___BuildLockedFieldColumns_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x5894700

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0___BuildLockedFieldColumns_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  MethodInfo *method_00;
  Settings_ExperienceRuleField_o *field;
  ulong uVar3;
  long lVar4;
  int32_t index;
  
  if (Il2CppMethodInitialized_07545239 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    Il2CppMethodInitialized_07545239 = '\x01';
  }
  if (0 < (__this->fields).split) {
    index = 0;
    do {
      obj = (Il2CppObject *)(__this->fields).fields;
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar1 = obj->klass;
      uVar3 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar3 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar4 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c **)
               ((long)&pIVar2->interfaceType + lVar4) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
            method_00 = (MethodInfo *)(pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar4));
            goto label_058947e3;
          }
          lVar4 = lVar4 + 0x10;
        } while (uVar3 * 0x10 != lVar4);
      }
      method_00 = (MethodInfo *)
                  GetInterfaceInvokeDataFromVTableSlowPath
                            (obj,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_058947e3:
      field = (Settings_ExperienceRuleField_o *)
              (*method_00->methodPointer)(obj,index,(MethodInfo *)method_00->virtualMethodPointer);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedField(column,field,index,method_00);
      index = index + 1;
    } while (index < (__this->fields).split);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass78_0$$<BuildLockedFieldColumns>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0___BuildLockedFieldColumns_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x5894830
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58948dc: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0___BuildLockedFieldColumns_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  int32_t iVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  Settings_ExperienceRuleField_o *field;
  ulong uVar5;
  Il2CppObject *pIVar6;
  int32_t index;
  long lVar7;
  
  if (Il2CppMethodInitialized_0754523a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    Il2CppMethodInitialized_0754523a = '\x01';
  }
  pIVar6 = (Il2CppObject *)(__this->fields).fields;
  if (pIVar6 != (Il2CppObject *)0x0) {
    index = (__this->fields).split;
    do {
      pIVar1 = pIVar6->klass;
      uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField__c **)
               ((long)&pIVar2->interfaceType + lVar7) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField) {
            pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7);
            goto label_05894913;
          }
          lVar7 = lVar7 + 0x10;
        } while (uVar5 * 0x10 != lVar7);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,0
                         );
label_05894913:
      iVar3 = (*pVVar4->methodPtr)(pIVar6,pVVar4->method);
      if (iVar3 <= index) {
        return;
      }
      pIVar6 = (Il2CppObject *)(__this->fields).fields;
      if (pIVar6 == (Il2CppObject *)0x0) break;
      pIVar1 = pIVar6->klass;
      uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c **)
               ((long)&pIVar2->interfaceType + lVar7) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
            method_00 = (MethodInfo *)(pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7));
            goto label_05894993;
          }
          lVar7 = lVar7 + 0x10;
        } while (uVar5 * 0x10 != lVar7);
      }
      method_00 = (MethodInfo *)
                  GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar6,(Il2CppClass *)
                                    TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_05894993:
      field = (Settings_ExperienceRuleField_o *)
              (*method_00->methodPointer)(pIVar6,index,(MethodInfo *)method_00->virtualMethodPointer);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedField(column,field,index,method_00);
      index = index + 1;
      pIVar6 = (Il2CppObject *)(__this->fields).fields;
    } while (pIVar6 != (Il2CppObject *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass79_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass79_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass79_0_o* __this, const MethodInfo* method);
// 0x5887950

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass79_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass79_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass79_0$$<BuildLockedField>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass79_0___BuildLockedField_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass79_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58949d0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5894b67: mov rbx, r14
// asm:   0x5894b6a: jmp 0x5894ba6
// asm:   0x5894ba4: je 0x5894be3
// asm:   0x5894be0: mov r14, rbx
// asm:   0x5894be3: mov rbp, r9

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass79_0___BuildLockedField_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass79_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_ExperienceRuleField_o *pSVar3;
  Settings_BaseSetting_o *pSVar4;
  Settings_BaseSetting_c *pSVar5;
  bool leftAligned;
  System_String_o *pSVar6;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  MethodInfo *pMVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  int32_t type;
  MethodInfo *in_R8;
  System_Nullable_bool__Fields aSStack_38 [4];
  
  pMVar8 = (MethodInfo *)row;
  if (Il2CppMethodInitialized_0754523b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    Il2CppMethodInitialized_0754523b = '\x01';
  }
  pSVar3 = (__this->fields).field;
  if (pSVar3 == (Settings_ExperienceRuleField_o *)0x0) goto label_05894dc5;
  pSVar6 = (pSVar3->fields).Id;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel(pSVar6,pMVar8);
  id = System_String__Concat_52f0320((__this->fields).id,"-label",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLabel(row,pSVar6,"subtext",id,in_R8);
  pSVar3 = (__this->fields).field;
  if (pSVar3 == (Settings_ExperienceRuleField_o *)0x0) goto label_05894dc5;
  pSVar4 = (pSVar3->fields).Setting;
  if (pSVar4 == (Settings_BaseSetting_o *)0x0) {
    pMVar8 = (MethodInfo *)(__this->fields).id;
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    type = 2;
label_05894be6:
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05894dc5;
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (row,(System_String_o *)pMVar8,pSVar6,type,"inputField",
                        (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar3,pMVar8);
    if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05894dc5;
    (pGVar7->fields).value = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields).value);
  }
  else {
    pSVar5 = pSVar4->klass;
    bVar1 = (pSVar5->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      pMVar8 = (MethodInfo *)(__this->fields).id;
      pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         (type = 0,
         (pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        type = 2;
        if (bVar1 <= (pSVar4->klass->_2).typeHierarchyDepth) {
          type = 2 - (uint)((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                           (Il2CppClass *)TypeInfo_Settings_IntSetting);
        }
      }
      goto label_05894be6;
    }
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05894dc5;
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                       (row,(__this->fields).id,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                        *(bool *)((long)&(*(uint64_t *)((char *)pSVar4 + 0x18)) + 1),(System_Action_GisketchActionContext__o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0);
  }
  aSStack_38[0].hasValue = false;
  aSStack_38[0].value = false;
  pMVar8 = (MethodInfo *)0x0;
  System_Nullable_bool____ctor
            ((System_Nullable_bool__o *)aSStack_38,false,
             (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar7->fields).enabled.fields = aSStack_38[0];
    pSVar3 = (__this->fields).field;
    if (pSVar3 != (Settings_ExperienceRuleField_o *)0x0) {
      pSVar6 = (pSVar3->fields).Id;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pMVar8 = (MethodInfo *)Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel(pSVar6,pMVar8);
      (pGVar7->fields).formLabel = (System_String_o *)pMVar8;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).formLabel);
      pSVar3 = (__this->fields).field;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__LockedFieldTooltip(pSVar3,pMVar8);
      (pGVar7->fields).tooltip = pSVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).tooltip);
      if (Il2CppMethodInitialized_075451ed == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
        Il2CppMethodInitialized_075451ed = '\x01';
      }
      pMVar8 = (MethodInfo *)"Checkbox";
      leftAligned = System_String__op_Equality((pGVar7->fields).type,"Checkbox",(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pGVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout_5785cd0(leftAligned,pMVar8);
      (pGVar7->fields).layout = pGVar9;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).layout);
      return;
    }
  }
label_05894dc5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0_o* __this, const MethodInfo* method);
// 0x5887a30

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_0$$<BuildExperienceFields>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0___BuildExperienceFields_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* corePanel, const MethodInfo* method);
// 0x5894dd0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0___BuildExperienceFields_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *corePanel,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_ExperienceRuleField__o *fields;
  Settings_SandboxGameCreateConfiguration_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1_o *__this_00;
  Settings_ExperienceRuleField_o *pSVar3;
  System_Action_AottgUi__o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754523c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_1_BuildExperienceFields_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_1_BuildExperienceFields_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_1_BuildExperienceFields_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_1);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-core-descriptions");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-core-map");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-core-controls");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_0754523c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_1);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1_o *)0x0)
  goto label_05895395;
  (__this_00->fields).CS___8__locals1 = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).CS___8__locals1);
  fields = (__this->fields).core;
  pMVar8 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    pMVar8 = extraout_RDX_00;
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FindField
                     ((System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)fields,
                      "general.MapName",pMVar8);
  (__this_00->fields).map = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).map);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FindField
                     ((System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)(__this->fields).core
                      ,"general.GameMode",method_00);
  (__this_00->fields).mode = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).mode);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar4,(Il2CppObject *)__this_00,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_1_BuildExperienceFields_b__1
             ,(MethodInfo_4A81BE0 *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (corePanel == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05895395;
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (corePanel,"clear",pSVar4,"game-create-core-map",pGVar6,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_07545263 != '\0') goto label_0589505f;
label_05895365:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_07545263 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_07545263 == '\0') goto label_05895365;
label_0589505f:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxConfiguration;
  if (pSVar2 != (Settings_SandboxGameCreateConfiguration_o *)0x0) {
    pMVar8 = (MethodInfo *)&(__this_00->fields).mapDescription;
    (__this_00->fields).mapDescription = (pSVar2->fields)._MapDescription_k__BackingField;
    Il2CppCodeGenWriteBarrier((void **)pMVar8);
    pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_ModeDescription(pMVar8);
    (__this_00->fields).modeDescription = pSVar7;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).modeDescription);
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar4,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_1_BuildExperienceFields_b__2
               ,(MethodInfo_4A81BE0 *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,height,minWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    contentLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                    (System_String_o *)0x0,12.0,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                    0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__ScrollView
              (corePanel,"default",pSVar4,"game-create-core-descriptions",pGVar6,contentLayout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar4,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_1_BuildExperienceFields_b__3
               ,(MethodInfo_4A81BE0 *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (corePanel,"clear",pSVar4,"game-create-core-controls",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_05895395:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1_o* __this, const MethodInfo* method);
// 0x58953a0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_1$$<BuildExperienceFields>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1___BuildExperienceFields_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* mapColumn, const MethodInfo* method);
// 0x5895590
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5895630: jmp 0x5895682

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1___BuildExperienceFields_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *mapColumn,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  Settings_ExperienceRuleField_o *field;
  Settings_ExperienceRuleField_array *pSVar3;
  uint index;
  uint uVar4;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754523d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_0754523d = '\x01';
  }
  field = (__this->fields).map;
  if (field == (Settings_ExperienceRuleField_o *)0x0) {
    return;
  }
  if ((__this->fields).CS___8__locals1 ==
      (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0_o *)0x0) goto label_0589567b;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    if (Il2CppMethodInitialized_075451e7 == '\0') goto label_05895646;
label_058955e7:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    if (Il2CppMethodInitialized_075451e7 != '\0') goto label_058955e7;
label_05895646:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075451e7 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)klass);
  }
  else {
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)klass);
  }
  if (pSVar3 != (Settings_ExperienceRuleField_array *)0x0) {
    uVar2 = (uint)pSVar3->max_length;
    index = 0xffffffff;
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if (pSVar3->m_Items[(int)uVar4] == field) {
          index = uVar4;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField(mapColumn,field,index,(MethodInfo *)(ulong)uVar2)
    ;
    return;
  }
label_0589567b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_1$$<BuildExperienceFields>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1___BuildExperienceFields_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* descriptions, const MethodInfo* method);
// 0x58956a0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1___BuildExperienceFields_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *descriptions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  
  if (Il2CppMethodInitialized_0754523e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-description-label");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-description-label");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Map.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-description-scroll-layout");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-description");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateDescriptionScrollLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Mode.Description");
    Il2CppMethodInitialized_0754523e = '\x01';
  }
  if (descriptions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (descriptions,"GameCreate.Map.Description","text","game-create-map-description-label",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (descriptions,(__this->fields).mapDescription,"text",
                        "game-create-map-description",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      Gisketch_Aottg2UI_Code_AottgUi__TextKey
                (descriptions,"GameCreate.Mode.Description","text","game-create-mode-description-label",
                 (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (descriptions,(__this->fields).modeDescription,"text",
                          "game-create-mode-description",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).layout = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
        pGVar1 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar1->fields).type = "GameCreateDescriptionScrollLayout";
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).type);
          (pGVar1->fields).id = "game-create-description-scroll-layout";
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).id);
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,height,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar1->fields).layout = pGVar3;
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
          Gisketch_Aottg2UI_Code_AottgUi__Add(descriptions,pGVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass81_1$$<BuildExperienceFields>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1___BuildExperienceFields_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* controls, const MethodInfo* method);
// 0x5895a70
// eh: try 0x5895c46..0x5895d26 -> pad 0x5895d33 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5895d4b..0x5895d50 -> pad 0x5895d71 cleanup
// eh: try 0x5895d74..0x5895d7e -> pad 0x5895d86 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5895b41: jmp 0x5895d26
// asm:   0x5895bb0: jmp 0x5895bb4
// asm:   0x5895c44: mov edx, esi
// asm:   0x5895cdf: nop 
// asm:   0x5895cf4: jmp 0x5895c46
// asm:   0x5895d2b: jmp 0x5895d33
// asm:   0x5895d2d: jmp 0x5895d33
// asm:   0x5895d2f: jmp 0x5895d33
// asm:   0x5895d31: jmp 0x5895d33
// asm:   0x5895d33: mov rbx, rax
// asm:   0x5895d36: cmp edx, 1
// asm:   0x5895d39: jne 0x5895d74
// asm:   0x5895d3b: mov rdi, rbx
// asm:   0x5895d3e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5895d43: mov rbx, qword ptr [rax]
// asm:   0x5895d46: mov qword ptr [rsp + 8], rbx
// asm:   0x5895d4b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5895d50: lea rax, [rip + 0x19f7f49]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose
// asm:   0x5895d57: mov rsi, qword ptr [rax]
// asm:   0x5895d5a: lea rdi, [rsp + 0x20]
// asm:   0x5895d5f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5895d64: test rbx, rbx
// asm:   0x5895d67: je 0x5895d0d
// asm:   0x5895d69: mov rdi, rbx
// asm:   0x5895d6c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5895d71: mov rbx, rax
// asm:   0x5895d74: lea rdi, [rsp + 8]
// asm:   0x5895d79: call 0x2fcf860  ; il2cpp_runtime_helper_02fcf860()
// asm:   0x5895d7e: mov rdi, rbx
// asm:   0x5895d81: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5895d86: mov rdi, rax
// asm:   0x5895d89: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1___BuildExperienceFields_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *controls,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0_o *pGVar2;
  System_Collections_Generic_List_ExperienceRuleField__o *__this_00;
  Il2CppObject *field;
  bool bVar3;
  Settings_ExperienceRuleField_array *pSVar4;
  uint uVar5;
  uint uVar6;
  MethodInfo *method_00;
  MethodInfo *field_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *pGVar7;
  undefined1 auStack_60 [16];
  Settings_ExperienceRuleField_o *pSStack_50;
  System_Collections_Generic_List_Enumerator_object__o SStack_48;
  
  method_00 = (MethodInfo *)controls;
  if (Il2CppMethodInitialized_0754523f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_GetEnumerator);
    Il2CppMethodInitialized_0754523f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceScore(controls,method_00);
  field_00 = (MethodInfo *)(__this->fields).mode;
  if (field_00 != (MethodInfo *)0x0) {
    if ((__this->fields).CS___8__locals1 ==
        (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0_o *)0x0) goto label_05895d26;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      if (Il2CppMethodInitialized_075451e7 == '\0') goto label_05895b54;
label_05895b24:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_05895b37;
label_05895b7a:
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)pGVar7);
    }
    else {
      if (Il2CppMethodInitialized_075451e7 != '\0') goto label_05895b24;
label_05895b54:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075451e7 = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_05895b7a;
label_05895b37:
      pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields
                         ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    }
    if (pSVar4 == (Settings_ExperienceRuleField_array *)0x0) goto label_05895d26;
    uVar1 = (uint)pSVar4->max_length;
    uVar5 = 0xffffffff;
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if ((MethodInfo *)pSVar4->m_Items[(int)uVar6] == field_00) {
          uVar5 = uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceModeField
              (controls,(Settings_ExperienceRuleField_o *)field_00,uVar5,(MethodInfo *)(ulong)uVar1);
    method_00 = field_00;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildVariantSelector(controls,method_00);
  pGVar2 = (__this->fields).CS___8__locals1;
  if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0_o *)0x0) &&
     (__this_00 = (pGVar2->fields).core,
     __this_00 != (System_Collections_Generic_List_ExperienceRuleField__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_ExperienceRuleField_GetEnumerator);
    SStack_48.fields._current = (Il2CppObject *)pSStack_50;
    SStack_48.fields._list = (System_Collections_Generic_List_T__o *)auStack_60._0_8_;
    SStack_48.fields._index = auStack_60._8_4_;
    SStack_48.fields._version = auStack_60._12_4_;
    auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_60._8_8_ = &SStack_48;
    do {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&SStack_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_MoveNext)
        ;
        field = SStack_48.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (&SStack_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_ExperienceRuleField_Dispose);
          return;
        }
      } while (((Settings_ExperienceRuleField_o *)SStack_48.fields._current == (__this->fields).map) ||
              ((Settings_ExperienceRuleField_o *)SStack_48.fields._current == (__this->fields).mode));
      if ((__this->fields).CS___8__locals1 ==
          (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      if (Il2CppMethodInitialized_075451e7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075451e7 = '\x01';
      }
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)pGVar7);
      if (pSVar4 == (Settings_ExperienceRuleField_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar1 = (uint)pSVar4->max_length;
      uVar5 = 0xffffffff;
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          uVar5 = uVar6;
          if (pSVar4->m_Items[(int)uVar6] == (Settings_ExperienceRuleField_o *)field) break;
          uVar6 = uVar6 + 1;
          uVar5 = 0xffffffff;
        } while (uVar1 != uVar6);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField
                (controls,(Settings_ExperienceRuleField_o *)field,uVar5,(MethodInfo *)(ulong)uVar1);
    } while( true );
  }
label_05895d26:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass84_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass84_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x5888c10

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass84_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass84_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass84_0$$<BuildVariantSelector>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass84_0___BuildVariantSelector_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass84_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5895d90
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5895f2c: mov rbp, rbx
// asm:   0x5895f2f: mov r12, r13
// asm:   0x5895f32: jmp 0x5895f48
// asm:   0x589607b: cmp byte ptr [rip + 0x1caf16b], 0
// asm:   0x5896082: jne 0x58960a3
// asm:   0x58960cb: movzx edi, bpl
// asm:   0x58960cf: call 0x5885cd0  ; Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout()
// asm:   0x58960d4: mov rdi, rbx
// asm:   0x58960d7: add rdi, 0x120
// asm:   0x58960de: mov qword ptr [rbx + 0x120], rax
// asm:   0x58960e5: mov rsi, rax
// asm:   0x58960e8: add rsp, 8
// asm:   0x58960ec: pop rbx
// asm:   0x58960ed: pop r12
// asm:   0x58960ef: pop r13
// asm:   0x58960f1: pop r14
// asm:   0x58960f3: pop r15
// asm:   0x58960f5: pop rbp
// asm:   0x58960f6: jmp 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x589610d: jmp 0x58960a3

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass84_0___BuildVariantSelector_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass84_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  ulong *puVar1;
  System_String_array *values;
  Il2CppObject *object;
  System_String_o *id;
  bool leftAligned;
  System_Func_object__object__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *labels;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  System_Action_GisketchActionContext__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **ppGVar7;
  
  if (Il2CppMethodInitialized_07545240 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ContentLocale_ExperienceVariant);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildVariantSelector_b__84_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-variants-label");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Variants.Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Variants");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-variants");
    Il2CppMethodInitialized_07545240 = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (row,"GameCreate.Configuration.Variants","text","game-create-variants-label",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).selected;
    values = (__this->fields).variants;
    __this_00 = (System_Func_object__object__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              (__this_00,(Il2CppObject *)0x0,(intptr_t)MethodInfo_UI_ContentLocale_ExperienceVariant,
               (MethodInfo_4F19B50 *)0x0);
    source = System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)values,
                        (System_Func_TSource__TResult__o *)__this_00,
                        (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
    labels = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
    pMVar5 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      pMVar5 = extraout_RDX_00;
    }
    options = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ChoiceOptions(values,labels,pMVar5);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    }
    id = "game-create-variants";
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    __this_01 = pGVar6->__9__84_1;
    if (__this_01 == (System_Action_GisketchActionContext__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
        pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
      }
      object = (Il2CppObject *)pGVar6->__9;
      __this_01 = (System_Action_GisketchActionContext__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_01,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildVariantSelector_b__84_1,
                 (MethodInfo_4A803E0 *)0x0);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
      pGVar6->__9__84_1 = __this_01;
      Il2CppCodeGenWriteBarrier(&pGVar6->__9__84_1);
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Dropdown_5268fb0
                       (row,id,pSVar3,options,__this_01,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("GameCreate.Configuration.Variants",(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).formLabel = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).formLabel);
      pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("GameCreate.Configuration.Variants.Tooltip",(MethodInfo *)0x0);
      (pGVar2->fields).tooltip = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).tooltip);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      if (Il2CppMethodInitialized_075451ed == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
        Il2CppMethodInitialized_075451ed = '\x01';
      }
      pMVar5 = (MethodInfo *)"Checkbox";
      leftAligned = System_String__op_Equality((pGVar2->fields).type,"Checkbox",(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout_5785cd0(leftAligned,pMVar5);
      ppGVar7 = &(pGVar2->fields).layout;
      (pGVar2->fields).layout = pGVar4;
      if (g_data_07769410 != 0) {
        LOCK();
        puVar1 = (ulong *)((long)&g_data_0759d3f0 + (ulong)((uint)((ulong)ppGVar7 >> 0xf) & 0x3fff8));
        *puVar1 = *puVar1 | 1L << ((byte)((ulong)ppGVar7 >> 0xc) & 0x3f);
        UNLOCK();
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass86_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_0_o* __this, const MethodInfo* method);
// 0x5888f90

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass86_0$$<BuildExperienceSections>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_0___BuildExperienceSections_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_0_o* __this, Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x5896120

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_0___BuildExperienceSections_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_0_o *__this,
               Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545241 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_07545241 = '\x01';
  }
  if ((field == (Settings_ExperienceRuleField_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).assigned,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___Contains
                    (__this_00,(Il2CppObject *)(field->fields).Id,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass86_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_1_o* __this, const MethodInfo* method);
// 0x5888fa0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass86_1$$<BuildExperienceSections>b__1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_1___BuildExperienceSections_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_1_o* __this, Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x5896180
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58961e4: cmp byte ptr [rip + 0x1cac69b], 0
// asm:   0x58961eb: je 0x589622c

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_1___BuildExperienceSections_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_1_o *__this,
               Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_ExperienceUISection_o *pSVar2;
  System_Collections_Generic_List_string__o *source;
  System_String_o *value;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545242 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07545242 = '\x01';
  }
  pSVar2 = (__this->fields).section;
  if ((pSVar2 == (Settings_ExperienceUISection_o *)0x0) || (field == (Settings_ExperienceRuleField_o *)0x0)) {
    ThrowNullReferenceException();
  }
  source = (pSVar2->fields).Settings;
  value = (field->fields).Id;
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  bVar3 = System_Linq_Enumerable__Contains_object__34e6650
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,(Il2CppObject *)value,
                     (System_Collections_Generic_IEqualityComparer_TSource__o *)
                     TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                     (MethodInfo_34E6650 *)MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass88_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0_o* __this, const MethodInfo* method);
// 0x58892c0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass88_0$$<BuildFieldColumns>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0___BuildFieldColumns_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x5896260

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0___BuildFieldColumns_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_AottgUi__o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *pGVar5;
  
  if (Il2CppMethodInitialized_07545243 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass88_0_BuildFieldColumns_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass88_0_BuildFieldColumns_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-right");
    il2cpp_codegen_initialize_runtime_metadata(&"-left");
    Il2CppMethodInitialized_07545243 = '\x01';
  }
  pSVar1 = "clear";
  pSVar2 = (__this->fields).__9__1;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass88_0_BuildFieldColumns_b__1
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  pSVar3 = System_String__Concat_52f0320((__this->fields).id,"-left",(MethodInfo *)0x0);
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pGVar5);
  if (columns == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar1,pSVar2,pSVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  pSVar1 = "clear";
  pSVar2 = (__this->fields).__9__2;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass88_0_BuildFieldColumns_b__2
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
  }
  pSVar3 = System_String__Concat_52f0320((__this->fields).id,"-right",(MethodInfo *)0x0);
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pGVar5);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar1,pSVar2,pSVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass88_0$$<BuildFieldColumns>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0___BuildFieldColumns_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x5896440
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5896490: mov edx, esi
// asm:   0x589654f: nop 
// asm:   0x58965ca: jmp 0x5896658
// asm:   0x5896644: jmp 0x5896492

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0___BuildFieldColumns_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  VirtualInvokeData *pVVar5;
  Settings_ExperienceRuleField_o *field;
  Settings_ExperienceRuleField_o *pSVar6;
  Settings_ExperienceRuleField_array *pSVar7;
  ulong uVar8;
  uint index;
  int iVar9;
  uint uVar10;
  long lVar11;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_07545244 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    Il2CppMethodInitialized_07545244 = '\x01';
  }
  if (0 < (__this->fields).split) {
    iVar9 = 0;
    do {
      pIVar2 = (Il2CppObject *)(__this->fields).fields;
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05896658;
      pIVar3 = pIVar2->klass;
      uVar8 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c **)
               ((long)&pIVar4->interfaceType + lVar11) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
            pVVar5 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
            goto label_05896513;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar8 * 0x10 != lVar11);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar2,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_05896513:
      field = (Settings_ExperienceRuleField_o *)(*pVVar5->methodPtr)(pIVar2,iVar9,pVVar5->method);
      pIVar2 = (Il2CppObject *)(__this->fields).fields;
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05896658;
      pIVar3 = pIVar2->klass;
      uVar8 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c **)
               ((long)&pIVar4->interfaceType + lVar11) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
            pVVar5 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
            goto label_05896583;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar8 * 0x10 != lVar11);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar2,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_05896583:
      pSVar6 = (Settings_ExperienceRuleField_o *)(*pVVar5->methodPtr)(pIVar2,iVar9,pVVar5->method);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        if (Il2CppMethodInitialized_075451e7 == '\0') goto label_058965de;
label_058965ad:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
        goto label_058965c0;
label_05896604:
        method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)method_00);
      }
      else {
        if (Il2CppMethodInitialized_075451e7 != '\0') goto label_058965ad;
label_058965de:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075451e7 = '\x01';
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
        goto label_05896604;
label_058965c0:
        pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields
                           ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (pSVar7 == (Settings_ExperienceRuleField_array *)0x0) {
label_05896658:
        ThrowNullReferenceException();
      }
      uVar1 = (uint)pSVar7->max_length;
      index = 0xffffffff;
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          index = uVar10;
          if (pSVar7->m_Items[(int)uVar10] == pSVar6) break;
          uVar10 = uVar10 + 1;
          index = 0xffffffff;
        } while (uVar1 != uVar10);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField(column,field,index,(MethodInfo *)(ulong)uVar1);
      iVar9 = iVar9 + 1;
    } while (iVar9 < (__this->fields).split);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass88_0$$<BuildFieldColumns>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0___BuildFieldColumns_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x5896660
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58966d0: mov edx, esi
// asm:   0x589680e: nop 
// asm:   0x589688a: jmp 0x5896918
// asm:   0x5896904: jmp 0x58966d2

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0___BuildFieldColumns_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  Settings_ExperienceRuleField_o *field;
  Settings_ExperienceRuleField_o *pSVar6;
  Settings_ExperienceRuleField_array *pSVar7;
  ulong uVar8;
  uint index;
  Il2CppObject *pIVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_07545245 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    Il2CppMethodInitialized_07545245 = '\x01';
  }
  pIVar9 = (Il2CppObject *)(__this->fields).fields;
  if (pIVar9 != (Il2CppObject *)0x0) {
    iVar10 = (__this->fields).split;
    do {
      pIVar2 = pIVar9->klass;
      uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField__c **)
               ((long)&pIVar3->interfaceType + lVar12) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField) {
            pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
            goto label_05896753;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar8 * 0x10 != lVar12);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar9,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,0
                         );
label_05896753:
      iVar4 = (*pVVar5->methodPtr)(pIVar9,pVVar5->method);
      if (iVar4 <= iVar10) {
        return;
      }
      pIVar9 = (Il2CppObject *)(__this->fields).fields;
      if (pIVar9 == (Il2CppObject *)0x0) break;
      pIVar2 = pIVar9->klass;
      uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c **)
               ((long)&pIVar3->interfaceType + lVar12) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
            pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
            goto label_058967d3;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar8 * 0x10 != lVar12);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar9,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_058967d3:
      field = (Settings_ExperienceRuleField_o *)(*pVVar5->methodPtr)(pIVar9,iVar10,pVVar5->method);
      pIVar9 = (Il2CppObject *)(__this->fields).fields;
      if (pIVar9 == (Il2CppObject *)0x0) break;
      pIVar2 = pIVar9->klass;
      uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c **)
               ((long)&pIVar3->interfaceType + lVar12) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
            pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
            goto label_05896843;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar8 * 0x10 != lVar12);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar9,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_05896843:
      pSVar6 = (Settings_ExperienceRuleField_o *)(*pVVar5->methodPtr)(pIVar9,iVar10,pVVar5->method);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        if (Il2CppMethodInitialized_075451e7 == '\0') goto label_0589689e;
label_0589686d:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
        goto label_05896880;
label_058968c4:
        method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)method_00);
      }
      else {
        if (Il2CppMethodInitialized_075451e7 != '\0') goto label_0589686d;
label_0589689e:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075451e7 = '\x01';
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
        goto label_058968c4;
label_05896880:
        pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields
                           ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (pSVar7 == (Settings_ExperienceRuleField_array *)0x0) break;
      uVar1 = (uint)pSVar7->max_length;
      index = 0xffffffff;
      if (0 < (int)uVar1) {
        uVar11 = 0;
        do {
          index = uVar11;
          if (pSVar7->m_Items[(int)uVar11] == pSVar6) break;
          uVar11 = uVar11 + 1;
          index = 0xffffffff;
        } while (uVar1 != uVar11);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField(column,field,index,(MethodInfo *)(ulong)uVar1);
      iVar10 = iVar10 + 1;
      pIVar9 = (Il2CppObject *)(__this->fields).fields;
    } while (pIVar9 != (Il2CppObject *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass91_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5889610

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass91_0$$<BuildSandboxFieldColumns>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0___BuildSandboxFieldColumns_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x5896920

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0___BuildSandboxFieldColumns_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_Action_AottgUi__o *pSVar4;
  Il2CppClass *pIVar5;
  
  if (Il2CppMethodInitialized_07545246 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass91_0_BuildSandboxFieldColumns_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass91_0_BuildSandboxFieldColumns_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-fields-left");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-fields-right");
    Il2CppMethodInitialized_07545246 = '\x01';
  }
  pSVar2 = "clear";
  pSVar4 = (__this->fields).__9__1;
  if (pSVar4 == (System_Action_AottgUi__o *)0x0) {
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar4,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass91_0_BuildSandboxFieldColumns_b__1
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)pIVar5;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar5);
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar5);
  }
  else {
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar5);
  }
  if (columns == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar2,pSVar4,"game-create-sandbox-fields-left",pGVar3,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = "clear";
  pSVar4 = (__this->fields).__9__2;
  if (pSVar4 == (System_Action_AottgUi__o *)0x0) {
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar4,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass91_0_BuildSandboxFieldColumns_b__2
               ,(MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)pIVar5;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar5);
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout((MethodInfo *)pIVar5);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar2,pSVar4,"game-create-sandbox-fields-right",pGVar3,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass91_0$$<BuildSandboxFieldColumns>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0___BuildSandboxFieldColumns_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x5896b30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5896bdd: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0___BuildSandboxFieldColumns_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  VirtualInvokeData *pVVar3;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  ulong uVar4;
  long lVar5;
  MethodInfo *in_R8;
  int32_t index;
  
  if (Il2CppMethodInitialized_07545247 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_07545247 = '\x01';
  }
  if (0 < (__this->fields).split) {
    index = 0;
    do {
      obj = (Il2CppObject *)(__this->fields).fields;
      if (obj == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar1 = obj->klass;
      uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar4 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar5 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_AottgSandboxField__c **)
               ((long)&pIVar2->interfaceType + lVar5) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
            pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
            goto label_05896c13;
          }
          lVar5 = lVar5 + 0x10;
        } while (uVar4 * 0x10 != lVar5);
      }
      pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_05896c13:
      field = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)(*pVVar3->methodPtr)(obj,index,pVVar3->method);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField(column,field,index,true,in_R8);
      index = index + 1;
    } while (index < (__this->fields).split);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen.<>c__DisplayClass91_0$$<BuildSandboxFieldColumns>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0___BuildSandboxFieldColumns_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* column, const MethodInfo* method);
// 0x5896c60

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0___BuildSandboxFieldColumns_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *column,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  int32_t iVar3;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  ulong uVar5;
  Il2CppObject *pIVar6;
  int32_t index;
  long lVar7;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07545248 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_07545248 = '\x01';
  }
  pIVar6 = (Il2CppObject *)(__this->fields).fields;
  if (pIVar6 != (Il2CppObject *)0x0) {
    index = (__this->fields).split;
    do {
      pIVar1 = pIVar6->klass;
      uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_AottgSandboxField__c **)
               ((long)&pIVar2->interfaceType + lVar7) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField) {
            pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7);
            goto label_05896d53;
          }
          lVar7 = lVar7 + 0x10;
        } while (uVar5 * 0x10 != lVar7);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,0);
label_05896d53:
      iVar3 = (*pVVar4->methodPtr)(pIVar6,pVVar4->method);
      if (iVar3 <= index) {
        return;
      }
      pIVar6 = (Il2CppObject *)(__this->fields).fields;
      if (pIVar6 == (Il2CppObject *)0x0) break;
      pIVar1 = pIVar6->klass;
      uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_AottgSandboxField__c **)
               ((long)&pIVar2->interfaceType + lVar7) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
            pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7);
            goto label_05896dd3;
          }
          lVar7 = lVar7 + 0x10;
        } while (uVar5 * 0x10 != lVar7);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_05896dd3:
      field = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)(*pVVar4->methodPtr)(pIVar6,index,pVVar4->method);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField(column,field,index,true,in_R8);
      index = index + 1;
      pIVar6 = (Il2CppObject *)(__this->fields).fields;
    } while (pIVar6 != (Il2CppObject *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___cctor (const MethodInfo* method);
// 0x5878fb0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_StaticFields *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Il2CppObject *object;
  System_String_array *pSVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07545197 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_cctor_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"general.WeatherIndex");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Proximity");
    il2cpp_codegen_initialize_runtime_metadata(&"All Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Variety");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"All Abnormals");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Difficulty");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreateDescriptionScrollLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Global");
    Il2CppMethodInitialized_07545197 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if (pSVar2 == (System_String_array *)0x0) {
label_058793c3:
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "None";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "Proximity";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "Global";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->VoiceChatValues = pSVar2;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->VoiceChatValues);
        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
        if (pSVar2 == (System_String_array *)0x0) goto label_058793c3;
        if ((int)pSVar2->max_length != 0) {
          pSVar2->m_Items[0] = "Default";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
          if ((pSVar2->max_length & 0xfffffffe) != 0) {
            pSVar2->m_Items[1] = "All Normal";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
            if (2 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[2] = "Variety";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
              if ((pSVar2->max_length & 0xfffffffc) != 0) {
                pSVar2->m_Items[3] = "All Abnormals";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
                if (4 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[4] = "Custom";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4);
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields;
                  pGVar1->TitanSpawnPresets = pSVar2;
                  Il2CppCodeGenWriteBarrier(&pGVar1->TitanSpawnPresets);
                  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
                  if (pSVar2 == (System_String_array *)0x0) goto label_058793c3;
                  if ((int)pSVar2->max_length != 0) {
                    pSVar2->m_Items[0] = "general.MapName";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                    if ((pSVar2->max_length & 0xfffffffe) != 0) {
                      pSVar2->m_Items[1] = "general.GameMode";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                      if (2 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[2] = "general.Difficulty";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
                        if ((pSVar2->max_length & 0xfffffffc) != 0) {
                          pSVar2->m_Items[3] = "general.WeatherIndex";
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
                          if (4 < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[4] = "general.Weather";
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4);
                            pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields;
                            pGVar1->CoreFieldIds = pSVar2;
                            Il2CppCodeGenWriteBarrier(&pGVar1->CoreFieldIds);
                            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).
                                cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)
                                         TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
                            }
                            __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->
                                     static_fields->Default;
                            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).
                                cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)
                                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
                            }
                            object = (Il2CppObject *)
                                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields->
                                     __9;
                            __this_00 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)
                                                   TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory
                                                  );
                            Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
                                      (__this_00,object,
                                       (intptr_t)
                                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_cctor_b__5_0,
                                       (MethodInfo *)0x0);
                            if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
                              Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
                                        (__this,"GameCreateDescriptionScrollLayout",__this_00,(MethodInfo *)0x0);
                              return;
                            }
                            goto label_058793c3;
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


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o* __this, const MethodInfo* method);
// 0x58793d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545198 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlay");
    Il2CppMethodInitialized_07545198 = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o* __this, const MethodInfo* method);
// 0x5879400

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545199 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_07545199 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","Stretch",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Build (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58794e0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Build
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *sidePanel;
  System_Action_AottgUi__o *__this_00;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_0754519a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildContent);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildFooter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel)
    ;
    Il2CppMethodInitialized_0754519a = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  sidePanel = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanel((MethodInfo *)method_00);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildContent,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildFooter,
             (MethodInfo_4A81BE0 *)0x0);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor
            (__this_02,sidePanel,__this_00,__this_01,0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$Refresh
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5879690

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754519b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754519b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar1 = (root->fields)._Screens_k__BackingField;
    if ((pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) &&
       ((pGVar1->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshImmediately(root,method_00);
        return bVar2;
      }
      bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshImmediately(root,method_00);
      return bVar2;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RefreshTitanHeadBounds
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshTitanHeadBounds (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5879c70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5879da3: jmp 0x587a033

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshTitanHeadBounds
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Il2CppClass *id;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this;
  bool bVar5;
  Il2CppObject *pIVar6;
  ulong uVar7;
  System_String_o *pSVar8;
  UnityEngine_Object_o *x;
  undefined8 in_RCX;
  UnityEngine_UI_Selectable_o *__this_00;
  MethodInfo *method_00;
  ulong uVar9;
  int32_t local_44;
  undefined8 local_40;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_0754519c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMin");
    il2cpp_codegen_initialize_runtime_metadata(&"Cannot update titan head bounds: missing input for ");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMax");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    Il2CppMethodInitialized_0754519c = '\x01';
  }
  local_44 = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return false;
  }
  if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_0587a033;
  pGVar1 = (root->fields)._Screens_k__BackingField;
  if ((pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) ||
     ((pGVar1->fields)._active == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_05879d87;
label_05879dbd:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05879d93;
label_05879ddc:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_05879dbd;
label_05879d87:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05879ddc;
label_05879d93:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).TitanHeadMode, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    local_34 = (pSVar4->fields)._value;
    pIVar6 = SZArrayNew(TypeInfo_string_array,2);
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar6[1].monitor != 0) {
        pIVar6[2].klass = (Il2CppClass *)"titan.TitanHeadRandomMin";
        Il2CppCodeGenWriteBarrier(&pIVar6[2].klass);
        method_00 = (MethodInfo *)"titan.TitanHeadRandomMax";
        if (((ulong)pIVar6[1].monitor & 0xfffffffe) != 0) {
          pIVar6[2].monitor = "titan.TitanHeadRandomMax";
          Il2CppCodeGenWriteBarrier(&pIVar6[2].monitor);
          if ((int)pIVar6[1].monitor < 1) {
            local_40 = 1;
          }
          else {
            uVar7 = (ulong)pIVar6[1].monitor & 0xffffffff;
            local_40 = CONCAT71((int7)((ulong)in_RCX >> 8),1);
            uVar9 = 0;
            do {
              if (uVar7 <= uVar9) goto label_0587a038;
              pGVar1 = (root->fields)._Screens_k__BackingField;
              if (pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_0587a033;
              id = (&pIVar6[2].klass)[uVar9];
              __this = (pGVar1->fields)._active;
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
              }
              local_44 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex
                                   ((System_String_o *)id,method_00);
              pSVar8 = System_Int32__ToString(&local_44,(MethodInfo *)0x0);
              pSVar8 = System_String__Concat_52f0320("game-create-sandbox-field-",pSVar8,(MethodInfo *)0x0);
              if (__this == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_0587a033;
              x = (UnityEngine_Object_o *)
                  Gisketch_Aottg2UI_Building_GisketchView__Find(__this,pSVar8,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              __this_00 = (UnityEngine_UI_Selectable_o *)0x0;
              if (bVar5) {
                if (x == (UnityEngine_Object_o *)0x0) goto label_0587a033;
                __this_00 = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)x,
                                       (MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
              }
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar5 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar5) {
                pSVar8 = System_String__Concat_52f0320
                                   ("Cannot update titan head bounds: missing input for ",(System_String_o *)id,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                }
                local_40 = 0;
                method_00 = (MethodInfo *)0x0;
                UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
              }
              else {
                if (__this_00 == (UnityEngine_UI_Selectable_o *)0x0) goto label_0587a033;
                method_00 = (MethodInfo *)(ulong)(local_34 == 1);
                UnityEngine_UI_Selectable__set_interactable(__this_00,local_34 == 1,(MethodInfo *)0x0);
              }
              uVar9 = uVar9 + 1;
              uVar7 = (ulong)*(uint *)&pIVar6[1].monitor;
            } while ((long)uVar9 < (long)(int)*(uint *)&pIVar6[1].monitor);
          }
          return (bool)((byte)local_40 & 1);
        }
      }
label_0587a038:
      ThrowIndexOutOfRangeException();
    }
  }
label_0587a033:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RefreshImmediately
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshImmediately (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5879730
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5879bbe: mov ebx, r15d
// asm:   0x5879bc1: jmp 0x5879bc5

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshImmediately
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *ownerId;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar8;
  System_Action_AottgUi__o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar10;
  Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *pGVar11;
  bool bVar12;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_0754519d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildContent);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildFooter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_RefreshImmediately_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-content");
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-footer");
    il2cpp_codegen_initialize_runtime_metadata(&"brush-side-panel-button-room-button");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-runtime");
    Il2CppMethodInitialized_0754519d = '\x01';
  }
  if (((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
      (pGVar2 = (root->fields)._Screens_k__BackingField,
      pGVar2 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) ||
     (__this = (pGVar2->fields)._active, __this == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0))
  goto label_05879c69;
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Building_GisketchView__Find(__this,"brush-side-panel-button-room-button",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452ce == '\0') goto label_05879bf3;
label_0587988c:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075452ce != '\0') goto label_0587988c;
label_05879bf3:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452ce = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar5 = true;
  if (bVar4 != (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer != false
               )) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    }
    ownerId = "brush-side-panel";
    pGVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pSVar9 = pGVar8->__9__13_0;
    if (pSVar9 == (System_Action_AottgUi__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
        pGVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
      }
      object = (Il2CppObject *)pGVar8->__9;
      pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)pSVar9,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_RefreshImmediately_b__13_0,
                 (MethodInfo_4A81BE0 *)0x0);
      pGVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
      pGVar8->__9__13_0 = pSVar9;
      Il2CppCodeGenWriteBarrier(&pGVar8->__9__13_0);
    }
    bVar5 = false;
    pGVar10 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                        (root,ownerId,pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_05879c69;
    if (((int)pGVar10->max_length == 1) &&
       (pGVar3 = pGVar10->m_Items[0], pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      pGVar11 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
      Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(pGVar11,(MethodInfo *)0x0);
      if (pGVar11 == (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) goto label_05879c69;
      (pGVar11->fields).PreserveScroll = true;
      (pGVar11->fields).PreserveFocus = false;
      (pGVar11->fields).SettleLayout = true;
      bVar5 = Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
                        (root,"brush-side-panel",pGVar3,pGVar11,(MethodInfo *)0x0);
    }
  }
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  bVar4 = false;
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar9,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildFooter,
             (MethodInfo_4A81BE0 *)0x0);
  pGVar10 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                      (root,"game-create-footer",pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_05879c69:
    ThrowNullReferenceException();
  }
  if (((int)pGVar10->max_length == 1) &&
     (pGVar3 = pGVar10->m_Items[0], pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    pGVar11 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
    Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(pGVar11,(MethodInfo *)0x0);
    if (pGVar11 == (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) goto label_05879c69;
    (pGVar11->fields).PreserveScroll = true;
    (pGVar11->fields).PreserveFocus = false;
    (pGVar11->fields).SettleLayout = true;
    bVar4 = Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
                      (root,"game-create-footer",pGVar3,pGVar11,(MethodInfo *)0x0);
  }
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar9,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_BuildContent,
             (MethodInfo_4A81BE0 *)0x0);
  pGVar10 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                      (root,"game-create-content",pSVar9,"game-create-runtime",(MethodInfo *)0x0);
  if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_05879c69;
  if (((int)pGVar10->max_length != 1) ||
     (pGVar3 = pGVar10->m_Items[0], pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    bVar12 = false;
    goto label_05879bc5;
  }
  pGVar11 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions);
  Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions___ctor(pGVar11,(MethodInfo *)0x0);
  if (pGVar11 == (Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *)0x0) goto label_05879c69;
  (pGVar11->fields).PreserveScroll = true;
  (pGVar11->fields).PreserveFocus = true;
  (pGVar11->fields).SettleLayout = true;
  bVar6 = Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
                    (root,"game-create-content",pGVar3,pGVar11,(MethodInfo *)0x0);
  bVar12 = false;
  if (!bVar6) goto label_05879bc5;
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)method_00);
  bVar12 = true;
  if (!bVar7) goto label_05879bc5;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452cf == '\0') goto label_05879c37;
label_05879b6b:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075452cf != '\0') goto label_05879b6b;
label_05879c37:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452cf = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar7 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _SandboxSection_k__BackingField,"Weather",(MethodInfo *)0x0);
  bVar12 = bVar6;
  if (bVar7) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__SyncState(root,(MethodInfo *)0x0);
  }
label_05879bc5:
  return (bool)(bVar4 & bVar5 & bVar12);
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildContent
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildContent (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587a330

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildContent
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754519e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildContent_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_0754519e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  style = "clear";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  __this = pGVar1->__9__14_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildContent_b__14_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar1->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__14_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,24.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this,"game-create-content",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildMain
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMain (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587a510
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587a733: jmp 0x587a7b3
// asm:   0x587a80a: cmp byte ptr [rip + 0x1ccaac1], 0
// asm:   0x587a811: je 0x587a8e8
// asm:   0x587a932: cmp byte ptr [rip + 0x1cca99a], 0
// asm:   0x587a939: je 0x587aa0d
// asm:   0x587a975: cmp byte ptr [rip + 0x1cca958], 0
// asm:   0x587a97c: je 0x587aa67

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMain
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Settings_InGameSet_o *pSVar3;
  Map_Experience_o *pMVar4;
  bool bVar5;
  MethodInfo *pMVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_0754519f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-not-loaded");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.NotLoaded");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_0754519f = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0587a53b;
label_0587a626:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0587a548;
label_0587a638:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0587a558;
label_0587a65b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0587a626;
label_0587a53b:
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_0587a638;
label_0587a548:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0587a65b;
label_0587a558:
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (pSVar3 == (Settings_InGameSet_o *)0x0) {
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (ui,"GameCreate.NotLoaded","text","game-create-not-loaded",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452d0 != '\0') goto label_0587a584;
label_0587a6cc:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d0 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0587a594;
label_0587a6ef:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _ShowRoomSettings_k__BackingField;
  }
  else {
    if (g_data_075452d0 == '\0') goto label_0587a6cc;
label_0587a584:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0587a6ef;
label_0587a594:
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _ShowRoomSettings_k__BackingField;
  }
  if (cVar1 != '\0') {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomSettings(ui,method);
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452d1 != '\0') goto label_0587a71a;
label_0587a743:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d1 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0587a726;
label_0587a762:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _ShowFavorites_k__BackingField;
  }
  else {
    if (g_data_075452d1 == '\0') goto label_0587a743;
label_0587a71a:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0587a762;
label_0587a726:
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
            _ShowFavorites_k__BackingField;
  }
  if (cVar1 != '\0') {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452d2 != '\0') goto label_0587a791;
label_0587a872:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452d2 = '\x01';
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_075452d2 == '\0') goto label_0587a872;
label_0587a791:
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pMVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _Experience_k__BackingField;
    }
    else {
      pMVar4 = *(Map_Experience_o **)
                ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields
                + 0x58);
    }
    if (pMVar4 == (Map_Experience_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavorites(ui,method);
      return;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)method_00);
    if (bVar5) goto label_0587a7c5;
  }
  else {
    bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox
                      ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (bVar5) {
label_0587a7c5:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandbox(ui,method);
      return;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d2 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _Experience_k__BackingField;
  }
  else {
    pMVar4 = *(Map_Experience_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x58);
  }
  if (pMVar4 != (Map_Experience_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildConfiguration(ui,method);
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d3 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar5 = System_String__IsNullOrEmpty
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Subcategory_k__BackingField,(MethodInfo *)0x0);
  if (!bVar5) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperiences(ui,pMVar6);
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d4 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar5 = System_String__IsNullOrEmpty
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Category_k__BackingField,(MethodInfo *)0x0);
  uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  if (bVar5) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategories(ui,pMVar6);
    return;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategories(ui,pMVar6);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCategories
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategories (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587c430
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587c76b: cmp byte ptr [rip + 0x1cc8b63], 0
// asm:   0x587c772: je 0x587c800

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategories
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o *__this;
  System_String_array *pSVar3;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_075451a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-load-error");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Empty");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-choice-browser");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-title");
    Il2CppMethodInitialized_075451a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (ui,"GameCreate.Categories.Title","header","game-create-browser-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (ui,"GameCreate.Categories.Description","text","game-create-browser-description",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Categories((MethodInfo *)method_00);
    if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass16_0_o *)0x0) {
      (__this->fields).categories = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).categories);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass16_0_BuildCategories_b__0
                 ,(MethodInfo_4A81BE0 *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,24.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",__this_00,"game-create-choice-browser",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_075452d5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_075452d5 = '\x01';
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      bVar2 = System_String__IsNullOrEmpty
                        (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                         _LoadError_k__BackingField,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        if (Il2CppMethodInitialized_075452d5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_075452d5 = '\x01';
          uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
                  cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        Gisketch_Aottg2UI_Code_AottgUi__Callout
                  (ui,3,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                        _LoadError_k__BackingField,"game-create-load-error",(MethodInfo *)0x0);
        return;
      }
      pSVar3 = (__this->fields).categories;
      if (pSVar3 != (System_String_array *)0x0) {
        if (pSVar3->max_length == 0) {
          Gisketch_Aottg2UI_Code_AottgUi__TextKey
                    (ui,"GameCreate.Categories.Empty","text","game-create-empty",
                     (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CategoryPreview
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CategoryPreview (System_String_o* category, const MethodInfo* method);
// 0x587cbf0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CategoryPreview(System_String_o *category,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075451a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Casual");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/PVPPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/CompetitivePreview");
    il2cpp_codegen_initialize_runtime_metadata(&"Competitive");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/GeneralPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/CasualPreview");
    Il2CppMethodInitialized_075451a1 = '\x01';
  }
  bVar1 = System_String__op_Equality(category,"Casual",(MethodInfo *)0x0);
  if (bVar1) {
    return "Data/ExperiencePreview/CasualPreview";
  }
  bVar1 = System_String__op_Equality(category,"Competitive",(MethodInfo *)0x0);
  if (bVar1) {
    return "Data/ExperiencePreview/CompetitivePreview";
  }
  bVar1 = System_String__op_Equality(category,"PVP",(MethodInfo *)0x0);
  if (bVar1) {
    return "Data/ExperiencePreview/PVPPreview";
  }
  return "Data/ExperiencePreview/GeneralPreview";
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSubcategories
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategories (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587c1d0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategories
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  il2cpp_array_size_t iVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o *__this;
  System_String_array *pSVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this_01;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_01;
  
  if (Il2CppMethodInitialized_075451a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass18_0_BuildSubcategories_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Subcategories.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-subcategory-grid");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-title");
    Il2CppMethodInitialized_075451a2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass18_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (ui,"GameCreate.Subcategories.Title","header","game-create-browser-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)"GameCreate.Categories.Description";
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (ui,"GameCreate.Categories.Description","text","game-create-browser-description",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector(ui,method_00);
    method_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories((MethodInfo *)method_01);
    if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass18_0_o *)0x0) {
      (__this->fields).subcategories = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).subcategories);
      pSVar2 = (__this->fields).subcategories;
      if (pSVar2 != (System_String_array *)0x0) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass18_0_BuildSubcategories_b__0
                   ,(MethodInfo_4A81BE0 *)0x0);
        id = "game-create-subcategory-grid";
        iVar1 = pSVar2->max_length;
        if (Il2CppMethodInitialized_075451a6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
          Il2CppMethodInitialized_075451a6 = '\x01';
        }
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
        Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
                  (__this_01,id,(int32_t)iVar1,360.0,14.0,__this_00,18.0,-1,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SubcategoryPreview
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SubcategoryPreview (System_String_o* subcategory, const MethodInfo* method);
// 0x587d240
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587d309: cmp byte ptr [rip + 0x1cc7fc4], 0
// asm:   0x587d310: je 0x587d49f
// asm:   0x587d4e6: cmp byte ptr [rip + 0x1cc7de7], 0
// asm:   0x587d4ed: je 0x587d5a8

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SubcategoryPreview
          (System_String_o *subcategory,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Map_Experience_array *source;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Object_array *experiences;
  Map_Experience_o *pMVar3;
  System_String_o **ppSVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  
  if (Il2CppMethodInitialized_075451a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Take_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_Experience);
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Hard");
    il2cpp_codegen_initialize_runtime_metadata(&"Ranking");
    il2cpp_codegen_initialize_runtime_metadata(&"Mission");
    il2cpp_codegen_initialize_runtime_metadata(&"PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/ExperiencePreview/RankingPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"Competitive");
    il2cpp_codegen_initialize_runtime_metadata(&"Iri Crystal");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing Basic");
    il2cpp_codegen_initialize_runtime_metadata(&"Akina");
    Il2CppMethodInitialized_075451a3 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0587d44b;
label_0587d26b:
    if (Il2CppMethodInitialized_075452d4 != '\0') goto label_0587d278;
label_0587d45d:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0587d26b;
label_0587d44b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452d4 == '\0') goto label_0587d45d;
label_0587d278:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Category_k__BackingField,"Mission",(MethodInfo *)0x0);
  pMVar6 = extraout_RDX;
  if (bVar2) goto label_0587d2f9;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452d4 == '\0') goto label_0587d566;
label_0587d2c5:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075452d4 != '\0') goto label_0587d2c5;
label_0587d566:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Category_k__BackingField,"PVP",(MethodInfo *)0x0);
  pMVar6 = extraout_RDX_00;
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_075452d4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452d4 = '\x01';
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
              cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    bVar2 = System_String__op_Inequality
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       _Category_k__BackingField,"Competitive",(MethodInfo *)0x0);
    if (bVar2) {
      return (System_String_o *)0x0;
    }
    bVar2 = System_String__op_Equality(subcategory,"Ranking",(MethodInfo *)0x0);
    if (bVar2) {
      return "Data/ExperiencePreview/RankingPreview";
    }
    bVar2 = System_String__op_Equality(subcategory,"Racing Basic",(MethodInfo *)0x0);
    if (bVar2) {
      ppSVar4 = &"Akina";
    }
    else {
      bVar2 = System_String__op_Equality(subcategory,"Racing Hard",(MethodInfo *)0x0);
      if (!bVar2) {
        return (System_String_o *)0x0;
      }
      ppSVar4 = &"Iri Crystal";
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PreviewSprite(*ppSVar4,(MethodInfo *)0x0);
    return pSVar5;
  }
label_0587d2f9:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar6 = extraout_RDX_01;
  }
  if (Il2CppMethodInitialized_075452d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d4 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    pMVar6 = extraout_RDX_02;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar6 = extraout_RDX_03;
  }
  source = Gisketch_Aottg2UI_Game_AottgGameCreateSession__ExperiencesIn
                     (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                      _Category_k__BackingField,subcategory,pMVar6);
  source_00 = System_Linq_Enumerable__Take_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,1,
                         (MethodInfo_34FDB90 *)MethodInfo_System_Linq_Enumerable_Take_Experience);
  pMVar6 = MethodInfo_System_Linq_Enumerable_ToArray_Experience;
  experiences = System_Linq_Enumerable__ToArray_object_
                          (source_00,
                           (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_Experience);
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreviews
            ((System_Collections_Generic_IEnumerable_Experience__o *)experiences,pMVar6);
  pMVar3 = System_Linq_Enumerable__FirstOrDefault_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)experiences,
                      (MethodInfo_34ECD10 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_Experience);
  if (pMVar3 == (Map_Experience_o *)0x0) {
    pSVar5 = (System_String_o *)0x0;
  }
  else {
    pSVar5 = (pMVar3->fields).Preview;
  }
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperiences
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperiences (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587bf50

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperiences
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  il2cpp_array_size_t iVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o *__this;
  Map_Experience_array *pMVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this_01;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_01;
  
  if (Il2CppMethodInitialized_075451a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass20_0_BuildExperiences_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass20_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Categories.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-description");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-experience-grid");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Experiences.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-title");
    Il2CppMethodInitialized_075451a4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass20_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (ui,"GameCreate.Experiences.Title","header","game-create-browser-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)"GameCreate.Categories.Description";
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (ui,"GameCreate.Categories.Description","text","game-create-browser-description",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector(ui,method_00);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategorySelector(ui,method_00);
    method_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pMVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__CurrentExperiences((MethodInfo *)method_01);
    if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass20_0_o *)0x0) {
      (__this->fields).experiences = pMVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).experiences);
      Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreviews
                ((System_Collections_Generic_IEnumerable_Experience__o *)(__this->fields).experiences,
                 (MethodInfo *)pMVar2);
      pMVar2 = (__this->fields).experiences;
      if (pMVar2 != (Map_Experience_array *)0x0) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass20_0_BuildExperiences_b__0
                   ,(MethodInfo_4A81BE0 *)0x0);
        id = "game-create-experience-grid";
        iVar1 = pMVar2->max_length;
        if (Il2CppMethodInitialized_075451a6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
          Il2CppMethodInitialized_075451a6 = '\x01';
        }
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
        Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
                  (__this_01,id,(int32_t)iVar1,360.0,14.0,__this_00,18.0,-1,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildChoiceGrid
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildChoiceGrid (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, int32_t count, System_Action_AottgUi__o* buildChoices, const MethodInfo* method);
// 0x587de20

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildChoiceGrid
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,int32_t count,
               System_Action_AottgUi__o *buildChoices,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this;
  
  if (Il2CppMethodInitialized_075451a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
    Il2CppMethodInitialized_075451a5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___ctor
            (__this,id,count,360.0,14.0,buildChoices,true,18.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildChoiceCarousel
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildChoiceCarousel (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, int32_t count, System_Action_AottgUi__o* buildChoices, const MethodInfo* method);
// 0x587d1a0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildChoiceCarousel
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,int32_t count,
               System_Action_AottgUi__o *buildChoices,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this;
  
  if (Il2CppMethodInitialized_075451a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
    Il2CppMethodInitialized_075451a6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
            (__this,id,count,360.0,14.0,buildChoices,18.0,-1,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFavorites
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavorites (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587abb0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavorites
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075451a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-description");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-browser-title");
    Il2CppMethodInitialized_075451a7 = '\x01';
  }
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Favorites","header","game-create-browser-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  method_01 = (MethodInfo *)"GameCreate.Favorites.Description";
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Favorites.Description","text","game-create-browser-description",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector(ui,method_01);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoices(ui,false,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFavoriteChoices
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoices (Gisketch_Aottg2UI_Code_AottgUi_o* ui, bool compact, const MethodInfo* method);
// 0x587dec0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoices
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,bool compact,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_Fields *targetAddress;
  il2cpp_array_size_t iVar1;
  il2cpp_array_size_t iVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o *__this;
  Map_Experience_array *pMVar3;
  System_String_array *pSVar4;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_o *__this_01;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  System_String_array **targetAddress_00;
  
  if (Il2CppMethodInitialized_075451a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_0_BuildFavoriteChoices_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Favorites.Empty");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-favorites-selector");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-favorites-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-favorites-grid");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_075451a8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass24_0_o *)0x0) {
    (__this->fields).compact = compact;
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pMVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoriteExperiences((MethodInfo *)method_00);
    targetAddress = &__this->fields;
    (__this->fields).experiences = pMVar3;
    pMVar5 = (MethodInfo *)targetAddress;
    Il2CppCodeGenWriteBarrier(&targetAddress->experiences);
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FavoritePresetNames(pMVar5);
    targetAddress_00 = &(__this->fields).presets;
    (__this->fields).presets = pSVar4;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    pMVar3 = (__this->fields).experiences;
    if (pMVar3 != (Map_Experience_array *)0x0) {
      if (pMVar3->max_length == 0) {
        if (*targetAddress_00 == (System_String_array *)0x0) goto label_0587e18a;
        if ((*targetAddress_00)->max_length == 0) {
          if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__TextKey
                      (ui,"GameCreate.Favorites.Empty","text","game-create-favorites-empty",
                       (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (MethodInfo *)0x0);
            return;
          }
          goto label_0587e18a;
        }
      }
      if ((__this->fields).compact == false) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateSession__CacheExperiencePreviews
                  ((System_Collections_Generic_IEnumerable_Experience__o *)pMVar3,(MethodInfo *)pSVar4);
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      pMVar5 = (MethodInfo *)0x0;
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass24_0_BuildFavoriteChoices_b__0
                 ,(MethodInfo_4A81BE0 *)0x0);
      if ((__this->fields).compact != false) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildButtonRow
                  (ui,"game-create-favorites-selector",__this_00,pMVar5);
        return;
      }
      pMVar3 = targetAddress->experiences;
      if ((pMVar3 != (Map_Experience_array *)0x0) &&
         (pSVar4 = *targetAddress_00, pSVar4 != (System_String_array *)0x0)) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        id = "game-create-favorites-grid";
        iVar1 = pSVar4->max_length;
        iVar2 = pMVar3->max_length;
        if (Il2CppMethodInitialized_075451a5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
          Il2CppMethodInitialized_075451a5 = '\x01';
        }
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow);
        Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow___ctor
                  (__this_01,id,(int)iVar1 + (int)iVar2,360.0,14.0,__this_00,true,18.0,(MethodInfo *)0x0);
        if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Component
                    (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0587e18a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFavoriteChoice
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoice (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_o* title, System_String_o* description, System_String_o* preview, int32_t index, bool compact, bool selected, System_Action_o* select, const MethodInfo* method);
// 0x587e470

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoice
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_o *title,
               System_String_o *description,System_String_o *preview,int32_t index,bool compact,bool selected,
               System_Action_o *select,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o *__this;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_075451a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass25_0_BuildFavoriteChoice_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass25_0);
    il2cpp_codegen_initialize_runtime_metadata(&"star");
    Il2CppMethodInitialized_075451a9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass25_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass25_0_o *)0x0) {
    (__this->fields).select = select;
    Il2CppCodeGenWriteBarrier(&(__this->fields).select);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass25_0_BuildFavoriteChoice_b__0
               ,(MethodInfo_4A803E0 *)0x0);
    if (compact) {
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button_5265860
                           (ui,(uint)!selected * 5,title,__this_00,id,description,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            (MethodInfo *)0x0);
        method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CompactButtonLayout((MethodInfo *)method_00);
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar1->fields).layout = pGVar2;
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
          return;
        }
      }
    }
    else {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile);
      Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile___ctor
                (__this_01,id,title,description,(System_String_o *)0x0,"star",index,preview,
                 __this_00,0.0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCategorySelector
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587cce0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o *__this;
  System_String_array *pSVar1;
  System_Action_AottgUi__o *__this_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_01;
  
  if (Il2CppMethodInitialized_075451aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass26_0_BuildCategorySelector_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass26_0);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-category-selector");
    Il2CppMethodInitialized_075451aa = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass26_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  method_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Categories((MethodInfo *)method_01);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass26_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).categories = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).categories);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  method_00 = (MethodInfo *)0x0;
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass26_0_BuildCategorySelector_b__0
             ,(MethodInfo_4A81BE0 *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildButtonRow(ui,"game-create-category-selector",__this_00,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSubcategorySelector
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategorySelector (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587dac0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587db6e: cmp byte ptr [rip + 0x1cc775e], 0
// asm:   0x587db75: je 0x587dcb7
// asm:   0x587dc99: add rsp, 8

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategorySelector
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  System_Func_string__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_o *selected;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *klass;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (Il2CppMethodInitialized_075451ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ContentLocale_ExperienceSubcategory);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-subcategory-");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.select.subcategory");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-subcategory-selector");
    Il2CppMethodInitialized_075451ab = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession = klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories((MethodInfo *)klass);
  }
  else {
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__Subcategories((MethodInfo *)klass);
  }
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length < 2) {
    return;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_UI_ContentLocale_ExperienceSubcategory,(MethodInfo_4F19B50 *)0x0);
  source = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                      (System_Func_TSource__TResult__o *)__this,
                      (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
  pSVar2 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d3 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  selected = UI_ContentLocale__ExperienceSubcategory
                       (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                        _Subcategory_k__BackingField,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactRow
            (ui,"game-create-subcategory-selector",pSVar2,selected,"gameCreate.select.subcategory","game-create-subcategory-",1,true,
             in_stack_ffffffffffffffc8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceSelector
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSelector (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587e9b0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSelector
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  Map_Experience_array *array;
  int32_t selectedIndex;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass28_0_o *__this;
  Map_Experience_array *pMVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_075451ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_Experience);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass28_0_BuildExperienceSelector_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass28_0);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-experience-selector");
    Il2CppMethodInitialized_075451ac = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass28_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pMVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__CurrentExperiences((MethodInfo *)method_00);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass28_0_o *)0x0)
  goto label_0587ebb2;
  (__this->fields).experiences = pMVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).experiences);
  pMVar2 = (__this->fields).experiences;
  if (pMVar2 == (Map_Experience_array *)0x0) goto label_0587ebb2;
  if ((int)pMVar2->max_length < 2) {
    return;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass28_0_BuildExperienceSelector_b__0
             ,(MethodInfo_4A81BE0 *)0x0);
  array = (__this->fields).experiences;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452d2 != '\0') goto label_0587ead7;
label_0587eb80:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d2 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075452d2 == '\0') goto label_0587eb80;
label_0587ead7:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  selectedIndex =
       System_Array__IndexOf_object_
                 ((System_Object_array *)array,
                  (Il2CppObject *)
                  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                  _Experience_k__BackingField,(MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_Experience
                 );
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
            (__this_01,"game-create-experience-selector",(int32_t)pMVar2->max_length,46.0,10.0,__this_00,0.0,selectedIndex
             ,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    return;
  }
label_0587ebb2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCompactRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactRow (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_array* values, System_String_o* selected, System_String_o* actionId, System_String_o* itemPrefix, int32_t selectedVariant, bool carousel, const MethodInfo* method);
// 0x587e770

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_array *values,
               System_String_o *selected,System_String_o *actionId,System_String_o *itemPrefix,
               int32_t selectedVariant,bool carousel,MethodInfo *method)

{
  System_String_array *array;
  int32_t selectedIndex;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  System_Predicate_T__o *match;
  Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075451ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_FindIndex_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0_BuildCompactRow_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0_BuildCompactRow_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0);
    Il2CppMethodInitialized_075451ad = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass29_0_o *)0x0) {
    (__this->fields).values = values;
    Il2CppCodeGenWriteBarrier(&(__this->fields).values);
    (__this->fields).selected = selected;
    Il2CppCodeGenWriteBarrier(&(__this->fields).selected);
    (__this->fields).actionId = actionId;
    Il2CppCodeGenWriteBarrier(&(__this->fields).actionId);
    (__this->fields).itemPrefix = itemPrefix;
    Il2CppCodeGenWriteBarrier(&(__this->fields).itemPrefix);
    (__this->fields).selectedVariant = selectedVariant;
    (__this->fields).carousel = carousel;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    method_00 = (MethodInfo *)0x0;
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0_BuildCompactRow_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    if ((__this->fields).carousel == false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildButtonRow(ui,id,__this_00,method_00);
      return;
    }
    array = (__this->fields).values;
    if (array != (System_String_array *)0x0) {
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass29_0_BuildCompactRow_b__1
                 ,(MethodInfo_3DC95B0 *)0x0);
      selectedIndex =
           System_Array__FindIndex_object_
                     ((System_Object_array *)array,match,
                      (MethodInfo_3601B50 *)MethodInfo_System_Array_FindIndex_string);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow);
      Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow___ctor
                (__this_01,id,(int32_t)array->max_length,46.0,10.0,__this_00,0.0,selectedIndex,
                 (MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CarouselButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CarouselButtonLayout (const MethodInfo* method);
// 0x587ebe0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CarouselButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075451ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_075451ae = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(260.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(46.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildButtonRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildButtonRow (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_Action_AottgUi__o* buildButtons, const MethodInfo* method);
// 0x587e340

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildButtonRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,
               System_Action_AottgUi__o *buildButtons,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075451af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    Il2CppMethodInitialized_075451af = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,"Wrap",10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,"clear",buildButtons,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCompactChoice
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactChoice (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, bool selected, System_String_o* actionId, System_String_o* id, int32_t selectedVariant, System_String_o* icon, const MethodInfo* method);
// 0x587eca0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCompactChoice
          (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,bool selected,System_String_o *actionId
          ,System_String_o *id,int32_t selectedVariant,System_String_o *icon,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  int32_t variant;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_075451b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_075451b0 = '\x01';
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    variant = 5;
    if (selected) {
      variant = selectedVariant;
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (ui,variant,label,actionId,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).clip = true;
      method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CompactButtonLayout((MethodInfo *)method_00);
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CompactButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CompactButtonLayout (const MethodInfo* method);
// 0x587e680

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CompactButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075451b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_075451b1 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(18.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(20.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(46.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildCollapsedFeatureChoice
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCollapsedFeatureChoice (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* icon, System_String_o* label, bool selected, System_String_o* actionId, System_String_o* id, const MethodInfo* method);
// 0x587ed70

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCollapsedFeatureChoice
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *icon,System_String_o *label,
               bool selected,System_String_o *actionId,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075451b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_075451b2 = '\x01';
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (ui,(uint)!selected * 5,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                        actionId,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).formLabel = label;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).formLabel);
      (pGVar1->fields).tooltip = label;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).tooltip);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(9.0,(MethodInfo *)0x0);
      maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(10.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(46.0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,0.0,(MethodInfo *)0x0);
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildConfiguration
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildConfiguration (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587ba80
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587bd5a: test r14, r14
// asm:   0x587bd5d: jne 0x587bee9
// asm:   0x587bd63: jmp 0x587bcc6
// asm:   0x587bdd4: jmp 0x587bc11

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildConfiguration
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_ExperienceRuleResult_o *__this;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  System_Collections_Generic_List_string__o *__this_00;
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_075451b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-validation-error-");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.LoadFailed");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-validation-error");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Invalid");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-rule-error");
    Il2CppMethodInitialized_075451b3 = '\x01';
  }
  iStack_34 = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452d6 == '\0') goto label_0587bcdd;
label_0587bb61:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0587bb71;
label_0587bd00:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  else {
    if (g_data_075452d6 != '\0') goto label_0587bb61;
label_0587bcdd:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d6 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0587bd00;
label_0587bb71:
    __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
             _RuleResult_k__BackingField;
  }
  if (__this == (Settings_ExperienceRuleResult_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452d5 == '\0') goto label_0587be75;
label_0587bd36:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
      goto label_0587bd46;
label_0587be98:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _LoadError_k__BackingField;
    }
    else {
      if (Il2CppMethodInitialized_075452d5 != '\0') goto label_0587bd36;
label_0587be75:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452d5 = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
      goto label_0587be98;
label_0587bd46:
      pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
               _LoadError_k__BackingField;
    }
    if (pSVar3 == (System_String_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("GameCreate.Configuration.LoadFailed",(MethodInfo *)0x0);
    }
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Callout(ui,3,pSVar3,"game-create-rule-error",(MethodInfo *)0x0);
      return;
    }
    goto label_0587bcc6;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector(ui,method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar5 = extraout_RDX_01;
    if (g_data_075452d1 == '\0') goto label_0587bd7a;
label_0587bbc3:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    pMVar5 = extraout_RDX;
    if (g_data_075452d1 != '\0') goto label_0587bbc3;
label_0587bd7a:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d1 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    pMVar5 = extraout_RDX_02;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar5 = extraout_RDX_03;
  }
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField ==
      false) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSubcategorySelector(ui,method);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSelector(ui,method);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      pMVar5 = extraout_RDX_00;
    }
    method = (MethodInfo *)0x1;
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoices(ui,true,pMVar5);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceContext(ui,method);
  pMVar5 = (MethodInfo *)(__this->fields).Fields;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceFields
            (ui,(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)pMVar5,
             (__this->fields).Experience,in_RCX);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedFields(ui,pMVar5);
  iStack_34 = 0;
  __this_00 = (__this->fields).Errors;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      if (0 < (__this_00->fields)._size) {
        System_Collections_Generic_List_object___get_Item
                  ((System_Collections_Generic_List_object__o *)__this_00,0,
                   (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        pSVar3 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
        System_String__Concat_52f0320("game-create-validation-error-",pSVar3,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
label_0587bde3:
      bVar2 = Settings_ExperienceRuleResult__get_IsValid(__this,(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
        }
        bVar2 = Settings_ExperienceRuleEngine__Validate(__this,(MethodInfo *)0x0);
        if (!bVar2) {
          if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0587bcc6;
          Gisketch_Aottg2UI_Code_AottgUi__TextKey
                    (ui,"GameCreate.Configuration.Invalid","text","game-create-validation-error",
                     (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
      }
      return;
    }
    do {
      if ((__this_00->fields)._size <= iStack_34) goto label_0587bde3;
      pSVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iStack_34,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      pSVar4 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_52f0320("game-create-validation-error-",pSVar4,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Callout(ui,3,pSVar3,pSVar4,(MethodInfo *)0x0);
      iStack_34 = iStack_34 + 1;
      __this_00 = (__this->fields).Errors;
    } while (__this_00 != (System_Collections_Generic_List_string__o *)0x0);
  }
label_0587bcc6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceContext
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceContext (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587ef20
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587efcb: cmp byte ptr [rip + 0x1cc6300], 0
// asm:   0x587efd2: je 0x587eff8
// asm:   0x587efe0: test rbx, rbx
// asm:   0x587efe3: jne 0x587f028
// asm:   0x587efe5: jmp 0x587f13b

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceContext
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075451b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-configuration-context");
    Il2CppMethodInitialized_075451b4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d2 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass36_0_o *)0x0) {
    (__this->fields).experience =
         *(Map_Experience_o **)
          ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields + 0x58
          );
    Il2CppCodeGenWriteBarrier(&(__this->fields).experience);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass36_0_BuildExperienceContext_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,4.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",__this_00,"game-create-configuration-context",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Settings_ExperienceRuleField_o* field, int32_t index, const MethodInfo* method);
// 0x5880050

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Settings_ExperienceRuleField_o *field,int32_t index,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_Fields *targetAddress;
  System_String_o **targetAddress_00;
  System_String_array **targetAddress_01;
  Settings_ExperienceRuleField_o *pSVar1;
  System_String_o *actionId;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o *__this;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  System_String_o **targetAddress_02;
  int32_t local_44;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_40;
  System_String_o *local_38;
  
  local_44 = index;
  local_40 = ui;
  if (Il2CppMethodInitialized_075451b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0_BuildField_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.mapSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    Il2CppMethodInitialized_075451b5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass37_0_o *)0x0) {
    targetAddress = &__this->fields;
    (__this->fields).field = field;
    Il2CppCodeGenWriteBarrier(&targetAddress->field);
    pSVar3 = System_Int32__ToString(&local_44,(MethodInfo *)0x0);
    pMVar4 = (MethodInfo *)System_String__Concat_52f0320("game-create-field-",pSVar3,(MethodInfo *)0x0);
    targetAddress_00 = &(__this->fields).id;
    (__this->fields).id = (System_String_o *)pMVar4;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    pSVar1 = (__this->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions(pSVar1,pMVar4);
    targetAddress_01 = &(__this->fields).allowed;
    (__this->fields).allowed = pSVar5;
    Il2CppCodeGenWriteBarrier(targetAddress_01);
    pSVar1 = (__this->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip(pSVar1,(MethodInfo *)pSVar5);
    targetAddress_02 = &(__this->fields).tooltip;
    (__this->fields).tooltip = pSVar3;
    Il2CppCodeGenWriteBarrier(targetAddress_02);
    pSVar1 = (__this->fields).field;
    if (pSVar1 != (Settings_ExperienceRuleField_o *)0x0) {
      pMVar4 = (MethodInfo *)"general.MapName";
      bVar2 = System_String__op_Equality((pSVar1->fields).Id,"general.MapName",(MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = *targetAddress_00;
        pSVar1 = targetAddress->field;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pSVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(pSVar1,pMVar4);
        actionId = "gameCreate.open.mapSelector";
        if (targetAddress->field != (Settings_ExperienceRuleField_o *)0x0) {
          pSVar5 = *targetAddress_01;
          local_38 = pSVar6;
          if ((targetAddress->field->fields).Editable == false) {
            if (pSVar5 == (System_String_array *)0x0) goto label_05880364;
            bVar2 = false;
          }
          else {
            if (pSVar5 == (System_String_array *)0x0) goto label_05880364;
            bVar2 = 1 < (int)pSVar5->max_length;
          }
          pSVar6 = *targetAddress_02;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField);
          Gisketch_Aottg2UI_Game_AottgGameCreateMapField___ctor
                    (__this_01,pSVar3,local_38,actionId,bVar2,(int32_t)pSVar5->max_length,pSVar6,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
          if (local_40 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__Component
                      (local_40,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass37_0_BuildField_b__0
                   ,(MethodInfo_4A81BE0 *)0x0);
        pSVar3 = System_String__Concat_52f0320((__this->fields).id,"-row",(MethodInfo *)0x0);
        method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)method_00);
        if (local_40 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (local_40,"clear",__this_00,pSVar3,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05880364:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandbox
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandbox (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587acd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587af75: jmp 0x587b8dc
// asm:   0x587b08e: nop 

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandbox
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *array;
  Il2CppObject *object;
  System_Collections_Generic_List_AottgSandboxField__o *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  bool bVar5;
  int iVar6;
  int32_t iVar7;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *tabs;
  System_Globalization_CultureInfo_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Game_AottgSubtab_o *pGVar11;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar12;
  System_Action_T1__T2__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this_01;
  VirtualInvokeData *pVVar13;
  ulong uVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar15;
  long lVar16;
  uint uStack_48;
  int32_t iStack_44;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_40;
  Gisketch_Aottg2UI_Game_AottgSubtab_o **ppGStack_38;
  
  if (Il2CppMethodInitialized_075451b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandbox_b__38_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"Weather");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-sections");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Section.");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-load-warning");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Empty");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Title");
    Il2CppMethodInitialized_075451b6 = '\x01';
  }
  uStack_48 = 0;
  iStack_44 = 0;
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0587b8dc;
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Sandbox.Title","header","game-create-sandbox-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pMVar15 = (MethodInfo *)"GameCreate.Sandbox.Description";
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Sandbox.Description","text","game-create-sandbox-description",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildCategorySelector(ui,pMVar15);
  pGStack_40 = ui;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar15 = extraout_RDX_00;
    if (g_data_075452d1 == '\0') goto label_0587af88;
label_0587af0f:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0587af20;
label_0587afac:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pMVar15 = extraout_RDX_02;
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField
        != false) goto label_0587afc6;
label_0587af31:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0587af3e;
label_0587aff5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452d7 == '\0') goto label_0587b007;
label_0587af4b:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0587af61;
label_0587b030:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    array = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxSectionsInternal;
  }
  else {
    pMVar15 = extraout_RDX;
    if (g_data_075452d1 != '\0') goto label_0587af0f;
label_0587af88:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d1 = '\x01';
    pMVar15 = extraout_RDX_01;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0587afac;
label_0587af20:
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_ShowFavorites_k__BackingField
        == false) goto label_0587af31;
label_0587afc6:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      pMVar15 = extraout_RDX_03;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFavoriteChoices(ui,true,pMVar15);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0587aff5;
label_0587af3e:
    if (g_data_075452d7 != '\0') goto label_0587af4b;
label_0587b007:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452d7 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0587b030;
label_0587af61:
    array = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxSectionsInternal;
  }
  if (array == (System_String_array *)0x0) goto label_0587b8dc;
  tabs = (Gisketch_Aottg2UI_Game_AottgSubtab_array *)
         SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab_array,(uint32_t)array->max_length);
  uStack_48 = 0;
  if (0 < (int)array->max_length) {
    if (tabs == (Gisketch_Aottg2UI_Game_AottgSubtab_array *)0x0) {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar9 = System_Int32__ToString_54b7520
                         ((int32_t *)&uStack_48,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      if (uStack_48 < (uint)array->max_length) {
        pSVar10 = System_String__Concat_52f0320
                            ("GameCreate.Sandbox.Section.",array->m_Items[(int)uStack_48],(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar10 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar10,(MethodInfo *)0x0);
        pGVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
        Gisketch_Aottg2UI_Game_AottgSubtab___ctor(pGVar11,pSVar9,pSVar10,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
label_0587ba6f:
      ThrowIndexOutOfRangeException();
    }
    ppGStack_38 = tabs->m_Items;
    do {
      uVar4 = uStack_48;
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar9 = System_Int32__ToString_54b7520
                         ((int32_t *)&uStack_48,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
      if ((uint)array->max_length <= uStack_48) goto label_0587ba6f;
      pSVar10 = System_String__Concat_52f0320
                          ("GameCreate.Sandbox.Section.",array->m_Items[(int)uStack_48],(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar10 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar10,(MethodInfo *)0x0);
      pGVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
      Gisketch_Aottg2UI_Game_AottgSubtab___ctor(pGVar11,pSVar9,pSVar10,(MethodInfo *)0x0);
      if ((uint)tabs->max_length <= uVar4) goto label_0587ba6f;
      tabs->m_Items[(int)uVar4] = pGVar11;
      Il2CppCodeGenWriteBarrier(ppGStack_38 + (int)uVar4);
      uStack_48 = uStack_48 + 1;
    } while ((int)uStack_48 < (int)array->max_length);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452cf == '\0') goto label_0587b4ba;
label_0587b18e:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075452cf != '\0') goto label_0587b18e;
label_0587b4ba:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452cf = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  iStack_44 = System_Array__IndexOf_object_
                        ((System_Object_array *)array,
                         (Il2CppObject *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                         _SandboxSection_k__BackingField,
                         (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  pSVar8 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar9 = System_Int32__ToString_54b7520(&iStack_44,(System_IFormatProvider_o *)pSVar8,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  pSVar10 = "game-create-sandbox-sections";
  pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  __this_00 = (System_Action_T1__T2__o *)pGVar12->__9__38_0;
  if (__this_00 == (System_Action_T1__T2__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar12->__9;
    __this_00 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_string);
    System_Action_GisketchActionContext__object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandbox_b__38_0,
               (MethodInfo_4A88E80 *)0x0);
    pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar12->__9__38_0 = (System_Action_GisketchActionContext__string__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&pGVar12->__9__38_0);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
  Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor
            (__this_01,pSVar10,tabs,pSVar9,(System_Action_GisketchActionContext__string__o *)__this_00,
             (MethodInfo *)0x0);
  __this = pGStack_40;
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (pGStack_40,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452d5 == '\0') goto label_0587b4fc;
label_0587b2e6:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075452d5 != '\0') goto label_0587b2e6;
label_0587b4fc:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d5 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar5 = System_String__IsNullOrEmpty
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _LoadError_k__BackingField,(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0587b31e;
label_0587b3ec:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452cf == '\0') goto label_0587b3fe;
label_0587b32b:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      if (Il2CppMethodInitialized_075452d5 == '\0') goto label_0587b5c8;
label_0587b3a5:
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_075452d5 != '\0') goto label_0587b3a5;
label_0587b5c8:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452d5 = '\x01';
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    Gisketch_Aottg2UI_Code_AottgUi__Callout
              (__this,2,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                        _LoadError_k__BackingField,"game-create-sandbox-load-warning",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0587b3ec;
label_0587b31e:
    if (g_data_075452cf != '\0') goto label_0587b32b;
label_0587b3fe:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452cf = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar5 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _SandboxSection_k__BackingField,"Weather",(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Build(__this,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452cf == '\0') goto label_0587b60c;
label_0587b44e:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075452cf != '\0') goto label_0587b44e;
label_0587b60c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452cf = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pMVar15 = (MethodInfo *)"Custom";
  bVar5 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _SandboxSection_k__BackingField,"Custom",(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxCustom(__this,pMVar15);
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452cf == '\0') goto label_0587b6c4;
label_0587b54c:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075452cf != '\0') goto label_0587b54c;
label_0587b6c4:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452cf = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pMVar15 = (MethodInfo *)"General";
  bVar5 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _SandboxSection_k__BackingField,"General",(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxGeneral(__this,pMVar15);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxAddons(__this,pMVar15);
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxPresetActions(__this,pMVar15);
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452cf == '\0') goto label_0587b77c;
label_0587b65c:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075452cf != '\0') goto label_0587b65c;
label_0587b77c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452cf = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pMVar15 = (MethodInfo *)"Misc";
  bVar5 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _SandboxSection_k__BackingField,"Misc",(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMisc(__this,pMVar15);
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452cf == '\0') goto label_0587b857;
label_0587b714:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075452cf != '\0') goto label_0587b714;
label_0587b857:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452cf = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pMVar15 = (MethodInfo *)"Titans";
  bVar5 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _SandboxSection_k__BackingField,"Titans",(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxTitans(__this,pMVar15);
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452d8 == '\0') goto label_0587b89b;
label_0587b7cc:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_0587b7dd;
label_0587b8bf:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    obj = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
  }
  else {
    if (Il2CppMethodInitialized_075452d8 != '\0') goto label_0587b7cc;
label_0587b89b:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d8 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0587b8bf;
label_0587b7dd:
    obj = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
  }
  if (obj != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
    pIVar2 = (Il2CppClass *)obj->klass;
    uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar16) ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField) {
          pVVar13 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar16);
          goto label_0587b8f4;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar14 * 0x10 != lVar16);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)obj,
                         (Il2CppClass *)
                         TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,0);
label_0587b8f4:
    iVar6 = (*pVVar13->methodPtr)(obj,pVVar13->method);
    if (0 < iVar6) {
      pMVar15 = extraout_RDX_04;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        pMVar15 = extraout_RDX_05;
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldColumns
                (__this,(System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *)obj,pMVar15);
    }
    pIVar2 = (Il2CppClass *)obj->klass;
    uVar14 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar14 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyCollection_AottgSandboxField__c **)
             ((long)&pIVar3->interfaceType + lVar16) ==
            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField) {
          pVVar13 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar16);
          goto label_0587b981;
        }
        lVar16 = lVar16 + 0x10;
      } while (uVar14 * 0x10 != lVar16);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)obj,
                         (Il2CppClass *)
                         TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,0);
label_0587b981:
    iVar7 = (*pVVar13->methodPtr)((Il2CppObject *)obj,pVVar13->method);
    if (iVar7 == 0) {
      Gisketch_Aottg2UI_Code_AottgUi__TextKey
                (__this,"GameCreate.Sandbox.Empty","text","game-create-sandbox-empty",
                 (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
    }
    return;
  }
label_0587b8dc:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxPresetActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxPresetActions (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5882110

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxPresetActions
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075451b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxPresetActions_b__39_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-actions");
    Il2CppMethodInitialized_075451b7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  style = "clear";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  __this = pGVar1->__9__39_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxPresetActions_b__39_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar1->__9__39_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__39_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,"Wrap",14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this,"game-create-sandbox-actions",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, int32_t index, bool enabled, const MethodInfo* method);
// 0x5883870

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,
               int32_t index,bool enabled,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_Fields *targetAddress;
  System_String_o **targetAddress_00;
  int32_t selectableMapCount;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar1;
  System_String_array *pSVar2;
  System_String_o *tooltip;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o *__this;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  System_String_o *mapName;
  System_String_o *label;
  Gisketch_Aottg2UI_Game_AottgGameCreateMapField_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o **method_00;
  System_String_o **targetAddress_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_01;
  int32_t local_34;
  
  local_34 = index;
  if (Il2CppMethodInitialized_075451b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass40_0_BuildSandboxField_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass40_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanArmorCrawlerEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.mapSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    Il2CppMethodInitialized_075451b8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass40_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass40_0_o *)0x0) {
    targetAddress = &__this->fields;
    (__this->fields).field = field;
    Il2CppCodeGenWriteBarrier(&targetAddress->field);
    (__this->fields).enabled = enabled;
    pSVar4 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
    method_00 = &"game-create-sandbox-field-";
    pMVar5 = (MethodInfo *)System_String__Concat_52f0320("game-create-sandbox-field-",pSVar4,(MethodInfo *)0x0);
    targetAddress_00 = &(__this->fields).id;
    (__this->fields).id = (System_String_o *)pMVar5;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    pGVar1 = (__this->fields).field;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip_5783bc0(pGVar1,pMVar5);
    targetAddress_01 = &(__this->fields).tooltip;
    (__this->fields).tooltip = pSVar4;
    Il2CppCodeGenWriteBarrier(targetAddress_01);
    pGVar1 = (__this->fields).field;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
      pMVar5 = (MethodInfo *)"general.MapName";
      bVar3 = System_String__op_Equality
                        ((pGVar1->fields)._Id_k__BackingField,"general.MapName",(MethodInfo *)0x0);
      if (bVar3) {
        pSVar4 = *targetAddress_00;
        pGVar1 = targetAddress->field;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        mapName = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(pGVar1,pMVar5);
        pGVar1 = targetAddress->field;
        if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) &&
           (pSVar2 = (pGVar1->fields)._Options_k__BackingField, pSVar2 != (System_String_array *)0x0)) {
          tooltip = *targetAddress_01;
          label = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldLabel(pGVar1,pMVar5);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField);
          selectableMapCount = (int32_t)pSVar2->max_length;
          Gisketch_Aottg2UI_Game_AottgGameCreateMapField___ctor
                    (__this_00,pSVar4,mapName,"gameCreate.open.mapSelector",1 < selectableMapCount,selectableMapCount,
                     tooltip,label,(MethodInfo *)0x0);
          if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__Component
                      (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if (targetAddress->field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
        bVar3 = System_String__op_Equality
                          ((targetAddress->field->fields)._Id_k__BackingField,"titan.TitanArmorCrawlerEnabled",
                           (MethodInfo *)0x0);
        if (bVar3) {
          if (targetAddress->field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
            pSVar4 = (targetAddress->field->fields)._Id_k__BackingField;
            bVar3 = (__this->fields).enabled;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchById
                      (ui,pSVar4,bVar3,(MethodInfo *)method_00);
            return;
          }
        }
        else {
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass40_0_BuildSandboxField_b__0
                     ,(MethodInfo_4A81BE0 *)0x0);
          pSVar4 = System_String__Concat_52f0320((__this->fields).id,"-row",(MethodInfo *)0x0);
          method_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)method_01);
          if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__Panel
                      (ui,"clear",__this_01,pSVar4,layout,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxGeneral
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxGeneral (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5881aa0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxGeneral
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0_o *__this;
  MethodInfo *pMVar1;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075451b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass41_0_BuildSandboxGeneral_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass41_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapName");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-core-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_075451b9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass41_0
                     );
  pMVar1 = (MethodInfo *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pMVar1 = (MethodInfo *)
           Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField("general.MapName",pMVar1);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass41_0_o *)0x0) {
    (__this->fields).map = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)pMVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).map);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField("general.GameMode",pMVar1);
    (__this->fields).mode = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).mode);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass41_0_BuildSandboxGeneral_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","SpaceBetween","FlexStart",
                        (System_String_o *)0x0,"Wrap",32.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",__this_00,"game-create-sandbox-core-fields",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxModeField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxModeField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, int32_t index, const MethodInfo* method);
// 0x58845b0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxModeField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,
               int32_t index,MethodInfo *method)

{
  int iVar1;
  System_String_array *pSVar2;
  MethodInfo *pMVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  System_String_o **ppSVar8;
  System_String_o *icon;
  System_Nullable_bool__Fields local_38 [2];
  int32_t local_34;
  
  local_34 = index;
  if (Il2CppMethodInitialized_075451ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.modeSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_075451ba = '\x01';
  }
  pMVar3 = (MethodInfo *)System_Int32__ToString(&local_34,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_52f0320("game-create-sandbox-field-",(System_String_o *)pMVar3,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pMVar3 = (MethodInfo *)Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldLabel(field,pMVar3);
  pSVar5 = System_String__Concat_52f0320(pSVar4,"-label",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ui,(System_String_o *)pMVar3,"text",pSVar5,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) &&
       (pSVar2 = (field->fields)._Options_k__BackingField, pSVar2 != (System_String_array *)0x0)) {
      iVar1 = (int)pSVar2->max_length;
      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue(field,pMVar3);
      if (iVar1 < 2) {
        ppSVar8 = *(System_String_o ***)(g_data_07556758 + 0xb8);
      }
      else {
        ppSVar8 = &"gameCreate.open.modeSelector";
      }
      icon = (System_String_o *)0x0;
      if (1 < iVar1) {
        icon = "zoom";
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (ui,1,pSVar5,*ppSVar8,pSVar4,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
      local_38[0].hasValue = false;
      local_38[0].value = false;
      pMVar3 = (MethodInfo *)(ulong)(1 < iVar1);
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)local_38,1 < iVar1,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).enabled.fields = local_38[0];
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldLabel(field,pMVar3);
        (pGVar6->fields).formLabel = pSVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).formLabel);
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(52.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (pGVar6->fields).layout = pGVar7;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxMisc
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMisc (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5882300
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5882b98: jmp 0x5882d50

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMisc
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  System_String_o *id;
  System_String_array *pSVar5;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  
  if (Il2CppMethodInitialized_075451bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-weapons");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.EndlessRespawnTime");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowShifters");
    il2cpp_codegen_initialize_runtime_metadata(&"Characters");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.CustomStats");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowStock");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.CustomPerks");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.InvincibilityTime");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowShifterSpecials");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.EndlessRespawnEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowAHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowUnarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.APGPVP");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-pvp-title");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.HookDamageMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowSpawnTime");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Misc.Realism");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowAPG");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-characters");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-pvp");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ShifterHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismMaxSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-realism-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"Weapons");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismImpactThreshold");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.DestructibleEnvironment");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.Horses");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowPlayerTitans");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-realism-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"RespawnHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Misc.PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismMode");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.RealismMaxReel");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ThunderspearPVP");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowCivilian");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ClearKDROnRestart");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-movement");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.HumanHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.GlobalMinimapDisable");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.GunsAirReload");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.HorseHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.HorsebackCombat");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-realism-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-misc-respawn");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowThunderspears");
    il2cpp_codegen_initialize_runtime_metadata(&"MovementEquipment");
    Il2CppMethodInitialized_075451bb = '\x01';
  }
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05882d50;
  pMVar6 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Sandbox.Misc.PVP","header","game-create-misc-pvp-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if (pSVar5 == (System_String_array *)0x0) goto label_05882d50;
  if ((int)pSVar5->max_length == 0) goto label_05882d4b;
  pSVar5->m_Items[0] = "misc.PVP";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
  if ((pSVar5->max_length & 0xfffffffe) == 0) goto label_05882d4b;
  pSVar5->m_Items[1] = "misc.ThunderspearPVP";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
  if ((uint)pSVar5->max_length < 3) goto label_05882d4b;
  pSVar5->m_Items[2] = "misc.APGPVP";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    if (Il2CppMethodInitialized_075451c6 != '\0') goto label_05882695;
label_05882bb9:
    id = "game-create-misc-pvp";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_075451c6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075451c6 == '\0') goto label_05882bb9;
label_05882695:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    id = "game-create-misc-pvp";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40(ui,id,true,pSVar5,pMVar6);
  pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  if (pSVar5 == (System_String_array *)0x0) goto label_05882d50;
  if ((int)pSVar5->max_length == 0) goto label_05882d4b;
  pSVar5->m_Items[0] = "misc.AllowBlades";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
  if ((pSVar5->max_length & 0xfffffffe) == 0) goto label_05882d4b;
  pSVar5->m_Items[1] = "misc.AllowAHSS";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
  if ((uint)pSVar5->max_length < 3) goto label_05882d4b;
  pSVar5->m_Items[2] = "misc.AllowThunderspears";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2);
  if ((pSVar5->max_length & 0xfffffffc) == 0) goto label_05882d4b;
  pSVar5->m_Items[3] = "misc.AllowAPG";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 3);
  if ((uint)pSVar5->max_length < 5) goto label_05882d4b;
  pSVar5->m_Items[4] = "misc.AllowUnarmed";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 4);
  if ((uint)pSVar5->max_length < 6) goto label_05882d4b;
  pSVar5->m_Items[5] = "misc.AllowCivilian";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 5);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix
            (ui,"Weapons","game-create-misc-weapons",pSVar5,pMVar6);
  pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (pSVar5 == (System_String_array *)0x0) goto label_05882d50;
  if ((int)pSVar5->max_length == 0) goto label_05882d4b;
  pSVar5->m_Items[0] = "misc.AllowPlayerTitans";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
  if ((pSVar5->max_length & 0xfffffffe) == 0) goto label_05882d4b;
  pSVar5->m_Items[1] = "misc.AllowShifters";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
  if ((uint)pSVar5->max_length < 3) goto label_05882d4b;
  pSVar5->m_Items[2] = "misc.AllowShifterSpecials";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2);
  if ((pSVar5->max_length & 0xfffffffc) == 0) goto label_05882d4b;
  pSVar5->m_Items[3] = "misc.CustomStats";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 3);
  if ((uint)pSVar5->max_length < 5) goto label_05882d4b;
  pSVar5->m_Items[4] = "misc.CustomPerks";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 4);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix
            (ui,"Characters","game-create-misc-characters",pSVar5,pMVar6);
  pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
  if (pSVar5 == (System_String_array *)0x0) goto label_05882d50;
  if ((int)pSVar5->max_length == 0) goto label_05882d4b;
  pSVar5->m_Items[0] = "misc.EndlessRespawnEnabled";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
  if ((pSVar5->max_length & 0xfffffffe) == 0) goto label_05882d4b;
  pSVar5->m_Items[1] = "misc.EndlessRespawnTime";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
  if ((uint)pSVar5->max_length < 3) goto label_05882d4b;
  pSVar5->m_Items[2] = "misc.AllowSpawnTime";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2);
  if ((pSVar5->max_length & 0xfffffffc) == 0) goto label_05882d4b;
  pSVar5->m_Items[3] = "misc.InvincibilityTime";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 3);
  if ((uint)pSVar5->max_length < 5) goto label_05882d4b;
  pSVar5->m_Items[4] = "misc.HumanHealth";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 4);
  if ((uint)pSVar5->max_length < 6) goto label_05882d4b;
  pSVar5->m_Items[5] = "misc.ShifterHealth";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 5);
  if ((uint)pSVar5->max_length < 7) goto label_05882d4b;
  pSVar5->m_Items[6] = "misc.HorseHealth";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 6);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix
            (ui,"RespawnHealth","game-create-misc-respawn",pSVar5,pMVar6);
  pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
  if (pSVar5 == (System_String_array *)0x0) goto label_05882d50;
  if ((int)pSVar5->max_length == 0) goto label_05882d4b;
  pSVar5->m_Items[0] = "misc.Horses";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
  if ((pSVar5->max_length & 0xfffffffe) == 0) goto label_05882d4b;
  pSVar5->m_Items[1] = "misc.HorsebackCombat";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
  if ((uint)pSVar5->max_length < 3) goto label_05882d4b;
  pSVar5->m_Items[2] = "misc.DestructibleEnvironment";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2);
  if ((pSVar5->max_length & 0xfffffffc) == 0) goto label_05882d4b;
  pSVar5->m_Items[3] = "misc.GunsAirReload";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 3);
  if ((uint)pSVar5->max_length < 5) goto label_05882d4b;
  pSVar5->m_Items[4] = "misc.AllowStock";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 4);
  if ((uint)pSVar5->max_length < 6) goto label_05882d4b;
  pSVar5->m_Items[5] = "misc.ClearKDROnRestart";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 5);
  if ((uint)pSVar5->max_length < 7) goto label_05882d4b;
  pSVar5->m_Items[6] = "misc.GlobalMinimapDisable";
  Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 6);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix
            (ui,"MovementEquipment","game-create-misc-movement",pSVar5,pMVar6);
  Gisketch_Aottg2UI_Code_AottgUi__Separator
            (ui,"game-create-misc-realism-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  pMVar6 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Sandbox.Misc.Realism","header","game-create-misc-realism-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchLine(ui,"misc.RealismMode",method_00);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_05882b74;
label_05882bf9:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05882b84;
label_05882c1c:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_05882bf9;
label_05882b74:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05882c1c;
label_05882b84:
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (pSVar2 != (Settings_InGameSet_o *)0x0) {
    pSVar3 = (pSVar2->fields).Misc;
    if ((pSVar3 != (Settings_InGameMiscSettings_o *)0x0) &&
       (pSVar4 = (pSVar3->fields).RealismMode, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar4->fields)._value == false) {
        return;
      }
      pSVar5 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
      if (pSVar5 != (System_String_array *)0x0) {
        if ((int)pSVar5->max_length != 0) {
          pSVar5->m_Items[0] = "misc.RealismImpactThreshold";
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
          if ((pSVar5->max_length & 0xfffffffe) != 0) {
            pSVar5->m_Items[1] = "misc.RealismMaxReel";
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
            if (2 < (uint)pSVar5->max_length) {
              pSVar5->m_Items[2] = "misc.RealismMaxSpeed";
              Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2);
              if ((pSVar5->max_length & 0xfffffffc) != 0) {
                pSVar5->m_Items[3] = "misc.HookDamageMultiplier";
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 3);
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                }
                Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40
                          (ui,"game-create-misc-realism-fields",true,pSVar5,pMVar6);
                return;
              }
            }
          }
        }
label_05882d4b:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05882d50:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxTitans
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxTitans (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5882d60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5883084: jmp 0x5883698
// asm:   0x5883356: jmp 0x5883698

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxTitans
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameTitanSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_array *pSVar9;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar10;
  System_Action_AottgUi__o *pSVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Il2CppClass *pIVar12;
  MethodInfo *pMVar13;
  
  if (Il2CppMethodInitialized_075451bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawn-preset-row");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-decapitation-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-size-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSmartMovement");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.Spawns");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-spawns-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-appearance-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-behavior-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-behavior-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanDecapitationMinDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-appearance-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-size-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.Appearance");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-behavior-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-defense");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSizeEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSizeMin");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadMode");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanDecapitationEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.Behavior");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.Decapitation");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-decapitation-title");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSizeMax");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanStandardModels");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.HealthArmor");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-appearance-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-decapitation-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-defense-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-defense-title");
    Il2CppMethodInitialized_075451bc = '\x01';
  }
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05883698;
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Sandbox.Titans.Spawns","header","game-create-titans-spawns-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  pSVar7 = "clear";
  pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  pSVar11 = pGVar10->__9__44_0;
  if (pSVar11 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    pIVar6 = (Il2CppObject *)pGVar10->__9;
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar11,pIVar6,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar10->__9__44_0 = pSVar11;
    Il2CppCodeGenWriteBarrier(&pGVar10->__9__44_0);
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar12 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar12 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)pIVar12;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar12);
  }
  pGVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)pIVar12);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,pSVar7,pSVar11,"game-create-titans-spawn-preset-row",pGVar8,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Separator
            (ui,"game-create-titans-size-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchLine(ui,"titan.TitanSizeEnabled",method_00);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_0588305f;
label_05883123:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05883070;
label_05883147:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_05883123;
label_0588305f:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05883147;
label_05883070:
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar3 == (Settings_InGameSet_o *)0x0) ||
      (pSVar4 = (pSVar3->fields).Titan, pSVar4 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar5 = (pSVar4->fields).TitanSizeEnabled, pSVar5 == (Settings_BoolSetting_o *)0x0)) goto label_05883698;
  bVar1 = (pSVar5->fields)._value;
  pSVar9 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar9 == (System_String_array *)0x0) goto label_05883698;
  if ((int)pSVar9->max_length == 0) goto label_0588369d;
  pSVar9->m_Items[0] = "titan.TitanSizeMin";
  Il2CppCodeGenWriteBarrier(pSVar9->m_Items);
  if ((pSVar9->max_length & 0xfffffffe) == 0) goto label_0588369d;
  pSVar9->m_Items[1] = "titan.TitanSizeMax";
  Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40
            (ui,"game-create-titans-size-fields",bVar1,pSVar9,(MethodInfo *)pGVar8);
  Gisketch_Aottg2UI_Code_AottgUi__Separator
            (ui,"game-create-titans-defense-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Sandbox.Titans.HealthArmor","header","game-create-titans-defense-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  pSVar7 = "clear";
  pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  pSVar11 = pGVar10->__9__44_1;
  if (pSVar11 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    pIVar6 = (Il2CppObject *)pGVar10->__9;
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar11,pIVar6,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxTitans_b__44_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar10 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar10->__9__44_1 = pSVar11;
    Il2CppCodeGenWriteBarrier(&pGVar10->__9__44_1);
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar12 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    pIVar12 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen =
       (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *)pIVar12;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar12);
  }
  pGVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)pIVar12);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,pSVar7,pSVar11,"game-create-titans-defense",pGVar8,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Separator
            (ui,"game-create-titans-decapitation-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  pMVar13 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Sandbox.Titans.Decapitation","header","game-create-titans-decapitation-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchLine(ui,"titan.TitanDecapitationEnabled",method_01);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_05883331;
label_05883401:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05883342;
label_05883425:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_05883401;
label_05883331:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05883425;
label_05883342:
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
      (pSVar4 = (pSVar3->fields).Titan, pSVar4 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar5 = (pSVar4->fields).TitanDecapitationEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
    bVar1 = (pSVar5->fields)._value;
    pSVar9 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    if (pSVar9 != (System_String_array *)0x0) {
      if ((int)pSVar9->max_length != 0) {
        pSVar9->m_Items[0] = "titan.TitanDecapitationMinDamage";
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items);
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40
                  (ui,"game-create-titans-decapitation-fields",bVar1,pSVar9,pMVar13);
        Gisketch_Aottg2UI_Code_AottgUi__Separator
                  (ui,"game-create-titans-appearance-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (MethodInfo *)0x0);
        pMVar13 = (MethodInfo *)0x0;
        Gisketch_Aottg2UI_Code_AottgUi__TextKey
                  (ui,"GameCreate.Sandbox.Titans.Appearance","header","game-create-titans-appearance-title",(System_String_o *)0x0
                   ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar9 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        if (pSVar9 == (System_String_array *)0x0) goto label_05883698;
        if ((int)pSVar9->max_length != 0) {
          pSVar9->m_Items[0] = "titan.TitanStandardModels";
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items);
          if ((pSVar9->max_length & 0xfffffffe) != 0) {
            pSVar9->m_Items[1] = "titan.TitanHeadMode";
            Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1);
            method_02 = (MethodInfo *)"game-create-titans-appearance-fields";
            if (Il2CppMethodInitialized_075451c6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
              Il2CppMethodInitialized_075451c6 = '\x01';
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40
                      (ui,(System_String_o *)method_02,true,pSVar9,pMVar13);
            Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHeadBounds(ui,method_02);
            Gisketch_Aottg2UI_Code_AottgUi__Separator
                      (ui,"game-create-titans-behavior-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (MethodInfo *)0x0);
            pMVar13 = (MethodInfo *)0x0;
            Gisketch_Aottg2UI_Code_AottgUi__TextKey
                      (ui,"GameCreate.Sandbox.Titans.Behavior","header","game-create-titans-behavior-title",
                       (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (MethodInfo *)0x0);
            pSVar9 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
            if (pSVar9 == (System_String_array *)0x0) goto label_05883698;
            if ((int)pSVar9->max_length != 0) {
              pSVar9->m_Items[0] = "titan.TitanSmartMovement";
              Il2CppCodeGenWriteBarrier(pSVar9->m_Items);
              pSVar7 = "game-create-titans-behavior-fields";
              if (Il2CppMethodInitialized_075451c6 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                Il2CppMethodInitialized_075451c6 = '\x01';
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
              }
              Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40
                        (ui,pSVar7,true,pSVar9,pMVar13);
              return;
            }
          }
        }
      }
label_0588369d:
      ThrowIndexOutOfRangeException();
    }
  }
label_05883698:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanHeadBounds
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHeadBounds (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5884ea0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5884ec7: cmp byte ptr [rip + 0x1cc03ff], 0
// asm:   0x5884ef8: jmp 0x5885075

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHeadBounds
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameTitanSettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  System_String_array *fieldIds;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_075451bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMin");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanHeadRandomMax");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-head-random-fields");
    Il2CppMethodInitialized_075451bd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar3 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
  }
  if (((pSVar3 != (Settings_InGameSet_o *)0x0) &&
      (pSVar4 = (pSVar3->fields).Titan, pSVar4 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar5 = (pSVar4->fields).TitanHeadMode, pSVar5 != (Settings_IntSetting_o *)0x0)) {
    iVar2 = (pSVar5->fields)._value;
    fieldIds = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    if (fieldIds != (System_String_array *)0x0) {
      if ((int)fieldIds->max_length != 0) {
        fieldIds->m_Items[0] = "titan.TitanHeadRandomMin";
        Il2CppCodeGenWriteBarrier(fieldIds->m_Items);
        if ((fieldIds->max_length & 0xfffffffe) != 0) {
          fieldIds->m_Items[1] = "titan.TitanHeadRandomMax";
          Il2CppCodeGenWriteBarrier(fieldIds->m_Items + 1);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40
                    (ui,"game-create-titans-head-random-fields",iVar2 == 1,fieldIds,in_R8);
          return;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanHealthMode
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHealthMode (Gisketch_Aottg2UI_Code_AottgUi_o* ui, bool enabled, const MethodInfo* method);
// 0x5885080

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHealthMode
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,bool enabled,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass46_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_075451be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass46_0_BuildTitanHealthMode_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass46_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-mode-row");
    Il2CppMethodInitialized_075451be = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass46_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass46_0_o *)0x0) {
    (__this->fields).enabled = enabled;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass46_0_BuildTitanHealthMode_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)method_00);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",__this_00,"game-create-titans-health-mode-row",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanHealthEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHealthEnabled (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58851b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5885269: cmp byte ptr [rip + 0x1cc005d], 0
// asm:   0x5885270: je 0x58852a1
// asm:   0x588528e: jmp 0x588535d

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanHealthEnabled
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameTitanSettings_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  System_String_o *label;
  System_Action_bool__o *__this;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075451bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_SetTitanHealthEnabled);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titans-health-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Titans.HealthEnabled");
    Il2CppMethodInitialized_075451bf = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  label = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Sandbox.Titans.HealthEnabled",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar3 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
  }
  if (((pSVar3 == (Settings_InGameSet_o *)0x0) ||
      (pSVar4 = (pSVar3->fields).Titan, pSVar4 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar5 = (pSVar4->fields).TitanHealthMode, pSVar5 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar2 = (pSVar5->fields)._value;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
  System_Action_bool____ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_SetTitanHealthEnabled,
             (MethodInfo_4A7F1E0 *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanToggle
            (ui,label,"game-create-titans-health-enabled",iVar2 != 0,__this,in_R9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanArmorEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanArmorEnabled (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58854e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58855f9: jmp 0x588576d

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanArmorEnabled
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool enabled;
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Il2CppObject *object;
  System_String_o *label;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar6;
  System_Action_bool__o *__this;
  MethodInfo *in_R9;
  int32_t local_3c;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075451c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanArmorEnabled_b__48_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanArmorEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    Il2CppMethodInitialized_075451c0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  label = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel("titan.TitanArmorEnabled",method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  local_3c = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex("titan.TitanArmorEnabled",method);
  pSVar5 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_52f0320("game-create-sandbox-field-",pSVar5,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar2 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
  }
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).TitanArmorEnabled, pSVar4 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  enabled = (pSVar4->fields)._value;
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    __this = pGVar6->__9__48_0;
  }
  else {
    pGVar6 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c)->static_fields;
    __this = pGVar6->__9__48_0;
  }
  if (__this == (System_Action_bool__o *)0x0) {
    local_38 = label;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar6->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
    System_Action_bool____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanArmorEnabled_b__48_0,
               (MethodInfo_4A7F1E0 *)0x0);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar6->__9__48_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar6->__9__48_0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    label = local_38;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanToggle(ui,label,pSVar5,enabled,__this,in_R9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanWardedEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanWardedEnabled (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5885880
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5885999: jmp 0x5885b10

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanWardedEnabled
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool enabled;
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Il2CppObject *object;
  System_String_o *label;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar6;
  System_Action_bool__o *__this;
  MethodInfo *in_R9;
  int32_t local_3c;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075451c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanWardedEnabled_b__49_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanWardedEnabled");
    Il2CppMethodInitialized_075451c1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  label = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel("titan.TitanWardedEnabled",method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  local_3c = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex("titan.TitanWardedEnabled",method);
  pSVar5 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_52f0320("game-create-sandbox-field-",pSVar5,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    pSVar2 = *(Settings_InGameSet_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x40);
  }
  if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).TitanWardedEnabled, pSVar4 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  enabled = (pSVar4->fields)._value;
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    __this = pGVar6->__9__49_0;
  }
  else {
    pGVar6 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c)->static_fields;
    __this = pGVar6->__9__49_0;
  }
  if (__this == (System_Action_bool__o *)0x0) {
    local_38 = label;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar6->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
    System_Action_bool____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildTitanWardedEnabled_b__49_0,
               (MethodInfo_4A7F1E0 *)0x0);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar6->__9__49_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar6->__9__49_0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
    label = local_38;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanToggle(ui,label,pSVar5,enabled,__this,in_R9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildTitanToggle
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanToggle (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, System_String_o* id, bool enabled, System_Action_bool__o* setEnabled, const MethodInfo* method);
// 0x5885370

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildTitanToggle
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,System_String_o *id,bool enabled,
               System_Action_bool__o *setEnabled,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_075451c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass50_0_BuildTitanToggle_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass50_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    Il2CppMethodInitialized_075451c2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass50_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass50_0_o *)0x0) {
    (__this->fields).label = label;
    Il2CppCodeGenWriteBarrier(&(__this->fields).label);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).enabled = enabled;
    (__this->fields).setEnabled = setEnabled;
    Il2CppCodeGenWriteBarrier(&(__this->fields).setEnabled);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass50_0_BuildTitanToggle_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    id_00 = System_String__Concat_52f0320((__this->fields).id,"-row",(MethodInfo *)0x0);
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)method_00);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",__this_00,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxMatrix
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, System_String_o* id, System_String_array* fieldIds, const MethodInfo* method);
// 0x58848e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58849a1: cmp byte ptr [rip + 0x1cc081e], 0
// asm:   0x58849a8: je 0x58849e2

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxMatrix
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,System_String_o *id,
               System_String_array *fieldIds,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *key_00;
  System_String_o *id_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075451c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Misc.");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_075451c3 = '\x01';
  }
  key_00 = System_String__Concat_52f0320("GameCreate.Sandbox.Misc.",key,(MethodInfo *)0x0);
  id_00 = System_String__Concat_52f0320(id,"-title",(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,key_00,"header",id_00,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  if (Il2CppMethodInitialized_075451c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_075451c6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40(ui,id,true,fieldIds,method_00)
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxSwitchById
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchById (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* fieldId, bool enabled, const MethodInfo* method);
// 0x5884190
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58842e8: jmp 0x58843d2

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchById
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *fieldId,bool enabled,MethodInfo *method)

{
  byte bVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_BoolSetting_c *pSVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0_o *__this;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar5;
  System_String_o *pSVar6;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Settings_BoolSetting_o **ppSVar7;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  
  if (Il2CppMethodInitialized_075451c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass52_0_BuildSandboxSwitchById_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass52_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-field-");
    Il2CppMethodInitialized_075451c4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass52_0
                     );
  pMVar8 = (MethodInfo *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass52_0_o *)0x0)
  goto label_058843df;
  (__this->fields).enabled = enabled;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pGVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField(fieldId,pMVar8);
  (__this->fields).field = pGVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).field);
  pSVar3 = TypeInfo_Settings_BoolSetting;
  pGVar5 = (__this->fields).field;
  if (pGVar5 == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    return;
  }
  pMVar8 = (MethodInfo *)(pGVar5->fields)._Setting_k__BackingField;
  if (pMVar8 == (MethodInfo *)0x0) {
    (__this->fields).boolSetting = (Settings_BoolSetting_o *)0x0;
label_058842d7:
    ppSVar7 = &(__this->fields).boolSetting;
    pMVar9 = (MethodInfo *)0x0;
    Il2CppCodeGenWriteBarrier(ppSVar7);
    pSVar2 = *ppSVar7;
  }
  else {
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((((Settings_BoolSetting_c *)pMVar8->methodPointer)->_2).typeHierarchyDepth < bVar1) {
      pMVar9 = (MethodInfo *)0x0;
    }
    else {
      pMVar9 = (MethodInfo *)0x0;
      if ((((Settings_BoolSetting_c *)pMVar8->methodPointer)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Settings_BoolSetting) {
        pMVar9 = pMVar8;
      }
    }
    ppSVar7 = &(__this->fields).boolSetting;
    (__this->fields).boolSetting = (Settings_BoolSetting_o *)pMVar9;
    if ((((Settings_BoolSetting_c *)pMVar8->methodPointer)->_2).typeHierarchyDepth < bVar1) goto label_058842d7;
    pMVar9 = (MethodInfo *)0x0;
    if ((((Settings_BoolSetting_c *)pMVar8->methodPointer)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)pSVar3) {
      pMVar9 = pMVar8;
    }
    Il2CppCodeGenWriteBarrier(ppSVar7);
    pSVar2 = *ppSVar7;
  }
  if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    iVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(fieldId,pMVar9);
    (__this->fields).index = iVar4;
    pSVar6 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_52f0320("game-create-sandbox-field-",pSVar6,(MethodInfo *)0x0);
    (__this->fields).id = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass52_0_BuildSandboxSwitchById_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    pMVar8 = (MethodInfo *)(__this->fields).id;
    pSVar6 = System_String__Concat_52f0320((System_String_o *)pMVar8,"-row",(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout(pMVar8);
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
label_058843df:
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"clear",__this_00,pSVar6,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldSwitch
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldSwitch (Gisketch_Aottg2UI_Code_AottgUi_o* row, System_String_o* id, bool value, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x5885b40

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldSwitch
          (Gisketch_Aottg2UI_Code_AottgUi_o *row,System_String_o *id,bool value,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075451c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0_FieldSwitch_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0);
    il2cpp_codegen_initialize_runtime_metadata(&"-slot");
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_075451c5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass53_0_o *)0x0) {
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).value = value;
    (__this->fields).action = action;
    Il2CppCodeGenWriteBarrier(&(__this->fields).action);
    (__this->fields).toggle = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).toggle);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass53_0_FieldSwitch_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    method_00 = (MethodInfo *)"-slot";
    id_00 = System_String__Concat_52f0320((__this->fields).id,"-slot",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout_5785cd0(true,method_00);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (row,"clear",__this_00,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return (__this->fields).toggle;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldsByIds
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_array* fieldIds, const MethodInfo* method);
// 0x5884880

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_array *fieldIds,
               MethodInfo *method)

{
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_075451c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_075451c6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40(ui,id,true,fieldIds,in_R8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldsByIds
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, bool enabled, System_String_array* fieldIds, const MethodInfo* method);
// 0x5884b40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5884cc2: jmp 0x5884c87

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldsByIds_5784b40
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,bool enabled,
               System_String_array *fieldIds,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int32_t count;
  System_String_o *id_00;
  System_Collections_Generic_List_AottgSandboxField__o *__this;
  Gisketch_Aottg2UI_Game_AottgSandboxField_array *pGVar3;
  MethodInfo *pMVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass55_0_o *__this_00;
  MethodInfo *method_00;
  ulong uVar5;
  MethodInfo *item;
  System_Action_T1__T2__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass55_0_Fields *targetAddress;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_075451c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgSandboxField_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass55_0_BuildSandboxFieldsByIds_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass55_0);
    Il2CppMethodInitialized_075451c7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass55_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass55_0_o *)0x0) {
    (__this_00->fields).enabled = enabled;
    method_00 = (MethodInfo *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgSandboxField);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)method_00,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgSandboxField_ctor);
    targetAddress = &__this_00->fields;
    (__this_00->fields).fields = (System_Collections_Generic_List_AottgSandboxField__o *)method_00;
    Il2CppCodeGenWriteBarrier(&targetAddress->fields);
    if (fieldIds != (System_String_array *)0x0) {
      if (0 < (int)fieldIds->max_length) {
        uVar5 = fieldIds->max_length & 0xffffffff;
        uVar6 = 0;
        do {
          if (uVar5 <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          id_00 = fieldIds->m_Items[uVar6];
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
            item = (MethodInfo *)Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField(id_00,method_00);
            pMVar4 = MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add;
          }
          else {
            item = (MethodInfo *)Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField(id_00,method_00);
            pMVar4 = MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add;
          }
          MethodInfo_System_Collections_Generic_List_AottgSandboxField_Add = pMVar4;
          if (item != (MethodInfo *)0x0) {
            __this = targetAddress->fields;
            if (__this == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) goto label_05884da8;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar3 = (__this->fields)._items;
            if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgSandboxField_array *)0x0) goto label_05884da8;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pGVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pGVar3->m_Items[(int)uVar2] = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)item;
              Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2);
              method_00 = item;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
              method_00 = item;
            }
          }
          uVar6 = uVar6 + 1;
          uVar2 = (uint)fieldIds->max_length;
          uVar5 = (ulong)uVar2;
        } while ((long)uVar6 < (long)(int)uVar2);
      }
      if (targetAddress->fields != (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
        count = (targetAddress->fields->fields)._size;
        __this_01 = (System_Action_T1__T2__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi_int);
        System_Action_object__int____ctor
                  (__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass55_0_BuildSandboxFieldsByIds_b__0
                   ,(MethodInfo_4A89C60 *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFieldColumns
                  (ui,id,count,(System_Action_AottgUi__int__o *)__this_01,method);
        return;
      }
    }
  }
label_05884da8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxSwitchLine
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchLine (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* fieldId, const MethodInfo* method);
// 0x5884a10

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxSwitchLine
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *fieldId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass56_0_o *__this;
  System_String_o *pSVar1;
  System_Action_T1__T2__o *__this_00;
  MethodInfo *in_R8;
  int32_t local_24;
  
  if (Il2CppMethodInitialized_075451c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass56_0_BuildSandboxSwitchLine_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass56_0);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-switch-");
    Il2CppMethodInitialized_075451c8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass56_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass56_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).fieldId = fieldId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).fieldId);
  pSVar1 = (__this->fields).fieldId;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(pSVar1,(MethodInfo *)fieldId);
  pSVar1 = System_Int32__ToString(&local_24,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("game-create-sandbox-switch-",pSVar1,(MethodInfo *)0x0);
  __this_00 = (System_Action_T1__T2__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi_int);
  System_Action_object__int____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass56_0_BuildSandboxSwitchLine_b__0
             ,(MethodInfo_4A89C60 *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFieldColumns
            (ui,pSVar1,1,(System_Action_AottgUi__int__o *)__this_00,in_R8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFieldColumns
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFieldColumns (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, int32_t count, System_Action_AottgUi__int__o* build, const MethodInfo* method);
// 0x5885dd0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFieldColumns
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,int32_t count,
               System_Action_AottgUi__int__o *build,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_075451c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass57_0_BuildFieldColumns_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass57_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_075451c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass57_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass57_0_o *)0x0) {
    (__this->fields).build = build;
    Il2CppCodeGenWriteBarrier(&(__this->fields).build);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).count = count;
    (__this->fields).split = (count - (count + 1 >> 0x1f)) + 1 >> 1;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass57_0_BuildFieldColumns_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    id_00 = (__this->fields).id;
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)method_00);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",__this_00,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldById
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldById (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, const MethodInfo* method);
// 0x5885f40

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldById
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t index;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *field;
  MethodInfo *pMVar2;
  MethodInfo *in_R8;
  
  pMVar2 = (MethodInfo *)id;
  if (Il2CppMethodInitialized_075451ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    Il2CppMethodInitialized_075451ca = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    field = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField(id,pMVar2);
  }
  else {
    field = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField(id,pMVar2);
  }
  if (field == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  index = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(id,pMVar2);
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxField(ui,field,index,true,in_R8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxField
// il2cpp: Gisketch_Aottg2UI_Game_AottgSandboxField_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField (System_String_o* id, const MethodInfo* method);
// 0x5884400
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5884453: cmp byte ptr [rip + 0x1cc0e7e], 0
// asm:   0x588445a: je 0x5884544

Gisketch_Aottg2UI_Game_AottgSandboxField_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxField(System_String_o *id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_AottgSandboxField__o *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  uint uVar4;
  VirtualInvokeData *pVVar5;
  Gisketch_Aottg2UI_Game_AottgSandboxField_o *pGVar6;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_075451cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_075451cb = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    uVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(id,method);
  }
  else {
    uVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex(id,method);
  }
  if ((int)uVar4 < 0) {
    return (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).cctor_finished_or_no_cctor
      == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    obj = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
  }
  else {
    obj = *(System_Collections_Generic_List_AottgSandboxField__o **)
           ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
           0x10);
  }
  if (obj == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = (Il2CppClass *)obj->klass;
  uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar7 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar8 = 0;
    do {
      if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar8) ==
          (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
        pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
        goto label_0588459a;
      }
      lVar8 = lVar8 + 0x10;
    } while (uVar7 * 0x10 != lVar8);
  }
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)obj,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_0588459a:
  pGVar6 = (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)
           (*pVVar5->methodPtr)(obj,(ulong)uVar4,pVVar5->method,pVVar5->methodPtr);
  return pGVar6;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxFieldIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex (System_String_o* id, const MethodInfo* method);
// 0x587a040
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587a068: cmp byte ptr [rip + 0x1ccb269], 0
// asm:   0x587a095: jmp 0x587a246

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldIndex
                  (System_String_o *id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_AottgSandboxField__o *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  int32_t iVar5;
  VirtualInvokeData *pVVar6;
  Il2CppObject *pIVar7;
  ulong uVar8;
  long lVar9;
  int32_t iVar10;
  
  if (Il2CppMethodInitialized_075451cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField);
    Il2CppMethodInitialized_075451cc = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    obj = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->SandboxFieldsInternal;
  }
  else {
    obj = *(System_Collections_Generic_List_AottgSandboxField__o **)
           ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
           0x10);
  }
  if (obj == (System_Collections_Generic_List_AottgSandboxField__o *)0x0) {
label_0587a246:
    ThrowNullReferenceException();
  }
  iVar10 = 0;
  do {
    pIVar2 = (Il2CppClass *)obj->klass;
    uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyCollection_AottgSandboxField__c **)
             ((long)&pIVar3->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField) {
          pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
          goto label_0587a193;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)obj,
                        (Il2CppClass *)
                        TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,0);
label_0587a193:
    iVar5 = (*pVVar6->methodPtr)((Il2CppObject *)obj,pVVar6->method);
    if (iVar5 <= iVar10) {
      return -1;
    }
    pIVar2 = (Il2CppClass *)obj->klass;
    uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyList_AottgSandboxField__c **)
             ((long)&pIVar3->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField) {
          pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
          goto label_0587a203;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)obj,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgSandboxField,0);
label_0587a203:
    pIVar7 = (*pVVar6->methodPtr)((Il2CppObject *)obj,iVar10,pVVar6->method);
    if (pIVar7 == (Il2CppObject *)0x0) goto label_0587a246;
    bVar4 = System_String__Equals_52ffe30((System_String_o *)pIVar7[1].klass,id,5,(MethodInfo *)0x0);
    if (bVar4) {
      return iVar10;
    }
    iVar10 = iVar10 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxFieldLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldLabel (Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, const MethodInfo* method);
// 0x58840b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldLabel
          (Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,MethodInfo *method)

{
  char cVar1;
  Gisketch_Aottg2UI_Game_AottgSandboxField_Fields *pGVar2;
  
  if (Il2CppMethodInitialized_075451cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075451cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058840d3;
label_0588412a:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452d9 != '\0') goto label_058840dc;
label_05884138:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452d9 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058840e8;
label_05884157:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588412a;
label_058840d3:
    if (Il2CppMethodInitialized_075452d9 == '\0') goto label_05884138;
label_058840dc:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05884157;
label_058840e8:
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames;
  }
  if (cVar1 == '\0') {
    if (field == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_05884180;
    pGVar2 = (Gisketch_Aottg2UI_Game_AottgSandboxField_Fields *)&(field->fields)._Label_k__BackingField;
  }
  else {
    if (field == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
label_05884180:
      ThrowNullReferenceException();
    }
    pGVar2 = &field->fields;
  }
  return pGVar2->_Id_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxAddons
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxAddons (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5881ce0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5881d12: cmp byte ptr [rip + 0x1cc35c1], 0
// asm:   0x5881d44: jmp 0x5882102

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxAddons
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  bool bVar3;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar4;
  Il2CppObject *arg0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  int index;
  int iVar7;
  System_Nullable_bool__Fields local_38 [2];
  int local_34;
  
  if (Il2CppMethodInitialized_075451ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-addons-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-addons");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Addons");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Addons.SelectedCount");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Addons.Empty");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-addons-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.addonSelector");
    Il2CppMethodInitialized_075451ce = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452da = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_sandboxAddonNames;
  }
  else {
    pSVar2 = *(System_String_array **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->static_fields +
              0x18);
  }
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length < 1) {
      iVar7 = 0;
    }
    else {
      index = 0;
      iVar7 = 0;
      do {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        bVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__IsSandboxAddonSelected(index,method);
        iVar7 = iVar7 + (uint)bVar3;
        index = index + 1;
      } while (index < (int)pSVar2->max_length);
    }
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__TextKey
                (ui,"GameCreate.Sandbox.Addons","text","game-create-sandbox-addons-title",(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_CurrentCulture((MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("GameCreate.Sandbox.Addons.SelectedCount",(MethodInfo *)0x0);
      local_34 = iVar7;
      arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
      pSVar4 = System_String__Format_5302da0
                         ((System_IFormatProvider_o *)provider,pSVar4,arg0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (ui,1,pSVar4,"gameCreate.open.addonSelector","game-create-sandbox-addons",(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"zoom",
                          (MethodInfo *)0x0);
      local_38[0].hasValue = false;
      local_38[0].value = false;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)local_38,(int)pSVar2->max_length != 0,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).enabled.fields = local_38[0];
        pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                           ("GameCreate.Sandbox.Addons",(MethodInfo *)0x0);
        (pGVar5->fields).formLabel = pSVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).formLabel);
        width = Gisketch_Aottg2UI_Code_AottgUi__Points(330.0,(MethodInfo *)0x0);
        minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(52.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (pGVar5->fields).layout = pGVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
        if (pSVar2->max_length == 0) {
          Gisketch_Aottg2UI_Code_AottgUi__TextKey
                    (ui,"GameCreate.Sandbox.Addons.Empty","text","game-create-sandbox-addons-empty",
                     (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildMultiplayerRoom
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMultiplayerRoom (Gisketch_Aottg2UI_Code_AottgUi_o* ui, bool showHeader, const MethodInfo* method);
// 0x58861d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588630f: jmp 0x588659f
// asm:   0x5886468: jmp 0x5886486

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMultiplayerRoom
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,bool showHeader,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0_o *__this;
  System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *pSVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar7;
  System_Func_AottgSandboxField__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar8;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  ulong uVar9;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  long lVar10;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_01;
  
  if (Il2CppMethodInitialized_075451cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Count_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_TakeWhile_AottgSandboxField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_AottgSandboxField_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildMultiplayerRoom_b__63_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass63_0_BuildMultiplayerRoom_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass63_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Room.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-divider");
    Il2CppMethodInitialized_075451cf = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass63_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_0754526d == '\0') goto label_05886322;
label_058862f9:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05886305;
label_05886341:
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields((MethodInfo *)method_00);
  }
  else {
    if (g_data_0754526d != '\0') goto label_058862f9;
label_05886322:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_0754526d = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05886341;
label_05886305:
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__BuildMultiplayerFields
                       ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass63_0_o *)0x0) {
    (__this->fields).fields = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).fields);
    pIVar1 = (Il2CppObject *)(__this->fields).fields;
    if (pIVar1 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar1->klass;
      uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar9 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_AottgSandboxField__c **)
               ((long)&pIVar3->interfaceType + lVar10) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField) {
            pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
            goto label_058863d1;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar9 * 0x10 != lVar10);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar1,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,0);
label_058863d1:
      iVar4 = (*pVVar6->methodPtr)(pIVar1,pVVar6->method);
      if (iVar4 != 0) {
        if (showHeader) {
          if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0588659f;
          Gisketch_Aottg2UI_Code_AottgUi__Separator
                    (ui,"game-create-room-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__TextKey
                    (ui,"GameCreate.Room.Title","header","game-create-room-title",
                     (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        pSVar8 = (System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).fields;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
          pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
          __this_00 = pGVar7->__9__63_0;
        }
        else {
          pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
          __this_00 = pGVar7->__9__63_0;
        }
        if (__this_00 == (System_Func_AottgSandboxField__bool__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c)->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
            pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
          }
          pIVar1 = (Il2CppObject *)pGVar7->__9;
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_AottgSandboxField_bool);
          System_Func_object__bool____ctor
                    ((System_Func_object__bool__o *)__this_00,pIVar1,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildMultiplayerRoom_b__63_0,
                     (MethodInfo_4F19300 *)0x0);
          pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
          pGVar7->__9__63_0 = __this_00;
          Il2CppCodeGenWriteBarrier(&pGVar7->__9__63_0);
        }
        pSVar8 = System_Linq_Enumerable__TakeWhile_object_
                           (pSVar8,(System_Func_TSource__bool__o *)__this_00,
                            (MethodInfo_34FDF50 *)
                            MethodInfo_System_Linq_Enumerable_TakeWhile_AottgSandboxField);
        iVar4 = System_Linq_Enumerable__Count_object_
                          (pSVar8,(MethodInfo_34E75C0 *)
                                  MethodInfo_System_Linq_Enumerable_Count_AottgSandboxField);
        (__this->fields).split = iVar4;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass63_0_BuildMultiplayerRoom_b__1
                   ,(MethodInfo_4A81BE0 *)0x0);
        method_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)method_01);
        if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0588659f;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",__this_01,"game-create-room-fields",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_0588659f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$ShowRoomField
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ShowRoomField (Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, const MethodInfo* method);
// 0x5886620
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58866df: jmp 0x5886744

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ShowRoomField
               (Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_075451d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMaxDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMinDistance");
    Il2CppMethodInitialized_075451d0 = '\x01';
  }
  if (field == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) goto label_05886744;
  bVar4 = System_String__op_Inequality
                    ((field->fields)._Id_k__BackingField,"misc.ProximityMinDistance",(MethodInfo *)0x0);
  if ((bVar4) &&
     (bVar4 = System_String__op_Inequality
                        ((field->fields)._Id_k__BackingField,"misc.ProximityMaxDistance",(MethodInfo *)0x0), bVar4))
  {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452cd != '\0') goto label_058866c3;
label_058866ef:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058866cf;
label_0588670e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_075452cd == '\0') goto label_058866ef;
label_058866c3:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_0588670e;
label_058866cf:
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  }
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).VoiceChat, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    return (pSVar3->fields)._value == 1;
  }
label_05886744:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildRoomSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomSettings (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587aaa0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomSettings
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075451d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Room.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-description");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-page-title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Room.Description");
    Il2CppMethodInitialized_075451d1 = '\x01';
  }
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Room.Title","header","game-create-room-page-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Room.Description","text","game-create-room-description",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    method_00 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildMultiplayerRoom(ui,false,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildRoomField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, int32_t index, const MethodInfo* method);
// 0x5886750

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildRoomField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,
               int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass66_0_o *__this;
  System_String_o *pSVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  int32_t local_1c;
  
  local_1c = index;
  if (Il2CppMethodInitialized_075451d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass66_0_BuildRoomField_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass66_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-room-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    Il2CppMethodInitialized_075451d2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass66_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass66_0_o *)0x0) {
    (__this->fields).field = field;
    Il2CppCodeGenWriteBarrier(&(__this->fields).field);
    pSVar1 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_52f0320("game-create-room-field-",pSVar1,(MethodInfo *)0x0);
    (__this->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass66_0_BuildRoomField_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    pSVar1 = System_String__Concat_52f0320((__this->fields).id,"-row",(MethodInfo *)0x0);
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)method_00);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",__this_00,pSVar1,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$VoiceChatLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__VoiceChatLabel (int32_t mode, const MethodInfo* method);
// 0x58868e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__VoiceChatLabel(int32_t mode,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if (Il2CppMethodInitialized_075451d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Proximity");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Global");
    Il2CppMethodInitialized_075451d3 = '\x01';
  }
  if (mode == 1) {
    ppSVar1 = &"Proximity";
  }
  else {
    ppSVar1 = &"None";
    if (mode == 0) {
      ppSVar1 = &"Global";
    }
  }
  return *ppSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$VoiceChatChoices
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__VoiceChatChoices (const MethodInfo* method);
// 0x5886940

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__VoiceChatChoices(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *values;
  System_String_array *pSVar2;
  System_String_array *labels;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075451d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_075451d4 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05886969;
label_05886abc:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452b3 != '\0') goto label_05886976;
label_05886ace:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Misc.VoiceChatOptions");
    g_data_075452b3 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05886abc;
label_05886969:
    if (g_data_075452b3 == '\0') goto label_05886ace;
label_05886976:
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleOptions("CreateGamePopup.Misc.VoiceChatOptions",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  values = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->VoiceChatValues;
  labels = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if (pSVar2 == (System_String_array *)0x0) {
label_05886b13:
    ThrowNullReferenceException();
  }
  if (2 < (uint)pSVar2->max_length) {
    if (labels == (System_String_array *)0x0) goto label_05886b13;
    if ((int)labels->max_length != 0) {
      labels->m_Items[0] = pSVar2->m_Items[2];
      Il2CppCodeGenWriteBarrier(labels->m_Items);
      if (((pSVar2->max_length & 0xfffffffe) != 0) && ((labels->max_length & 0xfffffffe) != 0)) {
        labels->m_Items[1] = pSVar2->m_Items[1];
        Il2CppCodeGenWriteBarrier(labels->m_Items + 1);
        if (((int)pSVar2->max_length != 0) && (2 < (uint)labels->max_length)) {
          labels->m_Items[2] = pSVar2->m_Items[0];
          Il2CppCodeGenWriteBarrier(labels->m_Items + 2);
          pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ChoiceOptions(values,labels,method_00);
          return pGVar3;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$TitanHealthModeChoices
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__TitanHealthModeChoices (const MethodInfo* method);
// 0x5886c70

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__TitanHealthModeChoices(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  System_String_array *values;
  System_String_array *labels;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075451d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Fixed");
    il2cpp_codegen_initialize_runtime_metadata(&"Scaled");
    Il2CppMethodInitialized_075451d5 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_05886c99;
label_05886e33:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452b2 != '\0') goto label_05886ca6;
label_05886e45:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CreateGamePopup.Titans.HealthOptions");
    g_data_075452b2 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05886e33;
label_05886c99:
    if (g_data_075452b2 == '\0') goto label_05886e45;
label_05886ca6:
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleOptions("CreateGamePopup.Titans.HealthOptions",(MethodInfo *)0x0);
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (values == (System_String_array *)0x0) goto label_05886e8a;
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "Fixed";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = "Scaled";
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      labels = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
      if (pSVar2 == (System_String_array *)0x0) {
label_05886e8a:
        ThrowNullReferenceException();
      }
      if ((pSVar2->max_length & 0xfffffffe) != 0) {
        if (labels == (System_String_array *)0x0) goto label_05886e8a;
        if ((int)labels->max_length != 0) {
          labels->m_Items[0] = pSVar2->m_Items[1];
          Il2CppCodeGenWriteBarrier(labels->m_Items);
          if ((2 < (uint)pSVar2->max_length) && ((labels->max_length & 0xfffffffe) != 0)) {
            labels->m_Items[1] = pSVar2->m_Items[2];
            Il2CppCodeGenWriteBarrier(labels->m_Items + 1);
            method_00 = extraout_RDX;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
              method_00 = extraout_RDX_00;
            }
            pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ChoiceOptions(values,labels,method_00);
            return pGVar3;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$ChoiceOptions
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ChoiceOptions (System_String_array* values, System_String_array* labels, const MethodInfo* method);
// 0x5886b80

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__ChoiceOptions
          (System_String_array *values,System_String_array *labels,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass72_0_o *__this;
  System_Func_T1__T2__TResult__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_075451d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_string_int_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass72_0_ChoiceOptions_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass72_0);
    Il2CppMethodInitialized_075451d6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass72_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass72_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).labels = labels;
  Il2CppCodeGenWriteBarrier(&(__this->fields).labels);
  __this_00 = (System_Func_T1__T2__TResult__o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Func_string_int_GisketchChoiceOptionDefinition);
  System_Func_object__int__object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass72_0_ChoiceOptions_b__0,
             (MethodInfo_4F20870 *)0x0);
  source = System_Linq_Enumerable__Select_object__object__34f63f0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)values,
                      (System_Func_TSource__int__TResult__o *)__this_00,
                      (MethodInfo_34F63F0 *)
                      MethodInfo_System_Linq_Enumerable_Select_string_GisketchChoiceOptionDefinition);
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_34FEA80 *)
                      MethodInfo_System_Linq_Enumerable_ToArray_GisketchChoiceOptionDefinition);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxCustom
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxCustom (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5881480
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58817ba: mov r14, rbx
// asm:   0x58817bd: jmp 0x58817ca

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxCustom
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar6;
  
  if (Il2CppMethodInitialized_075451d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__73_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__73_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__73_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Content.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Content.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-folders-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-preset-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-content-description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-content-title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Folders.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-folder-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-managers");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"subheader");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-custom-presets-title");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets");
    Il2CppMethodInitialized_075451d7 = '\x01';
  }
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Sandbox.Custom.Content.Title","header","game-create-sandbox-custom-content-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Sandbox.Custom.Content.Description","text","game-create-sandbox-custom-content-description",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  pSVar2 = "clear";
  pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  pSVar3 = pGVar6->__9__73_0;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar6->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__73_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar6->__9__73_0 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar6->__9__73_0);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,"Wrap",14.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,pSVar2,pSVar3,"game-create-sandbox-custom-managers",pGVar5,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Presets","subheader","game-create-sandbox-custom-presets-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  pSVar2 = "clear";
  pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  pSVar3 = pGVar6->__9__73_1;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar6->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__73_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar6->__9__73_1 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar6->__9__73_1);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,"Wrap",12.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,pSVar2,pSVar3,"game-create-sandbox-custom-preset-actions",pGVar5,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (ui,"GameCreate.Sandbox.Custom.Folders.Title","subheader","game-create-sandbox-custom-folders-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  pSVar2 = "clear";
  pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  pSVar3 = pGVar6->__9__73_2;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar6->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildSandboxCustom_b__73_2,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar6->__9__73_2 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar6->__9__73_2);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,"Wrap",12.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,pSVar2,pSVar3,"game-create-sandbox-custom-folder-actions",pGVar5,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFooter (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5886f00

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFooter
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075451d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildFooter_b__74_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-footer");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_075451d8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  style = "clear";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  __this = pGVar1->__9__74_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildFooter_b__74_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar1->__9__74_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__74_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,12.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this,"game-create-footer",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$CardGrid
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CardGrid (const MethodInfo* method);
// 0x5887100

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__CardGrid(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075451d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    Il2CppMethodInitialized_075451d9 = '\x01';
  }
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(320.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","Center","Stretch",(System_String_o *)0x0
                      ,"Wrap",20.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildLockedFields
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedFields (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x587f950
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587fb7c: jmp 0x587fc0c
// asm:   0x587fe52: cmp byte ptr [rip + 0x1cc5482], 0
// asm:   0x587fe59: je 0x587ffd7

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedFields
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint32_t uVar3;
  Settings_ExperienceRuleField_o *item;
  Settings_ExperienceRuleField_array *pSVar4;
  Il2CppObject *object;
  System_String_o *id;
  bool bVar5;
  uint uVar6;
  int32_t iVar7;
  System_Collections_Generic_List_ExperienceRuleField__o *__this;
  Settings_ExperienceRuleField_array *pSVar8;
  System_String_o *pSVar9;
  System_String_o *tooltip;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c_StaticFields *pGVar12;
  System_Action_GisketchActionContext__o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar13;
  uint uVar14;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *method_00;
  
  if (Il2CppMethodInitialized_075451da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildLockedFields_b__77_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Locked");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-show-locked");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.ShowLocked.Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.ShowLocked");
    Il2CppMethodInitialized_075451da = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__LockedFields((MethodInfo *)method_00);
  if (pSVar8 == (Settings_ExperienceRuleField_array *)0x0) goto label_0588002c;
  uVar6 = (uint)pSVar8->max_length;
  if (0 < (int)uVar6) {
    uVar14 = 0;
    do {
      if (uVar6 <= uVar14) {
        ThrowIndexOutOfRangeException();
      }
      item = pSVar8->m_Items[(int)uVar14];
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      if (item == (Settings_ExperienceRuleField_o *)0x0) goto label_0588002c;
      pMVar13 = (MethodInfo *)(item->fields).Id;
      iVar7 = System_Array__IndexOf_object_
                        ((System_Object_array *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->CoreFieldIds,
                         (Il2CppObject *)pMVar13,(MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string)
      ;
      if (iVar7 < 0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          if (g_data_075452ce == '\0') goto label_0587fb96;
label_0587fb63:
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
          goto label_0587fb6f;
label_0587fbb8:
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          cVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer;
        }
        else {
          if (g_data_075452ce != '\0') goto label_0587fb63;
label_0587fb96:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          g_data_075452ce = '\x01';
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
          goto label_0587fbb8;
label_0587fb6f:
          cVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer;
        }
        if (cVar2 != '\0') {
          pSVar9 = (item->fields).Id;
          if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen)->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
          }
          bVar5 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__IsRoomSettingId(pSVar9,pMVar13);
          if (bVar5) goto label_0587faf0;
        }
        pMVar13 = MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add;
        if (__this == (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) goto label_0588002c;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this->fields)._items;
        if (pSVar4 == (Settings_ExperienceRuleField_array *)0x0) goto label_0588002c;
        uVar6 = (__this->fields)._size;
        if (uVar6 < (uint)pSVar4->max_length) {
          (__this->fields)._size = uVar6 + 1;
          pSVar4->m_Items[(int)uVar6] = item;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar6);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
        }
      }
label_0587faf0:
      uVar14 = uVar14 + 1;
      uVar6 = (uint)pSVar8->max_length;
    } while ((int)uVar14 < (int)uVar6);
  }
  if (__this == (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) goto label_0588002c;
  if ((__this->fields)._size == 0) {
    return;
  }
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0588002c;
  Gisketch_Aottg2UI_Code_AottgUi__Separator
            (ui,"game-create-locked-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar9 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Configuration.ShowLocked",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (Il2CppMethodInitialized_075452db == '\0') goto label_0587ff00;
label_0587fce3:
    uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075452db != '\0') goto label_0587fce3;
label_0587ff00:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452db = '\x01';
    uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showLockedSettings;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
  }
  id = "game-create-show-locked";
  pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
  __this_00 = pGVar12->__9__77_0;
  if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c);
      pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    }
    object = (Il2CppObject *)pGVar12->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c_BuildLockedFields_b__77_0,
               (MethodInfo_4A803E0 *)0x0);
    pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c->static_fields;
    pGVar12->__9__77_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar12->__9__77_0);
    uVar3 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  tooltip = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Configuration.ShowLocked.Tooltip",(MethodInfo *)0x0)
  ;
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                      (ui,id,pSVar9,bVar5,__this_00,(System_String_o *)0x0,tooltip,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar10->fields).layout = pGVar11;
    Il2CppCodeGenWriteBarrier(&(pGVar10->fields).layout);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_075452db == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452db = '\x01';
      uVar3 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
              cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
      cVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showLockedSettings;
    }
    else {
      cVar2 = *(char *)((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->
                              static_fields + 0x22);
    }
    if (cVar2 == '\0') {
      return;
    }
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (ui,"GameCreate.Configuration.Locked","header","game-create-locked-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pMVar13 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      pMVar13 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedFieldColumns
              (ui,(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)__this,pMVar13);
    return;
  }
label_0588002c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildLockedFieldColumns
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedFieldColumns (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, const MethodInfo* method);
// 0x5887600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58876de: nop 

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedFieldColumns
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  int32_t iVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0_o *__this;
  VirtualInvokeData *pVVar4;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  ulong uVar5;
  long lVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_075451db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass78_0_BuildLockedFieldColumns_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass78_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-fields");
    Il2CppMethodInitialized_075451db = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass78_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass78_0_o *)0x0) {
    (__this->fields).fields = fields;
    Il2CppCodeGenWriteBarrier(&(__this->fields).fields);
    obj = (Il2CppObject *)(__this->fields).fields;
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField__c **)
               ((long)&pIVar2->interfaceType + lVar6) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField) {
            pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
            goto label_05887711;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,0);
label_05887711:
      iVar3 = (*pVVar4->methodPtr)(obj,pVVar4->method);
      (__this->fields).split = (iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass78_0_BuildLockedFieldColumns_b__0
                 ,(MethodInfo_4A81BE0 *)0x0);
      method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)method_00);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",__this_00,"game-create-locked-fields",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildLockedField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Settings_ExperienceRuleField_o* field, int32_t index, const MethodInfo* method);
// 0x58877d0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildLockedField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Settings_ExperienceRuleField_o *field,int32_t index,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass79_0_o *__this;
  System_String_o *pSVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  int32_t local_1c;
  
  local_1c = index;
  if (Il2CppMethodInitialized_075451dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass79_0_BuildLockedField_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass79_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-locked-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"-row");
    Il2CppMethodInitialized_075451dc = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass79_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass79_0_o *)0x0) {
    (__this->fields).field = field;
    Il2CppCodeGenWriteBarrier(&(__this->fields).field);
    pSVar1 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_52f0320("game-create-locked-field-",pSVar1,(MethodInfo *)0x0);
    (__this->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass79_0_BuildLockedField_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    pSVar1 = System_String__Concat_52f0320((__this->fields).id,"-row",(MethodInfo *)0x0);
    method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)method_00);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",__this_00,pSVar1,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$LockedFieldTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__LockedFieldTooltip (Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x5887960

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__LockedFieldTooltip
          (Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075451dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.LockedTooltip");
    Il2CppMethodInitialized_075451dd = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  method_00 = (MethodInfo *)0x0;
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("GameCreate.Configuration.LockedTooltip",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  value = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip(field,method_00);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return pSVar2;
  }
  pSVar2 = System_String__Concat_5301f10(value,"\n",pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceFields
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceFields (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, Settings_PresetDefinition_o* experience, const MethodInfo* method);
// 0x587f140
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x587f500: lea r13, [rip + 0x19f1e59]  ; TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField
// asm:   0x587f507: jmp 0x587f52e
// asm:   0x587f64d: nop dword ptr [rax]
// asm:   0x587f6e8: jmp 0x587f7f3
// asm:   0x587f76c: nop dword ptr [rax]
// asm:   0x587f7dc: jmp 0x587f7f3
// asm:   0x587f81f: nop 

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceFields
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,
               Settings_PresetDefinition_o *experience,MethodInfo *method)

{
  System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o **targetAddress;
  int32_t *piVar1;
  char cVar2;
  uint uVar3;
  System_String_array *array;
  System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *pSVar4;
  System_String_o *pSVar5;
  Settings_ExperienceRuleField_array *pSVar6;
  Il2CppClass *pIVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  MethodInfo *pMVar9;
  bool bVar10;
  int iVar11;
  int32_t iVar12;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0_o *__this;
  System_Collections_Generic_List_ExperienceRuleField__o *pSVar13;
  ulong uVar14;
  Settings_ExperienceRuleField_o *pSVar15;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  VirtualInvokeData *pVVar16;
  Il2CppObject *pIVar17;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar18;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  System_Collections_Generic_List_ExperienceUISection__o *sections;
  
  if (Il2CppMethodInitialized_075451de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_0_BuildExperienceFields_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-fields-divider");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-core-fields");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_075451de = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass81_0_o *)0x0) {
    targetAddress = &(__this->fields).fields;
    (__this->fields).fields = fields;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    }
    array = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->static_fields->CoreFieldIds;
    pSVar13 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar13,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
    (__this->fields).core = pSVar13;
    Il2CppCodeGenWriteBarrier(&(__this->fields).core);
    if (array != (System_String_array *)0x0) {
      if (0 < (int)array->max_length) {
        uVar14 = array->max_length & 0xffffffff;
        uVar21 = 0;
        pMVar18 = extraout_RDX;
        do {
          if (uVar14 <= uVar21) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4 = *targetAddress;
          pSVar5 = array->m_Items[uVar21];
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
            pMVar18 = extraout_RDX_01;
          }
          pSVar15 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FindField(pSVar4,pSVar5,pMVar18);
          pMVar9 = MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add;
          pMVar18 = extraout_RDX_02;
          if (pSVar15 != (Settings_ExperienceRuleField_o *)0x0) {
            pSVar13 = (__this->fields).core;
            if (pSVar13 == (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) goto label_0587f939;
            piVar1 = &(pSVar13->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (pSVar13->fields)._items;
            if (pSVar6 == (Settings_ExperienceRuleField_array *)0x0) goto label_0587f939;
            uVar19 = (pSVar13->fields)._size;
            if (uVar19 < (uint)pSVar6->max_length) {
              (pSVar13->fields)._size = uVar19 + 1;
              pSVar6->m_Items[(int)uVar19] = pSVar15;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar19);
              pMVar18 = extraout_RDX_03;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)pSVar15,
                         (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
              pMVar18 = extraout_RDX_00;
            }
          }
          uVar21 = uVar21 + 1;
          uVar19 = (uint)array->max_length;
          uVar14 = (ulong)uVar19;
        } while ((long)uVar21 < (long)(int)uVar19);
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass81_0_BuildExperienceFields_b__0
                 ,(MethodInfo_4A81BE0 *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","SpaceBetween","FlexStart",
                          (System_String_o *)0x0,"Wrap",32.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        uVar19 = 0;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",__this_00,"game-create-core-fields",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar13 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ExperienceRuleField);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar13,
                   (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_ExperienceRuleField_ctor);
        pIVar17 = (Il2CppObject *)*targetAddress;
        while (pIVar17 != (Il2CppObject *)0x0) {
          pIVar7 = pIVar17->klass;
          uVar14 = (ulong)(pIVar7->_2).interface_offsets_count;
          if (uVar14 != 0) {
            pIVar8 = (pIVar7->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(Il2CppClass **)((long)&pIVar8->interfaceType + lVar20) ==
                  (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField)
              {
                pVVar16 = pIVar7->vtable + *(int *)((long)&pIVar8->offset + lVar20);
                goto label_0587f593;
              }
              lVar20 = lVar20 + 0x10;
            } while (uVar14 * 0x10 != lVar20);
          }
          pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar17,(Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField
                               ,0);
label_0587f593:
          iVar11 = (*pVVar16->methodPtr)(pIVar17,pVVar16->method);
          if (iVar11 <= (int)uVar19) {
            if (pSVar13 != (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) {
              if ((pSVar13->fields)._size == 0) {
                return;
              }
              sections = (System_Collections_Generic_List_ExperienceUISection__o *)0x0;
              Gisketch_Aottg2UI_Code_AottgUi__Separator
                        (ui,"game-create-fields-divider",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0);
              if (experience != (Settings_PresetDefinition_o *)0x0) {
                sections = (experience->fields).UISections;
              }
              pSVar4 = *targetAddress;
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
              }
              Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSections
                        (ui,pSVar4,pSVar13,sections,(MethodInfo *)layout);
              return;
            }
            break;
          }
          pIVar17 = (Il2CppObject *)*targetAddress;
          if (pIVar17 == (Il2CppObject *)0x0) break;
          pIVar7 = pIVar17->klass;
          uVar14 = (ulong)(pIVar7->_2).interface_offsets_count;
          if (uVar14 != 0) {
            pIVar8 = (pIVar7->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c **)
                   ((long)&pIVar8->interfaceType + lVar20) ==
                  TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
                pVVar16 = pIVar7->vtable + *(int *)((long)&pIVar8->offset + lVar20);
                goto label_0587f603;
              }
              lVar20 = lVar20 + 0x10;
            } while (uVar14 * 0x10 != lVar20);
          }
          pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar17,(Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0
                              );
label_0587f603:
          pIVar17 = (*pVVar16->methodPtr)(pIVar17,uVar19,pVVar16->method);
          if (pIVar17 == (Il2CppObject *)0x0) break;
          if (*(char *)&pIVar17[2].monitor != '\0') {
            pIVar17 = (Il2CppObject *)*targetAddress;
            if (pIVar17 == (Il2CppObject *)0x0) break;
            pIVar7 = pIVar17->klass;
            uVar14 = (ulong)(pIVar7->_2).interface_offsets_count;
            if (uVar14 != 0) {
              pIVar8 = (pIVar7->_1).interfaceOffsets;
              lVar20 = 0;
              do {
                if (*(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c **)
                     ((long)&pIVar8->interfaceType + lVar20) ==
                    TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
                  pVVar16 = pIVar7->vtable + *(int *)((long)&pIVar8->offset + lVar20);
                  goto label_0587f681;
                }
                lVar20 = lVar20 + 0x10;
              } while (uVar14 * 0x10 != lVar20);
            }
            pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                                (pIVar17,(Il2CppClass *)
                                         TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField
                                 ,0);
label_0587f681:
            pIVar17 = (*pVVar16->methodPtr)(pIVar17,uVar19,pVVar16->method);
            if (pIVar17 == (Il2CppObject *)0x0) break;
            iVar12 = System_Array__IndexOf_object_
                               ((System_Object_array *)array,(Il2CppObject *)pIVar17[1].klass,
                                (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
            if (iVar12 < 0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                if (g_data_075452ce != '\0') goto label_0587f6cf;
label_0587f702:
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                g_data_075452ce = '\x01';
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor !=
                    0) goto label_0587f6db;
label_0587f724:
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                cVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer;
              }
              else {
                if (g_data_075452ce == '\0') goto label_0587f702;
label_0587f6cf:
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor ==
                    0) goto label_0587f724;
label_0587f6db:
                cVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer;
              }
              if (cVar2 != '\0') {
                pIVar17 = (Il2CppObject *)*targetAddress;
                if (pIVar17 == (Il2CppObject *)0x0) break;
                pIVar7 = pIVar17->klass;
                uVar14 = (ulong)(pIVar7->_2).interface_offsets_count;
                if (uVar14 != 0) {
                  pIVar8 = (pIVar7->_1).interfaceOffsets;
                  lVar20 = 0;
                  do {
                    if (*(Il2CppClass **)((long)&pIVar8->interfaceType + lVar20) ==
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField)
                    {
                      pVVar16 = pIVar7->vtable + *(int *)((long)&pIVar8->offset + lVar20);
                      goto label_0587f7a1;
                    }
                    lVar20 = lVar20 + 0x10;
                  } while (uVar14 * 0x10 != lVar20);
                }
                pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (pIVar17,(Il2CppClass *)
                                             TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField
                                     ,0);
label_0587f7a1:
                pMVar18 = (MethodInfo *)(ulong)uVar19;
                lVar20 = (*pVVar16->methodPtr)(pIVar17,pMVar18,pVVar16->method);
                if (lVar20 == 0) break;
                pSVar5 = *(System_String_o **)(lVar20 + 0x10);
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor ==
                    0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
                  bVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__IsRoomSettingId(pSVar5,pMVar18);
                }
                else {
                  bVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__IsRoomSettingId(pSVar5,pMVar18);
                }
                if (bVar10) goto label_0587f520;
              }
              pIVar17 = (Il2CppObject *)*targetAddress;
              if (pIVar17 == (Il2CppObject *)0x0) break;
              pIVar7 = pIVar17->klass;
              uVar14 = (ulong)(pIVar7->_2).interface_offsets_count;
              if (uVar14 != 0) {
                pIVar8 = (pIVar7->_1).interfaceOffsets;
                lVar20 = 0;
                do {
                  if (*(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c **)
                       ((long)&pIVar8->interfaceType + lVar20) ==
                      TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
                    pVVar16 = pIVar7->vtable + *(int *)((long)&pIVar8->offset + lVar20);
                    goto label_0587f851;
                  }
                  lVar20 = lVar20 + 0x10;
                } while (uVar14 * 0x10 != lVar20);
              }
              pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                                  (pIVar17,(Il2CppClass *)
                                           TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField
                                   ,0);
label_0587f851:
              pSVar15 = (Settings_ExperienceRuleField_o *)
                        (*pVVar16->methodPtr)(pIVar17,uVar19,pVVar16->method);
              pMVar18 = MethodInfo_System_Collections_Generic_List_ExperienceRuleField_Add;
              if (pSVar13 == (System_Collections_Generic_List_ExperienceRuleField__o *)0x0) break;
              piVar1 = &(pSVar13->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (pSVar13->fields)._items;
              if (pSVar6 == (Settings_ExperienceRuleField_array *)0x0) break;
              uVar3 = (pSVar13->fields)._size;
              if (uVar3 < (uint)pSVar6->max_length) {
                (pSVar13->fields)._size = uVar3 + 1;
                pSVar6->m_Items[(int)uVar3] = pSVar15;
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)pSVar15,
                           (MethodInfo_395D230 *)pMVar18->klass->rgctx_data[0xe].method);
              }
            }
          }
label_0587f520:
          uVar19 = uVar19 + 1;
          pIVar17 = (Il2CppObject *)*targetAddress;
        }
      }
    }
  }
label_0587f939:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceModeField
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceModeField (Gisketch_Aottg2UI_Code_AottgUi_o* ui, Settings_ExperienceRuleField_o* field, int32_t index, const MethodInfo* method);
// 0x5888120
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58882b9: jmp 0x58882df
// asm:   0x5888478: jmp 0x588828e

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceModeField
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,Settings_ExperienceRuleField_o *field,int32_t index,
               MethodInfo *method)

{
  uint32_t uVar1;
  MethodInfo *pMVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o *tooltip;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  System_String_o *icon;
  bool value;
  System_Nullable_bool__Fields local_40 [2];
  int32_t local_3c;
  System_String_o *local_38;
  
  local_3c = index;
  if (Il2CppMethodInitialized_075451df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-field-");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.modeSelector");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_075451df = '\x01';
  }
  pMVar2 = (MethodInfo *)System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_52f0320("game-create-field-",(System_String_o *)pMVar2,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions(field,pMVar2);
  if (field != (Settings_ExperienceRuleField_o *)0x0) {
    pMVar2 = (MethodInfo *)
             Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel((field->fields).Id,pMVar2);
    pSVar5 = System_String__Concat_52f0320(pSVar3,"-label",(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      value = false;
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (ui,(System_String_o *)pMVar2,"text",pSVar5,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      local_38 = pSVar3;
      if ((field->fields).Editable == false) {
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (pSVar4 == (System_String_array *)0x0) goto label_0588847d;
        value = 1 < (int)pSVar4->max_length;
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue(field,pMVar2);
      if (value == false) {
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
        pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      else {
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
        pSVar5 = "gameCreate.open.modeSelector";
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      tooltip = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip(field,pMVar2);
      if (value == false) {
        icon = (System_String_o *)0x0;
      }
      else {
        icon = "zoom";
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (ui,1,pSVar3,pSVar5,local_38,tooltip,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
      local_40[0].hasValue = false;
      local_40[0].value = false;
      pMVar2 = (MethodInfo *)(ulong)value;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o *)local_40,value,
                 (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).enabled.fields = local_40[0];
        pSVar3 = (field->fields).Id;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldLabel(pSVar3,pMVar2);
        (pGVar6->fields).formLabel = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).formLabel);
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(52.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        (pGVar6->fields).layout = pGVar7;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).layout);
        return;
      }
    }
  }
label_0588847d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceScore
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceScore (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5888490
// eh: try 0x5888544..0x588890a -> pad 0x5888809 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5888a30..0x5888a57 -> pad 0x5888a57 (+1 call sites) cleanup
// eh: try 0x5888a5c..0x5888a61 -> pad 0x5888a69 catch (...) [compiler noexcept guard]
// asm: 150 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58884c4: cmp byte ptr [rip + 0x1cbce02], 0
// asm:   0x5888566: jmp 0x588869e
// asm:   0x5888805: jmp 0x588881b
// asm:   0x5888807: jmp 0x588881b
// asm:   0x5888809: jmp 0x588881b
// asm:   0x588880b: jmp 0x588881b
// asm:   0x588880d: jmp 0x588881b
// asm:   0x588880f: jmp 0x588881b
// asm:   0x5888811: jmp 0x588881b
// asm:   0x5888813: jmp 0x588881b
// asm:   0x5888815: jmp 0x588881b
// asm:   0x5888817: jmp 0x588881b
// asm:   0x5888819: jmp 0x588881b
// asm:   0x588881b: mov r14, rdx
// asm:   0x588881e: mov r15, rax
// asm:   0x5888821: cmp r14d, 1
// asm:   0x5888825: jne 0x5888a61
// asm:   0x588882b: mov rdi, r15
// asm:   0x588882e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5888833: mov r12, rax
// asm:   0x5888836: mov r15, qword ptr [rax]
// asm:   0x5888839: lea rdi, [rip + 0x19ef880]  ; TypeInfo_System_Exception
// asm:   0x5888840: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5888845: test r15, r15
// asm:   0x5888848: je 0x5888a35
// asm:   0x588884e: mov rcx, qword ptr [r15]
// asm:   0x5888851: movzx edx, byte ptr [rax + 0x130]
// asm:   0x5888858: cmp byte ptr [rcx + 0x130], dl
// asm:   0x588885e: jb 0x5888a35
// asm:   0x5888864: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x588886b: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x5888870: jne 0x5888a35
// asm:   0x5888876: lea rdi, [rip + 0x19f0eab]  ; TypeInfo_System_IO_IOException
// asm:   0x588887d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5888882: mov rcx, qword ptr [r15]
// asm:   0x5888885: movzx edx, byte ptr [rax + 0x130]
// asm:   0x588888c: cmp byte ptr [rcx + 0x130], dl
// asm:   0x5888892: jb 0x58888a6
// asm:   0x5888894: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x588889b: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x58888a0: je 0x5888932
// asm:   0x58888a6: lea rdi, [rip + 0x19f57eb]  ; TypeInfo_System_UnauthorizedAccessException
// asm:   0x58888ad: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x58888b2: mov rcx, qword ptr [r15]
// asm:   0x58888b5: movzx edx, byte ptr [rax + 0x130]
// asm:   0x58888bc: cmp byte ptr [rcx + 0x130], dl
// asm:   0x58888c2: jb 0x58888d2
// asm:   0x58888c4: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x58888cb: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x58888d0: je 0x5888932
// asm:   0x58888d2: lea rdi, [rip + 0x19ecfa7]  ; TypeInfo_System_ArgumentException
// asm:   0x58888d9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x58888de: mov rcx, qword ptr [r15]
// asm:   0x58888e1: movzx edx, byte ptr [rax + 0x130]
// asm:   0x58888e8: cmp byte ptr [rcx + 0x130], dl
// asm:   0x58888ee: jb 0x58888fe
// asm:   0x58888f0: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x58888f7: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x58888fc: je 0x5888932
// asm:   0x58888fe: lea rdi, [rip + 0x19f167b]  ; TypeInfo_System_InvalidOperationException
// asm:   0x5888905: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x588890a: mov rcx, qword ptr [r15]
// asm:   0x588890d: movzx edx, byte ptr [rax + 0x130]
// asm:   0x5888914: cmp byte ptr [rcx + 0x130], dl
// asm:   0x588891a: jb 0x5888a35
// asm:   0x5888920: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x5888927: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x588892c: jne 0x5888a35
// asm:   0x5888932: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5888937: mov rax, qword ptr [r15]
// asm:   0x588893a: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5888941: mov rdi, r15
// asm:   0x5888944: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x588894a: mov rbx, rax
// asm:   0x588894d: lea rdi, [rip + 0x1a4fe64]  ; "Could not load experience score: "
// asm:   0x5888954: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5888959: mov rdi, rax
// asm:   0x588895c: mov rsi, rbx
// asm:   0x588895f: xor edx, edx
// asm:   0x5888961: call 0x53f0320  ; System_String__Concat()
// asm:   0x5888966: mov rbx, rax
// asm:   0x5888969: lea rdi, [rip + 0x19eecd8]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5888970: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5888975: cmp dword ptr [rax + 0xe4], 0
// asm:   0x588897c: jne 0x5888986
// asm:   0x588897e: mov rdi, rax
// asm:   0x5888981: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5888986: mov rdi, rbx
// asm:   0x5888989: xor esi, esi
// asm:   0x588898b: call 0x69c4c70  ; UnityEngine_Debug__LogError()
// asm:   0x5888990: lea rdi, [rip + 0x19ec9d1]  ; TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale
// asm:   0x5888997: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x588899c: cmp dword ptr [rax + 0xe4], 0
// asm:   0x58889a3: jne 0x58889ad
// asm:   0x58889a5: mov rdi, rax
// asm:   0x58889a8: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x58889ad: lea rdi, [rip + 0x1a53eec]  ; "GameCreate.Configuration.ScoreError"
// asm:   0x58889b4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x58889b9: mov rdi, rax
// asm:   0x58889bc: xor esi, esi
// asm:   0x58889be: call 0x5359cc0  ; Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text()
// asm:   0x58889c3: mov rbx, rax
// asm:   0x58889c6: mov rax, qword ptr [r15]
// asm:   0x58889c9: mov rsi, qword ptr [rax + 0x190]
// asm:   0x58889d0: mov rdi, r15
// asm:   0x58889d3: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x58889d9: mov rdi, rbx
// asm:   0x58889dc: mov rsi, rax
// asm:   0x58889df: xor edx, edx
// asm:   0x58889e1: call 0x53f51c0  ; System_String__Format()
// asm:   0x58889e6: mov rbx, rax
// asm:   0x58889e9: lea rdi, [rip + 0x1a6d550]  ; "game-create-score-error"
// asm:   0x58889f0: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x58889f5: mov rdi, r13
// asm:   0x58889f8: mov esi, 3
// asm:   0x58889fd: mov rdx, rbx
// asm:   0x5888a00: mov rcx, rax
// asm:   0x5888a03: xor r8d, r8d
// asm:   0x5888a06: add rsp, 0x10
// asm:   0x5888a0a: pop rbx
// asm:   0x5888a0b: pop r12
// asm:   0x5888a0d: pop r13
// asm:   0x5888a0f: pop r14
// asm:   0x5888a11: pop r15
// asm:   0x5888a13: jmp 0x5368400  ; Gisketch_Aottg2UI_Code_AottgUi__Callout()
// asm:   0x5888a18: jmp 0x5888a20
// asm:   0x5888a1a: jmp 0x5888a20
// asm:   0x5888a1c: jmp 0x5888a20
// asm:   0x5888a1e: jmp 0x5888a20
// asm:   0x5888a20: mov r15, rax
// asm:   0x5888a23: cmp edx, r14d
// asm:   0x5888a26: jne 0x5888a5c
// asm:   0x5888a28: mov rdi, r15
// asm:   0x5888a2b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5888a30: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5888a35: mov edi, 8
// asm:   0x5888a3a: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5888a3f: mov rcx, qword ptr [r12]
// asm:   0x5888a43: mov qword ptr [rax], rcx
// asm:   0x5888a46: lea rsi, [rip + 0x15a4ab3]
// asm:   0x5888a4d: mov rdi, rax
// asm:   0x5888a50: xor edx, edx
// asm:   0x5888a52: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5888a57: jmp 0x5888a59
// asm:   0x5888a59: mov r15, rax
// asm:   0x5888a5c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5888a61: mov rdi, r15
// asm:   0x5888a64: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5888a69: mov rdi, rax
// asm:   0x5888a6c: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceScore
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_ExperienceScoreStore_o *__this;
  bool bVar2;
  System_String_o *pSVar3;
  Settings_ExperienceScoreRecord_o *pSVar4;
  System_Globalization_CultureInfo_o *provider;
  System_String_o **ppSVar5;
  
  if (Il2CppMethodInitialized_075451e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceScoreStore);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.Score");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-score");
    il2cpp_codegen_initialize_runtime_metadata(&"subtext");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.ScoreLower");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-score-direction");
    il2cpp_codegen_initialize_runtime_metadata(&"0.##");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.ScoreHigher");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-score-label");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Configuration.NoScore");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_075451e0 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_075452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075452cd = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = Settings_ExperienceIdentity__HasScoring
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                     _Working_k__BackingField,(MethodInfo *)0x0);
  if (bVar2) {
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (ui,"GameCreate.Configuration.Score","subtext","game-create-score-label",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_075452cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_075452cd = '\x01';
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    pSVar3 = Settings_ExperienceIdentity__GetId
                       (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                        _Working_k__BackingField,(MethodInfo *)0x0);
    if ((TypeInfo_Settings_ExperienceScoreStore->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceScoreStore);
    }
    __this = TypeInfo_Settings_ExperienceScoreStore->static_fields->Local;
    if (__this == (Settings_ExperienceScoreStore_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = Settings_ExperienceScoreStore__Get(__this,pSVar3,(MethodInfo *)0x0);
    if (pSVar4 == (Settings_ExperienceScoreRecord_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__TextKey
                (ui,"GameCreate.Configuration.NoScore","text","game-create-score",(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar3 = System_Single__ToString_54d0ad0
                         (&(pSVar4->fields).Score,"0.##",(System_IFormatProvider_o *)provider,
                          (MethodInfo *)0x0);
      pSVar3 = System_String__Concat_5301f10
                         (pSVar3," ",(pSVar4->fields).Unit,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (ui,pSVar3,"header","game-create-score",(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((pSVar4->fields).LowerIsBetter == false) {
        ppSVar5 = &"GameCreate.Configuration.ScoreHigher";
      }
      else {
        ppSVar5 = &"GameCreate.Configuration.ScoreLower";
      }
      Gisketch_Aottg2UI_Code_AottgUi__TextKey
                (ui,*ppSVar5,"subtext","game-create-score-direction",(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildVariantSelector
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildVariantSelector (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5888a80

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildVariantSelector
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass84_0_o *__this;
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *pGVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_075451e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass84_0_BuildVariantSelector_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass84_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-variants-row");
    Il2CppMethodInitialized_075451e1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass84_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_VariantNames((MethodInfo *)pGVar3);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass84_0_o *)0x0) {
    (__this->fields).variants = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).variants);
    pSVar1 = (__this->fields).variants;
    if (pSVar1 != (System_String_array *)0x0) {
      if (pSVar1->max_length != 0) {
        pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_SelectedVariant((MethodInfo *)pGVar3);
        (__this->fields).selected = pSVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields).selected);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass84_0_BuildVariantSelector_b__0
                   ,(MethodInfo_4A81BE0 *)0x0);
        method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
        }
        layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout((MethodInfo *)method_00);
        if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05888c05;
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",__this_00,"game-create-variants-row",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_05888c05:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$IsRoomSettingId
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__IsRoomSettingId (System_String_o* id, const MethodInfo* method);
// 0x58874b0

bool Gisketch_Aottg2UI_Game_AottgGameCreateScreen__IsRoomSettingId(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_075451e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AccountRequired");
    il2cpp_codegen_initialize_runtime_metadata(&"general.RoomName");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.Motd");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.AllowVoteKicking");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.VoiceChat");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMaxDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"misc.ProximityMinDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"general.MaxPlayers");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Password");
    Il2CppMethodInitialized_075451e2 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(id,(MethodInfo *)0x0);
  if (uVar2 < 0x9ab36970) {
    if (uVar2 < 0x33964669) {
      if (uVar2 == 0x28266215) {
        ppSVar3 = &"misc.Motd";
      }
      else {
        if (uVar2 != 0x33964668) {
          return false;
        }
        ppSVar3 = &"misc.AllowVoteKicking";
      }
    }
    else if (uVar2 == 0x9963f387) {
      ppSVar3 = &"misc.VoiceChat";
    }
    else {
      if (uVar2 != 0x9ab3696f) {
        return false;
      }
      ppSVar3 = &"misc.ProximityMaxDistance";
    }
  }
  else if (uVar2 < 0xca5439de) {
    if (uVar2 == 0xa8663a56) {
      ppSVar3 = &"general.Password";
    }
    else {
      if (uVar2 != 0xca5439dd) {
        return false;
      }
      ppSVar3 = &"misc.ProximityMinDistance";
    }
  }
  else if (uVar2 == 0xd1f8e235) {
    ppSVar3 = &"misc.AccountRequired";
  }
  else if (uVar2 == 0xeaf83b9f) {
    ppSVar3 = &"general.MaxPlayers";
  }
  else {
    if (uVar2 != 0xd6b630db) {
      return false;
    }
    ppSVar3 = &"general.RoomName";
  }
  bVar1 = System_String__op_Equality(id,*ppSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceSections
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSections (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* allFields, System_Collections_Generic_List_ExperienceRuleField__o* remaining, System_Collections_Generic_List_ExperienceUISection__o* sections, const MethodInfo* method);
// 0x5887c20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5887d6a: cmp byte ptr [rip + 0x1cbab15], 0
// asm:   0x5887d71: je 0x58880d1

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSections
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *allFields,
               System_Collections_Generic_List_ExperienceRuleField__o *remaining,
               System_Collections_Generic_List_ExperienceUISection__o *sections,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_0_o *__this_00;
  System_Collections_Generic_HashSet_string__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_1_o *__this_02;
  Settings_ExperienceUISection_o *pSVar4;
  System_Func_ExperienceRuleField__bool__o *pSVar5;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  System_Collections_Generic_List_TSource__o *pSVar7;
  Settings_ExperienceRuleField_o *pSVar8;
  System_String_o *pSVar9;
  int iVar10;
  MethodInfo *in_R9;
  int32_t iVar11;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_1_Fields *targetAddress;
  
  if (Il2CppMethodInitialized_075451e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_ExperienceRuleField_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceUISection_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceUISection_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass86_0_BuildExperienceSections_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass86_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass86_1_BuildExperienceSections_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass86_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Settings");
    Il2CppMethodInitialized_075451e3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass86_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_0_o *)0x0) {
    (__this_00->fields).assigned = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).assigned);
    if ((sections != (System_Collections_Generic_List_ExperienceUISection__o *)0x0) &&
       (0 < (sections->fields)._size)) {
      iVar11 = 0;
      do {
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass86_1);
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        pSVar4 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)sections,iVar11,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_ExperienceUISection_get_Item);
        if (__this_02 == (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass86_1_o *)0x0)
        goto label_05888110;
        targetAddress = &__this_02->fields;
        (__this_02->fields).section = pSVar4;
        Il2CppCodeGenWriteBarrier(&targetAddress->section);
        pSVar4 = (__this_02->fields).section;
        if (((pSVar4 != (Settings_ExperienceUISection_o *)0x0) &&
            (pSVar2 = (pSVar4->fields).Settings, pSVar2 != (System_Collections_Generic_List_string__o *)0x0))
           && ((pSVar2->fields)._size != 0)) {
          pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ExperienceRuleField_bool);
          System_Func_object__bool____ctor
                    ((System_Func_object__bool__o *)pSVar5,(Il2CppObject *)__this_02,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass86_1_BuildExperienceSections_b__1
                     ,(MethodInfo_4F19300 *)0x0);
          pSVar6 = System_Linq_Enumerable__Where_object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)remaining,
                              (System_Func_TSource__bool__o *)pSVar5,
                              (MethodInfo_3502B70 *)
                              MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
          pSVar7 = System_Linq_Enumerable__ToList_object_
                             (pSVar6,(MethodInfo_35011B0 *)
                                     MethodInfo_System_Linq_Enumerable_ToList_ExperienceRuleField);
          if (pSVar7 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_05888110;
          iVar10 = (pSVar7->fields)._size;
          if (iVar10 != 0) {
            if (0 < iVar10) {
              iVar10 = 0;
              do {
                __this = (System_Collections_Generic_HashSet_object__o *)(__this_00->fields).assigned;
                pSVar8 = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar7,iVar10,
                                    (MethodInfo_395CF20 *)
                                    MethodInfo_System_Collections_Generic_List_ExperienceRuleField_get_Item);
                if ((pSVar8 == (Settings_ExperienceRuleField_o *)0x0) ||
                   (__this == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_05888110;
                System_Collections_Generic_HashSet_object___Add
                          (__this,(Il2CppObject *)(pSVar8->fields).Id,
                           (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
                iVar10 = iVar10 + 1;
              } while (iVar10 < (pSVar7->fields)._size);
            }
            if (targetAddress->section == (Settings_ExperienceUISection_o *)0x0) goto label_05888110;
            bVar3 = System_String__IsNullOrWhiteSpace((targetAddress->section->fields).Name,(MethodInfo *)0x0)
            ;
            if (bVar3) {
              if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
              }
              pSVar9 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                                 ("Common.Settings",(MethodInfo *)0x0);
            }
            else {
              if (targetAddress->section == (Settings_ExperienceUISection_o *)0x0) goto label_05888110;
              pSVar9 = (targetAddress->section->fields).Name;
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
            }
            Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSection
                      (ui,allFields,(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)pSVar7,
                       pSVar9,iVar11,in_R9);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (sections->fields)._size);
    }
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_ExperienceRuleField_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar5,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass86_0_BuildExperienceSections_b__0
               ,(MethodInfo_4F19300 *)0x0);
    pSVar6 = System_Linq_Enumerable__Where_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)remaining,
                        (System_Func_TSource__bool__o *)pSVar5,
                        (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_ExperienceRuleField);
    pSVar7 = System_Linq_Enumerable__ToList_object_
                       (pSVar6,(MethodInfo_35011B0 *)
                               MethodInfo_System_Linq_Enumerable_ToList_ExperienceRuleField);
    if (pSVar7 != (System_Collections_Generic_List_TSource__o *)0x0) {
      if ((pSVar7->fields)._size < 1) {
        return;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      iVar11 = 0;
      pSVar9 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("Common.Settings",(MethodInfo *)0x0);
      if (sections != (System_Collections_Generic_List_ExperienceUISection__o *)0x0) {
        iVar11 = (sections->fields)._size;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSection
                (ui,allFields,(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)pSVar7,pSVar9
                 ,iVar11,in_R9);
      return;
    }
  }
label_05888110:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildExperienceSection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSection (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* allFields, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, System_String_o* title, int32_t sectionIndex, const MethodInfo* method);
// 0x5888fb0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildExperienceSection
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *allFields,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,System_String_o *title,
               int32_t sectionIndex,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  int32_t local_2c;
  
  local_2c = sectionIndex;
  if (Il2CppMethodInitialized_075451e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-section-");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_075451e4 = '\x01';
  }
  pSVar1 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10("game-create-section-",pSVar1,"-title",(MethodInfo *)0x0)
  ;
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (ui,title,"header",pSVar1,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("game-create-section-",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFieldColumns_57890c0
            (ui,allFields,fields,pSVar1,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildFieldColumns
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFieldColumns (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* allFields, System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, System_String_o* id, const MethodInfo* method);
// 0x58890c0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildFieldColumns_57890c0
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *allFields,
               System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,System_String_o *id,
               MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  int32_t iVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0_o *__this;
  VirtualInvokeData *pVVar4;
  System_Action_AottgUi__o *__this_00;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  ulong uVar5;
  long lVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_075451e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass88_0_BuildFieldColumns_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass88_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"-fields");
    Il2CppMethodInitialized_075451e5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass88_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass88_0_o *)0x0) {
    (__this->fields).fields = fields;
    Il2CppCodeGenWriteBarrier(&(__this->fields).fields);
    (__this->fields).allFields = allFields;
    Il2CppCodeGenWriteBarrier(&(__this->fields).allFields);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    obj = (Il2CppObject *)(__this->fields).fields;
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField__c **)
               ((long)&pIVar2->interfaceType + lVar6) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField) {
            pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
            goto label_05889201;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,0);
label_05889201:
      iVar3 = (*pVVar4->methodPtr)(obj,pVVar4->method);
      (__this->fields).split = (iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass88_0_BuildFieldColumns_b__0
                 ,(MethodInfo_4A81BE0 *)0x0);
      id_00 = System_String__Concat_52f0320((__this->fields).id,"-fields",(MethodInfo *)0x0);
      method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)method_00);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",__this_00,id_00,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FindField
// il2cpp: Settings_ExperienceRuleField_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FindField (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, System_String_o* id, const MethodInfo* method);
// 0x5887a40

Settings_ExperienceRuleField_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FindField
          (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,System_String_o *id,
          MethodInfo *method)

{
  System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  Il2CppObject *pIVar6;
  Settings_ExperienceRuleField_o *pSVar7;
  ulong uVar8;
  long lVar9;
  int32_t iVar10;
  
  if (Il2CppMethodInitialized_075451e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField);
    Il2CppMethodInitialized_075451e6 = '\x01';
  }
  if (fields == (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *)0x0) {
label_05887c15:
    ThrowNullReferenceException();
  }
  iVar10 = 0;
  do {
    pSVar1 = fields->klass;
    uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField__c **)
             ((long)&pIVar2->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField) {
          pVVar5 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_05887af3;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)fields,
                        (Il2CppClass *)
                        TypeInfo_System_Collections_Generic_IReadOnlyCollection_ExperienceRuleField,0);
label_05887af3:
    iVar4 = (*pVVar5->methodPtr)((Il2CppObject *)fields,pVVar5->method);
    if (iVar4 <= iVar10) {
      return (Settings_ExperienceRuleField_o *)0x0;
    }
    pSVar1 = fields->klass;
    uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c **)
             ((long)&pIVar2->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
          pVVar5 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
          goto label_05887b63;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)fields,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0
                       );
label_05887b63:
    pIVar6 = (*pVVar5->methodPtr)((Il2CppObject *)fields,iVar10,pVVar5->method);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05887c15;
    bVar3 = System_String__Equals_52ffe30((System_String_o *)pIVar6[1].klass,id,5,(MethodInfo *)0x0);
    if (bVar3) break;
    iVar10 = iVar10 + 1;
  } while( true );
  pSVar1 = fields->klass;
  uVar8 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar8 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar9 = 0;
    do {
      if (*(System_Collections_Generic_IReadOnlyList_ExperienceRuleField__c **)
           ((long)&pIVar2->interfaceType + lVar9) ==
          TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField) {
        pVVar5 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
        goto label_05887bfd;
      }
      lVar9 = lVar9 + 0x10;
    } while (uVar8 * 0x10 != lVar9);
  }
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)fields,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_ExperienceRuleField,0);
label_05887bfd:
  pSVar7 = (Settings_ExperienceRuleField_o *)
           (*pVVar5->methodPtr)((Il2CppObject *)fields,iVar10,pVVar5->method);
  return pSVar7;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldIndex (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o* fields, Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x58892d0

int32_t Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldIndex
                  (System_Collections_Generic_IReadOnlyList_ExperienceRuleField__o *fields,
                  Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  Settings_ExperienceRuleField_array *pSVar3;
  int iVar4;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075451e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075451e7 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession =
       (Gisketch_Aottg2UI_Game_AottgGameCreateSession_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)klass);
  }
  else {
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__VisibleFields((MethodInfo *)klass);
  }
  if (pSVar3 == (Settings_ExperienceRuleField_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (int)pSVar3->max_length;
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      if (pSVar3->m_Items[iVar4] == field) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  return -1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BuildSandboxFieldColumns
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldColumns (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Collections_Generic_IReadOnlyList_AottgSandboxField__o* fields, const MethodInfo* method);
// 0x58836b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588378e: nop 

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BuildSandboxFieldColumns
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               System_Collections_Generic_IReadOnlyList_AottgSandboxField__o *fields,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  int32_t iVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0_o *__this;
  VirtualInvokeData *pVVar4;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  ulong uVar5;
  long lVar6;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_075451e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass91_0_BuildSandboxFieldColumns_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass91_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-sandbox-fields");
    Il2CppMethodInitialized_075451e8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass91_0
                     );
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateScreen___c__DisplayClass91_0_o *)0x0) {
    (__this->fields).fields = fields;
    Il2CppCodeGenWriteBarrier(&(__this->fields).fields);
    obj = (Il2CppObject *)(__this->fields).fields;
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_AottgSandboxField__c **)
               ((long)&pIVar2->interfaceType + lVar6) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField) {
            pVVar4 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
            goto label_058837c1;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgSandboxField,0);
label_058837c1:
      iVar3 = (*pVVar4->methodPtr)(obj,pVVar4->method);
      (__this->fields).split = (iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c__DisplayClass91_0_BuildSandboxFieldColumns_b__0
                 ,(MethodInfo_4A81BE0 *)0x0);
      method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      layout = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout((MethodInfo *)method_00);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",__this_00,"game-create-sandbox-fields",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldColumnsLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout (const MethodInfo* method);
// 0x5884dc0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnsLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075451e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_075451e9 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,"Wrap",32.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldColumnLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout (const MethodInfo* method);
// 0x5889620

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldColumnLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075451ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075451ea = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(47.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldRowLabel
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLabel (Gisketch_Aottg2UI_Code_AottgUi_o* row, System_String_o* text, System_String_o* style, System_String_o* id, const MethodInfo* method);
// 0x5889710

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLabel
               (Gisketch_Aottg2UI_Code_AottgUi_o *row,System_String_o *text,System_String_o *style,
               System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075451eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_075451eb = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (row,text,style,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(96.0,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(45.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldRowLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout (const MethodInfo* method);
// 0x5881390

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldRowLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075451ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    Il2CppMethodInitialized_075451ec = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,"Wrap",14.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,7.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldControlLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* control, const MethodInfo* method);
// 0x5889810

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *control,MethodInfo *method)

{
  bool leftAligned;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075451ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
    Il2CppMethodInitialized_075451ed = '\x01';
  }
  if (control == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)"Checkbox";
  leftAligned = System_String__op_Equality((control->fields).type,"Checkbox",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout_5785cd0(leftAligned,method_00);
    return pGVar1;
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout_5785cd0(leftAligned,method_00);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldControlLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout (bool leftAligned, const MethodInfo* method);
// 0x5885cd0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldControlLayout_5785cd0(bool leftAligned,MethodInfo *method)

{
  System_String_o *justify;
  System_String_o *direction;
  System_String_o **ppSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075451ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_075451ee = '\x01';
  }
  direction = "Row";
  ppSVar1 = &"Center";
  if (leftAligned) {
    ppSVar1 = &"FlexStart";
  }
  justify = *ppSVar1;
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     (direction,justify,"Center",(System_String_o *)0x0,(System_String_o *)0x0,
                      0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SidePanel
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanel (const MethodInfo* method);
// 0x58795f0

Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanel(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *options;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen_c *method_00;
  
  if (Il2CppMethodInitialized_075451ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Title");
    Il2CppMethodInitialized_075451ef = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  options = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanelOptions((MethodInfo *)method_00);
  footerOptions =
       Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanelFooterOptions((MethodInfo *)method_00);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor
            (__this,"GameCreate.Title",options,footerOptions,0.0,(MethodInfo *)0x0);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SidePanelOptions
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanelOptions (const MethodInfo* method);
// 0x5889890

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanelOptions(MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar2;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *targetAddress;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_a8;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_58;
  
  if (Il2CppMethodInitialized_075451f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.GameSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.roomSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Room.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.open.experiences");
    il2cpp_codegen_initialize_runtime_metadata(&"room");
    il2cpp_codegen_initialize_runtime_metadata(&"experiences");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    il2cpp_codegen_initialize_runtime_metadata(&"multiplayer");
    Il2CppMethodInitialized_075451f0 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor != 0)
    goto label_058898bc;
label_05889af5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    if (g_data_075452ce != '\0') goto label_058898c9;
label_05889b07:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    g_data_075452ce = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0)
    goto label_05889af5;
label_058898bc:
    if (g_data_075452ce == '\0') goto label_05889b07;
label_058898c9:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_isMultiplayer == false) {
    pGVar2 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,1);
    local_a8.fields.Searchable = false;
    local_a8.fields._49_7_ = 0;
    local_a8.fields.Tooltip = (System_String_o *)0x0;
    local_a8.fields.ActionId = (System_String_o *)0x0;
    local_a8.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
    local_a8.fields.TextKey = (System_String_o *)0x0;
    local_a8.fields.Icon = (System_String_o *)0x0;
    local_a8.fields._text = (System_String_o *)0x0;
    local_a8.fields.Id = (System_String_o *)0x0;
    local_a8.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
              (&local_a8,"experiences","GameCreate.GameSettings","gameCreate.open.experiences",
               "menuList",false,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) goto label_05889bf4;
    if ((int)pGVar2->max_length != 0) {
      targetAddress = pGVar2->m_Items;
      pGVar2->m_Items[0].fields.StackedOptions = local_a8.fields.StackedOptions;
      pGVar2->m_Items[0].fields.Searchable = local_a8.fields.Searchable;
      *(undefined7 *)&pGVar2->m_Items[0].fields.field_0x31 = local_a8.fields._49_7_;
      pGVar2->m_Items[0].fields.Tooltip = local_a8.fields.Tooltip;
      pGVar2->m_Items[0].fields.ActionId = local_a8.fields.ActionId;
      pGVar2->m_Items[0].fields.Action = local_a8.fields.Action;
      pGVar2->m_Items[0].fields.TextKey = local_a8.fields.TextKey;
      pGVar2->m_Items[0].fields.Icon = local_a8.fields.Icon;
      pGVar2->m_Items[0].fields._text = local_a8.fields._text;
      pGVar2->m_Items[0].fields.Id = local_a8.fields.Id;
label_05889bdc:
      Il2CppCodeGenWriteBarrier((void **)targetAddress);
      return pGVar2;
    }
  }
  else {
    pGVar2 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,2);
    local_a8.fields.Searchable = false;
    local_a8.fields._49_7_ = 0;
    local_a8.fields.Tooltip = (System_String_o *)0x0;
    local_a8.fields.ActionId = (System_String_o *)0x0;
    local_a8.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
    local_a8.fields.TextKey = (System_String_o *)0x0;
    local_a8.fields.Icon = (System_String_o *)0x0;
    local_a8.fields._text = (System_String_o *)0x0;
    local_a8.fields.Id = (System_String_o *)0x0;
    local_a8.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
              (&local_a8,"room","GameCreate.Room.Title","gameCreate.open.roomSettings",
               "multiplayer",false,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
label_05889bf4:
      ThrowNullReferenceException();
    }
    if ((int)pGVar2->max_length != 0) {
      pGVar2->m_Items[0].fields.StackedOptions = local_a8.fields.StackedOptions;
      pGVar2->m_Items[0].fields.Searchable = local_a8.fields.Searchable;
      *(undefined7 *)&pGVar2->m_Items[0].fields.field_0x31 = local_a8.fields._49_7_;
      pGVar2->m_Items[0].fields.Tooltip = local_a8.fields.Tooltip;
      pGVar2->m_Items[0].fields.ActionId = local_a8.fields.ActionId;
      pGVar2->m_Items[0].fields.Action = local_a8.fields.Action;
      pGVar2->m_Items[0].fields.TextKey = local_a8.fields.TextKey;
      pGVar2->m_Items[0].fields.Icon = local_a8.fields.Icon;
      pGVar2->m_Items[0].fields._text = local_a8.fields._text;
      pGVar2->m_Items[0].fields.Id = local_a8.fields.Id;
      Il2CppCodeGenWriteBarrier((void **)pGVar2->m_Items);
      local_58.fields.Searchable = false;
      local_58.fields._49_7_ = 0;
      local_58.fields.Tooltip = (System_String_o *)0x0;
      local_58.fields.ActionId = (System_String_o *)0x0;
      local_58.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
      local_58.fields.TextKey = (System_String_o *)0x0;
      local_58.fields.Icon = (System_String_o *)0x0;
      local_58.fields._text = (System_String_o *)0x0;
      local_58.fields.Id = (System_String_o *)0x0;
      local_58.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
      Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
                (&local_58,"experiences","GameCreate.GameSettings","gameCreate.open.experiences",
                 "menuList",false,(System_String_o *)0x0,(MethodInfo *)0x0);
      if ((pGVar2->max_length & 0xfffffffe) != 0) {
        targetAddress = pGVar2->m_Items + 1;
        pGVar2->m_Items[1].fields.StackedOptions = local_58.fields.StackedOptions;
        pGVar2->m_Items[1].fields.Searchable = local_58.fields.Searchable;
        *(undefined7 *)&pGVar2->m_Items[1].fields.field_0x31 = local_58.fields._49_7_;
        pGVar2->m_Items[1].fields.Tooltip = local_58.fields.Tooltip;
        pGVar2->m_Items[1].fields.ActionId = local_58.fields.ActionId;
        pGVar2->m_Items[1].fields.Action = local_58.fields.Action;
        pGVar2->m_Items[1].fields.TextKey = local_58.fields.TextKey;
        pGVar2->m_Items[1].fields.Icon = local_58.fields.Icon;
        pGVar2->m_Items[1].fields._text = local_58.fields._text;
        pGVar2->m_Items[1].fields.Id = local_58.fields.Id;
        goto label_05889bdc;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SidePanelFooterOptions
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanelFooterOptions (const MethodInfo* method);
// 0x5889c00

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SidePanelFooterOptions(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o local_58;
  
  if (Il2CppMethodInitialized_075451f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array);
    il2cpp_codegen_initialize_runtime_metadata(&"exitLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"back");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreate.back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_075451f1 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array,1);
  local_58.fields.Searchable = false;
  local_58.fields._49_7_ = 0;
  local_58.fields.Tooltip = (System_String_o *)0x0;
  local_58.fields.ActionId = (System_String_o *)0x0;
  local_58.fields.Action = (System_Action_GisketchActionContext__o *)0x0;
  local_58.fields.TextKey = (System_String_o *)0x0;
  local_58.fields.Icon = (System_String_o *)0x0;
  local_58.fields._text = (System_String_o *)0x0;
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.StackedOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            (&local_58,"back","Common.Back","gameCreate.back","exitLeft"
             ,false,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pGVar1->m_Items[0].fields.StackedOptions = local_58.fields.StackedOptions;
  pGVar1->m_Items[0].fields.Searchable = local_58.fields.Searchable;
  *(undefined7 *)&pGVar1->m_Items[0].fields.field_0x31 = local_58.fields._49_7_;
  pGVar1->m_Items[0].fields.Tooltip = local_58.fields.Tooltip;
  pGVar1->m_Items[0].fields.ActionId = local_58.fields.ActionId;
  pGVar1->m_Items[0].fields.Action = local_58.fields.Action;
  pGVar1->m_Items[0].fields.TextKey = local_58.fields.TextKey;
  pGVar1->m_Items[0].fields.Icon = local_58.fields.Icon;
  pGVar1->m_Items[0].fields._text = local_58.fields._text;
  pGVar1->m_Items[0].fields.Id = local_58.fields.Id;
  Il2CppCodeGenWriteBarrier((void **)pGVar1->m_Items);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$BreadcrumbLink
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BreadcrumbLink (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* label, System_String_o* actionId, System_String_o* id, System_String_o* icon, System_String_o* textKey, const MethodInfo* method);
// 0x5889d20

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__BreadcrumbLink
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *label,System_String_o *actionId,
               System_String_o *id,System_String_o *icon,System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075451f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_075451f2 = '\x01';
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (ui,3,label,actionId,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = textKey;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip (Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x5880ea0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5880f6e: jmp 0x5880f20

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip
          (Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_UIRule_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *in_RCX;
  System_Nullable_float__Fields minimum;
  System_Nullable_float__Fields maximum;
  
  if (Il2CppMethodInitialized_075451f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_075451f3 = '\x01';
  }
  if (field == (Settings_ExperienceRuleField_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar3 = (field->fields).Id;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldDescription(pSVar3,method);
  pSVar2 = (field->fields).Rule;
  if (pSVar2 == (Settings_UIRule_o *)0x0) {
    maximum.hasValue = false;
    maximum._1_3_ = 0;
    maximum.value = 0.0;
    minimum.hasValue = false;
    minimum._1_3_ = 0;
    minimum.value = 0.0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    minimum = (pSVar2->fields).Min.fields;
    maximum = (pSVar2->fields).Max.fields;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RangeTooltip
                     (pSVar3,(System_Nullable_float__o)minimum,(System_Nullable_float__o)maximum,in_RCX);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip (Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, const MethodInfo* method);
// 0x5883bc0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5883cb5: jmp 0x5883d19
// asm:   0x5883ce4: jnp 0x5883d52
// asm:   0x5883ce6: jmp 0x5883d86
// asm:   0x5883db7: jmp 0x5883d67

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldTooltip_5783bc0
          (Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint32_t uVar4;
  Settings_BaseSetting_o *pSVar5;
  Settings_BaseSetting_c *pSVar6;
  System_Nullable_float__Fields in_RAX;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  System_Nullable_float__Fields maximum;
  System_Nullable_float__Fields minimum;
  float fVar8;
  System_Nullable_float__Fields local_28;
  
  local_28 = in_RAX;
  if (Il2CppMethodInitialized_075451f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    Il2CppMethodInitialized_075451f4 = '\x01';
  }
  if (field == (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar5 = (field->fields)._Setting_k__BackingField;
  if (pSVar5 == (Settings_BaseSetting_o *)0x0) {
label_05883c6c:
    return (field->fields)._Tooltip_k__BackingField;
  }
  pSVar6 = pSVar5->klass;
  bVar1 = (pSVar6->_2).typeHierarchyDepth;
  method_00 = (MethodInfo *)(ulong)bVar1;
  bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
    bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting))
    goto label_05883c6c;
    pSVar7 = (field->fields)._Tooltip_k__BackingField;
    fVar8 = *(float *)&(*(uint64_t *)((char *)pSVar5 + 0x20));
    if ((fVar8 != -3.4028235e+38) || (NAN(fVar8))) {
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_28,fVar8,
                 (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
      fVar8 = *(float *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x20)) + 4);
      minimum = local_28;
    }
    else {
      minimum.hasValue = false;
      minimum._1_3_ = 0;
      minimum.value = 0.0;
      fVar8 = *(float *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x20)) + 4);
    }
    if ((fVar8 == 3.4028235e+38) && (!NAN(fVar8))) goto label_05883d52;
  }
  else {
    pSVar7 = (field->fields)._Tooltip_k__BackingField;
    if (*(int *)&(*(uint64_t *)((char *)pSVar5 + 0x20)) == -0x80000000) {
      minimum.hasValue = false;
      minimum._1_3_ = 0;
      minimum.value = 0.0;
      iVar3 = *(int *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x20)) + 4);
    }
    else {
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value = 0.0;
      System_Nullable_float____ctor
                ((System_Nullable_float__o *)&local_28,(float)*(int *)&(*(uint64_t *)((char *)pSVar5 + 0x20)),
                 (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
      iVar3 = *(int *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x20)) + 4);
      minimum = local_28;
    }
    if (iVar3 == 0x7fffffff) {
label_05883d52:
      maximum.hasValue = false;
      maximum._1_3_ = 0;
      maximum.value = 0.0;
      uVar4 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05883db5;
    }
    fVar8 = (float)iVar3;
  }
  local_28.hasValue = false;
  local_28._1_3_ = 0;
  local_28.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_28,fVar8,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  uVar4 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor;
  maximum = local_28;
joined_r0x05883db5:
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RangeTooltip
                     (pSVar7,(System_Nullable_float__o)minimum,(System_Nullable_float__o)maximum,method_00);
  return pSVar7;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RangeTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RangeTooltip (System_String_o* tooltip, System_Nullable_float__o minimum, System_Nullable_float__o maximum, const MethodInfo* method);
// 0x588a200
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x588a413: mov r14, rbx
// asm:   0x588a416: jmp 0x588a432
// asm:   0x588a446: lea rax, [rip + 0x1ccc27b]
// asm:   0x588a44d: mov rax, qword ptr [rax + 0x90]
// asm:   0x588a454: mov rax, qword ptr [rax + 0xb8]
// asm:   0x588a45b: mov r14, qword ptr [rax]
// asm:   0x588a45e: jmp 0x588a432

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RangeTooltip
          (System_String_o *tooltip,System_Nullable_float__o minimum,System_Nullable_float__o maximum,
          MethodInfo *method)

{
  bool bVar1;
  System_Globalization_CultureInfo_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *arg1;
  System_String_o *format;
  float local_34;
  System_Nullable_float__o local_30;
  System_Nullable_float__o local_28;
  
  local_30.fields = maximum.fields;
  local_28.fields = minimum.fields;
  if (Il2CppMethodInitialized_075451f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Range.Minimum");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Range.Maximum");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Range.Between");
    Il2CppMethodInitialized_075451f5 = '\x01';
  }
  local_34 = 0.0;
  if (minimum.fields.hasValue == false) {
    if (maximum.fields.hasValue == false) {
      if (tooltip == (System_String_o *)0x0) {
        return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      return tooltip;
    }
    pSVar3 = (System_String_o *)0x0;
label_0588a306:
    local_34 = System_Nullable_float___get_Value
                         (&local_30,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    arg1 = System_Single__ToString_54d09f0(&local_34,(System_IFormatProvider_o *)pSVar2,(MethodInfo *)0x0);
    if ((pSVar3 != (System_String_o *)0x0) && (arg1 != (System_String_o *)0x0)) {
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      format = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("GameCreate.Range.Between",(MethodInfo *)0x0);
      pSVar3 = System_String__Format_5302c50
                         (format,(Il2CppObject *)pSVar3,(Il2CppObject *)arg1,(MethodInfo *)0x0);
      goto label_0588a402;
    }
    if (pSVar3 != (System_String_o *)0x0) goto label_0588a39b;
label_0588a3cc:
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("GameCreate.Range.Maximum",(MethodInfo *)0x0);
  }
  else {
    local_34 = System_Nullable_float___get_Value
                         (&local_28,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar3 = System_Single__ToString_54d09f0(&local_34,(System_IFormatProvider_o *)pSVar2,(MethodInfo *)0x0);
    if (maximum.fields.hasValue != false) goto label_0588a306;
    if (pSVar3 == (System_String_o *)0x0) {
      arg1 = (System_String_o *)0x0;
      goto label_0588a3cc;
    }
label_0588a39b:
    arg1 = pSVar3;
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("GameCreate.Range.Minimum",(MethodInfo *)0x0);
  }
  pSVar3 = System_String__Format(pSVar3,(Il2CppObject *)arg1,(MethodInfo *)0x0);
label_0588a402:
  bVar1 = System_String__IsNullOrEmpty(tooltip,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = System_String__Concat_5301f10(tooltip,"\n",pSVar3,(MethodInfo *)0x0);
  }
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$FieldValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue (Settings_ExperienceRuleField_o* field, const MethodInfo* method);
// 0x5880f70
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58811cb: mov rdi, rax
// asm:   0x58811ce: xor esi, esi
// asm:   0x58811d0: call 0x5406ae0  ; System_String__ToLowerInvariant()
// asm:   0x58811d5: jmp 0x588110f
// asm:   0x588124c: nop dword ptr [rax]
// asm:   0x5881287: mov rax, qword ptr [rsp + 0x10]
// asm:   0x588128c: jmp 0x588110f
// asm:   0x58812b4: xor edi, edi
// asm:   0x58812b6: call 0x5545c40  ; System_Globalization_CultureInfo__get_InvariantCulture()
// asm:   0x58812bb: lea rdi, [rsp + 0xc]
// asm:   0x58812c0: mov rsi, rax
// asm:   0x58812c3: xor edx, edx
// asm:   0x58812c5: call 0x55d09f0  ; System_Single__ToString()
// asm:   0x58812ca: jmp 0x588110f
// asm:   0x5881327: mov rax, qword ptr [rax + rcx*8 + 0x20]
// asm:   0x588132c: jmp 0x588110f
// asm:   0x5881350: xor edi, edi
// asm:   0x5881352: call 0x5545c40  ; System_Globalization_CultureInfo__get_InvariantCulture()
// asm:   0x5881357: lea rdi, [rsp + 0xc]
// asm:   0x588135c: mov rsi, rax
// asm:   0x588135f: xor edx, edx
// asm:   0x5881361: call 0x55b7520  ; System_Int32__ToString()
// asm:   0x5881366: jmp 0x588110f
// asm:   0x5881370: mov rax, qword ptr [rbx + rbp*8 + 0x20]
// asm:   0x5881375: jmp 0x588110f

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__FieldValue
          (Settings_ExperienceRuleField_o *field,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  Settings_BaseSetting_o *pSVar5;
  Settings_BaseSetting_c *pSVar6;
  Settings_WeatherSettings_o *pSVar7;
  Settings_SetSettingsContainer_WeatherSet__o *__this;
  bool bVar8;
  System_String_array *pSVar9;
  ulong uVar10;
  System_Globalization_CultureInfo_o *pSVar11;
  System_String_o *pSVar12;
  ulong uVar13;
  MethodInfo *method_00;
  float local_2c;
  System_String_o *local_28;
  
  if (Il2CppMethodInitialized_075451f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075451f6 = '\x01';
  }
  local_28 = (System_String_o *)0x0;
  if (field != (Settings_ExperienceRuleField_o *)0x0) {
    pSVar5 = (field->fields).Setting;
    if (pSVar5 == (Settings_BaseSetting_o *)0x0) {
label_058810f7:
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pSVar6 = pSVar5->klass;
    bVar1 = (pSVar6->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      pSVar12 = (field->fields).Id;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      if (Il2CppMethodInitialized_075451f8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
        il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
        Il2CppMethodInitialized_075451f8 = '\x01';
      }
      bVar8 = System_String__Equals_52ffe30(pSVar12,"general.GameMode",5,(MethodInfo *)0x0);
      if (bVar8) {
        pSVar12 = UI_ContentLocale__ModeName((*(uint64_t *)((char *)pSVar5 + 0x20)),(MethodInfo *)0x0);
        return pSVar12;
      }
      return (*(uint64_t *)((char *)pSVar5 + 0x20));
    }
    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if ((bVar2 <= bVar1) &&
           ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          local_2c = *(float *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 4);
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar11 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pSVar12 = System_Single__ToString_54d09f0
                              (&local_2c,(System_IFormatProvider_o *)pSVar11,(MethodInfo *)0x0);
          return pSVar12;
        }
        goto label_058810f7;
      }
      pSVar12 = (field->fields).Id;
      uVar3 = *(uint *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 4);
      if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
      }
      method_00 = (MethodInfo *)(ulong)uVar3;
      bVar8 = Settings_ExperienceRuleEngine__TryGetValueName(pSVar12,uVar3,&local_28,(MethodInfo *)0x0);
      if (!bVar8) {
        bVar8 = Settings_WeatherSettings__IsWeatherSetting((field->fields).Id,(MethodInfo *)0x0);
        if ((bVar8) &&
           (pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings,
           pSVar7 != (Settings_WeatherSettings_o *)0x0)) {
          __this = (pSVar7->fields).WeatherSets;
          if (__this == (Settings_SetSettingsContainer_WeatherSet__o *)0x0) goto label_0588137a;
          pSVar9 = Settings_SetSettingsContainer_object___GetSetNames
                             ((Settings_SetSettingsContainer_T__o *)__this,
                              (MethodInfo_40482D0 *)
                              MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
          uVar3 = *(uint *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 4);
          if (-1 < (int)uVar3) {
            if (pSVar9 == (System_String_array *)0x0) goto label_0588137a;
            uVar4 = (uint)pSVar9->max_length;
            if ((int)uVar3 < (int)uVar4) {
              if (uVar3 < uVar4) {
                return pSVar9->m_Items[uVar3];
              }
label_0588137f:
              ThrowIndexOutOfRangeException();
            }
          }
        }
        local_2c = *(float *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 4);
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar11 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        pSVar12 = System_Int32__ToString_54b7520
                            ((int32_t *)&local_2c,(System_IFormatProvider_o *)pSVar11,(MethodInfo *)0x0);
        return pSVar12;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar9 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldOptions(field,method_00);
      if (pSVar9 != (System_String_array *)0x0) {
        if (0 < (int)pSVar9->max_length) {
          uVar10 = pSVar9->max_length & 0xffffffff;
          uVar13 = 0;
          do {
            if (uVar10 <= uVar13) goto label_0588137f;
            bVar8 = System_String__Equals_52ffe30(pSVar9->m_Items[uVar13],local_28,5,(MethodInfo *)0x0);
            if (bVar8) {
              if ((uint)uVar13 < (uint)pSVar9->max_length) {
                return pSVar9->m_Items[uVar13];
              }
              goto label_0588137f;
            }
            uVar13 = uVar13 + 1;
            uVar3 = (uint)pSVar9->max_length;
            uVar10 = (ulong)uVar3;
          } while ((long)uVar13 < (long)(int)uVar3);
        }
        return local_28;
      }
    }
    else {
      local_2c = (float)CONCAT31(local_2c._1_3_,*(undefined1 *)((long)&(*(uint64_t *)((char *)pSVar5 + 0x18)) + 1));
      if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075566f0);
      }
      pSVar12 = System_Boolean__ToString((bool *)&local_2c,(MethodInfo *)0x0);
      if (pSVar12 != (System_String_o *)0x0) {
        pSVar12 = System_String__ToLowerInvariant(pSVar12,(MethodInfo *)0x0);
        return pSVar12;
      }
    }
  }
label_0588137a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$OptionLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__OptionLabel (System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x588a4e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__OptionLabel
          (System_String_o *id,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *method_00;
  uint local_1c;
  
  if (Il2CppMethodInitialized_075451f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ExperienceRuleEngine);
    il2cpp_codegen_initialize_runtime_metadata(&"general.MapCategory");
    Il2CppMethodInitialized_075451f7 = '\x01';
  }
  local_1c = 0;
  method_00 = (MethodInfo *)"general.MapCategory";
  bVar2 = System_String__Equals_52ffe30(id,"general.MapCategory",5,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = UI_ContentLocale__MapCategory(value,(MethodInfo *)0x0);
    return pSVar3;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SettingOptions(id,method_00);
  if ((TypeInfo_Settings_ExperienceRuleEngine->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_ExperienceRuleEngine);
  }
  bVar2 = Settings_ExperienceRuleEngine__TryParseValueName(id,value,(int32_t *)&local_1c,(MethodInfo *)0x0);
  if (bVar2) {
    if (-1 < (int)local_1c) {
      if (pSVar4 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar1 = (uint)pSVar4->max_length;
      if ((int)local_1c < (int)uVar1) {
        if (uVar1 <= local_1c) {
          ThrowIndexOutOfRangeException();
        }
        value = pSVar4->m_Items[local_1c];
      }
    }
  }
  return value;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$StringFieldValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__StringFieldValue (System_String_o* id, Settings_StringSetting_o* setting, const MethodInfo* method);
// 0x588a460

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__StringFieldValue
          (System_String_o *id,Settings_StringSetting_o *setting,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075451f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
    Il2CppMethodInitialized_075451f8 = '\x01';
  }
  bVar1 = System_String__Equals_52ffe30(id,"general.GameMode",5,(MethodInfo *)0x0);
  if (bVar1) {
    if (setting != (Settings_StringSetting_o *)0x0) {
      pSVar2 = UI_ContentLocale__ModeName((setting->fields)._value,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  else if (setting != (Settings_StringSetting_o *)0x0) {
    return (setting->fields)._value;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$SandboxFieldValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue (Gisketch_Aottg2UI_Game_AottgSandboxField_o* field, const MethodInfo* method);
// 0x5883dc0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateScreen__SandboxFieldValue
          (Gisketch_Aottg2UI_Game_AottgSandboxField_o *field,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_BaseSetting_o *pSVar3;
  Settings_BaseSetting_c *pSVar4;
  System_String_array *pSVar5;
  bool bVar6;
  System_Globalization_CultureInfo_o *pSVar7;
  System_String_o *pSVar8;
  uint uVar9;
  bool local_19;
  float local_18;
  uint local_14;
  
  if (Il2CppMethodInitialized_075451f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075451f9 = '\x01';
  }
  if (field != (Gisketch_Aottg2UI_Game_AottgSandboxField_o *)0x0) {
    pSVar3 = (field->fields)._Setting_k__BackingField;
    if (pSVar3 == (Settings_BaseSetting_o *)0x0) {
label_05883f06:
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pSVar4 = pSVar3->klass;
    bVar1 = (pSVar4->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      pSVar8 = (field->fields)._Id_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      if (Il2CppMethodInitialized_075451f8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
        il2cpp_codegen_initialize_runtime_metadata(&"general.GameMode");
        Il2CppMethodInitialized_075451f8 = '\x01';
      }
      bVar6 = System_String__Equals_52ffe30(pSVar8,"general.GameMode",5,(MethodInfo *)0x0);
      if (bVar6) {
        pSVar8 = UI_ContentLocale__ModeName((*(uint64_t *)((char *)pSVar3 + 0x20)),(MethodInfo *)0x0);
        return pSVar8;
      }
      return (*(uint64_t *)((char *)pSVar3 + 0x20));
    }
    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
        if ((bVar2 <= bVar1) &&
           ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
          local_18 = *(float *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pSVar8 = System_Single__ToString_54d09f0
                             (&local_18,(System_IFormatProvider_o *)pSVar7,(MethodInfo *)0x0);
          return pSVar8;
        }
        goto label_05883f06;
      }
      pSVar5 = (field->fields)._Options_k__BackingField;
      if (pSVar5 != (System_String_array *)0x0) {
        local_14 = *(uint *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 4);
        if (((pSVar5->max_length != 0) && (-1 < (int)local_14)) &&
           (uVar9 = (uint)pSVar5->max_length, (int)local_14 < (int)uVar9)) {
          if (uVar9 <= local_14) {
            ThrowIndexOutOfRangeException();
          }
          return pSVar5->m_Items[local_14];
        }
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        pSVar8 = System_Int32__ToString_54b7520
                           ((int32_t *)&local_14,(System_IFormatProvider_o *)pSVar7,(MethodInfo *)0x0);
        return pSVar8;
      }
    }
    else {
      local_19 = *(bool *)((long)&(*(uint64_t *)((char *)pSVar3 + 0x18)) + 1);
      if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075566f0);
      }
      pSVar8 = System_Boolean__ToString(&local_19,(MethodInfo *)0x0);
      if (pSVar8 != (System_String_o *)0x0) {
        pSVar8 = System_String__ToLowerInvariant(pSVar8,(MethodInfo *)0x0);
        return pSVar8;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$RefreshFrom
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x588a8c0

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen__RefreshFrom
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075451fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075451fa = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(root,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o* __this, const MethodInfo* method);
// 0x588a980

void Gisketch_Aottg2UI_Game_AottgGameCreateScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgGameCreateScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


