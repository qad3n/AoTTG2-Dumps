// Type: Characters.BaseMovementSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseMovementSync.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseMovementSync.cs
// --------------------------------

// Characters.BaseMovementSync$$get_SmoothingDelay
// il2cpp: float Characters_BaseMovementSync__get_SmoothingDelay (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x5bbbcf0

float Characters_BaseMovementSync__get_SmoothingDelay
                (Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.BaseMovementSync$$Awake
// il2cpp: void Characters_BaseMovementSync__Awake (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x5bbbd00

void Characters_BaseMovementSync__Awake(Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  UnityEngine_Rigidbody_o *pUVar4;
  Characters_BaseCharacter_o *pCVar5;
  UnityEngine_Quaternion_Fields UVar6;
  UnityEngine_Vector3_Fields UVar7;
  
  if (Il2CppMethodInitialized_0754752f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754752f = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._transform = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._transform);
  pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._photonView = pPVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._photonView);
  pUVar2 = (__this->fields)._transform;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar7 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    (__this->fields)._correctPosition.fields = UVar7;
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = (UnityEngine_Quaternion_Fields)UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
      (__this->fields)._correctRotation.fields = UVar6;
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
      (__this->fields)._rigidbody = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._rigidbody);
      pCVar5 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
      (__this->fields)._character = pCVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._character);
      x = (UnityEngine_Object_o *)(__this->fields)._rigidbody;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields)._syncVelocity = true;
        pUVar4 = (__this->fields)._rigidbody;
        if (pUVar4 == (UnityEngine_Rigidbody_o *)0x0) goto label_05bbbe51;
        UVar7 = (UnityEngine_Vector3_Fields)
                UnityEngine_Rigidbody__get_linearVelocity(pUVar4,(MethodInfo *)0x0);
        (__this->fields)._correctVelocity.fields = UVar7;
      }
      return;
    }
  }
label_05bbbe51:
  ThrowNullReferenceException();
}


// Characters.BaseMovementSync$$SendCustomStream
// il2cpp: void Characters_BaseMovementSync__SendCustomStream (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x5bbbe60

void Characters_BaseMovementSync__SendCustomStream
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,MethodInfo *method)

{
  return;
}


// Characters.BaseMovementSync$$ReceiveCustomStream
// il2cpp: void Characters_BaseMovementSync__ReceiveCustomStream (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x5bbbe70

void Characters_BaseMovementSync__ReceiveCustomStream
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,MethodInfo *method)

{
  return;
}


// Characters.BaseMovementSync$$OnPhotonSerializeView
// il2cpp: void Characters_BaseMovementSync__OnPhotonSerializeView (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bbbe80

void Characters_BaseMovementSync__OnPhotonSerializeView
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  char cVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_BaseCharacter_o *pCVar7;
  Cameras_BaseCamera_o *pCVar8;
  Utility_BaseComponentCache_o *pUVar9;
  undefined8 uVar10;
  bool bVar11;
  float fVar12;
  uint uVar13;
  Il2CppObject *pIVar14;
  undefined8 *puVar15;
  uint *puVar16;
  UI_BaseMenu_o *pUVar17;
  uint uVar18;
  UnityEngine_Quaternion_o *pUVar19;
  Characters_BaseMovementSync_o *pCVar20;
  uint uVar21;
  Il2CppClass *pIVar22;
  Characters_BaseMovementSync_o *pCVar23;
  Characters_BaseMovementSync_o *pCVar24;
  float fVar25;
  UnityEngine_Vector3_o UVar26;
  undefined1 local_98 [8];
  void *pvStack_90;
  UnityEngine_Quaternion_o local_88;
  UnityEngine_Quaternion_o local_78;
  Photon_Pun_PhotonStream_o *local_68;
  System_Nullable_int__Fields local_60;
  float local_54;
  Characters_BaseMovementSync_o *local_50;
  Characters_BaseMovementSync_o *local_48;
  float local_40 [2];
  float local_38;
  
  if (g_data_07547530 == '\0') {
    pvStack_90 = (void *)0x5bbbeac;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    pvStack_90 = (void *)0x5bbbeb8;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    pvStack_90 = (void *)0x5bbbec4;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    pvStack_90 = (void *)0x5bbbed0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Nullable_int);
    pvStack_90 = (void *)0x5bbbedc;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    pvStack_90 = (void *)0x5bbbee8;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    pvStack_90 = (void *)0x5bbbef4;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    pvStack_90 = (void *)0x5bbbf00;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    pvStack_90 = (void *)0x5bbbf0c;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_07547530 = '\x01';
  }
  local_78.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  local_60.hasValue = false;
  local_60._1_3_ = 0;
  local_60.value = 0;
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto label_05bbc68a;
  if ((stream->fields)._IsWriting_k__BackingField != false) {
    pUVar6 = (__this->fields)._transform;
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05bbc68a;
    UVar26 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    local_38 = UVar26.fields.z;
    local_40 = UVar26.fields._0_8_;
    pIVar14 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,local_40);
    Photon_Pun_PhotonStream__SendNext(stream,pIVar14,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._transform;
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05bbc68a;
    local_88 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
    }
    local_54 = (float)il2cpp_runtime_helper_05b8cfd0(&local_88,0);
    pIVar14 = il2cpp_vm_Object_Box(g_data_07556710,&local_54);
    Photon_Pun_PhotonStream__SendNext(stream,pIVar14,(MethodInfo *)0x0);
    if ((__this->fields)._syncVelocity != false) {
      __this_00 = (__this->fields)._rigidbody;
      if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_05bbc68a;
      UVar26 = UnityEngine_Rigidbody__get_linearVelocity(__this_00,(MethodInfo *)0x0);
      local_38 = UVar26.fields.z;
      local_40 = UVar26.fields._0_8_;
      pIVar14 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,local_40);
      Photon_Pun_PhotonStream__SendNext(stream,pIVar14,(MethodInfo *)0x0);
    }
    pCVar7 = (__this->fields)._character;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar11) {
label_05bbc4cf:
      (*(__this->klass->vtable)._6_SendCustomStream.methodPtr)
                (__this,stream,(__this->klass->vtable)._6_SendCustomStream.method);
      return;
    }
    pCVar7 = (__this->fields)._character;
    if (pCVar7 == (Characters_BaseCharacter_o *)0x0) goto label_05bbc68a;
    if ((pCVar7->fields).AI != false) goto label_05bbc4cf;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar17 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar17 == (UI_BaseMenu_o *)0x0) goto label_05bbc68a;
    bVar4 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    pIVar22 = (Il2CppClass *)TypeInfo_UI_InGameMenu;
    if ((bVar4 <= (pUVar17->klass->_2).typeHierarchyDepth) &&
       ((pUVar17->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      if (*(int *)((long)&(*(uint64_t *)((char *)pUVar17 + 0x230)) + 4) < 1) {
        pIVar14 = (Il2CppObject *)0x0;
      }
      else {
        pCVar8 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
        if (((pCVar8 == (Cameras_BaseCamera_o *)0x0) ||
            (pUVar9 = (pCVar8->fields).Cache, pUVar9 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pUVar6 = (pUVar9->fields).Transform, pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_05bbc68a;
        local_78 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
        }
        fVar12 = (float)il2cpp_runtime_helper_05b8cfd0(&local_78,0);
        local_40[0] = fVar12;
        pIVar14 = il2cpp_vm_Object_Box(g_data_07556710,local_40);
      }
      Photon_Pun_PhotonStream__SendNext(stream,pIVar14,(MethodInfo *)0x0);
      goto label_05bbc4cf;
    }
    goto label_05bbc6a5;
  }
  pIVar14 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  if (pIVar14 == (Il2CppObject *)0x0) goto label_05bbc68a;
  if ((pIVar14->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class)
  goto label_05bbc68f;
  puVar15 = il2cpp_vm_Object_Unbox(pIVar14);
  uVar10 = *puVar15;
  (__this->fields)._correctPosition.fields.x = (float)(int)uVar10;
  (__this->fields)._correctPosition.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
  (__this->fields)._correctPosition.fields.z = *(float *)(puVar15 + 1);
  pIVar14 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
  }
  if (pIVar14 == (Il2CppObject *)0x0) goto label_05bbc68a;
  if ((pIVar14->klass->_1).element_class != (g_data_07556710->_1).element_class) {
    il2cpp_codegen_raise_invalid_cast_exception(pIVar14);
  }
  puVar16 = il2cpp_vm_Object_Unbox(pIVar14);
  uVar13 = *puVar16;
  uVar21 = uVar13 >> 0x1e;
  pfVar1 = &(__this->fields)._correctRotation.fields.w;
  pfVar2 = &(__this->fields)._correctRotation.fields.z;
  pfVar3 = &(__this->fields)._correctRotation.fields.y;
  fVar12 = 0.0;
  uVar18 = uVar13;
  if (uVar21 == 3) {
label_05bbc253:
    fVar25 = (float)(uVar18 & 0x1ff) * 0.0013837706;
    if ((uVar18 & 0x200) != 0) {
      fVar25 = -fVar25;
    }
    *pfVar2 = fVar25;
    fVar12 = fVar12 + fVar25 * fVar25;
    uVar18 = uVar18 >> 10;
    if (uVar21 != 1) goto label_05bbc28d;
  }
  else {
    fVar12 = (float)(uVar13 & 0x1ff) * 0.0013837706;
    if ((uVar13 & 0x200) != 0) {
      fVar12 = -fVar12;
    }
    *pfVar1 = fVar12;
    fVar12 = fVar12 * fVar12 + 0.0;
    uVar18 = uVar13 >> 10;
    if (uVar21 != 2) goto label_05bbc253;
label_05bbc28d:
    fVar25 = (float)(uVar18 & 0x1ff) * 0.0013837706;
    if ((uVar18 & 0x200) != 0) {
      fVar25 = -fVar25;
    }
    *pfVar3 = fVar25;
    fVar12 = fVar12 + fVar25 * fVar25;
    uVar18 = uVar18 >> 10;
  }
  pUVar19 = &(__this->fields)._correctRotation;
  if (0x3fffffff < uVar13) {
    fVar25 = (float)(uVar18 & 0x1ff) * 0.0013837706;
    if ((uVar18 & 0x200) != 0) {
      fVar25 = -fVar25;
    }
    (pUVar19->fields).x = fVar25;
    fVar12 = fVar12 + fVar25 * fVar25;
  }
  fVar12 = 1.0 - fVar12;
  if (fVar12 < 0.0) {
    local_68 = stream;
    local_50 = __this;
    local_48 = (Characters_BaseMovementSync_o *)local_98;
    fVar12 = sqrtf(fVar12);
    __this = local_50;
    stream = local_68;
    pCVar24 = local_48;
  }
  else {
    fVar12 = SQRT(fVar12);
    pCVar24 = (Characters_BaseMovementSync_o *)local_98;
  }
  switch(uVar21) {
  case 1:
    *pfVar3 = fVar12;
    cVar5 = (__this->fields)._syncVelocity;
    break;
  case 2:
    pUVar19 = (UnityEngine_Quaternion_o *)pfVar2;
  case 0:
    (pUVar19->fields).x = fVar12;
    cVar5 = (__this->fields)._syncVelocity;
    break;
  case 3:
    *pfVar1 = fVar12;
    cVar5 = (__this->fields)._syncVelocity;
  }
  if (cVar5 != '\0') {
    pIVar14 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pIVar14 == (Il2CppObject *)0x0) goto label_05bbc68a;
    if ((pIVar14->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
label_05bbc68f:
      il2cpp_codegen_raise_invalid_cast_exception(pIVar14);
    }
    puVar15 = il2cpp_vm_Object_Unbox(pIVar14);
    uVar10 = *puVar15;
    (__this->fields)._correctVelocity.fields.x = (float)(int)uVar10;
    (__this->fields)._correctVelocity.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
    (__this->fields)._correctVelocity.fields.z = *(float *)(puVar15 + 1);
  }
  pCVar7 = (__this->fields)._character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar11) goto label_05bbc658;
  pCVar7 = (__this->fields)._character;
  if (pCVar7 == (Characters_BaseCharacter_o *)0x0) {
label_05bbc68a:
    ThrowNullReferenceException();
  }
  if ((pCVar7->fields).AI != false) goto label_05bbc658;
  pUVar17 = (UI_BaseMenu_o *)Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  if ((pUVar17 != (UI_BaseMenu_o *)0x0) &&
     (pIVar22 = (TypeInfo_System_Nullable_int->_1).element_class, (Il2CppClass *)pUVar17->klass != pIVar22)) {
label_05bbc6a5:
    il2cpp_codegen_raise_invalid_cast_exception(pUVar17,pIVar22);
  }
  il2cpp_runtime_helper_031230d0(pUVar17,TypeInfo_System_Nullable_int,pCVar24);
  local_60 = *(System_Nullable_int__Fields *)&pCVar24->klass;
  if (local_60.hasValue == false) goto label_05bbc658;
  uVar13 = System_Nullable_int___get_Value
                     ((System_Nullable_int__o *)&local_60,
                      (MethodInfo_3CD4BC0 *)MethodInfo_System_Nullable_int_get_Value);
  if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
  }
  uVar18 = uVar13 >> 0x1e;
  pCVar24 = (Characters_BaseMovementSync_o *)&(__this->fields)._correctCamera.fields.w;
  pfVar1 = &(__this->fields)._correctCamera.fields.z;
  pCVar23 = (Characters_BaseMovementSync_o *)&(__this->fields)._correctCamera.fields.y;
  if (uVar18 == 3) {
    fVar12 = 0.0;
    uVar21 = uVar13;
label_05bbc535:
    fVar25 = (float)(uVar21 & 0x1ff) * 0.0013837706;
    if ((uVar21 & 0x200) != 0) {
      fVar25 = -fVar25;
    }
    *pfVar1 = fVar25;
    fVar12 = fVar12 + fVar25 * fVar25;
    uVar21 = uVar21 >> 10;
    if (uVar18 != 1) goto label_05bbc597;
    if (uVar13 < 0x40000000) goto label_05bbc57e;
label_05bbc5d9:
    fVar25 = (float)(uVar21 & 0x1ff) * 0.0013837706;
    if ((uVar21 & 0x200) != 0) {
      fVar25 = -fVar25;
    }
    (__this->fields)._correctCamera.fields.x = fVar25;
    fVar12 = 1.0 - (fVar12 + fVar25 * fVar25);
    if (fVar12 < 0.0) goto label_05bbc61a;
label_05bbc58e:
    fVar12 = SQRT(fVar12);
  }
  else {
    fVar12 = (float)(uVar13 & 0x1ff) * 0.0013837706;
    if ((uVar13 & 0x200) != 0) {
      fVar12 = -fVar12;
    }
    *(float *)pCVar24 = fVar12;
    fVar12 = fVar12 * fVar12 + 0.0;
    uVar21 = uVar13 >> 10;
    if (uVar18 != 2) goto label_05bbc535;
label_05bbc597:
    fVar25 = (float)(uVar21 & 0x1ff) * 0.0013837706;
    if ((uVar21 & 0x200) != 0) {
      fVar25 = -fVar25;
    }
    *(float *)pCVar23 = fVar25;
    fVar12 = fVar12 + fVar25 * fVar25;
    uVar21 = uVar21 >> 10;
    if (0x3fffffff < uVar13) goto label_05bbc5d9;
label_05bbc57e:
    fVar12 = 1.0 - fVar12;
    if (0.0 <= fVar12) goto label_05bbc58e;
label_05bbc61a:
    local_50 = pCVar24;
    local_48 = pCVar23;
    fVar12 = sqrtf(fVar12);
    pCVar23 = local_48;
    pCVar24 = local_50;
  }
  pCVar20 = (Characters_BaseMovementSync_o *)&(__this->fields)._correctCamera;
  switch(uVar18) {
  case 1:
    pCVar20 = pCVar23;
    break;
  case 2:
    pCVar20 = (Characters_BaseMovementSync_o *)pfVar1;
    break;
  case 3:
    pCVar20 = pCVar24;
  }
  ((UnityEngine_Quaternion_Fields *)&pCVar20->klass)->x = fVar12;
label_05bbc658:
  (*(__this->klass->vtable)._7_ReceiveCustomStream.methodPtr)
            (__this,stream,(__this->klass->vtable)._7_ReceiveCustomStream.method);
  (__this->fields)._timeSinceLastMessage = 0.0;
  return;
}


// Characters.BaseMovementSync$$Update
// il2cpp: void Characters_BaseMovementSync__Update (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x5bbc6b0

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
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Quaternion_o UVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o value;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  UnityEngine_Quaternion_Fields local_30;
  UnityEngine_Quaternion_o local_20;
  
  if ((__this->fields).Disabled != false) {
    return;
  }
  pPVar8 = (__this->fields)._photonView;
  if (pPVar8 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar8->fields)._IsMine_k__BackingField != false) {
      return;
    }
    pUVar9 = (__this->fields)._transform;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      UVar16 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      uVar2 = (__this->fields)._correctPosition.fields.x;
      uVar5 = (__this->fields)._correctPosition.fields.y;
      fVar13 = (__this->fields)._correctPosition.fields.z;
      fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar12 = fVar12 * 10.0;
      fVar14 = 1.0;
      if (fVar12 <= 1.0) {
        fVar14 = fVar12;
      }
      fVar14 = (float)((uint)fVar14 & -(uint)(0.0 <= fVar12));
      local_68 = UVar16.fields.x;
      fStack_64 = UVar16.fields.y;
      value.fields.x = fVar14 * ((float)uVar2 - local_68) + local_68;
      value.fields.y = fVar14 * ((float)uVar5 - fStack_64) + fStack_64;
      value.fields.z = (fVar13 - UVar16.fields.z) * fVar14 + UVar16.fields.z;
      UnityEngine_Transform__set_position(pUVar9,value,(MethodInfo *)0x0);
      pUVar9 = (__this->fields)._transform;
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        UVar15 = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
        uVar10._0_4_ = (__this->fields)._correctRotation.fields.x;
        uVar10._4_4_ = (__this->fields)._correctRotation.fields.y;
        uVar11._0_4_ = (__this->fields)._correctRotation.fields.z;
        uVar11._4_4_ = (__this->fields)._correctRotation.fields.w;
        fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        local_58 = UVar15.fields.x;
        fStack_54 = UVar15.fields.y;
        local_20.fields.z = UVar15.fields.z;
        local_20.fields.w = UVar15.fields.w;
        local_20.fields.x = local_58;
        local_20.fields.y = fStack_54;
        local_30._0_8_ = uVar10;
        local_30._8_8_ = uVar11;
        UVar15 = UnityEngine_Quaternion__Internal_Lerp
                           (&local_20,(UnityEngine_Quaternion_o *)&local_30,fVar13 * 10.0,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar9,UVar15,(MethodInfo *)0x0);
        if ((__this->fields)._syncVelocity == false) {
          return;
        }
        fVar13 = (__this->fields).MaxPredictionTime;
        pfVar1 = &(__this->fields)._timeSinceLastMessage;
        if (fVar13 < *pfVar1 || fVar13 == *pfVar1) {
          return;
        }
        uVar3 = (__this->fields)._correctPosition.fields.x;
        uVar6 = (__this->fields)._correctPosition.fields.y;
        fVar13 = (__this->fields)._correctPosition.fields.z;
        uVar4 = (__this->fields)._correctVelocity.fields.x;
        uVar7 = (__this->fields)._correctVelocity.fields.y;
        fVar14 = (__this->fields)._correctVelocity.fields.z;
        fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        (__this->fields)._correctPosition.fields.x = fVar12 * (float)uVar4 + (float)uVar3;
        (__this->fields)._correctPosition.fields.y = fVar12 * (float)uVar7 + (float)uVar6;
        (__this->fields)._correctPosition.fields.z = fVar14 * fVar12 + fVar13;
        fVar13 = (__this->fields)._timeSinceLastMessage;
        fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        (__this->fields)._timeSinceLastMessage = fVar14 + fVar13;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseMovementSync$$Photon.Pun.IPunObservable.OnPhotonSerializeView
// il2cpp: void Characters_BaseMovementSync__Photon_Pun_IPunObservable_OnPhotonSerializeView (Characters_BaseMovementSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bbc890

void Characters_BaseMovementSync__Photon_Pun_IPunObservable_OnPhotonSerializeView
               (Characters_BaseMovementSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  (*(__this->klass->vtable)._8_OnPhotonSerializeView.methodPtr)
            (__this,stream,info,(__this->klass->vtable)._8_OnPhotonSerializeView.method);
  return;
}


// Characters.BaseMovementSync$$.ctor
// il2cpp: void Characters_BaseMovementSync___ctor (Characters_BaseMovementSync_o* __this, const MethodInfo* method);
// 0x5bbc8b0

void Characters_BaseMovementSync___ctor(Characters_BaseMovementSync_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  UnityEngine_Quaternion_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._correctPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._correctPosition.fields.y = fVar4;
  (__this->fields)._correctPosition.fields.z = fVar1;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
    bVar6 = Il2CppMethodInitialized_0753e4b6 == '\0';
    pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fVar1 = (pUVar3->identityQuaternion).fields.y;
    fVar4 = (pUVar3->identityQuaternion).fields.z;
    fVar5 = (pUVar3->identityQuaternion).fields.w;
    (__this->fields)._correctRotation.fields.x = (pUVar3->identityQuaternion).fields.x;
    (__this->fields)._correctRotation.fields.y = fVar1;
    (__this->fields)._correctRotation.fields.z = fVar4;
    (__this->fields)._correctRotation.fields.w = fVar5;
    if (bVar6) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
      bVar6 = Il2CppMethodInitialized_0753e72b == '\0';
      pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar4 = (pUVar2->zeroVector).fields.y;
      fVar1 = (pUVar2->zeroVector).fields.z;
      (__this->fields)._correctVelocity.fields.x = (pUVar2->zeroVector).fields.x;
      (__this->fields)._correctVelocity.fields.y = fVar4;
      (__this->fields)._correctVelocity.fields.z = fVar1;
      if (bVar6) {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_0753e72b = '\x01';
      }
      goto label_05bbc968;
    }
  }
  else {
    pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fVar1 = (pUVar3->identityQuaternion).fields.y;
    fVar4 = (pUVar3->identityQuaternion).fields.z;
    fVar5 = (pUVar3->identityQuaternion).fields.w;
    (__this->fields)._correctRotation.fields.x = (pUVar3->identityQuaternion).fields.x;
    (__this->fields)._correctRotation.fields.y = fVar1;
    (__this->fields)._correctRotation.fields.z = fVar4;
    (__this->fields)._correctRotation.fields.w = fVar5;
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._correctVelocity.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._correctVelocity.fields.y = fVar4;
  (__this->fields)._correctVelocity.fields.z = fVar1;
label_05bbc968:
  pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
  fVar1 = (pUVar3->identityQuaternion).fields.y;
  fVar4 = (pUVar3->identityQuaternion).fields.z;
  fVar5 = (pUVar3->identityQuaternion).fields.w;
  (__this->fields)._correctCamera.fields.x = (pUVar3->identityQuaternion).fields.x;
  (__this->fields)._correctCamera.fields.y = fVar1;
  (__this->fields)._correctCamera.fields.z = fVar4;
  (__this->fields)._correctCamera.fields.w = fVar5;
  (__this->fields).MaxPredictionTime = 0.5;
  Photon_Pun_MonoBehaviourPun___ctor((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  return;
}


