// Type: Cameras.TestCamera
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/TestCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/TestCamera.cs
// --------------------------------

// Cameras.TestCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_TestCamera__SetDefaultCameraPosition (Cameras_TestCamera_o* __this, const MethodInfo* method);
// 0x18233f2d0

void Cameras_TestCamera__SetDefaultCameraPosition(Cameras_TestCamera_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_Fields local_18;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = 0.0;
    local_18.y = 0.0;
    local_18.z = -30.0;
    UnityEngine_Transform__set_position(pUVar2,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      local_18.x = (__this->fields).AnchorPoint.fields.x;
      local_18.y = (__this->fields).AnchorPoint.fields.y;
      local_18.z = (__this->fields).AnchorPoint.fields.z;
      UnityEngine_Transform__LookAt_2f599f0(pUVar2,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Cameras.TestCamera$$Update
// il2cpp: void Cameras_TestCamera__Update (Cameras_TestCamera_o* __this, const MethodInfo* method);
// 0x18233f350
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233f870: jmp 0x18233f7af

void Cameras_TestCamera__Update(Cameras_TestCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar10;
  float fVar15;
  Utility_BaseComponentCache_o *pUVar16;
  UnityEngine_Vector3_StaticFields *pUVar17;
  bool bVar18;
  UnityEngine_Vector3_o *pUVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_Vector3_Fields *point;
  UnityEngine_Vector3_Fields *axis;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8 [14];
  
  if (Il2CppMethodInitialized_1843477a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse ScrollWheel");
    Il2CppMethodInitialized_1843477a7 = '\x01';
  }
  UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)local_b8,(MethodInfo *)0x0);
  fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  bVar18 = UnityEngine_Input__GetKey(0x143,(MethodInfo *)0x0);
  if ((bVar18) || (bVar18 = UnityEngine_Input__GetKey(0x144,(MethodInfo *)0x0), bVar18)) {
    fVar21 = fVar21 * 150.0;
    fVar4 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
    fVar11 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
    if (fVar4 < 0.0) {
      pUVar16 = (__this->fields).Cache;
      if (pUVar16 == (Utility_BaseComponentCache_o *)0x0) goto label_18233f875;
      pUVar20 = (pUVar16->fields).Transform;
      uVar9._0_4_ = (__this->fields).AnchorPoint.fields.x;
      uVar9._4_4_ = (__this->fields).AnchorPoint.fields.y;
      fVar4 = (__this->fields).AnchorPoint.fields.z;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_18233f875;
      axis = local_b8;
      point = &local_c8;
      fVar23 = -fVar21;
      pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_b8[0].x = (pUVar17->upVector).fields.x;
      local_b8[0].y = (pUVar17->upVector).fields.y;
      local_b8[0].z = (pUVar17->upVector).fields.z;
      local_c8._0_8_ = uVar9;
      local_c8.z = fVar4;
label_18233f550:
      UnityEngine_Transform__RotateAround
                (pUVar20,(UnityEngine_Vector3_o *)point,(UnityEngine_Vector3_o *)axis,fVar23,(MethodInfo *)0x0
                );
    }
    else if (0.0 < fVar4) {
      pUVar16 = (__this->fields).Cache;
      if (pUVar16 == (Utility_BaseComponentCache_o *)0x0) goto label_18233f875;
      pUVar20 = (pUVar16->fields).Transform;
      uVar8._0_4_ = (__this->fields).AnchorPoint.fields.x;
      uVar8._4_4_ = (__this->fields).AnchorPoint.fields.y;
      fVar4 = (__this->fields).AnchorPoint.fields.z;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_18233f875;
      axis = &local_c8;
      point = local_b8;
      pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_c8.x = (pUVar17->upVector).fields.x;
      local_c8.y = (pUVar17->upVector).fields.y;
      fVar23 = fVar21;
      local_c8.z = (pUVar17->upVector).fields.z;
      local_b8[0]._0_8_ = uVar8;
      local_b8[0].z = fVar4;
      goto label_18233f550;
    }
    if (fVar11 < 0.0) {
      pUVar16 = (__this->fields).Cache;
      if ((pUVar16 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar20 = (pUVar16->fields).Transform, pUVar20 == (UnityEngine_Transform_o *)0x0))
      goto label_18233f875;
      uVar5 = (__this->fields).AnchorPoint.fields.x;
      uVar12 = (__this->fields).AnchorPoint.fields.y;
      fVar23 = (__this->fields).AnchorPoint.fields.z;
      pUVar19 = UnityEngine_Transform__get_right((UnityEngine_Vector3_o *)&local_c8,pUVar20,(MethodInfo *)0x0)
      ;
      fVar4 = (float)uVar5;
      fVar11 = (float)uVar12;
    }
    else {
      if (fVar11 <= 0.0) goto label_18233f605;
      pUVar16 = (__this->fields).Cache;
      if ((pUVar16 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar20 = (pUVar16->fields).Transform, pUVar20 == (UnityEngine_Transform_o *)0x0))
      goto label_18233f875;
      fVar4 = (__this->fields).AnchorPoint.fields.x;
      fVar11 = (__this->fields).AnchorPoint.fields.y;
      fVar23 = (__this->fields).AnchorPoint.fields.z;
      pUVar19 = UnityEngine_Transform__get_right((UnityEngine_Vector3_o *)&local_c8,pUVar20,(MethodInfo *)0x0)
      ;
      fVar21 = -fVar21;
    }
    local_b8[0].x = (pUVar19->fields).x;
    local_b8[0].y = (pUVar19->fields).y;
    local_b8[0].z = (pUVar19->fields).z;
    local_c8.y = fVar11;
    local_c8.x = fVar4;
    local_c8.z = fVar23;
    UnityEngine_Transform__RotateAround
              (pUVar20,(UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)local_b8,fVar21,
               (MethodInfo *)0x0);
  }
label_18233f605:
  fVar21 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
  fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar16 = (__this->fields).Cache;
  if ((pUVar16 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar20 = (pUVar16->fields).Transform, pUVar20 != (UnityEngine_Transform_o *)0x0)) {
    pUVar19 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_c8,pUVar20,(MethodInfo *)0x0);
    uVar6 = (__this->fields).AnchorPoint.fields.x;
    uVar13 = (__this->fields).AnchorPoint.fields.y;
    uVar7 = (pUVar19->fields).x;
    uVar14 = (pUVar19->fields).y;
    local_b8[0].x = (float)uVar7 - (float)uVar6;
    local_b8[0].y = (float)uVar14 - (float)uVar13;
    local_b8[0].z = (pUVar19->fields).z - (__this->fields).AnchorPoint.fields.z;
    pUVar19 = UnityEngine_Vector3__get_normalized
                        ((UnityEngine_Vector3_o *)&local_c8,(UnityEngine_Vector3_o *)local_b8,
                         (MethodInfo *)0x0);
    pUVar16 = (__this->fields).Cache;
    if ((pUVar16 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar20 = (pUVar16->fields).Transform, pUVar20 != (UnityEngine_Transform_o *)0x0)) {
      uVar10._0_4_ = (pUVar19->fields).x;
      uVar10._4_4_ = (pUVar19->fields).y;
      fVar15 = (pUVar19->fields).z;
      fVar11 = (__this->fields).AnchorPoint.fields.x;
      fVar23 = (__this->fields).AnchorPoint.fields.y;
      fVar24 = (__this->fields).AnchorPoint.fields.z;
      local_b8[0]._0_8_ = uVar10;
      pUVar19 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_c8,pUVar20,(MethodInfo *)0x0);
      fVar1 = (pUVar19->fields).x;
      fVar2 = (pUVar19->fields).y;
      fVar3 = (pUVar19->fields).z;
      if (Il2CppMethodInitialized_18433dee7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433dee7 = '\x01';
      }
      fVar11 = fVar11 - fVar1;
      fVar23 = fVar23 - fVar2;
      fVar24 = fVar24 - fVar3;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar22 = (double)(fVar23 * fVar23 + fVar11 * fVar11 + fVar24 * fVar24);
      if (dVar22 < 0.0) {
        dVar22 = sqrt(dVar22);
      }
      else {
        dVar22 = SQRT(dVar22);
      }
      if (fVar21 < 0.0) {
        pUVar16 = (__this->fields).Cache;
        if (pUVar16 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar20 = (pUVar16->fields).Transform;
          fVar21 = (float)dVar22 + fVar4 * 30.0;
          if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
            fVar4 = (__this->fields).MaxDistance;
            if (fVar21 <= fVar4) {
              fVar4 = fVar21;
            }
            goto label_18233f7af;
          }
        }
      }
      else {
        if (fVar21 <= 0.0) {
          return;
        }
        pUVar16 = (__this->fields).Cache;
        if (pUVar16 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar20 = (pUVar16->fields).Transform;
          fVar21 = (float)dVar22 - fVar4 * 30.0;
          if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
            fVar4 = (__this->fields).MinDistance;
            if (fVar4 <= fVar21) {
              fVar4 = fVar21;
            }
label_18233f7af:
            local_c8.z = fVar15 * fVar4 + (__this->fields).AnchorPoint.fields.z;
            local_c8.y = local_b8[0].y * fVar4 + (__this->fields).AnchorPoint.fields.y;
            local_c8.x = (float)uVar10 * fVar4 + (__this->fields).AnchorPoint.fields.x;
            UnityEngine_Transform__set_position(pUVar20,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_18233f875:
  ThrowNullReferenceException();
}


// Cameras.TestCamera$$.ctor
// il2cpp: void Cameras_TestCamera___ctor (Cameras_TestCamera_o* __this, const MethodInfo* method);
// 0x18233f880

void Cameras_TestCamera___ctor(Cameras_TestCamera_o *__this,MethodInfo *method)

{
  (__this->fields).MinDistance = 1.0;
  (__this->fields).AnchorPoint.fields.x = 0.0;
  (__this->fields).AnchorPoint.fields.y = 0.0;
  (__this->fields).AnchorPoint.fields.z = 0.0;
  (__this->fields).MaxDistance = 100.0;
  Cameras_BaseCamera___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


