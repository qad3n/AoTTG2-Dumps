// Type: Utility.BaseComponentCache
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/BaseComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/BaseComponentCache.cs
// --------------------------------

// Utility.BaseComponentCache$$.ctor
// il2cpp: void Utility_BaseComponentCache___ctor (Utility_BaseComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x18232bdb0

void Utility_BaseComponentCache___ctor
               (Utility_BaseComponentCache_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Collider_array *pUVar3;
  UnityEngine_Collider_o *item;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_Collider__o *pSVar5;
  System_Collections_Generic_Dictionary_string__AudioSource__o *__this_00;
  UnityEngine_Transform_o *value;
  UnityEngine_Rigidbody_o *value_00;
  Photon_Pun_PhotonView_o *value_01;
  System_Object_array *pSVar6;
  uint uVar7;
  
  if (Il2CppMethodInitialized_1843477d5 == '\0') {
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
    Il2CppMethodInitialized_1843477d5 = '\x01';
  }
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  (__this->fields).Colliders = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Colliders,pSVar5);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_AudioSource);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ctor);
  (__this->fields).AudioSources = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AudioSources,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (owner != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__get_transform(owner,(MethodInfo *)0x0);
    (__this->fields).Transform = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Transform,value);
    value_00 = UnityEngine_GameObject__GetComponent_object_
                         (owner,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody)
    ;
    (__this->fields).Rigidbody = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Rigidbody,value_00);
    value_01 = UnityEngine_GameObject__GetComponent_object_
                         (owner,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_PhotonView
                         );
    (__this->fields).PhotonView = value_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonView,value_01);
    pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                       (owner,(MethodInfo_6F5810 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar7 = 0;
      do {
        pMVar4 = MethodInfo_System_Collections_Generic_List_Collider_Add;
        if ((int)pSVar6->max_length <= (int)uVar7) {
          return;
        }
        if ((uint)pSVar6->max_length <= uVar7) {
label_18232bfae:
          ThrowIndexOutOfRangeException();
        }
        pSVar5 = (__this->fields).Colliders;
        if (pSVar5 == (System_Collections_Generic_List_Collider__o *)0x0) break;
        pUVar3 = (pSVar5->fields)._items;
        item = (UnityEngine_Collider_o *)pSVar6->m_Items[(int)uVar7];
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        if (pUVar3 == (UnityEngine_Collider_array *)0x0) break;
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          if ((uint)pUVar3->max_length <= uVar2) goto label_18232bfae;
          pUVar3->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
          uVar7 = uVar7 + 1;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
          uVar7 = uVar7 + 1;
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Utility.BaseComponentCache$$LoadAudio
// il2cpp: void Utility_BaseComponentCache__LoadAudio (Utility_BaseComponentCache_o* __this, System_String_o* prefab, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x18232bbe0

void Utility_BaseComponentCache__LoadAudio
               (Utility_BaseComponentCache_o *__this,System_String_o *prefab,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this_03;
  System_String_o *pSVar4;
  uint uVar5;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_1843477d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    Il2CppMethodInitialized_1843477d6 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this_02 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar4,prefab,false,
                         (MethodInfo_795F00 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(pUVar2,parent,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_38[0].x = (pUVar1->zeroVector).fields.x;
        local_38[0].y = (pUVar1->zeroVector).fields.y;
        local_38[0].z = (pUVar1->zeroVector).fields.z;
        UnityEngine_Transform__set_localPosition(pUVar2,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
        pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                           (__this_02,
                            (MethodInfo_6F5810 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_AudioSource);
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar5 = 0;
          while( true ) {
            if ((int)pSVar3->max_length <= (int)uVar5) {
              return;
            }
            if ((uint)pSVar3->max_length <= uVar5) {
              ThrowIndexOutOfRangeException();
            }
            __this_00 = (UnityEngine_Component_o *)pSVar3->m_Items[(int)uVar5];
            if (__this_00 == (UnityEngine_Component_o *)0x0) break;
            __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields).AudioSources;
            __this_03 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
            if (__this_03 == (UnityEngine_Object_o *)0x0) break;
            pSVar4 = UnityEngine_Object__get_name(__this_03,(MethodInfo *)0x0);
            if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___Add
                      (__this_01,(Il2CppObject *)pSVar4,(Il2CppObject *)__this_00,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_Add);
            uVar5 = uVar5 + 1;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


