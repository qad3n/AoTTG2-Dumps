// Type: MapEditor.BaseGizmo
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/MapEditor/BaseGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/BaseGizmo.cs
// --------------------------------

// MapEditor.BaseGizmo$$IsActive
// il2cpp: bool MapEditor_BaseGizmo__IsActive (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x180668280

bool
MapEditor_BaseGizmo__IsActive(MapEditor_BaseGizmo_o* __this, MethodInfo* method)

{
  return false;
}


// MapEditor.BaseGizmo$$Awake
// il2cpp: void MapEditor_BaseGizmo__Awake (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x1821ecd60

void MapEditor_BaseGizmo__Awake(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *value;
  UI_MapEditorMenu_o *value_00;
  UnityEngine_Transform_o *value_01;
  
  if (Il2CppMethodInitialized_184347020 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347020 = '\x01';
  }
  value = (GameManagers_MapEditorGameManager_o *)
          TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (value == (GameManagers_MapEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)value->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)value->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields)._gameManager = value;
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)value->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)value->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,value);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  value_00 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (value_00 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    (__this->fields)._menu = value_00;
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)value_00->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,value_00);
  value_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._transform = value_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._transform,value_01);
  return;
}


// MapEditor.BaseGizmo$$Update
// il2cpp: void MapEditor_BaseGizmo__Update (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x1821ed0e0

void MapEditor_BaseGizmo__Update(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Cameras_BaseCamera_o *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Camera_o *pUVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  bool bVar11;
  int32_t iVar12;
  UnityEngine_Vector3_o *pUVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_Fields local_78 [9];
  
  if (Il2CppMethodInitialized_184347021 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184347021 = '\x01';
  }
  pCVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (((pCVar6 != (Cameras_BaseCamera_o *)0x0) &&
      (pUVar7 = (pCVar6->fields).Cache, pUVar7 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    pUVar13 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_78,pUVar8,(MethodInfo *)0x0);
    pUVar8 = (__this->fields)._transform;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      fVar16 = (pUVar13->fields).x;
      fVar15 = (pUVar13->fields).y;
      fVar17 = (pUVar13->fields).z;
      pUVar13 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)local_78,pUVar8,(MethodInfo *)0x0);
      fVar1 = (pUVar13->fields).x;
      fVar2 = (pUVar13->fields).y;
      fVar3 = (pUVar13->fields).z;
      if (Il2CppMethodInitialized_18433dee7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433dee7 = '\x01';
      }
      fVar16 = fVar16 - fVar1;
      fVar15 = fVar15 - fVar2;
      fVar17 = fVar17 - fVar3;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar14 = (double)(fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17);
      if (dVar14 < 0.0) {
        dVar14 = sqrt(dVar14);
      }
      else {
        dVar14 = SQRT(dVar14);
      }
      fVar16 = (float)dVar14 / 200.0;
      pCVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if ((pCVar6 != (Cameras_BaseCamera_o *)0x0) &&
         (pUVar9 = (pCVar6->fields).Camera, pUVar9 != (UnityEngine_Camera_o *)0x0)) {
        bVar11 = UnityEngine_Camera__get_orthographic(pUVar9,(MethodInfo *)0x0);
        if (bVar11) {
          pCVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
          if ((pCVar6 == (Cameras_BaseCamera_o *)0x0) ||
             (pUVar9 = (pCVar6->fields).Camera, pUVar9 == (UnityEngine_Camera_o *)0x0)) goto label_1821ed342;
          fVar16 = UnityEngine_Camera__get_orthographicSize(pUVar9,(MethodInfo *)0x0);
          iVar12 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          fVar16 = (fVar16 * 10.0) / (float)iVar12;
        }
        pUVar8 = (__this->fields)._transform;
        if (Il2CppMethodInitialized_18433dbeb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbeb = '\x01';
        }
        pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar4 = (pUVar10->oneVector).fields.x;
        uVar5 = (pUVar10->oneVector).fields.y;
        local_78[0].x = (float)uVar4 * fVar16;
        local_78[0].y = (float)uVar5 * fVar16;
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          local_78[0].z = fVar16 * (pUVar10->oneVector).fields.z;
          UnityEngine_Transform__set_localScale(pUVar8,(UnityEngine_Vector3_o *)local_78,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1821ed342:
  ThrowNullReferenceException();
}


// MapEditor.BaseGizmo$$OnSelectionChange
// il2cpp: void MapEditor_BaseGizmo__OnSelectionChange (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x180547020

void
MapEditor_BaseGizmo__OnSelectionChange(MapEditor_BaseGizmo_o* __this, MethodInfo* method)

{
  return;
}


// MapEditor.BaseGizmo$$HasSelectedAncestor
// il2cpp: bool MapEditor_BaseGizmo__HasSelectedAncestor (Map_MapObject_o* obj, System_Collections_Generic_HashSet_int__o* selectedIds, const MethodInfo* method);
// 0x1821ecf20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ecfd9: nop dword ptr [rax]

bool MapEditor_BaseGizmo__HasSelectedAncestor
               (Map_MapObject_o *obj,System_Collections_Generic_HashSet_int__o *selectedIds,MethodInfo *method
               )

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_HashSet_int__o *__this;
  uint64_t uVar3;
  int item;
  
  if (Il2CppMethodInitialized_184347022 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347022 = '\x01';
  }
  if (obj == (Map_MapObject_o *)0x0) {
label_1821ed0cb:
    ThrowNullReferenceException();
  }
  item = (obj->fields).Parent;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (0 < item) {
    if (__this == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1821ed0cb;
    do {
      bVar2 = System_Collections_Generic_HashSet_int___Add
                        (__this,item,
                         (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      if (!bVar2) {
        return false;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1821ed0cb;
      bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,item,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar2) {
        return false;
      }
      if (selectedIds == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1821ed0cb;
      bVar2 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)selectedIds,item,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar2) {
        return true;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if ((pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
         (uVar3 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                            (pSVar1,item,
                             (MethodInfo_14156F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
         uVar3 == 0)) goto label_1821ed0cb;
      item = *(int *)(uVar3 + 0x10);
    } while (0 < item);
  }
  return false;
}


// MapEditor.BaseGizmo$$.ctor
// il2cpp: void MapEditor_BaseGizmo___ctor (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x180528540

void
MapEditor_BaseGizmo___ctor(MapEditor_BaseGizmo_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


