// Type: Utility.Format
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/Format.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Format.cs
// --------------------------------

// Utility.Format.HMSFormatter$$Format
// il2cpp: System_String_o* Utility_Format_HMSFormatter__Format (Utility_Format_HMSFormatter_o* __this, System_String_o* format, Il2CppObject* arg, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
// 0x5def030

System_String_o *
Utility_Format_HMSFormatter__Format
          (Utility_Format_HMSFormatter_o *__this,System_String_o *format,Il2CppObject *arg,
          System_IFormatProvider_o *formatProvider,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *__this_01;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075482e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Format_HMSFormatter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Format_PluralFormatter);
    Il2CppMethodInitialized_075482e2 = '\x01';
  }
  __this_01 = (Il2CppObject *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Format_PluralFormatter);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_Format_HMSFormatter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Format_HMSFormatter);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Utility_Format_HMSFormatter->static_fields->timeformats;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (__this_00,(Il2CppObject *)format,
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
  pSVar1 = System_String__Format_5302da0((System_IFormatProvider_o *)__this_01,pSVar1,arg,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Format.HMSFormatter$$GetFormat
// il2cpp: Il2CppObject* Utility_Format_HMSFormatter__GetFormat (Utility_Format_HMSFormatter_o* __this, System_Type_o* formatType, const MethodInfo* method);
// 0x5def100

Il2CppObject *
Utility_Format_HMSFormatter__GetFormat
          (Utility_Format_HMSFormatter_o *__this,System_Type_o *formatType,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *right;
  
  if (Il2CppMethodInitialized_075482e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_System_ICustomFormatter);
    Il2CppMethodInitialized_075482e3 = '\x01';
  }
  handle = TypeRef_System_ICustomFormatter;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  bVar1 = System_Type__op_Equality(formatType,right,(MethodInfo *)0x0);
  if (!bVar1) {
    __this = (Utility_Format_HMSFormatter_o *)0x0;
  }
  return (Il2CppObject *)__this;
}


// Utility.Format.HMSFormatter$$.ctor
// il2cpp: void Utility_Format_HMSFormatter___ctor (Utility_Format_HMSFormatter_o* __this, const MethodInfo* method);
// 0x5def010

void Utility_Format_HMSFormatter___ctor(Utility_Format_HMSFormatter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Format.HMSFormatter$$.cctor
// il2cpp: void Utility_Format_HMSFormatter___cctor (const MethodInfo* method);
// 0x5def180

void Utility_Format_HMSFormatter___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this;
  
  if (Il2CppMethodInitialized_075482e4 == '\0') {
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
    Il2CppMethodInitialized_075482e4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  if (__this == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (Il2CppObject *)"S",(Il2CppObject *)"{0:P:seconds:second}",
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (Il2CppObject *)"M",(Il2CppObject *)"{0:P:minutes:minute}",
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (Il2CppObject *)"H",(Il2CppObject *)"{0:P:hours:hour}",
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (Il2CppObject *)"D",(Il2CppObject *)"{0:P:days:day}",
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
  TypeInfo_Utility_Format_HMSFormatter->static_fields->timeformats = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_Format_HMSFormatter->static_fields->timeformats);
  return;
}


// Utility.Format.PluralFormatter$$Format
// il2cpp: System_String_o* Utility_Format_PluralFormatter__Format (Utility_Format_PluralFormatter_o* __this, System_String_o* format, Il2CppObject* arg, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
// 0x5def310

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
  System_String_o **ppSVar6;
  
  if (Il2CppMethodInitialized_075482e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"{0} {1}");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    il2cpp_codegen_initialize_runtime_metadata(&"P");
    Il2CppMethodInitialized_075482e5 = '\x01';
  }
  if (arg == (Il2CppObject *)0x0) {
label_05def3ec:
    pSVar5 = System_String__Format(format,arg,(MethodInfo *)0x0);
    return pSVar5;
  }
  if (format != (System_String_o *)0x0) {
    pSVar4 = System_String__Split(format,0x3a,0,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_array *)0x0) {
      if ((int)pSVar4->max_length == 0) {
label_05def426:
        ThrowIndexOutOfRangeException();
      }
      bVar2 = System_String__op_Equality(pSVar4->m_Items[0],"P",(MethodInfo *)0x0);
      if (!bVar2) goto label_05def3ec;
      pSVar5 = (System_String_o *)(*arg->klass->vtable[3].methodPtr)(arg,arg->klass->vtable[3].method);
      bVar2 = System_String__op_Equality(pSVar5,"1",(MethodInfo *)0x0);
      uVar3 = bVar2 + 1;
      uVar1 = (uint)pSVar4->max_length;
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 <= uVar3) goto label_05def426;
        ppSVar6 = pSVar4->m_Items + uVar3;
      }
      else {
        ppSVar6 = &"";
      }
      pSVar5 = System_String__Format_5302c50
                         ("{0} {1}",arg,(Il2CppObject *)*ppSVar6,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// Utility.Format.PluralFormatter$$GetFormat
// il2cpp: Il2CppObject* Utility_Format_PluralFormatter__GetFormat (Utility_Format_PluralFormatter_o* __this, System_Type_o* formatType, const MethodInfo* method);
// 0x5def430

Il2CppObject *
Utility_Format_PluralFormatter__GetFormat
          (Utility_Format_PluralFormatter_o *__this,System_Type_o *formatType,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *right;
  
  if (Il2CppMethodInitialized_075482e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_System_ICustomFormatter);
    Il2CppMethodInitialized_075482e6 = '\x01';
  }
  handle = TypeRef_System_ICustomFormatter;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  bVar1 = System_Type__op_Equality(formatType,right,(MethodInfo *)0x0);
  if (!bVar1) {
    __this = (Utility_Format_PluralFormatter_o *)0x0;
  }
  return (Il2CppObject *)__this;
}


// Utility.Format.PluralFormatter$$.ctor
// il2cpp: void Utility_Format_PluralFormatter___ctor (Utility_Format_PluralFormatter_o* __this, const MethodInfo* method);
// 0x5def0f0

void Utility_Format_PluralFormatter___ctor(Utility_Format_PluralFormatter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Format$$Suffix
// il2cpp: System_String_o* Utility_Format__Suffix (uint64_t num, const MethodInfo* method);
// 0x5dee8d0

System_String_o * Utility_Format__Suffix(uint64_t num,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  System_Math_c *method_00;
  double dVar3;
  undefined1 auVar4 [16];
  double local_38;
  double local_30;
  double local_28;
  double dStack_20;
  
  if (Il2CppMethodInitialized_075482e0 == '\0') {
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
    Il2CppMethodInitialized_075482e0 = '\x01';
  }
  if (num == 0) {
    return "0";
  }
  method_00 = TypeInfo_System_Math;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  auVar4._8_4_ = (int)(num >> 0x20);
  auVar4._0_8_ = num;
  auVar4._12_4_ = 0x45300000;
  dStack_20 = auVar4._8_8_ - 1.9342813113834067e+25;
  local_28 = dStack_20 + ((double)CONCAT44(0x43300000,(int)num) - 4503599627370496.0);
  dVar3 = log10(local_28,(MethodInfo *)method_00);
  local_38 = System_Math__Pow(1000.0,(double)((int)dVar3 / 3),(MethodInfo *)0x0);
  local_38 = local_28 / local_38;
  arg0 = il2cpp_vm_Object_Box(g_data_07556748,&local_38);
  pSVar1 = System_String__Format("{0:G3}",arg0,(MethodInfo *)0x0);
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  local_30 = System_Convert__ToDouble_54256a0(pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Double__ToString_549dad0(&local_30,"R0",(MethodInfo *)0x0);
  switch((int)dVar3 / 3) {
  case 1:
    ppSVar2 = &"K";
    break;
  case 2:
    ppSVar2 = &"M";
    break;
  case 3:
    ppSVar2 = &"B";
    break;
  case 4:
    ppSVar2 = &"T";
    break;
  case 5:
    ppSVar2 = &"Qa";
    break;
  case 6:
    ppSVar2 = &"Qi";
    break;
  default:
    ppSVar2 = &"";
  }
  pSVar1 = System_String__Concat_52f0320(pSVar1,*ppSVar2,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Format$$GetReadableTimespan
// il2cpp: System_String_o* Utility_Format__GetReadableTimespan (System_TimeSpan_o ts, const MethodInfo* method);
// 0x5deeaf0

System_String_o * Utility_Format__GetReadableTimespan(System_TimeSpan_o ts,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  uint uVar3;
  System_Collections_Generic_SortedList_long__string__o *__this;
  System_Collections_Generic_IList_TKey__o *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  int64_t key;
  System_String_o *pSVar7;
  System_Object_array *args;
  Il2CppObject *pIVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  System_TimeSpan_o local_48;
  int32_t local_40;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  
  local_48 = (System_TimeSpan_o)(System_TimeSpan_o)ts.fields._ticks;
  if (Il2CppMethodInitialized_075482e1 == '\0') {
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
    Il2CppMethodInitialized_075482e1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_SortedList_long_string);
  System_Collections_Generic_SortedList_long__object____ctor
            ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,
             (MethodInfo_40614F0 *)MethodInfo_System_Collections_Generic_SortedList_long_string_ctor);
  if (__this == (System_Collections_Generic_SortedList_long__string__o *)0x0) {
label_05deefea:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_SortedList_long__object___Add
            ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0x3b,
             (Il2CppObject *)"{3:S}",
             (MethodInfo_4061830 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
  System_Collections_Generic_SortedList_long__object___Add
            ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0x3c,
             (Il2CppObject *)"{2:M}",
             (MethodInfo_4061830 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
  System_Collections_Generic_SortedList_long__object___Add
            ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0xe0f,
             (Il2CppObject *)"{2:M}, {3:S}",
             (MethodInfo_4061830 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
  System_Collections_Generic_SortedList_long__object___Add
            ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0xe10,
             (Il2CppObject *)"{1:H}",
             (MethodInfo_4061830 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
  System_Collections_Generic_SortedList_long__object___Add
            ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0x1517f,
             (Il2CppObject *)"{1:H}, {2:M}",
             (MethodInfo_4061830 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
  System_Collections_Generic_SortedList_long__object___Add
            ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0x15180,
             (Il2CppObject *)"{0:D}",
             (MethodInfo_4061830 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
  System_Collections_Generic_SortedList_long__object___Add
            ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,0x7fffffffffffffff,
             (Il2CppObject *)"{0:D}, {1:H}",
             (MethodInfo_4061830 *)MethodInfo_System_Collections_Generic_SortedList_long_string_Add);
  source = System_Collections_Generic_SortedList_long__object___get_Keys
                     ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,
                      (MethodInfo_4062040 *)
                      MethodInfo_System_Collections_Generic_SortedList_long_string_get_Keys);
  __this_00 = System_Linq_Enumerable__ToList_long_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (MethodInfo_3500EB0 *)MethodInfo_System_Linq_Enumerable_ToList_long);
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  dVar11 = System_TimeSpan__get_TotalSeconds(&local_48,(MethodInfo *)0x0);
  if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_05deefea;
  uVar3 = System_Collections_Generic_List_long___BinarySearch_391d070
                    ((System_Collections_Generic_List_long__o *)__this_00,(long)dVar11,
                     (MethodInfo_391D070 *)MethodInfo_System_Collections_Generic_List_long_BinarySearch);
  if ((int)uVar3 < 0) {
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar3 = ~uVar3;
  }
  pIVar4 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Format_HMSFormatter);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  pIVar5 = (Il2CppObject *)
           System_Collections_Generic_SortedList_long__object___get_Keys
                     ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,
                      (MethodInfo_4062040 *)
                      MethodInfo_System_Collections_Generic_SortedList_long_string_get_Keys);
  if (pIVar5 == (Il2CppObject *)0x0) goto label_05deefea;
  pIVar1 = pIVar5->klass;
  uVar9 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar9 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(System_Collections_Generic_IList_long__c **)((long)&pIVar2->interfaceType + lVar10) ==
          TypeInfo_System_Collections_Generic_IList_long) {
        pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
        goto label_05deee11;
      }
      lVar10 = lVar10 + 0x10;
    } while (uVar9 * 0x10 != lVar10);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_long,0);
label_05deee11:
  key = (*pVVar6->methodPtr)(pIVar5,uVar3,pVVar6->method);
  pSVar7 = System_Collections_Generic_SortedList_long__object___get_Item
                     ((System_Collections_Generic_SortedList_TKey__TValue__o *)__this,key,
                      (MethodInfo_40633C0 *)
                      MethodInfo_System_Collections_Generic_SortedList_long_string_get_Item);
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
  if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
  }
  local_34 = System_TimeSpan__get_Days(&local_48,(MethodInfo *)0x0);
  pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
  if (args == (System_Object_array *)0x0) goto label_05deefea;
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar8 = il2cpp_vm_Object_IsInst(pIVar5,(((args->obj).klass)->_1).element_class);
    if (pIVar8 == (Il2CppObject *)0x0) goto label_05deeff4;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar5;
    Il2CppCodeGenWriteBarrier(args->m_Items);
    local_38 = System_TimeSpan__get_Hours(&local_48,(MethodInfo *)0x0);
    pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
    if (pIVar5 != (Il2CppObject *)0x0) {
      pIVar8 = il2cpp_vm_Object_IsInst(pIVar5,(((args->obj).klass)->_1).element_class);
      if (pIVar8 == (Il2CppObject *)0x0) goto label_05deeff4;
    }
    if ((args->max_length & 0xfffffffe) == 0) goto label_05deefef;
    args->m_Items[1] = pIVar5;
    Il2CppCodeGenWriteBarrier(args->m_Items + 1);
    local_3c = System_TimeSpan__get_Minutes(&local_48,(MethodInfo *)0x0);
    pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_3c);
    if (pIVar5 != (Il2CppObject *)0x0) {
      pIVar8 = il2cpp_vm_Object_IsInst(pIVar5,(((args->obj).klass)->_1).element_class);
      if (pIVar8 == (Il2CppObject *)0x0) goto label_05deeff4;
    }
    if (2 < (uint)args->max_length) {
      args->m_Items[2] = pIVar5;
      Il2CppCodeGenWriteBarrier(args->m_Items + 2);
      local_40 = System_TimeSpan__get_Seconds(&local_48,(MethodInfo *)0x0);
      pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_40);
      if (pIVar5 != (Il2CppObject *)0x0) {
        pIVar8 = il2cpp_vm_Object_IsInst(pIVar5,(((args->obj).klass)->_1).element_class);
        if (pIVar8 == (Il2CppObject *)0x0) {
label_05deeff4:
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
      }
      if ((args->max_length & 0xfffffffc) != 0) {
        args->m_Items[3] = pIVar5;
        Il2CppCodeGenWriteBarrier(args->m_Items + 3);
        pSVar7 = System_String__Format_5302eb0
                           ((System_IFormatProvider_o *)pIVar4,pSVar7,args,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
  }
label_05deefef:
  ThrowIndexOutOfRangeException();
}


// Utility.Format$$.ctor
// il2cpp: void Utility_Format___ctor (Utility_Format_o* __this, const MethodInfo* method);
// 0x5def020

void Utility_Format___ctor(Utility_Format_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


