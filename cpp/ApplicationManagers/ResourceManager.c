// Type: ApplicationManagers.ResourceManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/ResourceManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/ResourceManager.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.ResourceManager$$ClearCache
// il2cpp: void ApplicationManagers_ResourceManager__ClearCache (const MethodInfo* method);
// 0x41a5cc0

void ApplicationManagers_ResourceManager__ClearCache(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_05704cb2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704cb2 = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this,MethodInfo_Void_Clear);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ResourceManager$$LoadText
// il2cpp: System_String_o* ApplicationManagers_ResourceManager__LoadText (System_String_o* path, System_String_o* name, const MethodInfo* method);
// 0x41a5d50

System_String_o *
ApplicationManagers_ResourceManager__LoadText
          (System_String_o *path,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar2;
  MethodInfo *in_RCX;
  
  if (DAT_05704cb3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_TextAsset);
    DAT_05704cb3 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = ApplicationManagers_ResourceManager__LoadAsset(path,name,0,in_RCX);
  if (__this != (UnityEngine_Object_o *)0x0) {
    bVar1 = (TypeInfo_TextAsset->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_TextAsset)) {
      pSVar2 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this,(MethodInfo *)0x0);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ResourceManager$$TryLoadText
// il2cpp: System_String_o* ApplicationManagers_ResourceManager__TryLoadText (System_String_o* path, System_String_o* name, const MethodInfo* method);
// 0x41a11b0

System_String_o *
ApplicationManagers_ResourceManager__TryLoadText
          (System_String_o *path,System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05704cb4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704cb4 = '\x01';
    method = extraout_RDX;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
    method = extraout_RDX_00;
  }
  pSVar1 = ApplicationManagers_ResourceManager__LoadText(path,name,method);
  return pSVar1;
}


// ApplicationManagers.ResourceManager$$LoadAsset
// il2cpp: UnityEngine_Object_o* ApplicationManagers_ResourceManager__LoadAsset (System_String_o* path, System_String_o* name, bool cached, const MethodInfo* method);
// 0x41a2dc0

UnityEngine_Object_o *
ApplicationManagers_ResourceManager__LoadAsset
          (System_String_o *path,System_String_o *name,bool_conflict cached,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  UnityEngine_Texture2D_o *x;
  UnityEngine_Object_o *pUVar2;
  MethodInfo *method_00;
  
  if (DAT_05704cb5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"");
    DAT_05704cb5 = '\x01';
  }
  method_00 = "";
  bVar1 = System_String__op_Inequality(path,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    method_00 = "/";
    name = System_String__Concat(path,(System_String_o *)"/",name,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = ApplicationManagers_ResourceManager__GetExternalTexture(name,method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if ((char)cached != '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)
          **(undefined8 **)(TypeInfo_ResourceManager + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_041a301f;
      bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if ((System_Collections_Generic_Dictionary_object__object__o *)
            **(undefined8 **)(TypeInfo_ResourceManager + 0xb8) ==
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_041a301f;
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)name,(Il2CppObject *)x,
                   MethodInfo_Void_set_Item);
      }
    }
    return (UnityEngine_Object_o *)x;
  }
  if ((char)cached == '\0') {
    pUVar2 = UnityEngine_Resources__Load(name,(MethodInfo *)0x0);
    return pUVar2;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_ResourceManager + 0xb8);
      pUVar2 = UnityEngine_Resources__Load(name,(MethodInfo *)0x0);
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_041a301f;
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (__this,(Il2CppObject *)name,(Il2CppObject *)pUVar2,MethodInfo_Void_set_Item);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)
        **(undefined8 **)(TypeInfo_ResourceManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar2 = (UnityEngine_Object_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_ResourceManager + 0xb8),(Il2CppObject *)name,MethodInfo_Object_get_Item);
      return pUVar2;
    }
  }
LAB_041a301f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ResourceManager$$InstantiateAsset<object>
// il2cpp: Il2CppObject* ApplicationManagers_ResourceManager__InstantiateAsset_object_ (System_String_o* path, System_String_o* name, bool cached, const MethodInfo_2578A90* method);
// 0x2678a90

Il2CppObject *
ApplicationManagers_ResourceManager__InstantiateAsset<object>
          (System_String_o *path,System_String_o *name,bool_conflict cached,
          MethodInfo_2578A90 *method)

{
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  
  if (method->rgctx_data == (MethodInfo_2578A90_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    if (method->rgctx_data == (MethodInfo_2578A90_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
      goto joined_r0x02678add;
    }
  }
  iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
joined_r0x02678add:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(path,name,cached & 0xff,(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = UnityEngine_Object__Instantiate(pUVar2,(MethodInfo *)0x0);
  pIVar3 = method->rgctx_data->_0_T;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar3);
  }
  if (pUVar2 == (UnityEngine_Object_o *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
  }
  else {
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(pUVar2,pIVar3);
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar2,pIVar3);
    }
  }
  return pIVar4;
}


// ApplicationManagers.ResourceManager$$InstantiateAsset<object>
// il2cpp: Il2CppObject* ApplicationManagers_ResourceManager__InstantiateAsset_object_ (System_String_o* path, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, bool cached, const MethodInfo_2578B90* method);
// 0x2678b90

Il2CppObject *
ApplicationManagers_ResourceManager__InstantiateAsset<object>
          (System_String_o *path,System_String_o *name,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o rotation,bool_conflict cached,MethodInfo_2578B90 *method)

{
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  
  if (method->rgctx_data == (MethodInfo_2578B90_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    if (method->rgctx_data == (MethodInfo_2578B90_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
      goto joined_r0x02678bf6;
    }
  }
  iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
joined_r0x02678bf6:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pUVar2 = ApplicationManagers_ResourceManager__LoadAsset(path,name,cached & 0xff,(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = UnityEngine_Object__Instantiate(pUVar2,position,rotation,(MethodInfo *)0x0);
  pIVar3 = method->rgctx_data->_0_T;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar3);
  }
  if (pUVar2 == (UnityEngine_Object_o *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
  }
  else {
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(pUVar2,pIVar3);
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar2,pIVar3);
    }
  }
  return pIVar4;
}


// ApplicationManagers.ResourceManager$$GetExternalTexture
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_ResourceManager__GetExternalTexture (System_String_o* key, const MethodInfo* method);
// 0x41a5e00

UnityEngine_Texture2D_o *
ApplicationManagers_ResourceManager__GetExternalTexture(System_String_o *key,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_Texture2D_o *pUVar4;
  
  if (DAT_05704cb6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Texture2D_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704cb6 = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar4 = (UnityEngine_Texture2D_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar2,(Il2CppObject *)key,MethodInfo_Texture2D_get_Item);
      return pUVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ResourceManager$$SetExternalTexture
// il2cpp: void ApplicationManagers_ResourceManager__SetExternalTexture (System_String_o* key, UnityEngine_Texture2D_o* texture, bool persistent, const MethodInfo* method);
// 0x41a5ef0

void ApplicationManagers_ResourceManager__SetExternalTexture
               (System_String_o *key,UnityEngine_Texture2D_o *texture,bool_conflict persistent,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05704cb7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704cb7 = '\x01';
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) goto LAB_041a5f7a;
LAB_041a5f1b:
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) != 0) goto LAB_041a5f1b;
LAB_041a5f7a:
    il2cpp_init_class();
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this,(Il2CppObject *)key,(Il2CppObject *)texture,MethodInfo_Void_set_Item);
    if ((char)persistent != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)texture,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                     (*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
        if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet<object>__Add
                    (__this_00,(Il2CppObject *)key,MethodInfo_Boolean_Add);
          return;
        }
        goto LAB_041a6044;
      }
    }
    return;
  }
LAB_041a6044:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ResourceManager$$RemoveExternalTexture
// il2cpp: void ApplicationManagers_ResourceManager__RemoveExternalTexture (System_String_o* key, const MethodInfo* method);
// 0x41a6050

void ApplicationManagers_ResourceManager__RemoveExternalTexture
               (System_String_o *key,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  bool_conflict bVar3;
  
  if (DAT_05704cb8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704cb8 = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Remove
                (pSVar2,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
      __this = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
      if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Remove(__this,(Il2CppObject *)key,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ResourceManager$$LoadExternalTexture
// il2cpp: UnityEngine_Texture2D_o* ApplicationManagers_ResourceManager__LoadExternalTexture (System_String_o* filePath, System_String_o* cacheKey, bool persistent, const MethodInfo* method);
// 0x41a6180

UnityEngine_Texture2D_o *
ApplicationManagers_ResourceManager__LoadExternalTexture
          (System_String_o *filePath,System_String_o *cacheKey,bool_conflict persistent,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_Texture2D_o *pUVar3;
  System_Byte_array *data;
  MethodInfo *method_00;
  
  if (DAT_05704cb9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Texture2D_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_05704cb9 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(cacheKey,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    cacheKey = filePath;
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)cacheKey,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      bVar2 = System_IO_File__Exists(filePath,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        data = System_IO_File__ReadAllBytes(filePath,(MethodInfo *)0x0);
        pUVar3 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
        method_00 = (MethodInfo *)0x4;
        UnityEngine_Texture2D___ctor(pUVar3,2,2,4,0,(MethodInfo *)0x0);
        bVar2 = UnityEngine_ImageConversion__LoadImage(pUVar3,data,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          ApplicationManagers_ResourceManager__SetExternalTexture
                    (cacheKey,pUVar3,persistent & 0xff,method_00);
          return pUVar3;
        }
      }
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar3 = (UnityEngine_Texture2D_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)cacheKey,MethodInfo_Texture2D_get_Item);
      return pUVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ResourceManager$$ClearExternalTextureCache
// il2cpp: void ApplicationManagers_ResourceManager__ClearExternalTextureCache (const MethodInfo* method);
// 0x41a6440

void ApplicationManagers_ResourceManager__ClearExternalTextureCache(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar5;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (DAT_05704cba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Texture2D_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05704cba = '\x01';
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_02 = System_Collections_Generic_Dictionary<object__object>__get_Values
                          (pSVar1,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )local_40,__this_02,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
      pSVar4 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
               local_40._8_8_;
      while( true ) {
        x = local_30;
        __this_00.fields._8_8_ = pSVar4;
        __this_00.fields._dictionary = pSVar3;
        __this_00.fields._currentValue = (Il2CppObject *)x;
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_00,(MethodInfo_31D09E0 *)&stack0xffffffffffffffa8);
        if ((char)bVar2 == '\0') break;
        pUVar5 = x;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        local_30 = pUVar5;
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Object__DestroyImmediate(x,(MethodInfo *)0x0);
          local_30 = pUVar5;
        }
      }
      __this_01.fields._8_8_ = pSVar4;
      __this_01.fields._dictionary = pSVar3;
      __this_01.fields._currentValue = (Il2CppObject *)x;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                (__this_01,(MethodInfo_31D09D0 *)&stack0xffffffffffffffa8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Clear(pSVar1,MethodInfo_Void_Clear);
        __this = *(System_Collections_Generic_HashSet_object__o **)
                  (*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
        if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet<object>__Clear(__this,MethodInfo_Void_Clear);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ResourceManager$$ClearNonPersistentTextures
// il2cpp: void ApplicationManagers_ResourceManager__ClearNonPersistentTextures (const MethodInfo* method);
// 0x41a66c0

void ApplicationManagers_ResourceManager__ClearNonPersistentTextures(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  long lVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *__this_04;
  undefined1 auVar8 [16];
  System_Collections_Generic_List_T__o *pSVar9;
  Il2CppMethodPointer pIVar10;
  Il2CppObject *key;
  Il2CppObject *pIVar11;
  char *in_stack_ffffffffffffff70;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (DAT_05704cbb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_UnityEngine_Texture);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Texture2D_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704cbb = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__GetEnumerator
              (&local_58,pSVar3,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_58.fields._dictionary;
    if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
      while( true ) {
        __this_02.fields._8_8_ = pIVar10;
        __this_02.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
        __this_02.fields._current.fields.key = key;
        __this_02.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
        __this_02.fields._32_8_ = pSVar12;
        bVar7 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                          (__this_02,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78);
        if ((char)bVar7 == '\0') break;
        auVar8 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_UnityEngine_Texture);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                  (*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
        if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_041a6b0e;
        bVar7 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar4,auVar8._0_8_,MethodInfo_Boolean_Contains);
        if ((char)bVar7 == '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            (auVar8._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Object__DestroyImmediate(auVar8._8_8_,(MethodInfo *)0x0);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    else {
      while( true ) {
        __this_01.fields._8_8_ = pIVar10;
        __this_01.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
        __this_01.fields._current.fields.key = key;
        __this_01.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
        __this_01.fields._32_8_ = pSVar12;
        bVar7 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                          (__this_01,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78);
        if ((char)bVar7 == '\0') break;
        auVar8 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_UnityEngine_Texture);
        pIVar11 = auVar8._0_8_;
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                  (*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
        if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) {
LAB_041a6b0e:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar7 = System_Collections_Generic_HashSet<object>__Contains(pSVar4,pIVar11,MethodInfo_Boolean_Contains);
        if ((char)bVar7 == '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            (auVar8._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Object__DestroyImmediate(auVar8._8_8_,(MethodInfo *)0x0);
          }
          lVar6 = MethodInfo_Void_Add;
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_04->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_04->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_04->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pIVar11;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,pIVar11);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_04,pIVar11,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    __this_03.fields._8_8_ = pIVar10;
    __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
    __this_03.fields._current.fields.key = key;
    __this_03.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
    __this_03.fields._32_8_ = pSVar12;
    System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
              (__this_03,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff58,
                 __this_04,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
      while( true ) {
        __this.fields._8_8_ = pIVar10;
        __this.fields._list = pSVar9;
        __this.fields._current = key;
        bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffff58);
        if ((char)bVar7 == '\0') {
          __this_00.fields._8_8_ = pIVar10;
          __this_00.fields._list = pSVar9;
          __this_00.fields._current = key;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_00,(MethodInfo_3185E10 *)&stack0xffffffffffffff58);
          return;
        }
        pIVar11 = key;
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary<object__object>__Remove(pSVar3,key,MethodInfo_Boolean_Remove);
        key = pIVar11;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ResourceManager$$GetExternalTextureCacheCount
// il2cpp: int32_t ApplicationManagers_ResourceManager__GetExternalTextureCacheCount (const MethodInfo* method);
// 0x41a6d00

int32_t ApplicationManagers_ResourceManager__GetExternalTextureCacheCount(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  int32_t iVar2;
  
  if (DAT_05704cbc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704cbc = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_ResourceManager + 0xb8) + 8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary<object__object>__get_Count(__this,MethodInfo_Int32_get_Count);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ResourceManager$$GetPersistentTextureCacheCount
// il2cpp: int32_t ApplicationManagers_ResourceManager__GetPersistentTextureCacheCount (const MethodInfo* method);
// 0x41a6d90

int32_t ApplicationManagers_ResourceManager__GetPersistentTextureCacheCount(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05704cbd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704cbd = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_ResourceManager + 0xb8) + 0x10);
  }
  if (lVar2 != 0) {
    return *(int32_t *)(lVar2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.ResourceManager$$.ctor
// il2cpp: void ApplicationManagers_ResourceManager___ctor (ApplicationManagers_ResourceManager_o* __this, const MethodInfo* method);
// 0x41a6e20

void ApplicationManagers_ResourceManager___ctor
               (ApplicationManagers_ResourceManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.ResourceManager$$.cctor
// il2cpp: void ApplicationManagers_ResourceManager___cctor (const MethodInfo* method);
// 0x41a6e30

void ApplicationManagers_ResourceManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05704cbe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Texture2D);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Texture2D);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704cbe = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Object);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_Object);
  **(undefined8 **)(TypeInfo_ResourceManager + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ResourceManager + 0xb8),pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Texture2D);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_Texture2D);
  lVar1 = *(long *)(TypeInfo_ResourceManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_ResourceManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x10) = __this;
  il2cpp_runtime_glue(lVar1 + 0x10,__this);
  return;
}


