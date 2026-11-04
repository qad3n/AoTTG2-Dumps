// Type: Cameras.CharacterEditorCamera
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/CharacterEditorCamera.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/CharacterEditorCamera.cs
// --------------------------------

// Cameras.CharacterEditorCamera$$SetDefaultCameraPosition
// il2cpp: void Cameras_CharacterEditorCamera__SetDefaultCameraPosition (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x1822eea30

void Cameras_CharacterEditorCamera__SetDefaultCameraPosition
               (Cameras_CharacterEditorCamera_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_Fields local_18;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    local_18.x = 0.0;
    local_18.y = 1.1;
    local_18.z = 3.0;
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


// Cameras.CharacterEditorCamera$$Update
// il2cpp: void Cameras_CharacterEditorCamera__Update (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x1822eeab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ef096: jmp 0x1822eefeb

void Cameras_CharacterEditorCamera__Update(Cameras_CharacterEditorCamera_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar5;
  byte bVar8;
  UI_BaseMenu_o *pUVar9;
  UI_BaseMenu_c *pUVar10;
  Utility_BaseComponentCache_o *pUVar11;
  UnityEngine_Vector3_StaticFields *pUVar12;
  bool bVar13;
  char cVar14;
  UnityEngine_EventSystems_EventSystem_o *__this_00;
  UnityEngine_Vector3_o *pUVar15;
  UI_CharacterEditorMenu_o *x;
  UnityEngine_Transform_o *pUVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78 [9];
  
  if (Il2CppMethodInitialized_18434768d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse ScrollWheel");
    Il2CppMethodInitialized_18434768d = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  __this_00 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    bVar13 = UnityEngine_EventSystems_EventSystem__IsPointerOverGameObject(__this_00,(MethodInfo *)0x0);
    if (bVar13) {
      return;
    }
    pUVar15 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)local_78,(MethodInfo *)0x0);
    fVar18 = (pUVar15->fields).x;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar13 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar13) {
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar9 != (UI_BaseMenu_o *)0x0) {
      x = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)pUVar9,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorMenu);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar13 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar13) {
        return;
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar9 != (UI_BaseMenu_o *)0x0) {
        pUVar10 = pUVar9->klass;
        bVar8 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
        if (((pUVar10->_2).typeHierarchyDepth < bVar8) ||
           ((pUVar10->_2).typeHierarchy[(ulonglong)bVar8 - 1] !=
            (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar9);
        }
        fVar17 = (float)(*((Il2CppClass *)pUVar10)->vtable[10].methodPtr)(pUVar9,*(undefined8 *)&((Il2CppClass *)pUVar10)->vtable[10].method);
        if (fVar18 < fVar17) {
          return;
        }
        fVar17 = (float)(*(code *)((Il2CppClass *)pUVar9->klass)->vtable[11].methodPtr)(pUVar9,((Il2CppClass *)pUVar9->klass)->vtable[11].method);
        if (fVar17 < fVar18) {
          return;
        }
        cVar14 = (*((Il2CppClass *)pUVar9->klass)->vtable[7].methodPtr)();
        if (cVar14 != '\0') {
          return;
        }
        fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        bVar13 = UnityEngine_Input__GetKey(0x143,(MethodInfo *)0x0);
        if ((bVar13) || (bVar13 = UnityEngine_Input__GetKey(0x144,(MethodInfo *)0x0), bVar13)) {
          fVar17 = UnityEngine_Input__GetAxis("Mouse X",(MethodInfo *)0x0);
          fVar19 = UnityEngine_Input__GetAxis("Mouse Y",(MethodInfo *)0x0);
          pUVar11 = (__this->fields).Cache;
          if (pUVar11 == (Utility_BaseComponentCache_o *)0x0) goto label_1822ef09b;
          pUVar16 = (pUVar11->fields).Transform;
          uVar3._0_4_ = (__this->fields).AnchorPoint.fields.x;
          uVar3._4_4_ = (__this->fields).AnchorPoint.fields.y;
          fVar20 = (__this->fields).AnchorPoint.fields.z;
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_1822ef09b;
          pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_88.x = (pUVar12->upVector).fields.x;
          local_88.y = (pUVar12->upVector).fields.y;
          local_88.z = (pUVar12->upVector).fields.z;
          local_78[0]._0_8_ = uVar3;
          local_78[0].z = fVar20;
          UnityEngine_Transform__RotateAround
                    (pUVar16,(UnityEngine_Vector3_o *)local_78,(UnityEngine_Vector3_o *)&local_88,
                     fVar17 * fVar18 * 200.0,(MethodInfo *)0x0);
          pUVar11 = (__this->fields).Cache;
          if ((pUVar11 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar16 = (pUVar11->fields).Transform, pUVar16 == (UnityEngine_Transform_o *)0x0))
          goto label_1822ef09b;
          uVar4._0_4_ = (__this->fields).AnchorPoint.fields.x;
          uVar4._4_4_ = (__this->fields).AnchorPoint.fields.y;
          fVar17 = (__this->fields).AnchorPoint.fields.z;
          pUVar15 = UnityEngine_Transform__get_right
                              ((UnityEngine_Vector3_o *)&local_88,pUVar16,(MethodInfo *)0x0);
          local_78[0].x = (pUVar15->fields).x;
          local_78[0].y = (pUVar15->fields).y;
          local_78[0].z = (pUVar15->fields).z;
          local_88._0_8_ = uVar4;
          local_88.z = fVar17;
          UnityEngine_Transform__RotateAround
                    (pUVar16,(UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)local_78,
                     fVar19 * -1.0 * fVar18 * 200.0,(MethodInfo *)0x0);
        }
        fVar18 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
        fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        pUVar11 = (__this->fields).Cache;
        if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar16 = (pUVar11->fields).Transform, pUVar16 != (UnityEngine_Transform_o *)0x0)) {
          pUVar15 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)local_78,pUVar16,(MethodInfo *)0x0);
          uVar1 = (__this->fields).AnchorPoint.fields.x;
          uVar6 = (__this->fields).AnchorPoint.fields.y;
          uVar2 = (pUVar15->fields).x;
          uVar7 = (pUVar15->fields).y;
          fVar19 = (pUVar15->fields).z - (__this->fields).AnchorPoint.fields.z;
          local_78[0].y = (float)uVar7 - (float)uVar6;
          local_78[0].x = (float)uVar2 - (float)uVar1;
          local_78[0].z = fVar19;
          if (Il2CppMethodInitialized_18433de5f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5f = '\x01';
          }
          fVar20 = (float)il2cpp_runtime_helper_180546a40(local_78,0);
          if (fVar20 <= 1e-05) {
            pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar21 = (pUVar12->zeroVector).fields.x;
            fVar22 = (pUVar12->zeroVector).fields.y;
            fVar19 = (pUVar12->zeroVector).fields.z;
          }
          else {
            fVar21 = ((float)uVar2 - (float)uVar1) / fVar20;
            fVar22 = ((float)uVar7 - (float)uVar6) / fVar20;
            fVar19 = fVar19 / fVar20;
          }
          pUVar11 = (__this->fields).Cache;
          if ((pUVar11 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar16 = (pUVar11->fields).Transform, pUVar16 != (UnityEngine_Transform_o *)0x0)) {
            fVar20 = (__this->fields).AnchorPoint.fields.z;
            uVar5._0_4_ = (__this->fields).AnchorPoint.fields.x;
            uVar5._4_4_ = (__this->fields).AnchorPoint.fields.y;
            pUVar15 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)&local_88,pUVar16,(MethodInfo *)0x0);
            local_78[0].x = (pUVar15->fields).x;
            local_78[0].y = (pUVar15->fields).y;
            local_78[0].z = (pUVar15->fields).z;
            local_88._0_8_ = uVar5;
            local_88.z = fVar20;
            fVar20 = (float)il2cpp_runtime_helper_180562c80(&local_88,local_78);
            if (fVar18 < 0.0) {
              pUVar11 = (__this->fields).Cache;
              if (pUVar11 != (Utility_BaseComponentCache_o *)0x0) {
                pUVar16 = (pUVar11->fields).Transform;
                fVar20 = fVar20 + fVar17 * 30.0;
                if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                  fVar18 = 4.0;
                  if (fVar20 <= 4.0) {
                    fVar18 = fVar20;
                  }
                  goto label_1822eefeb;
                }
              }
            }
            else {
              if (fVar18 <= 0.0) {
                return;
              }
              pUVar11 = (__this->fields).Cache;
              if (pUVar11 != (Utility_BaseComponentCache_o *)0x0) {
                pUVar16 = (pUVar11->fields).Transform;
                fVar20 = fVar20 - fVar17 * 30.0;
                if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                  fVar18 = 1.0;
                  if (1.0 <= fVar20) {
                    fVar18 = fVar20;
                  }
label_1822eefeb:
                  local_88.z = fVar19 * fVar18 + (__this->fields).AnchorPoint.fields.z;
                  local_88.y = fVar22 * fVar18 + (__this->fields).AnchorPoint.fields.y;
                  local_88.x = fVar21 * fVar18 + (__this->fields).AnchorPoint.fields.x;
                  UnityEngine_Transform__set_position
                            (pUVar16,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_1822ef09b:
  ThrowNullReferenceException();
}


// Cameras.CharacterEditorCamera$$.ctor
// il2cpp: void Cameras_CharacterEditorCamera___ctor (Cameras_CharacterEditorCamera_o* __this, const MethodInfo* method);
// 0x1822ef0b0

void Cameras_CharacterEditorCamera___ctor(Cameras_CharacterEditorCamera_o *__this,MethodInfo *method)

{
  (__this->fields).AnchorPoint.fields.y = 1.1;
  (__this->fields).AnchorPoint.fields.z = 0.0;
  (__this->fields).AnchorPoint.fields.x = 0.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


