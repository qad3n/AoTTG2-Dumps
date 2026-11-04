// Type: UI.SettingsAbilityPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsAbilityPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsAbilityPanel.cs
// --------------------------------

// UI.SettingsAbilityPanel.<>c$$.cctor
// il2cpp: void UI_SettingsAbilityPanel___c___cctor (const MethodInfo* method);
// 0x1822ea880

void UI_SettingsAbilityPanel___c___cctor(MethodInfo *method)

{
  UI_SettingsAbilityPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_184347626 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsAbilityPanel_c);
    Il2CppMethodInitialized_184347626 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SettingsAbilityPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_SettingsAbilityPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_SettingsAbilityPanel_c->static_fields->__9,__this);
  return;
}


// UI.SettingsAbilityPanel.<>c$$.ctor
// il2cpp: void UI_SettingsAbilityPanel___c___ctor (UI_SettingsAbilityPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_SettingsAbilityPanel___c___ctor(UI_SettingsAbilityPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsAbilityPanel.<>c$$<Setup>b__7_0
// il2cpp: bool UI_SettingsAbilityPanel___c___Setup_b__7_0 (UI_SettingsAbilityPanel___c_o* __this, const MethodInfo* method);
// 0x1822ea220

bool UI_SettingsAbilityPanel___c___Setup_b__7_0(UI_SettingsAbilityPanel___c_o *__this,MethodInfo *method)

{
  Settings_AbilitySettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_184347627 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347627 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  if ((((pSVar1 != (Settings_AbilitySettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).BombRadius, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
      (pSVar3 = (pSVar1->fields).BombRange, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
     ((pSVar4 = (pSVar1->fields).BombSpeed, pSVar4 != (Settings_IntSetting_o *)0x0 &&
      (pSVar5 = (pSVar1->fields).BombCooldown, pSVar5 != (Settings_IntSetting_o *)0x0)))) {
    return (pSVar5->fields)._value + (pSVar4->fields)._value + (pSVar3->fields)._value +
           (pSVar2->fields)._value < 0x15;
  }
  ThrowNullReferenceException();
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$.ctor
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___ctor (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_SettingsAbilityPanel___c__DisplayClass7_0___ctor(UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__1
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__1 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x1822ea5c0

void
UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__1(UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, MethodInfo* method)

{
  UI_SettingsAbilityPanel_o *__this_00;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__2
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__2 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x1822ea5c0

void
UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__2(UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, MethodInfo* method)

{
  UI_SettingsAbilityPanel_o *__this_00;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__3
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__3 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x1822ea5c0

void
UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__3(UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, MethodInfo* method)

{
  UI_SettingsAbilityPanel_o *__this_00;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SettingsAbilityPanel.<>c__DisplayClass7_0$$<Setup>b__4
// il2cpp: void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__4 (UI_SettingsAbilityPanel___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x1822ea5c0

void UI_SettingsAbilityPanel___c__DisplayClass7_0___Setup_b__4
               (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *__this,MethodInfo *method)

{
  UI_SettingsAbilityPanel_o *__this_00;
  
  if (((__this->fields).settings != (Settings_AbilitySettings_o *)0x0) &&
     (__this_00 = (__this->fields).__4__this, __this_00 != (UI_SettingsAbilityPanel_o *)0x0)) {
    UI_SettingsAbilityPanel__RefreshBombStatLabels(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SettingsAbilityPanel$$get_PanelAlignment
// il2cpp: int32_t UI_SettingsAbilityPanel__get_PanelAlignment (UI_SettingsAbilityPanel_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_SettingsAbilityPanel__get_PanelAlignment(UI_SettingsAbilityPanel_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.SettingsAbilityPanel$$Setup
// il2cpp: void UI_SettingsAbilityPanel__Setup (UI_SettingsAbilityPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822e0660

void UI_SettingsAbilityPanel__Setup
               (UI_SettingsAbilityPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  System_String_o *category;
  Settings_AbilitySettings_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  Settings_BoolSetting_o *pSVar4;
  Il2CppObject *object;
  Settings_IntSetting_o *pSVar5;
  Settings_ColorSetting_o *setting;
  UI_BaseMenu_o *pUVar6;
  UI_SettingsAbilityPanel___c__DisplayClass7_0_o *object_00;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_Text_o *value;
  Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar9;
  System_String_o *pSVar10;
  
  if (Il2CppMethodInitialized_184347622 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SettingsAbilityPanel_c_Setup_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SettingsAbilityPanel_c__DisplayClass7_0_Setup_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SettingsAbilityPanel_c__DisplayClass7_0_Setup_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SettingsAbilityPanel_c__DisplayClass7_0_Setup_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SettingsAbilityPanel_c__DisplayClass7_0_Setup_b__4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsAbilityPanel_c__DisplayClass7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsAbilityPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"UseOldEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"UnusedPoints");
    il2cpp_codegen_initialize_runtime_metadata(&"k");
    il2cpp_codegen_initialize_runtime_metadata(&"BombCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"BombRadius");
    il2cpp_codegen_initialize_runtime_metadata(&"BombColor");
    il2cpp_codegen_initialize_runtime_metadata(&"BombSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowBombColors");
    il2cpp_codegen_initialize_runtime_metadata(&"BombCollision");
    il2cpp_codegen_initialize_runtime_metadata(&"Ability");
    il2cpp_codegen_initialize_runtime_metadata(&"CursorCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"m");
    il2cpp_codegen_initialize_runtime_metadata(&"BombRange");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"s");
    Il2CppMethodInitialized_184347622 = '\x01';
  }
  object_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SettingsAbilityPanel_c__DisplayClass7_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if (object_00 != (UI_SettingsAbilityPanel___c__DisplayClass7_0_o *)0x0) {
    (object_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).__4__this,__this);
    UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
    pSVar10 = "Ability";
    if (parent != (UI_BasePanel_o *)0x0) {
      bVar1 = (TypeInfo_UI_SettingsPopup->_2).typeHierarchyDepth;
      if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
         ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_SettingsPopup)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(parent);
      }
      category = (System_String_o *)(*(uint64_t *)((char *)parent + 0xa8));
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
      (object_00->fields).settings = pSVar2;
      Il2CppCodeGenWriteBarrier(&(object_00->fields).settings,pSVar2);
      pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_00,0x18,200.0,20.0,pSVar7,(MethodInfo *)0x0);
      pSVar2 = (object_00->fields).settings;
      if (pSVar2 != (Settings_AbilitySettings_o *)0x0) {
        pUVar3 = (__this->fields).DoublePanelRight;
        pSVar4 = (pSVar2->fields).CursorCooldown;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar7 = UI_UIManager__GetLocale
                           (category,pSVar10,"CursorCooldown","",""
                            ,(MethodInfo *)0x0);
        UI_ElementFactory__CreateToggleSetting
                  (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pSVar2 = (object_00->fields).settings;
        if (pSVar2 != (Settings_AbilitySettings_o *)0x0) {
          pUVar3 = (__this->fields).DoublePanelRight;
          pSVar4 = (pSVar2->fields).ShowBombColors;
          pSVar7 = UI_UIManager__GetLocale
                             (category,pSVar10,"ShowBombColors","",
                              "",(MethodInfo *)0x0);
          UI_ElementFactory__CreateToggleSetting
                    (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pSVar2 = (object_00->fields).settings;
          if (pSVar2 != (Settings_AbilitySettings_o *)0x0) {
            pUVar3 = (__this->fields).DoublePanelRight;
            pSVar4 = (pSVar2->fields).UseOldEffect;
            pSVar7 = UI_UIManager__GetLocale
                               (category,pSVar10,"UseOldEffect","",
                                "",(MethodInfo *)0x0);
            UI_ElementFactory__CreateToggleSetting
                      (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,
                       30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
            pSVar2 = (object_00->fields).settings;
            if (pSVar2 != (Settings_AbilitySettings_o *)0x0) {
              pUVar3 = (__this->fields).DoublePanelRight;
              pSVar4 = (pSVar2->fields).BombCollision;
              pSVar7 = UI_UIManager__GetLocale
                                 (category,pSVar10,"BombCollision","",
                                  "",(MethodInfo *)0x0);
              UI_ElementFactory__CreateToggleSetting
                        (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,
                         30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
              pUVar3 = (__this->fields).DoublePanelLeft;
              pSVar7 = UI_UIManager__GetLocale
                                 (category,pSVar10,"UnusedPoints","",
                                  "",(MethodInfo *)0x0);
              pUVar8 = UI_ElementFactory__CreateDefaultLabel(pUVar3,__this_00,pSVar7,0,4,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                value = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar8,(MethodInfo_6F5650 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                (__this->fields)._pointsLeftLabel = value;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._pointsLeftLabel,value);
                if ((TypeInfo_UI_SettingsAbilityPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_SettingsAbilityPanel_c);
                }
                __this_01 = (Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_o *)
                            TypeInfo_UI_SettingsAbilityPanel_c->static_fields->__9__7_0;
                if (__this_01 == (Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_o *)0x0
                   ) {
                  if ((TypeInfo_UI_SettingsAbilityPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_SettingsAbilityPanel_c);
                  }
                  object = (Il2CppObject *)TypeInfo_UI_SettingsAbilityPanel_c->static_fields->__9;
                  __this_01 = (Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabledDelegate_o *)
                              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_bool);
                  System_Func_bool____ctor
                            (__this_01,object,(intptr_t)MethodInfo_UI_SettingsAbilityPanel_c_Setup_b__7_0,
                             (MethodInfo *)0x0);
                  TypeInfo_UI_SettingsAbilityPanel_c->static_fields->__9__7_0 =
                       (System_Func_bool__o *)__this_01;
                  Il2CppCodeGenWriteBarrier
                            (&TypeInfo_UI_SettingsAbilityPanel_c->static_fields->__9__7_0,__this_01);
                }
                pSVar2 = (object_00->fields).settings;
                if ((pSVar2 != (Settings_AbilitySettings_o *)0x0) &&
                   (pSVar5 = (pSVar2->fields).BombRadius, pSVar5 != (Settings_IntSetting_o *)0x0)) {
                  pUVar3 = (__this->fields).DoublePanelLeft;
                  pSVar7 = UI_SettingsAbilityPanel__GetBombStatLabel
                                     (__this,category,pSVar10,"BombRadius",(pSVar5->fields)._value,
                                      5.4,7.4,7.0,"m",1.0,(MethodInfo *)0x0);
                  pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,(Il2CppObject *)object_00
                             ,(intptr_t)MethodInfo_UI_SettingsAbilityPanel_c__DisplayClass7_0_Setup_b__1,
                             (MethodInfo *)0x0);
                  pUVar8 = UI_ElementFactory__CreateIncrementSetting
                                     (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                      "",33.0,30.0,(System_String_array *)0x0,pUVar9,
                                      (System_Func_bool__o *)__this_01,(MethodInfo *)0x0);
                  (__this->fields)._radiusElement = pUVar8;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._radiusElement,pUVar8);
                  pSVar2 = (object_00->fields).settings;
                  if ((pSVar2 != (Settings_AbilitySettings_o *)0x0) &&
                     (pSVar5 = (pSVar2->fields).BombRange, pSVar5 != (Settings_IntSetting_o *)0x0)) {
                    pUVar3 = (__this->fields).DoublePanelLeft;
                    pSVar7 = UI_SettingsAbilityPanel__GetBombStatLabel
                                       (__this,category,pSVar10,"BombRange",(pSVar5->fields)._value,
                                        0.0,4.0,7.0,"m",1.0,(MethodInfo *)0x0);
                    pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction)
                    ;
                    UnityEngine_Events_UnityAction___ctor
                              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,
                               (Il2CppObject *)object_00,
                               (intptr_t)MethodInfo_UI_SettingsAbilityPanel_c__DisplayClass7_0_Setup_b__2,
                               (MethodInfo *)0x0);
                    pUVar8 = UI_ElementFactory__CreateIncrementSetting
                                       (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                        "",33.0,30.0,(System_String_array *)0x0,pUVar9,
                                        (System_Func_bool__o *)__this_01,(MethodInfo *)0x0);
                    (__this->fields)._rangeElement = pUVar8;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._rangeElement,pUVar8);
                    pSVar2 = (object_00->fields).settings;
                    if ((pSVar2 != (Settings_AbilitySettings_o *)0x0) &&
                       (pSVar5 = (pSVar2->fields).BombSpeed, pSVar5 != (Settings_IntSetting_o *)0x0)) {
                      pUVar3 = (__this->fields).DoublePanelLeft;
                      pSVar7 = UI_SettingsAbilityPanel__GetBombStatLabel
                                         (__this,category,pSVar10,"BombSpeed",
                                          (pSVar5->fields)._value,3.0,10.5,10.5,"k",100.0,
                                          (MethodInfo *)0x0);
                      pUVar9 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,
                                 (Il2CppObject *)object_00,
                                 (intptr_t)MethodInfo_UI_SettingsAbilityPanel_c__DisplayClass7_0_Setup_b__3,
                                 (MethodInfo *)0x0);
                      pUVar8 = UI_ElementFactory__CreateIncrementSetting
                                         (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                          "",33.0,30.0,(System_String_array *)0x0,pUVar9,
                                          (System_Func_bool__o *)__this_01,(MethodInfo *)0x0);
                      (__this->fields)._speedElement = pUVar8;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._speedElement,pUVar8);
                      pSVar2 = (object_00->fields).settings;
                      if ((pSVar2 != (Settings_AbilitySettings_o *)0x0) &&
                         (pSVar5 = (pSVar2->fields).BombCooldown, pSVar5 != (Settings_IntSetting_o *)0x0)) {
                        pUVar3 = (__this->fields).DoublePanelLeft;
                        pSVar7 = UI_SettingsAbilityPanel__GetBombStatLabel
                                           (__this,category,pSVar10,"BombCooldown",
                                            (pSVar5->fields)._value,4.0,7.0,7.0,"s",1.0,
                                            (MethodInfo *)0x0);
                        pUVar9 = il2cpp_codegen_object_new
                                           ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,
                                   (Il2CppObject *)object_00,
                                   (intptr_t)MethodInfo_UI_SettingsAbilityPanel_c__DisplayClass7_0_Setup_b__4,
                                   (MethodInfo *)0x0);
                        pUVar8 = UI_ElementFactory__CreateIncrementSetting
                                           (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                            "",33.0,30.0,(System_String_array *)0x0,pUVar9,
                                            (System_Func_bool__o *)__this_01,(MethodInfo *)0x0);
                        (__this->fields)._cooldownElement = pUVar8;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._cooldownElement,pUVar8);
                        pSVar2 = (object_00->fields).settings;
                        if (pSVar2 != (Settings_AbilitySettings_o *)0x0) {
                          pUVar3 = (__this->fields).DoublePanelLeft;
                          setting = (pSVar2->fields).BombColor;
                          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                          }
                          pSVar10 = UI_UIManager__GetLocale
                                              (category,pSVar10,"BombColor","",
                                               "",(MethodInfo *)0x0);
                          pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                          if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                            UI_ElementFactory__CreateColorSetting
                                      (pUVar3,__this_00,(Settings_BaseSetting_o *)setting,pSVar10,
                                       (pUVar6->fields).ColorPickPopup,"",90.0,30.0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                            if ((object_00->fields).settings != (Settings_AbilitySettings_o *)0x0) {
                              UI_SettingsAbilityPanel__RefreshBombStatLabels(__this,(MethodInfo *)0x0);
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
  }
  ThrowNullReferenceException();
}


// UI.SettingsAbilityPanel$$GetBombStatLabel
// il2cpp: System_String_o* UI_SettingsAbilityPanel__GetBombStatLabel (UI_SettingsAbilityPanel_o* __this, System_String_o* cat, System_String_o* sub, System_String_o* statName, int32_t pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, System_String_o* unit, float divisor, const MethodInfo* method);
// 0x1822dfd80

System_String_o *
UI_SettingsAbilityPanel__GetBombStatLabel
          (UI_SettingsAbilityPanel_o *__this,System_String_o *cat,System_String_o *sub,
          System_String_o *statName,int32_t pointsSpent,float oldMinCost,float oldMaxCost,float cutoff,
          System_String_o *unit,float divisor,MethodInfo *method)

{
  int32_t val2;
  bool bVar1;
  int32_t iVar2;
  int count;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str0;
  System_String_array *values;
  System_String_o *pSVar5;
  int iVar6;
  float cooldown;
  float local_res10 [2];
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184347623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"BombCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"BombRadius");
    il2cpp_codegen_initialize_runtime_metadata(&"0.##");
    il2cpp_codegen_initialize_runtime_metadata(&"BombSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&") (");
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"BombRange");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347623 = '\x01';
  }
  local_res18[0] = 0.0;
  cooldown = 0.0;
  local_res10[0] = 0.0;
  bVar1 = System_String__op_Equality(statName,"BombRadius",(MethodInfo *)0x0);
  if (bVar1) {
    cooldown = BombUtil__GetBombRadius((float)pointsSpent,oldMinCost,oldMaxCost,cutoff,(MethodInfo *)0x0);
    local_res18[0] = BombUtil__GetOldRadiusCost(cooldown,(MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(statName,"BombRange",(MethodInfo *)0x0);
    if (bVar1) {
      cooldown = BombUtil__GetBombSpeed((float)pointsSpent,oldMinCost,oldMaxCost,cutoff,(MethodInfo *)0x0);
      local_res18[0] = BombUtil__GetOldRangeCost(cooldown,(MethodInfo *)0x0);
    }
    else {
      bVar1 = System_String__op_Equality(statName,"BombSpeed",(MethodInfo *)0x0);
      if (bVar1) {
        cooldown = BombUtil__GetBombSpeed((float)pointsSpent,oldMinCost,oldMaxCost,cutoff,(MethodInfo *)0x0);
        local_res18[0] = BombUtil__GetOldRangeCost(cooldown,(MethodInfo *)0x0);
      }
      else {
        bVar1 = System_String__op_Equality(statName,"BombCooldown",(MethodInfo *)0x0);
        if (bVar1) {
          cooldown = BombUtil__GetBombCooldown
                               ((float)pointsSpent,oldMinCost,oldMaxCost,cutoff,(MethodInfo *)0x0);
          local_res18[0] = BombUtil__GetOldCooldownCost(cooldown,(MethodInfo *)0x0);
        }
        else {
          local_res18[0] = 0.0;
        }
      }
    }
  }
  local_res10[0] = cooldown / divisor;
  pSVar3 = System_Single__ToString_1b49f60(local_res10,"0.##",(MethodInfo *)0x0);
  pSVar4 = System_Single__ToString_1b49f60(local_res18,"0.##",(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  str0 = UI_UIManager__GetLocale
                   (cat,sub,statName,"","",(MethodInfo *)0x0);
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  pSVar5 = "(";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "(";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar5);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar4;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar4);
        pSVar4 = ") (";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ") (";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar4);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar3;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = unit;
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,unit);
              pSVar3 = ")";
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = ")";
                Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar3);
                pSVar3 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                if ((str0 != (System_String_o *)0x0) && (pSVar3 != (System_String_o *)0x0)) {
                  iVar2 = (str0->fields)._stringLength;
                  val2 = (pSVar3->fields)._stringLength;
                  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  }
                  iVar2 = System_Math__Max_1b2c0d0(iVar2,val2,(MethodInfo *)0x0);
                  if ((pSVar3->fields)._stringLength < iVar2) {
                    iVar6 = iVar2 - (pSVar3->fields)._stringLength;
                    count = iVar6 / 2;
                    pSVar4 = System_String__CreateString_196aec0
                                       ((System_String_o *)0x0,0x20,count,(MethodInfo *)0x0);
                    pSVar5 = System_String__CreateString_196aec0
                                       ((System_String_o *)0x0,0x20,iVar6 - count,(MethodInfo *)0x0);
                    pSVar3 = System_String__Concat_1969b70(pSVar4,pSVar3,pSVar5,(MethodInfo *)0x0);
                  }
                  pSVar3 = System_String__Concat_1969b70(str0,"\n",pSVar3,(MethodInfo *)0x0);
                  return pSVar3;
                }
                goto label_1822e01cb;
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1822e01cb:
  ThrowNullReferenceException();
}


// UI.SettingsAbilityPanel$$CenterString
// il2cpp: System_String_o* UI_SettingsAbilityPanel__CenterString (UI_SettingsAbilityPanel_o* __this, System_String_o* text, int32_t totalWidth, const MethodInfo* method);
// 0x1822dfce0

System_String_o *
UI_SettingsAbilityPanel__CenterString
          (UI_SettingsAbilityPanel_o *__this,System_String_o *text,int32_t totalWidth,MethodInfo *method)

{
  int count;
  System_String_o *pSVar1;
  System_String_o *str2;
  int iVar2;
  
  if (text == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((text->fields)._stringLength < totalWidth) {
    iVar2 = totalWidth - (text->fields)._stringLength;
    count = iVar2 / 2;
    pSVar1 = System_String__CreateString_196aec0((System_String_o *)0x0,0x20,count,(MethodInfo *)0x0);
    str2 = System_String__CreateString_196aec0((System_String_o *)0x0,0x20,iVar2 - count,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969b70(pSVar1,text,str2,(MethodInfo *)0x0);
    return pSVar1;
  }
  return text;
}


// UI.SettingsAbilityPanel$$OnStatChanged
// il2cpp: void UI_SettingsAbilityPanel__OnStatChanged (UI_SettingsAbilityPanel_o* __this, Settings_IntSetting_o* setting, const MethodInfo* method);
// 0x1822e01e0

void UI_SettingsAbilityPanel__OnStatChanged
               (UI_SettingsAbilityPanel_o *__this,Settings_IntSetting_o *setting,MethodInfo *method)

{
  UI_SettingsAbilityPanel__RefreshBombStatLabels(__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsAbilityPanel$$RefreshBombStatLabels
// il2cpp: void UI_SettingsAbilityPanel__RefreshBombStatLabels (UI_SettingsAbilityPanel_o* __this, const MethodInfo* method);
// 0x1822e01f0

void UI_SettingsAbilityPanel__RefreshBombStatLabels(UI_SettingsAbilityPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Settings_AbilitySettings_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  UnityEngine_UI_Text_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  System_String_o *category;
  System_String_o *pSVar12;
  System_String_o *str2;
  System_String_o *pSVar13;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184347624 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"UnusedPoints");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"k");
    il2cpp_codegen_initialize_runtime_metadata(&"BombCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"BombRadius");
    il2cpp_codegen_initialize_runtime_metadata(&"BombSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Ability");
    il2cpp_codegen_initialize_runtime_metadata(&"m");
    il2cpp_codegen_initialize_runtime_metadata(&"BombRange");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"s");
    Il2CppMethodInitialized_184347624 = '\x01';
  }
  category = "SettingsPopup";
  pSVar13 = "Ability";
  local_res18[0] = 0;
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  if ((((pSVar5 != (Settings_AbilitySettings_o *)0x0) &&
       (pSVar6 = (pSVar5->fields).BombRadius, pSVar6 != (Settings_IntSetting_o *)0x0)) &&
      (pSVar7 = (pSVar5->fields).BombRange, pSVar7 != (Settings_IntSetting_o *)0x0)) &&
     ((pSVar8 = (pSVar5->fields).BombSpeed, pSVar8 != (Settings_IntSetting_o *)0x0 &&
      (pSVar9 = (pSVar5->fields).BombCooldown, pSVar9 != (Settings_IntSetting_o *)0x0)))) {
    iVar1 = (pSVar9->fields)._value;
    iVar2 = (pSVar8->fields)._value;
    iVar3 = (pSVar7->fields)._value;
    iVar4 = (pSVar6->fields)._value;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    local_res18[0] = System_Math__Max_1b2c0d0(0,0x14 - (iVar1 + iVar2 + iVar3 + iVar4),(MethodInfo *)0x0);
    pUVar10 = (__this->fields)._pointsLeftLabel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar12 = UI_UIManager__GetLocale
                        (category,pSVar13,"UnusedPoints","","",
                         (MethodInfo *)0x0);
    str2 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
    pSVar12 = System_String__Concat_1969b70(pSVar12,": ",str2,(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                (pUVar10,pSVar12,(pUVar10->klass->vtable)._75_set_text.method);
      pSVar6 = (pSVar5->fields).BombRadius;
      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
        pUVar11 = (__this->fields)._radiusElement;
        pSVar12 = UI_SettingsAbilityPanel__GetBombStatLabel
                            (__this,category,pSVar13,"BombRadius",(pSVar6->fields)._value,5.4,7.4,7.0
                             ,"m",1.0,(MethodInfo *)0x0);
        UI_SettingsAbilityPanel__UpdateElementLabel(__this,pUVar11,pSVar12,(MethodInfo *)0x0);
        pSVar6 = (pSVar5->fields).BombRange;
        if (pSVar6 != (Settings_IntSetting_o *)0x0) {
          pUVar11 = (__this->fields)._rangeElement;
          pSVar12 = UI_SettingsAbilityPanel__GetBombStatLabel
                              (__this,category,pSVar13,"BombRange",(pSVar6->fields)._value,0.0,4.0,
                               7.0,"m",1.0,(MethodInfo *)0x0);
          UI_SettingsAbilityPanel__UpdateElementLabel(__this,pUVar11,pSVar12,(MethodInfo *)0x0);
          pSVar6 = (pSVar5->fields).BombSpeed;
          if (pSVar6 != (Settings_IntSetting_o *)0x0) {
            pUVar11 = (__this->fields)._speedElement;
            pSVar12 = UI_SettingsAbilityPanel__GetBombStatLabel
                                (__this,category,pSVar13,"BombSpeed",(pSVar6->fields)._value,3.0,
                                 10.5,10.5,"k",100.0,(MethodInfo *)0x0);
            UI_SettingsAbilityPanel__UpdateElementLabel(__this,pUVar11,pSVar12,(MethodInfo *)0x0);
            pSVar6 = (pSVar5->fields).BombCooldown;
            if (pSVar6 != (Settings_IntSetting_o *)0x0) {
              pUVar11 = (__this->fields)._cooldownElement;
              pSVar13 = UI_SettingsAbilityPanel__GetBombStatLabel
                                  (__this,category,pSVar13,"BombCooldown",(pSVar6->fields)._value,4.0,
                                   7.0,7.0,"s",1.0,(MethodInfo *)0x0);
              UI_SettingsAbilityPanel__UpdateElementLabel(__this,pUVar11,pSVar13,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SettingsAbilityPanel$$UpdateElementLabel
// il2cpp: void UI_SettingsAbilityPanel__UpdateElementLabel (UI_SettingsAbilityPanel_o* __this, UnityEngine_GameObject_o* element, System_String_o* newText, const MethodInfo* method);
// 0x1822e1150

void UI_SettingsAbilityPanel__UpdateElementLabel
               (UI_SettingsAbilityPanel_o *__this,UnityEngine_GameObject_o *element,System_String_o *newText,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Text_o *x;
  
  if (Il2CppMethodInitialized_184347625 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Text)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347625 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)element,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (element == (UnityEngine_GameObject_o *)0x0) {
label_1822e1211:
      ThrowNullReferenceException();
    }
    x = UnityEngine_GameObject__GetComponentInChildren_object_
                  (element,(MethodInfo_6F5040 *)MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Text)
    ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_UI_Text_o *)0x0) goto label_1822e1211;
      (*(x->klass->vtable)._75_set_text.methodPtr)(x,newText,(x->klass->vtable)._75_set_text.method);
    }
  }
  return;
}


// UI.SettingsAbilityPanel$$.ctor
// il2cpp: void UI_SettingsAbilityPanel___ctor (UI_SettingsAbilityPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_SettingsAbilityPanel___ctor(UI_SettingsAbilityPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


