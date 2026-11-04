// Type: Characters.BasicTitanMovementSync
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BasicTitanMovementSync.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanMovementSync.cs
// --------------------------------

// Characters.BasicTitanMovementSync$$Awake
// il2cpp: void Characters_BasicTitanMovementSync__Awake (Characters_BasicTitanMovementSync_o* __this, const MethodInfo* method);
// 0x18219df10

void Characters_BasicTitanMovementSync__Awake(Characters_BasicTitanMovementSync_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *value;
  
  if (Il2CppMethodInitialized_184346e35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
    Il2CppMethodInitialized_184346e35 = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BasicTitan);
  (__this->fields)._titan = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titan,value);
  return;
}


// Characters.BasicTitanMovementSync$$SendCustomStream
// il2cpp: void Characters_BasicTitanMovementSync__SendCustomStream (Characters_BasicTitanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x18219e2e0

void Characters_BasicTitanMovementSync__SendCustomStream
               (Characters_BasicTitanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  System_Nullable_Quaternion__o *pSVar1;
  Characters_BasicTitan_o *pCVar2;
  System_Nullable_Quaternion__o *pSVar3;
  Il2CppObject *pIVar4;
  undefined4 local_res8 [2];
  int32_t local_res20 [2];
  UnityEngine_Vector4_o local_38;
  System_Nullable_Vector4__Fields local_28;
  
  if (Il2CppMethodInitialized_184346e36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    Il2CppMethodInitialized_184346e36 = '\x01';
  }
  pCVar2 = (__this->fields)._titan;
  local_28.value.fields.w = 0.0;
  local_28.hasValue = false;
  local_28._1_3_ = 0;
  local_28.value.fields.x = 0.0;
  local_28.value.fields.y = 0.0;
  local_28.value.fields.z = 0.0;
  if (pCVar2 != (Characters_BasicTitan_o *)0x0) {
    if ((pCVar2->fields).AI != false) {
      local_res20[0] = (pCVar2->fields).TargetViewId;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_res20);
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
        Photon_Pun_PhotonStream__SendNext(stream,pIVar4,(MethodInfo *)0x0);
        pCVar2 = (__this->fields)._titan;
        if (pCVar2 != (Characters_BasicTitan_o *)0x0) {
          local_res8[0] = CONCAT31(local_res8[0]._1_3_,(pCVar2->fields).LookAtTarget);
          pIVar4 = il2cpp_value_box(g_data_184354de8,local_res8);
          Photon_Pun_PhotonStream__SendNext(stream,pIVar4,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
    pSVar1 = &(pCVar2->fields).LateUpdateHeadRotation;
    local_28.hasValue = (pSVar1->fields).hasValue;
    local_28._1_3_ = *(undefined3 *)&(pSVar1->fields).field_0x1;
    local_28.value.fields.x = (pSVar1->fields).value.fields.x;
    pSVar3 = &(pCVar2->fields).LateUpdateHeadRotation;
    local_28.value.fields.y = (pSVar3->fields).value.fields.y;
    local_28.value.fields.z = (pSVar3->fields).value.fields.z;
    local_28.value.fields.w = (pCVar2->fields).LateUpdateHeadRotation.fields.value.fields.w;
    if ((pSVar1->fields).hasValue != false) {
      System_Nullable_Vector4___get_Value
                (&local_38,(System_Nullable_Vector4__o *)&local_28,
                 (MethodInfo_AE2AC0 *)MethodInfo_System_Nullable_Quaternion_get_Value);
      if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
      }
      local_res8[0] = il2cpp_runtime_helper_18208d050(&local_38,0);
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_res8);
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
        Photon_Pun_PhotonStream__SendNext(stream,pIVar4,(MethodInfo *)0x0);
        return;
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


// Characters.BasicTitanMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_BasicTitanMovementSync__ReceiveCustomStream (Characters_BasicTitanMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x18219df70
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219e2a0: call 0x180416360  ; il2cpp_object_unbox()
// asm:   0x18219e2a5: movzx ecx, byte ptr [rax]
// asm:   0x18219e2a8: mov byte ptr [rdi + 0x370], cl
// asm:   0x18219e2ae: jmp 0x18219e094

void Characters_BasicTitanMovementSync__ReceiveCustomStream
               (Characters_BasicTitanMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppClass *pIVar2;
  UnityEngine_Quaternion_StaticFields *pUVar3;
  System_Nullable_Quaternion__o *pSVar4;
  uint32_t uVar5;
  Il2CppObject *pIVar6;
  int32_t *piVar7;
  undefined1 *puVar8;
  uint index;
  uint index_00;
  float fVar9;
  float fVar10;
  float fVar11;
  System_Nullable_uint__Fields local_res8;
  System_Nullable_uint__Fields local_a8;
  UnityEngine_Quaternion_Fields local_98;
  System_Nullable_Vector4__Fields local_88 [5];
  
  if (Il2CppMethodInitialized_184346e37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Nullable_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    Il2CppMethodInitialized_184346e37 = '\x01';
  }
  pCVar1 = (__this->fields)._titan;
  local_res8.hasValue = false;
  local_res8._1_3_ = 0;
  local_res8.value = 0;
  if ((pCVar1 != (Characters_BasicTitan_o *)0x0) && (stream != (Photon_Pun_PhotonStream_o *)0x0)) {
    if ((pCVar1->fields).AI == false) {
      pIVar6 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (pIVar2 = (TypeInfo_System_Nullable_int->_1).element_class, pIVar6->klass != pIVar2)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6,pIVar2);
      }
      il2cpp_runtime_helper_18046d510();
      local_res8 = local_a8;
      if (local_a8.hasValue == false) {
        pCVar1 = (__this->fields)._titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_18219e2b3;
        (pCVar1->fields).LateUpdateHeadRotationRecv.fields.hasValue = false;
        *(undefined3 *)&(pCVar1->fields).LateUpdateHeadRotationRecv.fields.field_0x1 = 0;
        (pCVar1->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = 0.0;
        pSVar4 = &(pCVar1->fields).LateUpdateHeadRotationRecv;
        (pSVar4->fields).value.fields.y = 0.0;
        (pSVar4->fields).value.fields.z = 0.0;
        (pCVar1->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = 0.0;
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
                          ((System_Nullable_uint__o *)&local_res8,
                           (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_int_get_Value);
        if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
        }
        fVar11 = 0.0;
        index = 3;
        index_00 = uVar5 >> 0x1e;
        do {
          if (index != index_00) {
            if ((uVar5 & 0x200) == 0) {
              fVar10 = 1.0;
            }
            else {
              fVar10 = -1.0;
            }
            UnityEngine_Quaternion__set_Item
                      ((UnityEngine_Quaternion_o *)&local_98,index,
                       (float)(uVar5 & 0x1ff) * 0.0013837706 * fVar10,(MethodInfo *)0x0);
            fVar10 = UnityEngine_Quaternion__get_Item
                               ((UnityEngine_Quaternion_o *)&local_98,index,(MethodInfo *)0x0);
            fVar9 = UnityEngine_Quaternion__get_Item
                              ((UnityEngine_Quaternion_o *)&local_98,index,(MethodInfo *)0x0);
            uVar5 = uVar5 >> 10;
            fVar11 = fVar11 + fVar9 * fVar10;
          }
          index = index - 1;
        } while (-1 < (int)index);
        fVar11 = 1.0 - fVar11;
        if (fVar11 < 0.0) {
          fVar11 = (float)il2cpp_runtime_helper_1804fa7a0(fVar11);
        }
        else {
          fVar11 = SQRT(fVar11);
        }
        UnityEngine_Quaternion__set_Item
                  ((UnityEngine_Quaternion_o *)&local_98,index_00,fVar11,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._titan;
        local_88[0].hasValue = false;
        local_88[0]._1_3_ = 0;
        local_88[0].value.fields.x = 0.0;
        local_88[0].value.fields.y = 0.0;
        local_88[0].value.fields.z = 0.0;
        local_88[0].value.fields.w = 0.0;
        System_Nullable_Vector4____ctor
                  ((System_Nullable_Vector4__o *)local_88,(UnityEngine_Vector4_o *)&local_98,
                   (MethodInfo_AE2670 *)MethodInfo_System_Nullable_Quaternion_ctor);
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
          ThrowNullReferenceException();
        }
        (pCVar1->fields).LateUpdateHeadRotationRecv.fields.hasValue = local_88[0].hasValue;
        *(undefined3 *)&(pCVar1->fields).LateUpdateHeadRotationRecv.fields.field_0x1 = local_88[0]._1_3_;
        (pCVar1->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = local_88[0].value.fields.x;
        pSVar4 = &(pCVar1->fields).LateUpdateHeadRotationRecv;
        (pSVar4->fields).value.fields.y = local_88[0].value.fields.y;
        (pSVar4->fields).value.fields.z = local_88[0].value.fields.z;
        (pCVar1->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = local_88[0].value.fields.w;
      }
      return;
    }
    pIVar6 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if ((pCVar1 != (Characters_BasicTitan_o *)0x0) && (pIVar6 != (Il2CppObject *)0x0)) {
      if ((pIVar6->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6,g_data_184354e08);
      }
      piVar7 = il2cpp_object_unbox(pIVar6);
      (pCVar1->fields).TargetViewId = *piVar7;
      pCVar1 = (__this->fields)._titan;
      pIVar6 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if ((pCVar1 != (Characters_BasicTitan_o *)0x0) && (pIVar6 != (Il2CppObject *)0x0)) {
        if ((pIVar6->klass->_1).element_class == *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
          puVar8 = il2cpp_object_unbox(pIVar6);
          (pCVar1->fields).LookAtTarget = (bool)*puVar8;
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6,g_data_184354de8);
      }
    }
  }
label_18219e2b3:
  ThrowNullReferenceException();
}


// Characters.BasicTitanMovementSync$$.ctor
// il2cpp: void Characters_BasicTitanMovementSync___ctor (Characters_BasicTitanMovementSync_o* __this, const MethodInfo* method);
// 0x1821531c0

void Characters_BasicTitanMovementSync___ctor(Characters_BasicTitanMovementSync_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


