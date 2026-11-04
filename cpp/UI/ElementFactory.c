// Type: UI.ElementFactory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ElementFactory.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/ElementFactory.cs
// --------------------------------

// UI.ElementFactory$$CreateDefaultMenu<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateDefaultMenu_object_ (const MethodInfo_6AB8E0* method);
// 0x1806ab8e0

Il2CppObject * UI_ElementFactory__CreateDefaultMenu_object_(MethodInfo_6AB8E0 *method)

{
  MethodInfo *method_00;
  System_String_o *path;
  UnityEngine_Vector3_StaticFields *pUVar1;
  System_String_o *name;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_Vector3_Fields local_18;
  
  if (method->rgctx_data == (MethodInfo_6AB8E0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/DefaultMenu");
    if (method->rgctx_data == (MethodInfo_6AB8E0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  name = "Prefabs/Panels/DefaultMenu";
  method_00 = method->rgctx_data->_0_UI_ElementFactory_CreateMenu_T_;
  if ((method_00->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    if ((method_00->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      il2cpp_codegen_rgctx_method_init(method_00);
    }
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,name,true,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_18.x = (pUVar1->zeroVector).fields.x;
      local_18.y = (pUVar1->zeroVector).fields.y;
      local_18.z = (pUVar1->zeroVector).fields.z;
      UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      pIVar2 = UnityEngine_GameObject__AddComponent_object_
                         (__this,(MethodInfo_6F4D60 *)((method_00->field7_0x38).rgctx_data)->method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateMenu<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateMenu_object_ (System_String_o* asset, const MethodInfo_6ABB40* method);
// 0x1806abb40

Il2CppObject * UI_ElementFactory__CreateMenu_object_(System_String_o *asset,MethodInfo_6ABB40 *method)

{
  System_String_o *path;
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_Vector3_Fields local_18;
  
  if (method->rgctx_data == (MethodInfo_6ABB40_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    if (method->rgctx_data == (MethodInfo_6ABB40_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,asset,true,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_18.x = (pUVar1->zeroVector).fields.x;
      local_18.y = (pUVar1->zeroVector).fields.y;
      local_18.z = (pUVar1->zeroVector).fields.z;
      UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      pIVar2 = UnityEngine_GameObject__AddComponent_object_
                         (__this,(MethodInfo_6F4D60 *)
                                 method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateEmptyPanel<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateEmptyPanel_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_6ABAC0* method);
// 0x1806abac0

Il2CppObject *
UI_ElementFactory__CreateEmptyPanel_object_
          (UnityEngine_Transform_o *parent,bool enabled,MethodInfo_6ABAC0 *method)

{
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_6ABAC0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/EmptyPanel");
    if (method->rgctx_data == (MethodInfo_6ABAC0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = (UnityEngine_GameObject_o *)
           il2cpp_runtime_helper_180026d30(parent,"Prefabs/Panels/EmptyPanel",enabled,
                         method->rgctx_data->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)
                               method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateEmptyPanel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateEmptyPanel (UnityEngine_Transform_o* parent, System_Type_o* t, bool enabled, const MethodInfo* method);
// 0x18220d7d0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateEmptyPanel
          (UnityEngine_Transform_o *parent,System_Type_o *t,bool enabled,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Component_c *pUVar2;
  UnityEngine_Object_o *__this;
  System_String_o *value;
  UnityEngine_Component_o *pUVar3;
  UI_BasePanel_o *pUVar4;
  
  if (Il2CppMethodInitialized_1843470c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/EmptyPanel");
    Il2CppMethodInitialized_1843470c8 = '\x01';
  }
  __this = (UnityEngine_Object_o *)
           UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Panels/EmptyPanel",(MethodInfo *)0x0);
  if (t != (System_Type_o *)0x0) {
    value = (System_String_o *)
            (*(t->klass->vtable)._8_unknown.methodPtr)(t,(t->klass->vtable)._8_unknown.method);
    if (__this != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this,value,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_GameObject__AddComponent((UnityEngine_GameObject_o *)__this,t,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)parent,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
        if (pUVar3 != (UnityEngine_Component_o *)0x0) {
          pUVar2 = pUVar3->klass;
          bVar1 = (TypeInfo_UI_BasePanel->_2).typeHierarchyDepth;
          if ((bVar1 <= (pUVar2->_2).typeHierarchyDepth) &&
             ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_BasePanel)) {
            (**(code **)&((Il2CppClass *)pUVar2)->vtable[20].methodPtr)(pUVar3,pUVar4);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this,enabled,(MethodInfo *)0x0);
            return (UnityEngine_GameObject_o *)__this;
          }
          il2cpp_codegen_raise_invalid_cast_exception(pUVar3,TypeInfo_UI_BasePanel);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateSimplePanel<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateSimplePanel_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_6ABC70* method);
// 0x1806abc70

Il2CppObject *
UI_ElementFactory__CreateSimplePanel_object_
          (UnityEngine_Transform_o *parent,bool enabled,MethodInfo_6ABC70 *method)

{
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_6ABC70_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/SimplePanel");
    if (method->rgctx_data == (MethodInfo_6ABC70_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = (UnityEngine_GameObject_o *)
           il2cpp_runtime_helper_180026d30(parent,"Prefabs/Panels/SimplePanel",enabled,
                         method->rgctx_data->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)
                               method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateDefaultPopup<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateDefaultPopup_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_6ABA40* method);
// 0x1806aba40

Il2CppObject*
UI_ElementFactory__CreateDefaultPopup_object_(UnityEngine_Transform_o* parent, bool enabled, MethodInfo_6ABA40* method)

{
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_6ABA40_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/HeadedPanel");
    if (method->rgctx_data == (MethodInfo_6ABA40_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = (UnityEngine_GameObject_o *)
           il2cpp_runtime_helper_180026d30(parent,"Prefabs/Panels/HeadedPanel",enabled,
                         method->rgctx_data->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)
                               method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateHeadedPanel<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateHeadedPanel_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_6ABA40* method);
// 0x1806aba40

Il2CppObject *
UI_ElementFactory__CreateHeadedPanel_object_
          (UnityEngine_Transform_o *parent,bool enabled,MethodInfo_6ABA40 *method)

{
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_6ABA40_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/HeadedPanel");
    if (method->rgctx_data == (MethodInfo_6ABA40_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = (UnityEngine_GameObject_o *)
           il2cpp_runtime_helper_180026d30(parent,"Prefabs/Panels/HeadedPanel",enabled,
                         method->rgctx_data->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)
                               method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateTooltipPopup<object>
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTooltipPopup_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_6ABCF0* method);
// 0x1806abcf0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTooltipPopup_object_
          (UnityEngine_Transform_o *parent,bool enabled,MethodInfo_6ABCF0 *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  if (method->rgctx_data == (MethodInfo_6ABCF0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/TooltipPopup");
    if (method->rgctx_data == (MethodInfo_6ABCF0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  pUVar1 = (UnityEngine_GameObject_o *)
           il2cpp_runtime_helper_180026d30(parent,"Prefabs/Misc/TooltipPopup",enabled,
                         method->rgctx_data->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_);
  return pUVar1;
}


// UI.ElementFactory$$CreateTipPanel
// il2cpp: UI_TipPanel_o* UI_ElementFactory__CreateTipPanel (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo* method);
// 0x1822102e0

UI_TipPanel_o *
UI_ElementFactory__CreateTipPanel(UnityEngine_Transform_o *parent,bool enabled,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UI_TipPanel_o *__this;
  
  if (Il2CppMethodInitialized_1843470c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TipPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/TipPanel");
    Il2CppMethodInitialized_1843470c9 = '\x01';
  }
  pUVar1 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/MainMenu/TipPanel",(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (pUVar1,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_TipPanel);
    if (__this != (UI_TipPanel_o *)0x0) {
      UI_TipPanel__Setup(__this,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar1,enabled,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateDefaultButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateDefaultButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x18220c9b0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDefaultButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,float elementWidth,
          float elementHeight,UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  System_String_o *panel;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_UI_ColorBlock_o *pUVar4;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Color_Fields local_118;
  UnityEngine_UI_ColorBlock_o local_108;
  UnityEngine_UI_ColorBlock_o local_a8;
  
  if (Il2CppMethodInitialized_1843470ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843470ca = '\x01';
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultButton",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
          (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                    (__this_01,title,(__this_01->klass->vtable)._75_set_text.method);
          if (style != (UI_ElementStyle_o *)0x0) {
            UnityEngine_UI_Text__set_fontSize(__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               (__this_00,
                                (MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (0.0 < elementWidth) {
              if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220cccf;
              (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
            }
            if (0.0 < elementHeight) {
              if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220cccf;
              (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                        (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
            }
            if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
              if ((pUVar3 == (UnityEngine_UI_Button_o *)0x0) ||
                 (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick,
                 __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_18220cccf;
              UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
            }
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this_00,
                                (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
            panel = (style->fields).ThemePanel;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar4 = UI_UIManager__GetThemeColorBlock
                               (&local_a8,panel,"DefaultButton","",
                                "DefaultPanel",(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
              local_108.fields.m_NormalColor.fields.r = (pUVar4->fields).m_NormalColor.fields.r;
              local_108.fields.m_NormalColor.fields.g = (pUVar4->fields).m_NormalColor.fields.g;
              local_108.fields.m_NormalColor.fields.b = (pUVar4->fields).m_NormalColor.fields.b;
              local_108.fields.m_NormalColor.fields.a = (pUVar4->fields).m_NormalColor.fields.a;
              local_108.fields.m_HighlightedColor.fields.r = (pUVar4->fields).m_HighlightedColor.fields.r;
              local_108.fields.m_HighlightedColor.fields.g = (pUVar4->fields).m_HighlightedColor.fields.g;
              local_108.fields.m_HighlightedColor.fields.b = (pUVar4->fields).m_HighlightedColor.fields.b;
              local_108.fields.m_HighlightedColor.fields.a = (pUVar4->fields).m_HighlightedColor.fields.a;
              local_108.fields.m_PressedColor.fields.r = (pUVar4->fields).m_PressedColor.fields.r;
              local_108.fields.m_PressedColor.fields.g = (pUVar4->fields).m_PressedColor.fields.g;
              local_108.fields.m_PressedColor.fields.b = (pUVar4->fields).m_PressedColor.fields.b;
              local_108.fields.m_PressedColor.fields.a = (pUVar4->fields).m_PressedColor.fields.a;
              local_108.fields.m_SelectedColor.fields.r = (pUVar4->fields).m_SelectedColor.fields.r;
              local_108.fields.m_SelectedColor.fields.g = (pUVar4->fields).m_SelectedColor.fields.g;
              local_108.fields.m_SelectedColor.fields.b = (pUVar4->fields).m_SelectedColor.fields.b;
              local_108.fields.m_SelectedColor.fields.a = (pUVar4->fields).m_SelectedColor.fields.a;
              local_108.fields.m_DisabledColor.fields.r = (pUVar4->fields).m_DisabledColor.fields.r;
              local_108.fields.m_DisabledColor.fields.g = (pUVar4->fields).m_DisabledColor.fields.g;
              local_108.fields.m_DisabledColor.fields.b = (pUVar4->fields).m_DisabledColor.fields.b;
              local_108.fields.m_DisabledColor.fields.a = (pUVar4->fields).m_DisabledColor.fields.a;
              local_108.fields.m_ColorMultiplier = (pUVar4->fields).m_ColorMultiplier;
              local_108.fields.m_FadeDuration = (pUVar4->fields).m_FadeDuration;
              UnityEngine_UI_Selectable__set_colors
                        ((UnityEngine_UI_Selectable_o *)pUVar3,&local_108,(MethodInfo *)0x0);
              pUVar5 = UI_UIManager__GetThemeColor
                                 ((UnityEngine_Color_o *)&local_118,(style->fields).ThemePanel,
                                  "DefaultButton","TextColor","DefaultPanel",
                                  (MethodInfo *)0x0);
              local_118.r = (pUVar5->fields).r;
              local_118.g = (pUVar5->fields).g;
              local_118.b = (pUVar5->fields).b;
              local_118.a = (pUVar5->fields).a;
              (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                        (__this_01,(UnityEngine_Color_o *)&local_118,
                         (__this_01->klass->vtable)._23_set_color.method);
              return __this_00;
            }
          }
        }
      }
    }
  }
label_18220cccf:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreatePerkButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreatePerkButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, float offset, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x18220f360

UnityEngine_GameObject_o *
UI_ElementFactory__CreatePerkButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          System_String_o *tooltip,float elementWidth,float elementHeight,float offset,
          UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  System_String_o *panel;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UI_PerkButton_o *pUVar3;
  UnityEngine_UI_Button_o *pUVar4;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Color_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_1843470cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_PerkButton);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/PerkButton");
    Il2CppMethodInitialized_1843470cb = '\x01';
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Misc/PerkButton",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
          (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                    (__this_01,title,(__this_01->klass->vtable)._75_set_text.method);
          if (style != (UI_ElementStyle_o *)0x0) {
            UnityEngine_UI_Text__set_fontSize(__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               (__this_00,
                                (MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (0.0 < elementWidth) {
              if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220f61d;
              (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
            }
            if (0.0 < elementHeight) {
              if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220f61d;
              (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                        (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
            }
            pUVar3 = UnityEngine_GameObject__AddComponent_object_
                               (__this_00,
                                (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_PerkButton
                               );
            if (pUVar3 != (UI_PerkButton_o *)0x0) {
              (*(pUVar3->klass->vtable)._43_Setup.methodPtr)
                        (pUVar3,tooltip,style,offset,(pUVar3->klass->vtable)._43_Setup.method);
              if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
                pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_00,
                                    (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button
                                   );
                if ((pUVar4 == (UnityEngine_UI_Button_o *)0x0) ||
                   (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar4->fields).m_OnClick,
                   __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_18220f61d;
                UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
              }
              panel = (style->fields).ThemePanel;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pUVar5 = UI_UIManager__GetThemeColor
                                 ((UnityEngine_Color_o *)local_38,panel,"DefaultButton",
                                  "TextColor","DefaultPanel",(MethodInfo *)0x0);
              local_38[0].r = (pUVar5->fields).r;
              local_38[0].g = (pUVar5->fields).g;
              local_38[0].b = (pUVar5->fields).b;
              local_38[0].a = (pUVar5->fields).a;
              (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                        (__this_01,(UnityEngine_Color_o *)local_38,
                         (__this_01->klass->vtable)._23_set_color.method);
              return __this_00;
            }
          }
        }
      }
    }
  }
label_18220f61d:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateIconButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateIconButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* icon, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x18220dea0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateIconButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *icon,float elementWidth,
          float elementHeight,UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  System_String_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_Texture_o *pUVar4;
  UnityEngine_UI_ColorBlock_o *pUVar5;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_ColorBlock_o local_d8;
  UnityEngine_UI_ColorBlock_o local_78;
  
  if (Il2CppMethodInitialized_1843470cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/IconButton");
    il2cpp_codegen_initialize_runtime_metadata(&"IconButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843470cc = '\x01';
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/IconButton",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,
                        (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
      (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
      if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        if ((pUVar3 == (UnityEngine_UI_Button_o *)0x0) ||
           (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick,
           __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_18220e18e;
        UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
      }
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar4 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset(pSVar1,icon,true,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
        value = (UnityEngine_Texture_o *)0x0;
        if (pUVar4 != (UnityEngine_Texture_o *)0x0) {
          if (pUVar4->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            value = pUVar4;
          }
          if (value == (UnityEngine_Texture_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar4,TypeInfo_UnityEngine_Texture2D);
          }
        }
        UnityEngine_UI_RawImage__set_texture(__this_01,value,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        if (style != (UI_ElementStyle_o *)0x0) {
          pSVar1 = (style->fields).ThemePanel;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar5 = UI_UIManager__GetThemeColorBlock
                             (&local_78,pSVar1,"IconButton","",
                              "DefaultPanel",(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
            local_d8.fields.m_NormalColor.fields.r = (pUVar5->fields).m_NormalColor.fields.r;
            local_d8.fields.m_NormalColor.fields.g = (pUVar5->fields).m_NormalColor.fields.g;
            local_d8.fields.m_NormalColor.fields.b = (pUVar5->fields).m_NormalColor.fields.b;
            local_d8.fields.m_NormalColor.fields.a = (pUVar5->fields).m_NormalColor.fields.a;
            local_d8.fields.m_HighlightedColor.fields.r = (pUVar5->fields).m_HighlightedColor.fields.r;
            local_d8.fields.m_HighlightedColor.fields.g = (pUVar5->fields).m_HighlightedColor.fields.g;
            local_d8.fields.m_HighlightedColor.fields.b = (pUVar5->fields).m_HighlightedColor.fields.b;
            local_d8.fields.m_HighlightedColor.fields.a = (pUVar5->fields).m_HighlightedColor.fields.a;
            local_d8.fields.m_PressedColor.fields.r = (pUVar5->fields).m_PressedColor.fields.r;
            local_d8.fields.m_PressedColor.fields.g = (pUVar5->fields).m_PressedColor.fields.g;
            local_d8.fields.m_PressedColor.fields.b = (pUVar5->fields).m_PressedColor.fields.b;
            local_d8.fields.m_PressedColor.fields.a = (pUVar5->fields).m_PressedColor.fields.a;
            local_d8.fields.m_SelectedColor.fields.r = (pUVar5->fields).m_SelectedColor.fields.r;
            local_d8.fields.m_SelectedColor.fields.g = (pUVar5->fields).m_SelectedColor.fields.g;
            local_d8.fields.m_SelectedColor.fields.b = (pUVar5->fields).m_SelectedColor.fields.b;
            local_d8.fields.m_SelectedColor.fields.a = (pUVar5->fields).m_SelectedColor.fields.a;
            local_d8.fields.m_DisabledColor.fields.r = (pUVar5->fields).m_DisabledColor.fields.r;
            local_d8.fields.m_DisabledColor.fields.g = (pUVar5->fields).m_DisabledColor.fields.g;
            local_d8.fields.m_DisabledColor.fields.b = (pUVar5->fields).m_DisabledColor.fields.b;
            local_d8.fields.m_DisabledColor.fields.a = (pUVar5->fields).m_DisabledColor.fields.a;
            local_d8.fields.m_ColorMultiplier = (pUVar5->fields).m_ColorMultiplier;
            local_d8.fields.m_FadeDuration = (pUVar5->fields).m_FadeDuration;
            UnityEngine_UI_Selectable__set_colors
                      ((UnityEngine_UI_Selectable_o *)pUVar3,&local_d8,(MethodInfo *)0x0);
            return __this_00;
          }
        }
      }
    }
  }
label_18220e18e:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateRawImage
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateRawImage (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* image, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x18220f6f0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateRawImage
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *image,float elementWidth,
          float elementHeight,MethodInfo *method)

{
  System_String_o *path;
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_Texture_o *pUVar3;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_1843470cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/RawImage");
    Il2CppMethodInitialized_1843470cd = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/RawImage",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage
                          );
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
      (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
      bVar1 = System_String__op_Inequality
                        (image,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pUVar3 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(path,image,true,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_18220f89a;
        value = (UnityEngine_Texture_o *)0x0;
        if (pUVar3 != (UnityEngine_Texture_o *)0x0) {
          if (pUVar3->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            value = pUVar3;
          }
          if (value == (UnityEngine_Texture_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar3,TypeInfo_UnityEngine_Texture2D);
          }
        }
        UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
      }
      return __this;
    }
  }
label_18220f89a:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateTooltipIcon
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTooltipIcon (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x182210880

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTooltipIcon
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *tooltip,
          float elementWidth,float elementHeight,MethodInfo *method)

{
  System_String_o *path;
  System_String_o *a;
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_Texture_o *pUVar3;
  UI_TooltipButton_o *pUVar4;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_1843470ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TooltipButton);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/TooltipIcon");
    Il2CppMethodInitialized_1843470ce = '\x01';
  }
  a = "Icons/Navigation/TooltipIcon";
  if (Il2CppMethodInitialized_1843470cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/RawImage");
    Il2CppMethodInitialized_1843470cd = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/RawImage",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage
                          );
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
      (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
      bVar1 = System_String__op_Inequality
                        (a,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pUVar3 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(path,a,true,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_182210a92;
        value = (UnityEngine_Texture_o *)0x0;
        if (pUVar3 != (UnityEngine_Texture_o *)0x0) {
          if (pUVar3->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            value = pUVar3;
          }
          if (value == (UnityEngine_Texture_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar3,TypeInfo_UnityEngine_Texture2D);
          }
        }
        UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
      }
      pUVar4 = UnityEngine_GameObject__AddComponent_object_
                         (__this,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_TooltipButton);
      if (pUVar4 != (UI_TooltipButton_o *)0x0) {
        (*(pUVar4->klass->vtable)._43_Setup.methodPtr)
                  (pUVar4,tooltip,style,(pUVar4->klass->vtable)._43_Setup.method);
        return __this;
      }
    }
  }
label_182210a92:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateTextButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTextButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, float width, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x182210090

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTextButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,float width,
          UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  System_String_o *panel;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar1;
  UnityEngine_UI_Button_o *pUVar2;
  UnityEngine_UI_ColorBlock_o *pUVar3;
  UnityEngine_UI_ColorBlock_o local_f8;
  UnityEngine_UI_ColorBlock_o local_98;
  
  if (Il2CppMethodInitialized_1843470cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/TextButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"TextButton");
    Il2CppMethodInitialized_1843470cf = '\x01';
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/TextButton",(MethodInfo *)0x0);
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_01 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text),
      __this_01 != (UnityEngine_UI_Text_o *)0x0)) &&
     ((*(__this_01->klass->vtable)._75_set_text.methodPtr)
                (__this_01,title,(__this_01->klass->vtable)._75_set_text.method),
     style != (UI_ElementStyle_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_fontStyle(__this_01,1,(MethodInfo *)0x0);
    if (width != 0.0) {
      pUVar1 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this_01,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
      if (pUVar1 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822102d3;
      (*(pUVar1->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar1,width,(pUVar1->klass->vtable)._36_set_preferredWidth.method);
    }
    if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button
                         );
      if ((pUVar2 == (UnityEngine_UI_Button_o *)0x0) ||
         (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar2->fields).m_OnClick,
         __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_1822102d3;
      UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
    }
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    panel = (style->fields).ThemePanel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = UI_UIManager__GetThemeColorBlock
                       (&local_98,panel,"TextButton","","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
      local_f8.fields.m_NormalColor.fields.r = (pUVar3->fields).m_NormalColor.fields.r;
      local_f8.fields.m_NormalColor.fields.g = (pUVar3->fields).m_NormalColor.fields.g;
      local_f8.fields.m_NormalColor.fields.b = (pUVar3->fields).m_NormalColor.fields.b;
      local_f8.fields.m_NormalColor.fields.a = (pUVar3->fields).m_NormalColor.fields.a;
      local_f8.fields.m_HighlightedColor.fields.r = (pUVar3->fields).m_HighlightedColor.fields.r;
      local_f8.fields.m_HighlightedColor.fields.g = (pUVar3->fields).m_HighlightedColor.fields.g;
      local_f8.fields.m_HighlightedColor.fields.b = (pUVar3->fields).m_HighlightedColor.fields.b;
      local_f8.fields.m_HighlightedColor.fields.a = (pUVar3->fields).m_HighlightedColor.fields.a;
      local_f8.fields.m_PressedColor.fields.r = (pUVar3->fields).m_PressedColor.fields.r;
      local_f8.fields.m_PressedColor.fields.g = (pUVar3->fields).m_PressedColor.fields.g;
      local_f8.fields.m_PressedColor.fields.b = (pUVar3->fields).m_PressedColor.fields.b;
      local_f8.fields.m_PressedColor.fields.a = (pUVar3->fields).m_PressedColor.fields.a;
      local_f8.fields.m_SelectedColor.fields.r = (pUVar3->fields).m_SelectedColor.fields.r;
      local_f8.fields.m_SelectedColor.fields.g = (pUVar3->fields).m_SelectedColor.fields.g;
      local_f8.fields.m_SelectedColor.fields.b = (pUVar3->fields).m_SelectedColor.fields.b;
      local_f8.fields.m_SelectedColor.fields.a = (pUVar3->fields).m_SelectedColor.fields.a;
      local_f8.fields.m_DisabledColor.fields.r = (pUVar3->fields).m_DisabledColor.fields.r;
      local_f8.fields.m_DisabledColor.fields.g = (pUVar3->fields).m_DisabledColor.fields.g;
      local_f8.fields.m_DisabledColor.fields.b = (pUVar3->fields).m_DisabledColor.fields.b;
      local_f8.fields.m_DisabledColor.fields.a = (pUVar3->fields).m_DisabledColor.fields.a;
      local_f8.fields.m_ColorMultiplier = (pUVar3->fields).m_ColorMultiplier;
      local_f8.fields.m_FadeDuration = (pUVar3->fields).m_FadeDuration;
      UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pUVar2,&local_f8,(MethodInfo *)0x0)
      ;
      return __this_00;
    }
  }
label_1822102d3:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateLinkButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateLinkButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x18220e770

UnityEngine_GameObject_o *
UI_ElementFactory__CreateLinkButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  System_String_o *panel;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_UI_ColorBlock_o *pUVar2;
  UnityEngine_UI_ColorBlock_o local_e8;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_1843470d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"LinkButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/TextButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843470d0 = '\x01';
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/TextButton",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
    ;
    if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
      (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                (__this_01,title,(__this_01->klass->vtable)._75_set_text.method);
      if (style != (UI_ElementStyle_o *)0x0) {
        UnityEngine_UI_Text__set_fontSize(__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
        if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
          pUVar1 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          if ((pUVar1 == (UnityEngine_UI_Button_o *)0x0) ||
             (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar1->fields).m_OnClick,
             __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_18220e94b;
          UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
        }
        pUVar1 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        panel = (style->fields).ThemePanel;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar2 = UI_UIManager__GetThemeColorBlock
                           (&local_88,panel,"LinkButton","","DefaultPanel",
                            (MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
          local_e8.fields.m_NormalColor.fields.r = (pUVar2->fields).m_NormalColor.fields.r;
          local_e8.fields.m_NormalColor.fields.g = (pUVar2->fields).m_NormalColor.fields.g;
          local_e8.fields.m_NormalColor.fields.b = (pUVar2->fields).m_NormalColor.fields.b;
          local_e8.fields.m_NormalColor.fields.a = (pUVar2->fields).m_NormalColor.fields.a;
          local_e8.fields.m_HighlightedColor.fields.r = (pUVar2->fields).m_HighlightedColor.fields.r;
          local_e8.fields.m_HighlightedColor.fields.g = (pUVar2->fields).m_HighlightedColor.fields.g;
          local_e8.fields.m_HighlightedColor.fields.b = (pUVar2->fields).m_HighlightedColor.fields.b;
          local_e8.fields.m_HighlightedColor.fields.a = (pUVar2->fields).m_HighlightedColor.fields.a;
          local_e8.fields.m_PressedColor.fields.r = (pUVar2->fields).m_PressedColor.fields.r;
          local_e8.fields.m_PressedColor.fields.g = (pUVar2->fields).m_PressedColor.fields.g;
          local_e8.fields.m_PressedColor.fields.b = (pUVar2->fields).m_PressedColor.fields.b;
          local_e8.fields.m_PressedColor.fields.a = (pUVar2->fields).m_PressedColor.fields.a;
          local_e8.fields.m_SelectedColor.fields.r = (pUVar2->fields).m_SelectedColor.fields.r;
          local_e8.fields.m_SelectedColor.fields.g = (pUVar2->fields).m_SelectedColor.fields.g;
          local_e8.fields.m_SelectedColor.fields.b = (pUVar2->fields).m_SelectedColor.fields.b;
          local_e8.fields.m_SelectedColor.fields.a = (pUVar2->fields).m_SelectedColor.fields.a;
          local_e8.fields.m_DisabledColor.fields.r = (pUVar2->fields).m_DisabledColor.fields.r;
          local_e8.fields.m_DisabledColor.fields.g = (pUVar2->fields).m_DisabledColor.fields.g;
          local_e8.fields.m_DisabledColor.fields.b = (pUVar2->fields).m_DisabledColor.fields.b;
          local_e8.fields.m_DisabledColor.fields.a = (pUVar2->fields).m_DisabledColor.fields.a;
          local_e8.fields.m_ColorMultiplier = (pUVar2->fields).m_ColorMultiplier;
          local_e8.fields.m_FadeDuration = (pUVar2->fields).m_FadeDuration;
          UnityEngine_UI_Selectable__set_colors
                    ((UnityEngine_UI_Selectable_o *)pUVar1,&local_e8,(MethodInfo *)0x0);
          return __this_00;
        }
      }
    }
  }
label_18220e94b:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateCategoryButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateCategoryButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x18220bd70

UnityEngine_GameObject_o *
UI_ElementFactory__CreateCategoryButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  System_String_o *panel;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_UI_ColorBlock_o *pUVar2;
  UnityEngine_UI_ColorBlock_o local_e8;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_1843470d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/CategoryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"CategoryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843470d1 = '\x01';
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/CategoryButton",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text)
    ;
    if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
      (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                (__this_01,title,(__this_01->klass->vtable)._75_set_text.method);
      if (style != (UI_ElementStyle_o *)0x0) {
        UnityEngine_UI_Text__set_fontSize(__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
        if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
          pUVar1 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          if ((pUVar1 == (UnityEngine_UI_Button_o *)0x0) ||
             (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar1->fields).m_OnClick,
             __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_18220bf4b;
          UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
        }
        pUVar1 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        panel = (style->fields).ThemePanel;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar2 = UI_UIManager__GetThemeColorBlock
                           (&local_88,panel,"CategoryButton","","DefaultPanel",
                            (MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
          local_e8.fields.m_NormalColor.fields.r = (pUVar2->fields).m_NormalColor.fields.r;
          local_e8.fields.m_NormalColor.fields.g = (pUVar2->fields).m_NormalColor.fields.g;
          local_e8.fields.m_NormalColor.fields.b = (pUVar2->fields).m_NormalColor.fields.b;
          local_e8.fields.m_NormalColor.fields.a = (pUVar2->fields).m_NormalColor.fields.a;
          local_e8.fields.m_HighlightedColor.fields.r = (pUVar2->fields).m_HighlightedColor.fields.r;
          local_e8.fields.m_HighlightedColor.fields.g = (pUVar2->fields).m_HighlightedColor.fields.g;
          local_e8.fields.m_HighlightedColor.fields.b = (pUVar2->fields).m_HighlightedColor.fields.b;
          local_e8.fields.m_HighlightedColor.fields.a = (pUVar2->fields).m_HighlightedColor.fields.a;
          local_e8.fields.m_PressedColor.fields.r = (pUVar2->fields).m_PressedColor.fields.r;
          local_e8.fields.m_PressedColor.fields.g = (pUVar2->fields).m_PressedColor.fields.g;
          local_e8.fields.m_PressedColor.fields.b = (pUVar2->fields).m_PressedColor.fields.b;
          local_e8.fields.m_PressedColor.fields.a = (pUVar2->fields).m_PressedColor.fields.a;
          local_e8.fields.m_SelectedColor.fields.r = (pUVar2->fields).m_SelectedColor.fields.r;
          local_e8.fields.m_SelectedColor.fields.g = (pUVar2->fields).m_SelectedColor.fields.g;
          local_e8.fields.m_SelectedColor.fields.b = (pUVar2->fields).m_SelectedColor.fields.b;
          local_e8.fields.m_SelectedColor.fields.a = (pUVar2->fields).m_SelectedColor.fields.a;
          local_e8.fields.m_DisabledColor.fields.r = (pUVar2->fields).m_DisabledColor.fields.r;
          local_e8.fields.m_DisabledColor.fields.g = (pUVar2->fields).m_DisabledColor.fields.g;
          local_e8.fields.m_DisabledColor.fields.b = (pUVar2->fields).m_DisabledColor.fields.b;
          local_e8.fields.m_DisabledColor.fields.a = (pUVar2->fields).m_DisabledColor.fields.a;
          local_e8.fields.m_ColorMultiplier = (pUVar2->fields).m_ColorMultiplier;
          local_e8.fields.m_FadeDuration = (pUVar2->fields).m_FadeDuration;
          UnityEngine_UI_Selectable__set_colors
                    ((UnityEngine_UI_Selectable_o *)pUVar1,&local_e8,(MethodInfo *)0x0);
          return __this_00;
        }
      }
    }
  }
label_18220bf4b:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateDropdownSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateDropdownSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float maxScrollHeight, System_Nullable_float__o optionsWidth, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x18220d110

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDropdownSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth,
          float elementHeight,float maxScrollHeight,System_Nullable_float__o optionsWidth,
          UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,System_Int32_array *intOptionValues,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_DropdownSettingElement_o *pUVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843470d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_DropdownSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DropdownSetting");
    Il2CppMethodInitialized_1843470d2 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DropdownSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_DropdownSettingElement);
    if (optionsWidth.fields.hasValue == false) {
      System_Nullable_float____ctor
                (&optionsWidth,elementWidth,(MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    }
    fVar2 = System_Nullable_float___get_Value
                      (&optionsWidth,(MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    if (pUVar1 != (UI_DropdownSettingElement_o *)0x0) {
      il2cpp_runtime_helper_180358430(7,pUVar1,setting,style,title,options,tooltip,elementWidth,elementHeight,fVar2,
                    maxScrollHeight,onDropdownOptionSelect,intOptionValues);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateDropdownSelect
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateDropdownSelect (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float maxScrollHeight, System_Nullable_float__o optionsWidth, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, const MethodInfo* method);
// 0x18220cf90

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDropdownSelect
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth,
          float elementHeight,float maxScrollHeight,System_Nullable_float__o optionsWidth,
          UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_DropdownSelectElement_o *pUVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843470d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_DropdownSelectElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DropdownSetting");
    Il2CppMethodInitialized_1843470d3 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DropdownSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_DropdownSelectElement);
    if (optionsWidth.fields.hasValue == false) {
      System_Nullable_float____ctor
                (&optionsWidth,elementWidth,(MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    }
    fVar2 = System_Nullable_float___get_Value
                      (&optionsWidth,(MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    if (pUVar1 != (UI_DropdownSelectElement_o *)0x0) {
      il2cpp_runtime_helper_180358430(7,pUVar1,setting,style,title,options,tooltip,elementWidth,elementHeight,fVar2,
                    maxScrollHeight,onDropdownOptionSelect,0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateMultiSelectDropdown
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateMultiSelectDropdown (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_HashSetSetting_int__o* setting, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float maxScrollHeight, System_Nullable_float__o optionsWidth, UnityEngine_Events_UnityAction_o* onSelectionChanged, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x18220e960

UnityEngine_GameObject_o *
UI_ElementFactory__CreateMultiSelectDropdown
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_HashSetSetting_int__o *setting,
          System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth,
          float elementHeight,float maxScrollHeight,System_Nullable_float__o optionsWidth,
          UnityEngine_Events_UnityAction_o *onSelectionChanged,System_Int32_array *intOptionValues,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_MultiSelectDropdownElement_o *__this_00;
  float optionsWidth_00;
  
  if (Il2CppMethodInitialized_1843470d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MultiSelectDropdownElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DropdownSetting");
    Il2CppMethodInitialized_1843470d4 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DropdownSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_MultiSelectDropdownElement);
    if (optionsWidth.fields.hasValue == false) {
      System_Nullable_float____ctor
                (&optionsWidth,elementWidth,(MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    }
    optionsWidth_00 =
         System_Nullable_float___get_Value
                   (&optionsWidth,(MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    if (__this_00 != (UI_MultiSelectDropdownElement_o *)0x0) {
      UI_MultiSelectDropdownElement__Setup
                (__this_00,setting,style,title,options,tooltip,elementWidth,elementHeight,optionsWidth_00,
                 maxScrollHeight,onSelectionChanged,intOptionValues,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateIncrementSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateIncrementSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, System_String_array* options, UnityEngine_Events_UnityAction_o* onValueChanged, System_Func_bool__o* validation, const MethodInfo* method);
// 0x18220e2d0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateIncrementSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
          System_String_array *options,UnityEngine_Events_UnityAction_o *onValueChanged,
          System_Func_bool__o *validation,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_IncrementSettingElement_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_IncrementSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/IncrementSetting");
    Il2CppMethodInitialized_1843470d5 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/IncrementSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_IncrementSettingElement);
    if (__this_00 != (UI_IncrementSettingElement_o *)0x0) {
      UI_IncrementSettingElement__Setup
                (__this_00,setting,style,title,tooltip,elementWidth,elementHeight,options,onValueChanged,
                 validation,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateToggleSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateToggleSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onValueChanged, const MethodInfo* method);
// 0x1822107b0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateToggleSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
          UnityEngine_Events_UnityAction_o *onValueChanged,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_ToggleSettingElement_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ToggleSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ToggleSetting");
    Il2CppMethodInitialized_1843470d6 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ToggleSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_ToggleSettingElement);
    if (__this_00 != (UI_ToggleSettingElement_o *)0x0) {
      UI_ToggleSettingElement__Setup
                (__this_00,setting,style,title,tooltip,elementWidth,elementHeight,onValueChanged,
                 (MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateToggleGroupSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateToggleGroupSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x1822106e0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateToggleGroupSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth,
          float elementHeight,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_ToggleGroupSettingElement_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ToggleGroupSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ToggleGroupSetting");
    Il2CppMethodInitialized_1843470d7 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ToggleGroupSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_ToggleGroupSettingElement);
    if (__this_00 != (UI_ToggleGroupSettingElement_o *)0x0) {
      UI_ToggleGroupSettingElement__Setup
                (__this_00,setting,style,title,options,tooltip,elementWidth,elementHeight,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateSliderSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateSliderSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t decimalPlaces, float interval, UnityEngine_Events_UnityAction_o* onValueChanged, const MethodInfo* method);
// 0x18220f9b0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateSliderSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
          int32_t decimalPlaces,float interval,UnityEngine_Events_UnityAction_o *onValueChanged,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_SliderSettingElement_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SliderSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/SliderSetting");
    Il2CppMethodInitialized_1843470d8 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/SliderSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_SliderSettingElement);
    if (__this_00 != (UI_SliderSettingElement_o *)0x0) {
      UI_SliderSettingElement__Setup
                (__this_00,setting,style,title,tooltip,elementWidth,elementHeight,decimalPlaces,interval,
                 onValueChanged,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateInputSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateInputSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, bool multiLine, UnityEngine_Events_UnityAction_o* onValueChanged, UnityEngine_Events_UnityAction_o* onEndEdit, System_Func_string__bool__o* onValidate, System_Func_string__string__o* onCleanup, const MethodInfo* method);
// 0x18220e3c0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateInputSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
          bool multiLine,UnityEngine_Events_UnityAction_o *onValueChanged,
          UnityEngine_Events_UnityAction_o *onEndEdit,System_Func_string__bool__o *onValidate,
          System_Func_string__string__o *onCleanup,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_InputSettingElement_o *__this_00;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  
  if (Il2CppMethodInitialized_1843470d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/InputSetting");
    Il2CppMethodInitialized_1843470d9 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/InputSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_InputSettingElement);
    if (__this_00 != (UI_InputSettingElement_o *)0x0) {
      UI_InputSettingElement__Setup
                (__this_00,setting,style,title,tooltip,elementWidth,elementHeight,multiLine,onValueChanged,
                 onEndEdit,onValidate,onCleanup,(MethodInfo *)0x0);
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_6651A0 *)
                             MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
      if ((style != (UI_ElementStyle_o *)0x0) && (__this_01 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0))
      {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,(style->fields).Spacing,
                   (MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateSliderInputSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateSliderInputSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_o* tooltip, float sliderWidth, float sliderHeight, float inputWidth, float inputHeight, int32_t decimalPlaces, const MethodInfo* method);
// 0x18220f8b0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateSliderInputSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_o *tooltip,float sliderWidth,float sliderHeight,
          float inputWidth,float inputHeight,int32_t decimalPlaces,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_SliderInputSettingElement_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SliderInputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/SliderInputSetting");
    Il2CppMethodInitialized_1843470da = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/SliderInputSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_SliderInputSettingElement);
    if (__this_00 != (UI_SliderInputSettingElement_o *)0x0) {
      UI_SliderInputSettingElement__Setup
                (__this_00,setting,style,title,tooltip,sliderWidth,sliderHeight,inputWidth,inputHeight,
                 decimalPlaces,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateDefaultLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateDefaultLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x18220cce0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDefaultLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,int32_t fontStyle,
          int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  UnityEngine_UI_HorizontalLayoutGroup_o *x_00;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  int32_t value;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_1843470db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    Il2CppMethodInitialized_1843470db = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultLabel",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontStyle(__this_00,fontStyle,(MethodInfo *)0x0);
      panel = (style->fields).ThemePanel;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = UI_UIManager__GetThemeColor
                         ((UnityEngine_Color_o *)&local_28,panel,"DefaultLabel","TextColor",
                          "DefaultPanel",(MethodInfo *)0x0);
      local_28.r = (pUVar2->fields).r;
      local_28.g = (pUVar2->fields).g;
      local_28.b = (pUVar2->fields).b;
      local_28.a = (pUVar2->fields).a;
      (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                (__this_00,(UnityEngine_Color_o *)&local_28,(__this_00->klass->vtable)._23_set_color.method);
      UnityEngine_UI_Text__set_alignment(__this_00,alignment,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)parent,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup)
        ;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          __this_01 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_00,
                                 (MethodInfo_6651A0 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_ContentSizeFitter);
          if (__this_01 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_18220cf86;
          value = 0;
        }
        else {
          __this_01 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_00,
                                 (MethodInfo_6651A0 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_ContentSizeFitter);
          if (__this_01 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_18220cf86;
          value = 2;
        }
        UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,value,(MethodInfo *)0x0);
        x_00 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)parent,
                          (MethodInfo_6651A0 *)
                          MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          pUVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_00,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                             );
          if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220cf86;
          (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                    (pUVar3,0.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
        }
        return __this;
      }
    }
  }
label_18220cf86:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateTMPLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTMPLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x18220faa0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTMPLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,int32_t fontStyle,
          int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  TMPro_TextMeshProUGUI_o *__this_01;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_UI_HorizontalLayoutGroup_o *x_00;
  int32_t iVar6;
  UnityEngine_Color_Fields local_48;
  
  if (Il2CppMethodInitialized_1843470dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"TMPLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    Il2CppMethodInitialized_1843470dc = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,5);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_18220ff90;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar2);
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar2);
        pSVar2 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0
                           );
        if (pSVar2 != (System_Type_o *)0x0) {
          pIVar3 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
          if (pIVar3 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if (3 < (uint)components->max_length) {
          components->m_Items[3] = pSVar2;
          Il2CppCodeGenWriteBarrier(components->m_Items + 3,pSVar2);
          pSVar2 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_ContentSizeFitter,
                              (MethodInfo *)0x0);
          if (pSVar2 != (System_Type_o *)0x0) {
            pIVar3 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
            if (pIVar3 == (Il2CppObject *)0x0) {
              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
            }
          }
          if (4 < (uint)components->max_length) {
            components->m_Items[4] = pSVar2;
            Il2CppCodeGenWriteBarrier(components->m_Items + 4,pSVar2);
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_2f1abe0(__this,"TMPLabel",components,(MethodInfo *)0x0);
            if (__this != (UnityEngine_GameObject_o *)0x0) {
              __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
                __this_01 = UnityEngine_GameObject__GetComponent_object_
                                      (__this,(MethodInfo_6F5650 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
                if ((style != (UI_ElementStyle_o *)0x0) && (__this_01 != (TMPro_TextMeshProUGUI_o *)0x0)) {
                  TMPro_TMP_Text__set_fontSize
                            ((TMPro_TMP_Text_o *)__this_01,(float)(style->fields).FontSize,(MethodInfo *)0x0);
                  (*(__this_01->klass->vtable)._66_set_text.methodPtr)
                            (__this_01,title,(__this_01->klass->vtable)._66_set_text.method);
                  if (fontStyle == 1) {
                    iVar6 = 1;
                  }
                  else {
                    iVar6 = 0;
                    if (fontStyle == 2) {
                      iVar6 = 2;
                    }
                  }
                  TMPro_TMP_Text__set_fontStyle((TMPro_TMP_Text_o *)__this_01,iVar6,(MethodInfo *)0x0);
                  panel = (style->fields).ThemePanel;
                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                  }
                  pUVar4 = UI_UIManager__GetThemeColor
                                     ((UnityEngine_Color_o *)&local_48,panel,"DefaultLabel",
                                      "TextColor","DefaultPanel",(MethodInfo *)0x0);
                  local_48.r = (pUVar4->fields).r;
                  local_48.g = (pUVar4->fields).g;
                  local_48.b = (pUVar4->fields).b;
                  local_48.a = (pUVar4->fields).a;
                  (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                            (__this_01,(UnityEngine_Color_o *)&local_48,
                             (__this_01->klass->vtable)._23_set_color.method);
                  if (alignment == 3) {
                    iVar6 = 0x1001;
                  }
                  else {
                    iVar6 = 0x1002;
                    if (alignment == 5) {
                      iVar6 = 0x1004;
                    }
                  }
                  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this_01,iVar6,(MethodInfo *)0x0);
                  __this_02 = UnityEngine_GameObject__GetComponent_object_
                                        (__this,(MethodInfo_6F5650 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter
                                        );
                  if (parent != (UnityEngine_Transform_o *)0x0) {
                    x = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)parent,
                                   (MethodInfo_6651A0 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar1 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                      );
                    if (__this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
                      iVar6 = 0;
                      if (!bVar1) {
                        iVar6 = 2;
                      }
                      UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_02,iVar6,(MethodInfo *)0x0);
                      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                         (__this,(MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement)
                      ;
                      x_00 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)parent,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar1 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (bVar1) {
                        if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220ff90;
                        (*(pUVar5->klass->vtable)._40_set_flexibleWidth.methodPtr)
                                  (pUVar5,0.0,(pUVar5->klass->vtable)._40_set_flexibleWidth.method);
                      }
                      return __this;
                    }
                  }
                }
              }
            }
label_18220ff90:
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ElementFactory$$CreateEffectText
// il2cpp: PatreonEffects_EffectText_o* UI_ElementFactory__CreateEffectText (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* text, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x18220d2a0

PatreonEffects_EffectText_o *
UI_ElementFactory__CreateEffectText
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *text,int32_t fontStyle,
          int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar4;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_UI_HorizontalLayoutGroup_o *x;
  PatreonEffects_EffectText_o *__this_02;
  UnityEngine_Color_o *pUVar6;
  int32_t value;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_1843470dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_EffectText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"EffectText");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    Il2CppMethodInitialized_1843470dd = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_18220d776;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_VerticalLayoutGroup,
                        (MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar2);
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_ContentSizeFitter,
                          (MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar2);
        pSVar2 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0
                           );
        if (pSVar2 != (System_Type_o *)0x0) {
          pIVar3 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
          if (pIVar3 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if (3 < (uint)components->max_length) {
          components->m_Items[3] = pSVar2;
          Il2CppCodeGenWriteBarrier(components->m_Items + 3,pSVar2);
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_2f1abe0(__this,"EffectText",components,(MethodInfo *)0x0);
          if (__this != (UnityEngine_GameObject_o *)0x0) {
            __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
              pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                 (__this,(MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
              if (pUVar4 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)pUVar4,0,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar4,false,(MethodInfo *)0x0)
                ;
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar4,false,(MethodInfo *)0x0)
                ;
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar4,0.0,(MethodInfo *)0x0);
                __this_01 = UnityEngine_GameObject__GetComponent_object_
                                      (__this,(MethodInfo_6F5650 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter
                                      );
                if (parent != (UnityEngine_Transform_o *)0x0) {
                  pUVar4 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)parent,
                                      (MethodInfo_6651A0 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (__this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
                    UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                              (__this_01,(uint)!bVar1 * 2,(MethodInfo *)0x0);
                    UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_01,2,(MethodInfo *)0x0);
                    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                       (__this,(MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                    x = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)parent,
                                   (MethodInfo_6651A0 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar1 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                      );
                    if (bVar1) {
                      if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220d776;
                      (*(pUVar5->klass->vtable)._40_set_flexibleWidth.methodPtr)
                                (pUVar5,0.0,(pUVar5->klass->vtable)._40_set_flexibleWidth.method);
                    }
                    if (alignment == 3) {
                      value = 0x1001;
                    }
                    else {
                      value = 0x1002;
                      if (alignment == 5) {
                        value = 0x1004;
                      }
                    }
                    __this_02 = UnityEngine_GameObject__AddComponent_object_
                                          (__this,(MethodInfo_6F4D60 *)
                                                  MethodInfo_UnityEngine_GameObject_AddComponent_EffectText);
                    if ((style != (UI_ElementStyle_o *)0x0) &&
                       (__this_02 != (PatreonEffects_EffectText_o *)0x0)) {
                      PatreonEffects_EffectText__set_fontSize
                                (__this_02,(float)(style->fields).FontSize,(MethodInfo *)0x0);
                      panel = (style->fields).ThemePanel;
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      pUVar6 = UI_UIManager__GetThemeColor
                                         ((UnityEngine_Color_o *)&local_28,panel,"DefaultLabel",
                                          "TextColor","DefaultPanel",(MethodInfo *)0x0);
                      local_28.r = (pUVar6->fields).r;
                      local_28.g = (pUVar6->fields).g;
                      local_28.b = (pUVar6->fields).b;
                      local_28.a = (pUVar6->fields).a;
                      PatreonEffects_EffectText__set_color
                                (__this_02,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
                      PatreonEffects_EffectText__set_alignment(__this_02,value,(MethodInfo *)0x0);
                      PatreonEffects_EffectText__set_text(__this_02,text,(MethodInfo *)0x0);
                      return __this_02;
                    }
                  }
                }
              }
            }
          }
label_18220d776:
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ElementFactory$$CreateNameEffectLabel
// il2cpp: PatreonEffects_NameEffectLabel_o* UI_ElementFactory__CreateNameEffectLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* prefix, System_String_o* name, System_String_o* suffix, int32_t alignment, const MethodInfo* method);
// 0x18220ebd0

PatreonEffects_NameEffectLabel_o *
UI_ElementFactory__CreateNameEffectLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *prefix,
          System_String_o *name,System_String_o *suffix,int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_UI_HorizontalLayoutGroup_o *x;
  PatreonEffects_NameEffectLabel_o *__this_01;
  UnityEngine_Color_o *pUVar5;
  int32_t value;
  UnityEngine_Color_Fields local_48;
  
  if (Il2CppMethodInitialized_1843470de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectLabel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"NameEffectLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    Il2CppMethodInitialized_1843470de = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_18220ef12;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar2);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this,"NameEffectLabel",components,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (__this,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (parent != (UnityEngine_Transform_o *)0x0) {
            x = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)parent,
                           (MethodInfo_6651A0 *)
                           MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
              if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220ef12;
              (*(pUVar4->klass->vtable)._40_set_flexibleWidth.methodPtr)
                        (pUVar4,0.0,(pUVar4->klass->vtable)._40_set_flexibleWidth.method);
            }
            if (alignment == 3) {
              value = 0x1001;
            }
            else {
              value = 0x1002;
              if (alignment == 5) {
                value = 0x1004;
              }
            }
            __this_01 = UnityEngine_GameObject__AddComponent_object_
                                  (__this,(MethodInfo_6F4D60 *)
                                          MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectLabel);
            if ((style != (UI_ElementStyle_o *)0x0) && (__this_01 != (PatreonEffects_NameEffectLabel_o *)0x0))
            {
              PatreonEffects_NameEffectLabel__set_fontSize
                        (__this_01,(float)(style->fields).FontSize,(MethodInfo *)0x0);
              panel = (style->fields).ThemePanel;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pUVar5 = UI_UIManager__GetThemeColor
                                 ((UnityEngine_Color_o *)&local_48,panel,"DefaultLabel",
                                  "TextColor","DefaultPanel",(MethodInfo *)0x0);
              local_48.r = (pUVar5->fields).r;
              local_48.g = (pUVar5->fields).g;
              local_48.b = (pUVar5->fields).b;
              local_48.a = (pUVar5->fields).a;
              PatreonEffects_NameEffectLabel__set_color
                        (__this_01,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__set_alignment(__this_01,value,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__SetText(__this_01,prefix,name,suffix,(MethodInfo *)0x0);
              return __this_01;
            }
          }
        }
      }
label_18220ef12:
      ThrowNullReferenceException();
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ElementFactory$$CreateWhiteLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateWhiteLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x182210cf0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateWhiteLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,int32_t fontStyle,
          int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  UnityEngine_UI_HorizontalLayoutGroup_o *x_00;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  int32_t value;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_1843470df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"WhiteLabel");
    Il2CppMethodInitialized_1843470df = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultLabel",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontStyle(__this_00,fontStyle,(MethodInfo *)0x0);
      panel = (style->fields).ThemePanel;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = UI_UIManager__GetThemeColor
                         ((UnityEngine_Color_o *)&local_28,panel,"WhiteLabel","TextColor",
                          "DefaultPanel",(MethodInfo *)0x0);
      local_28.r = (pUVar2->fields).r;
      local_28.g = (pUVar2->fields).g;
      local_28.b = (pUVar2->fields).b;
      local_28.a = (pUVar2->fields).a;
      (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                (__this_00,(UnityEngine_Color_o *)&local_28,(__this_00->klass->vtable)._23_set_color.method);
      UnityEngine_UI_Text__set_alignment(__this_00,alignment,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)parent,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup)
        ;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          __this_01 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_00,
                                 (MethodInfo_6651A0 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_ContentSizeFitter);
          if (__this_01 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_182210f96;
          value = 0;
        }
        else {
          __this_01 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_00,
                                 (MethodInfo_6651A0 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_ContentSizeFitter);
          if (__this_01 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_182210f96;
          value = 2;
        }
        UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,value,(MethodInfo *)0x0);
        x_00 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)parent,
                          (MethodInfo_6651A0 *)
                          MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          pUVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_00,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement
                             );
          if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_182210f96;
          (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                    (pUVar3,0.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
        }
        return __this;
      }
    }
  }
label_182210f96:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateEmptySpace
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateEmptySpace (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x18220d900

UnityEngine_GameObject_o *
UI_ElementFactory__CreateEmptySpace(UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *pUVar1;
  
  if (Il2CppMethodInitialized_1843470e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843470e0 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultLabel",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,"",(pUVar1->klass->vtable)._75_set_text.method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateLegacyHUDLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateLegacyHUDLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x18220e670

UnityEngine_GameObject_o *
UI_ElementFactory__CreateLegacyHUDLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,int32_t fontStyle,
          int32_t alignment,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/LegacyHUDLabel");
    Il2CppMethodInitialized_1843470e1 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/InGame/LegacyHUDLabel",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontStyle(__this_00,fontStyle,(MethodInfo *)0x0);
      UnityEngine_UI_Text__set_alignment(__this_00,alignment,(MethodInfo *)0x0);
      UI_ElementFactory__ConfigureHUDLabelLayout(__this,parent,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateHUDLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateHUDLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x18220d9a0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateHUDLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,int32_t fontStyle,
          int32_t alignment,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  TMPro_TextMeshProUGUI_o *__this_00;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  int32_t value;
  
  if (Il2CppMethodInitialized_1843470e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_40bec00);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/HUDLabel");
    Il2CppMethodInitialized_1843470e2 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/InGame/HUDLabel",(MethodInfo *)0x0);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
label_18220daea:
    ThrowNullReferenceException();
  }
  __this_00 = UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                        (__this,true,
                         (MethodInfo_6F5110 *)
                         MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_40bec00);
  if ((style == (UI_ElementStyle_o *)0x0) || (__this_00 == (TMPro_TextMeshProUGUI_o *)0x0))
  goto label_18220daea;
  TMPro_TMP_Text__set_fontSize
            ((TMPro_TMP_Text_o *)__this_00,(float)(style->fields).FontSize,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._66_set_text.methodPtr)
            (__this_00,title,(__this_00->klass->vtable)._66_set_text.method);
  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this_00,alignment,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_textWrappingMode((TMPro_TMP_Text_o *)__this_00,2,(MethodInfo *)0x0);
  if (alignment == 0x201) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    if (__this_01 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_18220daea;
    value = 3;
  }
  else {
    if (alignment != 0x204) goto label_18220daca;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    if (__this_01 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_18220daea;
    value = 5;
  }
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)__this_01,value,(MethodInfo *)0x0);
label_18220daca:
  UI_ElementFactory__ConfigureHUDLabelLayout(__this,parent,(MethodInfo *)0x0);
  return __this;
}


// UI.ElementFactory$$ConfigureHUDLabelLayout
// il2cpp: void UI_ElementFactory__ConfigureHUDLabelLayout (UnityEngine_GameObject_o* label, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x18220bb40

void UI_ElementFactory__ConfigureHUDLabelLayout
               (UnityEngine_GameObject_o *label,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  UnityEngine_UI_ContentSizeFitter_o *__this;
  UnityEngine_UI_HorizontalLayoutGroup_o *x_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  int32_t value;
  
  if (Il2CppMethodInitialized_1843470e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843470e3 = '\x01';
  }
  if (parent != (UnityEngine_Transform_o *)0x0) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)parent,
                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (label != (UnityEngine_GameObject_o *)0x0) {
      if (bVar1) {
        __this = UnityEngine_GameObject__GetComponent_object_
                           (label,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
        if (__this == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_18220bc93;
        value = 0;
      }
      else {
        __this = UnityEngine_GameObject__GetComponent_object_
                           (label,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
        if (__this == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_18220bc93;
        value = 2;
      }
      UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this,value,(MethodInfo *)0x0);
      x_00 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)parent,
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = UnityEngine_GameObject__GetComponent_object_
                           (label,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
        if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220bc93;
        (*(pUVar2->klass->vtable)._40_set_flexibleWidth.methodPtr)
                  (pUVar2,0.0,(pUVar2->klass->vtable)._40_set_flexibleWidth.method);
      }
      return;
    }
  }
label_18220bc93:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateMultiTextLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateMultiTextLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t fontStyle, int32_t anchor, float fontSize, int32_t numberOfLabels, bool richText, const MethodInfo* method);
// 0x18220eaf0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateMultiTextLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,int32_t fontStyle,int32_t anchor,
          float fontSize,int32_t numberOfLabels,bool richText,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_MultiTextLabel_o *__this_00;
  UnityEngine_Transform_o *parent_00;
  
  if (Il2CppMethodInitialized_1843470e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MultiTextLabel)
    ;
    Il2CppMethodInitialized_1843470e4 = '\x01';
  }
  __this = UI_ElementFactory__CreateHorizontalGroup(parent,0.0,3,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_MultiTextLabel);
    parent_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (__this_00 != (UI_MultiTextLabel_o *)0x0) {
      UI_MultiTextLabel__Setup
                (__this_00,parent_00,style,fontStyle,anchor,fontSize,numberOfLabels,richText,(MethodInfo *)0x0
                );
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateKeybindSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateKeybindSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, UI_KeybindPopup_o* keybindPopup, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t bindCount, const MethodInfo* method);
// 0x18220e520
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18220e5d8: movaps xmmword ptr [rsp + 0x40], xmm6
// asm:   0x18220e5dd: movss xmm6, dword ptr [rsp + 0xb8]
// asm:   0x18220e5e6: movaps xmmword ptr [rsp + 0x30], xmm7
// asm:   0x18220e5eb: movss xmm7, dword ptr [rsp + 0xb0]
// asm:   0x18220e615: movaps xmm7, xmmword ptr [rsp + 0x30]
// asm:   0x18220e61a: movaps xmm6, xmmword ptr [rsp + 0x40]

UnityEngine_GameObject_o *
UI_ElementFactory__CreateKeybindSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,UI_KeybindPopup_o *keybindPopup,System_String_o *tooltip,float elementWidth,
          float elementHeight,int32_t bindCount,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_KeybindSettingElement_o *__this_00;
  int32_t index;
  
  if (Il2CppMethodInitialized_1843470e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_KeybindSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/KeybindSetting");
    Il2CppMethodInitialized_1843470e5 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/KeybindSetting",(MethodInfo *)0x0);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__AddComponent_object_
                            (__this,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_KeybindSettingElement),
     __this_00 != (UI_KeybindSettingElement_o *)0x0)) {
    (__this_00->fields)._keybindPopup = keybindPopup;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._keybindPopup,keybindPopup);
    index = 0;
    if (0 < bindCount) {
      do {
        UI_KeybindSettingElement__CreateKeybindButton
                  (__this_00,index,style,elementWidth,elementHeight,(MethodInfo *)0x0);
        index = index + 1;
      } while (index < bindCount);
    }
    UI_BaseSettingElement__Setup
              ((UI_BaseSettingElement_o *)__this_00,setting,style,title,tooltip,(MethodInfo *)0x0);
    return __this;
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateColorSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateColorSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, UI_ColorPickPopup_o* colorPickPopup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x18220c8d0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateColorSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,UI_ColorPickPopup_o *colorPickPopup,System_String_o *tooltip,
          float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onChangeColor,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_ColorSettingElement_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ColorSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ColorSetting");
    Il2CppMethodInitialized_1843470e6 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ColorSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_ColorSettingElement);
    if (__this_00 != (UI_ColorSettingElement_o *)0x0) {
      UI_ColorSettingElement__Setup
                (__this_00,setting,style,title,colorPickPopup,tooltip,elementWidth,elementHeight,onChangeColor
                 ,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateToggleColorSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateToggleColorSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_ToggleColorSetting_o* setting, System_String_o* title, UI_ColorPickPopup_o* colorPickPopup, System_String_o* tooltip, float toggleWidth, float toggleHeight, float colorWidth, float colorHeight, UnityEngine_Events_UnityAction_o* onToggleChanged, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x182210390

UnityEngine_GameObject_o *
UI_ElementFactory__CreateToggleColorSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_ToggleColorSetting_o *setting,
          System_String_o *title,UI_ColorPickPopup_o *colorPickPopup,System_String_o *tooltip,
          float toggleWidth,float toggleHeight,float colorWidth,float colorHeight,
          UnityEngine_Events_UnityAction_o *onToggleChanged,UnityEngine_Events_UnityAction_o *onChangeColor,
          MethodInfo *method)

{
  float fVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  Settings_BoolSetting_o *setting_00;
  Settings_ColorSetting_o *setting_01;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  UI_ElementStyle_o *style_00;
  UnityEngine_GameObject_o *pUVar5;
  UI_ToggleSettingElement_o *__this_01;
  UI_ColorSettingElement_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  
  if (Il2CppMethodInitialized_1843470e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    Il2CppMethodInitialized_1843470e7 = '\x01';
  }
  if (style != (UI_ElementStyle_o *)0x0) {
    __this = UI_ElementFactory__CreateHorizontalGroup(parent,(style->fields).Spacing,3,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      __this_00 = UI_ElementFactory__CreateDefaultLabel(pUVar4,style,title,0,3,(MethodInfo *)0x0);
      iVar2 = (style->fields).FontSize;
      fVar1 = (style->fields).Spacing;
      pSVar3 = (style->fields).ThemePanel;
      style_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)style_00,(MethodInfo *)0x0);
      (style_00->fields).Spacing = fVar1;
      (style_00->fields).FontSize = iVar2;
      (style_00->fields).TitleWidth = 0.0;
      (style_00->fields).ThemePanel = pSVar3;
      Il2CppCodeGenWriteBarrier(&(style_00->fields).ThemePanel,pSVar3);
      pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (setting != (Settings_ToggleColorSetting_o *)0x0) {
        setting_00 = (setting->fields).Enabled;
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        if (Il2CppMethodInitialized_1843470d6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_GameObject_AddComponent_ToggleSettingElement);
          il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ToggleSetting");
          Il2CppMethodInitialized_1843470d6 = '\x01';
        }
        pUVar5 = UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/Elements/ToggleSetting",(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__AddComponent_object_
                                (pUVar5,(MethodInfo_6F4D60 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_ToggleSettingElement);
          if (__this_01 != (UI_ToggleSettingElement_o *)0x0) {
            UI_ToggleSettingElement__Setup
                      (__this_01,(Settings_BaseSetting_o *)setting_00,style_00,pSVar3,pSVar3,toggleWidth,
                       toggleHeight,onToggleChanged,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
            setting_01 = (setting->fields).Color;
            pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            if (Il2CppMethodInitialized_1843470e6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_UnityEngine_GameObject_AddComponent_ColorSettingElement);
              il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ColorSetting");
              Il2CppMethodInitialized_1843470e6 = '\x01';
            }
            pUVar5 = UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/Elements/ColorSetting",(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              __this_02 = UnityEngine_GameObject__AddComponent_object_
                                    (pUVar5,(MethodInfo_6F4D60 *)
                                            MethodInfo_UnityEngine_GameObject_AddComponent_ColorSettingElement
                                    );
              if (__this_02 != (UI_ColorSettingElement_o *)0x0) {
                UI_ColorSettingElement__Setup
                          (__this_02,(Settings_BaseSetting_o *)setting_01,style_00,pSVar3,colorPickPopup,
                           tooltip,colorWidth,colorHeight,onChangeColor,(MethodInfo *)0x0);
                if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                     (__this_00,
                                      (MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                  if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                              (pUVar6,(style->fields).TitleWidth,
                               (pUVar6->klass->vtable)._36_set_preferredWidth.method);
                    if ((style->fields).TitleWidth <= 0.0) {
                      pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                         (__this_00,
                                          (MethodInfo_6F5650 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                      if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1822106d9;
                      (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                                (pUVar6,-1.0,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
                    }
                    return __this;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_1822106d9:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateIconPickSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateIconPickSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_array* icons, UI_IconPickPopup_o* popup, System_String_o* tooltip, System_String_array* tooltips, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onSelect, UI_TooltipPopup_o* tooltipPopup, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x18220e1a0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateIconPickSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_array *options,System_String_array *icons,
          UI_IconPickPopup_o *popup,System_String_o *tooltip,System_String_array *tooltips,float elementWidth,
          float elementHeight,UnityEngine_Events_UnityAction_o *onSelect,UI_TooltipPopup_o *tooltipPopup,
          System_Int32_array *intOptionValues,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_IconPickSettingElement_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_IconPickSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ButtonSetting");
    Il2CppMethodInitialized_1843470e8 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ButtonSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_IconPickSettingElement);
    if (__this_00 != (UI_IconPickSettingElement_o *)0x0) {
      UI_IconPickSettingElement__Setup
                (__this_00,setting,style,title,options,icons,tooltips,popup,tooltip,elementWidth,elementHeight
                 ,onSelect,tooltipPopup,intOptionValues,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateButtonPopupSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateButtonPopupSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, UI_BasePopup_o* popup, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x18220bca0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateButtonPopupSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,UI_BasePopup_o *popup,System_String_o *tooltip,float elementWidth,
          float elementHeight,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_ButtonPopupSettingElement_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ButtonPopupSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ButtonSetting");
    Il2CppMethodInitialized_1843470e9 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ButtonSetting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_ButtonPopupSettingElement);
    if (__this_00 != (UI_ButtonPopupSettingElement_o *)0x0) {
      UI_ButtonPopupSettingElement__Setup
                (__this_00,setting,style,title,popup,tooltip,elementWidth,elementHeight,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateVector3Setting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateVector3Setting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, UI_Vector3Popup_o* vector3Popup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeVector, const MethodInfo* method);
// 0x182210ab0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateVector3Setting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,UI_Vector3Popup_o *vector3Popup,System_String_o *tooltip,float elementWidth,
          float elementHeight,UnityEngine_Events_UnityAction_o *onChangeVector,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_Vector3SettingElement_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_Vector3SettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/Vector3Setting");
    Il2CppMethodInitialized_1843470ea = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/Vector3Setting",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_Vector3SettingElement);
    if (__this_00 != (UI_Vector3SettingElement_o *)0x0) {
      UI_Vector3SettingElement__Setup
                (__this_00,setting,style,title,vector3Popup,tooltip,elementWidth,elementHeight,onChangeVector,
                 (MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateHorizontalLine
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateHorizontalLine (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, float width, float height, const MethodInfo* method);
// 0x18220dc50

UnityEngine_GameObject_o *
UI_ElementFactory__CreateHorizontalLine
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,float width,float height,
          MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_Vector2_o value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Color_o *pUVar3;
  UnityEngine_Color_o local_38 [3];
  
  if (Il2CppMethodInitialized_1843470eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLineScaler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"LineColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/HorizontalLine");
    il2cpp_codegen_initialize_runtime_metadata(&"LineImage");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBody");
    Il2CppMethodInitialized_1843470eb = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/HorizontalLine",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineImage",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_6651A0 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          value.fields.y = height;
          value.fields.x = width;
          UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
          pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineImage",(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              __this_01 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
              if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__AddComponent_object_
                          (__this_01,
                           (MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLineScaler);
                pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineImage",(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar2 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar1,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_Image);
                    if (style != (UI_ElementStyle_o *)0x0) {
                      panel = (style->fields).ThemePanel;
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      pUVar3 = UI_UIManager__GetThemeColor
                                         (local_38,panel,"MainBody","LineColor",
                                          "DefaultPanel",(MethodInfo *)0x0);
                      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                        local_38[0].fields.r = (pUVar3->fields).r;
                        local_38[0].fields.g = (pUVar3->fields).g;
                        local_38[0].fields.b = (pUVar3->fields).b;
                        local_38[0].fields.a = (pUVar3->fields).a;
                        (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                                  (pUVar2,local_38,(pUVar2->klass->vtable)._23_set_color.method);
                        return __this;
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


// UI.ElementFactory$$CreateHorizontalGroup
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateHorizontalGroup (UnityEngine_Transform_o* parent, float spacing, int32_t alignment, const MethodInfo* method);
// 0x18220daf0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateHorizontalGroup
          (UnityEngine_Transform_o *parent,float spacing,int32_t alignment,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  
  if (Il2CppMethodInitialized_1843470ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/HorizontalGroup");
    Il2CppMethodInitialized_1843470ec = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/HorizontalGroup",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    if (pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar2,spacing,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
      if (pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar2,alignment,(MethodInfo *)0x0);
        if (parent != (UnityEngine_Transform_o *)0x0) {
          pUVar2 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)parent,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220dc41;
            (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                      (pUVar3,0.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
          }
          return __this;
        }
      }
    }
  }
label_18220dc41:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreatePlayerKDRRow
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreatePlayerKDRRow (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18220f630

UnityEngine_GameObject_o *
UI_ElementFactory__CreatePlayerKDRRow
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Photon_Realtime_Player_o *player,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_PlayerKDRRow_o *__this_00;
  UI_KDRPanel_o *panel;
  
  if (Il2CppMethodInitialized_1843470ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_KDRPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_PlayerKDRRow);
    Il2CppMethodInitialized_1843470ed = '\x01';
  }
  __this = UI_ElementFactory__CreateHorizontalGroup(parent,10.0,3,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_PlayerKDRRow);
    if (parent != (UnityEngine_Transform_o *)0x0) {
      panel = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)parent,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_KDRPanel);
      if (__this_00 != (UI_PlayerKDRRow_o *)0x0) {
        UI_PlayerKDRRow__Setup(__this_00,style,player,panel,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateTeamKDRRow
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTeamKDRRow (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* team, const MethodInfo* method);
// 0x18220fff0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTeamKDRRow
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *team,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_TeamKDRRow_o *__this_00;
  
  if (Il2CppMethodInitialized_1843470ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TeamKDRRow);
    Il2CppMethodInitialized_1843470ee = '\x01';
  }
  __this = UI_ElementFactory__CreateHorizontalGroup(parent,10.0,3,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_TeamKDRRow);
    if (__this_00 != (UI_TeamKDRRow_o *)0x0) {
      UI_TeamKDRRow__Setup(__this_00,style,team,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateVerticalGroup
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateVerticalGroup (UnityEngine_Transform_o* parent, float spacing, int32_t alignment, const MethodInfo* method);
// 0x182210b90

UnityEngine_GameObject_o *
UI_ElementFactory__CreateVerticalGroup
          (UnityEngine_Transform_o *parent,float spacing,int32_t alignment,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  
  if (Il2CppMethodInitialized_1843470ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/VerticalGroup");
    Il2CppMethodInitialized_1843470ef = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/VerticalGroup",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    if (pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar2,spacing,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
      if (pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar2,alignment,(MethodInfo *)0x0);
        if (parent != (UnityEngine_Transform_o *)0x0) {
          pUVar2 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)parent,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_182210ce1;
            (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                      (pUVar3,0.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
          }
          return __this;
        }
      }
    }
  }
label_182210ce1:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateCollapsibleSection
// il2cpp: UI_CollapsibleSection_o* UI_ElementFactory__CreateCollapsibleSection (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, bool startExpanded, System_Action_bool__o* onExpandedChanged, const MethodInfo* method);
// 0x18220bf60

UI_CollapsibleSection_o *
UI_ElementFactory__CreateCollapsibleSection
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,bool startExpanded,
          System_Action_bool__o *onExpandedChanged,MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_Events_UnityEvent_o *__this;
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_UI_ColorBlock_o *pUVar4;
  UI_CollapsibleSection_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_UI_ColorBlock_o local_d8;
  UnityEngine_UI_ColorBlock_o local_78;
  
  if (Il2CppMethodInitialized_1843470f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CollapsibleSection);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/TextButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"TextButton");
    Il2CppMethodInitialized_1843470f0 = '\x01';
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/TextButton",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (pUVar2 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(pUVar2,(style->fields).FontSize,(MethodInfo *)0x0);
      UnityEngine_UI_Text__set_fontStyle(pUVar2,1,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button
                         );
      panel = (style->fields).ThemePanel;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar4 = UI_UIManager__GetThemeColorBlock
                         (&local_78,panel,"TextButton","","DefaultPanel",
                          (MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
        local_d8.fields.m_NormalColor.fields.r = (pUVar4->fields).m_NormalColor.fields.r;
        local_d8.fields.m_NormalColor.fields.g = (pUVar4->fields).m_NormalColor.fields.g;
        local_d8.fields.m_NormalColor.fields.b = (pUVar4->fields).m_NormalColor.fields.b;
        local_d8.fields.m_NormalColor.fields.a = (pUVar4->fields).m_NormalColor.fields.a;
        local_d8.fields.m_HighlightedColor.fields.r = (pUVar4->fields).m_HighlightedColor.fields.r;
        local_d8.fields.m_HighlightedColor.fields.g = (pUVar4->fields).m_HighlightedColor.fields.g;
        local_d8.fields.m_HighlightedColor.fields.b = (pUVar4->fields).m_HighlightedColor.fields.b;
        local_d8.fields.m_HighlightedColor.fields.a = (pUVar4->fields).m_HighlightedColor.fields.a;
        local_d8.fields.m_PressedColor.fields.r = (pUVar4->fields).m_PressedColor.fields.r;
        local_d8.fields.m_PressedColor.fields.g = (pUVar4->fields).m_PressedColor.fields.g;
        local_d8.fields.m_PressedColor.fields.b = (pUVar4->fields).m_PressedColor.fields.b;
        local_d8.fields.m_PressedColor.fields.a = (pUVar4->fields).m_PressedColor.fields.a;
        local_d8.fields.m_SelectedColor.fields.r = (pUVar4->fields).m_SelectedColor.fields.r;
        local_d8.fields.m_SelectedColor.fields.g = (pUVar4->fields).m_SelectedColor.fields.g;
        local_d8.fields.m_SelectedColor.fields.b = (pUVar4->fields).m_SelectedColor.fields.b;
        local_d8.fields.m_SelectedColor.fields.a = (pUVar4->fields).m_SelectedColor.fields.a;
        local_d8.fields.m_DisabledColor.fields.r = (pUVar4->fields).m_DisabledColor.fields.r;
        local_d8.fields.m_DisabledColor.fields.g = (pUVar4->fields).m_DisabledColor.fields.g;
        local_d8.fields.m_DisabledColor.fields.b = (pUVar4->fields).m_DisabledColor.fields.b;
        local_d8.fields.m_DisabledColor.fields.a = (pUVar4->fields).m_DisabledColor.fields.a;
        local_d8.fields.m_ColorMultiplier = (pUVar4->fields).m_ColorMultiplier;
        local_d8.fields.m_FadeDuration = (pUVar4->fields).m_FadeDuration;
        UnityEngine_UI_Selectable__set_colors
                  ((UnityEngine_UI_Selectable_o *)pUVar3,&local_d8,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this_00,
                               (MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_CollapsibleSection);
        if (__this_01 != (UI_CollapsibleSection_o *)0x0) {
          if (Il2CppMethodInitialized_1843470bb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CollapsibleSection_Toggle);
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
            Il2CppMethodInitialized_1843470bb = '\x01';
          }
          (__this_01->fields)._title = title;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._title,title);
          (__this_01->fields)._onExpandedChanged = onExpandedChanged;
          (__this_01->fields)._expanded = startExpanded;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._onExpandedChanged,onExpandedChanged);
          pUVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_01,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if (pUVar3 == (UnityEngine_UI_Button_o *)0x0) goto label_18220c2af;
            __this = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this_01,
                       (intptr_t)MethodInfo_UI_CollapsibleSection_Toggle,(MethodInfo *)0x0);
            if (__this == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_18220c2af;
            UnityEngine_Events_UnityEvent__AddListener(__this,__this_02,(MethodInfo *)0x0);
          }
          pUVar2 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_01,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          (__this_01->fields)._headerText = pUVar2;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._headerText,pUVar2);
          pUVar2 = (__this_01->fields)._headerText;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar2 = (__this_01->fields)._headerText;
            if (pUVar2 == (UnityEngine_UI_Text_o *)0x0) goto label_18220c2af;
            UnityEngine_UI_Text__set_fontSize(pUVar2,(style->fields).FontSize,(MethodInfo *)0x0);
          }
          UI_CollapsibleSection__UpdateHeader(__this_01,(MethodInfo *)0x0);
          return __this_01;
        }
      }
    }
  }
label_18220c2af:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateCollapsibleToggleSection
// il2cpp: UI_CollapsibleToggleSection_o* UI_ElementFactory__CreateCollapsibleToggleSection (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, bool startEnabled, bool startExpanded, System_Action_bool__o* onToggleChanged, const MethodInfo* method);
// 0x18220c2c0

UI_CollapsibleToggleSection_o *
UI_ElementFactory__CreateCollapsibleToggleSection
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,bool startEnabled,
          bool startExpanded,System_Action_bool__o *onToggleChanged,MethodInfo *method)

{
  System_String_o *panel;
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Object_o *obj;
  UnityEngine_UI_Toggle_o *enableToggle;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_UI_ColorBlock_o *pUVar8;
  UI_CollapsibleToggleSection_o *__this_00;
  UnityEngine_UI_ColorBlock_o local_e8;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_1843470f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CollapsibleToggleSection);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Text)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Toggle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/HorizontalGroup");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/TextButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ToggleSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle");
    il2cpp_codegen_initialize_runtime_metadata(&"TextButton");
    Il2CppMethodInitialized_1843470f1 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/HorizontalGroup",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    if (pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar2,6.0,(MethodInfo *)0x0);
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pUVar2,3,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)parent,
                            (MethodInfo_6651A0 *)
                            MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220c8c0;
          (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                    (pUVar3,0.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
        }
        pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        obj = (UnityEngine_Object_o *)
              UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/Elements/ToggleSetting",(MethodInfo *)0x0);
        if (obj != (UnityEngine_Object_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)obj,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = UnityEngine_Transform__Find(pUVar4,"Toggle",(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
              parent_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
              if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_18220c8c0;
              UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,parent_00,false,(MethodInfo *)0x0);
              UnityEngine_Transform__SetSiblingIndex(pUVar4,0,(MethodInfo *)0x0);
              pUVar3 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar4,
                                  (MethodInfo_6651A0 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
              if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) {
                pUVar6 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_18220c8c0;
                pUVar3 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar6,(MethodInfo_6F4D60 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
                if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220c8c0;
              }
              (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar3,22.0,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
              (*(pUVar3->klass->vtable)._32_set_minWidth.methodPtr)
                        (pUVar3,22.0,(pUVar3->klass->vtable)._32_set_minWidth.method);
              enableToggle = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar4,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_Toggle);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
            }
            else {
              enableToggle = UnityEngine_GameObject__GetComponentInChildren_object_
                                       ((UnityEngine_GameObject_o *)obj,
                                        (MethodInfo_6F5040 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Toggle);
              pUVar5 = UnityEngine_GameObject__GetComponentInChildren_object_
                                 ((UnityEngine_GameObject_o *)obj,
                                  (MethodInfo_6F5040 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Text);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar1) {
                if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) goto label_18220c8c0;
                (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                          (pUVar5,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                           (pUVar5->klass->vtable)._75_set_text.method);
              }
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)obj,
                                  (MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
              if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) {
                pUVar3 = UnityEngine_GameObject__AddComponent_object_
                                   ((UnityEngine_GameObject_o *)obj,
                                    (MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
                if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_18220c8c0;
              }
              (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar3,22.0,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
              (*(pUVar3->klass->vtable)._32_set_minWidth.methodPtr)
                        (pUVar3,22.0,(pUVar3->klass->vtable)._32_set_minWidth.method);
            }
            pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
            pUVar6 = UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/Elements/TextButton",(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
              pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar6,(MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_Text);
              if ((style != (UI_ElementStyle_o *)0x0) && (pUVar5 != (UnityEngine_UI_Text_o *)0x0)) {
                UnityEngine_UI_Text__set_fontSize(pUVar5,(style->fields).FontSize,(MethodInfo *)0x0);
                UnityEngine_UI_Text__set_fontStyle(pUVar5,1,(MethodInfo *)0x0);
                pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                   (pUVar6,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                panel = (style->fields).ThemePanel;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pUVar8 = UI_UIManager__GetThemeColorBlock
                                   (&local_88,panel,"TextButton","",
                                    "DefaultPanel",(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
                  local_e8.fields.m_NormalColor.fields.r = (pUVar8->fields).m_NormalColor.fields.r;
                  local_e8.fields.m_NormalColor.fields.g = (pUVar8->fields).m_NormalColor.fields.g;
                  local_e8.fields.m_NormalColor.fields.b = (pUVar8->fields).m_NormalColor.fields.b;
                  local_e8.fields.m_NormalColor.fields.a = (pUVar8->fields).m_NormalColor.fields.a;
                  local_e8.fields.m_HighlightedColor.fields.r = (pUVar8->fields).m_HighlightedColor.fields.r;
                  local_e8.fields.m_HighlightedColor.fields.g = (pUVar8->fields).m_HighlightedColor.fields.g;
                  local_e8.fields.m_HighlightedColor.fields.b = (pUVar8->fields).m_HighlightedColor.fields.b;
                  local_e8.fields.m_HighlightedColor.fields.a = (pUVar8->fields).m_HighlightedColor.fields.a;
                  local_e8.fields.m_PressedColor.fields.r = (pUVar8->fields).m_PressedColor.fields.r;
                  local_e8.fields.m_PressedColor.fields.g = (pUVar8->fields).m_PressedColor.fields.g;
                  local_e8.fields.m_PressedColor.fields.b = (pUVar8->fields).m_PressedColor.fields.b;
                  local_e8.fields.m_PressedColor.fields.a = (pUVar8->fields).m_PressedColor.fields.a;
                  local_e8.fields.m_SelectedColor.fields.r = (pUVar8->fields).m_SelectedColor.fields.r;
                  local_e8.fields.m_SelectedColor.fields.g = (pUVar8->fields).m_SelectedColor.fields.g;
                  local_e8.fields.m_SelectedColor.fields.b = (pUVar8->fields).m_SelectedColor.fields.b;
                  local_e8.fields.m_SelectedColor.fields.a = (pUVar8->fields).m_SelectedColor.fields.a;
                  local_e8.fields.m_DisabledColor.fields.r = (pUVar8->fields).m_DisabledColor.fields.r;
                  local_e8.fields.m_DisabledColor.fields.g = (pUVar8->fields).m_DisabledColor.fields.g;
                  local_e8.fields.m_DisabledColor.fields.b = (pUVar8->fields).m_DisabledColor.fields.b;
                  local_e8.fields.m_DisabledColor.fields.a = (pUVar8->fields).m_DisabledColor.fields.a;
                  local_e8.fields.m_ColorMultiplier = (pUVar8->fields).m_ColorMultiplier;
                  local_e8.fields.m_FadeDuration = (pUVar8->fields).m_FadeDuration;
                  UnityEngine_UI_Selectable__set_colors
                            ((UnityEngine_UI_Selectable_o *)pUVar7,&local_e8,(MethodInfo *)0x0);
                  __this_00 = UnityEngine_GameObject__AddComponent_object_
                                        (__this,(MethodInfo_6F4D60 *)
                                                MethodInfo_UnityEngine_GameObject_AddComponent_CollapsibleToggleSection
                                        );
                  pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar6,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                  if (__this_00 != (UI_CollapsibleToggleSection_o *)0x0) {
                    UI_CollapsibleToggleSection__Setup
                              (__this_00,pUVar5,pUVar7,enableToggle,title,startEnabled,startExpanded,
                               onToggleChanged,(MethodInfo *)0x0);
                    return __this_00;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_18220c8c0:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateOverlayLabel
// il2cpp: UnityEngine_UI_Text_o* UI_ElementFactory__CreateOverlayLabel (UnityEngine_Transform_o* parent, UnityEngine_Transform_o* fontSource, System_String_o* text, UnityEngine_Color_o color, int32_t alignment, int32_t fontStyle, int32_t fontSize, const MethodInfo* method);
// 0x18220ef40

UnityEngine_UI_Text_o *
UI_ElementFactory__CreateOverlayLabel
          (UnityEngine_Transform_o *parent,UnityEngine_Transform_o *fontSource,System_String_o *text,
          UnityEngine_Color_o *color,int32_t alignment,int32_t fontStyle,int32_t fontSize,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Font_o *pUVar4;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_Font_o *value;
  UnityEngine_Font_o *__this_03;
  UnityEngine_Color_Fields local_48;
  
  if (Il2CppMethodInitialized_1843470f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OverlayLabel");
    Il2CppMethodInitialized_1843470f2 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_18220f322;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Text,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar2);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this,"OverlayLabel",components,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
          pUVar4 = (UnityEngine_Font_o *)UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          value = (UnityEngine_Font_o *)0x0;
          __this_03 = value;
          if (pUVar4 != (UnityEngine_Font_o *)0x0) {
            if ((UnityEngine_RectTransform_c *)pUVar4->klass == TypeInfo_UnityEngine_RectTransform) {
              __this_03 = pUVar4;
            }
            if (__this_03 == (UnityEngine_Font_o *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
            }
          }
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          if (__this_03 != (UnityEngine_Font_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      ((UnityEngine_RectTransform_o *)__this_03,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_184341f36 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_184341f36 = '\x01';
            }
            UnityEngine_RectTransform__set_anchorMax
                      ((UnityEngine_RectTransform_o *)__this_03,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_18433e3c9 = '\x01';
            }
            UnityEngine_RectTransform__set_offsetMin
                      ((UnityEngine_RectTransform_o *)__this_03,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_18433e3c9 = '\x01';
            }
            UnityEngine_RectTransform__set_offsetMax
                      ((UnityEngine_RectTransform_o *)__this_03,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            __this_01 = UnityEngine_GameObject__GetComponent_object_
                                  (__this,(MethodInfo_6F5650 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_Text);
            if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
              (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                        (__this_01,text,(__this_01->klass->vtable)._75_set_text.method);
              UnityEngine_UI_Text__set_alignment(__this_01,alignment,(MethodInfo *)0x0);
              local_48.r = (color->fields).r;
              local_48.g = (color->fields).g;
              local_48.b = (color->fields).b;
              local_48.a = (color->fields).a;
              (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                        (__this_01,(UnityEngine_Color_o *)&local_48,
                         (__this_01->klass->vtable)._23_set_color.method);
              (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)fontSource,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar1) {
                if (fontSource == (UnityEngine_Transform_o *)0x0) goto label_18220f322;
                __this_02 = UnityEngine_Component__GetComponentInChildren_object__664b50
                                      ((UnityEngine_Component_o *)fontSource,
                                       (MethodInfo_664B50 *)
                                       MethodInfo_UnityEngine_Component_GetComponentInChildren_Text);
                if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
                  value = UnityEngine_UI_Text__get_font(__this_02,(MethodInfo *)0x0);
                }
              }
              UnityEngine_UI_Text__set_font(__this_01,value,(MethodInfo *)0x0);
              UnityEngine_UI_Text__set_fontSize(__this_01,fontSize,(MethodInfo *)0x0);
              UnityEngine_UI_Text__set_fontStyle(__this_01,fontStyle,(MethodInfo *)0x0);
              return __this_01;
            }
          }
        }
      }
label_18220f322:
      ThrowNullReferenceException();
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ElementFactory$$GetTextWidth
// il2cpp: float UI_ElementFactory__GetTextWidth (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, const MethodInfo* method);
// 0x182211080

float UI_ElementFactory__GetTextWidth
                (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
                int32_t fontStyle,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  UnityEngine_RectTransform_o *__this;
  UnityEngine_Vector2_o UVar1;
  
  if (Il2CppMethodInitialized_1843470f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843470f3 = '\x01';
  }
  obj = (UnityEngine_Object_o *)
        UI_ElementFactory__CreateDefaultLabel(parent,style,title,fontStyle,4,(MethodInfo *)0x0);
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       ((UnityEngine_GameObject_o *)obj,
                        (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
      return UVar1.fields.x;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$InstantiateAndSetupPanel<object>
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__InstantiateAndSetupPanel_object_ (UnityEngine_Transform_o* parent, System_String_o* asset, bool enabled, const MethodInfo_6ABD60* method);
// 0x1806abd60

UnityEngine_GameObject_o *
UI_ElementFactory__InstantiateAndSetupPanel_object_
          (UnityEngine_Transform_o *parent,System_String_o *asset,bool enabled,MethodInfo_6ABD60 *method)

{
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_6ABD60_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
    if (method->rgctx_data == (MethodInfo_6ABD60_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,asset,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_6F4D60 *)
                               method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
    if (parent != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)parent,
                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
      if (pIVar1 != (Il2CppObject *)0x0) {
        (*pIVar1->klass->vtable[0x14].methodPtr)(pIVar1);
        UnityEngine_GameObject__SetActive(__this,false,(MethodInfo *)0x0);
        UnityEngine_GameObject__SetActive(__this,enabled,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$InstantiateAndSetupCustomPopup
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__InstantiateAndSetupCustomPopup (UnityEngine_Transform_o* parent, System_String_o* title, float width, float height, bool enabled, const MethodInfo* method);
// 0x1822112c0

UnityEngine_GameObject_o *
UI_ElementFactory__InstantiateAndSetupCustomPopup
          (UnityEngine_Transform_o *parent,System_String_o *title,float width,float height,bool enabled,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_CustomPopup_o *__this_00;
  UI_BasePanel_o *parent_00;
  
  if (Il2CppMethodInitialized_1843470f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CustomPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/HeadedPanel");
    Il2CppMethodInitialized_1843470f4 = '\x01';
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Panels/HeadedPanel",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_CustomPopup);
    if (parent != (UnityEngine_Transform_o *)0x0) {
      parent_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)parent,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
      if (__this_00 != (UI_CustomPopup_o *)0x0) {
        UI_CustomPopup__Setup(__this_00,parent_00,title,width,height,(MethodInfo *)0x0);
        UnityEngine_GameObject__SetActive(__this,false,(MethodInfo *)0x0);
        UnityEngine_GameObject__SetActive(__this,enabled,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$InstantiateAndBind
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__InstantiateAndBind (UnityEngine_Transform_o* parent, System_String_o* asset, const MethodInfo* method);
// 0x182211170

UnityEngine_GameObject_o *
UI_ElementFactory__InstantiateAndBind
          (UnityEngine_Transform_o *parent,System_String_o *asset,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843470f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    Il2CppMethodInitialized_1843470f5 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,asset,true,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,parent,false,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_18.x = (pUVar1->zeroVector).fields.x;
        local_18.y = (pUVar1->zeroVector).fields.y;
        local_18.z = (pUVar1->zeroVector).fields.z;
        UnityEngine_Transform__set_localPosition(pUVar2,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$SetAnchor
// il2cpp: void UI_ElementFactory__SetAnchor (UnityEngine_GameObject_o* obj, int32_t anchor, int32_t pivot, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x1822113d0

void UI_ElementFactory__SetAnchor
               (UnityEngine_GameObject_o *obj,int32_t anchor,int32_t pivot,UnityEngine_Vector2_o offset,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this;
  UnityEngine_Vector2_o UVar1;
  
  if (Il2CppMethodInitialized_1843470f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    Il2CppMethodInitialized_1843470f6 = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (obj,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
    ;
    UVar1 = UI_ElementFactory__GetAnchorVector(anchor,(MethodInfo *)0x0);
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMax(__this,UVar1,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMin(__this,UVar1,(MethodInfo *)0x0);
      UVar1 = UI_ElementFactory__GetAnchorVector(pivot,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_pivot(__this,UVar1,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchoredPosition(__this,offset,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$GetAnchorVector
// il2cpp: UnityEngine_Vector2_o UI_ElementFactory__GetAnchorVector (int32_t anchor, const MethodInfo* method);
// 0x182210fa0

UnityEngine_Vector2_o UI_ElementFactory__GetAnchorVector(int32_t anchor,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Vector2_Fields UVar4;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_Fields UVar6;
  UnityEngine_Vector2_Fields UVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = 0.0;
  fVar9 = 0.0;
  switch(anchor) {
  case 0:
    UVar2.x = 0.0;
    UVar2.y = 1.0;
    return (UnityEngine_Vector2_o)UVar2;
  case 1:
    UVar3.x = 0.5;
    UVar3.y = 1.0;
    return (UnityEngine_Vector2_o)UVar3;
  case 2:
    UVar4.x = 1.0;
    UVar4.y = 1.0;
    return (UnityEngine_Vector2_o)UVar4;
  case 3:
    UVar5.x = 0.0;
    UVar5.y = 0.5;
    return (UnityEngine_Vector2_o)UVar5;
  case 4:
    UVar6.x = 0.5;
    UVar6.y = 0.5;
    return (UnityEngine_Vector2_o)UVar6;
  case 5:
    fVar8 = 0.5;
  case 8:
    fVar9 = 1.0;
  default:
    UVar1.y = fVar8;
    UVar1.x = fVar9;
    return (UnityEngine_Vector2_o)UVar1;
  case 7:
    UVar7.x = 0.5;
    UVar7.y = 0.0;
    return (UnityEngine_Vector2_o)UVar7;
  }
}


// UI.ElementFactory$$.ctor
// il2cpp: void UI_ElementFactory___ctor (UI_ElementFactory_o* __this, const MethodInfo* method);
// 0x180528540

void
UI_ElementFactory___ctor(UI_ElementFactory_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


