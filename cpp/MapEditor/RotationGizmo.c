// Type: MapEditor.RotationGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/RotationGizmo.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Gizmos/RotationGIzmo.cs  [CHANGED since prior version]
// --------------------------------

// MapEditor.RotationGizmo$$Create
// il2cpp: MapEditor_RotationGizmo_o* MapEditor_RotationGizmo__Create (const MethodInfo* method);
// 0x415d490

MapEditor_RotationGizmo_o * MapEditor_RotationGizmo__Create(MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this;
  MapEditor_RotationGizmo_o *pMVar1;
  
  if (DAT_05704a34 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RotationGizmo_AddComponent_RotationGizmo);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Gizmos/RotationGizmo");
    DAT_05704a34 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     (path,"Gizmos/RotationGizmo",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pMVar1 = (MapEditor_RotationGizmo_o *)
             UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_RotationGizmo_AddComponent_RotationGizmo);
    UnityEngine_GameObject__SetActive(__this,0,(MethodInfo *)0x0);
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.RotationGizmo$$IsActive
// il2cpp: bool MapEditor_RotationGizmo__IsActive (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x415d580

bool_conflict
MapEditor_RotationGizmo__IsActive(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool_conflict bVar1;
  
  if (DAT_05704a35 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a35 = '\x01';
  }
  x = (__this->fields)._activeCircle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// MapEditor.RotationGizmo$$Awake
// il2cpp: void MapEditor_RotationGizmo__Awake (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x415d5d0

void MapEditor_RotationGizmo__Awake(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MapEditor_RotationGizmo_o *__this_00;
  
  if (DAT_05704a36 == '\0') {
    il2cpp_init_method_metadata(&"CircleY");
    il2cpp_init_method_metadata(&"CircleZ");
    il2cpp_init_method_metadata(&"CircleX");
    DAT_05704a36 = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleX",(MethodInfo *)0x0);
    (__this->fields)._circleX = pUVar1;
    il2cpp_runtime_glue(&(__this->fields)._circleX,pUVar1);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleY",(MethodInfo *)0x0);
      (__this->fields)._circleY = pUVar1;
      il2cpp_runtime_glue(&(__this->fields)._circleY,pUVar1);
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleZ",(MethodInfo *)0x0);
        __this_00 = (MapEditor_RotationGizmo_o *)&(__this->fields)._circleZ;
        (__this->fields)._circleZ = pUVar1;
        il2cpp_runtime_glue(__this_00,pUVar1);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.RotationGizmo$$OnSelectionChange
// il2cpp: void MapEditor_RotationGizmo__OnSelectionChange (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x415d730

void MapEditor_RotationGizmo__OnSelectionChange
               (MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  MapEditor_BaseGizmo_o *x;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MapEditor_RotationGizmo_o *__this_00;
  
  if (DAT_05704a37 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a37 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).SelectedObjects,
     pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if (0 < (pSVar2->fields)._count) {
      x = (pGVar1->fields).CurrentGizmo;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0)
      ;
      if ((char)bVar3 != '\0') {
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          method_03 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar4,1,(MethodInfo *)0x0);
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
        goto LAB_0415d83e;
      }
    }
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0415d83e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.RotationGizmo$$Update
// il2cpp: void MapEditor_RotationGizmo__Update (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x415dc10

void MapEditor_RotationGizmo__Update(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  ulong uVar2;
  int iVar4;
  long lVar5;
  long lVar6;
  Settings_KeybindSetting_o *__this_00;
  UI_MapEditorMenu_o *pUVar7;
  UnityEngine_Camera_o *pUVar8;
  System_Collections_Generic_HashSet_MapObject__o *collection;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  undefined1 auVar12 [16];
  float fVar13;
  bool_conflict bVar14;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  System_Int32_array *layers;
  UnityEngine_Collider_o *__this_03;
  UnityEngine_Transform_o *pUVar15;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MapEditor_TransformPositionRotationCommand_o *__this_04;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *pMVar16;
  MapEditor_RotationGizmo_o *__this_05;
  GameManagers_MapEditorGameManager_o *pGVar17;
  MethodInfo *method_07;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o from;
  UnityEngine_Vector3_o to;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined4 in_stack_fffffffffffffed0;
  undefined4 in_stack_fffffffffffffed4;
  undefined4 in_stack_fffffffffffffed8;
  undefined4 in_stack_fffffffffffffedc;
  int32_t in_stack_fffffffffffffee0;
  undefined8 uStack_108;
  float fStack_e8;
  undefined1 auStack_c8 [8];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [8];
  _union_13 _Stack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  Il2CppMethodPointer pIStack_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  uint32_t uStack_60;
  float fStack_5c;
  float fStack_58;
  undefined8 uStack_54;
  undefined1 auStack_48 [24];
  
  if (DAT_05704a38 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TransformPositionRotationCommand);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704a38 = '\x01';
  }
  fStack_58 = 0.0;
  uStack_54 = 0;
  pIStack_68 = (InvokerMethod)0x0;
  uStack_60 = 0;
  fStack_5c = 0.0;
  pIStack_78 = (Il2CppMethodPointer)0x0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x50), lVar5 == 0)) goto LAB_0415e840;
  lVar6 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  __this_00 = *(Settings_KeybindSetting_o **)(lVar5 + 0x78);
  pUVar15 = (__this->fields)._activeCircle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_05 = (MapEditor_RotationGizmo_o *)&(__this->fields)._activeCircle;
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar14 != '\0') {
    pUVar7 = (__this->fields)._menu;
    if (pUVar7 != (UI_MapEditorMenu_o *)0x0) {
      if ((char)(pUVar7->fields).IsMouseUI != '\0') {
LAB_0415df65:
        (__this->fields)._currentAngle = 0.0;
        return;
      }
      if (__this_00 != (Settings_KeybindSetting_o *)0x0) {
        bVar14 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') goto LAB_0415df65;
        if (lVar6 != 0) {
          pUVar8 = *(UnityEngine_Camera_o **)(lVar6 + 0x20);
          UVar34 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Camera_o *)0x0) {
            UnityEngine_Camera__ScreenPointToRay
                      ((UnityEngine_Ray_o *)auStack_48,pUVar8,UVar34,(MethodInfo *)0x0);
            fStack_b8 = (float)auStack_48._16_8_;
            fStack_b4 = SUB84(auStack_48._16_8_,4);
            auStack_c8._0_4_ = auStack_48._0_4_;
            auStack_c8._4_4_ = auStack_48._4_4_;
            fStack_c0 = (float)auStack_48._8_4_;
            fStack_bc = (float)auStack_48._12_4_;
            layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
            if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (layers != (System_Int32_array *)0x0) {
              if ((int)layers->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x44);
              mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                il2cpp_init_class();
              }
              uVar38 = CONCAT44(fStack_b4,fStack_b8);
              uVar36 = CONCAT44(auStack_c8._4_4_,auStack_c8._0_4_);
              uVar37 = CONCAT44(fStack_bc,fStack_c0);
              ray.fields.m_Origin.fields.z = fStack_c0;
              ray.fields.m_Direction.fields.x = fStack_bc;
              ray.fields.m_Origin.fields.x = (float)auStack_c8._0_4_;
              ray.fields.m_Origin.fields.y = (float)auStack_c8._4_4_;
              ray.fields.m_Direction.fields.y = fStack_b8;
              ray.fields.m_Direction.fields.z = fStack_b4;
              bVar14 = UnityEngine_Physics__Raycast
                                 (ray,(UnityEngine_RaycastHit_o *)&pIStack_78,100000.0,layerMask,
                                  (MethodInfo *)0x0);
              if ((char)bVar14 != '\0') {
                __this_01.fields.m_Point.fields.z = (float)(int)uVar37;
                __this_01.fields.m_Normal.fields.x = (float)(int)((ulong)uVar37 >> 0x20);
                __this_01.fields.m_Point.fields.x = (float)(int)uVar36;
                __this_01.fields.m_Point.fields.y = (float)(int)((ulong)uVar36 >> 0x20);
                __this_01.fields.m_Normal.fields.y = (float)(int)uVar38;
                __this_01.fields.m_Normal.fields.z = (float)(int)((ulong)uVar38 >> 0x20);
                __this_01.fields.m_FaceID = in_stack_fffffffffffffed0;
                __this_01.fields.m_Distance = (float)in_stack_fffffffffffffed4;
                __this_01.fields.m_UV.fields.x = (float)in_stack_fffffffffffffed8;
                __this_01.fields.m_UV.fields.y = (float)in_stack_fffffffffffffedc;
                __this_01.fields.m_Collider = in_stack_fffffffffffffee0;
                __this_03 = UnityEngine_RaycastHit__get_collider
                                      (__this_01,(MethodInfo *)&pIStack_78);
                if ((__this_03 == (UnityEngine_Collider_o *)0x0) ||
                   (pUVar15 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
                   pUVar15 == (UnityEngine_Transform_o *)0x0)) goto LAB_0415e840;
                pUVar15 = UnityEngine_Transform__get_parent(pUVar15,(MethodInfo *)0x0);
                (__this->fields)._activeCircle = pUVar15;
                il2cpp_runtime_glue(__this_05,pUVar15);
                MapEditor_RotationGizmo__SetCircleColor
                          (__this_05,(__this->fields)._circleX,
                           (UnityEngine_Color_o)(__this->fields).CircleXColor.fields,method_00);
                MapEditor_RotationGizmo__SetCircleColor
                          (__this_05,(__this->fields)._circleY,
                           (UnityEngine_Color_o)(__this->fields).CircleYColor.fields,method_01);
                MapEditor_RotationGizmo__SetCircleColor
                          (__this_05,(__this->fields)._circleZ,
                           (UnityEngine_Color_o)(__this->fields).CircleZColor.fields,method_02);
                MapEditor_RotationGizmo__SetCircleColor
                          (__this_05,(__this->fields)._activeCircle,
                           (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,method_03);
                __this_02.fields.m_Point.fields.z = (float)(int)uVar37;
                __this_02.fields.m_Normal.fields.x = (float)(int)((ulong)uVar37 >> 0x20);
                __this_02.fields.m_Point.fields.x = (float)(int)uVar36;
                __this_02.fields.m_Point.fields.y = (float)(int)((ulong)uVar36 >> 0x20);
                __this_02.fields.m_Normal.fields.y = (float)(int)uVar38;
                __this_02.fields.m_Normal.fields.z = (float)(int)((ulong)uVar38 >> 0x20);
                __this_02.fields.m_FaceID = in_stack_fffffffffffffed0;
                __this_02.fields.m_Distance = (float)in_stack_fffffffffffffed4;
                __this_02.fields.m_UV.fields.x = (float)in_stack_fffffffffffffed8;
                __this_02.fields.m_UV.fields.y = (float)in_stack_fffffffffffffedc;
                __this_02.fields.m_Collider = in_stack_fffffffffffffee0;
                UVar34 = UnityEngine_RaycastHit__get_point(__this_02,(MethodInfo *)&pIStack_78);
                (__this->fields)._previousMousePoint.fields.x = (float)(int)UVar34.fields._0_8_;
                (__this->fields)._previousMousePoint.fields.y =
                     (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20);
                (__this->fields)._previousMousePoint.fields.z = UVar34.fields.z;
              }
              goto LAB_0415df65;
            }
          }
        }
      }
    }
    goto LAB_0415e840;
  }
  if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto LAB_0415e840;
  bVar14 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    pGVar17 = (__this->fields)._gameManager;
    if (pGVar17 == (GameManagers_MapEditorGameManager_o *)0x0) goto LAB_0415e840;
    collection = (pGVar17->fields).SelectedObjects;
    mapObjects = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)mapObjects,
               (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_Map_MapObject);
    __this_04 = (MapEditor_TransformPositionRotationCommand_o *)il2cpp_runtime_glue(TypeInfo_TransformPositionRotationCommand);
    MapEditor_TransformPositionRotationCommand___ctor(__this_04,mapObjects,(MethodInfo *)0x0);
    GameManagers_MapEditorGameManager__NewCommand
              (pGVar17,(MapEditor_BaseCommand_o *)__this_04,1,(MethodInfo *)0x0);
    MapEditor_RotationGizmo__SetCircleColor
              ((MapEditor_RotationGizmo_o *)pGVar17,(__this->fields)._circleX,
               (UnityEngine_Color_o)(__this->fields).CircleXColor.fields,method_04);
    MapEditor_RotationGizmo__SetCircleColor
              ((MapEditor_RotationGizmo_o *)pGVar17,(__this->fields)._circleY,
               (UnityEngine_Color_o)(__this->fields).CircleYColor.fields,method_05);
    MapEditor_RotationGizmo__SetCircleColor
              ((MapEditor_RotationGizmo_o *)pGVar17,(__this->fields)._circleZ,
               (UnityEngine_Color_o)(__this->fields).CircleZColor.fields,method_06);
    (__this->fields)._activeCircle = (UnityEngine_Transform_o *)0x0;
    il2cpp_runtime_glue(__this_05,0);
    pGVar17 = (__this->fields)._gameManager;
  }
  else {
    if (lVar6 == 0) goto LAB_0415e840;
    pUVar8 = *(UnityEngine_Camera_o **)(lVar6 + 0x20);
    UVar34 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Camera_o *)0x0) goto LAB_0415e840;
    UnityEngine_Camera__ScreenPointToRay
              ((UnityEngine_Ray_o *)auStack_c8,pUVar8,UVar34,(MethodInfo *)0x0);
    fVar22 = fStack_b8;
    fVar21 = fStack_bc;
    fVar13 = fStack_c0;
    uStack_88._4_4_ = auStack_c8._4_4_;
    uStack_88._0_4_ = auStack_c8._0_4_;
    uVar1 = (__this->fields)._previousMousePoint.fields.x;
    uVar3 = (__this->fields)._previousMousePoint.fields.y;
    uStack_80._0_4_ = 0.0;
    uStack_80._4_2_ = 0;
    uStack_80._6_2_ = 0;
    fVar28 = (float)uVar1 - (float)auStack_c8._0_4_;
    fVar29 = (float)uVar3 - (float)auStack_c8._4_4_;
    fVar26 = (__this->fields)._previousMousePoint.fields.z - fStack_c0;
    fVar24 = fStack_b4;
    if (DAT_0570266a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_0570266a = '\x01';
    }
    fVar18 = fVar24 * fVar24 + fVar22 * fVar22 + fVar21 * fVar21;
    fVar30 = fVar26 * fVar26 + fVar29 * fVar29 + fVar28 * fVar28;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      auStack_98._0_4_ = fVar18;
      il2cpp_init_class();
      fVar18 = (float)auStack_98._0_4_ * fVar30;
      if (fVar18 < 0.0) goto LAB_0415e1f2;
LAB_0415e0c1:
      fVar18 = SQRT(fVar18);
      pMVar16 = TypeInfo_Math;
    }
    else {
      fVar18 = fVar18 * fVar30;
      if (0.0 <= fVar18) goto LAB_0415e0c1;
LAB_0415e1f2:
      fVar18 = sqrtf(fVar18);
      pMVar16 = TypeInfo_Math;
    }
    fVar31 = 0.0;
    TypeInfo_Math = pMVar16;
    if (1e-15 <= fVar18) {
      fVar18 = (fVar26 * fVar24 + fVar29 * fVar22 + fVar28 * fVar21) / fVar18;
      fVar26 = 1.0;
      if (fVar18 <= 1.0) {
        fVar26 = fVar18;
      }
      fVar26 = (float)(~-(uint)(-1.0 <= fVar18) & 0xbf800000 |
                      (uint)fVar26 & -(uint)(-1.0 <= fVar18));
      if (*(int *)((long)&pMVar16[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      dVar11 = acos((double)fVar26,pMVar16);
      fVar31 = (float)dVar11 * 57.29578;
    }
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      iVar4 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
    }
    else {
      iVar4 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
    }
    if (iVar4 == 0) {
      il2cpp_init_class();
    }
    fVar31 = fVar31 * 0.017453292;
    fVar26 = 0.0;
    fVar28 = 0.0;
    if (fVar30 < 0.0) {
      fVar30 = sqrtf(fVar30);
      fVar26 = extraout_XMM0_Dc;
      fVar28 = extraout_XMM0_Dd;
    }
    else {
      fVar30 = SQRT(fVar30);
    }
    fStack_a8 = cosf(fVar31);
    if (*(UnityEngine_Transform_o **)__this_05 == (UnityEngine_Transform_o *)0x0) goto LAB_0415e840;
    pMVar16 = (MethodInfo *)0x0;
    UVar34 = UnityEngine_Transform__get_position
                       (*(UnityEngine_Transform_o **)__this_05,(MethodInfo *)0x0);
    uVar2._0_4_ = (__this->fields)._previousMousePoint.fields.x;
    uVar2._4_4_ = (__this->fields)._previousMousePoint.fields.y;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar2;
    fStack_e8 = (__this->fields)._previousMousePoint.fields.z;
    _Stack_90._0_4_ = extraout_XMM0_Dc_00;
    auStack_98 = (undefined1  [8])UVar34.fields._0_8_;
    _Stack_90._4_4_ = extraout_XMM0_Dd_00;
    fVar29 = UVar34.fields.x;
    fVar18 = UVar34.fields.y;
    uVar20 = extraout_XMM0_Dc_00;
    uVar23 = extraout_XMM0_Dd_00;
    if (DAT_056fde20 == '\0') {
      uVar20 = 0;
      il2cpp_init_method_metadata(&TypeInfo_Math);
      auVar27._4_4_ = uVar2._4_4_;
      auVar27._0_4_ = (undefined4)uVar2;
      auVar27._8_4_ = uVar20;
      auVar27._12_4_ = 0;
      DAT_056fde20 = '\x01';
      fVar29 = (float)auStack_98._0_4_;
      fVar18 = (float)auStack_98._4_4_;
      uVar20 = _Stack_90._0_4_;
      uVar23 = _Stack_90._4_4_;
    }
    fVar30 = fVar30 / fStack_a8;
    fVar29 = auVar27._0_4_ - fVar29;
    fVar18 = auVar27._4_4_ - fVar18;
    fVar31 = auVar27._8_4_ - (float)uVar20;
    fStack_e8 = fStack_e8 - UVar34.fields.z;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    uVar2._0_4_ = 0;
    uVar2._4_4_ = 0;
    fVar19 = fStack_e8 * fStack_e8 + fVar18 * fVar18 + fVar29 * fVar29;
    if (fVar19 < 0.0) {
      fStack_a8 = fVar30;
      fStack_a4 = fVar30;
      fStack_a0 = fVar26;
      fStack_9c = fVar28;
      fVar19 = sqrtf(fVar19);
      uVar2._0_4_ = extraout_XMM0_Dc_01;
      uVar2._4_4_ = extraout_XMM0_Dd_01;
      fVar32 = fStack_a8;
      fVar33 = fStack_a4;
      fVar26 = fStack_a0;
      fVar28 = fStack_9c;
    }
    else {
      fVar19 = SQRT(fVar19);
      fVar32 = fVar30;
      fVar33 = fVar30;
    }
    fVar24 = fVar24 * fVar30;
    if (fVar19 <= 1e-05) {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar36 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar2._0_4_ = (undefined4)uVar36;
      uVar2._4_4_ = (undefined4)((ulong)uVar36 >> 0x20);
      fStack_e8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fStack_e8 = fStack_e8 / fVar19;
      auVar12._4_4_ = fVar18;
      auVar12._0_4_ = fVar29;
      auVar12._8_4_ = fVar31;
      auVar12._12_4_ = auVar27._12_4_ - (float)uVar23;
      auVar9._4_4_ = fVar19;
      auVar9._0_4_ = fVar19;
      auVar9._8_4_ = (undefined4)uVar2;
      auVar9._12_4_ = uVar2._4_4_;
      auVar27 = divps(auVar12,auVar9);
      uVar2._0_4_ = auVar27._0_4_;
      uVar2._4_4_ = auVar27._4_4_;
    }
    uStack_88._0_4_ = (float)(undefined4)uStack_88 + fVar21 * fVar32;
    uStack_88._4_4_ = (float)uStack_88._4_4_ + fVar22 * fVar33;
    uStack_80._0_4_ = (float)uStack_80 + fVar26 * 0.0;
    uStack_80._4_4_ = uStack_80._4_4_ + fVar28 * 0.0;
    uVar20 = (undefined4)uStack_88;
    uVar23 = uStack_88._4_4_;
    fVar26 = (float)uStack_80;
    fVar21 = uStack_80._4_4_;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      uVar20 = (undefined4)uStack_88;
      uVar23 = uStack_88._4_4_;
      fVar26 = (float)uStack_80;
      fVar21 = uStack_80._4_4_;
    }
    auVar25._0_4_ = (float)uVar20 - (float)auStack_98._0_4_;
    auVar25._4_4_ = (float)uVar23 - (float)auStack_98._4_4_;
    auVar25._8_4_ = fVar26 - (float)_Stack_90._0_4_;
    auVar25._12_4_ = fVar21 - (float)_Stack_90._4_4_;
    fVar26 = (fVar13 + fVar24) - UVar34.fields.z;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    uVar23 = 0;
    uVar20 = 0;
    fVar21 = fVar26 * fVar26 + auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_;
    if (fVar21 < 0.0) {
      fVar21 = sqrtf(fVar21);
      uVar20 = extraout_XMM0_Dc_02;
      uVar23 = extraout_XMM0_Dd_02;
      if (1e-05 < fVar21) goto LAB_0415e5bb;
LAB_0415e554:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uStack_108 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar26 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar21 = SQRT(fVar21);
      if (fVar21 <= 1e-05) goto LAB_0415e554;
LAB_0415e5bb:
      fVar26 = fVar26 / fVar21;
      auVar10._4_4_ = fVar21;
      auVar10._0_4_ = fVar21;
      auVar10._8_4_ = uVar20;
      auVar10._12_4_ = uVar23;
      auVar27 = divps(auVar25,auVar10);
      uStack_108 = auVar27._0_8_;
    }
    UVar35 = MapEditor_RotationGizmo__GetAxis(__this,pMVar16);
    fVar21 = UVar35.fields.z;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      fStack_a8 = UVar35.fields.z;
      il2cpp_init_class();
      fVar21 = fStack_a8;
    }
    from.fields.y = (float)uVar2._4_4_;
    from.fields.x = (float)(undefined4)uVar2;
    from.fields.z = fStack_e8;
    to.fields.z = fVar26;
    to.fields.x = (float)(undefined4)uStack_108;
    to.fields.y = (float)uStack_108._4_4_;
    UVar35.fields.z = fVar21;
    fVar26 = Utility_Util__SignedAngle(from,to,UVar35,(MethodInfo *)0x0);
    pGVar17 = (__this->fields)._gameManager;
    if (pGVar17 == (GameManagers_MapEditorGameManager_o *)0x0) goto LAB_0415e840;
    if ((char)(pGVar17->fields).Snap != '\0') {
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto LAB_0415e840;
      fVar21 = *(float *)(lVar5 + 0x14);
      fVar22 = fVar26 + (__this->fields)._currentAngle;
      (__this->fields)._currentAngle = fVar22;
      fVar26 = 0.0;
      if (fVar21 < ABS(fVar22)) {
        fVar22 = fVar22 / fVar21;
        method_07 = (MethodInfo *)auStack_c8;
        dVar11 = modf((double)fVar22,(double *)method_07,pMVar16);
        if (0.0 <= fVar22) {
          if ((dVar11 != 0.5) || (NAN(dVar11))) {
            fVar26 = floorf(fVar22 + 0.5);
          }
          else {
            fVar26 = (float)(double)CONCAT44(auStack_c8._4_4_,auStack_c8._0_4_);
            if (((long)(double)CONCAT44(auStack_c8._4_4_,auStack_c8._0_4_) & 1U) != 0) {
              fVar26 = fVar26 + 1.0;
            }
          }
        }
        else if ((dVar11 != -0.5) || (NAN(dVar11))) {
          fVar26 = ceilf(fVar22 + -0.5);
        }
        else {
          fVar26 = (float)(double)CONCAT44(auStack_c8._4_4_,auStack_c8._0_4_);
          if (((long)(double)CONCAT44(auStack_c8._4_4_,auStack_c8._0_4_) & 1U) != 0) {
            fVar26 = fVar26 + -1.0;
          }
        }
        fVar26 = fVar26 * fVar21;
        fVar21 = fmodf((__this->fields)._currentAngle,fVar21,method_07);
        (__this->fields)._currentAngle = fVar21;
      }
    }
    UVar35 = MapEditor_RotationGizmo__GetAxis(__this,pMVar16);
    auVar27 = _auStack_98;
    UVar34.fields.x = (float)auStack_98._0_4_;
    UVar34.fields.y = (float)auStack_98._4_4_;
    _auStack_98 = auVar27;
    MapEditor_RotationGizmo__RotateSelectedObjects(__this,UVar34,UVar35,fVar26,pMVar16);
    MapEditor_RotationGizmo__ResetCenter(__this,pMVar16);
    *(_union_14 *)&(__this->fields)._previousMousePoint.fields = uStack_88;
    (__this->fields)._previousMousePoint.fields.z = fVar13 + fVar24;
    pGVar17 = (__this->fields)._gameManager;
  }
  if (pGVar17 != (GameManagers_MapEditorGameManager_o *)0x0) {
    *(undefined1 *)&(pGVar17->fields).IgnoreNextSelect = 1;
    return;
  }
LAB_0415e840:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.RotationGizmo$$GetAxis
// il2cpp: UnityEngine_Vector3_o MapEditor_RotationGizmo__GetAxis (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x415e930

UnityEngine_Vector3_o
MapEditor_RotationGizmo__GetAxis(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_Vector3_Fields UVar4;
  
  if (DAT_05704a39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a39 = '\x01';
  }
  pUVar1 = (__this->fields)._circleX;
  pUVar2 = (__this->fields)._activeCircle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0
                    );
  if ((char)bVar3 == '\0') {
    pUVar1 = (__this->fields)._circleY;
    pUVar2 = (__this->fields)._activeCircle;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)pUVar1,
                       (MethodInfo *)0x0);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      if ((char)bVar3 != '\0') {
        UVar4 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_up(pUVar1,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar4;
      }
      UVar4 = (UnityEngine_Vector3_Fields)
              UnityEngine_Transform__get_forward(pUVar1,(MethodInfo *)0x0);
      return (UnityEngine_Vector3_o)UVar4;
    }
  }
  else {
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UVar4 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_right(pUVar1,(MethodInfo *)0x0)
      ;
      return (UnityEngine_Vector3_o)UVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.RotationGizmo$$RotateSelectedObjects
// il2cpp: void MapEditor_RotationGizmo__RotateSelectedObjects (MapEditor_RotationGizmo_o* __this, UnityEngine_Vector3_o center, UnityEngine_Vector3_o axis, float angle, const MethodInfo* method);
// 0x415ea10

void MapEditor_RotationGizmo__RotateSelectedObjects
               (MapEditor_RotationGizmo_o *__this,UnityEngine_Vector3_o center,
               UnityEngine_Vector3_o axis,float angle,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar2;
  UnityEngine_Transform_o *__this_03;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o axis_00;
  undefined4 in_stack_ffffffffffffff88;
  _union_329995 _Var5;
  _union_329995 local_28 [2];
  long local_18;
  
  fVar4 = axis.fields.z;
  fVar3 = center.fields.z;
  if (DAT_05704a3a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    DAT_05704a3a = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<object>__GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_28,__this_00,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
  _Var5 = local_28[0];
  while( true ) {
    __this_01.fields._set._4_4_ = fVar3;
    __this_01.fields._set._0_4_ = in_stack_ffffffffffffff88;
    __this_01.fields._index = (int32_t)fVar4;
    __this_01.fields._version = (int32_t)angle;
    __this_01.fields._current = _Var5.genericMethod;
    bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
    if ((char)bVar2 == '\0') {
      __this_02.fields._set._4_4_ = fVar3;
      __this_02.fields._set._0_4_ = in_stack_ffffffffffffff88;
      __this_02.fields._index = (int32_t)fVar4;
      __this_02.fields._version = (int32_t)angle;
      __this_02.fields._current = _Var5.genericMethod;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
      return;
    }
    if (local_18 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(UnityEngine_GameObject_o **)(local_18 + 0x18) == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_03 = UnityEngine_GameObject__get_transform
                          (*(UnityEngine_GameObject_o **)(local_18 + 0x18),(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Transform_o *)0x0) break;
    point.fields.z = fVar3;
    point.fields.x = (float)(int)center.fields._0_8_;
    point.fields.y = (float)(int)((ulong)center.fields._0_8_ >> 0x20);
    axis_00.fields.z = fVar4;
    axis_00.fields.x = (float)(int)axis.fields._0_8_;
    axis_00.fields.y = (float)(int)((ulong)axis.fields._0_8_ >> 0x20);
    UnityEngine_Transform__RotateAround(__this_03,point,axis_00,angle,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.RotationGizmo$$ResetCenter
// il2cpp: void MapEditor_RotationGizmo__ResetCenter (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x415d850

void MapEditor_RotationGizmo__ResetCenter(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  undefined1 auVar3 [16];
  bool_conflict bVar4;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Transform_o *pUVar5;
  float fVar6;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar7 [16];
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Quaternion_o value;
  undefined1 in_stack_ffffffffffffff78 [12];
  float fVar9;
  Il2CppRGCTXData *pIVar10;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  System_Collections_Generic_HashSet_Enumerator_T__o local_40;
  
  if (DAT_05704a3b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05704a3b = '\x01';
  }
  pUVar5 = (__this->fields)._transform;
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_rotation
              (pUVar5,(UnityEngine_Quaternion_o)
                      **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects
       , __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet<object>__GetEnumerator(&local_40,__this_00,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
      fVar9 = 0.0;
      local_58 = 0.0;
      fStack_54 = 0.0;
      fStack_50 = 0.0;
      fStack_4c = 0.0;
      pIVar10 = (Il2CppRGCTXData *)local_40.fields._set;
      while( true ) {
        __this_01.fields._version = (int32_t)fVar9;
        __this_01.fields._set =
             (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffff78._8_4_;
        __this_01.fields._current = (Il2CppObject *)pIVar10;
        bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff88);
        if ((char)bVar4 == '\0') break;
        pGVar1 = (__this->fields)._gameManager;
        if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((pGVar1->fields).CurrentGizmoMode == 1) {
          pSVar2 = (pGVar1->fields).SelectedObjects;
          if (pSVar2 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((pSVar2->fields)._count != 1) goto LAB_0415da00;
          if (local_40.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (local_40.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar5 = (__this->fields)._transform;
          __this_03 = UnityEngine_GameObject__get_transform
                                (local_40.fields._current[1].monitor,(MethodInfo *)0x0);
          if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          value = UnityEngine_Transform__get_rotation(__this_03,(MethodInfo *)0x0);
          if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Transform__set_rotation(pUVar5,value,(MethodInfo *)0x0);
        }
        else {
LAB_0415da00:
          if (local_40.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        if (local_40.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar5 = UnityEngine_GameObject__get_transform
                           (local_40.fields._current[1].monitor,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UVar8 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        local_58 = local_58 + UVar8.fields.x;
        fStack_54 = fStack_54 + UVar8.fields.y;
        fStack_50 = fStack_50 + extraout_XMM0_Dc;
        fStack_4c = fStack_4c + extraout_XMM0_Dd;
        fVar9 = fVar9 + UVar8.fields.z;
      }
      __this_02.fields._version = (int32_t)fVar9;
      __this_02.fields._set =
           (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff78._8_4_;
      __this_02.fields._current = (Il2CppObject *)pIVar10;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff88);
      pGVar1 = (__this->fields)._gameManager;
      if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pSVar2 = (pGVar1->fields).SelectedObjects,
          pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
         (pUVar5 = (__this->fields)._transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        fVar6 = (float)(pSVar2->fields)._count;
        UVar8.fields.z = fVar9 / fVar6;
        auVar3._4_4_ = fStack_54;
        auVar3._0_4_ = local_58;
        auVar3._8_4_ = fStack_50;
        auVar3._12_4_ = fStack_4c;
        auVar7._4_4_ = fVar6;
        auVar7._0_4_ = fVar6;
        auVar7._8_8_ = 0;
        auVar7 = divps(auVar3,auVar7);
        UVar8.fields.x = (float)(int)auVar7._0_8_;
        UVar8.fields.y = (float)(int)((ulong)auVar7._0_8_ >> 0x20);
        UnityEngine_Transform__set_position(pUVar5,UVar8,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.RotationGizmo$$ResetColors
// il2cpp: void MapEditor_RotationGizmo__ResetColors (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x415d6e0

void MapEditor_RotationGizmo__ResetColors(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MapEditor_RotationGizmo_o *__this_00;
  
  __this_00 = __this;
  MapEditor_RotationGizmo__SetCircleColor
            (__this,(__this->fields)._circleX,
             (UnityEngine_Color_o)(__this->fields).CircleXColor.fields,in_RDX);
  MapEditor_RotationGizmo__SetCircleColor
            (__this_00,(__this->fields)._circleY,
             (UnityEngine_Color_o)(__this->fields).CircleYColor.fields,method_00);
  MapEditor_RotationGizmo__SetCircleColor
            (__this_00,(__this->fields)._circleZ,
             (UnityEngine_Color_o)(__this->fields).CircleZColor.fields,method_01);
  return;
}


// MapEditor.RotationGizmo$$SetCircleColor
// il2cpp: void MapEditor_RotationGizmo__SetCircleColor (MapEditor_RotationGizmo_o* __this, UnityEngine_Transform_o* line, UnityEngine_Color_o color, const MethodInfo* method);
// 0x415e850

void MapEditor_RotationGizmo__SetCircleColor
               (MapEditor_RotationGizmo_o *__this,UnityEngine_Transform_o *line,
               UnityEngine_Color_o color,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_Material_o *pUVar3;
  uint uVar4;
  
  if (DAT_05704a3c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    DAT_05704a3c = '\x01';
  }
  if (line != (UnityEngine_Transform_o *)0x0) {
    pSVar2 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)line,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          __this_00 = (UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar4];
          if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto LAB_0415e919;
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_0415e919;
          UnityEngine_Material__set_color(pUVar3,color,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_0415e919;
          UnityEngine_Material__set_renderQueue(pUVar3,0xc27,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar4 < (int)uVar1);
      }
      return;
    }
  }
LAB_0415e919:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.RotationGizmo$$.ctor
// il2cpp: void MapEditor_RotationGizmo___ctor (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x415ec10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MapEditor_RotationGizmo___ctor(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_00ccd980;
  UVar1.b = (float)(int)DAT_00ccd980;
  UVar1.r = (float)(int)uVar2;
  UVar1.g = (float)(int)((ulong)uVar2 >> 0x20);
  UVar1.a = DAT_00ccd980._4_4_;
  (__this->fields).SelectedColor.fields = UVar1;
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
  (__this->fields).CircleZColor.fields.b = (float)(int)uVar2;
  (__this->fields).CircleZColor.fields.a = (float)(int)((ulong)uVar2 >> 0x20);
  MapEditor_BaseGizmo___ctor((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  return;
}


