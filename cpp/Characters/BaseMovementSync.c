// Type: Characters.BaseMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseMovementSync.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseMovementSync.cs
// --------------------------------

// Characters.BaseMovementSync$$get_SmoothingDelay
// il2cpp: float Characters_BaseMovementSync__get_SmoothingDelay (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x42a7f50

float Characters_BaseMovementSync__get_SmoothingDelay
                (Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.BaseMovementSync$$Awake
// il2cpp: void Characters_BaseMovementSync__Awake (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x42a7f60

void Characters_BaseMovementSync__Awake(Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  UnityEngine_Rigidbody_o *pUVar4;
  Characters_BaseCharacter_o *pCVar5;
  UnityEngine_Quaternion_Fields UVar6;
  UnityEngine_Vector3_Fields UVar7;
  
  if (g_data_057add7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add7c = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._transform = pUVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._transform);
  pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._photonView = pPVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._photonView);
  pUVar2 = (__this->fields)._transform;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar7 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    (__this->fields)._correctPosition.fields = UVar7;
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = (UnityEngine_Quaternion_Fields)UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
      (__this->fields)._correctRotation.fields = UVar6;
      pUVar4 = (UnityEngine_Rigidbody_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Rigidbody_GetComponent_Rigidbody);
      (__this->fields)._rigidbody = pUVar4;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._rigidbody,pUVar4);
      pCVar5 = (Characters_BaseCharacter_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      (__this->fields)._character = pCVar5;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._character);
      x = (UnityEngine_Object_o *)(__this->fields)._rigidbody;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        *(undefined1 *)&(__this->fields)._syncVelocity = 1;
        pUVar4 = (__this->fields)._rigidbody;
        if (pUVar4 == (UnityEngine_Rigidbody_o *)0x0) goto label_042a80b1;
        UVar7 = (UnityEngine_Vector3_Fields)UnityEngine_Rigidbody__get_velocity(pUVar4,(MethodInfo *)0x0);
        (__this->fields)._correctVelocity.fields = UVar7;
      }
      return;
    }
  }
label_042a80b1:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.BaseMovementSync$$SendCustomStream
// il2cpp: void Characters_BaseMovementSync__SendCustomStream (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x42a80c0

void Characters_BaseMovementSync__SendCustomStream
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,MethodInfo *method)

{
  return;
}


// Characters.BaseMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_BaseMovementSync__ReceiveCustomStream (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x42a80d0

void Characters_BaseMovementSync__ReceiveCustomStream
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,MethodInfo *method)

{
  return;
}


// Characters.BaseMovementSync$$OnPhotonSerializeView
// il2cpp: void Characters_BaseMovementSync__OnPhotonSerializeView (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x42a80e0

void Characters_BaseMovementSync__OnPhotonSerializeView
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Transform_c *pUVar2;
  byte bVar3;
  char cVar4;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_BaseCharacter_o *pCVar5;
  long lVar6;
  UnityEngine_Transform_o *__this_01;
  bool_conflict bVar7;
  undefined4 uVar8;
  uint uVar9;
  Il2CppObject *pIVar10;
  undefined8 *puVar11;
  uint *puVar12;
  UnityEngine_Transform_o *pUVar13;
  uint uVar14;
  long *unaff_RBX;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *pUVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Quaternion_o a;
  UnityEngine_Quaternion_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o value;
  float fStack_d0;
  float fStack_cc;
  float fStack_c0;
  float fStack_bc;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_88;
  undefined8 uStack_80;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_Fields local_68;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  float local_38;
  
  if (g_data_057add7d == '\0') {
    uStack_80 = 0x42a810c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    uStack_80 = 0x42a8118;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    uStack_80 = 0x42a8124;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    uStack_80 = 0x42a8130;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    uStack_80 = 0x42a813c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    uStack_80 = 0x42a8148;
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuaternionCompression);
    uStack_80 = 0x42a8154;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    uStack_80 = 0x42a8160;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    uStack_80 = 0x42a816c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057add7d = '\x01';
  }
  local_78 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  local_68 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  local_50 = 0;
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) {
label_042a8943:
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_042a8948:
    il2cpp_runtime_helper_022b2fd0(pIVar10);
  }
  else {
    if ((char)(stream->fields)._IsWriting_k__BackingField != '\0') {
      pUVar13 = (__this->fields)._transform;
      if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
        UVar21 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
        local_38 = UVar21.fields.z;
        local_40 = UVar21.fields._0_8_;
        unaff_RBX = &TypeInfo_Vector3;
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_40);
        Photon_Pun_PhotonStream__SendNext(stream,pIVar10,(MethodInfo *)0x0);
        pUVar13 = (__this->fields)._transform;
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          local_78 = (UnityEngine_Quaternion_Fields)
                     UnityEngine_Transform__get_rotation(pUVar13,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          local_44 = il2cpp_runtime_helper_04266c00(&local_78,0);
          pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_44);
          Photon_Pun_PhotonStream__SendNext(stream,pIVar10,(MethodInfo *)0x0);
          if ((char)(__this->fields)._syncVelocity != '\0') {
            __this_00 = (__this->fields)._rigidbody;
            if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_042a8943;
            UVar21 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
            local_38 = UVar21.fields.z;
            local_40 = UVar21.fields._0_8_;
            pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_40);
            Photon_Pun_PhotonStream__SendNext(stream,pIVar10,(MethodInfo *)0x0);
          }
          unaff_RBX = (long *)(__this->fields)._character;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') goto label_042a8761;
          pCVar5 = (__this->fields)._character;
          if (pCVar5 != (Characters_BaseCharacter_o *)0x0) {
            if ((char)(pCVar5->fields).CustomDamage != '\0') goto label_042a8761;
            unaff_RBX = &TypeInfo_UIManager;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar13 = *(UnityEngine_Transform_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
              bVar3 = (TypeInfo_InGameMenu->_2).naturalAligment;
              if (((pUVar13->klass->_2).naturalAligment < bVar3) ||
                 ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_InGameMenu)) goto label_042a895e;
              if (*(int *)((long)&pUVar13[0x18].klass + 4) < 1) {
                pIVar10 = (Il2CppObject *)0x0;
              }
              else {
                lVar6 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) ||
                   (pUVar13 = *(UnityEngine_Transform_o **)(lVar6 + 0x10),
                   pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_042a8943;
                local_68 = (UnityEngine_Quaternion_Fields)
                           UnityEngine_Transform__get_rotation(pUVar13,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uVar8 = il2cpp_runtime_helper_04266c00(&local_68,0);
                local_40 = CONCAT44(local_40._4_4_,uVar8);
                pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_40);
              }
              Photon_Pun_PhotonStream__SendNext(stream,pIVar10,(MethodInfo *)0x0);
label_042a8761:
              (*(__this->klass->vtable)._6_SendCustomStream.methodPtr)
                        (__this,stream,(__this->klass->vtable)._6_SendCustomStream.method);
              return;
            }
          }
        }
      }
      goto label_042a8943;
    }
    pIVar10 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pIVar10 == (Il2CppObject *)0x0) goto label_042a8943;
    if ((pIVar10->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) goto label_042a8948;
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02305440(pIVar10);
    uVar1 = *puVar11;
    (__this->fields)._correctPosition.fields.x = (float)(int)uVar1;
    (__this->fields)._correctPosition.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
    (__this->fields)._correctPosition.fields.z = *(float *)(puVar11 + 1);
    unaff_RBX = (long *)Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((Characters_BaseCharacter_o *)unaff_RBX == (Characters_BaseCharacter_o *)0x0) goto label_042a8943;
    if ((((Characters_BaseCharacter_o *)unaff_RBX)->klass->_1).element_class ==
        *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) {
      puVar12 = (uint *)il2cpp_runtime_helper_02305440(unaff_RBX);
      uVar9 = *puVar12;
      uVar14 = uVar9 >> 0x1e;
      unaff_RBX = (long *)(ulong)uVar14;
      fVar19 = 0.0;
      if (uVar14 == 3) {
label_042a84b4:
        fVar18 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar9 & 0x200) == 0) * 4);
        (__this->fields)._correctRotation.fields.z = fVar18;
        fVar19 = fVar18 * fVar18 + fVar19;
        uVar9 = uVar9 >> 10;
        if (uVar14 != 1) goto label_042a84fc;
label_042a854a:
        fVar18 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar9 & 0x200) == 0) * 4);
        (__this->fields)._correctRotation.fields.x = fVar18;
        fVar19 = 1.0 - (fVar18 * fVar18 + fVar19);
        if (fVar19 < 0.0) {
          fVar19 = sqrtf(fVar19);
        }
        else {
          fVar19 = SQRT(fVar19);
        }
        if (uVar14 == 1) {
          (__this->fields)._correctRotation.fields.y = fVar19;
          cVar4 = (char)(__this->fields)._syncVelocity;
        }
        else if (uVar14 == 2) {
          (__this->fields)._correctRotation.fields.z = fVar19;
          cVar4 = (char)(__this->fields)._syncVelocity;
        }
        else {
          (__this->fields)._correctRotation.fields.w = fVar19;
          cVar4 = (char)(__this->fields)._syncVelocity;
        }
      }
      else {
        fVar19 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar9 & 0x200) == 0) * 4);
        (__this->fields)._correctRotation.fields.w = fVar19;
        fVar19 = fVar19 * fVar19 + 0.0;
        uVar9 = uVar9 >> 10;
        if (uVar14 != 2) goto label_042a84b4;
label_042a84fc:
        fVar18 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar9 & 0x200) == 0) * 4);
        (__this->fields)._correctRotation.fields.y = fVar18;
        fVar19 = fVar18 * fVar18 + fVar19;
        if (uVar14 != 0) {
          uVar9 = uVar9 >> 10;
          goto label_042a854a;
        }
        fVar19 = 1.0 - fVar19;
        if (fVar19 < 0.0) {
          fVar19 = sqrtf(fVar19);
          (__this->fields)._correctRotation.fields.x = fVar19;
          cVar4 = (char)(__this->fields)._syncVelocity;
        }
        else {
          (__this->fields)._correctRotation.fields.x = SQRT(fVar19);
          cVar4 = (char)(__this->fields)._syncVelocity;
        }
      }
      if (cVar4 != '\0') {
        pIVar10 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_042a8943;
        if ((pIVar10->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) goto label_042a8948;
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02305440(pIVar10);
        uVar1 = *puVar11;
        (__this->fields)._correctVelocity.fields.x = (float)(int)uVar1;
        (__this->fields)._correctVelocity.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
        (__this->fields)._correctVelocity.fields.z = *(float *)(puVar11 + 1);
      }
      unaff_RBX = (long *)(__this->fields)._character;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') goto label_042a86b0;
      pCVar5 = (__this->fields)._character;
      if (pCVar5 == (Characters_BaseCharacter_o *)0x0) goto label_042a8943;
      if ((char)(pCVar5->fields).CustomDamage != '\0') goto label_042a86b0;
      pUVar13 = (UnityEngine_Transform_o *)Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar13->klass != *(UnityEngine_Transform_c **)(TypeInfo_int + 0x40))) goto label_042a895e;
      il2cpp_runtime_helper_02305450(pUVar13,TypeInfo_int,&local_88);
      local_50 = local_88;
      if ((char)local_88 == '\0') goto label_042a86b0;
      uVar9 = System_Nullable_int___get_Value((System_Nullable_int__o)&local_50,MethodInfo_Int32_get_Value);
      if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar14 = uVar9 >> 0x1e;
      if (uVar14 == 3) {
        fVar19 = 0.0;
        uVar16 = uVar9;
label_042a87dc:
        fVar18 = (float)(uVar16 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar16 & 0x200) == 0) * 4);
        (__this->fields)._correctCamera.fields.z = fVar18;
        fVar19 = fVar18 * fVar18 + fVar19;
        uVar16 = uVar16 >> 10;
        if (uVar14 != 1) goto label_042a8828;
      }
      else {
        fVar19 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar9 & 0x200) == 0) * 4);
        (__this->fields)._correctCamera.fields.w = fVar19;
        fVar19 = fVar19 * fVar19 + 0.0;
        uVar16 = uVar9 >> 10;
        if (uVar14 != 2) goto label_042a87dc;
label_042a8828:
        fVar18 = (float)(uVar16 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar16 & 0x200) == 0) * 4);
        (__this->fields)._correctCamera.fields.y = fVar18;
        fVar19 = fVar18 * fVar18 + fVar19;
        if (uVar9 >> 0x1e == 0) {
          fVar19 = 1.0 - fVar19;
          if (fVar19 < 0.0) {
            fVar19 = sqrtf(fVar19);
            (__this->fields)._correctCamera.fields.x = fVar19;
          }
          else {
            (__this->fields)._correctCamera.fields.x = SQRT(fVar19);
          }
          goto label_042a86b0;
        }
        uVar16 = uVar16 >> 10;
      }
      fVar18 = (float)(uVar16 & 0x1ff) * 0.0013837706 *
               *(float *)(&g_data_00d1d580 + (ulong)((uVar16 & 0x200) == 0) * 4);
      (__this->fields)._correctCamera.fields.x = fVar18;
      fVar19 = 1.0 - (fVar18 * fVar18 + fVar19);
      if (fVar19 < 0.0) {
        fVar19 = sqrtf(fVar19);
      }
      else {
        fVar19 = SQRT(fVar19);
      }
      if (uVar14 == 1) {
        (__this->fields)._correctCamera.fields.y = fVar19;
      }
      else if (uVar14 == 2) {
        (__this->fields)._correctCamera.fields.z = fVar19;
      }
      else {
        (__this->fields)._correctCamera.fields.w = fVar19;
      }
label_042a86b0:
      (*(__this->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                (__this,stream,(__this->klass->vtable)._7_ReceiveCustomStream.method);
      (__this->fields)._timeSinceLastMessage = 0.0;
      return;
    }
  }
  pUVar13 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_022b2fd0(unaff_RBX);
label_042a895e:
  il2cpp_runtime_helper_022b2fd0();
  if ((char)pUVar13[1].fields.m_CachedPtr != '\0') {
    return;
  }
  pUVar15 = pUVar13;
  if (pUVar13[5].monitor != (void *)0x0) {
    if (*(char *)((long)pUVar13[5].monitor + 0x68) != '\0') {
      return;
    }
    __this_02 = (UnityEngine_Transform_o *)pUVar13[4].fields.m_CachedPtr;
    if (__this_02 != (UnityEngine_Transform_o *)0x0) {
      UVar21 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
      uVar1 = *(undefined8 *)((long)&pUVar13[1].fields.m_CachedPtr + 4);
      fVar19 = *(float *)((long)&pUVar13[2].klass + 4);
      fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar17 = fVar17 * 10.0;
      fVar18 = 1.0;
      if (fVar17 <= 1.0) {
        fVar18 = fVar17;
      }
      fVar18 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar18);
      fStack_c0 = UVar21.fields.x;
      fStack_bc = UVar21.fields.y;
      fStack_d0 = (float)uVar1;
      fStack_cc = (float)((ulong)uVar1 >> 0x20);
      value.fields.y = fStack_bc + fVar18 * (fStack_cc - fStack_bc);
      value.fields.x = fStack_c0 + fVar18 * (fStack_d0 - fStack_c0);
      value.fields.z = UVar21.fields.z + (fVar19 - UVar21.fields.z) * fVar18;
      UnityEngine_Transform__set_position(__this_02,value,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Transform_o *)pUVar13[4].fields.m_CachedPtr;
      pUVar15 = __this_02;
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        a = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
        UVar20.fields = *(UnityEngine_Quaternion_Fields *)&pUVar13[2].monitor;
        fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar20 = UnityEngine_Quaternion__Lerp(a,UVar20,fVar19 * 10.0,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(__this_01,UVar20,(MethodInfo *)0x0);
        if (*(char *)((long)&pUVar13[4].klass + 4) == '\0') {
          return;
        }
        if (*(float *)&pUVar13[4].monitor < *(float *)&pUVar13[6].klass ||
            *(float *)&pUVar13[4].monitor == *(float *)&pUVar13[6].klass) {
          return;
        }
        uVar1 = *(undefined8 *)((long)&pUVar13[1].fields.m_CachedPtr + 4);
        fVar19 = *(float *)((long)&pUVar13[2].klass + 4);
        pUVar2 = pUVar13[3].klass;
        fVar18 = *(float *)&pUVar13[3].monitor;
        fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fStack_c0 = SUB84(pUVar2,0);
        fStack_bc = (float)((ulong)pUVar2 >> 0x20);
        fStack_b0 = (float)uVar1;
        fStack_ac = (float)((ulong)uVar1 >> 0x20);
        *(ulong *)((long)&pUVar13[1].fields.m_CachedPtr + 4) =
             CONCAT44(fVar17 * fStack_bc + fStack_ac,fVar17 * fStack_c0 + fStack_b0);
        *(float *)((long)&pUVar13[2].klass + 4) = fVar18 * fVar17 + fVar19;
        fVar19 = *(float *)&pUVar13[6].klass;
        fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        *(float *)&pUVar13[6].klass = fVar18 + fVar19;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (*pUVar15->klass[1]._1.this_arg.data)();
  return;
}


// Characters.BaseMovementSync$$Update
// il2cpp: void Characters_BaseMovementSync__Update (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x42a8970

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
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_Fields b;
  Characters_BaseMovementSync_o *__this_01;
  Characters_BaseMovementSync_o *pCVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Quaternion_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o value;
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
  pCVar9 = __this;
  if (pPVar8 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar8->fields)._IsMine_k__BackingField != '\0') {
      return;
    }
    __this_01 = (Characters_BaseMovementSync_o *)(__this->fields)._transform;
    if (__this_01 != (Characters_BaseMovementSync_o *)0x0) {
      UVar14 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
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
      local_38 = UVar14.fields.x;
      fStack_34 = UVar14.fields.y;
      value.fields.y = fStack_34 + fVar11 * ((float)uVar5 - fStack_34);
      value.fields.x = local_38 + fVar11 * ((float)uVar2 - local_38);
      value.fields.z = UVar14.fields.z + (fVar12 - UVar14.fields.z) * fVar11;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_01,value,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._transform;
      pCVar9 = __this_01;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar13 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
        b = (__this->fields)._correctRotation.fields;
        fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar13 = UnityEngine_Quaternion__Lerp(UVar13,b,fVar12 * 10.0,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(__this_00,UVar13,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  (*(pCVar9->klass->vtable)._8_OnPhotonSerializeView.methodPtr)();
  return;
}


// Characters.BaseMovementSync$$Photon.Pun.IPunObservable.OnPhotonSerializeView
// il2cpp: void Characters_BaseMovementSync__Photon_Pun_IPunObservable_OnPhotonSerializeView (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x42a8b50

void Characters_BaseMovementSync__Photon_Pun_IPunObservable_OnPhotonSerializeView
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._8_OnPhotonSerializeView.methodPtr;
  (*vtableDispatch)
            (__this,stream,(__this->klass->vtable)._8_OnPhotonSerializeView.method,vtableDispatch);
  return;
}


// Characters.BaseMovementSync$$.ctor
// il2cpp: void Characters_BaseMovementSync___ctor (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x42a8b70

void Characters_BaseMovementSync___ctor(Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._correctPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._correctPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._correctPosition.fields.z = fVar1;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
    bVar7 = g_data_057a65d5 == '\0';
    pfVar3 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar1 = pfVar3[1];
    fVar4 = pfVar3[2];
    fVar5 = pfVar3[3];
    (__this->fields)._correctRotation.fields.x = *pfVar3;
    (__this->fields)._correctRotation.fields.y = fVar1;
    (__this->fields)._correctRotation.fields.z = fVar4;
    (__this->fields)._correctRotation.fields.w = fVar5;
    if (bVar7) {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
      bVar7 = g_data_057a6843 == '\0';
      goto label_042a8c07;
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
label_042a8c07:
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._correctVelocity.fields.x = (float)(int)uVar2;
  (__this->fields)._correctVelocity.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._correctVelocity.fields.z = fVar1;
  if (bVar7) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
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


