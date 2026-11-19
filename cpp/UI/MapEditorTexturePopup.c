// Type: UI.MapEditorTexturePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/MapEditorTexturePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTexturePopup.cs
// --------------------------------

// UI.MapEditorTexturePopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorTexturePopup__get_TopBarHeight (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x5d9cc30

float UI_MapEditorTexturePopup__get_TopBarHeight(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorTexturePopup$$get_Height
// il2cpp: float UI_MapEditorTexturePopup__get_Height (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x5d9cc40

float UI_MapEditorTexturePopup__get_Height(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.MapEditorTexturePopup$$get_TwoRows
// il2cpp: bool UI_MapEditorTexturePopup__get_TwoRows (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x5d9cc50

bool UI_MapEditorTexturePopup__get_TwoRows(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  return false;
}


// UI.MapEditorTexturePopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorTexturePopup__get_DefaultCategoryPanel (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x5d9cc60

System_String_o *
UI_MapEditorTexturePopup__get_DefaultCategoryPanel(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548090 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    Il2CppMethodInitialized_07548090 = '\x01';
  }
  return "All";
}


// UI.MapEditorTexturePopup$$GetCategories
// il2cpp: System_String_array* UI_MapEditorTexturePopup__GetCategories (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x5d9cc90

System_String_array *
UI_MapEditorTexturePopup__GetCategories(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_07548091 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Nature");
    il2cpp_codegen_initialize_runtime_metadata(&"Brick");
    il2cpp_codegen_initialize_runtime_metadata(&"Stone");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"Metal");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    il2cpp_codegen_initialize_runtime_metadata(&"Wood");
    Il2CppMethodInitialized_07548091 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "All";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "Nature";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = "Brick";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        if ((pSVar1->max_length & 0xfffffffc) != 0) {
          pSVar1->m_Items[3] = "Metal";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
          if (4 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[4] = "Wood";
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 4);
            if (5 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[5] = "Stone";
              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 5);
              if (6 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[6] = "Misc";
                Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 6);
                return pSVar1;
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorTexturePopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorTexturePopup__RegisterCategoryPanels (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x5d9ce10
// eh: try 0x5d9cef4..0x5d9cf77 -> pad 0x5d9cf80 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d9cf9a..0x5d9cf9f -> pad 0x5d9cfbe cleanup
// eh: try 0x5d9cfc1..0x5d9cfcb -> pad 0x5d9cfd3 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d9ceee: nop 
// asm:   0x5d9cf7c: jmp 0x5d9cf82
// asm:   0x5d9cf7e: jmp 0x5d9cf82
// asm:   0x5d9cf80: jmp 0x5d9cf82
// asm:   0x5d9cf82: mov rbx, rax
// asm:   0x5d9cf85: cmp edx, 1
// asm:   0x5d9cf88: jne 0x5d9cfc1
// asm:   0x5d9cf8a: mov rdi, rbx
// asm:   0x5d9cf8d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d9cf92: mov rbx, qword ptr [rax]
// asm:   0x5d9cf95: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d9cf9a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d9cf9f: lea rax, [rip + 0x14f2f02]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Button_Dispose
// asm:   0x5d9cfa6: mov rsi, qword ptr [rax]
// asm:   0x5d9cfa9: mov rdi, rsp
// asm:   0x5d9cfac: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5d9cfb1: test rbx, rbx
// asm:   0x5d9cfb4: je 0x5d9cf63
// asm:   0x5d9cfb6: mov rdi, rbx
// asm:   0x5d9cfb9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d9cfbe: mov rbx, rax
// asm:   0x5d9cfc1: lea rdi, [rsp + 0x18]
// asm:   0x5d9cfc6: call 0x2fddb40  ; il2cpp_runtime_helper_02fddb40()
// asm:   0x5d9cfcb: mov rdi, rbx
// asm:   0x5d9cfce: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d9cfd3: mov rdi, rax
// asm:   0x5d9cfd6: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorTexturePopup__RegisterCategoryPanels(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

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
  
  if (Il2CppMethodInitialized_07548092 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MapEditorTexturePanel);
    Il2CppMethodInitialized_07548092 = '\x01';
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
        handle = TypeRef_UI_MapEditorTexturePanel;
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


// UI.MapEditorTexturePopup$$.ctor
// il2cpp: void UI_MapEditorTexturePopup___ctor (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x5d9cfe0

void UI_MapEditorTexturePopup___ctor(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPopup___ctor((UI_MapEditorAddObjectPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


