// Type: RuntimeSceneGizmo.CameraGizmoListener
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/RuntimeSceneGizmo/CameraGizmoListener.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/CameraGizmoListener.cs  [CHANGED since prior version]
// --------------------------------

// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12___ctor (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d8c350

void RuntimeSceneGizmo_CameraGizmoListener_<SetCameraRotation>d__12___ctor
               (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.IDisposable.Dispose
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_IDisposable_Dispose (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x3d8c390

void RuntimeSceneGizmo_CameraGizmoListener_<SetCameraRotation>d__12__System_IDisposable_Dispose
               (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,
               MethodInfo *method)

{
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$MoveNext
// il2cpp: bool RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__MoveNext (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x3d8c3a0

bool_conflict
RuntimeSceneGizmo_CameraGizmoListener_<SetCameraRotation>d__12__MoveNext
          (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,
          MethodInfo *method)

{
  int iVar1;
  RuntimeSceneGizmo_CameraGizmoListener_o *pRVar2;
  UnityEngine_Transform_o *pUVar3;
  uint uVar4;
  float fVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Quaternion_Fields UVar10;
  UnityEngine_Quaternion_o UVar11;
  
  iVar1 = (__this->fields).__1__state;
  pRVar2 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    fVar8 = (__this->fields)._t_5__4;
    fVar5 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    if (pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) goto LAB_03d8c5c8;
    fVar8 = fVar8 + fVar5 * (pRVar2->fields).cameraAdjustmentSpeed;
    (__this->fields)._t_5__4 = fVar8;
    pUVar3 = (pRVar2->fields).mainCamParent;
    if (1.0 <= fVar8) {
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localRotation
                  (pUVar3,(UnityEngine_Quaternion_o)(__this->fields)._targetRotation_5__3.fields,
                   (MethodInfo *)0x0);
        (pRVar2->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)0x0;
        il2cpp_runtime_glue(&(pRVar2->fields).cameraRotateCoroutine,0);
        return 0;
      }
      goto LAB_03d8c5c8;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if ((pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) ||
       (pUVar3 = (pRVar2->fields).mainCamParent, pUVar3 == (UnityEngine_Transform_o *)0x0))
    goto LAB_03d8c5c8;
    UVar10 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Transform__get_localRotation(pUVar3,(MethodInfo *)0x0);
    (__this->fields)._initialRotation_5__2.fields = UVar10;
    if (0.99 <= ABS((__this->fields).targetForward.fields.y)) {
      pUVar3 = (pRVar2->fields).mainCamParent;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_03d8c5c8;
      UVar9 = UnityEngine_Transform__get_forward(pUVar3,(MethodInfo *)0x0);
      fVar8 = UVar9.fields.z;
      fVar5 = UVar9.fields.x;
      if ((((fVar8 != 0.0) || (NAN(fVar8))) || (fVar5 != 0.0)) || (NAN(fVar5))) {
        if (ABS(fVar5) <= ABS(fVar8)) {
          fVar8 = *(float *)(&DAT_00cd0ef0 + (ulong)(0.0 <= fVar8) * 4);
          uVar7 = 0;
        }
        else {
          fVar8 = 0.0;
          uVar7 = (ulong)*(uint *)(&DAT_00cd0ef0 + (ulong)(0.0 <= fVar5) * 4);
        }
      }
      else {
        uVar7 = CONCAT44(0x3f800000,fVar5);
      }
      fVar5 = (__this->fields).targetForward.fields.y;
      if (0.0 < fVar5) {
        uVar7 = uVar7 ^ 0x8000000080000000;
      }
      uVar4 = -(uint)(0.0 < fVar5);
      UVar9.fields.z = (float)(~uVar4 & (uint)fVar8 | (uint)-fVar8 & uVar4);
      UVar9.fields.x = (float)(int)uVar7;
      UVar9.fields.y = (float)(int)(uVar7 >> 0x20);
      UVar11 = UnityEngine_Quaternion__LookRotation
                         ((UnityEngine_Vector3_o)(__this->fields).targetForward.fields,UVar9,
                          (MethodInfo *)0x0);
      uVar6 = UVar11.fields._8_8_;
      fVar8 = UVar11.fields.x;
      fVar5 = UVar11.fields.y;
    }
    else {
      UVar11 = UnityEngine_Quaternion__LookRotation
                         ((UnityEngine_Vector3_o)(__this->fields).targetForward.fields,
                          (MethodInfo *)0x0);
      uVar6 = UVar11.fields._8_8_;
      fVar8 = UVar11.fields.x;
      fVar5 = UVar11.fields.y;
    }
    (__this->fields)._targetRotation_5__3.fields.x = fVar8;
    (__this->fields)._targetRotation_5__3.fields.y = fVar5;
    (__this->fields)._targetRotation_5__3.fields.z = (float)uVar6;
    (__this->fields)._targetRotation_5__3.fields.w = (float)((ulong)uVar6 >> 0x20);
    (__this->fields)._t_5__4 = 0.0;
    pUVar3 = (pRVar2->fields).mainCamParent;
    fVar8 = 0.0;
  }
  UVar11 = UnityEngine_Quaternion__LerpUnclamped
                     ((__this->fields)._initialRotation_5__2.fields,
                      (__this->fields)._targetRotation_5__3.fields,fVar8,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localRotation(pUVar3,UVar11,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
LAB_03d8c5c8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x3d8c5d0

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener_<SetCameraRotation>d__12__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_Reset (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x3d8c5e0

void RuntimeSceneGizmo_CameraGizmoListener_<SetCameraRotation>d__12__System_Collections_IEnumerator_Reset
               (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_get_Current (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x3d8c620

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener_<SetCameraRotation>d__12__System_Collections_IEnumerator_get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11___ctor (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3d8c330

void RuntimeSceneGizmo_CameraGizmoListener_<SwitchProjection>d__11___ctor
               (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.IDisposable.Dispose
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_IDisposable_Dispose (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x3d8c630

void RuntimeSceneGizmo_CameraGizmoListener_<SwitchProjection>d__11__System_IDisposable_Dispose
               (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,
               MethodInfo *method)

{
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$MoveNext
// il2cpp: bool RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__MoveNext (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x3d8c640

bool_conflict
RuntimeSceneGizmo_CameraGizmoListener_<SwitchProjection>d__11__MoveNext
          (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,
          MethodInfo *method)

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
  CustomLogic_CustomLogicMathBuiltin_o *__this_48;
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
  undefined1 local_a8 [16];
  CustomLogic_CustomLogicMathBuiltin_Fields local_98;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  iVar5 = (__this->fields).__1__state;
  pRVar2 = (__this->fields).__4__this;
  if (iVar5 == 1) {
    (__this->fields).__1__state = -1;
    fVar6 = (__this->fields)._t_5__5;
    __this_48 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
    fVar7 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    if (pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) goto LAB_03d8ced9;
    fVar6 = fVar6 + fVar7 * (pRVar2->fields).projectionTransitionSpeed;
    (__this->fields)._t_5__5 = fVar6;
    if (1.0 <= fVar6) {
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_orthographic
                  (pUVar3,(uint)((char)(__this->fields)._isOrthographic_5__2 == '\0'),
                   (MethodInfo *)0x0);
        pUVar3 = (pRVar2->fields).mainCamera;
        if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__ResetProjectionMatrix(pUVar3,(MethodInfo *)0x0);
          (pRVar2->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)0x0;
          il2cpp_runtime_glue(&(pRVar2->fields).projectionChangeCoroutine,0);
          return 0;
        }
      }
      goto LAB_03d8ced9;
    }
  }
  else {
    if (iVar5 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if ((pRVar2 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) ||
       (pUVar3 = (pRVar2->fields).mainCamera, pUVar3 == (UnityEngine_Camera_o *)0x0))
    goto LAB_03d8ced9;
    bVar4 = UnityEngine_Camera__get_orthographic(pUVar3,(MethodInfo *)0x0);
    *(char *)&(__this->fields)._isOrthographic_5__2 = (char)bVar4;
    pUVar3 = (pRVar2->fields).mainCamera;
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto LAB_03d8ced9;
    UnityEngine_Camera__get_projectionMatrix
              ((UnityEngine_Matrix4x4_o *)local_a8,pUVar3,(MethodInfo *)0x0);
    (__this->fields)._src_5__4.fields.m03 = local_78;
    (__this->fields)._src_5__4.fields.m13 = fStack_74;
    (__this->fields)._src_5__4.fields.m23 = fStack_70;
    (__this->fields)._src_5__4.fields.m33 = fStack_6c;
    (__this->fields)._src_5__4.fields.m02 = (float)local_98._containsTypeOverride;
    (__this->fields)._src_5__4.fields.m12 =
         (float)local_98._Namespace_k__BackingField.fields.hasValue;
    (__this->fields)._src_5__4.fields.m22 = (float)local_98._Namespace_k__BackingField.fields.value;
    (__this->fields)._src_5__4.fields.m32 =
         (float)local_98._LookupBaseClassForVariables_k__BackingField;
    (__this->fields)._src_5__4.fields.m01 = (float)local_98.Enabled;
    (__this->fields)._src_5__4.fields.m11 = (float)local_98.Inited;
    *(System_Collections_Generic_Dictionary_string__object__o **)
     &(__this->fields)._src_5__4.fields.m21 = local_98.Variables;
    (__this->fields)._src_5__4.fields.m00 = (float)local_a8._0_4_;
    (__this->fields)._src_5__4.fields.m10 = (float)local_a8._4_4_;
    (__this->fields)._src_5__4.fields.m20 = (float)local_a8._8_4_;
    (__this->fields)._src_5__4.fields.m30 = (float)local_a8._12_4_;
    pUVar3 = (pRVar2->fields).mainCamera;
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto LAB_03d8ced9;
    if ((char)(__this->fields)._isOrthographic_5__2 == '\0') {
      fVar6 = UnityEngine_Camera__get_orthographicSize(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto LAB_03d8ced9;
      fVar7 = UnityEngine_Camera__get_aspect(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto LAB_03d8ced9;
      fVar8 = UnityEngine_Camera__get_nearClipPlane(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto LAB_03d8ced9;
      fVar9 = UnityEngine_Camera__get_farClipPlane(pUVar3,(MethodInfo *)0x0);
      __this_48 = (CustomLogic_CustomLogicMathBuiltin_o *)local_a8;
      method = (MethodInfo *)0x0;
      UnityEngine_Matrix4x4__Ortho
                ((UnityEngine_Matrix4x4_o *)__this_48,-fVar6 * fVar7,fVar6 * fVar7,-fVar6,fVar6,
                 fVar8,fVar9,(MethodInfo *)0x0);
    }
    else {
      fVar6 = UnityEngine_Camera__get_fieldOfView(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto LAB_03d8ced9;
      fVar7 = UnityEngine_Camera__get_aspect(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto LAB_03d8ced9;
      fVar8 = UnityEngine_Camera__get_nearClipPlane(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (pRVar2->fields).mainCamera;
      if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto LAB_03d8ced9;
      fVar9 = UnityEngine_Camera__get_farClipPlane(pUVar3,(MethodInfo *)0x0);
      __this_48 = (CustomLogic_CustomLogicMathBuiltin_o *)local_a8;
      method = (MethodInfo *)0x0;
      UnityEngine_Matrix4x4__Perspective
                ((UnityEngine_Matrix4x4_o *)__this_48,fVar6,fVar7,fVar8,fVar9,(MethodInfo *)0x0);
    }
    (__this->fields)._dest_5__3.fields.m03 = local_78;
    (__this->fields)._dest_5__3.fields.m13 = fStack_74;
    (__this->fields)._dest_5__3.fields.m23 = fStack_70;
    (__this->fields)._dest_5__3.fields.m33 = fStack_6c;
    (__this->fields)._dest_5__3.fields.m02 = (float)local_98._containsTypeOverride;
    (__this->fields)._dest_5__3.fields.m12 =
         (float)local_98._Namespace_k__BackingField.fields.hasValue;
    (__this->fields)._dest_5__3.fields.m22 = (float)local_98._Namespace_k__BackingField.fields.value
    ;
    (__this->fields)._dest_5__3.fields.m32 =
         (float)local_98._LookupBaseClassForVariables_k__BackingField;
    (__this->fields)._dest_5__3.fields.m01 = (float)local_98.Enabled;
    (__this->fields)._dest_5__3.fields.m11 = (float)local_98.Inited;
    *(System_Collections_Generic_Dictionary_string__object__o **)
     &(__this->fields)._dest_5__3.fields.m21 = local_98.Variables;
    (__this->fields)._dest_5__3.fields.m00 = (float)local_a8._0_4_;
    (__this->fields)._dest_5__3.fields.m10 = (float)local_a8._4_4_;
    (__this->fields)._dest_5__3.fields.m20 = (float)local_a8._8_4_;
    (__this->fields)._dest_5__3.fields.m30 = (float)local_a8._12_4_;
    (__this->fields)._t_5__5 = 0.0;
    fVar6 = 0.0;
  }
  if ((char)(__this->fields)._isOrthographic_5__2 == '\0') {
    fVar6 = powf(__this_48,fVar6,0.2,method);
  }
  else {
    fVar6 = fVar6 * fVar6;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_00,index,(MethodInfo *)0x0);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_01,iVar5,(MethodInfo *)0x0);
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
  index_00 = (int32_t)&local_68;
  UnityEngine_Matrix4x4__set_Item
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_03,index,(MethodInfo *)0x1);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_04,iVar5,(MethodInfo *)0x1);
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
  UnityEngine_Matrix4x4__set_Item
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_06,index,(MethodInfo *)0x2);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_07,iVar5,(MethodInfo *)0x2);
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
  UnityEngine_Matrix4x4__set_Item
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_09,index,(MethodInfo *)0x3);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_10,iVar5,(MethodInfo *)0x3);
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
  UnityEngine_Matrix4x4__set_Item
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_12,index,(MethodInfo *)0x4);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_13,iVar5,(MethodInfo *)0x4);
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
  UnityEngine_Matrix4x4__set_Item
            (__this_14,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0x4);
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_15,index,(MethodInfo *)0x5);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_16,iVar5,(MethodInfo *)0x5);
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
  UnityEngine_Matrix4x4__set_Item
            (__this_17,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0x5);
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_18,index,(MethodInfo *)0x6);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_19,iVar5,(MethodInfo *)0x6);
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
  UnityEngine_Matrix4x4__set_Item
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_21,index,(MethodInfo *)0x7);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_22,iVar5,(MethodInfo *)0x7);
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
  UnityEngine_Matrix4x4__set_Item
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_24,index,(MethodInfo *)0x8);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_25,iVar5,(MethodInfo *)0x8);
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
  UnityEngine_Matrix4x4__set_Item
            (__this_26,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0x8);
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_27,index,(MethodInfo *)0x9);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_28,iVar5,(MethodInfo *)0x9);
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
  UnityEngine_Matrix4x4__set_Item
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_30,index,(MethodInfo *)0xa);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_31,iVar5,(MethodInfo *)0xa);
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
  UnityEngine_Matrix4x4__set_Item
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_33,index,(MethodInfo *)0xb);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_34,iVar5,(MethodInfo *)0xb);
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
  UnityEngine_Matrix4x4__set_Item
            (__this_35,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0xb);
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_36,index,(MethodInfo *)0xc);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_37,iVar5,(MethodInfo *)0xc);
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
  UnityEngine_Matrix4x4__set_Item
            (__this_38,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0xc);
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_39,index,(MethodInfo *)0xd);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_40,iVar5,(MethodInfo *)0xd);
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
  UnityEngine_Matrix4x4__set_Item
            (__this_41,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0xd);
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_42,index,(MethodInfo *)0xe);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_43,iVar5,(MethodInfo *)0xe);
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
  UnityEngine_Matrix4x4__set_Item
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
  fVar7 = UnityEngine_Matrix4x4__get_Item(__this_45,index,(MethodInfo *)0xf);
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
  fVar8 = UnityEngine_Matrix4x4__get_Item(__this_46,iVar5,(MethodInfo *)0xf);
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
  UnityEngine_Matrix4x4__set_Item
            (__this_47,index_00,(fVar8 - fVar7) * fVar6 + fVar7,(MethodInfo *)0xf);
  pUVar3 = (pRVar2->fields).mainCamera;
  if (pUVar3 != (UnityEngine_Camera_o *)0x0) {
    value.fields.m20 = (float)(undefined4)uStack_60;
    value.fields.m30 = (float)uStack_60._4_4_;
    value.fields.m00 = (float)(undefined4)local_68;
    value.fields.m10 = (float)local_68._4_4_;
    value.fields.m01 = (float)(undefined4)local_58;
    value.fields.m11 = (float)local_58._4_4_;
    value.fields.m21 = (float)(undefined4)uStack_50;
    value.fields.m31 = (float)uStack_50._4_4_;
    value.fields.m02 = (float)(undefined4)local_48;
    value.fields.m12 = (float)local_48._4_4_;
    value.fields.m22 = (float)(undefined4)uStack_40;
    value.fields.m32 = (float)uStack_40._4_4_;
    value.fields.m03 = (float)(undefined4)local_38;
    value.fields.m13 = (float)local_38._4_4_;
    value.fields.m23 = (float)(undefined4)uStack_30;
    value.fields.m33 = (float)uStack_30._4_4_;
    UnityEngine_Camera__set_projectionMatrix(pUVar3,value,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)pUVar1 >> 8),1);
  }
LAB_03d8ced9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x3d8cee0

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener_<SwitchProjection>d__11__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_Reset (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x3d8cef0

void RuntimeSceneGizmo_CameraGizmoListener_<SwitchProjection>d__11__System_Collections_IEnumerator_Reset
               (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_get_Current (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x3d8cf30

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener_<SwitchProjection>d__11__System_Collections_IEnumerator_get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener$$Awake
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__Awake (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x3d8bea0

void RuntimeSceneGizmo_CameraGizmoListener__Awake
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  
  pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  (__this->fields).mainCamera = pUVar1;
  il2cpp_runtime_glue(&(__this->fields).mainCamera);
  pUVar1 = (__this->fields).mainCamera;
  if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
      (__this->fields).mainCamParent = pUVar2;
      il2cpp_runtime_glue(&(__this->fields).mainCamParent,pUVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.CameraGizmoListener$$OnDisable
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__OnDisable (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x3d8bf00

void RuntimeSceneGizmo_CameraGizmoListener__OnDisable
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  (__this->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields).projectionChangeCoroutine,0);
  (__this->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields).cameraRotateCoroutine,0);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$OnGizmoComponentClicked
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__OnGizmoComponentClicked (RuntimeSceneGizmo_CameraGizmoListener_o* __this, int32_t component, const MethodInfo* method);
// 0x3d8bf30

void RuntimeSceneGizmo_CameraGizmoListener__OnGizmoComponentClicked
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,int32_t component,MethodInfo *method
               )

{
  undefined8 uVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  switch(component) {
  case 0:
    if ((__this->fields).projectionChangeCoroutine != (System_Collections_IEnumerator_o *)0x0) {
      return;
    }
    if (DAT_05702706 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SwitchProjection_d__11);
      DAT_05702706 = '\x01';
    }
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SwitchProjection_d__11);
    System_Object___ctor(pIVar2,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar2[1].klass = 0;
    if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(pIVar2 + 2,__this);
    (__this->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)pIVar2;
    il2cpp_runtime_glue(&(__this->fields).projectionChangeCoroutine,pIVar2);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).projectionChangeCoroutine,
               (MethodInfo *)0x0);
    return;
  case 1:
    if (DAT_0570222a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_0570222a = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    uVar3 = (uint)uVar1;
    uVar4 = (uint)((ulong)uVar1 >> 0x20);
    uVar5 = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
    goto LAB_03d8c0a8;
  case 2:
    if (DAT_0570222a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_0570222a = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    uVar3 = (uint)uVar1 ^ 0x80000000;
    uVar4 = (uint)((ulong)uVar1 >> 0x20) ^ 0x80000000;
    uVar5 = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
    break;
  case 3:
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    uVar3 = (uint)uVar1;
    uVar4 = (uint)((ulong)uVar1 >> 0x20);
    uVar5 = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    goto LAB_03d8c0a8;
  case 4:
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    uVar3 = (uint)uVar1 ^ 0x80000000;
    uVar4 = (uint)((ulong)uVar1 >> 0x20) ^ 0x80000000;
    uVar5 = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    break;
  default:
    if (DAT_056fde21 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde21 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
    uVar3 = (uint)uVar1;
    uVar4 = (uint)((ulong)uVar1 >> 0x20);
    uVar5 = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
    if (component == 5) goto LAB_03d8c0a8;
    uVar3 = uVar3 ^ 0x80000000;
    uVar4 = uVar4 ^ 0x80000000;
  }
  uVar5 = uVar5 ^ 0x80000000;
LAB_03d8c0a8:
  if ((__this->fields).cameraRotateCoroutine != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  if (DAT_05702707 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SetCameraRotation_d__12);
    DAT_05702707 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SetCameraRotation_d__12);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar2[1].klass = 0;
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar2[2].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(pIVar2 + 2,__this);
  pIVar2[2].monitor = (void *)CONCAT44(uVar4,uVar3);
  *(uint *)&pIVar2[3].klass = uVar5;
  (__this->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)pIVar2;
  il2cpp_runtime_glue(&(__this->fields).cameraRotateCoroutine,pIVar2);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).cameraRotateCoroutine,
             (MethodInfo *)0x0);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$SwitchOrthographicMode
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchOrthographicMode (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x3d8c0c0

void RuntimeSceneGizmo_CameraGizmoListener__SwitchOrthographicMode
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((__this->fields).projectionChangeCoroutine != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  if (DAT_05702706 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SwitchProjection_d__11);
    DAT_05702706 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SwitchProjection_d__11);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    (__this->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)__this_00;
    il2cpp_runtime_glue(&(__this->fields).projectionChangeCoroutine,__this_00);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).projectionChangeCoroutine,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.CameraGizmoListener$$RotateCameraInDirection
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection (RuntimeSceneGizmo_CameraGizmoListener_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x3d8c160

void RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,UnityEngine_Vector3_o direction,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((__this->fields).cameraRotateCoroutine != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  if (DAT_05702707 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SetCameraRotation_d__12);
    DAT_05702707 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SetCameraRotation_d__12);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = direction.fields._0_8_;
    *(float *)&__this_00[3].klass = direction.fields.z;
    (__this->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)__this_00;
    il2cpp_runtime_glue(&(__this->fields).cameraRotateCoroutine,__this_00);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).cameraRotateCoroutine,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.CameraGizmoListener$$SwitchProjection
// il2cpp: System_Collections_IEnumerator_o* RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x3d8c230

System_Collections_IEnumerator_o *
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection
          (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05702706 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SwitchProjection_d__11);
    DAT_05702706 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SwitchProjection_d__11);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.CameraGizmoListener$$SetCameraRotation
// il2cpp: System_Collections_IEnumerator_o* RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation (RuntimeSceneGizmo_CameraGizmoListener_o* __this, UnityEngine_Vector3_o targetForward, const MethodInfo* method);
// 0x3d8c2a0

System_Collections_IEnumerator_o *
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation
          (RuntimeSceneGizmo_CameraGizmoListener_o *__this,UnityEngine_Vector3_o targetForward,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05702707 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SetCameraRotation_d__12);
    DAT_05702707 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SetCameraRotation_d__12);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = targetForward.fields._0_8_;
    *(float *)&__this_00[3].klass = targetForward.fields.z;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// RuntimeSceneGizmo.CameraGizmoListener$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener___ctor (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x3d8c370

void RuntimeSceneGizmo_CameraGizmoListener___ctor
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  (__this->fields).cameraAdjustmentSpeed = 3.0;
  (__this->fields).projectionTransitionSpeed = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


