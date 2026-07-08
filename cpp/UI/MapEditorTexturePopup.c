// Type: UI.MapEditorTexturePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorTexturePopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorTexturePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorTexturePopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorTexturePopup__get_TopBarHeight (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4124b90

float UI_MapEditorTexturePopup__get_TopBarHeight
                (UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorTexturePopup$$get_Height
// il2cpp: float UI_MapEditorTexturePopup__get_Height (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4124ba0

float UI_MapEditorTexturePopup__get_Height(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.MapEditorTexturePopup$$get_TwoRows
// il2cpp: bool UI_MapEditorTexturePopup__get_TwoRows (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4124bb0

bool_conflict
UI_MapEditorTexturePopup__get_TwoRows(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MapEditorTexturePopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorTexturePopup__get_DefaultCategoryPanel (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4124bc0

System_String_o *
UI_MapEditorTexturePopup__get_DefaultCategoryPanel
          (UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  if (DAT_05704910 == '\0') {
    il2cpp_init_method_metadata(&"All");
    DAT_05704910 = '\x01';
  }
  return "All";
}


// UI.MapEditorTexturePopup$$GetCategories
// il2cpp: System_String_array* UI_MapEditorTexturePopup__GetCategories (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4124bf0

System_String_array *
UI_MapEditorTexturePopup__GetCategories(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (DAT_05704911 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Nature");
    il2cpp_init_method_metadata(&"Brick");
    il2cpp_init_method_metadata(&"Stone");
    il2cpp_init_method_metadata(&"Misc");
    il2cpp_init_method_metadata(&"Metal");
    il2cpp_init_method_metadata(&"All");
    il2cpp_init_method_metadata(&"Wood");
    DAT_05704911 = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,7);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "All";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "Nature";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "Brick";
          il2cpp_runtime_glue(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "Metal";
            il2cpp_runtime_glue(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = "Wood";
              il2cpp_runtime_glue(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = "Stone";
                il2cpp_runtime_glue(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = "Misc";
                  il2cpp_runtime_glue(pSVar1->m_Items + 6);
                  return pSVar1;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTexturePopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorTexturePopup__RegisterCategoryPanels (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4124d70

void UI_MapEditorTexturePopup__RegisterCategoryPanels
               (UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  System_Type_o *value;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  Il2CppObject *key;
  Il2CppObject *pIVar5;
  
  if (DAT_05704912 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeRef_MapEditorTexturePanel);
    DAT_05704912 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_02 = System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S)
    ;
    if (__this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 &stack0xffffffffffffffb8,__this_02,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
      while( true ) {
        __this_00.fields._8_8_ = pIVar4;
        __this_00.fields._dictionary = pSVar3;
        __this_00.fields._currentKey = key;
        bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                          (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffffb8);
        handle.fields.value = TypeRef_MapEditorTexturePanel.fields.value;
        if ((char)bVar2 == '\0') {
          __this_01.fields._8_8_ = pIVar4;
          __this_01.fields._dictionary = pSVar3;
          __this_01.fields._currentKey = key;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                    (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffffb8);
          return;
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._categoryPanelTypes;
        pIVar5 = key;
        if (*(int *)(DAT_05711100 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar1,key,(Il2CppObject *)value,MethodInfo_Void_Add);
        key = pIVar5;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorTexturePopup$$.ctor
// il2cpp: void UI_MapEditorTexturePopup___ctor (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4124f60

void UI_MapEditorTexturePopup___ctor(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPopup___ctor((UI_MapEditorAddObjectPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


