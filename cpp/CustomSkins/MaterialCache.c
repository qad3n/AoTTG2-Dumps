// Type: CustomSkins.MaterialCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/MaterialCache.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/MaterialCache.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.MaterialCache$$Init
// il2cpp: void CustomSkins_MaterialCache__Init (const MethodInfo* method);
// 0x42483d0

void CustomSkins_MaterialCache__Init(MethodInfo *method)

{
  long lVar1;
  UnityEngine_Material_o *__this;
  Il2CppObject *pIVar2;
  
  if (DAT_057051e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    il2cpp_init_method_metadata(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&"TransparentMaterial");
    il2cpp_init_method_metadata(&"Map/Materials");
    DAT_057051e2 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     ("Map/Materials","TransparentMaterial",0,MethodInfo_Material_InstantiateAsset_Material);
  if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_MaterialCache + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x10) = pIVar2;
  il2cpp_runtime_glue(lVar1 + 0x10);
  __this = *(UnityEngine_Material_o **)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 0x10);
  if (__this != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Material__set_color(__this,(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.MaterialCache$$Clear
// il2cpp: void CustomSkins_MaterialCache__Clear (const MethodInfo* method);
// 0x42484c0

void CustomSkins_MaterialCache__Clear(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_057051e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    DAT_057051e3 = '\x01';
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this,MethodInfo_Void_Clear);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.MaterialCache$$ContainsKey
// il2cpp: bool CustomSkins_MaterialCache__ContainsKey (System_String_o* rendererId, System_String_o* url, const MethodInfo* method);
// 0x4246340

bool_conflict
CustomSkins_MaterialCache__ContainsKey
          (System_String_o *rendererId,System_String_o *url,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar2;
  System_String_o *key;
  
  if (DAT_057051e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    DAT_057051e4 = '\x01';
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  if (DAT_057051e7 == '\0') {
    il2cpp_init_method_metadata(&",");
    DAT_057051e7 = '\x01';
  }
  key = System_String__Concat(rendererId,",",url,(MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (__this,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
  return bVar2;
}


// CustomSkins.MaterialCache$$GetMaterial
// il2cpp: UnityEngine_Material_o* CustomSkins_MaterialCache__GetMaterial (System_String_o* rendererId, System_String_o* url, const MethodInfo* method);
// 0x4246430

UnityEngine_Material_o *
CustomSkins_MaterialCache__GetMaterial
          (System_String_o *rendererId,System_String_o *url,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *key;
  UnityEngine_Material_o *pUVar2;
  
  if (DAT_057051e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    DAT_057051e5 = '\x01';
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MaterialCache + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  if (DAT_057051e7 == '\0') {
    il2cpp_init_method_metadata(&",");
    DAT_057051e7 = '\x01';
  }
  key = System_String__Concat(rendererId,",",url,(MethodInfo *)0x0);
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar2 = (UnityEngine_Material_o *)
           System_Collections_Generic_Dictionary<object__object>__get_Item
                     (__this,(Il2CppObject *)key,MethodInfo_Material_get_Item);
  return pUVar2;
}


// CustomSkins.MaterialCache$$SetMaterial
// il2cpp: void CustomSkins_MaterialCache__SetMaterial (System_String_o* rendererId, System_String_o* url, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x4247660

void CustomSkins_MaterialCache__SetMaterial
               (System_String_o *rendererId,System_String_o *url,UnityEngine_Material_o *material,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  System_String_o *key;
  
  if (DAT_057051e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    DAT_057051e6 = '\x01';
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) != 0) goto LAB_0424768e;
LAB_04247709:
    il2cpp_init_class();
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) goto LAB_04247709;
LAB_0424768e:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary<object__object>__get_Count(pSVar1,MethodInfo_Int32_get_Count);
    if (*(int *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 8) < iVar2) {
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)
          **(undefined8 **)(TypeInfo_MaterialCache + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0424786a;
      System_Collections_Generic_Dictionary<object__object>__Clear
                ((System_Collections_Generic_Dictionary_object__object__o *)
                 **(undefined8 **)(TypeInfo_MaterialCache + 0xb8),MethodInfo_Void_Clear);
    }
    if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057051e7 == '\0') {
      il2cpp_init_method_metadata(&",");
      DAT_057051e7 = '\x01';
    }
    key = System_String__Concat(rendererId,",",url,(MethodInfo *)0x0);
    if ((System_Collections_Generic_Dictionary_object__object__o *)
        **(undefined8 **)(TypeInfo_MaterialCache + 0xb8) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)
                         **(undefined8 **)(TypeInfo_MaterialCache + 0xb8),(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               **(undefined8 **)(TypeInfo_MaterialCache + 0xb8);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        if ((char)bVar3 == '\0') {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (pSVar1,(Il2CppObject *)key,(Il2CppObject *)material,MethodInfo_Void_Add);
          return;
        }
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar1,(Il2CppObject *)key,(Il2CppObject *)material,MethodInfo_Void_set_Item);
        return;
      }
    }
  }
LAB_0424786a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.MaterialCache$$GetId
// il2cpp: System_String_o* CustomSkins_MaterialCache__GetId (System_String_o* rendererId, System_String_o* url, const MethodInfo* method);
// 0x4248550

System_String_o *
CustomSkins_MaterialCache__GetId
          (System_String_o *rendererId,System_String_o *url,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057051e7 == '\0') {
    il2cpp_init_method_metadata(&",");
    DAT_057051e7 = '\x01';
  }
  pSVar1 = System_String__Concat(rendererId,",",url,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomSkins.MaterialCache$$.ctor
// il2cpp: void CustomSkins_MaterialCache___ctor (CustomSkins_MaterialCache_o* __this, const MethodInfo* method);
// 0x42485a0

void CustomSkins_MaterialCache___ctor(CustomSkins_MaterialCache_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.MaterialCache$$.cctor
// il2cpp: void CustomSkins_MaterialCache___cctor (const MethodInfo* method);
// 0x42485b0

void CustomSkins_MaterialCache___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_057051e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Material);
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    DAT_057051e8 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Material);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  **(undefined8 **)(TypeInfo_MaterialCache + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MaterialCache + 0xb8),__this);
  *(undefined4 *)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 8) = 200;
  return;
}


