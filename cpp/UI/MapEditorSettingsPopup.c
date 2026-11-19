// Type: UI.MapEditorSettingsPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/MapEditorSettingsPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsPopup.cs
// --------------------------------

// UI.MapEditorSettingsPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass15_0___ctor (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5d9be70

void UI_MapEditorSettingsPopup___c__DisplayClass15_0___ctor
               (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5d9c7a0

void UI_MapEditorSettingsPopup___c__DisplayClass15_0___SetupTopButtons_b__0
               (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  UI_MapEditorSettingsPopup_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_MapEditorSettingsPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr)
            (pUVar1,(__this->fields).buttonName,(pUVar1->klass->vtable)._28_SetCategoryPanel.method);
  return;
}


// UI.MapEditorSettingsPopup.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass17_0___ctor (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x5d9bf70

void UI_MapEditorSettingsPopup___c__DisplayClass17_0___ctor
               (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup.<>c__DisplayClass17_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass17_0___SetupBottomButtons_b__0 (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x5d9c7d0

void UI_MapEditorSettingsPopup___c__DisplayClass17_0___SetupBottomButtons_b__0
               (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  UI_MapEditorSettingsPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorSettingsPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorSettingsPopup__OnBottomBarButtonClick(__this_00,(__this->fields).buttonName,in_RDX);
  return;
}


// UI.MapEditorSettingsPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorSettingsPopup__get_Title (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9b480

System_String_o * UI_MapEditorSettingsPopup__get_Title(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.MapEditorSettingsPopup$$get_Width
// il2cpp: float UI_MapEditorSettingsPopup__get_Width (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9b4a0

float UI_MapEditorSettingsPopup__get_Width(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  return 1010.0;
}


// UI.MapEditorSettingsPopup$$get_Height
// il2cpp: float UI_MapEditorSettingsPopup__get_Height (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9b4b0

float UI_MapEditorSettingsPopup__get_Height(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.MapEditorSettingsPopup$$get_CategoryPanel
// il2cpp: bool UI_MapEditorSettingsPopup__get_CategoryPanel (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9b4c0

bool UI_MapEditorSettingsPopup__get_CategoryPanel(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorSettingsPopup$$get_CategoryButtons
// il2cpp: bool UI_MapEditorSettingsPopup__get_CategoryButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9b4d0

bool UI_MapEditorSettingsPopup__get_CategoryButtons(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorSettingsPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorSettingsPopup__get_DefaultCategoryPanel (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9b4e0

System_String_o *
UI_MapEditorSettingsPopup__get_DefaultCategoryPanel(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548083 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_07548083 = '\x01';
  }
  return "General";
}


// UI.MapEditorSettingsPopup$$Setup
// il2cpp: void UI_MapEditorSettingsPopup__Setup (UI_MapEditorSettingsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d9b510

void UI_MapEditorSettingsPopup__Setup
               (UI_MapEditorSettingsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_SaveableSettingsContainer__o *pSVar3;
  Settings_MapEditorSettings_o *item;
  Settings_SaveableSettingsContainer_array *pSVar4;
  Settings_InputSettings_o *item_00;
  MethodInfo *pMVar5;
  
  if (Il2CppMethodInitialized_07548084 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07548084 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_MapEditorSettingsPopup__SetupBottomButtons(__this,(MethodInfo *)parent);
  pMVar5 = MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add;
  pSVar3 = (__this->fields)._saveableSettings;
  if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    item = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (pSVar3->fields)._items;
    if (pSVar4 != (Settings_SaveableSettingsContainer_array *)0x0) {
      uVar2 = (pSVar3->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (pSVar3->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = (Settings_SaveableSettingsContainer_o *)item;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      pMVar5 = MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add;
      pSVar3 = (__this->fields)._saveableSettings;
      if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
        item_00 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar3->fields)._items;
        if (pSVar4 != (Settings_SaveableSettingsContainer_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Settings_SaveableSettingsContainer_o *)item_00;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item_00,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsPopup$$SetupTopButtons
// il2cpp: void UI_MapEditorSettingsPopup__SetupTopButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9b960
// eh: try 0x5d9bc0a..0x5d9bdeb -> pad 0x5d9be06 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d9be24..0x5d9be29 -> pad 0x5d9be48 cleanup
// eh: try 0x5d9be4b..0x5d9be55 -> pad 0x5d9be5d catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9bbfd: nop dword ptr [rax]
// asm:   0x5d9bdf0: jmp 0x5d9be0c
// asm:   0x5d9bdf2: jmp 0x5d9be0c
// asm:   0x5d9bdf4: jmp 0x5d9be0c
// asm:   0x5d9bdf6: jmp 0x5d9be0c
// asm:   0x5d9bdf8: jmp 0x5d9be0c
// asm:   0x5d9bdfa: jmp 0x5d9be0c
// asm:   0x5d9bdfc: jmp 0x5d9be0c
// asm:   0x5d9bdfe: jmp 0x5d9be0c
// asm:   0x5d9be00: jmp 0x5d9be0c
// asm:   0x5d9be02: jmp 0x5d9be0c
// asm:   0x5d9be04: jmp 0x5d9be0c
// asm:   0x5d9be06: jmp 0x5d9be0c
// asm:   0x5d9be08: jmp 0x5d9be0c
// asm:   0x5d9be0a: jmp 0x5d9be0c
// asm:   0x5d9be0c: mov rbx, rax
// asm:   0x5d9be0f: cmp edx, 1
// asm:   0x5d9be12: jne 0x5d9be4b
// asm:   0x5d9be14: mov rdi, rbx
// asm:   0x5d9be17: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d9be1c: mov rbx, qword ptr [rax]
// asm:   0x5d9be1f: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d9be24: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d9be29: lea rax, [rip + 0x14f2cc8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d9be30: mov rsi, qword ptr [rax]
// asm:   0x5d9be33: mov rdi, rsp
// asm:   0x5d9be36: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d9be3b: test rbx, rbx
// asm:   0x5d9be3e: je 0x5d9bdc3
// asm:   0x5d9be40: mov rdi, rbx
// asm:   0x5d9be43: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d9be48: mov rbx, rax
// asm:   0x5d9be4b: lea rdi, [rsp + 0x18]
// asm:   0x5d9be50: call 0x2fdda80  ; il2cpp_runtime_helper_02fdda80()
// asm:   0x5d9be55: mov rdi, rbx
// asm:   0x5d9be58: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d9be5d: mov rdi, rax
// asm:   0x5d9be60: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorSettingsPopup__SetupTopButtons(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *pMVar4;
  bool bVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_string__o *__this_01;
  UI_MapEditorSettingsPopup___c__DisplayClass15_0_o *__this_02;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_UI_Button_o *value;
  UI_MapEditorSettingsPopup___c__DisplayClass15_0_Fields *targetAddress;
  MethodInfo *in_R9;
  System_Collections_Generic_List_Enumerator_object__o SStack_68;
  undefined1 auStack_50 [16];
  System_String_o *pSStack_40;
  UI_ElementStyle_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07548085 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorSettingsPopup_c__DisplayClass15_0_SetupTopButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorSettingsPopup_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548085 = '\x01';
  }
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._current = (Il2CppObject *)0x0;
  pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUStack_38 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUStack_38,0x1c,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar6 = "General";
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_01->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pSVar6;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar6,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      pSVar6 = "Keybinds";
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_01->fields)._items;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar6,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,
                   (System_Collections_Generic_List_object__o *)__this_01,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        SStack_68.fields._current = (Il2CppObject *)pSStack_40;
        SStack_68.fields._list = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
        SStack_68.fields._index = auStack_50._8_4_;
        SStack_68.fields._version = auStack_50._12_4_;
        auStack_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_50._8_8_ = &SStack_68;
        while( true ) {
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&SStack_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          if (!bVar5) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (&SStack_68,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
            return;
          }
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_UI_MapEditorSettingsPopup_c__DisplayClass15_0);
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          if (__this_02 == (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o *)0x0) break;
          (__this_02->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
          targetAddress = &__this_02->fields;
          (__this_02->fields).buttonName = (System_String_o *)SStack_68.fields._current;
          Il2CppCodeGenWriteBarrier(&targetAddress->buttonName);
          bVar5 = System_String__op_Equality
                            (targetAddress->buttonName,"MobileLayout",(MethodInfo *)0x0);
          if (bVar5) {
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar6 = UI_UIManager__GetLocale
                               ("SettingsPopup","Keybinds","MobileLayout",
                                "","",in_R9);
          }
          else {
            pSVar6 = (__this->fields).LocaleCategory;
            item = System_String__Concat_52f0320
                             (targetAddress->buttonName,"Button",(MethodInfo *)0x0);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar6 = UI_UIManager__GetLocale
                               (pSVar6,"Top",item,"","",
                                in_R9);
          }
          parent = (__this->fields).TopBar;
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (__this_03,(Il2CppObject *)__this_02,
                     (intptr_t)MethodInfo_UI_MapEditorSettingsPopup_c__DisplayClass15_0_SetupTopButtons_b__0,
                     (MethodInfo *)0x0);
          __this_04 = UI_ElementFactory__CreateCategoryButton
                                (parent,pUStack_38,pSVar6,__this_03,(MethodInfo *)0x0);
          if (__this_04 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
          pSVar6 = targetAddress->buttonName;
          value = UnityEngine_GameObject__GetComponent_object_
                            (__this_04,
                             (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this_00,(Il2CppObject *)pSVar6,(Il2CppObject *)value,
                     (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add)
          ;
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsPopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorSettingsPopup__RegisterCategoryPanels (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9be80

void UI_MapEditorSettingsPopup__RegisterCategoryPanels(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548086 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MapEditorSettingsGeneralPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MapEditorSettingsKeybindsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    Il2CppMethodInitialized_07548086 = '\x01';
  }
  handle = TypeRef_UI_MapEditorSettingsGeneralPanel;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"General",(Il2CppObject *)pSVar2,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_MapEditorSettingsKeybindsPanel,
                        (MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"Keybinds",(Il2CppObject *)pSVar2,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsPopup$$SetupBottomButtons
// il2cpp: void UI_MapEditorSettingsPopup__SetupBottomButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9b640
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9b8d7: cmp byte ptr [rip + 0x17ac823], 0
// asm:   0x5d9b8de: jne 0x5d9b7d0
// asm:   0x5d9b8e4: jmp 0x5d9b912

void UI_MapEditorSettingsPopup__SetupBottomButtons(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_Events_UnityAction_o *__this_01;
  UI_MapEditorSettingsPopup___c__DisplayClass17_0_o *__this_02;
  MethodInfo *in_R9;
  ulong uVar3;
  
  if (Il2CppMethodInitialized_07548087 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorSettingsPopup_c__DisplayClass17_0_SetupBottomButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorSettingsPopup_c__DisplayClass17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07548087 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,3);
  if (pIVar2 == (Il2CppObject *)0x0) {
label_05d9b951:
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor != 0) {
    pIVar2[2].klass = (Il2CppClass *)"Default";
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
    if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
      pIVar2[2].monitor = "Save";
      Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor);
      if (2 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[3].klass = (Il2CppClass *)"Back";
        Il2CppCodeGenWriteBarrier(&pIVar2[3].klass);
        if (0 < *(int *)&pIVar2[1].monitor) {
          uVar3 = 0;
          do {
            __this_02 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_UI_MapEditorSettingsPopup_c__DisplayClass17_0);
            System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
            if (__this_02 == (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o *)0x0) goto label_05d9b951;
            (__this_02->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
            if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_05d9b956;
            (__this_02->fields).buttonName = (System_String_o *)(&pIVar2[2].klass)[uVar3];
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).buttonName);
            parent = (__this->fields).BottomBar;
            pSVar1 = (__this_02->fields).buttonName;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            if (Il2CppMethodInitialized_07548101 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
              il2cpp_codegen_initialize_runtime_metadata(&"Common");
              il2cpp_codegen_initialize_runtime_metadata(&"");
              Il2CppMethodInitialized_07548101 = '\x01';
            }
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar1 = UI_UIManager__GetLocale
                               ("Common",pSVar1,"","",
                                "",in_R9);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (__this_01,(Il2CppObject *)__this_02,
                       (intptr_t)
                       MethodInfo_UI_MapEditorSettingsPopup_c__DisplayClass17_0_SetupBottomButtons_b__0,
                       (MethodInfo *)0x0);
            UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
            uVar3 = uVar3 + 1;
          } while ((long)uVar3 < (long)*(int *)&pIVar2[1].monitor);
        }
        return;
      }
    }
  }
label_05d9b956:
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorSettingsPopup$$OnConfirmSetDefault
// il2cpp: void UI_MapEditorSettingsPopup__OnConfirmSetDefault (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9bf80
// eh: try 0x5d9c077..0x5d9c19d -> pad 0x5d9c1a6 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d9c1c4..0x5d9c1c9 -> pad 0x5d9c1ee cleanup
// eh: try 0x5d9c1f1..0x5d9c1fb -> pad 0x5d9c203 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9c1a2: jmp 0x5d9c1ac
// asm:   0x5d9c1a4: jmp 0x5d9c1ac
// asm:   0x5d9c1a6: jmp 0x5d9c1ac
// asm:   0x5d9c1a8: jmp 0x5d9c1ac
// asm:   0x5d9c1aa: jmp 0x5d9c1ac
// asm:   0x5d9c1ac: mov rbx, rax
// asm:   0x5d9c1af: cmp edx, 1
// asm:   0x5d9c1b2: jne 0x5d9c1f1
// asm:   0x5d9c1b4: mov rdi, rbx
// asm:   0x5d9c1b7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d9c1bc: mov rbx, qword ptr [rax]
// asm:   0x5d9c1bf: mov qword ptr [rsp + 8], rbx
// asm:   0x5d9c1c4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d9c1c9: lea rax, [rip + 0x14f27a8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose
// asm:   0x5d9c1d0: mov rsi, qword ptr [rax]
// asm:   0x5d9c1d3: lea rdi, [rsp + 0x20]
// asm:   0x5d9c1d8: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d9c1dd: test rbx, rbx
// asm:   0x5d9c1e0: je 0x5d9c108
// asm:   0x5d9c1e6: mov rdi, rbx
// asm:   0x5d9c1e9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d9c1ee: mov rbx, rax
// asm:   0x5d9c1f1: lea rdi, [rsp + 8]
// asm:   0x5d9c1f6: call 0x2fddab0  ; il2cpp_runtime_helper_02fddab0()
// asm:   0x5d9c1fb: mov rdi, rbx
// asm:   0x5d9c1fe: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d9c203: mov rdi, rax
// asm:   0x5d9c206: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorSettingsPopup__OnConfirmSetDefault(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  Il2CppClass *pIVar2;
  long *plVar3;
  UI_BaseMenu_o *pUVar4;
  UI_MessagePopup_o *__this_01;
  Il2CppObject *pIVar5;
  bool bVar6;
  System_String_o *message;
  MethodInfo *in_R9;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07548088 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputSettings);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Defaults");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetToast");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548088 = '\x01';
  }
  __this_00 = (__this->fields)._saveableSettings;
  if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    local_38 = local_50;
    local_48._0_8_ = local_60._0_8_;
    local_48._8_8_ = local_60._8_8_;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
    while( true ) {
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext
                        );
      pIVar5 = local_38;
      if (!bVar6) break;
      if (local_38 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = local_38->klass;
      bVar1 = (TypeInfo_Settings_InputSettings->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_InputSettings)) {
        (*pIVar2->vtable[4].methodPtr)(local_38,pIVar2->vtable[4].method);
      }
      else {
        plVar3 = local_38[6].monitor;
        if (plVar3 == (long *)0x0) {
          ThrowNullReferenceException();
        }
        (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      }
      pIVar2 = pIVar5->klass;
      (*pIVar2->vtable[0x12].methodPtr)(pIVar5,pIVar2->vtable[0x12].method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar4 != (UI_BaseMenu_o *)0x0) {
      __this_01 = (pUVar4->fields).MessagePopup;
      message = UI_UIManager__GetLocale
                          ((__this->fields).LocaleCategory,"Defaults","ResetToast",
                           "","",in_R9);
      if (__this_01 != (UI_MessagePopup_o *)0x0) {
        UI_MessagePopup__Show(__this_01,message,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorSettingsPopup__OnBottomBarButtonClick (UI_MapEditorSettingsPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d9c210
// eh: try 0x5d9c354..0x5d9c4ec -> pad 0x5d9c4f5 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d9c50d..0x5d9c512 -> pad 0x5d9c535 cleanup
// eh: try 0x5d9c538..0x5d9c542 -> pad 0x5d9c54a catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9c4f1: jmp 0x5d9c4f5
// asm:   0x5d9c4f3: jmp 0x5d9c4f5
// asm:   0x5d9c4f5: mov rbx, rax
// asm:   0x5d9c4f8: cmp edx, 1
// asm:   0x5d9c4fb: jne 0x5d9c538
// asm:   0x5d9c4fd: mov rdi, rbx
// asm:   0x5d9c500: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d9c505: mov rbx, qword ptr [rax]
// asm:   0x5d9c508: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d9c50d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d9c512: lea rax, [rip + 0x14f245f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose
// asm:   0x5d9c519: mov rsi, qword ptr [rax]
// asm:   0x5d9c51c: mov rdi, rsp
// asm:   0x5d9c51f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d9c524: test rbx, rbx
// asm:   0x5d9c527: je 0x5d9c3ce
// asm:   0x5d9c52d: mov rdi, rbx
// asm:   0x5d9c530: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d9c535: mov rbx, rax
// asm:   0x5d9c538: lea rdi, [rsp + 0x18]
// asm:   0x5d9c53d: call 0x2fddae0  ; il2cpp_runtime_helper_02fddae0()
// asm:   0x5d9c542: mov rdi, rbx
// asm:   0x5d9c545: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d9c54a: mov rdi, rax
// asm:   0x5d9c54d: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorSettingsPopup__OnBottomBarButtonClick
               (UI_MapEditorSettingsPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  UI_BaseMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_01;
  bool bVar2;
  System_String_o *message;
  UnityEngine_Events_UnityAction_o *__this_02;
  System_String_o *title;
  MethodInfo *in_R9;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07548089 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorSettingsPopup_OnBottomBarButtonClick_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Defaults");
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548089 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  bVar2 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (__this->fields)._saveableSettings;
    if (__this_00 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
label_05d9c4ec:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    local_40 = 0;
    local_38 = (undefined1 *)&local_58;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext
                        );
      if (!bVar2) break;
      if (local_58.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      (*(local_58.fields._current)->klass->vtable[0x12].methodPtr)
                (local_58.fields._current,(local_58.fields._current)->klass->vtable[0x12].method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  else {
    bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if (bVar2) {
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
    bVar2 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar1 != (UI_BaseMenu_o *)0x0) {
        __this_01 = (pUVar1->fields).ConfirmPopup;
        message = UI_UIManager__GetLocale
                            ((__this->fields).LocaleCategory,"Defaults","Confirm",
                             "","",in_R9);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (__this_02,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_MapEditorSettingsPopup_OnBottomBarButtonClick_b__19_0,
                   (MethodInfo *)0x0);
        title = UI_UIManager__GetLocale
                          ((__this->fields).LocaleCategory,"Defaults","Title",
                           "","",in_R9);
        if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_01,message,__this_02,title,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_05d9c4ec;
    }
  }
  return;
}


// UI.MapEditorSettingsPopup$$Hide
// il2cpp: void UI_MapEditorSettingsPopup__Hide (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9c560
// eh: try 0x5d9c623..0x5d9c676 -> pad 0x5d9c67f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d9c697..0x5d9c69c -> pad 0x5d9c6bb cleanup
// eh: try 0x5d9c6be..0x5d9c6c8 -> pad 0x5d9c6d0 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9c67b: jmp 0x5d9c67f
// asm:   0x5d9c67d: jmp 0x5d9c67f
// asm:   0x5d9c67f: mov r14, rax
// asm:   0x5d9c682: cmp edx, 1
// asm:   0x5d9c685: jne 0x5d9c6be
// asm:   0x5d9c687: mov rdi, r14
// asm:   0x5d9c68a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d9c68f: mov rbx, qword ptr [rax]
// asm:   0x5d9c692: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d9c697: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d9c69c: lea rax, [rip + 0x14f22d5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose
// asm:   0x5d9c6a3: mov rsi, qword ptr [rax]
// asm:   0x5d9c6a6: mov rdi, rsp
// asm:   0x5d9c6a9: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d9c6ae: test rbx, rbx
// asm:   0x5d9c6b1: je 0x5d9c65d
// asm:   0x5d9c6b3: mov rdi, rbx
// asm:   0x5d9c6b6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d9c6bb: mov r14, rax
// asm:   0x5d9c6be: lea rdi, [rsp + 0x20]
// asm:   0x5d9c6c3: call 0x2fddb10  ; il2cpp_runtime_helper_02fddb10()
// asm:   0x5d9c6c8: mov rdi, r14
// asm:   0x5d9c6cb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d9c6d0: mov rdi, rax
// asm:   0x5d9c6d3: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorSettingsPopup__Hide(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_0754808a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    Il2CppMethodInitialized_0754808a = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
label_05d9c676:
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._saveableSettings;
    if (__this_00 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) goto label_05d9c676;
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    local_28 = 0;
    local_20 = (undefined1 *)&local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext
                        );
      if (!bVar1) break;
      if (local_48.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      (*(local_48.fields._current)->klass->vtable[0xc].methodPtr)
                (local_48.fields._current,(local_48.fields._current)->klass->vtable[0xc].method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
  }
  UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___ctor (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9c6e0

void UI_MapEditorSettingsPopup___ctor(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  
  if (Il2CppMethodInitialized_0754808b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_SaveableSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorSettings");
    Il2CppMethodInitialized_0754808b = '\x01';
  }
  (__this->fields).LocaleCategory = "MapEditorSettings";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_SaveableSettingsContainer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_ctor);
  (__this->fields)._saveableSettings = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._saveableSettings);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup$$<OnBottomBarButtonClick>b__19_0
// il2cpp: void UI_MapEditorSettingsPopup___OnBottomBarButtonClick_b__19_0 (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x5d9c790

void UI_MapEditorSettingsPopup___OnBottomBarButtonClick_b__19_0
               (UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  UI_MapEditorSettingsPopup__OnConfirmSetDefault(__this,method);
  return;
}


