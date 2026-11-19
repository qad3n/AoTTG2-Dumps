// Type: Utility.BaseComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/BaseComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/BaseComponentCache.cs
// --------------------------------

// Utility.BaseComponentCache$$.ctor
// il2cpp: void Utility_BaseComponentCache___ctor (Utility_BaseComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x5dcb650

void Utility_BaseComponentCache___ctor
               (Utility_BaseComponentCache_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  System_Collections_Generic_List_Collider__o **targetAddress;
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Collider_o *item;
  UnityEngine_Collider_array *pUVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_Collider__o *pSVar5;
  System_Collections_Generic_Dictionary_string__AudioSource__o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Rigidbody_o *pUVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  System_Object_array *pSVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (Il2CppMethodInitialized_07548280 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_PhotonView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Collider);
    Il2CppMethodInitialized_07548280 = '\x01';
  }
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  targetAddress = &(__this->fields).Colliders;
  (__this->fields).Colliders = pSVar5;
  Il2CppCodeGenWriteBarrier(targetAddress);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_AudioSource);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ctor);
  (__this->fields).AudioSources = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AudioSources);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform(owner,(MethodInfo *)0x0);
    (__this->fields).Transform = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Transform);
    pUVar7 = UnityEngine_GameObject__GetComponent_object_
                       (owner,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
    (__this->fields).Rigidbody = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Rigidbody);
    pPVar8 = UnityEngine_GameObject__GetComponent_object_
                       (owner,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_PhotonView)
    ;
    (__this->fields).PhotonView = pPVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonView);
    pSVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                       (owner,(MethodInfo_353C030 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    if (pSVar9 != (System_Object_array *)0x0) {
      if (0 < (int)pSVar9->max_length) {
        uVar10 = pSVar9->max_length & 0xffffffff;
        uVar11 = 0;
        do {
          pMVar4 = MethodInfo_System_Collections_Generic_List_Collider_Add;
          if (uVar10 <= uVar11) {
            ThrowIndexOutOfRangeException();
          }
          pSVar5 = *targetAddress;
          if (pSVar5 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_05dcb856;
          item = (UnityEngine_Collider_o *)pSVar9->m_Items[uVar11];
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (pSVar5->fields)._items;
          if (pUVar3 == (UnityEngine_Collider_array *)0x0) goto label_05dcb856;
          uVar2 = (pSVar5->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (pSVar5->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          uVar11 = uVar11 + 1;
          uVar2 = (uint)pSVar9->max_length;
          uVar10 = (ulong)uVar2;
        } while ((long)uVar11 < (long)(int)uVar2);
      }
      return;
    }
  }
label_05dcb856:
  ThrowNullReferenceException();
}


// Utility.BaseComponentCache$$LoadAudio
// il2cpp: void Utility_BaseComponentCache__LoadAudio (Utility_BaseComponentCache_o* __this, System_String_o* prefab, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5de0dc0

void Utility_BaseComponentCache__LoadAudio
               (Utility_BaseComponentCache_o *__this,System_String_o *prefab,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  uint uVar1;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this_03;
  System_String_o *pSVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_07548281 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    Il2CppMethodInitialized_07548281 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_02 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar4,prefab,false,false,
                         (MethodInfo_3665790 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar2,parent,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar2,(UnityEngine_Vector3_o)
                          (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0);
        pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                           (__this_02,
                            (MethodInfo_353C030 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_AudioSource);
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar1 = (uint)pSVar3->max_length;
          if (0 < (int)uVar1) {
            uVar5 = 0;
            do {
              if (uVar1 <= uVar5) {
                ThrowIndexOutOfRangeException();
              }
              __this_00 = (UnityEngine_Component_o *)pSVar3->m_Items[(int)uVar5];
              if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_05de0f8e;
              __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields).AudioSources;
              __this_03 = (UnityEngine_Object_o *)
                          UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
              if (__this_03 == (UnityEngine_Object_o *)0x0) goto label_05de0f8e;
              pSVar4 = UnityEngine_Object__get_name(__this_03,(MethodInfo *)0x0);
              if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_05de0f8e;
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)__this_00,
                         (MethodInfo_4AAD4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_Add);
              uVar5 = uVar5 + 1;
              uVar1 = (uint)pSVar3->max_length;
            } while ((int)uVar5 < (int)uVar1);
          }
          return;
        }
      }
    }
  }
label_05de0f8e:
  ThrowNullReferenceException();
}


