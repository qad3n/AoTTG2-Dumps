// Type: Cameras.CharacterEditorCamera
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Cameras/CharacterEditorCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/CharacterEditorCamera.cs
// --------------------------------

// Cameras.CharacterEditorCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_CharacterEditorCamera__SetDefaultCameraPosition (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x5dcf680

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
      UnityEngine_Transform__LookAt_692e330
                (pUVar2,(UnityEngine_Vector3_o)(__this->fields).AnchorPoint.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Cameras.CharacterEditorCamera$$Update
// il2cpp: void Cameras_CharacterEditorCamera__Update (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x5dcf6e0

void Cameras_CharacterEditorCamera__Update(Cameras_CharacterEditorCamera_o *__this,MethodInfo *method)

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
  UI_BaseMenu_o *pUVar10;
  UI_BaseMenu_c *pUVar11;
  Utility_BaseComponentCache_o *pUVar12;
  undefined1 auVar13 [16];
  UnityEngine_Vector3_Fields UVar14;
  bool bVar15;
  char cVar16;
  UI_CharacterEditorMenu_o *x;
  UnityEngine_EventSystems_EventSystem_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  UnityEngine_Vector3_o UVar30;
  UnityEngine_Vector3_o value;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_50 [12];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [24];
  
  if (Il2CppMethodInitialized_0754820a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse ScrollWheel");
    Il2CppMethodInitialized_0754820a = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar10 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar15 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar15) {
    return;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar10 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar10 != (UI_BaseMenu_o *)0x0) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)pUVar10,
                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorMenu);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar15 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar15) {
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar10 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar10 != (UI_BaseMenu_o *)0x0) {
      pUVar11 = pUVar10->klass;
      bVar9 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
      if (((pUVar11->_2).typeHierarchyDepth < bVar9) ||
         ((pUVar11->_2).typeHierarchy[(ulong)bVar9 - 1] != (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
      }
      cVar16 = (*((Il2CppClass *)pUVar11)->vtable[8].methodPtr)(pUVar10);
      if (cVar16 != '\0') {
        return;
      }
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      __this_00 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
        bVar15 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject(__this_00,(MethodInfo *)0x0);
        if (bVar15) {
          return;
        }
        UVar30 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        fVar21 = UVar30.fields.x;
        fVar19 = (float)(*((Il2CppClass *)pUVar10->klass)->vtable[11].methodPtr)
                                  (fVar21,UVar30.fields.z,pUVar10,
                                   *(undefined8 *)&((Il2CppClass *)pUVar10->klass)->vtable[11].method);
        if (fVar21 < fVar19) {
          return;
        }
        fVar19 = fVar21;
        fVar20 = (float)(*(code *)((Il2CppClass *)pUVar10->klass)->vtable[12].methodPtr)();
        if (fVar20 < fVar21) {
          return;
        }
        fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        bVar15 = UnityEngine_Input__GetKey(0x143,(MethodInfo *)0x0);
        if ((bVar15) || (bVar15 = UnityEngine_Input__GetKey(0x144,(MethodInfo *)0x0), bVar15)) {
          fVar20 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
          fVar22 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
          pUVar12 = (__this->fields).Cache;
          if (pUVar12 == (Utility_BaseComponentCache_o *)0x0) goto label_05dcfd5d;
          pUVar18 = (pUVar12->fields).Transform;
          UVar14 = (__this->fields).AnchorPoint.fields;
          UVar30.fields._0_8_ = il2cpp_runtime_helper_05bbcf10(0);
          if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_05dcfd5d;
          UVar30.fields.z = fVar19;
          UnityEngine_Transform__RotateAround
                    (pUVar18,(UnityEngine_Vector3_o)UVar14,UVar30,fVar20 * fVar21 * 200.0,(MethodInfo *)0x0);
          pUVar12 = (__this->fields).Cache;
          if ((pUVar12 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar18 = (pUVar12->fields).Transform, pUVar18 == (UnityEngine_Transform_o *)0x0))
          goto label_05dcfd5d;
          UVar14 = (__this->fields).AnchorPoint.fields;
          UVar30 = UnityEngine_Transform__get_right(pUVar18,(MethodInfo *)0x0);
          UnityEngine_Transform__RotateAround
                    (pUVar18,(UnityEngine_Vector3_o)UVar14,UVar30,fVar21 * 200.0 * -fVar22,(MethodInfo *)0x0);
        }
        fVar21 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
        fVar19 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        pUVar12 = (__this->fields).Cache;
        if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar18 = (pUVar12->fields).Transform, pUVar18 != (UnityEngine_Transform_o *)0x0)) {
          UVar30 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
          uVar1 = (__this->fields).AnchorPoint.fields.x;
          uVar5 = (__this->fields).AnchorPoint.fields.y;
          fVar20 = UVar30.fields.z - (__this->fields).AnchorPoint.fields.z;
          if (Il2CppMethodInitialized_0753e72d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72d = '\x01';
          }
          auStack_50._0_4_ = 0.0;
          auStack_50._4_4_ = 0.0;
          if (Il2CppMethodInitialized_0753e729 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_0753e729 = '\x01';
          }
          auVar25._0_4_ = UVar30.fields.x - (float)uVar1;
          auVar25._4_4_ = UVar30.fields.y - (float)uVar5;
          auVar25._8_4_ = extraout_XMM0_Dc - 0.0;
          auVar25._12_4_ = extraout_XMM0_Dd - 0.0;
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          uVar23 = 0;
          fVar22 = fVar20 * fVar20 + auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_;
          if (fVar22 < 0.0) {
            fVar22 = sqrtf(fVar22);
            uVar23 = extraout_XMM0_Db;
          }
          else {
            fVar22 = SQRT(fVar22);
          }
          if (fVar22 <= 1e-05) {
            pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar20 = (pUVar17->zeroVector).fields.z;
          }
          else {
            fVar20 = fVar20 / fVar22;
            auVar13._4_4_ = fVar22;
            auVar13._0_4_ = fVar22;
            auVar13._8_4_ = uVar23;
            auVar13._12_4_ = uVar23;
            auVar25 = divps(auVar25,auVar13);
            auStack_50._0_4_ = auVar25._0_4_;
            auStack_50._4_4_ = auVar25._4_4_;
            pUVar17 = (UnityEngine_Vector3_StaticFields *)auStack_50;
          }
          pUVar12 = (__this->fields).Cache;
          if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar18 = (pUVar12->fields).Transform, pUVar18 != (UnityEngine_Transform_o *)0x0)) {
            auStack_38._0_4_ = (pUVar17->zeroVector).fields.x;
            auStack_38._4_4_ = (pUVar17->zeroVector).fields.y;
            auStack_38._8_4_ = 0.0;
            auStack_38._12_4_ = 0.0;
            uVar2 = (__this->fields).AnchorPoint.fields.x;
            uVar6 = (__this->fields).AnchorPoint.fields.y;
            fVar22 = (__this->fields).AnchorPoint.fields.z;
            UVar30 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
            fVar26 = UVar30.fields.x;
            fVar27 = UVar30.fields.y;
            fVar28 = extraout_XMM0_Dc_00;
            fVar29 = extraout_XMM0_Dd_00;
            if (g_data_0753e7b7 == '\0') {
              fStack_40 = extraout_XMM0_Dc_00;
              unique0x10000382 = UVar30.fields._0_8_;
              fStack_3c = extraout_XMM0_Dd_00;
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              g_data_0753e7b7 = '\x01';
              fVar26 = (float)auStack_50._8_4_;
              fVar27 = fStack_44;
              fVar28 = fStack_40;
              fVar29 = fStack_3c;
            }
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              fStack_44 = fVar27;
              auStack_50._8_4_ = fVar26;
              fStack_40 = fVar28;
              fStack_3c = fVar29;
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              fVar26 = (float)auStack_50._8_4_;
              fVar27 = fStack_44;
            }
            fVar22 = fVar22 - UVar30.fields.z;
            fVar22 = fVar22 * fVar22 +
                     ((float)uVar6 - fVar27) * ((float)uVar6 - fVar27) +
                     ((float)uVar2 - fVar26) * ((float)uVar2 - fVar26);
            if (fVar22 < 0.0) {
              fVar22 = sqrtf(fVar22);
            }
            else {
              fVar22 = SQRT(fVar22);
            }
            if (0.0 <= fVar21) {
              if (fVar21 <= 0.0) {
                return;
              }
              pUVar12 = (__this->fields).Cache;
              if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar18 = (pUVar12->fields).Transform, pUVar18 != (UnityEngine_Transform_o *)0x0)) {
                fVar22 = fVar22 - fVar19 * 30.0;
                auVar24 = ZEXT812(0x3f800000);
                if (auVar24._0_4_ <= fVar22) {
                  auVar24._4_8_ = auVar24._4_8_;
                  auVar24._0_4_ = fVar22;
                }
                fVar19 = auVar24._0_4_;
                fVar20 = fVar20 * fVar19 + (__this->fields).AnchorPoint.fields.z;
                uVar4 = (__this->fields).AnchorPoint.fields.x;
                uVar8 = (__this->fields).AnchorPoint.fields.y;
                fVar21 = (float)auStack_38._0_4_ * fVar19 + (float)uVar4;
                fVar19 = (float)auStack_38._4_4_ * fVar19 + (float)uVar8;
                goto label_05dcfd48;
              }
            }
            else {
              pUVar12 = (__this->fields).Cache;
              if ((pUVar12 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar18 = (pUVar12->fields).Transform, pUVar18 != (UnityEngine_Transform_o *)0x0)) {
                fVar22 = fVar19 * 30.0 + fVar22;
                fVar19 = 4.0;
                if (fVar22 <= 4.0) {
                  fVar19 = fVar22;
                }
                fVar20 = fVar20 * fVar19 + (__this->fields).AnchorPoint.fields.z;
                uVar3 = (__this->fields).AnchorPoint.fields.x;
                uVar7 = (__this->fields).AnchorPoint.fields.y;
                fVar21 = (float)auStack_38._0_4_ * fVar19 + (float)uVar3;
                fVar19 = (float)auStack_38._4_4_ * fVar19 + (float)uVar7;
label_05dcfd48:
                value.fields.y = fVar19;
                value.fields.x = fVar21;
                value.fields.z = fVar20;
                UnityEngine_Transform__set_position(pUVar18,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_05dcfd5d:
  ThrowNullReferenceException();
}


// Cameras.CharacterEditorCamera$$IsInsidePreviewArea
// il2cpp: bool Cameras_CharacterEditorCamera__IsInsidePreviewArea (UI_CharacterEditorMenu_o* menu, float screenX, const MethodInfo* method);
// 0x5dcfd70

bool Cameras_CharacterEditorCamera__IsInsidePreviewArea
               (UI_CharacterEditorMenu_o *menu,float screenX,MethodInfo *method)

{
  float fVar1;
  
  if (menu == (UI_CharacterEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = (*(menu->klass->vtable)._11_GetMinMouseX.methodPtr)
                    (menu,(menu->klass->vtable)._11_GetMinMouseX.method);
  if (screenX < fVar1) {
    return false;
  }
  fVar1 = (*(menu->klass->vtable)._12_GetMaxMouseX.methodPtr)
                    (menu,(menu->klass->vtable)._12_GetMaxMouseX.method);
  return screenX <= fVar1;
}


// Cameras.CharacterEditorCamera$$.ctor
// il2cpp: void Cameras_CharacterEditorCamera___ctor (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x5dcfdd0

void Cameras_CharacterEditorCamera___ctor(Cameras_CharacterEditorCamera_o *__this,MethodInfo *method)

{
  (__this->fields).AnchorPoint.fields.x = 0.0;
  (__this->fields).AnchorPoint.fields.y = 1.1;
  (__this->fields).AnchorPoint.fields.z = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


