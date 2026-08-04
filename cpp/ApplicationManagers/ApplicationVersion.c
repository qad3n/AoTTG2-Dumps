// Type: ApplicationManagers.ApplicationVersion
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/ApplicationVersion.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationVersion.cs
// --------------------------------

// ApplicationManagers.ApplicationVersion$$GetVersion
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationVersion__GetVersion (const MethodInfo* method);
// 0x44ac840

System_Net_NetworkCredential_o * ApplicationManagers_ApplicationVersion__GetVersion(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  System_Net_NetworkCredential_o *pSVar4;
  System_String_Fields SVar5;
  System_Net_NetworkCredential_o *pSVar6;
  
  if (g_data_057ae9ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NetworkCredential);
    il2cpp_runtime_helper_023445d0(&"TestVersion");
    g_data_057ae9ef = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_ApplicationVersion[5].fields.m_userName + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_ApplicationVersion[5].fields.m_userName + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_ApplicationVersion[4].fields.m_userName)->monitor;
    pSVar4 = TypeInfo_ApplicationVersion;
  }
  else {
    pvVar3 = (TypeInfo_ApplicationVersion[4].fields.m_userName)->monitor;
    pSVar4 = TypeInfo_ApplicationVersion;
  }
  TypeInfo_ApplicationVersion = pSVar4;
  if (pvVar3 != (void *)0x0) {
    if (*(int *)((long)&pSVar4[5].fields.m_userName + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pvVar3 = (TypeInfo_ApplicationVersion[4].fields.m_userName)->monitor;
      if (pvVar3 == (void *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae9f0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
          g_data_057ae9f0 = '\x01';
          iVar2 = *(int *)((long)&TypeInfo_ApplicationVersion[5].fields.m_userName + 4);
        }
        else {
          iVar2 = *(int *)((long)&TypeInfo_ApplicationVersion[5].fields.m_userName + 4);
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
          SVar5 = (TypeInfo_ApplicationVersion[4].fields.m_userName)->fields;
          pSVar6 = TypeInfo_ApplicationVersion;
        }
        else {
          SVar5 = (TypeInfo_ApplicationVersion[4].fields.m_userName)->fields;
          pSVar6 = TypeInfo_ApplicationVersion;
        }
        if (SVar5 == (System_String_Fields)0x0) {
          TypeInfo_ApplicationVersion = pSVar6;
          return (System_Net_NetworkCredential_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        TypeInfo_ApplicationVersion = pSVar6;
        if (*(int *)((long)&pSVar6[5].fields.m_userName + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          SVar5 = (TypeInfo_ApplicationVersion[4].fields.m_userName)->fields;
          if (SVar5 == (System_String_Fields)0x0) {
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ae9f1 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
              g_data_057ae9f1 = '\x01';
              iVar2 = *(int *)((long)&TypeInfo_ApplicationVersion[5].fields.m_userName + 4);
            }
            else {
              iVar2 = *(int *)((long)&TypeInfo_ApplicationVersion[5].fields.m_userName + 4);
            }
            if (iVar2 == 0) {
              il2cpp_runtime_helper_02337ed0();
              cVar1 = *(char *)&(TypeInfo_ApplicationVersion[4].fields.m_userName)->klass;
            }
            else {
              cVar1 = *(char *)&(TypeInfo_ApplicationVersion[4].fields.m_userName)->klass;
            }
            if (cVar1 == '\0') {
              pSVar6 = (System_Net_NetworkCredential_o *)**(long **)(g_data_057b9c00 + 0xb8);
            }
            return pSVar6;
          }
        }
        pSVar4 = (System_Net_NetworkCredential_o *)
                 (**(code **)((long)SVar5 + 0x18))
                           (*(undefined8 *)((long)SVar5 + 0x40),pSVar4,*(undefined8 *)((long)SVar5 + 0x28),
                            *(code **)((long)SVar5 + 0x18));
        return pSVar4;
      }
    }
    pSVar4 = (System_Net_NetworkCredential_o *)
             (**(code **)((long)pvVar3 + 0x18))
                       (*(undefined8 *)((long)pvVar3 + 0x40),*(undefined8 *)((long)pvVar3 + 0x28));
    return pSVar4;
  }
  pSVar4 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
  System_Net_NetworkCredential___ctor(pSVar4,"TestVersion","TestVersion",(MethodInfo *)0x0);
  return pSVar4;
}


// ApplicationManagers.ApplicationVersion$$GetHashCode
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetHashCode (System_String_o* key, const MethodInfo* method);
// 0x44ac940

System_String_o * ApplicationManagers_ApplicationVersion__GetHashCode(System_String_o *key,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  System_String_o *pSVar4;
  
  if (g_data_057ae9f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
    g_data_057ae9f0 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_ApplicationVersion[9].monitor + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_ApplicationVersion[9].monitor + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_ApplicationVersion[7].fields + 0x10);
    pSVar4 = TypeInfo_ApplicationVersion;
  }
  else {
    lVar3 = *(long *)((long)TypeInfo_ApplicationVersion[7].fields + 0x10);
    pSVar4 = TypeInfo_ApplicationVersion;
  }
  if (lVar3 != 0) {
    TypeInfo_ApplicationVersion = pSVar4;
    if (*(int *)((long)&pSVar4[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_ApplicationVersion[7].fields + 0x10);
      if (lVar3 == 0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae9f1 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
          g_data_057ae9f1 = '\x01';
          iVar2 = *(int *)((long)&TypeInfo_ApplicationVersion[9].monitor + 4);
        }
        else {
          iVar2 = *(int *)((long)&TypeInfo_ApplicationVersion[9].monitor + 4);
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
          cVar1 = *(char *)TypeInfo_ApplicationVersion[7].fields;
        }
        else {
          cVar1 = *(char *)TypeInfo_ApplicationVersion[7].fields;
        }
        if (cVar1 == '\0') {
          pSVar4 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
        }
        return pSVar4;
      }
    }
    pSVar4 = (System_String_o *)
             (**(code **)(lVar3 + 0x18))
                       (*(undefined8 *)(lVar3 + 0x40),key,*(undefined8 *)(lVar3 + 0x28),
                        *(code **)(lVar3 + 0x18));
    return pSVar4;
  }
  TypeInfo_ApplicationVersion = pSVar4;
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// ApplicationManagers.ApplicationVersion$$GetHashKey
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetHashKey (System_String_o* key, const MethodInfo* method);
// 0x44aca10

System_String_o * ApplicationManagers_ApplicationVersion__GetHashKey(System_String_o *key,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  
  if (g_data_057ae9f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
    g_data_057ae9f1 = '\x01';
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = **(char **)(TypeInfo_ApplicationVersion + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_ApplicationVersion + 0xb8);
  }
  if (cVar1 == '\0') {
    key = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  return key;
}


// ApplicationManagers.ApplicationVersion$$GetSessionID
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetSessionID (const MethodInfo* method);
// 0x44acaa0

System_String_o * ApplicationManagers_ApplicationVersion__GetSessionID(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae9f2 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae9f2 = '\x01';
  }
  pSVar1 = UnityEngine_SystemInfo__get_deviceUniqueIdentifier((MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0("eWire7HpInEhOO7r",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.ApplicationVersion$$.cctor
// il2cpp: void ApplicationManagers_ApplicationVersion___cctor (const MethodInfo* method);
// 0x44acae0

void ApplicationManagers_ApplicationVersion___cctor(MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  
  if (g_data_057ae9f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetPrivateHashCode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_NetworkCredential_GetPrivateVersion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_NetworkCredential);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    g_data_057ae9f3 = '\x01';
  }
  **(undefined1 **)(TypeInfo_ApplicationVersion + 0xb8) = 1;
  uVar2 = il2cpp_runtime_helper_023052d0(TypeInfo_Func_NetworkCredential);
  System_Func_object____ctor();
  lVar1 = *(long *)(TypeInfo_ApplicationVersion + 0xb8);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,uVar2);
  uVar2 = il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
  System_Func_object__object____ctor();
  lVar1 = *(long *)(TypeInfo_ApplicationVersion + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,uVar2);
  return;
}


// ApplicationManagers.ApplicationVersion$$GetPrivateVersion
// il2cpp: System_Net_NetworkCredential_o* ApplicationManagers_ApplicationVersion__GetPrivateVersion (const MethodInfo* method);
// 0x44acbd0

System_Net_NetworkCredential_o * ApplicationManagers_ApplicationVersion__GetPrivateVersion(MethodInfo *method)

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


// ApplicationManagers.ApplicationVersion$$GetPrivateHashCode
// il2cpp: System_String_o* ApplicationManagers_ApplicationVersion__GetPrivateHashCode (System_String_o* key, const MethodInfo* method);
// 0x44acbe0

System_String_o *
ApplicationManagers_ApplicationVersion__GetPrivateHashCode(System_String_o *key,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Net_NetworkCredential_o *__this;
  System_String_o *extraout_RAX;
  
  if (g_data_057ae9f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"PtzsW");
    g_data_057ae9f4 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(key,"PtzsW",(MethodInfo *)0x0);
  __this = ApplicationManagers_ApplicationEncoder__Encode1a(pSVar1,(MethodInfo *)0x0);
  if (__this != (System_Net_NetworkCredential_o *)0x0) {
    pSVar1 = System_Net_NetworkCredential__get_Password(__this,(MethodInfo *)0x0);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.ApplicationVersion$$.ctor
// il2cpp: void ApplicationManagers_ApplicationVersion___ctor (ApplicationManagers_ApplicationVersion_o* __this, const MethodInfo* method);
// 0x44acc40

void ApplicationManagers_ApplicationVersion___ctor
               (ApplicationManagers_ApplicationVersion_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


