// Type: UI.MapEditorAddComponentPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorAddComponentPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPopup.cs
// --------------------------------

// UI.MapEditorAddComponentPopup.<>c__DisplayClass20_0$$.ctor
// il2cpp: void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___ctor (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x4416e70

void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___ctor
               (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup.<>c__DisplayClass20_0$$<SetupTopButtons>b__0
// il2cpp: void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___SetupTopButtons_b__0 (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x44172e0

void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___SetupTopButtons_b__0
               (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddComponentPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorAddComponentPopup_o *)0x0) {
    UI_MapEditorAddComponentPopup__OnTopBarButtonClick(__this_00,(__this->fields).buttonName,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.MapEditorAddComponentPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorAddComponentPopup__get_Title (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4416810

System_String_o *
UI_MapEditorAddComponentPopup__get_Title(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.MapEditorAddComponentPopup$$get_Width
// il2cpp: float UI_MapEditorAddComponentPopup__get_Width (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4416830

float UI_MapEditorAddComponentPopup__get_Width(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorAddComponentPopup$$get_Height
// il2cpp: float UI_MapEditorAddComponentPopup__get_Height (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4416840

float UI_MapEditorAddComponentPopup__get_Height(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.MapEditorAddComponentPopup$$get_CategoryPanel
// il2cpp: bool UI_MapEditorAddComponentPopup__get_CategoryPanel (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4416850

bool_conflict
UI_MapEditorAddComponentPopup__get_CategoryPanel(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddComponentPopup$$get_CategoryButtons
// il2cpp: bool UI_MapEditorAddComponentPopup__get_CategoryButtons (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4416860

bool_conflict
UI_MapEditorAddComponentPopup__get_CategoryButtons(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddComponentPopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorAddComponentPopup__get_TopBarHeight (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4416870

float UI_MapEditorAddComponentPopup__get_TopBarHeight
                (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorAddComponentPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorAddComponentPopup__get_DefaultCategoryPanel (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4416880

System_String_o *
UI_MapEditorAddComponentPopup__get_DefaultCategoryPanel
          (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae619 == '\0') {
    il2cpp_runtime_helper_023445d0(&"General");
    g_data_057ae619 = '\x01';
  }
  return "General";
}


// UI.MapEditorAddComponentPopup$$Setup
// il2cpp: void UI_MapEditorAddComponentPopup__Setup (UI_MapEditorAddComponentPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x44168b0

void UI_MapEditorAddComponentPopup__Setup
               (UI_MapEditorAddComponentPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Settings_StringSetting_o *setting;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  System_String_o *pSVar2;
  UI_ElementStyle_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_GameObject_o *__this_01;
  UI_InputSettingElement_o *pUVar5;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar6;
  long lVar7;
  UI_HeadedPanel_o *__this_02;
  UI_HeadedPanel_o *__this_03;
  Il2CppObject *value;
  UI_HeadedPanel_o *__this_04;
  UI_HeadedPanel_o *parent_00;
  ulong uVar8;
  float fVar9;
  
  if (g_data_057ae61a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__18_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__18_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Search");
    g_data_057ae61a = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar3,0x18,70.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  setting = (__this->fields).Search;
  pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  __this_01 = UI_ElementFactory__CreateInputSetting
                        (pUVar1,pUVar3,(Settings_BaseSetting_o *)setting,"Search","",200.0,40.0,
                         0,(UnityEngine_Events_UnityAction_o *)0x0,pUVar4,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UI_InputSettingElement_o *)UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    (__this->fields)._searchInput = pUVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._searchInput,pUVar5);
    pUVar5 = (__this->fields)._searchInput;
    if (pUVar5 != (UI_InputSettingElement_o *)0x0) {
      pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
      if (pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar6,5.0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).BottomBar;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(pUVar1,pUVar3,pSVar2,0.0,pUVar4,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).BottomBar;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                   UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar1,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup)
          ;
          fVar9 = (float)(*(__this->klass->vtable)._5_get_Width.methodPtr)(__this);
          if (pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      (pUVar6,fVar9 + -365.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae61b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Internal");
    il2cpp_runtime_helper_023445d0(&"All");
    g_data_057ae61b = '\x01';
  }
  __this_04 = TypeInfo_string;
  lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      __this_04 = (UI_HeadedPanel_o *)(lVar7 + 0x20);
      *(undefined8 *)(lVar7 + 0x20) = "All";
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar7 + 0x18)) {
        __this_04 = (UI_HeadedPanel_o *)(lVar7 + 0x28);
        *(undefined8 *)(lVar7 + 0x28) = "General";
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar7 + 0x18)) {
          __this_04 = (UI_HeadedPanel_o *)(lVar7 + 0x30);
          *(undefined8 *)(lVar7 + 0x30) = "Internal";
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x38) = "Custom";
            il2cpp_runtime_helper_022b4080(lVar7 + 0x38);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae61c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae61c = '\x01';
  }
  pSVar2 = (System_String_o *)
           (*(__this_04->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_04,(__this_04->klass->vtable)._4_get_ThemePanel.method);
  pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar3,0x14,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  parent_00 = __this_04;
  lVar7 = (**(code **)&__this_04->klass[1]._2.cctor_finished)();
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x18)) {
      uVar8 = 0;
      do {
        __this_02 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
        parent_00 = __this_02;
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_04416e57;
        parent_00 = (UI_HeadedPanel_o *)&(__this_02->fields).m_CancellationTokenSource;
        (__this_02->fields).m_CancellationTokenSource =
             (System_Threading_CancellationTokenSource_o *)__this_04;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar7 + 0x18) <= uVar8) goto label_04416e5c;
        (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar7 + 0x20 + uVar8 * 8);
        il2cpp_runtime_helper_022b4080(&__this_02->fields);
        parent_00 = (UI_HeadedPanel_o *)(__this_04->fields).TopBar;
        pSVar2 = (System_String_o *)(__this_02->fields).m_CachedPtr;
        pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_03 = (UI_HeadedPanel_o *)
                    UI_ElementFactory__CreateCategoryButton
                              ((UnityEngine_Transform_o *)parent_00,pUVar3,pSVar2,pUVar4,(MethodInfo *)0x0);
        if (__this_03 == (UI_HeadedPanel_o *)0x0) goto label_04416e57;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_04->fields)._topButtons
        ;
        key = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
        value = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
        parent_00 = __this_03;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04416e57;
        System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)*(int *)(lVar7 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons(__this_04,(MethodInfo *)0x0);
    return;
  }
label_04416e57:
  il2cpp_runtime_helper_022b2c90();
label_04416e5c:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent_00,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$GetCategories
// il2cpp: System_String_array* UI_MapEditorAddComponentPopup__GetCategories (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4416b60

System_String_array *
UI_MapEditorAddComponentPopup__GetCategories(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_01;
  long lVar3;
  UI_HeadedPanel_o *__this_02;
  UnityEngine_Events_UnityAction_o *onClick;
  UI_HeadedPanel_o *__this_03;
  Il2CppObject *value;
  System_String_array *extraout_RAX;
  System_String_array *extraout_RAX_00;
  UI_HeadedPanel_o *__this_04;
  UI_HeadedPanel_o *parent;
  ulong uVar4;
  
  if (g_data_057ae61b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Internal");
    il2cpp_runtime_helper_023445d0(&"All");
    g_data_057ae61b = '\x01';
  }
  __this_04 = TypeInfo_string;
  pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      __this_04 = (UI_HeadedPanel_o *)pSVar1->m_Items;
      pSVar1->m_Items[0] = "All";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar1->max_length) {
        __this_04 = (UI_HeadedPanel_o *)(pSVar1->m_Items + 1);
        pSVar1->m_Items[1] = "General";
        il2cpp_runtime_helper_022b4080();
        if (2 < (uint)pSVar1->max_length) {
          __this_04 = (UI_HeadedPanel_o *)(pSVar1->m_Items + 2);
          pSVar1->m_Items[2] = "Internal";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "Custom";
            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 3);
            return pSVar1;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae61c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae61c = '\x01';
  }
  pSVar2 = (System_String_o *)
           (*(__this_04->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_04,(__this_04->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x14,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  parent = __this_04;
  lVar3 = (**(code **)&__this_04->klass[1]._2.cctor_finished)();
  if (lVar3 != 0) {
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar4 = 0;
      do {
        __this_02 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
        parent = __this_02;
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_04416e57;
        parent = (UI_HeadedPanel_o *)&(__this_02->fields).m_CancellationTokenSource;
        (__this_02->fields).m_CancellationTokenSource =
             (System_Threading_CancellationTokenSource_o *)__this_04;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar3 + 0x18) <= uVar4) goto label_04416e5c;
        (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar4 * 8);
        il2cpp_runtime_helper_022b4080(&__this_02->fields);
        parent = (UI_HeadedPanel_o *)(__this_04->fields).TopBar;
        pSVar2 = (System_String_o *)(__this_02->fields).m_CachedPtr;
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_03 = (UI_HeadedPanel_o *)
                    UI_ElementFactory__CreateCategoryButton
                              ((UnityEngine_Transform_o *)parent,__this_01,pSVar2,onClick,(MethodInfo *)0x0);
        if (__this_03 == (UI_HeadedPanel_o *)0x0) goto label_04416e57;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_04->fields)._topButtons
        ;
        key = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
        value = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
        parent = __this_03;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04416e57;
        System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)*(int *)(lVar3 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons(__this_04,(MethodInfo *)0x0);
    return extraout_RAX;
  }
label_04416e57:
  il2cpp_runtime_helper_022b2c90();
label_04416e5c:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// UI.MapEditorAddComponentPopup$$SetupTopButtons
// il2cpp: void UI_MapEditorAddComponentPopup__SetupTopButtons (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4416c60

void UI_MapEditorAddComponentPopup__SetupTopButtons
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  long lVar2;
  UI_MapEditorAddComponentPopup_o *__this_02;
  UnityEngine_Events_UnityAction_o *onClick;
  UI_MapEditorAddComponentPopup_o *__this_03;
  Il2CppObject *value;
  UI_MapEditorAddComponentPopup_o *parent;
  ulong uVar3;
  
  if (g_data_057ae61c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae61c = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x14,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent = __this;
  lVar2 = (*(__this->klass->vtable)._59_GetCategories.methodPtr)();
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar3 = 0;
      do {
        __this_02 = (UI_MapEditorAddComponentPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
        parent = __this_02;
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        if (__this_02 == (UI_MapEditorAddComponentPopup_o *)0x0) goto label_04416e57;
        parent = (UI_MapEditorAddComponentPopup_o *)&(__this_02->fields).m_CancellationTokenSource;
        (__this_02->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto label_04416e5c;
        (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar2 + 0x20 + uVar3 * 8);
        il2cpp_runtime_helper_022b4080(&__this_02->fields);
        parent = (UI_MapEditorAddComponentPopup_o *)(__this->fields).TopBar;
        pSVar1 = (System_String_o *)(__this_02->fields).m_CachedPtr;
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_03 = (UI_MapEditorAddComponentPopup_o *)
                    UI_ElementFactory__CreateCategoryButton
                              ((UnityEngine_Transform_o *)parent,__this_01,pSVar1,onClick,(MethodInfo *)0x0);
        if (__this_03 == (UI_MapEditorAddComponentPopup_o *)0x0) goto label_04416e57;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
        key = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
        value = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
        parent = __this_03;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04416e57;
        System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
    }
    UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
    return;
  }
label_04416e57:
  il2cpp_runtime_helper_022b2c90();
label_04416e5c:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$OnTopBarButtonClick
// il2cpp: void UI_MapEditorAddComponentPopup__OnTopBarButtonClick (UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4416e80

void UI_MapEditorAddComponentPopup__OnTopBarButtonClick
               (UI_MapEditorAddComponentPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  System_Type_o *value;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *pIVar7;
  Il2CppObject *key;
  
  if (g_data_057ae61d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae61d = '\x01';
  }
  __this_00 = (__this->fields).Search;
  if (__this_00 == (Settings_StringSetting_o *)0x0) {
label_04416f53:
    lVar4 = 0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae61e == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      il2cpp_runtime_helper_023445d0(&TypeRef_MapEditorAddComponentPanel);
      g_data_057ae61e = '\x01';
    }
    pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    vtableDispatch = (Il2CppMethodPointer)0x0;
    pIVar7 = (Il2CppObject *)0x0;
    if ((*(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 0x78) !=
         (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 0x78),
                               MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni),
       __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 &stack0xffffffffffffffa0,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      key = pIVar7;
      while( true ) {
        __this_02.fields._8_8_ = vtableDispatch;
        __this_02.fields._dictionary = pSVar6;
        __this_02.fields._currentKey = key;
        bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          (__this_02,(MethodInfo_3251B20 *)&stack0xffffffffffffffa0);
        handle = TypeRef_MapEditorAddComponentPanel;
        if ((char)bVar2 == '\0') {
          __this_03.fields._8_8_ = vtableDispatch;
          __this_03.fields._dictionary = pSVar6;
          __this_03.fields._currentKey = key;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffffa0);
          return;
        }
        __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 0x50);
        pIVar7 = key;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Add
                  (__this_01,key,(Il2CppObject *)value,MethodInfo_Void_Add);
        key = pIVar7;
      }
      il2cpp_runtime_helper_022b2c90();
    }
    auVar5 = il2cpp_runtime_helper_022b2c90();
    if (auVar5._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar5._0_8_);
      lVar4 = *plVar3;
      __cxa_end_catch();
      __this_04.fields._8_8_ = vtableDispatch;
      __this_04.fields._dictionary = pSVar6;
      __this_04.fields._currentKey = pIVar7;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffffa0);
      if (lVar4 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar4);
    }
    __this_05.fields._8_8_ = vtableDispatch;
    __this_05.fields._dictionary = pSVar6;
    __this_05.fields._currentKey = pIVar7;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffffa0);
    _Unwind_Resume(auVar5._0_8_);
  }
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
             MethodInfo_Void_set_Value);
  pUVar1 = (__this->fields)._searchInput;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._searchInput;
    if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto label_04416f53;
    (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)(pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
  }
  vtableDispatch = (__this->klass->vtable)._28_SetCategoryPanel.methodPtr;
  (*vtableDispatch)
            (__this,name,(__this->klass->vtable)._28_SetCategoryPanel.method,vtableDispatch);
  return;
}


// UI.MapEditorAddComponentPopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorAddComponentPopup__RegisterCategoryPanels (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4416f60

void UI_MapEditorAddComponentPopup__RegisterCategoryPanels
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  System_Type_o *value;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *key;
  
  if (g_data_057ae61e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeRef_MapEditorAddComponentPanel);
    g_data_057ae61e = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni),
     __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffb8,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    key = pIVar8;
    while( true ) {
      __this_00.fields._8_8_ = pIVar7;
      __this_00.fields._dictionary = pSVar6;
      __this_00.fields._currentKey = key;
      bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffffb8);
      handle.fields.value = TypeRef_MapEditorAddComponentPanel.fields.value;
      if ((char)bVar3 == '\0') {
        __this_01.fields._8_8_ = pIVar7;
        __this_01.fields._dictionary = pSVar6;
        __this_01.fields._currentKey = key;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
        return;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      pIVar8 = key;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,key,(Il2CppObject *)value,MethodInfo_Void_Add);
      key = pIVar8;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._dictionary = pSVar6;
    __this_02.fields._currentKey = pIVar8;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._8_8_ = pIVar7;
  __this_03.fields._dictionary = pSVar6;
  __this_03.fields._currentKey = pIVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar5._0_8_);
}


// UI.MapEditorAddComponentPopup$$Show
// il2cpp: void UI_MapEditorAddComponentPopup__Show (UI_MapEditorAddComponentPopup_o* __this, UnityEngine_Events_UnityAction_o* onLoad, const MethodInfo* method);
// 0x4417150

void UI_MapEditorAddComponentPopup__Show
               (UI_MapEditorAddComponentPopup_o *__this,UnityEngine_Events_UnityAction_o *onLoad,
               MethodInfo *method)

{
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._onLoad = onLoad;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onLoad);
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$OnSelectItem
// il2cpp: void UI_MapEditorAddComponentPopup__OnSelectItem (UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x44166f0

void UI_MapEditorAddComponentPopup__OnSelectItem
               (UI_MapEditorAddComponentPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 extraout_RDX;
  UI_CategoryPanel_o *__this_01;
  
  if (g_data_057ae61f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae61f = '\x01';
  }
  __this_01 = (UI_CategoryPanel_o *)(__this->fields).FinishSetting;
  if (__this_01 != (UI_CategoryPanel_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)name,MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._onLoad;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
      (*vtableDispatch)
                (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae618 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae618 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  __this_01[1].monitor = __this_00;
  il2cpp_runtime_helper_022b4080(&__this_01[1].monitor);
  UI_CategoryPanel___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorAddComponentPopup__OnBottomBarButtonClick (UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4417190

void UI_MapEditorAddComponentPopup__OnBottomBarButtonClick
               (UI_MapEditorAddComponentPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,method,vtableDispatch);
  return;
}


// UI.MapEditorAddComponentPopup$$.ctor
// il2cpp: void UI_MapEditorAddComponentPopup___ctor (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x44171b0

void UI_MapEditorAddComponentPopup___ctor(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (g_data_057ae620 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae620 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Search = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Search,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FinishSetting = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FinishSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$<Setup>b__18_0
// il2cpp: void UI_MapEditorAddComponentPopup___Setup_b__18_0 (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x4417290

void UI_MapEditorAddComponentPopup___Setup_b__18_0(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$<Setup>b__18_1
// il2cpp: void UI_MapEditorAddComponentPopup___Setup_b__18_1 (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x44172a0

void UI_MapEditorAddComponentPopup___Setup_b__18_1(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ae621 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae621 = '\x01';
    in_RDX = extraout_RDX;
  }
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


