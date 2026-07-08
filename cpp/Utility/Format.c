// Type: Utility.Format
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/Format.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/Format.cs  [CHANGED since prior version]
// --------------------------------

// Utility.Format.HMSFormatter$$Format
// il2cpp: System_String_o* Utility_Format_HMSFormatter__Format (Utility_Format_HMSFormatter_o* __this, System_String_o* format, Il2CppObject* arg, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
// 0x417a960

System_String_o *
Utility_Format_HMSFormatter__Format
          (Utility_Format_HMSFormatter_o *__this,System_String_o *format,Il2CppObject *arg,
          System_IFormatProvider_o *formatProvider,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_String_o *pSVar1;
  
  if (DAT_05704b46 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_HMSFormatter);
    il2cpp_init_method_metadata(&TypeInfo_PluralFormatter);
    DAT_05704b46 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_PluralFormatter);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_HMSFormatter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_HMSFormatter + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar1 = (System_String_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)
                        **(undefined8 **)(TypeInfo_HMSFormatter + 0xb8),(Il2CppObject *)format,MethodInfo_String_get_Item);
    pSVar1 = System_String__Format
                       ((System_IFormatProvider_o *)__this_00,pSVar1,arg,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Format.HMSFormatter$$GetFormat
// il2cpp: Il2CppObject* Utility_Format_HMSFormatter__GetFormat (Utility_Format_HMSFormatter_o* __this, System_Type_o* formatType, const MethodInfo* method);
// 0x417aa30

Il2CppObject *
Utility_Format_HMSFormatter__GetFormat
          (Utility_Format_HMSFormatter_o *__this,System_Type_o *formatType,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *right;
  
  if (DAT_05704b47 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_ICustomFormatter);
    DAT_05704b47 = '\x01';
  }
  handle.fields.value = TypeRef_ICustomFormatter.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
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
// 0x417a940

void Utility_Format_HMSFormatter___ctor(Utility_Format_HMSFormatter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Format.HMSFormatter$$.cctor
// il2cpp: void Utility_Format_HMSFormatter___cctor (const MethodInfo* method);
// 0x417aab0

void Utility_Format_HMSFormatter___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_05704b48 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_HMSFormatter);
    il2cpp_init_method_metadata(&"S");
    il2cpp_init_method_metadata(&"{0:P:hours:hour}");
    il2cpp_init_method_metadata(&"H");
    il2cpp_init_method_metadata(&"{0:P:seconds:second}");
    il2cpp_init_method_metadata(&"{0:P:minutes:minute}");
    il2cpp_init_method_metadata(&"D");
    il2cpp_init_method_metadata(&"{0:P:days:day}");
    il2cpp_init_method_metadata(&"M");
    DAT_05704b48 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_String);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"S","{0:P:seconds:second}",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"M","{0:P:minutes:minute}",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"H","{0:P:hours:hour}",MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,"D","{0:P:days:day}",MethodInfo_Void_Add);
    **(undefined8 **)(TypeInfo_HMSFormatter + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_HMSFormatter + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Format.PluralFormatter$$Format
// il2cpp: System_String_o* Utility_Format_PluralFormatter__Format (Utility_Format_PluralFormatter_o* __this, System_String_o* format, Il2CppObject* arg, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
// 0x417ac40

System_String_o *
Utility_Format_PluralFormatter__Format
          (Utility_Format_PluralFormatter_o *__this,System_String_o *format,Il2CppObject *arg,
          System_IFormatProvider_o *formatProvider,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  uint uVar3;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o **ppSVar6;
  
  if (DAT_05704b49 == '\0') {
    il2cpp_init_method_metadata(&"{0} {1}");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"1");
    il2cpp_init_method_metadata(&"P");
    DAT_05704b49 = '\x01';
  }
  if (arg == (Il2CppObject *)0x0) {
LAB_0417ad2b:
    pSVar5 = System_String__Format(format,arg,(MethodInfo *)0x0);
    return pSVar5;
  }
  if (format != (System_String_o *)0x0) {
    pSVar4 = System_String__Split(format,0x3a,0,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_array *)0x0) {
      if ((int)pSVar4->max_length != 0) {
        bVar1 = System_String__op_Equality(pSVar4->m_Items[0],"P",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') goto LAB_0417ad2b;
        pSVar5 = (System_String_o *)
                 (*arg->klass->vtable[3].methodPtr)(arg,arg->klass->vtable[3].method);
        uVar2 = System_String__op_Equality(pSVar5,"1",(MethodInfo *)0x0);
        uVar3 = (uVar2 & 0xff) + 1;
        uVar2 = (uint)pSVar4->max_length;
        if ((int)uVar3 < (int)uVar2) {
          if (uVar2 <= uVar3) goto LAB_0417ad5b;
          ppSVar6 = pSVar4->m_Items + uVar3;
        }
        else {
          ppSVar6 = (System_String_o **)&"";
        }
        pSVar5 = System_String__Format("{0} {1}",arg,(Il2CppObject *)*ppSVar6,(MethodInfo *)0x0);
        return pSVar5;
      }
LAB_0417ad5b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Format.PluralFormatter$$GetFormat
// il2cpp: Il2CppObject* Utility_Format_PluralFormatter__GetFormat (Utility_Format_PluralFormatter_o* __this, System_Type_o* formatType, const MethodInfo* method);
// 0x417ad60

Il2CppObject *
Utility_Format_PluralFormatter__GetFormat
          (Utility_Format_PluralFormatter_o *__this,System_Type_o *formatType,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_o *right;
  
  if (DAT_05704b4a == '\0') {
    il2cpp_init_method_metadata(&TypeRef_ICustomFormatter);
    DAT_05704b4a = '\x01';
  }
  handle.fields.value = TypeRef_ICustomFormatter.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
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
// 0x417aa20

void Utility_Format_PluralFormatter___ctor
               (Utility_Format_PluralFormatter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Format$$Suffix
// il2cpp: System_String_o* Utility_Format__Suffix (uint64_t num, const MethodInfo* method);
// 0x417a260

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
  
  if (DAT_05704b44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&"Qi");
    il2cpp_init_method_metadata(&"K");
    il2cpp_init_method_metadata(&"Qa");
    il2cpp_init_method_metadata(&"T");
    il2cpp_init_method_metadata(&"{0:G3}");
    il2cpp_init_method_metadata(&"B");
    il2cpp_init_method_metadata(&"R0");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"M");
    DAT_05704b44 = '\x01';
  }
  local_38.klass = (System_String_c *)0x0;
  method_00 = TypeInfo_Math;
  if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  auVar6._8_4_ = (int)(num >> 0x20);
  auVar6._0_8_ = num;
  auVar6._12_4_ = 0x45300000;
  dStack_20 = auVar6._8_8_ - 1.9342813113834067e+25;
  local_38.fields =
       (System_String_Fields)
       (dStack_20 + ((double)CONCAT44(0x43300000,(int)num) - 4503599627370496.0));
  dVar4 = log10((double)local_38.fields,method_00);
  dVar5 = System_Math__Pow(1000.0,(double)((int)dVar4 / 3),(MethodInfo *)0x0);
  local_38.monitor = (void *)((double)local_38.fields / dVar5);
  arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a0,&local_38.monitor);
  pSVar1 = System_String__Format("{0:G3}",arg0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_38.klass = (System_String_c *)System_Convert__ToDouble(pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_Double__ToString((double)local_38.klass,&local_38,"R0");
  uVar3 = (int)dVar4 / 3 - 1;
  if (uVar3 < 6) {
    puVar2 = (undefined8 *)(&PTR_DAT_051af8f8)[(int)uVar3];
  }
  else {
    puVar2 = &"";
  }
  pSVar1 = System_String__Concat(pSVar1,(System_String_o *)*puVar2,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Format$$GetReadableTimespan
// il2cpp: System_String_o* Utility_Format__GetReadableTimespan (System_TimeSpan_o ts, const MethodInfo* method);
// 0x417a430

System_String_o * Utility_Format__GetReadableTimespan(System_TimeSpan_o ts,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IList_TKey__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  uint uVar4;
  System_Collections_Generic_SortedList_TKey__TValue__o *__this;
  System_Collections_Generic_IList_TKey__o *pSVar5;
  System_Collections_Generic_List_TSource__o *__this_00;
  Il2CppObject *__this_01;
  VirtualInvokeData *pVVar6;
  int64_t key;
  System_String_o *pSVar7;
  System_Object_array *args;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  System_TimeSpan_Fields local_48;
  int32_t local_40;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  
  local_48 = ts.fields._ticks;
  if (DAT_05704b45 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int64__ToList_Int64);
    il2cpp_init_method_metadata(&TypeInfo_HMSFormatter);
    il2cpp_init_method_metadata(&TypeInfo_IList_long);
    il2cpp_init_method_metadata(&MethodInfo_Int32_BinarySearch);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_SortedList_2_System_Int64_System_String);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_IList_1_System_Int64__get_Keys);
    il2cpp_init_method_metadata(&TypeInfo_SortedList_long__string);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    il2cpp_init_method_metadata(&"{2:M}, {3:S}");
    il2cpp_init_method_metadata(&"{3:S}");
    il2cpp_init_method_metadata(&"{0:D}, {1:H}");
    il2cpp_init_method_metadata(&"{1:H}");
    il2cpp_init_method_metadata(&"{0:D}");
    il2cpp_init_method_metadata(&"{2:M}");
    il2cpp_init_method_metadata(&"{1:H}, {2:M}");
    DAT_05704b45 = '\x01';
  }
  __this = (System_Collections_Generic_SortedList_TKey__TValue__o *)il2cpp_runtime_glue(TypeInfo_SortedList_long__string)
  ;
  System_Collections_Generic_SortedList<long__object>___ctor(__this,MethodInfo_SortedList_2_System_Int64_System_String);
  if (__this == (System_Collections_Generic_SortedList_TKey__TValue__o *)0x0) {
LAB_0417a924:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_SortedList<long__object>__Add(__this,0x3b,"{3:S}",MethodInfo_Void_Add);
  System_Collections_Generic_SortedList<long__object>__Add(__this,0x3c,"{2:M}",MethodInfo_Void_Add);
  System_Collections_Generic_SortedList<long__object>__Add(__this,0xe0f,"{2:M}, {3:S}",MethodInfo_Void_Add);
  System_Collections_Generic_SortedList<long__object>__Add(__this,0xe10,"{1:H}",MethodInfo_Void_Add);
  System_Collections_Generic_SortedList<long__object>__Add(__this,0x1517f,"{1:H}, {2:M}",MethodInfo_Void_Add)
  ;
  System_Collections_Generic_SortedList<long__object>__Add(__this,0x15180,"{0:D}",MethodInfo_Void_Add)
  ;
  System_Collections_Generic_SortedList<long__object>__Add
            (__this,0x7fffffffffffffff,"{0:D}, {1:H}",MethodInfo_Void_Add);
  pSVar5 = System_Collections_Generic_SortedList<long__object>__get_Keys(__this,MethodInfo_IList_1_System_Int64__get_Keys);
  __this_00 = System_Linq_Enumerable__ToList<long>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,MethodInfo_List_1_System_Int64__ToList_Int64);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_init_class();
  }
  dVar11 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
  if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_0417a924;
  uVar4 = System_Collections_Generic_List<long>__BinarySearch
                    ((System_Collections_Generic_List_long__o *)__this_00,(long)dVar11,MethodInfo_Int32_BinarySearch)
  ;
  if ((int)uVar4 < 0) {
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar4 = ~uVar4;
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_HMSFormatter);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  pSVar5 = System_Collections_Generic_SortedList<long__object>__get_Keys(__this,MethodInfo_IList_1_System_Int64__get_Keys);
  if (pSVar5 == (System_Collections_Generic_IList_TKey__o *)0x0) goto LAB_0417a924;
  pSVar2 = pSVar5->klass;
  uVar1._0_1_ = (pSVar2->_2).rank;
  uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IList_long) {
        pVVar6 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
        goto LAB_0417a751;
      }
      lVar10 = lVar10 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar10);
  }
  pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar5,TypeInfo_IList_long,0);
LAB_0417a751:
  key = (*pVVar6->methodPtr)(pSVar5,(ulong)uVar4,pVVar6->method);
  pSVar7 = (System_String_o *)
           System_Collections_Generic_SortedList<long__object>__get_Item(__this,key,MethodInfo_String_get_Item);
  args = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object);
  if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_34 = System_TimeSpan__get_Days((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
  pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
  if (args == (System_Object_array *)0x0) goto LAB_0417a924;
  if (pIVar8 != (Il2CppObject *)0x0) {
    lVar10 = il2cpp_runtime_glue(pIVar8,(((args->obj).klass)->_1).element_class);
    if (lVar10 == 0) goto LAB_0417a92e;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar8;
    il2cpp_runtime_glue(args->m_Items);
    local_38 = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
    if (pIVar8 != (Il2CppObject *)0x0) {
      lVar10 = il2cpp_runtime_glue(pIVar8,(((args->obj).klass)->_1).element_class);
      if (lVar10 == 0) goto LAB_0417a92e;
    }
    if ((uint)args->max_length < 2) goto LAB_0417a929;
    args->m_Items[1] = pIVar8;
    il2cpp_runtime_glue(args->m_Items + 1);
    local_3c = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_3c);
    if (pIVar8 != (Il2CppObject *)0x0) {
      lVar10 = il2cpp_runtime_glue(pIVar8,(((args->obj).klass)->_1).element_class);
      if (lVar10 == 0) goto LAB_0417a92e;
    }
    if (2 < (uint)args->max_length) {
      args->m_Items[2] = pIVar8;
      il2cpp_runtime_glue(args->m_Items + 2);
      local_40 = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
      pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_40);
      if (pIVar8 != (Il2CppObject *)0x0) {
        lVar10 = il2cpp_runtime_glue(pIVar8,(((args->obj).klass)->_1).element_class);
        if (lVar10 == 0) {
LAB_0417a92e:
          uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar9,0);
        }
      }
      if (3 < (uint)args->max_length) {
        args->m_Items[3] = pIVar8;
        il2cpp_runtime_glue(args->m_Items + 3,pIVar8);
        pSVar7 = System_String__Format
                           ((System_IFormatProvider_o *)__this_01,pSVar7,args,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
  }
LAB_0417a929:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Format$$.ctor
// il2cpp: void Utility_Format___ctor (Utility_Format_o* __this, const MethodInfo* method);
// 0x417a950

void Utility_Format___ctor(Utility_Format_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


