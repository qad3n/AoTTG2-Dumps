// Type: UI.ToggleGroupSettingElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ToggleGroupSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ToggleGroupSettingElement.cs
// --------------------------------

// UI.ToggleGroupSettingElement.<>c__DisplayClass8_0$$.ctor
// il2cpp: void UI_ToggleGroupSettingElement___c__DisplayClass8_0___ctor (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ToggleGroupSettingElement___c__DisplayClass8_0___ctor(UI_ToggleGroupSettingElement___c__DisplayClass8_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ToggleGroupSettingElement.<>c__DisplayClass8_0$$<CreateOptionToggle>b__0
// il2cpp: void UI_ToggleGroupSettingElement___c__DisplayClass8_0___CreateOptionToggle_b__0 (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o* __this, bool value, const MethodInfo* method);
// 0x18223a270

void UI_ToggleGroupSettingElement___c__DisplayClass8_0___CreateOptionToggle_b__0
               (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o *__this,bool value,MethodInfo *method)

{
  byte bVar1;
  int32_t value_00;
  UI_ToggleGroupSettingElement_o *pUVar2;
  System_String_o *value_01;
  Settings_TypedSetting_int__o *__this_00;
  Settings_TypedSetting_T__o *__this_01;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 == (UI_ToggleGroupSettingElement_o *)0x0) {
label_18223a37d:
    ThrowNullReferenceException();
  }
  value_01 = (__this->fields).option;
  value_00 = (__this->fields).index;
  if (Il2CppMethodInitialized_184347154 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347154 = '\x01';
  }
  if (value) {
    if ((pUVar2->fields)._settingType == 4) {
      __this_01 = (Settings_TypedSetting_T__o *)(pUVar2->fields)._setting;
      if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
           ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          Settings_TypedSetting_object___set_Value
                    (__this_01,(Il2CppObject *)value_01,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      goto label_18223a37d;
    }
    if ((pUVar2->fields)._settingType == 2) {
      __this_00 = (Settings_TypedSetting_int__o *)(pUVar2->fields)._setting;
      if (__this_00 == (Settings_TypedSetting_int__o *)0x0) goto label_18223a37d;
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      Settings_TypedSetting_int___set_Value
                (__this_00,value_00,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    }
  }
  return;
}


// UI.ToggleGroupSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_ToggleGroupSettingElement__get_SupportedSettingTypes (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x182239020

System_Collections_Generic_HashSet_SettingType__o *
UI_ToggleGroupSettingElement__get_SupportedSettingTypes
          (UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (Il2CppMethodInitialized_184347151 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_SettingType_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_SettingType);
    Il2CppMethodInitialized_184347151 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             (MethodInfo_176DB60 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_ctor);
  if (__this_00 != (System_Collections_Generic_HashSet_SettingType__o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,4,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,2,
               (MethodInfo_1757D00 *)MethodInfo_System_Collections_Generic_HashSet_SettingType_Add);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.ToggleGroupSettingElement$$Setup
// il2cpp: void UI_ToggleGroupSettingElement__Setup (UI_ToggleGroupSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, const MethodInfo* method);
// 0x182238a80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182238bbf: nop 

void UI_ToggleGroupSettingElement__Setup
               (UI_ToggleGroupSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_String_o *tooltip,float elementWidth,float elementHeight,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Toggle__o *__this_00;
  UnityEngine_UI_Toggle_array *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_ToggleGroup_o *value;
  UnityEngine_UI_Toggle_o *item;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  System_String_o *message;
  MethodInfo *pMVar7;
  uint index;
  
  if (Il2CppMethodInitialized_184347152 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ToggleGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Toggle_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_184347152 = '\x01';
  }
  if (options != (System_String_array *)0x0) {
    if (options->max_length == 0) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      message = il2cpp_codegen_get_runtime_metadata(&"ToggleGroup cannot have 0 options.");
      System_ArgumentException___ctor_1a77cc0(__this_01,message,(MethodInfo *)0x0);
      pMVar7 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_ToggleGroupSettingElement_Setup);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar7);
    }
    (__this->fields)._options = options;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._options,options);
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Options",(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
        (__this->fields)._optionsPanel = pUVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._optionsPanel,pUVar5);
        pUVar5 = (__this->fields)._optionsPanel;
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          value = UnityEngine_GameObject__GetComponent_object_
                            (pUVar5,(MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_ToggleGroup);
          (__this->fields)._toggleGroup = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._toggleGroup,value);
          index = 0;
          while ((int)index < (int)options->max_length) {
            if ((uint)options->max_length <= index) {
label_182238d41:
              ThrowIndexOutOfRangeException();
            }
            __this_00 = (__this->fields)._toggles;
            item = UI_ToggleGroupSettingElement__CreateOptionToggle
                             (__this,options->m_Items[(int)index],index,style,elementWidth,elementHeight,
                              (MethodInfo *)0x0);
            pMVar7 = MethodInfo_System_Collections_Generic_List_Toggle_Add;
            if (__this_00 == (System_Collections_Generic_List_Toggle__o *)0x0) goto label_182238d3b;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (__this_00->fields)._items;
            if (pUVar3 == (UnityEngine_UI_Toggle_array *)0x0) goto label_182238d3b;
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pUVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              if ((uint)pUVar3->max_length <= uVar2) goto label_182238d41;
              pUVar3->m_Items[(int)uVar2] = item;
              Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
              index = index + 1;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                         (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
              index = index + 1;
            }
          }
          pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar4 = UnityEngine_Transform__Find(pUVar4,"Label",(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pUVar6 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar4,
                                    (MethodInfo_6651A0 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
                            (pUVar6,elementHeight,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
                  UI_BaseSettingElement__Setup
                            ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_182238d3b:
  ThrowNullReferenceException();
}


// UI.ToggleGroupSettingElement$$CreateOptionToggle
// il2cpp: UnityEngine_UI_Toggle_o* UI_ToggleGroupSettingElement__CreateOptionToggle (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, int32_t index, UI_ElementStyle_o* style, float width, float height, const MethodInfo* method);
// 0x1822382b0

UnityEngine_UI_Toggle_o *
UI_ToggleGroupSettingElement__CreateOptionToggle
          (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,int32_t index,
          UI_ElementStyle_o *style,float width,float height,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_00;
  UnityEngine_Vector2_o value;
  UI_ToggleGroupSettingElement___c__DisplayClass8_0_o *object;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_LayoutElement_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_UI_Toggle_o *__this_04;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this_05;
  UnityEngine_UI_ColorBlock_o *pUVar6;
  UnityEngine_UI_Image_o *pUVar7;
  UnityEngine_Color_Fields local_108;
  UnityEngine_UI_ColorBlock_o local_f8;
  UnityEngine_UI_ColorBlock_o local_98;
  
  if (Il2CppMethodInitialized_184347153 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ToggleGroupSettingElement_c__DisplayClass8_0_CreateOptionToggle_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ToggleGroupSettingElement_c__DisplayClass8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ToggleGroupOption");
    il2cpp_codegen_initialize_runtime_metadata(&"ToggleFilledColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkmark");
    Il2CppMethodInitialized_184347153 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ToggleGroupSettingElement_c__DisplayClass8_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_ToggleGroupSettingElement___c__DisplayClass8_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).option = option;
    Il2CppCodeGenWriteBarrier(&(object->fields).option,option);
    (object->fields).index = index;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar1 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    __this_01 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          (pSVar1,"Prefabs/Elements/ToggleGroupOption",false,
                           (MethodInfo_795F00 *)
                           MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._optionsPanel;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,parent,false,(MethodInfo *)0x0);
          pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              pUVar3 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar2,
                                  (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
              if (style != (UI_ElementStyle_o *)0x0) {
                pSVar1 = (style->fields).ThemePanel;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pUVar4 = UI_UIManager__GetThemeColor
                                   ((UnityEngine_Color_o *)&local_108,pSVar1,"DefaultSetting",
                                    "TextColor","DefaultPanel",(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                  local_108.r = (pUVar4->fields).r;
                  local_108.g = (pUVar4->fields).g;
                  local_108.b = (pUVar4->fields).b;
                  local_108.a = (pUVar4->fields).a;
                  (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                            (pUVar3,(UnityEngine_Color_o *)&local_108,
                             (pUVar3->klass->vtable)._23_set_color.method);
                  pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
                    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                      pUVar5 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
                      UI_BaseSettingElement__SetupLabel
                                ((UI_BaseSettingElement_o *)__this,pUVar5,(object->fields).option,
                                 (style->fields).FontSize,(MethodInfo *)0x0);
                      pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                        pUVar2 = UnityEngine_Transform__Find(pUVar2,"Background",(MethodInfo *)0x0);
                        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                          __this_02 = UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pUVar2,
                                                 (MethodInfo_6651A0 *)
                                                 MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                          if (__this_02 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                            pUVar2 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                              pUVar2 = UnityEngine_Transform__Find
                                                 (pUVar2,"Checkmark",(MethodInfo *)0x0);
                              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                __this_03 = UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar2,
                                                       (MethodInfo_6651A0 *)
                                                       MethodInfo_UnityEngine_Component_GetComponent_RectTransform
                                                      );
                                (*(__this_02->klass->vtable)._36_set_preferredWidth.methodPtr)
                                          (__this_02,width,
                                           (__this_02->klass->vtable)._36_set_preferredWidth.method);
                                (*(__this_02->klass->vtable)._38_set_preferredHeight.methodPtr)
                                          (__this_02,height,
                                           (__this_02->klass->vtable)._38_set_preferredHeight.method);
                                if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                                  value.fields.y = height * (__this->fields)._checkMarkSizeMultiplier;
                                  value.fields.x = width * (__this->fields)._checkMarkSizeMultiplier;
                                  UnityEngine_RectTransform__set_sizeDelta(__this_03,value,(MethodInfo *)0x0);
                                  __this_04 = UnityEngine_GameObject__GetComponent_object_
                                                        (__this_01,
                                                         (MethodInfo_6F5650 *)
                                                         MethodInfo_UnityEngine_GameObject_GetComponent_Toggle
                                                        );
                                  if (__this_04 != (UnityEngine_UI_Toggle_o *)0x0) {
                                    UnityEngine_UI_Toggle__set_group
                                              (__this_04,(__this->fields)._toggleGroup,(MethodInfo *)0x0);
                                    UnityEngine_UI_Toggle__set_isOn(__this_04,false,(MethodInfo *)0x0);
                                    __this_00 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                                (__this_04->fields).onValueChanged;
                                    __this_05 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *
                                                )il2cpp_codegen_object_new
                                                           ((Il2CppClass *)
                                                            TypeInfo_UnityEngine_Events_UnityAction_bool);
                                    UnityEngine_Events_UnityAction_bool____ctor
                                              (__this_05,(Il2CppObject *)object,
                                               (intptr_t)
                                               MethodInfo_UI_ToggleGroupSettingElement_c__DisplayClass8_0_CreateOptionToggle_b__0
                                               ,(MethodInfo *)0x0);
                                    if (__this_00 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                                      UnityEngine_Events_UnityEvent_Vector2___AddListener
                                                (__this_00,(UnityEngine_Events_UnityAction_T0__o *)__this_05,
                                                 (MethodInfo_EBBB50 *)
                                                 MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
                                      pUVar6 = UI_UIManager__GetThemeColorBlock
                                                         (&local_98,(style->fields).ThemePanel,
                                                          "DefaultSetting","Toggle",
                                                          "DefaultPanel",(MethodInfo *)0x0);
                                      local_f8.fields.m_NormalColor.fields.r =
                                           (pUVar6->fields).m_NormalColor.fields.r;
                                      local_f8.fields.m_NormalColor.fields.g =
                                           (pUVar6->fields).m_NormalColor.fields.g;
                                      local_f8.fields.m_NormalColor.fields.b =
                                           (pUVar6->fields).m_NormalColor.fields.b;
                                      local_f8.fields.m_NormalColor.fields.a =
                                           (pUVar6->fields).m_NormalColor.fields.a;
                                      local_f8.fields.m_HighlightedColor.fields.r =
                                           (pUVar6->fields).m_HighlightedColor.fields.r;
                                      local_f8.fields.m_HighlightedColor.fields.g =
                                           (pUVar6->fields).m_HighlightedColor.fields.g;
                                      local_f8.fields.m_HighlightedColor.fields.b =
                                           (pUVar6->fields).m_HighlightedColor.fields.b;
                                      local_f8.fields.m_HighlightedColor.fields.a =
                                           (pUVar6->fields).m_HighlightedColor.fields.a;
                                      local_f8.fields.m_PressedColor.fields.r =
                                           (pUVar6->fields).m_PressedColor.fields.r;
                                      local_f8.fields.m_PressedColor.fields.g =
                                           (pUVar6->fields).m_PressedColor.fields.g;
                                      local_f8.fields.m_PressedColor.fields.b =
                                           (pUVar6->fields).m_PressedColor.fields.b;
                                      local_f8.fields.m_PressedColor.fields.a =
                                           (pUVar6->fields).m_PressedColor.fields.a;
                                      local_f8.fields.m_SelectedColor.fields.r =
                                           (pUVar6->fields).m_SelectedColor.fields.r;
                                      local_f8.fields.m_SelectedColor.fields.g =
                                           (pUVar6->fields).m_SelectedColor.fields.g;
                                      local_f8.fields.m_SelectedColor.fields.b =
                                           (pUVar6->fields).m_SelectedColor.fields.b;
                                      local_f8.fields.m_SelectedColor.fields.a =
                                           (pUVar6->fields).m_SelectedColor.fields.a;
                                      local_f8.fields.m_DisabledColor.fields.r =
                                           (pUVar6->fields).m_DisabledColor.fields.r;
                                      local_f8.fields.m_DisabledColor.fields.g =
                                           (pUVar6->fields).m_DisabledColor.fields.g;
                                      local_f8.fields.m_DisabledColor.fields.b =
                                           (pUVar6->fields).m_DisabledColor.fields.b;
                                      local_f8.fields.m_DisabledColor.fields.a =
                                           (pUVar6->fields).m_DisabledColor.fields.a;
                                      local_f8.fields.m_ColorMultiplier = (pUVar6->fields).m_ColorMultiplier;
                                      local_f8.fields.m_FadeDuration = (pUVar6->fields).m_FadeDuration;
                                      UnityEngine_UI_Selectable__set_colors
                                                ((UnityEngine_UI_Selectable_o *)__this_04,&local_f8,
                                                 (MethodInfo *)0x0);
                                      pUVar7 = UnityEngine_Component__GetComponent_object_
                                                         ((UnityEngine_Component_o *)__this_03,
                                                          (MethodInfo_6651A0 *)
                                                          MethodInfo_UnityEngine_Component_GetComponent_Image)
                                      ;
                                      pUVar4 = UI_UIManager__GetThemeColor
                                                         ((UnityEngine_Color_o *)&local_108,
                                                          (style->fields).ThemePanel,"DefaultSetting",
                                                          "ToggleFilledColor","DefaultPanel",
                                                          (MethodInfo *)0x0);
                                      if (pUVar7 != (UnityEngine_UI_Image_o *)0x0) {
                                        local_108.r = (pUVar4->fields).r;
                                        local_108.g = (pUVar4->fields).g;
                                        local_108.b = (pUVar4->fields).b;
                                        local_108.a = (pUVar4->fields).a;
                                        (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                                                  (pUVar7,(UnityEngine_Color_o *)&local_108,
                                                   (pUVar7->klass->vtable)._23_set_color.method);
                                        return __this_04;
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
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ToggleGroupSettingElement$$OnValueChanged
// il2cpp: void UI_ToggleGroupSettingElement__OnValueChanged (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, int32_t index, bool value, const MethodInfo* method);
// 0x182238960

void UI_ToggleGroupSettingElement__OnValueChanged
               (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,int32_t index,bool value,
               MethodInfo *method)

{
  byte bVar1;
  Settings_TypedSetting_int__o *__this_00;
  Settings_TypedSetting_T__o *__this_01;
  
  if (Il2CppMethodInitialized_184347154 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347154 = '\x01';
  }
  if (value) {
    if ((__this->fields)._settingType == 4) {
      __this_01 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
      if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
           ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          Settings_TypedSetting_object___set_Value
                    (__this_01,(Il2CppObject *)option,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_StringSetting);
      }
label_182238a63:
      ThrowNullReferenceException();
    }
    if ((__this->fields)._settingType == 2) {
      __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
      if (__this_00 == (Settings_TypedSetting_int__o *)0x0) goto label_182238a63;
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Settings_IntSetting);
      }
      Settings_TypedSetting_int___set_Value
                (__this_00,index,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    }
  }
  return;
}


// UI.ToggleGroupSettingElement$$SyncElement
// il2cpp: void UI_ToggleGroupSettingElement__SyncElement (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x182238d90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182238f19: jmp 0x182238ee2
// asm:   0x182238f24: mov edx, ebx
// asm:   0x182238f26: jmp 0x182238e67

void UI_ToggleGroupSettingElement__SyncElement(UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  Settings_BaseSetting_o *pSVar2;
  System_String_array *pSVar3;
  bool bVar4;
  UnityEngine_UI_Toggle_o *__this_01;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_02;
  System_String_o *pSVar5;
  MethodInfo *lastManagedFrame;
  System_Collections_Generic_List_Toggle__o *__this_03;
  uint index;
  
  if (Il2CppMethodInitialized_184347155 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Toggle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347155 = '\x01';
  }
  __this_00 = (__this->fields)._toggleGroup;
  if (__this_00 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
    UnityEngine_UI_ToggleGroup__SetAllTogglesOff(__this_00,true,(MethodInfo *)0x0);
    if ((__this->fields)._settingType == 4) {
      pSVar2 = (__this->fields)._setting;
      if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
        }
        index = 0;
        pSVar5 = (*(uint64_t *)((char *)pSVar2 + 0x20));
        pSVar3 = (__this->fields)._options;
        while (pSVar3 != (System_String_array *)0x0) {
          if ((int)pSVar3->max_length <= (int)index) {
            klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
            __this_02 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
            pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Option not found");
            System_ArgumentOutOfRangeException___ctor_1a78320(__this_02,pSVar5,(MethodInfo *)0x0);
            lastManagedFrame =
                 il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_ToggleGroupSettingElement_FindOptionIndex)
            ;
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
          }
          pSVar3 = (__this->fields)._options;
          if (pSVar3 == (System_String_array *)0x0) break;
          if ((uint)pSVar3->max_length <= index) {
            ThrowIndexOutOfRangeException();
          }
          bVar4 = System_String__op_Equality(pSVar3->m_Items[(int)index],pSVar5,(MethodInfo *)0x0);
          if (bVar4) {
            __this_03 = (__this->fields)._toggles;
            if (__this_03 != (System_Collections_Generic_List_Toggle__o *)0x0) goto label_182238e67;
            break;
          }
          index = index + 1;
          pSVar3 = (__this->fields)._options;
        }
      }
    }
    else {
      if ((__this->fields)._settingType != 2) {
        return;
      }
      pSVar2 = (__this->fields)._setting;
      if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if (((pSVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
        }
        __this_03 = (__this->fields)._toggles;
        if (__this_03 != (System_Collections_Generic_List_Toggle__o *)0x0) {
          index = *(uint *)((longlong)&(*(uint64_t *)((char *)pSVar2 + 0x18)) + 4);
label_182238e67:
          __this_01 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)__this_03,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_Toggle_get_Item);
          if (__this_01 != (UnityEngine_UI_Toggle_o *)0x0) {
            UnityEngine_UI_Toggle__set_isOn(__this_01,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ToggleGroupSettingElement$$FindOptionIndex
// il2cpp: int32_t UI_ToggleGroupSettingElement__FindOptionIndex (UI_ToggleGroupSettingElement_o* __this, System_String_o* option, const MethodInfo* method);
// 0x182238890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822388f5: jmp 0x1822388b6

int32_t UI_ToggleGroupSettingElement__FindOptionIndex
                  (UI_ToggleGroupSettingElement_o *__this,System_String_o *option,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  Il2CppClass *klass;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_String_o *paramName;
  MethodInfo *lastManagedFrame;
  uint uVar3;
  
  uVar3 = 0;
  pSVar1 = (__this->fields)._options;
  while (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length <= (int)uVar3) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentOutOfRangeException);
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
      paramName = il2cpp_codegen_get_runtime_metadata(&"Option not found");
      System_ArgumentOutOfRangeException___ctor_1a78320(__this_00,paramName,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_ToggleGroupSettingElement_FindOptionIndex);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    pSVar1 = (__this->fields)._options;
    if (pSVar1 == (System_String_array *)0x0) break;
    if ((uint)pSVar1->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    bVar2 = System_String__op_Equality(pSVar1->m_Items[(int)uVar3],option,(MethodInfo *)0x0);
    if (bVar2) {
      return uVar3;
    }
    uVar3 = uVar3 + 1;
    pSVar1 = (__this->fields)._options;
  }
  ThrowNullReferenceException();
}


// UI.ToggleGroupSettingElement$$.ctor
// il2cpp: void UI_ToggleGroupSettingElement___ctor (UI_ToggleGroupSettingElement_o* __this, const MethodInfo* method);
// 0x182238fa0

void UI_ToggleGroupSettingElement___ctor(UI_ToggleGroupSettingElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Toggle__o *__this_00;
  
  if (Il2CppMethodInitialized_184347156 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Toggle_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Toggle);
    Il2CppMethodInitialized_184347156 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Toggle);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Toggle_ctor);
  (__this->fields)._toggles = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._toggles,__this_00);
  (__this->fields)._checkMarkSizeMultiplier = 0.67;
  UI_BaseSettingElement___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


