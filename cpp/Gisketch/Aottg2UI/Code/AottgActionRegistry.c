// Type: Gisketch.Aottg2UI.Code.AottgActionRegistry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgActionRegistry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgActionRegistry$$Clear
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry__Clear (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, const MethodInfo* method);
// 0x3b5b400

void Gisketch_Aottg2UI_Code_AottgActionRegistry__Clear
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Int32_array *pSVar3;
  System_Object_array *pSVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_08;
  long *plVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this_09;
  System_Collections_Generic_List_object__o *unaff_R15;
  undefined1 auVar9 [12];
  _union_233249 _Var10;
  Il2CppType *pIVar11;
  System_String_o *__this_10;
  System_String_o *pSVar12;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSStack_70;
  Il2CppType *pIStack_68;
  Il2CppObject *pIStack_60;
  _union_233249 _Stack_50;
  Il2CppType *pIStack_48;
  System_String_o *pSStack_40;
  Il2CppRGCTXData *pIStack_38;
  
  if (g_data_057a9d45 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057a9d45 = '\x01';
  }
  __this_09 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
  if (__this_09 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(__this_09,MethodInfo_Void_Clear);
    (__this->fields)._next = 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_38 = (Il2CppRGCTXData *)__this;
  if (g_data_057a9d46 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"code.");
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057a9d46 = '\x01';
  }
  _Var10.genericMethod = (Il2CppMethodPointer)0x0;
  pIVar11 = (Il2CppType *)0x0;
  __this_10 = (System_String_o *)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_68 = (Il2CppType *)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)method,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (method == (MethodInfo *)0x0) goto label_03b5b7aa;
  pSVar7 = System_String__Replace((System_String_o *)method,0x20,0x2d,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_3af7150("code.",pSVar7,".",(MethodInfo *)0x0);
  unaff_R15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(unaff_R15,MethodInfo_List_1_System_String);
  pSVar3 = (__this_09->fields)._buckets;
  if (pSVar3 == (System_Int32_array *)0x0) goto label_03b5b7aa;
  __this_08 = System_Collections_Generic_Dictionary_object__object___get_Keys
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar3,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
  if (__this_08 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_03b5b7aa;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&_Stack_50,
             __this_08,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  _Var10 = _Stack_50;
  pIVar11 = pIStack_48;
  __this_10 = pSStack_40;
  if (unaff_R15 == (System_Collections_Generic_List_object__o *)0x0) {
    do {
      __this_01.fields._8_8_ = pIVar11;
      __this_01.fields._dictionary = _Var10.genericMethod;
      __this_01.fields._currentKey = (Il2CppObject *)__this_10;
      bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff70);
      if ((char)bVar6 == '\0') goto label_03b5b706;
      pSVar12 = __this_10;
      if (__this_10 == (System_String_o *)0x0) goto label_03b5b7a0;
      bVar6 = System_String__StartsWith_3af5570(__this_10,pSVar7,5,(MethodInfo *)0x0);
    } while ((char)bVar6 == '\0');
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    while (__this_10 = pSStack_40, __this_00.fields._8_8_ = pIVar11,
          __this_00.fields._dictionary = _Var10.genericMethod,
          __this_00.fields._currentKey = (Il2CppObject *)__this_10,
          bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff70), (char)bVar6 != '\0') {
      pSVar12 = __this_10;
      if (__this_10 == (System_String_o *)0x0) goto label_03b5b7a0;
      bVar6 = System_String__StartsWith_3af5570(__this_10,pSVar7,5,(MethodInfo *)0x0);
      lVar5 = MethodInfo_Void_Add;
      pSStack_40 = pSVar12;
      if ((char)bVar6 != '\0') {
        piVar1 = &(unaff_R15->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (unaff_R15->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_03b5b7a5;
        uVar2 = (unaff_R15->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (unaff_R15->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_10;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,__this_10);
          pSStack_40 = pSVar12;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (unaff_R15,(Il2CppObject *)__this_10,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          pSStack_40 = pSVar12;
        }
      }
    }
  }
label_03b5b706:
  __this_02.fields._8_8_ = pIVar11;
  __this_02.fields._dictionary = _Var10.genericMethod;
  __this_02.fields._currentKey = (Il2CppObject *)__this_10;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff70);
  while( true ) {
    if (unaff_R15 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&pSStack_70,unaff_R15,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      while( true ) {
        __this_03.fields._8_8_ = pIVar11;
        __this_03.fields._list = _Var10.genericMethod;
        __this_03.fields._current = (Il2CppObject *)__this_10;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_03,(MethodInfo_321A1D0 *)&pSStack_70);
        if ((char)bVar6 == '\0') {
          __this_04.fields._8_8_ = pIVar11;
          __this_04.fields._list = _Var10.genericMethod;
          __this_04.fields._current = (Il2CppObject *)__this_10;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&pSStack_70);
          return;
        }
        pSVar3 = (__this_09->fields)._buckets;
        if (pSVar3 == (System_Int32_array *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Remove
                  ((System_Collections_Generic_Dictionary_object__object__o *)pSVar3,pIStack_60,MethodInfo_Boolean_Remove);
      }
      il2cpp_runtime_helper_022b2c90();
      pSVar12 = __this_10;
label_03b5b7a0:
      il2cpp_runtime_helper_022b2c90();
label_03b5b7a5:
      il2cpp_runtime_helper_022b2c90();
      __this_10 = pSVar12;
    }
label_03b5b7aa:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) break;
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar5 = *plVar8;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar11;
    __this_05.fields._dictionary = _Var10.genericMethod;
    __this_05.fields._currentKey = (Il2CppObject *)__this_10;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffff70);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      __this_07.fields._8_8_ = pIVar11;
      __this_07.fields._list = _Var10.genericMethod;
      __this_07.fields._current = (Il2CppObject *)__this_10;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)&pSStack_70)
      ;
label_03b5b8be:
      _Unwind_Resume(auVar9._0_8_);
    }
  }
  __this_06.fields._8_8_ = pIVar11;
  __this_06.fields._dictionary = _Var10.genericMethod;
  __this_06.fields._currentKey = (Il2CppObject *)__this_10;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_06,(MethodInfo_3251B10 *)&stack0xffffffffffffff70);
  goto label_03b5b8be;
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$ClearOwner
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* ownerId, const MethodInfo* method);
// 0x3b5b450

void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *ownerId,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Object_array *pSVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_08;
  long *plVar8;
  System_Collections_Generic_List_object__o *unaff_R15;
  undefined1 auVar9 [12];
  _union_233249 _Var10;
  Il2CppType *pIVar11;
  System_String_o *__this_09;
  System_String_o *pSVar12;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *local_68;
  Il2CppType *pIStack_60;
  Il2CppObject *local_58;
  _union_233249 local_48;
  Il2CppType *pIStack_40;
  System_String_o *local_38;
  
  if (g_data_057a9d46 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"code.");
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057a9d46 = '\x01';
  }
  _Var10.genericMethod = (Il2CppMethodPointer)0x0;
  pIVar11 = (Il2CppType *)0x0;
  __this_09 = (System_String_o *)0x0;
  local_68 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Il2CppObject *)0x0;
  bVar6 = System_String__IsNullOrEmpty(ownerId,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (ownerId == (System_String_o *)0x0) goto label_03b5b7aa;
  pSVar7 = System_String__Replace(ownerId,0x20,0x2d,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_3af7150("code.",pSVar7,".",(MethodInfo *)0x0);
  unaff_R15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(unaff_R15,MethodInfo_List_1_System_String);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_03b5b7aa;
  __this_08 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar3,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
  if (__this_08 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_03b5b7aa;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&local_48,
             __this_08,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  _Var10 = local_48;
  pIVar11 = pIStack_40;
  __this_09 = local_38;
  if (unaff_R15 == (System_Collections_Generic_List_object__o *)0x0) {
    do {
      __this_01.fields._8_8_ = pIVar11;
      __this_01.fields._dictionary = _Var10.genericMethod;
      __this_01.fields._currentKey = (Il2CppObject *)__this_09;
      bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff78);
      if ((char)bVar6 == '\0') goto label_03b5b706;
      pSVar12 = __this_09;
      if (__this_09 == (System_String_o *)0x0) goto label_03b5b7a0;
      bVar6 = System_String__StartsWith_3af5570(__this_09,pSVar7,5,(MethodInfo *)0x0);
    } while ((char)bVar6 == '\0');
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    while (__this_09 = local_38, __this_00.fields._8_8_ = pIVar11,
          __this_00.fields._dictionary = _Var10.genericMethod,
          __this_00.fields._currentKey = (Il2CppObject *)__this_09,
          bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff78), (char)bVar6 != '\0') {
      pSVar12 = __this_09;
      if (__this_09 == (System_String_o *)0x0) goto label_03b5b7a0;
      bVar6 = System_String__StartsWith_3af5570(__this_09,pSVar7,5,(MethodInfo *)0x0);
      lVar5 = MethodInfo_Void_Add;
      local_38 = pSVar12;
      if ((char)bVar6 != '\0') {
        piVar1 = &(unaff_R15->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (unaff_R15->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_03b5b7a5;
        uVar2 = (unaff_R15->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (unaff_R15->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_09;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,__this_09);
          local_38 = pSVar12;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (unaff_R15,(Il2CppObject *)__this_09,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          local_38 = pSVar12;
        }
      }
    }
  }
label_03b5b706:
  __this_02.fields._8_8_ = pIVar11;
  __this_02.fields._dictionary = _Var10.genericMethod;
  __this_02.fields._currentKey = (Il2CppObject *)__this_09;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff78);
  while( true ) {
    if (unaff_R15 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,unaff_R15,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      while( true ) {
        __this_03.fields._8_8_ = pIVar11;
        __this_03.fields._list = _Var10.genericMethod;
        __this_03.fields._current = (Il2CppObject *)__this_09;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_03,(MethodInfo_321A1D0 *)&local_68);
        if ((char)bVar6 == '\0') {
          __this_04.fields._8_8_ = pIVar11;
          __this_04.fields._list = _Var10.genericMethod;
          __this_04.fields._current = (Il2CppObject *)__this_09;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&local_68);
          return;
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Remove(pSVar3,local_58,MethodInfo_Boolean_Remove);
      }
      il2cpp_runtime_helper_022b2c90();
      pSVar12 = __this_09;
label_03b5b7a0:
      il2cpp_runtime_helper_022b2c90();
label_03b5b7a5:
      il2cpp_runtime_helper_022b2c90();
      __this_09 = pSVar12;
    }
label_03b5b7aa:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) break;
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar5 = *plVar8;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar11;
    __this_05.fields._dictionary = _Var10.genericMethod;
    __this_05.fields._currentKey = (Il2CppObject *)__this_09;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffff78);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      __this_07.fields._8_8_ = pIVar11;
      __this_07.fields._list = _Var10.genericMethod;
      __this_07.fields._current = (Il2CppObject *)__this_09;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)&local_68);
label_03b5b8be:
      _Unwind_Resume(auVar9._0_8_);
    }
  }
  __this_06.fields._8_8_ = pIVar11;
  __this_06.fields._dictionary = _Var10.genericMethod;
  __this_06.fields._currentKey = (Il2CppObject *)__this_09;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_06,(MethodInfo_3251B10 *)&stack0xffffffffffffff78);
  goto label_03b5b8be;
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$Register
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgActionRegistry__Register (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* ownerId, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x3b5b8e0

System_String_o *
Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
          (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *ownerId,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *key;
  System_Int32_array *__this_01;
  System_String_o *extraout_RAX;
  System_String_o *value;
  System_String_Fields __this_02;
  Il2CppObject *pIStack_68;
  undefined8 uStack_60;
  System_String_o *pSStack_40;
  System_Action_GisketchActionContext__o *pSStack_38;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGStack_30;
  undefined4 uStack_20;
  int local_1c;
  
  if (g_data_057a9d47 == '\0') {
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x3b5b907;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x3b5b913;
    il2cpp_runtime_helper_023445d0(&"surface");
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x3b5b91f;
    il2cpp_runtime_helper_023445d0(&"code.");
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x3b5b92b;
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057a9d47 = '\x01';
  }
  local_1c = 0;
  if (action == (System_Action_GisketchActionContext__o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  value = (System_String_o *)0x0;
  pGStack_30 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x3b5b949;
  pSVar4 = ownerId;
  bVar2 = System_String__IsNullOrEmpty(ownerId,(MethodInfo *)0x0);
  pSVar3 = "surface";
  if ((char)bVar2 == '\0') {
    pSVar3 = (System_String_o *)0x0;
    if (ownerId != (System_String_o *)0x0) {
      pGStack_30 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x3b5b990;
      pSVar3 = System_String__Replace(ownerId,0x20,0x2d,(MethodInfo *)0x0);
      goto label_03b5b993;
    }
  }
  else {
label_03b5b993:
    local_1c = (__this->fields)._next;
    (__this->fields)._next = local_1c + 1;
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x3b5b9ae;
    pSVar4 = System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x3b5b9d0;
    value = pSVar3;
    key = System_String__Concat_3af7470("code.",pSVar3,".",pSVar4,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
    pSVar4 = (System_String_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pGStack_30 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x3b5b9f1;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)key,(Il2CppObject *)action,MethodInfo_Void_set_Item);
      return key;
    }
  }
  pGStack_30 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x3b5ba03;
  il2cpp_runtime_helper_022b2c90();
  pSStack_40 = pSVar3;
  pSStack_38 = action;
  pGStack_30 = __this;
  if (g_data_057a9d48 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057a9d48 = '\x01';
  }
  pIStack_68 = (Il2CppObject *)0x0;
  pSVar3 = (System_String_o *)0x0;
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    __this_02 = pSVar4->fields;
    if (__this_02 == (System_String_Fields)0x0) {
label_03b5bac8:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d49 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_GisketchActionContext);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9d49 = '\x01';
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9c88 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                  (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      __this_01 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_GisketchActionContext);
      System_Collections_Generic_Dictionary_object__object____ctor_31042a0
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,comparer,MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
      ((System_Collections_Generic_Dictionary_object__object__Fields *)((long)__this_02 + 0x10))->_buckets =
           __this_01;
      il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_object__object__Fields *)
                         ((long)__this_02 + 0x10));
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                       (Il2CppObject *)value,&pIStack_68,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar2 == '\0') {
      pSVar3 = (System_String_o *)0x0;
    }
    else {
      uStack_60 = CONCAT44(local_1c,uStack_20);
      if (pIStack_68 == (Il2CppObject *)0x0) goto label_03b5bac8;
      (*pIStack_68[1].monitor)(pIStack_68[4].klass,pIStack_68[2].monitor);
      pSVar3 = (System_String_o *)0x1;
    }
  }
  return pSVar3;
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$TryHandle
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b5ba10

bool_conflict
Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
          (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *actionId,
          Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar2;
  bool_conflict extraout_EAX;
  System_Int32_array *__this_00;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *local_40;
  System_String_o *local_38;
  UnityEngine_GameObject_o *pUStack_30;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_28;
  int32_t iStack_20;
  undefined4 uStack_1c;
  
  if (g_data_057a9d48 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057a9d48 = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  bVar3 = 0;
  bVar2 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_03b5bac8:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d49 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_GisketchActionContext);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9d49 = '\x01';
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9c88 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                  (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      __this_00 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_GisketchActionContext);
      System_Collections_Generic_Dictionary_object__object____ctor_31042a0
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,comparer,MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
      (__this_01->fields)._buckets = __this_00;
      il2cpp_runtime_helper_022b4080(&__this_01->fields);
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_01,(Il2CppObject *)actionId,&local_40,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      local_28 = context.fields.Node;
      iStack_20 = context.fields.InputSource;
      uStack_1c = context.fields._28_4_;
      local_38 = context.fields.ElementId;
      pUStack_30 = context.fields.GameObject;
      if (local_40 == (Il2CppObject *)0x0) goto label_03b5bac8;
      (*local_40[1].monitor)(local_40[4].klass,local_40[2].monitor);
      bVar3 = 1;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, const MethodInfo* method);
// 0x3b5bad0

void Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057a9d49 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9d49 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18)
  ;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Action_GisketchActionContext);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_00,comparer,MethodInfo_Dictionary_2_System_String_System_Action_1_Gisketch_Aott);
  (__this->fields)._actions =
       (System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *)__this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


