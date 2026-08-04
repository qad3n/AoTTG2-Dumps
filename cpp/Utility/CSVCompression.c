// Type: Utility.CSVCompression
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CSVCompression.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CSVCompression.cs
// --------------------------------

// Utility.CSVCompression.<>c$$.cctor
// il2cpp: void Utility_CSVCompression___c___cctor (const MethodInfo* method);
// 0x448ba60

void Utility_CSVCompression___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae8de == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae8de = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Utility.CSVCompression.<>c$$.ctor
// il2cpp: void Utility_CSVCompression___c___ctor (Utility_CSVCompression___c_o* __this, const MethodInfo* method);
// 0x448bad0

void Utility_CSVCompression___c___ctor(Utility_CSVCompression___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CSVCompression.<>c$$<CompressSymbol>b__4_0
// il2cpp: int32_t Utility_CSVCompression___c___CompressSymbol_b__4_0 (Utility_CSVCompression___c_o* __this, System_Collections_Generic_KeyValuePair_string__int__o x, const MethodInfo* method);
// 0x448bae0

int32_t Utility_CSVCompression___c___CompressSymbol_b__4_0
                  (Utility_CSVCompression___c_o *__this,
                  System_Collections_Generic_KeyValuePair_string__int__o x,MethodInfo *method)

{
  if (g_data_057ae8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value,x.fields.key);
    g_data_057ae8df = '\x01';
  }
  return x.fields.value;
}


// Utility.CSVCompression$$Compress
// il2cpp: System_Object_array* Utility_CSVCompression__Compress (System_String_o* source, int32_t deltaRows, uint16_t containerDelimiter, uint16_t rowDelimiter, const MethodInfo* method);
// 0x4489b90

System_Object_array *
Utility_CSVCompression__Compress
          (System_String_o *source,int32_t deltaRows,uint16_t containerDelimiter,uint16_t rowDelimiter,
          MethodInfo *method)

{
  int32_t *piVar1;
  Utility_Algorithms_CompressionAlgorithm_o *__this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  uint16_t uVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_Collections_Generic_List_object__o *__this_05;
  System_String_array_array *pSVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  System_Byte_array *pSVar8;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_Object_array *pSVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  ulong uVar14;
  uint uVar15;
  long *unaff_R13;
  long *plVar16;
  undefined1 auVar17 [12];
  undefined4 in_stack_ffffffffffffff88;
  uint16_t uVar18;
  uint16_t uVar19;
  System_Collections_Generic_Dictionary_object__object__o *in_stack_ffffffffffffff90;
  System_String_array *pSVar20;
  System_String_array *local_58;
  System_Byte_array *local_50;
  System_String_array *local_48;
  System_String_array *local_38;
  
  uVar18 = rowDelimiter;
  uVar19 = containerDelimiter;
  if (g_data_057ae8d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057ae8d6 = '\x01';
  }
  pSVar20 = (System_String_array *)0x0;
  local_58 = (System_String_array *)0x0;
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_System_String);
  if (source == (System_String_o *)0x0) goto label_0448a1f1;
  pSVar5 = (System_String_array_array *)System_String__Split(source,containerDelimiter,0,(MethodInfo *)0x0);
  if (pSVar5 == (System_String_array_array *)0x0) goto label_0448a1f1;
  uVar4 = (uint)pSVar5->max_length;
  source = (System_String_o *)pSVar5;
  if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_0448a1d3;
  if (0 < (int)uVar4) {
    uVar15 = 0;
    unaff_R13 = &MethodInfo_Void_Add;
    do {
      while( true ) {
        uVar2 = rowDelimiter;
        if (uVar4 <= uVar15) goto label_0448a1bf;
        if (pSVar5->m_Items[(int)uVar15] == (System_String_array *)0x0) goto label_0448a1f1;
        pSVar6 = System_String__Trim((System_String_o *)pSVar5->m_Items[(int)uVar15],(MethodInfo *)0x0);
        if (pSVar6 == (System_String_o *)0x0) goto label_0448a1f1;
        pSVar7 = System_String__Split(pSVar6,rowDelimiter,0,(MethodInfo *)0x0);
        lVar11 = MethodInfo_Void_Add;
        piVar1 = &(__this_05->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar10 = (__this_05->fields)._items;
        if (pSVar10 == (System_Object_array *)0x0) goto label_0448a1f1;
        uVar4 = (__this_05->fields)._size;
        if ((uint)pSVar10->max_length <= uVar4) break;
        (__this_05->fields)._size = uVar4 + 1;
        pSVar10->m_Items[(int)uVar4] = &pSVar7->obj;
        il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar4);
        uVar15 = uVar15 + 1;
        uVar4 = (uint)pSVar5->max_length;
        if ((int)uVar4 <= (int)uVar15) goto label_04489de3;
      }
      System_Collections_Generic_List_object___AddWithResize
                (__this_05,&pSVar7->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      uVar15 = uVar15 + 1;
      uVar4 = (uint)pSVar5->max_length;
    } while ((int)uVar15 < (int)uVar4);
  }
label_04489de3:
  plVar16 = (long *)(ulong)rowDelimiter;
  source = (System_String_o *)System_Collections_Generic_List_object___ToArray(__this_05,MethodInfo_String_ToArray);
  in_stack_ffffffffffffff90 =
       (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(in_stack_ffffffffffffff90,MethodInfo_Dictionary_2_System_String_System_String);
  if ((System_String_array_array *)source == (System_String_array_array *)0x0) goto label_0448a1f1;
  if (((System_String_array_array *)source)->max_length != 0) {
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_00;
    }
    Utility_CSVCompression__CompressDelta((System_String_array_array *)source,deltaRows,method_00);
  }
  unaff_R13 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)unaff_R13,MethodInfo_List_1_System_String);
  if (0 < (int)((System_String_array_array *)source)->max_length) {
    if ((System_Collections_Generic_List_object__o *)unaff_R13 ==
        (System_Collections_Generic_List_object__o *)0x0) goto label_0448a1f6;
    uVar14 = 0;
    plVar16 = &MethodInfo_Void_Add;
    rowDelimiter = 0x2270;
    uVar2 = 0x2270;
    if ((((System_String_array_array *)source)->max_length & 0xffffffff) == 0) goto label_0448a1bf;
    while( true ) {
      pSVar7 = ((System_String_array_array *)source)->m_Items[uVar14];
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = System_Char__ToString((uint16_t)&stack0xffffffffffffff8c,(MethodInfo *)0x0);
      pSVar6 = System_String__Join(pSVar6,pSVar7,(MethodInfo *)0x0);
      lVar11 = MethodInfo_Void_Add;
      piVar1 = &(((System_Collections_Generic_List_object__o *)unaff_R13)->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar10 = (((System_Collections_Generic_List_object__o *)unaff_R13)->fields)._items;
      if (pSVar10 == (System_Object_array *)0x0) goto label_0448a1f1;
      uVar4 = (((System_Collections_Generic_List_object__o *)unaff_R13)->fields)._size;
      if (uVar4 < (uint)pSVar10->max_length) {
        (((System_Collections_Generic_List_object__o *)unaff_R13)->fields)._size = uVar4 + 1;
        pSVar10->m_Items[(int)uVar4] = (Il2CppObject *)pSVar6;
        il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)unaff_R13,(Il2CppObject *)pSVar6,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      uVar14 = uVar14 + 1;
      uVar4 = (uint)((System_String_array_array *)source)->max_length;
      if ((long)(int)uVar4 <= (long)uVar14) break;
      if (uVar4 <= uVar14) goto label_0448a1bf;
    }
  }
  rowDelimiter = (uint16_t)plVar16;
  if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
  if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Char__ToString((uint16_t)&stack0xffffffffffffff8e,(MethodInfo *)0x0);
  if ((System_Collections_Generic_List_object__o *)unaff_R13 ==
      (System_Collections_Generic_List_object__o *)0x0) goto label_0448a1f1;
  pSVar7 = (System_String_array *)
           System_Collections_Generic_List_object___ToArray
                     ((System_Collections_Generic_List_object__o *)unaff_R13,MethodInfo_String_ToArray);
  pSVar6 = System_String__Join(pSVar6,pSVar7,(MethodInfo *)0x0);
  if (__this == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_0448a1f1;
  pSVar8 = Utility_Algorithms_CompressionAlgorithm__CompressString(__this,pSVar6,1,(MethodInfo *)0x0);
  unaff_R13 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)unaff_R13,(MethodInfo *)0x0);
  if (in_stack_ffffffffffffff90 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
  goto label_0448a1f1;
  __this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                        (in_stack_ffffffffffffff90,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
  if (__this_06 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_0448a1f1;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
             &stack0xffffffffffffffb8,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  local_58 = local_38;
  local_50 = pSVar8;
  if ((System_Collections_Generic_List_object__o *)unaff_R13 ==
      (System_Collections_Generic_List_object__o *)0x0) {
    __this_01.fields._dictionary._4_2_ = uVar18;
    __this_01.fields._dictionary._0_4_ = in_stack_ffffffffffffff88;
    __this_01.fields._dictionary._6_2_ = uVar19;
    __this_01.fields._8_8_ = in_stack_ffffffffffffff90;
    __this_01.fields._currentKey = &local_48->obj;
    bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff98);
    pSVar20 = local_48;
    if ((char)bVar3 != '\0') goto label_0448a235;
  }
  else {
    plVar16 = &MethodInfo_Boolean_MoveNext;
    source = (System_String_o *)&stack0xffffffffffffff98;
    pSVar20 = local_48;
    while (__this_00.fields._dictionary._4_2_ = uVar18,
          __this_00.fields._dictionary._0_4_ = in_stack_ffffffffffffff88,
          __this_00.fields._dictionary._6_2_ = uVar19, __this_00.fields._8_8_ = in_stack_ffffffffffffff90,
          __this_00.fields._currentKey = &pSVar20->obj,
          bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (__this_00,(MethodInfo_3251B20 *)source), (char)bVar3 != '\0') {
      pSVar6 = (System_String_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (in_stack_ffffffffffffff90,&local_38->obj,MethodInfo_String_get_Item);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      (*(((System_Collections_Generic_List_object__o *)unaff_R13)->klass->vtable).
        _20_System_Collections_IList_Add.methodPtr)(unaff_R13,local_38,pSVar9);
    }
  }
  __this_02.fields._dictionary._4_2_ = uVar18;
  __this_02.fields._dictionary._0_4_ = in_stack_ffffffffffffff88;
  __this_02.fields._dictionary._6_2_ = uVar19;
  __this_02.fields._8_8_ = in_stack_ffffffffffffff90;
  __this_02.fields._currentKey = &pSVar20->obj;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
  do {
    rowDelimiter = (uint16_t)plVar16;
    pSVar10 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (pSVar10 == (System_Object_array *)0x0) {
label_0448a1f1:
      il2cpp_runtime_helper_022b2c90();
label_0448a1f6:
      pSVar7 = ((System_String_array_array *)source)->m_Items[0];
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = System_Char__ToString((uint16_t)&stack0xffffffffffffff8c,(MethodInfo *)0x0);
      System_String__Join(pSVar6,pSVar7,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
label_0448a235:
      pSVar6 = (System_String_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (in_stack_ffffffffffffff90,&local_58->obj,MethodInfo_String_get_Item);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      pSVar6 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
    }
    else {
      if ((local_50 == (System_Byte_array *)0x0) || (lVar11 = il2cpp_runtime_helper_023051f0(local_50), lVar11 != 0)) {
        uVar2 = rowDelimiter;
        if ((int)pSVar10->max_length != 0) {
          pSVar10->m_Items[0] = &local_50->obj;
          il2cpp_runtime_helper_022b4080(pSVar10->m_Items);
          if (((System_Collections_Generic_List_object__o *)unaff_R13 !=
               (System_Collections_Generic_List_object__o *)0x0) &&
             (lVar11 = il2cpp_runtime_helper_023051f0(unaff_R13), lVar11 == 0)) goto label_0448a1c4;
          if (1 < (uint)pSVar10->max_length) {
            pSVar10->m_Items[1] = (Il2CppObject *)unaff_R13;
            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + 1,unaff_R13);
            return pSVar10;
          }
        }
label_0448a1bf:
        rowDelimiter = uVar2;
        il2cpp_runtime_helper_022b2ca0();
      }
label_0448a1c4:
      uVar12 = il2cpp_runtime_helper_0231b270();
      uVar4 = il2cpp_runtime_helper_022b2b10(uVar12);
label_0448a1d3:
      if ((((int)uVar4 < 1) ||
          (((System_String_array_array *)source)->m_Items[0] == (System_String_array *)0x0)) ||
         (pSVar6 = System_String__Trim((System_String_o *)((System_String_array_array *)source)->m_Items[0],
                                       (MethodInfo *)0x0), pSVar6 == (System_String_o *)0x0))
      goto label_0448a1f1;
    }
    System_String__Split(pSVar6,rowDelimiter,0,(MethodInfo *)0x0);
    auVar17 = il2cpp_runtime_helper_022b2c90();
    plVar16 = auVar17._0_8_;
    if (auVar17._8_4_ != 1) goto label_0448a306;
    plVar13 = (long *)__cxa_begin_catch(plVar16);
    lVar11 = *plVar13;
    __cxa_end_catch();
    __this_03.fields._dictionary._4_2_ = uVar18;
    __this_03.fields._dictionary._0_4_ = in_stack_ffffffffffffff88;
    __this_03.fields._dictionary._6_2_ = uVar19;
    __this_03.fields._8_8_ = in_stack_ffffffffffffff90;
    __this_03.fields._currentKey = &pSVar20->obj;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
  } while (lVar11 == 0);
  il2cpp_runtime_helper_022fefe0(lVar11);
label_0448a306:
  __this_04.fields._dictionary._4_2_ = uVar18;
  __this_04.fields._dictionary._0_4_ = in_stack_ffffffffffffff88;
  __this_04.fields._dictionary._6_2_ = uVar19;
  __this_04.fields._8_8_ = in_stack_ffffffffffffff90;
  __this_04.fields._currentKey = &pSVar20->obj;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
  _Unwind_Resume(plVar16);
}


// Utility.CSVCompression$$Decompress
// il2cpp: System_String_o* Utility_CSVCompression__Decompress (System_Byte_array* source, SimpleJSONFixed_JSONNode_o* symbolTable, int32_t deltaRows, uint16_t containerDelimiter, uint16_t rowDelimiter, const MethodInfo* method);
// 0x448a570

System_String_o *
Utility_CSVCompression__Decompress
          (System_Byte_array *source,SimpleJSONFixed_JSONNode_o *symbolTable,int32_t deltaRows,
          uint16_t containerDelimiter,uint16_t rowDelimiter,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  ushort uVar3;
  System_Object_array *pSVar4;
  Il2CppArrayBounds *pIVar5;
  System_String_c *pSVar6;
  void *pvVar7;
  System_Linq_IOrderedEnumerable_TSource__c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  MethodInfo_30FDBB0 *pMVar10;
  bool bVar11;
  bool bVar12;
  undefined4 in_EAX;
  bool_conflict bVar13;
  int32_t iVar14;
  System_Collections_Generic_List_object__o *__this;
  System_String_array *pSVar15;
  System_String_array *item;
  System_String_array *pSVar16;
  System_String_o *pSVar17;
  System_String_array_array *outputArr;
  long lVar18;
  System_String_o *pSVar19;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar20;
  Il2CppMethodPointer *ppIVar21;
  long *plVar22;
  Il2CppType ***pppIVar23;
  undefined8 uVar24;
  int iVar25;
  undefined6 in_register_0000000a;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  MethodInfo *method_00;
  Utility_Algorithms_CompressionAlgorithm_o *__this_02;
  undefined8 *puVar30;
  undefined6 in_register_00000082;
  MethodInfo_30FDBB0 **ppMVar31;
  undefined8 *puVar32;
  uint uVar33;
  int iVar34;
  System_String_array_array *pSVar35;
  undefined1 auVar36 [12];
  MethodInfo *pMStack_d8;
  long lStack_d0;
  undefined8 uStack_38;
  
  outputArr = (System_String_array_array *)(CONCAT62(in_register_00000082,rowDelimiter) & 0xffffffff);
  pSVar16 = (System_String_array *)(CONCAT62(in_register_0000000a,containerDelimiter) & 0xffffffff);
  uStack_38 = CONCAT26((short)pSVar16,CONCAT24((short)outputArr,in_EAX));
  pSVar35 = outputArr;
  if (g_data_057ae8d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae8d7 = '\x01';
    if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) goto label_0448a661;
label_0448a5b3:
    __this_02 = (Utility_Algorithms_CompressionAlgorithm_o *)**(long **)(TypeInfo_DataCompressors + 0xb8);
    if (__this_02 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_0448a95a;
label_0448a67c:
    pSVar17 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                        (__this_02,source,0x1000,0xa00000,(MethodInfo *)0x0);
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
    if ((pSVar17 == (System_String_o *)0x0) ||
       (pSVar15 = System_String__Split(pSVar17,containerDelimiter,0,(MethodInfo *)0x0),
       pSVar15 == (System_String_array *)0x0)) goto label_0448a95a;
    uVar33 = (uint)pSVar15->max_length;
    pSVar16 = pSVar15;
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (int)uVar33) {
        uVar28 = 0;
        outputArr = (System_String_array_array *)(ulong)rowDelimiter;
        do {
          while( true ) {
            if (uVar33 <= uVar28) goto label_0448a947;
            pSVar35 = outputArr;
            if (pSVar15->m_Items[(int)uVar28] == (System_String_o *)0x0) goto label_0448a95a;
            item = System_String__Split(pSVar15->m_Items[(int)uVar28],rowDelimiter,0,(MethodInfo *)0x0);
            lVar18 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto label_0448a95a;
            uVar33 = (__this->fields)._size;
            if ((uint)pSVar4->max_length <= uVar33) break;
            (__this->fields)._size = uVar33 + 1;
            pSVar4->m_Items[(int)uVar33] = &item->obj;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar33);
            uVar28 = uVar28 + 1;
            uVar33 = (uint)pSVar15->max_length;
            if ((int)uVar33 <= (int)uVar28) goto label_0448a790;
          }
          System_Collections_Generic_List_object___AddWithResize
                    (__this,&item->obj,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          uVar28 = uVar28 + 1;
          uVar33 = (uint)pSVar15->max_length;
        } while ((int)uVar28 < (int)uVar33);
      }
label_0448a790:
      outputArr = (System_String_array_array *)
                  System_Collections_Generic_List_object___ToArray(__this,MethodInfo_String_ToArray);
      if (outputArr == (System_String_array_array *)0x0) goto label_0448a95a;
      if (outputArr->max_length != 0) {
        pMVar26 = extraout_RDX;
        if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar26 = extraout_RDX_00;
        }
        Utility_CSVCompression__DecompressDelta(outputArr,deltaRows,pMVar26);
      }
      pSVar16 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar16,MethodInfo_List_1_System_String);
      pSVar35 = outputArr;
      if ((int)outputArr->max_length < 1) {
label_0448a8e9:
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar17 = System_Char__ToString((short)&uStack_38 + 6,(MethodInfo *)0x0);
        if (pSVar16 != (System_String_array *)0x0) {
          pSVar16 = (System_String_array *)
                    System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_object__o *)pSVar16,MethodInfo_String_ToArray);
          pSVar17 = System_String__Join(pSVar17,pSVar16,(MethodInfo *)0x0);
          return pSVar17;
        }
        goto label_0448a95a;
      }
      if (pSVar16 != (System_String_array *)0x0) {
        uVar27 = 0;
        if ((outputArr->max_length & 0xffffffff) != 0) {
          do {
            pSVar15 = outputArr->m_Items[uVar27];
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar17 = System_Char__ToString((short)&uStack_38 + 4,(MethodInfo *)0x0);
            pSVar17 = System_String__Join(pSVar17,pSVar15,(MethodInfo *)0x0);
            lVar18 = MethodInfo_Void_Add;
            piVar2 = (int *)((long)&pSVar16->max_length + 4);
            *piVar2 = *piVar2 + 1;
            pIVar5 = pSVar16->bounds;
            if (pIVar5 == (Il2CppArrayBounds *)0x0) goto label_0448a95a;
            uVar33 = (uint)pSVar16->max_length;
            if (uVar33 < (uint)pIVar5[1].lower_bound) {
              *(uint *)&pSVar16->max_length = uVar33 + 1;
              (&pIVar5[2].length)[(int)uVar33] = (il2cpp_array_size_t)pSVar17;
              il2cpp_runtime_helper_022b4080(&pIVar5[2].length + (int)uVar33);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar16,(Il2CppObject *)pSVar17,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            uVar27 = uVar27 + 1;
            uVar33 = (uint)outputArr->max_length;
            if ((long)(int)uVar33 <= (long)uVar27) goto label_0448a8e9;
          } while (uVar27 < uVar33);
        }
label_0448a947:
        uVar33 = il2cpp_runtime_helper_022b2ca0();
        goto label_0448a94c;
      }
      goto label_0448a95f;
    }
label_0448a94c:
    pSVar35 = outputArr;
    if (((int)uVar33 < 1) || (pSVar17 = pSVar16->m_Items[0], pSVar17 == (System_String_o *)0x0))
    goto label_0448a95a;
  }
  else {
    if (*(int *)(TypeInfo_DataCompressors + 0xe4) != 0) goto label_0448a5b3;
label_0448a661:
    il2cpp_runtime_helper_02337ed0();
    __this_02 = (Utility_Algorithms_CompressionAlgorithm_o *)**(long **)(TypeInfo_DataCompressors + 0xb8);
    if (__this_02 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_0448a67c;
label_0448a95a:
    outputArr = pSVar35;
    il2cpp_runtime_helper_022b2c90();
label_0448a95f:
    pSVar15 = outputArr->m_Items[0];
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = System_Char__ToString((short)&uStack_38 + 4,(MethodInfo *)0x0);
    System_String__Join(pSVar17,pSVar15,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  uVar33 = (uint)outputArr & 0xffff;
  System_String__Split(pSVar17,(uint16_t)outputArr,0,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ae8da = '\x01';
  }
  if (pSVar17 == (System_String_o *)0x0) {
label_0448abbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)&pSVar17[1].klass == 0) {
label_0448abb7:
      il2cpp_runtime_helper_022b2ca0();
      goto label_0448abbc;
    }
    if (pSVar17[1].monitor == (System_Array_o *)0x0) goto label_0448abbc;
    lVar18 = 0;
    outputArr = (System_String_array_array *)System_Array__Clone(pSVar17[1].monitor,(MethodInfo *)0x0);
    pSVar15 = TypeInfo_string;
    if ((outputArr == (System_String_array_array *)0x0) ||
       (lVar18 = il2cpp_runtime_helper_023051f0(outputArr,TypeInfo_string), pSVar16 = pSVar15, lVar18 != 0)) {
      pSVar6 = pSVar17[1].klass;
      if ((int)pSVar6 < 2) {
        return (System_String_o *)pSVar6;
      }
      pSVar19 = (System_String_o *)((ulong)pSVar6 & 0xffffffff);
      uVar27 = 1;
      outputArr = (System_String_array_array *)&g_data_057b9b70;
      if (1 < ((ulong)pSVar6 & 0xffffffff)) {
        do {
          if (0 < (int)uVar33) {
            pvVar7 = (&pSVar17[1].monitor)[uVar27];
            if (pvVar7 == (void *)0x0) goto label_0448abbc;
            if (lVar18 == 0) {
              if ((*(int *)((long)pvVar7 + 0x18) != 0) &&
                 ((bVar13 = System_String__op_Equality
                                      (*(System_String_o **)((long)pvVar7 + 0x20),
                                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                       (MethodInfo *)0x0), (char)bVar13 != '\0' ||
                  (*(int *)((long)pvVar7 + 0x18) != 0)))) goto label_0448abbc;
              break;
            }
            puVar32 = (undefined8 *)((long)pvVar7 + 0x20);
            pSVar16 = (System_String_array *)0x0;
            if (*(int *)((long)pvVar7 + 0x18) == 0) break;
            while( true ) {
              bVar13 = System_String__op_Equality
                                 ((System_String_o *)*puVar32,
                                  (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0)
              ;
              if ((char)bVar13 == '\0') {
                if (((System_String_array *)(ulong)*(uint *)((long)pvVar7 + 0x18) <= pSVar16) ||
                   ((System_String_array *)(ulong)*(uint *)(lVar18 + 0x18) <= pSVar16)) goto label_0448abb7;
                puVar30 = (undefined8 *)((long)pSVar16 * 8 + 0x20 + lVar18);
                *(undefined8 *)(lVar18 + 0x20 + (long)pSVar16 * 8) = *puVar32;
              }
              else {
                if (((System_String_array *)(ulong)*(uint *)(lVar18 + 0x18) <= pSVar16) ||
                   ((System_String_array *)(ulong)*(uint *)((long)pvVar7 + 0x18) <= pSVar16))
                goto label_0448abb7;
                *puVar32 = *(undefined8 *)(lVar18 + 0x20 + (long)pSVar16 * 8);
                puVar30 = puVar32;
              }
              il2cpp_runtime_helper_022b4080(puVar30);
              pSVar16 = (System_String_array *)((long)&(pSVar16->obj).klass + 1);
              puVar32 = puVar32 + 1;
              if ((System_String_array *)(ulong)uVar33 == pSVar16) break;
              if ((System_String_array *)(ulong)*(uint *)((long)pvVar7 + 0x18) <= pSVar16) goto label_0448abb7;
            }
            pSVar19 = (System_String_o *)(ulong)*(uint *)&pSVar17[1].klass;
          }
          uVar27 = uVar27 + 1;
          if ((long)(int)pSVar19 <= (long)uVar27) {
            return pSVar19;
          }
        } while (uVar27 < pSVar19);
      }
      goto label_0448abb7;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pSVar15 = pSVar16;
  if (g_data_057ae8d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_int_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_KeyValuePair_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_KeyValuePair_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_CompressSymbol_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae8d9 = '\x01';
  }
  if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_d8 = (MethodInfo *)Utility_CSVCompression__ToBase62(0,(MethodInfo *)pSVar15);
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Int32);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_String);
  if (outputArr != (System_String_array_array *)0x0) {
    iVar34 = (int)outputArr->max_length;
    if (0 < iVar34) {
      uVar33 = 0;
      ppMVar31 = &MethodInfo_Boolean_ContainsKey;
      if (iVar34 != 0) {
        do {
          pSVar15 = outputArr->m_Items[(int)uVar33];
          if (pSVar15 == (System_String_array *)0x0) goto label_0448b488;
          iVar34 = (int)pSVar15->max_length;
          if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            if (0 < iVar34) goto label_0448b488;
          }
          else if (0 < iVar34) {
            uVar27 = 0;
            if ((pSVar15->max_length & 0xffffffff) == 0) break;
            while( true ) {
              pSVar17 = pSVar15->m_Items[uVar27];
              bVar13 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                                 (__this_00,(Il2CppObject *)pSVar17,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar13 == '\0') {
                System_Collections_Generic_Dictionary_object__int___Add
                          (__this_00,(Il2CppObject *)pSVar17,1,MethodInfo_Void_Add);
              }
              else {
                iVar14 = System_Collections_Generic_Dictionary_object__int___get_Item
                                   (__this_00,(Il2CppObject *)pSVar17,MethodInfo_Int32_get_Item);
                System_Collections_Generic_Dictionary_object__int___set_Item
                          (__this_00,(Il2CppObject *)pSVar17,iVar14 + 1,MethodInfo_Void_set_Item);
              }
              uVar27 = uVar27 + 1;
              uVar28 = (uint)pSVar15->max_length;
              if ((long)(int)uVar28 <= (long)uVar27) break;
              if (uVar28 <= uVar27) goto label_0448b520;
            }
          }
          uVar33 = uVar33 + 1;
          uVar28 = (uint)outputArr->max_length;
          if ((int)uVar28 <= (int)uVar33) goto label_0448ae80;
        } while (uVar33 < uVar28);
      }
label_0448b520:
      do {
        il2cpp_runtime_helper_022b2ca0();
label_0448b525:
        uVar24 = il2cpp_runtime_helper_022fefe0();
        if (ppMVar31 != (MethodInfo_30FDBB0 **)0x0) {
label_0448b4a8:
          pMVar10 = *ppMVar31;
          uVar27 = (ulong)*(ushort *)((long)&pMVar10[3].klass + 6);
          if (uVar27 != 0) {
            lVar18 = 0;
            do {
              if (*(long *)(pMVar10[2].methodPointer + lVar18) == TypeInfo_IDisposable) {
                pppIVar23 = &pMVar10[3].parameters + (long)*(int *)(pMVar10[2].methodPointer + lVar18 + 8) * 2
                ;
                goto label_0448b4fd;
              }
              lVar18 = lVar18 + 0x10;
            } while (uVar27 << 4 != lVar18);
          }
          pppIVar23 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar31,TypeInfo_IDisposable,0);
label_0448b4fd:
          (*(code *)*pppIVar23)(ppMVar31,(Il2CppRGCTXData *)pppIVar23[1]);
        }
label_0448b506:
        if (lStack_d0 == 0) {
          _Unwind_Resume(uVar24);
        }
        il2cpp_runtime_helper_022fefe0(lStack_d0);
      } while( true );
    }
label_0448ae80:
    if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      pMVar26 = pMStack_d8;
      bVar13 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                         (__this_00,(Il2CppObject *)pMStack_d8,MethodInfo_Boolean_ContainsKey);
      iVar34 = 0;
      if ((char)bVar13 != '\0') {
        iVar34 = 1;
        iVar25 = *(int *)(TypeInfo_CSVCompression + 0xe4);
        while( true ) {
          if (iVar25 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_d8 = (MethodInfo *)Utility_CSVCompression__ToBase62(iVar34,pMVar26);
          pMVar26 = pMStack_d8;
          bVar13 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                             (__this_00,(Il2CppObject *)pMStack_d8,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar13 == '\0') break;
          iVar34 = iVar34 + 1;
          iVar25 = *(int *)(TypeInfo_CSVCompression + 0xe4);
        }
      }
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_int_int);
        System_Func_KeyValuePair_object__int___int____ctor();
        lVar18 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TKey__o **)(lVar18 + 8) = keySelector;
        il2cpp_runtime_helper_022b4080(lVar18 + 8,keySelector);
      }
      pSVar20 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__int___int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,keySelector,
                           MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
      if (pSVar20 != (System_Linq_IOrderedEnumerable_TSource__o *)0x0) {
        pSVar8 = pSVar20->klass;
        uVar3._0_1_ = (pSVar8->_2).rank;
        uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar9 = (pSVar8->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(long *)((long)&pIVar9->interfaceType + lVar18) == TypeInfo_IEnumerable_KeyValuePair_string_int) {
              ppIVar21 = &pSVar8->vtable[*(int *)((long)&pIVar9->offset + lVar18)].methodPtr;
              goto label_0448b021;
            }
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar18);
        }
        ppIVar21 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar20,TypeInfo_IEnumerable_KeyValuePair_string_int,0);
label_0448b021:
        ppMVar31 = (MethodInfo_30FDBB0 **)(**ppIVar21)(pSVar20,(MethodInfo *)ppIVar21[1]);
        if (ppMVar31 != (MethodInfo_30FDBB0 **)0x0) {
          lStack_d0 = 0;
          bVar11 = true;
          iVar25 = 0;
label_0448b050:
          pMVar10 = *ppMVar31;
          uVar27 = (ulong)*(ushort *)((long)&pMVar10[3].klass + 6);
          if (uVar27 != 0) {
            lVar18 = 0;
            do {
              if (*(long *)(pMVar10[2].methodPointer + lVar18) == TypeInfo_IEnumerator) {
                pppIVar23 = &pMVar10[3].parameters + (long)*(int *)(pMVar10[2].methodPointer + lVar18 + 8) * 2
                ;
                goto label_0448b0b3;
              }
              lVar18 = lVar18 + 0x10;
            } while (uVar27 << 4 != lVar18);
          }
          pppIVar23 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar31,TypeInfo_IEnumerator,0);
label_0448b0b3:
          pSVar17 = (System_String_o *)(*(code *)*pppIVar23)(ppMVar31,(Il2CppRGCTXData *)pppIVar23[1]);
          iVar29 = 0xe;
          if ((char)pSVar17 == '\0') goto label_0448b2ef;
          pMVar10 = *ppMVar31;
          uVar27 = (ulong)*(ushort *)((long)&pMVar10[3].klass + 6);
          if (uVar27 != 0) {
            lVar18 = 0;
            do {
              if (*(long *)(pMVar10[2].methodPointer + lVar18) == TypeInfo_IEnumerator_KeyValuePair_string_int) {
                pppIVar23 = &pMVar10[3].parameters + (long)*(int *)(pMVar10[2].methodPointer + lVar18 + 8) * 2
                ;
                goto label_0448b123;
              }
              lVar18 = lVar18 + 0x10;
            } while (uVar27 << 4 != lVar18);
          }
          pppIVar23 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar31,TypeInfo_IEnumerator_KeyValuePair_string_int,0);
label_0448b123:
          auVar36 = (*(code *)*pppIVar23)(ppMVar31,(Il2CppRGCTXData *)pppIVar23[1]);
          pMVar26 = auVar36._0_8_;
          bVar12 = 2 < auVar36._8_4_;
          pSVar17 = (System_String_o *)CONCAT71(auVar36._1_7_,bVar12);
          if (!(bool)(bVar11 & bVar12)) goto label_0448b2ef;
          if (pMVar26 != (MethodInfo *)0x0) {
            if (pMStack_d8 == (MethodInfo *)0x0) goto label_0448b1fd;
            if (((System_String_Fields *)&pMStack_d8->invoker_method)->_stringLength <
                *(int *)&pMVar26->invoker_method) {
              if (pSVar16 == (System_String_array *)0x0) goto label_0448b207;
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar16,
                         (Il2CppObject *)pMStack_d8,(Il2CppObject *)pMVar26,MethodInfo_Void_Add);
              if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_0448b20c;
              method_00 = pMVar26;
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this_01,(Il2CppObject *)pMVar26,(Il2CppObject *)pMStack_d8,MethodInfo_Void_Add);
              if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar34 = iVar34 + 1;
              pMStack_d8 = (MethodInfo *)Utility_CSVCompression__ToBase62(iVar34,method_00);
              if (pMStack_d8 == (MethodInfo *)0x0) goto label_0448b211;
              iVar25 = *(int *)&pMVar26->invoker_method +
                       iVar25 + ((System_String_Fields *)&pMStack_d8->invoker_method)->_stringLength + 6;
              bVar11 = iVar25 < 0x2711;
            }
            goto label_0448b050;
          }
          il2cpp_runtime_helper_022b2c90();
label_0448b1fd:
          il2cpp_runtime_helper_022b2c90();
        }
        il2cpp_runtime_helper_022b2c90();
label_0448b207:
        il2cpp_runtime_helper_022b2c90();
label_0448b20c:
        il2cpp_runtime_helper_022b2c90();
label_0448b211:
        auVar36 = il2cpp_runtime_helper_022b2c90();
        uVar24 = auVar36._0_8_;
        iVar29 = 0;
        if (auVar36._8_4_ != 1) {
          lStack_d0 = 0;
          if (ppMVar31 == (MethodInfo_30FDBB0 **)0x0) goto label_0448b506;
          goto label_0448b4a8;
        }
        plVar22 = (long *)__cxa_begin_catch();
        lStack_d0 = *plVar22;
        pSVar17 = (System_String_o *)__cxa_end_catch();
label_0448b2ef:
        if (ppMVar31 != (MethodInfo_30FDBB0 **)0x0) {
          pMVar10 = *ppMVar31;
          uVar27 = (ulong)*(ushort *)((long)&pMVar10[3].klass + 6);
          if (uVar27 != 0) {
            lVar18 = 0;
            do {
              if (*(long *)(pMVar10[2].methodPointer + lVar18) == TypeInfo_IDisposable) {
                pppIVar23 = &pMVar10[3].parameters + (long)*(int *)(pMVar10[2].methodPointer + lVar18 + 8) * 2
                ;
                goto label_0448b35d;
              }
              lVar18 = lVar18 + 0x10;
            } while (uVar27 << 4 != lVar18);
          }
          pppIVar23 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar31,TypeInfo_IDisposable,0);
label_0448b35d:
          pSVar17 = (System_String_o *)(*(code *)*pppIVar23)(ppMVar31,(Il2CppRGCTXData *)pppIVar23[1]);
        }
        if (lStack_d0 != 0) goto label_0448b525;
        if ((iVar29 != 0xe) && (iVar29 != 0)) {
          return pSVar17;
        }
        pSVar17 = (System_String_o *)outputArr->max_length;
        if ((int)pSVar17 < 1) {
          return pSVar17;
        }
        ppMVar31 = (MethodInfo_30FDBB0 **)0x0;
        if ((int)pSVar17 != 0) {
          do {
            pSVar16 = outputArr->m_Items[(int)ppMVar31];
            if (pSVar16 == (System_String_array *)0x0) goto label_0448b488;
            iVar34 = (int)pSVar16->max_length;
            if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              if (0 < iVar34) goto label_0448b488;
            }
            else {
              if (0 < iVar34) {
                lVar18 = 0;
                uVar27 = 0;
                if ((pSVar16->max_length & 0xffffffff) == 0) break;
                while( true ) {
                  bVar13 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                     (__this_01,(Il2CppObject *)pSVar16->m_Items[uVar27],MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar13 != '\0') {
                    if (((uint)pSVar16->max_length <= uVar27) ||
                       (pSVar17 = (System_String_o *)
                                  System_Collections_Generic_Dictionary_object__object___get_Item
                                            (__this_01,(Il2CppObject *)pSVar16->m_Items[uVar27],MethodInfo_String_get_Item),
                       (uint)pSVar16->max_length <= uVar27)) goto label_0448b520;
                    pSVar16->m_Items[uVar27] = pSVar17;
                    il2cpp_runtime_helper_022b4080((long)pSVar16->m_Items + lVar18,pSVar17);
                  }
                  uVar27 = uVar27 + 1;
                  uVar33 = (uint)pSVar16->max_length;
                  lVar18 = lVar18 + 8;
                  if ((long)(int)uVar33 <= (long)uVar27) break;
                  if (uVar33 <= uVar27) goto label_0448b520;
                }
              }
              pSVar17 = (System_String_o *)outputArr->max_length;
            }
            uVar33 = (int)ppMVar31 + 1;
            ppMVar31 = (MethodInfo_30FDBB0 **)(ulong)uVar33;
            if ((int)(uint)pSVar17 <= (int)uVar33) {
              return pSVar17;
            }
          } while (uVar33 < (uint)pSVar17);
        }
        goto label_0448b520;
      }
    }
  }
label_0448b488:
  pSVar17 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  return pSVar17;
}


// Utility.CSVCompression$$CompressDelta
// il2cpp: void Utility_CSVCompression__CompressDelta (System_String_array_array* outputArr, int32_t deltaRows, const MethodInfo* method);
// 0x448a340

void Utility_CSVCompression__CompressDelta
               (System_String_array_array *outputArr,int32_t deltaRows,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  ushort uVar3;
  System_Object_array *pSVar4;
  Il2CppArrayBounds *pIVar5;
  System_String_array *value;
  System_Linq_IOrderedEnumerable_TSource__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  MethodInfo_30FDBB0 *pMVar8;
  bool bVar9;
  char cVar10;
  undefined4 uVar11;
  bool_conflict bVar12;
  int32_t iVar13;
  long lVar14;
  System_Collections_Generic_List_object__o *__this;
  System_String_array_array *pSVar15;
  System_String_array_array *__this_00;
  System_String_array *pSVar16;
  System_String_array_array *outputArr_00;
  ulong uVar17;
  System_Collections_Generic_Dictionary_object__int__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar18;
  VirtualInvokeData *pVVar19;
  long *plVar20;
  il2cpp_array_size_t iVar21;
  System_String_o *pSVar22;
  Il2CppType ***pppIVar23;
  undefined8 uVar24;
  int iVar25;
  System_String_array *in_RCX;
  int32_t deltaRows_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  ulong unaff_RBX;
  long unaff_RBP;
  MethodInfo *method_00;
  Utility_Algorithms_CompressionAlgorithm_o *__this_03;
  System_String_Fields *pSVar30;
  ulong in_R8;
  System_String_array *unaff_R12;
  MethodInfo_30FDBB0 **ppMVar31;
  ulong unaff_R13;
  System_String_Fields *pSVar32;
  ulong uVar33;
  System_String_array_array *unaff_R14;
  uint uVar34;
  int iVar35;
  System_String_array_array *pSVar36;
  undefined1 auVar37 [12];
  MethodInfo *pMStack_120;
  long lStack_118;
  undefined8 uStack_80;
  ulong uStack_78;
  System_String_array *pSStack_70;
  ulong uStack_68;
  System_String_array_array *pSStack_60;
  System_String_array_array *pSStack_58;
  long lStack_50;
  uint local_3c;
  System_String_array_array *local_38;
  
  local_3c = deltaRows;
  if (g_data_057ae8d8 == '\0') {
    lStack_50 = 0x448a36a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ae8d8 = '\x01';
    method = extraout_RDX;
  }
  lStack_50 = 0x448a385;
  pSVar15 = TypeInfo_string;
  lVar14 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,100,method);
  if (outputArr != (System_String_array_array *)0x0) {
    in_RCX = (System_String_array *)outputArr->max_length;
    pSVar16 = (System_String_array *)((ulong)in_RCX & 0xffffffff);
    unaff_RBP = lVar14;
    if (lVar14 == 0) {
      if ((int)in_RCX != 0) {
        in_RCX = outputArr->m_Items[0];
        if ((in_RCX == (System_String_array *)0x0) || (0 < (int)in_RCX->max_length)) goto label_0448a564;
label_0448a423:
        if ((int)pSVar16 < 2) {
          return;
        }
        unaff_RBX = (ulong)local_3c;
        unaff_R12 = (System_String_array *)0x1;
        in_RCX = pSVar16;
        local_38 = outputArr;
        if ((System_String_array *)0x1 < pSVar16) {
          do {
            if (0 < (int)local_3c) {
              unaff_R14 = (System_String_array_array *)outputArr->m_Items[(long)unaff_R12];
              in_RCX = pSVar16;
              if (unaff_R14 == (System_String_array_array *)0x0) goto label_0448a564;
              if (lVar14 == 0) {
                if ((int)unaff_R14->max_length != 0) goto label_0448a564;
                break;
              }
              outputArr = (System_String_array_array *)unaff_R14->m_Items;
              unaff_R13 = 0;
              if ((int)unaff_R14->max_length == 0) break;
              while( true ) {
                in_RCX = pSVar16;
                if (*(uint *)(lVar14 + 0x18) <= unaff_R13) goto label_0448a55f;
                pSVar15 = (System_String_array_array *)(outputArr->obj).klass;
                lStack_50 = 0x448a4ea;
                bVar12 = System_String__op_Equality
                                   ((System_String_o *)pSVar15,
                                    *(System_String_o **)(lVar14 + 0x20 + unaff_R13 * 8),(MethodInfo *)0x0);
                in_RCX = pSVar16;
                if ((char)bVar12 == '\0') {
                  if (((uint)unaff_R14->max_length <= unaff_R13) || (*(uint *)(lVar14 + 0x18) <= unaff_R13))
                  goto label_0448a55f;
                  pSVar15 = (System_String_array_array *)(unaff_R13 * 8 + 0x20 + lVar14);
                  *(Il2CppClass **)(lVar14 + 0x20 + unaff_R13 * 8) = (outputArr->obj).klass;
                }
                else {
                  if ((uint)unaff_R14->max_length <= unaff_R13) goto label_0448a55f;
                  (outputArr->obj).klass = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  pSVar15 = outputArr;
                }
                lStack_50 = 0x448a4b5;
                il2cpp_runtime_helper_022b4080();
                unaff_R13 = unaff_R13 + 1;
                outputArr = (System_String_array_array *)&(outputArr->obj).monitor;
                if (unaff_RBX == unaff_R13) break;
                in_RCX = pSVar16;
                if ((uint)unaff_R14->max_length <= unaff_R13) goto label_0448a55f;
              }
              pSVar16 = (System_String_array *)(ulong)(uint)local_38->max_length;
              outputArr = local_38;
            }
            unaff_R12 = (System_String_array *)((long)&(unaff_R12->obj).klass + 1);
            if ((long)(int)pSVar16 <= (long)unaff_R12) {
              return;
            }
            in_RCX = pSVar16;
          } while (unaff_R12 < pSVar16);
        }
      }
    }
    else if ((int)in_RCX != 0) {
      unaff_R14 = (System_String_array_array *)(lVar14 + 0x20);
      unaff_RBX = 0;
      do {
        in_RCX = outputArr->m_Items[0];
        if (in_RCX == (System_String_array *)0x0) goto label_0448a564;
        uVar34 = (uint)in_RCX->max_length;
        if ((long)(int)uVar34 <= (long)unaff_RBX) goto label_0448a423;
        if ((uVar34 <= unaff_RBX) || (*(uint *)(lVar14 + 0x18) <= unaff_RBX)) break;
        (unaff_R14->obj).klass = (Il2CppClass *)in_RCX->m_Items[unaff_RBX];
        lStack_50 = 0x448a3ed;
        pSVar15 = unaff_R14;
        il2cpp_runtime_helper_022b4080();
        unaff_RBX = unaff_RBX + 1;
        in_RCX = (System_String_array *)outputArr->max_length;
        pSVar16 = (System_String_array *)((ulong)in_RCX & 0xffffffff);
        unaff_R14 = (System_String_array_array *)&(unaff_R14->obj).monitor;
      } while ((int)in_RCX != 0);
    }
label_0448a55f:
    lStack_50 = 0x448a564;
    il2cpp_runtime_helper_022b2ca0();
  }
label_0448a564:
  lStack_50 = 0x448a569;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  outputArr_00 = (System_String_array_array *)(in_R8 & 0xffffffff);
  __this_00 = (System_String_array_array *)((ulong)in_RCX & 0xffffffff);
  uStack_80 = CONCAT26((short)__this_00,CONCAT24((short)outputArr_00,uVar11));
  pSVar36 = outputArr_00;
  uStack_78 = unaff_RBX;
  pSStack_70 = unaff_R12;
  uStack_68 = unaff_R13;
  pSStack_60 = unaff_R14;
  pSStack_58 = outputArr;
  lStack_50 = unaff_RBP;
  if (g_data_057ae8d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae8d7 = '\x01';
    if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) goto label_0448a661;
label_0448a5b3:
    __this_03 = (Utility_Algorithms_CompressionAlgorithm_o *)**(long **)(TypeInfo_DataCompressors + 0xb8);
    if (__this_03 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_0448a95a;
label_0448a67c:
    pSVar22 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                        (__this_03,(System_Byte_array *)pSVar15,0x1000,0xa00000,(MethodInfo *)0x0);
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
    if ((pSVar22 == (System_String_o *)0x0) ||
       (pSVar15 = (System_String_array_array *)
                  System_String__Split(pSVar22,(uint16_t)in_RCX,0,(MethodInfo *)0x0),
       pSVar15 == (System_String_array_array *)0x0)) goto label_0448a95a;
    uVar34 = (uint)pSVar15->max_length;
    __this_00 = pSVar15;
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (int)uVar34) {
        uVar28 = 0;
        outputArr_00 = (System_String_array_array *)(in_R8 & 0xffff);
        do {
          while( true ) {
            if (uVar34 <= uVar28) goto label_0448a947;
            pSVar36 = outputArr_00;
            if (pSVar15->m_Items[(int)uVar28] == (System_String_array *)0x0) goto label_0448a95a;
            pSVar16 = System_String__Split
                                ((System_String_o *)pSVar15->m_Items[(int)uVar28],(uint16_t)in_R8,0,
                                 (MethodInfo *)0x0);
            lVar14 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto label_0448a95a;
            uVar34 = (__this->fields)._size;
            if ((uint)pSVar4->max_length <= uVar34) break;
            (__this->fields)._size = uVar34 + 1;
            pSVar4->m_Items[(int)uVar34] = &pSVar16->obj;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar34);
            uVar28 = uVar28 + 1;
            uVar34 = (uint)pSVar15->max_length;
            if ((int)uVar34 <= (int)uVar28) goto label_0448a790;
          }
          System_Collections_Generic_List_object___AddWithResize
                    (__this,&pSVar16->obj,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          uVar28 = uVar28 + 1;
          uVar34 = (uint)pSVar15->max_length;
        } while ((int)uVar28 < (int)uVar34);
      }
label_0448a790:
      outputArr_00 = (System_String_array_array *)
                     System_Collections_Generic_List_object___ToArray(__this,MethodInfo_String_ToArray);
      if (outputArr_00 == (System_String_array_array *)0x0) goto label_0448a95a;
      if (outputArr_00->max_length != 0) {
        pMVar26 = extraout_RDX_00;
        if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar26 = extraout_RDX_01;
        }
        Utility_CSVCompression__DecompressDelta(outputArr_00,deltaRows_00,pMVar26);
      }
      __this_00 = (System_String_array_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
      pSVar36 = outputArr_00;
      if ((int)outputArr_00->max_length < 1) {
label_0448a8e9:
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar22 = System_Char__ToString((short)&uStack_80 + 6,(MethodInfo *)0x0);
        if (__this_00 != (System_String_array_array *)0x0) {
          pSVar16 = (System_String_array *)
                    System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_String_ToArray);
          System_String__Join(pSVar22,pSVar16,(MethodInfo *)0x0);
          return;
        }
        goto label_0448a95a;
      }
      if (__this_00 != (System_String_array_array *)0x0) {
        uVar33 = 0;
        if ((outputArr_00->max_length & 0xffffffff) != 0) {
          do {
            pSVar16 = outputArr_00->m_Items[uVar33];
            if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar22 = System_Char__ToString((short)&uStack_80 + 4,(MethodInfo *)0x0);
            pSVar22 = System_String__Join(pSVar22,pSVar16,(MethodInfo *)0x0);
            lVar14 = MethodInfo_Void_Add;
            piVar2 = (int *)((long)&__this_00->max_length + 4);
            *piVar2 = *piVar2 + 1;
            pIVar5 = __this_00->bounds;
            if (pIVar5 == (Il2CppArrayBounds *)0x0) goto label_0448a95a;
            uVar34 = (uint)__this_00->max_length;
            if (uVar34 < (uint)pIVar5[1].lower_bound) {
              *(uint *)&__this_00->max_length = uVar34 + 1;
              (&pIVar5[2].length)[(int)uVar34] = (il2cpp_array_size_t)pSVar22;
              il2cpp_runtime_helper_022b4080(&pIVar5[2].length + (int)uVar34);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar22,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar33 = uVar33 + 1;
            uVar34 = (uint)outputArr_00->max_length;
            if ((long)(int)uVar34 <= (long)uVar33) goto label_0448a8e9;
          } while (uVar33 < uVar34);
        }
label_0448a947:
        uVar34 = il2cpp_runtime_helper_022b2ca0();
        goto label_0448a94c;
      }
      goto label_0448a95f;
    }
label_0448a94c:
    pSVar36 = outputArr_00;
    if (((int)uVar34 < 1) || (pSVar16 = __this_00->m_Items[0], pSVar16 == (System_String_array *)0x0))
    goto label_0448a95a;
  }
  else {
    if (*(int *)(TypeInfo_DataCompressors + 0xe4) != 0) goto label_0448a5b3;
label_0448a661:
    il2cpp_runtime_helper_02337ed0();
    __this_03 = (Utility_Algorithms_CompressionAlgorithm_o *)**(long **)(TypeInfo_DataCompressors + 0xb8);
    if (__this_03 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_0448a67c;
label_0448a95a:
    outputArr_00 = pSVar36;
    il2cpp_runtime_helper_022b2c90();
label_0448a95f:
    value = outputArr_00->m_Items[0];
    if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = (System_String_array *)System_Char__ToString((short)&uStack_80 + 4,(MethodInfo *)0x0);
    System_String__Join((System_String_o *)pSVar16,value,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  uVar34 = (uint)outputArr_00 & 0xffff;
  System_String__Split((System_String_o *)pSVar16,(uint16_t)outputArr_00,0,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ae8da = '\x01';
  }
  if (pSVar16 == (System_String_array *)0x0) {
label_0448abbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)pSVar16->max_length == 0) {
label_0448abb7:
      il2cpp_runtime_helper_022b2ca0();
      goto label_0448abbc;
    }
    if (pSVar16->m_Items[0] == (System_String_o *)0x0) goto label_0448abbc;
    lVar14 = 0;
    outputArr_00 = (System_String_array_array *)
                   System_Array__Clone((System_Array_o *)pSVar16->m_Items[0],(MethodInfo *)0x0);
    pSVar15 = TypeInfo_string;
    if ((outputArr_00 == (System_String_array_array *)0x0) ||
       (lVar14 = il2cpp_runtime_helper_023051f0(outputArr_00,TypeInfo_string), __this_00 = pSVar15, lVar14 != 0)) {
      uVar33 = pSVar16->max_length;
      if ((int)uVar33 < 2) {
        return;
      }
      uVar17 = uVar33 & 0xffffffff;
      uVar27 = 1;
      outputArr_00 = (System_String_array_array *)&g_data_057b9b70;
      if (1 < (uVar33 & 0xffffffff)) {
        do {
          if (0 < (int)uVar34) {
            pSVar22 = pSVar16->m_Items[uVar27];
            if (pSVar22 == (System_String_o *)0x0) goto label_0448abbc;
            if (lVar14 == 0) {
              if ((*(int *)&pSVar22[1].klass != 0) &&
                 ((bVar12 = System_String__op_Equality
                                      (pSVar22[1].monitor,
                                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                       (MethodInfo *)0x0), (char)bVar12 != '\0' ||
                  (*(int *)&pSVar22[1].klass != 0)))) goto label_0448abbc;
              break;
            }
            pSVar32 = (System_String_Fields *)&pSVar22[1].monitor;
            __this_00 = (System_String_array_array *)0x0;
            if (*(int *)&pSVar22[1].klass == 0) break;
            while( true ) {
              bVar12 = System_String__op_Equality
                                 ((System_String_o *)*pSVar32,
                                  (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0)
              ;
              if ((char)bVar12 == '\0') {
                if (((System_String_array_array *)(ulong)*(uint *)&pSVar22[1].klass <= __this_00) ||
                   ((System_String_array_array *)(ulong)*(uint *)(lVar14 + 0x18) <= __this_00))
                goto label_0448abb7;
                pSVar30 = (System_String_Fields *)((long)__this_00 * 8 + 0x20 + lVar14);
                *(System_String_Fields *)(lVar14 + 0x20 + (long)__this_00 * 8) = *pSVar32;
              }
              else {
                if (((System_String_array_array *)(ulong)*(uint *)(lVar14 + 0x18) <= __this_00) ||
                   ((System_String_array_array *)(ulong)*(uint *)&pSVar22[1].klass <= __this_00))
                goto label_0448abb7;
                *pSVar32 = *(System_String_Fields *)(lVar14 + 0x20 + (long)__this_00 * 8);
                pSVar30 = pSVar32;
              }
              il2cpp_runtime_helper_022b4080(pSVar30);
              __this_00 = (System_String_array_array *)((long)&(__this_00->obj).klass + 1);
              pSVar32 = pSVar32 + 1;
              if ((System_String_array_array *)(ulong)uVar34 == __this_00) break;
              if ((System_String_array_array *)(ulong)*(uint *)&pSVar22[1].klass <= __this_00)
              goto label_0448abb7;
            }
            uVar17 = (ulong)(uint)pSVar16->max_length;
          }
          uVar27 = uVar27 + 1;
          if ((long)(int)uVar17 <= (long)uVar27) {
            return;
          }
        } while (uVar27 < uVar17);
      }
      goto label_0448abb7;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pSVar15 = __this_00;
  if (g_data_057ae8d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_int_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_KeyValuePair_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_KeyValuePair_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_CompressSymbol_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae8d9 = '\x01';
  }
  if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_120 = (MethodInfo *)Utility_CSVCompression__ToBase62(0,(MethodInfo *)pSVar15);
  __this_01 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_Int32);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_String);
  if (outputArr_00 != (System_String_array_array *)0x0) {
    iVar35 = (int)outputArr_00->max_length;
    if (0 < iVar35) {
      uVar34 = 0;
      ppMVar31 = &MethodInfo_Boolean_ContainsKey;
      if (iVar35 != 0) {
        do {
          pSVar16 = outputArr_00->m_Items[(int)uVar34];
          if (pSVar16 == (System_String_array *)0x0) goto label_0448b488;
          iVar35 = (int)pSVar16->max_length;
          if (__this_01 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            if (0 < iVar35) goto label_0448b488;
          }
          else if (0 < iVar35) {
            uVar33 = 0;
            if ((pSVar16->max_length & 0xffffffff) == 0) break;
            while( true ) {
              pSVar22 = pSVar16->m_Items[uVar33];
              bVar12 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                                 (__this_01,(Il2CppObject *)pSVar22,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar12 == '\0') {
                System_Collections_Generic_Dictionary_object__int___Add
                          (__this_01,(Il2CppObject *)pSVar22,1,MethodInfo_Void_Add);
              }
              else {
                iVar13 = System_Collections_Generic_Dictionary_object__int___get_Item
                                   (__this_01,(Il2CppObject *)pSVar22,MethodInfo_Int32_get_Item);
                System_Collections_Generic_Dictionary_object__int___set_Item
                          (__this_01,(Il2CppObject *)pSVar22,iVar13 + 1,MethodInfo_Void_set_Item);
              }
              uVar33 = uVar33 + 1;
              uVar28 = (uint)pSVar16->max_length;
              if ((long)(int)uVar28 <= (long)uVar33) break;
              if (uVar28 <= uVar33) goto label_0448b520;
            }
          }
          uVar34 = uVar34 + 1;
          uVar28 = (uint)outputArr_00->max_length;
          if ((int)uVar28 <= (int)uVar34) goto label_0448ae80;
        } while (uVar34 < uVar28);
      }
label_0448b520:
      do {
        il2cpp_runtime_helper_022b2ca0();
label_0448b525:
        uVar24 = il2cpp_runtime_helper_022fefe0();
        if (ppMVar31 != (MethodInfo_30FDBB0 **)0x0) {
label_0448b4a8:
          pMVar8 = *ppMVar31;
          uVar33 = (ulong)*(ushort *)((long)&pMVar8[3].klass + 6);
          if (uVar33 != 0) {
            lVar14 = 0;
            do {
              if (*(long *)(pMVar8[2].methodPointer + lVar14) == TypeInfo_IDisposable) {
                pppIVar23 = &pMVar8[3].parameters + (long)*(int *)(pMVar8[2].methodPointer + lVar14 + 8) * 2;
                goto label_0448b4fd;
              }
              lVar14 = lVar14 + 0x10;
            } while (uVar33 << 4 != lVar14);
          }
          pppIVar23 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar31,TypeInfo_IDisposable,0);
label_0448b4fd:
          (*(code *)*pppIVar23)(ppMVar31,(Il2CppRGCTXData *)pppIVar23[1]);
        }
label_0448b506:
        if (lStack_118 == 0) {
          _Unwind_Resume(uVar24);
        }
        il2cpp_runtime_helper_022fefe0(lStack_118);
      } while( true );
    }
label_0448ae80:
    if (__this_01 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      pMVar26 = pMStack_120;
      bVar12 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                         (__this_01,(Il2CppObject *)pMStack_120,MethodInfo_Boolean_ContainsKey);
      iVar35 = 0;
      if ((char)bVar12 != '\0') {
        iVar35 = 1;
        iVar25 = *(int *)(TypeInfo_CSVCompression + 0xe4);
        while( true ) {
          if (iVar25 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_120 = (MethodInfo *)Utility_CSVCompression__ToBase62(iVar35,pMVar26);
          pMVar26 = pMStack_120;
          bVar12 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                             (__this_01,(Il2CppObject *)pMStack_120,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar12 == '\0') break;
          iVar35 = iVar35 + 1;
          iVar25 = *(int *)(TypeInfo_CSVCompression + 0xe4);
        }
      }
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_int_int);
        System_Func_KeyValuePair_object__int___int____ctor();
        lVar14 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TKey__o **)(lVar14 + 8) = keySelector;
        il2cpp_runtime_helper_022b4080(lVar14 + 8,keySelector);
      }
      pSVar18 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__int___int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)__this_01,keySelector,
                           MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
      if (pSVar18 != (System_Linq_IOrderedEnumerable_TSource__o *)0x0) {
        pSVar6 = pSVar18->klass;
        uVar3._0_1_ = (pSVar6->_2).rank;
        uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IEnumerable_KeyValuePair_string_int) {
              pVVar19 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
              goto label_0448b021;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar14);
        }
        pVVar19 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar18,TypeInfo_IEnumerable_KeyValuePair_string_int,0);
label_0448b021:
        ppMVar31 = (MethodInfo_30FDBB0 **)(*pVVar19->methodPtr)(pSVar18,pVVar19->method);
        if (ppMVar31 != (MethodInfo_30FDBB0 **)0x0) {
          lStack_118 = 0;
          bVar9 = true;
          iVar25 = 0;
label_0448b050:
          pMVar8 = *ppMVar31;
          uVar33 = (ulong)*(ushort *)((long)&pMVar8[3].klass + 6);
          if (uVar33 != 0) {
            lVar14 = 0;
            do {
              if (*(long *)(pMVar8[2].methodPointer + lVar14) == TypeInfo_IEnumerator) {
                pppIVar23 = &pMVar8[3].parameters + (long)*(int *)(pMVar8[2].methodPointer + lVar14 + 8) * 2;
                goto label_0448b0b3;
              }
              lVar14 = lVar14 + 0x10;
            } while (uVar33 << 4 != lVar14);
          }
          pppIVar23 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar31,TypeInfo_IEnumerator,0);
label_0448b0b3:
          cVar10 = (*(code *)*pppIVar23)(ppMVar31,(Il2CppRGCTXData *)pppIVar23[1]);
          iVar29 = 0xe;
          if (cVar10 == '\0') goto label_0448b2ef;
          pMVar8 = *ppMVar31;
          uVar33 = (ulong)*(ushort *)((long)&pMVar8[3].klass + 6);
          if (uVar33 != 0) {
            lVar14 = 0;
            do {
              if (*(long *)(pMVar8[2].methodPointer + lVar14) == TypeInfo_IEnumerator_KeyValuePair_string_int) {
                pppIVar23 = &pMVar8[3].parameters + (long)*(int *)(pMVar8[2].methodPointer + lVar14 + 8) * 2;
                goto label_0448b123;
              }
              lVar14 = lVar14 + 0x10;
            } while (uVar33 << 4 != lVar14);
          }
          pppIVar23 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar31,TypeInfo_IEnumerator_KeyValuePair_string_int,0);
label_0448b123:
          auVar37 = (*(code *)*pppIVar23)(ppMVar31,(Il2CppRGCTXData *)pppIVar23[1]);
          pMVar26 = auVar37._0_8_;
          if (!(bool)(bVar9 & 2 < auVar37._8_4_)) goto label_0448b2ef;
          if (pMVar26 != (MethodInfo *)0x0) {
            if (pMStack_120 == (MethodInfo *)0x0) goto label_0448b1fd;
            if (((System_String_Fields *)&pMStack_120->invoker_method)->_stringLength <
                *(int *)&pMVar26->invoker_method) {
              if (__this_00 == (System_String_array_array *)0x0) goto label_0448b207;
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                         (Il2CppObject *)pMStack_120,(Il2CppObject *)pMVar26,MethodInfo_Void_Add);
              if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_0448b20c;
              method_00 = pMVar26;
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this_02,(Il2CppObject *)pMVar26,(Il2CppObject *)pMStack_120,MethodInfo_Void_Add);
              if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar35 = iVar35 + 1;
              pMStack_120 = (MethodInfo *)Utility_CSVCompression__ToBase62(iVar35,method_00);
              if (pMStack_120 == (MethodInfo *)0x0) goto label_0448b211;
              iVar25 = *(int *)&pMVar26->invoker_method +
                       iVar25 + ((System_String_Fields *)&pMStack_120->invoker_method)->_stringLength + 6;
              bVar9 = iVar25 < 0x2711;
            }
            goto label_0448b050;
          }
          il2cpp_runtime_helper_022b2c90();
label_0448b1fd:
          il2cpp_runtime_helper_022b2c90();
        }
        il2cpp_runtime_helper_022b2c90();
label_0448b207:
        il2cpp_runtime_helper_022b2c90();
label_0448b20c:
        il2cpp_runtime_helper_022b2c90();
label_0448b211:
        auVar37 = il2cpp_runtime_helper_022b2c90();
        uVar24 = auVar37._0_8_;
        iVar29 = 0;
        if (auVar37._8_4_ != 1) {
          lStack_118 = 0;
          if (ppMVar31 == (MethodInfo_30FDBB0 **)0x0) goto label_0448b506;
          goto label_0448b4a8;
        }
        plVar20 = (long *)__cxa_begin_catch();
        lStack_118 = *plVar20;
        __cxa_end_catch();
label_0448b2ef:
        if (ppMVar31 != (MethodInfo_30FDBB0 **)0x0) {
          pMVar8 = *ppMVar31;
          uVar33 = (ulong)*(ushort *)((long)&pMVar8[3].klass + 6);
          if (uVar33 != 0) {
            lVar14 = 0;
            do {
              if (*(long *)(pMVar8[2].methodPointer + lVar14) == TypeInfo_IDisposable) {
                pppIVar23 = &pMVar8[3].parameters + (long)*(int *)(pMVar8[2].methodPointer + lVar14 + 8) * 2;
                goto label_0448b35d;
              }
              lVar14 = lVar14 + 0x10;
            } while (uVar33 << 4 != lVar14);
          }
          pppIVar23 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar31,TypeInfo_IDisposable,0);
label_0448b35d:
          (*(code *)*pppIVar23)(ppMVar31,(Il2CppRGCTXData *)pppIVar23[1]);
        }
        if (lStack_118 != 0) goto label_0448b525;
        if ((iVar29 != 0xe) && (iVar29 != 0)) {
          return;
        }
        iVar21 = outputArr_00->max_length;
        if ((int)iVar21 < 1) {
          return;
        }
        ppMVar31 = (MethodInfo_30FDBB0 **)0x0;
        if ((int)iVar21 != 0) {
          do {
            pSVar16 = outputArr_00->m_Items[(int)ppMVar31];
            if (pSVar16 == (System_String_array *)0x0) goto label_0448b488;
            iVar35 = (int)pSVar16->max_length;
            if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              if (0 < iVar35) goto label_0448b488;
            }
            else {
              if (0 < iVar35) {
                lVar14 = 0;
                uVar33 = 0;
                if ((pSVar16->max_length & 0xffffffff) == 0) break;
                while( true ) {
                  bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                     (__this_02,(Il2CppObject *)pSVar16->m_Items[uVar33],MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar12 != '\0') {
                    if (((uint)pSVar16->max_length <= uVar33) ||
                       (pSVar22 = (System_String_o *)
                                  System_Collections_Generic_Dictionary_object__object___get_Item
                                            (__this_02,(Il2CppObject *)pSVar16->m_Items[uVar33],MethodInfo_String_get_Item),
                       (uint)pSVar16->max_length <= uVar33)) goto label_0448b520;
                    pSVar16->m_Items[uVar33] = pSVar22;
                    il2cpp_runtime_helper_022b4080((long)pSVar16->m_Items + lVar14,pSVar22);
                  }
                  uVar33 = uVar33 + 1;
                  uVar34 = (uint)pSVar16->max_length;
                  lVar14 = lVar14 + 8;
                  if ((long)(int)uVar34 <= (long)uVar33) break;
                  if (uVar34 <= uVar33) goto label_0448b520;
                }
              }
              iVar21 = outputArr_00->max_length;
            }
            uVar34 = (int)ppMVar31 + 1;
            ppMVar31 = (MethodInfo_30FDBB0 **)(ulong)uVar34;
            if ((int)(uint)iVar21 <= (int)uVar34) {
              return;
            }
          } while (uVar34 < (uint)iVar21);
        }
        goto label_0448b520;
      }
    }
  }
label_0448b488:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Utility.CSVCompression$$CompressSymbol
// il2cpp: void Utility_CSVCompression__CompressSymbol (System_String_array_array* outputArr, System_Collections_Generic_Dictionary_string__string__o* symbolTable, const MethodInfo* method);
// 0x448abd0

void Utility_CSVCompression__CompressSymbol
               (System_String_array_array *outputArr,
               System_Collections_Generic_Dictionary_string__string__o *symbolTable,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_Linq_IOrderedEnumerable_TSource__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  MethodInfo_30FDBB0 *pMVar6;
  bool bVar7;
  char cVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar11;
  VirtualInvokeData *pVVar12;
  long *plVar13;
  il2cpp_array_size_t iVar14;
  System_String_o *pSVar15;
  Il2CppType ***pppIVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  MethodInfo *pMVar20;
  MethodInfo *method_00;
  long lVar21;
  MethodInfo_30FDBB0 **ppMVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  undefined1 auVar26 [12];
  MethodInfo *pMStack_58;
  long lStack_50;
  
  pMVar20 = (MethodInfo *)symbolTable;
  if (g_data_057ae8d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_int_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_KeyValuePair_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_KeyValuePair_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_CompressSymbol_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae8d9 = '\x01';
  }
  if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_58 = (MethodInfo *)Utility_CSVCompression__ToBase62(0,pMVar20);
  __this = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(__this,MethodInfo_Dictionary_2_System_String_System_Int32);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
  if (outputArr != (System_String_array_array *)0x0) {
    iVar25 = (int)outputArr->max_length;
    if (0 < iVar25) {
      uVar24 = 0;
      ppMVar22 = &MethodInfo_Boolean_ContainsKey;
      if (iVar25 != 0) {
        do {
          pSVar3 = outputArr->m_Items[(int)uVar24];
          if (pSVar3 == (System_String_array *)0x0) goto label_0448b488;
          iVar25 = (int)pSVar3->max_length;
          if (__this == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            if (0 < iVar25) goto label_0448b488;
          }
          else if (0 < iVar25) {
            uVar23 = 0;
            if ((pSVar3->max_length & 0xffffffff) == 0) break;
            while( true ) {
              pSVar15 = pSVar3->m_Items[uVar23];
              bVar9 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                                (__this,(Il2CppObject *)pSVar15,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar9 == '\0') {
                System_Collections_Generic_Dictionary_object__int___Add
                          (__this,(Il2CppObject *)pSVar15,1,MethodInfo_Void_Add);
              }
              else {
                iVar10 = System_Collections_Generic_Dictionary_object__int___get_Item
                                   (__this,(Il2CppObject *)pSVar15,MethodInfo_Int32_get_Item);
                System_Collections_Generic_Dictionary_object__int___set_Item
                          (__this,(Il2CppObject *)pSVar15,iVar10 + 1,MethodInfo_Void_set_Item);
              }
              uVar23 = uVar23 + 1;
              uVar2 = (uint)pSVar3->max_length;
              if ((long)(int)uVar2 <= (long)uVar23) break;
              if (uVar2 <= uVar23) goto label_0448b520;
            }
          }
          uVar24 = uVar24 + 1;
          uVar2 = (uint)outputArr->max_length;
          if ((int)uVar2 <= (int)uVar24) goto label_0448ae80;
        } while (uVar24 < uVar2);
      }
label_0448b520:
      do {
        il2cpp_runtime_helper_022b2ca0();
label_0448b525:
        uVar17 = il2cpp_runtime_helper_022fefe0();
        if (ppMVar22 != (MethodInfo_30FDBB0 **)0x0) {
label_0448b4a8:
          pMVar6 = *ppMVar22;
          uVar23 = (ulong)*(ushort *)((long)&pMVar6[3].klass + 6);
          if (uVar23 != 0) {
            lVar21 = 0;
            do {
              if (*(long *)(pMVar6[2].methodPointer + lVar21) == TypeInfo_IDisposable) {
                pppIVar16 = &pMVar6[3].parameters + (long)*(int *)(pMVar6[2].methodPointer + lVar21 + 8) * 2;
                goto label_0448b4fd;
              }
              lVar21 = lVar21 + 0x10;
            } while (uVar23 << 4 != lVar21);
          }
          pppIVar16 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar22,TypeInfo_IDisposable,0);
label_0448b4fd:
          (*(code *)*pppIVar16)(ppMVar22,(Il2CppRGCTXData *)pppIVar16[1]);
        }
label_0448b506:
        if (lStack_50 == 0) {
          _Unwind_Resume(uVar17);
        }
        il2cpp_runtime_helper_022fefe0(lStack_50);
      } while( true );
    }
label_0448ae80:
    if (__this != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      pMVar20 = pMStack_58;
      bVar9 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                        (__this,(Il2CppObject *)pMStack_58,MethodInfo_Boolean_ContainsKey);
      iVar25 = 0;
      if ((char)bVar9 != '\0') {
        iVar25 = 1;
        iVar18 = *(int *)(TypeInfo_CSVCompression + 0xe4);
        while( true ) {
          if (iVar18 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_58 = (MethodInfo *)Utility_CSVCompression__ToBase62(iVar25,pMVar20);
          pMVar20 = pMStack_58;
          bVar9 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                            (__this,(Il2CppObject *)pMStack_58,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar9 == '\0') break;
          iVar25 = iVar25 + 1;
          iVar18 = *(int *)(TypeInfo_CSVCompression + 0xe4);
        }
      }
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_int_int);
        System_Func_KeyValuePair_object__int___int____ctor();
        lVar21 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TKey__o **)(lVar21 + 8) = keySelector;
        il2cpp_runtime_helper_022b4080(lVar21 + 8,keySelector);
      }
      pSVar11 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__int___int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)__this,keySelector,
                           MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
      if (pSVar11 != (System_Linq_IOrderedEnumerable_TSource__o *)0x0) {
        pSVar4 = pSVar11->klass;
        uVar1._0_1_ = (pSVar4->_2).rank;
        uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar21 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar21) == TypeInfo_IEnumerable_KeyValuePair_string_int) {
              pVVar12 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar21);
              goto label_0448b021;
            }
            lVar21 = lVar21 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar21);
        }
        pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IEnumerable_KeyValuePair_string_int,0);
label_0448b021:
        ppMVar22 = (MethodInfo_30FDBB0 **)(*pVVar12->methodPtr)(pSVar11,pVVar12->method);
        if (ppMVar22 != (MethodInfo_30FDBB0 **)0x0) {
          lStack_50 = 0;
          bVar7 = true;
          iVar18 = 0;
label_0448b050:
          pMVar6 = *ppMVar22;
          uVar23 = (ulong)*(ushort *)((long)&pMVar6[3].klass + 6);
          if (uVar23 != 0) {
            lVar21 = 0;
            do {
              if (*(long *)(pMVar6[2].methodPointer + lVar21) == TypeInfo_IEnumerator) {
                pppIVar16 = &pMVar6[3].parameters + (long)*(int *)(pMVar6[2].methodPointer + lVar21 + 8) * 2;
                goto label_0448b0b3;
              }
              lVar21 = lVar21 + 0x10;
            } while (uVar23 << 4 != lVar21);
          }
          pppIVar16 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar22,TypeInfo_IEnumerator,0);
label_0448b0b3:
          cVar8 = (*(code *)*pppIVar16)(ppMVar22,(Il2CppRGCTXData *)pppIVar16[1]);
          iVar19 = 0xe;
          if (cVar8 == '\0') goto label_0448b2ef;
          pMVar6 = *ppMVar22;
          uVar23 = (ulong)*(ushort *)((long)&pMVar6[3].klass + 6);
          if (uVar23 != 0) {
            lVar21 = 0;
            do {
              if (*(long *)(pMVar6[2].methodPointer + lVar21) == TypeInfo_IEnumerator_KeyValuePair_string_int) {
                pppIVar16 = &pMVar6[3].parameters + (long)*(int *)(pMVar6[2].methodPointer + lVar21 + 8) * 2;
                goto label_0448b123;
              }
              lVar21 = lVar21 + 0x10;
            } while (uVar23 << 4 != lVar21);
          }
          pppIVar16 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar22,TypeInfo_IEnumerator_KeyValuePair_string_int,0);
label_0448b123:
          auVar26 = (*(code *)*pppIVar16)(ppMVar22,(Il2CppRGCTXData *)pppIVar16[1]);
          pMVar20 = auVar26._0_8_;
          if (!(bool)(bVar7 & 2 < auVar26._8_4_)) goto label_0448b2ef;
          if (pMVar20 != (MethodInfo *)0x0) {
            if (pMStack_58 == (MethodInfo *)0x0) goto label_0448b1fd;
            if (((System_String_Fields *)&pMStack_58->invoker_method)->_stringLength <
                *(int *)&pMVar20->invoker_method) {
              if (symbolTable == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
              goto label_0448b207;
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)symbolTable,
                         (Il2CppObject *)pMStack_58,(Il2CppObject *)pMVar20,MethodInfo_Void_Add);
              if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_0448b20c;
              method_00 = pMVar20;
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this_00,(Il2CppObject *)pMVar20,(Il2CppObject *)pMStack_58,MethodInfo_Void_Add);
              if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar25 = iVar25 + 1;
              pMStack_58 = (MethodInfo *)Utility_CSVCompression__ToBase62(iVar25,method_00);
              if (pMStack_58 == (MethodInfo *)0x0) goto label_0448b211;
              iVar18 = *(int *)&pMVar20->invoker_method +
                       iVar18 + ((System_String_Fields *)&pMStack_58->invoker_method)->_stringLength + 6;
              bVar7 = iVar18 < 0x2711;
            }
            goto label_0448b050;
          }
          il2cpp_runtime_helper_022b2c90();
label_0448b1fd:
          il2cpp_runtime_helper_022b2c90();
        }
        il2cpp_runtime_helper_022b2c90();
label_0448b207:
        il2cpp_runtime_helper_022b2c90();
label_0448b20c:
        il2cpp_runtime_helper_022b2c90();
label_0448b211:
        auVar26 = il2cpp_runtime_helper_022b2c90();
        uVar17 = auVar26._0_8_;
        iVar19 = 0;
        if (auVar26._8_4_ != 1) {
          lStack_50 = 0;
          if (ppMVar22 == (MethodInfo_30FDBB0 **)0x0) goto label_0448b506;
          goto label_0448b4a8;
        }
        plVar13 = (long *)__cxa_begin_catch();
        lStack_50 = *plVar13;
        __cxa_end_catch();
label_0448b2ef:
        if (ppMVar22 != (MethodInfo_30FDBB0 **)0x0) {
          pMVar6 = *ppMVar22;
          uVar23 = (ulong)*(ushort *)((long)&pMVar6[3].klass + 6);
          if (uVar23 != 0) {
            lVar21 = 0;
            do {
              if (*(long *)(pMVar6[2].methodPointer + lVar21) == TypeInfo_IDisposable) {
                pppIVar16 = &pMVar6[3].parameters + (long)*(int *)(pMVar6[2].methodPointer + lVar21 + 8) * 2;
                goto label_0448b35d;
              }
              lVar21 = lVar21 + 0x10;
            } while (uVar23 << 4 != lVar21);
          }
          pppIVar16 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar22,TypeInfo_IDisposable,0);
label_0448b35d:
          (*(code *)*pppIVar16)(ppMVar22,(Il2CppRGCTXData *)pppIVar16[1]);
        }
        if (lStack_50 != 0) goto label_0448b525;
        if ((iVar19 != 0xe) && (iVar19 != 0)) {
          return;
        }
        iVar14 = outputArr->max_length;
        if ((int)iVar14 < 1) {
          return;
        }
        ppMVar22 = (MethodInfo_30FDBB0 **)0x0;
        if ((int)iVar14 != 0) {
          do {
            pSVar3 = outputArr->m_Items[(int)ppMVar22];
            if (pSVar3 == (System_String_array *)0x0) goto label_0448b488;
            iVar25 = (int)pSVar3->max_length;
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              if (0 < iVar25) goto label_0448b488;
            }
            else {
              if (0 < iVar25) {
                lVar21 = 0;
                uVar23 = 0;
                if ((pSVar3->max_length & 0xffffffff) == 0) break;
                while( true ) {
                  bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                    (__this_00,(Il2CppObject *)pSVar3->m_Items[uVar23],MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar9 != '\0') {
                    if (((uint)pSVar3->max_length <= uVar23) ||
                       (pSVar15 = (System_String_o *)
                                  System_Collections_Generic_Dictionary_object__object___get_Item
                                            (__this_00,(Il2CppObject *)pSVar3->m_Items[uVar23],MethodInfo_String_get_Item),
                       (uint)pSVar3->max_length <= uVar23)) goto label_0448b520;
                    pSVar3->m_Items[uVar23] = pSVar15;
                    il2cpp_runtime_helper_022b4080((long)pSVar3->m_Items + lVar21,pSVar15);
                  }
                  uVar23 = uVar23 + 1;
                  uVar24 = (uint)pSVar3->max_length;
                  lVar21 = lVar21 + 8;
                  if ((long)(int)uVar24 <= (long)uVar23) break;
                  if (uVar24 <= uVar23) goto label_0448b520;
                }
              }
              iVar14 = outputArr->max_length;
            }
            uVar24 = (int)ppMVar22 + 1;
            ppMVar22 = (MethodInfo_30FDBB0 **)(ulong)uVar24;
            if ((int)(uint)iVar14 <= (int)uVar24) {
              return;
            }
          } while (uVar24 < (uint)iVar14);
        }
        goto label_0448b520;
      }
    }
  }
label_0448b488:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Utility.CSVCompression$$DecompressDelta
// il2cpp: void Utility_CSVCompression__DecompressDelta (System_String_array_array* outputArr, int32_t deltaRows, const MethodInfo* method);
// 0x448a9b0

void Utility_CSVCompression__DecompressDelta
               (System_String_array_array *outputArr,int32_t deltaRows,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  System_String_array *pSVar3;
  Il2CppClass *pIVar4;
  char *pcVar5;
  System_Linq_IOrderedEnumerable_TSource__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  MethodInfo_30FDBB0 *pMVar8;
  bool bVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  long lVar13;
  ulong uVar14;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar15;
  Il2CppMethodPointer *ppIVar16;
  long *plVar17;
  void *pvVar18;
  Il2CppObject *pIVar19;
  Il2CppType ***pppIVar20;
  undefined8 uVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  MethodInfo *pMVar25;
  MethodInfo *method_00;
  System_String_o **ppSVar26;
  MethodInfo *unaff_R12;
  MethodInfo_30FDBB0 **ppMVar27;
  System_String_o **ppSVar28;
  ulong uVar29;
  uint uVar30;
  int iVar31;
  Il2CppObject *unaff_R15;
  undefined1 auVar32 [12];
  MethodInfo *local_a0;
  long local_98;
  
  if (g_data_057ae8da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057ae8da = '\x01';
  }
  if (outputArr == (System_String_array_array *)0x0) {
label_0448abbc:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)outputArr->max_length == 0) {
label_0448abb7:
      il2cpp_runtime_helper_022b2ca0();
      goto label_0448abbc;
    }
    if (outputArr->m_Items[0] == (System_String_array *)0x0) goto label_0448abbc;
    lVar13 = 0;
    unaff_R15 = System_Array__Clone((System_Array_o *)outputArr->m_Items[0],(MethodInfo *)0x0);
    pMVar25 = TypeInfo_string;
    if ((unaff_R15 == (Il2CppObject *)0x0) ||
       (lVar13 = il2cpp_runtime_helper_023051f0(unaff_R15,TypeInfo_string), unaff_R12 = pMVar25, lVar13 != 0)) {
      uVar29 = outputArr->max_length;
      if ((int)uVar29 < 2) {
        return;
      }
      uVar14 = uVar29 & 0xffffffff;
      uVar23 = 1;
      unaff_R15 = (Il2CppObject *)&g_data_057b9b70;
      if (1 < (uVar29 & 0xffffffff)) {
        do {
          if (0 < deltaRows) {
            pSVar3 = outputArr->m_Items[uVar23];
            if (pSVar3 == (System_String_array *)0x0) goto label_0448abbc;
            if (lVar13 == 0) {
              if (((int)pSVar3->max_length != 0) &&
                 ((bVar11 = System_String__op_Equality
                                      (pSVar3->m_Items[0],
                                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                       (MethodInfo *)0x0), (char)bVar11 != '\0' ||
                  ((int)pSVar3->max_length != 0)))) goto label_0448abbc;
              break;
            }
            ppSVar28 = pSVar3->m_Items;
            unaff_R12 = (MethodInfo *)0x0;
            if ((int)pSVar3->max_length == 0) break;
            while( true ) {
              bVar11 = System_String__op_Equality
                                 (*ppSVar28,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                  (MethodInfo *)0x0);
              if ((char)bVar11 == '\0') {
                if (((MethodInfo *)(ulong)(uint)pSVar3->max_length <= unaff_R12) ||
                   ((MethodInfo *)(ulong)*(uint *)(lVar13 + 0x18) <= unaff_R12)) goto label_0448abb7;
                ppSVar26 = (System_String_o **)((long)unaff_R12 * 8 + 0x20 + lVar13);
                *(System_String_o **)(lVar13 + 0x20 + (long)unaff_R12 * 8) = *ppSVar28;
              }
              else {
                if (((MethodInfo *)(ulong)*(uint *)(lVar13 + 0x18) <= unaff_R12) ||
                   ((MethodInfo *)(ulong)(uint)pSVar3->max_length <= unaff_R12)) goto label_0448abb7;
                *ppSVar28 = *(System_String_o **)(lVar13 + 0x20 + (long)unaff_R12 * 8);
                ppSVar26 = ppSVar28;
              }
              il2cpp_runtime_helper_022b4080(ppSVar26);
              unaff_R12 = (MethodInfo *)((long)&unaff_R12->methodPointer + 1);
              ppSVar28 = ppSVar28 + 1;
              if ((MethodInfo *)(ulong)(uint)deltaRows == unaff_R12) break;
              if ((MethodInfo *)(ulong)(uint)pSVar3->max_length <= unaff_R12) goto label_0448abb7;
            }
            uVar14 = (ulong)(uint)outputArr->max_length;
          }
          uVar23 = uVar23 + 1;
          if ((long)(int)uVar14 <= (long)uVar23) {
            return;
          }
        } while (uVar23 < uVar14);
      }
      goto label_0448abb7;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pMVar25 = unaff_R12;
  if (g_data_057ae8d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_string_int_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_KeyValuePair_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_KeyValuePair_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_CompressSymbol_b__4_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae8d9 = '\x01';
  }
  if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_a0 = (MethodInfo *)Utility_CSVCompression__ToBase62(0,pMVar25);
  __this = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(__this,MethodInfo_Dictionary_2_System_String_System_Int32);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
  if (unaff_R15 != (Il2CppObject *)0x0) {
    if (0 < *(int *)&unaff_R15[1].monitor) {
      uVar30 = 0;
      ppMVar27 = &MethodInfo_Boolean_ContainsKey;
      if (*(int *)&unaff_R15[1].monitor != 0) {
        do {
          pIVar4 = (&unaff_R15[2].klass)[(int)uVar30];
          if (pIVar4 == (Il2CppClass *)0x0) goto label_0448b488;
          pcVar5 = (pIVar4->_1).namespaze;
          iVar31 = (int)pcVar5;
          if (__this == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            if (0 < iVar31) goto label_0448b488;
          }
          else if (0 < iVar31) {
            uVar29 = 0;
            if (((ulong)pcVar5 & 0xffffffff) == 0) break;
            while( true ) {
              pIVar19 = (&(pIVar4->_1).byval_arg.data)[uVar29];
              bVar11 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                                 (__this,pIVar19,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar11 == '\0') {
                System_Collections_Generic_Dictionary_object__int___Add(__this,pIVar19,1,MethodInfo_Void_Add);
              }
              else {
                iVar12 = System_Collections_Generic_Dictionary_object__int___get_Item
                                   (__this,pIVar19,MethodInfo_Int32_get_Item);
                System_Collections_Generic_Dictionary_object__int___set_Item
                          (__this,pIVar19,iVar12 + 1,MethodInfo_Void_set_Item);
              }
              uVar29 = uVar29 + 1;
              uVar2 = *(uint *)&(pIVar4->_1).namespaze;
              if ((long)(int)uVar2 <= (long)uVar29) break;
              if (uVar2 <= uVar29) goto label_0448b520;
            }
          }
          uVar30 = uVar30 + 1;
          if ((int)*(uint *)&unaff_R15[1].monitor <= (int)uVar30) goto label_0448ae80;
        } while (uVar30 < *(uint *)&unaff_R15[1].monitor);
      }
label_0448b520:
      do {
        il2cpp_runtime_helper_022b2ca0();
label_0448b525:
        uVar21 = il2cpp_runtime_helper_022fefe0();
        if (ppMVar27 != (MethodInfo_30FDBB0 **)0x0) {
label_0448b4a8:
          pMVar8 = *ppMVar27;
          uVar29 = (ulong)*(ushort *)((long)&pMVar8[3].klass + 6);
          if (uVar29 != 0) {
            lVar13 = 0;
            do {
              if (*(long *)(pMVar8[2].methodPointer + lVar13) == TypeInfo_IDisposable) {
                pppIVar20 = &pMVar8[3].parameters + (long)*(int *)(pMVar8[2].methodPointer + lVar13 + 8) * 2;
                goto label_0448b4fd;
              }
              lVar13 = lVar13 + 0x10;
            } while (uVar29 << 4 != lVar13);
          }
          pppIVar20 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar27,TypeInfo_IDisposable,0);
label_0448b4fd:
          (*(code *)*pppIVar20)(ppMVar27,(Il2CppRGCTXData *)pppIVar20[1]);
        }
label_0448b506:
        if (local_98 == 0) {
          _Unwind_Resume(uVar21);
        }
        il2cpp_runtime_helper_022fefe0(local_98);
      } while( true );
    }
label_0448ae80:
    if (__this != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      pMVar25 = local_a0;
      bVar11 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                         (__this,(Il2CppObject *)local_a0,MethodInfo_Boolean_ContainsKey);
      iVar31 = 0;
      if ((char)bVar11 != '\0') {
        iVar31 = 1;
        iVar22 = *(int *)(TypeInfo_CSVCompression + 0xe4);
        while( true ) {
          if (iVar22 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          local_a0 = (MethodInfo *)Utility_CSVCompression__ToBase62(iVar31,pMVar25);
          pMVar25 = local_a0;
          bVar11 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                             (__this,(Il2CppObject *)local_a0,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar11 == '\0') break;
          iVar31 = iVar31 + 1;
          iVar22 = *(int *)(TypeInfo_CSVCompression + 0xe4);
        }
      }
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_string_int_int);
        System_Func_KeyValuePair_object__int___int____ctor();
        lVar13 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TKey__o **)(lVar13 + 8) = keySelector;
        il2cpp_runtime_helper_022b4080(lVar13 + 8,keySelector);
      }
      pSVar15 = System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__int___int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)__this,keySelector,
                           MethodInfo_IOrderedEnumerable_1_System_Collections_Generic_KeyValue);
      if (pSVar15 != (System_Linq_IOrderedEnumerable_TSource__o *)0x0) {
        pSVar6 = pSVar15->klass;
        uVar1._0_1_ = (pSVar6->_2).rank;
        uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar13) == TypeInfo_IEnumerable_KeyValuePair_string_int) {
              ppIVar16 = &pSVar6->vtable[*(int *)((long)&pIVar7->offset + lVar13)].methodPtr;
              goto label_0448b021;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar13);
        }
        ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar15,TypeInfo_IEnumerable_KeyValuePair_string_int,0);
label_0448b021:
        ppMVar27 = (MethodInfo_30FDBB0 **)(**ppIVar16)(pSVar15,(MethodInfo *)ppIVar16[1]);
        if (ppMVar27 != (MethodInfo_30FDBB0 **)0x0) {
          local_98 = 0;
          bVar9 = true;
          iVar22 = 0;
label_0448b050:
          pMVar8 = *ppMVar27;
          uVar29 = (ulong)*(ushort *)((long)&pMVar8[3].klass + 6);
          if (uVar29 != 0) {
            lVar13 = 0;
            do {
              if (*(long *)(pMVar8[2].methodPointer + lVar13) == TypeInfo_IEnumerator) {
                pppIVar20 = &pMVar8[3].parameters + (long)*(int *)(pMVar8[2].methodPointer + lVar13 + 8) * 2;
                goto label_0448b0b3;
              }
              lVar13 = lVar13 + 0x10;
            } while (uVar29 << 4 != lVar13);
          }
          pppIVar20 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar27,TypeInfo_IEnumerator,0);
label_0448b0b3:
          cVar10 = (*(code *)*pppIVar20)(ppMVar27,(Il2CppRGCTXData *)pppIVar20[1]);
          iVar24 = 0xe;
          if (cVar10 == '\0') goto label_0448b2ef;
          pMVar8 = *ppMVar27;
          uVar29 = (ulong)*(ushort *)((long)&pMVar8[3].klass + 6);
          if (uVar29 != 0) {
            lVar13 = 0;
            do {
              if (*(long *)(pMVar8[2].methodPointer + lVar13) == TypeInfo_IEnumerator_KeyValuePair_string_int) {
                pppIVar20 = &pMVar8[3].parameters + (long)*(int *)(pMVar8[2].methodPointer + lVar13 + 8) * 2;
                goto label_0448b123;
              }
              lVar13 = lVar13 + 0x10;
            } while (uVar29 << 4 != lVar13);
          }
          pppIVar20 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar27,TypeInfo_IEnumerator_KeyValuePair_string_int,0);
label_0448b123:
          auVar32 = (*(code *)*pppIVar20)(ppMVar27,(Il2CppRGCTXData *)pppIVar20[1]);
          pMVar25 = auVar32._0_8_;
          if (!(bool)(bVar9 & 2 < auVar32._8_4_)) goto label_0448b2ef;
          if (pMVar25 != (MethodInfo *)0x0) {
            if (local_a0 == (MethodInfo *)0x0) goto label_0448b1fd;
            if (((System_String_Fields *)&local_a0->invoker_method)->_stringLength <
                *(int *)&pMVar25->invoker_method) {
              if (unaff_R12 == (MethodInfo *)0x0) goto label_0448b207;
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R12,
                         (Il2CppObject *)local_a0,(Il2CppObject *)pMVar25,MethodInfo_Void_Add);
              if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_0448b20c;
              method_00 = pMVar25;
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this_00,(Il2CppObject *)pMVar25,(Il2CppObject *)local_a0,MethodInfo_Void_Add);
              if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar31 = iVar31 + 1;
              local_a0 = (MethodInfo *)Utility_CSVCompression__ToBase62(iVar31,method_00);
              if (local_a0 == (MethodInfo *)0x0) goto label_0448b211;
              iVar22 = *(int *)&pMVar25->invoker_method +
                       iVar22 + ((System_String_Fields *)&local_a0->invoker_method)->_stringLength + 6;
              bVar9 = iVar22 < 0x2711;
            }
            goto label_0448b050;
          }
          il2cpp_runtime_helper_022b2c90();
label_0448b1fd:
          il2cpp_runtime_helper_022b2c90();
        }
        il2cpp_runtime_helper_022b2c90();
label_0448b207:
        il2cpp_runtime_helper_022b2c90();
label_0448b20c:
        il2cpp_runtime_helper_022b2c90();
label_0448b211:
        auVar32 = il2cpp_runtime_helper_022b2c90();
        uVar21 = auVar32._0_8_;
        iVar24 = 0;
        if (auVar32._8_4_ != 1) {
          local_98 = 0;
          if (ppMVar27 == (MethodInfo_30FDBB0 **)0x0) goto label_0448b506;
          goto label_0448b4a8;
        }
        plVar17 = (long *)__cxa_begin_catch();
        local_98 = *plVar17;
        __cxa_end_catch();
label_0448b2ef:
        if (ppMVar27 != (MethodInfo_30FDBB0 **)0x0) {
          pMVar8 = *ppMVar27;
          uVar29 = (ulong)*(ushort *)((long)&pMVar8[3].klass + 6);
          if (uVar29 != 0) {
            lVar13 = 0;
            do {
              if (*(long *)(pMVar8[2].methodPointer + lVar13) == TypeInfo_IDisposable) {
                pppIVar20 = &pMVar8[3].parameters + (long)*(int *)(pMVar8[2].methodPointer + lVar13 + 8) * 2;
                goto label_0448b35d;
              }
              lVar13 = lVar13 + 0x10;
            } while (uVar29 << 4 != lVar13);
          }
          pppIVar20 = (Il2CppType ***)il2cpp_runtime_helper_02300d20(ppMVar27,TypeInfo_IDisposable,0);
label_0448b35d:
          (*(code *)*pppIVar20)(ppMVar27,(Il2CppRGCTXData *)pppIVar20[1]);
        }
        if (local_98 != 0) goto label_0448b525;
        if ((iVar24 != 0xe) && (iVar24 != 0)) {
          return;
        }
        pvVar18 = unaff_R15[1].monitor;
        if ((int)pvVar18 < 1) {
          return;
        }
        ppMVar27 = (MethodInfo_30FDBB0 **)0x0;
        if ((int)pvVar18 != 0) {
          do {
            pIVar4 = (&unaff_R15[2].klass)[(int)ppMVar27];
            if (pIVar4 == (Il2CppClass *)0x0) goto label_0448b488;
            pcVar5 = (pIVar4->_1).namespaze;
            iVar31 = (int)pcVar5;
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              if (0 < iVar31) goto label_0448b488;
            }
            else {
              if (0 < iVar31) {
                lVar13 = 0;
                uVar29 = 0;
                if (((ulong)pcVar5 & 0xffffffff) == 0) break;
                while( true ) {
                  bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                     (__this_00,(&(pIVar4->_1).byval_arg.data)[uVar29],MethodInfo_Boolean_ContainsKey);
                  if ((char)bVar11 != '\0') {
                    if ((*(uint *)&(pIVar4->_1).namespaze <= uVar29) ||
                       (pIVar19 = System_Collections_Generic_Dictionary_object__object___get_Item
                                            (__this_00,(&(pIVar4->_1).byval_arg.data)[uVar29],MethodInfo_String_get_Item),
                       *(uint *)&(pIVar4->_1).namespaze <= uVar29)) goto label_0448b520;
                    (&(pIVar4->_1).byval_arg.data)[uVar29] = pIVar19;
                    il2cpp_runtime_helper_022b4080((long)&(pIVar4->_1).byval_arg.data + lVar13,pIVar19);
                  }
                  uVar29 = uVar29 + 1;
                  uVar30 = *(uint *)&(pIVar4->_1).namespaze;
                  lVar13 = lVar13 + 8;
                  if ((long)(int)uVar30 <= (long)uVar29) break;
                  if (uVar30 <= uVar29) goto label_0448b520;
                }
              }
              pvVar18 = unaff_R15[1].monitor;
            }
            uVar30 = (int)ppMVar27 + 1;
            ppMVar27 = (MethodInfo_30FDBB0 **)(ulong)uVar30;
            if ((int)(uint)pvVar18 <= (int)uVar30) {
              return;
            }
          } while (uVar30 < (uint)pvVar18);
        }
        goto label_0448b520;
      }
    }
  }
label_0448b488:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Utility.CSVCompression$$DecompressSymbol
// il2cpp: void Utility_CSVCompression__DecompressSymbol (System_String_array_array* outputArr, SimpleJSONFixed_JSONNode_o* symbolTable, const MethodInfo* method);
// 0x448b850

void Utility_CSVCompression__DecompressSymbol
               (System_String_array_array *outputArr,SimpleJSONFixed_JSONNode_o *symbolTable,
               MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  char cVar3;
  int iVar4;
  System_String_o *pSVar5;
  uint uVar6;
  long *__this;
  ulong uVar7;
  long lVar8;
  
  __this = (long *)outputArr;
  if (g_data_057ae8db == '\0') {
    __this = &TypeInfo_JSONNode;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8db = '\x01';
  }
  if (outputArr != (System_String_array_array *)0x0) {
    iVar4 = (int)outputArr->max_length;
    if (iVar4 < 1) {
      return;
    }
    uVar6 = 0;
    if (iVar4 != 0) {
      do {
        pSVar2 = outputArr->m_Items[(int)uVar6];
        if (pSVar2 == (System_String_array *)0x0) goto label_0448b9d6;
        iVar4 = (int)pSVar2->max_length;
        if (symbolTable == (SimpleJSONFixed_JSONNode_o *)0x0) {
          if (0 < iVar4) goto label_0448b9d6;
        }
        else if (0 < iVar4) {
          lVar8 = 0;
          uVar7 = 0;
          if ((pSVar2->max_length & 0xffffffff) == 0) break;
          while( true ) {
            __this = (long *)symbolTable;
            cVar3 = (*(symbolTable->klass->vtable)._28_HasKey.methodPtr)
                              (symbolTable,pSVar2->m_Items[uVar7],
                               (symbolTable->klass->vtable)._28_HasKey.method);
            if (cVar3 != '\0') {
              if ((uint)pSVar2->max_length <= uVar7) goto label_0448b9d1;
              __this = (long *)(*(symbolTable->klass->vtable)._7_get_Item.methodPtr)
                                         (symbolTable,pSVar2->m_Items[uVar7],
                                          (symbolTable->klass->vtable)._7_get_Item.method);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                                 ((SimpleJSONFixed_JSONNode_o *)__this,(MethodInfo *)0x0);
              if ((uint)pSVar2->max_length <= uVar7) goto label_0448b9d1;
              pSVar2->m_Items[uVar7] = pSVar5;
              __this = (long *)((long)pSVar2->m_Items + lVar8);
              il2cpp_runtime_helper_022b4080();
            }
            uVar7 = uVar7 + 1;
            uVar1 = (uint)pSVar2->max_length;
            lVar8 = lVar8 + 8;
            if ((long)(int)uVar1 <= (long)uVar7) break;
            if (uVar1 <= uVar7) goto label_0448b9d1;
          }
        }
        uVar6 = uVar6 + 1;
        uVar1 = (uint)outputArr->max_length;
        if ((int)uVar1 <= (int)uVar6) {
          return;
        }
      } while (uVar6 < uVar1);
    }
label_0448b9d1:
    il2cpp_runtime_helper_022b2ca0();
  }
label_0448b9d6:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CSVCompression$$ToBase62
// il2cpp: System_String_o* Utility_CSVCompression__ToBase62 (int32_t index, const MethodInfo* method);
// 0x448b550

System_String_o * Utility_CSVCompression__ToBase62(int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  Il2CppClass *pIVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  System_Collections_Generic_List_object__o *__this;
  MethodInfo *item;
  System_String_array *value;
  System_String_o *pSVar9;
  System_String_o *extraout_RAX;
  uint uVar10;
  uint uVar11;
  ulong unaff_RBP;
  MethodInfo *pMVar12;
  MethodInfo *__this_00;
  ulong uVar13;
  long lVar14;
  int iVar15;
  
  uVar13 = (ulong)(uint)index;
  if (g_data_057ae8dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Reverse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae8dc = '\x01';
  }
  if (index == 0) {
    if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar14 = **(long **)(TypeInfo_CSVCompression + 0xb8);
    __this = (System_Collections_Generic_List_object__o *)0x0;
    if (lVar14 != 0) {
      item = method;
      pMVar12 = g_data_057b9bf8;
      if (*(int *)((long)&g_data_057b9bf8[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        item = method;
      }
      if (*(int *)(lVar14 + 0x18) != 0) {
        pSVar9 = System_Char__ToString((short)lVar14 + 0x20,(MethodInfo *)0x0);
        return pSVar9;
      }
      goto label_0448b84b;
    }
label_0448b80b:
    uVar11 = (uint)__this;
    il2cpp_runtime_helper_022b2c90();
    item = method;
  }
  else {
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    item = MethodInfo_List_1_System_String;
    System_Collections_Generic_List_object____ctor(__this,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = **(ulong **)(TypeInfo_CSVCompression + 0xb8);
    method = item;
    if (unaff_RBP == 0) goto label_0448b80b;
    if (index < 1) {
      if (__this != (System_Collections_Generic_List_object__o *)0x0) goto label_0448b79c;
      goto label_0448b80b;
    }
    iVar8 = *(int *)(unaff_RBP + 0x18);
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      do {
        while( true ) {
          uVar5 = (long)(int)uVar13 / (long)iVar8;
          uVar6 = (long)(int)uVar13 % (long)iVar8;
          unaff_RBP = uVar6 & 0xffffffff;
          uVar13 = uVar5 & 0xffffffff;
          if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar14 = **(long **)(TypeInfo_CSVCompression + 0xb8);
          method = item;
          if (lVar14 == 0) goto label_0448b80b;
          pMVar12 = g_data_057b9bf8;
          if (*(int *)((long)&g_data_057b9bf8[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (*(uint *)(lVar14 + 0x18) <= (uint)uVar6) goto label_0448b84b;
          method = (MethodInfo *)0x0;
          item = (MethodInfo *)
                 System_Char__ToString((short)uVar6 * 2 + 0x20 + (short)lVar14,(MethodInfo *)0x0);
          lVar14 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar2 = (__this->fields)._items;
          if (pSVar2 == (System_Object_array *)0x0) goto label_0448b80b;
          uVar11 = (__this->fields)._size;
          iVar15 = (int)uVar5;
          if ((uint)pSVar2->max_length <= uVar11) break;
          (__this->fields)._size = uVar11 + 1;
          pSVar2->m_Items[(int)uVar11] = (Il2CppObject *)item;
          il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar11);
          if (iVar15 < 1) goto label_0448b79c;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (__this,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      } while (0 < iVar15);
label_0448b79c:
      System_Collections_Generic_List_object___Reverse(__this,MethodInfo_Void_Reverse);
      value = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this,MethodInfo_String_ToArray);
      pSVar9 = System_String__Join("",value,(MethodInfo *)0x0);
      return pSVar9;
    }
    __this = (System_Collections_Generic_List_object__o *)((long)index % (long)iVar8 & 0xffffffff);
    uVar11 = (uint)((long)index % (long)iVar8);
    if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      unaff_RBP = **(ulong **)(TypeInfo_CSVCompression + 0xb8);
      method = item;
      if (unaff_RBP == 0) goto label_0448b80b;
    }
  }
  pMVar12 = g_data_057b9bf8;
  if (*(int *)((long)&g_data_057b9bf8[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (uVar11 < *(uint *)(unaff_RBP + 0x18)) {
    pMVar12 = (MethodInfo *)((long)(int)uVar11 * 2 + 0x20 + unaff_RBP);
    item = (MethodInfo *)0x0;
    System_Char__ToString((uint16_t)pMVar12,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
label_0448b84b:
  il2cpp_runtime_helper_022b2ca0();
  __this_00 = pMVar12;
  if (g_data_057ae8db == '\0') {
    __this_00 = (MethodInfo *)&TypeInfo_JSONNode;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8db = '\x01';
  }
  if (pMVar12 != (MethodInfo *)0x0) {
    uVar11 = *(uint *)&pMVar12->name;
    if ((int)uVar11 < 1) {
label_0448b9c2:
      return (System_String_o *)(ulong)uVar11;
    }
    uVar10 = 0;
    if (uVar11 != 0) {
      do {
        pIVar3 = (&pMVar12->klass)[(int)uVar10];
        if (pIVar3 == (Il2CppClass *)0x0) goto label_0448b9d6;
        pcVar4 = (pIVar3->_1).namespaze;
        iVar8 = (int)pcVar4;
        if (item == (MethodInfo *)0x0) {
          if (0 < iVar8) goto label_0448b9d6;
        }
        else if (0 < iVar8) {
          lVar14 = 0;
          uVar13 = 0;
          if (((ulong)pcVar4 & 0xffffffff) == 0) break;
          while( true ) {
            __this_00 = item;
            cVar7 = (**(code **)(item->methodPointer + 0x2f8))
                              (item,(&(pIVar3->_1).byval_arg.data)[uVar13],
                               *(undefined8 *)(item->methodPointer + 0x300));
            if (cVar7 != '\0') {
              if (*(uint *)&(pIVar3->_1).namespaze <= uVar13) goto label_0448b9d1;
              __this_00 = (MethodInfo *)
                          (**(code **)(item->methodPointer + 0x1a8))
                                    (item,(&(pIVar3->_1).byval_arg.data)[uVar13],
                                     *(undefined8 *)(item->methodPointer + 0x1b0));
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                                 ((SimpleJSONFixed_JSONNode_o *)__this_00,(MethodInfo *)0x0);
              if (*(uint *)&(pIVar3->_1).namespaze <= uVar13) goto label_0448b9d1;
              (&(pIVar3->_1).byval_arg.data)[uVar13] = pSVar9;
              __this_00 = (MethodInfo *)((long)&(pIVar3->_1).byval_arg.data + lVar14);
              il2cpp_runtime_helper_022b4080();
            }
            uVar13 = uVar13 + 1;
            uVar11 = *(uint *)&(pIVar3->_1).namespaze;
            lVar14 = lVar14 + 8;
            if ((long)(int)uVar11 <= (long)uVar13) break;
            if (uVar11 <= uVar13) goto label_0448b9d1;
          }
        }
        uVar10 = uVar10 + 1;
        uVar11 = *(uint *)&pMVar12->name;
        if ((int)uVar11 <= (int)uVar10) goto label_0448b9c2;
      } while (uVar10 < uVar11);
    }
label_0448b9d1:
    il2cpp_runtime_helper_022b2ca0();
  }
label_0448b9d6:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Utility.CSVCompression$$.ctor
// il2cpp: void Utility_CSVCompression___ctor (Utility_CSVCompression_o* __this, const MethodInfo* method);
// 0x448b9e0

void Utility_CSVCompression___ctor(Utility_CSVCompression_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CSVCompression$$.cctor
// il2cpp: void Utility_CSVCompression___cctor (const MethodInfo* method);
// 0x448b9f0

void Utility_CSVCompression___cctor(MethodInfo *method)

{
  System_Char_array *pSVar1;
  Il2CppObject *__this;
  
  if (g_data_057ae8dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    g_data_057ae8dd = '\x01';
  }
  if ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" != (System_String_o *)0x0) {
    pSVar1 = System_String__ToCharArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_CSVCompression + 0xb8) = pSVar1;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CSVCompression + 0xb8),pSVar1);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8de == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae8de = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


