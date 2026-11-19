// Type: CustomSkins.MaterialCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/CustomSkins/MaterialCache.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/MaterialCache.cs
// --------------------------------

// CustomSkins.MaterialCache$$Init
// il2cpp: void CustomSkins_MaterialCache__Init (const MethodInfo* method);
// 0x59656a0

void CustomSkins_MaterialCache__Init(MethodInfo *method)

{
  CustomSkins_MaterialCache_StaticFields *pCVar1;
  UnityEngine_Material_o *pUVar2;
  
  if (Il2CppMethodInitialized_07545949 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TransparentMaterial");
    il2cpp_codegen_initialize_runtime_metadata(&"Map/Materials");
    Il2CppMethodInitialized_07545949 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar2 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     ("Map/Materials","TransparentMaterial",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_Material);
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  pCVar1 = TypeInfo_CustomSkins_MaterialCache->static_fields;
  pCVar1->TransparentMaterial = pUVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->TransparentMaterial);
  pUVar2 = TypeInfo_CustomSkins_MaterialCache->static_fields->TransparentMaterial;
  if (pUVar2 == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__set_color(pUVar2,(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
  return;
}


// CustomSkins.MaterialCache$$Clear
// il2cpp: void CustomSkins_MaterialCache__Clear (const MethodInfo* method);
// 0x5965790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59657bc: jmp 0x59658ca

void CustomSkins_MaterialCache__Clear(MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  int32_t length;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__long__o *__this;
  System_Collections_Generic_List_string__o *pSVar4;
  CustomSkins_MaterialCache_StaticFields *pCVar5;
  
  if (Il2CppMethodInitialized_0754594a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_long_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_0754594a = '\x01';
    uVar2 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomSkins_MaterialCache->static_fields->_idToMaterial;
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache)->static_fields;
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar3,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_Material_Clear);
    __this = TypeInfo_CustomSkins_MaterialCache->static_fields->_idToBytes;
    if (__this != (System_Collections_Generic_Dictionary_string__long__o *)0x0) {
      System_Collections_Generic_Dictionary_object__long___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (MethodInfo_4AA5850 *)MethodInfo_System_Collections_Generic_Dictionary_string_long_Clear);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomSkins_MaterialCache->static_fields->_idToDownloadOwner;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Clear
                  (pSVar3,(MethodInfo_4AAD690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_Clear);
        pCVar5 = TypeInfo_CustomSkins_MaterialCache->static_fields;
        pSVar4 = pCVar5->_ids;
        if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          length = (pSVar4->fields)._size;
          (pSVar4->fields)._size = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
            pCVar5 = TypeInfo_CustomSkins_MaterialCache->static_fields;
          }
          pCVar5->_totalBytes = 0;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.MaterialCache$$GetId
// il2cpp: System_String_o* CustomSkins_MaterialCache__GetId (System_String_o* rendererId, System_String_o* url, const MethodInfo* method);
// 0x59632b0

System_String_o *
CustomSkins_MaterialCache__GetId(System_String_o *rendererId,System_String_o *url,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754594b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_0754594b = '\x01';
  }
  pSVar1 = System_String__Concat_5301f10(rendererId,",",url,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomSkins.MaterialCache$$ContainsKey
// il2cpp: bool CustomSkins_MaterialCache__ContainsKey (System_String_o* id, const MethodInfo* method);
// 0x5963300

bool CustomSkins_MaterialCache__ContainsKey(System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *x;
  bool bVar1;
  MethodInfo *method_00;
  UnityEngine_Object_o *local_20;
  
  if (Il2CppMethodInitialized_0754594c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754594c = '\x01';
  }
  local_20 = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomSkins_MaterialCache->static_fields->_idToMaterial;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this,(Il2CppObject *)id,(Il2CppObject **)&local_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_TryGetValue);
  x = local_20;
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return true;
    }
    if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    }
    CustomSkins_MaterialCache__Remove(id,method_00);
  }
  return false;
}


// CustomSkins.MaterialCache$$GetMaterial
// il2cpp: UnityEngine_Material_o* CustomSkins_MaterialCache__GetMaterial (System_String_o* id, const MethodInfo* method);
// 0x59633f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5963423: jmp 0x5963531

UnityEngine_Material_o * CustomSkins_MaterialCache__GetMaterial(System_String_o *id,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *pMVar6;
  UnityEngine_Material_o *pUVar7;
  
  if (Il2CppMethodInitialized_0754594d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_0754594d = '\x01';
    uVar2 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    pSVar4 = TypeInfo_CustomSkins_MaterialCache->static_fields->_ids;
  }
  else {
    pSVar4 = *(System_Collections_Generic_List_string__o **)
              ((long)((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache)->static_fields + 0x18);
  }
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)id,
               (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_string_Remove);
    pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = TypeInfo_CustomSkins_MaterialCache->static_fields->_ids;
    if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (pSVar4->fields)._items;
      if (pSVar5 != (System_String_array *)0x0) {
        uVar3 = (pSVar4->fields)._size;
        if (uVar3 < (uint)pSVar5->max_length) {
          (pSVar4->fields)._size = uVar3 + 1;
          pSVar5->m_Items[(int)uVar3] = id;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)id,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        }
        __this = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_CustomSkins_MaterialCache->static_fields->_idToMaterial;
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pUVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (__this,(Il2CppObject *)id,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
          return pUVar7;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.MaterialCache$$SetMaterial
// il2cpp: void CustomSkins_MaterialCache__SetMaterial (System_String_o* id, UnityEngine_Material_o* material, UnityEngine_Texture_o* texture, const MethodInfo* method);
// 0x59649e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5964a24: jmp 0x5964c66

void CustomSkins_MaterialCache__SetMaterial
               (System_String_o *id,UnityEngine_Material_o *material,UnityEngine_Texture_o *texture,
               MethodInfo *method)

{
  int32_t *piVar1;
  int64_t *piVar2;
  uint32_t uVar3;
  uint uVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_Dictionary_string__long__o *__this;
  System_String_array *pSVar6;
  bool bVar7;
  int64_t value;
  System_Collections_Generic_List_string__o *pSVar8;
  System_String_o *id_00;
  CustomSkins_MaterialCache_StaticFields *pCVar9;
  MethodInfo *pMVar10;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754594e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_long_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_0754594e = '\x01';
    uVar3 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomSkins_MaterialCache->static_fields->_idToMaterial;
  }
  else {
    pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache)->static_fields;
  }
  if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pMVar10 = (MethodInfo *)id;
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar5,(Il2CppObject *)id,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    if (bVar7) {
      if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
      }
      CustomSkins_MaterialCache__Remove(id,pMVar10);
    }
    if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    }
    value = CustomSkins_MaterialCache__GetTextureBytes(texture,pMVar10);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomSkins_MaterialCache->static_fields->_idToMaterial;
    if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar5,(Il2CppObject *)id,(Il2CppObject *)material,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Material_set_Item);
      __this = TypeInfo_CustomSkins_MaterialCache->static_fields->_idToBytes;
      if (__this != (System_Collections_Generic_Dictionary_string__long__o *)0x0) {
        System_Collections_Generic_Dictionary_object__long___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)id,value,
                   (MethodInfo_4AA5680 *)MethodInfo_System_Collections_Generic_Dictionary_string_long_set_Item
                  );
        pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
        pSVar8 = TypeInfo_CustomSkins_MaterialCache->static_fields->_ids;
        if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar8->fields)._items;
          if (pSVar6 != (System_String_array *)0x0) {
            uVar4 = (pSVar8->fields)._size;
            if (uVar4 < (uint)pSVar6->max_length) {
              (pSVar8->fields)._size = uVar4 + 1;
              pSVar6->m_Items[(int)uVar4] = id;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)id,
                         (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
            }
            klass = (Il2CppClass *)TypeInfo_CustomSkins_MaterialCache;
            piVar2 = &TypeInfo_CustomSkins_MaterialCache->static_fields->_totalBytes;
            *piVar2 = *piVar2 + value;
            while( true ) {
              if ((klass->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(klass);
                klass = (Il2CppClass *)TypeInfo_CustomSkins_MaterialCache;
              }
              pCVar9 = klass->static_fields;
              if (pCVar9->_totalBytes < 0x20000001) {
                return;
              }
              if ((klass->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(klass);
                pCVar9 = TypeInfo_CustomSkins_MaterialCache->static_fields;
                klass = (Il2CppClass *)TypeInfo_CustomSkins_MaterialCache;
              }
              pSVar8 = pCVar9->_ids;
              if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) break;
              if ((pSVar8->fields)._size < 2) {
                return;
              }
              if ((klass->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(klass);
                pSVar8 = TypeInfo_CustomSkins_MaterialCache->static_fields->_ids;
                if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) break;
              }
              pMVar10 = (MethodInfo *)0x0;
              id_00 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar8,0,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_string_get_Item);
              CustomSkins_MaterialCache__Remove(id_00,pMVar10);
              klass = (Il2CppClass *)TypeInfo_CustomSkins_MaterialCache;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.MaterialCache$$IsDownloading
// il2cpp: bool CustomSkins_MaterialCache__IsDownloading (System_String_o* id, const MethodInfo* method);
// 0x5964740

bool CustomSkins_MaterialCache__IsDownloading(System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *x;
  bool bVar1;
  bool bVar2;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_0754594f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754594f = '\x01';
  }
  local_18 = (UnityEngine_Object_o *)0x0;
  if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomSkins_MaterialCache->static_fields->_idToDownloadOwner;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05964815:
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this,(Il2CppObject *)id,(Il2CppObject **)&local_18,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_TryGetValue);
  x = local_18;
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = false;
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (local_18 == (UnityEngine_Object_o *)0x0) goto label_05964815;
      bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled
                        ((UnityEngine_Behaviour_o *)local_18,(MethodInfo *)0x0);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// CustomSkins.MaterialCache$$SetDownloading
// il2cpp: void CustomSkins_MaterialCache__SetDownloading (System_String_o* id, UnityEngine_MonoBehaviour_o* owner, const MethodInfo* method);
// 0x5964820

void CustomSkins_MaterialCache__SetDownloading
               (System_String_o *id,UnityEngine_MonoBehaviour_o *owner,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_07545950 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_07545950 = '\x01';
    uVar1 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomSkins_MaterialCache->static_fields->_idToDownloadOwner;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache)->static_fields + 0x10);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this,(Il2CppObject *)id,(Il2CppObject *)owner,
             (MethodInfo_4AAD4C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_set_Item);
  return;
}


// CustomSkins.MaterialCache$$ClearDownloading
// il2cpp: void CustomSkins_MaterialCache__ClearDownloading (System_String_o* id, const MethodInfo* method);
// 0x5964940

void CustomSkins_MaterialCache__ClearDownloading(System_String_o *id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_07545951 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_07545951 = '\x01';
    uVar1 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomSkins_MaterialCache->static_fields->_idToDownloadOwner;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache)->static_fields + 0x10);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Remove
            (__this,(Il2CppObject *)id,
             (MethodInfo_4AAED10 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_Remove);
  return;
}


// CustomSkins.MaterialCache$$GetTextureBytes
// il2cpp: int64_t CustomSkins_MaterialCache__GetTextureBytes (UnityEngine_Texture_o* texture, const MethodInfo* method);
// 0x5965a10

int64_t CustomSkins_MaterialCache__GetTextureBytes(UnityEngine_Texture_o *texture,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_07545952 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545952 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  lVar5 = 0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (texture == (UnityEngine_Texture_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar2 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                      (texture,(texture->klass->vtable)._5_get_width.method);
    iVar3 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                      (texture,(texture->klass->vtable)._7_get_height.method);
    iVar4 = UnityEngine_Texture__get_mipmapCount(texture,(MethodInfo *)0x0);
    if (iVar4 < 2) {
      lVar5 = (long)iVar3 * (long)iVar2 * 4;
    }
    else {
      lVar5 = ((long)iVar3 * (long)iVar2 * 0x10) / 3;
    }
  }
  return lVar5;
}


// CustomSkins.MaterialCache$$Remove
// il2cpp: void CustomSkins_MaterialCache__Remove (System_String_o* id, const MethodInfo* method);
// 0x59658d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5965904: jmp 0x5965a0b

void CustomSkins_MaterialCache__Remove(System_String_o *id,MethodInfo *method)

{
  uint32_t uVar1;
  CustomSkins_MaterialCache_StaticFields *pCVar2;
  System_Collections_Generic_Dictionary_string__long__o *pSVar3;
  long lVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_string__o *__this_00;
  int64_t iVar5;
  
  if (Il2CppMethodInitialized_07545953 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_long_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_long_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_07545953 = '\x01';
    uVar1 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
    pCVar2 = TypeInfo_CustomSkins_MaterialCache->static_fields;
    pSVar3 = pCVar2->_idToBytes;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache)->static_fields;
    pSVar3 = pCVar2->_idToBytes;
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_string__long__o *)0x0) {
    lVar4 = pCVar2->_totalBytes;
    iVar5 = System_Collections_Generic_Dictionary_object__long___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)id,
                       (MethodInfo_4AA5610 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_long_get_Item);
    pCVar2 = TypeInfo_CustomSkins_MaterialCache->static_fields;
    pCVar2->_totalBytes = lVar4 - iVar5;
    __this = (System_Collections_Generic_Dictionary_object__object__o *)pCVar2->_idToMaterial;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this,(Il2CppObject *)id,
                 (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_Remove
                );
      pSVar3 = TypeInfo_CustomSkins_MaterialCache->static_fields->_idToBytes;
      if (pSVar3 != (System_Collections_Generic_Dictionary_string__long__o *)0x0) {
        System_Collections_Generic_Dictionary_object__long___Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)id,
                   (MethodInfo_4AA6E30 *)MethodInfo_System_Collections_Generic_Dictionary_string_long_Remove);
        __this_00 = TypeInfo_CustomSkins_MaterialCache->static_fields->_ids;
        if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)id,
                     (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_string_Remove);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomSkins.MaterialCache$$.ctor
// il2cpp: void CustomSkins_MaterialCache___ctor (CustomSkins_MaterialCache_o* __this, const MethodInfo* method);
// 0x5965ae0

void CustomSkins_MaterialCache___ctor(CustomSkins_MaterialCache_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomSkins.MaterialCache$$.cctor
// il2cpp: void CustomSkins_MaterialCache___cctor (const MethodInfo* method);
// 0x5965af0

void CustomSkins_MaterialCache___cctor(MethodInfo *method)

{
  CustomSkins_MaterialCache_StaticFields *pCVar1;
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  System_Collections_Generic_Dictionary_string__long__o *__this_00;
  System_Collections_Generic_Dictionary_string__MonoBehaviour__o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  
  if (Il2CppMethodInitialized_07545954 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_long_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Material);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_long);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_07545954 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  TypeInfo_CustomSkins_MaterialCache->static_fields->_idToMaterial = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomSkins_MaterialCache->static_fields->_idToMaterial);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_long);
  System_Collections_Generic_Dictionary_object__long____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4AA4A90 *)MethodInfo_System_Collections_Generic_Dictionary_string_long_ctor);
  pCVar1 = TypeInfo_CustomSkins_MaterialCache->static_fields;
  pCVar1->_idToBytes = __this_00;
  Il2CppCodeGenWriteBarrier(&pCVar1->_idToBytes);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_MonoBehaviour_ctor)
  ;
  pCVar1 = TypeInfo_CustomSkins_MaterialCache->static_fields;
  pCVar1->_idToDownloadOwner = __this_01;
  Il2CppCodeGenWriteBarrier(&pCVar1->_idToDownloadOwner);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pCVar1 = TypeInfo_CustomSkins_MaterialCache->static_fields;
  pCVar1->_ids = __this_02;
  Il2CppCodeGenWriteBarrier(&pCVar1->_ids);
  return;
}


