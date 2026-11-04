// Type: Characters.HumanMovementSync
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanMovementSync.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanMovementSync.cs
// --------------------------------

// Characters.HumanMovementSync$$Awake
// il2cpp: void Characters_HumanMovementSync__Awake (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x1821526b0

void Characters_HumanMovementSync__Awake(Characters_HumanMovementSync_o *__this,MethodInfo *method)

{
  Characters_Human_o *value;
  
  if (Il2CppMethodInitialized_184346c5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    Il2CppMethodInitialized_184346c5f = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
  (__this->fields)._human = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human,value);
  return;
}


// Characters.HumanMovementSync$$SendCustomStream
// il2cpp: void Characters_HumanMovementSync__SendCustomStream (Characters_HumanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x1821529e0

void Characters_HumanMovementSync__SendCustomStream
               (Characters_HumanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *obj;
  undefined4 local_res8 [2];
  UnityEngine_Vector4_o local_18;
  
  if (Il2CppMethodInitialized_184346c60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    Il2CppMethodInitialized_184346c60 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).LateUpdateHeadRotation.fields.hasValue != false) {
      if (pCVar1 != (Characters_Human_o *)0x0) {
        System_Nullable_Vector4___get_Value
                  (&local_18,(System_Nullable_Vector4__o *)&(pCVar1->fields).LateUpdateHeadRotation,
                   (MethodInfo_AE2AC0 *)MethodInfo_System_Nullable_Quaternion_get_Value);
        if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
        }
        local_res8[0] = il2cpp_runtime_helper_18208d050(&local_18,0);
        obj = il2cpp_value_box(g_data_184354e08,local_res8);
        if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
          Photon_Pun_PhotonStream__SendNext(stream,obj,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
    if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
      Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_HumanMovementSync__ReceiveCustomStream (Characters_HumanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x182152710
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821528cc: nop dword ptr [rax]

void Characters_HumanMovementSync__ReceiveCustomStream
               (Characters_HumanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Characters_Human_o *pCVar2;
  UnityEngine_Quaternion_StaticFields *pUVar3;
  System_Nullable_Quaternion__o *pSVar4;
  uint32_t uVar5;
  Il2CppObject *pIVar6;
  uint index;
  uint index_00;
  float fVar7;
  float fVar8;
  float fVar9;
  System_Nullable_uint__Fields local_res10;
  System_Nullable_uint__Fields local_a8;
  UnityEngine_Quaternion_Fields local_98;
  System_Nullable_Vector4__Fields local_88 [5];
  
  if (Il2CppMethodInitialized_184346c61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Nullable_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    Il2CppMethodInitialized_184346c61 = '\x01';
  }
  local_res10.hasValue = false;
  local_res10._1_3_ = 0;
  local_res10.value = 0;
  if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
    pIVar6 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if ((pIVar6 != (Il2CppObject *)0x0) &&
       (pIVar1 = (TypeInfo_System_Nullable_int->_1).element_class, pIVar6->klass != pIVar1)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar6,pIVar1);
    }
    il2cpp_runtime_helper_18046d510();
    local_res10 = local_a8;
    if (local_a8.hasValue == false) {
      pCVar2 = (__this->fields)._human;
      if (pCVar2 == (Characters_Human_o *)0x0) goto label_1821529bc;
      (pCVar2->fields).LateUpdateHeadRotationRecv.fields.hasValue = false;
      *(undefined3 *)&(pCVar2->fields).LateUpdateHeadRotationRecv.fields.field_0x1 = 0;
      (pCVar2->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = 0.0;
      pSVar4 = &(pCVar2->fields).LateUpdateHeadRotationRecv;
      (pSVar4->fields).value.fields.y = 0.0;
      (pSVar4->fields).value.fields.z = 0.0;
      (pCVar2->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = 0.0;
    }
    else {
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
      local_98.x = (pUVar3->identityQuaternion).fields.x;
      local_98.y = (pUVar3->identityQuaternion).fields.y;
      local_98.z = (pUVar3->identityQuaternion).fields.z;
      local_98.w = (pUVar3->identityQuaternion).fields.w;
      uVar5 = System_Nullable_uint___get_Value
                        ((System_Nullable_uint__o *)&local_res10,
                         (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_int_get_Value);
      if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
      }
      fVar9 = 0.0;
      index = 3;
      index_00 = uVar5 >> 0x1e;
      do {
        if (index != index_00) {
          if ((uVar5 & 0x200) == 0) {
            fVar8 = 1.0;
          }
          else {
            fVar8 = -1.0;
          }
          UnityEngine_Quaternion__set_Item
                    ((UnityEngine_Quaternion_o *)&local_98,index,(float)(uVar5 & 0x1ff) * 0.0013837706 * fVar8
                     ,(MethodInfo *)0x0);
          fVar8 = UnityEngine_Quaternion__get_Item
                            ((UnityEngine_Quaternion_o *)&local_98,index,(MethodInfo *)0x0);
          fVar7 = UnityEngine_Quaternion__get_Item
                            ((UnityEngine_Quaternion_o *)&local_98,index,(MethodInfo *)0x0);
          uVar5 = uVar5 >> 10;
          fVar9 = fVar9 + fVar7 * fVar8;
        }
        index = index - 1;
      } while (-1 < (int)index);
      fVar9 = 1.0 - fVar9;
      if (fVar9 < 0.0) {
        fVar9 = (float)il2cpp_runtime_helper_1804fa7a0(fVar9);
      }
      else {
        fVar9 = SQRT(fVar9);
      }
      UnityEngine_Quaternion__set_Item((UnityEngine_Quaternion_o *)&local_98,index_00,fVar9,(MethodInfo *)0x0)
      ;
      pCVar2 = (__this->fields)._human;
      local_88[0].hasValue = false;
      local_88[0]._1_3_ = 0;
      local_88[0].value.fields.x = 0.0;
      local_88[0].value.fields.y = 0.0;
      local_88[0].value.fields.z = 0.0;
      local_88[0].value.fields.w = 0.0;
      System_Nullable_Vector4____ctor
                ((System_Nullable_Vector4__o *)local_88,(UnityEngine_Vector4_o *)&local_98,
                 (MethodInfo_AE2670 *)MethodInfo_System_Nullable_Quaternion_ctor);
      if (pCVar2 == (Characters_Human_o *)0x0) {
        ThrowNullReferenceException();
      }
      (pCVar2->fields).LateUpdateHeadRotationRecv.fields.hasValue = local_88[0].hasValue;
      *(undefined3 *)&(pCVar2->fields).LateUpdateHeadRotationRecv.fields.field_0x1 = local_88[0]._1_3_;
      (pCVar2->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = local_88[0].value.fields.x;
      pSVar4 = &(pCVar2->fields).LateUpdateHeadRotationRecv;
      (pSVar4->fields).value.fields.y = local_88[0].value.fields.y;
      (pSVar4->fields).value.fields.z = local_88[0].value.fields.z;
      (pCVar2->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = local_88[0].value.fields.w;
    }
    return;
  }
label_1821529bc:
  ThrowNullReferenceException();
}


// Characters.HumanMovementSync$$Update
// il2cpp: void Characters_HumanMovementSync__Update (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x182152af0
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18215313a: movss xmm7, dword ptr [rdi + 0x2c]
// asm:   0x18215313f: xor ecx, ecx
// asm:   0x182153141: movss xmm9, dword ptr [rdi + 0x30]
// asm:   0x182153147: movss xmm11, dword ptr [rdi + 0x34]
// asm:   0x18215314d: movss xmm6, dword ptr [rdi + 0x48]
// asm:   0x182153152: movss xmm8, dword ptr [rdi + 0x4c]
// asm:   0x182153158: movss xmm10, dword ptr [rdi + 0x50]
// asm:   0x18215315e: call 0x182f295d0  ; UnityEngine_Time__get_deltaTime()
// asm:   0x182153163: mulss xmm6, xmm0
// asm:   0x182153167: xor ecx, ecx
// asm:   0x182153169: mulss xmm8, xmm0
// asm:   0x18215316e: addss xmm6, xmm7
// asm:   0x182153172: mulss xmm10, xmm0
// asm:   0x182153177: addss xmm8, xmm9
// asm:   0x18215317c: addss xmm10, xmm11
// asm:   0x182153181: movss dword ptr [rdi + 0x2c], xmm6
// asm:   0x182153186: movss xmm6, dword ptr [rdi + 0x90]
// asm:   0x18215318e: movss dword ptr [rdi + 0x30], xmm8
// asm:   0x182153194: movss dword ptr [rdi + 0x34], xmm10
// asm:   0x18215319a: call 0x182f295d0  ; UnityEngine_Time__get_deltaTime()
// asm:   0x18215319f: addss xmm0, xmm6
// asm:   0x1821531a3: movss dword ptr [rdi + 0x90], xmm0
// asm:   0x1821531ab: jmp 0x182152f33

void Characters_HumanMovementSync__Update(Characters_HumanMovementSync_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  Photon_Pun_PhotonView_o *pPVar18;
  Characters_Human_o *pCVar19;
  UnityEngine_Transform_o *pUVar20;
  Utility_BaseComponentCache_o *pUVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  UnityEngine_Vector3_o *pUVar27;
  UnityEngine_Quaternion_o *pUVar28;
  UnityEngine_Transform_o *pUVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  UnityEngine_Quaternion_Fields local_b8;
  UnityEngine_Quaternion_Fields local_a8;
  UnityEngine_Quaternion_Fields local_98;
  UnityEngine_Quaternion_o local_88 [8];
  
  if (Il2CppMethodInitialized_184346c62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c62 = '\x01';
  }
  local_98.x = 0.0;
  local_98.y = 0.0;
  local_98.z = 0.0;
  local_98.w = 0.0;
  if ((__this->fields).Disabled != false) {
    return;
  }
  pPVar18 = (__this->fields)._photonView;
  if (pPVar18 == (Photon_Pun_PhotonView_o *)0x0) goto label_1821531b0;
  if ((pPVar18->fields)._IsMine_k__BackingField != false) {
    return;
  }
  pCVar19 = (__this->fields)._human;
  if (pCVar19 == (Characters_Human_o *)0x0) goto label_1821531b0;
  if (((pCVar19->fields).MountState == 2) && ((pCVar19->fields).CanMountedAttack == false)) {
    pUVar20 = (pCVar19->fields).MountedTransform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar26 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar26) goto label_182152d27;
    pCVar19 = (__this->fields)._human;
    if ((pCVar19 == (Characters_Human_o *)0x0) ||
       (pUVar20 = (pCVar19->fields).MountedTransform, pUVar20 == (UnityEngine_Transform_o *)0x0))
    goto label_1821531b0;
    local_b8.x = (pCVar19->fields).MountedPositionOffset.fields.x;
    local_b8.y = (pCVar19->fields).MountedPositionOffset.fields.y;
    pUVar29 = (__this->fields)._transform;
    local_b8.z = (pCVar19->fields).MountedPositionOffset.fields.z;
    pUVar27 = UnityEngine_Transform__TransformPoint
                        ((UnityEngine_Vector3_o *)&local_a8,pUVar20,(UnityEngine_Vector3_o *)&local_b8,
                         (MethodInfo *)0x0);
    if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_1821531b0;
    local_b8.x = (pUVar27->fields).x;
    local_b8.y = (pUVar27->fields).y;
    local_b8.z = (pUVar27->fields).z;
    UnityEngine_Transform__set_position(pUVar29,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
    pCVar19 = (__this->fields)._human;
    if ((pCVar19 == (Characters_Human_o *)0x0) ||
       (pUVar20 = (pCVar19->fields).MountedTransform, pUVar20 == (UnityEngine_Transform_o *)0x0))
    goto label_1821531b0;
    pUVar29 = (__this->fields)._transform;
    pUVar28 = UnityEngine_Transform__get_rotation
                        ((UnityEngine_Quaternion_o *)&local_a8,pUVar20,(MethodInfo *)0x0);
    local_98.x = (pUVar28->fields).x;
    local_98.y = (pUVar28->fields).y;
    local_98.z = (pUVar28->fields).z;
    local_98.w = (pUVar28->fields).w;
    pUVar27 = UnityEngine_Quaternion__Internal_ToEulerRad
                        ((UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Quaternion_o *)&local_98,
                         (MethodInfo *)0x0);
    uVar6 = (pUVar27->fields).x;
    uVar12 = (pUVar27->fields).y;
    local_b8.y = (float)uVar12 * 57.29578;
    local_b8.x = (float)uVar6 * 57.29578;
    local_b8.z = (pUVar27->fields).z * 57.29578;
    pUVar27 = UnityEngine_Quaternion__Internal_MakePositive
                        ((UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Vector3_o *)&local_b8,
                         (MethodInfo *)0x0);
    pCVar19 = (__this->fields)._human;
    if (pCVar19 == (Characters_Human_o *)0x0) goto label_1821531b0;
    uVar7 = (pCVar19->fields).MountedRotationOffset.fields.x;
    uVar13 = (pCVar19->fields).MountedRotationOffset.fields.y;
    uVar8 = (pUVar27->fields).x;
    uVar14 = (pUVar27->fields).y;
    local_b8.y = ((float)uVar13 + (float)uVar14) * 0.017453292;
    local_b8.x = ((float)uVar7 + (float)uVar8) * 0.017453292;
    local_b8.z = ((pCVar19->fields).MountedRotationOffset.fields.z + (pUVar27->fields).z) * 0.017453292;
    pUVar28 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)&local_a8,(UnityEngine_Vector3_o *)&local_b8,
                         (MethodInfo *)0x0);
label_182152f14:
    if (pUVar29 != (UnityEngine_Transform_o *)0x0) {
      local_a8.x = (pUVar28->fields).x;
      local_a8.y = (pUVar28->fields).y;
      local_a8.z = (pUVar28->fields).z;
      local_a8.w = (pUVar28->fields).w;
      UnityEngine_Transform__set_rotation(pUVar29,(UnityEngine_Quaternion_o *)&local_a8,(MethodInfo *)0x0);
      return;
    }
  }
  else {
label_182152d27:
    pCVar19 = (__this->fields)._human;
    if (pCVar19 == (Characters_Human_o *)0x0) goto label_1821531b0;
    if ((pCVar19->fields).CarryState == 1) {
      pCVar19 = (pCVar19->fields).Carrier;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar26 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar26) {
        pCVar19 = (__this->fields)._human;
        if ((((pCVar19 == (Characters_Human_o *)0x0) ||
             (pCVar19 = (pCVar19->fields).Carrier, pCVar19 == (Characters_Human_o *)0x0)) ||
            (pUVar21 = (pCVar19->fields).Cache, pUVar21 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar20 = (pUVar21->fields).Transform, pUVar20 == (UnityEngine_Transform_o *)0x0))
        goto label_1821531b0;
        pUVar27 = UnityEngine_Transform__get_forward
                            ((UnityEngine_Vector3_o *)&local_a8,pUVar20,(MethodInfo *)0x0);
        pCVar19 = (__this->fields)._human;
        uVar9 = (pUVar27->fields).x;
        uVar15 = (pUVar27->fields).y;
        if (((pCVar19 == (Characters_Human_o *)0x0) ||
            (pCVar19 = (pCVar19->fields).Carrier, pCVar19 == (Characters_Human_o *)0x0)) ||
           ((pUVar21 = (pCVar19->fields).Cache, pUVar21 == (Utility_BaseComponentCache_o *)0x0 ||
            (pUVar20 = (pUVar21->fields).Transform, pUVar20 == (UnityEngine_Transform_o *)0x0))))
        goto label_1821531b0;
        fVar32 = (pUVar27->fields).z;
        pUVar27 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)&local_a8,pUVar20,(MethodInfo *)0x0);
        pCVar19 = (__this->fields)._human;
        uVar10 = (pUVar27->fields).x;
        uVar16 = (pUVar27->fields).y;
        if (((pCVar19 == (Characters_Human_o *)0x0) ||
            (pCVar19 = (pCVar19->fields).Carrier, pCVar19 == (Characters_Human_o *)0x0)) ||
           ((pUVar21 = (pCVar19->fields).Cache, pUVar21 == (Utility_BaseComponentCache_o *)0x0 ||
            (pUVar20 = (pUVar21->fields).Transform, pUVar20 == (UnityEngine_Transform_o *)0x0))))
        goto label_1821531b0;
        fVar33 = (pUVar27->fields).z;
        pUVar29 = (__this->fields)._transform;
        pUVar27 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_a8,pUVar20,(MethodInfo *)0x0);
        uVar11 = (pUVar27->fields).x;
        uVar17 = (pUVar27->fields).y;
        uVar34._0_4_ = (float)uVar10 * 0.5 + (float)uVar9 * -0.4 + (float)uVar11;
        uVar34._4_4_ = (float)uVar16 * 0.5 + (float)uVar15 * -0.4 + (float)uVar17;
        if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_1821531b0;
        local_b8.z = fVar33 * 0.5 + fVar32 * -0.4 + (pUVar27->fields).z;
        local_b8._0_8_ = uVar34;
        UnityEngine_Transform__set_position(pUVar29,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
        pCVar19 = (__this->fields)._human;
        if ((((pCVar19 == (Characters_Human_o *)0x0) ||
             (pCVar19 = (pCVar19->fields).Carrier, pCVar19 == (Characters_Human_o *)0x0)) ||
            (pUVar21 = (pCVar19->fields).Cache, pUVar21 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar20 = (pUVar21->fields).Transform, pUVar20 == (UnityEngine_Transform_o *)0x0))
        goto label_1821531b0;
        pUVar29 = (__this->fields)._transform;
        pUVar28 = UnityEngine_Transform__get_rotation
                            ((UnityEngine_Quaternion_o *)&local_a8,pUVar20,(MethodInfo *)0x0);
        goto label_182152f14;
      }
    }
    pUVar20 = (__this->fields)._transform;
    if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
      pUVar27 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_a8,pUVar20,(MethodInfo *)0x0);
      fVar32 = (__this->fields)._correctPosition.fields.x;
      fVar33 = (__this->fields)._correctPosition.fields.y;
      fVar2 = (__this->fields)._correctPosition.fields.z;
      fVar3 = (pUVar27->fields).x;
      fVar4 = (pUVar27->fields).y;
      fVar5 = (pUVar27->fields).z;
      fVar30 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar31 = Characters_BaseMovementSync__get_SmoothingDelay
                         ((MethodInfo *)__this);
      fVar31 = fVar31 * fVar30;
      if (fVar31 < 0.0) {
        fVar31 = 0.0;
      }
      else if (1.0 < fVar31) {
        fVar31 = 1.0;
      }
      local_b8.y = (fVar33 - fVar4) * fVar31 + fVar4;
      local_b8.x = (fVar32 - fVar3) * fVar31 + fVar3;
      local_b8.z = (fVar2 - fVar5) * fVar31 + fVar5;
      UnityEngine_Transform__set_position(pUVar20,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
      pUVar20 = (__this->fields)._transform;
      if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
        pUVar28 = UnityEngine_Transform__get_rotation
                            ((UnityEngine_Quaternion_o *)&local_a8,pUVar20,(MethodInfo *)0x0);
        uVar22._0_4_ = (__this->fields)._correctRotation.fields.x;
        uVar22._4_4_ = (__this->fields)._correctRotation.fields.y;
        uVar23._0_4_ = (__this->fields)._correctRotation.fields.z;
        uVar23._4_4_ = (__this->fields)._correctRotation.fields.w;
        uVar24._0_4_ = (pUVar28->fields).x;
        uVar24._4_4_ = (pUVar28->fields).y;
        uVar25._0_4_ = (pUVar28->fields).z;
        uVar25._4_4_ = (pUVar28->fields).w;
        fVar32 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        local_b8._0_8_ = uVar24;
        local_b8._8_8_ = uVar25;
        local_a8._0_8_ = uVar22;
        local_a8._8_8_ = uVar23;
        fVar33 = Characters_BaseMovementSync__get_SmoothingDelay
                           ((MethodInfo *)__this);
        pUVar28 = UnityEngine_Quaternion__Internal_Lerp
                            (local_88,(UnityEngine_Quaternion_o *)&local_b8,
                             (UnityEngine_Quaternion_o *)&local_a8,fVar33 * fVar32,(MethodInfo *)0x0);
        local_a8.x = (pUVar28->fields).x;
        local_a8.y = (pUVar28->fields).y;
        local_a8.z = (pUVar28->fields).z;
        local_a8.w = (pUVar28->fields).w;
        UnityEngine_Transform__set_rotation(pUVar20,(UnityEngine_Quaternion_o *)&local_a8,(MethodInfo *)0x0);
        pCVar19 = (__this->fields)._human;
        if (pCVar19 != (Characters_Human_o *)0x0) {
          pCVar19 = (pCVar19->fields).BackHuman;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar26 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pCVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar26) {
            pCVar19 = (__this->fields)._human;
            if (pCVar19 == (Characters_Human_o *)0x0) goto label_1821531b0;
            fVar33 = (__this->fields)._correctVelocity.fields.y;
            fVar32 = (__this->fields)._correctVelocity.fields.z;
            (pCVar19->fields).CarryVelocity.fields.x = (__this->fields)._correctVelocity.fields.x;
            (pCVar19->fields).CarryVelocity.fields.y = fVar33;
            (pCVar19->fields).CarryVelocity.fields.z = fVar32;
          }
          fVar32 = (__this->fields).MaxPredictionTime;
          pfVar1 = &(__this->fields)._timeSinceLastMessage;
          if (fVar32 < *pfVar1 || fVar32 == *pfVar1) {
            return;
          }
          fVar32 = (__this->fields)._correctPosition.fields.x;
          fVar33 = (__this->fields)._correctPosition.fields.y;
          fVar2 = (__this->fields)._correctPosition.fields.z;
          fVar3 = (__this->fields)._correctVelocity.fields.x;
          fVar4 = (__this->fields)._correctVelocity.fields.y;
          fVar5 = (__this->fields)._correctVelocity.fields.z;
          fVar30 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this->fields)._correctPosition.fields.x = fVar3 * fVar30 + fVar32;
          fVar32 = (__this->fields)._timeSinceLastMessage;
          (__this->fields)._correctPosition.fields.y = fVar4 * fVar30 + fVar33;
          (__this->fields)._correctPosition.fields.z = fVar5 * fVar30 + fVar2;
          fVar33 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this->fields)._timeSinceLastMessage = fVar33 + fVar32;
          return;
        }
      }
    }
  }
label_1821531b0:
  ThrowNullReferenceException();
}


// Characters.HumanMovementSync$$.ctor
// il2cpp: void Characters_HumanMovementSync___ctor (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x1821531c0

void
Characters_HumanMovementSync___ctor(Characters_HumanMovementSync_o* __this, MethodInfo* method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


