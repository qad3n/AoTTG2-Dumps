// Type: UI.MapEditorScaledPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorScaledPanel.cs
// Prior real C# source: none
// --------------------------------

// UI.MapEditorScaledPanel$$get_HUDScale
// il2cpp: float UI_MapEditorScaledPanel__get_HUDScale (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x1822d1ce0

float UI_MapEditorScaledPanel__get_HUDScale(UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843475c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843475c0 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).HUDScale, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
    return (pSVar2->fields)._value;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorScaledPanel$$Setup
// il2cpp: void UI_MapEditorScaledPanel__Setup (UI_MapEditorScaledPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822d19f0

void UI_MapEditorScaledPanel__Setup
               (UI_MapEditorScaledPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  
  if (Il2CppMethodInitialized_1843475c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaledContent");
    il2cpp_codegen_initialize_runtime_metadata(&"Border");
    Il2CppMethodInitialized_1843475c1 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this_00,"ScaledContent",components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      (__this->fields)._scaledContent = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._scaledContent,pUVar2);
      pUVar2 = (__this->fields)._scaledContent;
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0
                  ((UnityEngine_Transform_o *)pUVar2,pUVar3,false,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Transform__Find(pUVar3,"Background",(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0
                      (pUVar3,(UnityEngine_Transform_o *)(__this->fields)._scaledContent,false,
                       (MethodInfo *)0x0);
            pUVar3 = (__this->fields).SinglePanel;
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              pUVar3 = UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = (UnityEngine_RectTransform_o *)
                         UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0);
                pUVar2 = (UnityEngine_RectTransform_o *)0x0;
                if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) {
                  (__this->fields)._panelContent = (UnityEngine_RectTransform_o *)0x0;
                }
                else {
                  pUVar5 = pUVar2;
                  if (pUVar4->klass == TypeInfo_UnityEngine_RectTransform) {
                    pUVar5 = pUVar4;
                  }
                  if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
                    il2cpp_codegen_raise_invalid_cast_exception(pUVar4,TypeInfo_UnityEngine_RectTransform);
                  }
                  (__this->fields)._panelContent = pUVar5;
                  if (pUVar4->klass == TypeInfo_UnityEngine_RectTransform) {
                    pUVar2 = pUVar4;
                  }
                  if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
                    il2cpp_codegen_raise_invalid_cast_exception(pUVar4,TypeInfo_UnityEngine_RectTransform);
                  }
                }
                Il2CppCodeGenWriteBarrier(&(__this->fields)._panelContent,pUVar2);
                pUVar2 = (__this->fields)._panelContent;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_Transform__SetParent_2f5a7e0
                            ((UnityEngine_Transform_o *)pUVar2,
                             (UnityEngine_Transform_o *)(__this->fields)._scaledContent,false,
                             (MethodInfo *)0x0);
                  pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Border",(MethodInfo *)0x0);
                    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                      UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
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
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorScaledPanel$$GetPanelWidth
// il2cpp: float UI_MapEditorScaledPanel__GetPanelWidth (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x1822d1520

float UI_MapEditorScaledPanel__GetPanelWidth(UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  float fVar3;
  
  fVar3 = UI_BasePanel__GetPanelWidth((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_1843475c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843475c0 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).HUDScale, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
    return fVar3 / (pSVar2->fields)._value;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorScaledPanel$$GetPanelHeight
// il2cpp: float UI_MapEditorScaledPanel__GetPanelHeight (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x1822d1400

float UI_MapEditorScaledPanel__GetPanelHeight(UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  MethodInfo *in_R8;
  float extraout_XMM0_Da;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  (*(__this->klass->vtable)._34_GetHeight.methodPtr)
            (__this,(System_Int32_array *)(__this->klass->vtable)._34_GetHeight.method,in_R8);
  if (Il2CppMethodInitialized_1843475c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843475c0 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).HUDScale, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
    fVar6 = (pSVar2->fields)._value;
    fVar3 = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                      (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
    fVar4 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                      (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                      (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
    fVar5 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                      (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar4 = (extraout_XMM0_Da / fVar6 - fVar3) - fVar4;
    fVar6 = 0.0;
    if (0.0 <= fVar4) {
      fVar6 = fVar4;
    }
    return fVar6;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorScaledPanel$$RefreshContentScale
// il2cpp: void UI_MapEditorScaledPanel__RefreshContentScale (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x1822d1860

void UI_MapEditorScaledPanel__RefreshContentScale(UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Settings_MapEditorSettings_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  bool bVar5;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_1843475c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843475c2 = '\x01';
  }
  pUVar2 = (__this->fields)._scaledContent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pUVar2 = (__this->fields)._scaledContent;
  if (Il2CppMethodInitialized_1843475c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843475c0 = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar3 != (Settings_MapEditorSettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).HUDScale, pSVar4 != (Settings_FloatSetting_o *)0x0)) {
    fVar1 = (pSVar4->fields)._value;
    if (Il2CppMethodInitialized_1843475c0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
      Il2CppMethodInitialized_1843475c0 = '\x01';
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    if (((pSVar3 != (Settings_MapEditorSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).HUDScale, pSVar4 != (Settings_FloatSetting_o *)0x0)) &&
       (pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      local_28[0].fields.y = (pSVar4->fields)._value;
      local_28[0].fields.z = 1.0;
      local_28[0].fields.x = fVar1;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar2,local_28,(MethodInfo *)0x0);
      UI_MapEditorScaledPanel__RefreshContentDimensions(__this,(MethodInfo *)0x0);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      TypeInfo_UI_UIManager->static_fields->NeedResizeText = true;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorScaledPanel$$OnRectTransformDimensionsChange
// il2cpp: void UI_MapEditorScaledPanel__OnRectTransformDimensionsChange (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x1822d15a0

void UI_MapEditorScaledPanel__OnRectTransformDimensionsChange
               (UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843475c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843475c3 = '\x01';
  }
  x = (__this->fields)._scaledContent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    UI_MapEditorScaledPanel__RefreshContentDimensions(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorScaledPanel$$RefreshContentDimensions
// il2cpp: void UI_MapEditorScaledPanel__RefreshContentDimensions (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x1822d1610

void UI_MapEditorScaledPanel__RefreshContentDimensions(UI_MapEditorScaledPanel_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Rect_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Rect_o local_58 [5];
  
  if (Il2CppMethodInitialized_1843475c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    Il2CppMethodInitialized_1843475c4 = '\x01';
  }
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar6 = pUVar3;
    }
    if (pUVar6 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3,TypeInfo_UnityEngine_RectTransform);
    }
    pUVar6 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar6 = pUVar3;
    }
    pUVar4 = UnityEngine_RectTransform__get_rect(local_58,pUVar6,(MethodInfo *)0x0);
    fVar10 = (pUVar4->fields).m_Width;
    fVar11 = (pUVar4->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (Il2CppMethodInitialized_1843475c0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
      Il2CppMethodInitialized_1843475c0 = '\x01';
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    if ((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).HUDScale, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
      fVar7 = (pSVar2->fields)._value;
      pUVar3 = (__this->fields)._scaledContent;
      fVar10 = fVar10 / fVar7;
      fVar11 = fVar11 / fVar7;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        value.fields.y = fVar11;
        value.fields.x = fVar10;
        UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
        fVar7 = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                          (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
        fVar8 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                          (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
        if (fVar7 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                          (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
        fVar9 = (*(__this->klass->vtable)._7_get_BorderVerticalPadding.methodPtr)
                          (__this,(__this->klass->vtable)._7_get_BorderVerticalPadding.method);
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        fVar8 = (fVar11 - fVar7) - fVar8;
        fVar11 = 0.0;
        if (0.0 <= fVar8) {
          fVar11 = fVar8;
        }
        pUVar3 = (__this->fields)._panelContent;
        if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
          value_00.fields.y = fVar11;
          value_00.fields.x = fVar10;
          UnityEngine_RectTransform__set_sizeDelta(pUVar3,value_00,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._panelContent;
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            __this_00 = UnityEngine_Transform__Find
                                  ((UnityEngine_Transform_o *)pUVar3,"ScrollView",(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_Transform_o *)0x0) {
              pUVar5 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)__this_00,
                                  (MethodInfo_6651A0 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
              if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar5->klass->vtable)._34_set_minHeight.methodPtr)
                          (pUVar5,fVar11,(pUVar5->klass->vtable)._34_set_minHeight.method);
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


// UI.MapEditorScaledPanel$$.ctor
// il2cpp: void UI_MapEditorScaledPanel___ctor (UI_MapEditorScaledPanel_o* __this, const MethodInfo* method);
// 0x1821d6e20

void
UI_MapEditorScaledPanel___ctor(UI_MapEditorScaledPanel_o* __this, MethodInfo* method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


