// Type: ApplicationManagers.ApplicationEncoder
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationEncoder.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.ApplicationEncoder$$Encode
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode (System_String_o* str, const MethodInfo* method);
// 0x5e1eb90

System_String_o * ApplicationManagers_ApplicationEncoder__Encode(System_String_o *str,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548494 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&"F5P*");
    il2cpp_codegen_initialize_runtime_metadata(&"jB8a$raC");
    Il2CppMethodInitialized_07548494 = '\x01';
  }
  if (str != (System_String_o *)0x0) {
    iVar1 = (str->fields)._stringLength;
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    pSVar2 = System_Convert__ToString_5426120((int32_t)(0x1c4 % (long)iVar1),(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_5301f10(str,"jB8a$raC",pSVar2,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__Substring(pSVar2,5,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_52f0320(pSVar2,"F5P*",(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.ApplicationEncoder$$GetTempBuffer
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationEncoder__GetTempBuffer (const MethodInfo* method);
// 0x5e0a630

System_Net_NetworkCredential_o * ApplicationManagers_ApplicationEncoder__GetTempBuffer(MethodInfo *method)

{
  System_String_o *password;
  System_Net_NetworkCredential_o *__this;
  MethodInfo *in_RSI;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548495 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Net_NetworkCredential);
    il2cpp_codegen_initialize_runtime_metadata(&"E^R%4#PXY89*76^snR11.15.2026");
    il2cpp_codegen_initialize_runtime_metadata(&"GGY^hd1bJuD4g@11.15.2026");
    Il2CppMethodInitialized_07548495 = '\x01';
  }
  password = ApplicationManagers_ApplicationEncoder__Encode("GGY^hd1bJuD4g@11.15.2026",in_RSI);
  pSVar1 = "E^R%4#PXY89*76^snR11.15.2026";
  if (password == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((password->fields)._stringLength < 0x3e9) {
    if (Il2CppMethodInitialized_07548496 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Net_NetworkCredential);
      il2cpp_codegen_initialize_runtime_metadata(&"REa9CMK4mN34Ec#86xN%!psve%J14C1S");
      Il2CppMethodInitialized_07548496 = '\x01';
    }
    password = ApplicationManagers_ApplicationEncoder__Encode1(pSVar1,in_RSI);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
    pSVar1 = "REa9CMK4mN34Ec#86xN%!psve%J14C1S";
  }
  else {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
    pSVar1 = password;
  }
  System_Net_NetworkCredential___ctor_62a6c00(__this,pSVar1,password,(MethodInfo *)0x0);
  return __this;
}


// ApplicationManagers.ApplicationEncoder$$Encode1a
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationEncoder__Encode1a (System_String_o* str, const MethodInfo* method);
// 0x5e0a7e0

System_Net_NetworkCredential_o *
ApplicationManagers_ApplicationEncoder__Encode1a(System_String_o *str,MethodInfo *method)

{
  System_String_o *password;
  System_Net_NetworkCredential_o *__this;
  
  if (Il2CppMethodInitialized_07548496 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Net_NetworkCredential);
    il2cpp_codegen_initialize_runtime_metadata(&"REa9CMK4mN34Ec#86xN%!psve%J14C1S");
    Il2CppMethodInitialized_07548496 = '\x01';
  }
  password = ApplicationManagers_ApplicationEncoder__Encode1(str,method);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
  System_Net_NetworkCredential___ctor_62a6c00(__this,"REa9CMK4mN34Ec#86xN%!psve%J14C1S",password,(MethodInfo *)0x0);
  return __this;
}


// ApplicationManagers.ApplicationEncoder$$Encode1
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode1 (System_String_o* str, const MethodInfo* method);
// 0x5e1ec50

System_String_o * ApplicationManagers_ApplicationEncoder__Encode1(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *pMVar2;
  
  if (Il2CppMethodInitialized_07548497 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gqP9$");
    il2cpp_codegen_initialize_runtime_metadata(&"jP3p#");
    il2cpp_codegen_initialize_runtime_metadata(&"u8A5ACZhC^!6");
    Il2CppMethodInitialized_07548497 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(str,"jP3p#",(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320(pSVar1,"gqP9$",(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("u8A5ACZhC^!6",pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar2 = (MethodInfo *)0x0;
  pSVar1 = System_String__Substring_53042f0(pSVar1,0,(pSVar1->fields)._stringLength + -1,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07548498 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sru3%");
    Il2CppMethodInitialized_07548498 = '\x01';
  }
  pSVar1 = ApplicationManagers_ApplicationEncoder__Compress3(pSVar1,pMVar2);
  pMVar2 = (MethodInfo *)"Sru3%";
  pSVar1 = System_String__Concat_52f0320(pSVar1,"Sru3%",(MethodInfo *)0x0);
  pSVar1 = ApplicationManagers_ApplicationEncoder__Encode3(pSVar1,pMVar2);
  return pSVar1;
}


// ApplicationManagers.ApplicationEncoder$$Encode2
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode2 (System_String_o* str, const MethodInfo* method);
// 0x5e1ed30

System_String_o * ApplicationManagers_ApplicationEncoder__Encode2(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548498 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sru3%");
    Il2CppMethodInitialized_07548498 = '\x01';
  }
  pSVar1 = ApplicationManagers_ApplicationEncoder__Compress3(str,method);
  method_00 = (MethodInfo *)"Sru3%";
  pSVar1 = System_String__Concat_52f0320(pSVar1,"Sru3%",(MethodInfo *)0x0);
  pSVar1 = ApplicationManagers_ApplicationEncoder__Encode3(pSVar1,method_00);
  return pSVar1;
}


// ApplicationManagers.ApplicationEncoder$$Encode3
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode3 (System_String_o* str, const MethodInfo* method);
// 0x5e1eee0

System_String_o * ApplicationManagers_ApplicationEncoder__Encode3(System_String_o *str,MethodInfo *method)

{
  int iVar1;
  System_String_o *str1;
  System_String_o *str0;
  uint index;
  uint16_t local_2a;
  
  if (Il2CppMethodInitialized_07548499 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548499 = '\x01';
  }
  local_2a = 0;
  if (str == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (str->fields)._stringLength;
  str0 = "";
  if (0 < iVar1) {
    index = 0;
    do {
      if ((index & 1) == 0) {
        local_2a = System_String__get_Chars(str,index,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        str1 = System_Char__ToString(&local_2a,(MethodInfo *)0x0);
        str0 = System_String__Concat_52f0320(str0,str1,(MethodInfo *)0x0);
        iVar1 = (str->fields)._stringLength;
      }
      index = index + 1;
    } while ((int)index < iVar1);
  }
  return str0;
}


// ApplicationManagers.ApplicationEncoder$$Compress
// il2cpp: System_Byte_array* ApplicationManagers_ApplicationEncoder__Compress (System_String_o* text, const MethodInfo* method);
// 0x5e1efb0

System_Byte_array * ApplicationManagers_ApplicationEncoder__Compress(System_String_o *text,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Text_Encoding_o *pSVar3;
  
  if (Il2CppMethodInitialized_0754849a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    Il2CppMethodInitialized_0754849a = '\x01';
  }
  bVar1 = System_String__op_Equality
                    (text,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0);
    return pSVar2;
  }
  pSVar3 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar3 == (System_Text_Encoding_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pSVar3->klass->vtable)._18_GetBytes.methodPtr)
                     (pSVar3,text,(pSVar3->klass->vtable)._18_GetBytes.method);
  return pSVar2;
}


// ApplicationManagers.ApplicationEncoder$$Compress3
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Compress3 (System_String_o* text, const MethodInfo* method);
// 0x5e1ed80

System_String_o * ApplicationManagers_ApplicationEncoder__Compress3(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t value;
  System_String_o *pSVar3;
  System_Byte_array *inArray;
  System_Text_Encoding_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754849b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0754849b = '\x01';
  }
  bVar2 = System_String__op_Equality
                    (text,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (text == (System_String_o *)0x0) {
label_05e1eed5:
    ThrowNullReferenceException();
  }
  iVar1 = (text->fields)._stringLength;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  value = System_Math__Min_54baeb0(iVar1 / 2,0xf,(MethodInfo *)0x0);
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  pSVar3 = System_Convert__ToString_5426120(value,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_52f0320(text,pSVar3,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0754849a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    Il2CppMethodInitialized_0754849a = '\x01';
  }
  bVar2 = System_String__op_Equality
                    (pSVar3,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    inArray = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0);
  }
  else {
    pSVar4 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar4 == (System_Text_Encoding_o *)0x0) goto label_05e1eed5;
    inArray = (*(pSVar4->klass->vtable)._18_GetBytes.methodPtr)
                        (pSVar4,pSVar3,(pSVar4->klass->vtable)._18_GetBytes.method);
  }
  pSVar3 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
  return pSVar3;
}


// ApplicationManagers.ApplicationEncoder$$.ctor
// il2cpp: void ApplicationManagers_ApplicationEncoder___ctor (ApplicationManagers_ApplicationEncoder_o* __this, const MethodInfo* method);
// 0x5e1f040

void ApplicationManagers_ApplicationEncoder___ctor
               (ApplicationManagers_ApplicationEncoder_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


