// Type: ApplicationManagers.ApplicationEncoder
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationEncoder.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.ApplicationEncoder$$Encode
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode (System_String_o* str, const MethodInfo* method);
// 0x44c1c00

System_String_o * ApplicationManagers_ApplicationEncoder__Encode(System_String_o *str,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *userName;
  System_Net_NetworkCredential_o *pSVar3;
  System_String_o *str_00;
  
  if (g_data_057aeaa5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&"F5P*");
    il2cpp_runtime_helper_023445d0(&"jB8a$raC");
    g_data_057aeaa5 = '\x01';
  }
  if (str != (System_String_o *)0x0) {
    iVar1 = (str->fields)._stringLength;
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = System_Convert__ToString_3c20400((int32_t)(0x1c4 % (long)iVar1),(MethodInfo *)0x0);
    method = "jB8a$raC";
    pSVar2 = System_String__Concat_3af7150(str,(System_String_o *)"jB8a$raC",pSVar2,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__Substring(pSVar2,5,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_3ae5ba0(pSVar2,"F5P*",(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeaa6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NetworkCredential);
    il2cpp_runtime_helper_023445d0(&"GGY^hd1bJuD4g@");
    il2cpp_runtime_helper_023445d0(&"E^R%4#PXY89*76^snR");
    g_data_057aeaa6 = '\x01';
  }
  str_00 = "GGY^hd1bJuD4g@";
  userName = ApplicationManagers_ApplicationEncoder__Encode("GGY^hd1bJuD4g@",method);
  pSVar2 = "E^R%4#PXY89*76^snR";
  if (userName != (System_String_o *)0x0) {
    if ((userName->fields)._stringLength < 0x3e9) {
      if (g_data_057aeaa7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NetworkCredential);
        il2cpp_runtime_helper_023445d0(&"REa9CMK4mN34Ec#86xN%!psve%J14C1S");
        g_data_057aeaa7 = '\x01';
      }
      pSVar2 = ApplicationManagers_ApplicationEncoder__Encode1(pSVar2,method);
      pSVar3 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
      System_Net_NetworkCredential___ctor(pSVar3,"REa9CMK4mN34Ec#86xN%!psve%J14C1S",pSVar2,(MethodInfo *)0x0);
      return (System_String_o *)pSVar3;
    }
    pSVar3 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
    System_Net_NetworkCredential___ctor(pSVar3,userName,userName,(MethodInfo *)0x0);
    return (System_String_o *)pSVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeaa7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NetworkCredential);
    il2cpp_runtime_helper_023445d0(&"REa9CMK4mN34Ec#86xN%!psve%J14C1S");
    g_data_057aeaa7 = '\x01';
  }
  pSVar2 = ApplicationManagers_ApplicationEncoder__Encode1(str_00,method);
  pSVar3 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
  System_Net_NetworkCredential___ctor(pSVar3,"REa9CMK4mN34Ec#86xN%!psve%J14C1S",pSVar2,(MethodInfo *)0x0);
  return (System_String_o *)pSVar3;
}


// ApplicationManagers.ApplicationEncoder$$GetTempBuffer
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationEncoder__GetTempBuffer (const MethodInfo* method);
// 0x44c1cc0

System_Net_NetworkCredential_o * ApplicationManagers_ApplicationEncoder__GetTempBuffer(MethodInfo *method)

{
  System_String_o *userName;
  System_String_o *pSVar1;
  System_Net_NetworkCredential_o *pSVar2;
  MethodInfo *in_RSI;
  System_String_o *str;
  
  if (g_data_057aeaa6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NetworkCredential);
    il2cpp_runtime_helper_023445d0(&"GGY^hd1bJuD4g@");
    il2cpp_runtime_helper_023445d0(&"E^R%4#PXY89*76^snR");
    g_data_057aeaa6 = '\x01';
  }
  str = "GGY^hd1bJuD4g@";
  userName = ApplicationManagers_ApplicationEncoder__Encode("GGY^hd1bJuD4g@",in_RSI);
  pSVar1 = "E^R%4#PXY89*76^snR";
  if (userName != (System_String_o *)0x0) {
    if ((userName->fields)._stringLength < 0x3e9) {
      if (g_data_057aeaa7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_NetworkCredential);
        il2cpp_runtime_helper_023445d0(&"REa9CMK4mN34Ec#86xN%!psve%J14C1S");
        g_data_057aeaa7 = '\x01';
      }
      pSVar1 = ApplicationManagers_ApplicationEncoder__Encode1(pSVar1,in_RSI);
      pSVar2 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
      System_Net_NetworkCredential___ctor(pSVar2,"REa9CMK4mN34Ec#86xN%!psve%J14C1S",pSVar1,(MethodInfo *)0x0);
      return pSVar2;
    }
    pSVar2 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
    System_Net_NetworkCredential___ctor(pSVar2,userName,userName,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeaa7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NetworkCredential);
    il2cpp_runtime_helper_023445d0(&"REa9CMK4mN34Ec#86xN%!psve%J14C1S");
    g_data_057aeaa7 = '\x01';
  }
  pSVar1 = ApplicationManagers_ApplicationEncoder__Encode1(str,in_RSI);
  pSVar2 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
  System_Net_NetworkCredential___ctor(pSVar2,"REa9CMK4mN34Ec#86xN%!psve%J14C1S",pSVar1,(MethodInfo *)0x0);
  return pSVar2;
}


// ApplicationManagers.ApplicationEncoder$$Encode1a
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationEncoder__Encode1a (System_String_o* str, const MethodInfo* method);
// 0x44c1dc0

System_Net_NetworkCredential_o *
ApplicationManagers_ApplicationEncoder__Encode1a(System_String_o *str,MethodInfo *method)

{
  System_String_o *password;
  System_Net_NetworkCredential_o *__this;
  
  if (g_data_057aeaa7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_NetworkCredential);
    il2cpp_runtime_helper_023445d0(&"REa9CMK4mN34Ec#86xN%!psve%J14C1S");
    g_data_057aeaa7 = '\x01';
  }
  password = ApplicationManagers_ApplicationEncoder__Encode1(str,method);
  __this = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
  System_Net_NetworkCredential___ctor(__this,"REa9CMK4mN34Ec#86xN%!psve%J14C1S",password,(MethodInfo *)0x0);
  return __this;
}


// ApplicationManagers.ApplicationEncoder$$Encode1
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode1 (System_String_o* str, const MethodInfo* method);
// 0x44c1e30

System_String_o * ApplicationManagers_ApplicationEncoder__Encode1(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *pMVar2;
  System_String_o *__this;
  
  if (g_data_057aeaa8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"gqP9$");
    il2cpp_runtime_helper_023445d0(&"jP3p#");
    il2cpp_runtime_helper_023445d0(&"u8A5ACZhC^!6");
    g_data_057aeaa8 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(str,"jP3p#",(MethodInfo *)0x0);
  pMVar2 = (MethodInfo *)System_String__Concat_3ae5ba0(pSVar1,"gqP9$",(MethodInfo *)0x0);
  pSVar1 = "u8A5ACZhC^!6";
  __this = System_String__Concat_3ae5ba0("u8A5ACZhC^!6",(System_String_o *)pMVar2,(MethodInfo *)0x0);
  if (__this != (System_String_o *)0x0) {
    pMVar2 = (MethodInfo *)0x0;
    pSVar1 = System_String__Substring_3af8da0(__this,0,(__this->fields)._stringLength + -1,(MethodInfo *)0x0);
    if (g_data_057aeaa9 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Sru3%");
      g_data_057aeaa9 = '\x01';
    }
    pSVar1 = ApplicationManagers_ApplicationEncoder__Compress3(pSVar1,pMVar2);
    pMVar2 = "Sru3%";
    pSVar1 = System_String__Concat_3ae5ba0(pSVar1,(System_String_o *)"Sru3%",(MethodInfo *)0x0);
    pSVar1 = ApplicationManagers_ApplicationEncoder__Encode3(pSVar1,pMVar2);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeaa9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Sru3%");
    g_data_057aeaa9 = '\x01';
  }
  pSVar1 = ApplicationManagers_ApplicationEncoder__Compress3(pSVar1,pMVar2);
  pMVar2 = "Sru3%";
  pSVar1 = System_String__Concat_3ae5ba0(pSVar1,(System_String_o *)"Sru3%",(MethodInfo *)0x0);
  pSVar1 = ApplicationManagers_ApplicationEncoder__Encode3(pSVar1,pMVar2);
  return pSVar1;
}


// ApplicationManagers.ApplicationEncoder$$Encode2
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode2 (System_String_o* str, const MethodInfo* method);
// 0x44c1f10

System_String_o * ApplicationManagers_ApplicationEncoder__Encode2(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if (g_data_057aeaa9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Sru3%");
    g_data_057aeaa9 = '\x01';
  }
  pSVar1 = ApplicationManagers_ApplicationEncoder__Compress3(str,method);
  method_00 = "Sru3%";
  pSVar1 = System_String__Concat_3ae5ba0(pSVar1,(System_String_o *)"Sru3%",(MethodInfo *)0x0);
  pSVar1 = ApplicationManagers_ApplicationEncoder__Encode3(pSVar1,method_00);
  return pSVar1;
}


// ApplicationManagers.ApplicationEncoder$$Encode3
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode3 (System_String_o* str, const MethodInfo* method);
// 0x44c20c0

System_String_o * ApplicationManagers_ApplicationEncoder__Encode3(System_String_o *str,MethodInfo *method)

{
  System_Text_Encoding_c *pSVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  System_Text_Encoding_o *pSVar4;
  System_String_o *extraout_RAX;
  uint index;
  System_String_o **a;
  Il2CppObject *__this;
  uint16_t local_2a;
  
  a = (System_String_o **)str;
  if (g_data_057aeaaa == '\0') {
    a = &"";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeaaa = '\x01';
  }
  local_2a = 0;
  if (str != (System_String_o *)0x0) {
    if ((str->fields)._stringLength < 1) {
      return "";
    }
    index = 0;
    pSVar3 = "";
    do {
      local_2a = System_String__get_Chars(str,index,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      str1 = System_Char__ToString((uint16_t)&local_2a,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_3ae5ba0(pSVar3,str1,(MethodInfo *)0x0);
      do {
        index = index + 1;
        if ((str->fields)._stringLength <= (int)index) {
          return pSVar3;
        }
      } while ((index & 1) != 0);
    } while( true );
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeaab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    g_data_057aeaab = '\x01';
  }
  bVar2 = System_String__op_Equality
                    ((System_String_o *)a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,0);
    return pSVar3;
  }
  __this = (Il2CppObject *)0x0;
  pSVar4 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar4 != (System_Text_Encoding_o *)0x0) {
    pSVar1 = pSVar4->klass;
    vtableDispatch = (pSVar1->vtable)._18_GetBytes.methodPtr;
    pSVar3 = (System_String_o *)
             (*vtableDispatch)
                       (pSVar4,a,(pSVar1->vtable)._18_GetBytes.method,pSVar1,vtableDispatch);
    return pSVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.ApplicationEncoder$$Compress
// il2cpp: System_Byte_array* ApplicationManagers_ApplicationEncoder__Compress (System_String_o* text, const MethodInfo* method);
// 0x44c21a0

System_Byte_array * ApplicationManagers_ApplicationEncoder__Compress(System_String_o *text,MethodInfo *method)

{
  System_Text_Encoding_c *pSVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  System_Byte_array *pSVar3;
  System_Text_Encoding_o *pSVar4;
  System_Byte_array *extraout_RAX;
  Il2CppObject *__this;
  
  if (g_data_057aeaab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    g_data_057aeaab = '\x01';
  }
  bVar2 = System_String__op_Equality
                    (text,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar3 = (System_Byte_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,0);
    return pSVar3;
  }
  __this = (Il2CppObject *)0x0;
  pSVar4 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar4 != (System_Text_Encoding_o *)0x0) {
    pSVar1 = pSVar4->klass;
    vtableDispatch = (pSVar1->vtable)._18_GetBytes.methodPtr;
    pSVar3 = (System_Byte_array *)
             (*vtableDispatch)
                       (pSVar4,text,(pSVar1->vtable)._18_GetBytes.method,pSVar1,vtableDispatch);
    return pSVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.ApplicationEncoder$$Compress3
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Compress3 (System_String_o* text, const MethodInfo* method);
// 0x44c1f60

System_String_o * ApplicationManagers_ApplicationEncoder__Compress3(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  System_Text_Encoding_c *pSVar2;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar3;
  int32_t value;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Byte_array *inArray;
  System_Text_Encoding_o *pSVar6;
  System_String_o *str1;
  System_String_o *extraout_RAX;
  uint index;
  System_String_o **a;
  Il2CppObject *__this;
  uint16_t uStack_42;
  System_String_o *pSStack_40;
  
  if (g_data_057aeaac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057aeaac = '\x01';
  }
  pSVar4 = text;
  bVar3 = System_String__op_Equality
                    (text,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar5 = (System_String_o *)0x0;
  if (text != (System_String_o *)0x0) {
    iVar1 = (text->fields)._stringLength;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = System_Math__Min_3cb7d70(iVar1 / 2,0xf,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = System_Convert__ToString_3c20400(value,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_3ae5ba0(text,pSVar4,(MethodInfo *)0x0);
    if (g_data_057aeaab == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
      g_data_057aeaab = '\x01';
    }
    bVar3 = System_String__op_Equality
                      (pSVar5,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pSVar4 = (System_String_o *)0x0;
      pSVar6 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if (pSVar6 == (System_Text_Encoding_o *)0x0) goto label_044c20b5;
      inArray = (System_Byte_array *)
                (*(pSVar6->klass->vtable)._18_GetBytes.methodPtr)
                          (pSVar6,pSVar5,(pSVar6->klass->vtable)._18_GetBytes.method);
    }
    else {
      inArray = (System_Byte_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
    }
    pSVar4 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
    return pSVar4;
  }
label_044c20b5:
  il2cpp_runtime_helper_022b2c90();
  a = (System_String_o **)pSVar4;
  pSStack_40 = pSVar5;
  if (g_data_057aeaaa == '\0') {
    a = &"";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeaaa = '\x01';
  }
  uStack_42 = 0;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength < 1) {
      return "";
    }
    index = 0;
    pSVar5 = "";
    do {
      uStack_42 = System_String__get_Chars(pSVar4,index,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      str1 = System_Char__ToString((uint16_t)&uStack_42,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_3ae5ba0(pSVar5,str1,(MethodInfo *)0x0);
      do {
        index = index + 1;
        if ((pSVar4->fields)._stringLength <= (int)index) {
          return pSVar5;
        }
      } while ((index & 1) != 0);
    } while( true );
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeaab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    g_data_057aeaab = '\x01';
  }
  bVar3 = System_String__op_Equality
                    ((System_String_o *)a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,0);
    return pSVar4;
  }
  __this = (Il2CppObject *)0x0;
  pSVar6 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar6 != (System_Text_Encoding_o *)0x0) {
    pSVar2 = pSVar6->klass;
    vtableDispatch = (pSVar2->vtable)._18_GetBytes.methodPtr;
    pSVar4 = (System_String_o *)
             (*vtableDispatch)
                       (pSVar6,a,(pSVar2->vtable)._18_GetBytes.method,pSVar2,vtableDispatch);
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.ApplicationEncoder$$.ctor
// il2cpp: void ApplicationManagers_ApplicationEncoder___ctor (ApplicationManagers_ApplicationEncoder_o* __this, const MethodInfo* method);
// 0x44c2230

void ApplicationManagers_ApplicationEncoder___ctor
               (ApplicationManagers_ApplicationEncoder_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


