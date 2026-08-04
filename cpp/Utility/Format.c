// Type: Utility.Format
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/Format.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Format.cs
// --------------------------------

// Utility.Format.HMSFormatter$$Format
// il2cpp: System_String_o* Utility_Format_HMSFormatter__Format (Utility_Format_HMSFormatter_o* __this, System_String_o* format, Il2CppObject* arg, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
// 0x4492940

System_String_o *
Utility_Format_HMSFormatter__Format
          (Utility_Format_HMSFormatter_o *__this,System_String_o *format,Il2CppObject *arg,
          System_IFormatProvider_o *formatProvider,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_String_o *pSVar1;
  System_String_o *extraout_RAX;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  
  if (g_data_057ae912 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HMSFormatter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PluralFormatter);
    g_data_057ae912 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_PluralFormatter);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_HMSFormatter + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              **(undefined8 **)(TypeInfo_HMSFormatter + 0xb8);
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar1 = (System_String_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_01,(Il2CppObject *)format,MethodInfo_String_get_Item);
    pSVar1 = System_String__Format_3af7a30((System_IFormatProvider_o *)__this_00,pSVar1,arg,(MethodInfo *)0x0)
    ;
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Utility.Format.HMSFormatter$$GetFormat
// il2cpp: Il2CppObject* Utility_Format_HMSFormatter__GetFormat (Utility_Format_HMSFormatter_o* __this, System_Type_o* formatType, const MethodInfo* method);
// 0x4492a10

Il2CppObject *
Utility_Format_HMSFormatter__GetFormat
          (Utility_Format_HMSFormatter_o *__this,System_Type_o *formatType,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *right;
  
  if (g_data_057ae913 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ICustomFormatter);
    g_data_057ae913 = '\x01';
  }
  handle.fields.value = TypeRef_ICustomFormatter.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  bVar1 = System_Type__op_Equality(formatType,right,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    __this = (Utility_Format_HMSFormatter_o *)(Il2CppObject *)0x0;
  }
  return (Il2CppObject *)__this;
}


// Utility.Format.HMSFormatter$$.ctor
// il2cpp: void Utility_Format_HMSFormatter___ctor (Utility_Format_HMSFormatter_o* __this, const MethodInfo* method);
// 0x4492920

void Utility_Format_HMSFormatter___ctor(Utility_Format_HMSFormatter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Format.HMSFormatter$$.cctor
// il2cpp: void Utility_Format_HMSFormatter___cctor (const MethodInfo* method);
// 0x4492a90

void Utility_Format_HMSFormatter___cctor(MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  uint uVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_array *pSVar4;
  System_String_o *a;
  System_String_o **ppSVar5;
  System_Type_o *right;
  Il2CppObject *arg0;
  MethodInfo_31041B0 *__this_00;
  MethodInfo_31041B0 *left;
  
  if (g_data_057ae914 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HMSFormatter);
    il2cpp_runtime_helper_023445d0(&"S");
    il2cpp_runtime_helper_023445d0(&"{0:P:hours:hour}");
    il2cpp_runtime_helper_023445d0(&"H");
    il2cpp_runtime_helper_023445d0(&"{0:P:seconds:second}");
    il2cpp_runtime_helper_023445d0(&"{0:P:minutes:minute}");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"{0:P:days:day}");
    il2cpp_runtime_helper_023445d0(&"M");
    g_data_057ae914 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  __this_00 = MethodInfo_Dictionary_2_System_String_System_String;
  System_Collections_Generic_Dictionary_object__object____ctor(__this,MethodInfo_Dictionary_2_System_String_System_String);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add(__this,"S","{0:P:seconds:second}",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_object__object___Add(__this,"M","{0:P:minutes:minute}",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_object__object___Add(__this,"H","{0:P:hours:hour}",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_object__object___Add(__this,"D","{0:P:days:day}",MethodInfo_Void_Add);
    **(undefined8 **)(TypeInfo_HMSFormatter + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_HMSFormatter + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  left = __this_00;
  if (g_data_057ae915 == '\0') {
    il2cpp_runtime_helper_023445d0(&"{0} {1}");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"P");
    g_data_057ae915 = '\x01';
  }
  if (arg0 == (Il2CppObject *)0x0) {
label_04492d0b:
    System_String__Format((System_String_o *)__this_00,arg0,(MethodInfo *)0x0);
    return;
  }
  if (__this_00 != (MethodInfo_31041B0 *)0x0) {
    left = (MethodInfo_31041B0 *)0x3a;
    pSVar4 = System_String__Split((System_String_o *)__this_00,0x3a,0,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_array *)0x0) {
      if ((int)pSVar4->max_length != 0) {
        bVar1 = System_String__op_Equality(pSVar4->m_Items[0],"P",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') goto label_04492d0b;
        a = (System_String_o *)(*arg0->klass->vtable[3].methodPtr)(arg0,arg0->klass->vtable[3].method);
        left = "1";
        uVar2 = System_String__op_Equality(a,(System_String_o *)"1",(MethodInfo *)0x0);
        uVar3 = (uVar2 & 0xff) + 1;
        uVar2 = (uint)pSVar4->max_length;
        if ((int)uVar3 < (int)uVar2) {
          if (uVar2 <= uVar3) goto label_04492d3b;
          ppSVar5 = pSVar4->m_Items + uVar3;
        }
        else {
          ppSVar5 = (System_String_o **)&"";
        }
        System_String__Format_3af78e0("{0} {1}",arg0,(Il2CppObject *)*ppSVar5,(MethodInfo *)0x0);
        return;
      }
      goto label_04492d3b;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04492d3b:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae916 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ICustomFormatter);
    g_data_057ae916 = '\x01';
  }
  handle.fields.value = TypeRef_ICustomFormatter.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  System_Type__op_Equality((System_Type_o *)left,right,(MethodInfo *)0x0);
  return;
}


// Utility.Format.PluralFormatter$$Format
// il2cpp: System_String_o* Utility_Format_PluralFormatter__Format (Utility_Format_PluralFormatter_o* __this, System_String_o* format, Il2CppObject* arg, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
// 0x4492c20

System_String_o *
Utility_Format_PluralFormatter__Format
          (Utility_Format_PluralFormatter_o *__this,System_String_o *format,Il2CppObject *arg,
          System_IFormatProvider_o *formatProvider,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  uint uVar2;
  uint uVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  System_Type_o *right;
  System_Type_o *left;
  System_String_o **ppSVar6;
  
  left = (System_Type_o *)format;
  if (g_data_057ae915 == '\0') {
    il2cpp_runtime_helper_023445d0(&"{0} {1}");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"1");
    ppSVar6 = &"P";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae915 = '\x01';
    __this = (Utility_Format_PluralFormatter_o *)ppSVar6;
  }
  if (arg == (Il2CppObject *)0x0) {
label_04492d0b:
    pSVar5 = System_String__Format(format,arg,(MethodInfo *)0x0);
    return pSVar5;
  }
  if (format != (System_String_o *)0x0) {
    left = (System_Type_o *)0x3a;
    __this = (Utility_Format_PluralFormatter_o *)format;
    pSVar4 = System_String__Split(format,0x3a,0,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_array *)0x0) {
      if ((int)pSVar4->max_length != 0) {
        bVar1 = System_String__op_Equality(pSVar4->m_Items[0],"P",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') goto label_04492d0b;
        pSVar5 = (System_String_o *)(*arg->klass->vtable[3].methodPtr)(arg,arg->klass->vtable[3].method);
        left = "1";
        uVar2 = System_String__op_Equality(pSVar5,(System_String_o *)"1",(MethodInfo *)0x0);
        uVar3 = (uVar2 & 0xff) + 1;
        uVar2 = (uint)pSVar4->max_length;
        if ((int)uVar3 < (int)uVar2) {
          __this = (Utility_Format_PluralFormatter_o *)"{0} {1}";
          if (uVar2 <= uVar3) goto label_04492d3b;
          ppSVar6 = pSVar4->m_Items + uVar3;
        }
        else {
          ppSVar6 = (System_String_o **)&"";
        }
        pSVar5 = System_String__Format_3af78e0("{0} {1}",arg,(Il2CppObject *)*ppSVar6,(MethodInfo *)0x0);
        return pSVar5;
      }
      goto label_04492d3b;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04492d3b:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae916 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ICustomFormatter);
    g_data_057ae916 = '\x01';
  }
  handle.fields.value = TypeRef_ICustomFormatter.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  bVar1 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    __this = (Utility_Format_PluralFormatter_o *)(System_String_o *)0x0;
  }
  return (System_String_o *)__this;
}


// Utility.Format.PluralFormatter$$GetFormat
// il2cpp: Il2CppObject* Utility_Format_PluralFormatter__GetFormat (Utility_Format_PluralFormatter_o* __this, System_Type_o* formatType, const MethodInfo* method);
// 0x4492d40

Il2CppObject *
Utility_Format_PluralFormatter__GetFormat
          (Utility_Format_PluralFormatter_o *__this,System_Type_o *formatType,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *right;
  
  if (g_data_057ae916 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ICustomFormatter);
    g_data_057ae916 = '\x01';
  }
  handle.fields.value = TypeRef_ICustomFormatter.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  bVar1 = System_Type__op_Equality(formatType,right,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    __this = (Utility_Format_PluralFormatter_o *)(Il2CppObject *)0x0;
  }
  return (Il2CppObject *)__this;
}


// Utility.Format.PluralFormatter$$.ctor
// il2cpp: void Utility_Format_PluralFormatter___ctor (Utility_Format_PluralFormatter_o* __this, const MethodInfo* method);
// 0x4492a00

void Utility_Format_PluralFormatter___ctor(Utility_Format_PluralFormatter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Format$$Suffix
// il2cpp: System_String_o* Utility_Format__Suffix (uint64_t num, const MethodInfo* method);
// 0x4492240

System_String_o * Utility_Format__Suffix(uint64_t num,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  undefined8 *puVar2;
  uint uVar3;
  MethodInfo *method_00;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  System_String_o local_38;
  double dStack_20;
  
  if (g_data_057ae910 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&"Qi");
    il2cpp_runtime_helper_023445d0(&"K");
    il2cpp_runtime_helper_023445d0(&"Qa");
    il2cpp_runtime_helper_023445d0(&"T");
    il2cpp_runtime_helper_023445d0(&"{0:G3}");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"R0");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"M");
    g_data_057ae910 = '\x01';
  }
  local_38.klass = (System_String_c *)0x0;
  method_00 = TypeInfo_Math;
  if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auVar6._8_4_ = (int)(num >> 0x20);
  auVar6._0_8_ = num;
  auVar6._12_4_ = 0x45300000;
  dStack_20 = auVar6._8_8_ - 1.9342813113834067e+25;
  local_38.fields =
       (System_String_Fields)(dStack_20 + ((double)CONCAT44(0x43300000,(int)num) - 4503599627370496.0));
  dVar4 = log10((double)local_38.fields,method_00);
  dVar5 = System_Math__Pow(1000.0,(double)((int)dVar4 / 3),(MethodInfo *)0x0);
  local_38.monitor = (void *)((double)local_38.fields / dVar5);
  arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf0,&local_38.monitor);
  pSVar1 = System_String__Format("{0:G3}",arg0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_38.klass = (System_String_c *)System_Convert__ToDouble_3c1f9e0(pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Double__ToString_3c99df0((double)local_38.klass,&local_38,"R0");
  uVar3 = (int)dVar4 / 3 - 1;
  if (uVar3 < 6) {
    puVar2 = (undefined8 *)(&g_data_0524f3d8)[(int)uVar3];
  }
  else {
    puVar2 = &"";
  }
  pSVar1 = System_String__Concat_3ae5ba0(pSVar1,(System_String_o *)*puVar2,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Format$$GetReadableTimespan
// il2cpp: System_String_o* Utility_Format__GetReadableTimespan (System_TimeSpan_o ts, const MethodInfo* method);
// 0x4492410

System_String_o * Utility_Format__GetReadableTimespan(System_TimeSpan_o ts,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IList_TKey__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  uint uVar4;
  System_Collections_Generic_SortedList_TKey__TValue__o *__this;
  System_Collections_Generic_IList_TKey__o *pSVar5;
  System_Collections_Generic_List_TSource__o *__this_00;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  int64_t key;
  System_String_o *pSVar8;
  System_Object_array *args;
  Il2CppObject *pIVar9;
  System_String_o *extraout_RAX;
  long lVar10;
  double dVar11;
  System_TimeSpan_Fields local_48;
  int32_t local_40;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  
  local_48 = ts.fields._ticks;
  if (g_data_057ae911 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int64_ToList_Int64);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HMSFormatter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IList_long);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_BinarySearch);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SortedList_2_System_Int64_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IList_1_System_Int64_get_Keys);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SortedList_long_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    il2cpp_runtime_helper_023445d0(&"{2:M}, {3:S}");
    il2cpp_runtime_helper_023445d0(&"{3:S}");
    il2cpp_runtime_helper_023445d0(&"{0:D}, {1:H}");
    il2cpp_runtime_helper_023445d0(&"{1:H}");
    il2cpp_runtime_helper_023445d0(&"{0:D}");
    il2cpp_runtime_helper_023445d0(&"{2:M}");
    il2cpp_runtime_helper_023445d0(&"{1:H}, {2:M}");
    g_data_057ae911 = '\x01';
  }
  __this = (System_Collections_Generic_SortedList_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SortedList_long_string);
  System_Collections_Generic_SortedList_long__object____ctor(__this,MethodInfo_SortedList_2_System_Int64_System_String);
  if (__this == (System_Collections_Generic_SortedList_TKey__TValue__o *)0x0) {
label_04492904:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    System_Collections_Generic_SortedList_long__object___Add(__this,0x3b,"{3:S}",MethodInfo_Void_Add);
    System_Collections_Generic_SortedList_long__object___Add(__this,0x3c,"{2:M}",MethodInfo_Void_Add);
    System_Collections_Generic_SortedList_long__object___Add(__this,0xe0f,"{2:M}, {3:S}",MethodInfo_Void_Add);
    System_Collections_Generic_SortedList_long__object___Add(__this,0xe10,"{1:H}",MethodInfo_Void_Add);
    System_Collections_Generic_SortedList_long__object___Add(__this,0x1517f,"{1:H}, {2:M}",MethodInfo_Void_Add);
    System_Collections_Generic_SortedList_long__object___Add(__this,0x15180,"{0:D}",MethodInfo_Void_Add);
    System_Collections_Generic_SortedList_long__object___Add
              (__this,0x7fffffffffffffff,"{0:D}, {1:H}",MethodInfo_Void_Add);
    pSVar5 = System_Collections_Generic_SortedList_long__object___get_Keys(__this,MethodInfo_IList_1_System_Int64_get_Keys);
    __this_00 = System_Linq_Enumerable__ToList_long_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,MethodInfo_List_1_System_Int64_ToList_Int64);
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    dVar11 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_04492904;
    uVar4 = System_Collections_Generic_List_long___BinarySearch_3604340
                      ((System_Collections_Generic_List_long__o *)__this_00,(long)dVar11,MethodInfo_Int32_BinarySearch);
    if ((int)uVar4 < 0) {
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar4 = ~uVar4;
    }
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_HMSFormatter);
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    pSVar5 = System_Collections_Generic_SortedList_long__object___get_Keys(__this,MethodInfo_IList_1_System_Int64_get_Keys);
    if (pSVar5 == (System_Collections_Generic_IList_TKey__o *)0x0) goto label_04492904;
    pSVar2 = pSVar5->klass;
    uVar1._0_1_ = (pSVar2->_2).rank;
    uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IList_long) {
          pVVar7 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
          goto label_04492731;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar10);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IList_long,0);
label_04492731:
    key = (*pVVar7->methodPtr)(pSVar5,(ulong)uVar4,pVVar7->method);
    pSVar8 = (System_String_o *)
             System_Collections_Generic_SortedList_long__object___get_Item(__this,key,MethodInfo_String_get_Item);
    args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    local_34 = System_TimeSpan__get_Days((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if (args == (System_Object_array *)0x0) goto label_04492904;
    if (pIVar9 != (Il2CppObject *)0x0) {
      lVar10 = il2cpp_runtime_helper_023051f0(pIVar9);
      if (lVar10 == 0) goto label_0449290e;
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(args->m_Items);
      local_38 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if (pIVar9 != (Il2CppObject *)0x0) {
        lVar10 = il2cpp_runtime_helper_023051f0(pIVar9);
        if (lVar10 == 0) goto label_0449290e;
      }
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar9;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        local_3c = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
        pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if (pIVar9 != (Il2CppObject *)0x0) {
          lVar10 = il2cpp_runtime_helper_023051f0(pIVar9);
          if (lVar10 == 0) goto label_0449290e;
        }
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = pIVar9;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          local_40 = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
          pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
          if (pIVar9 != (Il2CppObject *)0x0) {
            lVar10 = il2cpp_runtime_helper_023051f0(pIVar9);
            if (lVar10 == 0) goto label_0449290e;
          }
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = pIVar9;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,pIVar9);
            pSVar8 = System_String__Format_3af7b40
                               ((System_IFormatProvider_o *)pIVar6,pSVar8,args,(MethodInfo *)0x0);
            return pSVar8;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0449290e:
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Utility.Format$$.ctor
// il2cpp: void Utility_Format___ctor (Utility_Format_o* __this, const MethodInfo* method);
// 0x4492930

void Utility_Format___ctor(Utility_Format_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


