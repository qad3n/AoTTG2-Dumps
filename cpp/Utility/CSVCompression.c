// Type: Utility.CSVCompression
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/CSVCompression.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/Compression/CSVCompression.cs  [CHANGED since prior version]
// --------------------------------

// Utility.CSVCompression.<>c$$.cctor
// il2cpp: void Utility_CSVCompression___c___cctor (const MethodInfo* method);
// 0x415b100

void Utility_CSVCompression_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704a27 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704a27 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Utility.CSVCompression.<>c$$.ctor
// il2cpp: void Utility_CSVCompression___c___ctor (Utility_CSVCompression___c_o* __this, const MethodInfo* method);
// 0x415b170

void Utility_CSVCompression_<>c___ctor(Utility_CSVCompression___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CSVCompression.<>c$$<CompressSymbol>b__4_0
// il2cpp: int32_t Utility_CSVCompression___c___CompressSymbol_b__4_0 (Utility_CSVCompression___c_o* __this, System_Collections_Generic_KeyValuePair_string__int__o x, const MethodInfo* method);
// 0x415b180

int32_t Utility_CSVCompression_<>c__<CompressSymbol>b__4_0
                  (Utility_CSVCompression___c_o *__this,
                  System_Collections_Generic_KeyValuePair_string__int__o x,MethodInfo *method)

{
  if (DAT_05704a28 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value,x.fields.key);
    DAT_05704a28 = '\x01';
  }
  return x.fields.value;
}


// Utility.CSVCompression$$Compress
// il2cpp: System_Object_array* Utility_CSVCompression__Compress (System_String_o* source, int32_t deltaRows, uint16_t containerDelimiter, uint16_t rowDelimiter, const MethodInfo* method);
// 0x4159230

System_Object_array *
Utility_CSVCompression__Compress
          (System_String_o *source,int32_t deltaRows,uint16_t containerDelimiter,
          uint16_t rowDelimiter,MethodInfo *method)

{
  int32_t *piVar1;
  Utility_Algorithms_CompressionAlgorithm_o *__this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  uint uVar2;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  System_String_array *item;
  System_String_array_array *outputArr;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  System_Byte_array *pSVar7;
  SimpleJSONFixed_JSONObject_o *__this_04;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_Object_array *pSVar9;
  long lVar10;
  undefined8 uVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  ulong uVar12;
  uint uVar13;
  undefined4 in_stack_ffffffffffffff88;
  uint16_t uVar14;
  uint16_t uVar15;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar16;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  uVar14 = rowDelimiter;
  uVar15 = containerDelimiter;
  if (DAT_05704a1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CSVCompression);
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String_____ToArray);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05704a1f = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(pSVar4,MethodInfo_List_1_System_String);
  if ((source != (System_String_o *)0x0) &&
     (pSVar5 = System_String__Split(source,containerDelimiter,0,(MethodInfo *)0x0),
     pSVar5 != (System_String_array *)0x0)) {
    uVar2 = (uint)pSVar5->max_length;
    if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) {
      if (((0 < (int)uVar2) && (pSVar5->m_Items[0] != (System_String_o *)0x0)) &&
         (pSVar6 = System_String__Trim(pSVar5->m_Items[0],(MethodInfo *)0x0),
         pSVar6 != (System_String_o *)0x0)) {
        System_String__Split(pSVar6,rowDelimiter,0,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      if (0 < (int)uVar2) {
        uVar13 = 0;
        do {
          while( true ) {
            if (uVar2 <= uVar13) goto LAB_0415985f;
            if ((pSVar5->m_Items[(int)uVar13] == (System_String_o *)0x0) ||
               (pSVar6 = System_String__Trim(pSVar5->m_Items[(int)uVar13],(MethodInfo *)0x0),
               pSVar6 == (System_String_o *)0x0)) goto LAB_04159891;
            item = System_String__Split(pSVar6,rowDelimiter,0,(MethodInfo *)0x0);
            lVar10 = MethodInfo_Void_Add;
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar9 = (pSVar4->fields)._items;
            if (pSVar9 == (System_Object_array *)0x0) goto LAB_04159891;
            uVar2 = (pSVar4->fields)._size;
            if ((uint)pSVar9->max_length <= uVar2) break;
            (pSVar4->fields)._size = uVar2 + 1;
            pSVar9->m_Items[(int)uVar2] = &item->obj;
            il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar2);
            uVar13 = uVar13 + 1;
            uVar2 = (uint)pSVar5->max_length;
            if ((int)uVar2 <= (int)uVar13) goto LAB_04159483;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar4,&item->obj,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          uVar13 = uVar13 + 1;
          uVar2 = (uint)pSVar5->max_length;
        } while ((int)uVar13 < (int)uVar2);
      }
LAB_04159483:
      outputArr = (System_String_array_array *)
                  System_Collections_Generic_List<object>__ToArray(pSVar4,MethodInfo_String_____ToArray);
      __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)
                  il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
      System_Collections_Generic_Dictionary<object__object>___ctor(__this_03,MethodInfo_Dictionary_2_System_String_System_String);
      if (outputArr != (System_String_array_array *)0x0) {
        if (outputArr->max_length != 0) {
          method_00 = extraout_RDX;
          if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
            il2cpp_init_class();
            method_00 = extraout_RDX_00;
          }
          Utility_CSVCompression__CompressDelta(outputArr,deltaRows,method_00);
        }
        pSVar4 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
        System_Collections_Generic_List<object>___ctor(pSVar4,MethodInfo_List_1_System_String);
        if (0 < (int)outputArr->max_length) {
          if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) {
            pSVar5 = outputArr->m_Items[0];
            if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar6 = System_Char__ToString((uint16_t)&stack0xffffffffffffff8c,(MethodInfo *)0x0);
            System_String__Join(pSVar6,pSVar5,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar12 = 0;
          if ((outputArr->max_length & 0xffffffff) != 0) {
            do {
              pSVar5 = outputArr->m_Items[uVar12];
              if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar6 = System_Char__ToString((uint16_t)&stack0xffffffffffffff8c,(MethodInfo *)0x0);
              pSVar6 = System_String__Join(pSVar6,pSVar5,(MethodInfo *)0x0);
              lVar10 = MethodInfo_Void_Add;
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar9 = (pSVar4->fields)._items;
              if (pSVar9 == (System_Object_array *)0x0) goto LAB_04159891;
              uVar2 = (pSVar4->fields)._size;
              if (uVar2 < (uint)pSVar9->max_length) {
                (pSVar4->fields)._size = uVar2 + 1;
                pSVar9->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (pSVar4,(Il2CppObject *)pSVar6,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              uVar12 = uVar12 + 1;
              uVar2 = (uint)outputArr->max_length;
              if ((long)(int)uVar2 <= (long)uVar12) goto LAB_04159605;
            } while (uVar12 < uVar2);
          }
          goto LAB_0415985f;
        }
LAB_04159605:
        if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8)
        ;
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar6 = System_Char__ToString((uint16_t)&stack0xffffffffffffff8e,(MethodInfo *)0x0);
        if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
          pSVar5 = (System_String_array *)
                   System_Collections_Generic_List<object>__ToArray(pSVar4,MethodInfo_String___ToArray);
          pSVar6 = System_String__Join(pSVar6,pSVar5,(MethodInfo *)0x0);
          if (__this != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
            pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString
                               (__this,pSVar6,1,(MethodInfo *)0x0);
            __this_04 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
            SimpleJSONFixed_JSONObject___ctor(__this_04,(MethodInfo *)0x0);
            if ((__this_03 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (__this_05 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                      (__this_03,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
               __this_05 !=
               (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
              System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                        (&local_48,__this_05,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
              if (__this_04 == (SimpleJSONFixed_JSONObject_o *)0x0) {
                __this_01.fields._dictionary._4_2_ = uVar14;
                __this_01.fields._dictionary._0_4_ = in_stack_ffffffffffffff88;
                __this_01.fields._dictionary._6_2_ = uVar15;
                __this_01.fields._8_8_ = __this_03;
                __this_01.fields._currentKey = (Il2CppObject *)local_48.fields._dictionary;
                bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                  (__this_01,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
                if ((char)bVar3 != '\0') {
                  pSVar6 = (System_String_o *)
                           System_Collections_Generic_Dictionary<object__object>__get_Item
                                     (__this_03,local_48.fields._currentKey,MethodInfo_String_get_Item);
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
              }
              else {
                pSVar16 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c
                           *)local_48.fields._dictionary;
                while (__this_00.fields._dictionary._4_2_ = uVar14,
                      __this_00.fields._dictionary._0_4_ = in_stack_ffffffffffffff88,
                      __this_00.fields._dictionary._6_2_ = uVar15,
                      __this_00.fields._8_8_ = __this_03,
                      __this_00.fields._currentKey = (Il2CppObject *)pSVar16,
                      bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                        (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98),
                      local_48.fields._dictionary =
                           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar16,
                      (char)bVar3 != '\0') {
                  pSVar6 = (System_String_o *)
                           System_Collections_Generic_Dictionary<object__object>__get_Item
                                     (__this_03,local_48.fields._currentKey,MethodInfo_String_get_Item);
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
                  (*(__this_04->klass->vtable)._20_Add.methodPtr)
                            (__this_04,local_48.fields._currentKey,pSVar8,
                             (__this_04->klass->vtable)._20_Add.method);
                }
              }
              __this_02.fields._dictionary._4_2_ = uVar14;
              __this_02.fields._dictionary._0_4_ = in_stack_ffffffffffffff88;
              __this_02.fields._dictionary._6_2_ = uVar15;
              __this_02.fields._8_8_ = __this_03;
              __this_02.fields._currentKey = (Il2CppObject *)local_48.fields._dictionary;
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                        (__this_02,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
              pSVar9 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
              if (pSVar9 != (System_Object_array *)0x0) {
                if ((pSVar7 != (System_Byte_array *)0x0) &&
                   (lVar10 = il2cpp_runtime_glue(pSVar7,(((pSVar9->obj).klass)->_1).element_class),
                   lVar10 == 0)) {
LAB_04159864:
                  uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                  il2cpp_glue_02274a00(uVar11,0);
                }
                if ((int)pSVar9->max_length != 0) {
                  pSVar9->m_Items[0] = &pSVar7->obj;
                  il2cpp_runtime_glue(pSVar9->m_Items,pSVar7);
                  if ((__this_04 != (SimpleJSONFixed_JSONObject_o *)0x0) &&
                     (lVar10 = il2cpp_runtime_glue(__this_04,
                                                  (((pSVar9->obj).klass)->_1).element_class),
                     lVar10 == 0)) goto LAB_04159864;
                  if (1 < (uint)pSVar9->max_length) {
                    pSVar9->m_Items[1] = (Il2CppObject *)__this_04;
                    il2cpp_runtime_glue(pSVar9->m_Items + 1,__this_04);
                    return pSVar9;
                  }
                }
LAB_0415985f:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
          }
        }
      }
    }
  }
LAB_04159891:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CSVCompression$$Decompress
// il2cpp: System_String_o* Utility_CSVCompression__Decompress (System_Byte_array* source, SimpleJSONFixed_JSONNode_o* symbolTable, int32_t deltaRows, uint16_t containerDelimiter, uint16_t rowDelimiter, const MethodInfo* method);
// 0x4159c10

System_String_o *
Utility_CSVCompression__Decompress
          (System_Byte_array *source,SimpleJSONFixed_JSONNode_o *symbolTable,int32_t deltaRows,
          uint16_t containerDelimiter,uint16_t rowDelimiter,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  Utility_Algorithms_CompressionAlgorithm_o *__this;
  System_Object_array *pSVar3;
  long lVar4;
  uint uVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  System_String_array *pSVar8;
  System_String_array *item;
  System_String_array_array *outputArr;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  uint uVar9;
  ulong uVar10;
  undefined1 local_34 [2];
  undefined1 local_32 [2];
  
  if (DAT_05704a20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CSVCompression);
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String_____ToArray);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704a20 = '\x01';
    iVar2 = *(int *)(TypeInfo_DataCompressors + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_DataCompressors + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
  }
  else {
    __this = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
  }
  if (__this != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
    pSVar6 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                       (__this,source,0x1000,0xa00000,(MethodInfo *)0x0);
    pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(pSVar7,MethodInfo_List_1_System_String);
    if ((pSVar6 != (System_String_o *)0x0) &&
       (pSVar8 = System_String__Split(pSVar6,containerDelimiter,0,(MethodInfo *)0x0),
       pSVar8 != (System_String_array *)0x0)) {
      uVar5 = (uint)pSVar8->max_length;
      if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
        if ((0 < (int)uVar5) && (pSVar8->m_Items[0] != (System_String_o *)0x0)) {
          System_String__Split(pSVar8->m_Items[0],rowDelimiter,0,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        if (0 < (int)uVar5) {
          uVar9 = 0;
          do {
            while( true ) {
              if (uVar5 <= uVar9) goto LAB_04159fe7;
              if (pSVar8->m_Items[(int)uVar9] == (System_String_o *)0x0) goto LAB_04159ffa;
              item = System_String__Split
                               (pSVar8->m_Items[(int)uVar9],rowDelimiter,0,(MethodInfo *)0x0);
              lVar4 = MethodInfo_Void_Add;
              piVar1 = &(pSVar7->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (pSVar7->fields)._items;
              if (pSVar3 == (System_Object_array *)0x0) goto LAB_04159ffa;
              uVar5 = (pSVar7->fields)._size;
              if ((uint)pSVar3->max_length <= uVar5) break;
              (pSVar7->fields)._size = uVar5 + 1;
              pSVar3->m_Items[(int)uVar5] = &item->obj;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar5,item);
              uVar9 = uVar9 + 1;
              uVar5 = (uint)pSVar8->max_length;
              if ((int)uVar5 <= (int)uVar9) goto LAB_04159e30;
            }
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar7,&item->obj,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            uVar9 = uVar9 + 1;
            uVar5 = (uint)pSVar8->max_length;
          } while ((int)uVar9 < (int)uVar5);
        }
LAB_04159e30:
        outputArr = (System_String_array_array *)
                    System_Collections_Generic_List<object>__ToArray(pSVar7,MethodInfo_String_____ToArray);
        if (outputArr != (System_String_array_array *)0x0) {
          if (outputArr->max_length != 0) {
            method_00 = extraout_RDX;
            if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
              il2cpp_init_class();
              method_00 = extraout_RDX_00;
            }
            Utility_CSVCompression__DecompressDelta(outputArr,deltaRows,method_00);
          }
          pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
          System_Collections_Generic_List<object>___ctor(pSVar7,MethodInfo_List_1_System_String);
          if (0 < (int)outputArr->max_length) {
            if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
              pSVar8 = outputArr->m_Items[0];
              if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar6 = System_Char__ToString((uint16_t)local_34,(MethodInfo *)0x0);
              System_String__Join(pSVar6,pSVar8,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar10 = 0;
            if ((outputArr->max_length & 0xffffffff) != 0) {
              do {
                pSVar8 = outputArr->m_Items[uVar10];
                if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar6 = System_Char__ToString((uint16_t)local_34,(MethodInfo *)0x0);
                pSVar6 = System_String__Join(pSVar6,pSVar8,(MethodInfo *)0x0);
                lVar4 = MethodInfo_Void_Add;
                piVar1 = &(pSVar7->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar3 = (pSVar7->fields)._items;
                if (pSVar3 == (System_Object_array *)0x0) goto LAB_04159ffa;
                uVar5 = (pSVar7->fields)._size;
                if (uVar5 < (uint)pSVar3->max_length) {
                  (pSVar7->fields)._size = uVar5 + 1;
                  pSVar3->m_Items[(int)uVar5] = (Il2CppObject *)pSVar6;
                  il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar5);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (pSVar7,(Il2CppObject *)pSVar6,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                uVar10 = uVar10 + 1;
                uVar5 = (uint)outputArr->max_length;
                if ((long)(int)uVar5 <= (long)uVar10) goto LAB_04159f89;
              } while (uVar10 < uVar5);
            }
LAB_04159fe7:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_04159f89:
          if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar6 = System_Char__ToString((uint16_t)local_32,(MethodInfo *)0x0);
          if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
            pSVar8 = (System_String_array *)
                     System_Collections_Generic_List<object>__ToArray(pSVar7,MethodInfo_String___ToArray);
            pSVar6 = System_String__Join(pSVar6,pSVar8,(MethodInfo *)0x0);
            return pSVar6;
          }
        }
      }
    }
  }
LAB_04159ffa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CSVCompression$$CompressDelta
// il2cpp: void Utility_CSVCompression__CompressDelta (System_String_array_array* outputArr, int32_t deltaRows, const MethodInfo* method);
// 0x41599e0

void Utility_CSVCompression__CompressDelta
               (System_String_array_array *outputArr,int32_t deltaRows,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  bool_conflict bVar3;
  long lVar4;
  int iVar5;
  MethodInfo *extraout_RDX;
  ulong uVar6;
  System_String_o **ppSVar7;
  ulong uVar8;
  undefined8 *puVar9;
  System_String_o **ppSVar10;
  
  if (DAT_05704a21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_05704a21 = '\x01';
    method = extraout_RDX;
  }
  lVar4 = il2cpp_glue_02274930(TypeInfo_string,100,method);
  if (outputArr != (System_String_array_array *)0x0) {
    iVar5 = (int)outputArr->max_length;
    uVar8 = outputArr->max_length & 0xffffffff;
    if (lVar4 == 0) {
      if (iVar5 != 0) {
        if ((outputArr->m_Items[0] == (System_String_array *)0x0) ||
           (0 < (int)outputArr->m_Items[0]->max_length)) goto LAB_04159c04;
LAB_04159ac3:
        if ((int)uVar8 < 2) {
          return;
        }
        uVar6 = 1;
        if (1 < uVar8) {
          do {
            if (0 < deltaRows) {
              pSVar2 = outputArr->m_Items[uVar6];
              if (pSVar2 == (System_String_array *)0x0) goto LAB_04159c04;
              if (lVar4 == 0) {
                if ((int)pSVar2->max_length != 0) goto LAB_04159c04;
                break;
              }
              ppSVar10 = pSVar2->m_Items;
              uVar8 = 0;
              if ((int)pSVar2->max_length == 0) break;
              while( true ) {
                if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_04159bff;
                bVar3 = System_String__op_Equality
                                  (*ppSVar10,*(System_String_o **)(lVar4 + 0x20 + uVar8 * 8),
                                   (MethodInfo *)0x0);
                if ((char)bVar3 == '\0') {
                  if (((uint)pSVar2->max_length <= uVar8) || (*(uint *)(lVar4 + 0x18) <= uVar8))
                  goto LAB_04159bff;
                  ppSVar7 = (System_String_o **)(uVar8 * 8 + 0x20 + lVar4);
                  *(System_String_o **)(lVar4 + 0x20 + uVar8 * 8) = *ppSVar10;
                }
                else {
                  if ((uint)pSVar2->max_length <= uVar8) goto LAB_04159bff;
                  *ppSVar10 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
                  ppSVar7 = ppSVar10;
                }
                il2cpp_runtime_glue(ppSVar7);
                uVar8 = uVar8 + 1;
                ppSVar10 = ppSVar10 + 1;
                if ((uint)deltaRows == uVar8) break;
                if ((uint)pSVar2->max_length <= uVar8) goto LAB_04159bff;
              }
              uVar8 = (ulong)(uint)outputArr->max_length;
            }
            uVar6 = uVar6 + 1;
            if ((long)(int)uVar8 <= (long)uVar6) {
              return;
            }
          } while (uVar6 < uVar8);
        }
      }
    }
    else if (iVar5 != 0) {
      puVar9 = (undefined8 *)(lVar4 + 0x20);
      uVar6 = 0;
      do {
        pSVar2 = outputArr->m_Items[0];
        if (pSVar2 == (System_String_array *)0x0) goto LAB_04159c04;
        uVar1 = (uint)pSVar2->max_length;
        if ((long)(int)uVar1 <= (long)uVar6) goto LAB_04159ac3;
        if ((uVar1 <= uVar6) || (*(uint *)(lVar4 + 0x18) <= uVar6)) break;
        *puVar9 = pSVar2->m_Items[uVar6];
        il2cpp_runtime_glue(puVar9);
        uVar6 = uVar6 + 1;
        uVar8 = outputArr->max_length & 0xffffffff;
        puVar9 = puVar9 + 1;
      } while ((int)outputArr->max_length != 0);
    }
LAB_04159bff:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04159c04:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CSVCompression$$CompressSymbol
// il2cpp: void Utility_CSVCompression__CompressSymbol (System_String_array_array* outputArr, System_Collections_Generic_Dictionary_string__string__o* symbolTable, const MethodInfo* method);
// 0x415a270

/* WARNING: Removing unreachable block (ram,0x0415aa14) */
/* WARNING: Removing unreachable block (ram,0x0415abc5) */

void Utility_CSVCompression__CompressSymbol
               (System_String_array_array *outputArr,
               System_Collections_Generic_Dictionary_string__string__o *symbolTable,
               MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_Linq_IOrderedEnumerable_TSource__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool bVar6;
  char cVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar10;
  VirtualInvokeData *pVVar11;
  long *plVar12;
  undefined8 *puVar13;
  il2cpp_array_size_t iVar14;
  System_String_o *pSVar15;
  int iVar16;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  undefined1 auVar23 [12];
  MethodInfo *pMStack_58;
  
  pMVar17 = (MethodInfo *)symbolTable;
  if (DAT_05704a22 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CSVCompression);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_System_Collections_Generic);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_string__int___int);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_KeyValuePair_string__int);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_KeyValuePair_string__int);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32__CompressSymbol_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704a22 = '\x01';
  }
  if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMStack_58 = (MethodInfo *)Utility_CSVCompression__ToBase62(0,pMVar17);
  __this = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
  System_Collections_Generic_Dictionary<object__int>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_Int32);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
  if (outputArr != (System_String_array_array *)0x0) {
    iVar22 = (int)outputArr->max_length;
    if (0 < iVar22) {
      uVar21 = 0;
      if (iVar22 != 0) {
        do {
          pSVar3 = outputArr->m_Items[(int)uVar21];
          if (pSVar3 == (System_String_array *)0x0) goto LAB_0415ab28;
          iVar22 = (int)pSVar3->max_length;
          if (__this == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            if (0 < iVar22) goto LAB_0415ab28;
          }
          else if (0 < iVar22) {
            uVar20 = 0;
            if ((pSVar3->max_length & 0xffffffff) == 0) break;
            while( true ) {
              pSVar15 = pSVar3->m_Items[uVar20];
              bVar8 = System_Collections_Generic_Dictionary<object__int>__ContainsKey
                                (__this,(Il2CppObject *)pSVar15,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar8 == '\0') {
                System_Collections_Generic_Dictionary<object__int>__Add
                          (__this,(Il2CppObject *)pSVar15,1,MethodInfo_Void_Add);
              }
              else {
                iVar9 = System_Collections_Generic_Dictionary<object__int>__get_Item
                                  (__this,(Il2CppObject *)pSVar15,MethodInfo_Int32_get_Item);
                System_Collections_Generic_Dictionary<object__int>__set_Item
                          (__this,(Il2CppObject *)pSVar15,iVar9 + 1,MethodInfo_Void_set_Item);
              }
              uVar20 = uVar20 + 1;
              uVar2 = (uint)pSVar3->max_length;
              if ((long)(int)uVar2 <= (long)uVar20) break;
              if (uVar2 <= uVar20) goto LAB_0415abc0;
            }
          }
          uVar21 = uVar21 + 1;
          uVar2 = (uint)outputArr->max_length;
          if ((int)uVar2 <= (int)uVar21) goto LAB_0415a520;
        } while (uVar21 < uVar2);
      }
      goto LAB_0415abc0;
    }
LAB_0415a520:
    if (__this != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      pMVar17 = pMStack_58;
      bVar8 = System_Collections_Generic_Dictionary<object__int>__ContainsKey
                        (__this,(Il2CppObject *)pMStack_58,MethodInfo_Boolean_ContainsKey);
      iVar22 = 0;
      if ((char)bVar8 != '\0') {
        iVar22 = 1;
        iVar16 = *(int *)(TypeInfo_CSVCompression + 0xe4);
        while( true ) {
          if (iVar16 == 0) {
            il2cpp_init_class();
          }
          pMStack_58 = (MethodInfo *)Utility_CSVCompression__ToBase62(iVar22,pMVar17);
          pMVar17 = pMStack_58;
          bVar8 = System_Collections_Generic_Dictionary<object__int>__ContainsKey
                            (__this,(Il2CppObject *)pMStack_58,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar8 == '\0') break;
          iVar22 = iVar22 + 1;
          iVar16 = *(int *)(TypeInfo_CSVCompression + 0xe4);
        }
      }
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_string__int___int);
        System_Func<KeyValuePair<object__int>__int>___ctor();
        lVar18 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TKey__o **)(lVar18 + 8) = keySelector;
        il2cpp_runtime_glue(lVar18 + 8,keySelector);
      }
      pSVar10 = System_Linq_Enumerable__OrderByDescending<KeyValuePair<object__int>__int>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)__this,keySelector,
                           MethodInfo_IOrderedEnumerable_1_System_Collections_Generic);
      if (pSVar10 != (System_Linq_IOrderedEnumerable_TSource__o *)0x0) {
        pSVar4 = pSVar10->klass;
        uVar1._0_1_ = (pSVar4->_2).rank;
        uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar18) == TypeInfo_IEnumerable_KeyValuePair_string__int) {
              pVVar11 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar18);
              goto LAB_0415a6c1;
            }
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar18);
        }
        pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar10,TypeInfo_IEnumerable_KeyValuePair_string__int,0);
LAB_0415a6c1:
        plVar12 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar6 = true;
        iVar16 = 0;
        do {
          lVar18 = *plVar12;
          if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
            lVar19 = 0;
            do {
              if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IEnumerator) {
                puVar13 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 + lVar18 +
                          0x138);
                goto LAB_0415a753;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator,0);
LAB_0415a753:
          cVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if (cVar7 == '\0') {
LAB_0415a98f:
            if (plVar12 == (long *)0x0) goto LAB_0415aa06;
            lVar18 = *plVar12;
            if ((ulong)*(ushort *)(lVar18 + 0x12e) == 0) goto LAB_0415a9df;
            lVar19 = 0;
            goto LAB_0415a9d0;
          }
          lVar18 = *plVar12;
          if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
            lVar19 = 0;
            do {
              if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IEnumerator_KeyValuePair_string__int) {
                puVar13 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 + lVar18 +
                          0x138);
                goto LAB_0415a7c3;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IEnumerator_KeyValuePair_string__int,0);
LAB_0415a7c3:
          auVar23 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          pMVar17 = auVar23._0_8_;
          if (!(bool)(bVar6 & 2 < auVar23._8_4_)) goto LAB_0415a98f;
          if (pMVar17 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pMStack_58 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (((System_String_Fields *)&pMStack_58->invoker_method)->_stringLength <
              *(int *)&pMVar17->invoker_method) {
            if (symbolTable == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary<object__object>__Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)symbolTable,
                       (Il2CppObject *)pMStack_58,(Il2CppObject *)pMVar17,MethodInfo_Void_Add);
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            method_00 = pMVar17;
            System_Collections_Generic_Dictionary<object__object>__Add
                      (__this_00,(Il2CppObject *)pMVar17,(Il2CppObject *)pMStack_58,MethodInfo_Void_Add);
            if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
              il2cpp_init_class();
            }
            iVar22 = iVar22 + 1;
            pMStack_58 = (MethodInfo *)Utility_CSVCompression__ToBase62(iVar22,method_00);
            if (pMStack_58 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            iVar16 = *(int *)&pMVar17->invoker_method +
                     iVar16 + ((System_String_Fields *)&pMStack_58->invoker_method)->_stringLength +
                     6;
            bVar6 = iVar16 < 0x2711;
          }
        } while( true );
      }
    }
  }
LAB_0415ab28:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar19 = lVar19 + 0x10, (ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19) {
LAB_0415a9d0:
    if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IDisposable) {
      puVar13 = (undefined8 *)
                (lVar18 + (long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
      goto LAB_0415a9fd;
    }
  }
LAB_0415a9df:
  puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar12,TypeInfo_IDisposable,0);
LAB_0415a9fd:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0415aa06:
  iVar14 = outputArr->max_length;
  if ((int)iVar14 < 1) {
    return;
  }
  uVar21 = 0;
  if ((int)iVar14 != 0) {
    do {
      pSVar3 = outputArr->m_Items[(int)uVar21];
      if (pSVar3 == (System_String_array *)0x0) goto LAB_0415ab28;
      iVar22 = (int)pSVar3->max_length;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        if (0 < iVar22) goto LAB_0415ab28;
      }
      else {
        if (0 < iVar22) {
          lVar18 = 0;
          uVar20 = 0;
          if ((pSVar3->max_length & 0xffffffff) == 0) break;
          while( true ) {
            bVar8 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                              (__this_00,(Il2CppObject *)pSVar3->m_Items[uVar20],MethodInfo_Boolean_ContainsKey);
            if ((char)bVar8 != '\0') {
              if (((uint)pSVar3->max_length <= uVar20) ||
                 (pSVar15 = (System_String_o *)
                            System_Collections_Generic_Dictionary<object__object>__get_Item
                                      (__this_00,(Il2CppObject *)pSVar3->m_Items[uVar20],
                                       MethodInfo_String_get_Item), (uint)pSVar3->max_length <= uVar20))
              goto LAB_0415abc0;
              pSVar3->m_Items[uVar20] = pSVar15;
              il2cpp_runtime_glue((long)pSVar3->m_Items + lVar18,pSVar15);
            }
            uVar20 = uVar20 + 1;
            uVar2 = (uint)pSVar3->max_length;
            lVar18 = lVar18 + 8;
            if ((long)(int)uVar2 <= (long)uVar20) break;
            if (uVar2 <= uVar20) goto LAB_0415abc0;
          }
        }
        iVar14 = outputArr->max_length;
      }
      uVar21 = uVar21 + 1;
      if ((int)(uint)iVar14 <= (int)uVar21) {
        return;
      }
    } while (uVar21 < (uint)iVar14);
  }
LAB_0415abc0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CSVCompression$$DecompressDelta
// il2cpp: void Utility_CSVCompression__DecompressDelta (System_String_array_array* outputArr, int32_t deltaRows, const MethodInfo* method);
// 0x415a050

void Utility_CSVCompression__DecompressDelta
               (System_String_array_array *outputArr,int32_t deltaRows,MethodInfo *method)

{
  System_String_array *pSVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  System_String_o **ppSVar8;
  ulong uVar9;
  System_String_o **ppSVar10;
  
  if (DAT_05704a23 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_05704a23 = '\x01';
  }
  if (outputArr != (System_String_array_array *)0x0) {
    if ((int)outputArr->max_length != 0) {
      if (outputArr->m_Items[0] == (System_String_array *)0x0) goto LAB_0415a25c;
      lVar5 = 0;
      pIVar4 = System_Array__Clone((System_Array_o *)outputArr->m_Items[0],(MethodInfo *)0x0);
      uVar2 = TypeInfo_string;
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = il2cpp_runtime_glue(pIVar4,TypeInfo_string), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar4,uVar2);
      }
      uVar9 = outputArr->max_length;
      if ((int)uVar9 < 2) {
        return;
      }
      uVar6 = uVar9 & 0xffffffff;
      uVar7 = 1;
      if (1 < (uVar9 & 0xffffffff)) {
        do {
          if (0 < deltaRows) {
            pSVar1 = outputArr->m_Items[uVar7];
            if (pSVar1 == (System_String_array *)0x0) goto LAB_0415a25c;
            if (lVar5 == 0) {
              if (((int)pSVar1->max_length != 0) &&
                 ((bVar3 = System_String__op_Equality
                                     (pSVar1->m_Items[0],
                                      (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                                      (MethodInfo *)0x0), (char)bVar3 != '\0' ||
                  ((int)pSVar1->max_length != 0)))) goto LAB_0415a25c;
              break;
            }
            ppSVar10 = pSVar1->m_Items;
            uVar9 = 0;
            if ((int)pSVar1->max_length == 0) break;
            while( true ) {
              bVar3 = System_String__op_Equality
                                (*ppSVar10,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8)
                                 ,(MethodInfo *)0x0);
              if ((char)bVar3 == '\0') {
                if (((uint)pSVar1->max_length <= uVar9) || (*(uint *)(lVar5 + 0x18) <= uVar9))
                goto LAB_0415a257;
                ppSVar8 = (System_String_o **)(uVar9 * 8 + 0x20 + lVar5);
                *(System_String_o **)(lVar5 + 0x20 + uVar9 * 8) = *ppSVar10;
              }
              else {
                if ((*(uint *)(lVar5 + 0x18) <= uVar9) || ((uint)pSVar1->max_length <= uVar9))
                goto LAB_0415a257;
                *ppSVar10 = *(System_String_o **)(lVar5 + 0x20 + uVar9 * 8);
                ppSVar8 = ppSVar10;
              }
              il2cpp_runtime_glue(ppSVar8);
              uVar9 = uVar9 + 1;
              ppSVar10 = ppSVar10 + 1;
              if ((uint)deltaRows == uVar9) break;
              if ((uint)pSVar1->max_length <= uVar9) goto LAB_0415a257;
            }
            uVar6 = (ulong)(uint)outputArr->max_length;
          }
          uVar7 = uVar7 + 1;
          if ((long)(int)uVar6 <= (long)uVar7) {
            return;
          }
        } while (uVar7 < uVar6);
      }
    }
LAB_0415a257:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0415a25c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CSVCompression$$DecompressSymbol
// il2cpp: void Utility_CSVCompression__DecompressSymbol (System_String_array_array* outputArr, SimpleJSONFixed_JSONNode_o* symbolTable, const MethodInfo* method);
// 0x415aef0

void Utility_CSVCompression__DecompressSymbol
               (System_String_array_array *outputArr,SimpleJSONFixed_JSONNode_o *symbolTable,
               MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  char cVar3;
  int iVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *d;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  if (DAT_05704a24 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704a24 = '\x01';
  }
  if (outputArr == (System_String_array_array *)0x0) {
LAB_0415b076:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar4 = (int)outputArr->max_length;
  if (iVar4 < 1) {
    return;
  }
  uVar6 = 0;
  if (iVar4 != 0) {
    do {
      pSVar2 = outputArr->m_Items[(int)uVar6];
      if (pSVar2 == (System_String_array *)0x0) goto LAB_0415b076;
      iVar4 = (int)pSVar2->max_length;
      if (symbolTable == (SimpleJSONFixed_JSONNode_o *)0x0) {
        if (0 < iVar4) goto LAB_0415b076;
      }
      else if (0 < iVar4) {
        lVar8 = 0;
        uVar7 = 0;
        if ((pSVar2->max_length & 0xffffffff) == 0) break;
        while( true ) {
          cVar3 = (*(symbolTable->klass->vtable)._28_HasKey.methodPtr)
                            (symbolTable,pSVar2->m_Items[uVar7],
                             (symbolTable->klass->vtable)._28_HasKey.method);
          if (cVar3 != '\0') {
            if ((uint)pSVar2->max_length <= uVar7) goto LAB_0415b071;
            d = (SimpleJSONFixed_JSONNode_o *)
                (*(symbolTable->klass->vtable)._7_get_Item.methodPtr)
                          (symbolTable,pSVar2->m_Items[uVar7],
                           (symbolTable->klass->vtable)._7_get_Item.method);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(d,(MethodInfo *)0x0);
            if ((uint)pSVar2->max_length <= uVar7) goto LAB_0415b071;
            pSVar2->m_Items[uVar7] = pSVar5;
            il2cpp_runtime_glue((long)pSVar2->m_Items + lVar8,pSVar5);
          }
          uVar7 = uVar7 + 1;
          uVar1 = (uint)pSVar2->max_length;
          lVar8 = lVar8 + 8;
          if ((long)(int)uVar1 <= (long)uVar7) break;
          if (uVar1 <= uVar7) goto LAB_0415b071;
        }
      }
      uVar6 = uVar6 + 1;
      uVar1 = (uint)outputArr->max_length;
      if ((int)uVar1 <= (int)uVar6) {
        return;
      }
    } while (uVar6 < uVar1);
  }
LAB_0415b071:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CSVCompression$$ToBase62
// il2cpp: System_String_o* Utility_CSVCompression__ToBase62 (int32_t index, const MethodInfo* method);
// 0x415abf0

System_String_o * Utility_CSVCompression__ToBase62(int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *pSVar6;
  System_String_array *value;
  long lVar7;
  
  if (DAT_05704a25 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CSVCompression);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Reverse);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"");
    DAT_05704a25 = '\x01';
  }
  if (index == 0) {
    if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar7 = **(long **)(TypeInfo_CSVCompression + 0xb8);
    if (lVar7 != 0) {
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (*(int *)(lVar7 + 0x18) != 0) {
        pSVar6 = System_Char__ToString((short)lVar7 + 0x20,(MethodInfo *)0x0);
        return pSVar6;
      }
LAB_0415aeeb:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar7 = **(long **)(TypeInfo_CSVCompression + 0xb8);
    if (lVar7 != 0) {
      if (index < 1) {
        if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0415aeab;
      }
      else {
        iVar2 = *(int *)(lVar7 + 0x18);
        if (__this == (System_Collections_Generic_List_object__o *)0x0) {
          if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
            il2cpp_init_class();
            lVar7 = **(long **)(TypeInfo_CSVCompression + 0xb8);
            if (lVar7 == 0) goto LAB_0415aeab;
          }
          if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if ((uint)((long)index % (long)iVar2) < *(uint *)(lVar7 + 0x18)) {
            System_Char__ToString
                      ((short)((long)index % (long)iVar2) * 2 + 0x20 + (short)lVar7,
                       (MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          goto LAB_0415aeeb;
        }
        do {
          while( true ) {
            lVar7 = (long)index;
            index = index / iVar2;
            if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
              il2cpp_init_class();
            }
            lVar4 = **(long **)(TypeInfo_CSVCompression + 0xb8);
            if (lVar4 == 0) goto LAB_0415aeab;
            if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (*(uint *)(lVar4 + 0x18) <= (uint)(lVar7 % (long)iVar2)) goto LAB_0415aeeb;
            pSVar6 = System_Char__ToString
                               ((short)(lVar7 % (long)iVar2) * 2 + 0x20 + (short)lVar4,
                                (MethodInfo *)0x0);
            lVar7 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) goto LAB_0415aeab;
            uVar3 = (__this->fields)._size;
            if ((uint)pSVar5->max_length <= uVar3) break;
            (__this->fields)._size = uVar3 + 1;
            pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pSVar6;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3);
            if (index < 1) goto LAB_0415ae3c;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)pSVar6,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        } while (0 < index);
      }
LAB_0415ae3c:
      System_Collections_Generic_List<object>__Reverse(__this,MethodInfo_Void_Reverse);
      value = (System_String_array *)
              System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_String___ToArray);
      pSVar6 = System_String__Join("",value,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
LAB_0415aeab:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CSVCompression$$.ctor
// il2cpp: void Utility_CSVCompression___ctor (Utility_CSVCompression_o* __this, const MethodInfo* method);
// 0x415b080

void Utility_CSVCompression___ctor(Utility_CSVCompression_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CSVCompression$$.cctor
// il2cpp: void Utility_CSVCompression___cctor (const MethodInfo* method);
// 0x415b090

void Utility_CSVCompression___cctor(MethodInfo *method)

{
  System_Char_array *pSVar1;
  
  if (DAT_05704a26 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CSVCompression);
    il2cpp_init_method_metadata(&"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    DAT_05704a26 = '\x01';
  }
  if ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" != (System_String_o *)0x0) {
    pSVar1 = System_String__ToCharArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_CSVCompression + 0xb8) = pSVar1;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CSVCompression + 0xb8),pSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


