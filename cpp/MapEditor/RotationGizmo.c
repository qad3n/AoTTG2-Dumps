// Type: MapEditor.RotationGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/MapEditor/RotationGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/RotationGIzmo.cs
// --------------------------------

// MapEditor.RotationGizmo.<>c$$.cctor
// il2cpp: void MapEditor_RotationGizmo___c___cctor (const MethodInfo* method);
// 0x5db4480

void MapEditor_RotationGizmo___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07548121 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_RotationGizmo_c);
    Il2CppMethodInitialized_07548121 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_RotationGizmo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_RotationGizmo_c->static_fields->__9 = (MapEditor_RotationGizmo___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_RotationGizmo_c->static_fields->__9);
  return;
}


// MapEditor.RotationGizmo.<>c$$.ctor
// il2cpp: void MapEditor_RotationGizmo___c___ctor (MapEditor_RotationGizmo___c_o* __this, const MethodInfo* method);
// 0x5db44f0

void MapEditor_RotationGizmo___c___ctor(MapEditor_RotationGizmo___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.RotationGizmo.<>c$$<RotateSelectedObjects>b__16_0
// il2cpp: int32_t MapEditor_RotationGizmo___c___RotateSelectedObjects_b__16_0 (MapEditor_RotationGizmo___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5db4500

int32_t MapEditor_RotationGizmo___c___RotateSelectedObjects_b__16_0
                  (MapEditor_RotationGizmo___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (o->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// MapEditor.RotationGizmo$$Create
// il2cpp: MapEditor_RotationGizmo_o* MapEditor_RotationGizmo__Create (const MethodInfo* method);
// 0x5db2bd0

MapEditor_RotationGizmo_o * MapEditor_RotationGizmo__Create(MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this;
  MapEditor_RotationGizmo_o *pMVar1;
  
  if (Il2CppMethodInitialized_07548118 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RotationGizmo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Gizmos/RotationGizmo");
    Il2CppMethodInitialized_07548118 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  __this = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Gizmos/RotationGizmo",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar1 = UnityEngine_GameObject__AddComponent_object_
                     (__this,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_RotationGizmo);
  UnityEngine_GameObject__SetActive(__this,false,(MethodInfo *)0x0);
  return pMVar1;
}


// MapEditor.RotationGizmo$$IsActive
// il2cpp: bool MapEditor_RotationGizmo__IsActive (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x5db2cc0

bool MapEditor_RotationGizmo__IsActive(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548119 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548119 = '\x01';
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
// 0x5db2d10

void MapEditor_RotationGizmo__Awake(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MapEditor_RotationGizmo_o *__this_00;
  
  if (Il2CppMethodInitialized_0754811a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CircleY");
    il2cpp_codegen_initialize_runtime_metadata(&"CircleZ");
    il2cpp_codegen_initialize_runtime_metadata(&"CircleX");
    Il2CppMethodInitialized_0754811a = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleX",(MethodInfo *)0x0);
    (__this->fields)._circleX = pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._circleX);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleY",(MethodInfo *)0x0);
      (__this->fields)._circleY = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._circleY);
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleZ",(MethodInfo *)0x0);
        __this_00 = (MapEditor_RotationGizmo_o *)&(__this->fields)._circleZ;
        (__this->fields)._circleZ = pUVar1;
        Il2CppCodeGenWriteBarrier((void **)__this_00);
        MapEditor_RotationGizmo__SetCircleColor
                  (__this_00,(__this->fields)._circleX,
                   (UnityEngine_Color_o)(__this->fields).CircleXColor.fields,method_00);
        MapEditor_RotationGizmo__SetCircleColor
                  (__this_00,(__this->fields)._circleY,
                   (UnityEngine_Color_o)(__this->fields).CircleYColor.fields,method_01);
        MapEditor_RotationGizmo__SetCircleColor
                  (__this_00,(__this->fields)._circleZ,
                   (UnityEngine_Color_o)(__this->fields).CircleZColor.fields,method_02);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$OnSelectionChange
// il2cpp: void MapEditor_RotationGizmo__OnSelectionChange (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x5db2e80

void MapEditor_RotationGizmo__OnSelectionChange(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  MapEditor_BaseGizmo_o *x;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MapEditor_RotationGizmo_o *__this_00;
  
  if (Il2CppMethodInitialized_0754811b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754811b = '\x01';
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
          method_03 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
          __this_00 = __this;
          MapEditor_RotationGizmo__ResetCenter(__this,method_03);
          MapEditor_RotationGizmo__SetCircleColor
                    (__this_00,(__this->fields)._circleX,
                     (UnityEngine_Color_o)(__this->fields).CircleXColor.fields,method_00);
          MapEditor_RotationGizmo__SetCircleColor
                    (__this_00,(__this->fields)._circleY,
                     (UnityEngine_Color_o)(__this->fields).CircleYColor.fields,method_01);
          MapEditor_RotationGizmo__SetCircleColor
                    (__this_00,(__this->fields)._circleZ,
                     (UnityEngine_Color_o)(__this->fields).CircleZColor.fields,method_02);
          return;
        }
        goto label_05db2f98;
      }
    }
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      return;
    }
  }
label_05db2f98:
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$Update
// il2cpp: void MapEditor_RotationGizmo__Update (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x5db32d0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db379a: jmp 0x5db3963
// asm:   0x5db3e61: movss dword ptr [rsp + 0x20], xmm0
// asm:   0x5db3e67: jmp 0x5db3edd

void MapEditor_RotationGizmo__Update(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint32_t uVar8;
  Settings_InputSettings_o *pSVar9;
  Settings_MapEditorInputSettings_o *pSVar10;
  Cameras_BaseCamera_o *pCVar11;
  Settings_KeybindSetting_o *selectKey;
  UnityEngine_Camera_o *pUVar12;
  Settings_MapEditorSettings_o *pSVar13;
  Settings_FloatSetting_o *pSVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  UnityEngine_Ray_o ray;
  UnityEngine_Vector3_o pos;
  undefined4 uVar18;
  undefined4 uVar19;
  bool bVar20;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  System_Int32_array *layers;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Transform_o *pUVar21;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MapEditor_TransformPositionRotationCommand_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar22;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MapEditor_RotationGizmo_o *__this_02;
  GameManagers_MapEditorGameManager_o *pGVar23;
  Il2CppClass *klass;
  MethodInfo *method_08;
  UnityEngine_Vector3_StaticFields *__return_storage_ptr__;
  float fVar24;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o from;
  UnityEngine_Vector3_o center;
  UnityEngine_Vector3_o to;
  UnityEngine_Vector3_o axis;
  float fStack_12c;
  float fStack_128;
  float fStack_108;
  float fStack_104;
  undefined1 auStack_e0 [28];
  float fStack_c4;
  Il2CppClass *pIStack_c0;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [16];
  UnityEngine_Vector3_Fields UStack_98;
  UnityEngine_Vector3_Fields UStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  UnityEngine_RaycastHit_o UStack_68;
  
  if (Il2CppMethodInitialized_0754811c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformPositionRotationCommand);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754811c = '\x01';
  }
  UStack_68.fields.m_UV.fields.x = 0.0;
  UStack_68.fields.m_UV.fields.y = 0.0;
  UStack_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  UStack_68.fields.m_Normal.fields.y = 0.0;
  UStack_68.fields.m_Normal.fields.z = 0.0;
  UStack_68.fields.m_FaceID = 0;
  UStack_68.fields.m_Distance = 0.0;
  UStack_68.fields.m_Point.fields.x = 0.0;
  UStack_68.fields.m_Point.fields.y = 0.0;
  UStack_68.fields.m_Point.fields.z = 0.0;
  UStack_68.fields.m_Normal.fields.x = 0.0;
  UStack_88.z = 0.0;
  UStack_88.x = 0.0;
  UStack_88.y = 0.0;
  UStack_98.z = 0.0;
  UStack_98.x = 0.0;
  UStack_98.y = 0.0;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if ((pSVar9 == (Settings_InputSettings_o *)0x0) ||
     (pSVar10 = (pSVar9->fields).MapEditor, pSVar10 == (Settings_MapEditorInputSettings_o *)0x0))
  goto label_05db3f56;
  pCVar11 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  selectKey = (pSVar10->fields).Select;
  pUVar21 = (__this->fields)._activeCircle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_02 = (MapEditor_RotationGizmo_o *)&(__this->fields)._activeCircle;
  bVar20 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar20) {
    bVar20 = MapEditor_BaseGizmo__TryGetPointerDown
                       ((MapEditor_BaseGizmo_o *)__this,selectKey,(UnityEngine_Vector3_o *)&UStack_88,
                        (MethodInfo *)0x0);
    if (!bVar20) {
label_05db3879:
      (__this->fields)._currentAngle = 0.0;
      return;
    }
    if ((pCVar11 != (Cameras_BaseCamera_o *)0x0) &&
       (pUVar12 = (pCVar11->fields).Camera, pUVar12 != (UnityEngine_Camera_o *)0x0)) {
      UVar32.fields.z = UStack_88.z;
      UVar32.fields.x = UStack_88.x;
      UVar32.fields.y = UStack_88.y;
      UnityEngine_Camera__ScreenPointToRay_68c1290
                ((UnityEngine_Ray_o *)auStack_e0,pUVar12,UVar32,(MethodInfo *)0x0);
      layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      if (layers != (System_Int32_array *)0x0) {
        if ((int)layers->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorGizmo;
        mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        ray.fields.m_Direction.fields.z = (float)auStack_e0._20_4_;
        ray.fields.m_Direction.fields.y = (float)auStack_e0._16_4_;
        ray.fields.m_Direction.fields.x = (float)auStack_e0._12_4_;
        ray.fields.m_Origin.fields.z = (float)auStack_e0._8_4_;
        ray.fields.m_Origin.fields.x = (float)auStack_e0._0_4_;
        ray.fields.m_Origin.fields.y = (float)auStack_e0._4_4_;
        bVar20 = UnityEngine_Physics__Raycast_69da1f0(ray,&UStack_68,100000.0,layerMask,(MethodInfo *)0x0);
        if (!bVar20) {
          MapEditor_BaseGizmo__CancelPointer((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
          goto label_05db3879;
        }
        __this_00 = UnityEngine_RaycastHit__get_collider(&UStack_68,(MethodInfo *)0x0);
        if ((__this_00 != (UnityEngine_Collider_o *)0x0) &&
           (pUVar21 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           pUVar21 != (UnityEngine_Transform_o *)0x0)) {
          pUVar21 = UnityEngine_Transform__get_parent(pUVar21,(MethodInfo *)0x0);
          (__this->fields)._activeCircle = pUVar21;
          Il2CppCodeGenWriteBarrier((void **)__this_02);
          MapEditor_RotationGizmo__SetCircleColor
                    (__this_02,(__this->fields)._circleX,
                     (UnityEngine_Color_o)(__this->fields).CircleXColor.fields,method_00);
          MapEditor_RotationGizmo__SetCircleColor
                    (__this_02,(__this->fields)._circleY,
                     (UnityEngine_Color_o)(__this->fields).CircleYColor.fields,method_01);
          MapEditor_RotationGizmo__SetCircleColor
                    (__this_02,(__this->fields)._circleZ,
                     (UnityEngine_Color_o)(__this->fields).CircleZColor.fields,method_02);
          MapEditor_RotationGizmo__SetCircleColor
                    (__this_02,(__this->fields)._activeCircle,
                     (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,method_03);
          UVar32 = UnityEngine_RaycastHit__get_point(&UStack_68,(MethodInfo *)0x0);
          (__this->fields)._previousMousePoint.fields.x = UVar32.fields.x;
          (__this->fields)._previousMousePoint.fields.y = UVar32.fields.y;
          (__this->fields)._previousMousePoint.fields.z = UVar32.fields.z;
          pGVar23 = (__this->fields)._gameManager;
          if (pGVar23 != (GameManagers_MapEditorGameManager_o *)0x0) {
            GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting(pGVar23,(MethodInfo *)0x0);
            (__this->fields)._currentAngle = 0.0;
            return;
          }
        }
      }
    }
    goto label_05db3f56;
  }
  bVar20 = MapEditor_BaseGizmo__IsPointerHeld
                     ((MapEditor_BaseGizmo_o *)__this,selectKey,(UnityEngine_Vector3_o *)&UStack_98,
                      (MethodInfo *)0x0);
  if (bVar20) {
    if ((pCVar11 == (Cameras_BaseCamera_o *)0x0) ||
       (pUVar12 = (pCVar11->fields).Camera, pUVar12 == (UnityEngine_Camera_o *)0x0)) goto label_05db3f56;
    pos.fields.z = UStack_98.z;
    pos.fields.x = UStack_98.x;
    pos.fields.y = UStack_98.y;
    __return_storage_ptr__ = (UnityEngine_Vector3_StaticFields *)auStack_e0;
    UnityEngine_Camera__ScreenPointToRay_68c1290
              ((UnityEngine_Ray_o *)__return_storage_ptr__,pUVar12,pos,(MethodInfo *)0x0);
    uVar2 = (__this->fields)._previousMousePoint.fields.x;
    uVar5 = (__this->fields)._previousMousePoint.fields.y;
    uStack_78 = (Il2CppMethodPointer)auStack_e0._0_8_;
    uStack_70._0_4_ = 0.0;
    uStack_70._4_4_ = 0.0;
    fVar29 = (float)uVar2 - auStack_e0._0_4_;
    fVar30 = (float)uVar5 - auStack_e0._4_4_;
    fVar27 = (__this->fields)._previousMousePoint.fields.z - (float)auStack_e0._8_4_;
    unique0x100007fb = (char *)CONCAT44(fVar30,fVar29);
    pIStack_c0 = (Il2CppClass *)0x0;
    if (Il2CppMethodInitialized_075450a4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_075450a4 = '\x01';
      fVar29 = (float)auStack_e0._24_4_;
      fVar30 = fStack_c4;
    }
    fVar24 = (float)auStack_e0._20_4_ * (float)auStack_e0._20_4_ +
             (float)auStack_e0._16_4_ * (float)auStack_e0._16_4_ +
             (float)auStack_e0._12_4_ * (float)auStack_e0._12_4_;
    auStack_a8._0_4_ = fVar27 * fVar27 + fVar30 * fVar30 + fVar29 * fVar29;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      fVar24 = fVar24 * (float)auStack_a8._0_4_;
      fVar29 = (float)auStack_e0._24_4_;
      fVar30 = fStack_c4;
      if (0.0 <= fVar24) goto label_05db3785;
label_05db38c7:
      fVar24 = sqrtf(fVar24);
      fVar29 = (float)auStack_e0._24_4_;
      fVar30 = fStack_c4;
      klass = (Il2CppClass *)TypeInfo_System_Math;
    }
    else {
      fVar24 = fVar24 * (float)auStack_a8._0_4_;
      if (fVar24 < 0.0) goto label_05db38c7;
label_05db3785:
      fVar24 = SQRT(fVar24);
      klass = (Il2CppClass *)TypeInfo_System_Math;
    }
    fVar26 = 0.0;
    TypeInfo_System_Math = (System_Math_c *)klass;
    if (1e-15 <= fVar24) {
      fVar24 = (fVar27 * (float)auStack_e0._20_4_ +
               fVar30 * (float)auStack_e0._16_4_ + fVar29 * (float)auStack_e0._12_4_) / fVar24;
      fVar29 = 1.0;
      if (fVar24 <= 1.0) {
        fVar29 = fVar24;
      }
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      dVar17 = acos((double)(float)(~-(uint)(-1.0 <= fVar24) & 0xbf800000 |
                                   (uint)fVar29 & -(uint)(-1.0 <= fVar24)),(MethodInfo *)klass);
      fVar26 = (float)dVar17 * 57.29578;
    }
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar8 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar8 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar8 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    auStack_b8._4_4_ = 0.0;
    uStack_b0 = 0.0;
    uStack_ac = 0.0;
    if ((float)auStack_a8._0_4_ < 0.0) {
      auStack_b8._0_4_ = sqrtf((float)auStack_a8._0_4_);
      auStack_b8._4_4_ = extraout_XMM0_Db;
      uStack_b0 = (float)extraout_XMM0_Dc;
      uStack_ac = (float)extraout_XMM0_Dd;
    }
    else {
      auStack_b8._0_4_ = SQRT((float)auStack_a8._0_4_);
    }
    fVar29 = cosf(fVar26 * 0.017453292);
    if (*(UnityEngine_Transform_o **)__this_02 == (UnityEngine_Transform_o *)0x0) goto label_05db3f56;
    method_07 = (MethodInfo *)0x0;
    UVar32 = UnityEngine_Transform__get_position(*(UnityEngine_Transform_o **)__this_02,(MethodInfo *)0x0);
    auStack_a8._8_4_ = extraout_XMM0_Dc_00;
    auStack_a8._0_8_ = UVar32.fields._0_8_;
    auStack_a8._12_4_ = extraout_XMM0_Dd_00;
    stack0xffffffffffffff38 = (char *)CONCAT44(fStack_c4,UVar32.fields.z);
    pUVar1 = &(__this->fields)._previousMousePoint;
    fVar30 = (pUVar1->fields).x;
    fVar27 = (__this->fields)._previousMousePoint.fields.y;
    uVar18 = (pUVar1->fields).x;
    uVar19 = (pUVar1->fields).y;
    fStack_128 = (__this->fields)._previousMousePoint.fields.z;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
      fVar30 = (float)uVar18;
      fVar27 = (float)uVar19;
    }
    else {
      auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
    }
    auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    auVar31._0_4_ = fVar30 - (float)auStack_a8._0_4_;
    auVar31._4_4_ = fVar27 - (float)auStack_a8._4_4_;
    auVar31._8_4_ = 0.0 - (float)auStack_a8._8_4_;
    auVar31._12_4_ = 0.0 - (float)auStack_a8._12_4_;
    fStack_128 = fStack_128 - (float)auStack_e0._24_4_;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar25 = 0;
    fVar30 = fStack_128 * fStack_128 + auVar31._4_4_ * auVar31._4_4_ + auVar31._0_4_ * auVar31._0_4_;
    if (fVar30 < 0.0) {
      auStack_b8._0_4_ = (float)auStack_b8._0_4_ / fVar29;
      fVar30 = sqrtf(fVar30);
      uVar25 = extraout_XMM0_Db_00;
      fVar29 = (float)auStack_b8._0_4_;
    }
    else {
      fVar30 = SQRT(fVar30);
      fVar29 = (float)auStack_b8._0_4_ / fVar29;
    }
    if (fVar30 <= 1e-05) {
      pUVar22 = TypeInfo_UnityEngine_Vector3->static_fields;
      fStack_128 = (pUVar22->zeroVector).fields.z;
    }
    else {
      fStack_128 = fStack_128 / fVar30;
      auVar15._4_4_ = fVar30;
      auVar15._0_4_ = fVar30;
      auVar15._8_4_ = uVar25;
      auVar15._12_4_ = uVar25;
      auVar31 = divps(auVar31,auVar15);
      auStack_e0._0_8_ = auVar31._0_8_;
      pUVar22 = (UnityEngine_Vector3_StaticFields *)auStack_e0;
    }
    uVar3 = (pUVar22->zeroVector).fields.x;
    uVar6 = (pUVar22->zeroVector).fields.y;
    from.fields.y = (float)uVar6;
    from.fields.x = (float)uVar3;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
    }
    fVar30 = (float)uStack_78 + (float)auStack_e0._12_4_ * fVar29;
    fVar27 = uStack_78._4_4_ + (float)auStack_e0._16_4_ * fVar29;
    uStack_70._0_4_ = (float)uStack_70 + fVar29 * 0.0;
    uStack_70._4_4_ = uStack_70._4_4_ + fVar29 * 0.0;
    fVar26 = (float)auStack_e0._8_4_ + (float)auStack_e0._20_4_ * fVar29;
    auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
    uStack_78 = (Il2CppMethodPointer)CONCAT44(fVar27,fVar30);
    fVar29 = (float)uStack_70;
    fVar24 = uStack_70._4_4_;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      fVar30 = (float)uStack_78;
      fVar27 = uStack_78._4_4_;
      fVar29 = (float)uStack_70;
      fVar24 = uStack_70._4_4_;
    }
    auVar28._0_4_ = fVar30 - (float)auStack_a8._0_4_;
    auVar28._4_4_ = fVar27 - (float)auStack_a8._4_4_;
    auVar28._8_4_ = fVar29 - (float)auStack_a8._8_4_;
    auVar28._12_4_ = fVar24 - (float)auStack_a8._12_4_;
    fStack_12c = fVar26 - (float)auStack_e0._24_4_;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar25 = 0;
    fVar29 = fStack_12c * fStack_12c + auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_;
    if (fVar29 < 0.0) {
      fVar29 = sqrtf(fVar29);
      uVar25 = extraout_XMM0_Db_01;
      if (fVar29 <= 1e-05) goto label_05db3c16;
label_05db3c59:
      fStack_12c = fStack_12c / fVar29;
      auVar16._4_4_ = fVar29;
      auVar16._0_4_ = fVar29;
      auVar16._8_4_ = uVar25;
      auVar16._12_4_ = uVar25;
      auVar31 = divps(auVar28,auVar16);
      auStack_e0._0_8_ = auVar31._0_8_;
    }
    else {
      fVar29 = SQRT(fVar29);
      if (1e-05 < fVar29) goto label_05db3c59;
label_05db3c16:
      __return_storage_ptr__ = TypeInfo_UnityEngine_Vector3->static_fields;
      fStack_12c = (((UnityEngine_Ray_Fields *)&__return_storage_ptr__->zeroVector)->m_Origin).fields.z;
    }
    uVar4 = (__return_storage_ptr__->zeroVector).fields.x;
    uVar7 = (__return_storage_ptr__->zeroVector).fields.y;
    to.fields.y = (float)uVar7;
    to.fields.x = (float)uVar4;
    UVar32 = MapEditor_RotationGizmo__GetAxis(__this,method_07);
    fVar29 = UVar32.fields.x;
    fVar30 = UVar32.fields.y;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      uStack_b0 = (float)extraout_XMM0_Dc_01;
      auStack_b8 = (undefined1  [8])UVar32.fields._0_8_;
      uStack_ac = (float)extraout_XMM0_Dd_01;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      fVar29 = (float)auStack_b8._0_4_;
      fVar30 = (float)auStack_b8._4_4_;
    }
    from.fields.z = fStack_128;
    to.fields.z = fStack_12c;
    axis.fields.y = fVar30;
    axis.fields.x = fVar29;
    axis.fields.z = UVar32.fields.z;
    fStack_128 = Utility_Util__SignedAngle(from,to,axis,(MethodInfo *)0x0);
    pGVar23 = (__this->fields)._gameManager;
    if (pGVar23 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05db3f56;
    if ((pGVar23->fields).Snap != false) {
      pSVar13 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
      if ((pSVar13 == (Settings_MapEditorSettings_o *)0x0) ||
         (pSVar14 = (pSVar13->fields).SnapRotate, pSVar14 == (Settings_FloatSetting_o *)0x0))
      goto label_05db3f56;
      fVar29 = (pSVar14->fields)._value;
      fVar30 = fStack_128 + (__this->fields)._currentAngle;
      (__this->fields)._currentAngle = fVar30;
      fStack_128 = 0.0;
      if (fVar29 < ABS(fVar30)) {
        fVar30 = fVar30 / fVar29;
        method_08 = (MethodInfo *)auStack_e0;
        dVar17 = modf((double)fVar30,(double *)method_08,method_07);
        if (0.0 <= fVar30) {
          if ((dVar17 != 0.5) || (NAN(dVar17))) {
            fStack_128 = floorf(fVar30 + 0.5);
          }
          else {
            fStack_128 = (float)(double)auStack_e0._0_8_;
            if (((long)(double)auStack_e0._0_8_ & 1U) != 0) {
              fStack_128 = fStack_128 + 1.0;
            }
          }
        }
        else if ((dVar17 != -0.5) || (NAN(dVar17))) {
          fStack_128 = ceilf(fVar30 + -0.5);
        }
        else {
          fStack_128 = (float)(double)auStack_e0._0_8_;
          if (((long)(double)auStack_e0._0_8_ & 1U) != 0) {
            fStack_128 = fStack_128 + -1.0;
          }
        }
        fStack_128 = fStack_128 * fVar29;
        fVar29 = fmodf((__this->fields)._currentAngle,fVar29,method_08);
        (__this->fields)._currentAngle = fVar29;
      }
    }
    UVar32 = MapEditor_RotationGizmo__GetAxis(__this,method_07);
    center.fields.z = (float)auStack_e0._24_4_;
    center.fields.x = (float)auStack_a8._0_4_;
    center.fields.y = (float)auStack_a8._4_4_;
    MapEditor_RotationGizmo__RotateSelectedObjects(__this,center,UVar32,fStack_128,method_07);
    MapEditor_RotationGizmo__ResetCenter(__this,method_07);
    *(Il2CppMethodPointer *)&(__this->fields)._previousMousePoint.fields = uStack_78;
    (__this->fields)._previousMousePoint.fields.z = fVar26;
  }
  else {
    pGVar23 = (__this->fields)._gameManager;
    if (pGVar23 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05db3f56;
    GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting(pGVar23,(MethodInfo *)0x0);
    pGVar23 = (__this->fields)._gameManager;
    if (pGVar23 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05db3f56;
    mapObjects = GameManagers_MapEditorGameManager__GetSelectedObjectsForTransformCommand
                           (pGVar23,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformPositionRotationCommand);
    MapEditor_TransformPositionRotationCommand___ctor(__this_01,mapObjects,(MethodInfo *)0x0);
    GameManagers_MapEditorGameManager__NewCommand
              (pGVar23,(MapEditor_BaseCommand_o *)__this_01,true,(MethodInfo *)0x0);
    MapEditor_RotationGizmo__SetCircleColor
              ((MapEditor_RotationGizmo_o *)pGVar23,(__this->fields)._circleX,
               (UnityEngine_Color_o)(__this->fields).CircleXColor.fields,method_04);
    MapEditor_RotationGizmo__SetCircleColor
              ((MapEditor_RotationGizmo_o *)pGVar23,(__this->fields)._circleY,
               (UnityEngine_Color_o)(__this->fields).CircleYColor.fields,method_05);
    MapEditor_RotationGizmo__SetCircleColor
              ((MapEditor_RotationGizmo_o *)pGVar23,(__this->fields)._circleZ,
               (UnityEngine_Color_o)(__this->fields).CircleZColor.fields,method_06);
    (__this->fields)._activeCircle = (UnityEngine_Transform_o *)0x0;
    Il2CppCodeGenWriteBarrier((void **)__this_02);
  }
  pGVar23 = (__this->fields)._gameManager;
  if (pGVar23 != (GameManagers_MapEditorGameManager_o *)0x0) {
    (pGVar23->fields).IgnoreNextSelect = true;
    return;
  }
label_05db3f56:
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$GetAxis
// il2cpp: UnityEngine_Vector3_o MapEditor_RotationGizmo__GetAxis (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x5db4040

UnityEngine_Vector3_o MapEditor_RotationGizmo__GetAxis(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  bool bVar3;
  UnityEngine_Vector3_Fields UVar4;
  
  if (Il2CppMethodInitialized_0754811d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754811d = '\x01';
  }
  pUVar1 = (__this->fields)._circleX;
  pUVar2 = (__this->fields)._activeCircle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UVar4 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_right(pUVar1,(MethodInfo *)0x0);
      return (UnityEngine_Vector3_o)UVar4;
    }
  }
  else {
    pUVar1 = (__this->fields)._circleY;
    pUVar2 = (__this->fields)._activeCircle;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._transform;
    if (bVar3) {
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UVar4 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_up(pUVar1,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar4;
      }
    }
    else if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UVar4 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_forward(pUVar1,(MethodInfo *)0x0);
      return (UnityEngine_Vector3_o)UVar4;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$RotateSelectedObjects
// il2cpp: void MapEditor_RotationGizmo__RotateSelectedObjects (MapEditor_RotationGizmo_o* __this, UnityEngine_Vector3_o center, UnityEngine_Vector3_o axis, float angle, const MethodInfo* method);
// 0x5db4120
// eh: try 0x5db4324..0x5db43b9 -> pad 0x5db43ca (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db43e2..0x5db43e7 -> pad 0x5db4408 cleanup
// eh: try 0x5db440b..0x5db4415 -> pad 0x5db441d catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db4209: jmp 0x5db4224
// asm:   0x5db431f: nop 
// asm:   0x5db43be: jmp 0x5db43ca
// asm:   0x5db43c0: jmp 0x5db43ca
// asm:   0x5db43c2: jmp 0x5db43ca
// asm:   0x5db43c4: jmp 0x5db43ca
// asm:   0x5db43c6: jmp 0x5db43ca
// asm:   0x5db43c8: jmp 0x5db43ca
// asm:   0x5db43ca: mov rbx, rax
// asm:   0x5db43cd: cmp edx, 1
// asm:   0x5db43d0: jne 0x5db440b
// asm:   0x5db43d2: mov rdi, rbx
// asm:   0x5db43d5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db43da: mov rbx, qword ptr [rax]
// asm:   0x5db43dd: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5db43e2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db43e7: lea rax, [rip + 0x14d9fba]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x5db43ee: mov rsi, qword ptr [rax]
// asm:   0x5db43f1: lea rdi, [rsp + 0x30]
// asm:   0x5db43f6: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5db43fb: test rbx, rbx
// asm:   0x5db43fe: je 0x5db439c
// asm:   0x5db4400: mov rdi, rbx
// asm:   0x5db4403: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db4408: mov rbx, rax
// asm:   0x5db440b: lea rdi, [rsp + 0x18]
// asm:   0x5db4410: call 0x2fddf90  ; il2cpp_runtime_helper_02fddf90()
// asm:   0x5db4415: mov rdi, rbx
// asm:   0x5db4418: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db441d: mov rdi, rax
// asm:   0x5db4420: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_RotationGizmo__RotateSelectedObjects
               (MapEditor_RotationGizmo_o *__this,UnityEngine_Vector3_o center,UnityEngine_Vector3_o axis,
               float angle,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *source;
  Il2CppObject *pIVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  bool bVar3;
  MapEditor_RotationGizmo___c_StaticFields *pMVar4;
  System_Func_MapObject__int__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_03;
  UnityEngine_Transform_o *__this_04;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o axis_00;
  undefined1 local_80 [16];
  Map_MapObject_o *local_70;
  System_Collections_Generic_HashSet_Enumerator_T__o local_68;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  axis_00.fields.z = axis.fields.z;
  point.fields.z = center.fields.z;
  local_38._8_4_ = in_XMM2_Dc;
  local_38._0_8_ = axis.fields._0_8_;
  local_38._12_4_ = in_XMM2_Dd;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = center.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_0754811e == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_MapEditor_RotationGizmo_c_RotateSelectedObjects_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_RotationGizmo_c);
    Il2CppMethodInitialized_0754811e = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) {
    source = (pGVar1->fields).SelectedObjects;
    if ((TypeInfo_MapEditor_RotationGizmo_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_RotationGizmo_c);
      pMVar4 = TypeInfo_MapEditor_RotationGizmo_c->static_fields;
      __this_02 = pMVar4->__9__16_0;
    }
    else {
      pMVar4 = TypeInfo_MapEditor_RotationGizmo_c->static_fields;
      __this_02 = pMVar4->__9__16_0;
    }
    if (__this_02 == (System_Func_MapObject__int__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_MapEditor_RotationGizmo_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_RotationGizmo_c);
        pMVar4 = TypeInfo_MapEditor_RotationGizmo_c->static_fields;
      }
      pIVar2 = (Il2CppObject *)pMVar4->__9;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
      System_Func_object__int____ctor
                ((System_Func_object__int__o *)__this_02,pIVar2,
                 (intptr_t)MethodInfo_MapEditor_RotationGizmo_c_RotateSelectedObjects_b__16_0,
                 (MethodInfo_4F198F0 *)0x0);
      pMVar4 = TypeInfo_MapEditor_RotationGizmo_c->static_fields;
      pMVar4->__9__16_0 = __this_02;
      Il2CppCodeGenWriteBarrier(&pMVar4->__9__16_0);
    }
    collection = System_Linq_Enumerable__Select_object__int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                            (System_Func_TSource__TResult__o *)__this_02,
                            (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor_4fa7660
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_80,__this_00,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_68.fields._current = (Il2CppObject *)local_70;
      local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)local_80._0_8_;
      local_68.fields._index = local_80._8_4_;
      local_68.fields._version = local_80._12_4_;
      local_80._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_80._8_8_ = &local_68;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&local_68,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
          pIVar2 = local_68.fields._current;
          if (!bVar3) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (&local_68,
                       (MethodInfo_4C456C0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
            return;
          }
          bVar3 = MapEditor_BaseGizmo__HasSelectedAncestor
                            ((Map_MapObject_o *)local_68.fields._current,__this_03,(MethodInfo *)0x0);
        } while (bVar3);
        if ((Map_MapObject_o *)pIVar2 == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = ((Map_MapObject_Fields *)((long)pIVar2 + 0x10))->GameObject;
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_04 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        if (__this_04 == (UnityEngine_Transform_o *)0x0) break;
        point.fields.x = (float)local_48._0_4_;
        point.fields.y = (float)local_48._4_4_;
        axis_00.fields.x = (float)local_38._0_4_;
        axis_00.fields.y = (float)local_38._4_4_;
        UnityEngine_Transform__RotateAround(__this_04,point,axis_00,angle,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$ResetCenter
// il2cpp: void MapEditor_RotationGizmo__ResetCenter (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x5db2fa0
// eh: try 0x5db30d4..0x5db3241 -> pad 0x5db3262 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5db327a..0x5db327f -> pad 0x5db32a4 cleanup
// eh: try 0x5db32a7..0x5db32b1 -> pad 0x5db32b9 catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db3246: jmp 0x5db3262
// asm:   0x5db3248: jmp 0x5db3262
// asm:   0x5db324a: jmp 0x5db3262
// asm:   0x5db324c: jmp 0x5db3262
// asm:   0x5db324e: jmp 0x5db3262
// asm:   0x5db3250: jmp 0x5db3262
// asm:   0x5db3252: jmp 0x5db3262
// asm:   0x5db3254: jmp 0x5db3262
// asm:   0x5db3256: jmp 0x5db3262
// asm:   0x5db3258: jmp 0x5db3262
// asm:   0x5db325a: jmp 0x5db3262
// asm:   0x5db325c: jmp 0x5db3262
// asm:   0x5db325e: jmp 0x5db3262
// asm:   0x5db3260: jmp 0x5db3262
// asm:   0x5db3262: mov rbx, rax
// asm:   0x5db3265: cmp edx, 1
// asm:   0x5db3268: jne 0x5db32a7
// asm:   0x5db326a: mov rdi, rbx
// asm:   0x5db326d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5db3272: mov rbx, qword ptr [rax]
// asm:   0x5db3275: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5db327a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5db327f: lea rax, [rip + 0x14db122]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x5db3286: mov rsi, qword ptr [rax]
// asm:   0x5db3289: lea rdi, [rsp + 0x10]
// asm:   0x5db328e: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5db3293: test rbx, rbx
// asm:   0x5db3296: je 0x5db31c6
// asm:   0x5db329c: mov rdi, rbx
// asm:   0x5db329f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5db32a4: mov rbx, rax
// asm:   0x5db32a7: lea rdi, [rsp + 0x28]
// asm:   0x5db32ac: call 0x2fddfc0  ; il2cpp_runtime_helper_02fddfc0()
// asm:   0x5db32b1: mov rdi, rbx
// asm:   0x5db32b4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5db32b9: mov rdi, rax
// asm:   0x5db32bc: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_RotationGizmo__ResetCenter(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  undefined1 auVar3 [16];
  Il2CppObject *pIVar4;
  bool bVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *pUVar6;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar7 [16];
  float fVar8;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar9;
  float local_6c;
  undefined1 local_68 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_60;
  Il2CppObject *local_58;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (Il2CppMethodInitialized_0754811f == '\0') {
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
    Il2CppMethodInitialized_0754811f = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  pUVar6 = (__this->fields)._transform;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
  }
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_rotation
              (pUVar6,(UnityEngine_Quaternion_o)
                      *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
               (MethodInfo *)0x0);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,__this_00,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
      local_58 = local_40;
      local_68 = (undefined1  [8])local_50._0_8_;
      pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_50._8_8_;
      local_50._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_6c = 0.0;
      local_38 = 0.0;
      fStack_34 = 0.0;
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      local_50._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
      while( true ) {
        bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
        pIVar4 = local_58;
        if (!bVar5) break;
        pGVar1 = (__this->fields)._gameManager;
        if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pGVar1->fields).CurrentGizmoMode == 1) {
          pSVar2 = (pGVar1->fields).SelectedObjects;
          if (pSVar2 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pSVar2->fields)._count != 1) goto label_05db3160;
          if (local_58 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (local_58[1].monitor == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar6 = (__this->fields)._transform;
          __this_01 = UnityEngine_GameObject__get_transform(local_58[1].monitor,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          value = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Transform__set_rotation(pUVar6,value,(MethodInfo *)0x0);
        }
        else {
label_05db3160:
          if (local_58 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
        }
        if (pIVar4[1].monitor == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar6 = UnityEngine_GameObject__get_transform(pIVar4[1].monitor,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
        local_38 = local_38 + UVar9.fields.x;
        fStack_34 = fStack_34 + UVar9.fields.y;
        fStack_30 = fStack_30 + extraout_XMM0_Dc;
        fStack_2c = fStack_2c + extraout_XMM0_Dd;
        local_6c = local_6c + UVar9.fields.z;
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                 (MethodInfo_4C456C0 *)
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
      pGVar1 = (__this->fields)._gameManager;
      if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pSVar2 = (pGVar1->fields).SelectedObjects,
          pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
         (pUVar6 = (__this->fields)._transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        fVar8 = (float)(pSVar2->fields)._count;
        UVar9.fields.z = local_6c / fVar8;
        auVar3._4_4_ = fStack_34;
        auVar3._0_4_ = local_38;
        auVar3._8_4_ = fStack_30;
        auVar3._12_4_ = fStack_2c;
        auVar7._4_4_ = fVar8;
        auVar7._0_4_ = fVar8;
        auVar7._8_4_ = fVar8;
        auVar7._12_4_ = fVar8;
        auVar7 = divps(auVar3,auVar7);
        UVar9.fields._0_8_ = auVar7._0_8_;
        UnityEngine_Transform__set_position(pUVar6,UVar9,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$ResetColors
// il2cpp: void MapEditor_RotationGizmo__ResetColors (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x5db2e30

void MapEditor_RotationGizmo__ResetColors(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MapEditor_RotationGizmo_o *__this_00;
  
  __this_00 = __this;
  MapEditor_RotationGizmo__SetCircleColor
            (__this,(__this->fields)._circleX,(UnityEngine_Color_o)(__this->fields).CircleXColor.fields,in_RDX
            );
  MapEditor_RotationGizmo__SetCircleColor
            (__this_00,(__this->fields)._circleY,(UnityEngine_Color_o)(__this->fields).CircleYColor.fields,
             method_00);
  MapEditor_RotationGizmo__SetCircleColor
            (__this_00,(__this->fields)._circleZ,(UnityEngine_Color_o)(__this->fields).CircleZColor.fields,
             method_01);
  return;
}


// MapEditor.RotationGizmo$$SetCircleColor
// il2cpp: void MapEditor_RotationGizmo__SetCircleColor (MapEditor_RotationGizmo_o* __this, UnityEngine_Transform_o* line, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5db3f60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5db3fbe: nop 

void MapEditor_RotationGizmo__SetCircleColor
               (MapEditor_RotationGizmo_o *__this,UnityEngine_Transform_o *line,UnityEngine_Color_o color,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_Material_o *pUVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_07548120 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    Il2CppMethodInitialized_07548120 = '\x01';
  }
  if (line != (UnityEngine_Transform_o *)0x0) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)line,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          if (uVar1 <= uVar4) {
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar4];
          if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto label_05db4028;
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_05db4028;
          UnityEngine_Material__set_color(pUVar3,color,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_05db4028;
          UnityEngine_Material__set_renderQueue(pUVar3,0x1267,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar4 < (int)uVar1);
      }
      return;
    }
  }
label_05db4028:
  ThrowNullReferenceException();
}


// MapEditor.RotationGizmo$$.ctor
// il2cpp: void MapEditor_RotationGizmo___ctor (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x5db4430

void MapEditor_RotationGizmo___ctor(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  (__this->fields).SelectedColor.fields.r = 1.0;
  (__this->fields).SelectedColor.fields.g = 1.0;
  (__this->fields).SelectedColor.fields.b = 1.0;
  (__this->fields).SelectedColor.fields.a = 1.0;
  (__this->fields).CircleXColor.fields.r = 1.0;
  (__this->fields).CircleXColor.fields.g = 0.0;
  (__this->fields).CircleXColor.fields.b = 0.0;
  (__this->fields).CircleXColor.fields.a = 1.0;
  (__this->fields).CircleYColor.fields.r = 1.0;
  (__this->fields).CircleYColor.fields.g = 0.92156863;
  (__this->fields).CircleYColor.fields.b = 0.015686275;
  (__this->fields).CircleYColor.fields.a = 1.0;
  (__this->fields).CircleZColor.fields.r = 0.0;
  (__this->fields).CircleZColor.fields.g = 0.0;
  (__this->fields).CircleZColor.fields.b = 1.0;
  (__this->fields).CircleZColor.fields.a = 1.0;
  MapEditor_BaseGizmo___ctor((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  return;
}


