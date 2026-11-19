// Type: UI.ElementFactory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/ElementFactory.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/ElementFactory.cs
// --------------------------------

// UI.ElementFactory.<>c__DisplayClass12_0$$.ctor
// il2cpp: void UI_ElementFactory___c__DisplayClass12_0___ctor (UI_ElementFactory___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x5cec520

void UI_ElementFactory___c__DisplayClass12_0___ctor
               (UI_ElementFactory___c__DisplayClass12_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ElementFactory.<>c__DisplayClass12_1$$.ctor
// il2cpp: void UI_ElementFactory___c__DisplayClass12_1___ctor (UI_ElementFactory___c__DisplayClass12_1_o* __this, const MethodInfo* method);
// 0x5cec530

void UI_ElementFactory___c__DisplayClass12_1___ctor
               (UI_ElementFactory___c__DisplayClass12_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ElementFactory.<>c__DisplayClass12_1$$<CreateSetActionButtons>b__0
// il2cpp: void UI_ElementFactory___c__DisplayClass12_1___CreateSetActionButtons_b__0 (UI_ElementFactory___c__DisplayClass12_1_o* __this, const MethodInfo* method);
// 0x5cec540

void UI_ElementFactory___c__DisplayClass12_1___CreateSetActionButtons_b__0
               (UI_ElementFactory___c__DisplayClass12_1_o *__this,MethodInfo *method)

{
  UI_ElementFactory___c__DisplayClass12_0_o *pUVar1;
  System_Action_string__o *pSVar2;
  code *vtableDispatch;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 == (UI_ElementFactory___c__DisplayClass12_0_o *)0x0) ||
     (pSVar2 = (pUVar1->fields).onClick, pSVar2 == (System_Action_string__o *)0x0)) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar2->fields).method_code,(__this->fields).name,(pSVar2->fields).method,vtableDispatch)
  ;
  return;
}


// UI.ElementFactory$$CreateDefaultMenu<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateDefaultMenu_object_ (const MethodInfo_34D7240* method);
// 0x35d7240

Il2CppObject * UI_ElementFactory__CreateDefaultMenu_object_(MethodInfo_34D7240 *method)

{
  MethodInfo_34D7240_RGCTXs *pMVar1;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_34D7240_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/DefaultMenu");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_34D7240_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar1 = method->rgctx_data;
    }
  }
  pIVar2 = UI_ElementFactory__CreateMenu_object_
                     ("Prefabs/Panels/DefaultMenu",(MethodInfo_34D73E0 *)pMVar1->_0_UI_ElementFactory_CreateMenu_T_);
  return pIVar2;
}


// UI.ElementFactory$$CreateMenu<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateMenu_object_ (System_String_o* asset, const MethodInfo_34D73E0* method);
// 0x35d73e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x35d7539: jmp 0x35d7440

Il2CppObject * UI_ElementFactory__CreateMenu_object_(System_String_o *asset,MethodInfo_34D73E0 *method)

{
  uint32_t uVar1;
  System_String_o *path;
  UnityEngine_GameObject_o *root;
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_34D73E0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    if (method->rgctx_data == (MethodInfo_34D73E0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
      goto joined_r0x035d743e;
    }
  }
  uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
joined_r0x035d743e:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  root = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                   (path,asset,true,false,
                    (MethodInfo_3665790 *)
                    MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  UI_LanguageFonts__Localize(root,(MethodInfo *)0x0);
  if (root != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    if (__this != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_position
                (__this,(UnityEngine_Vector3_o)
                        (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0);
      pIVar2 = UnityEngine_GameObject__AddComponent_object_
                         (root,(MethodInfo_353B6A0 *)
                               method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateEmptyPanel<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateEmptyPanel_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_34D7300* method);
// 0x35d7300

Il2CppObject *
UI_ElementFactory__CreateEmptyPanel_object_
          (UnityEngine_Transform_o *parent,bool enabled,MethodInfo_34D7300 *method)

{
  MethodInfo_34D7300_RGCTXs *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_34D7300_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/EmptyPanel");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_34D7300_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar1 = method->rgctx_data;
    }
  }
  __this = UI_ElementFactory__InstantiateAndSetupPanel_object_
                     (parent,"Prefabs/Panels/EmptyPanel",enabled,
                      (MethodInfo_34D7620 *)pMVar1->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = UnityEngine_GameObject__GetComponent_object_
                     (__this,(MethodInfo_353B730 *)
                             method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
  return pIVar2;
}


// UI.ElementFactory$$CreateEmptyPanel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateEmptyPanel (UnityEngine_Transform_o* parent, System_Type_o* t, bool enabled, const MethodInfo* method);
// 0x5ce8660

UnityEngine_GameObject_o *
UI_ElementFactory__CreateEmptyPanel
          (UnityEngine_Transform_o *parent,System_Type_o *t,bool enabled,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Component_c *pUVar2;
  undefined8 uVar3;
  UnityEngine_Object_o *__this;
  System_String_o *value;
  UnityEngine_Component_o *pUVar4;
  UI_BasePanel_o *pUVar5;
  undefined7 in_register_00000011;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000011,enabled);
  if (Il2CppMethodInitialized_07547c34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/EmptyPanel");
    Il2CppMethodInitialized_07547c34 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = (UnityEngine_Object_o *)
           UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Panels/EmptyPanel",method_00);
  if (t != (System_Type_o *)0x0) {
    value = (System_String_o *)
            (*(t->klass->vtable)._8_unknown.methodPtr)(t,(t->klass->vtable)._8_unknown.method);
    if (__this != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this,value,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_GameObject__AddComponent((UnityEngine_GameObject_o *)__this,t,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)parent,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
        if (pUVar4 != (UnityEngine_Component_o *)0x0) {
          pUVar2 = pUVar4->klass;
          bVar1 = (TypeInfo_UI_BasePanel->_2).typeHierarchyDepth;
          if (((pUVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_BasePanel)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
          }
          uVar3._0_4_ = ((Il2CppClass *)pUVar2)->vtable[20].method;
          uVar3._4_4_ = pUVar2[1]._2.static_fields_size;
          (**(code **)&((Il2CppClass *)pUVar2)->vtable[20].methodPtr)(pUVar4,pUVar5,uVar3);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this,enabled,(MethodInfo *)0x0);
          return (UnityEngine_GameObject_o *)__this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateSimplePanel<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateSimplePanel_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_34D7550* method);
// 0x35d7550

Il2CppObject *
UI_ElementFactory__CreateSimplePanel_object_
          (UnityEngine_Transform_o *parent,bool enabled,MethodInfo_34D7550 *method)

{
  MethodInfo_34D7550_RGCTXs *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_34D7550_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/SimplePanel");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_34D7550_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar1 = method->rgctx_data;
    }
  }
  __this = UI_ElementFactory__InstantiateAndSetupPanel_object_
                     (parent,"Prefabs/Panels/SimplePanel",enabled,
                      (MethodInfo_34D7620 *)pMVar1->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = UnityEngine_GameObject__GetComponent_object_
                     (__this,(MethodInfo_353B730 *)
                             method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
  return pIVar2;
}


// UI.ElementFactory$$CreateDefaultPopup<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateDefaultPopup_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_34D7290* method);
// 0x35d7290

Il2CppObject *
UI_ElementFactory__CreateDefaultPopup_object_
          (UnityEngine_Transform_o *parent,bool enabled,MethodInfo_34D7290 *method)

{
  MethodInfo_34D7290_RGCTXs *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_34D7290_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/HeadedPanel");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_34D7290_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar1 = method->rgctx_data;
    }
  }
  __this = UI_ElementFactory__InstantiateAndSetupPanel_object_
                     (parent,"Prefabs/Panels/HeadedPanel",enabled,
                      (MethodInfo_34D7620 *)pMVar1->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = UnityEngine_GameObject__GetComponent_object_
                     (__this,(MethodInfo_353B730 *)
                             method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
  return pIVar2;
}


// UI.ElementFactory$$CreateHeadedPanel<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateHeadedPanel_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_34D7370* method);
// 0x35d7370

Il2CppObject *
UI_ElementFactory__CreateHeadedPanel_object_
          (UnityEngine_Transform_o *parent,bool enabled,MethodInfo_34D7370 *method)

{
  MethodInfo_34D7370_RGCTXs *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_34D7370_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/HeadedPanel");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_34D7370_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar1 = method->rgctx_data;
    }
  }
  __this = UI_ElementFactory__InstantiateAndSetupPanel_object_
                     (parent,"Prefabs/Panels/HeadedPanel",enabled,
                      (MethodInfo_34D7620 *)pMVar1->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar2 = UnityEngine_GameObject__GetComponent_object_
                     (__this,(MethodInfo_353B730 *)
                             method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
  return pIVar2;
}


// UI.ElementFactory$$CreateTooltipPopup<object>
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTooltipPopup_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_34D75C0* method);
// 0x35d75c0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTooltipPopup_object_
          (UnityEngine_Transform_o *parent,bool enabled,MethodInfo_34D75C0 *method)

{
  MethodInfo_34D75C0_RGCTXs *pMVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_34D75C0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/TooltipPopup");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_34D75C0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar1 = method->rgctx_data;
    }
  }
  pUVar2 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                     (parent,"Prefabs/Misc/TooltipPopup",enabled,
                      (MethodInfo_34D7620 *)pMVar1->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_);
  return pUVar2;
}


// UI.ElementFactory$$CreateTipPanel
// il2cpp: UI_TipPanel_o* UI_ElementFactory__CreateTipPanel (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo* method);
// 0x5ce8780

UI_TipPanel_o *
UI_ElementFactory__CreateTipPanel(UnityEngine_Transform_o *parent,bool enabled,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UI_TipPanel_o *__this;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547c35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TipPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/MainMenu/TipPanel");
    Il2CppMethodInitialized_07547c35 = '\x01';
    method = extraout_RDX;
  }
  pUVar1 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/MainMenu/TipPanel",method);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (pUVar1,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_TipPanel);
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
// 0x5ce8820

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDefaultButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,float elementWidth,
          float elementHeight,UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar4;
  UnityEngine_UI_ColorBlock_o local_88;
  
  method_00 = (MethodInfo *)title;
  if (Il2CppMethodInitialized_07547c36 == '\0') {
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
    Il2CppMethodInitialized_07547c36 = '\x01';
    method_00 = extraout_RDX;
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultButton",method_00);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
          (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                    (__this_01,title,(__this_01->klass->vtable)._75_set_text.method);
          if (style != (UI_ElementStyle_o *)0x0) {
            UnityEngine_UI_Text__set_fontSize(__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               (__this_00,
                                (MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (0.0 < elementWidth) {
              if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05ce8b13;
              (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
            }
            if (0.0 < elementHeight) {
              if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05ce8b13;
              (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                        (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
            }
            if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button)
              ;
              if ((pUVar3 == (UnityEngine_UI_Button_o *)0x0) ||
                 (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick,
                 __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_05ce8b13;
              UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
            }
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this_00,
                                (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
            panel = (style->fields).ThemePanel;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            UI_UIManager__GetThemeColorBlock
                      (&local_88,panel,"DefaultButton","","DefaultPanel",
                       (MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
              value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
              value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
              value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
              value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
              value.fields.m_HighlightedColor.fields.r = local_88.fields.m_HighlightedColor.fields.r;
              value.fields.m_HighlightedColor.fields.g = local_88.fields.m_HighlightedColor.fields.g;
              value.fields.m_HighlightedColor.fields.b = local_88.fields.m_HighlightedColor.fields.b;
              value.fields.m_HighlightedColor.fields.a = local_88.fields.m_HighlightedColor.fields.a;
              value.fields.m_PressedColor.fields.r = local_88.fields.m_PressedColor.fields.r;
              value.fields.m_PressedColor.fields.g = local_88.fields.m_PressedColor.fields.g;
              value.fields.m_PressedColor.fields.b = local_88.fields.m_PressedColor.fields.b;
              value.fields.m_PressedColor.fields.a = local_88.fields.m_PressedColor.fields.a;
              value.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r;
              value.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g;
              value.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b;
              value.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a;
              value.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r;
              value.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g;
              value.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b;
              value.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a;
              value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
              value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
              UnityEngine_UI_Selectable__set_colors
                        ((UnityEngine_UI_Selectable_o *)pUVar3,value,(MethodInfo *)0x0);
              UVar4 = UI_UIManager__GetThemeColor
                                ((style->fields).ThemePanel,"DefaultButton","TextColor",
                                 "DefaultPanel",(MethodInfo *)0x0);
              (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                        (__this_01,UVar4,(__this_01->klass->vtable)._23_set_color.method);
              return __this_00;
            }
          }
        }
      }
    }
  }
label_05ce8b13:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreatePerkButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreatePerkButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, float offset, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x5cd29f0

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
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar5;
  
  method_00 = (MethodInfo *)title;
  if (Il2CppMethodInitialized_07547c37 == '\0') {
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
    Il2CppMethodInitialized_07547c37 = '\x01';
    method_00 = extraout_RDX;
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Misc/PerkButton",method_00);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_01 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
          (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                    (__this_01,title,(__this_01->klass->vtable)._75_set_text.method);
          if (style != (UI_ElementStyle_o *)0x0) {
            UnityEngine_UI_Text__set_fontSize(__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               (__this_00,
                                (MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (0.0 < elementWidth) {
              if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cd2c85;
              (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
            }
            if (0.0 < elementHeight) {
              if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cd2c85;
              (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                        (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
            }
            pUVar3 = UnityEngine_GameObject__AddComponent_object_
                               (__this_00,
                                (MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_PerkButton);
            if (pUVar3 != (UI_PerkButton_o *)0x0) {
              (*(pUVar3->klass->vtable)._43_Setup.methodPtr)
                        (pUVar3,tooltip,style,offset,(pUVar3->klass->vtable)._43_Setup.method);
              if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
                pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_00,
                                    (MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                if ((pUVar4 == (UnityEngine_UI_Button_o *)0x0) ||
                   (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar4->fields).m_OnClick,
                   __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_05cd2c85;
                UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
              }
              panel = (style->fields).ThemePanel;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              UVar5 = UI_UIManager__GetThemeColor
                                (panel,"DefaultButton","TextColor","DefaultPanel",
                                 (MethodInfo *)0x0);
              (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                        (__this_01,UVar5,(__this_01->klass->vtable)._23_set_color.method);
              return __this_00;
            }
          }
        }
      }
    }
  }
label_05cd2c85:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateIconButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateIconButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* icon, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onClick, System_String_o* iconRoot, const MethodInfo* method);
// 0x5ce8b20

UnityEngine_GameObject_o *
UI_ElementFactory__CreateIconButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *icon,float elementWidth,
          float elementHeight,UnityEngine_Events_UnityAction_o *onClick,System_String_o *iconRoot,
          MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Events_UnityEvent_o *__this;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_Texture_o *value_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_UI_ColorBlock_o local_88;
  
  method_00 = (MethodInfo *)icon;
  if (Il2CppMethodInitialized_07547c38 == '\0') {
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
    Il2CppMethodInitialized_07547c38 = '\x01';
    method_00 = extraout_RDX;
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/IconButton",method_00);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement),
     pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
    (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
    (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
    if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
      if ((pUVar3 == (UnityEngine_UI_Button_o *)0x0) ||
         (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick,
         __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_05ce8e23;
      UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
    }
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    if (iconRoot == (System_String_o *)0x0) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      iconRoot = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    value_00 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset(iconRoot,icon,true,false,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
      if ((value_00 != (UnityEngine_Texture_o *)0x0) &&
         (value_00->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
        il2cpp_codegen_raise_invalid_cast_exception(value_00);
      }
      UnityEngine_UI_RawImage__set_texture(__this_01,value_00,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
      if (style != (UI_ElementStyle_o *)0x0) {
        panel = (style->fields).ThemePanel;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        UI_UIManager__GetThemeColorBlock
                  (&local_88,panel,"IconButton","","DefaultPanel",
                   (MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
          value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
          value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
          value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
          value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
          value.fields.m_HighlightedColor.fields.r = local_88.fields.m_HighlightedColor.fields.r;
          value.fields.m_HighlightedColor.fields.g = local_88.fields.m_HighlightedColor.fields.g;
          value.fields.m_HighlightedColor.fields.b = local_88.fields.m_HighlightedColor.fields.b;
          value.fields.m_HighlightedColor.fields.a = local_88.fields.m_HighlightedColor.fields.a;
          value.fields.m_PressedColor.fields.r = local_88.fields.m_PressedColor.fields.r;
          value.fields.m_PressedColor.fields.g = local_88.fields.m_PressedColor.fields.g;
          value.fields.m_PressedColor.fields.b = local_88.fields.m_PressedColor.fields.b;
          value.fields.m_PressedColor.fields.a = local_88.fields.m_PressedColor.fields.a;
          value.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r;
          value.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g;
          value.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b;
          value.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a;
          value.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r;
          value.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g;
          value.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b;
          value.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a;
          value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
          value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
          UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pUVar3,value,(MethodInfo *)0x0)
          ;
          return __this_00;
        }
      }
    }
  }
label_05ce8e23:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateSetActionButtons
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateSetActionButtons (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_array* operations, System_Action_string__o* onClick, float size, const MethodInfo* method);
// 0x5cdb210
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cdb61d: jmp 0x5cdb623

UnityEngine_GameObject_o *
UI_ElementFactory__CreateSetActionButtons
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_array *operations,
          System_Action_string__o *onClick,float size,MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o *pUVar8;
  int iVar9;
  UI_ElementFactory___c__DisplayClass12_0_o *__this;
  UnityEngine_GameObject_o *__this_00;
  ulong uVar10;
  UI_ElementFactory___c__DisplayClass12_1_o *pUVar11;
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar12;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_RawImage_o *pUVar13;
  UnityEngine_UI_Button_o *__this_03;
  UI_HoverTooltip_o *pUVar14;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  ulong uVar15;
  UnityEngine_Color_o UVar16;
  
  if (Il2CppMethodInitialized_07547c39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementFactory_c__DisplayClass12_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_c__DisplayClass12_1_CreateSetActionButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementFactory_c__DisplayClass12_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/kenney-icons");
    il2cpp_codegen_initialize_runtime_metadata(&"IconButton");
    Il2CppMethodInitialized_07547c39 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementFactory_c__DisplayClass12_0);
  UI_ElementFactory___c__DisplayClass12_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UI_ElementFactory___c__DisplayClass12_0_o *)0x0) {
    (__this->fields).onClick = onClick;
    Il2CppCodeGenWriteBarrier(&(__this->fields).onClick);
    __this_00 = UI_ElementFactory__CreateHorizontalGroup(parent,12.0,3,method_00);
    if (operations != (System_String_array *)0x0) {
      iVar9 = (int)operations->max_length;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
        if (0 < iVar9) {
          pSVar12 = operations->m_Items[0];
          pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementFactory_c__DisplayClass12_1);
          UI_ElementFactory___c__DisplayClass12_1___ctor(pUVar11,(MethodInfo *)0x0);
          if (pUVar11 != (UI_ElementFactory___c__DisplayClass12_1_o *)0x0) {
            (pUVar11->fields).CS___8__locals1 = __this;
            Il2CppCodeGenWriteBarrier(&(pUVar11->fields).CS___8__locals1);
            (pUVar11->fields).name = pSVar12;
            Il2CppCodeGenWriteBarrier(&(pUVar11->fields).name);
            ThrowNullReferenceException();
          }
          goto label_05cdb662;
        }
      }
      else if (0 < iVar9) {
        uVar10 = operations->max_length & 0xffffffff;
        uVar15 = 0;
        do {
          if (uVar10 <= uVar15) {
            ThrowIndexOutOfRangeException();
          }
          pSVar12 = operations->m_Items[uVar15];
          pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementFactory_c__DisplayClass12_1);
          UI_ElementFactory___c__DisplayClass12_1___ctor(pUVar11,(MethodInfo *)0x0);
          if (pUVar11 == (UI_ElementFactory___c__DisplayClass12_1_o *)0x0) goto label_05cdb662;
          (pUVar11->fields).CS___8__locals1 = __this;
          Il2CppCodeGenWriteBarrier(&(pUVar11->fields).CS___8__locals1);
          (pUVar11->fields).name = pSVar12;
          Il2CppCodeGenWriteBarrier(&(pUVar11->fields).name);
          parent_00 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          pSVar12 = UI_SetActionIcons__For((pUVar11->fields).name,(MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (__this_01,(Il2CppObject *)pUVar11,
                     (intptr_t)MethodInfo_UI_ElementFactory_c__DisplayClass12_1_CreateSetActionButtons_b__0,
                     (MethodInfo *)0x0);
          __this_02 = UI_ElementFactory__CreateIconButton
                                (parent_00,style,pSVar12,size,size,__this_01,"Icons/kenney-icons",in_R9);
          if ((__this_02 == (UnityEngine_GameObject_o *)0x0) ||
             (pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                  (__this_02,
                                   (MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RawImage),
             style == (UI_ElementStyle_o *)0x0)) goto label_05cdb662;
          pSVar12 = (style->fields).ThemePanel;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          UVar16 = UI_UIManager__GetThemeColor
                             (pSVar12,"IconButton","TextColor","DefaultPanel",
                              (MethodInfo *)0x0);
          if (pUVar13 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05cdb662;
          (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                    (pUVar13,UVar16,(pUVar13->klass->vtable)._23_set_color.method);
          __this_03 = UnityEngine_GameObject__GetComponent_object_
                                (__this_02,
                                 (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          if (__this_03 == (UnityEngine_UI_Button_o *)0x0) goto label_05cdb662;
          uVar2 = (__this_03->fields).m_Colors.fields.m_ColorMultiplier;
          uVar3 = (__this_03->fields).m_Colors.fields.m_FadeDuration;
          value.fields.m_FadeDuration = (float)uVar3;
          value.fields.m_ColorMultiplier = (float)uVar2;
          pUVar8 = &(__this_03->fields).m_Colors;
          uVar4 = (pUVar8->fields).m_DisabledColor.fields.r;
          uVar5 = (pUVar8->fields).m_DisabledColor.fields.g;
          value.fields.m_DisabledColor.fields.g = (float)uVar5;
          value.fields.m_DisabledColor.fields.r = (float)uVar4;
          pUVar8 = &(__this_03->fields).m_Colors;
          uVar6 = (pUVar8->fields).m_DisabledColor.fields.b;
          uVar7 = (pUVar8->fields).m_DisabledColor.fields.a;
          value.fields.m_DisabledColor.fields.a = (float)uVar7;
          value.fields.m_DisabledColor.fields.b = (float)uVar6;
          if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
          }
          value.fields.m_NormalColor.fields.b = 1.0;
          value.fields.m_NormalColor.fields.a = 1.0;
          value.fields.m_NormalColor.fields.r = 1.0;
          value.fields.m_NormalColor.fields.g = 1.0;
          value.fields.m_HighlightedColor.fields.r = 0.75;
          value.fields.m_HighlightedColor.fields.g = 0.75;
          value.fields.m_HighlightedColor.fields.b = 0.75;
          value.fields.m_HighlightedColor.fields.a = 1.0;
          value.fields.m_PressedColor.fields.r = 0.55;
          value.fields.m_PressedColor.fields.g = 0.55;
          value.fields.m_PressedColor.fields.b = 0.55;
          value.fields.m_PressedColor.fields.a = 1.0;
          value.fields.m_SelectedColor.fields.r = 1.0;
          value.fields.m_SelectedColor.fields.g = 1.0;
          value.fields.m_SelectedColor.fields.b = 1.0;
          value.fields.m_SelectedColor.fields.a = 1.0;
          UnityEngine_UI_Selectable__set_colors
                    ((UnityEngine_UI_Selectable_o *)__this_03,value,(MethodInfo *)0x0);
          pUVar14 = UnityEngine_GameObject__AddComponent_object_
                              (__this_02,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_HoverTooltip);
          pSVar12 = UI_UIManager__GetLocaleCommon((pUVar11->fields).name,(MethodInfo *)0x0);
          if (pUVar14 == (UI_HoverTooltip_o *)0x0) goto label_05cdb662;
          (pUVar14->fields).Message = pSVar12;
          Il2CppCodeGenWriteBarrier(&(pUVar14->fields).Message);
          uVar15 = uVar15 + 1;
          uVar1 = (uint)operations->max_length;
          uVar10 = (ulong)uVar1;
        } while ((long)uVar15 < (long)(int)uVar1);
      }
      return __this_00;
    }
  }
label_05cdb662:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateRawImage
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateRawImage (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* image, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x5cd2c90

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
  UnityEngine_Texture_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)image;
  if (Il2CppMethodInitialized_07547c3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/RawImage");
    Il2CppMethodInitialized_07547c3a = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/RawImage",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar2,elementWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
      (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar2,elementHeight,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
      bVar1 = System_String__op_Inequality
                        (image,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        value = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset(path,image,true,false,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05cd2e30;
        if ((value != (UnityEngine_Texture_o *)0x0) &&
           (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
        UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
      }
      return __this;
    }
  }
label_05cd2e30:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateTooltipIcon
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTooltipIcon (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x5ce8e30

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTooltipIcon
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *tooltip,
          float elementWidth,float elementHeight,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_TooltipButton_o *pUVar1;
  UI_ElementStyle_o *style_00;
  
  style_00 = style;
  if (Il2CppMethodInitialized_07547c3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TooltipButton);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/TooltipIcon");
    Il2CppMethodInitialized_07547c3b = '\x01';
  }
  __this = UI_ElementFactory__CreateRawImage
                     (parent,style_00,"Icons/Navigation/TooltipIcon",elementWidth,elementHeight,method);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_TooltipButton);
    if (pUVar1 != (UI_TooltipButton_o *)0x0) {
      (*(pUVar1->klass->vtable)._43_Setup.methodPtr)
                (pUVar1,tooltip,style,(pUVar1->klass->vtable)._43_Setup.method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateTextButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTextButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, float width, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x5cd1980
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd1a9a: test r15, r15
// asm:   0x5cd1a9d: jne 0x5cd1ada
// asm:   0x5cd1a9f: jmp 0x5cd1b0f

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTextButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,float width,
          UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar1;
  UnityEngine_UI_Button_o *pUVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_UI_ColorBlock_o local_80;
  
  method_00 = (MethodInfo *)title;
  if (Il2CppMethodInitialized_07547c3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/TextButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"TextButton");
    Il2CppMethodInitialized_07547c3c = '\x01';
    method_00 = extraout_RDX;
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/TextButton",method_00);
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_01 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text),
      __this_01 != (UnityEngine_UI_Text_o *)0x0)) &&
     ((*(__this_01->klass->vtable)._75_set_text.methodPtr)
                (__this_01,title,(__this_01->klass->vtable)._75_set_text.method),
     style != (UI_ElementStyle_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_fontStyle(__this_01,1,(MethodInfo *)0x0);
    if ((width != 0.0) || (NAN(width))) {
      pUVar1 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this_01,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
      if (pUVar1 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cd1bd8;
      (*(pUVar1->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar1,width,(pUVar1->klass->vtable)._36_set_preferredWidth.method);
    }
    if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
      if ((pUVar2 == (UnityEngine_UI_Button_o *)0x0) ||
         (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar2->fields).m_OnClick,
         __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_05cd1bd8;
      UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
    }
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button)
    ;
    panel = (style->fields).ThemePanel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    UI_UIManager__GetThemeColorBlock
              (&local_80,panel,"TextButton","","DefaultPanel",
               (MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
      value.fields.m_NormalColor.fields.b = local_80.fields.m_NormalColor.fields.b;
      value.fields.m_NormalColor.fields.a = local_80.fields.m_NormalColor.fields.a;
      value.fields.m_NormalColor.fields.r = local_80.fields.m_NormalColor.fields.r;
      value.fields.m_NormalColor.fields.g = local_80.fields.m_NormalColor.fields.g;
      value.fields.m_HighlightedColor.fields.r = local_80.fields.m_HighlightedColor.fields.r;
      value.fields.m_HighlightedColor.fields.g = local_80.fields.m_HighlightedColor.fields.g;
      value.fields.m_HighlightedColor.fields.b = local_80.fields.m_HighlightedColor.fields.b;
      value.fields.m_HighlightedColor.fields.a = local_80.fields.m_HighlightedColor.fields.a;
      value.fields.m_PressedColor.fields.r = local_80.fields.m_PressedColor.fields.r;
      value.fields.m_PressedColor.fields.g = local_80.fields.m_PressedColor.fields.g;
      value.fields.m_PressedColor.fields.b = local_80.fields.m_PressedColor.fields.b;
      value.fields.m_PressedColor.fields.a = local_80.fields.m_PressedColor.fields.a;
      value.fields.m_SelectedColor.fields.r = local_80.fields.m_SelectedColor.fields.r;
      value.fields.m_SelectedColor.fields.g = local_80.fields.m_SelectedColor.fields.g;
      value.fields.m_SelectedColor.fields.b = local_80.fields.m_SelectedColor.fields.b;
      value.fields.m_SelectedColor.fields.a = local_80.fields.m_SelectedColor.fields.a;
      value.fields.m_DisabledColor.fields.r = local_80.fields.m_DisabledColor.fields.r;
      value.fields.m_DisabledColor.fields.g = local_80.fields.m_DisabledColor.fields.g;
      value.fields.m_DisabledColor.fields.b = local_80.fields.m_DisabledColor.fields.b;
      value.fields.m_DisabledColor.fields.a = local_80.fields.m_DisabledColor.fields.a;
      value.fields.m_ColorMultiplier = local_80.fields.m_ColorMultiplier;
      value.fields.m_FadeDuration = local_80.fields.m_FadeDuration;
      UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pUVar2,value,(MethodInfo *)0x0);
      return __this_00;
    }
  }
label_05cd1bd8:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateLinkButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateLinkButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x5ce8ee0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateLinkButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_Button_o *pUVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_UI_ColorBlock_o local_80;
  
  method_00 = (MethodInfo *)title;
  if (Il2CppMethodInitialized_07547c3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"LinkButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/TextButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547c3d = '\x01';
    method_00 = extraout_RDX;
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/TextButton",method_00);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text
                          );
    if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
      (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                (__this_01,title,(__this_01->klass->vtable)._75_set_text.method);
      if (style != (UI_ElementStyle_o *)0x0) {
        UnityEngine_UI_Text__set_fontSize(__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
        if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
          pUVar1 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          if ((pUVar1 == (UnityEngine_UI_Button_o *)0x0) ||
             (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar1->fields).m_OnClick,
             __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_05ce90c9;
          UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
        }
        pUVar1 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        panel = (style->fields).ThemePanel;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        UI_UIManager__GetThemeColorBlock
                  (&local_80,panel,"LinkButton","","DefaultPanel",
                   (MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
          value.fields.m_NormalColor.fields.b = local_80.fields.m_NormalColor.fields.b;
          value.fields.m_NormalColor.fields.a = local_80.fields.m_NormalColor.fields.a;
          value.fields.m_NormalColor.fields.r = local_80.fields.m_NormalColor.fields.r;
          value.fields.m_NormalColor.fields.g = local_80.fields.m_NormalColor.fields.g;
          value.fields.m_HighlightedColor.fields.r = local_80.fields.m_HighlightedColor.fields.r;
          value.fields.m_HighlightedColor.fields.g = local_80.fields.m_HighlightedColor.fields.g;
          value.fields.m_HighlightedColor.fields.b = local_80.fields.m_HighlightedColor.fields.b;
          value.fields.m_HighlightedColor.fields.a = local_80.fields.m_HighlightedColor.fields.a;
          value.fields.m_PressedColor.fields.r = local_80.fields.m_PressedColor.fields.r;
          value.fields.m_PressedColor.fields.g = local_80.fields.m_PressedColor.fields.g;
          value.fields.m_PressedColor.fields.b = local_80.fields.m_PressedColor.fields.b;
          value.fields.m_PressedColor.fields.a = local_80.fields.m_PressedColor.fields.a;
          value.fields.m_SelectedColor.fields.r = local_80.fields.m_SelectedColor.fields.r;
          value.fields.m_SelectedColor.fields.g = local_80.fields.m_SelectedColor.fields.g;
          value.fields.m_SelectedColor.fields.b = local_80.fields.m_SelectedColor.fields.b;
          value.fields.m_SelectedColor.fields.a = local_80.fields.m_SelectedColor.fields.a;
          value.fields.m_DisabledColor.fields.r = local_80.fields.m_DisabledColor.fields.r;
          value.fields.m_DisabledColor.fields.g = local_80.fields.m_DisabledColor.fields.g;
          value.fields.m_DisabledColor.fields.b = local_80.fields.m_DisabledColor.fields.b;
          value.fields.m_DisabledColor.fields.a = local_80.fields.m_DisabledColor.fields.a;
          value.fields.m_ColorMultiplier = local_80.fields.m_ColorMultiplier;
          value.fields.m_FadeDuration = local_80.fields.m_FadeDuration;
          UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pUVar1,value,(MethodInfo *)0x0)
          ;
          return __this_00;
        }
      }
    }
  }
label_05ce90c9:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateCategoryButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateCategoryButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x5ce90d0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateCategoryButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_Button_o *pUVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_UI_ColorBlock_o local_80;
  
  method_00 = (MethodInfo *)title;
  if (Il2CppMethodInitialized_07547c3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/CategoryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"CategoryButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547c3e = '\x01';
    method_00 = extraout_RDX;
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/CategoryButton",method_00);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text
                          );
    if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
      (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                (__this_01,title,(__this_01->klass->vtable)._75_set_text.method);
      if (style != (UI_ElementStyle_o *)0x0) {
        UnityEngine_UI_Text__set_fontSize(__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
        if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
          pUVar1 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          if ((pUVar1 == (UnityEngine_UI_Button_o *)0x0) ||
             (__this = (UnityEngine_Events_UnityEvent_o *)(pUVar1->fields).m_OnClick,
             __this == (UnityEngine_Events_UnityEvent_o *)0x0)) goto label_05ce92b9;
          UnityEngine_Events_UnityEvent__AddListener(__this,onClick,(MethodInfo *)0x0);
        }
        pUVar1 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        panel = (style->fields).ThemePanel;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        UI_UIManager__GetThemeColorBlock
                  (&local_80,panel,"CategoryButton","","DefaultPanel",
                   (MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
          value.fields.m_NormalColor.fields.b = local_80.fields.m_NormalColor.fields.b;
          value.fields.m_NormalColor.fields.a = local_80.fields.m_NormalColor.fields.a;
          value.fields.m_NormalColor.fields.r = local_80.fields.m_NormalColor.fields.r;
          value.fields.m_NormalColor.fields.g = local_80.fields.m_NormalColor.fields.g;
          value.fields.m_HighlightedColor.fields.r = local_80.fields.m_HighlightedColor.fields.r;
          value.fields.m_HighlightedColor.fields.g = local_80.fields.m_HighlightedColor.fields.g;
          value.fields.m_HighlightedColor.fields.b = local_80.fields.m_HighlightedColor.fields.b;
          value.fields.m_HighlightedColor.fields.a = local_80.fields.m_HighlightedColor.fields.a;
          value.fields.m_PressedColor.fields.r = local_80.fields.m_PressedColor.fields.r;
          value.fields.m_PressedColor.fields.g = local_80.fields.m_PressedColor.fields.g;
          value.fields.m_PressedColor.fields.b = local_80.fields.m_PressedColor.fields.b;
          value.fields.m_PressedColor.fields.a = local_80.fields.m_PressedColor.fields.a;
          value.fields.m_SelectedColor.fields.r = local_80.fields.m_SelectedColor.fields.r;
          value.fields.m_SelectedColor.fields.g = local_80.fields.m_SelectedColor.fields.g;
          value.fields.m_SelectedColor.fields.b = local_80.fields.m_SelectedColor.fields.b;
          value.fields.m_SelectedColor.fields.a = local_80.fields.m_SelectedColor.fields.a;
          value.fields.m_DisabledColor.fields.r = local_80.fields.m_DisabledColor.fields.r;
          value.fields.m_DisabledColor.fields.g = local_80.fields.m_DisabledColor.fields.g;
          value.fields.m_DisabledColor.fields.b = local_80.fields.m_DisabledColor.fields.b;
          value.fields.m_DisabledColor.fields.a = local_80.fields.m_DisabledColor.fields.a;
          value.fields.m_ColorMultiplier = local_80.fields.m_ColorMultiplier;
          value.fields.m_FadeDuration = local_80.fields.m_FadeDuration;
          UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pUVar1,value,(MethodInfo *)0x0)
          ;
          return __this_00;
        }
      }
    }
  }
label_05ce92b9:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateDropdownSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateDropdownSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float maxScrollHeight, System_Nullable_float__o optionsWidth, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, System_Int32_array* intOptionValues, System_Func_string__string__o* optionLabel, const MethodInfo* method);
// 0x5cd4a10

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDropdownSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth,
          float elementHeight,float maxScrollHeight,System_Nullable_float__o optionsWidth,
          UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,System_Int32_array *intOptionValues,
          System_Func_string__string__o *optionLabel,MethodInfo *method)

{
  System_Nullable_float__o SVar1;
  UnityEngine_GameObject_o *__this;
  UI_DropdownSettingElement_o *pUVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  float fVar3;
  
  SVar1.fields = optionsWidth.fields;
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_DropdownSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DropdownSetting");
    Il2CppMethodInitialized_07547c3f = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DropdownSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_DropdownSettingElement);
    if (pUVar2 != (UI_DropdownSettingElement_o *)0x0) {
      (pUVar2->fields)._optionLabel = optionLabel;
      Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._optionLabel);
      if (SVar1.fields.hasValue == false) {
        System_Nullable_float____ctor
                  (&optionsWidth,elementWidth,(MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
      }
      fVar3 = System_Nullable_float___get_Value
                        (&optionsWidth,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
      (*(pUVar2->klass->vtable)._7_Setup.methodPtr)
                (pUVar2,setting,style,title,options,tooltip,elementWidth,elementHeight,fVar3,maxScrollHeight,
                 onDropdownOptionSelect,intOptionValues,(pUVar2->klass->vtable)._7_Setup.method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateDropdownSelect
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateDropdownSelect (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float maxScrollHeight, System_Nullable_float__o optionsWidth, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, const MethodInfo* method);
// 0x5ce92c0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDropdownSelect
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth,
          float elementHeight,float maxScrollHeight,System_Nullable_float__o optionsWidth,
          UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,MethodInfo *method)

{
  System_Nullable_float__o SVar1;
  UnityEngine_GameObject_o *__this;
  UI_DropdownSelectElement_o *pUVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  float fVar3;
  
  SVar1.fields = optionsWidth.fields;
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_DropdownSelectElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DropdownSetting");
    Il2CppMethodInitialized_07547c40 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DropdownSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_DropdownSelectElement);
    if (SVar1.fields.hasValue == false) {
      System_Nullable_float____ctor
                (&optionsWidth,elementWidth,(MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
    }
    fVar3 = System_Nullable_float___get_Value
                      (&optionsWidth,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    if (pUVar2 != (UI_DropdownSelectElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._7_Setup.methodPtr)
                (pUVar2,setting,style,title,options,tooltip,elementWidth,elementHeight,fVar3,maxScrollHeight,
                 onDropdownOptionSelect,(System_Int32_array *)0x0,(pUVar2->klass->vtable)._7_Setup.method);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateMultiSelectDropdown
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateMultiSelectDropdown (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_HashSetSetting_int__o* setting, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float maxScrollHeight, System_Nullable_float__o optionsWidth, UnityEngine_Events_UnityAction_o* onSelectionChanged, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x5ce9420

UnityEngine_GameObject_o *
UI_ElementFactory__CreateMultiSelectDropdown
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_HashSetSetting_int__o *setting,
          System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth,
          float elementHeight,float maxScrollHeight,System_Nullable_float__o optionsWidth,
          UnityEngine_Events_UnityAction_o *onSelectionChanged,System_Int32_array *intOptionValues,
          MethodInfo *method)

{
  System_Nullable_float__o SVar1;
  UnityEngine_GameObject_o *__this;
  UI_MultiSelectDropdownElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  float optionsWidth_00;
  
  SVar1.fields = optionsWidth.fields;
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MultiSelectDropdownElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DropdownSetting");
    Il2CppMethodInitialized_07547c41 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DropdownSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_MultiSelectDropdownElement);
    if (SVar1.fields.hasValue == false) {
      System_Nullable_float____ctor
                (&optionsWidth,elementWidth,(MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
    }
    optionsWidth_00 =
         System_Nullable_float___get_Value
                   (&optionsWidth,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
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
// 0x5cd39b0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateIncrementSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
          System_String_array *options,UnityEngine_Events_UnityAction_o *onValueChanged,
          System_Func_bool__o *validation,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_IncrementSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_IncrementSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/IncrementSetting");
    Il2CppMethodInitialized_07547c42 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/IncrementSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
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
// 0x5cd6b90

UnityEngine_GameObject_o *
UI_ElementFactory__CreateToggleSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
          UnityEngine_Events_UnityAction_o *onValueChanged,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_ToggleSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ToggleSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ToggleSetting");
    Il2CppMethodInitialized_07547c43 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ToggleSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
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
// 0x5ce9580

UnityEngine_GameObject_o *
UI_ElementFactory__CreateToggleGroupSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth,
          float elementHeight,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_ToggleGroupSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ToggleGroupSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ToggleGroupSetting");
    Il2CppMethodInitialized_07547c44 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ToggleGroupSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
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
// 0x5ce9650

UnityEngine_GameObject_o *
UI_ElementFactory__CreateSliderSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
          int32_t decimalPlaces,float interval,UnityEngine_Events_UnityAction_o *onValueChanged,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_SliderSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SliderSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/SliderSetting");
    Il2CppMethodInitialized_07547c45 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/SliderSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
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
// 0x5ce0270

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
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/InputSetting");
    Il2CppMethodInitialized_07547c46 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/InputSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_InputSettingElement);
    if (__this_00 != (UI_InputSettingElement_o *)0x0) {
      UI_InputSettingElement__Setup
                (__this_00,setting,style,title,tooltip,elementWidth,elementHeight,multiLine,onValueChanged,
                 onEndEdit,onValidate,onCleanup,(MethodInfo *)0x0);
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_34B0830 *)
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
// 0x5ce9730

UnityEngine_GameObject_o *
UI_ElementFactory__CreateSliderInputSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_o *tooltip,float sliderWidth,float sliderHeight,
          float inputWidth,float inputHeight,int32_t decimalPlaces,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_SliderInputSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SliderInputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/SliderInputSetting");
    Il2CppMethodInitialized_07547c47 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/SliderInputSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
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
// 0x5cd1be0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDefaultLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,int32_t fontStyle,
          int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  UnityEngine_UI_HorizontalLayoutGroup_o *x_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  int32_t value;
  UnityEngine_Color_o UVar3;
  
  method_00 = (MethodInfo *)title;
  if (Il2CppMethodInitialized_07547c48 == '\0') {
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
    Il2CppMethodInitialized_07547c48 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultLabel",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontStyle(__this_00,fontStyle,(MethodInfo *)0x0);
      panel = (style->fields).ThemePanel;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UVar3 = UI_UIManager__GetThemeColor
                        (panel,"DefaultLabel","TextColor","DefaultPanel",
                         (MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                (__this_00,UVar3,(__this_00->klass->vtable)._23_set_color.method);
      UnityEngine_UI_Text__set_alignment(__this_00,alignment,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)parent,
                       (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup
                      );
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        value = 0;
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_01 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_00,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_ContentSizeFitter);
        if (!bVar1) {
          value = 2;
        }
        if (__this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
          UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,value,(MethodInfo *)0x0);
          x_00 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)parent,
                            (MethodInfo_34B0830 *)
                            MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar2 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)__this_00,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
            if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cd1e6c;
            (*(pUVar2->klass->vtable)._40_set_flexibleWidth.methodPtr)
                      (pUVar2,0.0,(pUVar2->klass->vtable)._40_set_flexibleWidth.method);
          }
          return __this;
        }
      }
    }
  }
label_05cd1e6c:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateTMPLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTMPLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x5ce9810

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
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_UI_HorizontalLayoutGroup_o *x_00;
  int value;
  int32_t iVar5;
  UnityEngine_Color_o UVar6;
  
  if (Il2CppMethodInitialized_07547c49 == '\0') {
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
    Il2CppMethodInitialized_07547c49 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,5);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05ce9d32;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05ce9d3c;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_05ce9d3c;
    }
    if ((components->max_length & 0xfffffffe) == 0) goto label_05ce9d37;
    components->m_Items[1] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items + 1);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_05ce9d3c;
    }
    if ((uint)components->max_length < 3) goto label_05ce9d37;
    components->m_Items[2] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items + 2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_05ce9d3c;
    }
    if ((components->max_length & 0xfffffffc) != 0) {
      components->m_Items[3] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 3);
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_ContentSizeFitter,
                          (MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar3 == (Il2CppObject *)0x0) {
label_05ce9d3c:
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (4 < (uint)components->max_length) {
        components->m_Items[4] = pSVar2;
        Il2CppCodeGenWriteBarrier(components->m_Items + 4);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this,"TMPLabel",components,(MethodInfo *)0x0);
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
            __this_01 = UnityEngine_GameObject__GetComponent_object_
                                  (__this,(MethodInfo_353B730 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
            if ((style != (UI_ElementStyle_o *)0x0) && (__this_01 != (TMPro_TextMeshProUGUI_o *)0x0)) {
              TMPro_TMP_Text__set_fontSize
                        ((TMPro_TMP_Text_o *)__this_01,(float)(style->fields).FontSize,(MethodInfo *)0x0);
              (*(__this_01->klass->vtable)._66_set_text.methodPtr)
                        (__this_01,title,(__this_01->klass->vtable)._66_set_text.method);
              value = (uint)(fontStyle == 2) * 2;
              if (fontStyle == 1) {
                value = 1;
              }
              TMPro_TMP_Text__set_fontStyle((TMPro_TMP_Text_o *)__this_01,value,(MethodInfo *)0x0);
              panel = (style->fields).ThemePanel;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              UVar6 = UI_UIManager__GetThemeColor
                                (panel,"DefaultLabel","TextColor","DefaultPanel",
                                 (MethodInfo *)0x0);
              (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                        (__this_01,UVar6,(__this_01->klass->vtable)._23_set_color.method);
              iVar5 = 0x1001;
              if (alignment != 3) {
                iVar5 = (uint)(alignment == 5) * 2 + 0x1002;
              }
              TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this_01,iVar5,(MethodInfo *)0x0);
              __this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (__this,(MethodInfo_353B730 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
              if (parent != (UnityEngine_Transform_o *)0x0) {
                x = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)parent,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                iVar5 = 0;
                bVar1 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (!bVar1) {
                  iVar5 = 2;
                }
                if (__this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
                  UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_02,iVar5,(MethodInfo *)0x0);
                  pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                     (__this,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                  x_00 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)parent,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar1) {
                    if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05ce9d32;
                    (*(pUVar4->klass->vtable)._40_set_flexibleWidth.methodPtr)
                              (pUVar4,0.0,(pUVar4->klass->vtable)._40_set_flexibleWidth.method);
                  }
                  return __this;
                }
              }
            }
          }
        }
label_05ce9d32:
        ThrowNullReferenceException();
      }
    }
  }
label_05ce9d37:
  ThrowIndexOutOfRangeException();
}


// UI.ElementFactory$$CreateEffectText
// il2cpp: PatreonEffects_EffectText_o* UI_ElementFactory__CreateEffectText (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* text, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x5ce9d50

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
  int32_t value;
  UnityEngine_Color_o value_00;
  
  if (Il2CppMethodInitialized_07547c4a == '\0') {
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
    Il2CppMethodInitialized_07547c4a = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05cea244;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05cea24e;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_VerticalLayoutGroup,
                        (MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_05cea24e;
    }
    if ((components->max_length & 0xfffffffe) == 0) goto label_05cea249;
    components->m_Items[1] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items + 1);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_ContentSizeFitter,(MethodInfo *)0x0
                       );
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_05cea24e;
    }
    if (2 < (uint)components->max_length) {
      components->m_Items[2] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 2);
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar3 == (Il2CppObject *)0x0) {
label_05cea24e:
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((components->max_length & 0xfffffffc) != 0) {
        components->m_Items[3] = pSVar2;
        Il2CppCodeGenWriteBarrier(components->m_Items + 3);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this,"EffectText",components,(MethodInfo *)0x0);
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
            if (pUVar4 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
              UnityEngine_UI_LayoutGroup__set_childAlignment
                        ((UnityEngine_UI_LayoutGroup_o *)pUVar4,0,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar4,false,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar4,false,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar4,0.0,(MethodInfo *)0x0);
              __this_01 = UnityEngine_GameObject__GetComponent_object_
                                    (__this,(MethodInfo_353B730 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
              if (parent != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)parent,
                                    (MethodInfo_34B0830 *)
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
                                     (__this,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                  x = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)parent,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if (bVar1) {
                    if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cea244;
                    (*(pUVar5->klass->vtable)._40_set_flexibleWidth.methodPtr)
                              (pUVar5,0.0,(pUVar5->klass->vtable)._40_set_flexibleWidth.method);
                  }
                  __this_02 = UnityEngine_GameObject__AddComponent_object_
                                        (__this,(MethodInfo_353B6A0 *)
                                                MethodInfo_UnityEngine_GameObject_AddComponent_EffectText);
                  if ((style != (UI_ElementStyle_o *)0x0) && (__this_02 != (PatreonEffects_EffectText_o *)0x0)
                     ) {
                    PatreonEffects_EffectText__set_fontSize
                              (__this_02,(float)(style->fields).FontSize,(MethodInfo *)0x0);
                    panel = (style->fields).ThemePanel;
                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                    }
                    value = 0x1001;
                    if (alignment != 3) {
                      value = (uint)(alignment == 5) * 2 + 0x1002;
                    }
                    value_00 = UI_UIManager__GetThemeColor
                                         (panel,"DefaultLabel","TextColor",
                                          "DefaultPanel",(MethodInfo *)0x0);
                    PatreonEffects_EffectText__set_color(__this_02,value_00,(MethodInfo *)0x0);
                    PatreonEffects_EffectText__set_alignment(__this_02,value,(MethodInfo *)0x0);
                    PatreonEffects_EffectText__set_text(__this_02,text,(MethodInfo *)0x0);
                    return __this_02;
                  }
                }
              }
            }
          }
        }
label_05cea244:
        ThrowNullReferenceException();
      }
    }
  }
label_05cea249:
  ThrowIndexOutOfRangeException();
}


// UI.ElementFactory$$CreateNameEffectLabel
// il2cpp: PatreonEffects_NameEffectLabel_o* UI_ElementFactory__CreateNameEffectLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* prefix, System_String_o* name, System_String_o* suffix, int32_t alignment, const MethodInfo* method);
// 0x5cea260

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
  int32_t value;
  UnityEngine_Color_o value_00;
  
  if (Il2CppMethodInitialized_07547c4b == '\0') {
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
    Il2CppMethodInitialized_07547c4b = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05cea5c9;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05cea5d3;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
label_05cea5d3:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this,"NameEffectLabel",components,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (__this,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (parent != (UnityEngine_Transform_o *)0x0) {
            x = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)parent,
                           (MethodInfo_34B0830 *)
                           MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
              if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cea5c9;
              (*(pUVar4->klass->vtable)._40_set_flexibleWidth.methodPtr)
                        (pUVar4,0.0,(pUVar4->klass->vtable)._40_set_flexibleWidth.method);
            }
            __this_01 = UnityEngine_GameObject__AddComponent_object_
                                  (__this,(MethodInfo_353B6A0 *)
                                          MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectLabel);
            if ((style != (UI_ElementStyle_o *)0x0) && (__this_01 != (PatreonEffects_NameEffectLabel_o *)0x0))
            {
              PatreonEffects_NameEffectLabel__set_fontSize
                        (__this_01,(float)(style->fields).FontSize,(MethodInfo *)0x0);
              panel = (style->fields).ThemePanel;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              value = 0x1001;
              if (alignment != 3) {
                value = (uint)(alignment == 5) * 2 + 0x1002;
              }
              value_00 = UI_UIManager__GetThemeColor
                                   (panel,"DefaultLabel","TextColor","DefaultPanel",
                                    (MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__set_color(__this_01,value_00,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__set_alignment(__this_01,value,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__SetText(__this_01,prefix,name,suffix,(MethodInfo *)0x0);
              return __this_01;
            }
          }
        }
      }
label_05cea5c9:
      ThrowNullReferenceException();
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ElementFactory$$CreateWhiteLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateWhiteLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x5cea5f0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateWhiteLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,int32_t fontStyle,
          int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  UnityEngine_UI_HorizontalLayoutGroup_o *x_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  int32_t value;
  UnityEngine_Color_o UVar3;
  
  method_00 = (MethodInfo *)title;
  if (Il2CppMethodInitialized_07547c4c == '\0') {
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
    Il2CppMethodInitialized_07547c4c = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultLabel",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontStyle(__this_00,fontStyle,(MethodInfo *)0x0);
      panel = (style->fields).ThemePanel;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UVar3 = UI_UIManager__GetThemeColor
                        (panel,"WhiteLabel","TextColor","DefaultPanel",
                         (MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                (__this_00,UVar3,(__this_00->klass->vtable)._23_set_color.method);
      UnityEngine_UI_Text__set_alignment(__this_00,alignment,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)parent,
                       (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup
                      );
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        value = 0;
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_01 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_00,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_ContentSizeFitter);
        if (!bVar1) {
          value = 2;
        }
        if (__this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
          UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,value,(MethodInfo *)0x0);
          x_00 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)parent,
                            (MethodInfo_34B0830 *)
                            MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar2 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)__this_00,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
            if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cea87c;
            (*(pUVar2->klass->vtable)._40_set_flexibleWidth.methodPtr)
                      (pUVar2,0.0,(pUVar2->klass->vtable)._40_set_flexibleWidth.method);
          }
          return __this;
        }
      }
    }
  }
label_05cea87c:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateEmptySpace
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateEmptySpace (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5cea890

UnityEngine_GameObject_o *
UI_ElementFactory__CreateEmptySpace(UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *pUVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547c4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547c4d = '\x01';
    in_RDX = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultLabel",in_RDX);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
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
// 0x5cea920

UnityEngine_GameObject_o *
UI_ElementFactory__CreateLegacyHUDLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,int32_t fontStyle,
          int32_t alignment,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)title;
  if (Il2CppMethodInitialized_07547c4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/LegacyHUDLabel");
    Il2CppMethodInitialized_07547c4e = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/InGame/LegacyHUDLabel",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontStyle(__this_00,fontStyle,(MethodInfo *)0x0);
      UnityEngine_UI_Text__set_alignment(__this_00,alignment,(MethodInfo *)0x0);
      UI_ElementFactory__ConfigureHUDLabelLayout(__this,parent,method_01);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateHUDLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateHUDLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x5ceab90

UnityEngine_GameObject_o *
UI_ElementFactory__CreateHUDLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,int32_t fontStyle,
          int32_t alignment,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  TMPro_TextMeshProUGUI_o *__this_00;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar1;
  int32_t value;
  
  pMVar1 = (MethodInfo *)title;
  if (Il2CppMethodInitialized_07547c4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_71ab0b0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/HUDLabel");
    Il2CppMethodInitialized_07547c4f = '\x01';
    pMVar1 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/InGame/HUDLabel",pMVar1);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
label_05ceacde:
    ThrowNullReferenceException();
  }
  __this_00 = UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                        (__this,true,
                         (MethodInfo_353B9A0 *)
                         MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_71ab0b0);
  if ((style == (UI_ElementStyle_o *)0x0) || (__this_00 == (TMPro_TextMeshProUGUI_o *)0x0)) goto label_05ceacde;
  TMPro_TMP_Text__set_fontSize
            ((TMPro_TMP_Text_o *)__this_00,(float)(style->fields).FontSize,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._66_set_text.methodPtr)
            (__this_00,title,(__this_00->klass->vtable)._66_set_text.method);
  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this_00,alignment,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_textWrappingMode((TMPro_TMP_Text_o *)__this_00,2,(MethodInfo *)0x0);
  if (alignment == 0x204) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    if (__this_01 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_05ceacde;
    value = 5;
  }
  else {
    pMVar1 = extraout_RDX_00;
    if (alignment != 0x201) goto label_05ceacc1;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    if (__this_01 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_05ceacde;
    value = 3;
  }
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)__this_01,value,(MethodInfo *)0x0);
  pMVar1 = extraout_RDX_01;
label_05ceacc1:
  UI_ElementFactory__ConfigureHUDLabelLayout(__this,parent,pMVar1);
  return __this;
}


// UI.ElementFactory$$ConfigureHUDLabelLayout
// il2cpp: void UI_ElementFactory__ConfigureHUDLabelLayout (UnityEngine_GameObject_o* label, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5ceaa00

void UI_ElementFactory__ConfigureHUDLabelLayout
               (UnityEngine_GameObject_o *label,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_VerticalLayoutGroup_o *x;
  UnityEngine_UI_ContentSizeFitter_o *__this;
  UnityEngine_UI_HorizontalLayoutGroup_o *x_00;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  int32_t value;
  
  if (Il2CppMethodInitialized_07547c50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c50 = '\x01';
  }
  if (parent == (UnityEngine_Transform_o *)0x0) goto label_05ceab7d;
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)parent,
                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (label == (UnityEngine_GameObject_o *)0x0) goto label_05ceab7d;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (label,(MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    if (__this == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_05ceab7d;
    value = 0;
  }
  else {
    if (label == (UnityEngine_GameObject_o *)0x0) goto label_05ceab7d;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (label,(MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    if (__this == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_05ceab7d;
    value = 2;
  }
  UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this,value,(MethodInfo *)0x0);
  x_00 = UnityEngine_Component__GetComponent_object_
                   ((UnityEngine_Component_o *)parent,
                    (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup)
  ;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar2 = UnityEngine_GameObject__GetComponent_object_
                     (label,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                     );
  if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar2->klass->vtable)._40_set_flexibleWidth.methodPtr)
              (pUVar2,0.0,(pUVar2->klass->vtable)._40_set_flexibleWidth.method);
    return;
  }
label_05ceab7d:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateMultiTextLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateMultiTextLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t fontStyle, int32_t anchor, float fontSize, int32_t numberOfLabels, bool richText, const MethodInfo* method);
// 0x5ceacf0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateMultiTextLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,int32_t fontStyle,int32_t anchor,
          float fontSize,int32_t numberOfLabels,bool richText,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_MultiTextLabel_o *__this_00;
  UnityEngine_Transform_o *parent_00;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,fontStyle);
  if (Il2CppMethodInitialized_07547c51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MultiTextLabel)
    ;
    Il2CppMethodInitialized_07547c51 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__CreateHorizontalGroup(parent,0.0,3,method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
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
// 0x5ceadb0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateKeybindSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,UI_KeybindPopup_o *keybindPopup,System_String_o *tooltip,float elementWidth,
          float elementHeight,int32_t bindCount,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_KeybindSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_KeybindSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/KeybindSetting");
    Il2CppMethodInitialized_07547c52 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/KeybindSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_KeybindSettingElement);
    if (__this_00 != (UI_KeybindSettingElement_o *)0x0) {
      UI_KeybindSettingElement__Setup
                (__this_00,setting,style,title,keybindPopup,tooltip,elementWidth,elementHeight,bindCount,
                 (MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateColorSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateColorSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, UI_ColorPickPopup_o* colorPickPopup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x5cdbe00

UnityEngine_GameObject_o *
UI_ElementFactory__CreateColorSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,UI_ColorPickPopup_o *colorPickPopup,System_String_o *tooltip,
          float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onChangeColor,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_ColorSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ColorSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ColorSetting");
    Il2CppMethodInitialized_07547c53 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ColorSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
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
// 0x5ceae80

UnityEngine_GameObject_o *
UI_ElementFactory__CreateToggleColorSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_ToggleColorSetting_o *setting,
          System_String_o *title,UI_ColorPickPopup_o *colorPickPopup,System_String_o *tooltip,
          float toggleWidth,float toggleHeight,float colorWidth,float colorHeight,
          UnityEngine_Events_UnityAction_o *onToggleChanged,UnityEngine_Events_UnityAction_o *onChangeColor,
          MethodInfo *method)

{
  float spacing;
  int32_t fontSize;
  System_String_o *themePanel;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffff88;
  MethodInfo *in_stack_ffffffffffffff90;
  
  method_00 = (MethodInfo *)setting;
  method_01 = (MethodInfo *)tooltip;
  if (Il2CppMethodInitialized_07547c54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    Il2CppMethodInitialized_07547c54 = '\x01';
    method_00 = extraout_RDX;
  }
  if (style != (UI_ElementStyle_o *)0x0) {
    __this = UI_ElementFactory__CreateHorizontalGroup(parent,(style->fields).Spacing,3,method_00);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      __this_00 = UI_ElementFactory__CreateDefaultLabel(pUVar1,style,title,0,3,method_01);
      fontSize = (style->fields).FontSize;
      spacing = (style->fields).Spacing;
      themePanel = (style->fields).ThemePanel;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_01,fontSize,0.0,spacing,themePanel,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (setting != (Settings_ToggleColorSetting_o *)0x0) {
        UI_ElementFactory__CreateToggleSetting
                  (pUVar1,__this_01,(Settings_BaseSetting_o *)(setting->fields).Enabled,
                   (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                   (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),toggleWidth,toggleHeight,
                   onToggleChanged,in_stack_ffffffffffffff88);
        pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        UI_ElementFactory__CreateColorSetting
                  (pUVar1,__this_01,(Settings_BaseSetting_o *)(setting->fields).Color,
                   (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),colorPickPopup,tooltip,colorWidth
                   ,colorHeight,onChangeColor,in_stack_ffffffffffffff90);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          pUVar2 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                      (pUVar2,(style->fields).TitleWidth,(pUVar2->klass->vtable)._36_set_preferredWidth.method
                      );
            if ((style->fields).TitleWidth <= 0.0) {
              pUVar2 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
              if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05ceb094;
              (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar2,-1.0,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
            }
            return __this;
          }
        }
      }
    }
  }
label_05ceb094:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateIconPickSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateIconPickSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_array* icons, UI_IconPickPopup_o* popup, System_String_o* tooltip, System_String_array* tooltips, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onSelect, UI_TooltipPopup_o* tooltipPopup, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x5cdbbc0

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
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_IconPickSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ButtonSetting");
    Il2CppMethodInitialized_07547c55 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ButtonSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
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
// 0x5ceb0a0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateButtonPopupSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,UI_BasePopup_o *popup,System_String_o *tooltip,float elementWidth,
          float elementHeight,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_ButtonPopupSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ButtonPopupSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ButtonSetting");
    Il2CppMethodInitialized_07547c56 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ButtonSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
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
// 0x5ceb170

UnityEngine_GameObject_o *
UI_ElementFactory__CreateVector3Setting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,UI_Vector3Popup_o *vector3Popup,System_String_o *tooltip,float elementWidth,
          float elementHeight,UnityEngine_Events_UnityAction_o *onChangeVector,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_Vector3SettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (Il2CppMethodInitialized_07547c57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_Vector3SettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/Vector3Setting");
    Il2CppMethodInitialized_07547c57 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/Vector3Setting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
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
// 0x5ceb240

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
  MethodInfo *extraout_RDX;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_07547c58 == '\0') {
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
    Il2CppMethodInitialized_07547c58 = '\x01';
    method = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/HorizontalLine",method);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineImage",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar1,
                               (MethodInfo_34B0830 *)
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
                           (MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLineScaler);
                pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineImage",(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar2 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar1,
                                        (MethodInfo_34B0830 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_Image);
                    if (style != (UI_ElementStyle_o *)0x0) {
                      panel = (style->fields).ThemePanel;
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      UVar3 = UI_UIManager__GetThemeColor
                                        (panel,"MainBody","LineColor",
                                         "DefaultPanel",(MethodInfo *)0x0);
                      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                        (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                                  (pUVar2,UVar3,(pUVar2->klass->vtable)._23_set_color.method);
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
// 0x5cd1e80

UnityEngine_GameObject_o *
UI_ElementFactory__CreateHorizontalGroup
          (UnityEngine_Transform_o *parent,float spacing,int32_t alignment,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547c59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/HorizontalGroup");
    Il2CppMethodInitialized_07547c59 = '\x01';
    method = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/HorizontalGroup",method);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    if (pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar2,spacing,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
      if (pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar2,alignment,(MethodInfo *)0x0);
        if (parent != (UnityEngine_Transform_o *)0x0) {
          pUVar2 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)parent,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cd1fc8;
            (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                      (pUVar3,0.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
          }
          return __this;
        }
      }
    }
  }
label_05cd1fc8:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreatePlayerKDRRow
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreatePlayerKDRRow (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5ceb450

UnityEngine_GameObject_o *
UI_ElementFactory__CreatePlayerKDRRow
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Photon_Realtime_Player_o *player,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_PlayerKDRRow_o *__this_00;
  UI_KDRPanel_o *panel;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)player;
  if (Il2CppMethodInitialized_07547c5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_KDRPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_PlayerKDRRow);
    Il2CppMethodInitialized_07547c5a = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__CreateHorizontalGroup(parent,10.0,3,method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_PlayerKDRRow);
    if (parent != (UnityEngine_Transform_o *)0x0) {
      panel = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)parent,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_KDRPanel);
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
// 0x5ceb500

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTeamKDRRow
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *team,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_TeamKDRRow_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)team;
  if (Il2CppMethodInitialized_07547c5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TeamKDRRow);
    Il2CppMethodInitialized_07547c5b = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__CreateHorizontalGroup(parent,10.0,3,method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
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
// 0x5ceb580

UnityEngine_GameObject_o *
UI_ElementFactory__CreateVerticalGroup
          (UnityEngine_Transform_o *parent,float spacing,int32_t alignment,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547c5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/VerticalGroup");
    Il2CppMethodInitialized_07547c5c = '\x01';
    method = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/VerticalGroup",method);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    if (pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar2,spacing,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
      if (pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar2,alignment,(MethodInfo *)0x0);
        if (parent != (UnityEngine_Transform_o *)0x0) {
          pUVar2 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)parent,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_VerticalLayoutGroup);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05ceb6c8;
            (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                      (pUVar3,0.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
          }
          return __this;
        }
      }
    }
  }
label_05ceb6c8:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateCollapsibleSection
// il2cpp: UI_CollapsibleSection_o* UI_ElementFactory__CreateCollapsibleSection (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, bool startExpanded, System_Action_bool__o* onExpandedChanged, const MethodInfo* method);
// 0x5ceb6d0

UI_CollapsibleSection_o *
UI_ElementFactory__CreateCollapsibleSection
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,bool startExpanded,
          System_Action_bool__o *onExpandedChanged,MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UI_CollapsibleSection_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar1;
  UnityEngine_UI_ColorBlock_o local_88;
  
  pMVar1 = (MethodInfo *)title;
  if (Il2CppMethodInitialized_07547c5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CollapsibleSection);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/TextButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"TextButton");
    Il2CppMethodInitialized_07547c5d = '\x01';
    pMVar1 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/TextButton",pMVar1);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
      UnityEngine_UI_Text__set_fontStyle(__this_00,1,(MethodInfo *)0x0);
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            (__this,(MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_Button);
      panel = (style->fields).ThemePanel;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pMVar1 = (MethodInfo *)0x0;
      UI_UIManager__GetThemeColorBlock
                (&local_88,panel,"TextButton","","DefaultPanel",
                 (MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
        value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
        value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
        value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
        value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
        value.fields.m_HighlightedColor.fields.r = local_88.fields.m_HighlightedColor.fields.r;
        value.fields.m_HighlightedColor.fields.g = local_88.fields.m_HighlightedColor.fields.g;
        value.fields.m_HighlightedColor.fields.b = local_88.fields.m_HighlightedColor.fields.b;
        value.fields.m_HighlightedColor.fields.a = local_88.fields.m_HighlightedColor.fields.a;
        value.fields.m_PressedColor.fields.r = local_88.fields.m_PressedColor.fields.r;
        value.fields.m_PressedColor.fields.g = local_88.fields.m_PressedColor.fields.g;
        value.fields.m_PressedColor.fields.b = local_88.fields.m_PressedColor.fields.b;
        value.fields.m_PressedColor.fields.a = local_88.fields.m_PressedColor.fields.a;
        value.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r;
        value.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g;
        value.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b;
        value.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a;
        value.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r;
        value.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g;
        value.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b;
        value.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a;
        value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
        value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
        UnityEngine_UI_Selectable__set_colors
                  ((UnityEngine_UI_Selectable_o *)__this_01,value,(MethodInfo *)0x0);
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_CollapsibleSection);
        if (__this_02 != (UI_CollapsibleSection_o *)0x0) {
          UI_CollapsibleSection__Setup(__this_02,title,style,startExpanded,onExpandedChanged,pMVar1);
          return __this_02;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateCollapsibleToggleSection
// il2cpp: UI_CollapsibleToggleSection_o* UI_ElementFactory__CreateCollapsibleToggleSection (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, bool startEnabled, bool startExpanded, System_Action_bool__o* onToggleChanged, const MethodInfo* method);
// 0x5ceb8d0

UI_CollapsibleToggleSection_o *
UI_ElementFactory__CreateCollapsibleToggleSection
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,bool startEnabled,
          bool startExpanded,System_Action_bool__o *onToggleChanged,MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Object_o *obj;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_UI_Button_o *pUVar7;
  UI_CollapsibleToggleSection_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_UI_Toggle_o *pUStack_a0;
  undefined1 auStack_88 [32];
  UnityEngine_Color_Fields UStack_68;
  UnityEngine_Color_Fields UStack_58;
  UnityEngine_Color_Fields UStack_48;
  float fStack_38;
  float fStack_34;
  
  method_00 = (MethodInfo *)title;
  if (Il2CppMethodInitialized_07547c5e == '\0') {
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
    Il2CppMethodInitialized_07547c5e = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/HorizontalGroup",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    if (pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar2,6.0,(MethodInfo *)0x0);
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)pUVar2,3,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)parent,
                            (MethodInfo_34B0830 *)
                            MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cebed9;
          (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                    (pUVar3,0.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
        }
        pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        obj = (UnityEngine_Object_o *)
              UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/Elements/ToggleSetting",method_01);
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
              if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cebed9;
              UnityEngine_Transform__SetParent_692d510(pUVar4,parent_00,false,(MethodInfo *)0x0);
              UnityEngine_Transform__SetSiblingIndex(pUVar4,0,(MethodInfo *)0x0);
              pUVar3 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar4,
                                  (MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
              if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) {
                pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05cebed9;
                pUVar3 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar5,(MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
                if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cebed9;
              }
              (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar3,22.0,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
              (*(pUVar3->klass->vtable)._32_set_minWidth.methodPtr)
                        (pUVar3,22.0,(pUVar3->klass->vtable)._32_set_minWidth.method);
              pUStack_a0 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar4,
                                      (MethodInfo_34B0830 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_Toggle);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
            }
            else {
              pUStack_a0 = UnityEngine_GameObject__GetComponentInChildren_object_
                                     ((UnityEngine_GameObject_o *)obj,
                                      (MethodInfo_353B8D0 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Toggle);
              pUVar6 = UnityEngine_GameObject__GetComponentInChildren_object_
                                 ((UnityEngine_GameObject_o *)obj,
                                  (MethodInfo_353B8D0 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Text);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar1) {
                if (pUVar6 == (UnityEngine_UI_Text_o *)0x0) goto label_05cebed9;
                (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                          (pUVar6,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                           (pUVar6->klass->vtable)._75_set_text.method);
              }
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)obj,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
              if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) {
                pUVar3 = UnityEngine_GameObject__AddComponent_object_
                                   ((UnityEngine_GameObject_o *)obj,
                                    (MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
                if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cebed9;
              }
              (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar3,22.0,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
              (*(pUVar3->klass->vtable)._32_set_minWidth.methodPtr)
                        (pUVar3,22.0,(pUVar3->klass->vtable)._32_set_minWidth.method);
            }
            pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
            pUVar5 = UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/Elements/TextButton",method_02);
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar5,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_Text);
              if ((style != (UI_ElementStyle_o *)0x0) && (pUVar6 != (UnityEngine_UI_Text_o *)0x0)) {
                UnityEngine_UI_Text__set_fontSize(pUVar6,(style->fields).FontSize,(MethodInfo *)0x0);
                UnityEngine_UI_Text__set_fontStyle(pUVar6,1,(MethodInfo *)0x0);
                pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                   (pUVar5,(MethodInfo_353B730 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                panel = (style->fields).ThemePanel;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                UI_UIManager__GetThemeColorBlock
                          ((UnityEngine_UI_ColorBlock_o *)auStack_88,panel,"TextButton",
                           "","DefaultPanel",(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_UI_Button_o *)0x0) {
                  value.fields.m_NormalColor.fields.b = (float)auStack_88._8_4_;
                  value.fields.m_NormalColor.fields.a = (float)auStack_88._12_4_;
                  value.fields.m_NormalColor.fields.r = (float)auStack_88._0_4_;
                  value.fields.m_NormalColor.fields.g = (float)auStack_88._4_4_;
                  value.fields.m_HighlightedColor.fields.r = (float)auStack_88._16_4_;
                  value.fields.m_HighlightedColor.fields.g = (float)auStack_88._20_4_;
                  value.fields.m_HighlightedColor.fields.b = (float)auStack_88._24_4_;
                  value.fields.m_HighlightedColor.fields.a = (float)auStack_88._28_4_;
                  value.fields.m_PressedColor.fields.r = UStack_68.r;
                  value.fields.m_PressedColor.fields.g = UStack_68.g;
                  value.fields.m_PressedColor.fields.b = UStack_68.b;
                  value.fields.m_PressedColor.fields.a = UStack_68.a;
                  value.fields.m_SelectedColor.fields.r = UStack_58.r;
                  value.fields.m_SelectedColor.fields.g = UStack_58.g;
                  value.fields.m_SelectedColor.fields.b = UStack_58.b;
                  value.fields.m_SelectedColor.fields.a = UStack_58.a;
                  value.fields.m_DisabledColor.fields.r = UStack_48.r;
                  value.fields.m_DisabledColor.fields.g = UStack_48.g;
                  value.fields.m_DisabledColor.fields.b = UStack_48.b;
                  value.fields.m_DisabledColor.fields.a = UStack_48.a;
                  value.fields.m_ColorMultiplier = fStack_38;
                  value.fields.m_FadeDuration = fStack_34;
                  UnityEngine_UI_Selectable__set_colors
                            ((UnityEngine_UI_Selectable_o *)pUVar7,value,(MethodInfo *)0x0);
                  __this_00 = UnityEngine_GameObject__AddComponent_object_
                                        (__this,(MethodInfo_353B6A0 *)
                                                MethodInfo_UnityEngine_GameObject_AddComponent_CollapsibleToggleSection
                                        );
                  pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar5,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                  if (__this_00 != (UI_CollapsibleToggleSection_o *)0x0) {
                    UI_CollapsibleToggleSection__Setup
                              (__this_00,pUVar6,pUVar7,pUStack_a0,title,startEnabled,startExpanded,
                               onToggleChanged,(MethodInfo *)auStack_88._16_8_);
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
label_05cebed9:
  ThrowNullReferenceException();
}


// UI.ElementFactory$$CreateOverlayLabel
// il2cpp: UnityEngine_UI_Text_o* UI_ElementFactory__CreateOverlayLabel (UnityEngine_Transform_o* parent, UnityEngine_Transform_o* fontSource, System_String_o* text, UnityEngine_Color_o color, int32_t alignment, int32_t fontStyle, int32_t fontSize, const MethodInfo* method);
// 0x5cebee0

UnityEngine_UI_Text_o *
UI_ElementFactory__CreateOverlayLabel
          (UnityEngine_Transform_o *parent,UnityEngine_Transform_o *fontSource,System_String_o *text,
          UnityEngine_Color_o color,int32_t alignment,int32_t fontStyle,int32_t fontSize,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_Font_o *value;
  
  if (Il2CppMethodInitialized_07547c5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OverlayLabel");
    Il2CppMethodInitialized_07547c5f = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05cec2db;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05cec2e5;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Text,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
label_05cec2e5:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this,"OverlayLabel",components,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
          __this_01 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
             (__this_01->klass != TypeInfo_UnityEngine_RectTransform)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01);
          }
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (__this_01,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_07542885 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_07542885 = '\x01';
            }
            UnityEngine_RectTransform__set_anchorMax
                      (__this_01,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            UnityEngine_RectTransform__set_offsetMin
                      (__this_01,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            UnityEngine_RectTransform__set_offsetMax
                      (__this_01,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            __this_02 = UnityEngine_GameObject__GetComponent_object_
                                  (__this,(MethodInfo_353B730 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_Text);
            if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
              (*(__this_02->klass->vtable)._75_set_text.methodPtr)
                        (__this_02,text,(__this_02->klass->vtable)._75_set_text.method);
              UnityEngine_UI_Text__set_alignment(__this_02,alignment,(MethodInfo *)0x0);
              (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                        (__this_02,color,(__this_02->klass->vtable)._23_set_color.method);
              (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_02,false,(__this_02->klass->vtable)._25_set_raycastTarget.method);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              value = (UnityEngine_Font_o *)0x0;
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)fontSource,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar1) {
                if (fontSource == (UnityEngine_Transform_o *)0x0) goto label_05cec2db;
                __this_03 = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                                      ((UnityEngine_Component_o *)fontSource,
                                       (MethodInfo_34B09D0 *)
                                       MethodInfo_UnityEngine_Component_GetComponentInChildren_Text);
                if (__this_03 == (UnityEngine_UI_Text_o *)0x0) {
                  value = (UnityEngine_Font_o *)0x0;
                }
                else {
                  value = UnityEngine_UI_Text__get_font(__this_03,(MethodInfo *)0x0);
                }
              }
              UnityEngine_UI_Text__set_font(__this_02,value,(MethodInfo *)0x0);
              UnityEngine_UI_Text__set_fontSize(__this_02,fontSize,(MethodInfo *)0x0);
              UnityEngine_UI_Text__set_fontStyle(__this_02,fontStyle,(MethodInfo *)0x0);
              return __this_02;
            }
          }
        }
      }
label_05cec2db:
      ThrowNullReferenceException();
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ElementFactory$$GetTextWidth
// il2cpp: float UI_ElementFactory__GetTextWidth (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, const MethodInfo* method);
// 0x5cec300

float UI_ElementFactory__GetTextWidth
                (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
                int32_t fontStyle,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Object_o *obj;
  UnityEngine_RectTransform_o *__this;
  MethodInfo *in_R9;
  float fStack_38;
  
  if (Il2CppMethodInitialized_07547c60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c60 = '\x01';
  }
  obj = (UnityEngine_Object_o *)UI_ElementFactory__CreateDefaultLabel(parent,style,title,fontStyle,4,in_R9);
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       ((UnityEngine_GameObject_o *)obj,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
      fStack_38 = UVar1.fields.x;
      return fStack_38;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$InstantiateAndSetupPanel<object>
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__InstantiateAndSetupPanel_object_ (UnityEngine_Transform_o* parent, System_String_o* asset, bool enabled, const MethodInfo_34D7620* method);
// 0x35d7620

UnityEngine_GameObject_o *
UI_ElementFactory__InstantiateAndSetupPanel_object_
          (UnityEngine_Transform_o *parent,System_String_o *asset,bool enabled,MethodInfo_34D7620 *method)

{
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar1;
  UI_BasePanel_o *pUVar2;
  
  if (method->rgctx_data == (MethodInfo_34D7620_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
    if (method->rgctx_data == (MethodInfo_34D7620_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,asset,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_353B6A0 *)
                               method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
    if (parent != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)parent,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
      if (pIVar1 != (Il2CppObject *)0x0) {
        (*pIVar1->klass->vtable[0x14].methodPtr)(pIVar1,pUVar2,pIVar1->klass->vtable[0x14].method);
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
// 0x5cec3c0

UnityEngine_GameObject_o *
UI_ElementFactory__InstantiateAndSetupCustomPopup
          (UnityEngine_Transform_o *parent,System_String_o *title,float width,float height,bool enabled,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_CustomPopup_o *__this_00;
  UI_BasePanel_o *parent_00;
  undefined7 in_register_00000011;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000011,enabled);
  if (Il2CppMethodInitialized_07547c61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CustomPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Panels/HeadedPanel");
    Il2CppMethodInitialized_07547c61 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Panels/HeadedPanel",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_CustomPopup);
    if (parent != (UnityEngine_Transform_o *)0x0) {
      parent_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)parent,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BasePanel);
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
// 0x5cd9730

UnityEngine_GameObject_o *
UI_ElementFactory__InstantiateAndBind
          (UnityEngine_Transform_o *parent,System_String_o *asset,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *root;
  UnityEngine_Transform_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547c62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    Il2CppMethodInitialized_07547c62 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  root = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                   (path,asset,true,false,
                    (MethodInfo_3665790 *)
                    MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
  }
  UI_LanguageFonts__Localize(root,(MethodInfo *)0x0);
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_692d510(pUVar1,parent,false,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar1,(UnityEngine_Vector3_o)
                          (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0);
        return root;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$SetAnchor
// il2cpp: void UI_ElementFactory__SetAnchor (UnityEngine_GameObject_o* obj, int32_t anchor, int32_t pivot, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x5cd56c0

void UI_ElementFactory__SetAnchor
               (UnityEngine_GameObject_o *obj,int32_t anchor,int32_t pivot,UnityEngine_Vector2_o offset,
               MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_RectTransform_o *__this;
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_07547c63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    Il2CppMethodInitialized_07547c63 = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (obj,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                       );
    fVar1 = 0.0;
    fVar2 = 1.0;
    switch(anchor) {
    case 0:
      break;
    case 1:
      fVar1 = 0.5;
      fVar2 = 1.0;
      break;
    case 2:
      fVar1 = 1.0;
      fVar2 = 1.0;
      break;
    case 3:
      fVar1 = 0.0;
      fVar2 = 0.5;
      break;
    case 4:
      fVar1 = 0.5;
      fVar2 = 0.5;
      break;
    case 5:
      fVar1 = 1.0;
      fVar2 = 0.5;
      break;
    default:
      fVar1 = 0.0;
      fVar2 = 0.0;
      break;
    case 7:
      fVar1 = 0.5;
      fVar2 = 0.0;
      break;
    case 8:
      fVar1 = 1.0;
      fVar2 = 0.0;
    }
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.y = fVar2;
      value.fields.x = fVar1;
      UnityEngine_RectTransform__set_anchorMax(__this,value,(MethodInfo *)0x0);
      value_01.fields.y = fVar2;
      value_01.fields.x = fVar1;
      UnityEngine_RectTransform__set_anchorMin(__this,value_01,(MethodInfo *)0x0);
      fVar1 = 0.0;
      fVar2 = 1.0;
      switch(pivot) {
      case 0:
        break;
      case 1:
        fVar1 = 0.5;
        fVar2 = 1.0;
        break;
      case 2:
        fVar1 = 1.0;
        fVar2 = 1.0;
        break;
      case 3:
        fVar1 = 0.0;
        fVar2 = 0.5;
        break;
      case 4:
        fVar1 = 0.5;
        fVar2 = 0.5;
        break;
      case 5:
        fVar1 = 1.0;
        fVar2 = 0.5;
        break;
      default:
        fVar1 = 0.0;
        fVar2 = 0.0;
        break;
      case 7:
        fVar1 = 0.5;
        fVar2 = 0.0;
        break;
      case 8:
        fVar1 = 1.0;
        fVar2 = 0.0;
      }
      value_00.fields.y = fVar2;
      value_00.fields.x = fVar1;
      UnityEngine_RectTransform__set_pivot(__this,value_00,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchoredPosition(__this,offset,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ElementFactory$$GetAnchorVector
// il2cpp: UnityEngine_Vector2_o UI_ElementFactory__GetAnchorVector (int32_t anchor, const MethodInfo* method);
// 0x5cec4b0

UnityEngine_Vector2_o UI_ElementFactory__GetAnchorVector(int32_t anchor,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Vector2_Fields UVar4;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_Fields UVar6;
  UnityEngine_Vector2_Fields UVar7;
  UnityEngine_Vector2_Fields UVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = 0.0;
  fVar10 = 1.0;
  switch(anchor) {
  case 0:
    break;
  case 1:
    UVar8.x = 0.5;
    UVar8.y = 1.0;
    return (UnityEngine_Vector2_o)UVar8;
  case 2:
    UVar7.x = 1.0;
    UVar7.y = 1.0;
    return (UnityEngine_Vector2_o)UVar7;
  case 3:
    UVar6.x = 0.0;
    UVar6.y = 0.5;
    return (UnityEngine_Vector2_o)UVar6;
  case 4:
    UVar5.x = 0.5;
    UVar5.y = 0.5;
    return (UnityEngine_Vector2_o)UVar5;
  case 5:
    UVar4.x = 1.0;
    UVar4.y = 0.5;
    return (UnityEngine_Vector2_o)UVar4;
  default:
    UVar1.x = 0.0;
    UVar1.y = 0.0;
    return (UnityEngine_Vector2_o)UVar1;
  case 7:
    UVar3.x = 0.5;
    UVar3.y = 0.0;
    return (UnityEngine_Vector2_o)UVar3;
  case 8:
    fVar9 = 1.0;
    fVar10 = 0.0;
  }
  UVar2.fields.y = fVar10;
  UVar2.fields.x = fVar9;
  return (UnityEngine_Vector2_o)UVar2.fields;
}


// UI.ElementFactory$$.ctor
// il2cpp: void UI_ElementFactory___ctor (UI_ElementFactory_o* __this, const MethodInfo* method);
// 0x5cec510

void UI_ElementFactory___ctor(UI_ElementFactory_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


