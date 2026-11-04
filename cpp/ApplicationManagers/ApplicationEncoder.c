// Type: ApplicationManagers.ApplicationEncoder
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationEncoder.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.ApplicationEncoder$$Encode
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode (System_String_o* str, const MethodInfo* method);
// 0x182368bd0

System_String_o * ApplicationManagers_ApplicationEncoder__Encode(System_String_o *str,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843479e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&"F5P*");
    il2cpp_codegen_initialize_runtime_metadata(&"jB8a$raC");
    Il2CppMethodInitialized_1843479e5 = '\x01';
  }
  if (str != (System_String_o *)0x0) {
    iVar1 = (str->fields)._stringLength;
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    pSVar2 = System_Convert__ToString_1a84aa0((int32_t)(0x1c4 % (longlong)iVar1),(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969b70(str,"jB8a$raC",pSVar2,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__Substring(pSVar2,5,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969e50(pSVar2,"F5P*",(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationEncoder$$GetTempBuffer
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationEncoder__GetTempBuffer (const MethodInfo* method);
// 0x182368c90

System_Net_NetworkCredential_o * ApplicationManagers_ApplicationEncoder__GetTempBuffer(MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Net_NetworkCredential_o *pSVar4;
  
  if (Il2CppMethodInitialized_1843479e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Net_NetworkCredential);
    il2cpp_codegen_initialize_runtime_metadata(&"E^R%4#PXY89*76^snR10.31.2026");
    il2cpp_codegen_initialize_runtime_metadata(&"GGY^hd1bJuD4g@10.31.2026");
    Il2CppMethodInitialized_1843479e6 = '\x01';
  }
  pSVar3 = "GGY^hd1bJuD4g@10.31.2026";
  if (Il2CppMethodInitialized_1843479e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&"F5P*");
    il2cpp_codegen_initialize_runtime_metadata(&"jB8a$raC");
    Il2CppMethodInitialized_1843479e5 = '\x01';
  }
  if (pSVar3 != (System_String_o *)0x0) {
    iVar1 = (pSVar3->fields)._stringLength;
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    pSVar2 = System_Convert__ToString_1a84aa0((int32_t)(0x1c4 % (longlong)iVar1),(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969b70(pSVar3,"jB8a$raC",pSVar2,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__Substring(pSVar3,5,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969e50(pSVar3,"F5P*",(MethodInfo *)0x0);
      pSVar3 = "E^R%4#PXY89*76^snR10.31.2026";
      if (pSVar2 != (System_String_o *)0x0) {
        if (1000 < (pSVar2->fields)._stringLength) {
          pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
          System_Net_NetworkCredential___ctor_27d0800(pSVar4,pSVar2,pSVar2,(MethodInfo *)0x0);
          return pSVar4;
        }
        if (Il2CppMethodInitialized_1843479e7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Net_NetworkCredential);
          il2cpp_codegen_initialize_runtime_metadata(&"REa9CMK4mN34Ec#86xN%!psve%J14C1S");
          Il2CppMethodInitialized_1843479e7 = '\x01';
        }
        if (Il2CppMethodInitialized_1843479e8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"gqP9$");
          il2cpp_codegen_initialize_runtime_metadata(&"jP3p#");
          il2cpp_codegen_initialize_runtime_metadata(&"u8A5ACZhC^!6");
          Il2CppMethodInitialized_1843479e8 = '\x01';
        }
        pSVar3 = System_String__Concat_1969e50(pSVar3,"jP3p#",(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969e50(pSVar3,"gqP9$",(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_1969e50("u8A5ACZhC^!6",pSVar3,(MethodInfo *)0x0);
        if (pSVar3 != (System_String_o *)0x0) {
          pSVar3 = System_String__Substring_1972740
                             (pSVar3,0,(pSVar3->fields)._stringLength + -1,(MethodInfo *)0x0);
          pSVar3 = ApplicationManagers_ApplicationEncoder__Encode2(pSVar3,(MethodInfo *)0x0);
          pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
          System_Net_NetworkCredential___ctor_27d0800(pSVar4,"REa9CMK4mN34Ec#86xN%!psve%J14C1S",pSVar3,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationEncoder$$Encode1a
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationEncoder__Encode1a (System_String_o* str, const MethodInfo* method);
// 0x1823687e0

System_Net_NetworkCredential_o *
ApplicationManagers_ApplicationEncoder__Encode1a(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Net_NetworkCredential_o *__this;
  
  if (Il2CppMethodInitialized_1843479e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Net_NetworkCredential);
    il2cpp_codegen_initialize_runtime_metadata(&"REa9CMK4mN34Ec#86xN%!psve%J14C1S");
    Il2CppMethodInitialized_1843479e7 = '\x01';
  }
  if (Il2CppMethodInitialized_1843479e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gqP9$");
    il2cpp_codegen_initialize_runtime_metadata(&"jP3p#");
    il2cpp_codegen_initialize_runtime_metadata(&"u8A5ACZhC^!6");
    Il2CppMethodInitialized_1843479e8 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(str,"jP3p#",(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50(pSVar1,"gqP9$",(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("u8A5ACZhC^!6",pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__Substring_1972740(pSVar1,0,(pSVar1->fields)._stringLength + -1,(MethodInfo *)0x0);
    pSVar1 = ApplicationManagers_ApplicationEncoder__Encode2(pSVar1,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
    System_Net_NetworkCredential___ctor_27d0800(__this,"REa9CMK4mN34Ec#86xN%!psve%J14C1S",pSVar1,(MethodInfo *)0x0);
    return __this;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationEncoder$$Encode1
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode1 (System_String_o* str, const MethodInfo* method);
// 0x182368730

System_String_o * ApplicationManagers_ApplicationEncoder__Encode1(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843479e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gqP9$");
    il2cpp_codegen_initialize_runtime_metadata(&"jP3p#");
    il2cpp_codegen_initialize_runtime_metadata(&"u8A5ACZhC^!6");
    Il2CppMethodInitialized_1843479e8 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(str,"jP3p#",(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50(pSVar1,"gqP9$",(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("u8A5ACZhC^!6",pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__Substring_1972740(pSVar1,0,(pSVar1->fields)._stringLength + -1,(MethodInfo *)0x0);
    pSVar1 = ApplicationManagers_ApplicationEncoder__Encode2(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationEncoder$$Encode2
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode2 (System_String_o* str, const MethodInfo* method);
// 0x1823688e0

System_String_o * ApplicationManagers_ApplicationEncoder__Encode2(System_String_o *str,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t value;
  System_String_o *pSVar3;
  System_Text_Encoding_o *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *str1;
  System_String_o *str0;
  uint index;
  MethodInfo *method_00;
  uint16_t local_res8 [4];
  
  if (Il2CppMethodInitialized_1843479e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sru3%");
    Il2CppMethodInitialized_1843479e9 = '\x01';
  }
  if (Il2CppMethodInitialized_1843479ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_1843479ec = '\x01';
  }
  bVar2 = System_String__op_Equality
                    (str,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    if (str == (System_String_o *)0x0) {
label_182368b12:
      ThrowNullReferenceException();
    }
    iVar1 = (str->fields)._stringLength;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    value = System_Math__Min_1b2c2d0(iVar1 / 2,0xf,(MethodInfo *)0x0);
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    pSVar3 = System_Convert__ToString_1a84aa0(value,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50(str,pSVar3,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_1843479eb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
      Il2CppMethodInitialized_1843479eb = '\x01';
    }
    bVar2 = System_String__op_Equality
                      (pSVar3,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar2) {
      pSVar5 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0);
      pSVar3 = System_Convert__ToBase64String(pSVar5,(MethodInfo *)0x0);
    }
    else {
      pSVar4 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if (pSVar4 == (System_Text_Encoding_o *)0x0) goto label_182368b12;
      pSVar5 = (*(pSVar4->klass->vtable)._18_GetBytes.methodPtr)
                         (pSVar4,pSVar3,(pSVar4->klass->vtable)._18_GetBytes.method);
      pSVar3 = System_Convert__ToBase64String(pSVar5,(MethodInfo *)0x0);
    }
  }
  pSVar3 = System_String__Concat_1969e50(pSVar3,"Sru3%",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_1843479ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843479ea = '\x01';
  }
  index = 0;
  local_res8[0] = 0;
  str0 = "";
  if (pSVar3 != (System_String_o *)0x0) {
    for (; (int)index < (pSVar3->fields)._stringLength; index = index + 1) {
      if ((index & 1) == 0) {
        method_00 = (MethodInfo *)0x0;
        local_res8[0] = System_String__get_Chars(pSVar3,index,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        str1 = System_Char__ToString(local_res8,(System_IFormatProvider_o *)0x0,method_00);
        str0 = System_String__Concat_1969e50(str0,str1,(MethodInfo *)0x0);
      }
    }
    return str0;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationEncoder$$Encode3
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode3 (System_String_o* str, const MethodInfo* method);
// 0x182368b20

System_String_o * ApplicationManagers_ApplicationEncoder__Encode3(System_String_o *str,MethodInfo *method)

{
  System_String_o *str1;
  System_String_o *str0;
  uint index;
  MethodInfo *method_00;
  uint16_t local_res8 [4];
  
  if (Il2CppMethodInitialized_1843479ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843479ea = '\x01';
  }
  index = 0;
  local_res8[0] = 0;
  str0 = "";
  if (str != (System_String_o *)0x0) {
    for (; (int)index < (str->fields)._stringLength; index = index + 1) {
      if ((index & 1) == 0) {
        method_00 = (MethodInfo *)0x0;
        local_res8[0] = System_String__get_Chars(str,index,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        str1 = System_Char__ToString(local_res8,(System_IFormatProvider_o *)0x0,method_00);
        str0 = System_String__Concat_1969e50(str0,str1,(MethodInfo *)0x0);
      }
    }
    return str0;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationEncoder$$Compress
// il2cpp: System_Byte_array* ApplicationManagers_ApplicationEncoder__Compress (System_String_o* text, const MethodInfo* method);
// 0x1823686a0

System_Byte_array * ApplicationManagers_ApplicationEncoder__Compress(System_String_o *text,MethodInfo *method)

{
  bool bVar1;
  System_Text_Encoding_o *pSVar2;
  System_Byte_array *pSVar3;
  
  if (Il2CppMethodInitialized_1843479eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    Il2CppMethodInitialized_1843479eb = '\x01';
  }
  bVar1 = System_String__op_Equality
                    (text,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar2 != (System_Text_Encoding_o *)0x0) {
      pSVar3 = (*(pSVar2->klass->vtable)._18_GetBytes.methodPtr)
                         (pSVar2,text,(pSVar2->klass->vtable)._18_GetBytes.method);
      return pSVar3;
    }
    ThrowNullReferenceException();
  }
  pSVar3 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0);
  return pSVar3;
}


// ApplicationManagers.ApplicationEncoder$$Compress3
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Compress3 (System_String_o* text, const MethodInfo* method);
// 0x182368530

System_String_o * ApplicationManagers_ApplicationEncoder__Compress3(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t value;
  System_String_o *pSVar3;
  System_Text_Encoding_o *pSVar4;
  System_Byte_array *pSVar5;
  
  if (Il2CppMethodInitialized_1843479ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_1843479ec = '\x01';
  }
  bVar2 = System_String__op_Equality
                    (text,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (text != (System_String_o *)0x0) {
    iVar1 = (text->fields)._stringLength;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    value = System_Math__Min_1b2c2d0(iVar1 / 2,0xf,(MethodInfo *)0x0);
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    pSVar3 = System_Convert__ToString_1a84aa0(value,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50(text,pSVar3,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_1843479eb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
      Il2CppMethodInitialized_1843479eb = '\x01';
    }
    bVar2 = System_String__op_Equality
                      (pSVar3,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar2) {
      pSVar5 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0);
      pSVar3 = System_Convert__ToBase64String(pSVar5,(MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar4 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar4 != (System_Text_Encoding_o *)0x0) {
      pSVar5 = (*(pSVar4->klass->vtable)._18_GetBytes.methodPtr)
                         (pSVar4,pSVar3,(pSVar4->klass->vtable)._18_GetBytes.method);
      pSVar3 = System_Convert__ToBase64String(pSVar5,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationEncoder$$.ctor
// il2cpp: void ApplicationManagers_ApplicationEncoder___ctor (ApplicationManagers_ApplicationEncoder_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_ApplicationEncoder___ctor(ApplicationManagers_ApplicationEncoder_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


