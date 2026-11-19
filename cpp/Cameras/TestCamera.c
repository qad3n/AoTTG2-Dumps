// Type: Cameras.TestCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/TestCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/TestCamera.cs
// --------------------------------

// Cameras.TestCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_TestCamera__SetDefaultCameraPosition (Cameras_TestCamera_o* __this, const MethodInfo* method);
// 0x5dd9440

void Cameras_TestCamera__SetDefaultCameraPosition(Cameras_TestCamera_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__set_position
              (pUVar2,(UnityEngine_Vector3_o)(ZEXT412(0xc1f00000) << 0x40),(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__LookAt_692e330
                (pUVar2,(UnityEngine_Vector3_o)(__this->fields).AnchorPoint.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Cameras.TestCamera$$Update
// il2cpp: void Cameras_TestCamera__Update (Cameras_TestCamera_o* __this, const MethodInfo* method);
// 0x5dd94a0

void Cameras_TestCamera__Update(Cameras_TestCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar8;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint32_t uVar16;
  Utility_BaseComponentCache_o *pUVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  bool bVar21;
  UnityEngine_Vector3_StaticFields *pUVar22;
  UnityEngine_Transform_o *pUVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 extraout_XMM0_Db;
  float fVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o axis;
  UnityEngine_Vector3_o axis_00;
  float fStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_40 [12];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [16];
  
  if (Il2CppMethodInitialized_0754823f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse ScrollWheel");
    Il2CppMethodInitialized_0754823f = '\x01';
  }
  UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fVar24 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  bVar21 = UnityEngine_Input__GetKey(0x143,(MethodInfo *)0x0);
  if ((bVar21) || (bVar21 = UnityEngine_Input__GetKey(0x144,(MethodInfo *)0x0), bVar21)) {
    fVar24 = fVar24 * 150.0;
    fVar25 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
    fVar26 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
    if (0.0 <= fVar25) {
      if (0.0 < fVar25) {
        pUVar17 = (__this->fields).Cache;
        if (pUVar17 == (Utility_BaseComponentCache_o *)0x0) goto label_05dd9aa4;
        pUVar23 = (pUVar17->fields).Transform;
        uVar2 = (__this->fields).AnchorPoint.fields.x;
        uVar10 = (__this->fields).AnchorPoint.fields.y;
        fVar25 = (__this->fields).AnchorPoint.fields.z;
        if (Il2CppMethodInitialized_0753e72c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72c = '\x01';
        }
        if (pUVar23 == (UnityEngine_Transform_o *)0x0) goto label_05dd9aa4;
        pUVar22 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar27 = (pUVar22->upVector).fields.z;
        uVar8._0_4_ = (pUVar22->upVector).fields.x;
        uVar8._4_4_ = (pUVar22->upVector).fields.y;
        uVar1 = uVar2;
        uVar9 = uVar10;
        fVar28 = fVar24;
        goto label_05dd9683;
      }
    }
    else {
      pUVar17 = (__this->fields).Cache;
      if (pUVar17 == (Utility_BaseComponentCache_o *)0x0) goto label_05dd9aa4;
      pUVar23 = (pUVar17->fields).Transform;
      uVar1 = (__this->fields).AnchorPoint.fields.x;
      uVar9 = (__this->fields).AnchorPoint.fields.y;
      fVar25 = (__this->fields).AnchorPoint.fields.z;
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      if (pUVar23 == (UnityEngine_Transform_o *)0x0) goto label_05dd9aa4;
      pUVar22 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar27 = (pUVar22->upVector).fields.z;
      uVar8._0_4_ = (pUVar22->upVector).fields.x;
      uVar8._4_4_ = (pUVar22->upVector).fields.y;
      fVar28 = -fVar24;
label_05dd9683:
      UVar31.fields.y = (float)uVar9;
      UVar31.fields.x = (float)uVar1;
      UVar31.fields.z = fVar25;
      axis.fields.z = fVar27;
      axis.fields.x = (float)(int)uVar8;
      axis.fields.y = (float)(int)((ulong)uVar8 >> 0x20);
      UnityEngine_Transform__RotateAround(pUVar23,UVar31,axis,fVar28,(MethodInfo *)0x0);
    }
    if (0.0 <= fVar26) {
      if (fVar26 <= 0.0) goto label_05dd9755;
      pUVar17 = (__this->fields).Cache;
      if ((pUVar17 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar23 = (pUVar17->fields).Transform, pUVar23 == (UnityEngine_Transform_o *)0x0))
      goto label_05dd9aa4;
      fVar25 = (__this->fields).AnchorPoint.fields.z;
      uVar4 = (__this->fields).AnchorPoint.fields.x;
      uVar12 = (__this->fields).AnchorPoint.fields.y;
      UVar31 = UnityEngine_Transform__get_right(pUVar23,(MethodInfo *)0x0);
      fVar26 = UVar31.fields.z;
      auVar30._0_8_ = UVar31.fields._0_8_;
      auVar30._8_4_ = extraout_XMM0_Dc_00;
      auVar30._12_4_ = extraout_XMM0_Dd_00;
      fVar24 = -fVar24;
      uVar3 = uVar4;
      uVar11 = uVar12;
    }
    else {
      pUVar17 = (__this->fields).Cache;
      if ((pUVar17 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar23 = (pUVar17->fields).Transform, pUVar23 == (UnityEngine_Transform_o *)0x0))
      goto label_05dd9aa4;
      fVar25 = (__this->fields).AnchorPoint.fields.z;
      uVar3 = (__this->fields).AnchorPoint.fields.x;
      uVar11 = (__this->fields).AnchorPoint.fields.y;
      UVar31 = UnityEngine_Transform__get_right(pUVar23,(MethodInfo *)0x0);
      fVar26 = UVar31.fields.z;
      auVar30._0_8_ = UVar31.fields._0_8_;
      auVar30._8_4_ = extraout_XMM0_Dc;
      auVar30._12_4_ = extraout_XMM0_Dd;
    }
    point.fields.y = (float)uVar11;
    point.fields.x = (float)uVar3;
    point.fields.z = fVar25;
    axis_00.fields._0_8_ = auVar30._0_8_;
    axis_00.fields.z = fVar26;
    UnityEngine_Transform__RotateAround(pUVar23,point,axis_00,fVar24,(MethodInfo *)0x0);
  }
label_05dd9755:
  fVar24 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
  fVar25 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar17 = (__this->fields).Cache;
  if ((pUVar17 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar23 = (pUVar17->fields).Transform, pUVar23 == (UnityEngine_Transform_o *)0x0)) goto label_05dd9aa4;
  UVar31 = UnityEngine_Transform__get_position(pUVar23,(MethodInfo *)0x0);
  uVar5 = (__this->fields).AnchorPoint.fields.x;
  uVar13 = (__this->fields).AnchorPoint.fields.y;
  fStack_78 = UVar31.fields.z - (__this->fields).AnchorPoint.fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    auStack_40._0_4_ = 0.0;
    auStack_40._4_4_ = 0.0;
  }
  else {
    auStack_40._0_4_ = 0.0;
    auStack_40._4_4_ = 0.0;
  }
  auStack_40._0_4_ = 0.0;
  auStack_40._4_4_ = 0.0;
  if (g_data_0753e729 == '\0') {
    auStack_40._0_4_ = 0.0;
    auStack_40._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e729 = '\x01';
  }
  auVar29._0_4_ = UVar31.fields.x - (float)uVar5;
  auVar29._4_4_ = UVar31.fields.y - (float)uVar13;
  auVar29._8_4_ = extraout_XMM0_Dc_01 - 0.0;
  auVar29._12_4_ = extraout_XMM0_Dd_01 - 0.0;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar1 = 0;
  fVar26 = fStack_78 * fStack_78 + auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_;
  if (fVar26 < 0.0) {
    fVar26 = sqrtf(fVar26);
    uVar1 = extraout_XMM0_Db;
    if (fVar26 <= 1e-05) goto label_05dd982b;
label_05dd9861:
    fStack_78 = fStack_78 / fVar26;
    auVar18._4_4_ = fVar26;
    auVar18._0_4_ = fVar26;
    auVar18._8_4_ = uVar1;
    auVar18._12_4_ = uVar1;
    auVar30 = divps(auVar29,auVar18);
    auStack_40._0_4_ = auVar30._0_4_;
    auStack_40._4_4_ = auVar30._4_4_;
    pUVar22 = (UnityEngine_Vector3_StaticFields *)auStack_40;
  }
  else {
    fVar26 = SQRT(fVar26);
    if (1e-05 < fVar26) goto label_05dd9861;
label_05dd982b:
    pUVar22 = TypeInfo_UnityEngine_Vector3->static_fields;
    fStack_78 = (pUVar22->zeroVector).fields.z;
  }
  pUVar17 = (__this->fields).Cache;
  if ((pUVar17 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar23 = (pUVar17->fields).Transform, pUVar23 == (UnityEngine_Transform_o *)0x0)) {
label_05dd9aa4:
    ThrowNullReferenceException();
  }
  auStack_28._0_4_ = (pUVar22->zeroVector).fields.x;
  auStack_28._4_4_ = (pUVar22->zeroVector).fields.y;
  auStack_28._8_4_ = 0.0;
  auStack_28._12_4_ = 0.0;
  uVar6 = (__this->fields).AnchorPoint.fields.x;
  uVar14 = (__this->fields).AnchorPoint.fields.y;
  fVar26 = (__this->fields).AnchorPoint.fields.z;
  UVar31 = UnityEngine_Transform__get_position(pUVar23,(MethodInfo *)0x0);
  fVar27 = UVar31.fields.x;
  fVar28 = UVar31.fields.y;
  if (g_data_0753e7b7 == '\0') {
    fStack_30 = extraout_XMM0_Dc_02;
    unique0x1000030c = UVar31.fields._0_8_;
    fStack_2c = extraout_XMM0_Dd_02;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e7b7 = '\x01';
    uVar16 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    fVar27 = (float)auStack_40._8_4_;
    fVar28 = fStack_34;
    fVar19 = fStack_30;
    fVar20 = fStack_2c;
  }
  else {
    uVar16 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    fVar19 = extraout_XMM0_Dc_02;
    fVar20 = extraout_XMM0_Dd_02;
  }
  if (uVar16 == 0) {
    fStack_34 = fVar28;
    auStack_40._8_4_ = fVar27;
    fStack_30 = fVar19;
    fStack_2c = fVar20;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar27 = (float)auStack_40._8_4_;
    fVar28 = fStack_34;
  }
  fVar26 = fVar26 - UVar31.fields.z;
  fVar26 = fVar26 * fVar26 +
           ((float)uVar14 - fVar28) * ((float)uVar14 - fVar28) +
           ((float)uVar6 - fVar27) * ((float)uVar6 - fVar27);
  if (fVar26 < 0.0) {
    fVar26 = sqrtf(fVar26);
  }
  else {
    fVar26 = SQRT(fVar26);
  }
  if (0.0 <= fVar24) {
    if (fVar24 <= 0.0) {
      return;
    }
    pUVar17 = (__this->fields).Cache;
    if ((pUVar17 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar23 = (pUVar17->fields).Transform, pUVar23 == (UnityEngine_Transform_o *)0x0)) goto label_05dd9aa4;
    fVar24 = (__this->fields).MinDistance;
    fVar26 = fVar26 - fVar25 * 30.0;
    if (fVar24 <= fVar26) {
      fVar24 = fVar26;
    }
  }
  else {
    pUVar17 = (__this->fields).Cache;
    if ((pUVar17 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar23 = (pUVar17->fields).Transform, pUVar23 == (UnityEngine_Transform_o *)0x0)) goto label_05dd9aa4;
    fVar24 = (__this->fields).MaxDistance;
    fVar26 = fVar25 * 30.0 + fVar26;
    if (fVar26 <= fVar24) {
      fVar24 = fVar26;
    }
  }
  value.fields.z = fStack_78 * fVar24 + (__this->fields).AnchorPoint.fields.z;
  uVar7 = (__this->fields).AnchorPoint.fields.x;
  uVar15 = (__this->fields).AnchorPoint.fields.y;
  value.fields.x = (float)auStack_28._0_4_ * fVar24 + (float)uVar7;
  value.fields.y = (float)auStack_28._4_4_ * fVar24 + (float)uVar15;
  UnityEngine_Transform__set_position(pUVar23,value,(MethodInfo *)0x0);
  return;
}


// Cameras.TestCamera$$.ctor
// il2cpp: void Cameras_TestCamera___ctor (Cameras_TestCamera_o* __this, const MethodInfo* method);
// 0x5dd9ab0

void Cameras_TestCamera___ctor(Cameras_TestCamera_o *__this,MethodInfo *method)

{
  (__this->fields).AnchorPoint.fields.x = 0.0;
  (__this->fields).AnchorPoint.fields.y = 0.0;
  *(undefined8 *)&(__this->fields).AnchorPoint.fields.z = 0x3f80000000000000;
  (__this->fields).MaxDistance = 100.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


