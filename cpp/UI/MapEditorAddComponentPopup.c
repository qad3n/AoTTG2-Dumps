// Type: UI.MapEditorAddComponentPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorAddComponentPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPopup.cs
// --------------------------------

// UI.MapEditorAddComponentPopup.<>c__DisplayClass20_0$$.ctor
// il2cpp: void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___ctor (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorAddComponentPopup___c__DisplayClass20_0___ctor(UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup.<>c__DisplayClass20_0$$<SetupTopButtons>b__0
// il2cpp: void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___SetupTopButtons_b__0 (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x1822b8f30

void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___SetupTopButtons_b__0
               (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddComponentPopup_o *pUVar1;
  System_String_o *pSVar2;
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar3;
  bool bVar4;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MapEditorAddComponentPopup_o *)0x0) {
    pSVar2 = (__this->fields).buttonName;
    if (Il2CppMethodInitialized_1843474ab == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
      Il2CppMethodInitialized_1843474ab = '\x01';
    }
    __this_00 = (pUVar1->fields).Search;
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,
                 (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar3 = (pUVar1->fields)._searchInput;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pUVar3 = (pUVar1->fields)._searchInput;
        if (pUVar3 == (UI_InputSettingElement_o *)0x0) goto label_1822b9014;
        (*(pUVar3->klass->vtable)._6_SyncElement.methodPtr)
                  (pUVar3,(pUVar3->klass->vtable)._6_SyncElement.method);
      }
      (*(pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr)
                (pUVar1,pSVar2,(pUVar1->klass->vtable)._28_SetCategoryPanel.method);
      return;
    }
  }
label_1822b9014:
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorAddComponentPopup__get_Title (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_MapEditorAddComponentPopup__get_Title(UI_MapEditorAddComponentPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.MapEditorAddComponentPopup$$get_Width
// il2cpp: float UI_MapEditorAddComponentPopup__get_Width (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x18210fb90

float
UI_MapEditorAddComponentPopup__get_Width(UI_MapEditorAddComponentPopup_o* __this, MethodInfo* method)

{
  return 500.0;
}


// UI.MapEditorAddComponentPopup$$get_Height
// il2cpp: float UI_MapEditorAddComponentPopup__get_Height (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x1821500a0

float UI_MapEditorAddComponentPopup__get_Height(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.MapEditorAddComponentPopup$$get_CategoryPanel
// il2cpp: bool UI_MapEditorAddComponentPopup__get_CategoryPanel (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorAddComponentPopup__get_CategoryPanel(UI_MapEditorAddComponentPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorAddComponentPopup$$get_CategoryButtons
// il2cpp: bool UI_MapEditorAddComponentPopup__get_CategoryButtons (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorAddComponentPopup__get_CategoryButtons(UI_MapEditorAddComponentPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorAddComponentPopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorAddComponentPopup__get_TopBarHeight (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x1821c3380

float
UI_MapEditorAddComponentPopup__get_TopBarHeight(UI_MapEditorAddComponentPopup_o* __this, MethodInfo* method)

{
  return 65.0;
}


// UI.MapEditorAddComponentPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorAddComponentPopup__get_DefaultCategoryPanel (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x18229e110

System_String_o *
UI_MapEditorAddComponentPopup__get_DefaultCategoryPanel
          (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_1843474a7 = '\x01';
  }
  return "General";
}


// UI.MapEditorAddComponentPopup$$Setup
// il2cpp: void UI_MapEditorAddComponentPopup__Setup (UI_MapEditorAddComponentPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18229dcf0

void UI_MapEditorAddComponentPopup__Setup
               (UI_MapEditorAddComponentPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Settings_StringSetting_o *setting;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *__this_01;
  UI_InputSettingElement_o *pUVar4;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_1843474a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorAddComponentPopup_Setup_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorAddComponentPopup_Setup_b__18_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    Il2CppMethodInitialized_1843474a8 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,70.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  setting = (__this->fields).Search;
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorAddComponentPopup_Setup_b__18_0,(MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateInputSetting
                        (pUVar1,__this_00,(Settings_BaseSetting_o *)setting,"Search",
                         "",200.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar3
                         ,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                         (MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (__this_01,
                        (MethodInfo_6F5650 *)
                        MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    (__this->fields)._searchInput = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._searchInput,pUVar4);
    pUVar4 = (__this->fields)._searchInput;
    if (pUVar4 != (UI_InputSettingElement_o *)0x0) {
      pUVar5 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar4,
                          (MethodInfo_6651A0 *)
                          MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
      if (pUVar5 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar5,5.0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).BottomBar;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
        pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_MapEditorAddComponentPopup_Setup_b__18_1,(MethodInfo *)0x0);
        UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).BottomBar;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar1,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
          fVar6 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                            (__this,(__this->klass->vtable)._5_get_Width.method);
          if (pUVar5 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar5,fVar6 - 365.0,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPopup$$GetCategories
// il2cpp: System_String_array* UI_MapEditorAddComponentPopup__GetCategories (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x18229d6f0

System_String_array *
UI_MapEditorAddComponentPopup__GetCategories(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_1843474a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Internal");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    Il2CppMethodInitialized_1843474a9 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar1 = "All";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "All";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      pSVar1 = "General";
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "General";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
        pSVar1 = "Internal";
        if (2 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[2] = "Internal";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
          pSVar1 = "Custom";
          if (3 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[3] = "Custom";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
            return pSVar2;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPopup$$SetupTopButtons
// il2cpp: void UI_MapEditorAddComponentPopup__SetupTopButtons (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x18229dae0

void UI_MapEditorAddComponentPopup__SetupTopButtons
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  System_String_array *pSVar2;
  UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *value;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843474aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorAddComponentPopup_c__DisplayClass20_0_SetupTopButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddComponentPopup_c__DisplayClass20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_1843474aa = '\x01';
  }
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x14,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._62_GetCategories.methodPtr)
                     (__this,(__this->klass->vtable)._62_GetCategories.method);
  if (pSVar2 != (System_String_array *)0x0) {
    uVar3 = 0;
    while( true ) {
      if ((int)pSVar2->max_length <= (int)uVar3) {
        UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
        return;
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_UI_MapEditorAddComponentPopup_c__DisplayClass20_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o *)0x0) break;
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pSVar1 = pSVar2->m_Items[(int)uVar3];
      (object->fields).buttonName = pSVar1;
      Il2CppCodeGenWriteBarrier(&(object->fields).buttonName,pSVar1);
      parent = (__this->fields).TopBar;
      pSVar1 = (object->fields).buttonName;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorAddComponentPopup_c__DisplayClass20_0_SetupTopButtons_b__0,
                 (MethodInfo *)0x0);
      __this_03 = UI_ElementFactory__CreateCategoryButton(parent,__this_01,pSVar1,__this_02,(MethodInfo *)0x0)
      ;
      if (__this_03 == (UnityEngine_GameObject_o *)0x0) break;
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
      pSVar1 = (object->fields).buttonName;
      value = UnityEngine_GameObject__GetComponent_object_
                        (__this_03,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button)
      ;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_00,(Il2CppObject *)pSVar1,(Il2CppObject *)value,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
      uVar3 = uVar3 + 1;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPopup$$OnTopBarButtonClick
// il2cpp: void UI_MapEditorAddComponentPopup__OnTopBarButtonClick (UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18229d870

void UI_MapEditorAddComponentPopup__OnTopBarButtonClick
               (UI_MapEditorAddComponentPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843474ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_1843474ab = '\x01';
  }
  __this_00 = (__this->fields).Search;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8)
               ,(MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar1 = (__this->fields)._searchInput;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._searchInput;
      if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto label_18229d949;
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
    }
    (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
              (__this,name,(__this->klass->vtable)._28_SetCategoryPanel.method);
    return;
  }
label_18229d949:
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorAddComponentPopup__RegisterCategoryPanels (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x18229d950
// eh: try 0x18229da31..0x18229dacf -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18229daa2: mov rdx, qword ptr [rip + 0x1e1be77]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Button_Dispose
// asm:   0x18229daa9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18229daae: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18229dab3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18229dab8: test rcx, rcx
// asm:   0x18229dabb: jne 0x18229dacf
// asm:   0x18229dacf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MapEditorAddComponentPopup__RegisterCategoryPanels
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Button__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppType *handle;
  Il2CppObject *key;
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Type_o *value;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_1843474ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Button_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Button_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Button_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Button_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MapEditorAddComponentPanel);
    Il2CppMethodInitialized_1843474ac = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentKey = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._topButtons;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__Button__o *)0x0) {
    __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Keys);
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_02,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Button_GetEnumerator);
      local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._currentKey = local_50;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                          (&local_48,
                           (MethodInfo_156BDD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Button_MoveNext
                          );
        key = local_48.fields._currentKey;
        handle = TypeRef_UI_MapEditorAddComponentPanel;
        if (!bVar1) {
          System_Configuration_ConfigurationCollectionAttribute___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Button_Dispose
                    );
          return;
        }
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields)._categoryPanelTypes;
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        value = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Add
                  (__this_01,key,(Il2CppObject *)value,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPopup$$Show
// il2cpp: void UI_MapEditorAddComponentPopup__Show (UI_MapEditorAddComponentPopup_o* __this, UnityEngine_Events_UnityAction_o* onLoad, const MethodInfo* method);
// 0x18229dfa0

void UI_MapEditorAddComponentPopup__Show
               (UI_MapEditorAddComponentPopup_o *__this,UnityEngine_Events_UnityAction_o *onLoad,
               MethodInfo *method)

{
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._onLoad = onLoad;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onLoad,onLoad);
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$OnSelectItem
// il2cpp: void UI_MapEditorAddComponentPopup__OnSelectItem (UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18229d7e0

void UI_MapEditorAddComponentPopup__OnSelectItem
               (UI_MapEditorAddComponentPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar1;
  
  if (Il2CppMethodInitialized_1843474ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_1843474ad = '\x01';
  }
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)name,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar1 = (__this->fields)._onLoad;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorAddComponentPopup__OnBottomBarButtonClick (UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x180a37400

void
UI_MapEditorAddComponentPopup__OnBottomBarButtonClick(UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, MethodInfo* method)

{
  Unity_VisualScripting_IGraph_o *pUVar1;
  
  pUVar1 = (Unity_VisualScripting_IGraph_o *)
           (*(__this->klass->vtable)._22_unknown.methodPtr)(__this,(__this->klass->vtable)._22_unknown.method)
  ;
  return pUVar1;
}


// UI.MapEditorAddComponentPopup$$.ctor
// il2cpp: void UI_MapEditorAddComponentPopup___ctor (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x18229e030

void UI_MapEditorAddComponentPopup___ctor(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843474ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_1843474ae = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Search = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Search,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FinishSetting = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FinishSetting,pSVar2);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$<Setup>b__18_0
// il2cpp: void UI_MapEditorAddComponentPopup___Setup_b__18_0 (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x18229a0d0

void
UI_MapEditorAddComponentPopup___Setup_b__18_0(UI_MapEditorAddComponentPopup_o* __this, MethodInfo* method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$<Setup>b__18_1
// il2cpp: void UI_MapEditorAddComponentPopup___Setup_b__18_1 (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x18229dff0

void UI_MapEditorAddComponentPopup___Setup_b__18_1(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843474af = '\x01';
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


