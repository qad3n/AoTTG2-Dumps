// Type: UI.ElementFactory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ElementFactory.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/ElementFactory.cs  [CHANGED since prior version]
// --------------------------------

// UI.ElementFactory$$CreateDefaultMenu<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateDefaultMenu_object_ (const MethodInfo_24B7D50* method);
// 0x25b7d50

Il2CppObject * UI_ElementFactory__CreateDefaultMenu<object>(MethodInfo_24B7D50 *method)

{
  MethodInfo_24B7D50_RGCTXs *pMVar1;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_24B7D50_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&"Prefabs/Panels/DefaultMenu");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_24B7D50_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar1 = method->rgctx_data;
    }
  }
  pIVar2 = UI_ElementFactory__CreateMenu<object>
                     ("Prefabs/Panels/DefaultMenu",(MethodInfo_24B7EF0 *)pMVar1->_0_UI_ElementFactory_CreateMenu_T_)
  ;
  return pIVar2;
}


// UI.ElementFactory$$CreateMenu<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateMenu_object_ (System_String_o* asset, const MethodInfo_24B7EF0* method);
// 0x25b7ef0

Il2CppObject *
UI_ElementFactory__CreateMenu<object>(System_String_o *asset,MethodInfo_24B7EF0 *method)

{
  int iVar1;
  System_String_o *path;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  
  if (method->rgctx_data == (MethodInfo_24B7EF0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    if (method->rgctx_data == (MethodInfo_24B7EF0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      iVar1 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
      goto joined_r0x025b7f42;
    }
  }
  iVar1 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
joined_r0x025b7f42:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>(path,asset,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_position
                (__this_00,
                 (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                 (MethodInfo *)0x0);
      pIVar2 = UnityEngine_GameObject__AddComponent<object>
                         (__this,(MethodInfo_24F0EB0 *)
                                 method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
      pIVar3 = method->rgctx_data->_1_T;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar3);
      }
      if (pIVar2 != (Il2CppObject *)0x0) {
        pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(pIVar2,pIVar3);
        if (pIVar4 != (Il2CppObject *)0x0) {
          return pIVar4;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar2,pIVar3);
      }
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateEmptyPanel<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateEmptyPanel_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_24B7E10* method);
// 0x25b7e10

Il2CppObject *
UI_ElementFactory__CreateEmptyPanel<object>
          (UnityEngine_Transform_o *parent,bool_conflict enabled,MethodInfo_24B7E10 *method)

{
  MethodInfo_24B7E10_RGCTXs *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_24B7E10_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&"Prefabs/Panels/EmptyPanel");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_24B7E10_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar1 = method->rgctx_data;
    }
  }
  __this = UI_ElementFactory__InstantiateAndSetupPanel<object>
                     (parent,"Prefabs/Panels/EmptyPanel",enabled & 0xff,
                      (MethodInfo_24B8130 *)pMVar1->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_
                     );
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponent<object>
                       (__this,(MethodInfo_24F0F80 *)
                               method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateEmptyPanel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateEmptyPanel (UnityEngine_Transform_o* parent, System_Type_o* t, bool enabled, const MethodInfo* method);
// 0x407c5c0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateEmptyPanel
          (UnityEngine_Transform_o *parent,System_Type_o *t,bool_conflict enabled,MethodInfo *method
          )

{
  byte bVar1;
  UnityEngine_Component_c *pUVar2;
  undefined8 uVar3;
  UnityEngine_Object_o *__this;
  System_String_o *value;
  UnityEngine_Component_o *pUVar4;
  Il2CppObject *pIVar5;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,enabled);
  if (DAT_057044e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasePanel);
    il2cpp_init_method_metadata(&MethodInfo_BasePanel_GetComponent_BasePanel);
    il2cpp_init_method_metadata(&"Prefabs/Panels/EmptyPanel");
    DAT_057044e1 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = (UnityEngine_Object_o *)
           UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Panels/EmptyPanel",method_00);
  if (t != (System_Type_o *)0x0) {
    value = (System_String_o *)
            (*(t->klass->vtable)._8_unknown.methodPtr)(t,(t->klass->vtable)._8_unknown.method);
    if (__this != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this,value,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_GameObject__AddComponent
                         ((UnityEngine_GameObject_o *)__this,t,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        pIVar5 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)parent,MethodInfo_BasePanel_GetComponent_BasePanel);
        if (pUVar4 != (UnityEngine_Component_o *)0x0) {
          bVar1 = (TypeInfo_BasePanel->_2).naturalAligment;
          if ((bVar1 <= (pUVar4->klass->_2).naturalAligment) &&
             ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BasePanel)) {
            pUVar2 = pUVar4->klass;
            bVar1 = (TypeInfo_BasePanel->_2).naturalAligment;
            if ((bVar1 <= (pUVar2->_2).naturalAligment) &&
               ((pUVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BasePanel)) {
              uVar3._0_4_ = pUVar2[1]._2.static_fields_size;
              uVar3._4_4_ = pUVar2[1]._2.thread_static_fields_size;
              (**(code **)&pUVar2[1]._2.element_size)(pUVar4,pIVar5,uVar3);
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)__this,enabled & 0xff,(MethodInfo *)0x0);
              return (UnityEngine_GameObject_o *)__this;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pUVar4);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateSimplePanel<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateSimplePanel_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_24B8070* method);
// 0x25b8070

Il2CppObject *
UI_ElementFactory__CreateSimplePanel<object>
          (UnityEngine_Transform_o *parent,bool_conflict enabled,MethodInfo_24B8070 *method)

{
  MethodInfo_24B8070_RGCTXs *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_24B8070_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&"Prefabs/Panels/SimplePanel");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_24B8070_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar1 = method->rgctx_data;
    }
  }
  __this = UI_ElementFactory__InstantiateAndSetupPanel<object>
                     (parent,"Prefabs/Panels/SimplePanel",enabled & 0xff,
                      (MethodInfo_24B8130 *)pMVar1->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_
                     );
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponent<object>
                       (__this,(MethodInfo_24F0F80 *)
                               method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateDefaultPopup<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateDefaultPopup_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_24B7DA0* method);
// 0x25b7da0

Il2CppObject *
UI_ElementFactory__CreateDefaultPopup<object>
          (UnityEngine_Transform_o *parent,bool_conflict enabled,MethodInfo_24B7DA0 *method)

{
  MethodInfo_24B7DA0_RGCTXs *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_24B7DA0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&"Prefabs/Panels/HeadedPanel");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_24B7DA0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar1 = method->rgctx_data;
    }
  }
  __this = UI_ElementFactory__InstantiateAndSetupPanel<object>
                     (parent,"Prefabs/Panels/HeadedPanel",enabled & 0xff,
                      (MethodInfo_24B8130 *)pMVar1->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_
                     );
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponent<object>
                       (__this,(MethodInfo_24F0F80 *)
                               method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateHeadedPanel<object>
// il2cpp: Il2CppObject* UI_ElementFactory__CreateHeadedPanel_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_24B7E80* method);
// 0x25b7e80

Il2CppObject *
UI_ElementFactory__CreateHeadedPanel<object>
          (UnityEngine_Transform_o *parent,bool_conflict enabled,MethodInfo_24B7E80 *method)

{
  MethodInfo_24B7E80_RGCTXs *pMVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_24B7E80_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&"Prefabs/Panels/HeadedPanel");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_24B7E80_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar1 = method->rgctx_data;
    }
  }
  __this = UI_ElementFactory__InstantiateAndSetupPanel<object>
                     (parent,"Prefabs/Panels/HeadedPanel",enabled & 0xff,
                      (MethodInfo_24B8130 *)pMVar1->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_
                     );
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponent<object>
                       (__this,(MethodInfo_24F0F80 *)
                               method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
    return pIVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateTooltipPopup<object>
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTooltipPopup_object_ (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo_24B80E0* method);
// 0x25b80e0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTooltipPopup<object>
          (UnityEngine_Transform_o *parent,bool_conflict enabled,MethodInfo_24B80E0 *method)

{
  MethodInfo_24B80E0_RGCTXs *pMVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_24B80E0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&"Prefabs/Misc/TooltipPopup");
    pMVar1 = method->rgctx_data;
    if (pMVar1 == (MethodInfo_24B80E0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar1 = method->rgctx_data;
    }
  }
  pUVar2 = UI_ElementFactory__InstantiateAndSetupPanel<object>
                     (parent,"Prefabs/Misc/TooltipPopup",enabled & 0xff,
                      (MethodInfo_24B8130 *)pMVar1->_0_UI_ElementFactory_InstantiateAndSetupPanel_T_
                     );
  return pUVar2;
}


// UI.ElementFactory$$CreateTipPanel
// il2cpp: UI_TipPanel_o* UI_ElementFactory__CreateTipPanel (UnityEngine_Transform_o* parent, bool enabled, const MethodInfo* method);
// 0x407c710

UI_TipPanel_o *
UI_ElementFactory__CreateTipPanel
          (UnityEngine_Transform_o *parent,bool_conflict enabled,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UI_TipPanel_o *__this;
  MethodInfo *extraout_RDX;
  
  if (DAT_057044e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TipPanel_AddComponent_TipPanel);
    il2cpp_init_method_metadata(&"Prefabs/MainMenu/TipPanel");
    DAT_057044e2 = '\x01';
    method = extraout_RDX;
  }
  pUVar1 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/MainMenu/TipPanel",method);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    __this = (UI_TipPanel_o *)UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_TipPanel_AddComponent_TipPanel);
    if (__this != (UI_TipPanel_o *)0x0) {
      UI_TipPanel__Setup(__this,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar1,enabled & 0xff,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateDefaultButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateDefaultButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x40747e0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDefaultButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onClick,
          MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_UI_Selectable_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar3;
  UnityEngine_UI_ColorBlock_o local_88;
  
  method_00 = (MethodInfo *)title;
  if (DAT_057044e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"DefaultButton");
    il2cpp_init_method_metadata(&"Prefabs/Elements/DefaultButton");
    il2cpp_init_method_metadata(&"");
    DAT_057044e3 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultButton",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (UnityEngine_UI_Text_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
        if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
          (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                    (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
          if (style != (UI_ElementStyle_o *)0x0) {
            UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
            pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (0.0 < elementWidth) {
              if (pIVar2 == (Il2CppObject *)0x0) goto LAB_04074b30;
              (*pIVar2->klass->vtable[0x24].methodPtr)(pIVar2,pIVar2->klass->vtable[0x24].method);
            }
            if (0.0 < elementHeight) {
              if (pIVar2 == (Il2CppObject *)0x0) goto LAB_04074b30;
              (*pIVar2->klass->vtable[0x26].methodPtr)(pIVar2,pIVar2->klass->vtable[0x26].method);
            }
            if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
              pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
              if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[0x10].klass == (Il2CppClass *)0x0))
              goto LAB_04074b30;
              UnityEngine_Events_UnityEvent__AddListener
                        ((UnityEngine_Events_UnityEvent_o *)pIVar2[0x10].klass,onClick,
                         (MethodInfo *)0x0);
            }
            __this_01 = (UnityEngine_UI_Selectable_o *)
                        UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
            panel = (style->fields).ThemePanel;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UI_UIManager__GetThemeColorBlock
                      (&local_88,panel,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_UI_Selectable_o *)0x0) {
              value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
              value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
              value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
              value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
              value.fields.m_HighlightedColor.fields.r = local_88.fields.m_HighlightedColor.fields.r
              ;
              value.fields.m_HighlightedColor.fields.g = local_88.fields.m_HighlightedColor.fields.g
              ;
              value.fields.m_HighlightedColor.fields.b = local_88.fields.m_HighlightedColor.fields.b
              ;
              value.fields.m_HighlightedColor.fields.a = local_88.fields.m_HighlightedColor.fields.a
              ;
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
              UnityEngine_UI_Selectable__set_colors(__this_01,value,(MethodInfo *)0x0);
              UVar3 = UI_UIManager__GetThemeColor
                                ((style->fields).ThemePanel,"DefaultButton","TextColor","DefaultPanel",
                                 (MethodInfo *)0x0);
              (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                        (UVar3.fields.r,UVar3.fields.b,__this_00,
                         (__this_00->klass->vtable)._23_set_color.method);
              return __this;
            }
          }
        }
      }
    }
  }
LAB_04074b30:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreatePerkButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreatePerkButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, float offset, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x407c7b0

UnityEngine_GameObject_o *
UI_ElementFactory__CreatePerkButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          System_String_o *tooltip,float elementWidth,float elementHeight,float offset,
          UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar3;
  
  method_00 = (MethodInfo *)title;
  if (DAT_057044e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_PerkButton_AddComponent_PerkButton);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"DefaultButton");
    il2cpp_init_method_metadata(&"Prefabs/Misc/PerkButton");
    DAT_057044e4 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Misc/PerkButton",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Text",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (UnityEngine_UI_Text_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
        if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
          (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                    (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
          if (style != (UI_ElementStyle_o *)0x0) {
            UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
            pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (0.0 < elementWidth) {
              if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0407ca45;
              (*pIVar2->klass->vtable[0x24].methodPtr)(pIVar2,pIVar2->klass->vtable[0x24].method);
            }
            if (0.0 < elementHeight) {
              if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0407ca45;
              (*pIVar2->klass->vtable[0x26].methodPtr)(pIVar2,pIVar2->klass->vtable[0x26].method);
            }
            pIVar2 = UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_PerkButton_AddComponent_PerkButton);
            if (pIVar2 != (Il2CppObject *)0x0) {
              (*pIVar2->klass->vtable[0x2b].methodPtr)
                        ((ulong)(uint)offset,pIVar2,tooltip,style,pIVar2->klass->vtable[0x2b].method
                        );
              if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
                pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
                if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[0x10].klass == (Il2CppClass *)0x0))
                goto LAB_0407ca45;
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)pIVar2[0x10].klass,onClick,
                           (MethodInfo *)0x0);
              }
              panel = (style->fields).ThemePanel;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UVar3 = UI_UIManager__GetThemeColor
                                (panel,"DefaultButton","TextColor","DefaultPanel",(MethodInfo *)0x0);
              (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                        (UVar3.fields._0_8_,UVar3.fields._8_8_,__this_00,
                         (__this_00->klass->vtable)._23_set_color.method);
              return __this;
            }
          }
        }
      }
    }
  }
LAB_0407ca45:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateIconButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateIconButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* icon, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x407ca50

UnityEngine_GameObject_o *
UI_ElementFactory__CreateIconButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *icon,
          float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onClick,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_Texture_o *value_00;
  UnityEngine_UI_Selectable_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_UI_ColorBlock_o local_80;
  
  method_00 = (MethodInfo *)icon;
  if (DAT_057044e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Prefabs/Elements/IconButton");
    il2cpp_init_method_metadata(&"IconButton");
    il2cpp_init_method_metadata(&"");
    DAT_057044e5 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/IconButton",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar2 != (Il2CppObject *)0x0) {
      (*pIVar2->klass->vtable[0x24].methodPtr)
                (elementWidth,pIVar2,pIVar2->klass->vtable[0x24].method);
      (*pIVar2->klass->vtable[0x26].methodPtr)
                (elementHeight,pIVar2,pIVar2->klass->vtable[0x26].method);
      if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
        pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
        if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[0x10].klass == (Il2CppClass *)0x0))
        goto LAB_0407cd79;
        UnityEngine_Events_UnityEvent__AddListener
                  ((UnityEngine_Events_UnityEvent_o *)pIVar2[0x10].klass,onClick,(MethodInfo *)0x0);
      }
      __this_00 = (UnityEngine_UI_RawImage_o *)
                  UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_RawImage_GetComponent_RawImage);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value_00 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(pSVar1,icon,1,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
        if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(value_00);
        }
        UnityEngine_UI_RawImage__set_texture(__this_00,value_00,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_UI_Selectable_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
        if (style != (UI_ElementStyle_o *)0x0) {
          pSVar1 = (style->fields).ThemePanel;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UI_UIManager__GetThemeColorBlock
                    (&local_80,pSVar1,"IconButton","","DefaultPanel",(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_UI_Selectable_o *)0x0) {
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
            UnityEngine_UI_Selectable__set_colors(__this_01,value,(MethodInfo *)0x0);
            return __this;
          }
        }
      }
    }
  }
LAB_0407cd79:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateRawImage
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateRawImage (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* image, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x407cd90

UnityEngine_GameObject_o *
UI_ElementFactory__CreateRawImage
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *image,
          float elementWidth,float elementHeight,MethodInfo *method)

{
  System_String_o *path;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_RawImage_o *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_Texture_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)image;
  if (DAT_057044e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"Prefabs/Elements/RawImage");
    DAT_057044e6 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/RawImage",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_RawImage_o *)
                UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_RawImage_GetComponent_RawImage);
    pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar2 != (Il2CppObject *)0x0) {
      (*pIVar2->klass->vtable[0x24].methodPtr)
                (elementWidth,pIVar2,pIVar2->klass->vtable[0x24].method);
      (*pIVar2->klass->vtable[0x26].methodPtr)
                (elementHeight,pIVar2,pIVar2->klass->vtable[0x26].method);
      bVar1 = System_String__op_Inequality
                        (image,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                         (MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_init_class();
        }
        path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        value = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset(path,image,1,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_0407cf2d;
        if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(value);
        }
        UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
      }
      return __this;
    }
  }
LAB_0407cf2d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateTooltipIcon
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTooltipIcon (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x407cf40

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTooltipIcon
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *tooltip,
          float elementWidth,float elementHeight,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar1;
  UI_ElementStyle_o *style_00;
  
  style_00 = style;
  if (DAT_057044e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TooltipButton_AddComponent_TooltipButton);
    il2cpp_init_method_metadata(&"Icons/Navigation/TooltipIcon");
    DAT_057044e7 = '\x01';
  }
  __this = UI_ElementFactory__CreateRawImage
                     (parent,style_00,"Icons/Navigation/TooltipIcon",elementWidth,elementHeight,method);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_TooltipButton_AddComponent_TooltipButton);
    if (pIVar1 != (Il2CppObject *)0x0) {
      (*pIVar1->klass->vtable[0x2b].methodPtr)
                (pIVar1,tooltip,style,pIVar1->klass->vtable[0x2b].method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateTextButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTextButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, float width, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x406cf50

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTextButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          float width,UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  Il2CppObject *pIVar1;
  UnityEngine_UI_Selectable_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_UI_ColorBlock_o local_80;
  
  method_00 = (MethodInfo *)title;
  if (DAT_057044e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Prefabs/Elements/TextButton");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"TextButton");
    DAT_057044e8 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/TextButton",method_00);
  if (((__this != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (UnityEngine_UI_Text_o *)
                   UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Text_GetComponent_Text),
      __this_00 != (UnityEngine_UI_Text_o *)0x0)) &&
     ((*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method),
     style != (UI_ElementStyle_o *)0x0)) {
    UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_fontStyle(__this_00,1,(MethodInfo *)0x0);
    if ((width != 0.0) || (NAN(width))) {
      pIVar1 = UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      if (pIVar1 == (Il2CppObject *)0x0) goto LAB_0406d205;
      (*pIVar1->klass->vtable[0x24].methodPtr)(width,pIVar1,pIVar1->klass->vtable[0x24].method);
    }
    if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
      pIVar1 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
      if ((pIVar1 == (Il2CppObject *)0x0) || (pIVar1[0x10].klass == (Il2CppClass *)0x0))
      goto LAB_0406d205;
      UnityEngine_Events_UnityEvent__AddListener
                ((UnityEngine_Events_UnityEvent_o *)pIVar1[0x10].klass,onClick,(MethodInfo *)0x0);
    }
    __this_01 = (UnityEngine_UI_Selectable_o *)
                UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
    panel = (style->fields).ThemePanel;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UI_UIManager__GetThemeColorBlock
              (&local_80,panel,"TextButton","","DefaultPanel",(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_UI_Selectable_o *)0x0) {
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
      UnityEngine_UI_Selectable__set_colors(__this_01,value,(MethodInfo *)0x0);
      return __this;
    }
  }
LAB_0406d205:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateLinkButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateLinkButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x407cff0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateLinkButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  Il2CppObject *pIVar1;
  UnityEngine_UI_Selectable_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_UI_ColorBlock_o local_80;
  
  method_00 = (MethodInfo *)title;
  if (DAT_057044e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"LinkButton");
    il2cpp_init_method_metadata(&"Prefabs/Elements/TextButton");
    il2cpp_init_method_metadata(&"");
    DAT_057044e9 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/TextButton",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_Text_o *)
                UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Text_GetComponent_Text);
    if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      if (style != (UI_ElementStyle_o *)0x0) {
        UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
        if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
          pIVar1 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
          if ((pIVar1 == (Il2CppObject *)0x0) || (pIVar1[0x10].klass == (Il2CppClass *)0x0))
          goto LAB_0407d239;
          UnityEngine_Events_UnityEvent__AddListener
                    ((UnityEngine_Events_UnityEvent_o *)pIVar1[0x10].klass,onClick,(MethodInfo *)0x0
                    );
        }
        __this_01 = (UnityEngine_UI_Selectable_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
        panel = (style->fields).ThemePanel;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UI_UIManager__GetThemeColorBlock
                  (&local_80,panel,"LinkButton","","DefaultPanel",(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_UI_Selectable_o *)0x0) {
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
          UnityEngine_UI_Selectable__set_colors(__this_01,value,(MethodInfo *)0x0);
          return __this;
        }
      }
    }
  }
LAB_0407d239:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateCategoryButton
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateCategoryButton (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
// 0x406c8f0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateCategoryButton
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          UnityEngine_Events_UnityAction_o *onClick,MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  Il2CppObject *pIVar1;
  UnityEngine_UI_Selectable_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_UI_ColorBlock_o local_80;
  
  method_00 = (MethodInfo *)title;
  if (DAT_057044ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Prefabs/Elements/CategoryButton");
    il2cpp_init_method_metadata(&"CategoryButton");
    il2cpp_init_method_metadata(&"");
    DAT_057044ea = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/CategoryButton",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_Text_o *)
                UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Text_GetComponent_Text);
    if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      if (style != (UI_ElementStyle_o *)0x0) {
        UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
        if (onClick != (UnityEngine_Events_UnityAction_o *)0x0) {
          pIVar1 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
          if ((pIVar1 == (Il2CppObject *)0x0) || (pIVar1[0x10].klass == (Il2CppClass *)0x0))
          goto LAB_0406cb39;
          UnityEngine_Events_UnityEvent__AddListener
                    ((UnityEngine_Events_UnityEvent_o *)pIVar1[0x10].klass,onClick,(MethodInfo *)0x0
                    );
        }
        __this_01 = (UnityEngine_UI_Selectable_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
        panel = (style->fields).ThemePanel;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UI_UIManager__GetThemeColorBlock
                  (&local_80,panel,"CategoryButton","","DefaultPanel",(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_UI_Selectable_o *)0x0) {
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
          UnityEngine_UI_Selectable__set_colors(__this_01,value,(MethodInfo *)0x0);
          return __this;
        }
      }
    }
  }
LAB_0406cb39:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateDropdownSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateDropdownSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float maxScrollHeight, System_Nullable_float__o optionsWidth, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, const MethodInfo* method);
// 0x406aca0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDropdownSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_array *options,System_String_o *tooltip,
          float elementWidth,float elementHeight,float maxScrollHeight,
          System_Nullable_float__o optionsWidth,
          UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,MethodInfo *method)

{
  char cVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  float fVar3;
  
  cVar1 = (char)optionsWidth.fields.hasValue;
  method_00 = (MethodInfo *)setting;
  if (DAT_057044eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_DropdownSettingElement_AddComponent_DropdownSett);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"Prefabs/Elements/DropdownSetting");
    DAT_057044eb = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DropdownSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_DropdownSettingElement_AddComponent_DropdownSett);
    if (cVar1 == '\0') {
      System_Nullable<float>___ctor
                ((System_Nullable_float__o)&optionsWidth,elementWidth,MethodInfo_Nullable_1_Single);
    }
    fVar3 = System_Nullable<float>__get_Value((System_Nullable_float__o)&optionsWidth,MethodInfo_Single_get_Value);
    if (pIVar2 != (Il2CppObject *)0x0) {
      (*pIVar2->klass->vtable[7].methodPtr)
                (elementWidth,elementHeight,fVar3,maxScrollHeight,pIVar2,setting,style,title,options
                 ,tooltip,onDropdownOptionSelect,pIVar2->klass->vtable[7].method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateDropdownSelect
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateDropdownSelect (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float maxScrollHeight, System_Nullable_float__o optionsWidth, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, const MethodInfo* method);
// 0x407d240

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDropdownSelect
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_array *options,System_String_o *tooltip,
          float elementWidth,float elementHeight,float maxScrollHeight,
          System_Nullable_float__o optionsWidth,
          UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,MethodInfo *method)

{
  char cVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  float fVar3;
  
  cVar1 = (char)optionsWidth.fields.hasValue;
  method_00 = (MethodInfo *)setting;
  if (DAT_057044ec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_DropdownSelectElement_AddComponent_DropdownSelec);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"Prefabs/Elements/DropdownSetting");
    DAT_057044ec = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DropdownSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_DropdownSelectElement_AddComponent_DropdownSelec);
    if (cVar1 == '\0') {
      System_Nullable<float>___ctor
                ((System_Nullable_float__o)&optionsWidth,elementWidth,MethodInfo_Nullable_1_Single);
    }
    fVar3 = System_Nullable<float>__get_Value((System_Nullable_float__o)&optionsWidth,MethodInfo_Single_get_Value);
    if (pIVar2 != (Il2CppObject *)0x0) {
      (*pIVar2->klass->vtable[7].methodPtr)
                (elementWidth,elementHeight,fVar3,maxScrollHeight,pIVar2,setting,style,title,options
                 ,tooltip,onDropdownOptionSelect,pIVar2->klass->vtable[7].method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateMultiSelectDropdown
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateMultiSelectDropdown (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_HashSetSetting_int__o* setting, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float maxScrollHeight, System_Nullable_float__o optionsWidth, UnityEngine_Events_UnityAction_o* onSelectionChanged, const MethodInfo* method);
// 0x407d390

UnityEngine_GameObject_o *
UI_ElementFactory__CreateMultiSelectDropdown
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
          Settings_HashSetSetting_int__o *setting,System_String_o *title,
          System_String_array *options,System_String_o *tooltip,float elementWidth,
          float elementHeight,float maxScrollHeight,System_Nullable_float__o optionsWidth,
          UnityEngine_Events_UnityAction_o *onSelectionChanged,MethodInfo *method)

{
  char cVar1;
  UnityEngine_GameObject_o *__this;
  UI_MultiSelectDropdownElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  float optionsWidth_00;
  
  cVar1 = (char)optionsWidth.fields.hasValue;
  method_00 = (MethodInfo *)setting;
  if (DAT_057044ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MultiSelectDropdownElement_AddComponent_MultiSel);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"Prefabs/Elements/DropdownSetting");
    DAT_057044ed = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DropdownSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_MultiSelectDropdownElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_MultiSelectDropdownElement_AddComponent_MultiSel);
    if (cVar1 == '\0') {
      System_Nullable<float>___ctor
                ((System_Nullable_float__o)&optionsWidth,elementWidth,MethodInfo_Nullable_1_Single);
    }
    optionsWidth_00 =
         System_Nullable<float>__get_Value((System_Nullable_float__o)&optionsWidth,MethodInfo_Single_get_Value);
    if (__this_00 != (UI_MultiSelectDropdownElement_o *)0x0) {
      UI_MultiSelectDropdownElement__Setup
                (__this_00,setting,style,title,options,tooltip,elementWidth,elementHeight,
                 optionsWidth_00,maxScrollHeight,onSelectionChanged,(MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateIncrementSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateIncrementSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, System_String_array* options, UnityEngine_Events_UnityAction_o* onValueChanged, System_Func_bool__o* validation, const MethodInfo* method);
// 0x407d4e0

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
  if (DAT_057044ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IncrementSettingElement_AddComponent_IncrementSe);
    il2cpp_init_method_metadata(&"Prefabs/Elements/IncrementSetting");
    DAT_057044ee = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/IncrementSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_IncrementSettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_IncrementSettingElement_AddComponent_IncrementSe);
    if (__this_00 != (UI_IncrementSettingElement_o *)0x0) {
      UI_IncrementSettingElement__Setup
                (__this_00,setting,style,title,tooltip,elementWidth,elementHeight,options,
                 onValueChanged,validation,(MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateToggleSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateToggleSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onValueChanged, const MethodInfo* method);
// 0x406adf0

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
  if (DAT_057044ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ToggleSettingElement_AddComponent_ToggleSettingE);
    il2cpp_init_method_metadata(&"Prefabs/Elements/ToggleSetting");
    DAT_057044ef = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ToggleSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_ToggleSettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_ToggleSettingElement_AddComponent_ToggleSettingE);
    if (__this_00 != (UI_ToggleSettingElement_o *)0x0) {
      UI_ToggleSettingElement__Setup
                (__this_00,setting,style,title,tooltip,elementWidth,elementHeight,onValueChanged,
                 (MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateToggleGroupSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateToggleGroupSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x4073660

UnityEngine_GameObject_o *
UI_ElementFactory__CreateToggleGroupSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_array *options,System_String_o *tooltip,
          float elementWidth,float elementHeight,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_ToggleGroupSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (DAT_057044f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ToggleGroupSettingElement_AddComponent_ToggleGro);
    il2cpp_init_method_metadata(&"Prefabs/Elements/ToggleGroupSetting");
    DAT_057044f0 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ToggleGroupSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_ToggleGroupSettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_ToggleGroupSettingElement_AddComponent_ToggleGro);
    if (__this_00 != (UI_ToggleGroupSettingElement_o *)0x0) {
      UI_ToggleGroupSettingElement__Setup
                (__this_00,setting,style,title,options,tooltip,elementWidth,elementHeight,
                 (MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateSliderSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateSliderSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t decimalPlaces, const MethodInfo* method);
// 0x4074c30

UnityEngine_GameObject_o *
UI_ElementFactory__CreateSliderSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
          int32_t decimalPlaces,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_SliderSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (DAT_057044f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SliderSettingElement_AddComponent_SliderSettingE);
    il2cpp_init_method_metadata(&"Prefabs/Elements/SliderSetting");
    DAT_057044f1 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/SliderSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_SliderSettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_SliderSettingElement_AddComponent_SliderSettingE);
    if (__this_00 != (UI_SliderSettingElement_o *)0x0) {
      UI_SliderSettingElement__Setup
                (__this_00,setting,style,title,tooltip,elementWidth,elementHeight,decimalPlaces,
                 (MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateInputSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateInputSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, bool multiLine, UnityEngine_Events_UnityAction_o* onValueChanged, UnityEngine_Events_UnityAction_o* onEndEdit, System_Func_string__bool__o* onValidate, System_Func_string__string__o* onCleanup, const MethodInfo* method);
// 0x406aec0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateInputSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
          bool_conflict multiLine,UnityEngine_Events_UnityAction_o *onValueChanged,
          UnityEngine_Events_UnityAction_o *onEndEdit,System_Func_string__bool__o *onValidate,
          System_Func_string__string__o *onCleanup,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_InputSettingElement_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (DAT_057044f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_AddComponent_InputSettingEle);
    il2cpp_init_method_metadata(&"Prefabs/Elements/InputSetting");
    DAT_057044f2 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/InputSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_InputSettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_InputSettingElement_AddComponent_InputSettingEle);
    if (__this_00 != (UI_InputSettingElement_o *)0x0) {
      UI_InputSettingElement__Setup
                (__this_00,setting,style,title,tooltip,elementWidth,elementHeight,multiLine & 0xff,
                 onValueChanged,onEndEdit,onValidate,onCleanup,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this_00,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
      if ((style != (UI_ElementStyle_o *)0x0) &&
         (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  (__this_01,(style->fields).Spacing,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateSliderInputSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateSliderInputSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_o* tooltip, float sliderWidth, float sliderHeight, float inputWidth, float inputHeight, int32_t decimalPlaces, const MethodInfo* method);
// 0x4074dd0

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
  if (DAT_057044f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SliderInputSettingElement_AddComponent_SliderInp);
    il2cpp_init_method_metadata(&"Prefabs/Elements/SliderInputSetting");
    DAT_057044f3 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/SliderInputSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_SliderInputSettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_SliderInputSettingElement_AddComponent_SliderInp);
    if (__this_00 != (UI_SliderInputSettingElement_o *)0x0) {
      UI_SliderInputSettingElement__Setup
                (__this_00,setting,style,title,tooltip,sliderWidth,sliderHeight,inputWidth,
                 inputHeight,decimalPlaces,(MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateDefaultLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateDefaultLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x406aa20

UnityEngine_GameObject_o *
UI_ElementFactory__CreateDefaultLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          int32_t fontStyle,int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar4;
  
  method_00 = (MethodInfo *)title;
  if (DAT_057044f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Prefabs/Elements/DefaultLabel");
    il2cpp_init_method_metadata(&"DefaultLabel");
    DAT_057044f4 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultLabel",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_Text_o *)
                UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Text_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontStyle(__this_00,fontStyle,(MethodInfo *)0x0);
      panel = (style->fields).ThemePanel;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UVar4 = UI_UIManager__GetThemeColor
                        (panel,"DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                (UVar4.fields._0_8_,UVar4.fields._8_8_,__this_00,
                 (__this_00->klass->vtable)._23_set_color.method);
      UnityEngine_UI_Text__set_alignment(__this_00,alignment,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)parent,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_UI_ContentSizeFitter_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)__this_00,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
        if (__this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
          UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                    (__this_01,(uint)(byte)((byte)bVar1 ^ 1) * 2,(MethodInfo *)0x0);
          pUVar2 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)parent,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            pIVar3 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0406ac97;
            (*pIVar3->klass->vtable[0x28].methodPtr)(0,pIVar3,pIVar3->klass->vtable[0x28].method);
          }
          return __this;
        }
      }
    }
  }
LAB_0406ac97:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateTMPLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTMPLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x407d5b0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTMPLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          int32_t fontStyle,int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  TMPro_TMP_Text_o *__this_01;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_Object_o *pUVar4;
  Il2CppObject *pIVar5;
  undefined8 uVar6;
  int32_t iVar7;
  UnityEngine_Color_o UVar8;
  
  if (DAT_057044f5 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&TypeRef_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"TMPLabel");
    il2cpp_init_method_metadata(&"DefaultLabel");
    DAT_057044f5 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto LAB_0407daca;
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0407dad4;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    il2cpp_runtime_glue(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0407dad4;
    }
    if ((uint)components->max_length < 2) goto LAB_0407dacf;
    components->m_Items[1] = pSVar2;
    il2cpp_runtime_glue(components->m_Items + 1);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0407dad4;
    }
    if ((uint)components->max_length < 3) goto LAB_0407dacf;
    components->m_Items[2] = pSVar2;
    il2cpp_runtime_glue(components->m_Items + 2);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0407dad4;
    }
    if (3 < (uint)components->max_length) {
      components->m_Items[3] = pSVar2;
      il2cpp_runtime_glue(components->m_Items + 3);
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_0407dad4:
          uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar6,0);
        }
      }
      if (4 < (uint)components->max_length) {
        components->m_Items[4] = pSVar2;
        il2cpp_runtime_glue(components->m_Items + 4,pSVar2);
        __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(__this,"TMPLabel",components,(MethodInfo *)0x0);
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(__this_00,parent,0,(MethodInfo *)0x0);
            __this_01 = (TMPro_TMP_Text_o *)
                        UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
            if ((style != (UI_ElementStyle_o *)0x0) && (__this_01 != (TMPro_TMP_Text_o *)0x0)) {
              TMPro_TMP_Text__set_fontSize
                        (__this_01,(float)(style->fields).FontSize,(MethodInfo *)0x0);
              (*(__this_01->klass->vtable)._66_set_text.methodPtr)
                        (__this_01,title,(__this_01->klass->vtable)._66_set_text.method);
              iVar7 = (uint)(fontStyle == 2) * 2;
              if (fontStyle == 1) {
                iVar7 = 1;
              }
              TMPro_TMP_Text__set_fontStyle(__this_01,iVar7,(MethodInfo *)0x0);
              panel = (style->fields).ThemePanel;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UVar8 = UI_UIManager__GetThemeColor
                                (panel,"DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
              (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                        (UVar8.fields._0_8_,UVar8.fields._8_8_,__this_01,
                         (__this_01->klass->vtable)._23_set_color.method);
              iVar7 = 0x1001;
              if (alignment != 3) {
                iVar7 = (alignment == 5) + 0x1002 + (uint)(alignment == 5);
              }
              TMPro_TMP_Text__set_alignment(__this_01,iVar7,(MethodInfo *)0x0);
              __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                          UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
              if (parent != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = (UnityEngine_Object_o *)
                         UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)parent,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar1 = UnityEngine_Object__op_Inequality
                                  (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (__this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
                  UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                            (__this_02,(uint)(byte)((byte)bVar1 ^ 1) * 2,(MethodInfo *)0x0);
                  pIVar5 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  pUVar4 = (UnityEngine_Object_o *)
                           UnityEngine_Component__GetComponent<object>
                                     ((UnityEngine_Component_o *)parent,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar1 != '\0') {
                    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0407daca;
                    (*pIVar5->klass->vtable[0x28].methodPtr)
                              (0,pIVar5,pIVar5->klass->vtable[0x28].method);
                  }
                  return __this;
                }
              }
            }
          }
        }
LAB_0407daca:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_0407dacf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateEffectText
// il2cpp: PatreonEffects_EffectText_o* UI_ElementFactory__CreateEffectText (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* text, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x407daf0

PatreonEffects_EffectText_o *
UI_ElementFactory__CreateEffectText
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *text,
          int32_t fontStyle,int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_Object_o *pUVar4;
  Il2CppObject *pIVar5;
  PatreonEffects_EffectText_o *__this_03;
  undefined8 uVar6;
  int32_t value;
  UnityEngine_Color_o value_00;
  
  if (DAT_057044f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&TypeRef_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_EffectText_AddComponent_EffectText);
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeRef_VerticalLayoutGroup);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"EffectText");
    il2cpp_init_method_metadata(&"DefaultLabel");
    DAT_057044f6 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto LAB_0407dfe0;
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0407dfea;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    il2cpp_runtime_glue(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_VerticalLayoutGroup,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0407dfea;
    }
    if ((uint)components->max_length < 2) goto LAB_0407dfe5;
    components->m_Items[1] = pSVar2;
    il2cpp_runtime_glue(components->m_Items + 1);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_ContentSizeFitter,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0407dfea;
    }
    if (2 < (uint)components->max_length) {
      components->m_Items[2] = pSVar2;
      il2cpp_runtime_glue(components->m_Items + 2);
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_0407dfea:
          uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar6,0);
        }
      }
      if (3 < (uint)components->max_length) {
        components->m_Items[3] = pSVar2;
        il2cpp_runtime_glue(components->m_Items + 3,pSVar2);
        __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(__this,"EffectText",components,(MethodInfo *)0x0);
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(__this_00,parent,0,(MethodInfo *)0x0);
            __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                        UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
            if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
              UnityEngine_UI_LayoutGroup__set_childAlignment
                        ((UnityEngine_UI_LayoutGroup_o *)__this_01,0,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                        (__this_01,0,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                        (__this_01,0,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                        (__this_01,0.0,(MethodInfo *)0x0);
              __this_02 = (UnityEngine_UI_ContentSizeFitter_o *)
                          UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
              if (parent != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = (UnityEngine_Object_o *)
                         UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)parent,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar1 = UnityEngine_Object__op_Inequality
                                  (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (__this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
                  UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                            (__this_02,(uint)(byte)((byte)bVar1 ^ 1) * 2,(MethodInfo *)0x0);
                  UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_02,2,(MethodInfo *)0x0);
                  pIVar5 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  pUVar4 = (UnityEngine_Object_o *)
                           UnityEngine_Component__GetComponent<object>
                                     ((UnityEngine_Component_o *)parent,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar1 != '\0') {
                    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0407dfe0;
                    (*pIVar5->klass->vtable[0x28].methodPtr)
                              (0,pIVar5,pIVar5->klass->vtable[0x28].method);
                  }
                  value = 0x1001;
                  if (alignment != 3) {
                    value = (alignment == 5) + 0x1002 + (uint)(alignment == 5);
                  }
                  __this_03 = (PatreonEffects_EffectText_o *)
                              UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_EffectText_AddComponent_EffectText);
                  if ((style != (UI_ElementStyle_o *)0x0) &&
                     (__this_03 != (PatreonEffects_EffectText_o *)0x0)) {
                    PatreonEffects_EffectText__set_fontSize
                              (__this_03,(float)(style->fields).FontSize,(MethodInfo *)0x0);
                    panel = (style->fields).ThemePanel;
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    value_00 = UI_UIManager__GetThemeColor
                                         (panel,"DefaultLabel","TextColor","DefaultPanel",
                                          (MethodInfo *)0x0);
                    PatreonEffects_EffectText__set_color(__this_03,value_00,(MethodInfo *)0x0);
                    PatreonEffects_EffectText__set_alignment(__this_03,value,(MethodInfo *)0x0);
                    PatreonEffects_EffectText__set_text(__this_03,text,(MethodInfo *)0x0);
                    return __this_03;
                  }
                }
              }
            }
          }
        }
LAB_0407dfe0:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_0407dfe5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateNameEffectLabel
// il2cpp: PatreonEffects_NameEffectLabel_o* UI_ElementFactory__CreateNameEffectLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* prefix, System_String_o* name, System_String_o* suffix, int32_t alignment, const MethodInfo* method);
// 0x407e000

PatreonEffects_NameEffectLabel_o *
UI_ElementFactory__CreateNameEffectLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *prefix,
          System_String_o *name,System_String_o *suffix,int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar4;
  UnityEngine_Object_o *x;
  PatreonEffects_NameEffectLabel_o *__this_01;
  undefined8 uVar5;
  int32_t value;
  UnityEngine_Color_o value_00;
  
  if (DAT_057044f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"NameEffectLabel");
    il2cpp_init_method_metadata(&"DefaultLabel");
    DAT_057044f7 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto LAB_0407e369;
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0407e373;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    il2cpp_runtime_glue(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) {
LAB_0407e373:
        uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar5,0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      il2cpp_runtime_glue(components->m_Items + 1,pSVar2);
      __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(__this,"NameEffectLabel",components,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_00,parent,0,(MethodInfo *)0x0);
          pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (parent != (UnityEngine_Transform_o *)0x0) {
            x = (UnityEngine_Object_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)parent,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0407e369;
              (*pIVar4->klass->vtable[0x28].methodPtr)(0,pIVar4,pIVar4->klass->vtable[0x28].method);
            }
            value = 0x1001;
            if (alignment != 3) {
              value = (alignment == 5) + 0x1002 + (uint)(alignment == 5);
            }
            __this_01 = (PatreonEffects_NameEffectLabel_o *)
                        UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
            if ((style != (UI_ElementStyle_o *)0x0) &&
               (__this_01 != (PatreonEffects_NameEffectLabel_o *)0x0)) {
              PatreonEffects_NameEffectLabel__set_fontSize
                        (__this_01,(float)(style->fields).FontSize,(MethodInfo *)0x0);
              panel = (style->fields).ThemePanel;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              value_00 = UI_UIManager__GetThemeColor
                                   (panel,"DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__set_color(__this_01,value_00,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__set_alignment(__this_01,value,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__SetText
                        (__this_01,prefix,name,suffix,(MethodInfo *)0x0);
              return __this_01;
            }
          }
        }
      }
LAB_0407e369:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateWhiteLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateWhiteLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x40776e0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateWhiteLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          int32_t fontStyle,int32_t alignment,MethodInfo *method)

{
  System_String_o *panel;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar4;
  
  method_00 = (MethodInfo *)title;
  if (DAT_057044f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Prefabs/Elements/DefaultLabel");
    il2cpp_init_method_metadata(&"WhiteLabel");
    DAT_057044f8 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultLabel",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_Text_o *)
                UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Text_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontStyle(__this_00,fontStyle,(MethodInfo *)0x0);
      panel = (style->fields).ThemePanel;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UVar4 = UI_UIManager__GetThemeColor
                        (panel,"WhiteLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                (UVar4.fields._0_8_,UVar4.fields._8_8_,__this_00,
                 (__this_00->klass->vtable)._23_set_color.method);
      UnityEngine_UI_Text__set_alignment(__this_00,alignment,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)parent,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_UI_ContentSizeFitter_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)__this_00,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
        if (__this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
          UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                    (__this_01,(uint)(byte)((byte)bVar1 ^ 1) * 2,(MethodInfo *)0x0);
          pUVar2 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)parent,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            pIVar3 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar3 == (Il2CppObject *)0x0) goto LAB_04077957;
            (*pIVar3->klass->vtable[0x28].methodPtr)(0,pIVar3,pIVar3->klass->vtable[0x28].method);
          }
          return __this;
        }
      }
    }
  }
LAB_04077957:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateEmptySpace
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateEmptySpace (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x407e390

UnityEngine_GameObject_o *
UI_ElementFactory__CreateEmptySpace(UnityEngine_Transform_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057044f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"Prefabs/Elements/DefaultLabel");
    il2cpp_init_method_metadata(&"");
    DAT_057044f9 = '\x01';
    in_RDX = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/DefaultLabel",in_RDX);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Text_GetComponent_Text);
    if (pIVar1 != (Il2CppObject *)0x0) {
      (*pIVar1->klass->vtable[0x4b].methodPtr)
                (pIVar1,"",pIVar1->klass->vtable[0x4b].method);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateHUDLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateHUDLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, int32_t alignment, const MethodInfo* method);
// 0x407e420

UnityEngine_GameObject_o *
UI_ElementFactory__CreateHUDLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          int32_t fontStyle,int32_t alignment,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)title;
  if (DAT_057044fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Prefabs/InGame/HUDLabel");
    DAT_057044fa = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/InGame/HUDLabel",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_Text_o *)
                UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Text_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._75_set_text.methodPtr)
                (__this_00,title,(__this_00->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontStyle(__this_00,fontStyle,(MethodInfo *)0x0);
      UnityEngine_UI_Text__set_alignment(__this_00,alignment,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)parent,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_UI_ContentSizeFitter_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)__this_00,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
        if (__this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
          UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                    (__this_01,(uint)(byte)((byte)bVar1 ^ 1) * 2,(MethodInfo *)0x0);
          pUVar2 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)parent,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            pIVar3 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0407e60c;
            (*pIVar3->klass->vtable[0x28].methodPtr)(0,pIVar3,pIVar3->klass->vtable[0x28].method);
          }
          return __this;
        }
      }
    }
  }
LAB_0407e60c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateMultiTextLabel
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateMultiTextLabel (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t fontStyle, int32_t anchor, float fontSize, int32_t numberOfLabels, bool richText, const MethodInfo* method);
// 0x407e620

UnityEngine_GameObject_o *
UI_ElementFactory__CreateMultiTextLabel
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,int32_t fontStyle,int32_t anchor
          ,float fontSize,int32_t numberOfLabels,bool_conflict richText,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_MultiTextLabel_o *__this_00;
  UnityEngine_Transform_o *parent_00;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,fontStyle);
  if (DAT_057044fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MultiTextLabel_AddComponent_MultiTextLabel);
    DAT_057044fb = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__CreateHorizontalGroup(parent,0.0,3,method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_MultiTextLabel_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_MultiTextLabel_AddComponent_MultiTextLabel);
    parent_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (__this_00 != (UI_MultiTextLabel_o *)0x0) {
      UI_MultiTextLabel__Setup
                (__this_00,parent_00,style,fontStyle,anchor,fontSize,numberOfLabels,richText & 0xff,
                 (MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateKeybindSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateKeybindSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, UI_KeybindPopup_o* keybindPopup, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t bindCount, const MethodInfo* method);
// 0x407e6e0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateKeybindSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,UI_KeybindPopup_o *keybindPopup,System_String_o *tooltip,
          float elementWidth,float elementHeight,int32_t bindCount,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_KeybindSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (DAT_057044fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_KeybindSettingElement_AddComponent_KeybindSettin);
    il2cpp_init_method_metadata(&"Prefabs/Elements/KeybindSetting");
    DAT_057044fc = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/KeybindSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_KeybindSettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_KeybindSettingElement_AddComponent_KeybindSettin);
    if (__this_00 != (UI_KeybindSettingElement_o *)0x0) {
      UI_KeybindSettingElement__Setup
                (__this_00,setting,style,title,keybindPopup,tooltip,elementWidth,elementHeight,
                 bindCount,(MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateColorSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateColorSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, UI_ColorPickPopup_o* colorPickPopup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x4074b60

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
  MethodInfo *in_stack_ffffffffffffffc0;
  
  method_00 = (MethodInfo *)setting;
  if (DAT_057044fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ColorSettingElement_AddComponent_ColorSettingEle);
    il2cpp_init_method_metadata(&"Prefabs/Elements/ColorSetting");
    DAT_057044fd = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ColorSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_ColorSettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_ColorSettingElement_AddComponent_ColorSettingEle);
    if (__this_00 != (UI_ColorSettingElement_o *)0x0) {
      UI_ColorSettingElement__Setup
                (__this_00,setting,style,title,colorPickPopup,tooltip,elementWidth,elementHeight,
                 onChangeColor,in_stack_ffffffffffffffc0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateToggleColorSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateToggleColorSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_ToggleColorSetting_o* setting, System_String_o* title, UI_ColorPickPopup_o* colorPickPopup, System_String_o* tooltip, float toggleWidth, float toggleHeight, float colorWidth, float colorHeight, UnityEngine_Events_UnityAction_o* onToggleChanged, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x407eb60

UnityEngine_GameObject_o *
UI_ElementFactory__CreateToggleColorSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
          Settings_ToggleColorSetting_o *setting,System_String_o *title,
          UI_ColorPickPopup_o *colorPickPopup,System_String_o *tooltip,float toggleWidth,
          float toggleHeight,float colorWidth,float colorHeight,
          UnityEngine_Events_UnityAction_o *onToggleChanged,
          UnityEngine_Events_UnityAction_o *onChangeColor,MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  UI_ElementStyle_o *style_00;
  Il2CppObject *pIVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffff88;
  MethodInfo *in_stack_ffffffffffffff90;
  
  method_00 = (MethodInfo *)setting;
  method_01 = (MethodInfo *)tooltip;
  if (DAT_057044fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    DAT_057044fe = '\x01';
    method_00 = extraout_RDX;
  }
  if (style != (UI_ElementStyle_o *)0x0) {
    __this = UI_ElementFactory__CreateHorizontalGroup(parent,(style->fields).Spacing,3,method_00);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      __this_00 = UI_ElementFactory__CreateDefaultLabel(pUVar4,style,title,0,3,method_01);
      iVar1 = (style->fields).FontSize;
      fVar2 = (style->fields).Spacing;
      pSVar3 = (style->fields).ThemePanel;
      style_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      System_Object___ctor((Il2CppObject *)style_00,(MethodInfo *)0x0);
      (style_00->fields).FontSize = iVar1;
      (style_00->fields).TitleWidth = 0.0;
      (style_00->fields).Spacing = fVar2;
      (style_00->fields).ThemePanel = pSVar3;
      il2cpp_runtime_glue(&(style_00->fields).ThemePanel);
      pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (setting != (Settings_ToggleColorSetting_o *)0x0) {
        UI_ElementFactory__CreateToggleSetting
                  (pUVar4,style_00,(Settings_BaseSetting_o *)(setting->fields).Enabled,
                   (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                   (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),toggleWidth,
                   toggleHeight,onToggleChanged,in_stack_ffffffffffffff88);
        pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        UI_ElementFactory__CreateColorSetting
                  (pUVar4,style_00,(Settings_BaseSetting_o *)(setting->fields).Color,
                   (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),colorPickPopup,tooltip,
                   colorWidth,colorHeight,onChangeColor,in_stack_ffffffffffffff90);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          pIVar5 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar5 != (Il2CppObject *)0x0) {
            (*pIVar5->klass->vtable[0x24].methodPtr)
                      ((style->fields).TitleWidth,pIVar5,pIVar5->klass->vtable[0x24].method);
            if ((style->fields).TitleWidth <= 0.0) {
              pIVar5 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0407ed83;
              (*pIVar5->klass->vtable[0x24].methodPtr)
                        (0xbf800000,pIVar5,pIVar5->klass->vtable[0x24].method);
            }
            return __this;
          }
        }
      }
    }
  }
LAB_0407ed83:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateIconPickSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateIconPickSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, System_String_array* options, System_String_array* icons, UI_IconPickPopup_o* popup, System_String_o* tooltip, System_String_array* tooltips, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onSelect, UI_TooltipPopup_o* tooltipPopup, const MethodInfo* method);
// 0x407ed90

UnityEngine_GameObject_o *
UI_ElementFactory__CreateIconPickSetting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,System_String_array *options,System_String_array *icons,
          UI_IconPickPopup_o *popup,System_String_o *tooltip,System_String_array *tooltips,
          float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onSelect,
          UI_TooltipPopup_o *tooltipPopup,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_IconPickSettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (DAT_057044ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IconPickSettingElement_AddComponent_IconPickSett);
    il2cpp_init_method_metadata(&"Prefabs/Elements/ButtonSetting");
    DAT_057044ff = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ButtonSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_IconPickSettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_IconPickSettingElement_AddComponent_IconPickSett);
    if (__this_00 != (UI_IconPickSettingElement_o *)0x0) {
      UI_IconPickSettingElement__Setup
                (__this_00,setting,style,title,options,icons,tooltips,popup,tooltip,elementWidth,
                 elementHeight,onSelect,tooltipPopup,(MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateButtonPopupSetting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateButtonPopupSetting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, UI_BasePopup_o* popup, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x406a960

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
  MethodInfo *in_stack_ffffffffffffffb8;
  
  method_00 = (MethodInfo *)setting;
  if (DAT_05704500 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ButtonPopupSettingElement_AddComponent_ButtonPop);
    il2cpp_init_method_metadata(&"Prefabs/Elements/ButtonSetting");
    DAT_05704500 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/ButtonSetting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_ButtonPopupSettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_ButtonPopupSettingElement_AddComponent_ButtonPop);
    if (__this_00 != (UI_ButtonPopupSettingElement_o *)0x0) {
      UI_ButtonPopupSettingElement__Setup
                (__this_00,setting,style,title,popup,tooltip,elementWidth,elementHeight,
                 in_stack_ffffffffffffffb8);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateVector3Setting
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateVector3Setting (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_BaseSetting_o* setting, System_String_o* title, UI_Vector3Popup_o* vector3Popup, System_String_o* tooltip, float elementWidth, float elementHeight, UnityEngine_Events_UnityAction_o* onChangeVector, const MethodInfo* method);
// 0x4074d00

UnityEngine_GameObject_o *
UI_ElementFactory__CreateVector3Setting
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Settings_BaseSetting_o *setting,
          System_String_o *title,UI_Vector3Popup_o *vector3Popup,System_String_o *tooltip,
          float elementWidth,float elementHeight,UnityEngine_Events_UnityAction_o *onChangeVector,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_Vector3SettingElement_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)setting;
  if (DAT_05704501 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Vector3SettingElement_AddComponent_Vector3Settin);
    il2cpp_init_method_metadata(&"Prefabs/Elements/Vector3Setting");
    DAT_05704501 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/Vector3Setting",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_Vector3SettingElement_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_Vector3SettingElement_AddComponent_Vector3Settin);
    if (__this_00 != (UI_Vector3SettingElement_o *)0x0) {
      UI_Vector3SettingElement__Setup
                (__this_00,setting,style,title,vector3Popup,tooltip,elementWidth,elementHeight,
                 onChangeVector,(MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateHorizontalLine
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateHorizontalLine (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, float width, float height, const MethodInfo* method);
// 0x407f360

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
  Il2CppObject *pIVar2;
  MethodInfo *extraout_RDX;
  UnityEngine_Color_o UVar3;
  
  if (DAT_05704502 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLineScaler_AddComponent_HorizontalLine);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"LineColor");
    il2cpp_init_method_metadata(&"Prefabs/Elements/HorizontalLine");
    il2cpp_init_method_metadata(&"LineImage");
    il2cpp_init_method_metadata(&"MainBody");
    DAT_05704502 = '\x01';
    method = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/HorizontalLine",method);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineImage",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
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
                UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_HorizontalLineScaler_AddComponent_HorizontalLine);
                pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineImage",(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pIVar2 = UnityEngine_Component__GetComponent<object>
                                       ((UnityEngine_Component_o *)pUVar1,MethodInfo_Image_GetComponent_Image);
                    if (style != (UI_ElementStyle_o *)0x0) {
                      panel = (style->fields).ThemePanel;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      UVar3 = UI_UIManager__GetThemeColor
                                        (panel,"MainBody","LineColor","DefaultPanel",
                                         (MethodInfo *)0x0);
                      if (pIVar2 != (Il2CppObject *)0x0) {
                        (*pIVar2->klass->vtable[0x17].methodPtr)
                                  (UVar3.fields.r,UVar3.fields.b,pIVar2,
                                   pIVar2->klass->vtable[0x17].method);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateHorizontalGroup
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateHorizontalGroup (UnityEngine_Transform_o* parent, float spacing, int32_t alignment, const MethodInfo* method);
// 0x40709c0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateHorizontalGroup
          (UnityEngine_Transform_o *parent,float spacing,int32_t alignment,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  UnityEngine_UI_LayoutGroup_o *__this_01;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704503 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Prefabs/Elements/HorizontalGroup");
    DAT_05704503 = '\x01';
    method = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/HorizontalGroup",method);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                (__this_00,spacing,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
      if (__this_01 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_childAlignment(__this_01,alignment,(MethodInfo *)0x0);
        if (parent != (UnityEngine_Transform_o *)0x0) {
          x = (UnityEngine_Object_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)parent,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar1 != '\0') {
            pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar2 == (Il2CppObject *)0x0) goto LAB_04070b08;
            (*pIVar2->klass->vtable[0x28].methodPtr)(0,pIVar2,pIVar2->klass->vtable[0x28].method);
          }
          return __this;
        }
      }
    }
  }
LAB_04070b08:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreatePlayerKDRRow
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreatePlayerKDRRow (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x407f570

UnityEngine_GameObject_o *
UI_ElementFactory__CreatePlayerKDRRow
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,Photon_Realtime_Player_o *player
          ,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_PlayerKDRRow_o *__this_00;
  UI_KDRPanel_o *panel;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)player;
  if (DAT_05704504 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_KDRPanel_GetComponent_KDRPanel);
    il2cpp_init_method_metadata(&MethodInfo_PlayerKDRRow_AddComponent_PlayerKDRRow);
    DAT_05704504 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__CreateHorizontalGroup(parent,10.0,3,method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_PlayerKDRRow_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_PlayerKDRRow_AddComponent_PlayerKDRRow);
    if (parent != (UnityEngine_Transform_o *)0x0) {
      panel = (UI_KDRPanel_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)parent,MethodInfo_KDRPanel_GetComponent_KDRPanel);
      if (__this_00 != (UI_PlayerKDRRow_o *)0x0) {
        UI_PlayerKDRRow__Setup(__this_00,style,player,panel,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateTeamKDRRow
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateTeamKDRRow (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* team, const MethodInfo* method);
// 0x407f620

UnityEngine_GameObject_o *
UI_ElementFactory__CreateTeamKDRRow
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *team,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_TeamKDRRow_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)team;
  if (DAT_05704505 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TeamKDRRow_AddComponent_TeamKDRRow);
    DAT_05704505 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__CreateHorizontalGroup(parent,10.0,3,method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_TeamKDRRow_o *)UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_TeamKDRRow_AddComponent_TeamKDRRow)
    ;
    if (__this_00 != (UI_TeamKDRRow_o *)0x0) {
      UI_TeamKDRRow__Setup(__this_00,style,team,(MethodInfo *)0x0);
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateVerticalGroup
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__CreateVerticalGroup (UnityEngine_Transform_o* parent, float spacing, int32_t alignment, const MethodInfo* method);
// 0x407f6a0

UnityEngine_GameObject_o *
UI_ElementFactory__CreateVerticalGroup
          (UnityEngine_Transform_o *parent,float spacing,int32_t alignment,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  UnityEngine_UI_LayoutGroup_o *__this_01;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704506 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Prefabs/Elements/VerticalGroup");
    DAT_05704506 = '\x01';
    method = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/VerticalGroup",method);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
    if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                (__this_00,spacing,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
      if (__this_01 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_childAlignment(__this_01,alignment,(MethodInfo *)0x0);
        if (parent != (UnityEngine_Transform_o *)0x0) {
          x = (UnityEngine_Object_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)parent,MethodInfo_VerticalLayoutGroup_GetComponent_VerticalLayoutG);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar1 != '\0') {
            pIVar2 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0407f7e8;
            (*pIVar2->klass->vtable[0x28].methodPtr)(0,pIVar2,pIVar2->klass->vtable[0x28].method);
          }
          return __this;
        }
      }
    }
  }
LAB_0407f7e8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateCollapsibleSection
// il2cpp: UI_CollapsibleSection_o* UI_ElementFactory__CreateCollapsibleSection (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, bool startExpanded, System_Action_bool__o* onExpandedChanged, const MethodInfo* method);
// 0x406ba40

UI_CollapsibleSection_o *
UI_ElementFactory__CreateCollapsibleSection
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          bool_conflict startExpanded,System_Action_bool__o *onExpandedChanged,MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_UI_Selectable_o *__this_01;
  UI_CollapsibleSection_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar1;
  UnityEngine_UI_ColorBlock_o local_88;
  
  pMVar1 = (MethodInfo *)title;
  if (DAT_05704507 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CollapsibleSection_AddComponent_CollapsibleSecti);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Prefabs/Elements/TextButton");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"TextButton");
    DAT_05704507 = '\x01';
    pMVar1 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/TextButton",pMVar1);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_Text_o *)
                UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Text_GetComponent_Text);
    if ((style != (UI_ElementStyle_o *)0x0) && (__this_00 != (UnityEngine_UI_Text_o *)0x0)) {
      UnityEngine_UI_Text__set_fontSize(__this_00,(style->fields).FontSize,(MethodInfo *)0x0);
      UnityEngine_UI_Text__set_fontStyle(__this_00,1,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_UI_Selectable_o *)
                  UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Button_GetComponent_Button);
      panel = (style->fields).ThemePanel;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar1 = (MethodInfo *)0x0;
      UI_UIManager__GetThemeColorBlock
                (&local_88,panel,"TextButton","","DefaultPanel",(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_UI_Selectable_o *)0x0) {
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
        UnityEngine_UI_Selectable__set_colors(__this_01,value,(MethodInfo *)0x0);
        __this_02 = (UI_CollapsibleSection_o *)
                    UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_CollapsibleSection_AddComponent_CollapsibleSecti);
        if (__this_02 != (UI_CollapsibleSection_o *)0x0) {
          UI_CollapsibleSection__Setup
                    (__this_02,title,style,startExpanded & 0xff,onExpandedChanged,pMVar1);
          return __this_02;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$CreateCollapsibleToggleSection
// il2cpp: UI_CollapsibleToggleSection_o* UI_ElementFactory__CreateCollapsibleToggleSection (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, bool startEnabled, bool startExpanded, System_Action_bool__o* onToggleChanged, const MethodInfo* method);
// 0x407f7f0

UI_CollapsibleToggleSection_o *
UI_ElementFactory__CreateCollapsibleToggleSection
          (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
          bool_conflict startEnabled,bool_conflict startExpanded,
          System_Action_bool__o *onToggleChanged,MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  UnityEngine_Object_o *pUVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Object_o *x;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_Selectable_o *__this_02;
  UI_CollapsibleToggleSection_o *__this_03;
  UnityEngine_UI_Button_o *arrowButton;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_UI_Toggle_o *local_100;
  undefined1 local_88 [32];
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48;
  float local_38;
  float fStack_34;
  
  method_00 = (MethodInfo *)title;
  if (DAT_05704508 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Toggle_GetComponent_Toggle);
    il2cpp_init_method_metadata(&MethodInfo_CollapsibleToggleSection_AddComponent_Collapsibl);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponentInChildren_Text);
    il2cpp_init_method_metadata(&MethodInfo_Toggle_GetComponentInChildren_Toggle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Prefabs/Elements/HorizontalGroup");
    il2cpp_init_method_metadata(&"Prefabs/Elements/TextButton");
    il2cpp_init_method_metadata(&"Prefabs/Elements/ToggleSetting");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Toggle");
    il2cpp_init_method_metadata(&"TextButton");
    DAT_05704508 = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Elements/HorizontalGroup",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_00,6.0,(MethodInfo *)0x0);
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)__this_00,3,(MethodInfo *)0x0);
      if (parent != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)parent,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0407fe59;
          (*pIVar3->klass->vtable[0x28].methodPtr)(0,pIVar3);
        }
        pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        pUVar2 = (UnityEngine_Object_o *)
                 UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/Elements/ToggleSetting",method_01);
        if (pUVar2 != (UnityEngine_Object_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)pUVar2,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = UnityEngine_Transform__Find(pUVar4,"Toggle",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              local_100 = (UnityEngine_UI_Toggle_o *)
                          UnityEngine_GameObject__GetComponentInChildren<object>
                                    ((UnityEngine_GameObject_o *)pUVar2,MethodInfo_Toggle_GetComponentInChildren_Toggle);
              x = (UnityEngine_Object_o *)
                  UnityEngine_GameObject__GetComponentInChildren<object>
                            ((UnityEngine_GameObject_o *)pUVar2,MethodInfo_Text_GetComponentInChildren_Text);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar1 = UnityEngine_Object__op_Inequality
                                (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar1 != '\0') {
                if (x == (UnityEngine_Object_o *)0x0) goto LAB_0407fe59;
                (*x->klass[4]._1.gc_desc)
                          (x,**(undefined8 **)(DAT_057110b0 + 0xb8),x->klass[4]._1.name);
              }
              pIVar3 = UnityEngine_GameObject__GetComponent<object>
                                 ((UnityEngine_GameObject_o *)pUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar3 == (Il2CppObject *)0x0) {
                pIVar3 = UnityEngine_GameObject__AddComponent<object>
                                   ((UnityEngine_GameObject_o *)pUVar2,MethodInfo_LayoutElement_AddComponent_LayoutElement);
                if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0407fe59;
              }
              (*pIVar3->klass->vtable[0x24].methodPtr)
                        (0x41b00000,pIVar3,pIVar3->klass->vtable[0x24].method);
              (*pIVar3->klass->vtable[0x20].methodPtr)(0x41b00000,pIVar3);
            }
            else {
              parent_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
              if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_0407fe59;
              UnityEngine_Transform__SetParent(pUVar4,parent_00,0,(MethodInfo *)0x0);
              UnityEngine_Transform__SetSiblingIndex(pUVar4,0,(MethodInfo *)0x0);
              pIVar3 = UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar3 == (Il2CppObject *)0x0) {
                pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
                if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_0407fe59;
                pIVar3 = UnityEngine_GameObject__AddComponent<object>(pUVar5,MethodInfo_LayoutElement_AddComponent_LayoutElement);
                if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0407fe59;
              }
              (*pIVar3->klass->vtable[0x24].methodPtr)
                        (0x41b00000,pIVar3,pIVar3->klass->vtable[0x24].method);
              (*pIVar3->klass->vtable[0x20].methodPtr)
                        (0x41b00000,pIVar3,pIVar3->klass->vtable[0x20].method);
              local_100 = (UnityEngine_UI_Toggle_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar4,MethodInfo_Toggle_GetComponent_Toggle);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UnityEngine_Object__Destroy(pUVar2,(MethodInfo *)0x0);
            }
            pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
            pUVar5 = UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/Elements/TextButton",method_02);
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              __this_01 = (UnityEngine_UI_Text_o *)
                          UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_Text_GetComponent_Text);
              if ((style != (UI_ElementStyle_o *)0x0) && (__this_01 != (UnityEngine_UI_Text_o *)0x0)
                 ) {
                UnityEngine_UI_Text__set_fontSize
                          (__this_01,(style->fields).FontSize,(MethodInfo *)0x0);
                UnityEngine_UI_Text__set_fontStyle(__this_01,1,(MethodInfo *)0x0);
                __this_02 = (UnityEngine_UI_Selectable_o *)
                            UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_Button_GetComponent_Button);
                panel = (style->fields).ThemePanel;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UI_UIManager__GetThemeColorBlock
                          ((UnityEngine_UI_ColorBlock_o *)local_88,panel,"TextButton","",
                           "DefaultPanel",(MethodInfo *)0x0);
                if (__this_02 != (UnityEngine_UI_Selectable_o *)0x0) {
                  value.fields.m_NormalColor.fields.b = (float)local_88._8_4_;
                  value.fields.m_NormalColor.fields.a = (float)local_88._12_4_;
                  value.fields.m_NormalColor.fields.r = (float)local_88._0_4_;
                  value.fields.m_NormalColor.fields.g = (float)local_88._4_4_;
                  value.fields.m_HighlightedColor.fields.r = (float)local_88._16_4_;
                  value.fields.m_HighlightedColor.fields.g = (float)local_88._20_4_;
                  value.fields.m_HighlightedColor.fields.b = (float)local_88._24_4_;
                  value.fields.m_HighlightedColor.fields.a = (float)local_88._28_4_;
                  value.fields.m_PressedColor.fields.r = local_68.r;
                  value.fields.m_PressedColor.fields.g = local_68.g;
                  value.fields.m_PressedColor.fields.b = local_68.b;
                  value.fields.m_PressedColor.fields.a = local_68.a;
                  value.fields.m_SelectedColor.fields.r = local_58.r;
                  value.fields.m_SelectedColor.fields.g = local_58.g;
                  value.fields.m_SelectedColor.fields.b = local_58.b;
                  value.fields.m_SelectedColor.fields.a = local_58.a;
                  value.fields.m_DisabledColor.fields.r = local_48.r;
                  value.fields.m_DisabledColor.fields.g = local_48.g;
                  value.fields.m_DisabledColor.fields.b = local_48.b;
                  value.fields.m_DisabledColor.fields.a = local_48.a;
                  value.fields.m_ColorMultiplier = local_38;
                  value.fields.m_FadeDuration = fStack_34;
                  UnityEngine_UI_Selectable__set_colors(__this_02,value,(MethodInfo *)0x0);
                  __this_03 = (UI_CollapsibleToggleSection_o *)
                              UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_CollapsibleToggleSection_AddComponent_Collapsibl);
                  arrowButton = (UnityEngine_UI_Button_o *)
                                UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_Button_GetComponent_Button);
                  if (__this_03 != (UI_CollapsibleToggleSection_o *)0x0) {
                    UI_CollapsibleToggleSection__Setup
                              (__this_03,__this_01,arrowButton,local_100,title,startEnabled & 0xff,
                               startExpanded & 0xff,onToggleChanged,(MethodInfo *)local_88._16_8_);
                    return __this_03;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0407fe59:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$GetTextWidth
// il2cpp: float UI_ElementFactory__GetTextWidth (UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, System_String_o* title, int32_t fontStyle, const MethodInfo* method);
// 0x407fe60

float UI_ElementFactory__GetTextWidth
                (UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,System_String_o *title,
                int32_t fontStyle,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Object_o *obj;
  UnityEngine_RectTransform_o *__this;
  MethodInfo *in_R9;
  float fStack_38;
  
  if (DAT_05704509 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704509 = '\x01';
  }
  obj = (UnityEngine_Object_o *)
        UI_ElementFactory__CreateDefaultLabel(parent,style,title,fontStyle,4,in_R9);
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    __this = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)obj,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      fStack_38 = UVar1.fields.x;
      return fStack_38;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$InstantiateAndSetupPanel<object>
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__InstantiateAndSetupPanel_object_ (UnityEngine_Transform_o* parent, System_String_o* asset, bool enabled, const MethodInfo_24B8130* method);
// 0x25b8130

/* WARNING: Type propagation algorithm not settling */

UnityEngine_GameObject_o *
UI_ElementFactory__InstantiateAndSetupPanel<object>
          (UnityEngine_Transform_o *parent,System_String_o *asset,bool_conflict enabled,
          MethodInfo_24B8130 *method)

{
  System_RuntimeTypeHandle_o handle;
  long lVar1;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar2;
  long lVar3;
  System_Type_o *type;
  undefined8 uStack_30;
  
  if (method->rgctx_data == (MethodInfo_24B8130_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&MethodInfo_BasePanel_GetComponent_BasePanel);
    if (method->rgctx_data == (MethodInfo_24B8130_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
    }
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,asset,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__AddComponent<object>
                       (__this,(MethodInfo_24F0EB0 *)
                               method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
    lVar1 = MethodInfo_BasePanel_GetComponent_BasePanel;
    if (parent != (UnityEngine_Transform_o *)0x0) {
      lVar3 = *(long *)(MethodInfo_BasePanel_GetComponent_BasePanel + 0x38);
      if (lVar3 == 0) {
        il2cpp_glue_022c2910(MethodInfo_BasePanel_GetComponent_BasePanel);
        lVar3 = *(long *)(lVar1 + 0x38);
      }
      uStack_30 = 0;
      handle.fields.value =
           (System_RuntimeTypeHandle_Fields)((System_RuntimeTypeHandle_Fields *)(lVar3 + 8))->value;
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      type = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      UnityEngine_Component__GetComponentFastPath
                ((UnityEngine_Component_o *)parent,type,(intptr_t)&uStack_30,(MethodInfo *)0x0);
      if (pIVar2 != (Il2CppObject *)0x0) {
        (*pIVar2->klass->vtable[0x14].methodPtr)(pIVar2,0,pIVar2->klass->vtable[0x14].method);
        UnityEngine_GameObject__SetActive(__this,0,(MethodInfo *)0x0);
        UnityEngine_GameObject__SetActive(__this,enabled & 0xff,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$InstantiateAndSetupCustomPopup
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__InstantiateAndSetupCustomPopup (UnityEngine_Transform_o* parent, System_String_o* title, float width, float height, bool enabled, const MethodInfo* method);
// 0x407ff20

UnityEngine_GameObject_o *
UI_ElementFactory__InstantiateAndSetupCustomPopup
          (UnityEngine_Transform_o *parent,System_String_o *title,float width,float height,
          bool_conflict enabled,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UI_CustomPopup_o *__this_00;
  UI_BasePanel_o *parent_00;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,enabled);
  if (DAT_0570450a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BasePanel_GetComponent_BasePanel);
    il2cpp_init_method_metadata(&MethodInfo_CustomPopup_AddComponent_CustomPopup);
    il2cpp_init_method_metadata(&"Prefabs/Panels/HeadedPanel");
    DAT_0570450a = '\x01';
    method_00 = extraout_RDX;
  }
  __this = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Panels/HeadedPanel",method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UI_CustomPopup_o *)
                UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_CustomPopup_AddComponent_CustomPopup);
    if (parent != (UnityEngine_Transform_o *)0x0) {
      parent_00 = (UI_BasePanel_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)parent,MethodInfo_BasePanel_GetComponent_BasePanel);
      if (__this_00 != (UI_CustomPopup_o *)0x0) {
        UI_CustomPopup__Setup(__this_00,parent_00,title,width,height,(MethodInfo *)0x0);
        UnityEngine_GameObject__SetActive(__this,0,(MethodInfo *)0x0);
        UnityEngine_GameObject__SetActive(__this,enabled & 0xff,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$InstantiateAndBind
// il2cpp: UnityEngine_GameObject_o* UI_ElementFactory__InstantiateAndBind (UnityEngine_Transform_o* parent, System_String_o* asset, const MethodInfo* method);
// 0x4070b20

UnityEngine_GameObject_o *
UI_ElementFactory__InstantiateAndBind
          (UnityEngine_Transform_o *parent,System_String_o *asset,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar1;
  
  if (DAT_0570450b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    DAT_0570450b = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>(path,asset,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar1,parent,0,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar1,(UnityEngine_Vector3_o)
                          **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$SetAnchor
// il2cpp: void UI_ElementFactory__SetAnchor (UnityEngine_GameObject_o* obj, int32_t anchor, int32_t pivot, UnityEngine_Vector2_o offset, const MethodInfo* method);
// 0x4076df0

void UI_ElementFactory__SetAnchor
               (UnityEngine_GameObject_o *obj,int32_t anchor,int32_t pivot,
               UnityEngine_Vector2_o offset,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_RectTransform_o *__this;
  float fVar1;
  float fVar2;
  
  if (DAT_0570450c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    DAT_0570450c = '\x01';
  }
  if (obj == (UnityEngine_GameObject_o *)0x0) goto LAB_04076ecd;
  __this = (UnityEngine_RectTransform_o *)
           UnityEngine_GameObject__GetComponent<object>(obj,MethodInfo_RectTransform_GetComponent_RectTransform);
  fVar1 = 1.0;
  switch(anchor) {
  case 1:
    fVar2 = 0.5;
    goto joined_r0x04076e79;
  case 2:
    fVar2 = 1.0;
joined_r0x04076e79:
    fVar1 = 1.0;
    break;
  case 3:
    fVar2 = 0.0;
    goto joined_r0x04076e87;
  case 4:
    fVar2 = 0.5;
joined_r0x04076e87:
    fVar1 = 0.5;
    break;
  case 5:
    fVar2 = 1.0;
    fVar1 = 0.5;
    break;
  case 6:
    fVar2 = 0.0;
    fVar1 = 0.0;
    break;
  case 7:
    fVar2 = 0.5;
    fVar1 = 0.0;
    break;
  case 8:
    fVar2 = 1.0;
    fVar1 = 0.0;
    break;
  default:
    fVar1 = 0.0;
  case 0:
    fVar2 = 0.0;
  }
  if (__this != (UnityEngine_RectTransform_o *)0x0) {
    value.fields.y = fVar1;
    value.fields.x = fVar2;
    UnityEngine_RectTransform__set_anchorMax(__this,value,(MethodInfo *)0x0);
    value_01.fields.y = fVar1;
    value_01.fields.x = fVar2;
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
LAB_04076ecd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ElementFactory$$GetAnchorVector
// il2cpp: UnityEngine_Vector2_o UI_ElementFactory__GetAnchorVector (int32_t anchor, const MethodInfo* method);
// 0x4080010

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
// 0x4080070

void UI_ElementFactory___ctor(UI_ElementFactory_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


