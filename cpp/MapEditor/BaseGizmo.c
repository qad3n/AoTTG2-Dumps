// Type: MapEditor.BaseGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/BaseGizmo.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Gizmos/BaseGizmo.cs  [CHANGED since prior version]
// --------------------------------

// MapEditor.BaseGizmo$$IsActive
// il2cpp: bool MapEditor_BaseGizmo__IsActive (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x40476c0

bool_conflict MapEditor_BaseGizmo__IsActive(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  return 0;
}


// MapEditor.BaseGizmo$$Awake
// il2cpp: void MapEditor_BaseGizmo__Awake (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x40476d0

void MapEditor_BaseGizmo__Awake(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  Il2CppClass *pIVar3;
  UI_MapEditorMenu_o *pUVar4;
  
  if (DAT_057043f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057043f2 = '\x01';
  }
  pIVar3 = TypeInfo_MapEditorGameManager;
  pUVar4 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pUVar4 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if (((((GameManagers_MapEditorGameManager_c *)pUVar4->klass)->_2).naturalAligment < bVar1) ||
       ((((GameManagers_MapEditorGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1]
        != TypeInfo_MapEditorGameManager)) goto LAB_0404785c;
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar4;
    if (((((GameManagers_MapEditorGameManager_c *)pUVar4->klass)->_2).naturalAligment < bVar1) ||
       ((((GameManagers_MapEditorGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1]
        != pIVar3)) goto LAB_0404785c;
  }
  il2cpp_runtime_glue(&(__this->fields)._gameManager);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar4 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    pIVar3 = TypeInfo_MapEditorMenu;
  }
  else {
    pUVar4 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    pIVar3 = TypeInfo_MapEditorMenu;
  }
  TypeInfo_MapEditorMenu = pIVar3;
  if (pUVar4 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
LAB_04047833:
    il2cpp_runtime_glue(&(__this->fields)._menu);
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._transform = pUVar2;
    il2cpp_runtime_glue(&(__this->fields)._transform,pUVar2);
    return;
  }
  bVar1 = (pIVar3->_2).naturalAligment;
  if ((bVar1 <= (((GameManagers_MapEditorGameManager_c *)pUVar4->klass)->_2).naturalAligment) &&
     ((((GameManagers_MapEditorGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1]
      == pIVar3)) {
    (__this->fields)._menu = pUVar4;
    if ((bVar1 <= (((GameManagers_MapEditorGameManager_c *)pUVar4->klass)->_2).naturalAligment) &&
       ((((GameManagers_MapEditorGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1]
        == pIVar3)) goto LAB_04047833;
  }
LAB_0404785c:
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pUVar4,pIVar3);
}


// MapEditor.BaseGizmo$$Update
// il2cpp: void MapEditor_BaseGizmo__Update (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x4047870

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
  
  if (DAT_057043f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057043f3 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10), pUVar3 != (UnityEngine_Transform_o *)0x0
     )) {
    UVar8 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._transform;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
      }
      local_48 = UVar8.fields.x;
      fStack_44 = UVar8.fields.y;
      local_48 = local_48 - UVar9.fields.x;
      fStack_44 = fStack_44 - UVar9.fields.y;
      fVar7 = UVar8.fields.z - UVar9.fields.z;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
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
         (pUVar4 = *(UnityEngine_Camera_o **)(lVar2 + 0x20), pUVar4 != (UnityEngine_Camera_o *)0x0))
      {
        bVar5 = UnityEngine_Camera__get_orthographic(pUVar4,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          fVar7 = fVar7 / 200.0;
          pUVar3 = (__this->fields)._transform;
        }
        else {
          lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if ((lVar2 == 0) ||
             (pUVar4 = *(UnityEngine_Camera_o **)(lVar2 + 0x20),
             pUVar4 == (UnityEngine_Camera_o *)0x0)) goto LAB_04047aab;
          fVar7 = UnityEngine_Camera__get_orthographicSize(pUVar4,(MethodInfo *)0x0);
          iVar6 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          fVar7 = (fVar7 * 10.0) / (float)iVar6;
          pUVar3 = (__this->fields)._transform;
        }
        if (DAT_056fe077 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fe077 = '\x01';
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
LAB_04047aab:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.BaseGizmo$$OnSelectionChange
// il2cpp: void MapEditor_BaseGizmo__OnSelectionChange (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x4047ab0

void MapEditor_BaseGizmo__OnSelectionChange(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  return;
}


// MapEditor.BaseGizmo$$.ctor
// il2cpp: void MapEditor_BaseGizmo___ctor (MapEditor_BaseGizmo_o* __this, const MethodInfo* method);
// 0x4047ac0

void MapEditor_BaseGizmo___ctor(MapEditor_BaseGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


