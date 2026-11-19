// Type: Characters.BasicTitanMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/BasicTitanMovementSync.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanMovementSync.cs
// --------------------------------

// Characters.BasicTitanMovementSync$$Awake
// il2cpp: void Characters_BasicTitanMovementSync__Awake (Characters_BasicTitanMovementSync_o* __this, const MethodInfo* method);
// 0x5c41c00

void Characters_BasicTitanMovementSync__Awake(Characters_BasicTitanMovementSync_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  if (Il2CppMethodInitialized_07547817 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
    Il2CppMethodInitialized_07547817 = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pCVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
  (__this->fields)._titan = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titan);
  return;
}


// Characters.BasicTitanMovementSync$$SendCustomStream
// il2cpp: void Characters_BasicTitanMovementSync__SendCustomStream (Characters_BasicTitanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x5c41c60

void Characters_BasicTitanMovementSync__SendCustomStream
               (Characters_BasicTitanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  System_Nullable_Quaternion__o *pSVar2;
  Il2CppObject *pIVar3;
  undefined4 local_4c;
  System_Nullable_Quaternion__Fields local_48;
  UnityEngine_Quaternion_o local_28;
  
  if (Il2CppMethodInitialized_07547818 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    Il2CppMethodInitialized_07547818 = '\x01';
  }
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    if ((pCVar1->fields).AI == false) {
      local_48.hasValue = (pCVar1->fields).LateUpdateHeadRotation.fields.hasValue;
      local_48._1_3_ = *(undefined3 *)&(pCVar1->fields).LateUpdateHeadRotation.fields.field_0x1;
      local_48.value.fields.x = (pCVar1->fields).LateUpdateHeadRotation.fields.value.fields.x;
      pSVar2 = &(pCVar1->fields).LateUpdateHeadRotation;
      local_48.value.fields.y = (pSVar2->fields).value.fields.y;
      local_48.value.fields.z = (pSVar2->fields).value.fields.z;
      local_48.value.fields.w = (pCVar1->fields).LateUpdateHeadRotation.fields.value.fields.w;
      if (local_48.hasValue == false) {
        if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
          Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        local_28 = System_Nullable_Quaternion___get_Value
                             ((System_Nullable_Quaternion__o *)&local_48,
                              (MethodInfo_3CD67B0 *)MethodInfo_System_Nullable_Quaternion_get_Value);
        if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
        }
        local_4c = il2cpp_runtime_helper_05b8cfd0(&local_28,0);
        pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_4c);
        if (stream != (Photon_Pun_PhotonStream_o *)0x0) goto label_05c41d97;
      }
    }
    else {
      local_48._0_4_ = (pCVar1->fields).TargetViewId;
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_48);
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
        Photon_Pun_PhotonStream__SendNext(stream,pIVar3,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._titan;
        if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
          local_28.fields.x._0_1_ = (pCVar1->fields).LookAtTarget;
          pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&local_28);
label_05c41d97:
          Photon_Pun_PhotonStream__SendNext(stream,pIVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitanMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_BasicTitanMovementSync__ReceiveCustomStream (Characters_BasicTitanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x5c41dd0

void Characters_BasicTitanMovementSync__ReceiveCustomStream
               (Characters_BasicTitanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Characters_BasicTitan_o *pCVar5;
  Il2CppClass *pIVar6;
  UnityEngine_Quaternion_StaticFields *pUVar7;
  UnityEngine_Quaternion_o value;
  System_Nullable_Quaternion__o *pSVar8;
  uint uVar9;
  uint uVar10;
  Il2CppObject *pIVar11;
  int32_t *piVar12;
  undefined1 *puVar13;
  float *pfVar14;
  float fVar15;
  System_Nullable_int__Fields local_78;
  undefined8 uStack_70;
  System_Nullable_int__Fields local_60;
  System_Nullable_Quaternion__Fields local_58;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  if (g_data_07547819 == '\0') {
    uStack_70 = 0x5c41dfc;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_ctor);
    uStack_70 = 0x5c41e08;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    uStack_70 = 0x5c41e14;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    uStack_70 = 0x5c41e20;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Nullable_int);
    uStack_70 = 0x5c41e2c;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    g_data_07547819 = '\x01';
  }
  pCVar5 = (__this->fields)._titan;
  if (pCVar5 == (Characters_BasicTitan_o *)0x0) goto label_05c4217d;
  if ((pCVar5->fields).AI != false) {
    if ((stream != (Photon_Pun_PhotonStream_o *)0x0) &&
       (pIVar11 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0),
       pIVar11 != (Il2CppObject *)0x0)) {
      if ((pIVar11->klass->_1).element_class == *(Il2CppClass **)(g_data_07556710 + 0x40)) {
        piVar12 = il2cpp_vm_Object_Unbox(pIVar11);
        (pCVar5->fields).TargetViewId = *piVar12;
        pCVar5 = (__this->fields)._titan;
        pIVar11 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
        if ((pCVar5 == (Characters_BasicTitan_o *)0x0) || (pIVar11 == (Il2CppObject *)0x0)) goto label_05c4217d;
        if ((pIVar11->klass->_1).element_class == *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
          puVar13 = il2cpp_vm_Object_Unbox(pIVar11);
          (pCVar5->fields).LookAtTarget = (bool)*puVar13;
          return;
        }
      }
      il2cpp_codegen_raise_invalid_cast_exception(pIVar11);
    }
    goto label_05c4217d;
  }
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto label_05c4217d;
  pIVar11 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  if ((pIVar11 != (Il2CppObject *)0x0) &&
     (pIVar6 = (TypeInfo_System_Nullable_int->_1).element_class, pIVar11->klass != pIVar6)) {
    il2cpp_codegen_raise_invalid_cast_exception(pIVar11,pIVar6);
  }
  il2cpp_runtime_helper_031230d0(pIVar11,TypeInfo_System_Nullable_int,&local_78);
  local_60 = local_78;
  if (local_78.hasValue == false) {
    pCVar5 = (__this->fields)._titan;
    if (pCVar5 != (Characters_BasicTitan_o *)0x0) {
      (pCVar5->fields).LateUpdateHeadRotationRecv.fields.hasValue = false;
      *(undefined3 *)&(pCVar5->fields).LateUpdateHeadRotationRecv.fields.field_0x1 = 0;
      (pCVar5->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = 0.0;
      pSVar8 = &(pCVar5->fields).LateUpdateHeadRotationRecv;
      (pSVar8->fields).value.fields.y = 0.0;
      (pSVar8->fields).value.fields.z = 0.0;
      (pCVar5->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = 0.0;
      return;
    }
    goto label_05c4217d;
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
  }
  pUVar7 = TypeInfo_UnityEngine_Quaternion->static_fields;
  uVar1 = (pUVar7->identityQuaternion).fields.x;
  uVar3 = (pUVar7->identityQuaternion).fields.y;
  uVar2 = (pUVar7->identityQuaternion).fields.z;
  uVar4 = (pUVar7->identityQuaternion).fields.w;
  local_40 = (float)uVar1;
  fStack_3c = (float)uVar3;
  local_38 = (float)uVar2;
  fStack_34 = (float)uVar4;
  uVar9 = System_Nullable_int___get_Value
                    ((System_Nullable_int__o *)&local_60,
                     (MethodInfo_3CD4BC0 *)MethodInfo_System_Nullable_int_get_Value);
  if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
    if (uVar9 >> 0x1e == 3) goto label_05c41fad;
label_05c41fee:
    fStack_34 = (float)(uVar9 & 0x1ff) * 0.0013837706;
    if ((uVar9 & 0x200) != 0) {
      fStack_34 = -fStack_34;
    }
    fVar15 = fStack_34 * fStack_34 + 0.0;
    uVar10 = uVar9 >> 10;
    if (uVar9 >> 0x1e != 2) goto label_05c42030;
label_05c4206a:
    fStack_3c = (float)(uVar10 & 0x1ff) * 0.0013837706;
    if ((uVar10 & 0x200) != 0) {
      fStack_3c = -fStack_3c;
    }
    fVar15 = fVar15 + fStack_3c * fStack_3c;
    uVar10 = uVar10 >> 10;
  }
  else {
    if (uVar9 >> 0x1e != 3) goto label_05c41fee;
label_05c41fad:
    fVar15 = 0.0;
    uVar10 = uVar9;
label_05c42030:
    local_38 = (float)(uVar10 & 0x1ff) * 0.0013837706;
    if ((uVar10 & 0x200) != 0) {
      local_38 = -local_38;
    }
    fVar15 = fVar15 + local_38 * local_38;
    uVar10 = uVar10 >> 10;
    if (uVar9 >> 0x1e != 1) goto label_05c4206a;
  }
  if (0x3fffffff < uVar9) {
    local_40 = (float)(uVar10 & 0x1ff) * 0.0013837706;
    if ((uVar10 & 0x200) != 0) {
      local_40 = -local_40;
    }
    fVar15 = fVar15 + local_40 * local_40;
  }
  fVar15 = 1.0 - fVar15;
  if (fVar15 < 0.0) {
    fVar15 = sqrtf(fVar15);
  }
  else {
    fVar15 = SQRT(fVar15);
  }
  pfVar14 = &local_40;
  switch(uVar9 >> 0x1e) {
  case 1:
    pfVar14 = &fStack_3c;
    break;
  case 2:
    pfVar14 = &local_38;
    break;
  case 3:
    pfVar14 = &fStack_34;
  }
  *pfVar14 = fVar15;
  pCVar5 = (__this->fields)._titan;
  value.fields.y = fStack_3c;
  value.fields.x = local_40;
  value.fields.z = local_38;
  value.fields.w = fStack_34;
  local_58.hasValue = false;
  local_58._1_3_ = 0;
  local_58.value.fields.x = 0.0;
  local_58.value.fields.y = 0.0;
  local_58.value.fields.z = 0.0;
  local_58.value.fields.w = 0.0;
  System_Nullable_Quaternion____ctor
            ((System_Nullable_Quaternion__o *)&local_58,value,
             (MethodInfo_3CD6790 *)MethodInfo_System_Nullable_Quaternion_ctor);
  if (pCVar5 != (Characters_BasicTitan_o *)0x0) {
    (pCVar5->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = local_58.value.fields.w;
    (pCVar5->fields).LateUpdateHeadRotationRecv.fields.hasValue = local_58.hasValue;
    *(undefined3 *)&(pCVar5->fields).LateUpdateHeadRotationRecv.fields.field_0x1 = local_58._1_3_;
    (pCVar5->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = local_58.value.fields.x;
    pSVar8 = &(pCVar5->fields).LateUpdateHeadRotationRecv;
    (pSVar8->fields).value.fields.y = local_58.value.fields.y;
    (pSVar8->fields).value.fields.z = local_58.value.fields.z;
    return;
  }
label_05c4217d:
  ThrowNullReferenceException();
}


// Characters.BasicTitanMovementSync$$.ctor
// il2cpp: void Characters_BasicTitanMovementSync___ctor (Characters_BasicTitanMovementSync_o* __this, const MethodInfo* method);
// 0x5c421a0

void Characters_BasicTitanMovementSync___ctor(Characters_BasicTitanMovementSync_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


