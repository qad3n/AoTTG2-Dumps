// Type: RuntimeSceneGizmo.CameraGizmoListener
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/RuntimeSceneGizmo/CameraGizmoListener.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/CameraGizmoListener.cs
// --------------------------------

// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12___ctor (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12___ctor(RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.IDisposable.Dispose
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_IDisposable_Dispose (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x180547020

void
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_IDisposable_Dispose(RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, MethodInfo* method)

{
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$MoveNext
// il2cpp: bool RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__MoveNext (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x181dcfd00

bool RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__MoveNext
               (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,MethodInfo *method)

{
  int iVar1;
  RuntimeSceneGizmo_CameraGizmoListener_o *pRVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Quaternion_Fields local_88;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_o local_68 [4];
  
  pRVar2 = (__this->fields).__4__this;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) ||
       (pUVar3 = (pRVar2->fields).mainCamParent, pUVar3 == (UnityEngine_Transform_o *)0x0))
    goto label_181dcffcf;
    pUVar7 = UnityEngine_Transform__get_localRotation
                       ((UnityEngine_Quaternion_o *)&local_78,pUVar3,(MethodInfo *)0x0);
    fVar10 = 0.0;
    fVar9 = (pUVar7->fields).y;
    fVar5 = (pUVar7->fields).z;
    fVar6 = (pUVar7->fields).w;
    (__this->fields)._initialRotation_5__2.fields.x = (pUVar7->fields).x;
    (__this->fields)._initialRotation_5__2.fields.y = fVar9;
    (__this->fields)._initialRotation_5__2.fields.z = fVar5;
    (__this->fields)._initialRotation_5__2.fields.w = fVar6;
    if (ABS((__this->fields).targetForward.fields.y) < 0.99) {
      local_78.x = (__this->fields).targetForward.fields.x;
      local_78.y = (__this->fields).targetForward.fields.y;
      local_78.z = (__this->fields).targetForward.fields.z;
      local_88.x = 0.0;
      local_88.y = 0.0;
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_88.x = (pUVar4->upVector).fields.x;
      local_88.y = (pUVar4->upVector).fields.y;
      local_88.z = (pUVar4->upVector).fields.z;
      pUVar7 = UnityEngine_Quaternion__Internal_LookRotation
                         (local_68,(UnityEngine_Vector3_o *)&local_78,(UnityEngine_Vector3_o *)&local_88,
                          (MethodInfo *)0x0);
      fVar9 = (pUVar7->fields).y;
      fVar5 = (pUVar7->fields).z;
      fVar6 = (pUVar7->fields).w;
      (__this->fields)._targetRotation_5__3.fields.x = (pUVar7->fields).x;
      (__this->fields)._targetRotation_5__3.fields.y = fVar9;
      (__this->fields)._targetRotation_5__3.fields.z = fVar5;
      (__this->fields)._targetRotation_5__3.fields.w = fVar6;
    }
    else {
      pUVar3 = (pRVar2->fields).mainCamParent;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_181dcffcf;
      pUVar8 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)&local_78,pUVar3,(MethodInfo *)0x0)
      ;
      local_88.x = (pUVar8->fields).x;
      fVar9 = (pUVar8->fields).z;
      if ((local_88.x == 0.0) && (fVar9 == 0.0)) {
        local_88.y = 1.0;
      }
      else if (ABS(fVar9) < ABS(local_88.x)) {
        if (local_88.x < 0.0) {
          local_88.x = -1.0;
        }
        else {
          local_88.x = 1.0;
        }
        local_88.y = 0.0;
        fVar9 = 0.0;
      }
      else {
        local_88.x = 0.0;
        local_88.y = 0.0;
        if (fVar9 < 0.0) {
          fVar9 = -1.0;
        }
        else {
          fVar9 = 1.0;
        }
      }
      if (0.0 < (__this->fields).targetForward.fields.y) {
        local_88.x = -local_88.x;
        local_88.y = -local_88.y;
        fVar9 = -fVar9;
      }
      local_78.x = (__this->fields).targetForward.fields.x;
      local_78.y = (__this->fields).targetForward.fields.y;
      local_88.z = fVar9;
      local_78.z = (__this->fields).targetForward.fields.z;
      pUVar7 = UnityEngine_Quaternion__Internal_LookRotation
                         (local_68,(UnityEngine_Vector3_o *)&local_78,(UnityEngine_Vector3_o *)&local_88,
                          (MethodInfo *)0x0);
      fVar9 = (pUVar7->fields).y;
      fVar5 = (pUVar7->fields).z;
      fVar6 = (pUVar7->fields).w;
      (__this->fields)._targetRotation_5__3.fields.x = (pUVar7->fields).x;
      (__this->fields)._targetRotation_5__3.fields.y = fVar9;
      (__this->fields)._targetRotation_5__3.fields.z = fVar5;
      (__this->fields)._targetRotation_5__3.fields.w = fVar6;
    }
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    fVar10 = (__this->fields)._t_5__4;
    (__this->fields).__1__state = -1;
    fVar9 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    if (pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) goto label_181dcffcf;
    fVar10 = fVar9 * (pRVar2->fields).cameraAdjustmentSpeed + fVar10;
  }
  (__this->fields)._t_5__4 = fVar10;
  pUVar3 = (pRVar2->fields).mainCamParent;
  if (fVar10 < 1.0) {
    local_78.x = (__this->fields)._targetRotation_5__3.fields.x;
    local_78.y = (__this->fields)._targetRotation_5__3.fields.y;
    local_78.z = (__this->fields)._targetRotation_5__3.fields.z;
    local_78.w = (__this->fields)._targetRotation_5__3.fields.w;
    local_88.x = (__this->fields)._initialRotation_5__2.fields.x;
    local_88.y = (__this->fields)._initialRotation_5__2.fields.y;
    local_88.z = (__this->fields)._initialRotation_5__2.fields.z;
    local_88.w = (__this->fields)._initialRotation_5__2.fields.w;
    pUVar7 = UnityEngine_Quaternion__Internal_LerpUnclamped
                       (local_68,(UnityEngine_Quaternion_o *)&local_88,(UnityEngine_Quaternion_o *)&local_78,
                        (__this->fields)._t_5__4,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      local_78.x = (pUVar7->fields).x;
      local_78.y = (pUVar7->fields).y;
      local_78.z = (pUVar7->fields).z;
      local_78.w = (pUVar7->fields).w;
      UnityEngine_Transform__set_localRotation(pUVar3,(UnityEngine_Quaternion_o *)&local_78,(MethodInfo *)0x0)
      ;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    local_78.x = (__this->fields)._targetRotation_5__3.fields.x;
    local_78.y = (__this->fields)._targetRotation_5__3.fields.y;
    local_78.z = (__this->fields)._targetRotation_5__3.fields.z;
    local_78.w = (__this->fields)._targetRotation_5__3.fields.w;
    UnityEngine_Transform__set_localRotation(pUVar3,(UnityEngine_Quaternion_o *)&local_78,(MethodInfo *)0x0);
    (pRVar2->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pRVar2->fields).cameraRotateCoroutine,(void *)0x0);
    return false;
  }
label_181dcffcf:
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_Reset (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x181dcffe0

void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_Reset
               (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_RuntimeSceneGizmo_CameraGizmoListener_SetCameraRotation_d__12_System_Collections_IEnumerator_Res
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_get_Current (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_get_Current(RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11___ctor (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11___ctor(RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.IDisposable.Dispose
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_IDisposable_Dispose (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x180547020

void
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_IDisposable_Dispose(RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, MethodInfo* method)

{
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$MoveNext
// il2cpp: bool RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__MoveNext (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x181dd0020

bool RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__MoveNext
               (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,MethodInfo *method)

{
  int iVar1;
  RuntimeSceneGizmo_CameraGizmoListener_o *pRVar2;
  UnityEngine_Camera_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  UnityEngine_Matrix4x4_o *pUVar16;
  int32_t index;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Matrix4x4_Fields local_d8;
  UnityEngine_Matrix4x4_Fields local_98 [2];
  
  pRVar2 = (__this->fields).__4__this;
  index = 0;
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) ||
       (pUVar3 = (pRVar2->fields).mainCamera, pUVar3 == (UnityEngine_Camera_o *)0x0)) goto label_181dd03c4;
    bVar15 = UnityEngine_Camera__get_orthographic(pUVar3,(MethodInfo *)0x0);
    (__this->fields)._isOrthographic_5__2 = bVar15;
    pUVar3 = (pRVar2->fields).mainCamera;
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_181dd03c4;
    pUVar16 = UnityEngine_Camera__get_projectionMatrix
                        ((UnityEngine_Matrix4x4_o *)local_98,pUVar3,(MethodInfo *)0x0);
    fVar17 = (pUVar16->fields).m10;
    fVar18 = (pUVar16->fields).m20;
    fVar19 = (pUVar16->fields).m30;
    fVar20 = (pUVar16->fields).m01;
    fVar4 = (pUVar16->fields).m11;
    fVar5 = (pUVar16->fields).m21;
    fVar6 = (pUVar16->fields).m31;
    fVar7 = (pUVar16->fields).m02;
    fVar8 = (pUVar16->fields).m12;
    fVar9 = (pUVar16->fields).m22;
    fVar10 = (pUVar16->fields).m32;
    fVar11 = (pUVar16->fields).m03;
    fVar12 = (pUVar16->fields).m13;
    fVar13 = (pUVar16->fields).m23;
    fVar14 = (pUVar16->fields).m33;
    (__this->fields)._src_5__4.fields.m00 = (pUVar16->fields).m00;
    (__this->fields)._src_5__4.fields.m10 = fVar17;
    (__this->fields)._src_5__4.fields.m20 = fVar18;
    (__this->fields)._src_5__4.fields.m30 = fVar19;
    (__this->fields)._src_5__4.fields.m01 = fVar20;
    (__this->fields)._src_5__4.fields.m11 = fVar4;
    (__this->fields)._src_5__4.fields.m21 = fVar5;
    (__this->fields)._src_5__4.fields.m31 = fVar6;
    (__this->fields)._src_5__4.fields.m02 = fVar7;
    (__this->fields)._src_5__4.fields.m12 = fVar8;
    (__this->fields)._src_5__4.fields.m22 = fVar9;
    (__this->fields)._src_5__4.fields.m32 = fVar10;
    (__this->fields)._src_5__4.fields.m03 = fVar11;
    (__this->fields)._src_5__4.fields.m13 = fVar12;
    (__this->fields)._src_5__4.fields.m23 = fVar13;
    (__this->fields)._src_5__4.fields.m33 = fVar14;
    pUVar3 = (pRVar2->fields).mainCamera;
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_181dd03c4;
    if ((__this->fields)._isOrthographic_5__2 == false) {
      fVar17 = UnityEngine_Camera__get_orthographicSize(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_181dd03c4;
      fVar18 = UnityEngine_Camera__get_aspect(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_181dd03c4;
      fVar19 = UnityEngine_Camera__get_nearClipPlane(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_181dd03c4;
      fVar20 = UnityEngine_Camera__get_farClipPlane(pUVar3,(MethodInfo *)0x0);
      pUVar16 = UnityEngine_Matrix4x4__Ortho
                          ((UnityEngine_Matrix4x4_o *)local_98,-fVar17 * fVar18,fVar18 * fVar17,-fVar17,fVar17
                           ,fVar19,fVar20,(MethodInfo *)0x0);
    }
    else {
      fVar17 = UnityEngine_Camera__get_fieldOfView(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_181dd03c4;
      fVar18 = UnityEngine_Camera__get_aspect(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_181dd03c4;
      fVar19 = UnityEngine_Camera__get_nearClipPlane(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_181dd03c4;
      fVar20 = UnityEngine_Camera__get_farClipPlane(pUVar3,(MethodInfo *)0x0);
      pUVar16 = UnityEngine_Matrix4x4__Perspective
                          ((UnityEngine_Matrix4x4_o *)local_98,fVar17,fVar18,fVar19,fVar20,(MethodInfo *)0x0);
    }
    fVar17 = (pUVar16->fields).m10;
    fVar18 = (pUVar16->fields).m20;
    fVar19 = (pUVar16->fields).m30;
    fVar20 = (pUVar16->fields).m01;
    fVar4 = (pUVar16->fields).m11;
    fVar5 = (pUVar16->fields).m21;
    fVar6 = (pUVar16->fields).m31;
    fVar7 = (pUVar16->fields).m02;
    fVar8 = (pUVar16->fields).m12;
    fVar9 = (pUVar16->fields).m22;
    fVar10 = (pUVar16->fields).m32;
    fVar11 = (pUVar16->fields).m03;
    fVar12 = (pUVar16->fields).m13;
    fVar13 = (pUVar16->fields).m23;
    fVar14 = (pUVar16->fields).m33;
    (__this->fields)._dest_5__3.fields.m00 = (pUVar16->fields).m00;
    (__this->fields)._dest_5__3.fields.m10 = fVar17;
    (__this->fields)._dest_5__3.fields.m20 = fVar18;
    (__this->fields)._dest_5__3.fields.m30 = fVar19;
    (__this->fields)._dest_5__3.fields.m01 = fVar20;
    (__this->fields)._dest_5__3.fields.m11 = fVar4;
    (__this->fields)._dest_5__3.fields.m21 = fVar5;
    (__this->fields)._dest_5__3.fields.m31 = fVar6;
    (__this->fields)._dest_5__3.fields.m02 = fVar7;
    (__this->fields)._dest_5__3.fields.m12 = fVar8;
    (__this->fields)._dest_5__3.fields.m22 = fVar9;
    (__this->fields)._dest_5__3.fields.m32 = fVar10;
    (__this->fields)._dest_5__3.fields.m03 = fVar11;
    (__this->fields)._dest_5__3.fields.m13 = fVar12;
    (__this->fields)._dest_5__3.fields.m23 = fVar13;
    (__this->fields)._dest_5__3.fields.m33 = fVar14;
    fVar17 = 0.0;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    fVar17 = (__this->fields)._t_5__5;
    (__this->fields).__1__state = -1;
    fVar18 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    if (pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) goto label_181dd03c4;
    fVar17 = fVar18 * (pRVar2->fields).projectionTransitionSpeed + fVar17;
  }
  (__this->fields)._t_5__5 = fVar17;
  if (fVar17 < 1.0) {
    if ((__this->fields)._isOrthographic_5__2 == false) {
      fVar17 = (float)il2cpp_runtime_helper_1804f6b50(fVar17);
    }
    else {
      fVar17 = fVar17 * fVar17;
    }
    local_d8.m00 = 0.0;
    local_d8.m10 = 0.0;
    local_d8.m20 = 0.0;
    local_d8.m30 = 0.0;
    local_d8.m01 = 0.0;
    local_d8.m11 = 0.0;
    local_d8.m21 = 0.0;
    local_d8.m31 = 0.0;
    local_d8.m02 = 0.0;
    local_d8.m12 = 0.0;
    local_d8.m22 = 0.0;
    local_d8.m32 = 0.0;
    local_d8.m03 = 0.0;
    local_d8.m13 = 0.0;
    local_d8.m23 = 0.0;
    local_d8.m33 = 0.0;
    do {
      fVar18 = UnityEngine_Matrix4x4__get_Item_1db9080(&(__this->fields)._src_5__4,index,(MethodInfo *)0x0);
      fVar19 = UnityEngine_Matrix4x4__get_Item_1db9080(&(__this->fields)._dest_5__3,index,(MethodInfo *)0x0);
      UnityEngine_Matrix4x4__set_Item_1db91e0
                ((UnityEngine_Matrix4x4_o *)&local_d8,index,(fVar19 - fVar18) * fVar17 + fVar18,
                 (MethodInfo *)0x0);
      index = index + 1;
    } while (index < 0x10);
    pUVar3 = (pRVar2->fields).mainCamera;
    if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
      local_98[0].m00 = local_d8.m00;
      local_98[0].m10 = local_d8.m10;
      local_98[0].m20 = local_d8.m20;
      local_98[0].m30 = local_d8.m30;
      local_98[0].m01 = local_d8.m01;
      local_98[0].m11 = local_d8.m11;
      local_98[0].m21 = local_d8.m21;
      local_98[0].m31 = local_d8.m31;
      local_98[0].m02 = local_d8.m02;
      local_98[0].m12 = local_d8.m12;
      local_98[0].m22 = local_d8.m22;
      local_98[0].m32 = local_d8.m32;
      local_98[0].m03 = local_d8.m03;
      local_98[0].m13 = local_d8.m13;
      local_98[0].m23 = local_d8.m23;
      local_98[0].m33 = local_d8.m33;
      UnityEngine_Camera__set_projectionMatrix(pUVar3,(UnityEngine_Matrix4x4_o *)local_98,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else {
    pUVar3 = (pRVar2->fields).mainCamera;
    if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__set_orthographic
                (pUVar3,(__this->fields)._isOrthographic_5__2 == false,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__ResetProjectionMatrix(pUVar3,(MethodInfo *)0x0);
        (pRVar2->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(pRVar2->fields).projectionChangeCoroutine,(void *)0x0);
        return false;
      }
    }
  }
label_181dd03c4:
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_Reset (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x181dd03d0

void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_Reset
               (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11_System_Collections_IEnumerator_Rese
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_get_Current (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_get_Current(RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener$$Awake
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__Awake (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x181db9be0

void RuntimeSceneGizmo_CameraGizmoListener__Awake
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  
  pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  (__this->fields).mainCamera = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).mainCamera,pUVar1);
  pUVar1 = (__this->fields).mainCamera;
  if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
      (__this->fields).mainCamParent = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).mainCamParent,pUVar2);
      return;
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.CameraGizmoListener$$OnDisable
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__OnDisable (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x181db9c40

void RuntimeSceneGizmo_CameraGizmoListener__OnDisable
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  (__this->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).projectionChangeCoroutine,(void *)0x0);
  (__this->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).cameraRotateCoroutine,(void *)0x0);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$OnGizmoComponentClicked
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__OnGizmoComponentClicked (RuntimeSceneGizmo_CameraGizmoListener_o* __this, int32_t component, const MethodInfo* method);
// 0x181db9c80

void RuntimeSceneGizmo_CameraGizmoListener__OnGizmoComponentClicked
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,int32_t component,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this_00;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_Fields local_18;
  
  if (component == 0) {
    if ((__this->fields).projectionChangeCoroutine == (System_Collections_IEnumerator_o *)0x0) {
      if (Il2CppMethodInitialized_1843449ec == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11);
        Il2CppMethodInitialized_1843449ec = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
      (__this->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).projectionChangeCoroutine,__this_00);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).projectionChangeCoroutine,
                 (MethodInfo *)0x0);
    }
    return;
  }
  if (component == 1) {
    if (Il2CppMethodInitialized_1843445b8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_1843445b8 = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_18.x = (pUVar1->rightVector).fields.x;
    local_18.y = (pUVar1->rightVector).fields.y;
    local_18.z = (pUVar1->rightVector).fields.z;
    RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
              (__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    return;
  }
  if (component == 2) {
    if (Il2CppMethodInitialized_1843445b8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_1843445b8 = '\x01';
    }
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_18.z = (pUVar1->rightVector).fields.z;
    fVar2 = -(pUVar1->rightVector).fields.x;
    fVar3 = (pUVar1->rightVector).fields.y;
  }
  else {
    if (component == 3) {
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_18.x = (pUVar1->upVector).fields.x;
      local_18.y = (pUVar1->upVector).fields.y;
      local_18.z = (pUVar1->upVector).fields.z;
      goto label_181db9d16;
    }
    if (component == 4) {
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_18.z = (pUVar1->upVector).fields.z;
      fVar2 = -(pUVar1->upVector).fields.x;
      fVar3 = (pUVar1->upVector).fields.y;
    }
    else {
      if (component == 5) {
        if (Il2CppMethodInitialized_18433de5d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5d = '\x01';
        }
        pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_18.x = (pUVar1->forwardVector).fields.x;
        local_18.y = (pUVar1->forwardVector).fields.y;
        local_18.z = (pUVar1->forwardVector).fields.z;
        goto label_181db9d16;
      }
      if (Il2CppMethodInitialized_18433de5d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5d = '\x01';
      }
      pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_18.z = (pUVar1->forwardVector).fields.z;
      fVar2 = -(pUVar1->forwardVector).fields.x;
      fVar3 = (pUVar1->forwardVector).fields.y;
    }
  }
  local_18.z = -local_18.z;
  local_18._0_8_ = CONCAT44(fVar3,fVar2) ^ 0x8000000000000000;
label_181db9d16:
  RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
            (__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$SwitchOrthographicMode
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchOrthographicMode (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x181dba060

void RuntimeSceneGizmo_CameraGizmoListener__SwitchOrthographicMode
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this_00;
  
  if ((__this->fields).projectionChangeCoroutine == (System_Collections_IEnumerator_o *)0x0) {
    if (Il2CppMethodInitialized_1843449ec == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11);
      Il2CppMethodInitialized_1843449ec = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).projectionChangeCoroutine,__this_00);
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).projectionChangeCoroutine,
               (MethodInfo *)0x0);
  }
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$RotateCameraInDirection
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection (RuntimeSceneGizmo_CameraGizmoListener_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x181db9f20

void RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,UnityEngine_Vector3_o *direction,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this_00;
  
  if ((__this->fields).cameraRotateCoroutine == (System_Collections_IEnumerator_o *)0x0) {
    if (Il2CppMethodInitialized_1843449ed == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SetCameraRotation_d__12);
      Il2CppMethodInitialized_1843449ed = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SetCameraRotation_d__12);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    fVar2 = (direction->fields).y;
    fVar1 = (direction->fields).z;
    (__this_00->fields).targetForward.fields.x = (direction->fields).x;
    (__this_00->fields).targetForward.fields.y = fVar2;
    (__this_00->fields).targetForward.fields.z = fVar1;
    (__this->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).cameraRotateCoroutine,__this_00);
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).cameraRotateCoroutine,(MethodInfo *)0x0)
    ;
  }
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$SwitchProjection
// il2cpp: System_Collections_IEnumerator_o* RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x181dba0f0

System_Collections_IEnumerator_o *
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection
          (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11);
    Il2CppMethodInitialized_1843449ec = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// RuntimeSceneGizmo.CameraGizmoListener$$SetCameraRotation
// il2cpp: System_Collections_IEnumerator_o* RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation (RuntimeSceneGizmo_CameraGizmoListener_o* __this, UnityEngine_Vector3_o targetForward, const MethodInfo* method);
// 0x181db9fd0

System_Collections_IEnumerator_o *
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation
          (RuntimeSceneGizmo_CameraGizmoListener_o *__this,UnityEngine_Vector3_o *targetForward,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SetCameraRotation_d__12);
    Il2CppMethodInitialized_1843449ed = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SetCameraRotation_d__12
                        );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  fVar2 = (targetForward->fields).y;
  fVar1 = (targetForward->fields).z;
  (__this_00->fields).targetForward.fields.x = (targetForward->fields).x;
  (__this_00->fields).targetForward.fields.y = fVar2;
  (__this_00->fields).targetForward.fields.z = fVar1;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// RuntimeSceneGizmo.CameraGizmoListener$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener___ctor (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x181dba160

void RuntimeSceneGizmo_CameraGizmoListener___ctor
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  (__this->fields).cameraAdjustmentSpeed = 3.0;
  (__this->fields).projectionTransitionSpeed = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


