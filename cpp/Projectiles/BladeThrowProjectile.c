// Type: Projectiles.BladeThrowProjectile
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/BladeThrowProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/BladeThrowProjectile.cs
// --------------------------------

// Projectiles.BladeThrowProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_BladeThrowProjectile__get_DestroyDelay (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x181f0e9c0

float
Projectiles_BladeThrowProjectile__get_DestroyDelay(Projectiles_BladeThrowProjectile_o* __this, MethodInfo* method)

{
  return 1.5;
}


// Projectiles.BladeThrowProjectile$$Awake
// il2cpp: void Projectiles_BladeThrowProjectile__Awake (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x181f0fe00

void Projectiles_BladeThrowProjectile__Awake(Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *value;
  MeleeWeaponTrail_o *pMVar4;
  
  if (Il2CppMethodInitialized_1843454e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_MeleeWeaponTrail);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"Model");
    Il2CppMethodInitialized_1843454e1 = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Blade",(MethodInfo *)0x0);
    (__this->fields)._blade = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._blade,pUVar3);
    pUVar3 = (__this->fields)._blade;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Model",(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        value = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
        (__this->fields)._model = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._model,value);
        pMVar4 = UnityEngine_Component__GetComponentInChildren_object__664b50
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_664B50 *)
                            MethodInfo_UnityEngine_Component_GetComponentInChildren_MeleeWeaponTrail);
        (__this->fields).WeaponTrail = pMVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).WeaponTrail,pMVar4);
        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
        if (((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
            (pSVar2 = (pSVar1->fields).WeaponTrail, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
           (pMVar4 = (__this->fields).WeaponTrail, pMVar4 != (MeleeWeaponTrail_o *)0x0)) {
          (pMVar4->fields)._emit = (pSVar2->fields)._value != 0;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.BladeThrowProjectile$$Start
// il2cpp: void Projectiles_BladeThrowProjectile__Start (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x181f117f0

void Projectiles_BladeThrowProjectile__Start(Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Characters_BaseCharacter_c *pCVar3;
  MeleeWeaponTrail_o *pMVar4;
  longlong lVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_1843454e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843454e2 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar6) || (pCVar2 = (__this->fields)._owner, pCVar2 == (Characters_BaseCharacter_o *)0x0)) {
    return;
  }
  pCVar3 = pCVar2->klass;
  bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if ((pCVar3->_2).typeHierarchyDepth < bVar1) {
    return;
  }
  if ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human) {
    return;
  }
  if ((((__this->fields)._owner)->fields).EffectsEnabled == false) {
    pMVar4 = (__this->fields).WeaponTrail;
    if (pMVar4 == (MeleeWeaponTrail_o *)0x0) goto label_181f11950;
    (pMVar4->fields)._emit = false;
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar6 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)(pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
    if (!bVar6) {
      return;
    }
    pCVar2 = (__this->fields)._owner;
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar2);
      }
      lVar5 = *(longlong *)&(*(uint8_t *)((char *)pCVar2 + 0x148));
      if (((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x178), lVar5 != 0)) &&
         (pMVar4 = (__this->fields).WeaponTrail, pMVar4 != (MeleeWeaponTrail_o *)0x0)) {
        MeleeWeaponTrail__SetMaterial(pMVar4,*(UnityEngine_Material_o **)(lVar5 + 0x28),(MethodInfo *)0x0);
        return;
      }
    }
  }
label_181f11950:
  ThrowNullReferenceException();
}


// Projectiles.BladeThrowProjectile$$RegisterObjects
// il2cpp: void Projectiles_BladeThrowProjectile__RegisterObjects (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x181f11750

void Projectiles_BladeThrowProjectile__RegisterObjects
               (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_o *item;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_1843454e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    Il2CppMethodInitialized_1843454e3 = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  __this_00 = (__this->fields)._hideObjects;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    item = (__this->fields)._model;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_00->fields)._items;
    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if ((uint)pUVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
      (__this_00->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pUVar3->max_length) {
        pUVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.BladeThrowProjectile$$DisableRPC
// il2cpp: void Projectiles_BladeThrowProjectile__DisableRPC (Projectiles_BladeThrowProjectile_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181f112c0

void Projectiles_BladeThrowProjectile__DisableRPC
               (Projectiles_BladeThrowProjectile_o *__this,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if ((__this->fields).Disabled == false) {
    pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((info->fields).Sender == (pPVar1->fields)._Owner_k__BackingField) {
      local_28.timeInt = (info->fields).timeInt;
      local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
      local_28.Sender = (info->fields).Sender;
      local_28.photonView = (info->fields).photonView;
      Projectiles_BaseProjectile__DisableRPC
                ((Projectiles_BaseProjectile_o *)__this,(Photon_Pun_PhotonMessageInfo_o *)&local_28,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


// Projectiles.BladeThrowProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_BladeThrowProjectile__OnCollisionEnter (Projectiles_BladeThrowProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x181f11330

void Projectiles_BladeThrowProjectile__OnCollisionEnter
               (Projectiles_BladeThrowProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  float fVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  bool bVar8;
  Photon_Pun_PhotonView_o *pPVar9;
  UnityEngine_Collider_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  Characters_BaseCharacter_o *a;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Quaternion_o *pUVar13;
  UnityEngine_AudioSource_o *__this_00;
  UnityEngine_Quaternion_Fields *position;
  System_String_o *pSVar14;
  UnityEngine_Quaternion_Fields *rotation;
  UnityEngine_Quaternion_Fields local_58;
  UnityEngine_Quaternion_Fields local_48;
  UnityEngine_Quaternion_o local_38 [3];
  
  if (Il2CppMethodInitialized_1843454e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"BladeHit");
    Il2CppMethodInitialized_1843454e4 = '\x01';
  }
  pPVar9 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar9 == (Photon_Pun_PhotonView_o *)0x0) goto label_181f1174a;
  if ((pPVar9->fields)._IsMine_k__BackingField == false) {
    return;
  }
  if ((__this->fields).Disabled != false) {
    return;
  }
  if ((((collision == (UnityEngine_Collision_o *)0x0) ||
       (pUVar10 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_Collider_o *)0x0)) ||
      (pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
      pUVar11 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar11 = UnityEngine_Transform__GetRoot(pUVar11,(MethodInfo *)0x0),
     pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_181f1174a;
  a = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)pUVar11,
                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pSVar14 = TypeInfo_Effects_EffectPrefabs->static_fields->BladeThrowHit;
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_181f1174a;
    pUVar12 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_48,pUVar11,(MethodInfo *)0x0);
    local_48.x = (__this->fields)._velocity.fields.x;
    local_48.y = (__this->fields)._velocity.fields.y;
    uVar2._0_4_ = (pUVar12->fields).x;
    uVar2._4_4_ = (pUVar12->fields).y;
    fVar4 = (pUVar12->fields).z;
    local_48.z = (__this->fields)._velocity.fields.z;
    local_58.x = 0.0;
    local_58.y = 0.0;
    local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_58.x = (pUVar5->upVector).fields.x;
    local_58.y = (pUVar5->upVector).fields.y;
    local_58.z = (pUVar5->upVector).fields.z;
    pUVar13 = UnityEngine_Quaternion__Internal_LookRotation
                        (local_38,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,
                         (MethodInfo *)0x0);
    uVar6._0_4_ = (pUVar13->fields).x;
    uVar6._4_4_ = (pUVar13->fields).y;
    uVar7._0_4_ = (pUVar13->fields).z;
    uVar7._4_4_ = (pUVar13->fields).w;
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    }
    rotation = &local_58;
    position = &local_48;
    local_48.z = fVar4;
    local_58._0_8_ = uVar6;
    local_58._8_8_ = uVar7;
    local_48._0_8_ = uVar2;
label_181f11684:
    Effects_EffectSpawner__Spawn
              (pSVar14,(UnityEngine_Vector3_o *)position,(UnityEngine_Quaternion_o *)rotation,1.0,true,
               (System_Object_array *)0x0,(MethodInfo *)0x0);
  }
  else {
    pSVar14 = (__this->fields)._team;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar8 = GameManagers_TeamInfo__SameTeam_1e76f20(a,pSVar14,(MethodInfo *)0x0);
    if ((!bVar8) && (a != (Characters_BaseCharacter_o *)0x0)) {
      bVar3 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar3 <= (a->klass->_2).typeHierarchyDepth) &&
         ((a->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan))
      {
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        }
        pSVar14 = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
        pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_181f1174a;
        pUVar12 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_48,pUVar11,(MethodInfo *)0x0);
        local_58.x = 4.712389;
        local_58.y = 0.0;
        local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
        uVar1._0_4_ = (pUVar12->fields).x;
        uVar1._4_4_ = (pUVar12->fields).y;
        fVar4 = (pUVar12->fields).z;
        pUVar13 = UnityEngine_Quaternion__Internal_FromEulerRad
                            ((UnityEngine_Quaternion_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,
                             (MethodInfo *)0x0);
        local_48.x = (pUVar13->fields).x;
        local_48.y = (pUVar13->fields).y;
        local_48.z = (pUVar13->fields).z;
        local_48.w = (pUVar13->fields).w;
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        rotation = &local_48;
        position = &local_58;
        local_58.z = fVar4;
        local_58._0_8_ = uVar1;
        goto label_181f11684;
      }
    }
  }
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
      (pUVar11 = UnityEngine_Transform__Find(pUVar11,"BladeHit",(MethodInfo *)0x0),
      pUVar11 != (UnityEngine_Transform_o *)0x0)) &&
     (__this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar11,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource),
     __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__Play_2eb4470(__this_00,(MethodInfo *)0x0);
    pUVar10 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
    Projectiles_BladeThrowProjectile__CheckHurtboxes(__this,pUVar10,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
              (__this,(__this->klass->vtable)._17_DestroySelf.method);
    return;
  }
label_181f1174a:
  ThrowNullReferenceException();
}


// Projectiles.BladeThrowProjectile$$CheckHurtboxes
// il2cpp: void Projectiles_BladeThrowProjectile__CheckHurtboxes (Projectiles_BladeThrowProjectile_o* __this, UnityEngine_Collider_o* firstCollider, const MethodInfo* method);
// 0x181f10140
// eh: try 0x181f10563..0x181f112aa -> pad 0x18333da80 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f11158: mov rdx, qword ptr [rip + 0x2167d71]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x181f1115f: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181f11164: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f11169: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181f1116e: test rcx, rcx
// asm:   0x181f11171: jne 0x181f112aa
// asm:   0x181f112aa: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333da80: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333da85: push rbp
// asm:   0x18333da86: sub rsp, 0x40
// asm:   0x18333da8a: mov rbp, rdx
// asm:   0x18333da8d: mov rax, qword ptr [rbp + 0xe8]
// asm:   0x18333da94: mov rcx, qword ptr [rax]
// asm:   0x18333da97: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333da9b: movabs rax, 0
// asm:   0x18333daa5: add rsp, 0x40
// asm:   0x18333daa9: pop rbp
// asm:   0x18333daaa: ret 

void Projectiles_BladeThrowProjectile__CheckHurtboxes
               (Projectiles_BladeThrowProjectile_o *__this,UnityEngine_Collider_o *firstCollider,
               MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  float fVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  Characters_BaseCharacter_o *pCVar6;
  Characters_BaseCharacter_c *pCVar7;
  UnityEngine_Object_o *y;
  UI_InGameMenu_o *pUVar8;
  Cameras_InGameCamera_o *pCVar9;
  Cameras_InGameCamera_c *pCVar10;
  System_Collections_Generic_List_object__o *__this_00;
  Utility_BaseComponentCache_o *pUVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  Il2CppObject *__this_01;
  bool bVar14;
  char cVar15;
  UnityEngine_LayerMask_o UVar16;
  int iVar17;
  UnityEngine_SphereCollider_o *__this_02;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Vector3_o *pUVar19;
  System_Int32_array *layers;
  UnityEngine_Collider_array *collection;
  System_Collections_Generic_List_Collider__o *__this_03;
  System_Collections_Generic_HashSet_Horse__o *__this_04;
  UnityEngine_GameObject_o *pUVar20;
  Characters_BaseCharacter_o *pCVar21;
  CustomLogic_CustomLogicCollisionHandler_o *__this_05;
  System_Xml_Schema_XmlSchema_o *pSVar22;
  longlong *plVar23;
  UnityEngine_AudioSource_o *__this_06;
  UnityEngine_Quaternion_o *pUVar24;
  System_String_o *pSVar25;
  int32_t damage;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  UnityEngine_Vector3_Fields local_1b8;
  UnityEngine_Vector3_Fields local_1a8;
  undefined8 local_198;
  System_Collections_Generic_List_Enumerator_object__o *local_190;
  System_Collections_Generic_List_Enumerator_object__o local_188;
  undefined8 local_168;
  float local_160;
  UnityEngine_Vector3_Fields local_158;
  UnityEngine_Vector3_Fields local_148;
  UnityEngine_Vector3_Fields local_138;
  System_Collections_Generic_List_Enumerator_T__o local_128;
  UnityEngine_Quaternion_Fields local_108;
  UnityEngine_Vector3_o local_f8;
  UnityEngine_Vector3_o local_e8;
  UnityEngine_Vector3_o local_d8;
  UnityEngine_Vector3_o local_c8;
  UnityEngine_Vector3_o local_b8 [12];
  
  if (Il2CppMethodInitialized_1843454e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_SphereCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Horse_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Horse_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Collider_ctor_408e6f8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"RestrictAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeHitNape");
    Il2CppMethodInitialized_1843454e5 = '\x01';
  }
  local_188.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_188.fields._index = 0;
  local_188.fields._version = 0;
  local_188.fields._current = (Il2CppObject *)0x0;
  __this_02 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_SphereCollider);
  if (__this_02 != (UnityEngine_SphereCollider_o *)0x0) {
    fVar26 = UnityEngine_SphereCollider__get_radius(__this_02,(MethodInfo *)0x0);
    pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
      pUVar19 = UnityEngine_Transform__get_lossyScale
                          ((UnityEngine_Vector3_o *)&local_1a8,pUVar18,(MethodInfo *)0x0);
      fVar27 = (pUVar19->fields).x;
      pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
        pUVar19 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_1a8,pUVar18,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar19->fields).x;
        uVar1._4_4_ = (pUVar19->fields).y;
        fVar4 = (pUVar19->fields).z;
        layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,3);
        if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        }
        if (layers != (System_Int32_array *)0x0) {
          if ((((int)layers->max_length == 0) ||
              (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox,
              (uint)layers->max_length < 2)) ||
             (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->Human,
             (uint)layers->max_length < 3)) {
            ThrowIndexOutOfRangeException();
          }
          layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->NPC;
          UVar16 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          UVar16 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar16.fields.m_Mask,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
          }
          local_1b8._0_8_ = uVar1;
          local_1b8.z = fVar4;
          collection = UnityEngine_Physics__OverlapSphere_2fe3980
                                 ((UnityEngine_Vector3_o *)&local_1b8,fVar26 * fVar27 * 1.3,
                                  (int32_t)UVar16.fields.m_Mask,(MethodInfo *)0x0);
          __this_03 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
          System_Collections_Generic_List_object____ctor_94fb10
                    ((System_Collections_Generic_List_object__o *)__this_03,
                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                     (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_Collider_ctor_408e6f8);
          __this_04 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Horse);
          System_Collections_Generic_HashSet_object____ctor
                    ((System_Collections_Generic_HashSet_object__o *)__this_04,
                     (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Horse_ctor);
          if (__this_03 != (System_Collections_Generic_List_Collider__o *)0x0) {
            bVar14 = System_Collections_Generic_List_object___Contains
                               ((System_Collections_Generic_List_object__o *)__this_03,
                                (Il2CppObject *)firstCollider,
                                (MethodInfo_93FC70 *)
                                MethodInfo_System_Collections_Generic_List_Collider_Contains);
            if (!bVar14) {
              il2cpp_runtime_helper_180012890(__this_03,firstCollider,MethodInfo_System_Collections_Generic_List_Collider_Add);
            }
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      (&local_128,(System_Collections_Generic_List_T__o *)__this_03,
                       (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator)
            ;
            local_188.fields._list = local_128.fields._list;
            local_188.fields._index = local_128.fields._index;
            local_188.fields._version = local_128.fields._version;
            local_188.fields._current = local_128.fields._current;
            local_198 = 0;
            local_190 = &local_188;
label_181f10580:
            do {
              do {
                do {
                  do {
                    while( true ) {
                      bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (&local_188,
                                          (MethodInfo_153A2A0 *)
                                          MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext
                                         );
                      __this_01 = local_188.fields._current;
                      if (!bVar14) {
                        System_Collections_Generic_List_Enumerator_object___Dispose
                                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_188,
                                   MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
                        return;
                      }
                      if ((UnityEngine_Object_o *)local_188.fields._current == (UnityEngine_Object_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar18 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)local_188.fields._current,
                                           (MethodInfo *)0x0);
                      if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar18 = UnityEngine_Transform__GetRoot(pUVar18,(MethodInfo *)0x0);
                      if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar20 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                      if (pUVar20 == (UnityEngine_GameObject_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pCVar21 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar20,(MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter
                                          );
                      pUVar20 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                      if (pUVar20 == (UnityEngine_GameObject_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      __this_05 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar20,(MethodInfo_6F5650 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler
                                            );
                      if (Il2CppMethodInitialized_1843454e6 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                        il2cpp_codegen_initialize_runtime_metadata(&"Blade");
                        il2cpp_codegen_initialize_runtime_metadata(&"DamageMultiplier");
                        Il2CppMethodInitialized_1843454e6 = '\x01';
                      }
                      fVar26 = (float)il2cpp_runtime_helper_180546a40(&(__this->fields).InitialPlayerVelocity,0);
                      if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
                      }
                      pSVar5 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
                      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar22 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                          (pSVar5,(MethodInfo *)"Blade");
                      if (pSVar22 == (System_Xml_Schema_XmlSchema_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      plVar23 = (longlong *)
                                (*(pSVar22->klass->vtable)._7_get_IdAttribute.methodPtr)
                                          (pSVar22,(MethodInfo *)"DamageMultiplier");
                      if (plVar23 == (longlong *)0x0) {
                        ThrowNullReferenceException();
                      }
                      fVar27 = (float)(**(code **)(*plVar23 + 0x388))(plVar23);
                      iVar17 = (int)(fVar26 * 10.0 * fVar27);
                      damage = 10;
                      if (10 < iVar17) {
                        damage = iVar17;
                      }
                      pCVar6 = (__this->fields)._owner;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar14 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if ((bVar14) &&
                         (pCVar6 = (__this->fields)._owner, pCVar6 != (Characters_BaseCharacter_o *)0x0)) {
                        pCVar7 = pCVar6->klass;
                        bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
                        if ((bVar3 <= (pCVar7->_2).typeHierarchyDepth) &&
                           ((pCVar7->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
                            (Il2CppClass *)TypeInfo_Characters_Human)) {
                          pCVar6 = (__this->fields)._owner;
                          bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
                          if (((pCVar6->klass->_2).typeHierarchyDepth < bVar3) ||
                             ((pCVar6->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
                              (Il2CppClass *)TypeInfo_Characters_Human)) {
                            il2cpp_codegen_raise_invalid_cast_exception(pCVar6);
                          }
                          if ((pCVar6->fields).CustomDamageEnabled != false) {
                            damage = (pCVar6->fields).CustomDamage;
                          }
                        }
                      }
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar14 = UnityEngine_Object__op_Inequality
                                         ((UnityEngine_Object_o *)__this_05,(UnityEngine_Object_o *)0x0,
                                          (MethodInfo *)0x0);
                      if (!bVar14) break;
                      pCVar21 = (__this->fields)._owner;
                      if (pCVar21 == (Characters_BaseCharacter_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar25 = (pCVar21->fields).RichTextName;
                      pUVar18 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar19 = UnityEngine_Transform__get_position(local_b8,pUVar18,(MethodInfo *)0x0);
                      if (__this_05 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      local_1a8.x = (pUVar19->fields).x;
                      local_1a8.y = (pUVar19->fields).y;
                      local_1a8.z = (pUVar19->fields).z;
                      CustomLogic_CustomLogicCollisionHandler__GetHit
                                (__this_05,pCVar21,pSVar25,damage,"BladeThrow",
                                 (UnityEngine_Vector3_o *)&local_1a8,(MethodInfo *)0x0);
                    }
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar14 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pCVar21,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                  } while (bVar14);
                  pCVar6 = (__this->fields)._owner;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar14 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pCVar21,(UnityEngine_Object_o *)pCVar6,
                                      (MethodInfo *)0x0);
                } while (bVar14);
                pSVar25 = (__this->fields)._team;
                if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
                }
                bVar14 = GameManagers_TeamInfo__SameTeam_1e76f20(pCVar21,pSVar25,(MethodInfo *)0x0);
              } while (bVar14);
              if (pCVar21 == (Characters_BaseCharacter_o *)0x0) {
                ThrowNullReferenceException();
              }
            } while ((pCVar21->fields).Dead != false);
            bVar3 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
            if ((bVar3 <= (pCVar21->klass->_2).typeHierarchyDepth) &&
               ((pCVar21->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
                (Il2CppClass *)TypeInfo_Characters_Horse)) goto code_r0x000181f108b2;
            goto label_181f108dd;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
code_r0x000181f108b2:
  if (__this_04 == (System_Collections_Generic_HashSet_Horse__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar14 = System_Collections_Generic_HashSet_object___Add
                     ((System_Collections_Generic_HashSet_object__o *)__this_04,(Il2CppObject *)pCVar21,
                      (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Horse_Add);
  if (bVar14) {
label_181f108dd:
    pCVar7 = pCVar21->klass;
    bVar3 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((pCVar7->_2).typeHierarchyDepth < bVar3) ||
       ((pCVar7->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      pCVar6 = (__this->fields)._owner;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar14 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar14) && (pCVar6 = (__this->fields)._owner, pCVar6 != (Characters_BaseCharacter_o *)0x0)) {
        pCVar7 = pCVar6->klass;
        bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar3 <= (pCVar7->_2).typeHierarchyDepth) &&
           ((pCVar7->_2).typeHierarchy[(ulonglong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar8 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar8 == (UI_InGameMenu_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((pUVar8->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pUVar8->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu
             )) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar8,TypeInfo_UI_InGameMenu);
          }
          UI_InGameMenu__ShowKillScore(pUVar8,damage,false,(MethodInfo *)0x0);
          pCVar6 = (__this->fields)._owner;
          pSVar25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
          il2cpp_runtime_helper_18017a990(0x5f,pCVar21,pCVar6,damage,"BladeThrow",pSVar25);
          pUVar11 = (pCVar21->fields).Cache;
          if (pUVar11 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar18 = (pUVar11->fields).Transform;
          if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar9 = (Cameras_InGameCamera_o *)
                   TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
          pUVar19 = UnityEngine_Transform__get_position(&local_c8,pUVar18,(MethodInfo *)0x0);
          if (pCVar9 == (Cameras_InGameCamera_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar10 = pCVar9->klass;
          bVar3 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
          if (((pCVar10->_2).typeHierarchyDepth < bVar3) ||
             ((pCVar10->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
            il2cpp_codegen_raise_invalid_cast_exception(pCVar9,TypeInfo_Cameras_InGameCamera);
          }
          local_138.x = (pUVar19->fields).x;
          local_138.y = (pUVar19->fields).y;
          local_138.z = (pUVar19->fields).z;
          bVar3 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
          if (((pCVar10->_2).typeHierarchyDepth < bVar3) ||
             ((pCVar10->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
            il2cpp_codegen_raise_invalid_cast_exception(pCVar9,TypeInfo_Cameras_InGameCamera);
          }
          Cameras_InGameCamera__TakeSnapshot
                    (pCVar9,(UnityEngine_Vector3_o *)&local_138,damage,(MethodInfo *)0x0);
          goto label_181f10580;
        }
      }
    }
    else {
      if ((pCVar21->fields).AI == false) goto label_181f10580;
      bVar3 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if (((pCVar7->_2).typeHierarchyDepth < bVar3) ||
         ((pCVar7->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar21);
      }
      pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar19 = UnityEngine_Transform__get_position(&local_f8,pUVar18,(MethodInfo *)0x0);
      fVar26 = (pUVar19->fields).x;
      fVar27 = (pUVar19->fields).y;
      fVar4 = (pUVar19->fields).z;
      fVar30 = (__this->fields)._velocity.fields.x;
      fVar31 = (__this->fields)._velocity.fields.y;
      fVar32 = (__this->fields)._velocity.fields.z;
      fVar28 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      fVar30 = fVar30 * fVar28;
      fVar31 = fVar31 * fVar28;
      fVar32 = fVar32 * fVar28;
      if ((*(uint64_t *)((char *)pCVar21 + 0x100)) == (void *)0x0) {
        ThrowNullReferenceException();
      }
      y = *(UnityEngine_Object_o **)((longlong)(*(uint64_t *)((char *)pCVar21 + 0x100)) + 0x68);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)__this_01,y,(MethodInfo *)0x0);
      if (bVar14) {
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar5 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
        if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar22 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"Blade")
        ;
        if (pSVar22 == (System_Xml_Schema_XmlSchema_o *)0x0) {
          ThrowNullReferenceException();
        }
        plVar23 = (longlong *)
                  (*(pSVar22->klass->vtable)._7_get_IdAttribute.methodPtr)
                            (pSVar22,(MethodInfo *)"RestrictAngle");
        if (plVar23 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        uVar29 = (**(code **)(*plVar23 + 0x388))(plVar23,*(undefined8 *)(*plVar23 + 0x390));
        local_168 = CONCAT44(fVar27 - (fVar31 + fVar31),fVar26 - (fVar30 + fVar30));
        local_160 = fVar4 - (fVar32 + fVar32);
        cVar15 = (*(code *)((Il2CppClass *)pCVar21->klass)->vtable[201].methodPtr)
                           (pCVar21,&local_168,uVar29,
                            ((Il2CppClass *)pCVar21->klass)->vtable[201].method);
        if (cVar15 == '\0') goto label_181f10580;
        pCVar6 = (__this->fields)._owner;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar14 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar14) && (pCVar6 = (__this->fields)._owner, pCVar6 != (Characters_BaseCharacter_o *)0x0)) {
          pCVar7 = pCVar6->klass;
          bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((bVar3 <= (pCVar7->_2).typeHierarchyDepth) &&
             ((pCVar7->_2).typeHierarchy[(ulonglong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar8 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar8 == (UI_InGameMenu_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar3 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
            if (((pUVar8->klass->_2).typeHierarchyDepth < bVar3) ||
               ((pUVar8->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
                (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar8,TypeInfo_UI_InGameMenu);
            }
            UI_InGameMenu__ShowKillScore(pUVar8,damage,false,(MethodInfo *)0x0);
            if ((*(uint64_t *)((char *)pCVar21 + 0x100)) == (void *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar18 = *(UnityEngine_Transform_o **)((longlong)(*(uint64_t *)((char *)pCVar21 + 0x100)) + 0x40);
            if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar9 = (Cameras_InGameCamera_o *)
                     TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
            pUVar19 = UnityEngine_Transform__get_position(&local_e8,pUVar18,(MethodInfo *)0x0);
            if (pCVar9 == (Cameras_InGameCamera_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar10 = pCVar9->klass;
            bVar3 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
            if (((pCVar10->_2).typeHierarchyDepth < bVar3) ||
               ((pCVar10->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
                (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar9,TypeInfo_Cameras_InGameCamera);
            }
            local_158.x = (pUVar19->fields).x;
            local_158.y = (pUVar19->fields).y;
            local_158.z = (pUVar19->fields).z;
            bVar3 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
            if (((pCVar10->_2).typeHierarchyDepth < bVar3) ||
               ((pCVar10->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
                (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar9,TypeInfo_Cameras_InGameCamera);
            }
            Cameras_InGameCamera__TakeSnapshot
                      (pCVar9,(UnityEngine_Vector3_o *)&local_158,damage,(MethodInfo *)0x0);
          }
        }
        pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar18 = UnityEngine_Transform__Find(pUVar18,"BladeHitNape",(MethodInfo *)0x0);
        if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_06 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar18,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource)
        ;
        if (__this_06 == (UnityEngine_AudioSource_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_AudioSource__Play_2eb4470(__this_06,(MethodInfo *)0x0);
      }
      if ((*(uint64_t *)((char *)pCVar21 + 0x100)) == (void *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = *(System_Collections_Generic_List_object__o **)((longlong)(*(uint64_t *)((char *)pCVar21 + 0x100)) + 0xf8);
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar14 = System_Collections_Generic_List_object___Contains
                         (__this_00,__this_01,
                          (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_Collider_Contains);
      if (!bVar14) goto label_181f10580;
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pSVar25 = TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit;
      pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar19 = UnityEngine_Transform__get_position(&local_d8,pUVar18,(MethodInfo *)0x0);
      uVar2._0_4_ = (pUVar19->fields).x;
      uVar2._4_4_ = (pUVar19->fields).y;
      fVar26 = (pUVar19->fields).z;
      local_1b8.x = 4.712389;
      local_1b8.y = 0.0;
      local_1b8.z = 0.0;
      pUVar24 = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Quaternion_o *)&local_128,(UnityEngine_Vector3_o *)&local_1b8,
                           (MethodInfo *)0x0);
      uVar12._0_4_ = (pUVar24->fields).x;
      uVar12._4_4_ = (pUVar24->fields).y;
      uVar13._0_4_ = (pUVar24->fields).z;
      uVar13._4_4_ = (pUVar24->fields).w;
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      local_148._0_8_ = uVar2;
      local_148.z = fVar26;
      local_108._0_8_ = uVar12;
      local_108._8_8_ = uVar13;
      Effects_EffectSpawner__Spawn
                (pSVar25,(UnityEngine_Vector3_o *)&local_148,(UnityEngine_Quaternion_o *)&local_108,1.0,true,
                 (System_Object_array *)0x0,(MethodInfo *)0x0);
      pCVar6 = (__this->fields)._owner;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar14 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((!bVar14) && (pCVar6 = (__this->fields)._owner, pCVar6 != (Characters_BaseCharacter_o *)0x0)) {
        pCVar7 = pCVar6->klass;
        bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar3 <= (pCVar7->_2).typeHierarchyDepth) &&
           ((pCVar7->_2).typeHierarchy[(ulonglong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
          pCVar6 = (__this->fields)._owner;
          pSVar25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
          il2cpp_runtime_helper_18017a990(0x5f,pCVar21,pCVar6,damage,"BladeThrow",pSVar25);
          goto label_181f10580;
        }
      }
    }
    pSVar25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
    il2cpp_runtime_helper_18017a990(0x60,pCVar21,"Blade",100,"BladeThrow",pSVar25);
  }
  goto label_181f10580;
}


// Projectiles.BladeThrowProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_BladeThrowProjectile__CalculateDamage (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x181f0ff50

int32_t Projectiles_BladeThrowProjectile__CalculateDamage
                  (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_BaseCharacter_c *pCVar4;
  bool bVar5;
  int iVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  longlong *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_1843454e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"DamageMultiplier");
    Il2CppMethodInitialized_1843454e6 = '\x01';
  }
  fVar10 = (float)il2cpp_runtime_helper_180546a40(&(__this->fields).InitialPlayerVelocity,0);
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar2 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar7 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Blade");
    if (pSVar7 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      plVar8 = (longlong *)
               (*(pSVar7->klass->vtable)._7_get_IdAttribute.methodPtr)
                         (pSVar7,(MethodInfo *)"DamageMultiplier");
      if (plVar8 != (longlong *)0x0) {
        fVar11 = (float)(**(code **)(*plVar8 + 0x388))(plVar8);
        iVar6 = (int)(fVar11 * fVar10 * 10.0);
        iVar9 = 10;
        if (10 < iVar6) {
          iVar9 = iVar6;
        }
        pCVar3 = (__this->fields)._owner;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar5) && (pCVar3 = (__this->fields)._owner, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
          pCVar4 = pCVar3->klass;
          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((bVar1 <= (pCVar4->_2).typeHierarchyDepth) &&
             ((pCVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
            pCVar3 = (__this->fields)._owner;
            bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
            if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_Human)) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar3,TypeInfo_Characters_Human);
            }
            if ((pCVar3->fields).CustomDamageEnabled != false) {
              return (pCVar3->fields).CustomDamage;
            }
          }
        }
        return iVar9;
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.BladeThrowProjectile$$Update
// il2cpp: void Projectiles_BladeThrowProjectile__Update (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x181f11960

void Projectiles_BladeThrowProjectile__Update(Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Rigidbody_o *__this_02;
  UnityEngine_Vector3_o *pUVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38 [4];
  
  if (Il2CppMethodInitialized_1843454e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    Il2CppMethodInitialized_1843454e7 = '\x01';
  }
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar2 = (__this->fields)._photonView;
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar2->fields)._IsMine_k__BackingField != false) {
      fVar5 = (__this->fields)._timeLeft;
      fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar5 = fVar5 - fVar4;
      (__this->fields)._timeLeft = fVar5;
      if (fVar5 <= 0.0) {
        (*(__this->klass->vtable)._16_OnExceedLiveTime.methodPtr)
                  (__this,(__this->klass->vtable)._16_OnExceedLiveTime.method);
      }
    }
    if ((__this->fields).Disabled != false) {
      return;
    }
    __this_02 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
      pUVar3 = UnityEngine_Rigidbody__get_linearVelocity
                         ((UnityEngine_Vector3_o *)local_38,__this_02,(MethodInfo *)0x0);
      local_48.x = (pUVar3->fields).x;
      local_48.y = (pUVar3->fields).y;
      local_48.z = (pUVar3->fields).z;
      fVar5 = (float)il2cpp_runtime_helper_180546a40(&local_48,0);
      __this_00 = (__this->fields)._blade;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)local_38,__this_00,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._blade;
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          uVar1._0_4_ = (pUVar3->fields).x;
          uVar1._4_4_ = (pUVar3->fields).y;
          fVar4 = (pUVar3->fields).z;
          pUVar3 = UnityEngine_Transform__get_right
                             ((UnityEngine_Vector3_o *)local_38,__this_01,(MethodInfo *)0x0);
          local_48.x = (pUVar3->fields).x;
          local_48.y = (pUVar3->fields).y;
          local_48.z = (pUVar3->fields).z;
          local_38[0]._0_8_ = uVar1;
          local_38[0].z = fVar4;
          fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          if (fVar5 <= 80.0) {
            fVar5 = 80.0;
          }
          UnityEngine_Transform__RotateAround
                    (__this_00,(UnityEngine_Vector3_o *)local_38,(UnityEngine_Vector3_o *)&local_48,
                     fVar5 * 1600.0 * fVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.BladeThrowProjectile$$.ctor
// il2cpp: void Projectiles_BladeThrowProjectile___ctor (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x181f0e8a0

void Projectiles_BladeThrowProjectile___ctor(Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  
  if (Il2CppMethodInitialized_1843454df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_1843454df = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._hideObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hideObjects,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  (__this->fields)._colliders = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colliders,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
  (__this->fields)._fadeTrails = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fadeTrails,__this_02);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


