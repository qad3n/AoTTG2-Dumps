// Type: Utility.Format
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/Format.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Format.cs
// --------------------------------

// Utility.Format.HMSFormatter$$Format
// il2cpp: System_String_o* Utility_Format_HMSFormatter__Format (Utility_Format_HMSFormatter_o* __this, System_String_o* format, Il2CppObject* arg, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
// 0x18233a000

System_String_o *
Utility_Format_HMSFormatter__Format
          (Utility_Format_HMSFormatter_o *__this,System_String_o *format,Il2CppObject *arg,
          System_IFormatProvider_o *formatProvider,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_IFormatProvider_o *provider;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347835 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Format_HMSFormatter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Format_PluralFormatter);
    Il2CppMethodInitialized_184347835 = '\x01';
  }
  provider = (System_IFormatProvider_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Format_PluralFormatter);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)provider,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_Format_HMSFormatter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Format_HMSFormatter);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Utility_Format_HMSFormatter->static_fields->timeformats;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_00,(Il2CppObject *)format,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    pSVar1 = System_String__Format_196ca50(provider,pSVar1,arg,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Utility.Format.HMSFormatter$$GetFormat
// il2cpp: Il2CppObject* Utility_Format_HMSFormatter__GetFormat (Utility_Format_HMSFormatter_o* __this, System_Type_o* formatType, const MethodInfo* method);
// 0x18233a0d0

Il2CppObject *
Utility_Format_HMSFormatter__GetFormat
          (Utility_Format_HMSFormatter_o *__this,System_Type_o *formatType,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *right;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184347836 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_System_ICustomFormatter);
    Il2CppMethodInitialized_184347836 = '\x01';
  }
  handle = TypeRef_System_ICustomFormatter;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  bVar1 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)formatType,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)right,(MethodInfo_841F20 *)0x0)
  ;
  pIVar2 = (Il2CppObject *)0x0;
  if (bVar1) {
    pIVar2 = (Il2CppObject *)__this;
  }
  return pIVar2;
}


// Utility.Format.HMSFormatter$$.ctor
// il2cpp: void Utility_Format_HMSFormatter___ctor (Utility_Format_HMSFormatter_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_Format_HMSFormatter___ctor(Utility_Format_HMSFormatter_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Format.HMSFormatter$$.cctor
// il2cpp: void Utility_Format_HMSFormatter___cctor (const MethodInfo* method);
// 0x18233a150

void Utility_Format_HMSFormatter___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this;
  
  if (Il2CppMethodInitialized_184347837 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Format_HMSFormatter);
    il2cpp_codegen_initialize_runtime_metadata(&"S");
    il2cpp_codegen_initialize_runtime_metadata(&"{0:P:hours:hour}");
    il2cpp_codegen_initialize_runtime_metadata(&"H");
    il2cpp_codegen_initialize_runtime_metadata(&"{0:P:seconds:second}");
    il2cpp_codegen_initialize_runtime_metadata(&"{0:P:minutes:minute}");
    il2cpp_codegen_initialize_runtime_metadata(&"D");
    il2cpp_codegen_initialize_runtime_metadata(&"{0:P:days:day}");
    il2cpp_codegen_initialize_runtime_metadata(&"M");
    Il2CppMethodInitialized_184347837 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  if (__this != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"S",(Il2CppObject *)"{0:P:seconds:second}",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"M",(Il2CppObject *)"{0:P:minutes:minute}",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"H",(Il2CppObject *)"{0:P:hours:hour}",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (Il2CppObject *)"D",(Il2CppObject *)"{0:P:days:day}",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    TypeInfo_Utility_Format_HMSFormatter->static_fields->timeformats = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_Format_HMSFormatter->static_fields->timeformats,__this);
    return;
  }
  ThrowNullReferenceException();
}


// Utility.Format.PluralFormatter$$Format
// il2cpp: System_String_o* Utility_Format_PluralFormatter__Format (Utility_Format_PluralFormatter_o* __this, System_String_o* format, Il2CppObject* arg, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
// 0x18233cf20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233cfff: mov r8, qword ptr [rip + 0x1d41f22]  ; ""

System_String_o *
Utility_Format_PluralFormatter__Format
          (Utility_Format_PluralFormatter_o *__this,System_String_o *format,Il2CppObject *arg,
          System_IFormatProvider_o *formatProvider,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_184347838 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"{0} {1}");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    il2cpp_codegen_initialize_runtime_metadata(&"P");
    Il2CppMethodInitialized_184347838 = '\x01';
  }
  if (arg != (Il2CppObject *)0x0) {
    if ((format == (System_String_o *)0x0) ||
       (pSVar4 = System_String__Split(format,0x3a,0,(MethodInfo *)0x0), pSVar4 == (System_String_array *)0x0))
    {
      ThrowNullReferenceException();
    }
    if ((int)pSVar4->max_length == 0) {
label_18233d044:
      ThrowIndexOutOfRangeException();
    }
    bVar2 = System_String__op_Equality(pSVar4->m_Items[0],"P",(MethodInfo *)0x0);
    if (bVar2) {
      pSVar5 = (System_String_o *)(*arg->klass->vtable[3].methodPtr)(arg,arg->klass->vtable[3].method);
      bVar2 = System_String__op_Equality(pSVar5,"1",(MethodInfo *)0x0);
      uVar3 = bVar2 + 1;
      uVar1 = (uint)pSVar4->max_length;
      pSVar5 = "";
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 <= uVar3) goto label_18233d044;
        pSVar5 = pSVar4->m_Items[uVar3];
      }
      pSVar5 = System_String__Format_196d440
                         ("{0} {1}",arg,(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  pSVar5 = System_String__Format(format,arg,(MethodInfo *)0x0);
  return pSVar5;
}


// Utility.Format.PluralFormatter$$GetFormat
// il2cpp: Il2CppObject* Utility_Format_PluralFormatter__GetFormat (Utility_Format_PluralFormatter_o* __this, System_Type_o* formatType, const MethodInfo* method);
// 0x18233d050

Il2CppObject *
Utility_Format_PluralFormatter__GetFormat
          (Utility_Format_PluralFormatter_o *__this,System_Type_o *formatType,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *right;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184347839 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_System_ICustomFormatter);
    Il2CppMethodInitialized_184347839 = '\x01';
  }
  handle = TypeRef_System_ICustomFormatter;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  bVar1 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)formatType,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)right,(MethodInfo_841F20 *)0x0)
  ;
  pIVar2 = (Il2CppObject *)0x0;
  if (bVar1) {
    pIVar2 = (Il2CppObject *)__this;
  }
  return pIVar2;
}


// Utility.Format.PluralFormatter$$.ctor
// il2cpp: void Utility_Format_PluralFormatter___ctor (Utility_Format_PluralFormatter_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_Format_PluralFormatter___ctor(Utility_Format_PluralFormatter_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Format$$Suffix
// il2cpp: System_String_o* Utility_Format__Suffix (uint64_t num, const MethodInfo* method);
// 0x1823398d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182339aee: mov rdx, qword ptr [rip + 0x1d45433]  ; ""

System_String_o * Utility_Format__Suffix(uint64_t num,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  System_String_o *str0;
  double dVar2;
  double local_res8;
  double local_res18 [2];
  
  if (Il2CppMethodInitialized_184347833 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&"Qi");
    il2cpp_codegen_initialize_runtime_metadata(&"K");
    il2cpp_codegen_initialize_runtime_metadata(&"Qa");
    il2cpp_codegen_initialize_runtime_metadata(&"T");
    il2cpp_codegen_initialize_runtime_metadata(&"{0:G3}");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"R0");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"M");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_184347833 = '\x01';
  }
  local_res8 = 0.0;
  if (num == 0) {
    return "0";
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar2 = il2cpp_runtime_helper_1804f9020((double)num,method);
  local_res18[0] = System_Math__Pow(1000.0,(double)((int)dVar2 / 3),(MethodInfo *)0x0);
  local_res18[0] = (double)num / local_res18[0];
  arg0 = il2cpp_value_box(g_data_184354e40,local_res18);
  pSVar1 = System_String__Format("{0:G3}",arg0,(MethodInfo *)0x0);
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  local_res8 = System_Convert__ToDouble_1a82ea0(pSVar1,(MethodInfo *)0x0);
  str0 = System_Double__ToString_1b22740(&local_res8,"R0",(MethodInfo *)0x0);
  pSVar1 = "";
  switch((int)dVar2 / 3) {
  case 1:
    pSVar1 = "K";
    break;
  case 2:
    pSVar1 = "M";
    break;
  case 3:
    pSVar1 = "B";
    break;
  case 4:
    pSVar1 = "T";
    break;
  case 5:
    pSVar1 = "Qa";
    break;
  case 6:
    pSVar1 = "Qi";
  }
  pSVar1 = System_String__Concat_1969e50(str0,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Format$$GetReadableTimespan
// il2cpp: System_String_o* Utility_Format__GetReadableTimespan (System_TimeSpan_o ts, const MethodInfo* method);
// 0x182339370
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823395ef: mov ebx, esi
// asm:   0x182339709: jmp 0x182339728

System_String_o * Utility_Format__GetReadableTimespan(System_TimeSpan_o ts,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  int32_t iVar4;
  System_Collections_Generic_SortedList_long__string__o *__this;
  System_Collections_Generic_IEnumerable_TKey__o *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  System_IFormatProvider_o *provider;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  int64_t key;
  System_String_o *pSVar7;
  System_Object_array *args;
  Il2CppObject *pIVar8;
  ushort uVar9;
  int iVar10;
  double dVar11;
  System_TimeSpan_Fields local_res8;
  int32_t local_res18 [2];
  int32_t local_res20 [2];
  int32_t local_28;
  int32_t local_24 [3];
  
  local_res8 = ts.fields._ticks;
  if (Il2CppMethodInitialized_184347834 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_long);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Format_HMSFormatter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_long);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_long_BinarySearch);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedList_long_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedList_long_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedList_long_string_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_SortedList_long_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    il2cpp_codegen_initialize_runtime_metadata(&"{2:M}, {3:S}");
    il2cpp_codegen_initialize_runtime_metadata(&"{3:S}");
    il2cpp_codegen_initialize_runtime_metadata(&"{0:D}, {1:H}");
    il2cpp_codegen_initialize_runtime_metadata(&"{1:H}");
    il2cpp_codegen_initialize_runtime_metadata(&"{0:D}");
    il2cpp_codegen_initialize_runtime_metadata(&"{2:M}");
    il2cpp_codegen_initialize_runtime_metadata(&"{1:H}, {2:M}");
    Il2CppMethodInitialized_184347834 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_SortedList_long_string);
  System_Collections_Generic_SortedList_long__object____ctor
            ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,
             (MethodInfo_CA4160 *)MethodInfo_System_Collections_Generic_SortedList_long_string_ctor);
  if (__this != (System_Collections_Generic_SortedList_long__string__o *)0x0) {
    System_Collections_Generic_SortedList_long__object___Add
              ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0x3b,
               (Il2CppObject *)"{3:S}",
               (MethodInfo_C9F6B0 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
    System_Collections_Generic_SortedList_long__object___Add
              ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0x3c,
               (Il2CppObject *)"{2:M}",
               (MethodInfo_C9F6B0 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
    System_Collections_Generic_SortedList_long__object___Add
              ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0xe0f,
               (Il2CppObject *)"{2:M}, {3:S}",
               (MethodInfo_C9F6B0 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
    System_Collections_Generic_SortedList_long__object___Add
              ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0xe10,
               (Il2CppObject *)"{1:H}",
               (MethodInfo_C9F6B0 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
    System_Collections_Generic_SortedList_long__object___Add
              ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0x1517f,
               (Il2CppObject *)"{1:H}, {2:M}",
               (MethodInfo_C9F6B0 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
    System_Collections_Generic_SortedList_long__object___Add
              ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0x15180,
               (Il2CppObject *)"{0:D}",
               (MethodInfo_C9F6B0 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
    System_Collections_Generic_SortedList_long__object___Add
              ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0x7fffffffffffffff,
               (Il2CppObject *)"{0:D}, {1:H}",
               (MethodInfo_C9F6B0 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
    source = System_Collections_Generic_SortedList_object__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                       ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,
                        (MethodInfo_CA1320 *)
                        MethodInfo_System_Collections_Generic_SortedList_long_string_get_Keys);
    __this_00 = System_Linq_Enumerable__ToList_long_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (MethodInfo_6C9710 *)MethodInfo_System_Linq_Enumerable_ToList_long);
    if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    dVar11 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o *)&local_res8,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
      iVar4 = System_Collections_Generic_List_long___BinarySearch_91b410
                        ((System_Collections_Generic_List_long__o *)__this_00,(longlong)dVar11,
                         (MethodInfo_91B410 *)MethodInfo_System_Collections_Generic_List_long_BinarySearch);
      if (iVar4 < 0) {
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        iVar10 = -iVar4;
        if (-iVar4 < 0) {
          iVar10 = iVar4;
        }
        iVar4 = iVar10 + -1;
      }
      provider = (System_IFormatProvider_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Format_HMSFormatter);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)provider,(MethodInfo *)0x0);
      pIVar5 = (Il2CppObject *)
               System_Collections_Generic_SortedList_object__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                         ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,
                          (MethodInfo_CA1320 *)
                          MethodInfo_System_Collections_Generic_SortedList_long_string_get_Keys);
      if (pIVar5 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar5->klass;
        uVar1 = (pIVar2->_2).interface_offsets_count;
        if (uVar1 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          uVar9 = 0;
          do {
            if (pIVar3[uVar9].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_Generic_IList_long)
            {
              pVVar6 = pIVar2->vtable + pIVar3[uVar9].offset;
              goto label_182339676;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar1);
        }
        pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_long,0);
label_182339676:
        key = (*pVVar6->methodPtr)(pIVar5,iVar4,pVVar6->method);
        pSVar7 = System_Collections_Generic_SortedList_long__object___get_Item
                           ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,key,
                            (MethodInfo_CA4660 *)
                            MethodInfo_System_Collections_Generic_SortedList_long_string_get_Item);
        args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
        if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
        }
        local_res18[0] = System_TimeSpan__get_Days((System_TimeSpan_o *)&local_res8,(MethodInfo *)0x0);
        pIVar5 = il2cpp_value_box(g_data_184354e08,local_res18);
        if (args != (System_Object_array *)0x0) {
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar8 = il2cpp_vm_Object_IsInst(pIVar5,(((args->obj).klass)->_1).element_class),
             pIVar8 == (Il2CppObject *)0x0)) {
            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = pIVar5;
            Il2CppCodeGenWriteBarrier(args->m_Items,pIVar5);
            local_res20[0] = System_TimeSpan__get_Hours((System_TimeSpan_o *)&local_res8,(MethodInfo *)0x0);
            pIVar5 = il2cpp_value_box(g_data_184354e08,local_res20);
            if ((pIVar5 != (Il2CppObject *)0x0) &&
               (pIVar8 = il2cpp_vm_Object_IsInst(pIVar5,(((args->obj).klass)->_1).element_class),
               pIVar8 == (Il2CppObject *)0x0)) {
              pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
            }
            if (1 < (uint)args->max_length) {
              args->m_Items[1] = pIVar5;
              Il2CppCodeGenWriteBarrier(args->m_Items + 1,pIVar5);
              local_28 = System_TimeSpan__get_Minutes((System_TimeSpan_o *)&local_res8,(MethodInfo *)0x0);
              pIVar5 = il2cpp_value_box(g_data_184354e08,&local_28);
              if ((pIVar5 != (Il2CppObject *)0x0) &&
                 (pIVar8 = il2cpp_vm_Object_IsInst(pIVar5,(((args->obj).klass)->_1).element_class),
                 pIVar8 == (Il2CppObject *)0x0)) {
                pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
              }
              if (2 < (uint)args->max_length) {
                args->m_Items[2] = pIVar5;
                Il2CppCodeGenWriteBarrier(args->m_Items + 2,pIVar5);
                local_24[0] = System_TimeSpan__get_Seconds((System_TimeSpan_o *)&local_res8,(MethodInfo *)0x0)
                ;
                pIVar5 = il2cpp_value_box(g_data_184354e08,local_24);
                if ((pIVar5 != (Il2CppObject *)0x0) &&
                   (pIVar8 = il2cpp_vm_Object_IsInst(pIVar5,(((args->obj).klass)->_1).element_class),
                   pIVar8 == (Il2CppObject *)0x0)) {
                  pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                }
                if (3 < (uint)args->max_length) {
                  args->m_Items[3] = pIVar5;
                  Il2CppCodeGenWriteBarrier(args->m_Items + 3,pIVar5);
                  pSVar7 = System_String__Format_196cba0(provider,pSVar7,args,(MethodInfo *)0x0);
                  return pSVar7;
                }
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Utility.Format$$.ctor
// il2cpp: void Utility_Format___ctor (Utility_Format_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_Format___ctor(Utility_Format_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


