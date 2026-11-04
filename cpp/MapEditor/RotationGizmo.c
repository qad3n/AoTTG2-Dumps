// Type: MapEditor.RotationGizmo
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/RotationGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/RotationGIzmo.cs
// --------------------------------

// MapEditor.RotationGizmo.<>c$$.cctor
// il2cpp: void MapEditor_RotationGizmo___c___cctor (const MethodInfo* method);
// 0x182201810

void MapEditor_RotationGizmo___c___cctor(MethodInfo *method)

{
  MapEditor_RotationGizmo___c_o *__this;
  
  if (Il2CppMethodInitialized_184347048 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_RotationGizmo_c);
    Il2CppMethodInitialized_184347048 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_RotationGizmo_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_RotationGizmo_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_RotationGizmo_c->static_fields->__9,__this);
  return;
}


// MapEditor.RotationGizmo.<>c$$.ctor
// il2cpp: void MapEditor_RotationGizmo___c___ctor (MapEditor_RotationGizmo___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
MapEditor_RotationGizmo___c___ctor(MapEditor_RotationGizmo___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.RotationGizmo.<>c$$<RotateSelectedObjects>b__16_0
// il2cpp: int32_t MapEditor_RotationGizmo___c___RotateSelectedObjects_b__16_0 (MapEditor_RotationGizmo___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x181e7b690

int32_t
MapEditor_RotationGizmo___c___RotateSelectedObjects_b__16_0(MapEditor_RotationGizmo___c_o* __this, Map_MapObject_o* o, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$Create
// il2cpp: MapEditor_RotationGizmo_o* MapEditor_RotationGizmo__Create (const MethodInfo* method);
// 0x1821fb060

MapEditor_RotationGizmo_o * MapEditor_RotationGizmo__Create(MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this;
  MapEditor_RotationGizmo_o *pMVar1;
  
  if (Il2CppMethodInitialized_18434703f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RotationGizmo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Gizmos/RotationGizmo");
    Il2CppMethodInitialized_18434703f = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Gizmos/RotationGizmo",false,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pMVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_RotationGizmo);
    UnityEngine_GameObject__SetActive(__this,false,(MethodInfo *)0x0);
    return pMVar1;
  }
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$IsActive
// il2cpp: bool MapEditor_RotationGizmo__IsActive (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x1821fb240

bool MapEditor_RotationGizmo__IsActive(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347040 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347040 = '\x01';
  }
  x = (__this->fields)._activeCircle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// MapEditor.RotationGizmo$$Awake
// il2cpp: void MapEditor_RotationGizmo__Awake (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x1821faf30

void MapEditor_RotationGizmo__Awake(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184347041 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CircleY");
    il2cpp_codegen_initialize_runtime_metadata(&"CircleZ");
    il2cpp_codegen_initialize_runtime_metadata(&"CircleX");
    Il2CppMethodInitialized_184347041 = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleX",(MethodInfo *)0x0);
    (__this->fields)._circleX = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._circleX,pUVar1);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleY",(MethodInfo *)0x0);
      (__this->fields)._circleY = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._circleY,pUVar1);
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleZ",(MethodInfo *)0x0);
        (__this->fields)._circleZ = pUVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._circleZ,pUVar1);
        local_18.r = (__this->fields).CircleXColor.fields.r;
        local_18.g = (__this->fields).CircleXColor.fields.g;
        local_18.b = (__this->fields).CircleXColor.fields.b;
        local_18.a = (__this->fields).CircleXColor.fields.a;
        MapEditor_RotationGizmo__SetCircleColor
                  (__this,(__this->fields)._circleX,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        local_18.r = (__this->fields).CircleYColor.fields.r;
        local_18.g = (__this->fields).CircleYColor.fields.g;
        local_18.b = (__this->fields).CircleYColor.fields.b;
        local_18.a = (__this->fields).CircleYColor.fields.a;
        MapEditor_RotationGizmo__SetCircleColor
                  (__this,(__this->fields)._circleY,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        local_18.r = (__this->fields).CircleZColor.fields.r;
        local_18.g = (__this->fields).CircleZColor.fields.g;
        local_18.b = (__this->fields).CircleZColor.fields.b;
        local_18.a = (__this->fields).CircleZColor.fields.a;
        MapEditor_RotationGizmo__SetCircleColor
                  (__this,(__this->fields)._circleZ,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$OnSelectionChange
// il2cpp: void MapEditor_RotationGizmo__OnSelectionChange (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x1821fb2a0

void MapEditor_RotationGizmo__OnSelectionChange(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  MapEditor_BaseGizmo_o *x;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (Il2CppMethodInitialized_184347042 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347042 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).SelectedObjects,
     pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if (0 < (pSVar2->fields)._count) {
      x = (pGVar1->fields).CurrentGizmo;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if (bVar3) {
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
          MapEditor_RotationGizmo__ResetCenter(__this,(MethodInfo *)0x0);
          MapEditor_RotationGizmo__ResetColors(__this,(MethodInfo *)0x0);
          return;
        }
        goto label_1821fb37c;
      }
    }
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      return;
    }
  }
label_1821fb37c:
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$Update
// il2cpp: void MapEditor_RotationGizmo__Update (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x1821fbb30

void MapEditor_RotationGizmo__Update(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  Il2CppMethodPointer pIVar4;
  Il2CppMethodPointer pIVar5;
  InvokerMethod pIVar6;
  float fVar10;
  Settings_InputSettings_o *pSVar11;
  Settings_MapEditorInputSettings_o *pSVar12;
  Settings_KeybindSetting_o *__this_00;
  Cameras_BaseCamera_o *pCVar13;
  GameManagers_MapEditorGameManager_o *pGVar14;
  UnityEngine_Camera_o *pUVar15;
  UnityEngine_Vector3_StaticFields *pUVar16;
  Settings_MapEditorSettings_o *pSVar17;
  Settings_FloatSetting_o *pSVar18;
  UI_MapEditorMenu_o *pUVar19;
  bool bVar20;
  UnityEngine_LayerMask_o UVar21;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MapEditor_TransformPositionRotationCommand_o *__this_01;
  UnityEngine_Vector3_o *pUVar22;
  UnityEngine_Ray_o *pUVar23;
  System_Int32_array *layers;
  UnityEngine_Collider_o *__this_02;
  UnityEngine_Transform_o *pUVar24;
  MethodInfo *method_00;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  UnityEngine_Vector3_Fields local_158;
  undefined1 local_148 [8];
  Il2CppMethodPointer pIStack_140;
  InvokerMethod local_138;
  UnityEngine_Vector3_o local_128;
  Il2CppType **local_118;
  _union_13 _Stack_110;
  _union_14 local_108;
  uint32_t uStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined8 uStack_f4;
  undefined8 local_dc;
  UnityEngine_Ray_o local_d0 [7];
  
  if (Il2CppMethodInitialized_184347043 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformPositionRotationCommand);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184347043 = '\x01';
  }
  local_108.genericMethod = (void *)0x0;
  uStack_100 = 0;
  local_118 = (Il2CppType **)0x0;
  _Stack_110.rgctx_data = (Il2CppRGCTXData *)0x0;
  fStack_fc = 0.0;
  fStack_f8 = 0.0;
  uStack_f4._0_4_ = 0.0;
  uStack_f4._4_4_ = (UnityEngine_EntityId_Fields)0x0;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pSVar11 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if ((pSVar11 == (Settings_InputSettings_o *)0x0) ||
     (pSVar12 = (pSVar11->fields).MapEditor, pSVar12 == (Settings_MapEditorInputSettings_o *)0x0))
  goto label_1821fc3b0;
  __this_00 = (pSVar12->fields).Select;
  pUVar24 = (__this->fields)._activeCircle;
  pCVar13 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar20 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar20) {
    pUVar19 = (__this->fields)._menu;
    if (pUVar19 == (UI_MapEditorMenu_o *)0x0) goto label_1821fc3b0;
    if ((pUVar19->fields).IsMouseUI == false) {
      if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto label_1821fc3b0;
      bVar20 = Settings_KeybindSetting__GetKeyDown(__this_00,false,(MethodInfo *)0x0);
      if (bVar20) {
        if (pCVar13 == (Cameras_BaseCamera_o *)0x0) goto label_1821fc3b0;
        pUVar15 = (pCVar13->fields).Camera;
        pUVar22 = UnityEngine_Input__get_mousePosition(&local_128,(MethodInfo *)0x0);
        if (pUVar15 == (UnityEngine_Camera_o *)0x0) goto label_1821fc3b0;
        local_148 = *(undefined1 (*) [8])&pUVar22->fields;
        pIStack_140 = (Il2CppMethodPointer)CONCAT44(pIStack_140._4_4_,(pUVar22->fields).z);
        pUVar23 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                            (local_d0,pUVar15,(UnityEngine_Vector3_o *)local_148,(MethodInfo *)0x0);
        pIVar4 = *(Il2CppMethodPointer *)&(pUVar23->fields).m_Origin.fields;
        pIVar5 = *(Il2CppMethodPointer *)&(pUVar23->fields).m_Origin.fields.z;
        pIVar6 = *(InvokerMethod *)&(pUVar23->fields).m_Direction.fields.y;
        layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
        if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        }
        if (layers == (System_Int32_array *)0x0) goto label_1821fc3b0;
        if ((int)layers->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo;
        UVar21 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        UVar21 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar21.fields.m_Mask,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        local_148 = (undefined1  [8])pIVar4;
        pIStack_140 = pIVar5;
        local_138 = pIVar6;
        bVar20 = UnityEngine_Physics__Raycast_2fe5050
                           ((UnityEngine_Ray_o *)local_148,(UnityEngine_RaycastHit_o *)&local_118,100000.0,
                            (int32_t)UVar21.fields.m_Mask,(MethodInfo *)0x0);
        if (bVar20) {
          __this_02 = UnityEngine_RaycastHit__get_collider
                                ((UnityEngine_RaycastHit_o *)&local_118,(MethodInfo *)0x0);
          if (__this_02 == (UnityEngine_Collider_o *)0x0) goto label_1821fc3b0;
          pUVar24 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_1821fc3b0;
          pUVar24 = UnityEngine_Transform__GetParent(pUVar24,(MethodInfo *)0x0);
          (__this->fields)._activeCircle = pUVar24;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._activeCircle,pUVar24);
          MapEditor_RotationGizmo__ResetColors(__this,(MethodInfo *)0x0);
          local_148 = *(undefined1 (*) [8])&(__this->fields).SelectedColor.fields;
          pIStack_140 = *(Il2CppMethodPointer *)&(__this->fields).SelectedColor.fields.b;
          MapEditor_RotationGizmo__SetCircleColor
                    (__this,(__this->fields)._activeCircle,(UnityEngine_Color_o *)local_148,(MethodInfo *)0x0)
          ;
          pUVar22 = UnityEngine_RaycastHit__get_point
                              ((UnityEngine_Vector3_o *)local_148,(UnityEngine_RaycastHit_o *)&local_118,
                               (MethodInfo *)0x0);
          fVar33 = (pUVar22->fields).z;
          fVar10 = (pUVar22->fields).y;
          (__this->fields)._previousMousePoint.fields.x = (pUVar22->fields).x;
          (__this->fields)._previousMousePoint.fields.y = fVar10;
          (__this->fields)._previousMousePoint.fields.z = fVar33;
          pGVar14 = (__this->fields)._gameManager;
          if (pGVar14 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821fc3b0;
          GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting(pGVar14,(MethodInfo *)0x0);
        }
      }
    }
    (__this->fields)._currentAngle = 0.0;
  }
  else {
    if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto label_1821fc3b0;
    bVar20 = Settings_KeybindSetting__GetKey(__this_00,false,(MethodInfo *)0x0);
    if (bVar20) {
      if (pCVar13 == (Cameras_BaseCamera_o *)0x0) goto label_1821fc3b0;
      pUVar15 = (pCVar13->fields).Camera;
      pUVar22 = UnityEngine_Input__get_mousePosition((UnityEngine_Vector3_o *)local_148,(MethodInfo *)0x0);
      if (pUVar15 == (UnityEngine_Camera_o *)0x0) goto label_1821fc3b0;
      local_158.x = (pUVar22->fields).x;
      local_158.y = (pUVar22->fields).y;
      local_158.z = (pUVar22->fields).z;
      pUVar23 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                          (local_d0,pUVar15,(UnityEngine_Vector3_o *)&local_158,(MethodInfo *)0x0);
      uVar1 = (__this->fields)._previousMousePoint.fields.x;
      uVar7 = (__this->fields)._previousMousePoint.fields.y;
      uVar2 = (pUVar23->fields).m_Origin.fields.x;
      uVar8 = (pUVar23->fields).m_Origin.fields.y;
      local_128.fields._0_8_ = *(undefined8 *)&(pUVar23->fields).m_Direction.fields;
      fVar29 = (float)local_128.fields._0_8_;
      local_158._0_8_ = CONCAT44((float)uVar7 - (float)uVar8,(float)uVar1 - (float)uVar2);
      fVar33 = (pUVar23->fields).m_Origin.fields.z;
      fVar10 = (pUVar23->fields).m_Direction.fields.z;
      local_158.z = (__this->fields)._previousMousePoint.fields.z - fVar33;
      pIStack_140 = (Il2CppMethodPointer)CONCAT44(pIStack_140._4_4_,local_158.z);
      local_148 = (undefined1  [8])local_158._0_8_;
      local_128.fields.z = fVar10;
      local_dc = (Il2CppClass *)local_128.fields._0_8_;
      fVar25 = (float)il2cpp_runtime_helper_181d9e200(&local_128,&local_158);
      fVar26 = (float)il2cpp_runtime_helper_180546a40(local_148,0);
      fVar25 = (float)il2cpp_runtime_helper_1804f54c0(fVar25 * 0.017453292);
      pUVar24 = (__this->fields)._activeCircle;
      fVar26 = fVar26 / fVar25;
      if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_1821fc3b0;
      fVar32 = local_dc._4_4_ * fVar26 + (float)uVar8;
      fVar34 = fVar29 * fVar26 + (float)uVar2;
      fVar33 = fVar10 * fVar26 + fVar33;
      pUVar22 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)local_148,pUVar24,(MethodInfo *)0x0);
      uVar3 = (__this->fields)._previousMousePoint.fields.x;
      uVar9 = (__this->fields)._previousMousePoint.fields.y;
      pIVar4 = *(Il2CppMethodPointer *)&pUVar22->fields;
      fVar30 = (float)((ulonglong)pIVar4 >> 0x20);
      fVar10 = (pUVar22->fields).z;
      fVar25 = (float)uVar3 - SUB84(pIVar4,0);
      fVar26 = (float)uVar9 - fVar30;
      fVar29 = (__this->fields)._previousMousePoint.fields.z - fVar10;
      local_158.y = fVar26;
      local_158.x = fVar25;
      local_158.z = fVar29;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar27 = (float)il2cpp_runtime_helper_180546a40(&local_158,0);
      if (fVar27 <= 1e-05) {
        pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar25 = (pUVar16->zeroVector).fields.x;
        fVar26 = (pUVar16->zeroVector).fields.y;
        fVar29 = (pUVar16->zeroVector).fields.z;
      }
      else {
        fVar25 = fVar25 / fVar27;
        fVar26 = fVar26 / fVar27;
        fVar29 = fVar29 / fVar27;
      }
      fVar31 = fVar33 - fVar10;
      fVar30 = fVar32 - fVar30;
      fVar27 = fVar34 - SUB84(pIVar4,0);
      local_158.y = fVar30;
      local_158.x = fVar27;
      local_158.z = fVar31;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar28 = (float)il2cpp_runtime_helper_180546a40(&local_158,0);
      if (fVar28 <= 1e-05) {
        pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar27 = (pUVar16->zeroVector).fields.x;
        fVar30 = (pUVar16->zeroVector).fields.y;
        fVar31 = (pUVar16->zeroVector).fields.z;
      }
      else {
        fVar27 = fVar27 / fVar28;
        fVar30 = fVar30 / fVar28;
        fVar31 = fVar31 / fVar28;
      }
      pUVar22 = MapEditor_RotationGizmo__GetAxis((UnityEngine_Vector3_o *)local_148,__this,(MethodInfo *)0x0);
      pIVar5 = *(Il2CppMethodPointer *)&pUVar22->fields;
      fVar28 = (pUVar22->fields).z;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      method_00 = (MethodInfo *)local_148;
      pIStack_140 = (Il2CppMethodPointer)CONCAT44(pIStack_140._4_4_,fVar28);
      local_128.fields._0_8_ = CONCAT44(fVar30,fVar27);
      local_158._0_8_ = CONCAT44(fVar26,fVar25);
      local_158.z = fVar29;
      local_148 = (undefined1  [8])pIVar5;
      local_128.fields.z = fVar31;
      fVar25 = Utility_Util__SignedAngle
                         ((UnityEngine_Vector3_o *)&local_158,&local_128,(UnityEngine_Vector3_o *)method_00,
                          (MethodInfo *)0x0);
      pGVar14 = (__this->fields)._gameManager;
      if (pGVar14 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821fc3b0;
      if ((pGVar14->fields).Snap != false) {
        pSVar17 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
        if ((pSVar17 == (Settings_MapEditorSettings_o *)0x0) ||
           (pSVar18 = (pSVar17->fields).SnapRotate, pSVar18 == (Settings_FloatSetting_o *)0x0))
        goto label_1821fc3b0;
        fVar25 = fVar25 + (__this->fields)._currentAngle;
        fVar26 = (pSVar18->fields)._value;
        (__this->fields)._currentAngle = fVar25;
        if (ABS(fVar25) <= fVar26) {
          fVar25 = 0.0;
        }
        else {
          fVar25 = (float)il2cpp_runtime_helper_180012930(fVar25 / fVar26);
          fVar25 = fVar25 * fVar26;
          fVar26 = il2cpp_runtime_helper_1804f41a0((__this->fields)._currentAngle,fVar26,method_00);
          (__this->fields)._currentAngle = fVar26;
        }
      }
      pUVar22 = MapEditor_RotationGizmo__GetAxis(&local_128,__this,(MethodInfo *)0x0);
      local_148 = *(undefined1 (*) [8])&pUVar22->fields;
      pIStack_140 = (Il2CppMethodPointer)CONCAT44(pIStack_140._4_4_,(pUVar22->fields).z);
      local_158._0_8_ = pIVar4;
      local_158.z = fVar10;
      MapEditor_RotationGizmo__RotateSelectedObjects
                (__this,(UnityEngine_Vector3_o *)&local_158,(UnityEngine_Vector3_o *)local_148,fVar25,
                 (MethodInfo *)0x0);
      MapEditor_RotationGizmo__ResetCenter(__this,(MethodInfo *)0x0);
      (__this->fields)._previousMousePoint.fields.x = fVar34;
      (__this->fields)._previousMousePoint.fields.y = fVar32;
      (__this->fields)._previousMousePoint.fields.z = fVar33;
    }
    else {
      pGVar14 = (__this->fields)._gameManager;
      if (pGVar14 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821fc3b0;
      GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting(pGVar14,(MethodInfo *)0x0);
      pGVar14 = (__this->fields)._gameManager;
      if (pGVar14 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821fc3b0;
      mapObjects = GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
                             (pGVar14,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_MapEditor_TransformPositionRotationCommand);
      MapEditor_TransformPositionRotationCommand___ctor(__this_01,mapObjects,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand
                (pGVar14,(MapEditor_BaseCommand_o *)__this_01,true,(MethodInfo *)0x0);
      MapEditor_RotationGizmo__ResetColors(__this,(MethodInfo *)0x0);
      (__this->fields)._activeCircle = (UnityEngine_Transform_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._activeCircle,(void *)0x0);
    }
    pGVar14 = (__this->fields)._gameManager;
    if (pGVar14 == (GameManagers_MapEditorGameManager_o *)0x0) {
label_1821fc3b0:
      ThrowNullReferenceException();
    }
    (pGVar14->fields).IgnoreNextSelect = true;
  }
  return;
}


// MapEditor.RotationGizmo$$GetAxis
// il2cpp: UnityEngine_Vector3_o MapEditor_RotationGizmo__GetAxis (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x1821fb150

UnityEngine_Vector3_o *
MapEditor_RotationGizmo__GetAxis
          (UnityEngine_Vector3_o *__return_storage_ptr__,MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  float fVar4;
  bool bVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector3_o local_38 [2];
  
  if (Il2CppMethodInitialized_184347044 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347044 = '\x01';
  }
  pUVar2 = (__this->fields)._activeCircle;
  pUVar3 = (__this->fields)._circleX;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar2 = (__this->fields)._transform;
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1821fb22e;
    pUVar6 = UnityEngine_Transform__get_right(local_38,pUVar2,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (__this->fields)._activeCircle;
    pUVar3 = (__this->fields)._circleY;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._transform;
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
label_1821fb22e:
      ThrowNullReferenceException();
    }
    if (bVar5) {
      pUVar6 = UnityEngine_Transform__get_up(local_38,pUVar2,(MethodInfo *)0x0);
    }
    else {
      pUVar6 = UnityEngine_Transform__get_forward(local_38,pUVar2,(MethodInfo *)0x0);
    }
  }
  fVar4 = (pUVar6->fields).y;
  fVar1 = (pUVar6->fields).z;
  (__return_storage_ptr__->fields).x = (pUVar6->fields).x;
  (__return_storage_ptr__->fields).y = fVar4;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// MapEditor.RotationGizmo$$RotateSelectedObjects
// il2cpp: void MapEditor_RotationGizmo__RotateSelectedObjects (MapEditor_RotationGizmo_o* __this, UnityEngine_Vector3_o center, UnityEngine_Vector3_o axis, float angle, const MethodInfo* method);
// 0x1821fb740
// eh: try 0x1821fb940..0x1821fba32 -> pad 0x183327470 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821fb9ed: mov rdx, qword ptr [rip + 0x1e8f834]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x1821fb9f4: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1821fb9f9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821fb9fe: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1821fba03: test rcx, rcx
// asm:   0x1821fba06: jne 0x1821fba32
// asm:   0x1821fba32: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183327470: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183327475: push rbp
// asm:   0x183327476: sub rsp, 0x30
// asm:   0x18332747a: mov rbp, rdx
// asm:   0x18332747d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183327481: mov rcx, qword ptr [rax]
// asm:   0x183327484: mov qword ptr [rbp + 0x60], rcx
// asm:   0x183327488: movabs rax, 0
// asm:   0x183327492: add rsp, 0x30
// asm:   0x183327496: pop rbp
// asm:   0x183327497: ret 

void MapEditor_RotationGizmo__RotateSelectedObjects
               (MapEditor_RotationGizmo_o *__this,UnityEngine_Vector3_o *center,UnityEngine_Vector3_o *axis,
               float angle,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *source;
  Il2CppObject *pIVar2;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  bool bVar3;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  undefined1 local_78 [16];
  Map_MapObject_o *local_68;
  System_Collections_Generic_HashSet_Enumerator_T__o local_60 [2];
  
  if (Il2CppMethodInitialized_184347045 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_MapEditor_RotationGizmo_c_RotateSelectedObjects_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_RotationGizmo_c);
    Il2CppMethodInitialized_184347045 = '\x01';
  }
  local_60[0].fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_60[0].fields._index = 0;
  local_60[0].fields._version = 0;
  local_60[0].fields._current = (Il2CppObject *)0x0;
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
    source = (pGVar1->fields).SelectedObjects;
    if ((TypeInfo_MapEditor_RotationGizmo_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_RotationGizmo_c);
    }
    __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                TypeInfo_MapEditor_RotationGizmo_c->static_fields->__9__16_0;
    if (__this_02 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
      if ((TypeInfo_MapEditor_RotationGizmo_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_RotationGizmo_c);
      }
      pIVar2 = (Il2CppObject *)TypeInfo_MapEditor_RotationGizmo_c->static_fields->__9;
      __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
      System_Func_object__int____ctor
                (__this_02,pIVar2,(intptr_t)MethodInfo_MapEditor_RotationGizmo_c_RotateSelectedObjects_b__16_0
                 ,(MethodInfo_AF4D50 *)0x0);
      TypeInfo_MapEditor_RotationGizmo_c->static_fields->__9__16_0 =
           (System_Func_MapObject__int__o *)__this_02;
      Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_RotationGizmo_c->static_fields->__9__16_0,__this_02);
    }
    collection = System_Linq_Enumerable__Select_Vector3__object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__TResult__o *)__this_02,
                            (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_176c3b0
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar1->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,__this_00,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_60[0].fields._set = (System_Collections_Generic_HashSet_T__o *)local_78._0_8_;
      local_60[0].fields._index = local_78._8_4_;
      local_60[0].fields._version = local_78._12_4_;
      local_60[0].fields._current = (Il2CppObject *)local_68;
      local_78._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_78._8_8_ = local_60;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (local_60,(MethodInfo_15381F0 *)
                                      MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext
                            );
          pIVar2 = local_60[0].fields._current;
          if (!bVar3) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
            return;
          }
          bVar3 = MapEditor_BaseGizmo__HasSelectedAncestor
                            ((Map_MapObject_o *)local_60[0].fields._current,__this_03,(MethodInfo *)0x0);
        } while (bVar3);
        if ((Map_MapObject_o *)pIVar2 == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = ((Map_MapObject_Fields *)((longlong)pIVar2 + 0x10))->GameObject;
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_04 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        if (__this_04 == (UnityEngine_Transform_o *)0x0) break;
        local_98.x = (axis->fields).x;
        local_98.y = (axis->fields).y;
        local_98.z = (axis->fields).z;
        local_88.x = (center->fields).x;
        local_88.y = (center->fields).y;
        local_88.z = (center->fields).z;
        UnityEngine_Transform__RotateAround
                  (__this_04,(UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)&local_98,angle,
                   (MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$ResetCenter
// il2cpp: void MapEditor_RotationGizmo__ResetCenter (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x1821fb390
// eh: try 0x1821fb4b9..0x1821fb6c7 -> pad 0x183326990 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821fb4cc: nop dword ptr [rax]
// asm:   0x1821fb5e8: mov rdx, qword ptr [rip + 0x1e8fc39]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x1821fb5ef: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821fb5f4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821fb5f9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821fb5fe: test rcx, rcx
// asm:   0x1821fb601: jne 0x1821fb6c7
// asm:   0x1821fb607: mov rsi, qword ptr [rsp + 0x100]
// asm:   0x1821fb60f: movss xmm8, dword ptr [rsp + 0x28]
// asm:   0x1821fb616: movss xmm7, dword ptr [rsp + 0x24]
// asm:   0x1821fb61c: movss xmm6, dword ptr [rsp + 0x20]
// asm:   0x1821fb6c7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183326990: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183326995: push rbp
// asm:   0x183326996: sub rsp, 0x20
// asm:   0x18332699a: mov rbp, rdx
// asm:   0x18332699d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x1833269a1: mov rcx, qword ptr [rax]
// asm:   0x1833269a4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x1833269a8: movabs rax, 0
// asm:   0x1833269b2: add rsp, 0x20
// asm:   0x1833269b6: pop rbp
// asm:   0x1833269b7: ret 

void MapEditor_RotationGizmo__ResetCenter(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Quaternion_StaticFields *pUVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  float fVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Vector3_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields local_d8;
  undefined1 local_c8 [16];
  System_Collections_Generic_HashSet_Enumerator_T__o local_b8;
  System_Collections_Generic_HashSet_Enumerator_T__o local_a0;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Vector3_o local_68 [6];
  
  if (Il2CppMethodInitialized_184347046 == '\0') {
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
    Il2CppMethodInitialized_184347046 = '\x01';
  }
  local_b8.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_b8.fields._index = 0;
  local_b8.fields._version = 0;
  local_b8.fields._current = (Il2CppObject *)0x0;
  local_d8.x = 0.0;
  local_d8.y = 0.0;
  local_d8.z = 0.0;
  pUVar8 = (__this->fields)._transform;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = TypeInfo_UnityEngine_Quaternion->static_fields;
    local_c8._0_4_ = (pUVar1->identityQuaternion).fields.x;
    local_c8._4_4_ = (pUVar1->identityQuaternion).fields.y;
    local_c8._8_8_ = *(undefined8 *)&(pUVar1->identityQuaternion).fields.z;
    UnityEngine_Transform__set_rotation(pUVar8,(UnityEngine_Quaternion_o *)local_c8,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._gameManager;
    if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar2->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                (&local_a0,__this_00,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_b8.fields._set = local_a0.fields._set;
      local_b8.fields._index = local_a0.fields._index;
      local_b8.fields._version = local_a0.fields._version;
      local_b8.fields._current = local_a0.fields._current;
      local_c8._0_4_ = 0.0;
      local_c8._4_4_ = 0.0;
      fVar11 = local_d8.x;
      fVar12 = local_d8.y;
      local_c8._8_8_ = &local_b8;
      while( true ) {
        fVar4 = local_d8.z;
        bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (&local_b8,
                           (MethodInfo_15381F0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
        pIVar5 = local_b8.fields._current;
        if (!bVar6) break;
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pGVar2->fields).CurrentGizmoMode == 1) {
          pSVar3 = (pGVar2->fields).SelectedObjects;
          if (pSVar3 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pSVar3->fields)._count != 1) goto label_1821fb577;
          if (local_b8.fields._current == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (local_b8.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = (__this->fields)._transform;
          __this_01 = UnityEngine_GameObject__get_transform
                                (local_b8.fields._current[1].monitor,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = UnityEngine_Transform__get_rotation
                             ((UnityEngine_Quaternion_o *)&local_a0,__this_01,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_78.x = (pUVar7->fields).x;
          local_78.y = (pUVar7->fields).y;
          local_78.z = (pUVar7->fields).z;
          local_78.w = (pUVar7->fields).w;
          UnityEngine_Transform__set_rotation(pUVar8,(UnityEngine_Quaternion_o *)&local_78,(MethodInfo *)0x0);
        }
        else {
label_1821fb577:
          if (local_b8.fields._current == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
        }
        if (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar8 = UnityEngine_GameObject__get_transform(pIVar5[1].monitor,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar9 = UnityEngine_Transform__get_position(local_68,pUVar8,(MethodInfo *)0x0);
        fVar11 = fVar11 + (pUVar9->fields).x;
        fVar12 = fVar12 + (pUVar9->fields).y;
        local_d8.y = fVar12;
        local_d8.x = fVar11;
        local_d8.z = fVar4 + (pUVar9->fields).z;
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_b8,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
      pGVar2 = (__this->fields)._gameManager;
      if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (pSVar3 = (pGVar2->fields).SelectedObjects,
         pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
        fVar10 = (float)(pSVar3->fields)._count;
        pUVar8 = (__this->fields)._transform;
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          local_d8.y = fVar12 / fVar10;
          local_d8.x = fVar11 / fVar10;
          local_d8.z = fVar4 / fVar10;
          UnityEngine_Transform__set_position(pUVar8,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$ResetColors
// il2cpp: void MapEditor_RotationGizmo__ResetColors (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x1821fb6d0

void MapEditor_RotationGizmo__ResetColors(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Color_Fields local_18;
  
  local_18.r = (__this->fields).CircleXColor.fields.r;
  local_18.g = (__this->fields).CircleXColor.fields.g;
  local_18.b = (__this->fields).CircleXColor.fields.b;
  local_18.a = (__this->fields).CircleXColor.fields.a;
  MapEditor_RotationGizmo__SetCircleColor
            (__this,(__this->fields)._circleX,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  local_18.r = (__this->fields).CircleYColor.fields.r;
  local_18.g = (__this->fields).CircleYColor.fields.g;
  local_18.b = (__this->fields).CircleYColor.fields.b;
  local_18.a = (__this->fields).CircleYColor.fields.a;
  MapEditor_RotationGizmo__SetCircleColor
            (__this,(__this->fields)._circleY,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  local_18.r = (__this->fields).CircleZColor.fields.r;
  local_18.g = (__this->fields).CircleZColor.fields.g;
  local_18.b = (__this->fields).CircleZColor.fields.b;
  local_18.a = (__this->fields).CircleZColor.fields.a;
  MapEditor_RotationGizmo__SetCircleColor
            (__this,(__this->fields)._circleZ,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  return;
}


// MapEditor.RotationGizmo$$SetCircleColor
// il2cpp: void MapEditor_RotationGizmo__SetCircleColor (MapEditor_RotationGizmo_o* __this, UnityEngine_Transform_o* line, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1821fba40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821fba9e: nop 

void MapEditor_RotationGizmo__SetCircleColor
               (MapEditor_RotationGizmo_o *__this,UnityEngine_Transform_o *line,UnityEngine_Color_o *color,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  System_Object_array *pSVar1;
  UnityEngine_Material_o *pUVar2;
  uint uVar3;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184347047 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    Il2CppMethodInitialized_184347047 = '\x01';
  }
  if (line != (UnityEngine_Transform_o *)0x0) {
    pSVar1 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)line,
                        (MethodInfo_665370 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer
                       );
    if (pSVar1 != (System_Object_array *)0x0) {
      uVar3 = 0;
      while( true ) {
        if ((int)pSVar1->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)pSVar1->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (UnityEngine_Renderer_o *)pSVar1->m_Items[(int)uVar3];
        if (__this_00 == (UnityEngine_Renderer_o *)0x0) break;
        pUVar2 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Material_o *)0x0) break;
        local_18.r = (color->fields).r;
        local_18.g = (color->fields).g;
        local_18.b = (color->fields).b;
        local_18.a = (color->fields).a;
        UnityEngine_Material__set_color(pUVar2,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Material_o *)0x0) break;
        UnityEngine_Material__set_renderQueue(pUVar2,0x1267,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$.ctor
// il2cpp: void MapEditor_RotationGizmo___ctor (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x1821fc3c0

void MapEditor_RotationGizmo___ctor(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  (__this->fields).SelectedColor.fields.r = 1.0;
  (__this->fields).CircleXColor.fields.b = 0.0;
  (__this->fields).CircleZColor.fields.g = 0.0;
  (__this->fields).SelectedColor.fields.g = 1.0;
  (__this->fields).SelectedColor.fields.b = 1.0;
  (__this->fields).SelectedColor.fields.a = 1.0;
  (__this->fields).CircleXColor.fields.r = 1.0;
  (__this->fields).CircleXColor.fields.g = 0.0;
  (__this->fields).CircleXColor.fields.a = 1.0;
  (__this->fields).CircleYColor.fields.r = 1.0;
  (__this->fields).CircleYColor.fields.g = 0.92156863;
  (__this->fields).CircleYColor.fields.b = 0.015686275;
  *(undefined8 *)&(__this->fields).CircleYColor.fields.a = 0x3f800000;
  (__this->fields).CircleZColor.fields.b = 1.0;
  (__this->fields).CircleZColor.fields.a = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


