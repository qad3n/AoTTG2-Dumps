// Type: Cameras.TestCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Cameras/TestCamera.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Cameras/TestCamera.cs  [CHANGED since prior version]
// --------------------------------

// Cameras.TestCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_TestCamera__SetDefaultCameraPosition (Cameras_TestCamera_o* __this, const MethodInfo* method);
// 0x414c2b0

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
      UnityEngine_Transform__LookAt
                (pUVar2,(UnityEngine_Vector3_o)(__this->fields).AnchorPoint.fields,(MethodInfo *)0x0
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.TestCamera$$Update
// il2cpp: void Cameras_TestCamera__Update (Cameras_TestCamera_o* __this, const MethodInfo* method);
// 0x414c310

void Cameras_TestCamera__Update(Cameras_TestCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  Utility_BaseComponentCache_o *pUVar15;
  undefined1 auVar16 [16];
  bool_conflict bVar17;
  UnityEngine_Transform_o *pUVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar23;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o axis;
  UnityEngine_Vector3_o axis_00;
  float local_78;
  float fStack_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uVar24;
  
  if (DAT_057049c0 == '\0') {
    il2cpp_init_method_metadata(&"Mouse Y");
    il2cpp_init_method_metadata(&"Mouse X");
    il2cpp_init_method_metadata();
    DAT_057049c0 = '\x01';
  }
  UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  bVar17 = UnityEngine_Input__GetKey(0x143,(MethodInfo *)0x0);
  if (((char)bVar17 != '\0') ||
     (bVar17 = UnityEngine_Input__GetKey(0x144,(MethodInfo *)0x0), (char)bVar17 != '\0')) {
    fVar19 = fVar19 * 150.0;
    fVar20 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
    fVar21 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
    if (0.0 <= fVar20) {
      if (0.0 < fVar20) {
        pUVar15 = (__this->fields).Cache;
        if (pUVar15 == (Utility_BaseComponentCache_o *)0x0) goto LAB_0414c89f;
        pUVar18 = (pUVar15->fields).Transform;
        uVar2 = (__this->fields).AnchorPoint.fields.x;
        uVar9 = (__this->fields).AnchorPoint.fields.y;
        fVar20 = (__this->fields).AnchorPoint.fields.z;
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
        }
        if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto LAB_0414c89f;
        uVar24 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar22 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
        uVar1 = uVar2;
        uVar8 = uVar9;
        fVar23 = fVar19;
        goto LAB_0414c4ea;
      }
    }
    else {
      pUVar15 = (__this->fields).Cache;
      if (pUVar15 == (Utility_BaseComponentCache_o *)0x0) goto LAB_0414c89f;
      pUVar18 = (pUVar15->fields).Transform;
      uVar1 = (__this->fields).AnchorPoint.fields.x;
      uVar8 = (__this->fields).AnchorPoint.fields.y;
      fVar20 = (__this->fields).AnchorPoint.fields.z;
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
      }
      if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto LAB_0414c89f;
      uVar24 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar22 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar23 = -fVar19;
LAB_0414c4ea:
      UVar28.fields.y = (float)uVar8;
      UVar28.fields.x = (float)uVar1;
      UVar28.fields.z = fVar20;
      axis.fields.z = fVar22;
      axis.fields.x = (float)(int)uVar24;
      axis.fields.y = (float)(int)((ulong)uVar24 >> 0x20);
      UnityEngine_Transform__RotateAround(pUVar18,UVar28,axis,fVar23,(MethodInfo *)0x0);
    }
    if (0.0 <= fVar21) {
      if (fVar21 <= 0.0) goto LAB_0414c5b8;
      pUVar15 = (__this->fields).Cache;
      if ((pUVar15 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar18 = (pUVar15->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
      goto LAB_0414c89f;
      fVar20 = (__this->fields).AnchorPoint.fields.z;
      uVar4 = (__this->fields).AnchorPoint.fields.x;
      uVar11 = (__this->fields).AnchorPoint.fields.y;
      UVar28 = UnityEngine_Transform__get_right(pUVar18,(MethodInfo *)0x0);
      fVar21 = UVar28.fields.z;
      auVar26._0_8_ = UVar28.fields._0_8_;
      auVar26._8_4_ = extraout_XMM0_Dc_00;
      auVar26._12_4_ = extraout_XMM0_Dd_00;
      fVar19 = -fVar19;
      uVar3 = uVar4;
      uVar10 = uVar11;
    }
    else {
      pUVar15 = (__this->fields).Cache;
      if ((pUVar15 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar18 = (pUVar15->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
      goto LAB_0414c89f;
      fVar20 = (__this->fields).AnchorPoint.fields.z;
      uVar3 = (__this->fields).AnchorPoint.fields.x;
      uVar10 = (__this->fields).AnchorPoint.fields.y;
      UVar28 = UnityEngine_Transform__get_right(pUVar18,(MethodInfo *)0x0);
      fVar21 = UVar28.fields.z;
      auVar26._0_8_ = UVar28.fields._0_8_;
      auVar26._8_4_ = extraout_XMM0_Dc;
      auVar26._12_4_ = extraout_XMM0_Dd;
    }
    point.fields.y = (float)uVar10;
    point.fields.x = (float)uVar3;
    point.fields.z = fVar20;
    axis_00.fields._0_8_ = auVar26._0_8_;
    axis_00.fields.z = fVar21;
    UnityEngine_Transform__RotateAround(pUVar18,point,axis_00,fVar19,(MethodInfo *)0x0);
  }
LAB_0414c5b8:
  fVar19 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
  fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar15 = (__this->fields).Cache;
  if ((pUVar15 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar18 = (pUVar15->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
  goto LAB_0414c89f;
  UVar28 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
  uVar5 = (__this->fields).AnchorPoint.fields.x;
  uVar12 = (__this->fields).AnchorPoint.fields.y;
  fVar21 = UVar28.fields.z - (__this->fields).AnchorPoint.fields.z;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar25._0_4_ = UVar28.fields.x - (float)uVar5;
  auVar25._4_4_ = UVar28.fields.y - (float)uVar12;
  auVar25._8_4_ = extraout_XMM0_Dc_01 - 0.0;
  auVar25._12_4_ = extraout_XMM0_Dd_01 - 0.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = 0;
  uVar8 = 0;
  fVar22 = fVar21 * fVar21 + auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_;
  if (fVar22 < 0.0) {
    fVar22 = sqrtf(fVar22);
    uVar1 = extraout_XMM0_Dc_02;
    uVar8 = extraout_XMM0_Dd_02;
    if (1e-05 < fVar22) goto LAB_0414c6fa;
LAB_0414c699:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar21 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    pUVar15 = (__this->fields).Cache;
  }
  else {
    fVar22 = SQRT(fVar22);
    if (fVar22 <= 1e-05) goto LAB_0414c699;
LAB_0414c6fa:
    fVar21 = fVar21 / fVar22;
    auVar16._4_4_ = fVar22;
    auVar16._0_4_ = fVar22;
    auVar16._8_4_ = uVar1;
    auVar16._12_4_ = uVar8;
    auVar26 = divps(auVar25,auVar16);
    uVar24 = auVar26._0_8_;
    pUVar15 = (__this->fields).Cache;
  }
  if ((pUVar15 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar18 = (pUVar15->fields).Transform, pUVar18 != (UnityEngine_Transform_o *)0x0)) {
    uVar6 = (__this->fields).AnchorPoint.fields.x;
    uVar13 = (__this->fields).AnchorPoint.fields.y;
    fVar22 = (__this->fields).AnchorPoint.fields.z;
    UVar28 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
    if (DAT_056fdea6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea6 = '\x01';
    }
    fVar23 = (float)uVar6 - UVar28.fields.x;
    fVar27 = (float)uVar13 - UVar28.fields.y;
    fVar22 = fVar22 - UVar28.fields.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar22 = fVar22 * fVar22 + fVar27 * fVar27 + fVar23 * fVar23;
    if (fVar22 < 0.0) {
      fVar22 = sqrtf(fVar22);
    }
    else {
      fVar22 = SQRT(fVar22);
    }
    if (0.0 <= fVar19) {
      if (fVar19 <= 0.0) {
        return;
      }
      pUVar15 = (__this->fields).Cache;
      if ((pUVar15 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar18 = (pUVar15->fields).Transform, pUVar18 != (UnityEngine_Transform_o *)0x0)) {
        fVar19 = (__this->fields).MinDistance;
        fVar22 = fVar22 - fVar20 * 30.0;
        if (fVar19 <= fVar22) {
          fVar19 = fVar22;
        }
        goto LAB_0414c861;
      }
    }
    else {
      pUVar15 = (__this->fields).Cache;
      if ((pUVar15 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar18 = (pUVar15->fields).Transform, pUVar18 != (UnityEngine_Transform_o *)0x0)) {
        fVar19 = (__this->fields).MaxDistance;
        fVar22 = fVar20 * 30.0 + fVar22;
        if (fVar22 <= fVar19) {
          fVar19 = fVar22;
        }
LAB_0414c861:
        uVar7 = (__this->fields).AnchorPoint.fields.x;
        uVar14 = (__this->fields).AnchorPoint.fields.y;
        local_78 = (float)uVar24;
        fStack_74 = (float)((ulong)uVar24 >> 0x20);
        value.fields.x = local_78 * fVar19 + (float)uVar7;
        value.fields.y = fStack_74 * fVar19 + (float)uVar14;
        value.fields.z = fVar21 * fVar19 + (__this->fields).AnchorPoint.fields.z;
        UnityEngine_Transform__set_position(pUVar18,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0414c89f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.TestCamera$$.ctor
// il2cpp: void Cameras_TestCamera___ctor (Cameras_TestCamera_o* __this, const MethodInfo* method);
// 0x414c8b0

void Cameras_TestCamera___ctor(Cameras_TestCamera_o *__this,MethodInfo *method)

{
  (__this->fields).AnchorPoint.fields.x = 0.0;
  (__this->fields).AnchorPoint.fields.y = 0.0;
  *(undefined8 *)&(__this->fields).AnchorPoint.fields.z = 0x3f80000000000000;
  (__this->fields).MaxDistance = 100.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


