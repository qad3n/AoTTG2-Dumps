// Type: UI.MapEditorTexturePopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorTexturePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTexturePopup.cs
// --------------------------------

// UI.MapEditorTexturePopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorTexturePopup__get_TopBarHeight (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x1821c3380

float UI_MapEditorTexturePopup__get_TopBarHeight(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorTexturePopup$$get_Height
// il2cpp: float UI_MapEditorTexturePopup__get_Height (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x1821bb440

float UI_MapEditorTexturePopup__get_Height(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.MapEditorTexturePopup$$get_TwoRows
// il2cpp: bool UI_MapEditorTexturePopup__get_TwoRows (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_MapEditorTexturePopup__get_TwoRows(UI_MapEditorTexturePopup_o* __this, MethodInfo* method)

{
  return false;
}


// UI.MapEditorTexturePopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorTexturePopup__get_DefaultCategoryPanel (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x1822d4030

System_String_o *
UI_MapEditorTexturePopup__get_DefaultCategoryPanel(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843475d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    Il2CppMethodInitialized_1843475d5 = '\x01';
  }
  return "All";
}


// UI.MapEditorTexturePopup$$GetCategories
// il2cpp: System_String_array* UI_MapEditorTexturePopup__GetCategories (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x1822d3d20

System_String_array *
UI_MapEditorTexturePopup__GetCategories(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_1843475d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Nature");
    il2cpp_codegen_initialize_runtime_metadata(&"Brick");
    il2cpp_codegen_initialize_runtime_metadata(&"Stone");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc");
    il2cpp_codegen_initialize_runtime_metadata(&"Metal");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    il2cpp_codegen_initialize_runtime_metadata(&"Wood");
    Il2CppMethodInitialized_1843475d6 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
  pSVar1 = "All";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "All";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      pSVar1 = "Nature";
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "Nature";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
        pSVar1 = "Brick";
        if (2 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[2] = "Brick";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
          pSVar1 = "Metal";
          if (3 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[3] = "Metal";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
            pSVar1 = "Wood";
            if (4 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[4] = "Wood";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
              pSVar1 = "Stone";
              if (5 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[5] = "Stone";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar1);
                pSVar1 = "Misc";
                if (6 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[6] = "Misc";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6,pSVar1);
                  return pSVar2;
                }
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// UI.MapEditorTexturePopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorTexturePopup__RegisterCategoryPanels (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x1822d3e90
// eh: try 0x1822d3f71..0x1822d400f -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d3fe2: mov rdx, qword ptr [rip + 0x1de5937]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_Button_Dispose
// asm:   0x1822d3fe9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822d3fee: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822d3ff3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822d3ff8: test rcx, rcx
// asm:   0x1822d3ffb: jne 0x1822d400f
// asm:   0x1822d400f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_MapEditorTexturePopup__RegisterCategoryPanels(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

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
  
  if (Il2CppMethodInitialized_1843475d7 == '\0') {
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
    Il2CppMethodInitialized_1843475d7 = '\x01';
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
        handle = TypeRef_UI_MapEditorTexturePanel;
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


// UI.MapEditorTexturePopup$$.ctor
// il2cpp: void UI_MapEditorTexturePopup___ctor (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x1822d4020

void UI_MapEditorTexturePopup___ctor(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPopup___ctor((UI_MapEditorAddObjectPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


