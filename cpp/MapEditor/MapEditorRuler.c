// Type: MapEditor.MapEditorRuler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/MapEditor/MapEditorRuler.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.MapEditorRuler$$get_Measurements
// il2cpp: System_Collections_Generic_IReadOnlyList_RulerMeasurement__o* MapEditor_MapEditorRuler__get_Measurements (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_Collections_Generic_IReadOnlyList_RulerMeasurement__o*
MapEditor_MapEditorRuler__get_Measurements(MapEditor_MapEditorRuler_o* __this, MethodInfo* method)

{
  return (__this->fields)._measurements;
}


// MapEditor.MapEditorRuler$$get_Active
// il2cpp: bool MapEditor_MapEditorRuler__get_Active (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x1821f2dd0

bool MapEditor_MapEditorRuler__get_Active(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  return (__this->fields)._Active_k__BackingField;
}


// MapEditor.MapEditorRuler$$set_Active
// il2cpp: void MapEditor_MapEditorRuler__set_Active (MapEditor_MapEditorRuler_o* __this, bool value, const MethodInfo* method);
// 0x1821f2df0

void MapEditor_MapEditorRuler__set_Active(MapEditor_MapEditorRuler_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._Active_k__BackingField = value;
  return;
}


// MapEditor.MapEditorRuler$$get_IsCreatingMeasurement
// il2cpp: bool MapEditor_MapEditorRuler__get_IsCreatingMeasurement (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x1821f2de0

bool
MapEditor_MapEditorRuler__get_IsCreatingMeasurement(MapEditor_MapEditorRuler_o* __this, MethodInfo* method)

{
  return (__this->fields)._creatingMeasurement;
}


// MapEditor.MapEditorRuler$$SetActive
// il2cpp: void MapEditor_MapEditorRuler__SetActive (MapEditor_MapEditorRuler_o* __this, bool active, UI_MapEditorMenu_o* menu, const MethodInfo* method);
// 0x1821f0fd0

void MapEditor_MapEditorRuler__SetActive
               (MapEditor_MapEditorRuler_o *__this,bool active,UI_MapEditorMenu_o *menu,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  (__this->fields)._menu = menu;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,menu);
  (__this->fields)._Active_k__BackingField = active;
  MapEditor_MapEditorRuler__EnsureRoot(__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._root;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,active,(MethodInfo *)0x0);
    if (!active) {
      MapEditor_MapEditorRuler__CancelInteraction(__this,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$CreateNewMeasurement
// il2cpp: void MapEditor_MapEditorRuler__CreateNewMeasurement (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x1821f0380

void MapEditor_MapEditorRuler__CreateNewMeasurement(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  
  if ((__this->fields)._creatingMeasurement == false) {
    MapEditor_MapEditorRuler__CancelInteraction(__this,(MethodInfo *)0x0);
    (__this->fields)._awaitingFirstPoint = true;
    (__this->fields)._creatingMeasurement = true;
  }
  else {
    MapEditor_MapEditorRuler__CancelInteraction(__this,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._menu;
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    UI_MapEditorMenu__SyncRulerPanel(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// MapEditor.MapEditorRuler$$ChainFrom
// il2cpp: void MapEditor_MapEditorRuler__ChainFrom (MapEditor_MapEditorRuler_o* __this, int32_t index, const MethodInfo* method);
// 0x1821f00e0

void MapEditor_MapEditorRuler__ChainFrom(MapEditor_MapEditorRuler_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_RulerMeasurement__o *pSVar1;
  System_Nullable_Vector3__o *pSVar2;
  MapEditor_RulerMeasurement_o *pMVar3;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28;
  System_Nullable_Vector3__Fields local_18;
  
  if (Il2CppMethodInitialized_184347055 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    Il2CppMethodInitialized_184347055 = '\x01';
  }
  if (-1 < index) {
    pSVar1 = (__this->fields)._measurements;
    if (pSVar1 == (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
      ThrowNullReferenceException();
    }
    if (index < (pSVar1->fields)._size) {
      MapEditor_MapEditorRuler__CancelInteraction(__this,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._measurements;
      if (pSVar1 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
        pMVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
        pUVar4 = MapEditor_MapEditorRuler__FindChainRoot
                           ((UnityEngine_Vector3_o *)&local_28,__this,pMVar3,(MethodInfo *)0x0);
        local_38.z = (pUVar4->fields).z;
        local_38.x = (pUVar4->fields).x;
        local_38.y = (pUVar4->fields).y;
        local_18.hasValue = false;
        local_18._1_3_ = 0;
        local_18.value.fields.x = 0.0;
        local_18.value.fields.y = 0.0;
        local_18.value.fields.z = 0.0;
        System_Nullable_Vector3____ctor
                  ((System_Nullable_Vector3__o *)&local_18,(UnityEngine_Vector3_o *)&local_38,
                   (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
        (__this->fields)._chainRoot.fields.hasValue = local_18.hasValue;
        *(undefined3 *)&(__this->fields)._chainRoot.fields.field_0x1 = local_18._1_3_;
        (__this->fields)._chainRoot.fields.value.fields.x = local_18.value.fields.x;
        pSVar2 = &(__this->fields)._chainRoot;
        (pSVar2->fields).value.fields.y = local_18.value.fields.y;
        (pSVar2->fields).value.fields.z = local_18.value.fields.z;
        if (pMVar3 != (MapEditor_RulerMeasurement_o *)0x0) {
          local_38.x = (pMVar3->fields).End.fields.x;
          local_38.y = (pMVar3->fields).End.fields.y;
          local_38.z = (pMVar3->fields).End.fields.z;
          local_28._0_8_ = local_38._0_8_;
          local_28.z = local_38.z;
          pMVar3 = MapEditor_MapEditorRuler__AddMeasurement
                             (__this,(UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,
                              (pMVar3->fields).Color,(MethodInfo *)0x0);
          (__this->fields)._pending = pMVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,pMVar3);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// MapEditor.MapEditorRuler$$Delete
// il2cpp: void MapEditor_MapEditorRuler__Delete (MapEditor_MapEditorRuler_o* __this, int32_t index, const MethodInfo* method);
// 0x1821f0730

void MapEditor_MapEditorRuler__Delete(MapEditor_MapEditorRuler_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_RulerMeasurement__o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  MapEditor_RulerMeasurement_o *item;
  
  if (Il2CppMethodInitialized_184347056 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347056 = '\x01';
  }
  if (-1 < index) {
    pSVar1 = (__this->fields)._measurements;
    if (pSVar1 == (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
label_1821f0840:
      ThrowNullReferenceException();
    }
    if (index < (pSVar1->fields)._size) {
      item = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,index,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
      if (((__this->fields)._pending == item) || ((__this->fields)._dragging == item)) {
        MapEditor_MapEditorRuler__CancelInteraction(__this,(MethodInfo *)0x0);
      }
      pSVar1 = (__this->fields)._measurements;
      if (pSVar1 == (System_Collections_Generic_List_RulerMeasurement__o *)0x0) goto label_1821f0840;
      bVar3 = System_Collections_Generic_List_object___Remove
                        ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)item,
                         (MethodInfo_947340 *)
                         MethodInfo_System_Collections_Generic_List_RulerMeasurement_Remove);
      if (bVar3) {
        if (item == (MapEditor_RulerMeasurement_o *)0x0) goto label_1821f0840;
        pUVar2 = (UnityEngine_Object_o *)(item->fields).Root;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar2 = (UnityEngine_Object_o *)(item->fields).Root;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// MapEditor.MapEditorRuler$$SetOrigin
// il2cpp: void MapEditor_MapEditorRuler__SetOrigin (MapEditor_MapEditorRuler_o* __this, int32_t index, UnityEngine_Vector3_o origin, const MethodInfo* method);
// 0x1821f13e0

void MapEditor_MapEditorRuler__SetOrigin
               (MapEditor_MapEditorRuler_o *__this,int32_t index,UnityEngine_Vector3_o *origin,
               MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_List_RulerMeasurement__o *pSVar2;
  float fVar3;
  MapEditor_RulerMeasurement_o *pMVar4;
  
  if (Il2CppMethodInitialized_184347057 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    Il2CppMethodInitialized_184347057 = '\x01';
  }
  if (index < 0) {
    return;
  }
  pSVar2 = (__this->fields)._measurements;
  if (pSVar2 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
    if ((pSVar2->fields)._size <= index) {
      return;
    }
    pMVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,index,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    if (pMVar4 != (MapEditor_RulerMeasurement_o *)0x0) {
      fVar1 = (origin->fields).z;
      fVar3 = (origin->fields).y;
      (pMVar4->fields).Origin.fields.x = (origin->fields).x;
      (pMVar4->fields).Origin.fields.y = fVar3;
      (pMVar4->fields).Origin.fields.z = fVar1;
      pSVar2 = (__this->fields)._measurements;
      if (pSVar2 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
        pMVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
        MapEditor_MapEditorRuler__RefreshVisual(__this,pMVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$SetLength
// il2cpp: void MapEditor_MapEditorRuler__SetLength (MapEditor_MapEditorRuler_o* __this, int32_t index, float length, const MethodInfo* method);
// 0x1821f1180

void MapEditor_MapEditorRuler__SetLength
               (MapEditor_MapEditorRuler_o *__this,int32_t index,float length,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar5;
  MapEditor_RulerMeasurement_o *measurement;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_88;
  float local_80;
  
  if (Il2CppMethodInitialized_184347058 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    Il2CppMethodInitialized_184347058 = '\x01';
  }
  local_88 = 0;
  local_80 = 0.0;
  if (-1 < index) {
    __this_00 = (__this->fields)._measurements;
    if (__this_00 == (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
label_1821f13ce:
      ThrowNullReferenceException();
    }
    if (index < (__this_00->fields)._size) {
      measurement = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
      if (measurement == (MapEditor_RulerMeasurement_o *)0x0) goto label_1821f13ce;
      fVar7 = (measurement->fields).End.fields.x - (measurement->fields).Origin.fields.x;
      fVar8 = (measurement->fields).End.fields.y - (measurement->fields).Origin.fields.y;
      fVar9 = (measurement->fields).End.fields.z - (measurement->fields).Origin.fields.z;
      local_88 = CONCAT44(fVar8,fVar7);
      if (fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9 < 0.0001) {
        if (g_data_1843445b8 == '\0') {
          local_80 = fVar9;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          g_data_1843445b8 = '\x01';
        }
        pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
        pUVar1 = &pUVar5->rightVector;
        fVar7 = (pUVar1->fields).x;
        fVar8 = (pUVar5->rightVector).fields.y;
        local_88._0_4_ = (pUVar1->fields).x;
        local_88._4_4_ = (pUVar1->fields).y;
        fVar9 = (pUVar5->rightVector).fields.z;
      }
      fVar2 = (measurement->fields).Origin.fields.x;
      fVar3 = (measurement->fields).Origin.fields.y;
      fVar4 = (measurement->fields).Origin.fields.z;
      local_80 = fVar9;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar6 = (float)il2cpp_runtime_helper_180546a40(&local_88,0);
      if (fVar6 <= 1e-05) {
        pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar7 = (pUVar5->zeroVector).fields.x;
        fVar8 = (pUVar5->zeroVector).fields.y;
        fVar9 = (pUVar5->zeroVector).fields.z;
      }
      else {
        fVar7 = fVar7 / fVar6;
        fVar8 = fVar8 / fVar6;
        fVar9 = fVar9 / fVar6;
      }
      fVar6 = 0.0;
      if (0.0 <= length) {
        fVar6 = length;
      }
      (measurement->fields).End.fields.x = fVar7 * fVar6 + fVar2;
      (measurement->fields).End.fields.y = fVar8 * fVar6 + fVar3;
      (measurement->fields).End.fields.z = fVar9 * fVar6 + fVar4;
      MapEditor_MapEditorRuler__RefreshVisual(__this,measurement,(MethodInfo *)0x0);
    }
  }
  return;
}


// MapEditor.MapEditorRuler$$SetColor
// il2cpp: void MapEditor_MapEditorRuler__SetColor (MapEditor_MapEditorRuler_o* __this, int32_t index, Utility_Color255_o* color, const MethodInfo* method);
// 0x1821f1040

void MapEditor_MapEditorRuler__SetColor
               (MapEditor_MapEditorRuler_o *__this,int32_t index,Utility_Color255_o *color,MethodInfo *method)

{
  int32_t tryStart;
  int32_t tryEnd;
  int32_t finallyStart;
  int32_t finallyEnd;
  System_Collections_Generic_List_RulerMeasurement__o *pSVar1;
  MapEditor_RulerMeasurement_o *pMVar2;
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_184347059 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
    Il2CppMethodInitialized_184347059 = '\x01';
  }
  if (-1 < index) {
    pSVar1 = (__this->fields)._measurements;
    if (pSVar1 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
      if ((pSVar1->fields)._size <= index) {
        return;
      }
      pMVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
      if (color != (Utility_Color255_o *)0x0) {
        tryStart = (color->fields).R;
        tryEnd = (color->fields).G;
        finallyStart = (color->fields).B;
        finallyEnd = (color->fields).A;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
        Utility_Color255___ctor
                  ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this_00,tryStart,tryEnd,
                   finallyStart,finallyEnd,(MethodInfo *)0x0);
        if (pMVar2 != (MapEditor_RulerMeasurement_o *)0x0) {
          (pMVar2->fields).Color = __this_00;
          Il2CppCodeGenWriteBarrier(&(pMVar2->fields).Color,__this_00);
          pSVar1 = (__this->fields)._measurements;
          if (pSVar1 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
            pMVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_RulerMeasurement_get_Item);
            MapEditor_MapEditorRuler__RefreshVisual(__this,pMVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// MapEditor.MapEditorRuler$$Update
// il2cpp: void MapEditor_MapEditorRuler__Update (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x1821f27e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f2a70: jmp 0x1821f2d35
// asm:   0x1821f2d35: xor edx, edx
// asm:   0x1821f2d37: call 0x1822cd960  ; UI_MapEditorMenu__SyncRulerPanel()
// asm:   0x1821f2d3c: jmp 0x1821f2a96

void MapEditor_MapEditorRuler__Update(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  Cameras_BaseCamera_o *pCVar3;
  UnityEngine_Camera_o *pUVar4;
  undefined8 uVar5;
  System_Nullable_Vector3__o *pSVar6;
  undefined8 uVar7;
  bool bVar8;
  Utility_Color255_o *color;
  MapEditor_RulerMeasurement_o *pMVar9;
  UnityEngine_Vector3_o *pUVar10;
  UI_MapEditorMenu_o *pUVar11;
  float fVar12;
  float fVar13;
  System_Nullable_Vector3__Fields local_48;
  System_Nullable_Vector3__Fields local_38;
  System_Nullable_Vector3__Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434705a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_18434705a = '\x01';
  }
  local_28[0].hasValue = false;
  local_28[0]._1_3_ = 0;
  local_28[0].value.fields.x = 0.0;
  local_28[0].value.fields.y = 0.0;
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value.fields.x = 0.0;
  local_38.value.fields.y = 0.0;
  local_48.hasValue = false;
  local_48._1_3_ = 0;
  local_48.value.fields.x = 0.0;
  local_48.value.fields._4_8_ = (ulonglong)(uint)local_48.value.fields.z << 0x20;
  if ((__this->fields)._Active_k__BackingField == false) {
    return;
  }
  pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return;
  }
  pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar3 != (Cameras_BaseCamera_o *)0x0) {
    pUVar4 = (pCVar3->fields).Camera;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
    MapEditor_MapEditorRuler__UpdateVisualScale(__this,(MethodInfo *)0x0);
    pUVar11 = (__this->fields)._menu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
    pUVar11 = (__this->fields)._menu;
    if (pUVar11 == (UI_MapEditorMenu_o *)0x0) goto label_1821f2d41;
    bVar8 = UI_MapEditorMenu__IsPopupActive(pUVar11,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
    pUVar11 = (__this->fields)._menu;
    if (pUVar11 == (UI_MapEditorMenu_o *)0x0) goto label_1821f2d41;
    if ((pUVar11->fields).IsMouseUI != false) {
      return;
    }
    pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (pCVar3 == (Cameras_BaseCamera_o *)0x0) goto label_1821f2d41;
    pUVar4 = (pCVar3->fields).Camera;
    if ((__this->fields)._pending == (MapEditor_RulerMeasurement_o *)0x0) {
      if (((__this->fields)._awaitingFirstPoint != false) &&
         (bVar8 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0), bVar8)) {
        bVar8 = MapEditor_MapEditorRuler__TryGetPlacementPoint
                          (pUVar4,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
        if (!bVar8) {
          return;
        }
        color = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
        Utility_Color255___ctor
                  ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)color,0xff,0xd2,0x28,0xff,
                   (MethodInfo *)0x0);
        fVar2 = local_38.value.fields.y;
        uVar5 = local_38._0_8_;
        local_28[0].hasValue = local_38.hasValue;
        local_28[0]._1_3_ = local_38._1_3_;
        local_28[0].value.fields.x = local_38.value.fields.x;
        local_28[0].value.fields.y = local_38.value.fields.y;
        pMVar9 = MapEditor_MapEditorRuler__AddMeasurement
                           (__this,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)local_28,color,
                            (MethodInfo *)0x0);
        (__this->fields)._pending = pMVar9;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,pMVar9);
        uVar7 = local_38._0_8_;
        local_38.hasValue = SUB81(uVar5,0);
        local_38._1_3_ = SUB83(uVar5,1);
        local_38.value.fields.x = SUB84(uVar5,4);
        local_28[0].hasValue = local_38.hasValue;
        local_28[0]._1_3_ = local_38._1_3_;
        local_28[0].value.fields.x = local_38.value.fields.x;
        local_28[0].value.fields.y = fVar2;
        local_48.hasValue = false;
        local_48._1_3_ = 0;
        local_48.value.fields.x = 0.0;
        local_48.value.fields.y = 0.0;
        local_48.value.fields.z = 0.0;
        local_38._0_8_ = uVar7;
        System_Nullable_Vector3____ctor
                  ((System_Nullable_Vector3__o *)&local_48,(UnityEngine_Vector3_o *)local_28,
                   (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
        pUVar11 = (__this->fields)._menu;
        (__this->fields)._awaitingFirstPoint = false;
        (__this->fields)._chainRoot.fields.hasValue = local_48.hasValue;
        *(undefined3 *)&(__this->fields)._chainRoot.fields.field_0x1 = local_48._1_3_;
        (__this->fields)._chainRoot.fields.value.fields.x = local_48.value.fields.x;
        pSVar6 = &(__this->fields)._chainRoot;
        (pSVar6->fields).value.fields.y = local_48.value.fields.y;
        (pSVar6->fields).value.fields.z = local_48.value.fields.z;
        if (pUVar11 == (UI_MapEditorMenu_o *)0x0) {
          ThrowNullReferenceException();
        }
        goto label_1821f2d35;
      }
      if ((__this->fields)._dragging == (MapEditor_RulerMeasurement_o *)0x0) {
        bVar8 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
        if (!bVar8) {
          return;
        }
        MapEditor_MapEditorRuler__TryBeginHandleDrag(__this,pUVar4,(MethodInfo *)0x0);
        return;
      }
      bVar8 = UnityEngine_Input__GetMouseButton(0,(MethodInfo *)0x0);
      if ((bVar8) &&
         (bVar8 = MapEditor_MapEditorRuler__TryGetPlacementPoint
                            (pUVar4,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0), bVar8)) {
        pMVar9 = (__this->fields)._dragging;
        if (pMVar9 == (MapEditor_RulerMeasurement_o *)0x0) goto label_1821f2d41;
        local_28[0].hasValue = local_48.hasValue;
        local_28[0]._1_3_ = local_48._1_3_;
        local_28[0].value.fields.x = local_48.value.fields.x;
        local_28[0].value.fields.y = local_48.value.fields.y;
        if ((__this->fields)._dragOrigin == false) {
          local_38._0_8_ = *(undefined8 *)&(pMVar9->fields).Origin.fields;
          local_38.value.fields.y = (pMVar9->fields).Origin.fields.z;
          pUVar10 = MapEditor_MapEditorRuler__ApplyPlacementConstraints
                              ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_38,
                               (UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
          fVar12 = (pUVar10->fields).y;
          fVar2 = (pUVar10->fields).z;
          (pMVar9->fields).End.fields.x = (pUVar10->fields).x;
          (pMVar9->fields).End.fields.y = fVar12;
          (pMVar9->fields).End.fields.z = fVar2;
        }
        else {
          local_38._0_8_ = *(undefined8 *)&(pMVar9->fields).End.fields;
          local_38.value.fields.y = (pMVar9->fields).End.fields.z;
          pUVar10 = MapEditor_MapEditorRuler__ApplyPlacementConstraints
                              ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_38,
                               (UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
          fVar12 = (pUVar10->fields).y;
          fVar2 = (pUVar10->fields).z;
          (pMVar9->fields).Origin.fields.x = (pUVar10->fields).x;
          (pMVar9->fields).Origin.fields.y = fVar12;
          (pMVar9->fields).Origin.fields.z = fVar2;
        }
        MapEditor_MapEditorRuler__RefreshVisual(__this,(__this->fields)._dragging,(MethodInfo *)0x0);
      }
      bVar8 = UnityEngine_Input__GetMouseButtonUp(0,(MethodInfo *)0x0);
      if (!bVar8) {
        return;
      }
      (__this->fields)._dragging = (MapEditor_RulerMeasurement_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._dragging,(void *)0x0);
    }
    else {
      bVar8 = MapEditor_MapEditorRuler__TryGetPlacementPoint
                        (pUVar4,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      if (bVar8) {
        pMVar9 = (__this->fields)._pending;
        if (pMVar9 == (MapEditor_RulerMeasurement_o *)0x0) goto label_1821f2d41;
        local_38.hasValue = local_28[0].hasValue;
        local_38._1_3_ = local_28[0]._1_3_;
        local_38.value.fields.x = local_28[0].value.fields.x;
        local_28[0]._0_8_ = *(undefined8 *)&(pMVar9->fields).Origin.fields;
        local_38.value.fields.y = local_28[0].value.fields.y;
        local_28[0].value.fields.y = (pMVar9->fields).Origin.fields.z;
        pUVar10 = MapEditor_MapEditorRuler__ApplyPlacementConstraints
                            ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)local_28,
                             (UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
        pMVar9 = (__this->fields)._pending;
        uVar1 = (pUVar10->fields).x;
        fVar2 = (pUVar10->fields).y;
        fVar12 = (pUVar10->fields).z;
        if (Il2CppMethodInitialized_184347063 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_Value);
          Il2CppMethodInitialized_184347063 = '\x01';
        }
        if ((__this->fields)._chainRoot.fields.hasValue != false) {
          System_Nullable_Vector3___get_Value
                    ((UnityEngine_Vector3_o *)local_28,&(__this->fields)._chainRoot,
                     (MethodInfo_AE2C50 *)MethodInfo_System_Nullable_Vector3_get_Value);
          if (pUVar4 == (UnityEngine_Camera_o *)0x0) goto label_1821f2d41;
          local_38.hasValue = local_28[0].hasValue;
          local_38._1_3_ = local_28[0]._1_3_;
          local_38.value.fields.x = local_28[0].value.fields.x;
          local_38.value.fields.y = local_28[0].value.fields.y;
          pUVar10 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                              ((UnityEngine_Vector3_o *)&local_48,pUVar4,(UnityEngine_Vector3_o *)&local_38,
                               (MethodInfo *)0x0);
          local_28[0]._0_8_ = *(undefined8 *)&pUVar10->fields;
          if (0.0 < (pUVar10->fields).z) {
            pUVar10 = UnityEngine_Input__get_mousePosition
                                ((UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
            uVar5._0_4_ = (pUVar10->fields).x;
            uVar5._4_4_ = (pUVar10->fields).y;
            fVar13 = (float)il2cpp_runtime_helper_180546870(uVar5,local_28[0]._0_8_);
            if (fVar13 <= 22.0) {
              System_Nullable_Vector3___get_Value
                        ((UnityEngine_Vector3_o *)local_28,&(__this->fields)._chainRoot,
                         (MethodInfo_AE2C50 *)MethodInfo_System_Nullable_Vector3_get_Value);
              uVar1 = (undefined4)local_28[0]._0_8_;
              fVar2 = SUB84(local_28[0]._0_8_,4);
              fVar12 = local_28[0].value.fields.y;
            }
          }
        }
        if (pMVar9 == (MapEditor_RulerMeasurement_o *)0x0) goto label_1821f2d41;
        (pMVar9->fields).End.fields.x = (float)uVar1;
        (pMVar9->fields).End.fields.y = fVar2;
        (pMVar9->fields).End.fields.z = fVar12;
        MapEditor_MapEditorRuler__RefreshVisual(__this,(__this->fields)._pending,(MethodInfo *)0x0);
      }
      bVar8 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
      if (!bVar8) {
        return;
      }
      (__this->fields)._pending = (MapEditor_RulerMeasurement_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,(void *)0x0);
      (__this->fields)._chainRoot.fields.hasValue = false;
      *(undefined3 *)&(__this->fields)._chainRoot.fields.field_0x1 = 0;
      (__this->fields)._chainRoot.fields.value.fields.x = 0.0;
      pSVar6 = &(__this->fields)._chainRoot;
      (pSVar6->fields).value.fields.y = 0.0;
      (pSVar6->fields).value.fields.z = 0.0;
      (__this->fields)._creatingMeasurement = false;
    }
    pUVar11 = (__this->fields)._menu;
    if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
label_1821f2d35:
      UI_MapEditorMenu__SyncRulerPanel(pUVar11,(MethodInfo *)0x0);
      return;
    }
  }
label_1821f2d41:
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$AddMeasurement
// il2cpp: MapEditor_RulerMeasurement_o* MapEditor_MapEditorRuler__AddMeasurement (MapEditor_MapEditorRuler_o* __this, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o end, Utility_Color255_o* color, const MethodInfo* method);
// 0x1821efac0

MapEditor_RulerMeasurement_o *
MapEditor_MapEditorRuler__AddMeasurement
          (MapEditor_MapEditorRuler_o *__this,UnityEngine_Vector3_o *origin,UnityEngine_Vector3_o *end,
          Utility_Color255_o *color,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  int32_t tryEnd;
  int32_t finallyStart;
  int32_t finallyEnd;
  int32_t tryStart;
  uint uVar3;
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  MapEditor_RulerMeasurement_array *pMVar4;
  float fVar5;
  float fVar6;
  MethodInfo *pMVar7;
  MapEditor_RulerMeasurement_o *measurement;
  Utility_Color255_o *pUVar8;
  
  if (Il2CppMethodInitialized_18434705b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_RulerMeasurement);
    Il2CppMethodInitialized_18434705b = '\x01';
  }
  MapEditor_MapEditorRuler__EnsureRoot(__this,(MethodInfo *)0x0);
  measurement = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_RulerMeasurement);
  if (Il2CppMethodInitialized_184347054 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184347054 = '\x01';
  }
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar8,0xff,0xd2,0x28,0xff,
             (MethodInfo *)0x0);
  (measurement->fields).Color = pUVar8;
  Il2CppCodeGenWriteBarrier(&(measurement->fields).Color,pUVar8);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)measurement,(MethodInfo *)0x0);
  fVar5 = (origin->fields).y;
  fVar2 = (origin->fields).z;
  (measurement->fields).Origin.fields.x = (origin->fields).x;
  (measurement->fields).Origin.fields.y = fVar5;
  fVar5 = (end->fields).x;
  fVar6 = (end->fields).y;
  (measurement->fields).Origin.fields.z = fVar2;
  fVar2 = (end->fields).z;
  (measurement->fields).End.fields.x = fVar5;
  (measurement->fields).End.fields.y = fVar6;
  (measurement->fields).End.fields.z = fVar2;
  if (color != (Utility_Color255_o *)0x0) {
    tryEnd = (color->fields).G;
    finallyStart = (color->fields).B;
    finallyEnd = (color->fields).A;
    tryStart = (color->fields).R;
    pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor
              ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar8,tryStart,tryEnd,finallyStart,
               finallyEnd,(MethodInfo *)0x0);
    (measurement->fields).Color = pUVar8;
    Il2CppCodeGenWriteBarrier(&(measurement->fields).Color,pUVar8);
    MapEditor_MapEditorRuler__CreateVisual(__this,measurement,(MethodInfo *)0x0);
    pMVar7 = MethodInfo_System_Collections_Generic_List_RulerMeasurement_Add;
    __this_00 = (__this->fields)._measurements;
    if (__this_00 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pMVar4 = (__this_00->fields)._items;
      if (pMVar4 != (MapEditor_RulerMeasurement_array *)0x0) {
        uVar3 = (__this_00->fields)._size;
        if ((uint)pMVar4->max_length <= uVar3) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)measurement,
                     (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
          return measurement;
        }
        (__this_00->fields)._size = uVar3 + 1;
        if (uVar3 < (uint)pMVar4->max_length) {
          pMVar4->m_Items[(int)uVar3] = measurement;
          Il2CppCodeGenWriteBarrier(pMVar4->m_Items + (int)uVar3,measurement);
          return measurement;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$CreateVisual
// il2cpp: void MapEditor_MapEditorRuler__CreateVisual (MapEditor_MapEditorRuler_o* __this, MapEditor_RulerMeasurement_o* measurement, const MethodInfo* method);
// 0x1821f03c0

void MapEditor_MapEditorRuler__CreateVisual
               (MapEditor_MapEditorRuler_o *__this,MapEditor_RulerMeasurement_o *measurement,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_LineRenderer_o *pUVar4;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_02;
  UnityEngine_TextMesh_o *pUVar5;
  
  if (Il2CppMethodInitialized_18434705c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TextMesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&"Origin");
    il2cpp_codegen_initialize_runtime_metadata(&"LengthLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"End");
    il2cpp_codegen_initialize_runtime_metadata(&"RulerMeasurement");
    Il2CppMethodInitialized_18434705c = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(pUVar1,"RulerMeasurement",(MethodInfo *)0x0);
  if (measurement != (MapEditor_RulerMeasurement_o *)0x0) {
    (measurement->fields).Root = pUVar1;
    Il2CppCodeGenWriteBarrier(&(measurement->fields).Root,pUVar1);
    pUVar1 = (measurement->fields).Root;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._root;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,pUVar3,false,(MethodInfo *)0x0);
          pUVar1 = (measurement->fields).Root;
          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar1,(MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
            (measurement->fields).Line = pUVar4;
            Il2CppCodeGenWriteBarrier(&(measurement->fields).Line,pUVar4);
            pUVar4 = (measurement->fields).Line;
            if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
              UnityEngine_LineRenderer__set_useWorldSpace(pUVar4,true,(MethodInfo *)0x0);
              pUVar4 = (measurement->fields).Line;
              if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
                UnityEngine_LineRenderer__set_positionCount(pUVar4,2,(MethodInfo *)0x0);
                pUVar4 = (measurement->fields).Line;
                if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
                  UnityEngine_LineRenderer__set_widthMultiplier(pUVar4,0.12,(MethodInfo *)0x0);
                  pUVar4 = (measurement->fields).Line;
                  if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
                    UnityEngine_LineRenderer__set_numCapVertices(pUVar4,4,(MethodInfo *)0x0);
                    __this_00 = (UnityEngine_Renderer_o *)(measurement->fields).Line;
                    shader = MapEditor_MapEditorRuler__GetVisualShader((MethodInfo *)0x0);
                    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
                    UnityEngine_Material___ctor(__this_02,shader,(MethodInfo *)0x0);
                    if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
                      UnityEngine_Renderer__set_sharedMaterial(__this_00,__this_02,(MethodInfo *)0x0);
                      pUVar1 = (measurement->fields).Root;
                      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                        pUVar2 = MapEditor_MapEditorRuler__CreateHandle
                                           (pUVar2,"Origin",3,(MethodInfo *)0x0);
                        (measurement->fields).OriginHandle = pUVar2;
                        Il2CppCodeGenWriteBarrier(&(measurement->fields).OriginHandle,pUVar2);
                        pUVar1 = (measurement->fields).Root;
                        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                          pUVar2 = MapEditor_MapEditorRuler__CreateHandle
                                             (pUVar2,"End",0,(MethodInfo *)0x0);
                          (measurement->fields).EndHandle = pUVar2;
                          Il2CppCodeGenWriteBarrier(&(measurement->fields).EndHandle,pUVar2);
                          pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                          UnityEngine_GameObject___ctor(pUVar1,"LengthLabel",(MethodInfo *)0x0);
                          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                            __this_01 = (measurement->fields).Root;
                            if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar3 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                UnityEngine_Transform__SetParent_2f5a7e0
                                          (pUVar2,pUVar3,false,(MethodInfo *)0x0);
                                pUVar5 = UnityEngine_GameObject__AddComponent_object_
                                                   (pUVar1,(MethodInfo_6F4D60 *)
                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_TextMesh
                                                   );
                                (measurement->fields).Label = pUVar5;
                                Il2CppCodeGenWriteBarrier(&(measurement->fields).Label,pUVar5);
                                pUVar5 = (measurement->fields).Label;
                                if (pUVar5 != (UnityEngine_TextMesh_o *)0x0) {
                                  UnityEngine_TextMesh__set_anchor(pUVar5,4,(MethodInfo *)0x0);
                                  pUVar5 = (measurement->fields).Label;
                                  if (pUVar5 != (UnityEngine_TextMesh_o *)0x0) {
                                    UnityEngine_TextMesh__set_alignment(pUVar5,1,(MethodInfo *)0x0);
                                    pUVar5 = (measurement->fields).Label;
                                    if (pUVar5 != (UnityEngine_TextMesh_o *)0x0) {
                                      UnityEngine_TextMesh__set_fontSize(pUVar5,0x30,(MethodInfo *)0x0);
                                      pUVar5 = (measurement->fields).Label;
                                      if (pUVar5 != (UnityEngine_TextMesh_o *)0x0) {
                                        UnityEngine_TextMesh__set_characterSize(pUVar5,0.1,(MethodInfo *)0x0);
                                        MapEditor_MapEditorRuler__RefreshVisual
                                                  (__this,measurement,(MethodInfo *)0x0);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$CreateHandle
// il2cpp: UnityEngine_Transform_o* MapEditor_MapEditorRuler__CreateHandle (UnityEngine_Transform_o* parent, System_String_o* name, int32_t primitiveType, const MethodInfo* method);
// 0x1821f0220

UnityEngine_Transform_o *
MapEditor_MapEditorRuler__CreateHandle
          (UnityEngine_Transform_o *parent,System_String_o *name,int32_t primitiveType,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  
  if (Il2CppMethodInitialized_18434705d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434705d = '\x01';
  }
  __this = (UnityEngine_Object_o *)UnityEngine_GameObject__CreatePrimitive(primitiveType,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this,name,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,parent,false,(MethodInfo *)0x0);
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponent_object_
                    ((UnityEngine_GameObject_o *)__this,
                     (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Collider);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(x,(MethodInfo *)0x0);
      }
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)__this,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
      shader = MapEditor_MapEditorRuler__GetVisualShader((MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_sharedMaterial(__this_00,__this_01,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
        return pUVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$GetVisualShader
// il2cpp: UnityEngine_Shader_o* MapEditor_MapEditorRuler__GetVisualShader (const MethodInfo* method);
// 0x1821f0b90

UnityEngine_Shader_o * MapEditor_MapEditorRuler__GetVisualShader(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Shader_o *value;
  
  if (Il2CppMethodInitialized_18434705e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_MapEditorRuler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Shader);
    il2cpp_codegen_initialize_runtime_metadata(&"Shaders/GizmoShader");
    Il2CppMethodInitialized_18434705e = '\x01';
  }
  x = (UnityEngine_Object_o *)TypeInfo_MapEditor_MapEditorRuler->static_fields->_visualShader;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    value = UnityEngine_Resources__Load_object_
                      ("Shaders/GizmoShader",(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Shader
                      );
    TypeInfo_MapEditor_MapEditorRuler->static_fields->_visualShader = value;
    Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_MapEditorRuler->static_fields->_visualShader,value);
  }
  return TypeInfo_MapEditor_MapEditorRuler->static_fields->_visualShader;
}


// MapEditor.MapEditorRuler$$RefreshVisual
// il2cpp: void MapEditor_MapEditorRuler__RefreshVisual (MapEditor_MapEditorRuler_o* __this, MapEditor_RulerMeasurement_o* measurement, const MethodInfo* method);
// 0x1821f0c60

void MapEditor_MapEditorRuler__RefreshVisual
               (MapEditor_MapEditorRuler_o *__this,MapEditor_RulerMeasurement_o *measurement,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Object_o *x;
  Utility_Color255_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar4;
  UnityEngine_TextMesh_o *pUVar5;
  UnityEngine_Component_o *__this_01;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  UnityEngine_Color_o *pUVar9;
  UnityEngine_Material_o *pUVar10;
  UnityEngine_Renderer_o *pUVar11;
  System_String_o *pSVar12;
  UnityEngine_Transform_o *pUVar13;
  float local_res10 [2];
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434705f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"0.###");
    il2cpp_codegen_initialize_runtime_metadata(&" u");
    Il2CppMethodInitialized_18434705f = '\x01';
  }
  local_res10[0] = 0.0;
  if (measurement != (MapEditor_RulerMeasurement_o *)0x0) {
    x = (UnityEngine_Object_o *)(measurement->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
    __this_00 = (measurement->fields).Color;
    if (__this_00 != (Utility_Color255_o *)0x0) {
      pUVar9 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,__this_00,(MethodInfo *)0x0);
      pUVar4 = (measurement->fields).Line;
      if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
        uVar6._0_4_ = (pUVar9->fields).r;
        uVar6._4_4_ = (pUVar9->fields).g;
        uVar7._0_4_ = (pUVar9->fields).b;
        uVar7._4_4_ = (pUVar9->fields).a;
        local_28[0]._0_8_ = uVar6;
        local_28[0]._8_8_ = uVar7;
        UnityEngine_LineRenderer__set_startColor(pUVar4,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
        pUVar4 = (measurement->fields).Line;
        if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
          local_28[0]._0_8_ = uVar6;
          local_28[0]._8_8_ = uVar7;
          UnityEngine_LineRenderer__set_endColor(pUVar4,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
          pUVar11 = (UnityEngine_Renderer_o *)(measurement->fields).Line;
          if ((pUVar11 != (UnityEngine_Renderer_o *)0x0) &&
             (pUVar10 = UnityEngine_Renderer__get_material(pUVar11,(MethodInfo *)0x0),
             pUVar10 != (UnityEngine_Material_o *)0x0)) {
            local_28[0]._0_8_ = uVar6;
            local_28[0]._8_8_ = uVar7;
            UnityEngine_Material__set_color(pUVar10,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
            pUVar4 = (measurement->fields).Line;
            if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
              local_28[0].r = (measurement->fields).Origin.fields.x;
              local_28[0].g = (measurement->fields).Origin.fields.y;
              local_28[0].b = (measurement->fields).Origin.fields.z;
              UnityEngine_LineRenderer__SetPosition
                        (pUVar4,0,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
              pUVar4 = (measurement->fields).Line;
              if (pUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
                local_28[0].r = (measurement->fields).End.fields.x;
                local_28[0].g = (measurement->fields).End.fields.y;
                local_28[0].b = (measurement->fields).End.fields.z;
                UnityEngine_LineRenderer__SetPosition
                          (pUVar4,1,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
                pUVar13 = (measurement->fields).OriginHandle;
                if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                  local_28[0].r = (measurement->fields).Origin.fields.x;
                  local_28[0].g = (measurement->fields).Origin.fields.y;
                  local_28[0].b = (measurement->fields).Origin.fields.z;
                  UnityEngine_Transform__set_position
                            (pUVar13,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
                  pUVar13 = (measurement->fields).EndHandle;
                  if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                    local_28[0].r = (measurement->fields).End.fields.x;
                    local_28[0].g = (measurement->fields).End.fields.y;
                    local_28[0].b = (measurement->fields).End.fields.z;
                    UnityEngine_Transform__set_position
                              (pUVar13,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
                    pUVar13 = (measurement->fields).OriginHandle;
                    if (((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
                        (pUVar11 = UnityEngine_Component__GetComponent_object_
                                             ((UnityEngine_Component_o *)pUVar13,
                                              (MethodInfo_6651A0 *)
                                              MethodInfo_UnityEngine_Component_GetComponent_Renderer),
                        pUVar11 != (UnityEngine_Renderer_o *)0x0)) &&
                       (pUVar10 = UnityEngine_Renderer__get_material(pUVar11,(MethodInfo *)0x0),
                       pUVar10 != (UnityEngine_Material_o *)0x0)) {
                      local_28[0]._0_8_ = uVar6;
                      local_28[0]._8_8_ = uVar7;
                      UnityEngine_Material__set_color
                                (pUVar10,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
                      pUVar13 = (measurement->fields).EndHandle;
                      if (((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
                          (pUVar11 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar13,
                                                (MethodInfo_6651A0 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Renderer),
                          pUVar11 != (UnityEngine_Renderer_o *)0x0)) &&
                         (pUVar10 = UnityEngine_Renderer__get_material(pUVar11,(MethodInfo *)0x0),
                         pUVar10 != (UnityEngine_Material_o *)0x0)) {
                        local_28[0]._0_8_ = uVar6;
                        local_28[0]._8_8_ = uVar7;
                        UnityEngine_Material__set_color
                                  (pUVar10,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
                        pUVar5 = (measurement->fields).Label;
                        if (pUVar5 != (UnityEngine_TextMesh_o *)0x0) {
                          local_28[0]._0_8_ = uVar6;
                          local_28[0]._8_8_ = uVar7;
                          UnityEngine_TextMesh__set_color
                                    (pUVar5,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
                          pUVar5 = (measurement->fields).Label;
                          local_res10[0] =
                               MapEditor_RulerMeasurement__get_Length(measurement,(MethodInfo *)0x0);
                          pSVar12 = System_Single__ToString_1b49f60
                                              (local_res10,"0.###",(MethodInfo *)0x0);
                          pSVar12 = System_String__Concat_1969e50
                                              (pSVar12," u",(MethodInfo *)0x0);
                          if (pUVar5 != (UnityEngine_TextMesh_o *)0x0) {
                            UnityEngine_TextMesh__set_text(pUVar5,pSVar12,(MethodInfo *)0x0);
                            __this_01 = (UnityEngine_Component_o *)(measurement->fields).Label;
                            if (__this_01 != (UnityEngine_Component_o *)0x0) {
                              pUVar13 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
                              fVar1 = (measurement->fields).Origin.fields.x;
                              fVar2 = (measurement->fields).Origin.fields.y;
                              fVar3 = (measurement->fields).Origin.fields.z;
                              if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                                local_28[0].g = ((measurement->fields).End.fields.y - fVar2) * 0.5 + fVar2;
                                local_28[0].r = ((measurement->fields).End.fields.x - fVar1) * 0.5 + fVar1;
                                local_28[0].b = ((measurement->fields).End.fields.z - fVar3) * 0.5 + fVar3;
                                UnityEngine_Transform__set_position
                                          (pUVar13,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$UpdateVisualScale
// il2cpp: void MapEditor_MapEditorRuler__UpdateVisualScale (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x1821f2240
// eh: try 0x1821f2355..0x1821f27c8 -> pad 0x183325880 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f2379: nop dword ptr [rax]
// asm:   0x1821f271a: mov rdx, qword ptr [rip + 0x1ea256f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose
// asm:   0x1821f2721: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1821f2726: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f272b: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1821f2730: test rcx, rcx
// asm:   0x1821f2733: jne 0x1821f27c8
// asm:   0x1821f27c8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183325880: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183325885: push rbp
// asm:   0x183325886: sub rsp, 0x20
// asm:   0x18332588a: mov rbp, rdx
// asm:   0x18332588d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183325894: mov rcx, qword ptr [rax]
// asm:   0x183325897: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18332589b: movabs rax, 0
// asm:   0x1833258a5: add rsp, 0x20
// asm:   0x1833258a9: pop rbp
// asm:   0x1833258aa: ret 

void MapEditor_MapEditorRuler__UpdateVisualScale(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Cameras_BaseCamera_o *pCVar4;
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  UnityEngine_Camera_o *__this_01;
  Il2CppClass *__this_02;
  UnityEngine_Vector3_StaticFields *pUVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  int32_t iVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Quaternion_o *pUVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o local_178;
  UnityEngine_Vector3_o local_168;
  UnityEngine_Vector3_o local_158;
  undefined8 local_148;
  System_Collections_Generic_List_Enumerator_object__o *local_140;
  System_Collections_Generic_List_Enumerator_object__o local_138;
  System_Collections_Generic_List_Enumerator_T__o local_120;
  UnityEngine_Quaternion_Fields local_f8;
  UnityEngine_Vector3_o local_e8;
  UnityEngine_Vector3_o local_d8 [15];
  
  if (Il2CppMethodInitialized_184347060 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184347060 = '\x01';
  }
  local_138.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_138.fields._index = 0;
  local_138.fields._version = 0;
  local_138.fields._current = (Il2CppObject *)0x0;
  pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((pCVar4 == (Cameras_BaseCamera_o *)0x0) ||
     (__this_00 = (__this->fields)._measurements,
     __this_00 == (System_Collections_Generic_List_RulerMeasurement__o *)0x0)) {
    ThrowNullReferenceException();
  }
  __this_01 = (pCVar4->fields).Camera;
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            (&local_120,(System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator);
  local_138.fields._list = local_120.fields._list;
  local_138.fields._index = local_120.fields._index;
  local_138.fields._version = local_120.fields._version;
  local_138.fields._current = local_120.fields._current;
  local_148 = 0;
  local_140 = &local_138;
  while( true ) {
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_138,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext);
    pIVar6 = local_138.fields._current;
    if (!bVar7) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_138,
                 MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
      return;
    }
    if (__this_01 == (UnityEngine_Camera_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar10 = UnityEngine_Transform__get_position(&local_e8,pUVar9,(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (pIVar6[5].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    fVar15 = (pUVar10->fields).x;
    fVar13 = (pUVar10->fields).y;
    fVar14 = (pUVar10->fields).z;
    pUVar9 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pIVar6[5].klass,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar10 = UnityEngine_Transform__get_position(local_d8,pUVar9,(MethodInfo *)0x0);
    fVar1 = (pUVar10->fields).x;
    fVar2 = (pUVar10->fields).y;
    fVar3 = (pUVar10->fields).z;
    if (Il2CppMethodInitialized_18433dee7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433dee7 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar15 = fVar15 - fVar1;
    fVar13 = fVar13 - fVar2;
    fVar14 = fVar14 - fVar3;
    dVar12 = (double)(fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15);
    if (dVar12 < 0.0) {
      dVar12 = sqrt(dVar12);
    }
    else {
      dVar12 = SQRT(dVar12);
    }
    bVar7 = UnityEngine_Camera__get_orthographic(__this_01,(MethodInfo *)0x0);
    if (bVar7) {
      fVar15 = UnityEngine_Camera__get_orthographicSize(__this_01,(MethodInfo *)0x0);
      iVar8 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      fVar13 = (float)iVar8;
      if (fVar13 < 1.0) {
        fVar13 = 1.0;
      }
      fVar15 = (fVar15 / fVar13) * 3.0;
    }
    else {
      fVar15 = (float)dVar12 * 0.008;
      if (fVar15 < 0.05) {
        fVar15 = 0.05;
      }
    }
    fVar13 = fVar15 * 2.5;
    if (fVar13 < 0.15) {
      fVar13 = 0.15;
    }
    else if (25.0 < fVar13) {
      fVar13 = 25.0;
    }
    __this_02 = pIVar6[4].klass;
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    if (__this_02 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    local_178.fields.x = (pUVar5->oneVector).fields.x * fVar15;
    local_178.fields.y = (pUVar5->oneVector).fields.y * fVar15;
    local_178.fields.z = (pUVar5->oneVector).fields.z * fVar15;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_02,&local_178,(MethodInfo *)0x0);
    pUVar9 = pIVar6[4].monitor;
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_168.fields.x = (pUVar5->oneVector).fields.x * fVar15;
    local_168.fields.y = (pUVar5->oneVector).fields.y * fVar15;
    local_168.fields.z = (pUVar5->oneVector).fields.z * fVar15;
    UnityEngine_Transform__set_localScale(pUVar9,&local_168,(MethodInfo *)0x0);
    if (pIVar6[3].monitor == (UnityEngine_LineRenderer_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_LineRenderer__set_widthMultiplier(pIVar6[3].monitor,fVar15 * 0.22,(MethodInfo *)0x0);
    if (pIVar6[5].klass == (Il2CppClass *)0x0) break;
    pUVar9 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pIVar6[5].klass,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_158.fields.x = (pUVar5->oneVector).fields.x * fVar13;
    local_158.fields.y = (pUVar5->oneVector).fields.y * fVar13;
    local_158.fields.z = (pUVar5->oneVector).fields.z * fVar13;
    UnityEngine_Transform__set_localScale(pUVar9,&local_158,(MethodInfo *)0x0);
    if (pIVar6[5].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar9 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pIVar6[5].klass,(MethodInfo *)0x0);
    __this_03 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar11 = UnityEngine_Transform__get_rotation
                        ((UnityEngine_Quaternion_o *)&local_120,__this_03,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_f8.x = (pUVar11->fields).x;
    local_f8.y = (pUVar11->fields).y;
    local_f8.z = (pUVar11->fields).z;
    local_f8.w = (pUVar11->fields).w;
    UnityEngine_Transform__set_rotation(pUVar9,(UnityEngine_Quaternion_o *)&local_f8,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$ApplyPlacementConstraints
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorRuler__ApplyPlacementConstraints (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x1821efcb0

UnityEngine_Vector3_o *
MapEditor_MapEditorRuler__ApplyPlacementConstraints
          (UnityEngine_Vector3_o *__return_storage_ptr__,UnityEngine_Vector3_o *origin,
          UnityEngine_Vector3_o *point,MethodInfo *method)

{
  float fVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_MapEditorInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  Settings_MapEditorSettings_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  bool bVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_58;
  float local_50;
  
  if (Il2CppMethodInitialized_184347061 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_184347061 = '\x01';
  }
  fVar11 = (point->fields).x - (origin->fields).x;
  fVar12 = (point->fields).z - (origin->fields).z;
  fVar13 = (point->fields).y - (origin->fields).y;
  local_58 = CONCAT44(fVar13,fVar11);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  local_50 = fVar12;
  if (((pSVar2 != (Settings_InputSettings_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).MapEditor, pSVar3 != (Settings_MapEditorInputSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).Fast, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
    bVar8 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
    if (bVar8) {
      if (Il2CppMethodInitialized_18433dee5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433dee5 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar10 = (double)(fVar12 * fVar12 + fVar11 * fVar11);
      if (dVar10 < 0.0) {
        dVar10 = sqrt(dVar10);
      }
      else {
        dVar10 = SQRT(dVar10);
      }
      fVar11 = (float)il2cpp_runtime_helper_1804f3c50(fVar12,fVar11);
      fVar11 = (float)il2cpp_runtime_helper_180012930((fVar11 * 57.29578) / 45.0);
      fVar12 = fVar11 * 45.0 * 0.017453292;
      fVar11 = (float)il2cpp_runtime_helper_1804f54c0(fVar12);
      fVar13 = 0.0;
      fVar11 = fVar11 * (float)dVar10;
      local_58 = (ulonglong)(uint)fVar11;
      fVar12 = (float)il2cpp_runtime_helper_1804f5fc0(fVar12);
      fVar12 = fVar12 * (float)dVar10;
      local_50 = fVar12;
    }
    pSVar4 = (pSVar3->fields).Slow;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      bVar8 = Settings_KeybindSetting__GetKey(pSVar4,false,(MethodInfo *)0x0);
      if (bVar8) {
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
        if ((pSVar5 == (Settings_MapEditorSettings_o *)0x0) ||
           (pSVar6 = (pSVar5->fields).SnapMove, pSVar6 == (Settings_FloatSetting_o *)0x0)) goto label_1821effac;
        fVar1 = (pSVar6->fields)._value;
        if ((0.0001 < fVar1) && (0.0001 < fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12)) {
          if (Il2CppMethodInitialized_18433de5f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5f = '\x01';
          }
          fVar9 = (float)il2cpp_runtime_helper_180546a40(&local_58,0);
          if (fVar9 <= 1e-05) {
            pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar11 = (pUVar7->zeroVector).fields.x;
            fVar13 = (pUVar7->zeroVector).fields.y;
            fVar12 = (pUVar7->zeroVector).fields.z;
          }
          else {
            fVar11 = fVar11 / fVar9;
            fVar13 = fVar13 / fVar9;
            fVar12 = fVar12 / fVar9;
          }
          fVar9 = (float)il2cpp_runtime_helper_180546a40(&local_58,0);
          fVar9 = (float)il2cpp_runtime_helper_180012930(fVar9 / fVar1);
          fVar9 = fVar9 * fVar1;
          fVar11 = fVar11 * fVar9;
          fVar13 = fVar13 * fVar9;
          fVar12 = fVar12 * fVar9;
        }
      }
      fVar1 = (origin->fields).y;
      fVar9 = (origin->fields).z;
      (__return_storage_ptr__->fields).x = fVar11 + (origin->fields).x;
      (__return_storage_ptr__->fields).y = fVar13 + fVar1;
      (__return_storage_ptr__->fields).z = fVar12 + fVar9;
      return __return_storage_ptr__;
    }
  }
label_1821effac:
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$TryBeginHandleDrag
// il2cpp: void MapEditor_MapEditorRuler__TryBeginHandleDrag (MapEditor_MapEditorRuler_o* __this, UnityEngine_Camera_o* camera, const MethodInfo* method);
// 0x1821f15d0
// eh: try 0x1821f16d2..0x1821f18d5 -> pad 0x18333bbd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f1843: mov rdx, qword ptr [rip + 0x1ea3446]  ; MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose
// asm:   0x1821f184a: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821f184f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f1854: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821f1859: test rcx, rcx
// asm:   0x1821f185c: jne 0x1821f18d5
// asm:   0x1821f185e: mov r13, qword ptr [rsp + 0x160]
// asm:   0x1821f1866: mov rsi, qword ptr [rsp + 0x20]
// asm:   0x1821f186b: movzx r14d, byte ptr [rsp + 0x178]
// asm:   0x1821f18d5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333bbd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333bbd5: push rbp
// asm:   0x18333bbd6: sub rsp, 0x20
// asm:   0x18333bbda: mov rbp, rdx
// asm:   0x18333bbdd: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x18333bbe4: mov rcx, qword ptr [rax]
// asm:   0x18333bbe7: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18333bbeb: movabs rax, 0
// asm:   0x18333bbf5: add rsp, 0x20
// asm:   0x18333bbf9: pop rbp
// asm:   0x18333bbfa: ret 

void MapEditor_MapEditorRuler__TryBeginHandleDrag
               (MapEditor_MapEditorRuler_o *__this,UnityEngine_Camera_o *camera,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  UnityEngine_Vector3_o *pUVar6;
  MapEditor_RulerMeasurement_o *value;
  bool bVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_Fields local_130;
  undefined1 local_120 [16];
  MapEditor_RulerMeasurement_o *local_110;
  System_Collections_Generic_List_Enumerator_object__o local_108;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Vector3_Fields local_d8;
  undefined8 local_c8;
  UnityEngine_Vector3_o local_b0;
  UnityEngine_Vector3_o local_a0 [10];
  
  if (Il2CppMethodInitialized_184347062 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator);
    Il2CppMethodInitialized_184347062 = '\x01';
  }
  local_108.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_108.fields._index = 0;
  local_108.fields._version = 0;
  local_108.fields._current = (Il2CppObject *)0x0;
  pUVar6 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_130,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._measurements;
  if (__this_00 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
    bVar7 = false;
    uVar3._0_4_ = (pUVar6->fields).x;
    uVar3._4_4_ = (pUVar6->fields).y;
    uVar2._0_4_ = (pUVar6->fields).x;
    uVar2._4_4_ = (pUVar6->fields).y;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_120,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator)
    ;
    local_108.fields._list = (System_Collections_Generic_List_T__o *)local_120._0_8_;
    local_108.fields._index = local_120._8_4_;
    local_108.fields._version = local_120._12_4_;
    local_108.fields._current = (Il2CppObject *)local_110;
    local_120._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    value = (MapEditor_RulerMeasurement_o *)0x0;
    fVar9 = 18.0;
    local_120._8_8_ = &local_108;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_108,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext);
      pIVar4 = local_108.fields._current;
      if (!bVar5) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_108,
                   MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
        if (value != (MapEditor_RulerMeasurement_o *)0x0) {
          (__this->fields)._dragging = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._dragging,value);
          (__this->fields)._dragOrigin = bVar7;
        }
        return;
      }
      if ((MapEditor_RulerMeasurement_o *)local_108.fields._current == (MapEditor_RulerMeasurement_o *)0x0)
      break;
      if (camera == (UnityEngine_Camera_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_e8.x = *(float *)&local_108.fields._current[1].klass;
      local_e8.y = *(float *)((longlong)&local_108.fields._current[1].klass + 4);
      local_e8.z = (((MapEditor_RulerMeasurement_Fields *)((longlong)local_108.fields._current + 0x10))->
                   Origin).fields.z;
      pUVar6 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                         (&local_b0,camera,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
      local_c8._0_4_ = (pUVar6->fields).x;
      local_c8._4_4_ = (pUVar6->fields).y;
      fVar8 = (pUVar6->fields).z;
      local_d8.x = *(float *)((longlong)&pIVar4[1].monitor + 4);
      local_d8.y = *(float *)&pIVar4[2].klass;
      local_d8.z = (((MapEditor_RulerMeasurement_Fields *)((longlong)pIVar4 + 0x10))->End).fields.z;
      pUVar6 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                         (local_a0,camera,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
      local_130.x = (pUVar6->fields).x;
      local_130.y = (pUVar6->fields).y;
      fVar1 = (pUVar6->fields).z;
      if (0.0 < fVar8) {
        fVar8 = (float)il2cpp_runtime_helper_180546870(uVar2,local_c8,0);
        if (fVar8 < fVar9) {
          bVar7 = true;
          value = (MapEditor_RulerMeasurement_o *)pIVar4;
          fVar9 = fVar8;
        }
      }
      if (0.0 < fVar1) {
        fVar8 = (float)il2cpp_runtime_helper_180546870(uVar3,local_130._0_8_,0);
        if (fVar8 < fVar9) {
          bVar7 = false;
          value = (MapEditor_RulerMeasurement_o *)pIVar4;
          fVar9 = fVar8;
        }
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$SnapToChainRoot
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorRuler__SnapToChainRoot (MapEditor_MapEditorRuler_o* __this, UnityEngine_Camera_o* camera, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x1821f14a0

UnityEngine_Vector3_o *
MapEditor_MapEditorRuler__SnapToChainRoot
          (UnityEngine_Vector3_o *__return_storage_ptr__,MapEditor_MapEditorRuler_o *__this,
          UnityEngine_Camera_o *camera,UnityEngine_Vector3_o *point,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184347063 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_Value);
    Il2CppMethodInitialized_184347063 = '\x01';
  }
  if ((__this->fields)._chainRoot.fields.hasValue != false) {
    System_Nullable_Vector3___get_Value
              ((UnityEngine_Vector3_o *)&local_48,&(__this->fields)._chainRoot,
               (MethodInfo_AE2C50 *)MethodInfo_System_Nullable_Vector3_get_Value);
    if (camera == (UnityEngine_Camera_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_38[0].x = local_48.x;
    local_38[0].y = local_48.y;
    local_38[0].z = local_48.z;
    pUVar4 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                       ((UnityEngine_Vector3_o *)&local_48,camera,(UnityEngine_Vector3_o *)local_38,
                        (MethodInfo *)0x0);
    local_38[0].x = (pUVar4->fields).x;
    local_38[0].y = (pUVar4->fields).y;
    if (0.0 < (pUVar4->fields).z) {
      pUVar4 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
      uVar3._0_4_ = (pUVar4->fields).x;
      uVar3._4_4_ = (pUVar4->fields).y;
      fVar1 = (float)il2cpp_runtime_helper_180546870(uVar3,local_38[0]._0_8_,0);
      if (fVar1 <= 22.0) {
        System_Nullable_Vector3___get_Value
                  ((UnityEngine_Vector3_o *)local_38,&(__this->fields)._chainRoot,
                   (MethodInfo_AE2C50 *)MethodInfo_System_Nullable_Vector3_get_Value);
        fVar1 = (float)local_38[0]._0_8_;
        fVar2 = SUB84(local_38[0]._0_8_,4);
        goto label_1821f15b1;
      }
    }
  }
  fVar1 = (point->fields).x;
  fVar2 = (point->fields).y;
  local_38[0].z = (point->fields).z;
label_1821f15b1:
  (__return_storage_ptr__->fields).x = fVar1;
  (__return_storage_ptr__->fields).y = fVar2;
  (__return_storage_ptr__->fields).z = local_38[0].z;
  return __return_storage_ptr__;
}


// MapEditor.MapEditorRuler$$FindChainRoot
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorRuler__FindChainRoot (MapEditor_MapEditorRuler_o* __this, MapEditor_RulerMeasurement_o* source, const MethodInfo* method);
// 0x1821f0900
// eh: try 0x1821f0a60..0x1821f0b83 -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f0a09: nop dword ptr [rax]
// asm:   0x1821f0a5f: nop 
// asm:   0x1821f0b21: mov rdx, qword ptr [rip + 0x1ea4168]  ; MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose
// asm:   0x1821f0b28: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821f0b2d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f0b32: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821f0b37: test rcx, rcx
// asm:   0x1821f0b3a: jne 0x1821f0b83
// asm:   0x1821f0b3c: mov rsi, qword ptr [rsp + 0xb0]
// asm:   0x1821f0b44: cmp byte ptr [rsp + 0xc0], 0
// asm:   0x1821f0b4c: je 0x1821f0b60
// asm:   0x1821f0b4e: mov r15, qword ptr [rsp + 0xb8]
// asm:   0x1821f0b56: mov r14, qword ptr [rsp + 0x20]
// asm:   0x1821f0b5b: jmp 0x1821f0a01
// asm:   0x1821f0b83: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

UnityEngine_Vector3_o *
MapEditor_MapEditorRuler__FindChainRoot
          (UnityEngine_Vector3_o *__return_storage_ptr__,MapEditor_MapEditorRuler_o *__this,
          MapEditor_RulerMeasurement_o *source,MethodInfo *method)

{
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  Il2CppObject *item;
  bool bVar1;
  System_Collections_Generic_HashSet_RulerMeasurement__o *__this_01;
  float fVar2;
  float fVar3;
  float fVar4;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if (Il2CppMethodInitialized_184347064 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_RulerMeasurement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator);
    Il2CppMethodInitialized_184347064 = '\x01';
  }
  (__return_storage_ptr__->fields).x = 0.0;
  (__return_storage_ptr__->fields).y = 0.0;
  (__return_storage_ptr__->fields).z = 0.0;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if (source != (MapEditor_RulerMeasurement_o *)0x0) {
    fVar2 = (source->fields).Origin.fields.y;
    (__return_storage_ptr__->fields).x = (source->fields).Origin.fields.x;
    (__return_storage_ptr__->fields).y = fVar2;
    (__return_storage_ptr__->fields).z = (source->fields).Origin.fields.z;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_RulerMeasurement);
    System_Collections_Generic_HashSet_object____ctor
              ((System_Collections_Generic_HashSet_object__o *)__this_01,
               (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_ctor);
    if (__this_01 != (System_Collections_Generic_HashSet_RulerMeasurement__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)source,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_Add);
      while (__this_00 = (__this->fields)._measurements,
            __this_00 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (&local_50,(System_Collections_Generic_List_T__o *)__this_00,
                   (MethodInfo_91F180 *)
                   MethodInfo_System_Collections_Generic_List_RulerMeasurement_GetEnumerator);
        local_68.fields._list = local_50.fields._list;
        local_68.fields._index = local_50.fields._index;
        local_68.fields._version = local_50.fields._version;
        local_68.fields._current = local_50.fields._current;
        do {
          do {
            bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_68,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_MoveNext
                              );
            item = local_68.fields._current;
            if (!bVar1) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_68,
                         MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
              return __return_storage_ptr__;
            }
            bVar1 = System_Collections_Generic_HashSet_object___Contains
                              ((System_Collections_Generic_HashSet_object__o *)__this_01,
                               local_68.fields._current,
                               (MethodInfo_1759E40 *)
                               MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_Contains);
          } while (bVar1);
          if (item == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          fVar4 = *(float *)((longlong)&item[1].monitor + 4) - (__return_storage_ptr__->fields).x;
          fVar3 = *(float *)&item[2].klass - (__return_storage_ptr__->fields).y;
          fVar2 = *(float *)((longlong)&item[2].klass + 4) - (__return_storage_ptr__->fields).z;
        } while (0.0001 <= fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
        *(Il2CppClass **)&__return_storage_ptr__->fields = item[1].klass;
        (__return_storage_ptr__->fields).z = *(float *)&item[1].monitor;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this_01,item,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_RulerMeasurement_Add);
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_68,
                   MethodInfo_System_Collections_Generic_List_Enumerator_RulerMeasurement_Dispose);
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$TryGetPlacementPoint
// il2cpp: bool MapEditor_MapEditorRuler__TryGetPlacementPoint (UnityEngine_Camera_o* camera, UnityEngine_Vector3_o* point, const MethodInfo* method);
// 0x1821f1fc0

bool MapEditor_MapEditorRuler__TryGetPlacementPoint
               (UnityEngine_Camera_o *camera,UnityEngine_Vector3_o *point,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Settings_InputSettings_o *pSVar3;
  Settings_MapEditorInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *__this;
  UnityEngine_Vector3_StaticFields *pUVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  bool bVar9;
  UnityEngine_LayerMask_o UVar10;
  UnityEngine_Vector3_o *pUVar11;
  UnityEngine_Ray_o *pUVar12;
  System_Int32_array *layers;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Ray_o local_78;
  UnityEngine_RaycastHit_o local_58;
  
  if (Il2CppMethodInitialized_184347065 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347065 = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar3 == (Settings_InputSettings_o *)0x0) ||
      (pSVar4 = (pSVar3->fields).MapEditor, pSVar4 == (Settings_MapEditorInputSettings_o *)0x0)) ||
     (__this = (pSVar4->fields).VertexSnap, __this == (Settings_KeybindSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar9 = Settings_KeybindSetting__GetKey(__this,false,(MethodInfo *)0x0);
  if (bVar9) {
    bVar9 = MapEditor_MapEditorRuler__TryGetNearestVertex(camera,point,(MethodInfo *)0x0);
    if (bVar9) {
      return true;
    }
  }
  if (Il2CppMethodInitialized_184347067 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184347067 = '\x01';
  }
  local_58.fields.m_Normal.fields.y = 0.0;
  local_58.fields.m_Normal.fields.z = 0.0;
  local_58.fields.m_FaceID = 0;
  local_58.fields.m_Distance = 0.0;
  local_58.fields.m_UV.fields.x = 0.0;
  local_58.fields.m_UV.fields.y = 0.0;
  local_58.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_58.fields.m_Point.fields.x = 0.0;
  local_58.fields.m_Point.fields.y = 0.0;
  local_58.fields.m_Point.fields.z = 0.0;
  local_58.fields.m_Normal.fields.x = 0.0;
  pUVar11 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
  if (camera != (UnityEngine_Camera_o *)0x0) {
    local_88.x = (pUVar11->fields).x;
    local_88.y = (pUVar11->fields).y;
    local_88.z = (pUVar11->fields).z;
    pUVar12 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                        (&local_78,camera,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
    uVar6._0_4_ = (pUVar12->fields).m_Origin.fields.x;
    uVar6._4_4_ = (pUVar12->fields).m_Origin.fields.y;
    uVar7 = *(undefined8 *)&(pUVar12->fields).m_Origin.fields.z;
    uVar1._0_4_ = (pUVar12->fields).m_Direction.fields.y;
    uVar1._4_4_ = (pUVar12->fields).m_Direction.fields.z;
    layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length != 0) {
        layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
        UVar10 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        UVar10 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar10.fields.m_Mask,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        local_78.fields.m_Origin.fields._0_8_ = uVar6;
        local_78.fields._8_8_ = uVar7;
        local_78.fields.m_Direction.fields._4_8_ = uVar1;
        bVar9 = UnityEngine_Physics__Raycast_2fe5050
                          (&local_78,&local_58,100000.0,(int32_t)UVar10.fields.m_Mask,(MethodInfo *)0x0);
        if (bVar9) {
          pUVar11 = UnityEngine_RaycastHit__get_point
                              ((UnityEngine_Vector3_o *)&local_78,&local_58,(MethodInfo *)0x0);
          fVar8 = (pUVar11->fields).y;
          fVar2 = (pUVar11->fields).z;
          bVar9 = true;
          (point->fields).x = (pUVar11->fields).x;
          (point->fields).y = fVar8;
          (point->fields).z = fVar2;
        }
        else {
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar2 = (pUVar5->zeroVector).fields.z;
          fVar8 = (pUVar5->zeroVector).fields.y;
          (point->fields).x = (pUVar5->zeroVector).fields.x;
          (point->fields).y = fVar8;
          (point->fields).z = fVar2;
          bVar9 = false;
        }
        return bVar9;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$TryGetNearestVertex
// il2cpp: bool MapEditor_MapEditorRuler__TryGetNearestVertex (UnityEngine_Camera_o* camera, UnityEngine_Vector3_o* point, const MethodInfo* method);
// 0x1821f1ad0
// eh: try 0x1821f1ca7..0x1821f1fac -> pad 0x183338640 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f1f06: mov rdx, qword ptr [rip + 0x1ebd9fb]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose
// asm:   0x1821f1f0d: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821f1f12: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f1f17: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821f1f1c: test rcx, rcx
// asm:   0x1821f1f1f: jne 0x1821f1fac
// asm:   0x1821f1fac: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183338640: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183338645: push rbp
// asm:   0x183338646: sub rsp, 0x20
// asm:   0x18333864a: mov rbp, rdx
// asm:   0x18333864d: mov rax, qword ptr [rbp + 0x98]
// asm:   0x183338654: mov rcx, qword ptr [rax]
// asm:   0x183338657: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333865b: movabs rax, 0
// asm:   0x183338665: add rsp, 0x20
// asm:   0x183338669: pop rbp
// asm:   0x18333866a: ret 

bool MapEditor_MapEditorRuler__TryGetNearestVertex
               (UnityEngine_Camera_o *camera,UnityEngine_Vector3_o *point,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this;
  UnityEngine_MeshFilter_o *__this_00;
  bool bVar7;
  UnityEngine_Vector3_o *pUVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Mesh_o *__this_01;
  UnityEngine_Vector3_array *pUVar10;
  UnityEngine_Transform_o *__this_02;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool local_res20;
  UnityEngine_Vector3_Fields local_178;
  undefined8 local_168;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *local_160;
  System_Object_array *local_158;
  UnityEngine_Vector3_Fields local_148;
  UnityEngine_Vector3_Fields local_138;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_128;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_f8;
  UnityEngine_Vector3_o local_d0;
  UnityEngine_Vector3_o local_c0 [12];
  
  if (Il2CppMethodInitialized_184347066 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_MapObject_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347066 = '\x01';
  }
  local_128.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128.fields._version = 0;
  local_128.fields._index = 0;
  local_128.fields._current.fields.key = (Il2CppObject *)0x0;
  local_128.fields._current.fields.value = (Il2CppObject *)0x0;
  local_128.fields._getEnumeratorRetType = 0;
  local_128.fields._36_4_ = 0;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar6->zeroVector).fields.z;
  fVar1 = (pUVar6->zeroVector).fields.y;
  (point->fields).x = (pUVar6->zeroVector).fields.x;
  (point->fields).y = fVar1;
  (point->fields).z = fVar4;
  pUVar8 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_178,(MethodInfo *)0x0);
  fVar4 = (pUVar8->fields).x;
  fVar1 = (pUVar8->fields).y;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this == (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar16 = 900.0;
  fVar15 = 3.4028235e+38;
  local_res20 = false;
  System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
            (&local_f8,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_13C1150 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_GetEnumerator);
  local_128.fields._dictionary = local_f8.fields._dictionary;
  local_128.fields._version = local_f8.fields._version;
  local_128.fields._index = local_f8.fields._index;
  local_128.fields._current.fields.key = local_f8.fields._current.fields.key;
  local_128.fields._current.fields.value = local_f8.fields._current.fields.value;
  local_128.fields._getEnumeratorRetType = local_f8.fields._getEnumeratorRetType;
  local_128.fields._36_4_ = local_f8.fields._36_4_;
  local_168 = 0;
  local_160 = &local_128;
  do {
    do {
      do {
        bVar7 = System_Collections_Generic_Dictionary_Enumerator_uint__object___MoveNext
                          (&local_128,
                           (MethodInfo_15642D0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_MoveNext)
        ;
        if (!bVar7) {
          System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_128,
                     MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_MapObject_Dispose);
          return local_res20;
        }
        if (local_128.fields._current.fields.value == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar9 = local_128.fields._current.fields.value[1].monitor;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (bVar7);
      if (pUVar9 == (UnityEngine_Object_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar7 = UnityEngine_GameObject__get_activeInHierarchy
                        ((UnityEngine_GameObject_o *)pUVar9,(MethodInfo *)0x0);
    } while (!bVar7);
    local_158 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                          ((UnityEngine_GameObject_o *)pUVar9,
                           (MethodInfo_6F5810 *)
                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    if (local_158 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    for (uVar12 = 0; uVar11 = (uint)local_158->max_length, (int)uVar12 < (int)uVar11; uVar12 = uVar12 + 1) {
      if (uVar11 <= uVar12) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_MeshFilter_o *)local_158->m_Items[(int)uVar12];
      if (__this_00 == (UnityEngine_MeshFilter_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar9 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        __this_01 = UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_Mesh_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar10 = UnityEngine_Mesh__get_vertices(__this_01,(MethodInfo *)0x0);
        if (pUVar10 == (UnityEngine_Vector3_array *)0x0) {
          ThrowNullReferenceException();
        }
        for (uVar11 = 0; (int)uVar11 < (int)pUVar10->max_length; uVar11 = uVar11 + 1) {
          __this_02 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if ((uint)pUVar10->max_length <= uVar11) {
            ThrowIndexOutOfRangeException();
          }
          if (__this_02 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_148.x = pUVar10->m_Items[(int)uVar11].fields.x;
          local_148.y = pUVar10->m_Items[(int)uVar11].fields.y;
          local_148.z = pUVar10->m_Items[(int)uVar11].fields.z;
          pUVar8 = UnityEngine_Transform__TransformPoint
                             (&local_d0,__this_02,(UnityEngine_Vector3_o *)&local_148,(MethodInfo *)0x0);
          if (camera == (UnityEngine_Camera_o *)0x0) {
            ThrowNullReferenceException();
          }
          uVar3._0_4_ = (pUVar8->fields).x;
          uVar3._4_4_ = (pUVar8->fields).y;
          fVar5 = (pUVar8->fields).z;
          local_138._0_8_ = uVar3;
          local_138.z = fVar5;
          pUVar8 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                             (local_c0,camera,(UnityEngine_Vector3_o *)&local_138,(MethodInfo *)0x0);
          local_178.x = (pUVar8->fields).x;
          local_178.y = (pUVar8->fields).y;
          fVar2 = (pUVar8->fields).z;
          if (0.0 < fVar2) {
            fVar13 = local_178.x - fVar4;
            fVar14 = local_178.y - fVar1;
            fVar13 = fVar14 * fVar14 + fVar13 * fVar13;
            if ((fVar13 + 36.0 < fVar16) || (ABS(fVar13 - fVar16) <= 36.0 && fVar2 < fVar15)) {
              (point->fields).x = (float)uVar3;
              (point->fields).y = uVar3._4_4_;
              (point->fields).z = fVar5;
              local_res20 = true;
              fVar15 = fVar2;
              fVar16 = fVar13;
            }
          }
        }
      }
    }
  } while( true );
}


// MapEditor.MapEditorRuler$$TryGetMapPoint
// il2cpp: bool MapEditor_MapEditorRuler__TryGetMapPoint (UnityEngine_Camera_o* camera, UnityEngine_Vector3_o* point, const MethodInfo* method);
// 0x1821f18e0

bool MapEditor_MapEditorRuler__TryGetMapPoint
               (UnityEngine_Camera_o *camera,UnityEngine_Vector3_o *point,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  bool bVar7;
  UnityEngine_LayerMask_o UVar8;
  UnityEngine_Vector3_o *pUVar9;
  UnityEngine_Ray_o *pUVar10;
  System_Int32_array *layers;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Ray_o local_78;
  UnityEngine_RaycastHit_o local_58;
  
  if (Il2CppMethodInitialized_184347067 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184347067 = '\x01';
  }
  local_58.fields.m_Normal.fields.y = 0.0;
  local_58.fields.m_Normal.fields.z = 0.0;
  local_58.fields.m_FaceID = 0;
  local_58.fields.m_Distance = 0.0;
  local_58.fields.m_UV.fields.x = 0.0;
  local_58.fields.m_UV.fields.y = 0.0;
  local_58.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_58.fields.m_Point.fields.x = 0.0;
  local_58.fields.m_Point.fields.y = 0.0;
  local_58.fields.m_Point.fields.z = 0.0;
  local_58.fields.m_Normal.fields.x = 0.0;
  pUVar9 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
  if (camera != (UnityEngine_Camera_o *)0x0) {
    local_88.x = (pUVar9->fields).x;
    local_88.y = (pUVar9->fields).y;
    local_88.z = (pUVar9->fields).z;
    pUVar10 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                        (&local_78,camera,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
    uVar4._0_4_ = (pUVar10->fields).m_Origin.fields.x;
    uVar4._4_4_ = (pUVar10->fields).m_Origin.fields.y;
    uVar5 = *(undefined8 *)&(pUVar10->fields).m_Origin.fields.z;
    uVar1._0_4_ = (pUVar10->fields).m_Direction.fields.y;
    uVar1._4_4_ = (pUVar10->fields).m_Direction.fields.z;
    layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length != 0) {
        layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
        UVar8 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        UVar8 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar8.fields.m_Mask,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        local_78.fields.m_Origin.fields._0_8_ = uVar4;
        local_78.fields._8_8_ = uVar5;
        local_78.fields.m_Direction.fields._4_8_ = uVar1;
        bVar7 = UnityEngine_Physics__Raycast_2fe5050
                          (&local_78,&local_58,100000.0,(int32_t)UVar8.fields.m_Mask,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar9 = UnityEngine_RaycastHit__get_point
                             ((UnityEngine_Vector3_o *)&local_78,&local_58,(MethodInfo *)0x0);
          fVar6 = (pUVar9->fields).y;
          fVar2 = (pUVar9->fields).z;
          bVar7 = true;
          (point->fields).x = (pUVar9->fields).x;
          (point->fields).y = fVar6;
          (point->fields).z = fVar2;
        }
        else {
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar2 = (pUVar3->zeroVector).fields.z;
          fVar6 = (pUVar3->zeroVector).fields.y;
          (point->fields).x = (pUVar3->zeroVector).fields.x;
          (point->fields).y = fVar6;
          (point->fields).z = fVar2;
          bVar7 = false;
        }
        return bVar7;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$CancelInteraction
// il2cpp: void MapEditor_MapEditorRuler__CancelInteraction (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x1821effc0

void MapEditor_MapEditorRuler__CancelInteraction(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  MapEditor_RulerMeasurement_o *pMVar1;
  UnityEngine_Object_o *pUVar2;
  System_Nullable_Vector3__o *pSVar3;
  bool bVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184347068 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347068 = '\x01';
  }
  if ((__this->fields)._pending == (MapEditor_RulerMeasurement_o *)0x0) goto label_1821f00a3;
  if ((__this->fields)._creatingMeasurement == false) {
    fVar5 = MapEditor_RulerMeasurement__get_Length((__this->fields)._pending,(MethodInfo *)0x0);
    if (0.001 <= fVar5) goto label_1821f00a3;
  }
  __this_00 = (__this->fields)._measurements;
  if (__this_00 != (System_Collections_Generic_List_RulerMeasurement__o *)0x0) {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this_00,
               (Il2CppObject *)(__this->fields)._pending,
               (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_RulerMeasurement_Remove);
    pMVar1 = (__this->fields)._pending;
    if (pMVar1 != (MapEditor_RulerMeasurement_o *)0x0) {
      pUVar2 = (UnityEngine_Object_o *)(pMVar1->fields).Root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pMVar1 = (__this->fields)._pending;
        if (pMVar1 == (MapEditor_RulerMeasurement_o *)0x0) goto label_1821f00d9;
        pUVar2 = (UnityEngine_Object_o *)(pMVar1->fields).Root;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
      }
label_1821f00a3:
      (__this->fields)._pending = (MapEditor_RulerMeasurement_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._pending,(void *)0x0);
      (__this->fields)._dragging = (MapEditor_RulerMeasurement_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._dragging,(void *)0x0);
      (__this->fields)._chainRoot.fields.hasValue = false;
      *(undefined3 *)&(__this->fields)._chainRoot.fields.field_0x1 = 0;
      (__this->fields)._chainRoot.fields.value.fields.x = 0.0;
      pSVar3 = &(__this->fields)._chainRoot;
      (pSVar3->fields).value.fields.y = 0.0;
      (pSVar3->fields).value.fields.z = 0.0;
      (__this->fields)._awaitingFirstPoint = false;
      (__this->fields)._creatingMeasurement = false;
      return;
    }
  }
label_1821f00d9:
  ThrowNullReferenceException();
}


// MapEditor.MapEditorRuler$$EnsureRoot
// il2cpp: void MapEditor_MapEditorRuler__EnsureRoot (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x1821f0850

void MapEditor_MapEditorRuler__EnsureRoot(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_184347069 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorRulers");
    Il2CppMethodInitialized_184347069 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(__this_00,"MapEditorRulers",(MethodInfo *)0x0);
    (__this->fields)._root = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._root,__this_00);
  }
  return;
}


// MapEditor.MapEditorRuler$$.ctor
// il2cpp: void MapEditor_MapEditorRuler___ctor (MapEditor_MapEditorRuler_o* __this, const MethodInfo* method);
// 0x1821f2d50

void MapEditor_MapEditorRuler___ctor(MapEditor_MapEditorRuler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RulerMeasurement__o *__this_00;
  
  if (Il2CppMethodInitialized_18434706a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RulerMeasurement_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_RulerMeasurement);
    Il2CppMethodInitialized_18434706a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RulerMeasurement);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_RulerMeasurement_ctor);
  (__this->fields)._measurements = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._measurements,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


