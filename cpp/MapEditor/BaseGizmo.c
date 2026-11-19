// Type: MapEditor.BaseGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/MapEditor/BaseGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/BaseGizmo.cs
// --------------------------------

// MapEditor.BaseGizmo$$get_PointerPosition
// il2cpp: UnityEngine_Vector3_o MapEditor_BaseGizmo__get_PointerPosition (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x5c92d20

UnityEngine_Vector3_o
MapEditor_BaseGizmo__get_PointerPosition(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  return (UnityEngine_Vector3_o)(__this->fields)._PointerPosition_k__BackingField.fields;
}


// MapEditor.BaseGizmo$$set_PointerPosition
// il2cpp: void MapEditor_BaseGizmo__set_PointerPosition (MapEditor_BaseGizmo_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x5c92d30

void MapEditor_BaseGizmo__set_PointerPosition
               (MapEditor_BaseGizmo_o *__this,UnityEngine_Vector3_o value,MethodInfo *method)

{
  (__this->fields)._PointerPosition_k__BackingField.fields.x = value.fields.x;
  (__this->fields)._PointerPosition_k__BackingField.fields.y = value.fields.y;
  (__this->fields)._PointerPosition_k__BackingField.fields.z = value.fields.z;
  return;
}


// MapEditor.BaseGizmo$$IsActive
// il2cpp: bool MapEditor_BaseGizmo__IsActive (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x5c92d40

bool MapEditor_BaseGizmo__IsActive(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  return false;
}


// MapEditor.BaseGizmo$$Awake
// il2cpp: void MapEditor_BaseGizmo__Awake (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x5c92d50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c92e08: lea rdi, [rbx + 0x20]
// asm:   0x5c92e0c: jmp 0x5c92e1a
// asm:   0x5c92e89: lea rdi, [rbx + 0x30]
// asm:   0x5c92e8d: jmp 0x5c92eb3

void MapEditor_BaseGizmo__Awake(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  Il2CppClass *pIVar3;
  UI_MapEditorMenu_o *pUVar4;
  
  if (Il2CppMethodInitialized_075479e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075479e5 = '\x01';
  }
  pIVar3 = (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager;
  pUVar4 = (UI_MapEditorMenu_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pUVar4 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) goto label_05c92edc;
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar4;
    if (((((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar3))
    goto label_05c92edc;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar4 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    pIVar3 = (Il2CppClass *)TypeInfo_UI_MapEditorMenu;
  }
  else {
    pUVar4 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    pIVar3 = (Il2CppClass *)TypeInfo_UI_MapEditorMenu;
  }
  TypeInfo_UI_MapEditorMenu = (UI_MapEditorMenu_c *)pIVar3;
  if (pUVar4 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
label_05c92eb3:
    Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._transform = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._transform);
    return;
  }
  bVar1 = (pIVar3->_2).typeHierarchyDepth;
  if ((bVar1 <= (((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchyDepth) &&
     ((((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
    (__this->fields)._menu = pUVar4;
    if ((bVar1 <= (((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchyDepth) &&
       ((((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3))
    goto label_05c92eb3;
  }
label_05c92edc:
  il2cpp_codegen_raise_invalid_cast_exception(pUVar4,pIVar3);
}


// MapEditor.BaseGizmo$$Update
// il2cpp: void MapEditor_BaseGizmo__Update (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x5c92ef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c930b8: jmp 0x5c930d4

void MapEditor_BaseGizmo__Update(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Cameras_BaseCamera_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Camera_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  bool bVar8;
  int32_t iVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_075479e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075479e6 = '\x01';
  }
  UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  (__this->fields)._PointerPosition_k__BackingField.fields.x = UVar11.fields.x;
  (__this->fields)._PointerPosition_k__BackingField.fields.y = UVar11.fields.y;
  (__this->fields)._PointerPosition_k__BackingField.fields.z = UVar11.fields.z;
  pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (((pCVar3 != (Cameras_BaseCamera_o *)0x0) &&
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    UVar11 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._transform;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e7b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7b7 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar10 = UVar11.fields.z - UVar12.fields.z;
      local_28 = UVar11.fields.x;
      fStack_24 = UVar11.fields.y;
      local_28 = local_28 - UVar12.fields.x;
      fStack_24 = fStack_24 - UVar12.fields.y;
      fVar10 = fVar10 * fVar10 + fStack_24 * fStack_24 + local_28 * local_28;
      if (fVar10 < 0.0) {
        fVar10 = sqrtf(fVar10);
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if ((pCVar3 != (Cameras_BaseCamera_o *)0x0) &&
         (pUVar6 = (pCVar3->fields).Camera, pUVar6 != (UnityEngine_Camera_o *)0x0)) {
        bVar8 = UnityEngine_Camera__get_orthographic(pUVar6,(MethodInfo *)0x0);
        if (bVar8) {
          pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
          if ((pCVar3 == (Cameras_BaseCamera_o *)0x0) ||
             (pUVar6 = (pCVar3->fields).Camera, pUVar6 == (UnityEngine_Camera_o *)0x0)) goto label_05c9312d;
          fVar10 = UnityEngine_Camera__get_orthographicSize(pUVar6,(MethodInfo *)0x0);
          iVar9 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          fVar10 = (fVar10 * 10.0) / (float)iVar9;
          pUVar5 = (__this->fields)._transform;
        }
        else {
          fVar10 = fVar10 / 200.0;
          pUVar5 = (__this->fields)._transform;
        }
        if (Il2CppMethodInitialized_0753e4b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b7 = '\x01';
        }
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
          UVar11.fields.z = (pUVar7->oneVector).fields.z * fVar10;
          uVar1 = (pUVar7->oneVector).fields.x;
          uVar2 = (pUVar7->oneVector).fields.y;
          UVar11.fields.x = fVar10 * (float)uVar1;
          UVar11.fields.y = fVar10 * (float)uVar2;
          UnityEngine_Transform__set_localScale(pUVar5,UVar11,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05c9312d:
  ThrowNullReferenceException();
}


// MapEditor.BaseGizmo$$TryGetPointerDown
// il2cpp: bool MapEditor_BaseGizmo__TryGetPointerDown (MapEditor_BaseGizmo_o* __this, Settings_KeybindSetting_o* selectKey, UnityEngine_Vector3_o* position, const MethodInfo* method);
// 0x5c93140

bool MapEditor_BaseGizmo__TryGetPointerDown
               (MapEditor_BaseGizmo_o *__this,Settings_KeybindSetting_o *selectKey,
               UnityEngine_Vector3_o *position,MethodInfo *method)

{
  float fVar1;
  UI_MapEditorMenu_o *pUVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  UnityEngine_Vector3_Fields UVar6;
  
  if (Il2CppMethodInitialized_075479e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
    Il2CppMethodInitialized_075479e7 = '\x01';
    if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) goto label_05c9325f;
label_05c93177:
    bVar4 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor != 0) goto label_05c93177;
label_05c9325f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
    bVar4 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
  }
  if (!bVar4) {
    UVar6 = (UnityEngine_Vector3_Fields)UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    position->fields = UVar6;
    (__this->fields)._PointerPosition_k__BackingField.fields = UVar6;
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
      if ((pUVar2->fields).IsMouseUI != false) {
        return false;
      }
      if (selectKey != (Settings_KeybindSetting_o *)0x0) {
        bVar4 = Settings_KeybindSetting__GetKeyDown(selectKey,false,(MethodInfo *)0x0);
        return bVar4;
      }
    }
label_05c932e8:
    ThrowNullReferenceException();
  }
  if ((((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
  }
  bVar5 = false;
  bVar4 = UI_MobileMapEditorPointer__TryGetGizmoPointerDown(position,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_05c932e8;
    bVar4 = UI_MapEditorMenu__IsTouchUI(pUVar2,(UnityEngine_Vector3_o)position->fields,(MethodInfo *)0x0);
    if (bVar4) {
      if (Il2CppMethodInitialized_075479e9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
        Il2CppMethodInitialized_075479e9 = '\x01';
      }
      if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
      }
      bVar5 = false;
      bVar4 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
        }
        bVar5 = false;
        UI_MobileMapEditorPointer__CancelGizmoPointer((MethodInfo *)0x0);
      }
    }
    else {
      fVar3 = (position->fields).y;
      fVar1 = (position->fields).z;
      (__this->fields)._PointerPosition_k__BackingField.fields.x = (position->fields).x;
      (__this->fields)._PointerPosition_k__BackingField.fields.y = fVar3;
      (__this->fields)._PointerPosition_k__BackingField.fields.z = fVar1;
      bVar5 = true;
    }
  }
  return bVar5;
}


// MapEditor.BaseGizmo$$IsPointerHeld
// il2cpp: bool MapEditor_BaseGizmo__IsPointerHeld (MapEditor_BaseGizmo_o* __this, Settings_KeybindSetting_o* selectKey, UnityEngine_Vector3_o* position, const MethodInfo* method);
// 0x5c93380

bool MapEditor_BaseGizmo__IsPointerHeld
               (MapEditor_BaseGizmo_o *__this,Settings_KeybindSetting_o *selectKey,
               UnityEngine_Vector3_o *position,MethodInfo *method)

{
  float fVar1;
  uint32_t uVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_Vector3_Fields UVar5;
  
  if (Il2CppMethodInitialized_075479e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
    Il2CppMethodInitialized_075479e8 = '\x01';
    uVar2 = (TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
    bVar4 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
  }
  else {
    bVar4 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
  }
  if (bVar4) {
    if ((((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
    }
    bVar4 = UI_MobileMapEditorPointer__TryGetGizmoPointerPosition(position,(MethodInfo *)0x0);
    if (bVar4) {
      fVar3 = (position->fields).y;
      fVar1 = (position->fields).z;
      (__this->fields)._PointerPosition_k__BackingField.fields.x = (position->fields).x;
      (__this->fields)._PointerPosition_k__BackingField.fields.y = fVar3;
      (__this->fields)._PointerPosition_k__BackingField.fields.z = fVar1;
    }
    return bVar4;
  }
  UVar5 = (UnityEngine_Vector3_Fields)UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  position->fields = UVar5;
  (__this->fields)._PointerPosition_k__BackingField.fields = UVar5;
  if (selectKey == (Settings_KeybindSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar4 = Settings_KeybindSetting__GetKey(selectKey,false,(MethodInfo *)0x0);
  return bVar4;
}


// MapEditor.BaseGizmo$$CancelPointer
// il2cpp: void MapEditor_BaseGizmo__CancelPointer (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x5c932f0

void MapEditor_BaseGizmo__CancelPointer(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075479e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileMapEditorPointer);
    Il2CppMethodInitialized_075479e9 = '\x01';
    uVar1 = (TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileMapEditorPointer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
    bVar2 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
  }
  else {
    bVar2 = UI_MobileMapEditorPointer__get_Enabled((MethodInfo *)0x0);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileMapEditorPointer);
      UI_MobileMapEditorPointer__CancelGizmoPointer((MethodInfo *)0x0);
      return;
    }
    UI_MobileMapEditorPointer__CancelGizmoPointer((MethodInfo *)0x0);
    return;
  }
  return;
}


// MapEditor.BaseGizmo$$OnSelectionChange
// il2cpp: void MapEditor_BaseGizmo__OnSelectionChange (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x5c93490

void MapEditor_BaseGizmo__OnSelectionChange(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  return;
}


// MapEditor.BaseGizmo$$HasSelectedAncestor
// il2cpp: bool MapEditor_BaseGizmo__HasSelectedAncestor (Map_MapObject_o* obj, System_Collections_Generic_HashSet_int__o* selectedIds, const MethodInfo* method);
// 0x5c934a0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9355f: lea r15, [rip + 0x15fdd9a]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x5c93566: lea r12, [rip + 0x15e7423]  ; TypeInfo_Map_MapLoader
// asm:   0x5c9356d: lea r13, [rip + 0x15f6a6c]  ; MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
// asm:   0x5c93574: nop word ptr cs:[rax + rax]
// asm:   0x5c93637: jmp 0x5c93690

bool MapEditor_BaseGizmo__HasSelectedAncestor
               (Map_MapObject_o *obj,System_Collections_Generic_HashSet_int__o *selectedIds,MethodInfo *method
               )

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_HashSet_int__o *__this;
  Map_MapObject_o *pMVar3;
  int item;
  
  if (Il2CppMethodInitialized_075479ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479ea = '\x01';
  }
  if (obj == (Map_MapObject_o *)0x0) {
label_05c936a5:
    ThrowNullReferenceException();
  }
  item = (obj->fields).Parent;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (0 < item) {
    if (__this == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05c936a5;
    if (selectedIds == (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_int___Add
                        (__this,item,
                         (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      if (bVar2) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if ((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
           (bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                              (pSVar1,item,
                               (MethodInfo_4A0F950 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey),
           bVar2)) goto label_05c936a5;
      }
    }
    else {
      do {
        bVar2 = System_Collections_Generic_HashSet_int___Add
                          (__this,item,
                           (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        if (!bVar2) {
          return false;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05c936a5;
        bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar1,item,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (!bVar2) {
          return false;
        }
        bVar2 = System_Collections_Generic_HashSet_int___Contains
                          (selectedIds,item,
                           (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        if (bVar2) {
          return true;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if ((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
           (pMVar3 = System_Collections_Generic_Dictionary_int__object___get_Item
                               (pSVar1,item,
                                (MethodInfo_4A0F690 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
           pMVar3 == (Map_MapObject_o *)0x0)) goto label_05c936a5;
        item = (pMVar3->fields).Parent;
      } while (0 < item);
    }
  }
  return false;
}


// MapEditor.BaseGizmo$$.ctor
// il2cpp: void MapEditor_BaseGizmo___ctor (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x5c936b0

void MapEditor_BaseGizmo___ctor(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


