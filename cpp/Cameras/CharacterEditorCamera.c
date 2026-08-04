// Type: Cameras.CharacterEditorCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/CharacterEditorCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/CharacterEditorCamera.cs
// --------------------------------

// Cameras.CharacterEditorCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_CharacterEditorCamera__SetDefaultCameraPosition (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x4475bc0

void Cameras_CharacterEditorCamera__SetDefaultCameraPosition
               (Cameras_CharacterEditorCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Component_o *__this_00;
  undefined1 auVar9 [16];
  UnityEngine_Vector3_Fields UVar10;
  char cVar11;
  bool_conflict bVar12;
  UnityEngine_EventSystems_EventSystem_o *__this_01;
  UnityEngine_Object_o *x;
  long *unaff_RBX;
  Cameras_CharacterEditorCamera_o *__this_02;
  UnityEngine_Transform_o *pUVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float extraout_XMM0_Dc;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dd_00;
  float fVar20;
  undefined1 auVar22 [16];
  float fVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value;
  float fStack_90;
  float fStack_8c;
  float fStack_60;
  undefined8 uVar21;
  
  pUVar8 = (__this->fields).Cache;
  __this_02 = __this;
  if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_02 = (Cameras_CharacterEditorCamera_o *)(pUVar8->fields).Transform, unaff_RBX = (long *)__this,
     __this_02 != (Cameras_CharacterEditorCamera_o *)0x0)) {
    UVar24.fields.z = 3.0;
    UVar24.fields.x = 0.0;
    UVar24.fields.y = 1.1;
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_02,UVar24,(MethodInfo *)0x0);
    pUVar8 = (__this->fields).Cache;
    if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
      pUVar13 = (pUVar8->fields).Transform;
      __this_02 = (Cameras_CharacterEditorCamera_o *)0x0;
      if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__LookAt_4e0aa40
                  (pUVar13,(UnityEngine_Vector3_o)(__this->fields).AnchorPoint.fields,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae85a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorMenu_GetComponent_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Mouse Y");
    il2cpp_runtime_helper_023445d0(&"Mouse X");
    il2cpp_runtime_helper_023445d0(&"Mouse ScrollWheel");
    g_data_057ae85a = '\x01';
    if (*(int *)(TypeInfo_EventSystem + 0xe4) != 0) goto label_04475c4e;
label_04475ce1:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) goto label_04475ce1;
label_04475c4e:
    __this_01 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  }
  if (__this_01 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    bVar12 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject(__this_01,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    UVar24 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    fVar15 = UVar24.fields.x;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(fVar15,UVar24.fields.z);
    }
    unaff_RBX = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      x = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_CharacterEditorMenu_GetComponent_CharacterEditorMenu);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((Cameras_CharacterEditorCamera_o *)unaff_RBX != (Cameras_CharacterEditorCamera_o *)0x0) {
        bVar7 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
        if (((((Cameras_CharacterEditorCamera_o *)unaff_RBX)->klass->_2).naturalAligment < bVar7) ||
           ((((Cameras_CharacterEditorCamera_o *)unaff_RBX)->klass->_2).typeHierarchy[(ulong)bVar7 - 1] !=
            TypeInfo_CharacterEditorMenu)) goto label_044762d2;
        fVar14 = (float)(*((Cameras_CharacterEditorCamera_o *)unaff_RBX)->klass[1]._1.byval_arg.data)
                                  (unaff_RBX,
                                   *(void **)&((Cameras_CharacterEditorCamera_o *)unaff_RBX)->klass[1]._1.
                                              byval_arg.bits);
        if (fVar15 < fVar14) {
          return;
        }
        fVar14 = (float)(*((Cameras_CharacterEditorCamera_o *)unaff_RBX)->klass[1]._1.this_arg.data)
                                  (unaff_RBX,
                                   *(Il2CppClass **)
                                    &((Cameras_CharacterEditorCamera_o *)unaff_RBX)->klass[1]._1.this_arg.bits
                                  );
        if (fVar14 < fVar15) {
          return;
        }
        cVar11 = (*(((Cameras_CharacterEditorCamera_o *)unaff_RBX)->klass->vtable)._7_LateUpdate.methodPtr)();
        if (cVar11 != '\0') {
          return;
        }
        fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        bVar12 = UnityEngine_Input__GetKey(0x143,(MethodInfo *)0x0);
        if (((char)bVar12 == '\0') &&
           (bVar12 = UnityEngine_Input__GetKey(0x144,(MethodInfo *)0x0), (char)bVar12 == '\0')) {
label_04475fda:
          fVar15 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
          fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          pUVar8 = (__this_02->fields).Cache;
          if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar13 = (pUVar8->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
            UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
            uVar1 = (__this_02->fields).AnchorPoint.fields.x;
            uVar4 = (__this_02->fields).AnchorPoint.fields.y;
            fVar16 = UVar24.fields.z - (__this_02->fields).AnchorPoint.fields.z;
            if (g_data_057a6845 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
            }
            auVar22._0_4_ = UVar24.fields.x - (float)uVar1;
            auVar22._4_4_ = UVar24.fields.y - (float)uVar4;
            auVar22._8_4_ = extraout_XMM0_Dc - 0.0;
            auVar22._12_4_ = extraout_XMM0_Dd - 0.0;
            unaff_RBX = &TypeInfo_Math;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar18 = 0;
            uVar19 = 0;
            fVar17 = fVar16 * fVar16 + auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_;
            if (fVar17 < 0.0) {
              fVar17 = sqrtf(fVar17);
              uVar18 = extraout_XMM0_Dc_00;
              uVar19 = extraout_XMM0_Dd_00;
              if (fVar17 <= 1e-05) goto label_044760fc;
label_044760d7:
              fVar16 = fVar16 / fVar17;
              auVar9._4_4_ = fVar17;
              auVar9._0_4_ = fVar17;
              auVar9._8_4_ = uVar18;
              auVar9._12_4_ = uVar19;
              auVar22 = divps(auVar22,auVar9);
              uVar21 = auVar22._0_8_;
              pUVar8 = (__this_02->fields).Cache;
            }
            else {
              fVar17 = SQRT(fVar17);
              if (1e-05 < fVar17) goto label_044760d7;
label_044760fc:
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a65d5 = '\x01';
              }
              uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              fVar16 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
              pUVar8 = (__this_02->fields).Cache;
            }
            if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar13 = (pUVar8->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
              uVar2 = (__this_02->fields).AnchorPoint.fields.x;
              uVar5 = (__this_02->fields).AnchorPoint.fields.y;
              fVar17 = (__this_02->fields).AnchorPoint.fields.z;
              UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
              if (g_data_057a68cb == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a68cb = '\x01';
              }
              fVar20 = (float)uVar2 - UVar24.fields.x;
              fVar23 = (float)uVar5 - UVar24.fields.y;
              fVar17 = fVar17 - UVar24.fields.z;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar17 = fVar17 * fVar17 + fVar23 * fVar23 + fVar20 * fVar20;
              if (fVar17 < 0.0) {
                fVar17 = sqrtf(fVar17);
              }
              else {
                fVar17 = SQRT(fVar17);
              }
              if (0.0 <= fVar15) {
                if (fVar15 <= 0.0) {
                  return;
                }
                pUVar8 = (__this_02->fields).Cache;
                if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pUVar13 = (pUVar8->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
                  fVar17 = fVar17 - fVar14 * 30.0;
                  fVar15 = 1.0;
                  if (1.0 <= fVar17) {
                    fVar15 = fVar17;
                  }
                  goto label_04476296;
                }
              }
              else {
                pUVar8 = (__this_02->fields).Cache;
                if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pUVar13 = (pUVar8->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
                  fVar17 = fVar14 * 30.0 + fVar17;
                  fVar15 = 4.0;
                  if (fVar17 <= 4.0) {
                    fVar15 = fVar17;
                  }
label_04476296:
                  uVar3 = (__this_02->fields).AnchorPoint.fields.x;
                  uVar6 = (__this_02->fields).AnchorPoint.fields.y;
                  fStack_90 = (float)uVar21;
                  fStack_8c = (float)((ulong)uVar21 >> 0x20);
                  value.fields.x = fStack_90 * fVar15 + (float)uVar3;
                  value.fields.y = fStack_8c * fVar15 + (float)uVar6;
                  value.fields.z = fVar16 * fVar15 + (__this_02->fields).AnchorPoint.fields.z;
                  UnityEngine_Transform__set_position(pUVar13,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          fVar14 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
          fVar16 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
          pUVar8 = (__this_02->fields).Cache;
          if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
            unaff_RBX = (long *)(pUVar8->fields).Transform;
            UVar10 = (__this_02->fields).AnchorPoint.fields;
            if (g_data_057a6844 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6844 = '\x01';
            }
            if ((Cameras_CharacterEditorCamera_o *)unaff_RBX != (Cameras_CharacterEditorCamera_o *)0x0) {
              UnityEngine_Transform__RotateAround
                        ((UnityEngine_Transform_o *)unaff_RBX,(UnityEngine_Vector3_o)UVar10,
                         (UnityEngine_Vector3_o)
                         *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                         fVar14 * fVar15 * 200.0,(MethodInfo *)0x0);
              pUVar8 = (__this_02->fields).Cache;
              if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                 (unaff_RBX = (long *)(pUVar8->fields).Transform,
                 (Cameras_CharacterEditorCamera_o *)unaff_RBX != (Cameras_CharacterEditorCamera_o *)0x0)) {
                UVar10 = (__this_02->fields).AnchorPoint.fields;
                UVar24 = UnityEngine_Transform__get_right
                                   ((UnityEngine_Transform_o *)unaff_RBX,(MethodInfo *)0x0);
                UnityEngine_Transform__RotateAround
                          ((UnityEngine_Transform_o *)unaff_RBX,(UnityEngine_Vector3_o)UVar10,UVar24,
                           -(fVar15 * 200.0 * fVar16),(MethodInfo *)0x0);
                goto label_04475fda;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044762d2:
  il2cpp_runtime_helper_022b2fd0();
  (((Cameras_CharacterEditorCamera_o *)unaff_RBX)->fields).AnchorPoint.fields.x = 0.0;
  (((Cameras_CharacterEditorCamera_o *)unaff_RBX)->fields).AnchorPoint.fields.y = 1.1;
  (((Cameras_CharacterEditorCamera_o *)unaff_RBX)->fields).AnchorPoint.fields.z = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)unaff_RBX,(MethodInfo *)0x0);
  return;
}


// Cameras.CharacterEditorCamera$$Update
// il2cpp: void Cameras_CharacterEditorCamera__Update (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x4475c20

void Cameras_CharacterEditorCamera__Update(Cameras_CharacterEditorCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  UnityEngine_Component_o *__this_00;
  Utility_BaseComponentCache_o *pUVar8;
  undefined1 auVar9 [16];
  UnityEngine_Vector3_Fields UVar10;
  char cVar11;
  bool_conflict bVar12;
  UnityEngine_EventSystems_EventSystem_o *__this_01;
  UnityEngine_Object_o *x;
  UnityEngine_MonoBehaviour_o *unaff_RBX;
  UnityEngine_Transform_o *pUVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float extraout_XMM0_Dc;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dd_00;
  float fVar20;
  undefined1 auVar22 [16];
  float fVar23;
  UnityEngine_Vector3_o UVar24;
  float fStack_88;
  float fStack_84;
  float fStack_58;
  undefined8 uVar21;
  
  if (g_data_057ae85a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorMenu_GetComponent_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Mouse Y");
    il2cpp_runtime_helper_023445d0(&"Mouse X");
    il2cpp_runtime_helper_023445d0(&"Mouse ScrollWheel");
    g_data_057ae85a = '\x01';
    if (*(int *)(TypeInfo_EventSystem + 0xe4) != 0) goto label_04475c4e;
label_04475ce1:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) goto label_04475ce1;
label_04475c4e:
    __this_01 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  }
  if (__this_01 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    bVar12 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject(__this_01,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    UVar24 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    fVar15 = UVar24.fields.x;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(fVar15,UVar24.fields.z);
    }
    unaff_RBX = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      x = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_CharacterEditorMenu_GetComponent_CharacterEditorMenu);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (unaff_RBX != (UnityEngine_MonoBehaviour_o *)0x0) {
        bVar7 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
        if (((((UnityEngine_Transform_c *)unaff_RBX->klass)->_2).naturalAligment < bVar7) ||
           ((((UnityEngine_Transform_c *)unaff_RBX->klass)->_2).typeHierarchy[(ulong)bVar7 - 1] !=
            TypeInfo_CharacterEditorMenu)) goto label_044762d2;
        fVar14 = (float)(*(code *)((UnityEngine_Transform_c *)unaff_RBX->klass)[1]._1.declaringType)
                                  (unaff_RBX,((UnityEngine_Transform_c *)unaff_RBX->klass)[1]._1.parent);
        if (fVar15 < fVar14) {
          return;
        }
        fVar14 = (float)(*((UnityEngine_Transform_c *)unaff_RBX->klass)[1]._1.generic_class)
                                  (unaff_RBX,
                                   ((UnityEngine_Transform_c *)unaff_RBX->klass)[1]._1.typeMetadataHandle);
        if (fVar14 < fVar15) {
          return;
        }
        cVar11 = (*((UnityEngine_Transform_c *)unaff_RBX->klass)[1]._1.byval_arg.data)();
        if (cVar11 != '\0') {
          return;
        }
        fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        bVar12 = UnityEngine_Input__GetKey(0x143,(MethodInfo *)0x0);
        if (((char)bVar12 == '\0') &&
           (bVar12 = UnityEngine_Input__GetKey(0x144,(MethodInfo *)0x0), (char)bVar12 == '\0')) {
label_04475fda:
          fVar15 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
          fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          pUVar8 = (__this->fields).Cache;
          if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar13 = (pUVar8->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
            UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
            uVar1 = (__this->fields).AnchorPoint.fields.x;
            uVar4 = (__this->fields).AnchorPoint.fields.y;
            fVar16 = UVar24.fields.z - (__this->fields).AnchorPoint.fields.z;
            if (g_data_057a6845 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
            }
            auVar22._0_4_ = UVar24.fields.x - (float)uVar1;
            auVar22._4_4_ = UVar24.fields.y - (float)uVar4;
            auVar22._8_4_ = extraout_XMM0_Dc - 0.0;
            auVar22._12_4_ = extraout_XMM0_Dd - 0.0;
            unaff_RBX = (UnityEngine_MonoBehaviour_o *)&TypeInfo_Math;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar18 = 0;
            uVar19 = 0;
            fVar17 = fVar16 * fVar16 + auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_;
            if (fVar17 < 0.0) {
              fVar17 = sqrtf(fVar17);
              uVar18 = extraout_XMM0_Dc_00;
              uVar19 = extraout_XMM0_Dd_00;
              if (fVar17 <= 1e-05) goto label_044760fc;
label_044760d7:
              fVar16 = fVar16 / fVar17;
              auVar9._4_4_ = fVar17;
              auVar9._0_4_ = fVar17;
              auVar9._8_4_ = uVar18;
              auVar9._12_4_ = uVar19;
              auVar22 = divps(auVar22,auVar9);
              uVar21 = auVar22._0_8_;
              pUVar8 = (__this->fields).Cache;
            }
            else {
              fVar17 = SQRT(fVar17);
              if (1e-05 < fVar17) goto label_044760d7;
label_044760fc:
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a65d5 = '\x01';
              }
              uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              fVar16 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
              pUVar8 = (__this->fields).Cache;
            }
            if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar13 = (pUVar8->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
              uVar2 = (__this->fields).AnchorPoint.fields.x;
              uVar5 = (__this->fields).AnchorPoint.fields.y;
              fVar17 = (__this->fields).AnchorPoint.fields.z;
              UVar24 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
              if (g_data_057a68cb == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a68cb = '\x01';
              }
              fVar20 = (float)uVar2 - UVar24.fields.x;
              fVar23 = (float)uVar5 - UVar24.fields.y;
              fVar17 = fVar17 - UVar24.fields.z;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar17 = fVar17 * fVar17 + fVar23 * fVar23 + fVar20 * fVar20;
              if (fVar17 < 0.0) {
                fVar17 = sqrtf(fVar17);
              }
              else {
                fVar17 = SQRT(fVar17);
              }
              if (0.0 <= fVar15) {
                if (fVar15 <= 0.0) {
                  return;
                }
                pUVar8 = (__this->fields).Cache;
                if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pUVar13 = (pUVar8->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
                  fVar17 = fVar17 - fVar14 * 30.0;
                  fVar15 = 1.0;
                  if (1.0 <= fVar17) {
                    fVar15 = fVar17;
                  }
                  goto label_04476296;
                }
              }
              else {
                pUVar8 = (__this->fields).Cache;
                if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pUVar13 = (pUVar8->fields).Transform, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
                  fVar17 = fVar14 * 30.0 + fVar17;
                  fVar15 = 4.0;
                  if (fVar17 <= 4.0) {
                    fVar15 = fVar17;
                  }
label_04476296:
                  uVar3 = (__this->fields).AnchorPoint.fields.x;
                  uVar6 = (__this->fields).AnchorPoint.fields.y;
                  fStack_88 = (float)uVar21;
                  fStack_84 = (float)((ulong)uVar21 >> 0x20);
                  UVar24.fields.x = fStack_88 * fVar15 + (float)uVar3;
                  UVar24.fields.y = fStack_84 * fVar15 + (float)uVar6;
                  UVar24.fields.z = fVar16 * fVar15 + (__this->fields).AnchorPoint.fields.z;
                  UnityEngine_Transform__set_position(pUVar13,UVar24,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          fVar14 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
          fVar16 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
          pUVar8 = (__this->fields).Cache;
          if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
            unaff_RBX = (UnityEngine_MonoBehaviour_o *)(pUVar8->fields).Transform;
            UVar10 = (__this->fields).AnchorPoint.fields;
            if (g_data_057a6844 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6844 = '\x01';
            }
            if (unaff_RBX != (UnityEngine_MonoBehaviour_o *)0x0) {
              UnityEngine_Transform__RotateAround
                        ((UnityEngine_Transform_o *)unaff_RBX,(UnityEngine_Vector3_o)UVar10,
                         (UnityEngine_Vector3_o)
                         *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                         fVar14 * fVar15 * 200.0,(MethodInfo *)0x0);
              pUVar8 = (__this->fields).Cache;
              if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                 (unaff_RBX = (UnityEngine_MonoBehaviour_o *)(pUVar8->fields).Transform,
                 unaff_RBX != (UnityEngine_MonoBehaviour_o *)0x0)) {
                UVar10 = (__this->fields).AnchorPoint.fields;
                UVar24 = UnityEngine_Transform__get_right
                                   ((UnityEngine_Transform_o *)unaff_RBX,(MethodInfo *)0x0);
                UnityEngine_Transform__RotateAround
                          ((UnityEngine_Transform_o *)unaff_RBX,(UnityEngine_Vector3_o)UVar10,UVar24,
                           -(fVar15 * 200.0 * fVar16),(MethodInfo *)0x0);
                goto label_04475fda;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044762d2:
  il2cpp_runtime_helper_022b2fd0();
  unaff_RBX[1].fields.m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3f8ccccd00000000;
  *(undefined4 *)&unaff_RBX[2].klass = 0;
  UnityEngine_MonoBehaviour___ctor(unaff_RBX,(MethodInfo *)0x0);
  return;
}


// Cameras.CharacterEditorCamera$$.ctor
// il2cpp: void Cameras_CharacterEditorCamera___ctor (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x44762e0

void Cameras_CharacterEditorCamera___ctor(Cameras_CharacterEditorCamera_o *__this,MethodInfo *method)

{
  (__this->fields).AnchorPoint.fields.x = 0.0;
  (__this->fields).AnchorPoint.fields.y = 1.1;
  (__this->fields).AnchorPoint.fields.z = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


