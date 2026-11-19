// Type: RuntimeSceneGizmo.CameraGizmoListener
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/RuntimeSceneGizmo/CameraGizmoListener.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/CameraGizmoListener.cs
// --------------------------------

// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12___ctor (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x586b5c0

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
// 0x586b600

void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_IDisposable_Dispose
               (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,MethodInfo *method)

{
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$MoveNext
// il2cpp: bool RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__MoveNext (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x586b610

bool RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__MoveNext
               (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  RuntimeSceneGizmo_CameraGizmoListener_o *pRVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Quaternion_Fields UVar10;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Quaternion_Fields UStack_38;
  UnityEngine_Quaternion_Fields UStack_28;
  float fStack_14;
  
  iVar2 = (__this->fields).__1__state;
  pRVar3 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    fStack_14 = (__this->fields)._t_5__4;
    fVar8 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    if (pRVar3 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) goto label_0586b8a2;
    fVar8 = fStack_14 + fVar8 * (pRVar3->fields).cameraAdjustmentSpeed;
    (__this->fields)._t_5__4 = fVar8;
    if (1.0 <= fVar8) {
      pUVar4 = (pRVar3->fields).mainCamParent;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localRotation
                  (pUVar4,(UnityEngine_Quaternion_o)(__this->fields)._targetRotation_5__3.fields,
                   (MethodInfo *)0x0);
        (pRVar3->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(pRVar3->fields).cameraRotateCoroutine);
        return false;
      }
      goto label_0586b8a2;
    }
  }
  else {
    if (iVar2 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((pRVar3 == (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) ||
       (pUVar4 = (pRVar3->fields).mainCamParent, pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_0586b8a2;
    UVar10 = (UnityEngine_Quaternion_Fields)UnityEngine_Transform__get_localRotation(pUVar4,(MethodInfo *)0x0)
    ;
    (__this->fields)._initialRotation_5__2.fields = UVar10;
    if (0.99 <= ABS((__this->fields).targetForward.fields.y)) {
      pUVar4 = (pRVar3->fields).mainCamParent;
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_0586b8a2;
      UVar11 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
      fVar7 = UVar11.fields.z;
      fVar8 = UVar11.fields.x;
      if ((((fVar8 != 0.0) || (NAN(fVar8))) || (fVar7 != 0.0)) || (NAN(fVar7))) {
        if (ABS(fVar8) <= ABS(fVar7)) {
          fVar7 = *(float *)(&g_data_0100ad30 + (ulong)(0.0 <= fVar7) * 4);
          fVar8 = 0.0;
          fVar9 = 0.0;
        }
        else {
          fVar7 = 0.0;
          fVar8 = *(float *)(&g_data_0100ad30 + (ulong)(0.0 <= fVar8) * 4);
          fVar9 = 0.0;
        }
      }
      else {
        fVar9 = 1.0;
      }
      fVar1 = (__this->fields).targetForward.fields.y;
      if (0.0 < fVar1) {
        fVar8 = -fVar8;
        fVar9 = -fVar9;
      }
      uVar6 = -(uint)(0.0 < fVar1);
      UStack_28.x = (__this->fields).targetForward.fields.x;
      UStack_28.y = (__this->fields).targetForward.fields.y;
      UStack_28.z = (__this->fields).targetForward.fields.z;
      UStack_38.y = fVar9;
      UStack_38.x = fVar8;
      UStack_38.z = (float)(~uVar6 & (uint)fVar7 | (uint)-fVar7 & uVar6);
    }
    else {
      UStack_28.x = (__this->fields).targetForward.fields.x;
      UStack_28.y = (__this->fields).targetForward.fields.y;
      UStack_28.z = (__this->fields).targetForward.fields.z;
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      UStack_38.x = (pUVar5->upVector).fields.x;
      UStack_38.y = (pUVar5->upVector).fields.y;
      UStack_38.z = (pUVar5->upVector).fields.z;
    }
    UVar10 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__Internal_LookRotation
                       ((UnityEngine_Vector3_o *)&UStack_28,(UnityEngine_Vector3_o *)&UStack_38,
                        (MethodInfo *)0x0);
    (__this->fields)._targetRotation_5__3.fields = UVar10;
    (__this->fields)._t_5__4 = 0.0;
    fVar8 = 0.0;
  }
  pUVar4 = (pRVar3->fields).mainCamParent;
  UStack_28.x = (__this->fields)._initialRotation_5__2.fields.x;
  UStack_28.y = (__this->fields)._initialRotation_5__2.fields.y;
  UStack_28.z = (__this->fields)._initialRotation_5__2.fields.z;
  UStack_28.w = (__this->fields)._initialRotation_5__2.fields.w;
  UStack_38.x = (__this->fields)._targetRotation_5__3.fields.x;
  UStack_38.y = (__this->fields)._targetRotation_5__3.fields.y;
  UStack_38.z = (__this->fields)._targetRotation_5__3.fields.z;
  UStack_38.w = (__this->fields)._targetRotation_5__3.fields.w;
  value = UnityEngine_Quaternion__Internal_LerpUnclamped
                    ((UnityEngine_Quaternion_o *)&UStack_28,(UnityEngine_Quaternion_o *)&UStack_38,fVar8,
                     (MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localRotation(pUVar4,value,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
label_0586b8a2:
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x586b8b0

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SetCameraRotation>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_Reset (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o* __this, const MethodInfo* method);
// 0x586b8c0

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
// 0x586b900

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12__System_Collections_IEnumerator_get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11___ctor (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x586b5a0

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
// 0x586b910

void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_IDisposable_Dispose
               (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,MethodInfo *method)

{
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$MoveNext
// il2cpp: bool RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__MoveNext (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x586b920

bool RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__MoveNext
               (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_CameraGizmoListener_o *pRVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Matrix4x4_o value;
  bool bVar3;
  Il2CppClass *klass;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  UnityEngine_Matrix4x4_o *pUVar4;
  UnityEngine_Matrix4x4_o *pUVar5;
  CustomLogic_CustomLogicMathBuiltin_o *__this_01;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 extraout_XMM0_Db;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_118 [16];
  CustomLogic_CustomLogicMathBuiltin_Fields CStack_108;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  RuntimeSceneGizmo_CameraGizmoListener_o *pRStack_d8;
  RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *pRStack_d0;
  float *pfStack_c8;
  float *pfStack_c0;
  float *pfStack_b8;
  float *pfStack_b0;
  float *pfStack_a8;
  float *pfStack_a0;
  float *pfStack_98;
  float *pfStack_90;
  float *pfStack_88;
  float *pfStack_80;
  float *pfStack_78;
  float *pfStack_70;
  float *pfStack_68;
  float *pfStack_60;
  float *pfStack_58;
  float *pfStack_50;
  float *pfStack_48;
  float *pfStack_40;
  float *pfStack_38;
  
  iVar6 = (__this->fields).__1__state;
  pRVar1 = (__this->fields).__4__this;
  if (iVar6 == 1) {
    (__this->fields).__1__state = -1;
    uStack_178 = (UnityEngine_Matrix4x4_o *)CONCAT44(uStack_178._4_4_,(__this->fields)._t_5__5);
    __this_01 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
    fVar8 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    if (pRVar1 != (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) {
      fVar8 = (float)uStack_178 + fVar8 * (pRVar1->fields).projectionTransitionSpeed;
      (__this->fields)._t_5__5 = fVar8;
      if (fVar8 < 1.0) goto label_0586bbe7;
      pUVar2 = (pRVar1->fields).mainCamera;
      if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_orthographic
                  (pUVar2,(__this->fields)._isOrthographic_5__2 == false,(MethodInfo *)0x0);
        pUVar2 = (pRVar1->fields).mainCamera;
        if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Camera__ResetProjectionMatrix(pUVar2,(MethodInfo *)0x0);
          (pRVar1->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(pRVar1->fields).projectionChangeCoroutine);
          return false;
        }
      }
    }
  }
  else {
    if (iVar6 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((pRVar1 != (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) &&
       (pUVar2 = (pRVar1->fields).mainCamera, pUVar2 != (UnityEngine_Camera_o *)0x0)) {
      bVar3 = UnityEngine_Camera__get_orthographic(pUVar2,(MethodInfo *)0x0);
      (__this->fields)._isOrthographic_5__2 = bVar3;
      pUVar2 = (pRVar1->fields).mainCamera;
      if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__get_projectionMatrix
                  ((UnityEngine_Matrix4x4_o *)auStack_118,pUVar2,(MethodInfo *)0x0);
        (__this->fields)._src_5__4.fields.m03 = fStack_e8;
        (__this->fields)._src_5__4.fields.m13 = fStack_e4;
        (__this->fields)._src_5__4.fields.m23 = fStack_e0;
        (__this->fields)._src_5__4.fields.m33 = fStack_dc;
        *(undefined8 *)&(__this->fields)._src_5__4.fields.m02 = CStack_108._16_8_;
        *(undefined8 *)&(__this->fields)._src_5__4.fields.m22 = CStack_108._24_8_;
        *(undefined8 *)&(__this->fields)._src_5__4.fields.m01 = CStack_108._0_8_;
        *(System_Collections_Generic_Dictionary_string__object__o **)&(__this->fields)._src_5__4.fields.m21 =
             CStack_108.Variables;
        (__this->fields)._src_5__4.fields.m00 = (float)auStack_118._0_4_;
        (__this->fields)._src_5__4.fields.m10 = (float)auStack_118._4_4_;
        (__this->fields)._src_5__4.fields.m20 = (float)auStack_118._8_4_;
        (__this->fields)._src_5__4.fields.m30 = (float)auStack_118._12_4_;
        pUVar2 = (pRVar1->fields).mainCamera;
        if ((__this->fields)._isOrthographic_5__2 == false) {
          if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_0586c17a;
          fVar8 = UnityEngine_Camera__get_orthographicSize(pUVar2,(MethodInfo *)0x0);
          uStack_178 = (UnityEngine_Matrix4x4_o *)CONCAT44(extraout_XMM0_Db,fVar8);
          pUVar2 = (pRVar1->fields).mainCamera;
          if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_0586c17a;
          fVar8 = UnityEngine_Camera__get_aspect(pUVar2,(MethodInfo *)0x0);
          pUVar2 = (pRVar1->fields).mainCamera;
          if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_0586c17a;
          fVar9 = UnityEngine_Camera__get_nearClipPlane(pUVar2,(MethodInfo *)0x0);
          pUVar2 = (pRVar1->fields).mainCamera;
          if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_0586c17a;
          fVar10 = UnityEngine_Camera__get_farClipPlane(pUVar2,(MethodInfo *)0x0);
          __this_01 = (CustomLogic_CustomLogicMathBuiltin_o *)auStack_118;
          method = (MethodInfo *)0x0;
          UnityEngine_Matrix4x4__Ortho
                    ((UnityEngine_Matrix4x4_o *)__this_01,-(float)uStack_178 * fVar8,(float)uStack_178 * fVar8
                     ,-(float)uStack_178,(float)uStack_178,fVar9,fVar10,(MethodInfo *)0x0);
        }
        else {
          if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_0586c17a;
          fVar8 = UnityEngine_Camera__get_fieldOfView(pUVar2,(MethodInfo *)0x0);
          uStack_178 = (UnityEngine_Matrix4x4_o *)CONCAT44(uStack_178._4_4_,fVar8);
          pUVar2 = (pRVar1->fields).mainCamera;
          if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_0586c17a;
          fVar8 = UnityEngine_Camera__get_aspect(pUVar2,(MethodInfo *)0x0);
          pUVar2 = (pRVar1->fields).mainCamera;
          if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_0586c17a;
          fVar9 = UnityEngine_Camera__get_nearClipPlane(pUVar2,(MethodInfo *)0x0);
          pUVar2 = (pRVar1->fields).mainCamera;
          if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_0586c17a;
          fVar10 = UnityEngine_Camera__get_farClipPlane(pUVar2,(MethodInfo *)0x0);
          __this_01 = (CustomLogic_CustomLogicMathBuiltin_o *)auStack_118;
          method = (MethodInfo *)0x0;
          UnityEngine_Matrix4x4__Perspective
                    ((UnityEngine_Matrix4x4_o *)__this_01,(float)uStack_178,fVar8,fVar9,fVar10,
                     (MethodInfo *)0x0);
        }
        (__this->fields)._dest_5__3.fields.m03 = fStack_e8;
        (__this->fields)._dest_5__3.fields.m13 = fStack_e4;
        (__this->fields)._dest_5__3.fields.m23 = fStack_e0;
        (__this->fields)._dest_5__3.fields.m33 = fStack_dc;
        *(undefined8 *)&(__this->fields)._dest_5__3.fields.m02 = CStack_108._16_8_;
        *(undefined8 *)&(__this->fields)._dest_5__3.fields.m22 = CStack_108._24_8_;
        *(undefined8 *)&(__this->fields)._dest_5__3.fields.m01 = CStack_108._0_8_;
        *(System_Collections_Generic_Dictionary_string__object__o **)&(__this->fields)._dest_5__3.fields.m21 =
             CStack_108.Variables;
        (__this->fields)._dest_5__3.fields.m00 = (float)auStack_118._0_4_;
        (__this->fields)._dest_5__3.fields.m10 = (float)auStack_118._4_4_;
        (__this->fields)._dest_5__3.fields.m20 = (float)auStack_118._8_4_;
        (__this->fields)._dest_5__3.fields.m30 = (float)auStack_118._12_4_;
        (__this->fields)._t_5__5 = 0.0;
        fVar8 = 0.0;
label_0586bbe7:
        pRStack_d8 = pRVar1;
        if ((__this->fields)._isOrthographic_5__2 == false) {
          fVar8 = powf(__this_01,fVar8,0.2,method);
        }
        else {
          fVar8 = fVar8 * fVar8;
        }
        auStack_118._0_4_ = 0.0;
        fStack_17c = 0.0;
        fStack_180 = 0.0;
        fStack_184 = 0.0;
        fStack_188 = 0.0;
        fStack_18c = 0.0;
        fStack_190 = 0.0;
        fStack_194 = 0.0;
        fStack_198 = 0.0;
        fStack_19c = 0.0;
        fStack_1a0 = 0.0;
        fStack_1a4 = 0.0;
        fStack_1a8 = 0.0;
        fStack_1ac = 0.0;
        fStack_1b0 = 0.0;
        uStack_178 = (UnityEngine_Matrix4x4_o *)&(__this->fields)._src_5__4.fields.m23;
        pfStack_38 = &(__this->fields)._dest_5__3.fields.m13;
        pfStack_40 = &(__this->fields)._src_5__4.fields.m03;
        pfStack_48 = &(__this->fields)._dest_5__3.fields.m03;
        pfStack_50 = &(__this->fields)._src_5__4.fields.m32;
        pfStack_58 = &(__this->fields)._dest_5__3.fields.m32;
        pfStack_60 = &(__this->fields)._src_5__4.fields.m22;
        pfStack_68 = &(__this->fields)._dest_5__3.fields.m22;
        pfStack_70 = &(__this->fields)._src_5__4.fields.m12;
        pfStack_78 = &(__this->fields)._dest_5__3.fields.m12;
        pfStack_80 = &(__this->fields)._src_5__4.fields.m02;
        pfStack_88 = &(__this->fields)._dest_5__3.fields.m02;
        pfStack_90 = &(__this->fields)._src_5__4.fields.m31;
        pfStack_98 = &(__this->fields)._dest_5__3.fields.m31;
        pfStack_a0 = &(__this->fields)._src_5__4.fields.m21;
        pfStack_a8 = &(__this->fields)._dest_5__3.fields.m21;
        pfStack_b0 = &(__this->fields)._src_5__4.fields.m11;
        pfStack_b8 = &(__this->fields)._dest_5__3.fields.m11;
        pfStack_c0 = &(__this->fields)._src_5__4.fields.m01;
        pfStack_c8 = &(__this->fields)._dest_5__3.fields.m01;
        iVar6 = 0;
        do {
          pUVar4 = &(__this->fields)._src_5__4;
          pUVar5 = &(__this->fields)._dest_5__3;
          pfVar7 = (float *)auStack_118;
          pRStack_d0 = __this;
          switch(iVar6) {
          case 0:
            break;
          case 1:
            pfVar7 = &fStack_17c;
            pUVar4 = (UnityEngine_Matrix4x4_o *)&(__this->fields)._src_5__4.fields.m10;
            pUVar5 = (UnityEngine_Matrix4x4_o *)&(__this->fields)._dest_5__3.fields.m10;
            break;
          case 2:
            pfVar7 = &fStack_180;
            pUVar4 = (UnityEngine_Matrix4x4_o *)&(__this->fields)._src_5__4.fields.m20;
            pUVar5 = (UnityEngine_Matrix4x4_o *)&(__this->fields)._dest_5__3.fields.m20;
            break;
          case 3:
            pfVar7 = &fStack_184;
            pUVar4 = (UnityEngine_Matrix4x4_o *)&(__this->fields)._src_5__4.fields.m30;
            pUVar5 = (UnityEngine_Matrix4x4_o *)&(__this->fields)._dest_5__3.fields.m30;
            break;
          case 4:
            pfVar7 = &fStack_188;
            pUVar4 = (UnityEngine_Matrix4x4_o *)pfStack_c0;
            pUVar5 = (UnityEngine_Matrix4x4_o *)pfStack_c8;
            break;
          case 5:
            pfVar7 = &fStack_18c;
            pUVar4 = (UnityEngine_Matrix4x4_o *)pfStack_b0;
            pUVar5 = (UnityEngine_Matrix4x4_o *)pfStack_b8;
            break;
          case 6:
            pfVar7 = &fStack_190;
            pUVar4 = (UnityEngine_Matrix4x4_o *)pfStack_a0;
            pUVar5 = (UnityEngine_Matrix4x4_o *)pfStack_a8;
            break;
          case 7:
            pfVar7 = &fStack_194;
            pUVar4 = (UnityEngine_Matrix4x4_o *)pfStack_90;
            pUVar5 = (UnityEngine_Matrix4x4_o *)pfStack_98;
            break;
          case 8:
            pfVar7 = &fStack_198;
            pUVar4 = (UnityEngine_Matrix4x4_o *)pfStack_80;
            pUVar5 = (UnityEngine_Matrix4x4_o *)pfStack_88;
            break;
          case 9:
            pfVar7 = &fStack_19c;
            pUVar4 = (UnityEngine_Matrix4x4_o *)pfStack_70;
            pUVar5 = (UnityEngine_Matrix4x4_o *)pfStack_78;
            break;
          case 10:
            pfVar7 = &fStack_1a0;
            pUVar4 = (UnityEngine_Matrix4x4_o *)pfStack_60;
            pUVar5 = (UnityEngine_Matrix4x4_o *)pfStack_68;
            break;
          case 0xb:
            pfVar7 = &fStack_1a4;
            pUVar4 = (UnityEngine_Matrix4x4_o *)pfStack_50;
            pUVar5 = (UnityEngine_Matrix4x4_o *)pfStack_58;
            break;
          case 0xc:
            pfVar7 = &fStack_1a8;
            pUVar4 = (UnityEngine_Matrix4x4_o *)pfStack_40;
            pUVar5 = (UnityEngine_Matrix4x4_o *)pfStack_48;
            break;
          case 0xd:
            pfVar7 = &fStack_1ac;
            pUVar4 = (UnityEngine_Matrix4x4_o *)&(__this->fields)._src_5__4.fields.m13;
            pUVar5 = (UnityEngine_Matrix4x4_o *)pfStack_38;
            break;
          case 0xe:
            pfVar7 = &fStack_1b0;
            pUVar4 = uStack_178;
            pUVar5 = (UnityEngine_Matrix4x4_o *)&(__this->fields)._dest_5__3.fields.m23;
            break;
          case 0xf:
            goto switchD_0586be39_caseD_f;
          default:
            klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IndexOutOfRangeException);
            __this_00 = (System_IndexOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
            message = il2cpp_codegen_get_runtime_metadata(&"Invalid matrix index!");
            System_IndexOutOfRangeException___ctor_54b5410(__this_00,message,(MethodInfo *)0x0);
            lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_Matrix4x4_get_Item)
            ;
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
          }
          fVar9 = (pUVar4->fields).m00;
          *pfVar7 = ((pUVar5->fields).m00 - fVar9) * fVar8 + fVar9;
          iVar6 = iVar6 + 1;
        } while( true );
      }
    }
  }
label_0586c17a:
  ThrowNullReferenceException();
switchD_0586be39_caseD_f:
  fStack_15c = (__this->fields)._src_5__4.fields.m33;
  fStack_15c = fVar8 * ((__this->fields)._dest_5__3.fields.m33 - fStack_15c) + fStack_15c;
  if ((pRStack_d8 != (RuntimeSceneGizmo_CameraGizmoListener_o *)0x0) &&
     (pUVar2 = (pRStack_d8->fields).mainCamera, pUVar2 != (UnityEngine_Camera_o *)0x0)) {
    fStack_158 = (float)auStack_118._0_4_;
    fStack_154 = fStack_17c;
    fStack_150 = fStack_180;
    fStack_14c = fStack_184;
    fStack_148 = fStack_188;
    fStack_144 = fStack_18c;
    fStack_140 = fStack_190;
    fStack_13c = fStack_194;
    fStack_138 = fStack_198;
    fStack_134 = fStack_19c;
    fStack_130 = fStack_1a0;
    fStack_12c = fStack_1a4;
    fStack_128 = fStack_1a8;
    fStack_124 = fStack_1ac;
    fStack_120 = fStack_1b0;
    value.fields.m10 = fStack_17c;
    value.fields.m00 = (float)auStack_118._0_4_;
    value.fields.m30 = fStack_184;
    value.fields.m20 = fStack_180;
    value.fields.m11 = fStack_18c;
    value.fields.m01 = fStack_188;
    value.fields.m31 = fStack_194;
    value.fields.m21 = fStack_190;
    value.fields.m12 = fStack_19c;
    value.fields.m02 = fStack_198;
    value.fields.m32 = fStack_1a4;
    value.fields.m22 = fStack_1a0;
    value.fields.m13 = fStack_1ac;
    value.fields.m03 = fStack_1a8;
    value.fields.m33 = fStack_15c;
    value.fields.m23 = fStack_1b0;
    fStack_11c = fStack_15c;
    UnityEngine_Camera__set_projectionMatrix(pUVar2,value,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
  goto label_0586c17a;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x586c180

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener.<SwitchProjection>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_Reset (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o* __this, const MethodInfo* method);
// 0x586c190

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
// 0x586c1d0

Il2CppObject *
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11__System_Collections_IEnumerator_get_Current
          (RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// RuntimeSceneGizmo.CameraGizmoListener$$Awake
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__Awake (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x586b0f0

void RuntimeSceneGizmo_CameraGizmoListener__Awake
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  
  pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  (__this->fields).mainCamera = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).mainCamera);
  pUVar1 = (__this->fields).mainCamera;
  if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
      (__this->fields).mainCamParent = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).mainCamParent);
      return;
    }
  }
  ThrowNullReferenceException();
}


// RuntimeSceneGizmo.CameraGizmoListener$$OnDisable
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__OnDisable (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x586b150

void RuntimeSceneGizmo_CameraGizmoListener__OnDisable
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  (__this->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).projectionChangeCoroutine);
  (__this->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).cameraRotateCoroutine);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$OnGizmoComponentClicked
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__OnGizmoComponentClicked (RuntimeSceneGizmo_CameraGizmoListener_o* __this, int32_t component, const MethodInfo* method);
// 0x586b180

void RuntimeSceneGizmo_CameraGizmoListener__OnGizmoComponentClicked
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,int32_t component,MethodInfo *method)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  undefined4 in_register_00000034;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  UnityEngine_Vector3_o direction_01;
  
  switch(component) {
  case 0:
    RuntimeSceneGizmo_CameraGizmoListener__SwitchOrthographicMode
              (__this,(MethodInfo *)CONCAT44(in_register_00000034,component));
    return;
  case 1:
    if (Il2CppMethodInitialized_07544d56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_07544d56 = '\x01';
    }
    RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
              (__this,(UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->rightVector).fields
               ,(MethodInfo *)CONCAT44(in_register_00000034,component));
    return;
  case 2:
    if (Il2CppMethodInitialized_07544d56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_07544d56 = '\x01';
    }
    break;
  case 3:
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
              (__this,(UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields,
               (MethodInfo *)CONCAT44(in_register_00000034,component));
    return;
  case 4:
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar3._0_4_ = (pUVar4->upVector).fields.x;
    uVar3._4_4_ = (pUVar4->upVector).fields.y;
    direction_01.fields._0_8_ = uVar3 ^ 0x8000000080000000;
    direction_01.fields.z = -(pUVar4->upVector).fields.z;
    RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
              (__this,direction_01,(MethodInfo *)CONCAT44(in_register_00000034,component));
    return;
  case 5:
    if (Il2CppMethodInitialized_0753e72e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72e = '\x01';
    }
    RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
              (__this,(UnityEngine_Vector3_o)
                      (TypeInfo_UnityEngine_Vector3->static_fields->forwardVector).fields,
               (MethodInfo *)CONCAT44(in_register_00000034,component));
    return;
  default:
    if (Il2CppMethodInitialized_0753e72e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72e = '\x01';
    }
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar1._0_4_ = (pUVar4->forwardVector).fields.x;
    uVar1._4_4_ = (pUVar4->forwardVector).fields.y;
    direction.fields._0_8_ = uVar1 ^ 0x8000000080000000;
    direction.fields.z = -(pUVar4->forwardVector).fields.z;
    RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
              (__this,direction,(MethodInfo *)CONCAT44(in_register_00000034,component));
    return;
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2._0_4_ = (pUVar4->rightVector).fields.x;
  uVar2._4_4_ = (pUVar4->rightVector).fields.y;
  direction_00.fields._0_8_ = uVar2 ^ 0x8000000080000000;
  direction_00.fields.z = -(pUVar4->rightVector).fields.z;
  RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
            (__this,direction_00,(MethodInfo *)CONCAT44(in_register_00000034,component));
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$SwitchOrthographicMode
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__SwitchOrthographicMode (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x586b350

void RuntimeSceneGizmo_CameraGizmoListener__SwitchOrthographicMode
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this_00;
  
  if ((__this->fields).projectionChangeCoroutine != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  if (Il2CppMethodInitialized_07545148 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11);
    Il2CppMethodInitialized_07545148 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this->fields).projectionChangeCoroutine = (System_Collections_IEnumerator_o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).projectionChangeCoroutine);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).projectionChangeCoroutine,
             (MethodInfo *)0x0);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$RotateCameraInDirection
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection (RuntimeSceneGizmo_CameraGizmoListener_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x586b3e0

void RuntimeSceneGizmo_CameraGizmoListener__RotateCameraInDirection
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,UnityEngine_Vector3_o direction,
               MethodInfo *method)

{
  RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this_00;
  
  if ((__this->fields).cameraRotateCoroutine != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  if (Il2CppMethodInitialized_07545149 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SetCameraRotation_d__12);
    Il2CppMethodInitialized_07545149 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SetCameraRotation_d__12
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).targetForward.fields.x = direction.fields.x;
  (__this_00->fields).targetForward.fields.y = direction.fields.y;
  (__this_00->fields).targetForward.fields.z = direction.fields.z;
  (__this->fields).cameraRotateCoroutine = (System_Collections_IEnumerator_o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).cameraRotateCoroutine);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).cameraRotateCoroutine,(MethodInfo *)0x0);
  return;
}


// RuntimeSceneGizmo.CameraGizmoListener$$SwitchProjection
// il2cpp: System_Collections_IEnumerator_o* RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x586b4a0

System_Collections_IEnumerator_o *
RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection
          (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_CameraGizmoListener__SwitchProjection_d__11_o *__this_00;
  
  if (Il2CppMethodInitialized_07545148 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11);
    Il2CppMethodInitialized_07545148 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SwitchProjection_d__11)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// RuntimeSceneGizmo.CameraGizmoListener$$SetCameraRotation
// il2cpp: System_Collections_IEnumerator_o* RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation (RuntimeSceneGizmo_CameraGizmoListener_o* __this, UnityEngine_Vector3_o targetForward, const MethodInfo* method);
// 0x586b510

System_Collections_IEnumerator_o *
RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation
          (RuntimeSceneGizmo_CameraGizmoListener_o *__this,UnityEngine_Vector3_o targetForward,
          MethodInfo *method)

{
  RuntimeSceneGizmo_CameraGizmoListener__SetCameraRotation_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_07545149 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SetCameraRotation_d__12);
    Il2CppMethodInitialized_07545149 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_RuntimeSceneGizmo_CameraGizmoListener_SetCameraRotation_d__12
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).targetForward.fields.x = targetForward.fields.x;
  (__this_00->fields).targetForward.fields.y = targetForward.fields.y;
  (__this_00->fields).targetForward.fields.z = targetForward.fields.z;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// RuntimeSceneGizmo.CameraGizmoListener$$.ctor
// il2cpp: void RuntimeSceneGizmo_CameraGizmoListener___ctor (RuntimeSceneGizmo_CameraGizmoListener_o* __this, const MethodInfo* method);
// 0x586b5e0

void RuntimeSceneGizmo_CameraGizmoListener___ctor
               (RuntimeSceneGizmo_CameraGizmoListener_o *__this,MethodInfo *method)

{
  (__this->fields).cameraAdjustmentSpeed = 3.0;
  (__this->fields).projectionTransitionSpeed = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


