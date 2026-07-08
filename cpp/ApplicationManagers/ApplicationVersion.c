// Type: ApplicationManagers.ApplicationVersion
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationVersion.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/ApplicationVersion.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.ApplicationVersion$$GetVersion
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationVersion__GetVersion (const MethodInfo* method);
// 0x41947c0

System_Net_NetworkCredential_o *
ApplicationManagers_ApplicationVersion__GetVersion(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Net_NetworkCredential_o *pSVar3;
  
  if (DAT_05704c23 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    il2cpp_init_method_metadata(&TypeInfo_NetworkCredential);
    il2cpp_init_method_metadata(&"TestVersion");
    DAT_05704c23 = '\x01';
    iVar1 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ApplicationVersion + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_ApplicationVersion + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_ApplicationVersion + 0xb8) + 8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    pSVar3 = (System_Net_NetworkCredential_o *)
             (**(code **)(lVar2 + 0x18))
                       (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return pSVar3;
  }
  pSVar3 = (System_Net_NetworkCredential_o *)il2cpp_runtime_glue(TypeInfo_NetworkCredential);
  System_Net_NetworkCredential___ctor(pSVar3,"TestVersion","TestVersion",(MethodInfo *)0x0);
  return pSVar3;
}


// ApplicationManagers.ApplicationVersion$$GetHashCode
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetHashCode (System_String_o* key, const MethodInfo* method);
// 0x41948c0

System_String_o *
ApplicationManagers_ApplicationVersion__GetHashCode(System_String_o *key,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704c24 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    DAT_05704c24 = '\x01';
    iVar1 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ApplicationVersion + 0xb8) + 0x10);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_ApplicationVersion + 0xb8) + 0x10);
  }
  if (lVar2 != 0) {
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_ApplicationVersion + 0xb8) + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    pSVar3 = (System_String_o *)
             (**(code **)(lVar2 + 0x18))
                       (*(undefined8 *)(lVar2 + 0x40),key,*(undefined8 *)(lVar2 + 0x28),
                        *(code **)(lVar2 + 0x18));
    return pSVar3;
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// ApplicationManagers.ApplicationVersion$$GetHashKey
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetHashKey (System_String_o* key, const MethodInfo* method);
// 0x4194990

System_String_o *
ApplicationManagers_ApplicationVersion__GetHashKey(System_String_o *key,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  
  if (DAT_05704c25 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    DAT_05704c25 = '\x01';
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = **(char **)(TypeInfo_ApplicationVersion + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_ApplicationVersion + 0xb8);
  }
  if (cVar1 == '\0') {
    key = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  return key;
}


// ApplicationManagers.ApplicationVersion$$GetSessionID
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetSessionID (const MethodInfo* method);
// 0x4194a20

System_String_o * ApplicationManagers_ApplicationVersion__GetSessionID(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704c26 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704c26 = '\x01';
  }
  pSVar1 = UnityEngine_SystemInfo__get_deviceUniqueIdentifier((MethodInfo *)0x0);
  pSVar1 = System_String__Concat("eWire7HpInEhOO7r",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.ApplicationVersion$$.cctor
// il2cpp: void ApplicationManagers_ApplicationVersion___cctor (const MethodInfo* method);
// 0x4194a60

void ApplicationManagers_ApplicationVersion___cctor(MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  
  if (DAT_05704c27 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_GetPrivateHashCode);
    il2cpp_init_method_metadata(&MethodInfo_NetworkCredential_GetPrivateVersion);
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    il2cpp_init_method_metadata(&TypeInfo_Func_NetworkCredential);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__string);
    DAT_05704c27 = '\x01';
  }
  **(undefined1 **)(TypeInfo_ApplicationVersion + 0xb8) = 1;
  uVar2 = il2cpp_runtime_glue(TypeInfo_Func_NetworkCredential);
  System_Func<object>___ctor();
  lVar1 = *(long *)(TypeInfo_ApplicationVersion + 0xb8);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  il2cpp_runtime_glue(lVar1 + 8,uVar2);
  uVar2 = il2cpp_runtime_glue(TypeInfo_Func_string__string);
  System_Func<object__object>___ctor();
  lVar1 = *(long *)(TypeInfo_ApplicationVersion + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  il2cpp_runtime_glue(lVar1 + 0x10,uVar2);
  return;
}


// ApplicationManagers.ApplicationVersion$$GetPrivateVersion
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationVersion__GetPrivateVersion (const MethodInfo* method);
// 0x4194b50

System_Net_NetworkCredential_o *
ApplicationManagers_ApplicationVersion__GetPrivateVersion(MethodInfo *method)

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


// ApplicationManagers.ApplicationVersion$$GetPrivateHashCode
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetPrivateHashCode (System_String_o* key, const MethodInfo* method);
// 0x4194b60

System_String_o *
ApplicationManagers_ApplicationVersion__GetPrivateHashCode(System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Net_NetworkCredential_o *__this;
  
  if (DAT_05704c28 == '\0') {
    il2cpp_init_method_metadata(&"rpfz");
    DAT_05704c28 = '\x01';
  }
  pSVar1 = System_String__Concat(key,"rpfz",(MethodInfo *)0x0);
  __this = ApplicationManagers_ApplicationEncoder__Encode1a(pSVar1,(MethodInfo *)0x0);
  if (__this != (System_Net_NetworkCredential_o *)0x0) {
    pSVar1 = System_Net_NetworkCredential__get_Password(__this,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ApplicationVersion$$.ctor
// il2cpp: void ApplicationManagers_ApplicationVersion___ctor (ApplicationManagers_ApplicationVersion_o* __this, const MethodInfo* method);
// 0x4194bc0

void ApplicationManagers_ApplicationVersion___ctor
               (ApplicationManagers_ApplicationVersion_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


