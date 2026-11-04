// Type: UI.KeybindSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/KeybindSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/KeybindSettingElement.cs
// --------------------------------

// UI.KeybindSettingElement.<>c__DisplayClass5_0$$.ctor
// il2cpp: void UI_KeybindSettingElement___c__DisplayClass5_0___ctor (UI_KeybindSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_KeybindSettingElement___c__DisplayClass5_0___ctor(UI_KeybindSettingElement___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KeybindSettingElement.<>c__DisplayClass5_0$$<CreateKeybindButton>b__0
// il2cpp: void UI_KeybindSettingElement___c__DisplayClass5_0___CreateKeybindButton_b__0 (UI_KeybindSettingElement___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18221af70

void UI_KeybindSettingElement___c__DisplayClass5_0___CreateKeybindButton_b__0
               (UI_KeybindSettingElement___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t index;
  UI_KeybindSettingElement_o *pUVar2;
  Settings_BaseSetting_o *pSVar3;
  UI_KeybindPopup_o *__this_00;
  System_Collections_Generic_List_Text__o *__this_01;
  Settings_InputKey_o *setting;
  UnityEngine_UI_Text_o *label;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 != (UI_KeybindSettingElement_o *)0x0) {
    index = (__this->fields).index;
    if (Il2CppMethodInitialized_184347132 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Text_get_Item);
      Il2CppMethodInitialized_184347132 = '\x01';
    }
    pSVar3 = (pUVar2->fields)._setting;
    if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
      if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
      }
      if ((*(uint64_t *)((char *)pSVar3 + 0x18)) != (Settings_BaseSetting_c *)0x0) {
        __this_00 = (pUVar2->fields)._keybindPopup;
        setting = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)(*(uint64_t *)((char *)pSVar3 + 0x18)),index,
                             (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item
                            );
        __this_01 = (pUVar2->fields)._buttonLabels;
        if (__this_01 != (System_Collections_Generic_List_Text__o *)0x0) {
          label = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Text_get_Item);
          if (__this_00 != (UI_KeybindPopup_o *)0x0) {
            UI_KeybindPopup__Show(__this_00,setting,label,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.KeybindSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_KeybindSettingElement__get_SupportedSettingTypes (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x182214670

System_Collections_Generic_HashSet_SettingType__o *
UI_KeybindSettingElement__get_SupportedSettingTypes(UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_184347130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_184347130 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,5,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.KeybindSettingElement$$Setup
// il2cpp: void UI_KeybindSettingElement__Setup (UI_KeybindSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, UI_KeybindPopup_o* keybindPopup, System_String_o* tooltip, float elementWidth, float elementHeight, int32_t bindCount, const MethodInfo* method);
// 0x1822143d0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182214411: movaps xmmword ptr [rsp + 0x40], xmm6
// asm:   0x182214416: movss xmm6, dword ptr [rsp + 0xc8]
// asm:   0x18221441f: movaps xmmword ptr [rsp + 0x30], xmm7
// asm:   0x182214424: movss xmm7, dword ptr [rsp + 0xc0]
// asm:   0x18221442d: nop dword ptr [rax]
// asm:   0x182214451: movaps xmm7, xmmword ptr [rsp + 0x30]
// asm:   0x182214456: movaps xmm6, xmmword ptr [rsp + 0x40]

void UI_KeybindSettingElement__Setup
               (UI_KeybindSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,UI_KeybindPopup_o *keybindPopup,System_String_o *tooltip,
               float elementWidth,float elementHeight,int32_t bindCount,MethodInfo *method)

{
  int32_t index;
  
  (__this->fields)._keybindPopup = keybindPopup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._keybindPopup,keybindPopup);
  index = 0;
  if (0 < bindCount) {
    do {
      UI_KeybindSettingElement__CreateKeybindButton
                (__this,index,style,elementWidth,elementHeight,(MethodInfo *)0x0);
      index = index + 1;
    } while (index < bindCount);
  }
  UI_BaseSettingElement__Setup
            ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,(MethodInfo *)0x0);
  return;
}


// UI.KeybindSettingElement$$CreateKeybindButton
// il2cpp: void UI_KeybindSettingElement__CreateKeybindButton (UI_KeybindSettingElement_o* __this, int32_t index, UI_ElementStyle_o* style, float width, float height, const MethodInfo* method);
// 0x182213e20

void UI_KeybindSettingElement__CreateKeybindButton
               (UI_KeybindSettingElement_o *__this,int32_t index,UI_ElementStyle_o *style,float width,
               float height,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_Collections_Generic_List_Text__o *__this_01;
  UnityEngine_UI_Text_array *pUVar4;
  MethodInfo *pMVar5;
  UI_KeybindSettingElement___c__DisplayClass5_0_o *object;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_Color_o *pUVar7;
  UnityEngine_UI_LayoutElement_o *pUVar8;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Button_o *pUVar9;
  UnityEngine_Events_UnityAction_o *__this_04;
  UnityEngine_UI_ColorBlock_o *pUVar10;
  UnityEngine_Color_Fields local_f8;
  UnityEngine_UI_ColorBlock_o local_e8;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_184347131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Text_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_KeybindSettingElement_c__DisplayClass5_0_CreateKeybindButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_KeybindSettingElement_c__DisplayClass5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"KeybindTextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybind");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/elements/KeybindButton");
    Il2CppMethodInitialized_184347131 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_KeybindSettingElement_c__DisplayClass5_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_KeybindSettingElement___c__DisplayClass5_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).index = index;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    __this_02 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          (pSVar3,"Prefabs/elements/KeybindButton",false,
                           (MethodInfo_795F00 *)
                           MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = UnityEngine_Transform__Find(pUVar6,"Text",(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          __this_03 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar6,
                                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          if (style != (UI_ElementStyle_o *)0x0) {
            pSVar3 = (style->fields).ThemePanel;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar7 = UI_UIManager__GetThemeColor
                               ((UnityEngine_Color_o *)&local_f8,pSVar3,"DefaultSetting",
                                "KeybindTextColor","DefaultPanel",(MethodInfo *)0x0);
            if (__this_03 != (UnityEngine_UI_Text_o *)0x0) {
              local_f8.r = (pUVar7->fields).r;
              local_f8.g = (pUVar7->fields).g;
              local_f8.b = (pUVar7->fields).b;
              local_f8.a = (pUVar7->fields).a;
              (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                        (__this_03,(UnityEngine_Color_o *)&local_f8,
                         (__this_03->klass->vtable)._23_set_color.method);
              UnityEngine_UI_Text__set_fontSize(__this_03,(style->fields).FontSize,(MethodInfo *)0x0);
              pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_02,
                                  (MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
              if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar8->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (pUVar8,width,(pUVar8->klass->vtable)._36_set_preferredWidth.method);
                pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_02,
                                    (MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  (*(pUVar8->klass->vtable)._38_set_preferredHeight.methodPtr)
                            (pUVar8,height,(pUVar8->klass->vtable)._38_set_preferredHeight.method);
                  pUVar6 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                  parent = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__SetParent_2f5a7e0(pUVar6,parent,false,(MethodInfo *)0x0);
                    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                       (__this_02,
                                        (MethodInfo_6F5650 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                    if (pUVar9 != (UnityEngine_UI_Button_o *)0x0) {
                      __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar9->fields).m_OnClick;
                      __this_04 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_04,
                                 (Il2CppObject *)object,
                                 (intptr_t)
                                 MethodInfo_UI_KeybindSettingElement_c__DisplayClass5_0_CreateKeybindButton_b__0
                                 ,(MethodInfo *)0x0);
                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_04,(MethodInfo *)0x0);
                        pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                           (__this_02,
                                            (MethodInfo_6F5650 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                        pUVar10 = UI_UIManager__GetThemeColorBlock
                                            (&local_88,(style->fields).ThemePanel,"DefaultSetting",
                                             "Keybind","DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar9 != (UnityEngine_UI_Button_o *)0x0) {
                          local_e8.fields.m_NormalColor.fields.r = (pUVar10->fields).m_NormalColor.fields.r;
                          local_e8.fields.m_NormalColor.fields.g = (pUVar10->fields).m_NormalColor.fields.g;
                          local_e8.fields.m_NormalColor.fields.b = (pUVar10->fields).m_NormalColor.fields.b;
                          local_e8.fields.m_NormalColor.fields.a = (pUVar10->fields).m_NormalColor.fields.a;
                          local_e8.fields.m_HighlightedColor.fields.r =
                               (pUVar10->fields).m_HighlightedColor.fields.r;
                          local_e8.fields.m_HighlightedColor.fields.g =
                               (pUVar10->fields).m_HighlightedColor.fields.g;
                          local_e8.fields.m_HighlightedColor.fields.b =
                               (pUVar10->fields).m_HighlightedColor.fields.b;
                          local_e8.fields.m_HighlightedColor.fields.a =
                               (pUVar10->fields).m_HighlightedColor.fields.a;
                          local_e8.fields.m_PressedColor.fields.r = (pUVar10->fields).m_PressedColor.fields.r;
                          local_e8.fields.m_PressedColor.fields.g = (pUVar10->fields).m_PressedColor.fields.g;
                          local_e8.fields.m_PressedColor.fields.b = (pUVar10->fields).m_PressedColor.fields.b;
                          local_e8.fields.m_PressedColor.fields.a = (pUVar10->fields).m_PressedColor.fields.a;
                          local_e8.fields.m_SelectedColor.fields.r =
                               (pUVar10->fields).m_SelectedColor.fields.r;
                          local_e8.fields.m_SelectedColor.fields.g =
                               (pUVar10->fields).m_SelectedColor.fields.g;
                          local_e8.fields.m_SelectedColor.fields.b =
                               (pUVar10->fields).m_SelectedColor.fields.b;
                          local_e8.fields.m_SelectedColor.fields.a =
                               (pUVar10->fields).m_SelectedColor.fields.a;
                          local_e8.fields.m_DisabledColor.fields.r =
                               (pUVar10->fields).m_DisabledColor.fields.r;
                          local_e8.fields.m_DisabledColor.fields.g =
                               (pUVar10->fields).m_DisabledColor.fields.g;
                          local_e8.fields.m_DisabledColor.fields.b =
                               (pUVar10->fields).m_DisabledColor.fields.b;
                          local_e8.fields.m_DisabledColor.fields.a =
                               (pUVar10->fields).m_DisabledColor.fields.a;
                          local_e8.fields.m_ColorMultiplier = (pUVar10->fields).m_ColorMultiplier;
                          local_e8.fields.m_FadeDuration = (pUVar10->fields).m_FadeDuration;
                          UnityEngine_UI_Selectable__set_colors
                                    ((UnityEngine_UI_Selectable_o *)pUVar9,&local_e8,(MethodInfo *)0x0);
                          pMVar5 = MethodInfo_System_Collections_Generic_List_Text_Add;
                          __this_01 = (__this->fields)._buttonLabels;
                          if (__this_01 != (System_Collections_Generic_List_Text__o *)0x0) {
                            piVar1 = &(__this_01->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar4 = (__this_01->fields)._items;
                            if (pUVar4 != (UnityEngine_UI_Text_array *)0x0) {
                              uVar2 = (__this_01->fields)._size;
                              if (uVar2 < (uint)pUVar4->max_length) {
                                (__this_01->fields)._size = uVar2 + 1;
                                if ((uint)pUVar4->max_length <= uVar2) {
                                  ThrowIndexOutOfRangeException();
                                }
                                pUVar4->m_Items[(int)uVar2] = __this_03;
                                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,__this_03);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)__this_01,
                                           (Il2CppObject *)__this_03,
                                           (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
                              }
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


// UI.KeybindSettingElement$$OnButtonClicked
// il2cpp: void UI_KeybindSettingElement__OnButtonClicked (UI_KeybindSettingElement_o* __this, int32_t index, const MethodInfo* method);
// 0x1822142d0

void UI_KeybindSettingElement__OnButtonClicked
               (UI_KeybindSettingElement_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  UI_KeybindPopup_o *__this_00;
  System_Collections_Generic_List_Text__o *__this_01;
  Settings_InputKey_o *setting;
  UnityEngine_UI_Text_o *label;
  
  if (Il2CppMethodInitialized_184347132 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Text_get_Item);
    Il2CppMethodInitialized_184347132 = '\x01';
  }
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
    if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
    }
    if ((*(uint64_t *)((char *)pSVar2 + 0x18)) != (Settings_BaseSetting_c *)0x0) {
      __this_00 = (__this->fields)._keybindPopup;
      setting = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)(*(uint64_t *)((char *)pSVar2 + 0x18)),index,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
      __this_01 = (__this->fields)._buttonLabels;
      if (__this_01 != (System_Collections_Generic_List_Text__o *)0x0) {
        label = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)__this_01,index,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Text_get_Item);
        if (__this_00 != (UI_KeybindPopup_o *)0x0) {
          UI_KeybindPopup__Show(__this_00,setting,label,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.KeybindSettingElement$$SyncElement
// il2cpp: void UI_KeybindSettingElement__SyncElement (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x1822144a0

void UI_KeybindSettingElement__SyncElement(UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_o *pSVar2;
  System_Collections_Generic_List_Text__o *pSVar3;
  UnityEngine_UI_Text_o *pUVar4;
  Settings_InputKey_o *pSVar5;
  System_String_o *pSVar6;
  int index;
  
  if (Il2CppMethodInitialized_184347133 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Text_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Text_get_Item);
    Il2CppMethodInitialized_184347133 = '\x01';
  }
  pSVar3 = (__this->fields)._buttonLabels;
  index = 0;
  if (pSVar3 != (System_Collections_Generic_List_Text__o *)0x0) {
    while( true ) {
      if ((pSVar3->fields)._size <= index) {
        return;
      }
      pSVar3 = (__this->fields)._buttonLabels;
      if (pSVar3 == (System_Collections_Generic_List_Text__o *)0x0) break;
      pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Text_get_Item);
      pSVar2 = (__this->fields)._setting;
      if (pSVar2 == (Settings_BaseSetting_o *)0x0) break;
      bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
      if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar2,TypeInfo_Settings_KeybindSetting);
      }
      if ((*(uint64_t *)((char *)pSVar2 + 0x18)) == (Settings_BaseSetting_c *)0x0) break;
      pSVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)(*(uint64_t *)((char *)pSVar2 + 0x18)),index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_InputKey_get_Item);
      if (pSVar5 == (Settings_InputKey_o *)0x0) break;
      pSVar6 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
      if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) break;
      (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                (pUVar4,pSVar6,(pUVar4->klass->vtable)._75_set_text.method);
      pSVar3 = (__this->fields)._buttonLabels;
      if (pSVar3 == (System_Collections_Generic_List_Text__o *)0x0) break;
      index = index + 1;
    }
  }
  ThrowNullReferenceException();
}


// UI.KeybindSettingElement$$.ctor
// il2cpp: void UI_KeybindSettingElement___ctor (UI_KeybindSettingElement_o* __this, const MethodInfo* method);
// 0x1822145f0

void UI_KeybindSettingElement___ctor(UI_KeybindSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Text__o *__this_00;
  
  if (Il2CppMethodInitialized_184347134 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Text_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Text);
    Il2CppMethodInitialized_184347134 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Text);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Text_ctor);
  (__this->fields)._buttonLabels = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._buttonLabels,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


