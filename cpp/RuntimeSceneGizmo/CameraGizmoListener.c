// Type: RuntimeSceneGizmo.CameraGizmoListener
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/RuntimeSceneGizmo/CameraGizmoListener.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/CameraGizmoListener.cs
// --------------------------------

// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12___ctor (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4081ca0

void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12___ctor
               (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.IDisposable.Dispose
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_IDisposable_Dispose (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x4081ce0

void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_IDisposable_Dispose
               (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,MethodInfo *method)

{
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$MoveNext
// il2cpp: bool RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__MoveNext (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x4081cf0

bool_conflict
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__MoveNext
          (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,MethodInfo *method)

{
  int iVar1;
  RuntimeSceneGizmo_CameraGizmoListener_o *pRVar2;
  RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *pRVar3;
  UnityEngine_Transform_o *pUVar4;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Quaternion_Fields UVar11;
  UnityEngine_Quaternion_o UVar12;
  
  iVar1 = (__this->fields).__1__state;
  pRVar2 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    fVar9 = (__this->fields)._t_5__4;
    pRVar3 = (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *)0x0;
    fVar6 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    if (pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) goto label_04081f18;
    fVar9 = fVar9 + fVar6 * (pRVar2->fields).cameraAdjustmentSpeed;
    (__this->fields)._t_5__4 = fVar9;
    pUVar4 = (pRVar2->fields).mainCamParent;
    if (1.0 <= fVar9) {
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localRotation
                  (pUVar4,(UnityEngine_Quaternion_o)(__this->fields)._targetRotation_5__3.fields,
                   (MethodInfo *)0x0);
        (pRVar2->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(pRVar2->fields).cameraRotateCoroutine,0);
        return 0;
      }
      goto label_04081f18;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pRVar3 = __this;
    if (pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) goto label_04081f18;
    pUVar4 = (pRVar2->fields).mainCamParent;
    pRVar3 = (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *)0x0;
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_04081f18;
    UVar11 = (UnityEngine_Quaternion_Fields)UnityEngine_Transform__get_localRotation(pUVar4,(MethodInfo *)0x0)
    ;
    (__this->fields)._initialRotation_5__2.fields = UVar11;
    if (0.99 <= ABS((__this->fields).targetForward.fields.y)) {
      pUVar4 = (pRVar2->fields).mainCamParent;
      pRVar3 = (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *)0x0;
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_04081f18;
      UVar10 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
      fVar9 = UVar10.fields.z;
      fVar6 = UVar10.fields.x;
      if ((((fVar9 != 0.0) || (NAN(fVar9))) || (fVar6 != 0.0)) || (NAN(fVar6))) {
        if (ABS(fVar6) <= ABS(fVar9)) {
          fVar9 = *(float *)(&g_data_00d1d580 + (ulong)(0.0 <= fVar9) * 4);
          uVar8 = 0;
        }
        else {
          fVar9 = 0.0;
          uVar8 = (ulong)*(uint *)(&g_data_00d1d580 + (ulong)(0.0 <= fVar6) * 4);
        }
      }
      else {
        uVar8 = CONCAT44(0x3f800000,fVar6);
      }
      fVar6 = (__this->fields).targetForward.fields.y;
      if (0.0 < fVar6) {
        uVar8 = uVar8 ^ 0x8000000080000000;
      }
      uVar5 = -(uint)(0.0 < fVar6);
      UVar10.fields.z = (float)(~uVar5 & (uint)fVar9 | (uint)-fVar9 & uVar5);
      UVar10.fields.x = (float)(int)uVar8;
      UVar10.fields.y = (float)(int)(uVar8 >> 0x20);
      UVar12 = UnityEngine_Quaternion__LookRotation
                         ((UnityEngine_Vector3_o)(__this->fields).targetForward.fields,UVar10,
                          (MethodInfo *)0x0);
      uVar7 = UVar12.fields._8_8_;
      fVar9 = UVar12.fields.x;
      fVar6 = UVar12.fields.y;
    }
    else {
      UVar12 = UnityEngine_Quaternion__LookRotation_4debb20
                         ((UnityEngine_Vector3_o)(__this->fields).targetForward.fields,(MethodInfo *)0x0);
      uVar7 = UVar12.fields._8_8_;
      fVar9 = UVar12.fields.x;
      fVar6 = UVar12.fields.y;
    }
    (__this->fields)._targetRotation_5__3.fields.x = fVar9;
    (__this->fields)._targetRotation_5__3.fields.y = fVar6;
    (__this->fields)._targetRotation_5__3.fields.z = (float)uVar7;
    (__this->fields)._targetRotation_5__3.fields.w = (float)((ulong)uVar7 >> 0x20);
    (__this->fields)._t_5__4 = 0.0;
    pUVar4 = (pRVar2->fields).mainCamParent;
    fVar9 = 0.0;
  }
  pRVar3 = (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *)0x0;
  UVar12 = UnityEngine_Quaternion__LerpUnclamped
                     ((__this->fields)._initialRotation_5__2.fields,
                      (__this->fields)._targetRotation_5__3.fields,fVar9,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localRotation(pUVar4,UVar12,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
label_04081f18:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pRVar3->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x4081f20

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_Reset (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x4081f30

void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_Reset
               (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_get_Current (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x4081f70

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11___ctor (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4081c80

void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11___ctor
               (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.IDisposable.Dispose
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_IDisposable_Dispose (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x4081f80

void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_IDisposable_Dispose
               (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,MethodInfo *method)

{
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$MoveNext
// il2cpp: bool RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__MoveNext (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x4081f90

bool_conflict
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__MoveNext
          (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,MethodInfo *method)

{
  UnityEngine_Matrix4x4_o *pUVar1;
  RuntimeSceneGizmo_CameraGizmoListener_o *pRVar2;
  UnityEngine_Camera_o *pUVar3;
  UnityEngine_Matrix4x4_o __this_00;
  UnityEngine_Matrix4x4_o __this_01;
  UnityEngine_Matrix4x4_o __this_02;
  UnityEngine_Matrix4x4_o __this_03;
  UnityEngine_Matrix4x4_o __this_04;
  UnityEngine_Matrix4x4_o __this_05;
  UnityEngine_Matrix4x4_o __this_06;
  UnityEngine_Matrix4x4_o __this_07;
  UnityEngine_Matrix4x4_o __this_08;
  UnityEngine_Matrix4x4_o __this_09;
  UnityEngine_Matrix4x4_o __this_10;
  UnityEngine_Matrix4x4_o __this_11;
  UnityEngine_Matrix4x4_o __this_12;
  UnityEngine_Matrix4x4_o __this_13;
  UnityEngine_Matrix4x4_o __this_14;
  UnityEngine_Matrix4x4_o __this_15;
  UnityEngine_Matrix4x4_o __this_16;
  UnityEngine_Matrix4x4_o __this_17;
  UnityEngine_Matrix4x4_o __this_18;
  UnityEngine_Matrix4x4_o __this_19;
  UnityEngine_Matrix4x4_o __this_20;
  UnityEngine_Matrix4x4_o __this_21;
  UnityEngine_Matrix4x4_o __this_22;
  UnityEngine_Matrix4x4_o __this_23;
  UnityEngine_Matrix4x4_o __this_24;
  UnityEngine_Matrix4x4_o __this_25;
  UnityEngine_Matrix4x4_o __this_26;
  UnityEngine_Matrix4x4_o __this_27;
  UnityEngine_Matrix4x4_o __this_28;
  UnityEngine_Matrix4x4_o __this_29;
  UnityEngine_Matrix4x4_o __this_30;
  UnityEngine_Matrix4x4_o __this_31;
  UnityEngine_Matrix4x4_o __this_32;
  UnityEngine_Matrix4x4_o __this_33;
  UnityEngine_Matrix4x4_o __this_34;
  UnityEngine_Matrix4x4_o __this_35;
  UnityEngine_Matrix4x4_o __this_36;
  UnityEngine_Matrix4x4_o __this_37;
  UnityEngine_Matrix4x4_o __this_38;
  UnityEngine_Matrix4x4_o __this_39;
  UnityEngine_Matrix4x4_o __this_40;
  UnityEngine_Matrix4x4_o __this_41;
  UnityEngine_Matrix4x4_o __this_42;
  UnityEngine_Matrix4x4_o __this_43;
  UnityEngine_Matrix4x4_o __this_44;
  UnityEngine_Matrix4x4_o __this_45;
  UnityEngine_Matrix4x4_o __this_46;
  UnityEngine_Matrix4x4_o __this_47;
  UnityEngine_Matrix4x4_o value;
  bool_conflict bVar4;
  int iVar5;
  int32_t index;
  int32_t index_00;
  RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this_48;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 in_stack_fffffffffffffea8;
  undefined8 in_stack_fffffffffffffeb0;
  undefined8 in_stack_fffffffffffffeb8;
  undefined8 in_stack_fffffffffffffec0;
  undefined8 in_stack_fffffffffffffec8;
  undefined8 in_stack_fffffffffffffed0;
  undefined8 in_stack_fffffffffffffed8;
  undefined8 in_stack_fffffffffffffee0;
  RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_c *local_a8;
  void *pvStack_a0;
  int32_t local_98;
  undefined4 uStack_94;
  Il2CppObject *pIStack_90;
  RuntimeSceneGizmo_CameraGizmoListener_o *local_88;
  bool_conflict bStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_38 = 0.0;
  fStack_34 = 0.0;
  fStack_30 = 0.0;
  fStack_2c = 0.0;
  local_48 = 0.0;
  fStack_44 = 0.0;
  fStack_40 = 0.0;
  fStack_3c = 0.0;
  local_58 = 0.0;
  fStack_54 = 0.0;
  fStack_50 = 0.0;
  fStack_4c = 0.0;
  local_68 = 0.0;
  fStack_64 = 0.0;
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  iVar5 = (__this->fields).__1__state;
  pRVar2 = (__this->fields).__4__this;
  if (iVar5 == 1) {
    (__this->fields).__1__state = -1;
    fVar6 = (__this->fields)._t_5__5;
    __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0;
    fVar7 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    if (pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) goto label_04082829;
    fVar6 = fVar6 + fVar7 * (pRVar2->fields).projectionTransitionSpeed;
    (__this->fields)._t_5__5 = fVar6;
    if (1.0 <= fVar6) {
      pUVar3 = (pRVar2->fields).mainCamera;
      __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0;
      if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_orthographic
                  (pUVar3,(uint)((char)(__this->fields)._isOrthographic_5__2 == '\0'),(MethodInfo *)0x0);
        pUVar3 = (pRVar2->fields).mainCamera;
        __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0;
        if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__ResetProjectionMatrix(pUVar3,(MethodInfo *)0x0);
          (pRVar2->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)0x0;
          il2cpp_runtime_helper_022b4080(&(pRVar2->fields).projectionChangeCoroutine,0);
          return 0;
        }
      }
      goto label_04082829;
    }
  }
  else {
    if (iVar5 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    __this_48 = __this;
    if ((pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) ||
       (__this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)
                    (pRVar2->fields).mainCamera,
       __this_48 == (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0))
    goto label_04082829;
    bVar4 = UnityEngine_Camera__get_orthographic((UnityEngine_Camera_o *)__this_48,(MethodInfo *)0x0);
    *(char *)&(__this->fields)._isOrthographic_5__2 = (char)bVar4;
    pUVar3 = (pRVar2->fields).mainCamera;
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_04082829;
    UnityEngine_Camera__get_projectionMatrix
              ((UnityEngine_Matrix4x4_o *)&stack0xffffffffffffff58,pUVar3,(MethodInfo *)0x0);
    (__this->fields)._src_5__4.fields.m03 = local_78;
    (__this->fields)._src_5__4.fields.m13 = fStack_74;
    (__this->fields)._src_5__4.fields.m23 = fStack_70;
    (__this->fields)._src_5__4.fields.m33 = fStack_6c;
    *(RuntimeSceneGizmo_CameraGizmoListener_o **)&(__this->fields)._src_5__4.fields.m02 = local_88;
    (__this->fields)._src_5__4.fields.m22 = (float)bStack_80;
    (__this->fields)._src_5__4.fields.m32 = fStack_7c;
    (__this->fields)._src_5__4.fields.m01 = (float)local_98;
    (__this->fields)._src_5__4.fields.m11 = (float)uStack_94;
    *(Il2CppObject **)&(__this->fields)._src_5__4.fields.m21 = pIStack_90;
    *(RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_c **)&(__this->fields)._src_5__4.fields =
         local_a8;
    *(void **)&(__this->fields)._src_5__4.fields.m20 = pvStack_a0;
    pUVar3 = (pRVar2->fields).mainCamera;
    __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0;
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_04082829;
    if ((char)(__this->fields)._isOrthographic_5__2 == '\0') {
      fVar6 = UnityEngine_Camera__get_orthographicSize(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_04082829;
      fVar7 = UnityEngine_Camera__get_aspect(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_04082829;
      fVar8 = UnityEngine_Camera__get_nearClipPlane(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_04082829;
      fVar9 = UnityEngine_Camera__get_farClipPlane(pUVar3,(MethodInfo *)0x0);
      __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)&stack0xffffffffffffff58;
      method = (MethodInfo *)0x0;
      UnityEngine_Matrix4x4__Ortho
                ((UnityEngine_Matrix4x4_o *)__this_48,-fVar6 * fVar7,fVar6 * fVar7,-fVar6,fVar6,fVar8,fVar9,
                 (MethodInfo *)0x0);
    }
    else {
      fVar6 = UnityEngine_Camera__get_fieldOfView(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_04082829;
      fVar7 = UnityEngine_Camera__get_aspect(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_04082829;
      fVar8 = UnityEngine_Camera__get_nearClipPlane(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_04082829;
      fVar9 = UnityEngine_Camera__get_farClipPlane(pUVar3,(MethodInfo *)0x0);
      __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)&stack0xffffffffffffff58;
      method = (MethodInfo *)0x0;
      UnityEngine_Matrix4x4__Perspective
                ((UnityEngine_Matrix4x4_o *)__this_48,fVar6,fVar7,fVar8,fVar9,(MethodInfo *)0x0);
    }
    (__this->fields)._dest_5__3.fields.m03 = local_78;
    (__this->fields)._dest_5__3.fields.m13 = fStack_74;
    (__this->fields)._dest_5__3.fields.m23 = fStack_70;
    (__this->fields)._dest_5__3.fields.m33 = fStack_6c;
    *(RuntimeSceneGizmo_CameraGizmoListener_o **)&(__this->fields)._dest_5__3.fields.m02 = local_88;
    (__this->fields)._dest_5__3.fields.m22 = (float)bStack_80;
    (__this->fields)._dest_5__3.fields.m32 = fStack_7c;
    (__this->fields)._dest_5__3.fields.m01 = (float)local_98;
    (__this->fields)._dest_5__3.fields.m11 = (float)uStack_94;
    *(Il2CppObject **)&(__this->fields)._dest_5__3.fields.m21 = pIStack_90;
    *(RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_c **)&(__this->fields)._dest_5__3.fields =
         local_a8;
    *(void **)&(__this->fields)._dest_5__3.fields.m20 = pvStack_a0;
    (__this->fields)._t_5__5 = 0.0;
    fVar6 = 0.0;
  }
  if ((char)(__this->fields)._isOrthographic_5__2 == '\0') {
    fVar6 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this_48,fVar6,0.2,method);
  }
  else {
    fVar6 = fVar6 * fVar6;
  }
  local_38 = 0.0;
  fStack_34 = 0.0;
  fStack_30 = 0.0;
  fStack_2c = 0.0;
  local_48 = 0.0;
  fStack_44 = 0.0;
  fStack_40 = 0.0;
  fStack_3c = 0.0;
  local_58 = 0.0;
  fStack_54 = 0.0;
  fStack_50 = 0.0;
  fStack_4c = 0.0;
  local_68 = 0.0;
  fStack_64 = 0.0;
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  pUVar1 = &(__this->fields)._src_5__4;
  iVar5 = (int)__this + 0x2c;
  __this_00.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_00.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_00.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_00.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_00.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_00.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_00.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_00.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_00.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_00.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_00.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_00.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_00.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_00.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_00.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_00.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  index = (int32_t)pUVar1;
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_00,index,(MethodInfo *)0x0);
  __this_01.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_01.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_01.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_01.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_01.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_01.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_01.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_01.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_01.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_01.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_01.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_01.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_01.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_01.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_01.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_01.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_01,iVar5,(MethodInfo *)0x0);
  __this_02.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_02.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_02.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_02.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_02.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_02.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_02.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_02.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_02.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_02.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_02.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_02.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_02.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_02.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_02.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_02.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  index_00 = (int32_t)&stack0xffffffffffffff98;
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_02,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0x0);
  __this_03.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_03.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_03.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_03.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_03.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_03.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_03.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_03.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_03.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_03.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_03.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_03.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_03.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_03.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_03.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_03.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_03,index,(MethodInfo *)0x1);
  __this_04.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_04.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_04.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_04.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_04.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_04.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_04.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_04.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_04.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_04.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_04.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_04.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_04.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_04.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_04.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_04.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_04,iVar5,(MethodInfo *)0x1);
  __this_05.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_05.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_05.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_05.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_05.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_05.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_05.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_05.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_05.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_05.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_05.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_05.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_05.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_05.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_05.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_05.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_05,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0x1);
  __this_06.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_06.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_06.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_06.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_06.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_06.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_06.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_06.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_06.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_06.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_06.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_06.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_06.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_06.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_06.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_06.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_06,index,(MethodInfo *)0x2);
  __this_07.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_07.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_07.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_07.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_07.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_07.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_07.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_07.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_07.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_07.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_07.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_07.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_07.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_07.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_07.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_07.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_07,iVar5,(MethodInfo *)0x2);
  __this_08.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_08.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_08.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_08.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_08.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_08.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_08.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_08.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_08.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_08.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_08.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_08.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_08.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_08.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_08.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_08.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_08,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0x2);
  __this_09.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_09.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_09.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_09.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_09.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_09.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_09.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_09.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_09.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_09.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_09.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_09.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_09.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_09.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_09.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_09.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_09,index,(MethodInfo *)0x3);
  __this_10.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_10.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_10.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_10.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_10.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_10.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_10.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_10.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_10.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_10.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_10.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_10.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_10.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_10.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_10.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_10.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_10,iVar5,(MethodInfo *)0x3);
  __this_11.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_11.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_11.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_11.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_11.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_11.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_11.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_11.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_11.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_11.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_11.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_11.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_11.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_11.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_11.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_11.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_11,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0x3);
  __this_12.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_12.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_12.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_12.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_12.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_12.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_12.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_12.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_12.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_12.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_12.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_12.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_12.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_12.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_12.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_12.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_12,index,(MethodInfo *)&g_data_00000004);
  __this_13.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_13.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_13.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_13.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_13.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_13.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_13.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_13.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_13.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_13.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_13.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_13.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_13.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_13.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_13.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_13.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_13,iVar5,(MethodInfo *)&g_data_00000004);
  __this_14.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_14.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_14.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_14.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_14.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_14.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_14.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_14.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_14.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_14.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_14.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_14.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_14.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_14.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_14.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_14.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_14,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)&g_data_00000004);
  __this_15.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_15.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_15.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_15.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_15.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_15.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_15.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_15.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_15.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_15.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_15.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_15.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_15.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_15.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_15.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_15.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_15,index,(MethodInfo *)&g_data_00000005);
  __this_16.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_16.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_16.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_16.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_16.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_16.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_16.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_16.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_16.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_16.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_16.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_16.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_16.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_16.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_16.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_16.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_16,iVar5,(MethodInfo *)&g_data_00000005);
  __this_17.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_17.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_17.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_17.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_17.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_17.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_17.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_17.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_17.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_17.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_17.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_17.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_17.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_17.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_17.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_17.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_17,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)&g_data_00000005);
  __this_18.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_18.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_18.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_18.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_18.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_18.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_18.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_18.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_18.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_18.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_18.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_18.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_18.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_18.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_18.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_18.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_18,index,(MethodInfo *)0x6);
  __this_19.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_19.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_19.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_19.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_19.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_19.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_19.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_19.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_19.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_19.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_19.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_19.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_19.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_19.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_19.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_19.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_19,iVar5,(MethodInfo *)0x6);
  __this_20.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_20.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_20.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_20.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_20.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_20.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_20.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_20.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_20.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_20.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_20.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_20.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_20.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_20.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_20.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_20.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_20,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0x6);
  __this_21.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_21.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_21.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_21.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_21.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_21.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_21.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_21.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_21.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_21.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_21.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_21.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_21.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_21.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_21.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_21.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_21,index,(MethodInfo *)0x7);
  __this_22.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_22.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_22.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_22.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_22.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_22.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_22.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_22.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_22.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_22.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_22.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_22.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_22.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_22.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_22.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_22.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_22,iVar5,(MethodInfo *)0x7);
  __this_23.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_23.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_23.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_23.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_23.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_23.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_23.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_23.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_23.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_23.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_23.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_23.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_23.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_23.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_23.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_23.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_23,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0x7);
  __this_24.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_24.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_24.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_24.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_24.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_24.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_24.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_24.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_24.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_24.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_24.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_24.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_24.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_24.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_24.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_24.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_24,index,(MethodInfo *)&g_data_00000008);
  __this_25.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_25.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_25.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_25.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_25.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_25.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_25.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_25.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_25.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_25.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_25.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_25.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_25.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_25.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_25.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_25.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_25,iVar5,(MethodInfo *)&g_data_00000008);
  __this_26.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_26.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_26.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_26.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_26.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_26.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_26.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_26.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_26.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_26.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_26.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_26.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_26.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_26.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_26.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_26.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_26,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)&g_data_00000008);
  __this_27.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_27.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_27.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_27.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_27.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_27.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_27.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_27.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_27.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_27.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_27.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_27.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_27.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_27.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_27.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_27.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_27,index,(MethodInfo *)0x9);
  __this_28.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_28.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_28.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_28.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_28.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_28.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_28.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_28.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_28.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_28.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_28.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_28.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_28.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_28.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_28.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_28.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_28,iVar5,(MethodInfo *)0x9);
  __this_29.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_29.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_29.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_29.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_29.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_29.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_29.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_29.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_29.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_29.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_29.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_29.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_29.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_29.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_29.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_29.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_29,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0x9);
  __this_30.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_30.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_30.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_30.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_30.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_30.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_30.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_30.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_30.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_30.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_30.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_30.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_30.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_30.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_30.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_30.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_30,index,(MethodInfo *)0xa);
  __this_31.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_31.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_31.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_31.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_31.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_31.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_31.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_31.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_31.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_31.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_31.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_31.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_31.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_31.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_31.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_31.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_31,iVar5,(MethodInfo *)0xa);
  __this_32.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_32.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_32.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_32.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_32.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_32.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_32.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_32.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_32.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_32.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_32.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_32.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_32.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_32.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_32.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_32.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_32,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0xa);
  __this_33.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_33.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_33.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_33.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_33.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_33.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_33.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_33.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_33.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_33.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_33.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_33.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_33.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_33.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_33.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_33.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_33,index,(MethodInfo *)&g_data_0000000b);
  __this_34.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_34.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_34.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_34.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_34.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_34.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_34.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_34.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_34.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_34.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_34.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_34.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_34.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_34.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_34.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_34.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_34,iVar5,(MethodInfo *)&g_data_0000000b);
  __this_35.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_35.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_35.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_35.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_35.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_35.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_35.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_35.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_35.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_35.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_35.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_35.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_35.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_35.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_35.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_35.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_35,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)&g_data_0000000b);
  __this_36.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_36.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_36.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_36.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_36.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_36.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_36.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_36.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_36.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_36.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_36.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_36.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_36.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_36.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_36.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_36.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_36,index,(MethodInfo *)&g_data_0000000c);
  __this_37.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_37.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_37.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_37.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_37.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_37.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_37.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_37.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_37.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_37.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_37.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_37.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_37.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_37.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_37.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_37.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_37,iVar5,(MethodInfo *)&g_data_0000000c);
  __this_38.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_38.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_38.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_38.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_38.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_38.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_38.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_38.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_38.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_38.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_38.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_38.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_38.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_38.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_38.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_38.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_38,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)&g_data_0000000c);
  __this_39.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_39.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_39.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_39.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_39.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_39.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_39.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_39.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_39.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_39.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_39.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_39.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_39.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_39.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_39.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_39.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_39,index,(MethodInfo *)&g_data_0000000d);
  __this_40.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_40.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_40.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_40.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_40.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_40.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_40.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_40.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_40.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_40.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_40.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_40.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_40.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_40.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_40.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_40.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_40,iVar5,(MethodInfo *)&g_data_0000000d);
  __this_41.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_41.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_41.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_41.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_41.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_41.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_41.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_41.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_41.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_41.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_41.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_41.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_41.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_41.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_41.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_41.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_41,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)&g_data_0000000d);
  __this_42.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_42.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_42.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_42.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_42.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_42.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_42.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_42.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_42.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_42.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_42.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_42.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_42.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_42.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_42.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_42.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_42,index,(MethodInfo *)0xe);
  __this_43.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_43.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_43.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_43.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_43.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_43.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_43.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_43.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_43.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_43.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_43.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_43.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_43.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_43.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_43.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_43.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_43,iVar5,(MethodInfo *)0xe);
  __this_44.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_44.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_44.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_44.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_44.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_44.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_44.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_44.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_44.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_44.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_44.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_44.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_44.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_44.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_44.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_44.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_44,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0xe);
  __this_45.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_45.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_45.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_45.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_45.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_45.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_45.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_45.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_45.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_45.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_45.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_45.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_45.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_45.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_45.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_45.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar7 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_45,index,(MethodInfo *)&g_data_0000000f);
  __this_46.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_46.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_46.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_46.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_46.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_46.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_46.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_46.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_46.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_46.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_46.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_46.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_46.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_46.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_46.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_46.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  fVar8 = UnityEngine_Matrix4x4__get_Item_4de8290(__this_46,iVar5,(MethodInfo *)&g_data_0000000f);
  __this_47.fields.m20 = (float)(int)in_stack_fffffffffffffeb0;
  __this_47.fields.m30 = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  __this_47.fields.m00 = (float)(int)in_stack_fffffffffffffea8;
  __this_47.fields.m10 = (float)(int)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  __this_47.fields.m01 = (float)(int)in_stack_fffffffffffffeb8;
  __this_47.fields.m11 = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_47.fields.m21 = (float)(int)in_stack_fffffffffffffec0;
  __this_47.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_47.fields.m02 = (float)(int)in_stack_fffffffffffffec8;
  __this_47.fields.m12 = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
  __this_47.fields.m22 = (float)(int)in_stack_fffffffffffffed0;
  __this_47.fields.m32 = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_47.fields.m03 = (float)(int)in_stack_fffffffffffffed8;
  __this_47.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  __this_47.fields.m23 = (float)(int)in_stack_fffffffffffffee0;
  __this_47.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  UnityEngine_Matrix4x4__set_Item_4de83a0
            (__this_47,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)&g_data_0000000f);
  pUVar3 = (pRVar2->fields).mainCamera;
  __this_48 = (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *)0x0;
  if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
    value.fields.m20 = fStack_60;
    value.fields.m30 = fStack_5c;
    value.fields.m00 = local_68;
    value.fields.m10 = fStack_64;
    value.fields.m01 = local_58;
    value.fields.m11 = fStack_54;
    value.fields.m21 = fStack_50;
    value.fields.m31 = fStack_4c;
    value.fields.m02 = local_48;
    value.fields.m12 = fStack_44;
    value.fields.m22 = fStack_40;
    value.fields.m32 = fStack_3c;
    value.fields.m03 = local_38;
    value.fields.m13 = fStack_34;
    value.fields.m23 = fStack_30;
    value.fields.m33 = fStack_2c;
    UnityEngine_Camera__set_projectionMatrix(pUVar3,value,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)pUVar1 >> 8),1);
  }
label_04082829:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(__this_48->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x4082830

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_Reset (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x4082840

void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_Reset
               (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_get_Current (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x4082880

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener$$Awake
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__Awake (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x40817f0

void RuntimeSceneGizmo_CameraGizmoListener__Awake
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  
  pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  (__this->fields).mainCamera = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).mainCamera);
  pUVar1 = (__this->fields).mainCamera;
  if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
      (__this->fields).mainCamParent = pUVar2;
      il2cpp_runtime_helper_022b4080(&(__this->fields).mainCamParent,pUVar2);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ((UnityEngine_Component_Fields *)&pUVar1[2].fields)->m_CachedPtr = 0;
  il2cpp_runtime_helper_022b4080((UnityEngine_Component_Fields *)&pUVar1[2].fields,0);
  pUVar1[2].monitor = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&pUVar1[2].monitor,0);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$OnDisable
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__OnDisable (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x4081850

void RuntimeSceneGizmo_CameraGizmoListener__OnDisable
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  (__this->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields).projectionChangeCoroutine,0);
  (__this->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields).cameraRotateCoroutine,0);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$OnGizmoComponentClicked
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__OnGizmoComponentClicked (RuntimeSceneGizmo_CameraGizmoListener_o* __this, int32_t component, const MethodInfo* method);
// 0x4081880

void RuntimeSceneGizmo_CameraGizmoListener__OnGizmoComponentClicked
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,int32_t component,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined8 uVar2;
  Il2CppClass *pIVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  RuntimeSceneGizmo_CameraGizmoListener_o *unaff_R14;
  undefined8 unaff_R15;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  uint in_XMM1_Da;
  undefined1 auStack_18 [8];
  
  pIVar4 = (Il2CppClass *)__this;
  switch(component) {
  case 0:
    register0x00000020 = (BADSPACEBASE *)auStack_18;
    if ((__this->fields).projectionChangeCoroutine != (System_Collections_IEnumerator_o *)0x0) {
      return;
    }
    if (g_data_057ac3b6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_SwitchProjection_d__11);
      g_data_057ac3b6 = '\x01';
    }
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SwitchProjection_d__11);
    pIVar4 = pIVar3;
    System_Object___ctor((Il2CppObject *)pIVar3,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar3->_1).name = 0;
    if (pIVar3 != (Il2CppClass *)0x0) {
      (pIVar3->_1).byval_arg.data = __this;
      il2cpp_runtime_helper_022b4080(&(pIVar3->_1).byval_arg,__this);
      (__this->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)pIVar3;
      il2cpp_runtime_helper_022b4080(&(__this->fields).projectionChangeCoroutine,pIVar3);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).projectionChangeCoroutine,
                 (MethodInfo *)0x0);
      return;
    }
    uVar6 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    unaff_R14 = __this;
    uVar7 = extraout_XMM0_Dc;
    uVar8 = extraout_XMM0_Dd;
    goto RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection;
  case 1:
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    uVar6 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    uVar7 = 0;
    uVar8 = 0;
    in_XMM1_Da = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
    goto RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection;
  case 2:
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    uVar6 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c) ^ 0x8000000080000000;
    in_XMM1_Da = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
    break;
  case 3:
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    uVar6 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    uVar7 = 0;
    uVar8 = 0;
    in_XMM1_Da = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    goto RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection;
  case 4:
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    uVar6 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18) ^ 0x8000000080000000;
    in_XMM1_Da = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    break;
  default:
    if (g_data_057a6846 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6846 = '\x01';
    }
    uVar6 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
    uVar7 = 0;
    uVar8 = 0;
    in_XMM1_Da = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
    if (component == 5) goto RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection;
    uVar6 = uVar6 ^ 0x8000000080000000;
  }
  uVar8 = 0x80000000;
  uVar7 = 0x80000000;
  in_XMM1_Da = in_XMM1_Da ^ 0x80000000;
RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(RuntimeSceneGizmo_CameraGizmoListener_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (*(long *)&(pIVar4->_1).this_arg.bits != 0) {
    return;
  }
  *(ulong *)((long)register0x00000020 + -0x28) = uVar6;
  *(undefined4 *)((long)register0x00000020 + -0x20) = uVar7;
  *(undefined4 *)((long)register0x00000020 + -0x1c) = uVar8;
  *(uint *)((long)register0x00000020 + -0x2c) = in_XMM1_Da;
  if (g_data_057ac3b7 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4081aed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetCameraRotation_d__12);
    g_data_057ac3b7 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4081b03;
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SetCameraRotation_d__12);
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4081b10;
  pIVar5 = pIVar1;
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar1[1].klass = 0;
  if (pIVar1 == (Il2CppObject *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4081b72;
    uVar2 = il2cpp_runtime_helper_022b2c90();
    *(Il2CppClass **)((long)register0x00000020 + -0x40) = pIVar4;
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = uVar2;
    if (g_data_057ac3b6 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4081b9c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SwitchProjection_d__11);
      g_data_057ac3b6 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4081bb2;
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SwitchProjection_d__11);
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4081bbf;
    pIVar4 = pIVar3;
    System_Object___ctor((Il2CppObject *)pIVar3,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar3->_1).name = 0;
    if (pIVar3 == (Il2CppClass *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4081bee;
      uVar2 = il2cpp_runtime_helper_022b2c90();
      *(Il2CppObject **)((long)register0x00000020 + -0x58) = pIVar5;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
      *(uint *)((long)register0x00000020 + -0x7c) = in_XMM1_Da;
      *(undefined8 *)((long)register0x00000020 + -0x78) = uVar2;
      *(undefined4 *)((long)register0x00000020 + -0x70) = extraout_XMM0_Dc_00;
      *(undefined4 *)((long)register0x00000020 + -0x6c) = extraout_XMM0_Dd_00;
      if (g_data_057ac3b7 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4081c1a;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SetCameraRotation_d__12);
        g_data_057ac3b7 = '\x01';
      }
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4081c30;
      pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SetCameraRotation_d__12);
      uVar7 = 0;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4081c3d;
      pIVar5 = pIVar1;
      System_Object___ctor(pIVar1,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar1[1].klass = 0;
      if (pIVar1 == (Il2CppObject *)0x0) {
        *(code **)((long)register0x00000020 + -0x90) =
             RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11___ctor;
        uVar2 = il2cpp_runtime_helper_022b2c90();
        *(undefined8 *)((long)register0x00000020 + -0x90) = unaff_RBP;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xa0) = uVar2;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x4081c8f;
        System_Object___ctor(pIVar5,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar5[1].klass = uVar7;
        return;
      }
      pIVar1[2].klass = pIVar4;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x4081c5c;
      il2cpp_runtime_helper_022b4080(pIVar1 + 2,pIVar4);
      pIVar1[2].monitor = *(void **)((long)register0x00000020 + -0x78);
      *(undefined4 *)&pIVar1[3].klass = *(undefined4 *)((long)register0x00000020 + -0x7c);
      return;
    }
    (pIVar3->_1).byval_arg.data = pIVar5;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4081bde;
    il2cpp_runtime_helper_022b4080(&(pIVar3->_1).byval_arg,pIVar5);
    return;
  }
  pIVar1[2].klass = pIVar4;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4081b33;
  il2cpp_runtime_helper_022b4080(pIVar1 + 2,pIVar4);
  pIVar1[2].monitor = *(void **)((long)register0x00000020 + -0x28);
  *(undefined4 *)&pIVar1[3].klass = *(undefined4 *)((long)register0x00000020 + -0x2c);
  *(Il2CppObject **)&(pIVar4->_1).this_arg.bits = pIVar1;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4081b56;
  il2cpp_runtime_helper_022b4080(&(pIVar4->_1).this_arg.bits,pIVar1);
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)pIVar4,
             *(System_Collections_IEnumerator_o **)&(pIVar4->_1).this_arg.bits,(MethodInfo *)0x0);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$SwitchOrthographicMode
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchOrthographicMode (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x4081a10

void RuntimeSceneGizmo_CameraGizmoListener__SwitchOrthographicMode
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  void *pvVar1;
  undefined8 uVar2;
  UnityEngine_MonoBehaviour_o *__this_00;
  System_Threading_CancellationTokenSource_o *__this_01;
  Il2CppClass *__this_02;
  Il2CppObject *__this_03;
  undefined4 uVar3;
  UnityEngine_MonoBehaviour_o *__this_04;
  System_Threading_CancellationTokenSource_o *pSVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *__this_05;
  undefined4 in_XMM1_Da;
  undefined4 uVar6;
  
  if ((__this->fields).projectionChangeCoroutine != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  if (g_data_057ac3b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SwitchProjection_d__11);
    g_data_057ac3b6 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SwitchProjection_d__11);
  __this_04 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    __this_00[1].klass = (UnityEngine_MonoBehaviour_c *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
    (__this->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)__this_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).projectionChangeCoroutine,__this_00);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).projectionChangeCoroutine,
               (MethodInfo *)0x0);
    return;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  if (__this_04[1].fields.m_CancellationTokenSource != (System_Threading_CancellationTokenSource_o *)0x0) {
    return;
  }
  uVar6 = in_XMM1_Da;
  if (g_data_057ac3b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetCameraRotation_d__12);
    g_data_057ac3b7 = '\x01';
  }
  __this_01 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SetCameraRotation_d__12);
  pSVar4 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_01->fields)._kernelEvent = 0;
  if (__this_01 != (System_Threading_CancellationTokenSource_o *)0x0) {
    *(UnityEngine_MonoBehaviour_o **)&(__this_01->fields)._state = __this_04;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields)._state,__this_04);
    *(undefined8 *)&(__this_01->fields)._disposed = uVar2;
    *(undefined4 *)&(__this_01->fields)._executingCallback = in_XMM1_Da;
    __this_04[1].fields.m_CancellationTokenSource = __this_01;
    il2cpp_runtime_helper_022b4080(&__this_04[1].fields.m_CancellationTokenSource,__this_01);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              (__this_04,(System_Collections_IEnumerator_o *)__this_04[1].fields.m_CancellationTokenSource,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SwitchProjection_d__11);
    g_data_057ac3b6 = '\x01';
  }
  __this_02 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SwitchProjection_d__11);
  pIVar5 = __this_02;
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_02->_1).name = 0;
  if (__this_02 != (Il2CppClass *)0x0) {
    (__this_02->_1).byval_arg.data = pSVar4;
    il2cpp_runtime_helper_022b4080(&(__this_02->_1).byval_arg,pSVar4);
    return;
  }
  pvVar1 = (void *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetCameraRotation_d__12);
    g_data_057ac3b7 = '\x01';
  }
  __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SetCameraRotation_d__12);
  uVar3 = 0;
  __this_05 = __this_03;
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = 0;
  if (__this_03 != (Il2CppObject *)0x0) {
    __this_03[2].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(__this_03 + 2,pIVar5);
    __this_03[2].monitor = pvVar1;
    *(undefined4 *)&__this_03[3].klass = uVar6;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_05,(MethodInfo *)0x0);
  *(undefined4 *)&__this_05[1].klass = uVar3;
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$RotateCameraInDirection
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection (RuntimeSceneGizmo_CameraGizmoListener_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x4081ab0

void RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,UnityEngine_Vector3_o direction,
               MethodInfo *method)

{
  void *pvVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *__this_00;
  undefined4 uVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *pIVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = direction.fields.z;
  if ((__this->fields).cameraRotateCoroutine != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  fVar7 = fVar6;
  if (g_data_057ac3b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetCameraRotation_d__12);
    g_data_057ac3b7 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SetCameraRotation_d__12);
  pIVar4 = pIVar2;
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar2[1].klass = 0;
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(pIVar2 + 2,__this);
    pIVar2[2].monitor = direction.fields._0_8_;
    *(float *)&pIVar2[3].klass = fVar6;
    (__this->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)pIVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields).cameraRotateCoroutine,pIVar2);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).cameraRotateCoroutine,(MethodInfo *)0x0)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SwitchProjection_d__11);
    g_data_057ac3b6 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SwitchProjection_d__11);
  pIVar5 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = pIVar4;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,pIVar4);
    return;
  }
  pvVar1 = (void *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetCameraRotation_d__12);
    g_data_057ac3b7 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SetCameraRotation_d__12);
  uVar3 = 0;
  pIVar4 = pIVar2;
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar2[1].klass = 0;
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[2].klass = pIVar5;
    il2cpp_runtime_helper_022b4080(pIVar2 + 2,pIVar5);
    pIVar2[2].monitor = pvVar1;
    *(float *)&pIVar2[3].klass = fVar7;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar4[1].klass = uVar3;
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$SwitchProjection
// il2cpp: System_Collections_IEnumerator_o* RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x4081b80

System_Collections_IEnumerator_o *
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection
          (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  void *pvVar1;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_02;
  undefined4 in_XMM1_Da;
  
  if (g_data_057ac3b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SwitchProjection_d__11);
    g_data_057ac3b6 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_SwitchProjection_d__11);
  pIVar3 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  pvVar1 = (void *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetCameraRotation_d__12);
    g_data_057ac3b7 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SetCameraRotation_d__12);
  uVar2 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar3);
    __this_01[2].monitor = pvVar1;
    *(undefined4 *)&__this_01[3].klass = in_XMM1_Da;
    return (System_Collections_IEnumerator_o *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar2;
  return extraout_RAX;
}


// RuntimeSceneGizmo.CameraGizmoListener$$SetCameraRotation
// il2cpp: System_Collections_IEnumerator_o* RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation (RuntimeSceneGizmo_CameraGizmoListener_o* __this, UnityEngine_Vector3_o targetForward, const MethodInfo* method);
// 0x4081bf0

System_Collections_IEnumerator_o *
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation
          (RuntimeSceneGizmo_CameraGizmoListener_o *__this,UnityEngine_Vector3_o targetForward,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ac3b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetCameraRotation_d__12);
    g_data_057ac3b7 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SetCameraRotation_d__12);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[2].monitor = targetForward.fields._0_8_;
    *(float *)&__this_00[3].klass = targetForward.fields.z;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// RuntimeSceneGizmo.CameraGizmoListener$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener___ctor (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x4081cc0

void RuntimeSceneGizmo_CameraGizmoListener___ctor
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  (__this->fields).cameraAdjustmentSpeed = 3.0;
  (__this->fields).projectionTransitionSpeed = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


