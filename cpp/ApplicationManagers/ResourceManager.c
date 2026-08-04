// Type: ApplicationManagers.ResourceManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/ResourceManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ResourceManager.cs
// --------------------------------

// ApplicationManagers.ResourceManager$$ClearCache
// il2cpp: void ApplicationManagers_ResourceManager__ClearCache (const MethodInfo* method);
// 0x44bec80

void ApplicationManagers_ResourceManager__ClearCache(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__c *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  bool_conflict bVar6;
  Il2CppClass *pIVar7;
  System_Byte_array *data;
  UnityEngine_Texture2D_o *__this;
  undefined8 *puVar8;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  char extraout_DL;
  uint extraout_EDX;
  Il2CppClass *pIVar9;
  Il2CppClass *in_RSI;
  Il2CppObject *key;
  
  if (g_data_057aea80 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea80 = '\x01';
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) != 0) goto label_044bec9d;
label_044becee:
    il2cpp_runtime_helper_02337ed0();
    pIVar9 = (Il2CppClass *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) goto label_044becee;
label_044bec9d:
    pIVar9 = (Il2CppClass *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  }
  if (pIVar9 != (Il2CppClass *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)pIVar9,MethodInfo_Void_Clear);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextAsset);
    g_data_057aea81 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar7 = (Il2CppClass *)
           ApplicationManagers_ResourceManager__LoadAsset
                     ((System_String_o *)pIVar9,(System_String_o *)in_RSI,0,in_RCX);
  if (pIVar7 != (Il2CppClass *)0x0) {
    pSVar3 = (pIVar7->_1).image;
    bVar1 = (TypeInfo_TextAsset->_2).naturalAligment;
    if ((bVar1 <= (pSVar3->_2).naturalAligment) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_TextAsset)) {
      UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)pIVar7,(MethodInfo *)0x0);
      return;
    }
    in_RSI = TypeInfo_TextAsset;
    il2cpp_runtime_helper_022b2fd0();
    pIVar9 = pIVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea84 = '\x01';
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) != 0) goto label_044bede3;
label_044bee36:
    il2cpp_runtime_helper_02337ed0();
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  else {
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) goto label_044bee36;
label_044bede3:
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    in_RSI = pIVar9;
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar4,(Il2CppObject *)pIVar9,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                (pSVar4,(Il2CppObject *)pIVar9,MethodInfo_Texture2D_get_Item);
      return;
    }
  }
  key = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pIVar9 = in_RSI;
  if (g_data_057aea85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea85 = '\x01';
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) != 0) goto label_044beedb;
label_044bef3a:
    il2cpp_runtime_helper_02337ed0();
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  else {
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) goto label_044bef3a;
label_044beedb:
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_044bf004:
    pIVar7 = (Il2CppClass *)0x0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aea86 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      g_data_057aea86 = '\x01';
      iVar2 = *(int *)(TypeInfo_ResourceManager + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_ResourceManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
    }
    else {
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
    }
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar9 = pIVar7;
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar4,(Il2CppObject *)pIVar7,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pIVar9 = pIVar7;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar4,(Il2CppObject *)pIVar7,MethodInfo_Boolean_Remove);
        pSVar5 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
        if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet_object___Remove(pSVar5,(Il2CppObject *)pIVar7,MethodInfo_Boolean_Remove);
          return;
        }
      }
    }
    pIVar7 = (Il2CppClass *)0x0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aea87 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
      g_data_057aea87 = '\x01';
    }
    bVar6 = System_String__IsNullOrEmpty((System_String_o *)pIVar9,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pIVar9 = pIVar7;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar4,(Il2CppObject *)pIVar9,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar6 == '\0') {
        bVar6 = System_IO_File__Exists((System_String_o *)pIVar7,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          data = System_IO_File__ReadAllBytes((System_String_o *)pIVar7,(MethodInfo *)0x0);
          __this = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
          method_00 = (MethodInfo *)&g_data_00000004;
          UnityEngine_Texture2D___ctor_4dd9130(__this,2,2,4,0,(MethodInfo *)0x0);
          bVar6 = UnityEngine_ImageConversion__LoadImage_4e3d4f0(__this,data,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            ApplicationManagers_ResourceManager__SetExternalTexture
                      ((System_String_o *)pIVar9,__this,extraout_EDX & 0xff,method_00);
          }
        }
        return;
      }
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___get_Item
                  (pSVar4,(Il2CppObject *)pIVar9,MethodInfo_Texture2D_get_Item);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    puVar8 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar8 = (pIVar9->_1).image;
    __cxa_throw(puVar8,&PTR_PTR_05215060,0);
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (pSVar4,key,(Il2CppObject *)in_RSI,MethodInfo_Void_set_Item);
  if (extraout_DL != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)in_RSI,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar9 = (Il2CppClass *)0x0;
      UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)in_RSI,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
      if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add(pSVar5,key,MethodInfo_Boolean_Add);
        return;
      }
      goto label_044bf004;
    }
  }
  return;
}


// ApplicationManagers.ResourceManager$$LoadText
// il2cpp: System_String_o* ApplicationManagers_ResourceManager__LoadText (System_String_o* path, System_String_o* name, const MethodInfo* method);
// 0x44bed10

System_String_o *
ApplicationManagers_ResourceManager__LoadText(System_String_o *path,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  bool_conflict bVar5;
  Il2CppClass *pIVar6;
  System_String_o *pSVar7;
  System_String_o *extraout_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  System_Byte_array *data;
  undefined8 *puVar8;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  char extraout_DL;
  uint extraout_EDX;
  Il2CppObject *key;
  Il2CppClass *pIVar9;
  
  if (g_data_057aea81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextAsset);
    g_data_057aea81 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar6 = (Il2CppClass *)ApplicationManagers_ResourceManager__LoadAsset(path,name,0,in_RCX);
  if (pIVar6 != (Il2CppClass *)0x0) {
    bVar1 = (TypeInfo_TextAsset->_2).naturalAligment;
    if ((bVar1 <= (((pIVar6->_1).image)->_2).naturalAligment) &&
       ((((pIVar6->_1).image)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_TextAsset)) {
      pSVar7 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)pIVar6,(MethodInfo *)0x0);
      return pSVar7;
    }
    name = (System_String_o *)TypeInfo_TextAsset;
    il2cpp_runtime_helper_022b2fd0();
    path = (System_String_o *)pIVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea84 = '\x01';
    iVar2 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    name = path;
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)path,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
      return (System_String_o *)0x0;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar7 = (System_String_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar3,(Il2CppObject *)path,MethodInfo_Texture2D_get_Item);
      return pSVar7;
    }
  }
  key = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = (Il2CppClass *)name;
  if (g_data_057aea85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea85 = '\x01';
    iVar2 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar3,key,(Il2CppObject *)name,MethodInfo_Void_set_Item);
    if (extraout_DL == '\0') {
      return extraout_RAX;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)name,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var,bVar5);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar6 = (Il2CppClass *)0x0;
    UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)name,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
    if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar5 = System_Collections_Generic_HashSet_object___Add(pSVar4,key,MethodInfo_Boolean_Add);
      return (System_String_o *)CONCAT44(extraout_var_00,bVar5);
    }
  }
  pIVar9 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea86 = '\x01';
    iVar2 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar6 = pIVar9;
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)pIVar9,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_01,bVar5);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar6 = pIVar9;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar3,(Il2CppObject *)pIVar9,MethodInfo_Boolean_Remove);
      pSVar4 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
      if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar5 = System_Collections_Generic_HashSet_object___Remove(pSVar4,(Il2CppObject *)pIVar9,MethodInfo_Boolean_Remove)
        ;
        return (System_String_o *)CONCAT44(extraout_var_02,bVar5);
      }
    }
  }
  pIVar9 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057aea87 = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty((System_String_o *)pIVar6,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pIVar6 = pIVar9;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)pIVar6,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
      bVar5 = System_IO_File__Exists((System_String_o *)pIVar9,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        data = System_IO_File__ReadAllBytes((System_String_o *)pIVar9,(MethodInfo *)0x0);
        pSVar7 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
        method_00 = (MethodInfo *)&g_data_00000004;
        UnityEngine_Texture2D___ctor_4dd9130((UnityEngine_Texture2D_o *)pSVar7,2,2,4,0,(MethodInfo *)0x0);
        bVar5 = UnityEngine_ImageConversion__LoadImage_4e3d4f0
                          ((UnityEngine_Texture2D_o *)pSVar7,data,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ApplicationManagers_ResourceManager__SetExternalTexture
                    ((System_String_o *)pIVar6,(UnityEngine_Texture2D_o *)pSVar7,extraout_EDX & 0xff,method_00
                    );
          return pSVar7;
        }
      }
      return (System_String_o *)0x0;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar7 = (System_String_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar3,(Il2CppObject *)pIVar6,MethodInfo_Texture2D_get_Item);
      return pSVar7;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  puVar8 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar8 = (pIVar6->_1).image;
  __cxa_throw(puVar8,&PTR_PTR_05215060,0);
}


// ApplicationManagers.ResourceManager$$TryLoadText
// il2cpp: System_String_o* ApplicationManagers_ResourceManager__TryLoadText (System_String_o* path, System_String_o* name, const MethodInfo* method);
// 0x44ba330

System_String_o *
ApplicationManagers_ResourceManager__TryLoadText
          (System_String_o *path,System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (g_data_057aea82 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea82 = '\x01';
    method = extraout_RDX;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method = extraout_RDX_00;
  }
  pSVar1 = ApplicationManagers_ResourceManager__LoadText(path,name,method);
  return pSVar1;
}


// ApplicationManagers.ResourceManager$$LoadAsset
// il2cpp: UnityEngine_Object_o* ApplicationManagers_ResourceManager__LoadAsset (System_String_o* path, System_String_o* name, bool cached, const MethodInfo* method);
// 0x44bbf40

UnityEngine_Object_o *
ApplicationManagers_ResourceManager__LoadAsset
          (System_String_o *path,System_String_o *name,bool_conflict cached,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  UnityEngine_Texture2D_o *x;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Object_o *extraout_RAX;
  undefined4 uVar3;
  MethodInfo *method_00;
  Il2CppClass *pIVar4;
  Il2CppClass *pIVar5;
  undefined4 uVar6;
  
  if (g_data_057aea83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aea83 = '\x01';
  }
  method_00 = "";
  bVar1 = System_String__op_Inequality(path,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    method_00 = "/";
    name = System_String__Concat_3af7150(path,(System_String_o *)"/",name,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = ApplicationManagers_ResourceManager__GetExternalTexture(name,method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar4 = (Il2CppClass *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if ((char)cached != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar5 = (Il2CppClass *)0x0;
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      pIVar4 = (Il2CppClass *)name;
      bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar5 = (Il2CppClass *)0x0;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8)
            == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)name,(Il2CppObject *)x,MethodInfo_Void_set_Item)
        ;
      }
    }
    return (UnityEngine_Object_o *)x;
  }
  if ((char)cached == '\0') {
    pUVar2 = UnityEngine_Resources__Load(name,(MethodInfo *)0x0);
    return pUVar2;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar5 = (Il2CppClass *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar4 = (Il2CppClass *)name;
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pIVar4 = (Il2CppClass *)0x0;
      pIVar5 = (Il2CppClass *)name;
      pUVar2 = UnityEngine_Resources__Load(name,(MethodInfo *)0x0);
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bc19f;
      pIVar4 = (Il2CppClass *)name;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this,(Il2CppObject *)name,(Il2CppObject *)pUVar2,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar5 = (Il2CppClass *)0x0;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar2 = (UnityEngine_Object_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)name,MethodInfo_Object_get_Item);
      return pUVar2;
    }
  }
label_044bc19f:
  uVar6 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea6a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StartSoundEffect_d__41);
    g_data_057aea6a = '\x01';
  }
  __this_00 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StartSoundEffect_d__41);
  uVar3 = 0;
  pUVar2 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    __this_00[1].monitor = pIVar5;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pIVar5);
    __this_00[2].klass = (UnityEngine_Object_c *)pIVar4;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar4);
    *(undefined4 *)&__this_00[1].fields.m_CachedPtr = uVar6;
    return __this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar2->fields).m_CachedPtr = uVar3;
  return extraout_RAX;
}


// ApplicationManagers.ResourceManager$$InstantiateAsset<object>
// il2cpp: Il2CppObject* ApplicationManagers_ResourceManager__InstantiateAsset_object_ (System_String_o* path, System_String_o* name, bool cached, const MethodInfo_25BC8B0* method);
// 0x26bc8b0

Il2CppObject *
ApplicationManagers_ResourceManager__InstantiateAsset_object_
          (System_String_o *path,System_String_o *name,bool_conflict cached,MethodInfo_25BC8B0 *method)

{
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  
  if (method->rgctx_data == (MethodInfo_25BC8B0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    if (method->rgctx_data == (MethodInfo_25BC8B0_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(method);
      iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
      goto joined_r0x026bc8fd;
    }
  }
  iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
joined_r0x026bc8fd:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(path,name,cached & 0xff,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar2 = UnityEngine_Object__Instantiate_4e01490(pUVar2,(MethodInfo *)0x0);
  pIVar3 = method->rgctx_data->_0_T;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
  }
  if (pUVar2 != (UnityEngine_Object_o *)0x0) {
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pUVar2,pIVar3);
    if (pIVar4 != (Il2CppObject *)0x0) {
      return pIVar4;
    }
    il2cpp_runtime_helper_022b2fd0(pUVar2,pIVar3);
  }
  return (Il2CppObject *)0x0;
}


// ApplicationManagers.ResourceManager$$InstantiateAsset<object>
// il2cpp: Il2CppObject* ApplicationManagers_ResourceManager__InstantiateAsset_object_ (System_String_o* path, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, bool cached, const MethodInfo_25BC9B0* method);
// 0x26bc9b0

Il2CppObject *
ApplicationManagers_ResourceManager__InstantiateAsset_object__25bc9b0
          (System_String_o *path,System_String_o *name,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o rotation,bool_conflict cached,MethodInfo_25BC9B0 *method)

{
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  
  if (method->rgctx_data == (MethodInfo_25BC9B0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    if (method->rgctx_data == (MethodInfo_25BC9B0_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(method);
      iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
      goto joined_r0x026bca16;
    }
  }
  iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
joined_r0x026bca16:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(path,name,cached & 0xff,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar2 = UnityEngine_Object__Instantiate(pUVar2,position,rotation,(MethodInfo *)0x0);
  pIVar3 = method->rgctx_data->_0_T;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
  }
  if (pUVar2 != (UnityEngine_Object_o *)0x0) {
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pUVar2,pIVar3);
    if (pIVar4 != (Il2CppObject *)0x0) {
      return pIVar4;
    }
    il2cpp_runtime_helper_022b2fd0(pUVar2,pIVar3);
  }
  return (Il2CppObject *)0x0;
}


// ApplicationManagers.ResourceManager$$GetExternalTexture
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_ResourceManager__GetExternalTexture (System_String_o* key, const MethodInfo* method);
// 0x44bedc0

UnityEngine_Texture2D_o *
ApplicationManagers_ResourceManager__GetExternalTexture(System_String_o *key,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  bool_conflict bVar4;
  UnityEngine_Texture2D_o *extraout_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  UnityEngine_Texture2D_o *pUVar5;
  System_Byte_array *data;
  undefined8 *puVar6;
  MethodInfo *pMVar7;
  char extraout_DL;
  uint extraout_EDX;
  MethodInfo *pMVar8;
  Il2CppObject *key_00;
  
  if (g_data_057aea84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea84 = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method = (MethodInfo *)key;
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar5 = (UnityEngine_Texture2D_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,(Il2CppObject *)key,MethodInfo_Texture2D_get_Item);
      return pUVar5;
    }
  }
  key_00 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = method;
  if (g_data_057aea85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea85 = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,key_00,(Il2CppObject *)method,MethodInfo_Void_set_Item);
    if (extraout_DL == '\0') {
      return extraout_RAX;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return (UnityEngine_Texture2D_o *)CONCAT44(extraout_var,bVar4);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = (MethodInfo *)0x0;
    UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)method,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
    if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar4 = System_Collections_Generic_HashSet_object___Add(pSVar3,key_00,MethodInfo_Boolean_Add);
      return (UnityEngine_Texture2D_o *)CONCAT44(extraout_var_00,bVar4);
    }
  }
  pMVar7 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea86 = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pMVar8 = pMVar7;
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)pMVar7,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      return (UnityEngine_Texture2D_o *)CONCAT44(extraout_var_01,bVar4);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar8 = pMVar7;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar2,(Il2CppObject *)pMVar7,MethodInfo_Boolean_Remove);
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar4 = System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pMVar7,MethodInfo_Boolean_Remove)
        ;
        return (UnityEngine_Texture2D_o *)CONCAT44(extraout_var_02,bVar4);
      }
    }
  }
  pMVar7 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057aea87 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty((System_String_o *)pMVar8,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pMVar8 = pMVar7;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)pMVar8,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      bVar4 = System_IO_File__Exists((System_String_o *)pMVar7,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        data = System_IO_File__ReadAllBytes((System_String_o *)pMVar7,(MethodInfo *)0x0);
        pUVar5 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
        pMVar7 = (MethodInfo *)&g_data_00000004;
        UnityEngine_Texture2D___ctor_4dd9130(pUVar5,2,2,4,0,(MethodInfo *)0x0);
        bVar4 = UnityEngine_ImageConversion__LoadImage_4e3d4f0(pUVar5,data,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ApplicationManagers_ResourceManager__SetExternalTexture
                    ((System_String_o *)pMVar8,pUVar5,extraout_EDX & 0xff,pMVar7);
          return pUVar5;
        }
      }
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar5 = (UnityEngine_Texture2D_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,(Il2CppObject *)pMVar8,MethodInfo_Texture2D_get_Item);
      return pUVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  puVar6 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar6 = (System_String_c *)pMVar8->methodPointer;
  __cxa_throw(puVar6,&PTR_PTR_05215060,0);
}


// ApplicationManagers.ResourceManager$$SetExternalTexture
// il2cpp: void ApplicationManagers_ResourceManager__SetExternalTexture (System_String_o* key, UnityEngine_Texture2D_o* texture, bool persistent, const MethodInfo* method);
// 0x44beeb0

void ApplicationManagers_ResourceManager__SetExternalTexture
               (System_String_o *key,UnityEngine_Texture2D_o *texture,bool_conflict persistent,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  bool_conflict bVar4;
  System_Byte_array *data;
  UnityEngine_Texture2D_o *__this;
  undefined8 *puVar5;
  MethodInfo *method_00;
  uint extraout_EDX;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  
  pSVar6 = (System_String_o *)texture;
  if (g_data_057aea85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea85 = '\x01';
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) goto label_044bef3a;
label_044beedb:
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  else {
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) != 0) goto label_044beedb;
label_044bef3a:
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_044bf004:
    pSVar7 = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aea86 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      g_data_057aea86 = '\x01';
      iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
    }
    else {
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
    }
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar6 = pSVar7;
      bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar2,(Il2CppObject *)pSVar7,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar4 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar6 = pSVar7;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar2,(Il2CppObject *)pSVar7,MethodInfo_Boolean_Remove);
        pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
        if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet_object___Remove(pSVar3,(Il2CppObject *)pSVar7,MethodInfo_Boolean_Remove);
          return;
        }
      }
    }
    pSVar7 = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aea87 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
      g_data_057aea87 = '\x01';
    }
    bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pSVar6 = pSVar7;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar2,(Il2CppObject *)pSVar6,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar4 == '\0') {
        bVar4 = System_IO_File__Exists(pSVar7,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          data = System_IO_File__ReadAllBytes(pSVar7,(MethodInfo *)0x0);
          __this = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
          method_00 = (MethodInfo *)&g_data_00000004;
          UnityEngine_Texture2D___ctor_4dd9130(__this,2,2,4,0,(MethodInfo *)0x0);
          bVar4 = UnityEngine_ImageConversion__LoadImage_4e3d4f0(__this,data,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            ApplicationManagers_ResourceManager__SetExternalTexture
                      (pSVar6,__this,extraout_EDX & 0xff,method_00);
          }
        }
        return;
      }
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___get_Item
                  (pSVar2,(Il2CppObject *)pSVar6,MethodInfo_Texture2D_get_Item);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    puVar5 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar5 = pSVar6->klass;
    __cxa_throw(puVar5,&PTR_PTR_05215060,0);
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (pSVar2,(Il2CppObject *)key,(Il2CppObject *)texture,MethodInfo_Void_set_Item);
  if ((char)persistent != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_String_o *)0x0;
      UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)texture,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)key,MethodInfo_Boolean_Add);
        return;
      }
      goto label_044bf004;
    }
  }
  return;
}


// ApplicationManagers.ResourceManager$$RemoveExternalTexture
// il2cpp: void ApplicationManagers_ResourceManager__RemoveExternalTexture (System_String_o* key, const MethodInfo* method);
// 0x44bf010

void ApplicationManagers_ResourceManager__RemoveExternalTexture(System_String_o *key,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  bool_conflict bVar3;
  System_Byte_array *data;
  UnityEngine_Texture2D_o *__this_00;
  undefined8 *puVar4;
  MethodInfo *pMVar5;
  uint extraout_EDX;
  
  if (g_data_057aea86 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea86 = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method = (MethodInfo *)key;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      method = (MethodInfo *)key;
      System_Collections_Generic_Dictionary_object__object___Remove(pSVar2,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
      __this = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
      if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Remove(__this,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
  pMVar5 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057aea87 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty((System_String_o *)method,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    method = pMVar5;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)method,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      bVar3 = System_IO_File__Exists((System_String_o *)pMVar5,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        data = System_IO_File__ReadAllBytes((System_String_o *)pMVar5,(MethodInfo *)0x0);
        __this_00 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
        pMVar5 = (MethodInfo *)&g_data_00000004;
        UnityEngine_Texture2D___ctor_4dd9130(__this_00,2,2,4,0,(MethodInfo *)0x0);
        bVar3 = UnityEngine_ImageConversion__LoadImage_4e3d4f0(__this_00,data,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ApplicationManagers_ResourceManager__SetExternalTexture
                    ((System_String_o *)method,__this_00,extraout_EDX & 0xff,pMVar5);
        }
      }
      return;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                (pSVar2,(Il2CppObject *)method,MethodInfo_Texture2D_get_Item);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = (System_String_c *)method->methodPointer;
  __cxa_throw(puVar4,&PTR_PTR_05215060,0);
}


// ApplicationManagers.ResourceManager$$LoadExternalTexture
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_ResourceManager__LoadExternalTexture (System_String_o* filePath, System_String_o* cacheKey, bool persistent, const MethodInfo* method);
// 0x44bf140

UnityEngine_Texture2D_o *
ApplicationManagers_ResourceManager__LoadExternalTexture
          (System_String_o *filePath,System_String_o *cacheKey,bool_conflict persistent,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_Texture2D_o *pUVar3;
  System_Byte_array *data;
  undefined8 *puVar4;
  MethodInfo *method_00;
  
  if (g_data_057aea87 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057aea87 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(cacheKey,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    cacheKey = filePath;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)cacheKey,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      bVar2 = System_IO_File__Exists(filePath,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        data = System_IO_File__ReadAllBytes(filePath,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
        method_00 = (MethodInfo *)&g_data_00000004;
        UnityEngine_Texture2D___ctor_4dd9130(pUVar3,2,2,4,0,(MethodInfo *)0x0);
        bVar2 = UnityEngine_ImageConversion__LoadImage_4e3d4f0(pUVar3,data,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ApplicationManagers_ResourceManager__SetExternalTexture(cacheKey,pUVar3,persistent & 0xff,method_00)
          ;
          return pUVar3;
        }
      }
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar3 = (UnityEngine_Texture2D_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)cacheKey,MethodInfo_Texture2D_get_Item);
      return pUVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = cacheKey->klass;
  __cxa_throw(puVar4,&PTR_PTR_05215060,0);
}


// ApplicationManagers.ResourceManager$$ClearExternalTextureCache
// il2cpp: void ApplicationManagers_ResourceManager__ClearExternalTextureCache (const MethodInfo* method);
// 0x44bf400

void ApplicationManagers_ResourceManager__ClearExternalTextureCache(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar7;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar8;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (g_data_057aea88 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_U);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057aea88 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  x = (UnityEngine_Object_o *)0x0;
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bf5ec;
  __this_04 = System_Collections_Generic_Dictionary_object__object___get_Values(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_U);
  if (__this_04 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
  goto label_044bf5ec;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
             __this_04,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
  pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)local_40._8_8_;
  while (x = local_30, __this_00.fields._8_8_ = pSVar7, __this_00.fields._dictionary = pSVar6,
        __this_00.fields._currentValue = (Il2CppObject *)x,
        bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (__this_00,(MethodInfo_3251CB0 *)&stack0xffffffffffffffa8), (char)bVar3 != '\0') {
    pUVar8 = x;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    local_30 = pUVar8;
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__DestroyImmediate_4e01e00(x,(MethodInfo *)0x0);
      local_30 = pUVar8;
    }
  }
  __this_01.fields._8_8_ = pSVar7;
  __this_01.fields._dictionary = pSVar6;
  __this_01.fields._currentValue = (Il2CppObject *)x;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_01,(MethodInfo_3251CA0 *)&stack0xffffffffffffffa8);
  do {
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8)
    ;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar1,MethodInfo_Void_Clear);
      __this = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
      if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Clear(__this,MethodInfo_Void_Clear);
        return;
      }
    }
label_044bf5ec:
    auVar5 = il2cpp_runtime_helper_022b2c90();
    if (auVar5._8_4_ != 1) goto label_044bf64a;
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pSVar7;
    __this_02.fields._dictionary = pSVar6;
    __this_02.fields._currentValue = (Il2CppObject *)x;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffffa8);
  } while (lVar2 == 0);
  il2cpp_runtime_helper_022fefe0(lVar2);
label_044bf64a:
  __this_03.fields._8_8_ = pSVar7;
  __this_03.fields._dictionary = pSVar6;
  __this_03.fields._currentValue = (Il2CppObject *)x;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar5._0_8_);
}


// ApplicationManagers.ResourceManager$$ClearNonPersistentTextures
// il2cpp: void ApplicationManagers_ResourceManager__ClearNonPersistentTextures (const MethodInfo* method);
// 0x44bf680

void ApplicationManagers_ResourceManager__ClearNonPersistentTextures(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Object_array *pSVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_06;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *__this_07;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  Il2CppMethodPointer pIVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *pIVar14;
  char *in_stack_ffffffffffffff70;
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (g_data_057aea89 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_UnityE);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_UnityEngine_Texture2D_get_C);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea89 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar12 = (Il2CppMethodPointer)0x0;
  pIVar13 = (Il2CppObject *)0x0;
  __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_07,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044bfad8;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(&local_58,pSVar3,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_UnityE);
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)local_58.fields._dictionary;
  if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) {
    do {
      __this_03.fields._8_8_ = pIVar12;
      __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
      __this_03.fields._current.fields.key = pIVar13;
      __this_03.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
      __this_03.fields._32_8_ = pSVar15;
      bVar7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this_03,(MethodInfo_3251160 *)&stack0xffffffffffffff78);
      if ((char)bVar7 == '\0') goto label_044bfa14;
      auVar9 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_UnityEngine_Texture2D_get_C);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
      if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_044bface;
      bVar7 = System_Collections_Generic_HashSet_object___Contains(pSVar4,auVar9._0_8_,MethodInfo_Boolean_Contains);
    } while ((char)bVar7 != '\0');
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality(auVar9._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__DestroyImmediate_4e01e00(auVar9._8_8_,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    while (__this_02.fields._8_8_ = pIVar12,
          __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
          __this_02.fields._current.fields.key = pIVar13,
          __this_02.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70,
          __this_02.fields._32_8_ = pSVar15,
          bVar7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                            (__this_02,(MethodInfo_3251160 *)&stack0xffffffffffffff78), (char)bVar7 != '\0') {
      auVar9 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_UnityEngine_Texture2D_get_C);
      pIVar14 = auVar9._0_8_;
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
      if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_044bface;
      bVar7 = System_Collections_Generic_HashSet_object___Contains(pSVar4,pIVar14,MethodInfo_Boolean_Contains);
      if ((char)bVar7 == '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = UnityEngine_Object__op_Inequality(auVar9._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__DestroyImmediate_4e01e00(auVar9._8_8_,(MethodInfo *)0x0);
        }
        lVar6 = MethodInfo_Void_Add;
        piVar1 = &(__this_07->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_07->fields)._items;
        if (pSVar5 == (System_Object_array *)0x0) {
          do {
            il2cpp_runtime_helper_022b2c90();
label_044bfad8:
            do {
              auVar10 = il2cpp_runtime_helper_022b2c90();
              if (auVar10._8_4_ != 1) {
                __this_06.fields._8_8_ = pIVar12;
                __this_06.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
                __this_06.fields._current.fields.key = pIVar13;
                __this_06.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
                __this_06.fields._32_8_ = pSVar15;
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                          (__this_06,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
label_044bfc9b:
                _Unwind_Resume(auVar10._0_8_);
              }
              plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
              lVar6 = *plVar8;
              __cxa_end_catch();
              __this_05.fields._8_8_ = pIVar12;
              __this_05.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
              __this_05.fields._current.fields.key = pIVar13;
              __this_05.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
              __this_05.fields._32_8_ = pSVar15;
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                        (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
              if (lVar6 != 0) {
                il2cpp_runtime_helper_022fefe0(lVar6);
                __this_01.fields._8_8_ = pIVar12;
                __this_01.fields._list = pSVar11;
                __this_01.fields._current = pIVar13;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
                goto label_044bfc9b;
              }
label_044bfa28:
            } while (__this_07 == (System_Collections_Generic_List_object__o *)0x0);
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff58,__this_07,
                       MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
            __this_07 = (System_Collections_Generic_List_object__o *)&MethodInfo_Boolean_Remove;
            pIVar14 = pIVar13;
            while( true ) {
              __this.fields._8_8_ = pIVar12;
              __this.fields._list = pSVar11;
              __this.fields._current = pIVar14;
              bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
              if ((char)bVar7 == '\0') {
                __this_00.fields._8_8_ = pIVar12;
                __this_00.fields._list = pSVar11;
                __this_00.fields._current = pIVar14;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
                return;
              }
              pIVar13 = pIVar14;
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
              if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
              System_Collections_Generic_Dictionary_object__object___Remove(pSVar3,pIVar14,MethodInfo_Boolean_Remove);
              pIVar14 = pIVar13;
            }
            il2cpp_runtime_helper_022b2c90();
label_044bface:
            il2cpp_runtime_helper_022b2c90();
          } while( true );
        }
        uVar2 = (__this_07->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this_07->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = pIVar14;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2,pIVar14);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_07,pIVar14,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
label_044bfa14:
  __this_04.fields._8_8_ = pIVar12;
  __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
  __this_04.fields._current.fields.key = pIVar13;
  __this_04.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
  __this_04.fields._32_8_ = pSVar15;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
  goto label_044bfa28;
}


// ApplicationManagers.ResourceManager$$GetExternalTextureCacheCount
// il2cpp: int32_t ApplicationManagers_ResourceManager__GetExternalTextureCacheCount (const MethodInfo* method);
// 0x44bfcc0

int32_t ApplicationManagers_ResourceManager__GetExternalTextureCacheCount(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Threading_ManualResetEvent_o *pSVar2;
  int32_t iVar3;
  int32_t extraout_EAX;
  UnityEngine_MonoBehaviour_o *__this_00;
  
  if (g_data_057aea8a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea8a = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ResourceManager[7].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ResourceManager[7].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = (TypeInfo_ResourceManager[5].fields.m_CancellationTokenSource)->monitor;
  }
  else {
    __this = (TypeInfo_ResourceManager[5].fields.m_CancellationTokenSource)->monitor;
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aea8b == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      g_data_057aea8b = '\x01';
      iVar1 = *(int *)((long)&TypeInfo_ResourceManager[7].klass + 4);
    }
    else {
      iVar1 = *(int *)((long)&TypeInfo_ResourceManager[7].klass + 4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar2 = ((TypeInfo_ResourceManager[5].fields.m_CancellationTokenSource)->fields)._kernelEvent;
      __this_00 = TypeInfo_ResourceManager;
    }
    else {
      pSVar2 = ((TypeInfo_ResourceManager[5].fields.m_CancellationTokenSource)->fields)._kernelEvent;
      __this_00 = TypeInfo_ResourceManager;
    }
    if (pSVar2 == (System_Threading_ManualResetEvent_o *)0x0) {
      TypeInfo_ResourceManager = __this_00;
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    TypeInfo_ResourceManager = __this_00;
    return *(int32_t *)&(pSVar2->fields).safeWaitHandle;
  }
  iVar3 = System_Collections_Generic_Dictionary_object__object___get_Count(__this,MethodInfo_Int32_get_Count);
  return iVar3;
}


// ApplicationManagers.ResourceManager$$GetPersistentTextureCacheCount
// il2cpp: int32_t ApplicationManagers_ResourceManager__GetPersistentTextureCacheCount (const MethodInfo* method);
// 0x44bfd50

int32_t ApplicationManagers_ResourceManager__GetPersistentTextureCacheCount(MethodInfo *method)

{
  int iVar1;
  System_Threading_ManualResetEvent_o *pSVar2;
  int32_t extraout_EAX;
  UnityEngine_MonoBehaviour_o *__this;
  
  if (g_data_057aea8b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea8b = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_ResourceManager[7].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_ResourceManager[7].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = ((TypeInfo_ResourceManager[5].fields.m_CancellationTokenSource)->fields)._kernelEvent;
    __this = TypeInfo_ResourceManager;
  }
  else {
    pSVar2 = ((TypeInfo_ResourceManager[5].fields.m_CancellationTokenSource)->fields)._kernelEvent;
    __this = TypeInfo_ResourceManager;
  }
  if (pSVar2 != (System_Threading_ManualResetEvent_o *)0x0) {
    TypeInfo_ResourceManager = __this;
    return *(int32_t *)&(pSVar2->fields).safeWaitHandle;
  }
  TypeInfo_ResourceManager = __this;
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
  return extraout_EAX;
}


// ApplicationManagers.ResourceManager$$.ctor
// il2cpp: void ApplicationManagers_ResourceManager___ctor (ApplicationManagers_ResourceManager_o* __this, const MethodInfo* method);
// 0x44bfde0

void ApplicationManagers_ResourceManager___ctor
               (ApplicationManagers_ResourceManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ResourceManager$$.cctor
// il2cpp: void ApplicationManagers_ResourceManager___cctor (const MethodInfo* method);
// 0x44bfdf0

void ApplicationManagers_ResourceManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057aea8c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Texture2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Texture2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057aea8c = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Object);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_Object);
  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ResourceManager + 0xb8),pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Texture2D);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_Texture2D);
  lVar1 = *(long *)(TypeInfo_ResourceManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_ResourceManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x10) = __this;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,__this);
  return;
}


