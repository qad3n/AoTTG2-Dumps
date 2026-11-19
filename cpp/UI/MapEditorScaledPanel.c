// Type: UI.MapEditorScaledPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorScaledPanel.cs
// Prior real C# source: none
// --------------------------------

// UI.MapEditorScaledPanel$$get_HUDScale
// il2cpp: float UI_MapEditorScaledPanel__get_HUDScale (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x5d99df0

float UI_MapEditorScaledPanel__get_HUDScale(UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754807b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_0754807b = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 == (Settings_MapEditorSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).HUDScale, pSVar2 == (Settings_FloatSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value;
}


// UI.MapEditorScaledPanel$$Setup
// il2cpp: void UI_MapEditorScaledPanel__Setup (UI_MapEditorScaledPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d99e50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9a07b: lea rbx, [r14 + 0x88]
// asm:   0x5d9a082: jmp 0x5d9a096

void UI_MapEditorScaledPanel__Setup
               (UI_MapEditorScaledPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Il2CppType *handle;
  UnityEngine_RectTransform_c *pUVar1;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o **targetAddress;
  
  if (Il2CppMethodInitialized_0754807c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaledContent");
    il2cpp_codegen_initialize_runtime_metadata(&"Border");
    Il2CppMethodInitialized_0754807c = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if ((obj != (System_Type_o *)0x0) &&
       (pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
       pIVar2 == (Il2CppObject *)0x0)) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_00,"ScaledContent",components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      (__this->fields)._scaledContent = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._scaledContent);
      pUVar3 = (__this->fields)._scaledContent;
      pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510
                  ((UnityEngine_Transform_o *)pUVar3,pUVar4,false,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar4 = UnityEngine_Transform__Find(pUVar4,"Background",(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent_692d510
                    (pUVar4,(UnityEngine_Transform_o *)(__this->fields)._scaledContent,false,(MethodInfo *)0x0
                    );
          pUVar4 = (__this->fields).SinglePanel;
          if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
             (pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
            pUVar3 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
            pUVar1 = TypeInfo_UnityEngine_RectTransform;
            if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
              (__this->fields)._panelContent = (UnityEngine_RectTransform_o *)0x0;
            }
            else if ((pUVar3->klass != TypeInfo_UnityEngine_RectTransform) ||
                    ((__this->fields)._panelContent = pUVar3, pUVar3->klass != pUVar1)) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
            }
            targetAddress = &(__this->fields)._panelContent;
            Il2CppCodeGenWriteBarrier(targetAddress);
            pUVar3 = *targetAddress;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_Transform__SetParent_692d510
                        ((UnityEngine_Transform_o *)pUVar3,
                         (UnityEngine_Transform_o *)(__this->fields)._scaledContent,false,(MethodInfo *)0x0);
              pUVar4 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
                 (pUVar4 = UnityEngine_Transform__Find(pUVar4,"Border",(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
                (*(__this->klass->vtable)._45_RefreshContentScale.methodPtr)
                          (__this,(__this->klass->vtable)._45_RefreshContentScale.method);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorScaledPanel$$GetPanelWidth
// il2cpp: float UI_MapEditorScaledPanel__GetPanelWidth (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x5d9a130

float UI_MapEditorScaledPanel__GetPanelWidth(UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  float fVar3;
  
  fVar3 = UI_BasePanel__GetPanelWidth((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0754807b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_0754807b = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 == (Settings_MapEditorSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).HUDScale, pSVar2 == (Settings_FloatSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return fVar3 / (pSVar2->fields)._value;
}


// UI.MapEditorScaledPanel$$GetPanelHeight
// il2cpp: float UI_MapEditorScaledPanel__GetPanelHeight (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x5d9a1a0

float UI_MapEditorScaledPanel__GetPanelHeight(UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  Settings_MapEditorSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                    (__this,(__this->klass->vtable)._34_GetHeight.method);
  if (Il2CppMethodInitialized_0754807b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_0754807b = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar2 == (Settings_MapEditorSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).HUDScale, pSVar3 == (Settings_FloatSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar1 = (pSVar3->fields)._value;
  fVar5 = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                    (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
  fVar6 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
  if (fVar5 <= fVar6) {
    fVar5 = fVar6;
  }
  fVar6 = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                    (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
  fVar7 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                    (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  fVar6 = (fVar4 / fVar1 - fVar5) - fVar6;
  fVar4 = 0.0;
  if (0.0 <= fVar6) {
    fVar4 = fVar6;
  }
  return fVar4;
}


// UI.MapEditorScaledPanel$$RefreshContentScale
// il2cpp: void UI_MapEditorScaledPanel__RefreshContentScale (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x5d9a2c0

void UI_MapEditorScaledPanel__RefreshContentScale(UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Settings_MapEditorSettings_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  bool bVar5;
  MethodInfo *method_00;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_0754807d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_0754807d = '\x01';
  }
  pUVar2 = (__this->fields)._scaledContent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    pUVar2 = (__this->fields)._scaledContent;
    if (Il2CppMethodInitialized_0754807b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
      Il2CppMethodInitialized_0754807b = '\x01';
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    if (((pSVar3 == (Settings_MapEditorSettings_o *)0x0) ||
        (pSVar4 = (pSVar3->fields).HUDScale, pSVar4 == (Settings_FloatSetting_o *)0x0)) ||
       (pUVar2 == (UnityEngine_RectTransform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    fVar1 = (pSVar4->fields)._value;
    value.fields.y = fVar1;
    value.fields.x = fVar1;
    method_00 = (MethodInfo *)0x0;
    value.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar2,value,(MethodInfo *)0x0);
    UI_MapEditorScaledPanel__RefreshContentDimensions(__this,method_00);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
  }
  return;
}


// UI.MapEditorScaledPanel$$OnRectTransformDimensionsChange
// il2cpp: void UI_MapEditorScaledPanel__OnRectTransformDimensionsChange (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x5d9a650

void UI_MapEditorScaledPanel__OnRectTransformDimensionsChange
               (UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *x;
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754807e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754807e = '\x01';
  }
  x = (__this->fields)._scaledContent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    UI_MapEditorScaledPanel__RefreshContentDimensions(__this,method_00);
    return;
  }
  return;
}


// UI.MapEditorScaledPanel$$RefreshContentDimensions
// il2cpp: void UI_MapEditorScaledPanel__RefreshContentDimensions (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x5d9a3e0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9a46f: cmp byte ptr [rip + 0x17adc05], 0
// asm:   0x5d9a476: jne 0x5d9a4a1
// asm:   0x5d9a632: jmp 0x5d9a4a1

void UI_MapEditorScaledPanel__RefreshContentDimensions(UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector2_o value_00;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  
  if (Il2CppMethodInitialized_0754807f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    Il2CppMethodInitialized_0754807f = '\x01';
  }
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    if (pUVar3->klass != TypeInfo_UnityEngine_RectTransform) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
    UVar11 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (Il2CppMethodInitialized_0754807b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
      Il2CppMethodInitialized_0754807b = '\x01';
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    if (((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).HUDScale, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
       (pUVar3 = (__this->fields)._scaledContent, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      fVar10 = (pSVar2->fields)._value;
      fVar9 = UVar11.fields.m_Width / fVar10;
      fVar10 = UVar11.fields.m_Height / fVar10;
      value_00.fields.y = fVar10;
      value_00.fields.x = fVar9;
      UnityEngine_RectTransform__set_sizeDelta(pUVar3,value_00,(MethodInfo *)0x0);
      fVar5 = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                        (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
      fVar6 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                        (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
      fVar7 = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                        (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
      fVar8 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                        (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
      pUVar3 = (__this->fields)._panelContent;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        if (fVar5 <= fVar6) {
          fVar5 = fVar6;
        }
        if (fVar7 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar7 = (fVar10 - fVar5) - fVar7;
        fVar10 = 0.0;
        if (0.0 <= fVar7) {
          fVar10 = fVar7;
        }
        value.fields.y = fVar10;
        value.fields.x = fVar9;
        UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._panelContent;
        if (((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
            (__this_00 = UnityEngine_Transform__Find
                                   ((UnityEngine_Transform_o *)pUVar3,"ScrollView",(MethodInfo *)0x0)
            , __this_00 != (UnityEngine_Transform_o *)0x0)) &&
           (pUVar4 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)__this_00,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_LayoutElement),
           pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
          (*(pUVar4->klass->vtable)._34_set_minHeight.methodPtr)
                    (pUVar4,fVar10,(pUVar4->klass->vtable)._34_set_minHeight.method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorScaledPanel$$.ctor
// il2cpp: void UI_MapEditorScaledPanel___ctor (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x5d9a6c0

void UI_MapEditorScaledPanel___ctor(UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


