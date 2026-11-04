// Type: Cameras.MapEditorCamera
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/MapEditorCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/MapEditorCamera.cs
// --------------------------------

// Cameras.MapEditorCamera$$GetClampedDeltaTime
// il2cpp: float Cameras_MapEditorCamera__GetClampedDeltaTime (const MethodInfo* method);
// 0x1822f6770

float Cameras_MapEditorCamera__GetClampedDeltaTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  if (0.033333335 <= fVar1) {
    fVar1 = 0.033333335;
  }
  return fVar1;
}


// Cameras.MapEditorCamera$$GetScreenScale
// il2cpp: float Cameras_MapEditorCamera__GetScreenScale (const MethodInfo* method);
// 0x1822f6790

float Cameras_MapEditorCamera__GetScreenScale(MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar2 = 1.0;
  if (1.0 <= (float)iVar1) {
    fVar2 = (float)iVar1;
  }
  return fVar2 / 1080.0;
}


// Cameras.MapEditorCamera$$Awake
// il2cpp: void Cameras_MapEditorCamera__Awake (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x1822f6660

void Cameras_MapEditorCamera__Awake(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  Settings_InputSettings_o *pSVar1;
  Settings_MapEditorInputSettings_o *value;
  Settings_MapEditorSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Rendering_Universal_UniversalAdditionalCameraData_o *__this_01;
  
  if (Il2CppMethodInitialized_1843476ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843476ad = '\x01';
  }
  Cameras_BaseCamera__Awake((Cameras_BaseCamera_o *)__this,(MethodInfo *)0x0);
  __this_01 = UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData
                        ((__this->fields).Camera,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Rendering_Universal_UniversalAdditionalCameraData_o *)0x0) {
    UnityEngine_Rendering_Universal_UniversalAdditionalCameraData__set_requiresDepthTexture
              (__this_01,true,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (pSVar1 != (Settings_InputSettings_o *)0x0) {
      value = (pSVar1->fields).MapEditor;
      (__this->fields)._input = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._input,value);
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
      (__this->fields)._settings = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._settings,pSVar2);
      if (Il2CppMethodInitialized_1843476ae == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
        Il2CppMethodInitialized_1843476ae = '\x01';
      }
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
      if (((pSVar2 != (Settings_MapEditorSettings_o *)0x0) &&
          (pSVar3 = (pSVar2->fields).RenderDistance, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
         (__this_00 = (__this->fields).Camera, __this_00 != (UnityEngine_Camera_o *)0x0)) {
        UnityEngine_Camera__set_farClipPlane(__this_00,(float)(pSVar3->fields)._value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$ApplyGraphicsSettings
// il2cpp: void Cameras_MapEditorCamera__ApplyGraphicsSettings (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x1822f65e0

void Cameras_MapEditorCamera__ApplyGraphicsSettings(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Camera_o *__this_00;
  
  if (Il2CppMethodInitialized_1843476ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843476ae = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if (((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).RenderDistance, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
     (__this_00 = (__this->fields).Camera, __this_00 != (UnityEngine_Camera_o *)0x0)) {
    UnityEngine_Camera__set_farClipPlane(__this_00,(float)(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$CreateUICamera
// il2cpp: void Cameras_MapEditorCamera__CreateUICamera (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x180547020

void
Cameras_MapEditorCamera__CreateUICamera(Cameras_MapEditorCamera_o* __this, MethodInfo* method)

{
  return;
}


// Cameras.MapEditorCamera$$Update
// il2cpp: void Cameras_MapEditorCamera__Update (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x1822f8340

void Cameras_MapEditorCamera__Update(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843476af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843476af = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar1 = (__this->fields)._menu;
    if (pUVar1 == (UI_MapEditorMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pUVar1->fields).IsInputFocused == false) {
      Cameras_MapEditorCamera__UpdateMovement(__this,(MethodInfo *)0x0);
    }
    Cameras_MapEditorCamera__UpdateRotation(__this,(MethodInfo *)0x0);
  }
  return;
}


// Cameras.MapEditorCamera$$UpdateMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateMovement (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x1822f7560

void Cameras_MapEditorCamera__UpdateMovement(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  Settings_MapEditorInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  Settings_MapEditorSettings_o *pSVar6;
  UnityEngine_Camera_o *pUVar7;
  bool bVar8;
  int32_t iVar9;
  UnityEngine_Vector3_o *pUVar10;
  Settings_FloatSetting_o *pSVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float speed;
  UnityEngine_Vector3_o local_78;
  UnityEngine_Vector3_o local_68 [8];
  
  if (Il2CppMethodInitialized_1843476b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843476b0 = '\x01';
  }
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pSVar1 = (__this->fields)._input;
  if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).SaveMap, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_1822f7a60;
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar13 = (pUVar3->zeroVector).fields.x;
  fVar14 = (pUVar3->zeroVector).fields.y;
  fVar15 = (pUVar3->zeroVector).fields.z;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (bVar8) {
    return;
  }
  pSVar1 = (__this->fields)._input;
  if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Forward, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_1822f7a60;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (bVar8) {
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_1822f7a60;
    pUVar10 = UnityEngine_Transform__get_forward(&local_78,pUVar5,(MethodInfo *)0x0);
    fVar13 = fVar13 + (pUVar10->fields).x;
    fVar14 = fVar14 + (pUVar10->fields).y;
    fVar15 = fVar15 + (pUVar10->fields).z;
  }
  else {
    pSVar1 = (__this->fields)._input;
    if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Back, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_1822f7a60;
    bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar4 = (__this->fields).Cache;
      if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_1822f7a60;
      pUVar10 = UnityEngine_Transform__get_forward(&local_78,pUVar5,(MethodInfo *)0x0);
      fVar13 = fVar13 - (pUVar10->fields).x;
      fVar14 = fVar14 - (pUVar10->fields).y;
      fVar15 = fVar15 - (pUVar10->fields).z;
    }
  }
  pSVar1 = (__this->fields)._input;
  if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Right, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_1822f7a60;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (bVar8) {
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_1822f7a60;
    pUVar10 = UnityEngine_Transform__get_right(&local_78,pUVar5,(MethodInfo *)0x0);
    fVar13 = fVar13 + (pUVar10->fields).x;
    fVar14 = fVar14 + (pUVar10->fields).y;
    fVar15 = fVar15 + (pUVar10->fields).z;
  }
  else {
    pSVar1 = (__this->fields)._input;
    if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Left, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_1822f7a60;
    bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar4 = (__this->fields).Cache;
      if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_1822f7a60;
      pUVar10 = UnityEngine_Transform__get_right(&local_78,pUVar5,(MethodInfo *)0x0);
      fVar13 = fVar13 - (pUVar10->fields).x;
      fVar14 = fVar14 - (pUVar10->fields).y;
      fVar15 = fVar15 - (pUVar10->fields).z;
    }
  }
  pSVar1 = (__this->fields)._input;
  if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Up, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_1822f7a60;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (bVar8) {
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_1822f7a60;
    pUVar10 = UnityEngine_Transform__get_up(&local_78,pUVar5,(MethodInfo *)0x0);
    fVar13 = fVar13 + (pUVar10->fields).x;
    fVar14 = fVar14 + (pUVar10->fields).y;
    fVar15 = fVar15 + (pUVar10->fields).z;
  }
  else {
    pSVar1 = (__this->fields)._input;
    if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Down, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_1822f7a60;
    bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar4 = (__this->fields).Cache;
      if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_1822f7a60;
      pUVar10 = UnityEngine_Transform__get_up(&local_78,pUVar5,(MethodInfo *)0x0);
      fVar13 = fVar13 - (pUVar10->fields).x;
      fVar14 = fVar14 - (pUVar10->fields).y;
      fVar15 = fVar15 - (pUVar10->fields).z;
    }
  }
  pSVar6 = (__this->fields)._settings;
  if ((((pSVar6 == (Settings_MapEditorSettings_o *)0x0) ||
       (pSVar11 = (pSVar6->fields).CameraMoveSpeed, pSVar11 == (Settings_FloatSetting_o *)0x0)) ||
      (pSVar1 = (__this->fields)._input, pSVar1 == (Settings_MapEditorInputSettings_o *)0x0)) ||
     (pSVar2 = (pSVar1->fields).Slow, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_1822f7a60;
  speed = (pSVar11->fields)._value;
  bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
  if (bVar8) {
    pSVar6 = (__this->fields)._settings;
    if (pSVar6 == (Settings_MapEditorSettings_o *)0x0) goto label_1822f7a60;
    pSVar11 = (pSVar6->fields).CameraSlowMoveSpeed;
label_1822f78e5:
    if (pSVar11 == (Settings_FloatSetting_o *)0x0) goto label_1822f7a60;
    speed = (pSVar11->fields)._value;
  }
  else {
    pSVar1 = (__this->fields)._input;
    if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).Fast, pSVar2 == (Settings_KeybindSetting_o *)0x0)) goto label_1822f7a60;
    bVar8 = Settings_KeybindSetting__GetKey(pSVar2,false,(MethodInfo *)0x0);
    if (bVar8) {
      pSVar6 = (__this->fields)._settings;
      if (pSVar6 == (Settings_MapEditorSettings_o *)0x0) goto label_1822f7a60;
      pSVar11 = (pSVar6->fields).CameraFastMoveSpeed;
      goto label_1822f78e5;
    }
  }
  fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar4 = (__this->fields).Cache;
  if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    if (0.033333335 <= fVar12) {
      fVar12 = 0.033333335;
    }
    pUVar10 = UnityEngine_Transform__get_position(local_68,pUVar5,(MethodInfo *)0x0);
    local_78.fields.x = fVar13 * fVar12 * speed + (pUVar10->fields).x;
    local_78.fields.y = fVar14 * fVar12 * speed + (pUVar10->fields).y;
    local_78.fields.z = fVar15 * fVar12 * speed + (pUVar10->fields).z;
    UnityEngine_Transform__set_position(pUVar5,&local_78,(MethodInfo *)0x0);
    Cameras_MapEditorCamera__UpdateDragMovement(__this,speed,(MethodInfo *)0x0);
    Cameras_MapEditorCamera__UpdateZoomMovement(__this,speed,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._input;
    if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).ToggleOrthographic, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,false,(MethodInfo *)0x0);
      if (!bVar8) {
        return;
      }
      pUVar7 = (__this->fields).Camera;
      if (pUVar7 != (UnityEngine_Camera_o *)0x0) {
        bVar8 = UnityEngine_Camera__get_orthographic(pUVar7,(MethodInfo *)0x0);
        UnityEngine_Camera__set_orthographic(pUVar7,!bVar8,(MethodInfo *)0x0);
        pUVar7 = (__this->fields).Camera;
        if (pUVar7 != (UnityEngine_Camera_o *)0x0) {
          bVar8 = UnityEngine_Camera__get_orthographic(pUVar7,(MethodInfo *)0x0);
          if (bVar8) {
            pUVar7 = (__this->fields).Camera;
            iVar9 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
            if (pUVar7 == (UnityEngine_Camera_o *)0x0) goto label_1822f7a60;
            UnityEngine_Camera__set_orthographicSize(pUVar7,(float)iVar9 * 0.25,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
label_1822f7a60:
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$UpdateDragMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateDragMovement (Cameras_MapEditorCamera_o* __this, float speed, const MethodInfo* method);
// 0x1822f71b0
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f74a1: movsd xmm6, qword ptr [rax]
// asm:   0x1822f74a5: lea rcx, [rsp + 0x30]
// asm:   0x1822f74aa: movss xmm7, dword ptr [rax + 8]
// asm:   0x1822f74af: xor r8d, r8d
// asm:   0x1822f74b2: call 0x182f5ba00  ; UnityEngine_Transform__get_up()
// asm:   0x1822f74b7: movaps xmm0, xmmword ptr [rsp + 0x40]
// asm:   0x1822f74bc: lea rdx, [rsp + 0x20]
// asm:   0x1822f74c1: xorps xmm1, xmm1
// asm:   0x1822f74c4: xor r8d, r8d
// asm:   0x1822f74c7: movsd xmm1, xmm0
// asm:   0x1822f74cb: mov rcx, rdi
// asm:   0x1822f74ce: mulss xmm11, dword ptr [rax + 8]
// asm:   0x1822f74d4: xorps xmm0, xmm0
// asm:   0x1822f74d7: movsd xmm2, qword ptr [rax]
// asm:   0x1822f74db: movsd xmm0, xmm13
// asm:   0x1822f74e0: mulps xmm2, xmm1
// asm:   0x1822f74e3: movaps xmm1, xmmword ptr [rsp + 0x50]
// asm:   0x1822f74e8: mulss xmm11, xmm8
// asm:   0x1822f74ed: mulps xmm2, xmm0
// asm:   0x1822f74f0: xorps xmm0, xmm0
// asm:   0x1822f74f3: movsd xmm0, xmm9
// asm:   0x1822f74f8: mulss xmm11, xmm12
// asm:   0x1822f74fd: mulps xmm2, xmm0
// asm:   0x1822f7500: xorps xmm0, xmm0
// asm:   0x1822f7503: movsd xmm0, xmm1
// asm:   0x1822f7507: mulss xmm11, xmm10
// asm:   0x1822f750c: mulps xmm2, xmm0
// asm:   0x1822f750f: subss xmm7, xmm11
// asm:   0x1822f7514: subps xmm6, xmm2
// asm:   0x1822f7517: movss dword ptr [rsp + 0x28], xmm7
// asm:   0x1822f751d: movsd qword ptr [rsp + 0x20], xmm6
// asm:   0x1822f7523: call 0x182f5c390  ; UnityEngine_Transform__set_position()
// asm:   0x1822f7528: jmp 0x1822f728d
// asm:   0x1822f752d: xor edx, edx
// asm:   0x1822f752f: mov byte ptr [rbx + 0x59], 1
// asm:   0x1822f7533: lea rcx, [rsp + 0x30]
// asm:   0x1822f7538: call 0x182fc4880  ; UnityEngine_Input__get_mousePosition()
// asm:   0x1822f753d: movsd xmm0, qword ptr [rax]
// asm:   0x1822f7541: mov ecx, dword ptr [rax + 8]
// asm:   0x1822f7544: movsd qword ptr [rbx + 0x5c], xmm0
// asm:   0x1822f7549: mov dword ptr [rbx + 0x64], ecx
// asm:   0x1822f754c: jmp 0x1822f728d

void Cameras_MapEditorCamera__UpdateDragMovement
               (Cameras_MapEditorCamera_o *__this,float speed,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  Settings_MapEditorInputSettings_o *pSVar10;
  Settings_KeybindSetting_o *pSVar11;
  Utility_BaseComponentCache_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  bool bVar15;
  int32_t iVar16;
  UnityEngine_Vector3_o *pUVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Vector3_o local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  pSVar10 = (__this->fields)._input;
  if ((pSVar10 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pSVar11 = (pSVar10->fields).Pan, pSVar11 != (Settings_KeybindSetting_o *)0x0)) {
    bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar11,false,(MethodInfo *)0x0);
    if (bVar15) {
      (__this->fields)._startDrag = true;
      pUVar17 = UnityEngine_Input__get_mousePosition(&local_d8,(MethodInfo *)0x0);
      fVar18 = (pUVar17->fields).y;
      fVar19 = (pUVar17->fields).z;
      (__this->fields)._lastDragPosition.fields.x = (pUVar17->fields).x;
      (__this->fields)._lastDragPosition.fields.y = fVar18;
      (__this->fields)._lastDragPosition.fields.z = fVar19;
      return;
    }
    pSVar10 = (__this->fields)._input;
    if ((pSVar10 != (Settings_MapEditorInputSettings_o *)0x0) &&
       (pSVar11 = (pSVar10->fields).Pan, pSVar11 != (Settings_KeybindSetting_o *)0x0)) {
      bVar15 = Settings_KeybindSetting__GetKey(pSVar11,false,(MethodInfo *)0x0);
      if (bVar15) {
        if ((__this->fields)._startDrag == false) {
          return;
        }
        pUVar17 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
        fVar21 = (pUVar17->fields).x - (__this->fields)._lastDragPosition.fields.x;
        fVar20 = (pUVar17->fields).y - (__this->fields)._lastDragPosition.fields.y;
        pUVar17 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
        fVar19 = (pUVar17->fields).z;
        fVar18 = (pUVar17->fields).y;
        (__this->fields)._lastDragPosition.fields.x = (pUVar17->fields).x;
        (__this->fields)._lastDragPosition.fields.y = fVar18;
        (__this->fields)._lastDragPosition.fields.z = fVar19;
        fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        iVar16 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        fVar19 = 1.0;
        if (1.0 <= (float)iVar16) {
          fVar19 = (float)iVar16;
        }
        fVar19 = fVar19 / 1080.0;
        pUVar12 = (__this->fields).Cache;
        local_c8 = fVar20;
        fStack_c4 = fVar20;
        fStack_c0 = fVar20;
        fStack_bc = fVar20;
        local_b8 = fVar19;
        fStack_b4 = fVar19;
        fStack_b0 = fVar19;
        fStack_ac = fVar19;
        if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar13 = (pUVar12->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
          pUVar17 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_e8,pUVar13,(MethodInfo *)0x0);
          pUVar12 = (__this->fields).Cache;
          if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar14 = (pUVar12->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
            if (0.033333335 <= fVar18) {
              fVar18 = 0.033333335;
            }
            fVar1 = (pUVar17->fields).z;
            uVar2 = (pUVar17->fields).x;
            uVar6 = (pUVar17->fields).y;
            pUVar17 = UnityEngine_Transform__get_right(&local_d8,pUVar14,(MethodInfo *)0x0);
            uVar3 = (pUVar17->fields).x;
            uVar7 = (pUVar17->fields).y;
            local_e8.z = fVar1 - fVar21 * (pUVar17->fields).z * fVar18 * speed * fVar19;
            local_e8.y = (float)uVar6 - (float)uVar7 * fVar21 * fVar18 * speed * fVar19;
            local_e8.x = (float)uVar2 - (float)uVar3 * fVar21 * fVar18 * speed * fVar19;
            UnityEngine_Transform__set_position(pUVar13,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
            pUVar12 = (__this->fields).Cache;
            if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar13 = (pUVar12->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
              pUVar17 = UnityEngine_Transform__get_position(&local_d8,pUVar13,(MethodInfo *)0x0);
              pUVar12 = (__this->fields).Cache;
              if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar14 = (pUVar12->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
                uVar4 = (pUVar17->fields).x;
                uVar8 = (pUVar17->fields).y;
                fVar21 = (pUVar17->fields).z;
                pUVar17 = UnityEngine_Transform__get_up(&local_d8,pUVar14,(MethodInfo *)0x0);
                uVar5 = (pUVar17->fields).x;
                uVar9 = (pUVar17->fields).y;
                local_e8.z = fVar21 - fVar20 * (pUVar17->fields).z * fVar18 * speed * fVar19;
                local_e8.y = (float)uVar8 - (float)uVar9 * fStack_c4 * fVar18 * speed * fStack_b4;
                local_e8.x = (float)uVar4 - (float)uVar5 * local_c8 * fVar18 * speed * local_b8;
                UnityEngine_Transform__set_position
                          (pUVar13,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        pSVar10 = (__this->fields)._input;
        if ((pSVar10 != (Settings_MapEditorInputSettings_o *)0x0) &&
           (pSVar11 = (pSVar10->fields).Pan, pSVar11 != (Settings_KeybindSetting_o *)0x0)) {
          bVar15 = Settings_KeybindSetting__GetKeyUp(pSVar11,false,(MethodInfo *)0x0);
          if (bVar15) {
            (__this->fields)._startDrag = false;
          }
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$UpdateZoomMovement
// il2cpp: void Cameras_MapEditorCamera__UpdateZoomMovement (Cameras_MapEditorCamera_o* __this, float speed, const MethodInfo* method);
// 0x1822f7f00
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f8220: movsd xmm6, qword ptr [rax]
// asm:   0x1822f8224: lea rcx, [rsp + 0x20]
// asm:   0x1822f8229: movss xmm7, dword ptr [rax + 8]
// asm:   0x1822f822e: xor r8d, r8d
// asm:   0x1822f8231: call 0x182f5af80  ; UnityEngine_Transform__get_forward()
// asm:   0x1822f8236: xorps xmm1, xmm1
// asm:   0x1822f8239: lea rdx, [rsp + 0x20]
// asm:   0x1822f823e: movsd xmm1, xmm13
// asm:   0x1822f8243: xorps xmm0, xmm0
// asm:   0x1822f8246: movsd xmm0, xmm11
// asm:   0x1822f824b: xor r8d, r8d
// asm:   0x1822f824e: mulss xmm8, dword ptr [rax + 8]
// asm:   0x1822f8254: mov rcx, rdi
// asm:   0x1822f8257: movsd xmm2, qword ptr [rax]
// asm:   0x1822f825b: mulps xmm2, xmm1
// asm:   0x1822f825e: mulss xmm8, xmm9
// asm:   0x1822f8263: mulps xmm2, xmm0
// asm:   0x1822f8266: addss xmm8, xmm8
// asm:   0x1822f826b: addps xmm2, xmm2
// asm:   0x1822f826e: subss xmm7, xmm8
// asm:   0x1822f8273: subps xmm6, xmm2
// asm:   0x1822f8276: movss dword ptr [rsp + 0x28], xmm7
// asm:   0x1822f827c: movsd qword ptr [rsp + 0x20], xmm6
// asm:   0x1822f8282: call 0x182f5c390  ; UnityEngine_Transform__set_position()
// asm:   0x1822f8287: jmp 0x1822f811c
// asm:   0x1822f82c8: movsd xmm6, qword ptr [rax]
// asm:   0x1822f82cc: lea rcx, [rsp + 0x20]
// asm:   0x1822f82d1: movss xmm7, dword ptr [rax + 8]
// asm:   0x1822f82d6: xor r8d, r8d
// asm:   0x1822f82d9: call 0x182f5af80  ; UnityEngine_Transform__get_forward()
// asm:   0x1822f82de: xorps xmm1, xmm1
// asm:   0x1822f82e1: lea rdx, [rsp + 0x20]
// asm:   0x1822f82e6: movsd xmm1, xmm12
// asm:   0x1822f82eb: xorps xmm0, xmm0
// asm:   0x1822f82ee: movsd xmm0, xmm10
// asm:   0x1822f82f3: xor r8d, r8d
// asm:   0x1822f82f6: mulss xmm8, dword ptr [rax + 8]
// asm:   0x1822f82fc: mov rcx, rdi
// asm:   0x1822f82ff: movsd xmm2, qword ptr [rax]
// asm:   0x1822f8303: mulps xmm2, xmm1
// asm:   0x1822f8306: mulss xmm8, xmm9
// asm:   0x1822f830b: mulps xmm2, xmm0
// asm:   0x1822f830e: addss xmm8, xmm8
// asm:   0x1822f8313: addps xmm2, xmm2
// asm:   0x1822f8316: addss xmm8, xmm7
// asm:   0x1822f831b: addps xmm2, xmm6
// asm:   0x1822f831e: movss dword ptr [rsp + 0x28], xmm8
// asm:   0x1822f8325: movsd qword ptr [rsp + 0x20], xmm2
// asm:   0x1822f832b: call 0x182f5c390  ; UnityEngine_Transform__set_position()
// asm:   0x1822f8330: jmp 0x1822f811c

void Cameras_MapEditorCamera__UpdateZoomMovement
               (Cameras_MapEditorCamera_o *__this,float speed,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  UI_MapEditorMenu_o *pUVar10;
  GameManagers_BaseGameManager_o *pGVar11;
  Settings_MapEditorInputSettings_o *pSVar12;
  Settings_KeybindSetting_o *pSVar13;
  Utility_BaseComponentCache_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  bool bVar17;
  UnityEngine_Vector3_o *pUVar18;
  UnityEngine_Camera_o *pUVar19;
  GameManagers_BaseGameManager_o *x;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Vector3_Fields local_98 [12];
  
  if (Il2CppMethodInitialized_1843476b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843476b1 = '\x01';
  }
  pUVar10 = (__this->fields)._menu;
  if (pUVar10 != (UI_MapEditorMenu_o *)0x0) {
    if ((pUVar10->fields).IsMouseUI != false) {
      return;
    }
    pGVar11 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    x = (GameManagers_BaseGameManager_o *)0x0;
    if (pGVar11 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar9 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar11->klass->_2).typeHierarchyDepth < bVar9) ||
         (bVar17 = true,
         (pGVar11->klass->_2).typeHierarchy[(ulonglong)bVar9 - 1] !=
         (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
        bVar17 = false;
      }
      if (bVar17) {
        x = pGVar11;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar17 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar17) {
      if (x == (GameManagers_BaseGameManager_o *)0x0) goto label_1822f8335;
      if (((*(uint64_t *)((char *)x + 0xa0)) != (GameManagers_BaseGameManager_c *)0x0) && (*(char *)&(((*(Il2CppClass **)((char *)x + 0xa0)))->_1).name != '\0')
         ) {
        return;
      }
    }
    fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pUVar19 = (__this->fields).Camera;
    if (pUVar19 != (UnityEngine_Camera_o *)0x0) {
      if (0.033333335 <= fVar20) {
        fVar20 = 0.033333335;
      }
      bVar17 = UnityEngine_Camera__get_orthographic(pUVar19,(MethodInfo *)0x0);
      pSVar12 = (__this->fields)._input;
      if (pSVar12 != (Settings_MapEditorInputSettings_o *)0x0) {
        pSVar13 = (pSVar12->fields).ZoomIn;
        if (bVar17) {
          if (pSVar13 != (Settings_KeybindSetting_o *)0x0) {
            bVar17 = Settings_KeybindSetting__GetKey(pSVar13,false,(MethodInfo *)0x0);
            if (bVar17) {
              pUVar19 = (__this->fields).Camera;
              if (pUVar19 != (UnityEngine_Camera_o *)0x0) {
                fVar21 = UnityEngine_Camera__get_orthographicSize(pUVar19,(MethodInfo *)0x0);
                fVar21 = fVar21 - (fVar20 * speed + fVar20 * speed);
label_1822f8114:
                UnityEngine_Camera__set_orthographicSize(pUVar19,fVar21,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              pSVar12 = (__this->fields)._input;
              if ((pSVar12 != (Settings_MapEditorInputSettings_o *)0x0) &&
                 (pSVar13 = (pSVar12->fields).ZoomOut, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
                bVar17 = Settings_KeybindSetting__GetKey(pSVar13,false,(MethodInfo *)0x0);
                if (!bVar17) {
                  return;
                }
                pUVar19 = (__this->fields).Camera;
                if (pUVar19 != (UnityEngine_Camera_o *)0x0) {
                  fVar21 = UnityEngine_Camera__get_orthographicSize(pUVar19,(MethodInfo *)0x0);
                  fVar21 = fVar20 * speed + fVar20 * speed + fVar21;
                  goto label_1822f8114;
                }
              }
            }
          }
        }
        else if (pSVar13 != (Settings_KeybindSetting_o *)0x0) {
          bVar17 = Settings_KeybindSetting__GetKey(pSVar13,false,(MethodInfo *)0x0);
          if (bVar17) {
            pUVar14 = (__this->fields).Cache;
            if ((pUVar14 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar15 = (pUVar14->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
              pUVar18 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)local_98,pUVar15,(MethodInfo *)0x0);
              pUVar14 = (__this->fields).Cache;
              if ((pUVar14 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar16 = (pUVar14->fields).Transform, pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                uVar3 = (pUVar18->fields).x;
                uVar7 = (pUVar18->fields).y;
                fVar21 = (pUVar18->fields).z;
                pUVar18 = UnityEngine_Transform__get_forward
                                    ((UnityEngine_Vector3_o *)local_98,pUVar16,(MethodInfo *)0x0);
                uVar4 = (pUVar18->fields).x;
                uVar8 = (pUVar18->fields).y;
                fVar23 = fVar20 * (pUVar18->fields).z * speed;
                fVar22 = (float)uVar4 * fVar20 * speed;
                fVar20 = (float)uVar8 * fVar20 * speed;
                local_98[0].z = fVar23 + fVar23 + fVar21;
                local_98[0].x = fVar22 + fVar22 + (float)uVar3;
                local_98[0].y = fVar20 + fVar20 + (float)uVar7;
                UnityEngine_Transform__set_position
                          (pUVar15,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            pSVar12 = (__this->fields)._input;
            if ((pSVar12 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (pSVar13 = (pSVar12->fields).ZoomOut, pSVar13 != (Settings_KeybindSetting_o *)0x0)) {
              bVar17 = Settings_KeybindSetting__GetKey(pSVar13,false,(MethodInfo *)0x0);
              if (!bVar17) {
                return;
              }
              pUVar14 = (__this->fields).Cache;
              if ((pUVar14 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar15 = (pUVar14->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
                pUVar18 = UnityEngine_Transform__get_position
                                    ((UnityEngine_Vector3_o *)local_98,pUVar15,(MethodInfo *)0x0);
                pUVar14 = (__this->fields).Cache;
                if ((pUVar14 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pUVar16 = (pUVar14->fields).Transform, pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                  uVar1 = (pUVar18->fields).x;
                  uVar5 = (pUVar18->fields).y;
                  fVar21 = (pUVar18->fields).z;
                  pUVar18 = UnityEngine_Transform__get_forward
                                      ((UnityEngine_Vector3_o *)local_98,pUVar16,(MethodInfo *)0x0);
                  uVar2 = (pUVar18->fields).x;
                  uVar6 = (pUVar18->fields).y;
                  fVar23 = fVar20 * (pUVar18->fields).z * speed;
                  fVar22 = (float)uVar2 * fVar20 * speed;
                  fVar20 = (float)uVar6 * fVar20 * speed;
                  local_98[0].z = fVar21 - (fVar23 + fVar23);
                  local_98[0].y = (float)uVar5 - (fVar20 + fVar20);
                  local_98[0].x = (float)uVar1 - (fVar22 + fVar22);
                  UnityEngine_Transform__set_position
                            (pUVar15,(UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_1822f8335:
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$UpdateRotation
// il2cpp: void Cameras_MapEditorCamera__UpdateRotation (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x1822f7a70

void Cameras_MapEditorCamera__UpdateRotation(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  UI_MapEditorMenu_o *pUVar3;
  Settings_MapEditorInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  Settings_MapEditorSettings_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  UnityEngine_Transform_o *__this_00;
  bool bVar11;
  int32_t iVar12;
  UnityEngine_Vector3_o *pUVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78 [9];
  
  if (Il2CppMethodInitialized_1843476b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_1843476b2 = '\x01';
  }
  if ((__this->fields)._wasRotating == false) {
    pUVar3 = (__this->fields)._menu;
    if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto label_1822f7ef5;
    if ((pUVar3->fields).IsMouseUI != false) {
      return;
    }
  }
  pSVar4 = (__this->fields)._input;
  (__this->fields)._wasRotating = false;
  if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).RotateCamera, pSVar5 == (Settings_KeybindSetting_o *)0x0)) goto label_1822f7ef5;
  bVar11 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
  if (bVar11) {
    fVar14 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
    fVar15 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
    pSVar6 = (__this->fields)._settings;
    if ((pSVar6 == (Settings_MapEditorSettings_o *)0x0) ||
       (pSVar7 = (pSVar6->fields).CameraRotateSpeed, pSVar7 == (Settings_FloatSetting_o *)0x0))
    goto label_1822f7ef5;
    fVar1 = (pSVar7->fields)._value;
    fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    iVar12 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    fVar17 = 1.0;
    if (1.0 <= (float)iVar12) {
      fVar17 = (float)iVar12;
    }
    pUVar8 = (__this->fields).Cache;
    if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar9 = (pUVar8->fields).Transform, pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_1822f7ef5;
    if (0.033333335 <= fVar16) {
      fVar16 = 0.033333335;
    }
    pUVar13 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_78,pUVar9,(MethodInfo *)0x0);
    local_78[0].x = (pUVar13->fields).x;
    local_78[0].y = (pUVar13->fields).y;
    local_78[0].z = (pUVar13->fields).z;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_88.x = (pUVar10->upVector).fields.x;
    local_88.y = (pUVar10->upVector).fields.y;
    local_88.z = (pUVar10->upVector).fields.z;
    UnityEngine_Transform__RotateAround
              (pUVar9,(UnityEngine_Vector3_o *)local_78,(UnityEngine_Vector3_o *)&local_88,
               fVar16 * fVar14 * fVar1 * (fVar17 / 1080.0),(MethodInfo *)0x0);
    pUVar8 = (__this->fields).Cache;
    if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar9 = (pUVar8->fields).Transform, pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_1822f7ef5;
    pUVar13 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_78,pUVar9,(MethodInfo *)0x0);
    pUVar8 = (__this->fields).Cache;
    if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
       (__this_00 = (pUVar8->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
    goto label_1822f7ef5;
    uVar2._0_4_ = (pUVar13->fields).x;
    uVar2._4_4_ = (pUVar13->fields).y;
    fVar14 = (pUVar13->fields).z;
    pUVar13 = UnityEngine_Transform__get_right((UnityEngine_Vector3_o *)&local_88,__this_00,(MethodInfo *)0x0)
    ;
    local_78[0].x = (pUVar13->fields).x;
    local_78[0].y = (pUVar13->fields).y;
    local_78[0].z = (pUVar13->fields).z;
    local_88._0_8_ = uVar2;
    local_88.z = fVar14;
    UnityEngine_Transform__RotateAround
              (pUVar9,(UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)local_78,
               -fVar15 * fVar16 * fVar1 * (fVar17 / 1080.0),(MethodInfo *)0x0);
    (__this->fields)._wasRotating = true;
  }
  pSVar4 = (__this->fields)._input;
  if ((pSVar4 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pSVar5 = (pSVar4->fields).SnapCameraLeft, pSVar5 != (Settings_KeybindSetting_o *)0x0)) {
    bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
    if (bVar11) {
      if (Il2CppMethodInitialized_18434494b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18434494b = '\x01';
      }
      pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_78[0].x = (pUVar10->downVector).fields.x;
      local_78[0].y = (pUVar10->downVector).fields.y;
      local_78[0].z = (pUVar10->downVector).fields.z;
    }
    else {
      pSVar4 = (__this->fields)._input;
      if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
         (pSVar5 = (pSVar4->fields).SnapCameraRight, pSVar5 == (Settings_KeybindSetting_o *)0x0))
      goto label_1822f7ef5;
      bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
      if (bVar11) {
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
        local_78[0].x = (pUVar10->upVector).fields.x;
        local_78[0].y = (pUVar10->upVector).fields.y;
        local_78[0].z = (pUVar10->upVector).fields.z;
      }
      else {
        pSVar4 = (__this->fields)._input;
        if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
           (pSVar5 = (pSVar4->fields).SnapCameraUp, pSVar5 == (Settings_KeybindSetting_o *)0x0))
        goto label_1822f7ef5;
        bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
        if (bVar11) {
          if (Il2CppMethodInitialized_1843445b8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_1843445b8 = '\x01';
          }
          pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_78[0].x = (pUVar10->rightVector).fields.x;
          local_78[0].y = (pUVar10->rightVector).fields.y;
          local_78[0].z = (pUVar10->rightVector).fields.z;
        }
        else {
          pSVar4 = (__this->fields)._input;
          if ((pSVar4 == (Settings_MapEditorInputSettings_o *)0x0) ||
             (pSVar5 = (pSVar4->fields).SnapCameraDown, pSVar5 == (Settings_KeybindSetting_o *)0x0))
          goto label_1822f7ef5;
          bVar11 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
          if (!bVar11) {
            return;
          }
          if (Il2CppMethodInitialized_184345288 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_184345288 = '\x01';
          }
          pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_78[0].x = (pUVar10->leftVector).fields.x;
          local_78[0].y = (pUVar10->leftVector).fields.y;
          local_78[0].z = (pUVar10->leftVector).fields.z;
        }
      }
    }
    Cameras_MapEditorCamera__SnapCameraToAxis(__this,(UnityEngine_Vector3_o *)local_78,(MethodInfo *)0x0);
    return;
  }
label_1822f7ef5:
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$AlignedWithWorldAxis
// il2cpp: bool Cameras_MapEditorCamera__AlignedWithWorldAxis (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x1822f6230

bool Cameras_MapEditorCamera__AlignedWithWorldAxis(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o local_58 [6];
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar4 = UnityEngine_Transform__get_forward(local_58,pUVar2,(MethodInfo *)0x0);
    fVar6 = (pUVar4->fields).x;
    fVar5 = (pUVar4->fields).y;
    fVar7 = (pUVar4->fields).z;
    if (Il2CppMethodInitialized_18433de5d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5d = '\x01';
    }
    pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar6 = fVar6 - (pUVar3->forwardVector).fields.x;
    fVar5 = fVar5 - (pUVar3->forwardVector).fields.y;
    fVar7 = fVar7 - (pUVar3->forwardVector).fields.z;
    if (fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7 < 9.9999994e-11) {
      return true;
    }
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      pUVar4 = UnityEngine_Transform__get_forward(local_58,pUVar2,(MethodInfo *)0x0);
      fVar6 = (pUVar4->fields).x;
      fVar5 = (pUVar4->fields).y;
      fVar7 = (pUVar4->fields).z;
      if (Il2CppMethodInitialized_18434506d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18434506d = '\x01';
      }
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar6 = fVar6 - (pUVar3->backVector).fields.x;
      fVar5 = fVar5 - (pUVar3->backVector).fields.y;
      fVar7 = fVar7 - (pUVar3->backVector).fields.z;
      if (fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7 < 9.9999994e-11) {
        return true;
      }
      pUVar1 = (__this->fields).Cache;
      if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        pUVar4 = UnityEngine_Transform__get_forward(local_58,pUVar2,(MethodInfo *)0x0);
        fVar6 = (pUVar4->fields).x;
        fVar5 = (pUVar4->fields).y;
        fVar7 = (pUVar4->fields).z;
        if (Il2CppMethodInitialized_184345288 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_184345288 = '\x01';
        }
        pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar6 = fVar6 - (pUVar3->leftVector).fields.x;
        fVar5 = fVar5 - (pUVar3->leftVector).fields.y;
        fVar7 = fVar7 - (pUVar3->leftVector).fields.z;
        if (fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7 < 9.9999994e-11) {
          return true;
        }
        pUVar1 = (__this->fields).Cache;
        if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          pUVar4 = UnityEngine_Transform__get_forward(local_58,pUVar2,(MethodInfo *)0x0);
          fVar6 = (pUVar4->fields).x;
          fVar5 = (pUVar4->fields).y;
          fVar7 = (pUVar4->fields).z;
          if (Il2CppMethodInitialized_1843445b8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_1843445b8 = '\x01';
          }
          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar6 = fVar6 - (pUVar3->rightVector).fields.x;
          fVar5 = fVar5 - (pUVar3->rightVector).fields.y;
          fVar7 = fVar7 - (pUVar3->rightVector).fields.z;
          if (fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7 < 9.9999994e-11) {
            return true;
          }
          pUVar1 = (__this->fields).Cache;
          if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
            pUVar4 = UnityEngine_Transform__get_forward(local_58,pUVar2,(MethodInfo *)0x0);
            fVar6 = (pUVar4->fields).x;
            fVar5 = (pUVar4->fields).y;
            fVar7 = (pUVar4->fields).z;
            if (Il2CppMethodInitialized_18433de5c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433de5c = '\x01';
            }
            pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar6 = fVar6 - (pUVar3->upVector).fields.x;
            fVar5 = fVar5 - (pUVar3->upVector).fields.y;
            fVar7 = fVar7 - (pUVar3->upVector).fields.z;
            if (fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7 < 9.9999994e-11) {
              return true;
            }
            pUVar1 = (__this->fields).Cache;
            if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
              pUVar4 = UnityEngine_Transform__get_forward(local_58,pUVar2,(MethodInfo *)0x0);
              fVar6 = (pUVar4->fields).x;
              fVar5 = (pUVar4->fields).y;
              fVar7 = (pUVar4->fields).z;
              if (Il2CppMethodInitialized_18434494b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18434494b = '\x01';
              }
              pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar6 = fVar6 - (pUVar3->downVector).fields.x;
              fVar5 = fVar5 - (pUVar3->downVector).fields.y;
              fVar7 = fVar7 - (pUVar3->downVector).fields.z;
              return fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7 < 9.9999994e-11;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$AlignToWorldAxis
// il2cpp: void Cameras_MapEditorCamera__AlignToWorldAxis (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x1822f5d10

void Cameras_MapEditorCamera__AlignToWorldAxis(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  Utility_BaseComponentCache_o *pUVar31;
  UnityEngine_Transform_o *pUVar32;
  UnityEngine_Vector3_StaticFields *pUVar33;
  UnityEngine_Vector3_o *pUVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  UnityEngine_Vector3_Fields local_b8 [14];
  
  pUVar31 = (__this->fields).Cache;
  if ((pUVar31 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar32 = (pUVar31->fields).Transform, pUVar32 != (UnityEngine_Transform_o *)0x0)) {
    pUVar34 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)local_b8,pUVar32,(MethodInfo *)0x0);
    pUVar31 = (__this->fields).Cache;
    if ((pUVar31 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar32 = (pUVar31->fields).Transform, pUVar32 != (UnityEngine_Transform_o *)0x0)) {
      fVar5 = (pUVar34->fields).x;
      fVar19 = (pUVar34->fields).y;
      fVar11 = (pUVar34->fields).z;
      pUVar34 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)local_b8,pUVar32,(MethodInfo *)0x0);
      fVar25 = (pUVar34->fields).y;
      fVar1 = (pUVar34->fields).z;
      fVar2 = (pUVar34->fields).x;
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar3 = (pUVar33->zeroVector).fields.x;
      uVar17 = (pUVar33->zeroVector).fields.y;
      fVar36 = (pUVar33->zeroVector).fields.z;
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar38 = ABS(fVar5);
      fVar39 = ABS(fVar19);
      fVar35 = (pUVar33->zeroVector).fields.z;
      uVar4 = (pUVar33->zeroVector).fields.x;
      uVar18 = (pUVar33->zeroVector).fields.y;
      fVar37 = ABS(fVar11);
      fVar42 = ABS(fVar2);
      fVar41 = ABS(fVar25);
      fVar40 = ABS(fVar1);
      if ((fVar38 <= fVar39) || (fVar38 <= fVar37)) {
        if ((fVar39 <= fVar38) || (fVar39 <= fVar37)) {
          fVar5 = (float)uVar3;
          fVar19 = (float)uVar17;
          if ((fVar38 < fVar37) && (fVar39 < fVar37)) {
            if (fVar11 <= 0.0) {
              if (Il2CppMethodInitialized_18434506d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18434506d = '\x01';
              }
              pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar10 = (pUVar33->backVector).fields.x;
              uVar24 = (pUVar33->backVector).fields.y;
              fVar36 = (pUVar33->backVector).fields.z;
              fVar5 = (float)uVar10;
              fVar19 = (float)uVar24;
            }
            else {
              if (Il2CppMethodInitialized_18433de5d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5d = '\x01';
              }
              pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar9 = (pUVar33->forwardVector).fields.x;
              uVar23 = (pUVar33->forwardVector).fields.y;
              fVar36 = (pUVar33->forwardVector).fields.z;
              fVar5 = (float)uVar9;
              fVar19 = (float)uVar23;
            }
          }
        }
        else if (fVar19 <= 0.0) {
          if (Il2CppMethodInitialized_18434494b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18434494b = '\x01';
          }
          pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar8 = (pUVar33->downVector).fields.x;
          uVar22 = (pUVar33->downVector).fields.y;
          fVar36 = (pUVar33->downVector).fields.z;
          fVar5 = (float)uVar8;
          fVar19 = (float)uVar22;
        }
        else {
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar7 = (pUVar33->upVector).fields.x;
          uVar21 = (pUVar33->upVector).fields.y;
          fVar36 = (pUVar33->upVector).fields.z;
          fVar5 = (float)uVar7;
          fVar19 = (float)uVar21;
        }
      }
      else if (fVar5 <= 0.0) {
        if (Il2CppMethodInitialized_184345288 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_184345288 = '\x01';
        }
        pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar6 = (pUVar33->leftVector).fields.x;
        uVar20 = (pUVar33->leftVector).fields.y;
        fVar36 = (pUVar33->leftVector).fields.z;
        fVar5 = (float)uVar6;
        fVar19 = (float)uVar20;
      }
      else {
        if (Il2CppMethodInitialized_1843445b8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_1843445b8 = '\x01';
        }
        pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar5 = (pUVar33->rightVector).fields.x;
        fVar19 = (pUVar33->rightVector).fields.y;
        fVar36 = (pUVar33->rightVector).fields.z;
      }
      if ((fVar42 <= fVar41) || (fVar42 <= fVar40)) {
        if ((fVar41 <= fVar42) || (fVar41 <= fVar40)) {
          fVar11 = (float)uVar4;
          fVar25 = (float)uVar18;
          if ((fVar42 < fVar40) && (fVar41 < fVar40)) {
            if (fVar1 <= 0.0) {
              if (Il2CppMethodInitialized_18434506d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18434506d = '\x01';
              }
              pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar16 = (pUVar33->backVector).fields.x;
              uVar30 = (pUVar33->backVector).fields.y;
              fVar35 = (pUVar33->backVector).fields.z;
              fVar11 = (float)uVar16;
              fVar25 = (float)uVar30;
            }
            else {
              if (Il2CppMethodInitialized_18433de5d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5d = '\x01';
              }
              pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
              uVar15 = (pUVar33->forwardVector).fields.x;
              uVar29 = (pUVar33->forwardVector).fields.y;
              fVar35 = (pUVar33->forwardVector).fields.z;
              fVar11 = (float)uVar15;
              fVar25 = (float)uVar29;
            }
          }
        }
        else if (fVar25 <= 0.0) {
          if (Il2CppMethodInitialized_18434494b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18434494b = '\x01';
          }
          pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar14 = (pUVar33->downVector).fields.x;
          uVar28 = (pUVar33->downVector).fields.y;
          fVar35 = (pUVar33->downVector).fields.z;
          fVar11 = (float)uVar14;
          fVar25 = (float)uVar28;
        }
        else {
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar13 = (pUVar33->upVector).fields.x;
          uVar27 = (pUVar33->upVector).fields.y;
          fVar35 = (pUVar33->upVector).fields.z;
          fVar11 = (float)uVar13;
          fVar25 = (float)uVar27;
        }
      }
      else if (fVar2 <= 0.0) {
        if (Il2CppMethodInitialized_184345288 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_184345288 = '\x01';
        }
        pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar12 = (pUVar33->leftVector).fields.x;
        uVar26 = (pUVar33->leftVector).fields.y;
        fVar35 = (pUVar33->leftVector).fields.z;
        fVar11 = (float)uVar12;
        fVar25 = (float)uVar26;
      }
      else {
        if (Il2CppMethodInitialized_1843445b8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_1843445b8 = '\x01';
        }
        pUVar33 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar11 = (pUVar33->rightVector).fields.x;
        fVar25 = (pUVar33->rightVector).fields.y;
        fVar35 = (pUVar33->rightVector).fields.z;
      }
      pUVar31 = (__this->fields).Cache;
      if ((pUVar31 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar32 = (pUVar31->fields).Transform, pUVar32 != (UnityEngine_Transform_o *)0x0)) {
        local_b8[0].y = fVar19;
        local_b8[0].x = fVar5;
        local_b8[0].z = fVar36;
        UnityEngine_Transform__set_forward(pUVar32,(UnityEngine_Vector3_o *)local_b8,(MethodInfo *)0x0);
        pUVar31 = (__this->fields).Cache;
        if ((pUVar31 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar32 = (pUVar31->fields).Transform, pUVar32 != (UnityEngine_Transform_o *)0x0)) {
          local_b8[0].y = fVar25;
          local_b8[0].x = fVar11;
          local_b8[0].z = fVar35;
          UnityEngine_Transform__set_up(pUVar32,(UnityEngine_Vector3_o *)local_b8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$SnapCameraToAxis
// il2cpp: void Cameras_MapEditorCamera__SnapCameraToAxis (Cameras_MapEditorCamera_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x1822f6ae0
// eh: try 0x1822f6cc0..0x1822f7196 -> pad 0x18332a890 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f6d4f: mov rdx, qword ptr [rip + 0x1d944d2]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x1822f6d56: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822f6d5b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822f6d60: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822f6d65: test rcx, rcx
// asm:   0x1822f6d68: jne 0x1822f7196
// asm:   0x1822f6d6e: mov r14, qword ptr [rsp + 0x158]
// asm:   0x1822f6d76: mov rsi, qword ptr [rsp + 0x150]
// asm:   0x1822f6d7e: mov rdi, qword ptr [rsp + 0x20]
// asm:   0x1822f6d83: movss xmm13, dword ptr [rsp + 0x168]
// asm:   0x1822f6d8d: movss xmm14, dword ptr [rsp + 0x30]
// asm:   0x1822f6d94: movss xmm15, dword ptr [rsp + 0x34]
// asm:   0x1822f7196: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18332a890: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18332a895: push rbp
// asm:   0x18332a896: sub rsp, 0x20
// asm:   0x18332a89a: mov rbp, rdx
// asm:   0x18332a89d: mov rax, qword ptr [rbp + 0x88]
// asm:   0x18332a8a4: mov rcx, qword ptr [rax]
// asm:   0x18332a8a7: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18332a8ab: movabs rax, 0
// asm:   0x18332a8b5: add rsp, 0x20
// asm:   0x18332a8b9: pop rbp
// asm:   0x18332a8ba: ret 

void Cameras_MapEditorCamera__SnapCameraToAxis
               (Cameras_MapEditorCamera_o *__this,UnityEngine_Vector3_o *direction,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  GameManagers_BaseGameManager_o *pGVar10;
  longlong lVar11;
  UnityEngine_Vector3_StaticFields *pUVar12;
  Utility_BaseComponentCache_o *pUVar13;
  bool bVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Vector3_o *pUVar16;
  UnityEngine_Quaternion_o *pUVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_128;
  float local_120;
  float local_118;
  float local_114;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  Il2CppObject *local_f8;
  UnityEngine_Vector3_o local_e8;
  undefined1 local_d8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_d0;
  Il2CppObject *local_c8;
  
  if (Il2CppMethodInitialized_1843476b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843476b3 = '\x01';
  }
  local_d8 = (undefined1  [8])0x0;
  pUStack_d0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_c8 = (Il2CppObject *)0x0;
  pGVar10 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar10 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar9 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((pGVar10->klass->_2).typeHierarchyDepth < bVar9) ||
       ((pGVar10->klass->_2).typeHierarchy[(ulonglong)bVar9 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar10);
    }
  }
  local_128 = pGVar10;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  if ((pGVar10 == (GameManagers_BaseGameManager_o *)0x0) ||
     (lVar11 = (*(uint64_t *)((char *)pGVar10 + 0x38)), lVar11 == 0)) goto label_1822f719c;
  if (*(int *)(lVar11 + 0x20) == 0) {
    pUVar13 = (__this->fields).Cache;
    if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar15 = (pUVar13->fields).Transform, pUVar15 == (UnityEngine_Transform_o *)0x0)) goto label_1822f719c;
    pUVar16 = UnityEngine_Transform__get_position(&local_e8,pUVar15,(MethodInfo *)0x0);
    pUVar13 = (__this->fields).Cache;
    if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar15 = (pUVar13->fields).Transform, pUVar15 == (UnityEngine_Transform_o *)0x0)) goto label_1822f719c;
    fVar19 = (pUVar16->fields).x;
    fVar20 = (pUVar16->fields).y;
    fVar21 = (pUVar16->fields).z;
    pUVar16 = UnityEngine_Transform__get_forward(&local_e8,pUVar15,(MethodInfo *)0x0);
    fVar19 = (pUVar16->fields).x * 50.0 + fVar19;
    fVar20 = (pUVar16->fields).y * 50.0 + fVar20;
    fVar21 = (pUVar16->fields).z * 50.0 + fVar21;
  }
  else {
    pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar19 = (pUVar12->zeroVector).fields.x;
    fVar20 = (pUVar12->zeroVector).fields.y;
    fVar21 = (pUVar12->zeroVector).fields.z;
    local_118 = fVar20;
    local_114 = fVar21;
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_108,
               (System_Collections_Generic_HashSet_Vector2Int__o *)(*(uint64_t *)((char *)pGVar10 + 0x38)),
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    local_d8 = local_108;
    pUStack_d0 = uStack_100;
    local_c8 = local_f8;
    local_108 = (undefined1  [8])0x0;
    uStack_100 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d8;
    while (bVar14 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_d8,
                               (MethodInfo_15381F0 *)
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext),
          bVar14) {
      if (local_c8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_c8[1].monitor == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar15 = UnityEngine_GameObject__get_transform(local_c8[1].monitor,(MethodInfo *)0x0);
      if (pUVar15 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar16 = UnityEngine_Transform__get_position(&local_e8,pUVar15,(MethodInfo *)0x0);
      fVar19 = fVar19 + (pUVar16->fields).x;
      fVar20 = fVar20 + (pUVar16->fields).y;
      fVar21 = fVar21 + (pUVar16->fields).z;
      local_118 = fVar20;
      local_114 = fVar21;
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d8,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    lVar11 = (*(uint64_t *)((char *)pGVar10 + 0x38));
    if (lVar11 == 0) goto label_1822f719c;
    fVar18 = (float)*(int *)(lVar11 + 0x20);
    fVar19 = fVar19 / fVar18;
    fVar20 = fVar20 / fVar18;
    fVar21 = fVar21 / fVar18;
  }
  pUVar13 = (__this->fields).Cache;
  if ((pUVar13 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar15 = (pUVar13->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
    pUVar16 = UnityEngine_Transform__get_position(&local_e8,pUVar15,(MethodInfo *)0x0);
    local_128 = (GameManagers_BaseGameManager_o *)
                CONCAT44((pUVar16->fields).y - fVar20,(pUVar16->fields).x - fVar19);
    local_120 = (pUVar16->fields).z - fVar21;
    fVar18 = (float)il2cpp_runtime_helper_180546a40(&local_128);
    bVar14 = Cameras_MapEditorCamera__AlignedWithWorldAxis(__this,(MethodInfo *)0x0);
    if (!bVar14) {
      Cameras_MapEditorCamera__AlignToWorldAxis(__this,(MethodInfo *)0x0);
      return;
    }
    pUVar13 = (__this->fields).Cache;
    if ((pUVar13 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar15 = (pUVar13->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
      local_128._0_4_ = (direction->fields).x;
      local_128._4_4_ = (direction->fields).y;
      local_120 = (direction->fields).z;
      pUVar16 = UnityEngine_Transform__TransformDirection
                          (&local_e8,pUVar15,(UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
      local_128 = *(GameManagers_BaseGameManager_o **)&pUVar16->fields;
      local_120 = (pUVar16->fields).z;
      pUVar17 = UnityEngine_Quaternion__Internal_AngleAxis
                          ((UnityEngine_Quaternion_o *)local_108,90.0,(UnityEngine_Vector3_o *)&local_128,
                           (MethodInfo *)0x0);
      pUVar13 = (__this->fields).Cache;
      if ((pUVar13 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar15 = (pUVar13->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
        fVar1 = (pUVar17->fields).x;
        fVar2 = (pUVar17->fields).y;
        fVar3 = (pUVar17->fields).z;
        fVar4 = (pUVar17->fields).w;
        pUVar17 = UnityEngine_Transform__get_rotation
                            ((UnityEngine_Quaternion_o *)local_108,pUVar15,(MethodInfo *)0x0);
        fVar5 = (pUVar17->fields).x;
        fVar6 = (pUVar17->fields).y;
        fVar7 = (pUVar17->fields).z;
        fVar8 = (pUVar17->fields).w;
        local_108._4_4_ = (fVar8 * fVar2 + fVar6 * fVar4 + fVar5 * fVar3) - fVar7 * fVar1;
        local_108._0_4_ = (fVar5 * fVar4 + fVar8 * fVar1 + fVar7 * fVar2) - fVar6 * fVar3;
        uStack_100 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                     CONCAT44(((fVar8 * fVar4 - fVar5 * fVar1) - fVar6 * fVar2) - fVar7 * fVar3,
                              (fVar8 * fVar3 + fVar7 * fVar4 + fVar6 * fVar1) - fVar5 * fVar2);
        UnityEngine_Transform__set_rotation(pUVar15,(UnityEngine_Quaternion_o *)local_108,(MethodInfo *)0x0);
        pUVar13 = (__this->fields).Cache;
        if ((pUVar13 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar15 = (pUVar13->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
          pUVar16 = UnityEngine_Transform__get_forward(&local_e8,pUVar15,(MethodInfo *)0x0);
          local_128 = (GameManagers_BaseGameManager_o *)
                      CONCAT44(fVar20 - fVar18 * (pUVar16->fields).y,fVar19 - fVar18 * (pUVar16->fields).x);
          local_120 = fVar21 - fVar18 * (pUVar16->fields).z;
          UnityEngine_Transform__set_position(pUVar15,(UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
          pUVar13 = (__this->fields).Cache;
          if ((pUVar13 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar15 = (pUVar13->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
            local_128._4_4_ = fVar20;
            local_128._0_4_ = fVar19;
            local_120 = fVar21;
            UnityEngine_Transform__LookAt_2f599f0
                      (pUVar15,(UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_1822f719c:
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_MapEditorCamera__SetDefaultCameraPosition (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x1822f67c0

void Cameras_MapEditorCamera__SetDefaultCameraPosition(Cameras_MapEditorCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  UI_MapEditorMenu_o *value;
  System_String_o *tag;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_Quaternion_StaticFields *pUVar6;
  bool bVar7;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Vector3_o *pUVar9;
  UnityEngine_Quaternion_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843476b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTags);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843476b4 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  value = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (value == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    bVar3 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)value->klass)->_2).typeHierarchyDepth < bVar3) ||
       ((((UI_BaseMenu_c *)value->klass)->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields)._menu = value;
    bVar3 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)value->klass)->_2).typeHierarchyDepth < bVar3) ||
       ((((UI_BaseMenu_c *)value->klass)->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,value);
  if ((TypeInfo_Map_MapTags->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTags);
  }
  tag = TypeInfo_Map_MapTags->static_fields->CameraSpawnPoint;
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  x = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).Cache;
  if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
    if (bVar7) {
      if (x != (UnityEngine_Object_o *)0x0) {
        pUVar11 = (pUVar4->fields).Transform;
        pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar9 = UnityEngine_Transform__get_position
                             ((UnityEngine_Vector3_o *)&local_18,pUVar8,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
            local_28.x = (pUVar9->fields).x;
            local_28.y = (pUVar9->fields).y;
            local_28.z = (pUVar9->fields).z;
            UnityEngine_Transform__set_position(pUVar11,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
            pUVar4 = (__this->fields).Cache;
            if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
              pUVar11 = (pUVar4->fields).Transform;
              pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                pUVar10 = UnityEngine_Transform__get_rotation(&local_18,pUVar8,(MethodInfo *)0x0);
                if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                  local_18.fields.x = (pUVar10->fields).x;
                  local_18.fields.y = (pUVar10->fields).y;
                  local_18.fields.z = (pUVar10->fields).z;
                  local_18.fields.w = (pUVar10->fields).w;
                  goto label_1822f6a98;
                }
              }
            }
          }
        }
      }
    }
    else {
      pUVar11 = (pUVar4->fields).Transform;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar1 = (pUVar5->upVector).fields.x;
      uVar2 = (pUVar5->upVector).fields.y;
      if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
        local_28.y = (float)uVar2 * 100.0;
        local_28.x = (float)uVar1 * 100.0;
        local_28.z = (pUVar5->upVector).fields.z * 100.0;
        UnityEngine_Transform__set_position(pUVar11,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).Cache;
        if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
          pUVar11 = (pUVar4->fields).Transform;
          if (Il2CppMethodInitialized_18433de5b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
            Il2CppMethodInitialized_18433de5b = '\x01';
          }
          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
            pUVar6 = TypeInfo_UnityEngine_Quaternion->static_fields;
            local_18.fields.x = (pUVar6->identityQuaternion).fields.x;
            local_18.fields.y = (pUVar6->identityQuaternion).fields.y;
            local_18.fields.z = (pUVar6->identityQuaternion).fields.z;
            local_18.fields.w = (pUVar6->identityQuaternion).fields.w;
label_1822f6a98:
            UnityEngine_Transform__set_rotation(pUVar11,&local_18,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Cameras.MapEditorCamera$$.ctor
// il2cpp: void Cameras_MapEditorCamera___ctor (Cameras_MapEditorCamera_o* __this, const MethodInfo* method);
// 0x180528540

void
Cameras_MapEditorCamera___ctor(Cameras_MapEditorCamera_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


