// Type: MapEditor.BaseGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/BaseGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/BaseGizmo.cs
// --------------------------------

// MapEditor.BaseGizmo$$IsActive
// il2cpp: bool MapEditor_BaseGizmo__IsActive (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x433c640

bool_conflict MapEditor_BaseGizmo__IsActive(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  return 0;
}


// MapEditor.BaseGizmo$$Awake
// il2cpp: void MapEditor_BaseGizmo__Awake (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x433c650

void MapEditor_BaseGizmo__Awake(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  UI_TooltipPopup_o *pUVar4;
  UnityEngine_Camera_o *pUVar5;
  Il2CppClass *pIVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  UnityEngine_Transform_o *pUVar9;
  UI_MapEditorMenu_o *pUVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  float fStack_60;
  float fStack_5c;
  
  if (g_data_057ae0b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae0b8 = '\x01';
  }
  pIVar6 = TypeInfo_MapEditorGameManager;
  pUVar10 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pUVar10 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
label_0433c71a:
    il2cpp_runtime_helper_022b4080(&(__this->fields)._gameManager);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pUVar10 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      pIVar6 = TypeInfo_MapEditorMenu;
    }
    else {
      pUVar10 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      pIVar6 = TypeInfo_MapEditorMenu;
    }
    TypeInfo_MapEditorMenu = pIVar6;
    if (pUVar10 == (UI_MapEditorMenu_o *)0x0) {
      (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
label_0433c7b3:
      il2cpp_runtime_helper_022b4080(&(__this->fields)._menu);
      pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._transform = pUVar9;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._transform,pUVar9);
      return;
    }
    bVar2 = (pIVar6->_2).naturalAligment;
    if ((bVar2 <= (((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).naturalAligment) &&
       ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        pIVar6)) {
      (__this->fields)._menu = pUVar10;
      if ((bVar2 <= (((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).naturalAligment) &&
         ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          pIVar6)) goto label_0433c7b3;
    }
  }
  else {
    bVar2 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if ((bVar2 <= (((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).naturalAligment) &&
       ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        TypeInfo_MapEditorGameManager)) {
      (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar10;
      if ((bVar2 <= (((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).naturalAligment) &&
         ((((GameManagers_MapEditorGameManager_c *)pUVar10->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          pIVar6)) goto label_0433c71a;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae0b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae0b9 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) &&
     (pUVar9 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), pUVar9 != (UnityEngine_Transform_o *)0x0)) {
    UVar12 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
    pUVar4 = (pUVar10->fields).TooltipPopup;
    if (pUVar4 != (UI_TooltipPopup_o *)0x0) {
      UVar13 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
      if (g_data_057a68cb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a68cb = '\x01';
      }
      fStack_60 = UVar12.fields.x;
      fStack_5c = UVar12.fields.y;
      fStack_60 = fStack_60 - UVar13.fields.x;
      fStack_5c = fStack_5c - UVar13.fields.y;
      fVar11 = UVar12.fields.z - UVar13.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar11 = fVar11 * fVar11 + fStack_5c * fStack_5c + fStack_60 * fStack_60;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if ((lVar3 != 0) &&
         (pUVar5 = *(UnityEngine_Camera_o **)(lVar3 + 0x20), pUVar5 != (UnityEngine_Camera_o *)0x0)) {
        bVar7 = UnityEngine_Camera__get_orthographic(pUVar5,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          fVar11 = fVar11 / 200.0;
          pUVar4 = (pUVar10->fields).TooltipPopup;
        }
        else {
          lVar3 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if ((lVar3 == 0) ||
             (pUVar5 = *(UnityEngine_Camera_o **)(lVar3 + 0x20), pUVar5 == (UnityEngine_Camera_o *)0x0))
          goto label_0433ca2b;
          fVar11 = UnityEngine_Camera__get_orthographicSize(pUVar5,(MethodInfo *)0x0);
          iVar8 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          fVar11 = (fVar11 * 10.0) / (float)iVar8;
          pUVar4 = (pUVar10->fields).TooltipPopup;
        }
        if (g_data_057a6932 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6932 = '\x01';
        }
        if (pUVar4 != (UI_TooltipPopup_o *)0x0) {
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          UVar12.fields.x = fVar11 * (float)uVar1;
          UVar12.fields.y = fVar11 * (float)((ulong)uVar1 >> 0x20);
          UVar12.fields.z = fVar11 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar4,UVar12,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0433ca2b:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// MapEditor.BaseGizmo$$Update
// il2cpp: void MapEditor_BaseGizmo__Update (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x433c7f0

void MapEditor_BaseGizmo__Update(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  long lVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Camera_o *pUVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  float local_48;
  float fStack_44;
  
  if (g_data_057ae0b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae0b9 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10), pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    UVar8 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._transform;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      if (g_data_057a68cb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a68cb = '\x01';
      }
      local_48 = UVar8.fields.x;
      fStack_44 = UVar8.fields.y;
      local_48 = local_48 - UVar9.fields.x;
      fStack_44 = fStack_44 - UVar9.fields.y;
      fVar7 = UVar8.fields.z - UVar9.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar7 = fVar7 * fVar7 + fStack_44 * fStack_44 + local_48 * local_48;
      if (fVar7 < 0.0) {
        fVar7 = sqrtf(fVar7);
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if ((lVar2 != 0) &&
         (pUVar4 = *(UnityEngine_Camera_o **)(lVar2 + 0x20), pUVar4 != (UnityEngine_Camera_o *)0x0)) {
        bVar5 = UnityEngine_Camera__get_orthographic(pUVar4,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          fVar7 = fVar7 / 200.0;
          pUVar3 = (__this->fields)._transform;
        }
        else {
          lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if ((lVar2 == 0) ||
             (pUVar4 = *(UnityEngine_Camera_o **)(lVar2 + 0x20), pUVar4 == (UnityEngine_Camera_o *)0x0))
          goto label_0433ca2b;
          fVar7 = UnityEngine_Camera__get_orthographicSize(pUVar4,(MethodInfo *)0x0);
          iVar6 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          fVar7 = (fVar7 * 10.0) / (float)iVar6;
          pUVar3 = (__this->fields)._transform;
        }
        if (g_data_057a6932 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6932 = '\x01';
        }
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          UVar8.fields.x = fVar7 * (float)uVar1;
          UVar8.fields.y = fVar7 * (float)((ulong)uVar1 >> 0x20);
          UVar8.fields.z = fVar7 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
          UnityEngine_Transform__set_localScale(pUVar3,UVar8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0433ca2b:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// MapEditor.BaseGizmo$$OnSelectionChange
// il2cpp: void MapEditor_BaseGizmo__OnSelectionChange (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x433ca30

void MapEditor_BaseGizmo__OnSelectionChange(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  return;
}


// MapEditor.BaseGizmo$$.ctor
// il2cpp: void MapEditor_BaseGizmo___ctor (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x433ca40

void MapEditor_BaseGizmo___ctor(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


