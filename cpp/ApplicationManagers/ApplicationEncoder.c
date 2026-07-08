// Type: ApplicationManagers.ApplicationEncoder
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationEncoder.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.ApplicationEncoder$$Encode
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode (System_String_o* str, const MethodInfo* method);
// 0x41a8c40

System_String_o *
ApplicationManagers_ApplicationEncoder__Encode(System_String_o *str,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704cd7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&"35s");
    il2cpp_init_method_metadata(&"drBx2c");
    DAT_05704cd7 = '\x01';
  }
  if (str != (System_String_o *)0x0) {
    iVar1 = (str->fields)._stringLength;
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = System_Convert__ToString((int32_t)(0x1c4 % (long)iVar1),(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(str,"drBx2c",pSVar2,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__Substring(pSVar2,5,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(pSVar2,"35s",(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ApplicationEncoder$$GetTempBuffer
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationEncoder__GetTempBuffer (const MethodInfo* method);
// 0x41a8d00

System_Net_NetworkCredential_o *
ApplicationManagers_ApplicationEncoder__GetTempBuffer(MethodInfo *method)

{
  System_String_o *userName;
  System_String_o *pSVar1;
  System_Net_NetworkCredential_o *pSVar2;
  MethodInfo *in_RSI;
  
  if (DAT_05704cd8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NetworkCredential);
    il2cpp_init_method_metadata(&"vf8Wk1vU5xnrzGCd");
    il2cpp_init_method_metadata(&"wK5gxS6RYsrZEmHpF");
    DAT_05704cd8 = '\x01';
  }
  userName = ApplicationManagers_ApplicationEncoder__Encode("vf8Wk1vU5xnrzGCd",in_RSI);
  pSVar1 = "wK5gxS6RYsrZEmHpF";
  if (userName != (System_String_o *)0x0) {
    if ((userName->fields)._stringLength < 0x3e9) {
      if (DAT_05704cd9 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_NetworkCredential);
        il2cpp_init_method_metadata(&"t8u0RuT8w2EM5GqMGjfWreS");
        DAT_05704cd9 = '\x01';
      }
      pSVar1 = ApplicationManagers_ApplicationEncoder__Encode1(pSVar1,in_RSI);
      pSVar2 = (System_Net_NetworkCredential_o *)il2cpp_runtime_glue(TypeInfo_NetworkCredential);
      System_Net_NetworkCredential___ctor(pSVar2,"t8u0RuT8w2EM5GqMGjfWreS",pSVar1,(MethodInfo *)0x0);
      return pSVar2;
    }
    pSVar2 = (System_Net_NetworkCredential_o *)il2cpp_runtime_glue(TypeInfo_NetworkCredential);
    System_Net_NetworkCredential___ctor(pSVar2,userName,userName,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ApplicationEncoder$$Encode1a
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationEncoder__Encode1a (System_String_o* str, const MethodInfo* method);
// 0x41a8e00

System_Net_NetworkCredential_o *
ApplicationManagers_ApplicationEncoder__Encode1a(System_String_o *str,MethodInfo *method)

{
  System_String_o *password;
  System_Net_NetworkCredential_o *__this;
  
  if (DAT_05704cd9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NetworkCredential);
    il2cpp_init_method_metadata(&"t8u0RuT8w2EM5GqMGjfWreS");
    DAT_05704cd9 = '\x01';
  }
  password = ApplicationManagers_ApplicationEncoder__Encode1(str,method);
  __this = (System_Net_NetworkCredential_o *)il2cpp_runtime_glue(TypeInfo_NetworkCredential);
  System_Net_NetworkCredential___ctor(__this,"t8u0RuT8w2EM5GqMGjfWreS",password,(MethodInfo *)0x0);
  return __this;
}


// ApplicationManagers.ApplicationEncoder$$Encode1
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode1 (System_String_o* str, const MethodInfo* method);
// 0x41a8e70

System_String_o *
ApplicationManagers_ApplicationEncoder__Encode1(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *pMVar2;
  
  if (DAT_05704cda == '\0') {
    il2cpp_init_method_metadata(&"zpof12");
    il2cpp_init_method_metadata(&"cf23");
    il2cpp_init_method_metadata(&"412b");
    DAT_05704cda = '\x01';
  }
  pSVar1 = System_String__Concat(str,"cf23",(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,"412b",(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("zpof12",pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pMVar2 = (MethodInfo *)0x0;
    pSVar1 = System_String__Substring
                       (pSVar1,0,(pSVar1->fields)._stringLength + -1,(MethodInfo *)0x0);
    if (DAT_05704cdb == '\0') {
      il2cpp_init_method_metadata(&"bwfwoj");
      DAT_05704cdb = '\x01';
    }
    pSVar1 = ApplicationManagers_ApplicationEncoder__Compress3(pSVar1,pMVar2);
    pMVar2 = "bwfwoj";
    pSVar1 = System_String__Concat(pSVar1,(System_String_o *)"bwfwoj",(MethodInfo *)0x0);
    pSVar1 = ApplicationManagers_ApplicationEncoder__Encode3(pSVar1,pMVar2);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ApplicationEncoder$$Encode2
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode2 (System_String_o* str, const MethodInfo* method);
// 0x41a8f50

System_String_o *
ApplicationManagers_ApplicationEncoder__Encode2(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if (DAT_05704cdb == '\0') {
    il2cpp_init_method_metadata(&"bwfwoj");
    DAT_05704cdb = '\x01';
  }
  pSVar1 = ApplicationManagers_ApplicationEncoder__Compress3(str,method);
  method_00 = "bwfwoj";
  pSVar1 = System_String__Concat(pSVar1,(System_String_o *)"bwfwoj",(MethodInfo *)0x0);
  pSVar1 = ApplicationManagers_ApplicationEncoder__Encode3(pSVar1,method_00);
  return pSVar1;
}


// ApplicationManagers.ApplicationEncoder$$Encode3
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Encode3 (System_String_o* str, const MethodInfo* method);
// 0x41a9090

System_String_o *
ApplicationManagers_ApplicationEncoder__Encode3(System_String_o *str,MethodInfo *method)

{
  System_String_o *str1;
  System_String_o *str0;
  uint index;
  uint16_t local_2a;
  
  if (DAT_05704cdc == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05704cdc = '\x01';
  }
  local_2a = 0;
  if (str != (System_String_o *)0x0) {
    if ((str->fields)._stringLength < 1) {
      return "";
    }
    index = 0;
    str0 = "";
    do {
      local_2a = System_String__get_Chars(str,index,(MethodInfo *)0x0);
      if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      str1 = System_Char__ToString((uint16_t)&local_2a,(MethodInfo *)0x0);
      str0 = System_String__Concat(str0,str1,(MethodInfo *)0x0);
      do {
        index = index + 1;
        if ((str->fields)._stringLength <= (int)index) {
          return str0;
        }
      } while ((index & 1) != 0);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ApplicationEncoder$$Compress
// il2cpp: System_Byte_array* ApplicationManagers_ApplicationEncoder__Compress (System_String_o* text, const MethodInfo* method);
// 0x41a9170

System_Byte_array *
ApplicationManagers_ApplicationEncoder__Compress(System_String_o *text,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Byte_array *pSVar2;
  System_Text_Encoding_o *pSVar3;
  
  if (DAT_05704cdd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_CLZF2);
    DAT_05704cdd = '\x01';
  }
  bVar1 = System_String__op_Equality
                    (text,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pSVar2 = (System_Byte_array *)il2cpp_glue_02274930(TypeInfo_byte,0);
    return pSVar2;
  }
  pSVar3 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar3 == (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar2 = (System_Byte_array *)
           (*(pSVar3->klass->vtable)._18_GetBytes.methodPtr)
                     (pSVar3,text,(pSVar3->klass->vtable)._18_GetBytes.method);
  if (*(int *)(TypeInfo_CLZF2 + 0xe4) != 0) {
    pSVar2 = Utility_CLZF2__Compress(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_init_class();
  pSVar2 = Utility_CLZF2__Compress(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// ApplicationManagers.ApplicationEncoder$$Compress3
// il2cpp: System_String_o* ApplicationManagers_ApplicationEncoder__Compress3 (System_String_o* text, const MethodInfo* method);
// 0x41a8fa0

System_String_o *
ApplicationManagers_ApplicationEncoder__Compress3(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  int32_t value;
  MethodInfo *method_00;
  System_String_o *pSVar3;
  System_Byte_array *inArray;
  
  if (DAT_05704cde == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_05704cde = '\x01';
  }
  bVar2 = System_String__op_Equality
                    (text,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (text != (System_String_o *)0x0) {
    iVar1 = (text->fields)._stringLength;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = System_Math__Min(iVar1 / 2,0xf,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)System_Convert__ToString(value,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(text,(System_String_o *)method_00,(MethodInfo *)0x0);
    inArray = ApplicationManagers_ApplicationEncoder__Compress(pSVar3,method_00);
    pSVar3 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ApplicationEncoder$$.ctor
// il2cpp: void ApplicationManagers_ApplicationEncoder___ctor (ApplicationManagers_ApplicationEncoder_o* __this, const MethodInfo* method);
// 0x41a9230

void ApplicationManagers_ApplicationEncoder___ctor
               (ApplicationManagers_ApplicationEncoder_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


