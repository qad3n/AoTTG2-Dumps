// Type: Characters.HumanMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanMovementSync.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanMovementSync.cs
// --------------------------------

// Characters.HumanMovementSync$$Awake
// il2cpp: void Characters_HumanMovementSync__Awake (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x5bf55c0

void Characters_HumanMovementSync__Awake(Characters_HumanMovementSync_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  if (Il2CppMethodInitialized_0754762f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    Il2CppMethodInitialized_0754762f = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pCVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
  (__this->fields)._human = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human);
  return;
}


// Characters.HumanMovementSync$$SendCustomStream
// il2cpp: void Characters_HumanMovementSync__SendCustomStream (Characters_HumanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x5bf5620

void Characters_HumanMovementSync__SendCustomStream
               (Characters_HumanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Il2CppObject *obj;
  undefined4 uStack_24;
  UnityEngine_Quaternion_o UStack_20;
  
  if (Il2CppMethodInitialized_07547630 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    Il2CppMethodInitialized_07547630 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 != (Characters_Human_o *)0x0) {
    if ((pCVar1->fields).LateUpdateHeadRotation.fields.hasValue == false) {
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
        Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      UStack_20 = System_Nullable_Quaternion___get_Value
                            (&(pCVar1->fields).LateUpdateHeadRotation,
                             (MethodInfo_3CD67B0 *)MethodInfo_System_Nullable_Quaternion_get_Value);
      if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
      }
      uStack_24 = il2cpp_runtime_helper_05b8cfd0(&UStack_20,0);
      obj = il2cpp_vm_Object_Box(g_data_07556710,&uStack_24);
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
        Photon_Pun_PhotonStream__SendNext(stream,obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_HumanMovementSync__ReceiveCustomStream (Characters_HumanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x5bf5710

void Characters_HumanMovementSync__ReceiveCustomStream
               (Characters_HumanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Il2CppClass *pIVar5;
  UnityEngine_Quaternion_StaticFields *pUVar6;
  Characters_Human_o *pCVar7;
  UnityEngine_Quaternion_o value;
  System_Nullable_Quaternion__o *pSVar8;
  uint uVar9;
  uint uVar10;
  Il2CppObject *pIVar11;
  float *pfVar12;
  float fVar13;
  System_Nullable_int__Fields local_68;
  undefined8 uStack_60;
  System_Nullable_int__Fields local_50;
  System_Nullable_Quaternion__Fields local_48;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  
  if (g_data_07547631 == '\0') {
    uStack_60 = 0x5bf5738;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_ctor);
    uStack_60 = 0x5bf5744;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    uStack_60 = 0x5bf5750;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    uStack_60 = 0x5bf575c;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Nullable_int);
    uStack_60 = 0x5bf5768;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    g_data_07547631 = '\x01';
  }
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto label_05bf59ff;
  pIVar11 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  if ((pIVar11 != (Il2CppObject *)0x0) &&
     (pIVar5 = (TypeInfo_System_Nullable_int->_1).element_class, pIVar11->klass != pIVar5)) {
    il2cpp_codegen_raise_invalid_cast_exception(pIVar11,pIVar5);
  }
  il2cpp_runtime_helper_031230d0(pIVar11,TypeInfo_System_Nullable_int,&local_68);
  local_50 = local_68;
  if (local_68.hasValue == false) {
    pCVar7 = (__this->fields)._human;
    if (pCVar7 != (Characters_Human_o *)0x0) {
      (pCVar7->fields).LateUpdateHeadRotationRecv.fields.hasValue = false;
      *(undefined3 *)&(pCVar7->fields).LateUpdateHeadRotationRecv.fields.field_0x1 = 0;
      (pCVar7->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = 0.0;
      pSVar8 = &(pCVar7->fields).LateUpdateHeadRotationRecv;
      (pSVar8->fields).value.fields.y = 0.0;
      (pSVar8->fields).value.fields.z = 0.0;
      (pCVar7->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = 0.0;
      return;
    }
    goto label_05bf59ff;
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Quaternion->static_fields;
  uVar1 = (pUVar6->identityQuaternion).fields.x;
  uVar3 = (pUVar6->identityQuaternion).fields.y;
  uVar2 = (pUVar6->identityQuaternion).fields.z;
  uVar4 = (pUVar6->identityQuaternion).fields.w;
  local_30 = (float)uVar1;
  fStack_2c = (float)uVar3;
  local_28 = (float)uVar2;
  fStack_24 = (float)uVar4;
  uVar9 = System_Nullable_int___get_Value
                    ((System_Nullable_int__o *)&local_50,
                     (MethodInfo_3CD4BC0 *)MethodInfo_System_Nullable_int_get_Value);
  if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
    if (uVar9 >> 0x1e == 3) goto label_05bf5833;
label_05bf5875:
    fStack_24 = (float)(uVar9 & 0x1ff) * 0.0013837706;
    if ((uVar9 & 0x200) != 0) {
      fStack_24 = -fStack_24;
    }
    fVar13 = fStack_24 * fStack_24 + 0.0;
    uVar10 = uVar9 >> 10;
    if (uVar9 >> 0x1e != 2) goto label_05bf58b5;
label_05bf58f0:
    fStack_2c = (float)(uVar10 & 0x1ff) * 0.0013837706;
    if ((uVar10 & 0x200) != 0) {
      fStack_2c = -fStack_2c;
    }
    fVar13 = fVar13 + fStack_2c * fStack_2c;
    uVar10 = uVar10 >> 10;
  }
  else {
    if (uVar9 >> 0x1e != 3) goto label_05bf5875;
label_05bf5833:
    fVar13 = 0.0;
    uVar10 = uVar9;
label_05bf58b5:
    local_28 = (float)(uVar10 & 0x1ff) * 0.0013837706;
    if ((uVar10 & 0x200) != 0) {
      local_28 = -local_28;
    }
    fVar13 = fVar13 + local_28 * local_28;
    uVar10 = uVar10 >> 10;
    if (uVar9 >> 0x1e != 1) goto label_05bf58f0;
  }
  if (0x3fffffff < uVar9) {
    local_30 = (float)(uVar10 & 0x1ff) * 0.0013837706;
    if ((uVar10 & 0x200) != 0) {
      local_30 = -local_30;
    }
    fVar13 = fVar13 + local_30 * local_30;
  }
  fVar13 = 1.0 - fVar13;
  if (fVar13 < 0.0) {
    fVar13 = sqrtf(fVar13);
  }
  else {
    fVar13 = SQRT(fVar13);
  }
  pfVar12 = &local_30;
  switch(uVar9 >> 0x1e) {
  case 1:
    pfVar12 = &fStack_2c;
    break;
  case 2:
    pfVar12 = &local_28;
    break;
  case 3:
    pfVar12 = &fStack_24;
  }
  *pfVar12 = fVar13;
  pCVar7 = (__this->fields)._human;
  value.fields.y = fStack_2c;
  value.fields.x = local_30;
  value.fields.z = local_28;
  value.fields.w = fStack_24;
  local_48.hasValue = false;
  local_48._1_3_ = 0;
  local_48.value.fields.x = 0.0;
  local_48.value.fields.y = 0.0;
  local_48.value.fields.z = 0.0;
  local_48.value.fields.w = 0.0;
  System_Nullable_Quaternion____ctor
            ((System_Nullable_Quaternion__o *)&local_48,value,
             (MethodInfo_3CD6790 *)MethodInfo_System_Nullable_Quaternion_ctor);
  if (pCVar7 != (Characters_Human_o *)0x0) {
    (pCVar7->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = local_48.value.fields.w;
    (pCVar7->fields).LateUpdateHeadRotationRecv.fields.hasValue = local_48.hasValue;
    *(undefined3 *)&(pCVar7->fields).LateUpdateHeadRotationRecv.fields.field_0x1 = local_48._1_3_;
    (pCVar7->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = local_48.value.fields.x;
    pSVar8 = &(pCVar7->fields).LateUpdateHeadRotationRecv;
    (pSVar8->fields).value.fields.y = local_48.value.fields.y;
    (pSVar8->fields).value.fields.z = local_48.value.fields.z;
    return;
  }
label_05bf59ff:
  ThrowNullReferenceException();
}


// Characters.HumanMovementSync$$Update
// il2cpp: void Characters_HumanMovementSync__Update (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x5bf5a10

void Characters_HumanMovementSync__Update(Characters_HumanMovementSync_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  Photon_Pun_PhotonView_o *pPVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  Utility_BaseComponentCache_o *pUVar13;
  undefined8 uVar14;
  bool bVar15;
  Characters_Human_o *pCVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  UnityEngine_Quaternion_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value;
  float fStack_88;
  float fStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_58;
  float fStack_54;
  UnityEngine_Quaternion_Fields UStack_48;
  UnityEngine_Quaternion_o UStack_38;
  float fStack_28;
  
  if (Il2CppMethodInitialized_07547632 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547632 = '\x01';
  }
  if ((__this->fields).Disabled != false) {
    return;
  }
  pPVar10 = (__this->fields)._photonView;
  if (pPVar10 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar10->fields)._IsMine_k__BackingField != false) {
      return;
    }
    pCVar16 = (__this->fields)._human;
    if (pCVar16 != (Characters_Human_o *)0x0) {
      if (((pCVar16->fields).MountState == 2) && ((pCVar16->fields).CanMountedAttack == false)) {
        pUVar11 = (pCVar16->fields).MountedTransform;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar15 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar15) {
          pCVar16 = (__this->fields)._human;
          if ((pCVar16 != (Characters_Human_o *)0x0) &&
             (pUVar11 = (pCVar16->fields).MountedTransform, pUVar11 != (UnityEngine_Transform_o *)0x0)) {
            pUVar12 = (__this->fields)._transform;
            UVar22 = UnityEngine_Transform__TransformPoint
                               (pUVar11,(UnityEngine_Vector3_o)(pCVar16->fields).MountedPositionOffset.fields,
                                (MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_position(pUVar12,UVar22,(MethodInfo *)0x0);
              pCVar16 = (__this->fields)._human;
              if ((pCVar16 != (Characters_Human_o *)0x0) &&
                 (pUVar11 = (pCVar16->fields).MountedTransform, pUVar11 != (UnityEngine_Transform_o *)0x0)) {
                pUVar12 = (__this->fields)._transform;
                UStack_38 = UnityEngine_Transform__get_rotation(pUVar11,(MethodInfo *)0x0);
                fVar18 = UStack_38.fields.z;
                uVar19 = il2cpp_runtime_helper_05bbd050(&UStack_38);
                pCVar16 = (__this->fields)._human;
                if (pCVar16 != (Characters_Human_o *)0x0) {
                  uVar2 = (pCVar16->fields).MountedRotationOffset.fields.x;
                  uVar6 = (pCVar16->fields).MountedRotationOffset.fields.y;
                  UStack_48.y = ((float)((ulong)uVar19 >> 0x20) + (float)uVar6) * 0.017453292;
                  UStack_48.x = ((float)uVar19 + (float)uVar2) * 0.017453292;
                  UStack_48.z = (fVar18 + (pCVar16->fields).MountedRotationOffset.fields.z) * 0.017453292;
                  UVar21 = UnityEngine_Quaternion__Internal_FromEulerRad
                                     ((UnityEngine_Vector3_o *)&UStack_48,(MethodInfo *)0x0);
                  if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_rotation(pUVar12,UVar21,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          goto label_05bf5fb0;
        }
        pCVar16 = (__this->fields)._human;
        if (pCVar16 == (Characters_Human_o *)0x0) goto label_05bf5fb0;
      }
      if ((pCVar16->fields).CarryState == 1) {
        pCVar16 = (pCVar16->fields).Carrier;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar15 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pCVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar15) {
          pCVar16 = (__this->fields)._human;
          if ((((pCVar16 != (Characters_Human_o *)0x0) &&
               (pCVar16 = (pCVar16->fields).Carrier, pCVar16 != (Characters_Human_o *)0x0)) &&
              (pUVar13 = (pCVar16->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0)) &&
             (pUVar11 = (pUVar13->fields).Transform, pUVar11 != (UnityEngine_Transform_o *)0x0)) {
            UVar22 = UnityEngine_Transform__get_forward(pUVar11,(MethodInfo *)0x0);
            pCVar16 = (__this->fields)._human;
            if (((pCVar16 != (Characters_Human_o *)0x0) &&
                (pCVar16 = (pCVar16->fields).Carrier, pCVar16 != (Characters_Human_o *)0x0)) &&
               ((pUVar13 = (pCVar16->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0 &&
                (pUVar11 = (pUVar13->fields).Transform, pUVar11 != (UnityEngine_Transform_o *)0x0)))) {
              UVar23 = UnityEngine_Transform__get_up(pUVar11,(MethodInfo *)0x0);
              pCVar16 = (__this->fields)._human;
              if (((pCVar16 != (Characters_Human_o *)0x0) &&
                  (pCVar16 = (pCVar16->fields).Carrier, pCVar16 != (Characters_Human_o *)0x0)) &&
                 ((pUVar13 = (pCVar16->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0 &&
                  (pUVar11 = (pUVar13->fields).Transform, pUVar11 != (UnityEngine_Transform_o *)0x0)))) {
                pUVar12 = (__this->fields)._transform;
                UVar24 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
                if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                  fStack_58 = UVar22.fields.x;
                  fStack_54 = UVar22.fields.y;
                  fStack_68 = UVar23.fields.x;
                  fStack_64 = UVar23.fields.y;
                  value.fields.y = (fStack_64 * 0.5 - fStack_54 * 0.4) + UVar24.fields.y;
                  value.fields.x = (fStack_68 * 0.5 - fStack_58 * 0.4) + UVar24.fields.x;
                  value.fields.z = (UVar23.fields.z * 0.5 - UVar22.fields.z * 0.4) + UVar24.fields.z;
                  UnityEngine_Transform__set_position(pUVar12,value,(MethodInfo *)0x0);
                  pCVar16 = (__this->fields)._human;
                  if ((((pCVar16 != (Characters_Human_o *)0x0) &&
                       (pCVar16 = (pCVar16->fields).Carrier, pCVar16 != (Characters_Human_o *)0x0)) &&
                      (pUVar13 = (pCVar16->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0)) &&
                     (pUVar11 = (pUVar13->fields).Transform, pUVar11 != (UnityEngine_Transform_o *)0x0)) {
                    pUVar12 = (__this->fields)._transform;
                    UVar21 = UnityEngine_Transform__get_rotation(pUVar11,(MethodInfo *)0x0);
                    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                      UnityEngine_Transform__set_rotation(pUVar12,UVar21,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
          goto label_05bf5fb0;
        }
      }
      pUVar11 = (__this->fields)._transform;
      if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
        UVar22 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
        uVar3 = (__this->fields)._correctPosition.fields.x;
        uVar7 = (__this->fields)._correctPosition.fields.y;
        fVar18 = (__this->fields)._correctPosition.fields.z;
        fStack_28 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar17 = Characters_BaseMovementSync__get_SmoothingDelay
                           ((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
        fVar17 = fStack_28 * fVar17;
        fVar20 = 1.0;
        if (fVar17 <= 1.0) {
          fVar20 = fVar17;
        }
        fVar20 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar20);
        fStack_68 = UVar22.fields.x;
        fStack_64 = UVar22.fields.y;
        UVar23.fields.x = fVar20 * ((float)uVar3 - fStack_68) + fStack_68;
        UVar23.fields.y = fVar20 * ((float)uVar7 - fStack_64) + fStack_64;
        UVar23.fields.z = (fVar18 - UVar22.fields.z) * fVar20 + UVar22.fields.z;
        UnityEngine_Transform__set_position(pUVar11,UVar23,(MethodInfo *)0x0);
        pUVar11 = (__this->fields)._transform;
        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
          UVar21 = UnityEngine_Transform__get_rotation(pUVar11,(MethodInfo *)0x0);
          uVar19._0_4_ = (__this->fields)._correctRotation.fields.x;
          uVar19._4_4_ = (__this->fields)._correctRotation.fields.y;
          uVar14._0_4_ = (__this->fields)._correctRotation.fields.z;
          uVar14._4_4_ = (__this->fields)._correctRotation.fields.w;
          fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          fVar20 = Characters_BaseMovementSync__get_SmoothingDelay
                             ((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
          UStack_48._0_8_ = uVar19;
          UStack_48._8_8_ = uVar14;
          UStack_38 = UVar21;
          UVar21 = UnityEngine_Quaternion__Internal_Lerp
                             (&UStack_38,(UnityEngine_Quaternion_o *)&UStack_48,fVar20 * fVar18,
                              (MethodInfo *)0x0);
          UnityEngine_Transform__set_rotation(pUVar11,UVar21,(MethodInfo *)0x0);
          pCVar16 = (__this->fields)._human;
          if (pCVar16 != (Characters_Human_o *)0x0) {
            pCVar16 = (pCVar16->fields).BackHuman;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar15 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pCVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if (bVar15) {
              pCVar16 = (__this->fields)._human;
              if (pCVar16 == (Characters_Human_o *)0x0) goto label_05bf5fb0;
              fVar18 = (__this->fields)._correctVelocity.fields.x;
              fVar20 = (__this->fields)._correctVelocity.fields.y;
              (pCVar16->fields).CarryVelocity.fields.z = (__this->fields)._correctVelocity.fields.z;
              (pCVar16->fields).CarryVelocity.fields.x = fVar18;
              (pCVar16->fields).CarryVelocity.fields.y = fVar20;
            }
            fVar18 = (__this->fields).MaxPredictionTime;
            pfVar1 = &(__this->fields)._timeSinceLastMessage;
            if (fVar18 < *pfVar1 || fVar18 == *pfVar1) {
              return;
            }
            uVar4 = (__this->fields)._correctPosition.fields.x;
            uVar8 = (__this->fields)._correctPosition.fields.y;
            fVar18 = (__this->fields)._correctPosition.fields.z;
            uVar5 = (__this->fields)._correctVelocity.fields.x;
            uVar9 = (__this->fields)._correctVelocity.fields.y;
            fVar20 = (__this->fields)._correctVelocity.fields.z;
            fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            (__this->fields)._correctPosition.fields.x = fVar17 * (float)uVar5 + (float)uVar4;
            (__this->fields)._correctPosition.fields.y = fVar17 * (float)uVar9 + (float)uVar8;
            (__this->fields)._correctPosition.fields.z = fVar20 * fVar17 + fVar18;
            fVar18 = (__this->fields)._timeSinceLastMessage;
            fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            (__this->fields)._timeSinceLastMessage = fVar20 + fVar18;
            return;
          }
        }
      }
    }
  }
label_05bf5fb0:
  ThrowNullReferenceException();
}


// Characters.HumanMovementSync$$.ctor
// il2cpp: void Characters_HumanMovementSync___ctor (Characters_HumanMovementSync_o* __this, const MethodInfo* method);
// 0x5bf5fc0

void Characters_HumanMovementSync___ctor(Characters_HumanMovementSync_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


