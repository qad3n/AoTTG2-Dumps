// Type: UI.MapEditorAddComponentPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/MapEditorAddComponentPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPopup.cs
// --------------------------------

// UI.MapEditorAddComponentPopup.<>c__DisplayClass20_0$$.ctor
// il2cpp: void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___ctor (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x5d5e080

void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___ctor
               (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup.<>c__DisplayClass20_0$$<SetupTopButtons>b__0
// il2cpp: void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___SetupTopButtons_b__0 (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x5d5e4d0

void UI_MapEditorAddComponentPopup___c__DisplayClass20_0___SetupTopButtons_b__0
               (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddComponentPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorAddComponentPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorAddComponentPopup__OnTopBarButtonClick(__this_00,(__this->fields).buttonName,in_RDX);
  return;
}


// UI.MapEditorAddComponentPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorAddComponentPopup__get_Title (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5da20

System_String_o *
UI_MapEditorAddComponentPopup__get_Title(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.MapEditorAddComponentPopup$$get_Width
// il2cpp: float UI_MapEditorAddComponentPopup__get_Width (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5da40

float UI_MapEditorAddComponentPopup__get_Width(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorAddComponentPopup$$get_Height
// il2cpp: float UI_MapEditorAddComponentPopup__get_Height (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5da50

float UI_MapEditorAddComponentPopup__get_Height(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.MapEditorAddComponentPopup$$get_CategoryPanel
// il2cpp: bool UI_MapEditorAddComponentPopup__get_CategoryPanel (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5da60

bool UI_MapEditorAddComponentPopup__get_CategoryPanel
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorAddComponentPopup$$get_CategoryButtons
// il2cpp: bool UI_MapEditorAddComponentPopup__get_CategoryButtons (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5da70

bool UI_MapEditorAddComponentPopup__get_CategoryButtons
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorAddComponentPopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorAddComponentPopup__get_TopBarHeight (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5da80

float UI_MapEditorAddComponentPopup__get_TopBarHeight
                (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorAddComponentPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorAddComponentPopup__get_DefaultCategoryPanel (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5da90

System_String_o *
UI_MapEditorAddComponentPopup__get_DefaultCategoryPanel
          (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547f5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_07547f5f = '\x01';
  }
  return "General";
}


// UI.MapEditorAddComponentPopup$$Setup
// il2cpp: void UI_MapEditorAddComponentPopup__Setup (UI_MapEditorAddComponentPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d5dac0

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
  
  if (Il2CppMethodInitialized_07547f60 == '\0') {
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
    Il2CppMethodInitialized_07547f60 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,70.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  setting = (__this->fields).Search;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Search",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar3,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorAddComponentPopup_Setup_b__18_0,
             (MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateInputSetting
                        (pUVar1,__this_00,(Settings_BaseSetting_o *)setting,pSVar2,"",200.0
                         ,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar3,
                         (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                         (MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (__this_01,
                        (MethodInfo_353B730 *)
                        MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    (__this->fields)._searchInput = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._searchInput);
    pUVar4 = (__this->fields)._searchInput;
    if (pUVar4 != (UI_InputSettingElement_o *)0x0) {
      pUVar5 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar4,
                          (MethodInfo_34B0830 *)
                          MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
      if (pUVar5 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar5,5.0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).BottomBar;
        pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
        pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar3,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_MapEditorAddComponentPopup_Setup_b__18_1,(MethodInfo *)0x0);
        UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).BottomBar;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar1,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
          fVar6 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                            (__this,(__this->klass->vtable)._5_get_Width.method);
          if (pUVar5 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar5,fVar6 + -365.0,
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
// 0x5d5dd80

System_String_array *
UI_MapEditorAddComponentPopup__GetCategories(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_07547f61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Internal");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    Il2CppMethodInitialized_07547f61 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "All";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "General";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = "Internal";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        if ((pSVar1->max_length & 0xfffffffc) != 0) {
          pSVar1->m_Items[3] = "Custom";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
          return pSVar1;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorAddComponentPopup$$SetupTopButtons
// il2cpp: void UI_MapEditorAddComponentPopup__SetupTopButtons (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5de80

void UI_MapEditorAddComponentPopup__SetupTopButtons
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  System_String_array *pSVar2;
  UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o *__this_02;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_UI_Button_o *value;
  ulong uVar3;
  
  if (Il2CppMethodInitialized_07547f62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorAddComponentPopup_c__DisplayClass20_0_SetupTopButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddComponentPopup_c__DisplayClass20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_07547f62 = '\x01';
  }
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x14,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._62_GetCategories.methodPtr)
                     (__this,(__this->klass->vtable)._62_GetCategories.method);
  if (pSVar2 == (System_String_array *)0x0) {
label_05d5e076:
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar2->max_length) {
    uVar3 = 0;
    do {
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_MapEditorAddComponentPopup_c__DisplayClass20_0);
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      if (__this_02 == (UI_MapEditorAddComponentPopup___c__DisplayClass20_0_o *)0x0) goto label_05d5e076;
      (__this_02->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      (__this_02->fields).buttonName = pSVar2->m_Items[uVar3];
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).buttonName);
      parent = (__this->fields).TopBar;
      pSVar1 = (__this_02->fields).buttonName;
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_03,(Il2CppObject *)__this_02,
                 (intptr_t)MethodInfo_UI_MapEditorAddComponentPopup_c__DisplayClass20_0_SetupTopButtons_b__0,
                 (MethodInfo *)0x0);
      __this_04 = UI_ElementFactory__CreateCategoryButton(parent,__this_01,pSVar1,__this_03,(MethodInfo *)0x0)
      ;
      if (__this_04 == (UnityEngine_GameObject_o *)0x0) goto label_05d5e076;
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
      pSVar1 = (__this_02->fields).buttonName;
      value = UnityEngine_GameObject__GetComponent_object_
                        (__this_04,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button
                        );
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d5e076;
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_00,(Il2CppObject *)pSVar1,(Il2CppObject *)value,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)pSVar2->max_length);
  }
  UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$OnTopBarButtonClick
// il2cpp: void UI_MapEditorAddComponentPopup__OnTopBarButtonClick (UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d5e090

void UI_MapEditorAddComponentPopup__OnTopBarButtonClick
               (UI_MapEditorAddComponentPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547f63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547f63 = '\x01';
  }
  __this_00 = (__this->fields).Search;
  if (__this_00 == (Settings_StringSetting_o *)0x0) {
label_05d5e163:
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pUVar1 = (__this->fields)._searchInput;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._searchInput;
    if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto label_05d5e163;
    (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)(pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
  }
  (*(__this->klass->vtable)._28_SetCategoryPanel.methodPtr)
            (__this,name,(__this->klass->vtable)._28_SetCategoryPanel.method);
  return;
}


// UI.MapEditorAddComponentPopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorAddComponentPopup__RegisterCategoryPanels (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5e170
// eh: try 0x5d5e254..0x5d5e2d7 -> pad 0x5d5e2e0 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5e2fa..0x5d5e2ff -> pad 0x5d5e31e cleanup
// eh: try 0x5d5e321..0x5d5e32b -> pad 0x5d5e333 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5e24e: nop 
// asm:   0x5d5e2dc: jmp 0x5d5e2e2
// asm:   0x5d5e2de: jmp 0x5d5e2e2
// asm:   0x5d5e2e0: jmp 0x5d5e2e2
// asm:   0x5d5e2e2: mov rbx, rax
// asm:   0x5d5e2e5: cmp edx, 1
// asm:   0x5d5e2e8: jne 0x5d5e321
// asm:   0x5d5e2ea: mov rdi, rbx
// asm:   0x5d5e2ed: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5e2f2: mov rbx, qword ptr [rax]
// asm:   0x5d5e2f5: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d5e2fa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5e2ff: lea rax, [rip + 0x1531ba2]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Button_Dispose
// asm:   0x5d5e306: mov rsi, qword ptr [rax]
// asm:   0x5d5e309: mov rdi, rsp
// asm:   0x5d5e30c: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5d5e311: test rbx, rbx
// asm:   0x5d5e314: je 0x5d5e2c3
// asm:   0x5d5e316: mov rdi, rbx
// asm:   0x5d5e319: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d5e31e: mov rbx, rax
// asm:   0x5d5e321: lea rdi, [rsp + 0x18]
// asm:   0x5d5e326: call 0x2fdcc90  ; il2cpp_runtime_helper_02fdcc90()
// asm:   0x5d5e32b: mov rdi, rbx
// asm:   0x5d5e32e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d5e333: mov rdi, rax
// asm:   0x5d5e336: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorAddComponentPopup__RegisterCategoryPanels
               (UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  Il2CppObject *key;
  bool bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  System_Type_o *value;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_58;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (Il2CppMethodInitialized_07547f64 == '\0') {
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
    Il2CppMethodInitialized_07547f64 = '\x01';
  }
  SStack_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  SStack_58.fields._currentKey = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_00 = System_Collections_Generic_Dictionary_object__object___get_Keys
                          (pSVar1,(MethodInfo_4AAD0F0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_Button_get_Keys);
    if (__this_00 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                (&SStack_58,__this_00,
                 (MethodInfo_511A520 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_Button_GetEnumerator);
      uStack_40 = 0;
      puStack_38 = (undefined1 *)&SStack_58;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          (&SStack_58,
                           (MethodInfo_4CE7080 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Button_MoveNext
                          );
        key = SStack_58.fields._currentKey;
        handle = TypeRef_UI_MapEditorAddComponentPanel;
        if (!bVar2) {
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (&SStack_58,
                     (MethodInfo_4CE7070 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Button_Dispose
                    );
          return;
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._categoryPanelTypes;
        if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_075567a8);
        }
        value = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,key,(Il2CppObject *)value,
                   (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPopup$$Show
// il2cpp: void UI_MapEditorAddComponentPopup__Show (UI_MapEditorAddComponentPopup_o* __this, UnityEngine_Events_UnityAction_o* onLoad, const MethodInfo* method);
// 0x5d5e340

void UI_MapEditorAddComponentPopup__Show
               (UI_MapEditorAddComponentPopup_o *__this,UnityEngine_Events_UnityAction_o *onLoad,
               MethodInfo *method)

{
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._onLoad = onLoad;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onLoad);
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$OnSelectItem
// il2cpp: void UI_MapEditorAddComponentPopup__OnSelectItem (UI_MapEditorAddComponentPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d5d900

void UI_MapEditorAddComponentPopup__OnSelectItem
               (UI_MapEditorAddComponentPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547f65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547f65 = '\x01';
  }
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)name,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
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
// 0x5d5e380

void UI_MapEditorAddComponentPopup__OnBottomBarButtonClick
               (UI_MapEditorAddComponentPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.MapEditorAddComponentPopup$$.ctor
// il2cpp: void UI_MapEditorAddComponentPopup___ctor (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5e3a0

void UI_MapEditorAddComponentPopup___ctor(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547f66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07547f66 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Search = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Search);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FinishSetting = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FinishSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$<Setup>b__18_0
// il2cpp: void UI_MapEditorAddComponentPopup___Setup_b__18_0 (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5e480

void UI_MapEditorAddComponentPopup___Setup_b__18_0(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPopup$$<Setup>b__18_1
// il2cpp: void UI_MapEditorAddComponentPopup___Setup_b__18_1 (UI_MapEditorAddComponentPopup_o* __this, const MethodInfo* method);
// 0x5d5e490

void UI_MapEditorAddComponentPopup___Setup_b__18_1(UI_MapEditorAddComponentPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547f67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547f67 = '\x01';
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


