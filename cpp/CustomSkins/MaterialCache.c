// Type: CustomSkins.MaterialCache
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomSkins/MaterialCache.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/MaterialCache.cs
// --------------------------------

// CustomSkins.MaterialCache$$Init
// il2cpp: void CustomSkins_MaterialCache__Init (const MethodInfo* method);
// 0x181e93590

void CustomSkins_MaterialCache__Init(MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344fba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TransparentMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"Map/Materials");
    Il2CppMethodInitialized_184344fba = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar1 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     ("Map/Materials","TransparentMaterial",false,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  TypeInfo_CustomSkins_MaterialCache->static_fields->TransparentMaterial = pUVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_MaterialCache->static_fields->TransparentMaterial,pUVar1);
  pUVar1 = TypeInfo_CustomSkins_MaterialCache->static_fields->TransparentMaterial;
  if (pUVar1 != (UnityEngine_Material_o *)0x0) {
    local_18.r = 0.0;
    local_18.g = 0.0;
    local_18.b = 0.0;
    local_18.a = 0.0;
    UnityEngine_Material__set_color(pUVar1,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomSkins.MaterialCache$$Clear
// il2cpp: void CustomSkins_MaterialCache__Clear (const MethodInfo* method);
// 0x181e93240

void CustomSkins_MaterialCache__Clear(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  System_Collections_Generic_List_string__o *pSVar2;
  
  if (Il2CppMethodInitialized_184344fbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_184344fbb = '\x01';
  }
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  __this = TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial;
  if (__this != (System_Collections_Generic_Dictionary_string__Material__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_Clear);
    pSVar2 = TypeInfo_CustomSkins_MaterialCache->static_fields->_ids;
    if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
      length = (pSVar2->fields)._size;
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.MaterialCache$$ContainsKey
// il2cpp: bool CustomSkins_MaterialCache__ContainsKey (System_String_o* rendererId, System_String_o* url, const MethodInfo* method);
// 0x181e93300

bool CustomSkins_MaterialCache__ContainsKey
               (System_String_o *rendererId,System_String_o *url,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *id;
  UnityEngine_Material_o *x;
  
  if (Il2CppMethodInitialized_184344fbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344fbc = '\x01';
  }
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  if (Il2CppMethodInitialized_184344fc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_184344fc0 = '\x01';
  }
  id = System_String__Concat_1969b70(rendererId,",",url,(MethodInfo *)0x0);
  __this = TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial;
  if (__this != (System_Collections_Generic_Dictionary_string__Material__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    if (bVar1) {
      if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181e93469;
      x = System_Collections_Generic_Dictionary_object__object___get_Item
                    (__this_00,(Il2CppObject *)id,
                     (MethodInfo_147A5B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return true;
      }
      if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
      }
      CustomSkins_MaterialCache__Remove(id,(MethodInfo *)0x0);
    }
    return false;
  }
label_181e93469:
  ThrowNullReferenceException();
}


// CustomSkins.MaterialCache$$GetMaterial
// il2cpp: UnityEngine_Material_o* CustomSkins_MaterialCache__GetMaterial (System_String_o* rendererId, System_String_o* url, const MethodInfo* method);
// 0x181e934c0

UnityEngine_Material_o *
CustomSkins_MaterialCache__GetMaterial(System_String_o *rendererId,System_String_o *url,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *key;
  UnityEngine_Material_o *pUVar1;
  
  if (Il2CppMethodInitialized_184344fbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_184344fbd = '\x01';
  }
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial;
  if (Il2CppMethodInitialized_184344fc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_184344fc0 = '\x01';
  }
  key = System_String__Concat_1969b70(rendererId,",",url,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this,(Il2CppObject *)key,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    return pUVar1;
  }
  ThrowNullReferenceException();
}


// CustomSkins.MaterialCache$$SetMaterial
// il2cpp: void CustomSkins_MaterialCache__SetMaterial (System_String_o* rendererId, System_String_o* url, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x181e93740
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9386c: nop dword ptr [rax]

void CustomSkins_MaterialCache__SetMaterial
               (System_String_o *rendererId,System_String_o *url,UnityEngine_Material_o *material,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  System_String_o *key;
  System_String_o *id;
  
  if (Il2CppMethodInitialized_184344fbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_184344fbe = '\x01';
  }
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  if (Il2CppMethodInitialized_184344fc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_184344fc0 = '\x01';
  }
  key = System_String__Concat_1969b70(rendererId,",",url,(MethodInfo *)0x0);
  __this = TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial;
  if (__this != (System_Collections_Generic_Dictionary_string__Material__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    if (bVar2) {
label_181e938ee:
      if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_00,(Il2CppObject *)key,(Il2CppObject *)material,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item);
        return;
      }
    }
    else {
      if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
      }
      pSVar1 = TypeInfo_CustomSkins_MaterialCache->static_fields->_ids;
      if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
        il2cpp_runtime_helper_180012890(pSVar1,key,MethodInfo_System_Collections_Generic_List_string_Add);
        while( true ) {
          if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
          }
          pSVar1 = TypeInfo_CustomSkins_MaterialCache->static_fields->_ids;
          if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) break;
          if ((pSVar1->fields)._size <= TypeInfo_CustomSkins_MaterialCache->static_fields->MaxItems)
          goto label_181e938ee;
          if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
          }
          pSVar1 = TypeInfo_CustomSkins_MaterialCache->static_fields->_ids;
          if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) break;
          id = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
          CustomSkins_MaterialCache__Remove(id,(MethodInfo *)0x0);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.MaterialCache$$Remove
// il2cpp: void CustomSkins_MaterialCache__Remove (System_String_o* id, const MethodInfo* method);
// 0x181e93690

void CustomSkins_MaterialCache__Remove(System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184344fbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_184344fbf = '\x01';
  }
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Remove
              (__this,(Il2CppObject *)id,
               (MethodInfo_1470BF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_Remove);
    __this_00 = TypeInfo_CustomSkins_MaterialCache->static_fields->_ids;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)id,
                 (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_string_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.MaterialCache$$GetId
// il2cpp: System_String_o* CustomSkins_MaterialCache__GetId (System_String_o* rendererId, System_String_o* url, const MethodInfo* method);
// 0x181e93470

System_String_o *
CustomSkins_MaterialCache__GetId(System_String_o *rendererId,System_String_o *url,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344fc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_184344fc0 = '\x01';
  }
  pSVar1 = System_String__Concat_1969b70(rendererId,",",url,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomSkins.MaterialCache$$.ctor
// il2cpp: void CustomSkins_MaterialCache___ctor (CustomSkins_MaterialCache_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomSkins_MaterialCache___ctor(CustomSkins_MaterialCache_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.MaterialCache$$.cctor
// il2cpp: void CustomSkins_MaterialCache___cctor (const MethodInfo* method);
// 0x181e93940

void CustomSkins_MaterialCache___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184344fc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_184344fc1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_MaterialCache->static_fields->_IdToMaterial,__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  TypeInfo_CustomSkins_MaterialCache->static_fields->_ids = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_MaterialCache->static_fields->_ids,__this_00);
  TypeInfo_CustomSkins_MaterialCache->static_fields->MaxItems = 200;
  return;
}


