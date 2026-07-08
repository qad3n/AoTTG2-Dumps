// Type: Cameras.CharacterEditorCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Cameras/CharacterEditorCamera.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Cameras/CharacterEditorCamera.cs  [CHANGED since prior version]
// --------------------------------

// Cameras.CharacterEditorCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_CharacterEditorCamera__SetDefaultCameraPosition (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x4142bb0

void Cameras_CharacterEditorCamera__SetDefaultCameraPosition
               (Cameras_CharacterEditorCamera_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_o value;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.z = 3.0;
    value.fields.x = 0.0;
    value.fields.y = 1.1;
    UnityEngine_Transform__set_position(pUVar2,value,(MethodInfo *)0x0);
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


// Cameras.CharacterEditorCamera$$Update
// il2cpp: void Cameras_CharacterEditorCamera__Update (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x4142c10

void Cameras_CharacterEditorCamera__Update
               (Cameras_CharacterEditorCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_Component_o *__this_00;
  long *plVar7;
  Utility_BaseComponentCache_o *pUVar8;
  undefined1 auVar9 [16];
  UnityEngine_Vector3_Fields UVar10;
  char cVar11;
  bool_conflict bVar12;
  UnityEngine_EventSystems_EventSystem_o *__this_01;
  UnityEngine_Object_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float extraout_XMM0_Dc;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dd_00;
  float fVar21;
  undefined1 auVar23 [16];
  float fVar24;
  UnityEngine_Vector3_o UVar25;
  float local_88;
  float fStack_84;
  undefined8 uVar22;
  
  if (DAT_05704994 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorMenu);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorMenu_GetComponent_CharacterEditor);
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Mouse Y");
    il2cpp_init_method_metadata(&"Mouse X");
    il2cpp_init_method_metadata(&"Mouse ScrollWheel");
    DAT_05704994 = '\x01';
    if (*(int *)(TypeInfo_EventSystem + 0xe4) != 0) goto LAB_04142c3e;
LAB_04142cd1:
    il2cpp_init_class();
    __this_01 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) goto LAB_04142cd1;
LAB_04142c3e:
    __this_01 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  }
  if (__this_01 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto LAB_041432bd;
  bVar12 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject
                     (__this_01,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  UVar25 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fVar16 = UVar25.fields.x;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class(fVar16,UVar25.fields.z);
  }
  pUVar13 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar12 = UnityEngine_Object__op_Equality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_00 == (UnityEngine_Component_o *)0x0) goto LAB_041432bd;
  pUVar13 = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_CharacterEditorMenu_GetComponent_CharacterEditor);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar12 = UnityEngine_Object__op_Equality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar7 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (plVar7 == (long *)0x0) goto LAB_041432bd;
  if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(TypeInfo_CharacterEditorMenu + 0x130)) ||
     (*(long *)(*(long *)(*plVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorMenu + 0x130) * 8) !=
      TypeInfo_CharacterEditorMenu)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(plVar7);
  }
  fVar15 = (float)(**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
  if (fVar16 < fVar15) {
    return;
  }
  fVar15 = (float)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
  if (fVar15 < fVar16) {
    return;
  }
  cVar11 = (**(code **)(*plVar7 + 0x1a8))();
  if (cVar11 != '\0') {
    return;
  }
  fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  bVar12 = UnityEngine_Input__GetKey(0x143,(MethodInfo *)0x0);
  if (((char)bVar12 != '\0') ||
     (bVar12 = UnityEngine_Input__GetKey(0x144,(MethodInfo *)0x0), (char)bVar12 != '\0')) {
    fVar15 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
    fVar17 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
    pUVar8 = (__this->fields).Cache;
    if (pUVar8 == (Utility_BaseComponentCache_o *)0x0) goto LAB_041432bd;
    pUVar14 = (pUVar8->fields).Transform;
    UVar10 = (__this->fields).AnchorPoint.fields;
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_041432bd;
    UnityEngine_Transform__RotateAround
              (pUVar14,(UnityEngine_Vector3_o)UVar10,
               (UnityEngine_Vector3_o)
               *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
               fVar15 * fVar16 * 200.0,(MethodInfo *)0x0);
    pUVar8 = (__this->fields).Cache;
    if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar14 = (pUVar8->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0))
    goto LAB_041432bd;
    UVar10 = (__this->fields).AnchorPoint.fields;
    UVar25 = UnityEngine_Transform__get_right(pUVar14,(MethodInfo *)0x0);
    UnityEngine_Transform__RotateAround
              (pUVar14,(UnityEngine_Vector3_o)UVar10,UVar25,-(fVar16 * 200.0 * fVar17),
               (MethodInfo *)0x0);
  }
  fVar16 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
  fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pUVar8 = (__this->fields).Cache;
  if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar14 = (pUVar8->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0))
  goto LAB_041432bd;
  UVar25 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
  uVar1 = (__this->fields).AnchorPoint.fields.x;
  uVar4 = (__this->fields).AnchorPoint.fields.y;
  fVar17 = UVar25.fields.z - (__this->fields).AnchorPoint.fields.z;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar23._0_4_ = UVar25.fields.x - (float)uVar1;
  auVar23._4_4_ = UVar25.fields.y - (float)uVar4;
  auVar23._8_4_ = extraout_XMM0_Dc - 0.0;
  auVar23._12_4_ = extraout_XMM0_Dd - 0.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar19 = 0;
  uVar20 = 0;
  fVar18 = fVar17 * fVar17 + auVar23._4_4_ * auVar23._4_4_ + auVar23._0_4_ * auVar23._0_4_;
  if (fVar18 < 0.0) {
    fVar18 = sqrtf(fVar18);
    uVar19 = extraout_XMM0_Dc_00;
    uVar20 = extraout_XMM0_Dd_00;
    if (fVar18 <= 1e-05) goto LAB_041430ec;
LAB_041430c7:
    fVar17 = fVar17 / fVar18;
    auVar9._4_4_ = fVar18;
    auVar9._0_4_ = fVar18;
    auVar9._8_4_ = uVar19;
    auVar9._12_4_ = uVar20;
    auVar23 = divps(auVar23,auVar9);
    uVar22 = auVar23._0_8_;
    pUVar8 = (__this->fields).Cache;
  }
  else {
    fVar18 = SQRT(fVar18);
    if (1e-05 < fVar18) goto LAB_041430c7;
LAB_041430ec:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar22 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar17 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    pUVar8 = (__this->fields).Cache;
  }
  if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar14 = (pUVar8->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
    uVar2 = (__this->fields).AnchorPoint.fields.x;
    uVar5 = (__this->fields).AnchorPoint.fields.y;
    fVar18 = (__this->fields).AnchorPoint.fields.z;
    UVar25 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
    if (DAT_056fdea6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea6 = '\x01';
    }
    fVar21 = (float)uVar2 - UVar25.fields.x;
    fVar24 = (float)uVar5 - UVar25.fields.y;
    fVar18 = fVar18 - UVar25.fields.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar18 = fVar18 * fVar18 + fVar24 * fVar24 + fVar21 * fVar21;
    if (fVar18 < 0.0) {
      fVar18 = sqrtf(fVar18);
    }
    else {
      fVar18 = SQRT(fVar18);
    }
    if (0.0 <= fVar16) {
      if (fVar16 <= 0.0) {
        return;
      }
      pUVar8 = (__this->fields).Cache;
      if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar14 = (pUVar8->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
        fVar18 = fVar18 - fVar15 * 30.0;
        fVar16 = 1.0;
        if (1.0 <= fVar18) {
          fVar16 = fVar18;
        }
        goto LAB_04143286;
      }
    }
    else {
      pUVar8 = (__this->fields).Cache;
      if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar14 = (pUVar8->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
        fVar18 = fVar15 * 30.0 + fVar18;
        fVar16 = 4.0;
        if (fVar18 <= 4.0) {
          fVar16 = fVar18;
        }
LAB_04143286:
        uVar3 = (__this->fields).AnchorPoint.fields.x;
        uVar6 = (__this->fields).AnchorPoint.fields.y;
        local_88 = (float)uVar22;
        fStack_84 = (float)((ulong)uVar22 >> 0x20);
        UVar25.fields.x = local_88 * fVar16 + (float)uVar3;
        UVar25.fields.y = fStack_84 * fVar16 + (float)uVar6;
        UVar25.fields.z = fVar17 * fVar16 + (__this->fields).AnchorPoint.fields.z;
        UnityEngine_Transform__set_position(pUVar14,UVar25,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_041432bd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.CharacterEditorCamera$$.ctor
// il2cpp: void Cameras_CharacterEditorCamera___ctor (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x41432d0

void Cameras_CharacterEditorCamera___ctor
               (Cameras_CharacterEditorCamera_o *__this,MethodInfo *method)

{
  (__this->fields).AnchorPoint.fields.x = 0.0;
  (__this->fields).AnchorPoint.fields.y = 1.1;
  (__this->fields).AnchorPoint.fields.z = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


