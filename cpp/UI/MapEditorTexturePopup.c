// Type: UI.MapEditorTexturePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorTexturePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTexturePopup.cs
// --------------------------------

// UI.MapEditorTexturePopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorTexturePopup__get_TopBarHeight (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4439f60

float UI_MapEditorTexturePopup__get_TopBarHeight(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorTexturePopup$$get_Height
// il2cpp: float UI_MapEditorTexturePopup__get_Height (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4439f70

float UI_MapEditorTexturePopup__get_Height(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.MapEditorTexturePopup$$get_TwoRows
// il2cpp: bool UI_MapEditorTexturePopup__get_TwoRows (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4439f80

bool_conflict UI_MapEditorTexturePopup__get_TwoRows(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MapEditorTexturePopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorTexturePopup__get_DefaultCategoryPanel (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4439f90

System_String_o *
UI_MapEditorTexturePopup__get_DefaultCategoryPanel(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae6b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"All");
    g_data_057ae6b3 = '\x01';
  }
  return "All";
}


// UI.MapEditorTexturePopup$$GetCategories
// il2cpp: System_String_array* UI_MapEditorTexturePopup__GetCategories (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x4439fc0

System_String_array *
UI_MapEditorTexturePopup__GetCategories(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  System_Type_o *value;
  System_String_array *extraout_RAX;
  long *plVar4;
  System_String_array *extraout_RAX_00;
  System_String_o **ppSVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *key;
  
  if (g_data_057ae6b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Nature");
    il2cpp_runtime_helper_023445d0(&"Brick");
    il2cpp_runtime_helper_023445d0(&"Stone");
    il2cpp_runtime_helper_023445d0(&"Misc");
    il2cpp_runtime_helper_023445d0(&"Metal");
    il2cpp_runtime_helper_023445d0(&"All");
    il2cpp_runtime_helper_023445d0(&"Wood");
    g_data_057ae6b4 = '\x01';
  }
  ppSVar5 = TypeInfo_string;
  pSVar3 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,7);
  if (pSVar3 != (System_String_array *)0x0) {
    if ((int)pSVar3->max_length != 0) {
      ppSVar5 = pSVar3->m_Items;
      pSVar3->m_Items[0] = "All";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar3->max_length) {
        ppSVar5 = pSVar3->m_Items + 1;
        pSVar3->m_Items[1] = "Nature";
        il2cpp_runtime_helper_022b4080();
        if (2 < (uint)pSVar3->max_length) {
          ppSVar5 = pSVar3->m_Items + 2;
          pSVar3->m_Items[2] = "Brick";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar3->max_length) {
            ppSVar5 = pSVar3->m_Items + 3;
            pSVar3->m_Items[3] = "Metal";
            il2cpp_runtime_helper_022b4080();
            if (4 < (uint)pSVar3->max_length) {
              ppSVar5 = pSVar3->m_Items + 4;
              pSVar3->m_Items[4] = "Wood";
              il2cpp_runtime_helper_022b4080();
              if (5 < (uint)pSVar3->max_length) {
                ppSVar5 = pSVar3->m_Items + 5;
                pSVar3->m_Items[5] = "Stone";
                il2cpp_runtime_helper_022b4080();
                if (6 < (uint)pSVar3->max_length) {
                  pSVar3->m_Items[6] = "Misc";
                  il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 6);
                  return pSVar3;
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeRef_MapEditorTexturePanel);
    g_data_057ae6b5 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  if (((System_Collections_Generic_Dictionary_object__object__o *)ppSVar5[0xf] !=
       (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)ppSVar5[0xf],
                             MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni),
     __this_05 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffb0,__this_05,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    key = pIVar9;
    while( true ) {
      __this_01.fields._8_8_ = pIVar8;
      __this_01.fields._dictionary = pSVar7;
      __this_01.fields._currentKey = key;
      bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffffb0);
      handle.fields.value = TypeRef_MapEditorTexturePanel.fields.value;
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._dictionary = pSVar7;
        __this_02.fields._currentKey = key;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffffb0);
        return extraout_RAX;
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)ppSVar5[10];
      pIVar9 = key;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_00,key,(Il2CppObject *)value,MethodInfo_Void_Add);
      key = pIVar9;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._dictionary = pSVar7;
    __this_03.fields._currentKey = pIVar9;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffffb0);
    if (lVar1 == 0) {
      return extraout_RAX_00;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar8;
  __this_04.fields._dictionary = pSVar7;
  __this_04.fields._currentKey = pIVar9;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffffb0);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.MapEditorTexturePopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorTexturePopup__RegisterCategoryPanels (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x443a140

void UI_MapEditorTexturePopup__RegisterCategoryPanels(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

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
  
  if (g_data_057ae6b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeRef_MapEditorTexturePanel);
    g_data_057ae6b5 = '\x01';
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
      handle.fields.value = TypeRef_MapEditorTexturePanel.fields.value;
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


// UI.MapEditorTexturePopup$$.ctor
// il2cpp: void UI_MapEditorTexturePopup___ctor (UI_MapEditorTexturePopup_o* __this, const MethodInfo* method);
// 0x443a330

void UI_MapEditorTexturePopup___ctor(UI_MapEditorTexturePopup_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPopup___ctor((UI_MapEditorAddObjectPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


