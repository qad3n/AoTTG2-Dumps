// Type: UI.MultiSelectDropdownElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiSelectDropdownElement.cs
// Prior real C# source: none
// --------------------------------

// UI.MultiSelectDropdownElement.<>c__DisplayClass22_0$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass22_0___ctor (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x4396210

void UI_MultiSelectDropdownElement___c__DisplayClass22_0___ctor
               (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement.<>c__DisplayClass22_0$$<CreateOptionToggle>b__0
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass22_0___CreateOptionToggle_b__0 (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o* __this, bool value, const MethodInfo* method);
// 0x43966b0

void UI_MultiSelectDropdownElement___c__DisplayClass22_0___CreateOptionToggle_b__0
               (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o *__this,bool_conflict value,
               MethodInfo *method)

{
  int32_t item;
  UI_MultiSelectDropdownElement_o *pUVar1;
  Settings_HashSetSetting_int__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_UI_Toggle_o *__this_01;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MultiSelectDropdownElement_o *)0x0) {
    item = (__this->fields).index;
    if (g_data_057ae2cc == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Remove);
      g_data_057ae2cc = '\x01';
    }
    __this_00 = (pUVar1->fields)._hashSetSetting;
    __this = (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o *)0x0;
    if (__this_00 != (Settings_HashSetSetting_int__o *)0x0) {
      if ((char)value == '\0') {
        Settings_HashSetSetting_int___Remove(__this_00,item,MethodInfo_Void_Remove);
        pUVar2 = (pUVar1->fields)._onSelectionChanged;
      }
      else {
        Settings_HashSetSetting_int___Add(__this_00,item,MethodInfo_Void_Add);
        pUVar2 = (pUVar1->fields)._onSelectionChanged;
      }
      if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
        return;
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (__this->fields).toggle;
  if (__this_01 == (UnityEngine_UI_Toggle_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  UnityEngine_UI_Toggle__set_isOn
            (__this_01,(uint)(*(char *)&(__this_01->fields).onValueChanged == '\0'),(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement.<>c__DisplayClass22_0$$<CreateOptionToggle>b__1
// il2cpp: void UI_MultiSelectDropdownElement___c__DisplayClass22_0___CreateOptionToggle_b__1 (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x4396760

void UI_MultiSelectDropdownElement___c__DisplayClass22_0___CreateOptionToggle_b__1
               (UI_MultiSelectDropdownElement___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *__this_00;
  
  __this_00 = (__this->fields).toggle;
  if (__this_00 != (UnityEngine_UI_Toggle_o *)0x0) {
    UnityEngine_UI_Toggle__set_isOn
              (__this_00,(uint)(*(char *)&(__this_00->fields).onValueChanged == '\0'),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25___ctor (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x43963d0

void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25___ctor
               (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$System.IDisposable.Dispose
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_IDisposable_Dispose (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x4396790

void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_IDisposable_Dispose
               (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  return;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$MoveNext
// il2cpp: bool UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__MoveNext (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x43967a0

bool_conflict
UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__MoveNext
          (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MultiSelectDropdownElement_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Scrollbar_o *pUVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *pUVar5;
  UI_MultiSelectDropdownElement_o *__this_02;
  UnityEngine_Vector3_Fields UVar6;
  
  __this_02 = (UI_MultiSelectDropdownElement_o *)__this;
  if (g_data_057ae2d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this_02 = (UI_MultiSelectDropdownElement_o *)&TypeInfo_WaitForEndOfFrame;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae2d1 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (__this_00 != (UI_MultiSelectDropdownElement_o *)0x0) {
      pUVar2 = (__this_00->fields)._scrollBar;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pUVar2 = (__this_00->fields)._scrollBar;
        __this_02 = (UI_MultiSelectDropdownElement_o *)0x0;
        if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_04396981;
        UnityEngine_UI_Scrollbar__set_value(pUVar2,(__this_00->fields)._currentScrollValue,(MethodInfo *)0x0);
      }
      return 0;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        (__this->fields).__1__state = -1;
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar4;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar4 >> 8),1);
      }
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 != (UI_MultiSelectDropdownElement_o *)0x0) {
      UI_MultiSelectDropdownElement__SetOptionsPosition(__this_00,method);
      __this_02 = (UI_MultiSelectDropdownElement_o *)(__this_00->fields)._optionsPanel;
      if ((__this_02 != (UI_MultiSelectDropdownElement_o *)0x0) &&
         (pUVar5 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetAsLastSibling(pUVar5,(MethodInfo *)0x0);
        __this_02 = __this_00;
        pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          UVar6 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
          (__this_00->fields)._lastKnownPosition.fields = UVar6;
          __this_01 = (__this_00->fields)._optionsPanel;
          __this_02 = (UI_MultiSelectDropdownElement_o *)0x0;
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
            pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
            UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar4;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
            (__this->fields).__1__state = 2;
            return (bool_conflict)CONCAT71((int7)((ulong)pIVar4 >> 8),1);
          }
        }
      }
    }
  }
label_04396981:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(__this_02->fields).m_CancellationTokenSource;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x4396990

Il2CppObject *
UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_Collections_IEnumerator_Reset (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x43969a0

void UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_Collections_IEnumerator_Reset
               (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.MultiSelectDropdownElement.<WaitAndEnableOptions>d__25$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_Collections_IEnumerator_get_Current (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o* __this, const MethodInfo* method);
// 0x43969e0

Il2CppObject *
UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25__System_Collections_IEnumerator_get_Current
          (UI_MultiSelectDropdownElement__WaitAndEnableOptions_d__25_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MultiSelectDropdownElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_MultiSelectDropdownElement__get_SupportedSettingTypes (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4394560

System_Collections_Generic_HashSet_SettingType__o *
UI_MultiSelectDropdownElement__get_SupportedSettingTypes
          (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_SettingType__o *__this_00;
  
  if (g_data_057ae2c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae2c4 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_Settings_SettingType);
  return __this_00;
}


// UI.MultiSelectDropdownElement$$Setup
// il2cpp: void UI_MultiSelectDropdownElement__Setup (UI_MultiSelectDropdownElement_o* __this, Settings_HashSetSetting_int__o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onSelectionChanged, const MethodInfo* method);
// 0x43945c0

void UI_MultiSelectDropdownElement__Setup
               (UI_MultiSelectDropdownElement_o *__this,Settings_HashSetSetting_int__o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_String_o *tooltip,float elementWidth,float elementHeight,float optionsWidth,
               float maxScrollHeight,UnityEngine_Events_UnityAction_o *onSelectionChanged,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  System_String_Fields __this_00;
  System_Collections_Generic_List_CanvasGroup__o *__this_01;
  UnityEngine_Events_UnityEvent_o *__this_02;
  System_Collections_Generic_Dictionary_int__object__o *__this_03;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_UI_ColorBlock_o value_01;
  UnityEngine_UI_ColorBlock_o value_02;
  UnityEngine_UI_ColorBlock_o value_03;
  UnityEngine_UI_ColorBlock_o *pUVar7;
  uint uVar8;
  bool_conflict bVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  Il2CppObject *pIVar12;
  Il2CppClass *pIVar13;
  UnityEngine_UI_Selectable_o *pUVar14;
  UnityEngine_RectTransform_o *pUVar15;
  UnityEngine_UI_ScrollRect_o *__this_04;
  UnityEngine_UI_Scrollbar_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  undefined8 uVar18;
  System_ArgumentException_o *__this_05;
  System_String_o *pSVar19;
  System_String_array *pSVar20;
  System_String_array *__this_06;
  System_String_array *pSVar21;
  UnityEngine_UI_Text_o *__this_07;
  System_String_array *__this_08;
  UnityEngine_UI_Graphic_o *value_04;
  System_String_array *__this_09;
  System_String_c *pSVar22;
  System_String_array *pSVar23;
  UnityEngine_UI_Selectable_o *__this_10;
  Il2CppClass *pIVar24;
  System_String_o *pSVar25;
  undefined4 extraout_EDX;
  MethodInfo_255A0F0 **unaff_RBP;
  System_String_o **ppSVar26;
  System_ArgumentException_o *pSVar27;
  long *plVar28;
  UnityEngine_UI_Selectable_o *pUVar29;
  MethodInfo *method_00;
  Il2CppClass *__this_11;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o value_05;
  UnityEngine_Color_o UVar35;
  float fStackY_378;
  float fStackY_374;
  float fStackY_368;
  float fStackY_364;
  UnityEngine_UI_ColorBlock_o UStack_210;
  System_ArgumentException_o *pSStack_1b8;
  Il2CppClass *pIStack_1b0;
  UI_MultiSelectDropdownElement_o *pUStack_1a8;
  Settings_HashSetSetting_int__o *pSStack_1a0;
  UI_ElementStyle_o *pUStack_198;
  UnityEngine_UI_Scrollbar_o *pUStack_190;
  float local_118;
  UnityEngine_UI_ColorBlock_o local_88;
  
  pSVar19 = title;
  pSVar23 = options;
  method_00 = (MethodInfo *)tooltip;
  fVar32 = elementHeight;
  if (g_data_057ae2c5 == '\0') {
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394617;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394623;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439462f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439463b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Scrollbar_GetComponent_Scrollbar);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394647;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394653;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439465f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439466b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponent_ScrollRect);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394677;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394683;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_0);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439468f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439469b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43946a7;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43946b3;
    il2cpp_runtime_helper_023445d0(&"DropdownTextColor");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43946bf;
    il2cpp_runtime_helper_023445d0(&"Label");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43946cb;
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43946d7;
    il2cpp_runtime_helper_023445d0(&"DropdownBorderColor");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43946e3;
    il2cpp_runtime_helper_023445d0(&"DropdownScrollbarBackgroundColor");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43946ef;
    il2cpp_runtime_helper_023445d0(&"DropdownScrollbar");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43946fb;
    il2cpp_runtime_helper_023445d0(&"Dropdown/Mask");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394707;
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394713;
    il2cpp_runtime_helper_023445d0(&"Image");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439471f;
    il2cpp_runtime_helper_023445d0(&"Scrollbar");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439472b;
    il2cpp_runtime_helper_023445d0(&"Dropdown/SelectedButton");
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394737;
    il2cpp_runtime_helper_023445d0(&"Options");
    g_data_057ae2c5 = '\x01';
  }
  uVar8 = (uint)pSVar19;
  __this_11 = (Il2CppClass *)tooltip;
  if (options != (System_String_array *)0x0) {
    if (options->max_length == 0) goto label_04395151;
    (__this->fields)._hashSetSetting = setting;
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394770;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._hashSetSetting,setting);
    (__this->fields)._onSelectionChanged = onSelectionChanged;
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394780;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._onSelectionChanged,onSelectionChanged);
    (__this->fields)._options = options;
    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394790;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._options,options);
    unaff_RBP = (MethodInfo_255A0F0 **)onSelectionChanged;
    if (style != (UI_ElementStyle_o *)0x0) {
      (__this->fields)._themePanel = (style->fields).ThemePanel;
      pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43947b0;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._themePanel);
      pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43947ba;
      pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      unaff_RBP = (MethodInfo_255A0F0 **)onSelectionChanged;
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        uVar8 = 0x55c63b0;
        pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43947d7;
        pUVar10 = UnityEngine_Transform__Find(pUVar10,"Dropdown/Mask",(MethodInfo *)0x0);
        unaff_RBP = (MethodInfo_255A0F0 **)onSelectionChanged;
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43947ea;
          pUVar11 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
          ppUVar1 = &(__this->fields)._optionsPanel;
          (__this->fields)._optionsPanel = pUVar11;
          pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43947fd;
          il2cpp_runtime_helper_022b4080(ppUVar1);
          pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394807;
          pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          unaff_RBP = (MethodInfo_255A0F0 **)ppUVar1;
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            uVar8 = 0x55c63b8;
            pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394829;
            pUVar10 = UnityEngine_Transform__Find(pUVar10,"Dropdown/SelectedButton",(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439483c;
              pUVar11 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
              setting = (Settings_HashSetSetting_int__o *)&(__this->fields)._selectedButton;
              (__this->fields)._selectedButton = pUVar11;
              pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439484f;
              il2cpp_runtime_helper_022b4080(setting);
              pUVar11 = (__this->fields)._selectedButton;
              if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394863;
                pUVar10 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
                if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                  uVar8 = 0x55cbce0;
                  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394880;
                  pUVar10 = UnityEngine_Transform__Find(pUVar10,"Label",(MethodInfo *)0x0);
                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394893;
                    pUVar11 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
                    ppUVar2 = &(__this->fields)._selectedButtonLabel;
                    (__this->fields)._selectedButtonLabel = pUVar11;
                    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43948a6;
                    il2cpp_runtime_helper_022b4080(ppUVar2,pUVar11);
                    uVar8 = (style->fields).FontSize;
                    pSVar23 = (System_String_array *)0x0;
                    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43948be;
                    UI_BaseSettingElement__SetupLabel
                              ((UI_BaseSettingElement_o *)__this,(__this->fields)._selectedButtonLabel,title,
                               uVar8,(MethodInfo *)0x0);
                    pUVar11 = (__this->fields)._selectedButton;
                    unaff_RBP = (MethodInfo_255A0F0 **)ppUVar2;
                    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                      pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43948e7;
                      pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Button_GetComponent_Button);
                      if (pIVar12 != (Il2CppObject *)0x0) {
                        __this_11 = pIVar12[0x10].klass;
                        pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394906;
                        unaff_RBP = (MethodInfo_255A0F0 **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                        uVar8 = 0;
                        pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394920;
                        UnityEngine_Events_UnityAction___ctor();
                        if (__this_11 != (Il2CppClass *)0x0) {
                          pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394936;
                          UnityEngine_Events_UnityEvent__AddListener
                                    ((UnityEngine_Events_UnityEvent_o *)__this_11,
                                     (UnityEngine_Events_UnityAction_o *)unaff_RBP,(MethodInfo *)0x0);
                          if (*(UnityEngine_GameObject_o **)setting != (UnityEngine_GameObject_o *)0x0) {
                            unaff_RBP = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
                            pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394952;
                            pIVar12 = UnityEngine_GameObject__GetComponent_object_
                                                (*(UnityEngine_GameObject_o **)setting,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                            if (pIVar12 != (Il2CppObject *)0x0) {
                              pIVar24 = pIVar12->klass;
                              pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394974;
                              (*pIVar24->vtable[0x24].methodPtr)
                                        (elementWidth,pIVar12,pIVar24->vtable[0x24].method);
                              uVar8 = (uint)pIVar24;
                              if (*(UnityEngine_GameObject_o **)setting != (UnityEngine_GameObject_o *)0x0) {
                                pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394989;
                                pIVar12 = UnityEngine_GameObject__GetComponent_object_
                                                    (*(UnityEngine_GameObject_o **)setting,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                if (pIVar12 != (Il2CppObject *)0x0) {
                                  pIVar24 = pIVar12->klass;
                                  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43949ab;
                                  (*pIVar24->vtable[0x26].methodPtr)
                                            (elementHeight,pIVar12,pIVar24->vtable[0x26].method);
                                  uVar8 = (uint)pIVar24;
                                  if (0 < (int)options->max_length) {
                                    pIVar13 = (Il2CppClass *)(options->max_length & 0xffffffff);
                                    __this_11 = (Il2CppClass *)0x0;
                                    do {
                                      uVar8 = (uint)pIVar24;
                                      if (pIVar13 <= __this_11) goto label_0439514c;
                                      pSVar23 = (System_String_array *)(style->fields).ThemePanel;
                                      pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43949f1;
                                      fVar32 = elementHeight;
                                      UI_MultiSelectDropdownElement__CreateOptionToggle
                                                (__this,options->m_Items[(long)__this_11],(int32_t)__this_11,
                                                 optionsWidth,elementHeight,(style->fields).FontSize,
                                                 (System_String_o *)pSVar23,method_00);
                                      __this_11 = (Il2CppClass *)((long)&(__this_11->_1).image + 1);
                                      uVar8 = (uint)options->max_length;
                                      pIVar13 = (Il2CppClass *)(ulong)uVar8;
                                      pIVar24 = (Il2CppClass *)(long)(int)uVar8;
                                    } while ((long)__this_11 < (long)pIVar24);
                                  }
                                  if (*(UnityEngine_GameObject_o **)setting != (UnityEngine_GameObject_o *)0x0
                                     ) {
                                    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394a1b;
                                    pUVar14 = (UnityEngine_UI_Selectable_o *)
                                              UnityEngine_GameObject__GetComponent_object_
                                                        (*(UnityEngine_GameObject_o **)setting,MethodInfo_Button_GetComponent_Button);
                                    unaff_RBP = (MethodInfo_255A0F0 **)(style->fields).ThemePanel;
                                    if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
                                      pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394a3a;
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394a6c;
                                    pSVar19 = "Dropdown";
                                    pSVar23 = "DefaultPanel";
                                    UI_UIManager__GetThemeColorBlock
                                              (&local_88,(System_String_o *)unaff_RBP,"DefaultSetting",
                                               "Dropdown",(System_String_o *)"DefaultPanel",(MethodInfo *)0x0)
                                    ;
                                    uVar8 = (uint)pSVar19;
                                    __this_11 = (Il2CppClass *)&"DefaultSetting";
                                    fVar32 = local_88.fields.m_HighlightedColor.fields.r;
                                    if (pUVar14 != (UnityEngine_UI_Selectable_o *)0x0) {
                                      pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394b2c;
                                      value_02.fields.m_NormalColor.fields.b =
                                           local_88.fields.m_NormalColor.fields.b;
                                      value_02.fields.m_NormalColor.fields.a =
                                           local_88.fields.m_NormalColor.fields.a;
                                      value_02.fields.m_NormalColor.fields.r =
                                           local_88.fields.m_NormalColor.fields.r;
                                      value_02.fields.m_NormalColor.fields.g =
                                           local_88.fields.m_NormalColor.fields.g;
                                      value_02.fields.m_HighlightedColor.fields.r =
                                           local_88.fields.m_HighlightedColor.fields.r;
                                      value_02.fields.m_HighlightedColor.fields.g =
                                           local_88.fields.m_HighlightedColor.fields.g;
                                      value_02.fields.m_HighlightedColor.fields.b =
                                           local_88.fields.m_HighlightedColor.fields.b;
                                      value_02.fields.m_HighlightedColor.fields.a =
                                           local_88.fields.m_HighlightedColor.fields.a;
                                      value_02.fields.m_PressedColor.fields.r =
                                           local_88.fields.m_PressedColor.fields.r;
                                      value_02.fields.m_PressedColor.fields.g =
                                           local_88.fields.m_PressedColor.fields.g;
                                      value_02.fields.m_PressedColor.fields.b =
                                           local_88.fields.m_PressedColor.fields.b;
                                      value_02.fields.m_PressedColor.fields.a =
                                           local_88.fields.m_PressedColor.fields.a;
                                      value_02.fields.m_SelectedColor.fields.r =
                                           local_88.fields.m_SelectedColor.fields.r;
                                      value_02.fields.m_SelectedColor.fields.g =
                                           local_88.fields.m_SelectedColor.fields.g;
                                      value_02.fields.m_SelectedColor.fields.b =
                                           local_88.fields.m_SelectedColor.fields.b;
                                      value_02.fields.m_SelectedColor.fields.a =
                                           local_88.fields.m_SelectedColor.fields.a;
                                      value_02.fields.m_DisabledColor.fields.r =
                                           local_88.fields.m_DisabledColor.fields.r;
                                      value_02.fields.m_DisabledColor.fields.g =
                                           local_88.fields.m_DisabledColor.fields.g;
                                      value_02.fields.m_DisabledColor.fields.b =
                                           local_88.fields.m_DisabledColor.fields.b;
                                      value_02.fields.m_DisabledColor.fields.a =
                                           local_88.fields.m_DisabledColor.fields.a;
                                      value_02.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                                      value_02.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                                      UnityEngine_UI_Selectable__set_colors
                                                (pUVar14,value_02,(MethodInfo *)0x0);
                                      if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                                        pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394b4f;
                                        pIVar12 = UnityEngine_GameObject__GetComponent_object_
                                                            (*ppUVar2,MethodInfo_Text_GetComponent_Text);
                                        pSVar23 = (System_String_array *)0x0;
                                        pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394b77;
                                        pSVar20 = "DefaultPanel";
                                        UVar35 = UI_UIManager__GetThemeColor
                                                           ((style->fields).ThemePanel,"DefaultSetting",
                                                            "DropdownTextColor",(System_String_o *)"DefaultPanel",
                                                            (MethodInfo *)0x0);
                                        uVar8 = (uint)pSVar20;
                                        fVar32 = UVar35.fields.b;
                                        __this_11 = (Il2CppClass *)&"DropdownTextColor";
                                        if (pIVar12 != (Il2CppObject *)0x0) {
                                          pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394b93;
                                          (*pIVar12->klass->vtable[0x17].methodPtr)(UVar35.fields.r,pIVar12);
                                          if (*(UnityEngine_GameObject_o **)setting !=
                                              (UnityEngine_GameObject_o *)0x0) {
                                            pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394ba6;
                                            pUVar10 = UnityEngine_GameObject__get_transform
                                                                (*(UnityEngine_GameObject_o **)setting,
                                                                 (MethodInfo *)0x0);
                                            unaff_RBP = (MethodInfo_255A0F0 **)ppUVar1;
                                            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                              uVar8 = 0x55ca0b8;
                                              pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394bc8;
                                              pUVar10 = UnityEngine_Transform__Find
                                                                  (pUVar10,"Image",(MethodInfo *)0x0);
                                              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394be3;
                                                pIVar12 = UnityEngine_Component__GetComponent_object_
                                                                    ((UnityEngine_Component_o *)pUVar10,
                                                                     MethodInfo_Image_GetComponent_Image);
                                                pSVar23 = (System_String_array *)0x0;
                                                pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394c0a;
                                                pSVar20 = "DefaultPanel";
                                                UVar35 = UI_UIManager__GetThemeColor
                                                                   ((style->fields).ThemePanel,"DefaultSetting",
                                                                    "DropdownTextColor",
                                                                    (System_String_o *)"DefaultPanel",
                                                                    (MethodInfo *)0x0);
                                                uVar8 = (uint)pSVar20;
                                                fVar32 = UVar35.fields.b;
                                                if (pIVar12 != (Il2CppObject *)0x0) {
                                                  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394c26;
                                                  (*pIVar12->klass->vtable[0x17].methodPtr)
                                                            (UVar35.fields.r,pIVar12);
                                                  if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394c3a;
                                                    pUVar10 = UnityEngine_GameObject__get_transform
                                                                        (*ppUVar1,(MethodInfo *)0x0);
                                                    __this_11 = (Il2CppClass *)&"DefaultSetting";
                                                    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                      pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394c5e;
                                                      pUVar10 = UnityEngine_Transform__Find
                                                                          (pUVar10,"Options",
                                                                           (MethodInfo *)0x0);
                                                      setting = (Settings_HashSetSetting_int__o *)
                                                                &"Options";
                                                      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                        pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394c79;
                                                        pIVar12 = UnityEngine_Component__GetComponent_object_
                                                                            ((UnityEngine_Component_o *)
                                                                             pUVar10,MethodInfo_Image_GetComponent_Image);
                                                        pSVar23 = (System_String_array *)0x0;
                                                        pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394ca0;
                                                        pSVar20 = "DefaultPanel";
                                                        UVar35 = UI_UIManager__GetThemeColor
                                                                           ((style->fields).ThemePanel,
                                                                            "DefaultSetting","DropdownBorderColor",
                                                                            (System_String_o *)"DefaultPanel",
                                                                            (MethodInfo *)0x0);
                                                        uVar8 = (uint)pSVar20;
                                                        fVar32 = UVar35.fields.b;
                                                        if (pIVar12 != (Il2CppObject *)0x0) {
                                                          pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                        0x4394cbc;
                                                          (*pIVar12->klass->vtable[0x17].methodPtr)
                                                                    (UVar35.fields.r);
                                                          pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                        0x4394cc3;
                                                          UnityEngine_Canvas__ForceUpdateCanvases
                                                                    ((MethodInfo *)0x0);
                                                          if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                            pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                          0x4394cd7;
                                                            pUVar10 = UnityEngine_GameObject__get_transform
                                                                                (*ppUVar1,(MethodInfo *)0x0);
                                                            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                              pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                            0x4394ced;
                                                              pUVar10 = UnityEngine_Transform__Find
                                                                                  (pUVar10,"Options",
                                                                                   (MethodInfo *)0x0);
                                                              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                                uVar8 = 0x559c920;
                                                                pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                              0x4394d08;
                                                                pUVar15 = (UnityEngine_RectTransform_o *)
                                                                                                                                                    
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar10,
                                                                  MethodInfo_RectTransform_GetComponent_RectTransform);
                                                       if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                                         pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394d1b
                                                         ;
                                                         UVar6 = UnityEngine_RectTransform__get_sizeDelta
                                                                           (pUVar15,(MethodInfo *)0x0);
                                                         local_118 = maxScrollHeight;
                                                         if (maxScrollHeight < UVar6.fields.y) {
label_04394db9:
                                                           if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                             pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                           0x4394dcd;
                                                             pUVar10 = UnityEngine_GameObject__get_transform
                                                                                 (*ppUVar1,(MethodInfo *)0x0);
                                                             if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                               uVar8 = 0x55d1fd0;
                                                               pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                             0x4394dea;
                                                               pUVar10 = UnityEngine_Transform__Find
                                                                                   (pUVar10,"Scrollbar",
                                                                                    (MethodInfo *)0x0);
                                                               if (pUVar10 != (UnityEngine_Transform_o *)0x0)
                                                               {
                                                                 pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                               0x4394e05;
                                                                 pUVar16 = (UnityEngine_UI_Scrollbar_o *)
                                                                                                                                                      
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar10,
                                                                  MethodInfo_Scrollbar_GetComponent_Scrollbar);
                                                       setting = (Settings_HashSetSetting_int__o *)
                                                                 &(__this->fields)._scrollBar;
                                                       (__this->fields)._scrollBar = pUVar16;
                                                       pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394e18;
                                                       il2cpp_runtime_helper_022b4080(setting,pUVar16);
                                                       unaff_RBP = (MethodInfo_255A0F0 **)
                                                                   (__this->fields)._scrollBar;
                                                       pSVar19 = (style->fields).ThemePanel;
                                                       if (*(int *)((long)&(TypeInfo_UIManager->fields).
                                                                           m_TargetGraphic + 4) == 0) {
                                                         pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394e38
                                                         ;
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394e63;
                                                       pSVar25 = "DropdownScrollbar";
                                                       pSVar23 = "DefaultPanel";
                                                       UI_UIManager__GetThemeColorBlock
                                                                 (&local_88,pSVar19,"DefaultSetting","DropdownScrollbar",
                                                                  (System_String_o *)"DefaultPanel",
                                                                  (MethodInfo *)0x0);
                                                       uVar8 = (uint)pSVar25;
                                                       fVar32 = local_88.fields.m_HighlightedColor.fields.r;
                                                       if ((UnityEngine_UI_Scrollbar_o *)unaff_RBP !=
                                                           (UnityEngine_UI_Scrollbar_o *)0x0) {
                                                         pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394f23
                                                         ;
                                                         value_03.fields.m_NormalColor.fields.b =
                                                              local_88.fields.m_NormalColor.fields.b;
                                                         value_03.fields.m_NormalColor.fields.a =
                                                              local_88.fields.m_NormalColor.fields.a;
                                                         value_03.fields.m_NormalColor.fields.r =
                                                              local_88.fields.m_NormalColor.fields.r;
                                                         value_03.fields.m_NormalColor.fields.g =
                                                              local_88.fields.m_NormalColor.fields.g;
                                                         value_03.fields.m_HighlightedColor.fields.r =
                                                              local_88.fields.m_HighlightedColor.fields.r;
                                                         value_03.fields.m_HighlightedColor.fields.g =
                                                              local_88.fields.m_HighlightedColor.fields.g;
                                                         value_03.fields.m_HighlightedColor.fields.b =
                                                              local_88.fields.m_HighlightedColor.fields.b;
                                                         value_03.fields.m_HighlightedColor.fields.a =
                                                              local_88.fields.m_HighlightedColor.fields.a;
                                                         value_03.fields.m_PressedColor.fields.r =
                                                              local_88.fields.m_PressedColor.fields.r;
                                                         value_03.fields.m_PressedColor.fields.g =
                                                              local_88.fields.m_PressedColor.fields.g;
                                                         value_03.fields.m_PressedColor.fields.b =
                                                              local_88.fields.m_PressedColor.fields.b;
                                                         value_03.fields.m_PressedColor.fields.a =
                                                              local_88.fields.m_PressedColor.fields.a;
                                                         value_03.fields.m_SelectedColor.fields.r =
                                                              local_88.fields.m_SelectedColor.fields.r;
                                                         value_03.fields.m_SelectedColor.fields.g =
                                                              local_88.fields.m_SelectedColor.fields.g;
                                                         value_03.fields.m_SelectedColor.fields.b =
                                                              local_88.fields.m_SelectedColor.fields.b;
                                                         value_03.fields.m_SelectedColor.fields.a =
                                                              local_88.fields.m_SelectedColor.fields.a;
                                                         value_03.fields.m_DisabledColor.fields.r =
                                                              local_88.fields.m_DisabledColor.fields.r;
                                                         value_03.fields.m_DisabledColor.fields.g =
                                                              local_88.fields.m_DisabledColor.fields.g;
                                                         value_03.fields.m_DisabledColor.fields.b =
                                                              local_88.fields.m_DisabledColor.fields.b;
                                                         value_03.fields.m_DisabledColor.fields.a =
                                                              local_88.fields.m_DisabledColor.fields.a;
                                                         value_03.fields.m_ColorMultiplier =
                                                              local_88.fields.m_ColorMultiplier;
                                                         value_03.fields.m_FadeDuration =
                                                              local_88.fields.m_FadeDuration;
                                                         UnityEngine_UI_Selectable__set_colors
                                                                   ((UnityEngine_UI_Selectable_o *)unaff_RBP,
                                                                    value_03,(MethodInfo *)0x0);
                                                         fVar32 = local_88.fields.m_HighlightedColor.fields.r;
                                                         if (*(UnityEngine_UI_Scrollbar_o **)setting !=
                                                             (UnityEngine_UI_Scrollbar_o *)0x0) {
                                                           pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                         0x4394f3e;
                                                           pIVar12 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)
                                                                  *(UnityEngine_UI_Scrollbar_o **)setting,
                                                                  MethodInfo_Image_GetComponent_Image);
                                                       pSVar23 = (System_String_array *)0x0;
                                                       pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394f65;
                                                       pSVar20 = "DefaultPanel";
                                                       UVar35 = UI_UIManager__GetThemeColor
                                                                          ((style->fields).ThemePanel,
                                                                           "DefaultSetting","DropdownScrollbarBackgroundColor",
                                                                           (System_String_o *)"DefaultPanel",
                                                                           (MethodInfo *)0x0);
                                                       uVar8 = (uint)pSVar20;
                                                       fVar32 = UVar35.fields.b;
                                                       unaff_RBP = (MethodInfo_255A0F0 **)ppUVar1;
                                                       setting = (Settings_HashSetSetting_int__o *)
                                                                 &"Label";
                                                       if (pIVar12 != (Il2CppObject *)0x0) {
                                                         pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394f8d
                                                         ;
                                                         (*pIVar12->klass->vtable[0x17].methodPtr)
                                                                   (UVar35.fields.r,pIVar12,
                                                                    pIVar12->klass->vtable[0x17].method);
                                                         if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                           pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                         0x4394fae;
                                                           pUVar15 = (UnityEngine_RectTransform_o *)
                                                                                                                                          
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
                                                       if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                                         pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394fce
                                                         ;
                                                         UVar6.fields.y = local_118;
                                                         UVar6.fields.x = optionsWidth;
                                                         UnityEngine_RectTransform__set_sizeDelta
                                                                   (pUVar15,UVar6,(MethodInfo *)0x0);
                                                         pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394fd8
                                                         ;
                                                         pUVar10 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              __this,(MethodInfo *)0x0);
                                                         if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                           pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                         0x4394fee;
                                                           pUVar10 = UnityEngine_Transform__Find
                                                                               (pUVar10,"Label",
                                                                                (MethodInfo *)0x0);
                                                           if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                             uVar8 = 0x559c850;
                                                             pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                           0x4395009;
                                                             pIVar12 = 
                                                       UnityEngine_Component__GetComponent_object_
                                                                 ((UnityEngine_Component_o *)pUVar10,
                                                                  MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                                       if (pIVar12 != (Il2CppObject *)0x0) {
                                                         pIVar24 = pIVar12->klass;
                                                         pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439502b
                                                         ;
                                                         (*pIVar24->vtable[0x26].methodPtr)
                                                                   (elementHeight,pIVar12);
                                                         uVar8 = (uint)pIVar24;
                                                         pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4395035
                                                         ;
                                                         pUVar10 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              __this,(MethodInfo *)0x0);
                                                         if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                           pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                         0x439504b;
                                                           pUVar10 = UnityEngine_Transform__Find
                                                                               (pUVar10,"Label",
                                                                                (MethodInfo *)0x0);
                                                           if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                             pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                           0x439505e;
                                                             pUVar11 = UnityEngine_Component__get_gameObject
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pUVar10,(MethodInfo *)0x0);
                                                             if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                                               pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                             0x4395073;
                                                               UnityEngine_GameObject__SetActive
                                                                         (pUVar11,0,(MethodInfo *)0x0);
                                                               uVar8 = 0;
                                                               pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                             0x4395083;
                                                               UI_BaseSettingElement__SetupTooltip
                                                                         ((UI_BaseSettingElement_o *)__this,
                                                                          tooltip,style,(MethodInfo *)0x0);
                                                               fVar32 = (optionsWidth - elementWidth) * 0.5;
                                                               (__this->fields)._optionsOffset.fields.x =
                                                                    fVar32;
                                                               (__this->fields)._optionsOffset.fields.y =
                                                                    2.0 - (local_118 + elementHeight) * 0.5;
                                                               (__this->fields)._optionsOffset.fields.z = 0.0;
                                                               pUVar11 = (__this->fields)._optionsPanel;
                                                               if (pUVar11 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                               0x43950dc;
                                                                 pUVar10 = 
                                                       UnityEngine_GameObject__get_transform
                                                                 (pUVar11,(MethodInfo *)0x0);
                                                       pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43950e9;
                                                       pUVar17 = UnityEngine_Component__get_transform
                                                                           ((UnityEngine_Component_o *)__this,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                                                         pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x43950f8
                                                         ;
                                                         pUVar17 = UnityEngine_Transform__get_root
                                                                             (pUVar17,(MethodInfo *)0x0);
                                                         if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                           uVar8 = 0;
                                                           pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                         0x439510f;
                                                           UnityEngine_Transform__SetParent_4e09e30
                                                                     (pUVar10,pUVar17,1,(MethodInfo *)0x0);
                                                           if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                             pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                           0x4395121;
                                                             UnityEngine_GameObject__SetActive
                                                                       (*ppUVar1,0,(MethodInfo *)0x0);
                                                             pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                           0x4395135;
                                                             (*(__this->klass->vtable)._6_SyncElement.
                                                               methodPtr)(__this,(__this->klass->vtable).
                                                                                 _6_SyncElement.method);
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
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       else if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394d4b
                                                         ;
                                                         __this_04 = (UnityEngine_UI_ScrollRect_o *)
                                                                                                                                          
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (*ppUVar1,MethodInfo_ScrollRect_GetComponent_ScrollRect);
                                                       if (__this_04 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                                                         pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4394d60
                                                         ;
                                                         UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                                   (__this_04,
                                                                    (UnityEngine_UI_Scrollbar_o *)0x0,
                                                                    (MethodInfo *)0x0);
                                                         if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                           pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                         0x4394d74;
                                                           pUVar10 = UnityEngine_GameObject__get_transform
                                                                               (*ppUVar1,(MethodInfo *)0x0);
                                                           if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                             uVar8 = 0x55d1fd0;
                                                             pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                           0x4394d91;
                                                             pUVar10 = UnityEngine_Transform__Find
                                                                                 (pUVar10,"Scrollbar",
                                                                                  (MethodInfo *)0x0);
                                                             if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                                               pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                             0x4394da4;
                                                               pUVar11 = UnityEngine_Component__get_gameObject
                                                                                   ((UnityEngine_Component_o *
                                                                                    )pUVar10,(MethodInfo *)0x0
                                                                                   );
                                                               if (pUVar11 != (UnityEngine_GameObject_o *)0x0)
                                                               {
                                                                 pUStack_190 = (UnityEngine_UI_Scrollbar_o *)
                                                                               0x4394db9;
                                                                 UnityEngine_GameObject__SetActive
                                                                           (pUVar11,0,(MethodInfo *)0x0);
                                                                 local_118 = UVar6.fields.y;
                                                                 goto label_04394db9;
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
  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439514c;
  il2cpp_runtime_helper_022b2c90();
label_0439514c:
  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4395151;
  il2cpp_runtime_helper_022b2ca0();
label_04395151:
  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439515d;
  uVar18 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4395165;
  __this_05 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar18);
  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4395174;
  pSVar19 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"MultiSelectDropdown cannot have 0 options.");
  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4395181;
  System_ArgumentException___ctor_3c12490(__this_05,pSVar19,(MethodInfo *)0x0);
  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x439518d;
  pSVar19 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup);
  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)0x4395198;
  pSVar27 = __this_05;
  uVar30 = il2cpp_runtime_helper_022b2b10();
  pSStack_1b8 = __this_05;
  pIStack_1b0 = __this_11;
  pUStack_1a8 = __this;
  pSStack_1a0 = setting;
  pUStack_198 = style;
  pUStack_190 = (UnityEngine_UI_Scrollbar_o *)unaff_RBP;
  if (g_data_057ae2cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_AddComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_AddComponent_Toggle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateOptionToggle_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateOptionToggle_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DropdownTextColor");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"      ");
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    il2cpp_runtime_helper_023445d0(&"Toggle");
    il2cpp_runtime_helper_023445d0(&"ToggleFilledColor");
    il2cpp_runtime_helper_023445d0(&"Options");
    il2cpp_runtime_helper_023445d0(&"Checkmark");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/DropdownOption");
    g_data_057ae2cb = '\x01';
  }
  pSVar20 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  plVar28 = (long *)pSVar20;
  System_Object___ctor((Il2CppObject *)pSVar20,(MethodInfo *)0x0);
  if (pSVar20 != (System_String_array *)0x0) {
    ((UnityEngine_UI_Toggle_Fields *)&pSVar20->bounds)->m_CachedPtr = (intptr_t)pSVar27;
    il2cpp_runtime_helper_022b4080((UnityEngine_UI_Toggle_Fields *)&pSVar20->bounds,pSVar27);
    *(undefined4 *)&pSVar20->max_length = extraout_EDX;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar28 = (long *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_06 = (System_String_array *)
                ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          ((System_String_o *)plVar28,"Prefabs/Elements/DropdownOption",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (__this_06 != (System_String_array *)0x0) {
      pUVar10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_06,(MethodInfo *)0x0)
      ;
      plVar28 = (long *)(pSVar27->fields)._stackTrace;
      if ((System_String_array *)plVar28 != (System_String_array *)0x0) {
        pSVar21 = (System_String_array *)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)plVar28,(MethodInfo *)0x0)
        ;
        if (pSVar21 != (System_String_array *)0x0) {
          pUVar17 = UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pSVar21,"Options",(MethodInfo *)0x0);
          plVar28 = (long *)pSVar21;
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar10,pUVar17,0,(MethodInfo *)0x0);
            plVar28 = (long *)__this_06;
            pIVar12 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_06,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar12 != (Il2CppObject *)0x0) {
              (*pIVar12->klass->vtable[0x24].methodPtr)(uVar30,pIVar12,pIVar12->klass->vtable[0x24].method);
              plVar28 = (long *)__this_06;
              pIVar12 = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)__this_06,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar12 != (Il2CppObject *)0x0) {
                (*pIVar12->klass->vtable[0x26].methodPtr)(fVar32,pIVar12);
                plVar28 = (long *)__this_06;
                pSVar21 = (System_String_array *)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)__this_06,(MethodInfo *)0x0);
                if (pSVar21 != (System_String_array *)0x0) {
                  pUVar10 = UnityEngine_Transform__Find
                                      ((UnityEngine_Transform_o *)pSVar21,"Label",(MethodInfo *)0x0);
                  plVar28 = (long *)pSVar21;
                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                    __this_07 = (UnityEngine_UI_Text_o *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
                    plVar28 = (long *)"      ";
                    pSVar19 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)"      ",pSVar19,(MethodInfo *)0x0);
                    if (__this_07 != (UnityEngine_UI_Text_o *)0x0) {
                      (*(__this_07->klass->vtable)._75_set_text.methodPtr)
                                (__this_07,pSVar19,(__this_07->klass->vtable)._75_set_text.method);
                      UnityEngine_UI_Text__set_fontSize(__this_07,uVar8,(MethodInfo *)0x0);
                      UnityEngine_UI_Text__set_alignment(__this_07,3,(MethodInfo *)0x0);
                      if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UVar35 = UI_UIManager__GetThemeColor
                                         ((System_String_o *)pSVar23,"DefaultSetting","DropdownTextColor",
                                          (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                      (*(__this_07->klass->vtable)._23_set_color.methodPtr)
                                (UVar35.fields.r,UVar35.fields.b,__this_07,
                                 (__this_07->klass->vtable)._23_set_color.method);
                      pSVar21 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                      plVar28 = (long *)pSVar21;
                      UnityEngine_GameObject___ctor
                                ((UnityEngine_GameObject_o *)pSVar21,"Toggle",(MethodInfo *)0x0);
                      if (pSVar21 != (System_String_array *)0x0) {
                        pUVar10 = UnityEngine_GameObject__get_transform
                                            ((UnityEngine_GameObject_o *)pSVar21,(MethodInfo *)0x0);
                        plVar28 = (long *)__this_06;
                        pUVar17 = UnityEngine_GameObject__get_transform
                                            ((UnityEngine_GameObject_o *)__this_06,(MethodInfo *)0x0);
                        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                          UnityEngine_Transform__SetParent_4e09e30(pUVar10,pUVar17,0,(MethodInfo *)0x0);
                          plVar28 = (long *)pSVar21;
                          pUVar15 = (UnityEngine_RectTransform_o *)
                                    UnityEngine_GameObject__AddComponent_object_
                                              ((UnityEngine_GameObject_o *)pSVar21,MethodInfo_RectTransform_AddComponent_RectTransform);
                          if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                            fVar32 = fVar32 * 0.6;
                            UnityEngine_RectTransform__set_anchorMin
                                      (pUVar15,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (pUVar15,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_pivot
                                      (pUVar15,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (pUVar15,(UnityEngine_Vector2_o)0x40a00000,(MethodInfo *)0x0);
                            value.fields.y = fVar32;
                            value.fields.x = fVar32;
                            UnityEngine_RectTransform__set_sizeDelta(pUVar15,value,(MethodInfo *)0x0);
                            __this_08 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                            plVar28 = (long *)__this_08;
                            UnityEngine_GameObject___ctor
                                      ((UnityEngine_GameObject_o *)__this_08,"Background",(MethodInfo *)0x0);
                            if (__this_08 != (System_String_array *)0x0) {
                              pUVar10 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)__this_08,(MethodInfo *)0x0);
                              plVar28 = (long *)pSVar21;
                              pUVar17 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pSVar21,(MethodInfo *)0x0);
                              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__SetParent_4e09e30(pUVar10,pUVar17,0,(MethodInfo *)0x0);
                                plVar28 = (long *)__this_08;
                                pUVar15 = (UnityEngine_RectTransform_o *)
                                          UnityEngine_GameObject__AddComponent_object_
                                                    ((UnityEngine_GameObject_o *)__this_08,MethodInfo_RectTransform_AddComponent_RectTransform);
                                if (g_data_057a694c == '\0') {
                                  plVar28 = &TypeInfo_Vector2;
                                  il2cpp_runtime_helper_023445d0();
                                  g_data_057a694c = '\x01';
                                }
                                if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar15,(UnityEngine_Vector2_o)
                                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                             (MethodInfo *)0x0);
                                  if (g_data_057a9c86 == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                    g_data_057a9c86 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar15,(UnityEngine_Vector2_o)
                                                     *(UnityEngine_Vector2_Fields *)
                                                      (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                                  if (g_data_057a694c == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                    g_data_057a694c = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (pUVar15,(UnityEngine_Vector2_o)
                                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                             (MethodInfo *)0x0);
                                  if (g_data_057a694c == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                    g_data_057a694c = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (pUVar15,(UnityEngine_Vector2_o)
                                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                             (MethodInfo *)0x0);
                                  value_04 = (UnityEngine_UI_Graphic_o *)
                                             UnityEngine_GameObject__AddComponent_object_
                                                       ((UnityEngine_GameObject_o *)__this_08,MethodInfo_Image_AddComponent_Image);
                                  UI_UIManager__GetThemeColorBlock
                                            (&UStack_210,(System_String_o *)pSVar23,"DefaultSetting","Toggle",
                                             (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                                  fVar31 = UStack_210.fields.m_NormalColor.fields.r;
                                  fVar33 = UStack_210.fields.m_NormalColor.fields.b;
                                  plVar28 = (long *)TypeInfo_ColorBlock;
                                  if (*(int *)((long)TypeInfo_ColorBlock->m_Items + 0xc4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  if (value_04 != (UnityEngine_UI_Graphic_o *)0x0) {
                                    (*(value_04->klass->vtable)._23_set_color.methodPtr)
                                              (fVar31,fVar33,value_04,
                                               (value_04->klass->vtable)._23_set_color.method);
                                    __this_09 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                    plVar28 = (long *)__this_09;
                                    UnityEngine_GameObject___ctor
                                              ((UnityEngine_GameObject_o *)__this_09,"Checkmark",
                                               (MethodInfo *)0x0);
                                    if (__this_09 != (System_String_array *)0x0) {
                                      pUVar10 = UnityEngine_GameObject__get_transform
                                                          ((UnityEngine_GameObject_o *)__this_09,
                                                           (MethodInfo *)0x0);
                                      pUVar17 = UnityEngine_GameObject__get_transform
                                                          ((UnityEngine_GameObject_o *)__this_08,
                                                           (MethodInfo *)0x0);
                                      plVar28 = (long *)__this_08;
                                      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                        UnityEngine_Transform__SetParent_4e09e30
                                                  (pUVar10,pUVar17,0,(MethodInfo *)0x0);
                                        plVar28 = (long *)__this_09;
                                        pUVar15 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_GameObject__AddComponent_object_
                                                            ((UnityEngine_GameObject_o *)__this_09,
                                                             MethodInfo_RectTransform_AddComponent_RectTransform);
                                        if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchorMin
                                                    (pUVar15,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_anchorMax
                                                    (pUVar15,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_pivot
                                                    (pUVar15,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          if (g_data_057a694c == '\0') {
                                            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                            g_data_057a694c = '\x01';
                                          }
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar15,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          fVar32 = fVar32 * *(float *)&pSVar27[1].fields._className;
                                          value_00.fields.y = fVar32;
                                          value_00.fields.x = fVar32;
                                          UnityEngine_RectTransform__set_sizeDelta
                                                    (pUVar15,value_00,(MethodInfo *)0x0);
                                          pSVar22 = (System_String_c *)
                                                    UnityEngine_GameObject__AddComponent_object_
                                                              ((UnityEngine_GameObject_o *)__this_09,
                                                               MethodInfo_Image_AddComponent_Image);
                                          plVar28 = (long *)pSVar23;
                                          UVar35 = UI_UIManager__GetThemeColor
                                                             ((System_String_o *)pSVar23,"DefaultSetting",
                                                              "ToggleFilledColor",(System_String_o *)"DefaultPanel",
                                                              (MethodInfo *)0x0);
                                          if (pSVar22 != (System_String_c *)0x0) {
                                            pvVar5 = (pSVar22->_1).image;
                                            (**(code **)((long)pvVar5 + 0x2a8))
                                                      (UVar35.fields.r,UVar35.fields.b,pSVar22,
                                                       *(undefined8 *)((long)pvVar5 + 0x2b0));
                                            pSVar19 = (System_String_o *)
                                                      UnityEngine_GameObject__AddComponent_object_
                                                                ((UnityEngine_GameObject_o *)pSVar21,
                                                                 MethodInfo_Toggle_AddComponent_Toggle);
                                            ppSVar26 = pSVar20->m_Items;
                                            pSVar20->m_Items[0] = pSVar19;
                                            il2cpp_runtime_helper_022b4080(ppSVar26);
                                            plVar28 = (long *)(System_String_array *)0x0;
                                            if ((UnityEngine_UI_Selectable_o *)pSVar20->m_Items[0] !=
                                                (UnityEngine_UI_Selectable_o *)0x0) {
                                              UnityEngine_UI_Selectable__set_targetGraphic
                                                        ((UnityEngine_UI_Selectable_o *)pSVar20->m_Items[0],
                                                         value_04,(MethodInfo *)0x0);
                                              pSVar19 = *ppSVar26;
                                              plVar28 = (long *)(System_String_array *)0x0;
                                              if (pSVar19 != (System_String_o *)0x0) {
                                                pSVar19[0xb].klass = pSVar22;
                                                il2cpp_runtime_helper_022b4080(pSVar19 + 0xb);
                                                plVar28 = (long *)(pSVar27->fields).native_trace_ips;
                                                if ((System_String_array *)plVar28 !=
                                                    (System_String_array *)0x0) {
                                                  pSVar21 = (System_String_array *)*ppSVar26;
                                                  uVar8 = Settings_HashSetSetting_int___Contains
                                                                    ((Settings_HashSetSetting_int__o *)plVar28
                                                                     ,*(int32_t *)&pSVar20->max_length,
                                                                     MethodInfo_Boolean_Contains);
                                                  if (pSVar21 != (System_String_array *)0x0) {
                                                    UnityEngine_UI_Toggle__set_isOn
                                                              ((UnityEngine_UI_Toggle_o *)pSVar21,uVar8 & 0xff
                                                               ,(MethodInfo *)0x0);
                                                    plVar28 = (long *)pSVar21;
                                                    if (*ppSVar26 != (System_String_o *)0x0) {
                                                      __this_00 = (*ppSVar26)[0xb].fields;
                                                      pSVar21 = (System_String_array *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
                                                      plVar28 = (long *)pSVar21;
                                                      UnityEngine_Events_UnityAction_bool____ctor();
                                                      if (__this_00 != (System_String_Fields)0x0) {
                                                        UnityEngine_Events_UnityEvent_bool___AddListener
                                                                  ((UnityEngine_Events_UnityEvent_bool__o *)
                                                                   __this_00,
                                                                   (UnityEngine_Events_UnityAction_T0__o *)
                                                                   pSVar21,MethodInfo_Void_AddListener);
                                                        pUVar14 = (UnityEngine_UI_Selectable_o *)
                                                                  UnityEngine_GameObject__GetComponent_object_
                                                                            ((UnityEngine_GameObject_o *)
                                                                             __this_06,MethodInfo_Button_GetComponent_Button);
                                                        plVar28 = (long *)__this_06;
                                                        if ((pUVar14 != (UnityEngine_UI_Selectable_o *)0x0) &&
                                                           (__this_01 = (pUVar14->fields).m_CanvasGroupCache,
                                                           plVar28 = (long *)0x0,
                                                           __this_01 !=
                                                           (System_Collections_Generic_List_CanvasGroup__o *)
                                                           0x0)) {
                                                                                                                    
                                                       UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                                                 ((UnityEngine_Events_UnityEventBase_o *)
                                                                  __this_01,(MethodInfo *)0x0);
                                                       UI_UIManager__GetThemeColorBlock
                                                                 (&UStack_210,(System_String_o *)pSVar23,
                                                                  "DefaultSetting","Dropdown",
                                                                  (System_String_o *)"DefaultPanel",
                                                                  (MethodInfo *)0x0);
                                                       value_01.fields.m_NormalColor.fields.b =
                                                            UStack_210.fields.m_NormalColor.fields.b;
                                                       value_01.fields.m_NormalColor.fields.a =
                                                            UStack_210.fields.m_NormalColor.fields.a;
                                                       value_01.fields.m_NormalColor.fields.r =
                                                            UStack_210.fields.m_NormalColor.fields.r;
                                                       value_01.fields.m_NormalColor.fields.g =
                                                            UStack_210.fields.m_NormalColor.fields.g;
                                                       value_01.fields.m_HighlightedColor.fields.r =
                                                            UStack_210.fields.m_HighlightedColor.fields.r;
                                                       value_01.fields.m_HighlightedColor.fields.g =
                                                            UStack_210.fields.m_HighlightedColor.fields.g;
                                                       value_01.fields.m_HighlightedColor.fields.b =
                                                            UStack_210.fields.m_HighlightedColor.fields.b;
                                                       value_01.fields.m_HighlightedColor.fields.a =
                                                            UStack_210.fields.m_HighlightedColor.fields.a;
                                                       value_01.fields.m_PressedColor.fields.r =
                                                            UStack_210.fields.m_PressedColor.fields.r;
                                                       value_01.fields.m_PressedColor.fields.g =
                                                            UStack_210.fields.m_PressedColor.fields.g;
                                                       value_01.fields.m_PressedColor.fields.b =
                                                            UStack_210.fields.m_PressedColor.fields.b;
                                                       value_01.fields.m_PressedColor.fields.a =
                                                            UStack_210.fields.m_PressedColor.fields.a;
                                                       value_01.fields.m_SelectedColor.fields.r =
                                                            UStack_210.fields.m_SelectedColor.fields.r;
                                                       value_01.fields.m_SelectedColor.fields.g =
                                                            UStack_210.fields.m_SelectedColor.fields.g;
                                                       value_01.fields.m_SelectedColor.fields.b =
                                                            UStack_210.fields.m_SelectedColor.fields.b;
                                                       value_01.fields.m_SelectedColor.fields.a =
                                                            UStack_210.fields.m_SelectedColor.fields.a;
                                                       value_01.fields.m_DisabledColor.fields.r =
                                                            UStack_210.fields.m_DisabledColor.fields.r;
                                                       value_01.fields.m_DisabledColor.fields.g =
                                                            UStack_210.fields.m_DisabledColor.fields.g;
                                                       value_01.fields.m_DisabledColor.fields.b =
                                                            UStack_210.fields.m_DisabledColor.fields.b;
                                                       value_01.fields.m_DisabledColor.fields.a =
                                                            UStack_210.fields.m_DisabledColor.fields.a;
                                                       value_01.fields.m_ColorMultiplier =
                                                            UStack_210.fields.m_ColorMultiplier;
                                                       value_01.fields.m_FadeDuration =
                                                            UStack_210.fields.m_FadeDuration;
                                                       UnityEngine_UI_Selectable__set_colors
                                                                 (pUVar14,value_01,(MethodInfo *)0x0);
                                                       __this_02 = (UnityEngine_Events_UnityEvent_o *)
                                                                   (pUVar14->fields).m_CanvasGroupCache;
                                                       pSVar23 = (System_String_array *)
                                                                 il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                       plVar28 = (long *)pSVar23;
                                                       UnityEngine_Events_UnityAction___ctor();
                                                       if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0
                                                          ) {
                                                         UnityEngine_Events_UnityEvent__AddListener
                                                                   (__this_02,
                                                                    (UnityEngine_Events_UnityAction_o *)
                                                                    pSVar23,(MethodInfo *)0x0);
                                                         __this_03 = *(
                                                       System_Collections_Generic_Dictionary_int__object__o **
                                                       )&(pSVar27->fields).caught_in_unmanaged;
                                                       plVar28 = (long *)0x0;
                                                       if (__this_03 !=
                                                           (
                                                       System_Collections_Generic_Dictionary_int__object__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_int__object___set_Item
                                                                 (__this_03,*(int32_t *)&pSVar20->max_length,
                                                                  (Il2CppObject *)pSVar20->m_Items[0],
                                                                  MethodInfo_Void_set_Item);
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
  il2cpp_runtime_helper_022b2c90();
  plVar28 = (long *)((System_String_array *)plVar28)->m_Items[3];
  if ((UnityEngine_UI_Selectable_o *)plVar28 != (UnityEngine_UI_Selectable_o *)0x0) {
    pUVar10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)plVar28,(MethodInfo *)0x0);
    if (g_data_057a6932 == '\0') {
      plVar28 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6932 = '\x01';
    }
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (pUVar10,(UnityEngine_Vector3_o)
                         *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c6 = '\x01';
  }
  pUVar14 = (((UnityEngine_UI_Selectable_o *)plVar28)->fields).m_Navigation.fields.m_SelectOnDown;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pUVar14 = (((UnityEngine_UI_Selectable_o *)plVar28)->fields).m_Navigation.fields.m_SelectOnDown;
  if (pUVar14 != (UnityEngine_UI_Selectable_o *)0x0) {
    UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pUVar14,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2c7 = '\x01';
  }
  pUVar29 = (pUVar14->fields).m_Navigation.fields.m_SelectOnLeft;
  if (pUVar29 != (UnityEngine_UI_Selectable_o *)0x0) {
    pUVar10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar29,(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      UVar34 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
      pUVar7 = &(pUVar14->fields).m_Colors;
      uVar3 = (pUVar7->fields).m_HighlightedColor.fields.g;
      uVar4 = (pUVar7->fields).m_HighlightedColor.fields.b;
      fVar32 = (pUVar14->fields).m_Colors.fields.m_HighlightedColor.fields.a;
      if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar14 = (pUVar14->fields).m_Navigation.fields.m_SelectOnDown;
      pUVar29 = TypeInfo_UIManager;
      if (pUVar14 != (UnityEngine_UI_Selectable_o *)0x0) {
        fVar31 = *(float *)&(TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[2].monitor;
        __this_10 = (UnityEngine_UI_Selectable_o *)
                    UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar14,(MethodInfo *)0x0);
        pUVar29 = pUVar14;
        if (__this_10 != (UnityEngine_UI_Selectable_o *)0x0) {
          pUVar10 = (UnityEngine_Transform_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_10,MethodInfo_RectTransform_GetComponent_RectTransform);
          pUVar29 = __this_10;
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            fStackY_368 = UVar34.fields.x;
            fStackY_364 = UVar34.fields.y;
            value_05.fields.x = fStackY_368 + (float)uVar3 * fVar31;
            value_05.fields.y = fStackY_364 + (float)uVar4 * fVar31;
            value_05.fields.z = UVar34.fields.z + fVar32 * fVar31;
            UnityEngine_Transform__set_position(pUVar10,value_05,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c8 = '\x01';
  }
  pUVar14 = (pUVar29->fields).m_Navigation.fields.m_SelectOnDown;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pUVar14 = (pUVar29->fields).m_Navigation.fields.m_SelectOnDown;
  if (pUVar14 != (UnityEngine_UI_Selectable_o *)0x0) {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar14,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c9 = '\x01';
  }
  pUVar29 = (pUVar14->fields).m_Navigation.fields.m_SelectOnDown;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pUVar14 = (pUVar14->fields).m_Navigation.fields.m_SelectOnDown;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar14,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MultiSelectDropdownElement$$FixScale
// il2cpp: void UI_MultiSelectDropdownElement__FixScale (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4395ca0

void UI_MultiSelectDropdownElement__FixScale(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  UnityEngine_Object_o *pUVar4;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o value;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  
  pUVar8 = (__this->fields)._optionsPanel;
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
    if (g_data_057a6932 == '\0') {
      pUVar8 = (UnityEngine_GameObject_o *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6932 = '\x01';
    }
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (pUVar6,(UnityEngine_Vector3_o)
                        *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c6 = '\x01';
  }
  pUVar4 = pUVar8[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar8 = pUVar8[2].monitor;
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2c7 = '\x01';
  }
  pUVar6 = (UnityEngine_Transform_o *)pUVar8[2].fields.m_CachedPtr;
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      pvVar3 = pUVar8[4].monitor;
      fVar1 = *(float *)&pUVar8[4].fields.m_CachedPtr;
      if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar7 = pUVar8[2].monitor;
      pUVar6 = TypeInfo_UIManager;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        fVar2 = *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38);
        __this_00 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
        pUVar6 = pUVar7;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = (UnityEngine_Transform_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
          pUVar6 = __this_00;
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            fStack_58 = SUB84(pvVar3,0);
            fStack_54 = (float)((ulong)pvVar3 >> 0x20);
            fStack_48 = UVar9.fields.x;
            fStack_44 = UVar9.fields.y;
            value.fields.x = fStack_48 + fStack_58 * fVar2;
            value.fields.y = fStack_44 + fStack_54 * fVar2;
            value.fields.z = UVar9.fields.z + fVar1 * fVar2;
            UnityEngine_Transform__set_position(pUVar7,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c8 = '\x01';
  }
  pUVar4 = pUVar6[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar8 = pUVar6[2].monitor;
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c9 = '\x01';
  }
  pUVar4 = pUVar8[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar4 = pUVar8[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MultiSelectDropdownElement$$IsOpen
// il2cpp: bool UI_MultiSelectDropdownElement__IsOpen (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4395d00

bool_conflict
UI_MultiSelectDropdownElement__IsOpen(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  UnityEngine_Object_o *pUVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o value;
  float fStack_50;
  float fStack_4c;
  float fStack_40;
  float fStack_3c;
  
  if (g_data_057ae2c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c6 = '\x01';
  }
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return 0;
  }
  pUVar7 = (__this->fields)._optionsPanel;
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2c7 = '\x01';
  }
  __this_01 = (UnityEngine_Transform_o *)pUVar7[2].fields.m_CachedPtr;
  if (__this_01 != (UnityEngine_Transform_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UVar8 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
      pvVar3 = pUVar7[4].monitor;
      fVar1 = *(float *)&pUVar7[4].fields.m_CachedPtr;
      if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar6 = pUVar7[2].monitor;
      __this_01 = TypeInfo_UIManager;
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        fVar2 = *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38);
        __this_00 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
        __this_01 = pUVar6;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          pUVar6 = (UnityEngine_Transform_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
          __this_01 = __this_00;
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            fStack_50 = SUB84(pvVar3,0);
            fStack_4c = (float)((ulong)pvVar3 >> 0x20);
            fStack_40 = UVar8.fields.x;
            fStack_3c = UVar8.fields.y;
            value.fields.x = fStack_40 + fStack_50 * fVar2;
            value.fields.y = fStack_3c + fStack_4c * fVar2;
            value.fields.z = UVar8.fields.z + fVar1 * fVar2;
            UnityEngine_Transform__set_position(pUVar6,value,(MethodInfo *)0x0);
            return extraout_EAX;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c8 = '\x01';
  }
  pUVar4 = __this_01[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = __this_01[2].monitor;
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
      return extraout_EAX_00;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae2c9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae2c9 = '\x01';
    }
    pUVar4 = pUVar7[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pUVar4 = pUVar7[2].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
      return extraout_EAX_01;
    }
    return bVar5;
  }
  return bVar5;
}


// UI.MultiSelectDropdownElement$$SetOptionsPosition
// il2cpp: void UI_MultiSelectDropdownElement__SetOptionsPosition (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4395d80

void UI_MultiSelectDropdownElement__SetOptionsPosition
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Object_o *pUVar5;
  bool_conflict bVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o value;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (g_data_057ae2c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2c7 = '\x01';
  }
  __this_01 = (UnityEngine_Transform_o *)(__this->fields)._selectedButton;
  if (__this_01 != (UnityEngine_Transform_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      UVar8 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      uVar3 = (__this->fields)._optionsOffset.fields.x;
      uVar4 = (__this->fields)._optionsOffset.fields.y;
      fVar1 = (__this->fields)._optionsOffset.fields.z;
      if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar7 = (UnityEngine_Transform_o *)(__this->fields)._optionsPanel;
      __this_01 = TypeInfo_UIManager;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        fVar2 = *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38);
        __this_00 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
        __this_01 = pUVar7;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = (UnityEngine_Transform_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
          __this_01 = __this_00;
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            local_28 = UVar8.fields.x;
            fStack_24 = UVar8.fields.y;
            value.fields.x = local_28 + (float)uVar3 * fVar2;
            value.fields.y = fStack_24 + (float)uVar4 * fVar2;
            value.fields.z = UVar8.fields.z + fVar1 * fVar2;
            UnityEngine_Transform__set_position(pUVar7,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c8 = '\x01';
  }
  pUVar5 = __this_01[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  __this_02 = __this_01[2].monitor;
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_02,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c9 = '\x01';
  }
  pUVar5 = __this_02[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar5 = __this_02[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar5,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MultiSelectDropdownElement$$OnDisable
// il2cpp: void UI_MultiSelectDropdownElement__OnDisable (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4395ea0

void UI_MultiSelectDropdownElement__OnDisable(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if (g_data_057ae2c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c8 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c9 = '\x01';
  }
  pUVar1 = __this_00[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = __this_00[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MultiSelectDropdownElement$$OnDestroy
// il2cpp: void UI_MultiSelectDropdownElement__OnDestroy (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4395f20

void UI_MultiSelectDropdownElement__OnDestroy(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057ae2c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c9 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MultiSelectDropdownElement$$Update
// il2cpp: void UI_MultiSelectDropdownElement__Update (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4395fa0

void UI_MultiSelectDropdownElement__Update(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  UnityEngine_Vector2_o screenPoint;
  UnityEngine_Vector2_o screenPoint_00;
  bool_conflict bVar5;
  UnityEngine_Transform_o *__this_00;
  undefined8 extraout_RAX;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *rect_00;
  undefined4 extraout_var;
  undefined8 uVar6;
  UnityEngine_Object_o *unaff_RBX;
  UnityEngine_Object_o *x;
  UI_MultiSelectDropdownElement_o *pUVar7;
  Il2CppObject *__this_01;
  undefined8 unaff_R14;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  undefined1 auStack_38 [24];
  
  if (cRam00000000057ae2ca == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    cRam00000000057ae2ca = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar3 = (__this->fields)._optionsPanel;
  pUVar7 = (UI_MultiSelectDropdownElement_o *)0x0;
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) {
code_r0x0439616c:
    uVar6 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = x;
    register0x00000020 = (BADSPACEBASE *)auStack_38;
    __this = pUVar7;
  }
  else {
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar7 = __this;
    __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto code_r0x0439616c;
    UVar11 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    uVar1 = (__this->fields)._lastKnownPosition.fields.x;
    uVar2 = (__this->fields)._lastKnownPosition.fields.y;
    fVar8 = UVar11.fields.y - (float)uVar2;
    fVar9 = UVar11.fields.z - (__this->fields)._lastKnownPosition.fields.z;
    fVar10 = UVar11.fields.x - (float)uVar1;
    uVar6 = extraout_RAX;
    if (fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9 < 9.9999994e-11) {
      bVar5 = UnityEngine_Input__GetKeyUp(0x143,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return;
      }
      pUVar3 = (__this->fields)._optionsPanel;
      pUVar7 = (UI_MultiSelectDropdownElement_o *)0x0;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        x = (UnityEngine_Object_o *)&MethodInfo_RectTransform_GetComponent_RectTransform;
        rect = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent_object_(pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
        pUVar3 = (__this->fields)._selectedButton;
        pUVar7 = (UI_MultiSelectDropdownElement_o *)0x0;
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          rect_00 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
          UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          fVar8 = UVar11.fields.x;
          fVar9 = UVar11.fields.y;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            auStack_38._8_4_ = extraout_XMM0_Dc;
            auStack_38._0_8_ = UVar11.fields._0_8_;
            auStack_38._12_4_ = extraout_XMM0_Dd;
            il2cpp_runtime_helper_02337ed0(UVar11.fields.x,UVar11.fields.z);
            fVar8 = (float)auStack_38._0_4_;
            fVar9 = (float)auStack_38._4_4_;
          }
          screenPoint.fields.y = fVar9;
          screenPoint.fields.x = fVar8;
          bVar5 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            (rect,screenPoint,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return;
          }
          UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          fVar8 = UVar11.fields.x;
          fVar9 = UVar11.fields.y;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            auStack_38._8_4_ = extraout_XMM0_Dc_00;
            auStack_38._0_8_ = UVar11.fields._0_8_;
            auStack_38._12_4_ = extraout_XMM0_Dd_00;
            il2cpp_runtime_helper_02337ed0(UVar11.fields.x,UVar11.fields.z);
            fVar8 = (float)auStack_38._0_4_;
            fVar9 = (float)auStack_38._4_4_;
          }
          screenPoint_00.fields.y = fVar9;
          screenPoint_00.fields.x = fVar8;
          bVar5 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                            (rect_00,screenPoint_00,(MethodInfo *)0x0);
          uVar6 = CONCAT44(extraout_var,bVar5);
          if ((char)bVar5 != '\0') {
            return;
          }
          goto UI_MultiSelectDropdownElement__CloseOptions;
        }
      }
      goto code_r0x0439616c;
    }
  }
UI_MultiSelectDropdownElement__CloseOptions:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
  *(UnityEngine_Object_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x18) = uVar6;
  if (g_data_057ae2ce == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439619c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2ce = '\x01';
  }
  pUVar4 = (__this->fields)._scrollBar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43961bf;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43961cb;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar4 = (__this->fields)._scrollBar;
    if (pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_043961fd;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43961df;
    fVar8 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar8;
  }
  pUVar3 = (__this->fields)._optionsPanel;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
    return;
  }
label_043961fd:
  __this_01 = (Il2CppObject *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4396202;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement$$CreateOptionToggle
// il2cpp: void UI_MultiSelectDropdownElement__CreateOptionToggle (UI_MultiSelectDropdownElement_o* __this, System_String_o* option, int32_t index, float width, float height, int32_t fontSize, System_String_o* themePanel, const MethodInfo* method);
// 0x43951a0

void UI_MultiSelectDropdownElement__CreateOptionToggle
               (UI_MultiSelectDropdownElement_o *__this,System_String_o *option,int32_t index,float width,
               float height,int32_t fontSize,System_String_o *themePanel,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  UnityEngine_Events_UnityEvent_bool__o *__this_00;
  System_Collections_Generic_List_CanvasGroup__o *__this_01;
  UnityEngine_Events_UnityEvent_o *__this_02;
  System_Collections_Generic_Dictionary_int__object__o *__this_03;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_UI_ColorBlock_o value_01;
  UnityEngine_UI_ColorBlock_o *pUVar4;
  uint uVar5;
  bool_conflict bVar6;
  UnityEngine_UI_Toggle_o *__this_04;
  UnityEngine_UI_Toggle_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_Toggle_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  Il2CppObject *pIVar11;
  UnityEngine_UI_Text_o *__this_05;
  System_String_o *pSVar12;
  UnityEngine_RectTransform_o *pUVar13;
  UnityEngine_UI_Toggle_o *__this_06;
  UnityEngine_UI_Graphic_o *value_02;
  UnityEngine_UI_Toggle_o *__this_07;
  Il2CppObject *pIVar14;
  UnityEngine_UI_Selectable_o *pUVar15;
  UnityEngine_UI_Selectable_o *__this_08;
  bool_conflict *pbVar16;
  long *plVar17;
  UnityEngine_UI_Selectable_o *pUVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o value_03;
  UnityEngine_Color_o UVar23;
  float fStackY_1f0;
  float fStackY_1ec;
  float fStackY_1e0;
  float fStackY_1dc;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (g_data_057ae2cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_AddComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_AddComponent_Toggle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateOptionToggle_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateOptionToggle_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DropdownTextColor");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"      ");
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    il2cpp_runtime_helper_023445d0(&"Toggle");
    il2cpp_runtime_helper_023445d0(&"ToggleFilledColor");
    il2cpp_runtime_helper_023445d0(&"Options");
    il2cpp_runtime_helper_023445d0(&"Checkmark");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/DropdownOption");
    g_data_057ae2cb = '\x01';
  }
  __this_04 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  plVar17 = (long *)__this_04;
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  if (__this_04 != (UnityEngine_UI_Toggle_o *)0x0) {
    (__this_04->fields).m_CachedPtr = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&__this_04->fields,__this);
    *(int32_t *)&(__this_04->fields).m_CancellationTokenSource = index;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar17 = (long *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar7 = (UnityEngine_UI_Toggle_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       ((System_String_o *)plVar17,"Prefabs/Elements/DropdownOption",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (pUVar7 != (UnityEngine_UI_Toggle_o *)0x0) {
      pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
      plVar17 = (long *)(__this->fields)._optionsPanel;
      if ((UnityEngine_UI_Toggle_o *)plVar17 != (UnityEngine_UI_Toggle_o *)0x0) {
        pUVar9 = (UnityEngine_UI_Toggle_o *)
                 UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)plVar17,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_UI_Toggle_o *)0x0) {
          pUVar10 = UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pUVar9,"Options",(MethodInfo *)0x0);
          plVar17 = (long *)pUVar9;
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(pUVar8,pUVar10,0,(MethodInfo *)0x0);
            plVar17 = (long *)pUVar7;
            pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar11 != (Il2CppObject *)0x0) {
              (*pIVar11->klass->vtable[0x24].methodPtr)(width,pIVar11,pIVar11->klass->vtable[0x24].method);
              plVar17 = (long *)pUVar7;
              pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar11 != (Il2CppObject *)0x0) {
                (*pIVar11->klass->vtable[0x26].methodPtr)(height,pIVar11);
                plVar17 = (long *)pUVar7;
                pUVar9 = (UnityEngine_UI_Toggle_o *)
                         UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
                if (pUVar9 != (UnityEngine_UI_Toggle_o *)0x0) {
                  pUVar8 = UnityEngine_Transform__Find
                                     ((UnityEngine_Transform_o *)pUVar9,"Label",(MethodInfo *)0x0);
                  plVar17 = (long *)pUVar9;
                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                    __this_05 = (UnityEngine_UI_Text_o *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
                    plVar17 = (long *)"      ";
                    pSVar12 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)"      ",option,(MethodInfo *)0x0);
                    if (__this_05 != (UnityEngine_UI_Text_o *)0x0) {
                      (*(__this_05->klass->vtable)._75_set_text.methodPtr)
                                (__this_05,pSVar12,(__this_05->klass->vtable)._75_set_text.method);
                      UnityEngine_UI_Text__set_fontSize(__this_05,fontSize,(MethodInfo *)0x0);
                      UnityEngine_UI_Text__set_alignment(__this_05,3,(MethodInfo *)0x0);
                      if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UVar23 = UI_UIManager__GetThemeColor
                                         (themePanel,"DefaultSetting","DropdownTextColor","DefaultPanel",(MethodInfo *)0x0)
                      ;
                      (*(__this_05->klass->vtable)._23_set_color.methodPtr)
                                (UVar23.fields.r,UVar23.fields.b,__this_05,
                                 (__this_05->klass->vtable)._23_set_color.method);
                      pUVar9 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                      plVar17 = (long *)pUVar9;
                      UnityEngine_GameObject___ctor
                                ((UnityEngine_GameObject_o *)pUVar9,"Toggle",(MethodInfo *)0x0);
                      if (pUVar9 != (UnityEngine_UI_Toggle_o *)0x0) {
                        pUVar8 = UnityEngine_GameObject__get_transform
                                           ((UnityEngine_GameObject_o *)pUVar9,(MethodInfo *)0x0);
                        plVar17 = (long *)pUVar7;
                        pUVar10 = UnityEngine_GameObject__get_transform
                                            ((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
                        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                          UnityEngine_Transform__SetParent_4e09e30(pUVar8,pUVar10,0,(MethodInfo *)0x0);
                          plVar17 = (long *)pUVar9;
                          pUVar13 = (UnityEngine_RectTransform_o *)
                                    UnityEngine_GameObject__AddComponent_object_
                                              ((UnityEngine_GameObject_o *)pUVar9,MethodInfo_RectTransform_AddComponent_RectTransform);
                          if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
                            fVar19 = height * 0.6;
                            UnityEngine_RectTransform__set_anchorMin
                                      (pUVar13,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchorMax
                                      (pUVar13,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_pivot
                                      (pUVar13,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                            UnityEngine_RectTransform__set_anchoredPosition
                                      (pUVar13,(UnityEngine_Vector2_o)0x40a00000,(MethodInfo *)0x0);
                            value.fields.y = fVar19;
                            value.fields.x = fVar19;
                            UnityEngine_RectTransform__set_sizeDelta(pUVar13,value,(MethodInfo *)0x0);
                            __this_06 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                            plVar17 = (long *)__this_06;
                            UnityEngine_GameObject___ctor
                                      ((UnityEngine_GameObject_o *)__this_06,"Background",(MethodInfo *)0x0);
                            if (__this_06 != (UnityEngine_UI_Toggle_o *)0x0) {
                              pUVar8 = UnityEngine_GameObject__get_transform
                                                 ((UnityEngine_GameObject_o *)__this_06,(MethodInfo *)0x0);
                              plVar17 = (long *)pUVar9;
                              pUVar10 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pUVar9,(MethodInfo *)0x0);
                              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__SetParent_4e09e30(pUVar8,pUVar10,0,(MethodInfo *)0x0);
                                plVar17 = (long *)__this_06;
                                pUVar13 = (UnityEngine_RectTransform_o *)
                                          UnityEngine_GameObject__AddComponent_object_
                                                    ((UnityEngine_GameObject_o *)__this_06,MethodInfo_RectTransform_AddComponent_RectTransform);
                                if (g_data_057a694c == '\0') {
                                  plVar17 = &TypeInfo_Vector2;
                                  il2cpp_runtime_helper_023445d0();
                                  g_data_057a694c = '\x01';
                                }
                                if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
                                  UnityEngine_RectTransform__set_anchorMin
                                            (pUVar13,(UnityEngine_Vector2_o)
                                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                             (MethodInfo *)0x0);
                                  if (g_data_057a9c86 == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                    g_data_057a9c86 = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchorMax
                                            (pUVar13,(UnityEngine_Vector2_o)
                                                     *(UnityEngine_Vector2_Fields *)
                                                      (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
                                  if (g_data_057a694c == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                    g_data_057a694c = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_sizeDelta
                                            (pUVar13,(UnityEngine_Vector2_o)
                                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                             (MethodInfo *)0x0);
                                  if (g_data_057a694c == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                    g_data_057a694c = '\x01';
                                  }
                                  UnityEngine_RectTransform__set_anchoredPosition
                                            (pUVar13,(UnityEngine_Vector2_o)
                                                     **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                             (MethodInfo *)0x0);
                                  value_02 = (UnityEngine_UI_Graphic_o *)
                                             UnityEngine_GameObject__AddComponent_object_
                                                       ((UnityEngine_GameObject_o *)__this_06,MethodInfo_Image_AddComponent_Image);
                                  UI_UIManager__GetThemeColorBlock
                                            (&local_88,themePanel,"DefaultSetting","Toggle","DefaultPanel",
                                             (MethodInfo *)0x0);
                                  fVar20 = local_88.fields.m_NormalColor.fields.r;
                                  fVar21 = local_88.fields.m_NormalColor.fields.b;
                                  plVar17 = (long *)TypeInfo_ColorBlock;
                                  if (*(int *)((long)&(TypeInfo_ColorBlock->fields).m_TargetGraphic + 4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  if (value_02 != (UnityEngine_UI_Graphic_o *)0x0) {
                                    (*(value_02->klass->vtable)._23_set_color.methodPtr)
                                              (fVar20,fVar21,value_02,
                                               (value_02->klass->vtable)._23_set_color.method);
                                    __this_07 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                    plVar17 = (long *)__this_07;
                                    UnityEngine_GameObject___ctor
                                              ((UnityEngine_GameObject_o *)__this_07,"Checkmark",
                                               (MethodInfo *)0x0);
                                    if (__this_07 != (UnityEngine_UI_Toggle_o *)0x0) {
                                      pUVar8 = UnityEngine_GameObject__get_transform
                                                         ((UnityEngine_GameObject_o *)__this_07,
                                                          (MethodInfo *)0x0);
                                      pUVar10 = UnityEngine_GameObject__get_transform
                                                          ((UnityEngine_GameObject_o *)__this_06,
                                                           (MethodInfo *)0x0);
                                      plVar17 = (long *)__this_06;
                                      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                        UnityEngine_Transform__SetParent_4e09e30
                                                  (pUVar8,pUVar10,0,(MethodInfo *)0x0);
                                        plVar17 = (long *)__this_07;
                                        pUVar13 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_GameObject__AddComponent_object_
                                                            ((UnityEngine_GameObject_o *)__this_07,
                                                             MethodInfo_RectTransform_AddComponent_RectTransform);
                                        if (pUVar13 != (UnityEngine_RectTransform_o *)0x0) {
                                          UnityEngine_RectTransform__set_anchorMin
                                                    (pUVar13,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_anchorMax
                                                    (pUVar13,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          UnityEngine_RectTransform__set_pivot
                                                    (pUVar13,(UnityEngine_Vector2_o)0x3f0000003f000000,
                                                     (MethodInfo *)0x0);
                                          if (g_data_057a694c == '\0') {
                                            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                            g_data_057a694c = '\x01';
                                          }
                                          UnityEngine_RectTransform__set_anchoredPosition
                                                    (pUVar13,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          fVar19 = fVar19 * (__this->fields)._checkMarkSizeMultiplier;
                                          value_00.fields.y = fVar19;
                                          value_00.fields.x = fVar19;
                                          UnityEngine_RectTransform__set_sizeDelta
                                                    (pUVar13,value_00,(MethodInfo *)0x0);
                                          pIVar11 = UnityEngine_GameObject__AddComponent_object_
                                                              ((UnityEngine_GameObject_o *)__this_07,
                                                               MethodInfo_Image_AddComponent_Image);
                                          plVar17 = (long *)themePanel;
                                          UVar23 = UI_UIManager__GetThemeColor
                                                             (themePanel,"DefaultSetting","ToggleFilledColor",
                                                              "DefaultPanel",(MethodInfo *)0x0);
                                          if (pIVar11 != (Il2CppObject *)0x0) {
                                            (*pIVar11->klass->vtable[0x17].methodPtr)
                                                      (UVar23.fields.r,UVar23.fields.b,pIVar11,
                                                       pIVar11->klass->vtable[0x17].method);
                                            pIVar14 = UnityEngine_GameObject__AddComponent_object_
                                                                ((UnityEngine_GameObject_o *)pUVar9,
                                                                 MethodInfo_Toggle_AddComponent_Toggle);
                                            pbVar16 = &(__this_04->fields).m_EnableCalled;
                                            *(Il2CppObject **)&(__this_04->fields).m_EnableCalled = pIVar14;
                                            il2cpp_runtime_helper_022b4080(pbVar16);
                                            pUVar15 = *(UnityEngine_UI_Selectable_o **)
                                                       &(__this_04->fields).m_EnableCalled;
                                            plVar17 = (long *)(UnityEngine_UI_Toggle_o *)0x0;
                                            if (pUVar15 != (UnityEngine_UI_Selectable_o *)0x0) {
                                              UnityEngine_UI_Selectable__set_targetGraphic
                                                        (pUVar15,value_02,(MethodInfo *)0x0);
                                              lVar3 = *(long *)pbVar16;
                                              plVar17 = (long *)(UnityEngine_UI_Toggle_o *)0x0;
                                              if (lVar3 != 0) {
                                                *(Il2CppObject **)(lVar3 + 0x108) = pIVar11;
                                                il2cpp_runtime_helper_022b4080(lVar3 + 0x108);
                                                plVar17 = (long *)(__this->fields)._hashSetSetting;
                                                if ((UnityEngine_UI_Toggle_o *)plVar17 !=
                                                    (UnityEngine_UI_Toggle_o *)0x0) {
                                                  pUVar9 = *(UnityEngine_UI_Toggle_o **)pbVar16;
                                                  uVar5 = Settings_HashSetSetting_int___Contains
                                                                    ((Settings_HashSetSetting_int__o *)plVar17
                                                                     ,*(int32_t *)
                                                                       &(__this_04->fields).
                                                                        m_CancellationTokenSource,MethodInfo_Boolean_Contains
                                                                    );
                                                  if (pUVar9 != (UnityEngine_UI_Toggle_o *)0x0) {
                                                    UnityEngine_UI_Toggle__set_isOn
                                                              (pUVar9,uVar5 & 0xff,(MethodInfo *)0x0);
                                                    plVar17 = (long *)pUVar9;
                                                    if (*(long *)pbVar16 != 0) {
                                                      __this_00 = *(UnityEngine_Events_UnityEvent_bool__o **)
                                                                   (*(long *)pbVar16 + 0x118);
                                                      pUVar9 = (UnityEngine_UI_Toggle_o *)
                                                               il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
                                                      plVar17 = (long *)pUVar9;
                                                      UnityEngine_Events_UnityAction_bool____ctor();
                                                      if (__this_00 !=
                                                          (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
                                                        UnityEngine_Events_UnityEvent_bool___AddListener
                                                                  (__this_00,
                                                                   (UnityEngine_Events_UnityAction_T0__o *)
                                                                   pUVar9,MethodInfo_Void_AddListener);
                                                        pUVar15 = (UnityEngine_UI_Selectable_o *)
                                                                  UnityEngine_GameObject__GetComponent_object_
                                                                            ((UnityEngine_GameObject_o *)
                                                                             pUVar7,MethodInfo_Button_GetComponent_Button);
                                                        plVar17 = (long *)pUVar7;
                                                        if ((pUVar15 != (UnityEngine_UI_Selectable_o *)0x0) &&
                                                           (__this_01 = (pUVar15->fields).m_CanvasGroupCache,
                                                           plVar17 = (long *)0x0,
                                                           __this_01 !=
                                                           (System_Collections_Generic_List_CanvasGroup__o *)
                                                           0x0)) {
                                                                                                                    
                                                       UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                                                 ((UnityEngine_Events_UnityEventBase_o *)
                                                                  __this_01,(MethodInfo *)0x0);
                                                       UI_UIManager__GetThemeColorBlock
                                                                 (&local_88,themePanel,"DefaultSetting",
                                                                  "Dropdown","DefaultPanel",(MethodInfo *)0x0)
                                                       ;
                                                       value_01.fields.m_NormalColor.fields.b =
                                                            local_88.fields.m_NormalColor.fields.b;
                                                       value_01.fields.m_NormalColor.fields.a =
                                                            local_88.fields.m_NormalColor.fields.a;
                                                       value_01.fields.m_NormalColor.fields.r =
                                                            local_88.fields.m_NormalColor.fields.r;
                                                       value_01.fields.m_NormalColor.fields.g =
                                                            local_88.fields.m_NormalColor.fields.g;
                                                       value_01.fields.m_HighlightedColor.fields.r =
                                                            local_88.fields.m_HighlightedColor.fields.r;
                                                       value_01.fields.m_HighlightedColor.fields.g =
                                                            local_88.fields.m_HighlightedColor.fields.g;
                                                       value_01.fields.m_HighlightedColor.fields.b =
                                                            local_88.fields.m_HighlightedColor.fields.b;
                                                       value_01.fields.m_HighlightedColor.fields.a =
                                                            local_88.fields.m_HighlightedColor.fields.a;
                                                       value_01.fields.m_PressedColor.fields.r =
                                                            local_88.fields.m_PressedColor.fields.r;
                                                       value_01.fields.m_PressedColor.fields.g =
                                                            local_88.fields.m_PressedColor.fields.g;
                                                       value_01.fields.m_PressedColor.fields.b =
                                                            local_88.fields.m_PressedColor.fields.b;
                                                       value_01.fields.m_PressedColor.fields.a =
                                                            local_88.fields.m_PressedColor.fields.a;
                                                       value_01.fields.m_SelectedColor.fields.r =
                                                            local_88.fields.m_SelectedColor.fields.r;
                                                       value_01.fields.m_SelectedColor.fields.g =
                                                            local_88.fields.m_SelectedColor.fields.g;
                                                       value_01.fields.m_SelectedColor.fields.b =
                                                            local_88.fields.m_SelectedColor.fields.b;
                                                       value_01.fields.m_SelectedColor.fields.a =
                                                            local_88.fields.m_SelectedColor.fields.a;
                                                       value_01.fields.m_DisabledColor.fields.r =
                                                            local_88.fields.m_DisabledColor.fields.r;
                                                       value_01.fields.m_DisabledColor.fields.g =
                                                            local_88.fields.m_DisabledColor.fields.g;
                                                       value_01.fields.m_DisabledColor.fields.b =
                                                            local_88.fields.m_DisabledColor.fields.b;
                                                       value_01.fields.m_DisabledColor.fields.a =
                                                            local_88.fields.m_DisabledColor.fields.a;
                                                       value_01.fields.m_ColorMultiplier =
                                                            local_88.fields.m_ColorMultiplier;
                                                       value_01.fields.m_FadeDuration =
                                                            local_88.fields.m_FadeDuration;
                                                       UnityEngine_UI_Selectable__set_colors
                                                                 (pUVar15,value_01,(MethodInfo *)0x0);
                                                       __this_02 = (UnityEngine_Events_UnityEvent_o *)
                                                                   (pUVar15->fields).m_CanvasGroupCache;
                                                       pUVar7 = (UnityEngine_UI_Toggle_o *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                       plVar17 = (long *)pUVar7;
                                                       UnityEngine_Events_UnityAction___ctor();
                                                       if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0
                                                          ) {
                                                         UnityEngine_Events_UnityEvent__AddListener
                                                                   (__this_02,
                                                                    (UnityEngine_Events_UnityAction_o *)pUVar7
                                                                    ,(MethodInfo *)0x0);
                                                         __this_03 = (
                                                       System_Collections_Generic_Dictionary_int__object__o *)
                                                       (__this->fields)._toggles;
                                                       plVar17 = (long *)0x0;
                                                       if (__this_03 !=
                                                           (
                                                       System_Collections_Generic_Dictionary_int__object__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_int__object___set_Item
                                                                 (__this_03,
                                                                  *(int32_t *)
                                                                   &(__this_04->fields).
                                                                    m_CancellationTokenSource,
                                                                  *(Il2CppObject **)
                                                                   &(__this_04->fields).m_EnableCalled,
                                                                  MethodInfo_Void_set_Item);
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
  il2cpp_runtime_helper_022b2c90();
  plVar17 = (long *)(((UnityEngine_UI_Toggle_o *)plVar17)->fields).m_Navigation.fields.m_SelectOnDown;
  if ((UnityEngine_UI_Selectable_o *)plVar17 != (UnityEngine_UI_Selectable_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)plVar17,(MethodInfo *)0x0);
    if (g_data_057a6932 == '\0') {
      plVar17 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6932 = '\x01';
    }
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (pUVar8,(UnityEngine_Vector3_o)
                        *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c6 = '\x01';
  }
  pUVar15 = (((UnityEngine_UI_Selectable_o *)plVar17)->fields).m_Navigation.fields.m_SelectOnDown;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar15 = (((UnityEngine_UI_Selectable_o *)plVar17)->fields).m_Navigation.fields.m_SelectOnDown;
  if (pUVar15 != (UnityEngine_UI_Selectable_o *)0x0) {
    UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2c7 = '\x01';
  }
  pUVar18 = (pUVar15->fields).m_Navigation.fields.m_SelectOnLeft;
  if (pUVar18 != (UnityEngine_UI_Selectable_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar18,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UVar22 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
      pUVar4 = &(pUVar15->fields).m_Colors;
      uVar1 = (pUVar4->fields).m_HighlightedColor.fields.g;
      uVar2 = (pUVar4->fields).m_HighlightedColor.fields.b;
      fVar19 = (pUVar15->fields).m_Colors.fields.m_HighlightedColor.fields.a;
      if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar15 = (pUVar15->fields).m_Navigation.fields.m_SelectOnDown;
      pUVar18 = TypeInfo_UIManager;
      if (pUVar15 != (UnityEngine_UI_Selectable_o *)0x0) {
        fVar20 = *(float *)&(TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[2].monitor;
        __this_08 = (UnityEngine_UI_Selectable_o *)
                    UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
        pUVar18 = pUVar15;
        if (__this_08 != (UnityEngine_UI_Selectable_o *)0x0) {
          pUVar8 = (UnityEngine_Transform_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_08,MethodInfo_RectTransform_GetComponent_RectTransform);
          pUVar18 = __this_08;
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            fStackY_1e0 = UVar22.fields.x;
            fStackY_1dc = UVar22.fields.y;
            value_03.fields.x = fStackY_1e0 + (float)uVar1 * fVar20;
            value_03.fields.y = fStackY_1dc + (float)uVar2 * fVar20;
            value_03.fields.z = UVar22.fields.z + fVar19 * fVar20;
            UnityEngine_Transform__set_position(pUVar8,value_03,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c8 = '\x01';
  }
  pUVar15 = (pUVar18->fields).m_Navigation.fields.m_SelectOnDown;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar15 = (pUVar18->fields).m_Navigation.fields.m_SelectOnDown;
  if (pUVar15 != (UnityEngine_UI_Selectable_o *)0x0) {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar15,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2c9 = '\x01';
  }
  pUVar18 = (pUVar15->fields).m_Navigation.fields.m_SelectOnDown;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar15 = (pUVar15->fields).m_Navigation.fields.m_SelectOnDown;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar15,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MultiSelectDropdownElement$$OnToggleValueChanged
// il2cpp: void UI_MultiSelectDropdownElement__OnToggleValueChanged (UI_MultiSelectDropdownElement_o* __this, int32_t index, bool value, const MethodInfo* method);
// 0x4396220

void UI_MultiSelectDropdownElement__OnToggleValueChanged
               (UI_MultiSelectDropdownElement_o *__this,int32_t index,bool_conflict value,MethodInfo *method)

{
  Settings_HashSetSetting_int__c *x;
  UnityEngine_Events_UnityAction_o *pUVar1;
  System_Collections_Generic_HashSet_T__o *pSVar2;
  bool_conflict bVar3;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  undefined4 uVar4;
  Settings_HashSetSetting_int__o *__this_02;
  Il2CppClass *pIVar5;
  Il2CppObject *pIVar6;
  float fVar7;
  
  if (g_data_057ae2cc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Remove);
    g_data_057ae2cc = '\x01';
  }
  __this_02 = (__this->fields)._hashSetSetting;
  if (__this_02 != (Settings_HashSetSetting_int__o *)0x0) {
    if ((char)value == '\0') {
      Settings_HashSetSetting_int___Remove(__this_02,index,MethodInfo_Void_Remove);
      pUVar1 = (__this->fields)._onSelectionChanged;
    }
    else {
      Settings_HashSetSetting_int___Add(__this_02,index,MethodInfo_Void_Add);
      pUVar1 = (__this->fields)._onSelectionChanged;
    }
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar2 = __this_02[1].fields._value;
  pIVar5 = (Il2CppClass *)0x0;
  if (pSVar2 == (System_Collections_Generic_HashSet_T__o *)0x0) {
label_04396359:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae2cd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__25);
      g_data_057ae2cd = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__25);
    uVar4 = 0;
    pIVar6 = __this_01;
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar6,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar6[1].klass = uVar4;
      return;
    }
    __this_01[2].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar5);
    return;
  }
  bVar3 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pSVar2,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (g_data_057ae2cd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__25);
      g_data_057ae2cd = '\x01';
    }
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__25);
    pIVar5 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->_1).name = 0;
    if (__this_00 != (Il2CppClass *)0x0) {
      (__this_00->_1).byval_arg.data = __this_02;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this_02);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_02,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
    goto label_04396359;
  }
  if (g_data_057ae2ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2ce = '\x01';
  }
  x = __this_02[3].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (__this_02[3].klass == (Settings_HashSetSetting_int__c *)0x0) goto label_043961fd;
    fVar7 = UnityEngine_UI_Scrollbar__get_value
                      ((UnityEngine_UI_Scrollbar_o *)__this_02[3].klass,(MethodInfo *)0x0);
    *(float *)&__this_02[2].fields._value = fVar7;
  }
  pSVar2 = __this_02[1].fields._value;
  if (pSVar2 != (System_Collections_Generic_HashSet_T__o *)0x0) {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pSVar2,0,(MethodInfo *)0x0);
    return;
  }
label_043961fd:
  pIVar6 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement$$OnDropdownSelectedButtonClick
// il2cpp: void UI_MultiSelectDropdownElement__OnDropdownSelectedButtonClick (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x43962c0

void UI_MultiSelectDropdownElement__OnDropdownSelectedButtonClick
               (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool_conflict bVar3;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  undefined4 uVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *pIVar6;
  float fVar7;
  
  pUVar2 = (__this->fields)._optionsPanel;
  pIVar5 = (Il2CppClass *)0x0;
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_04396359:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae2cd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__25);
      g_data_057ae2cd = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__25);
    uVar4 = 0;
    pIVar6 = __this_01;
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 != (Il2CppObject *)0x0) {
      __this_01[2].klass = pIVar5;
      il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar5);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar6[1].klass = uVar4;
    return;
  }
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (g_data_057ae2cd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__25);
      g_data_057ae2cd = '\x01';
    }
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__25);
    pIVar5 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->_1).name = 0;
    if (__this_00 != (Il2CppClass *)0x0) {
      (__this_00->_1).byval_arg.data = __this;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
    goto label_04396359;
  }
  if (g_data_057ae2ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2ce = '\x01';
  }
  pUVar1 = (__this->fields)._scrollBar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._scrollBar;
    if (pUVar1 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_043961fd;
    fVar7 = UnityEngine_UI_Scrollbar__get_value(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar7;
  }
  pUVar2 = (__this->fields)._optionsPanel;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,0,(MethodInfo *)0x0);
    return;
  }
label_043961fd:
  pIVar6 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement$$WaitAndEnableOptions
// il2cpp: System_Collections_IEnumerator_o* UI_MultiSelectDropdownElement__WaitAndEnableOptions (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4396360

System_Collections_IEnumerator_o *
UI_MultiSelectDropdownElement__WaitAndEnableOptions
          (UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae2cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__25);
    g_data_057ae2cd = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__25);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.MultiSelectDropdownElement$$CloseOptions
// il2cpp: void UI_MultiSelectDropdownElement__CloseOptions (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x4396180

void UI_MultiSelectDropdownElement__CloseOptions(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  Il2CppObject *__this_01;
  float fVar3;
  
  if (g_data_057ae2ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2ce = '\x01';
  }
  pUVar1 = (__this->fields)._scrollBar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._scrollBar;
    if (pUVar1 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_043961fd;
    fVar3 = UnityEngine_UI_Scrollbar__get_value(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar3;
  }
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    return;
  }
label_043961fd:
  __this_01 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement$$SyncElement
// il2cpp: void UI_MultiSelectDropdownElement__SyncElement (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x43963f0

void UI_MultiSelectDropdownElement__SyncElement(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Settings_HashSetSetting_int__o *__this_01;
  long lVar1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_05;
  bool_conflict bVar2;
  int32_t item;
  uint uVar3;
  long *plVar4;
  UnityEngine_UI_Toggle_o *__this_06;
  undefined1 auVar5 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar10;
  
  if (g_data_057ae2cf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Int32_UnityEngine_UI_Toggle_get_Cu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Toggle_get_Value);
    g_data_057ae2cf = '\x01';
  }
  pIVar8 = (Il2CppObject *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  pSVar10 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._toggles;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&stack0xffffffffffffffa8,
               __this_00,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEn);
    while( true ) {
      __this_02.fields._8_8_ = pIVar7;
      __this_02.fields._dictionary = pSVar6;
      __this_02.fields._current.fields.key = pIVar8;
      __this_02.fields._current.fields.value = pIVar9;
      __this_02.fields._32_8_ = pSVar10;
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                        (__this_02,(MethodInfo_3243CF0 *)&stack0xffffffffffffffa8);
      if ((char)bVar2 == '\0') {
        __this_03.fields._8_8_ = pIVar7;
        __this_03.fields._dictionary = pSVar6;
        __this_03.fields._current.fields.key = pIVar8;
        __this_03.fields._current.fields.value = pIVar9;
        __this_03.fields._32_8_ = pSVar10;
        System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                  (__this_03,(MethodInfo_3243E00 *)&stack0xffffffffffffffa8);
        return;
      }
      item = il2cpp_runtime_helper_02776c30(&stack0xffffffffffffffa8,MethodInfo_KeyValuePair_2_System_Int32_UnityEngine_UI_Toggle_get_Cu);
      __this_01 = (__this->fields)._hashSetSetting;
      if (__this_01 == (Settings_HashSetSetting_int__o *)0x0) break;
      uVar3 = Settings_HashSetSetting_int___Contains(__this_01,item,MethodInfo_Boolean_Contains);
      if (__this_06 == (UnityEngine_UI_Toggle_o *)0x0) goto label_04396530;
      UnityEngine_UI_Toggle__set_isOn(__this_06,uVar3 & 0xff,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_04396530:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar7;
    __this_04.fields._dictionary = pSVar6;
    __this_04.fields._current.fields.key = pIVar8;
    __this_04.fields._current.fields.value = pIVar9;
    __this_04.fields._32_8_ = pSVar10;
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
              (__this_04,(MethodInfo_3243E00 *)&stack0xffffffffffffffa8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._8_8_ = pIVar7;
  __this_05.fields._dictionary = pSVar6;
  __this_05.fields._current.fields.key = pIVar8;
  __this_05.fields._current.fields.value = pIVar9;
  __this_05.fields._32_8_ = pSVar10;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
            (__this_05,(MethodInfo_3243E00 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar5._0_8_);
}


// UI.MultiSelectDropdownElement$$.ctor
// il2cpp: void UI_MultiSelectDropdownElement___ctor (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x43965d0

void UI_MultiSelectDropdownElement___ctor(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  
  if (g_data_057ae2d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_UI_Toggle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_Toggle);
    g_data_057ae2d0 = '\x01';
  }
  (__this->fields)._currentScrollValue = 1.0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_Toggle);
  System_Collections_Generic_Dictionary_int__object____ctor(__this_00,MethodInfo_Dictionary_2_System_Int32_UnityEngine_UI_Toggle);
  (__this->fields)._toggles = (System_Collections_Generic_Dictionary_int__Toggle__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._toggles);
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._lastKnownPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._lastKnownPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._lastKnownPosition.fields.z = fVar1;
  (__this->fields)._checkMarkSizeMultiplier = 0.67;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiSelectDropdownElement$$<Setup>b__15_0
// il2cpp: void UI_MultiSelectDropdownElement___Setup_b__15_0 (UI_MultiSelectDropdownElement_o* __this, const MethodInfo* method);
// 0x43966a0

void UI_MultiSelectDropdownElement___Setup_b__15_0(UI_MultiSelectDropdownElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool_conflict bVar3;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  undefined4 uVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *pIVar6;
  float fVar7;
  
  pUVar2 = (__this->fields)._optionsPanel;
  pIVar5 = (Il2CppClass *)0x0;
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_04396359:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae2cd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__25);
      g_data_057ae2cd = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__25);
    uVar4 = 0;
    pIVar6 = __this_01;
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 != (Il2CppObject *)0x0) {
      __this_01[2].klass = pIVar5;
      il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar5);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar6[1].klass = uVar4;
    return;
  }
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (g_data_057ae2cd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__25);
      g_data_057ae2cd = '\x01';
    }
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__25);
    pIVar5 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->_1).name = 0;
    if (__this_00 != (Il2CppClass *)0x0) {
      (__this_00->_1).byval_arg.data = __this;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
    goto label_04396359;
  }
  if (g_data_057ae2ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2ce = '\x01';
  }
  pUVar1 = (__this->fields)._scrollBar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._scrollBar;
    if (pUVar1 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_043961fd;
    fVar7 = UnityEngine_UI_Scrollbar__get_value(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar7;
  }
  pUVar2 = (__this->fields)._optionsPanel;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,0,(MethodInfo *)0x0);
    return;
  }
label_043961fd:
  pIVar6 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  return;
}


