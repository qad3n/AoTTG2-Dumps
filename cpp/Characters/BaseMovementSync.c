// Type: Characters.BaseMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BaseMovementSync.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/BaseMovementSync.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BaseMovementSync$$get_SmoothingDelay
// il2cpp: float Characters_BaseMovementSync__get_SmoothingDelay (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x3f9b6b0

float Characters_BaseMovementSync__get_SmoothingDelay
                (Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.BaseMovementSync$$Awake
// il2cpp: void Characters_BaseMovementSync__Awake (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x3f9b6c0

void Characters_BaseMovementSync__Awake(Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  UnityEngine_Rigidbody_o *pUVar4;
  Characters_BaseCharacter_o *pCVar5;
  UnityEngine_Vector3_Fields UVar6;
  UnityEngine_Quaternion_Fields UVar7;
  
  if (DAT_0570400e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570400e = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  (__this->fields)._transform = pUVar2;
  il2cpp_runtime_glue(&(__this->fields)._transform);
  pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._photonView = pPVar3;
  il2cpp_runtime_glue(&(__this->fields)._photonView);
  pUVar2 = (__this->fields)._transform;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar6 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    (__this->fields)._correctPosition.fields = UVar6;
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UVar7 = (UnityEngine_Quaternion_Fields)
              UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
      (__this->fields)._correctRotation.fields = UVar7;
      pUVar4 = (UnityEngine_Rigidbody_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this,MethodInfo_Rigidbody_GetComponent_Rigidbody);
      (__this->fields)._rigidbody = pUVar4;
      il2cpp_runtime_glue(&(__this->fields)._rigidbody,pUVar4);
      pCVar5 = (Characters_BaseCharacter_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      (__this->fields)._character = pCVar5;
      il2cpp_runtime_glue(&(__this->fields)._character);
      x = (UnityEngine_Object_o *)(__this->fields)._rigidbody;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        *(undefined1 *)&(__this->fields)._syncVelocity = 1;
        pUVar4 = (__this->fields)._rigidbody;
        if (pUVar4 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03f9b811;
        UVar6 = (UnityEngine_Vector3_Fields)
                UnityEngine_Rigidbody__get_velocity(pUVar4,(MethodInfo *)0x0);
        (__this->fields)._correctVelocity.fields = UVar6;
      }
      return;
    }
  }
LAB_03f9b811:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseMovementSync$$SendCustomStream
// il2cpp: void Characters_BaseMovementSync__SendCustomStream (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x3f9b820

void Characters_BaseMovementSync__SendCustomStream
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  return;
}


// Characters.BaseMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_BaseMovementSync__ReceiveCustomStream (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x3f9b830

void Characters_BaseMovementSync__ReceiveCustomStream
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  return;
}


// Characters.BaseMovementSync$$OnPhotonSerializeView
// il2cpp: void Characters_BaseMovementSync__OnPhotonSerializeView (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f9b840

/* WARNING: Type propagation algorithm not settling */

void Characters_BaseMovementSync__OnPhotonSerializeView
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_BaseCharacter_o *pCVar4;
  long lVar5;
  undefined8 uVar6;
  bool_conflict bVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  Il2CppObject *pIVar11;
  undefined8 *puVar12;
  uint *puVar13;
  uint uVar14;
  Il2CppClass *pIVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  undefined8 local_88;
  undefined8 uStack_80;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_Fields local_68;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  float local_38;
  
  if (DAT_0570400f == '\0') {
    uStack_80 = 0x3f9b86c;
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    uStack_80 = 0x3f9b878;
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    uStack_80 = 0x3f9b884;
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    uStack_80 = 0x3f9b890;
    il2cpp_init_method_metadata(&TypeInfo_int);
    uStack_80 = 0x3f9b89c;
    il2cpp_init_method_metadata(&TypeInfo_Object);
    uStack_80 = 0x3f9b8a8;
    il2cpp_init_method_metadata(&TypeInfo_QuaternionCompression);
    uStack_80 = 0x3f9b8b4;
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    uStack_80 = 0x3f9b8c0;
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    uStack_80 = 0x3f9b8cc;
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570400f = '\x01';
  }
  local_78 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  local_68 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  local_50 = 0;
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto LAB_03f9c0a3;
  if ((char)(stream->fields)._IsWriting_k__BackingField != '\0') {
    pUVar3 = (__this->fields)._transform;
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_03f9c0a3;
    UVar18 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    local_38 = UVar18.fields.z;
    local_40 = UVar18.fields._0_8_;
    pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_40);
    Photon_Pun_PhotonStream__SendNext(stream,pIVar11,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._transform;
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_03f9c0a3;
    local_78 = (UnityEngine_Quaternion_Fields)
               UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_44 = il2cpp_glue_03f55800(&local_78,0);
    pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_44);
    Photon_Pun_PhotonStream__SendNext(stream,pIVar11,(MethodInfo *)0x0);
    if ((char)(__this->fields)._syncVelocity != '\0') {
      __this_00 = (__this->fields)._rigidbody;
      if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03f9c0a3;
      UVar18 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
      local_38 = UVar18.fields.z;
      local_40 = UVar18.fields._0_8_;
      pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_40);
      Photon_Pun_PhotonStream__SendNext(stream,pIVar11,(MethodInfo *)0x0);
    }
    pCVar4 = (__this->fields)._character;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 == '\0') {
LAB_03f9bec1:
      (*(__this->klass->vtable)._6_SendCustomStream.methodPtr)
                (__this,stream,(__this->klass->vtable)._6_SendCustomStream.method);
      return;
    }
    pCVar4 = (__this->fields)._character;
    if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f9c0a3;
    if ((char)(pCVar4->fields).CustomDamage != '\0') goto LAB_03f9bec1;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar11 = *(Il2CppObject **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pIVar11 == (Il2CppObject *)0x0) goto LAB_03f9c0a3;
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    pIVar15 = TypeInfo_InGameMenu;
    if ((bVar1 <= (pIVar11->klass->_2).naturalAligment) &&
       ((pIVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      if (*(int *)((long)&pIVar11[0x23].monitor + 4) < 1) {
        pIVar11 = (Il2CppObject *)0x0;
      }
      else {
        lVar5 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x28), lVar5 == 0)) ||
           (pUVar3 = *(UnityEngine_Transform_o **)(lVar5 + 0x10),
           pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f9c0a3;
        local_68 = (UnityEngine_Quaternion_Fields)
                   UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar8 = il2cpp_glue_03f55800(&local_68,0);
        local_40 = CONCAT44(local_40._4_4_,uVar8);
        pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_40);
      }
      Photon_Pun_PhotonStream__SendNext(stream,pIVar11,(MethodInfo *)0x0);
      goto LAB_03f9bec1;
    }
    goto LAB_03f9c0be;
  }
  pIVar11 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  if (pIVar11 == (Il2CppObject *)0x0) goto LAB_03f9c0a3;
  if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40))
  goto LAB_03f9c0a8;
  puVar12 = (undefined8 *)il2cpp_glue_022c7330(pIVar11);
  uVar6 = *puVar12;
  (__this->fields)._correctPosition.fields.x = (float)(int)uVar6;
  (__this->fields)._correctPosition.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
  (__this->fields)._correctPosition.fields.z = *(float *)(puVar12 + 1);
  pIVar11 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pIVar11 == (Il2CppObject *)0x0) goto LAB_03f9c0a3;
  if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pIVar11);
  }
  puVar13 = (uint *)il2cpp_glue_022c7330(pIVar11);
  uVar10 = *puVar13;
  uVar14 = uVar10 >> 0x1e;
  fVar16 = 0.0;
  uVar9 = uVar10;
  if (uVar14 == 3) {
LAB_03f9bc14:
    fVar17 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar9 & 0x200) == 0) * 4);
    (__this->fields)._correctRotation.fields.z = fVar17;
    fVar16 = fVar17 * fVar17 + fVar16;
    uVar9 = uVar9 >> 10;
    if (uVar14 != 1) goto LAB_03f9bc5c;
LAB_03f9bcaa:
    fVar17 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar9 & 0x200) == 0) * 4);
    (__this->fields)._correctRotation.fields.x = fVar17;
    fVar16 = 1.0 - (fVar17 * fVar17 + fVar16);
    if (fVar16 < 0.0) {
      fVar16 = sqrtf(fVar16);
    }
    else {
      fVar16 = SQRT(fVar16);
    }
    if (uVar14 == 1) {
      (__this->fields)._correctRotation.fields.y = fVar16;
      cVar2 = (char)(__this->fields)._syncVelocity;
    }
    else if (uVar14 == 2) {
      (__this->fields)._correctRotation.fields.z = fVar16;
      cVar2 = (char)(__this->fields)._syncVelocity;
    }
    else {
      (__this->fields)._correctRotation.fields.w = fVar16;
      cVar2 = (char)(__this->fields)._syncVelocity;
    }
  }
  else {
    fVar16 = (float)(uVar10 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar10 & 0x200) == 0) * 4);
    (__this->fields)._correctRotation.fields.w = fVar16;
    fVar16 = fVar16 * fVar16 + 0.0;
    uVar9 = uVar10 >> 10;
    if (uVar14 != 2) goto LAB_03f9bc14;
LAB_03f9bc5c:
    fVar17 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar9 & 0x200) == 0) * 4);
    (__this->fields)._correctRotation.fields.y = fVar17;
    fVar16 = fVar17 * fVar17 + fVar16;
    if (uVar10 >> 0x1e != 0) {
      uVar9 = uVar9 >> 10;
      goto LAB_03f9bcaa;
    }
    fVar16 = 1.0 - fVar16;
    if (fVar16 < 0.0) {
      fVar16 = sqrtf(fVar16);
      (__this->fields)._correctRotation.fields.x = fVar16;
      cVar2 = (char)(__this->fields)._syncVelocity;
    }
    else {
      (__this->fields)._correctRotation.fields.x = SQRT(fVar16);
      cVar2 = (char)(__this->fields)._syncVelocity;
    }
  }
  if (cVar2 != '\0') {
    pIVar11 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pIVar11 == (Il2CppObject *)0x0) goto LAB_03f9c0a3;
    if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) {
LAB_03f9c0a8:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar11);
    }
    puVar12 = (undefined8 *)il2cpp_glue_022c7330(pIVar11);
    uVar6 = *puVar12;
    (__this->fields)._correctVelocity.fields.x = (float)(int)uVar6;
    (__this->fields)._correctVelocity.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
    (__this->fields)._correctVelocity.fields.z = *(float *)(puVar12 + 1);
  }
  pCVar4 = (__this->fields)._character;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') goto LAB_03f9be10;
  pCVar4 = (__this->fields)._character;
  if (pCVar4 == (Characters_BaseCharacter_o *)0x0) {
LAB_03f9c0a3:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((char)(pCVar4->fields).CustomDamage != '\0') goto LAB_03f9be10;
  pIVar11 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  if ((pIVar11 != (Il2CppObject *)0x0) &&
     (pIVar15 = *(Il2CppClass **)(TypeInfo_int + 0x40), pIVar11->klass != pIVar15)) {
LAB_03f9c0be:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pIVar11,pIVar15);
  }
  il2cpp_glue_022c7340(pIVar11,TypeInfo_int,&local_88);
  local_50 = local_88;
  if ((char)local_88 == '\0') goto LAB_03f9be10;
  uVar10 = System_Nullable<int>__get_Value((System_Nullable_int__o)&local_50,MethodInfo_Int32_get_Value);
  if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar9 = uVar10 >> 0x1e;
  if (uVar9 == 3) {
    fVar16 = 0.0;
    uVar14 = uVar10;
LAB_03f9bf3c:
    fVar17 = (float)(uVar14 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar14 & 0x200) == 0) * 4);
    (__this->fields)._correctCamera.fields.z = fVar17;
    fVar16 = fVar17 * fVar17 + fVar16;
    uVar14 = uVar14 >> 10;
    if (uVar9 != 1) goto LAB_03f9bf88;
  }
  else {
    fVar16 = (float)(uVar10 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar10 & 0x200) == 0) * 4);
    (__this->fields)._correctCamera.fields.w = fVar16;
    fVar16 = fVar16 * fVar16 + 0.0;
    uVar14 = uVar10 >> 10;
    if (uVar9 != 2) goto LAB_03f9bf3c;
LAB_03f9bf88:
    fVar17 = (float)(uVar14 & 0x1ff) * 0.0013837706 *
             *(float *)(&DAT_00cd0ef0 + (ulong)((uVar14 & 0x200) == 0) * 4);
    (__this->fields)._correctCamera.fields.y = fVar17;
    fVar16 = fVar17 * fVar17 + fVar16;
    if (uVar10 >> 0x1e == 0) {
      fVar16 = 1.0 - fVar16;
      if (fVar16 < 0.0) {
        fVar16 = sqrtf(fVar16);
        (__this->fields)._correctCamera.fields.x = fVar16;
      }
      else {
        (__this->fields)._correctCamera.fields.x = SQRT(fVar16);
      }
      goto LAB_03f9be10;
    }
    uVar14 = uVar14 >> 10;
  }
  fVar17 = (float)(uVar14 & 0x1ff) * 0.0013837706 *
           *(float *)(&DAT_00cd0ef0 + (ulong)((uVar14 & 0x200) == 0) * 4);
  (__this->fields)._correctCamera.fields.x = fVar17;
  fVar16 = 1.0 - (fVar17 * fVar17 + fVar16);
  if (fVar16 < 0.0) {
    fVar16 = sqrtf(fVar16);
  }
  else {
    fVar16 = SQRT(fVar16);
  }
  if (uVar9 == 1) {
    (__this->fields)._correctCamera.fields.y = fVar16;
  }
  else if (uVar9 == 2) {
    (__this->fields)._correctCamera.fields.z = fVar16;
  }
  else {
    (__this->fields)._correctCamera.fields.w = fVar16;
  }
LAB_03f9be10:
  (*(__this->klass->vtable)._7_ReceiveCustomStream.methodPtr)
            (__this,stream,(__this->klass->vtable)._7_ReceiveCustomStream.method);
  (__this->fields)._timeSinceLastMessage = 0.0;
  return;
}


// Characters.BaseMovementSync$$Update
// il2cpp: void Characters_BaseMovementSync__Update (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x3f9c0d0

void Characters_BaseMovementSync__Update(Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Quaternion_Fields b;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o UVar14;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if ((char)(__this->fields).Disabled != '\0') {
    return;
  }
  pPVar8 = (__this->fields)._photonView;
  if (pPVar8 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar8->fields)._IsMine_k__BackingField != '\0') {
      return;
    }
    pUVar9 = (__this->fields)._transform;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      UVar13 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      uVar2 = (__this->fields)._correctPosition.fields.x;
      uVar5 = (__this->fields)._correctPosition.fields.y;
      fVar12 = (__this->fields)._correctPosition.fields.z;
      fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar10 = fVar10 * 10.0;
      fVar11 = 1.0;
      if (fVar10 <= 1.0) {
        fVar11 = fVar10;
      }
      fVar11 = (float)(-(uint)(0.0 <= fVar10) & (uint)fVar11);
      local_38 = UVar13.fields.x;
      fStack_34 = UVar13.fields.y;
      value.fields.y = fStack_34 + fVar11 * ((float)uVar5 - fStack_34);
      value.fields.x = local_38 + fVar11 * ((float)uVar2 - local_38);
      value.fields.z = UVar13.fields.z + (fVar12 - UVar13.fields.z) * fVar11;
      UnityEngine_Transform__set_position(pUVar9,value,(MethodInfo *)0x0);
      pUVar9 = (__this->fields)._transform;
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        UVar14 = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
        b = (__this->fields)._correctRotation.fields;
        fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar14 = UnityEngine_Quaternion__Lerp(UVar14,b,fVar12 * 10.0,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar9,UVar14,(MethodInfo *)0x0);
        if ((char)(__this->fields)._syncVelocity == '\0') {
          return;
        }
        fVar12 = (float)(__this->fields)._syncCamera;
        pfVar1 = &(__this->fields)._timeSinceLastMessage;
        if (fVar12 < *pfVar1 || fVar12 == *pfVar1) {
          return;
        }
        uVar3 = (__this->fields)._correctPosition.fields.x;
        uVar6 = (__this->fields)._correctPosition.fields.y;
        fVar12 = (__this->fields)._correctPosition.fields.z;
        uVar4 = (__this->fields)._correctVelocity.fields.x;
        uVar7 = (__this->fields)._correctVelocity.fields.y;
        fVar11 = (__this->fields)._correctVelocity.fields.z;
        fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        (__this->fields)._correctPosition.fields.x = fVar10 * (float)uVar4 + (float)uVar3;
        (__this->fields)._correctPosition.fields.y = fVar10 * (float)uVar7 + (float)uVar6;
        (__this->fields)._correctPosition.fields.z = fVar11 * fVar10 + fVar12;
        fVar12 = (__this->fields)._timeSinceLastMessage;
        fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        (__this->fields)._timeSinceLastMessage = fVar11 + fVar12;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseMovementSync$$Photon.Pun.IPunObservable.OnPhotonSerializeView
// il2cpp: void Characters_BaseMovementSync__Photon_Pun_IPunObservable_OnPhotonSerializeView (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f9c2b0

void Characters_BaseMovementSync__Photon_Pun_IPunObservable_OnPhotonSerializeView
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._8_OnPhotonSerializeView.methodPtr;
  (*vtable_dispatch)
            (__this,stream,(__this->klass->vtable)._8_OnPhotonSerializeView.method,
             vtable_dispatch);
  return;
}


// Characters.BaseMovementSync$$.ctor
// il2cpp: void Characters_BaseMovementSync___ctor (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x3f9c2d0

void Characters_BaseMovementSync___ctor(Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._correctPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._correctPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._correctPosition.fields.z = fVar1;
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
    bVar7 = DAT_056fdd15 == '\0';
    pfVar3 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar1 = pfVar3[1];
    fVar4 = pfVar3[2];
    fVar5 = pfVar3[3];
    (__this->fields)._correctRotation.fields.x = *pfVar3;
    (__this->fields)._correctRotation.fields.y = fVar1;
    (__this->fields)._correctRotation.fields.z = fVar4;
    (__this->fields)._correctRotation.fields.w = fVar5;
    if (bVar7) {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
      bVar7 = DAT_056fde1e == '\0';
      goto LAB_03f9c367;
    }
  }
  else {
    pfVar3 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar1 = pfVar3[1];
    fVar4 = pfVar3[2];
    fVar5 = pfVar3[3];
    (__this->fields)._correctRotation.fields.x = *pfVar3;
    (__this->fields)._correctRotation.fields.y = fVar1;
    (__this->fields)._correctRotation.fields.z = fVar4;
    (__this->fields)._correctRotation.fields.w = fVar5;
  }
  bVar7 = false;
LAB_03f9c367:
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._correctVelocity.fields.x = (float)(int)uVar2;
  (__this->fields)._correctVelocity.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._correctVelocity.fields.z = fVar1;
  if (bVar7) {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uVar6 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  (__this->fields)._correctCamera.fields.x = (float)(int)uVar2;
  (__this->fields)._correctCamera.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._correctCamera.fields.z = (float)(int)uVar6;
  (__this->fields)._correctCamera.fields.w = (float)(int)((ulong)uVar6 >> 0x20);
  (__this->fields)._syncCamera = 0x3f000000;
  Photon_Pun_MonoBehaviourPun___ctor((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  return;
}


