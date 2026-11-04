// Type: Characters.BaseMovementSync
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseMovementSync.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseMovementSync.cs
// --------------------------------

// Characters.BaseMovementSync$$get_SmoothingDelay
// il2cpp: float Characters_BaseMovementSync__get_SmoothingDelay (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x1820b9980

float
Characters_BaseMovementSync__get_SmoothingDelay(Characters_BaseMovementSync_o* __this, MethodInfo* method)

{
  return 10.0;
}


// Characters.BaseMovementSync$$Awake
// il2cpp: void Characters_BaseMovementSync__Awake (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x182112570

void Characters_BaseMovementSync__Awake(Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Object_o *x;
  float fVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  Photon_Pun_PhotonView_o *value;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Rigidbody_o *pUVar8;
  Characters_BaseCharacter_o *value_00;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_184346b60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b60 = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._transform = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._transform,pUVar5);
  value = Photon_Pun_MonoBehaviourPun__get_photonView
                    ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._photonView = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._photonView,value);
  pUVar5 = (__this->fields)._transform;
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar6 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_18,pUVar5,(MethodInfo *)0x0);
    fVar1 = (pUVar6->fields).z;
    fVar2 = (pUVar6->fields).y;
    (__this->fields)._correctPosition.fields.x = (pUVar6->fields).x;
    (__this->fields)._correctPosition.fields.y = fVar2;
    (__this->fields)._correctPosition.fields.z = fVar1;
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__get_rotation(&local_18,pUVar5,(MethodInfo *)0x0);
      fVar1 = (pUVar7->fields).y;
      fVar2 = (pUVar7->fields).z;
      fVar3 = (pUVar7->fields).w;
      (__this->fields)._correctRotation.fields.x = (pUVar7->fields).x;
      (__this->fields)._correctRotation.fields.y = fVar1;
      (__this->fields)._correctRotation.fields.z = fVar2;
      (__this->fields)._correctRotation.fields.w = fVar3;
      pUVar8 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
      (__this->fields)._rigidbody = pUVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._rigidbody,pUVar8);
      value_00 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
      (__this->fields)._character = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._character,value_00);
      x = (UnityEngine_Object_o *)(__this->fields)._rigidbody;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pUVar8 = (__this->fields)._rigidbody;
        (__this->fields)._syncVelocity = true;
        if (pUVar8 == (UnityEngine_Rigidbody_o *)0x0) goto label_1821126e1;
        pUVar6 = UnityEngine_Rigidbody__get_linearVelocity
                           ((UnityEngine_Vector3_o *)&local_18,pUVar8,(MethodInfo *)0x0);
        fVar2 = (pUVar6->fields).y;
        fVar1 = (pUVar6->fields).z;
        (__this->fields)._correctVelocity.fields.x = (pUVar6->fields).x;
        (__this->fields)._correctVelocity.fields.y = fVar2;
        (__this->fields)._correctVelocity.fields.z = fVar1;
      }
      return;
    }
  }
label_1821126e1:
  ThrowNullReferenceException();
}


// Characters.BaseMovementSync$$SendCustomStream
// il2cpp: void Characters_BaseMovementSync__SendCustomStream (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x180547020

void
Characters_BaseMovementSync__SendCustomStream(Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, MethodInfo* method)

{
  return;
}


// Characters.BaseMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_BaseMovementSync__ReceiveCustomStream (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x180547020

void
Characters_BaseMovementSync__ReceiveCustomStream(Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, MethodInfo* method)

{
  return;
}


// Characters.BaseMovementSync$$OnPhotonSerializeView
// il2cpp: void Characters_BaseMovementSync__OnPhotonSerializeView (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1821126f0

void Characters_BaseMovementSync__OnPhotonSerializeView
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Rigidbody_o *__this_00;
  UI_BaseMenu_o *pUVar6;
  Cameras_BaseCamera_o *pCVar7;
  Utility_BaseComponentCache_o *pUVar8;
  bool bVar9;
  uint32_t rawCompressed;
  Il2CppObject *pIVar10;
  undefined8 *puVar11;
  int32_t *piVar12;
  UnityEngine_Vector3_o *pUVar13;
  UnityEngine_Quaternion_o *pUVar14;
  undefined4 local_res10 [2];
  System_Nullable_uint__Fields local_58;
  System_Nullable_uint__Fields local_48;
  undefined8 local_40;
  float local_38;
  UnityEngine_Quaternion_o local_30;
  
  if (Il2CppMethodInitialized_184346b61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Nullable_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184346b61 = '\x01';
  }
  local_48.hasValue = false;
  local_48._1_3_ = 0;
  local_48.value = 0;
  if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
    if ((stream->fields)._IsWriting_k__BackingField != false) {
      pUVar5 = (__this->fields)._transform;
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        pUVar13 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_30,pUVar5,(MethodInfo *)0x0);
        local_40._0_4_ = (pUVar13->fields).x;
        local_40._4_4_ = (pUVar13->fields).y;
        local_38 = (pUVar13->fields).z;
        pIVar10 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_40);
        Photon_Pun_PhotonStream__SendNext(stream,pIVar10,(MethodInfo *)0x0);
        pUVar5 = (__this->fields)._transform;
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pUVar14 = UnityEngine_Transform__get_rotation(&local_30,pUVar5,(MethodInfo *)0x0);
          local_30.fields.x = (pUVar14->fields).x;
          local_30.fields.y = (pUVar14->fields).y;
          local_30.fields.z = (pUVar14->fields).z;
          local_30.fields.w = (pUVar14->fields).w;
          if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
          }
          local_res10[0] = il2cpp_runtime_helper_18208d050(&local_30,0);
          pIVar10 = il2cpp_value_box(g_data_184354e08,local_res10);
          Photon_Pun_PhotonStream__SendNext(stream,pIVar10,(MethodInfo *)0x0);
          if ((__this->fields)._syncVelocity != false) {
            __this_00 = (__this->fields)._rigidbody;
            if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar13 = UnityEngine_Rigidbody__get_linearVelocity
                                ((UnityEngine_Vector3_o *)&local_30,__this_00,(MethodInfo *)0x0);
            local_40._0_4_ = (pUVar13->fields).x;
            local_40._4_4_ = (pUVar13->fields).y;
            local_38 = (pUVar13->fields).z;
            pIVar10 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_40);
            Photon_Pun_PhotonStream__SendNext(stream,pIVar10,(MethodInfo *)0x0);
          }
          pCVar3 = (__this->fields)._character;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar9) {
            pCVar3 = (__this->fields)._character;
            if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_182112be5;
            if ((pCVar3->fields).AI == false) {
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
              if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_182112be5;
              bVar2 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
              if (((pUVar6->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((pUVar6->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
              }
              if (*(int *)((longlong)&(*(uint64_t *)((char *)pUVar6 + 0x240)) + 4) < 1) {
                pIVar10 = (Il2CppObject *)0x0;
              }
              else {
                pCVar7 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
                if (((pCVar7 == (Cameras_BaseCamera_o *)0x0) ||
                    (pUVar8 = (pCVar7->fields).Cache, pUVar8 == (Utility_BaseComponentCache_o *)0x0)) ||
                   (pUVar5 = (pUVar8->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) {
                  ThrowNullReferenceException();
                }
                pUVar14 = UnityEngine_Transform__get_rotation(&local_30,pUVar5,(MethodInfo *)0x0);
                local_30.fields.x = (pUVar14->fields).x;
                local_30.fields.y = (pUVar14->fields).y;
                local_30.fields.z = (pUVar14->fields).z;
                local_30.fields.w = (pUVar14->fields).w;
                if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
                }
                local_res10[0] = il2cpp_runtime_helper_18208d050(&local_30,0);
                pIVar10 = il2cpp_value_box(g_data_184354e08,local_res10);
              }
              Photon_Pun_PhotonStream__SendNext(stream,pIVar10,(MethodInfo *)0x0);
            }
          }
          (*(__this->klass->vtable)._6_SendCustomStream.methodPtr)
                    (__this,(System_Type_o *)stream,(__this->klass->vtable)._6_SendCustomStream.method);
          return;
        }
      }
      ThrowNullReferenceException();
    }
    pIVar10 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pIVar10 != (Il2CppObject *)0x0) {
      if ((pIVar10->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar10,TypeInfo_UnityEngine_Vector3);
      }
      puVar11 = il2cpp_object_unbox(pIVar10);
      uVar1 = *puVar11;
      (__this->fields)._correctPosition.fields.x = (float)(int)uVar1;
      (__this->fields)._correctPosition.fields.y = (float)(int)((ulonglong)uVar1 >> 0x20);
      (__this->fields)._correctPosition.fields.z = *(float *)(puVar11 + 1);
      pIVar10 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
      }
      if (pIVar10 != (Il2CppObject *)0x0) {
        if ((pIVar10->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar10,g_data_184354e08);
        }
        piVar12 = il2cpp_object_unbox(pIVar10);
        Utility_QuaternionCompression__DecompressQuaternion
                  (&(__this->fields)._correctRotation,*piVar12,(MethodInfo *)0x0);
        if ((__this->fields)._syncVelocity != false) {
          pIVar10 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
          if (pIVar10 == (Il2CppObject *)0x0) goto label_182112be5;
          if ((pIVar10->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar10,TypeInfo_UnityEngine_Vector3);
          }
          puVar11 = il2cpp_object_unbox(pIVar10);
          uVar1 = *puVar11;
          (__this->fields)._correctVelocity.fields.x = (float)(int)uVar1;
          (__this->fields)._correctVelocity.fields.y = (float)(int)((ulonglong)uVar1 >> 0x20);
          (__this->fields)._correctVelocity.fields.z = *(float *)(puVar11 + 1);
        }
        pCVar3 = (__this->fields)._character;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          pCVar3 = (__this->fields)._character;
          if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_182112be5;
          if ((pCVar3->fields).AI == false) {
            pIVar10 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
            if ((pIVar10 != (Il2CppObject *)0x0) &&
               (pIVar4 = (TypeInfo_System_Nullable_int->_1).element_class, pIVar10->klass != pIVar4)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar10,pIVar4);
            }
            il2cpp_runtime_helper_18046d510(pIVar10);
            local_48 = local_58;
            if (local_58.hasValue != false) {
              rawCompressed =
                   System_Nullable_uint___get_Value
                             ((System_Nullable_uint__o *)&local_48,
                              (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_int_get_Value);
              if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
              }
              Utility_QuaternionCompression__DecompressQuaternion
                        (&(__this->fields)._correctCamera,rawCompressed,(MethodInfo *)0x0);
            }
          }
        }
        (*(__this->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                  (__this,(System_Type_o *)stream,(__this->klass->vtable)._7_ReceiveCustomStream.method);
        (__this->fields)._timeSinceLastMessage = 0.0;
        return;
      }
    }
  }
label_182112be5:
  ThrowNullReferenceException();
}


// Characters.BaseMovementSync$$Update
// il2cpp: void Characters_BaseMovementSync__Update (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x182112c70

void Characters_BaseMovementSync__Update(Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Photon_Pun_PhotonView_o *pPVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Quaternion_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Quaternion_Fields local_98;
  UnityEngine_Quaternion_Fields local_88;
  UnityEngine_Quaternion_o local_78 [7];
  
  if ((__this->fields).Disabled != false) {
    return;
  }
  pPVar6 = (__this->fields)._photonView;
  if (pPVar6 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar6->fields)._IsMine_k__BackingField != false) {
      return;
    }
    pUVar7 = (__this->fields)._transform;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar8 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)&local_98,pUVar7,(MethodInfo *)0x0);
      fVar11 = (__this->fields)._correctPosition.fields.x;
      fVar12 = (__this->fields)._correctPosition.fields.y;
      fVar2 = (__this->fields)._correctPosition.fields.z;
      fVar3 = (pUVar8->fields).x;
      fVar4 = (pUVar8->fields).y;
      fVar5 = (pUVar8->fields).z;
      fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar10 = fVar10 * 10.0;
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      else if (1.0 < fVar10) {
        fVar10 = 1.0;
      }
      local_98.y = (fVar12 - fVar4) * fVar10 + fVar4;
      local_98.x = (fVar11 - fVar3) * fVar10 + fVar3;
      local_98.z = (fVar2 - fVar5) * fVar10 + fVar5;
      UnityEngine_Transform__set_position(pUVar7,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._transform;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pUVar9 = UnityEngine_Transform__get_rotation
                           ((UnityEngine_Quaternion_o *)&local_88,pUVar7,(MethodInfo *)0x0);
        local_98.x = (__this->fields)._correctRotation.fields.x;
        local_98.y = (__this->fields)._correctRotation.fields.y;
        local_98.z = (__this->fields)._correctRotation.fields.z;
        local_98.w = (__this->fields)._correctRotation.fields.w;
        local_88.x = (pUVar9->fields).x;
        local_88.y = (pUVar9->fields).y;
        local_88.z = (pUVar9->fields).z;
        local_88.w = (pUVar9->fields).w;
        fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        pUVar9 = UnityEngine_Quaternion__Internal_Lerp
                           (local_78,(UnityEngine_Quaternion_o *)&local_88,
                            (UnityEngine_Quaternion_o *)&local_98,fVar11 * 10.0,(MethodInfo *)0x0);
        local_88.x = (pUVar9->fields).x;
        local_88.y = (pUVar9->fields).y;
        local_88.z = (pUVar9->fields).z;
        local_88.w = (pUVar9->fields).w;
        UnityEngine_Transform__set_rotation(pUVar7,(UnityEngine_Quaternion_o *)&local_88,(MethodInfo *)0x0);
        if ((__this->fields)._syncVelocity == false) {
          return;
        }
        fVar11 = (__this->fields).MaxPredictionTime;
        pfVar1 = &(__this->fields)._timeSinceLastMessage;
        if (fVar11 < *pfVar1 || fVar11 == *pfVar1) {
          return;
        }
        fVar11 = (__this->fields)._correctPosition.fields.x;
        fVar12 = (__this->fields)._correctPosition.fields.y;
        fVar2 = (__this->fields)._correctPosition.fields.z;
        fVar3 = (__this->fields)._correctVelocity.fields.x;
        fVar4 = (__this->fields)._correctVelocity.fields.y;
        fVar5 = (__this->fields)._correctVelocity.fields.z;
        fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        (__this->fields)._correctPosition.fields.x = fVar3 * fVar10 + fVar11;
        fVar11 = (__this->fields)._timeSinceLastMessage;
        (__this->fields)._correctPosition.fields.y = fVar4 * fVar10 + fVar12;
        (__this->fields)._correctPosition.fields.z = fVar5 * fVar10 + fVar2;
        fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        (__this->fields)._timeSinceLastMessage = fVar12 + fVar11;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseMovementSync$$Photon.Pun.IPunObservable.OnPhotonSerializeView
// il2cpp: void Characters_BaseMovementSync__Photon_Pun_IPunObservable_OnPhotonSerializeView (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182112c30

void Characters_BaseMovementSync__Photon_Pun_IPunObservable_OnPhotonSerializeView
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  (*(__this->klass->vtable)._8_OnPhotonSerializeView.methodPtr)
            (__this,stream,(Photon_Pun_PhotonMessageInfo_o *)&local_28,
             (__this->klass->vtable)._8_OnPhotonSerializeView.method);
  return;
}


// Characters.BaseMovementSync$$.ctor
// il2cpp: void Characters_BaseMovementSync___ctor (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x182112ec0

void Characters_BaseMovementSync___ctor(Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  UnityEngine_Quaternion_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._correctPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._correctPosition.fields.y = fVar4;
  (__this->fields)._correctPosition.fields.z = fVar1;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
  fVar1 = (pUVar3->identityQuaternion).fields.y;
  fVar4 = (pUVar3->identityQuaternion).fields.z;
  fVar5 = (pUVar3->identityQuaternion).fields.w;
  (__this->fields)._correctRotation.fields.x = (pUVar3->identityQuaternion).fields.x;
  (__this->fields)._correctRotation.fields.y = fVar1;
  (__this->fields)._correctRotation.fields.z = fVar4;
  (__this->fields)._correctRotation.fields.w = fVar5;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._correctVelocity.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._correctVelocity.fields.y = fVar4;
  (__this->fields)._correctVelocity.fields.z = fVar1;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
  fVar1 = (pUVar3->identityQuaternion).fields.x;
  fVar4 = (pUVar3->identityQuaternion).fields.y;
  fVar5 = (pUVar3->identityQuaternion).fields.z;
  fVar6 = (pUVar3->identityQuaternion).fields.w;
  (__this->fields).MaxPredictionTime = 0.5;
  (__this->fields)._correctCamera.fields.x = fVar1;
  (__this->fields)._correctCamera.fields.y = fVar4;
  (__this->fields)._correctCamera.fields.z = fVar5;
  (__this->fields)._correctCamera.fields.w = fVar6;
  Photon_Pun_MonoBehaviourPun___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


