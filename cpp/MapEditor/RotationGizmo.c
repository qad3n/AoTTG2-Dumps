// Type: MapEditor.RotationGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/RotationGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/RotationGIzmo.cs
// --------------------------------

// MapEditor.RotationGizmo$$Create
// il2cpp: MapEditor_RotationGizmo_o* MapEditor_RotationGizmo__Create (const MethodInfo* method);
// 0x4457e10

MapEditor_RotationGizmo_o * MapEditor_RotationGizmo__Create(MethodInfo *method)

{
  System_String_c *x;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  MapEditor_RotationGizmo_o *pMVar2;
  undefined4 extraout_var;
  System_String_o *path;
  
  if (g_data_057ae737 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RotationGizmo_AddComponent_RotationGizmo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Gizmos/RotationGizmo");
    g_data_057ae737 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_(path,"Gizmos/RotationGizmo",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pMVar2 = (MapEditor_RotationGizmo_o *)UnityEngine_GameObject__AddComponent_object_(__this,MethodInfo_RotationGizmo_AddComponent_RotationGizmo);
    UnityEngine_GameObject__SetActive(__this,0,(MethodInfo *)0x0);
    return pMVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae738 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae738 = '\x01';
  }
  x = path[6].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return (MapEditor_RotationGizmo_o *)CONCAT44(extraout_var,bVar1);
}


// MapEditor.RotationGizmo$$IsActive
// il2cpp: bool MapEditor_RotationGizmo__IsActive (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x4457f00

bool_conflict MapEditor_RotationGizmo__IsActive(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool_conflict bVar1;
  
  if (g_data_057ae738 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae738 = '\x01';
  }
  x = (__this->fields)._activeCircle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// MapEditor.RotationGizmo$$Awake
// il2cpp: void MapEditor_RotationGizmo__Awake (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x4457f50

void MapEditor_RotationGizmo__Awake(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MapEditor_RotationGizmo_o *__this_00;
  MapEditor_RotationGizmo_o *pMVar2;
  
  if (g_data_057ae739 == '\0') {
    il2cpp_runtime_helper_023445d0(&"CircleY");
    il2cpp_runtime_helper_023445d0(&"CircleZ");
    il2cpp_runtime_helper_023445d0(&"CircleX");
    g_data_057ae739 = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleX",(MethodInfo *)0x0);
    (__this->fields)._circleX = pUVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._circleX,pUVar1);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleY",(MethodInfo *)0x0);
      (__this->fields)._circleY = pUVar1;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._circleY,pUVar1);
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"CircleZ",(MethodInfo *)0x0);
        pMVar2 = (MapEditor_RotationGizmo_o *)&(__this->fields)._circleZ;
        (__this->fields)._circleZ = pUVar1;
        il2cpp_runtime_helper_022b4080(pMVar2,pUVar1);
        MapEditor_RotationGizmo__SetCircleColor
                  (pMVar2,(__this->fields)._circleX,(UnityEngine_Color_o)(__this->fields).CircleXColor.fields,
                   method_00);
        MapEditor_RotationGizmo__SetCircleColor
                  (pMVar2,(__this->fields)._circleY,(UnityEngine_Color_o)(__this->fields).CircleYColor.fields,
                   method_01);
        MapEditor_RotationGizmo__SetCircleColor
                  (pMVar2,(__this->fields)._circleZ,(UnityEngine_Color_o)(__this->fields).CircleZColor.fields,
                   method_02);
        return;
      }
    }
  }
  __this_00 = (MapEditor_RotationGizmo_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = __this_00;
  MapEditor_RotationGizmo__SetCircleColor
            (__this_00,(__this_00->fields)._circleX,
             (UnityEngine_Color_o)(__this_00->fields).CircleXColor.fields,method_03);
  MapEditor_RotationGizmo__SetCircleColor
            (pMVar2,(__this_00->fields)._circleY,(UnityEngine_Color_o)(__this_00->fields).CircleYColor.fields,
             method_04);
  MapEditor_RotationGizmo__SetCircleColor
            (pMVar2,(__this_00->fields)._circleZ,(UnityEngine_Color_o)(__this_00->fields).CircleZColor.fields,
             method_05);
  return;
}


// MapEditor.RotationGizmo$$OnSelectionChange
// il2cpp: void MapEditor_RotationGizmo__OnSelectionChange (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x44580b0

void MapEditor_RotationGizmo__OnSelectionChange(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  MapEditor_BaseGizmo_o *x;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *__this_05;
  UnityEngine_Transform_o *pUVar6;
  long *plVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MapEditor_RotationGizmo_o *pMVar8;
  float fVar9;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar10 [16];
  UnityEngine_Quaternion_o value;
  undefined1 auVar11 [12];
  UnityEngine_Vector3_o UVar12;
  undefined1 in_stack_ffffffffffffff60 [12];
  float in_stack_ffffffffffffff6c;
  Il2CppRGCTXData *pIVar13;
  undefined1 auStack_70 [8];
  float fStack_68;
  float fStack_64;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_58;
  MapEditor_RotationGizmo_o *pMStack_40;
  
  pMVar8 = __this;
  if (g_data_057ae73a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMVar8 = (MapEditor_RotationGizmo_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae73a = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).SelectedObjects,
     pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if (0 < (pSVar2->fields)._count) {
      x = (pGVar1->fields).CurrentGizmo;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pMVar8 = __this;
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          method_03 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
          pMVar8 = __this;
          MapEditor_RotationGizmo__ResetCenter(__this,method_03);
          MapEditor_RotationGizmo__SetCircleColor
                    (pMVar8,(__this->fields)._circleX,
                     (UnityEngine_Color_o)(__this->fields).CircleXColor.fields,method_00);
          MapEditor_RotationGizmo__SetCircleColor
                    (pMVar8,(__this->fields)._circleY,
                     (UnityEngine_Color_o)(__this->fields).CircleYColor.fields,method_01);
          MapEditor_RotationGizmo__SetCircleColor
                    (pMVar8,(__this->fields)._circleZ,
                     (UnityEngine_Color_o)(__this->fields).CircleZColor.fields,method_02);
          return;
        }
        goto label_044581be;
      }
    }
    pMVar8 = __this;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      return;
    }
  }
label_044581be:
  il2cpp_runtime_helper_022b2c90();
  pMStack_40 = __this;
  if (g_data_057ae73e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ae73e = '\x01';
  }
  pIVar13 = (Il2CppRGCTXData *)0x0;
  pUVar6 = (pMVar8->fields)._transform;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_rotation
              (pUVar6,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
               (MethodInfo *)0x0);
    pGVar1 = (pMVar8->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___GetEnumerator(&SStack_58,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
      in_stack_ffffffffffffff6c = 0.0;
      _auStack_70 = ZEXT816(0);
      pIVar13 = (Il2CppRGCTXData *)SStack_58.fields._set;
      while( true ) {
        __this_01.fields._version = (int32_t)in_stack_ffffffffffffff6c;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff60._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffff60._8_4_;
        __this_01.fields._current = (Il2CppObject *)pIVar13;
        bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff70);
        if ((char)bVar4 == '\0') {
          __this_02.fields._version = (int32_t)in_stack_ffffffffffffff6c;
          __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff60._0_8_;
          __this_02.fields._index = in_stack_ffffffffffffff60._8_4_;
          __this_02.fields._current = (Il2CppObject *)pIVar13;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff70);
          goto label_044583e6;
        }
        pGVar1 = (pMVar8->fields)._gameManager;
        if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) break;
        if ((pGVar1->fields).CurrentGizmoMode == 1) {
          pSVar2 = (pGVar1->fields).SelectedObjects;
          if (pSVar2 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0445844b;
          if ((pSVar2->fields)._count != 1) goto label_04458380;
          if (SStack_58.fields._current == (Il2CppObject *)0x0) goto label_04458450;
          if (SStack_58.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_04458455;
          pUVar6 = (pMVar8->fields)._transform;
          __this_05 = UnityEngine_GameObject__get_transform
                                (SStack_58.fields._current[1].monitor,(MethodInfo *)0x0);
          if (__this_05 == (UnityEngine_Transform_o *)0x0) goto label_0445845a;
          value = UnityEngine_Transform__get_rotation(__this_05,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_rotation(pUVar6,value,(MethodInfo *)0x0);
            goto label_04458389;
          }
          goto label_0445845f;
        }
label_04458380:
        if (SStack_58.fields._current == (Il2CppObject *)0x0) goto label_04458446;
label_04458389:
        if (SStack_58.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          break;
        }
        pUVar6 = UnityEngine_GameObject__get_transform(SStack_58.fields._current[1].monitor,(MethodInfo *)0x0)
        ;
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04458441;
        UVar12 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
        auStack_70._0_4_ = (float)auStack_70._0_4_ + UVar12.fields.x;
        auStack_70._4_4_ = (float)auStack_70._4_4_ + UVar12.fields.y;
        fStack_68 = fStack_68 + extraout_XMM0_Dc;
        fStack_64 = fStack_64 + extraout_XMM0_Dd;
        in_stack_ffffffffffffff6c = in_stack_ffffffffffffff6c + UVar12.fields.z;
      }
      il2cpp_runtime_helper_022b2c90();
label_04458441:
      il2cpp_runtime_helper_022b2c90();
label_04458446:
      il2cpp_runtime_helper_022b2c90();
label_0445844b:
      il2cpp_runtime_helper_022b2c90();
label_04458450:
      il2cpp_runtime_helper_022b2c90();
label_04458455:
      il2cpp_runtime_helper_022b2c90();
label_0445845a:
      il2cpp_runtime_helper_022b2c90();
label_0445845f:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  do {
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ != 1) {
label_04458553:
      __this_04.fields._version = (int32_t)in_stack_ffffffffffffff6c;
      __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff60._0_8_;
      __this_04.fields._index = in_stack_ffffffffffffff60._8_4_;
      __this_04.fields._current = (Il2CppObject *)pIVar13;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff70);
      _Unwind_Resume(auVar11._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar3 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff6c;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff60._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff60._8_4_;
    __this_03.fields._current = (Il2CppObject *)pIVar13;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff70);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_04458553;
    }
label_044583e6:
    pGVar1 = (pMVar8->fields)._gameManager;
    if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
        (pSVar2 = (pGVar1->fields).SelectedObjects,
        pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
       (pUVar6 = (pMVar8->fields)._transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
      fVar9 = (float)(pSVar2->fields)._count;
      UVar12.fields.z = in_stack_ffffffffffffff6c / fVar9;
      auVar10._4_4_ = fVar9;
      auVar10._0_4_ = fVar9;
      auVar10._8_8_ = 0;
      auVar10 = divps(_auStack_70,auVar10);
      UVar12.fields.x = (float)(int)auVar10._0_8_;
      UVar12.fields.y = (float)(int)((ulong)auVar10._0_8_ >> 0x20);
      UnityEngine_Transform__set_position(pUVar6,UVar12,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// MapEditor.RotationGizmo$$Update
// il2cpp: void MapEditor_RotationGizmo__Update (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x4458590

void MapEditor_RotationGizmo__Update(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar3;
  int iVar6;
  long lVar7;
  UI_MapEditorMenu_o *pUVar8;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Object_o *pUVar9;
  System_Collections_Generic_HashSet_object__o *__this_01;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_06;
  UnityEngine_RaycastHit_o __this_07;
  undefined1 auVar13 [16];
  float fVar14;
  bool_conflict bVar15;
  UnityEngine_LayerMask_o mask;
  uint uVar16;
  System_Int32_array *pSVar17;
  UnityEngine_Transform_o *pUVar18;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  System_Object_array *pSVar19;
  UnityEngine_Material_o *__this_08;
  long *plVar20;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  System_Int32_array *unaff_RBX;
  System_Int32_array *method_07;
  GameManagers_MapEditorGameManager_o *pGVar21;
  MethodInfo *pMVar22;
  System_Int32_array *method_08;
  long lVar23;
  System_Int32_array *unaff_R12;
  System_Object_array *unaff_R14;
  Il2CppRGCTXData *y;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar32;
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float in_XMM3_Da;
  float fVar33;
  undefined1 in_XMM4 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  UnityEngine_Color_o value;
  undefined1 auVar40 [12];
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o to;
  UnityEngine_Vector3_o axis;
  UnityEngine_Vector3_o axis_00;
  undefined4 in_stack_fffffffffffffde0;
  _union_332950 _Var43;
  Il2CppType **ppIStack_1e0;
  _union_332950 a_Stack_1d0 [2];
  long lStack_1c0;
  System_Int32_array *pSStack_1b8;
  Il2CppRGCTXData *pIStack_1b0;
  undefined8 uStack_1a8;
  System_Int32_array *pSStack_1a0;
  System_Int32_array *pSStack_198;
  System_Object_array *pSStack_190;
  MapEditor_RotationGizmo_o *pMStack_188;
  undefined8 uStack_180;
  float fStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  System_Int32_array *pSStack_160;
  System_Object_array *pSStack_158;
  MapEditor_RotationGizmo_o *pMStack_150;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined4 in_stack_fffffffffffffed0;
  undefined4 in_stack_fffffffffffffed4;
  undefined4 in_stack_fffffffffffffed8;
  undefined4 in_stack_fffffffffffffedc;
  int32_t in_stack_fffffffffffffee0;
  undefined1 auStack_108 [16];
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
  undefined1 auStack_78 [28];
  float fStack_5c;
  float fStack_58;
  int32_t aiStack_54 [3];
  undefined1 auStack_48 [24];
  
  fStack_e8 = in_XMM1_Da;
  auStack_108 = in_XMM2;
  if (g_data_057ae73b == '\0') {
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x44585bd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x44585c9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x44585d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x44585e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x44585ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x44585f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458605;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458611;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x445861d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransformPositionRotationCommand);
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458629;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458635;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae73b = '\x01';
    fStack_e8 = in_XMM1_Da;
    auStack_108 = in_XMM2;
  }
  fStack_58 = 0.0;
  aiStack_54[0] = 0;
  aiStack_54[1] = 0;
  auStack_78._16_8_ = (Il2CppArrayBounds *)0x0;
  auStack_78._24_4_ = 0;
  fStack_5c = 0.0;
  auStack_78._0_8_ = (Il2CppClass *)0x0;
  auStack_78._8_8_ = (Il2CppMethodPointer)0x0;
  method_07 = (System_Int32_array *)0x0;
  pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458661;
  method_08 = (System_Int32_array *)__this;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  lVar23 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0x50), lVar23 != 0)) {
    lVar7 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    unaff_R12 = *(System_Int32_array **)(lVar23 + 0x78);
    unaff_RBX = (System_Int32_array *)(__this->fields)._activeCircle;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pMStack_150 = (MapEditor_RotationGizmo_o *)0x44586c5;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = (System_Object_array *)&(__this->fields)._activeCircle;
    method_07 = (System_Int32_array *)0x0;
    pMStack_150 = (MapEditor_RotationGizmo_o *)0x44586d8;
    method_08 = unaff_RBX;
    bVar15 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      if (unaff_R12 != (System_Int32_array *)0x0) {
        method_07 = (System_Int32_array *)0x0;
        pMStack_150 = (MapEditor_RotationGizmo_o *)0x445890a;
        method_08 = unaff_R12;
        bVar15 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)unaff_R12,0,(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          pGVar21 = (__this->fields)._gameManager;
          if (pGVar21 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_044591c0;
          unaff_R12 = (System_Int32_array *)(pGVar21->fields).SelectedObjects;
          pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458a7b;
          mapObjects = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
          pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458a93;
          System_Collections_Generic_List_object____ctor_362ba10
                    ((System_Collections_Generic_List_object__o *)mapObjects,
                     (System_Collections_Generic_IEnumerable_T__o *)unaff_R12,MethodInfo_List_1_Map_MapObject);
          pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458aa2;
          unaff_RBX = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_TransformPositionRotationCommand);
          pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458ab2;
          MapEditor_TransformPositionRotationCommand___ctor
                    ((MapEditor_TransformPositionRotationCommand_o *)unaff_RBX,mapObjects,(MethodInfo *)0x0);
          pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458ac4;
          GameManagers_MapEditorGameManager__NewCommand
                    (pGVar21,(MapEditor_BaseCommand_o *)unaff_RBX,1,(MethodInfo *)0x0);
          pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458ad9;
          MapEditor_RotationGizmo__SetCircleColor
                    ((MapEditor_RotationGizmo_o *)pGVar21,(__this->fields)._circleX,
                     (UnityEngine_Color_o)(__this->fields).CircleXColor.fields,method_04);
          pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458aee;
          MapEditor_RotationGizmo__SetCircleColor
                    ((MapEditor_RotationGizmo_o *)pGVar21,(__this->fields)._circleY,
                     (UnityEngine_Color_o)(__this->fields).CircleYColor.fields,method_05);
          fVar2 = (__this->fields).CircleZColor.fields.b;
          uVar5 = (__this->fields).CircleZColor.fields.a;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458b09;
          MapEditor_RotationGizmo__SetCircleColor
                    ((MapEditor_RotationGizmo_o *)pGVar21,(__this->fields)._circleZ,
                     (UnityEngine_Color_o)(__this->fields).CircleZColor.fields,method_06);
          (__this->fields)._activeCircle = (UnityEngine_Transform_o *)0x0;
          method_07 = (System_Int32_array *)0x0;
          pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458b1e;
          method_08 = (System_Int32_array *)unaff_R14;
          il2cpp_runtime_helper_022b4080();
          pGVar21 = (__this->fields)._gameManager;
          fStack_e8 = fVar2;
          in_XMM1_Db = uVar5;
joined_r0x04458b25:
          if (pGVar21 != (GameManagers_MapEditorGameManager_o *)0x0) {
            *(undefined1 *)&(pGVar21->fields).IgnoreNextSelect = 1;
            return;
          }
        }
        else if (lVar7 != 0) {
          pSVar17 = *(System_Int32_array **)(lVar7 + 0x20);
          method_08 = (System_Int32_array *)0x0;
          pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458926;
          UVar41 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          fStack_e8 = UVar41.fields.z;
          unaff_RBX = (System_Int32_array *)0x0;
          if (pSVar17 != (System_Int32_array *)0x0) {
            pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458941;
            UnityEngine_Camera__ScreenPointToRay_4db37e0
                      ((UnityEngine_Ray_o *)auStack_c8,(UnityEngine_Camera_o *)pSVar17,UVar41,
                       (MethodInfo *)0x0);
            fVar27 = fStack_b8;
            fVar28 = fStack_bc;
            fVar14 = fStack_c0;
            uStack_88._4_4_ = auStack_c8._4_4_;
            uStack_88._0_4_ = auStack_c8._0_4_;
            uVar1 = (__this->fields)._previousMousePoint.fields.x;
            uVar4 = (__this->fields)._previousMousePoint.fields.y;
            uStack_80._0_4_ = 0.0;
            uStack_80._4_2_ = 0;
            uStack_80._6_2_ = 0;
            fVar35 = (float)uVar1 - (float)auStack_c8._0_4_;
            fVar36 = (float)uVar4 - (float)auStack_c8._4_4_;
            fVar33 = (__this->fields)._previousMousePoint.fields.z - fStack_c0;
            in_XMM4 = ZEXT416((uint)fVar33);
            uVar5 = 0;
            fVar2 = fStack_b4;
            if (g_data_057ac31a == '\0') {
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x44589b6;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              in_XMM4._4_4_ = 0;
              in_XMM4._0_4_ = fVar33;
              in_XMM4._8_4_ = uVar5;
              in_XMM4._12_4_ = 0;
              g_data_057ac31a = '\x01';
            }
            fVar25 = fVar2 * fVar2 + fVar27 * fVar27 + fVar28 * fVar28;
            fStack_e8 = in_XMM4._0_4_ * in_XMM4._0_4_ + fVar36 * fVar36 + fVar35 * fVar35;
            unaff_RBX = (System_Int32_array *)&TypeInfo_Math;
            if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
              auStack_98._0_4_ = fVar25;
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458b3e;
              il2cpp_runtime_helper_02337ed0();
              in_XMM4._4_4_ = 0;
              in_XMM4._0_4_ = fVar33;
              in_XMM4._8_4_ = uVar5;
              in_XMM4._12_4_ = 0;
              fVar25 = (float)auStack_98._0_4_ * fStack_e8;
              if (0.0 <= fVar25) goto label_04458a41;
label_04458b72:
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458b77;
              fVar25 = sqrtf(fVar25);
              in_XMM4._4_4_ = 0;
              in_XMM4._0_4_ = fVar33;
              in_XMM4._8_4_ = uVar5;
              in_XMM4._12_4_ = 0;
              method_07 = pSVar17;
              pMVar22 = TypeInfo_Math;
            }
            else {
              fVar25 = fVar25 * fStack_e8;
              if (fVar25 < 0.0) goto label_04458b72;
label_04458a41:
              fVar33 = in_XMM4._0_4_;
              fVar25 = SQRT(fVar25);
              method_07 = pSVar17;
              pMVar22 = TypeInfo_Math;
            }
            auStack_108 = ZEXT416((uint)fVar2);
            fVar37 = 0.0;
            in_XMM3_Da = fVar28;
            TypeInfo_Math = pMVar22;
            if (1e-15 <= fVar25) {
              fVar25 = (fVar33 * fVar2 + fVar36 * fVar27 + fVar35 * fVar28) / fVar25;
              fVar33 = 1.0;
              if (fVar25 <= 1.0) {
                fVar33 = fVar25;
              }
              uVar16 = ~-(uint)(-1.0 <= fVar25) & 0xbf800000 | (uint)fVar33 & -(uint)(-1.0 <= fVar25);
              in_XMM4 = ZEXT416(uVar16);
              if (*(int *)((long)&pMVar22[2].parameters + 4) == 0) {
                uVar5 = 0;
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458bee;
                il2cpp_runtime_helper_02337ed0();
                in_XMM4._4_4_ = 0;
                in_XMM4._0_4_ = uVar16;
                in_XMM4._8_4_ = uVar5;
                in_XMM4._12_4_ = 0;
              }
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458bff;
              dVar12 = acos((double)in_XMM4._0_4_,pMVar22);
              fVar37 = (float)dVar12 * 57.29578;
            }
            if (g_data_057a6841 == '\0') {
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x445909d;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6841 = '\x01';
              iVar6 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            else {
              iVar6 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            if (iVar6 == 0) {
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x44590c5;
              il2cpp_runtime_helper_02337ed0();
            }
            fVar37 = fVar37 * 0.017453292;
            in_XMM1_Db = 0;
            in_XMM1_Dc = 0;
            in_XMM1_Dd = 0;
            fVar33 = 0.0;
            fVar35 = 0.0;
            if (fStack_e8 < 0.0) {
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458c55;
              fVar36 = sqrtf(fStack_e8);
              fVar33 = extraout_XMM0_Dc;
              fVar35 = extraout_XMM0_Dd;
            }
            else {
              fVar36 = SQRT(fStack_e8);
            }
            pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458c68;
            fStack_a8 = cosf(fVar37);
            method_08 = (System_Int32_array *)0x0;
            if (*(UnityEngine_Transform_o **)unaff_R14 != (UnityEngine_Transform_o *)0x0) {
              method_07 = (System_Int32_array *)0x0;
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458c84;
              UVar41 = UnityEngine_Transform__get_position
                                 (*(UnityEngine_Transform_o **)unaff_R14,(MethodInfo *)0x0);
              uVar3._0_4_ = (__this->fields)._previousMousePoint.fields.x;
              uVar3._4_4_ = (__this->fields)._previousMousePoint.fields.y;
              auVar34._8_8_ = 0;
              auVar34._0_8_ = uVar3;
              fStack_e8 = (__this->fields)._previousMousePoint.fields.z;
              _Stack_90._0_4_ = extraout_XMM0_Dc_00;
              auStack_98 = (undefined1  [8])UVar41.fields._0_8_;
              _Stack_90._4_4_ = extraout_XMM0_Dd_00;
              fVar25 = UVar41.fields.x;
              fVar37 = UVar41.fields.y;
              uVar5 = extraout_XMM0_Dc_00;
              uVar29 = extraout_XMM0_Dd_00;
              if (g_data_057a6845 == '\0') {
                uVar5 = 0;
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458cc4;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                auVar34._4_4_ = uVar3._4_4_;
                auVar34._0_4_ = (undefined4)uVar3;
                auVar34._8_4_ = uVar5;
                auVar34._12_4_ = 0;
                g_data_057a6845 = '\x01';
                fVar25 = (float)auStack_98._0_4_;
                fVar37 = (float)auStack_98._4_4_;
                uVar5 = _Stack_90._0_4_;
                uVar29 = _Stack_90._4_4_;
              }
              fVar36 = fVar36 / fStack_a8;
              fVar25 = auVar34._0_4_ - fVar25;
              fVar37 = auVar34._4_4_ - fVar37;
              fVar32 = auVar34._8_4_ - (float)uVar5;
              fStack_e8 = fStack_e8 - UVar41.fields.z;
              if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458d1a;
                il2cpp_runtime_helper_02337ed0();
              }
              uVar5 = 0;
              uVar3._0_4_ = 0;
              fVar26 = fStack_e8 * fStack_e8 + fVar37 * fVar37 + fVar25 * fVar25;
              if (fVar26 < 0.0) {
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458d73;
                fStack_a8 = fVar36;
                fStack_a4 = fVar36;
                fStack_a0 = fVar33;
                fStack_9c = fVar35;
                fVar26 = sqrtf(fVar26);
                uVar5 = extraout_XMM0_Dc_01;
                uVar3._0_4_ = extraout_XMM0_Dd_01;
                fVar38 = fStack_a8;
                fVar39 = fStack_a4;
                fVar33 = fStack_a0;
                fVar35 = fStack_9c;
              }
              else {
                fVar26 = SQRT(fVar26);
                fVar38 = fVar36;
                fVar39 = fVar36;
              }
              fVar2 = fVar2 * fVar36;
              if (fVar26 <= 1e-05) {
                if (g_data_057a65d5 == '\0') {
                  pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458de4;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a65d5 = '\x01';
                }
                uVar44 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                uVar5 = (undefined4)uVar44;
                uVar3._0_4_ = (undefined4)((ulong)uVar44 >> 0x20);
                fStack_e8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
              }
              else {
                fStack_e8 = fStack_e8 / fVar26;
                auVar13._4_4_ = fVar37;
                auVar13._0_4_ = fVar25;
                auVar13._8_4_ = fVar32;
                auVar13._12_4_ = auVar34._12_4_ - (float)uVar29;
                auVar10._4_4_ = fVar26;
                auVar10._0_4_ = fVar26;
                auVar10._8_4_ = uVar5;
                auVar10._12_4_ = (undefined4)uVar3;
                auVar34 = divps(auVar13,auVar10);
                uVar5 = auVar34._0_4_;
                uVar3._0_4_ = auVar34._4_4_;
              }
              uStack_88._0_4_ = (float)(undefined4)uStack_88 + fVar28 * fVar38;
              uStack_88._4_4_ = (float)uStack_88._4_4_ + fVar27 * fVar39;
              uStack_80._0_4_ = (float)uStack_80 + fVar33 * 0.0;
              uStack_80._4_4_ = uStack_80._4_4_ + fVar35 * 0.0;
              uVar3._4_4_ = (undefined4)uStack_88;
              uVar29 = uStack_88._4_4_;
              fVar33 = (float)uStack_80;
              fVar28 = uStack_80._4_4_;
              if (g_data_057a6845 == '\0') {
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458e53;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6845 = '\x01';
                uVar3._4_4_ = (undefined4)uStack_88;
                uVar29 = uStack_88._4_4_;
                fVar33 = (float)uStack_80;
                fVar28 = uStack_80._4_4_;
              }
              auVar30._0_4_ = (float)uVar3._4_4_ - (float)auStack_98._0_4_;
              auVar30._4_4_ = (float)uVar29 - (float)auStack_98._4_4_;
              auVar30._8_4_ = fVar33 - (float)_Stack_90._0_4_;
              auVar30._12_4_ = fVar28 - (float)_Stack_90._4_4_;
              in_XMM3_Da = (fVar14 + fVar2) - UVar41.fields.z;
              if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458e98;
                il2cpp_runtime_helper_02337ed0();
              }
              uVar3._4_4_ = 0;
              uVar29 = 0;
              fVar33 = in_XMM3_Da * in_XMM3_Da + auVar30._4_4_ * auVar30._4_4_ + auVar30._0_4_ * auVar30._0_4_
              ;
              if (fVar33 < 0.0) {
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458f27;
                fVar33 = sqrtf(fVar33);
                uVar3._4_4_ = extraout_XMM0_Dc_02;
                uVar29 = extraout_XMM0_Dd_02;
                if (fVar33 <= 1e-05) goto label_04458ed4;
label_04458f3b:
                in_XMM3_Da = in_XMM3_Da / fVar33;
                auVar11._4_4_ = fVar33;
                auVar11._0_4_ = fVar33;
                auVar11._8_4_ = uVar3._4_4_;
                auVar11._12_4_ = uVar29;
                auStack_108 = divps(auVar30,auVar11);
              }
              else {
                fVar33 = SQRT(fVar33);
                if (1e-05 < fVar33) goto label_04458f3b;
label_04458ed4:
                if (g_data_057a65d5 == '\0') {
                  pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458ee9;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a65d5 = '\x01';
                }
                auStack_108._8_8_ = 0;
                auStack_108._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
                in_XMM3_Da = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
              }
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458f59;
              UVar42 = MapEditor_RotationGizmo__GetAxis(__this,(MethodInfo *)method_07);
              in_XMM4._0_8_ = UVar42.fields._0_8_;
              in_XMM4._8_4_ = extraout_XMM0_Dc_03;
              in_XMM4._12_4_ = extraout_XMM0_Dd_03;
              fVar33 = UVar42.fields.z;
              if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458f85;
                fStack_a8 = UVar42.fields.z;
                il2cpp_runtime_helper_02337ed0();
                fVar33 = fStack_a8;
              }
              UVar42.fields.y = (float)(undefined4)uVar3;
              UVar42.fields.x = (float)uVar5;
              in_XMM1_Db = 0;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              to.fields._0_8_ = auStack_108._0_8_;
              method_08 = (System_Int32_array *)0x0;
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458fb0;
              UVar42.fields.z = fStack_e8;
              to.fields.z = in_XMM3_Da;
              axis_00.fields.z = fVar33;
              axis_00.fields.x = (float)(int)in_XMM4._0_8_;
              axis_00.fields.y = (float)(int)(in_XMM4._0_8_ >> 0x20);
              fVar33 = Utility_Util__SignedAngle(UVar42,to,axis_00,(MethodInfo *)0x0);
              pGVar21 = (__this->fields)._gameManager;
              if (pGVar21 != (GameManagers_MapEditorGameManager_o *)0x0) {
                if ((char)(pGVar21->fields).Snap != '\0') {
                  lVar23 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
                  if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x58), lVar23 == 0)) goto label_044591c0;
                  fVar28 = *(float *)(lVar23 + 0x14);
                  fVar27 = fVar33 + (__this->fields)._currentAngle;
                  (__this->fields)._currentAngle = fVar27;
                  fVar33 = 0.0;
                  if (fVar28 < ABS(fVar27)) {
                    fVar27 = fVar27 / fVar28;
                    pMVar22 = (MethodInfo *)auStack_c8;
                    pMStack_150 = (MapEditor_RotationGizmo_o *)0x445903f;
                    dVar12 = modf((double)fVar27,(double *)pMVar22,(MethodInfo *)method_07);
                    if (0.0 <= fVar27) {
                      if ((dVar12 != 0.5) || (NAN(dVar12))) {
                        pMStack_150 = (MapEditor_RotationGizmo_o *)0x4459126;
                        fVar33 = floorf(fVar27 + 0.5);
                      }
                      else {
                        fVar33 = (float)(double)CONCAT44(auStack_c8._4_4_,auStack_c8._0_4_);
                        if (((long)(double)CONCAT44(auStack_c8._4_4_,auStack_c8._0_4_) & 1U) != 0) {
                          fVar33 = fVar33 + 1.0;
                        }
                      }
                    }
                    else if ((dVar12 != -0.5) || (NAN(dVar12))) {
                      pMStack_150 = (MapEditor_RotationGizmo_o *)0x4459114;
                      fVar33 = ceilf(fVar27 + -0.5);
                    }
                    else {
                      fVar33 = (float)(double)CONCAT44(auStack_c8._4_4_,auStack_c8._0_4_);
                      if (((long)(double)CONCAT44(auStack_c8._4_4_,auStack_c8._0_4_) & 1U) != 0) {
                        fVar33 = fVar33 + -1.0;
                      }
                    }
                    fVar33 = fVar33 * fVar28;
                    pMStack_150 = (MapEditor_RotationGizmo_o *)0x4459144;
                    fVar28 = fmodf((__this->fields)._currentAngle,fVar28,pMVar22);
                    (__this->fields)._currentAngle = fVar28;
                  }
                }
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4459155;
                UVar42 = MapEditor_RotationGizmo__GetAxis(__this,(MethodInfo *)method_07);
                auVar34 = _auStack_98;
                in_XMM3_Da = UVar42.fields.z;
                auVar31._0_8_ = UVar42.fields._0_8_;
                auVar31._8_4_ = extraout_XMM0_Dc_04;
                auVar31._12_4_ = extraout_XMM0_Dd_04;
                in_XMM1_Db = 0;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                in_XMM4 = ZEXT416((uint)fVar33);
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4459177;
                UVar41.fields.x = (float)auStack_98._0_4_;
                UVar41.fields.y = (float)auStack_98._4_4_;
                auStack_108._8_8_ = auVar31._8_8_;
                auStack_108._0_8_ = auVar31._0_8_;
                _auStack_98 = auVar34;
                MapEditor_RotationGizmo__RotateSelectedObjects
                          (__this,UVar41,UVar42,fVar33,(MethodInfo *)method_07);
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x445917f;
                method_08 = (System_Int32_array *)__this;
                MapEditor_RotationGizmo__ResetCenter(__this,(MethodInfo *)method_07);
                *(_union_14 *)&(__this->fields)._previousMousePoint.fields = uStack_88;
                (__this->fields)._previousMousePoint.fields.z = fVar14 + fVar2;
                pGVar21 = (__this->fields)._gameManager;
                fStack_e8 = UVar41.fields.z;
                goto joined_r0x04458b25;
              }
            }
          }
        }
      }
    }
    else {
      pUVar8 = (__this->fields)._menu;
      if (pUVar8 != (UI_MapEditorMenu_o *)0x0) {
        if ((char)(pUVar8->fields).IsMouseUI != '\0') {
label_044588e5:
          (__this->fields)._currentAngle = 0.0;
          return;
        }
        if (unaff_R12 != (System_Int32_array *)0x0) {
          method_07 = (System_Int32_array *)0x0;
          pMStack_150 = (MapEditor_RotationGizmo_o *)0x445870f;
          method_08 = unaff_R12;
          bVar15 = Settings_KeybindSetting__GetKeyDown
                             ((Settings_KeybindSetting_o *)unaff_R12,0,(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') goto label_044588e5;
          if (lVar7 != 0) {
            __this_00 = *(UnityEngine_Camera_o **)(lVar7 + 0x20);
            method_08 = (System_Int32_array *)0x0;
            pMStack_150 = (MapEditor_RotationGizmo_o *)0x445872b;
            UVar41 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
            fStack_e8 = UVar41.fields.z;
            unaff_RBX = (System_Int32_array *)0x0;
            if (__this_00 != (UnityEngine_Camera_o *)0x0) {
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458746;
              UnityEngine_Camera__ScreenPointToRay_4db37e0
                        ((UnityEngine_Ray_o *)auStack_48,__this_00,UVar41,(MethodInfo *)0x0);
              fStack_b8 = (float)auStack_48._16_8_;
              fStack_b4 = SUB84(auStack_48._16_8_,4);
              auStack_c8._0_4_ = auStack_48._0_4_;
              auStack_c8._4_4_ = auStack_48._4_4_;
              fStack_c0 = (float)auStack_48._8_4_;
              fStack_bc = (float)auStack_48._12_4_;
              method_07 = (System_Int32_array *)0x1;
              pMStack_150 = (MapEditor_RotationGizmo_o *)0x445877a;
              unaff_RBX = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
              if (*(int *)((long)TypeInfo_PhysicsLayer->m_Items + 0xc4) == 0) {
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458796;
                il2cpp_runtime_helper_02337ed0();
              }
              method_08 = TypeInfo_PhysicsLayer;
              if (unaff_RBX != (System_Int32_array *)0x0) {
                if ((int)unaff_RBX->max_length == 0) goto label_044591c5;
                unaff_RBX->m_Items[0] = *(int32_t *)(*(long *)((long)TypeInfo_PhysicsLayer->m_Items + 0x98) + 0x44);
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x44587c4;
                mask = Utility_PhysicsLayer__GetMask(unaff_RBX,(MethodInfo *)0x0);
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x44587cd;
                uVar16 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
                unaff_RBX = (System_Int32_array *)(ulong)uVar16;
                if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                  pMStack_150 = (MapEditor_RotationGizmo_o *)0x44587e7;
                  il2cpp_runtime_helper_02337ed0();
                }
                uVar46 = CONCAT44(fStack_b4,fStack_b8);
                uVar44 = CONCAT44(auStack_c8._4_4_,auStack_c8._0_4_);
                uVar45 = CONCAT44(fStack_bc,fStack_c0);
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458819;
                ray.fields.m_Origin.fields.z = fStack_c0;
                ray.fields.m_Direction.fields.x = fStack_bc;
                ray.fields.m_Origin.fields.x = (float)auStack_c8._0_4_;
                ray.fields.m_Origin.fields.y = (float)auStack_c8._4_4_;
                ray.fields.m_Direction.fields.y = fStack_b8;
                ray.fields.m_Direction.fields.z = fStack_b4;
                bVar15 = UnityEngine_Physics__Raycast_4e78080
                                   (ray,(UnityEngine_RaycastHit_o *)auStack_78,100000.0,uVar16,
                                    (MethodInfo *)0x0);
                if ((char)bVar15 == '\0') goto label_044588e5;
                method_08 = (System_Int32_array *)auStack_78;
                method_07 = (System_Int32_array *)0x0;
                pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458830;
                __this_06.fields.m_Point.fields.z = (float)(int)uVar45;
                __this_06.fields.m_Normal.fields.x = (float)(int)((ulong)uVar45 >> 0x20);
                __this_06.fields.m_Point.fields.x = (float)(int)uVar44;
                __this_06.fields.m_Point.fields.y = (float)(int)((ulong)uVar44 >> 0x20);
                __this_06.fields.m_Normal.fields.y = (float)(int)uVar46;
                __this_06.fields.m_Normal.fields.z = (float)(int)((ulong)uVar46 >> 0x20);
                __this_06.fields.m_FaceID = in_stack_fffffffffffffed0;
                __this_06.fields.m_Distance = (float)in_stack_fffffffffffffed4;
                __this_06.fields.m_UV.fields.x = (float)in_stack_fffffffffffffed8;
                __this_06.fields.m_UV.fields.y = (float)in_stack_fffffffffffffedc;
                __this_06.fields.m_Collider = in_stack_fffffffffffffee0;
                pSVar17 = (System_Int32_array *)
                          UnityEngine_RaycastHit__get_collider(__this_06,(MethodInfo *)method_08);
                if (pSVar17 != (System_Int32_array *)0x0) {
                  method_07 = (System_Int32_array *)0x0;
                  pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458843;
                  pUVar18 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pSVar17,(MethodInfo *)0x0);
                  method_08 = pSVar17;
                  if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
                    pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458856;
                    pUVar18 = UnityEngine_Transform__get_parent(pUVar18,(MethodInfo *)0x0);
                    (__this->fields)._activeCircle = pUVar18;
                    pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458868;
                    il2cpp_runtime_helper_022b4080(unaff_R14,pUVar18);
                    pMStack_150 = (MapEditor_RotationGizmo_o *)0x445887d;
                    MapEditor_RotationGizmo__SetCircleColor
                              ((MapEditor_RotationGizmo_o *)unaff_R14,(__this->fields)._circleX,
                               (UnityEngine_Color_o)(__this->fields).CircleXColor.fields,method_00);
                    pMStack_150 = (MapEditor_RotationGizmo_o *)0x4458892;
                    MapEditor_RotationGizmo__SetCircleColor
                              ((MapEditor_RotationGizmo_o *)unaff_R14,(__this->fields)._circleY,
                               (UnityEngine_Color_o)(__this->fields).CircleYColor.fields,method_01);
                    pMStack_150 = (MapEditor_RotationGizmo_o *)0x44588ad;
                    MapEditor_RotationGizmo__SetCircleColor
                              ((MapEditor_RotationGizmo_o *)unaff_R14,(__this->fields)._circleZ,
                               (UnityEngine_Color_o)(__this->fields).CircleZColor.fields,method_02);
                    pMStack_150 = (MapEditor_RotationGizmo_o *)0x44588c5;
                    MapEditor_RotationGizmo__SetCircleColor
                              ((MapEditor_RotationGizmo_o *)unaff_R14,(__this->fields)._activeCircle,
                               (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,method_03);
                    pMStack_150 = (MapEditor_RotationGizmo_o *)0x44588d4;
                    __this_07.fields.m_Point.fields.z = (float)(int)uVar45;
                    __this_07.fields.m_Normal.fields.x = (float)(int)((ulong)uVar45 >> 0x20);
                    __this_07.fields.m_Point.fields.x = (float)(int)uVar44;
                    __this_07.fields.m_Point.fields.y = (float)(int)((ulong)uVar44 >> 0x20);
                    __this_07.fields.m_Normal.fields.y = (float)(int)uVar46;
                    __this_07.fields.m_Normal.fields.z = (float)(int)((ulong)uVar46 >> 0x20);
                    __this_07.fields.m_FaceID = in_stack_fffffffffffffed0;
                    __this_07.fields.m_Distance = (float)in_stack_fffffffffffffed4;
                    __this_07.fields.m_UV.fields.x = (float)in_stack_fffffffffffffed8;
                    __this_07.fields.m_UV.fields.y = (float)in_stack_fffffffffffffedc;
                    __this_07.fields.m_Collider = in_stack_fffffffffffffee0;
                    UVar41 = UnityEngine_RaycastHit__get_point(__this_07,(MethodInfo *)auStack_78);
                    (__this->fields)._previousMousePoint.fields.x = (float)(int)UVar41.fields._0_8_;
                    (__this->fields)._previousMousePoint.fields.y =
                         (float)(int)((ulong)UVar41.fields._0_8_ >> 0x20);
                    (__this->fields)._previousMousePoint.fields.z = UVar41.fields.z;
                    goto label_044588e5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_044591c0:
  pMStack_150 = (MapEditor_RotationGizmo_o *)0x44591c5;
  il2cpp_runtime_helper_022b2c90();
label_044591c5:
  pMStack_150 = (MapEditor_RotationGizmo_o *)0x44591ca;
  uStack_180 = il2cpp_runtime_helper_022b2ca0();
  fStack_170 = fStack_e8;
  uStack_16c = in_XMM1_Db;
  uStack_168 = in_XMM1_Dc;
  uStack_164 = in_XMM1_Dd;
  pSStack_160 = unaff_RBX;
  pSStack_158 = unaff_R14;
  pMStack_150 = __this;
  if (g_data_057ae73f == '\0') {
    method_08 = (System_Int32_array *)&MethodInfo_Renderer_GetComponentsInChildren_Renderer;
    pMStack_188 = (MapEditor_RotationGizmo_o *)0x44591fa;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae73f = '\x01';
  }
  if (method_07 != (System_Int32_array *)0x0) {
    pMStack_188 = (MapEditor_RotationGizmo_o *)0x445921c;
    pSVar17 = method_07;
    pSVar19 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                        ((UnityEngine_Component_o *)method_07,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    method_08 = pSVar17;
    if (pSVar19 != (System_Object_array *)0x0) {
      uVar16 = (uint)pSVar19->max_length;
      if (0 < (int)uVar16) {
        __this = (MapEditor_RotationGizmo_o *)0x0;
        do {
          uVar24 = (uint)__this;
          method_08 = pSVar17;
          unaff_R14 = pSVar19;
          if (uVar16 <= uVar24) goto label_0445929e;
          method_07 = (System_Int32_array *)pSVar19->m_Items[(int)uVar24];
          if (method_07 == (System_Int32_array *)0x0) goto label_04459299;
          pMStack_188 = (MapEditor_RotationGizmo_o *)0x445924c;
          method_08 = method_07;
          __this_08 = UnityEngine_Renderer__get_material
                                ((UnityEngine_Renderer_o *)method_07,(MethodInfo *)0x0);
          if (__this_08 == (UnityEngine_Material_o *)0x0) goto label_04459299;
          value.fields.a = (float)uStack_16c;
          value.fields.b = fStack_170;
          pMStack_188 = (MapEditor_RotationGizmo_o *)0x4459264;
          value.fields.r = (float)(undefined4)uStack_180;
          value.fields.g = (float)uStack_180._4_4_;
          fStack_e8 = fStack_170;
          UnityEngine_Material__set_color(__this_08,value,(MethodInfo *)0x0);
          pMStack_188 = (MapEditor_RotationGizmo_o *)0x445926e;
          method_08 = method_07;
          pSVar17 = (System_Int32_array *)
                    UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)method_07,(MethodInfo *)0x0);
          if (pSVar17 == (System_Int32_array *)0x0) goto label_04459299;
          pMStack_188 = (MapEditor_RotationGizmo_o *)0x4459282;
          UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)pSVar17,0xc27,(MethodInfo *)0x0);
          __this = (MapEditor_RotationGizmo_o *)(ulong)(uVar24 + 1);
          uVar16 = (uint)pSVar19->max_length;
        } while ((int)(uVar24 + 1) < (int)uVar16);
      }
      return;
    }
  }
label_04459299:
  pMStack_188 = (MapEditor_RotationGizmo_o *)0x445929e;
  il2cpp_runtime_helper_022b2c90();
label_0445929e:
  pMStack_188 = (MapEditor_RotationGizmo_o *)0x44592a3;
  uStack_1a8 = il2cpp_runtime_helper_022b2ca0();
  pSStack_1a0 = method_07;
  pSStack_198 = unaff_R12;
  pSStack_190 = unaff_R14;
  pMStack_188 = __this;
  if (g_data_057ae73c == '\0') {
    pIStack_1b0 = (Il2CppRGCTXData *)0x44592d0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae73c = '\x01';
  }
  y = ((_union_13 *)((long)method_08->m_Items + 0x18))->rgctx_data;
  pUVar9 = *(UnityEngine_Object_o **)((long)method_08->m_Items + 0x70);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStack_1b0 = (Il2CppRGCTXData *)0x44592fb;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_1b0 = (Il2CppRGCTXData *)0x4459308;
  bVar15 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    y = ((_union_14 *)((long)method_08->m_Items + 0x20))->genericMethod;
    pUVar9 = *(UnityEngine_Object_o **)((long)method_08->m_Items + 0x70);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_1b0 = (Il2CppRGCTXData *)0x4459344;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_1b0 = (Il2CppRGCTXData *)0x4459351;
    bVar15 = UnityEngine_Object__op_Equality(pUVar9,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    pUVar18 = *(UnityEngine_Transform_o **)((long)method_08->m_Items + 8);
    if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
      if ((char)bVar15 == '\0') {
        UnityEngine_Transform__get_forward(pUVar18,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_Transform__get_up(pUVar18,(MethodInfo *)0x0);
      return;
    }
  }
  else if (*(UnityEngine_Transform_o **)((long)method_08->m_Items + 8) != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__get_right
              (*(UnityEngine_Transform_o **)((long)method_08->m_Items + 8),(MethodInfo *)0x0);
    return;
  }
  lVar23 = 0;
  pIStack_1b0 = (Il2CppRGCTXData *)0x4459381;
  uVar44 = il2cpp_runtime_helper_022b2c90();
  fVar2 = in_XMM4._0_4_;
  pSStack_1b8 = method_08;
  pIStack_1b0 = y;
  if (g_data_057ae73d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    g_data_057ae73d = '\x01';
  }
  _Var43.genericMethod = (Il2CppObject *)0x0;
  if ((*(long *)(lVar23 + 0x20) != 0) &&
     (__this_01 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(lVar23 + 0x20) + 0x38),
     __this_01 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)a_Stack_1d0,__this_01,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    _Var43 = a_Stack_1d0[0];
    while( true ) {
      __this_02.fields._set._4_4_ = fStack_e8;
      __this_02.fields._set._0_4_ = in_stack_fffffffffffffde0;
      __this_02.fields._index = (int32_t)in_XMM3_Da;
      __this_02.fields._version = (int32_t)fVar2;
      __this_02.fields._current = _Var43.genericMethod;
      bVar15 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                         (__this_02,(MethodInfo_3219C40 *)&stack0xfffffffffffffdf0);
      if ((char)bVar15 == '\0') {
        __this_03.fields._set._4_4_ = fStack_e8;
        __this_03.fields._set._0_4_ = in_stack_fffffffffffffde0;
        __this_03.fields._index = (int32_t)in_XMM3_Da;
        __this_03.fields._version = (int32_t)fVar2;
        __this_03.fields._current = _Var43.genericMethod;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffdf0);
        return;
      }
      if (lStack_1c0 == 0) break;
      if (*(UnityEngine_GameObject_o **)(lStack_1c0 + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_044594d7;
      pUVar18 = UnityEngine_GameObject__get_transform
                          (*(UnityEngine_GameObject_o **)(lStack_1c0 + 0x18),(MethodInfo *)0x0);
      if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_044594dc;
      ppIStack_1e0 = auStack_108._0_8_;
      point.fields.z = fStack_e8;
      point.fields.x = (float)(int)uVar44;
      point.fields.y = (float)(int)((ulong)uVar44 >> 0x20);
      axis.fields.z = in_XMM3_Da;
      axis.fields._0_8_ = ppIStack_1e0;
      UnityEngine_Transform__RotateAround(pUVar18,point,axis,fVar2,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_044594d7:
    il2cpp_runtime_helper_022b2c90();
label_044594dc:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar40 = il2cpp_runtime_helper_022b2c90();
  if (auVar40._8_4_ == 1) {
    plVar20 = (long *)__cxa_begin_catch(auVar40._0_8_);
    lVar23 = *plVar20;
    __cxa_end_catch();
    __this_04.fields._set._4_4_ = fStack_e8;
    __this_04.fields._set._0_4_ = in_stack_fffffffffffffde0;
    __this_04.fields._index = (int32_t)in_XMM3_Da;
    __this_04.fields._version = (int32_t)fVar2;
    __this_04.fields._current = _Var43.genericMethod;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffdf0);
    if (lVar23 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar23);
  }
  __this_05.fields._set._4_4_ = fStack_e8;
  __this_05.fields._set._0_4_ = in_stack_fffffffffffffde0;
  __this_05.fields._index = (int32_t)in_XMM3_Da;
  __this_05.fields._version = (int32_t)fVar2;
  __this_05.fields._current = _Var43.genericMethod;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_05,(MethodInfo_3219C30 *)&stack0xfffffffffffffdf0);
  _Unwind_Resume(auVar40._0_8_);
}


// MapEditor.RotationGizmo$$GetAxis
// il2cpp: UnityEngine_Vector3_o MapEditor_RotationGizmo__GetAxis (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x44592b0

UnityEngine_Vector3_o MapEditor_RotationGizmo__GetAxis(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  undefined8 uVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  long *plVar5;
  long lVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Db_00;
  float in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  float in_XMM3_Da;
  float in_XMM4_Da;
  undefined1 auVar10 [12];
  UnityEngine_Vector3_Fields UVar11;
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o axis;
  undefined4 in_stack_ffffffffffffff60;
  float fVar13;
  _union_332950 _Var14;
  _union_332950 a_Stack_50 [2];
  long lStack_40;
  MapEditor_RotationGizmo_o *pMStack_38;
  UnityEngine_Transform_o *pUStack_30;
  float fVar9;
  
  if (g_data_057ae73c == '\0') {
    pUStack_30 = (UnityEngine_Transform_o *)0x44592d0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae73c = '\x01';
  }
  pUVar4 = (__this->fields)._circleX;
  pUVar1 = (__this->fields)._activeCircle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_30 = (UnityEngine_Transform_o *)0x44592fb;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_30 = (UnityEngine_Transform_o *)0x4459308;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (__this->fields)._circleY;
    pUVar1 = (__this->fields)._activeCircle;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_30 = (UnityEngine_Transform_o *)0x4459344;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_30 = (UnityEngine_Transform_o *)0x4459351;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      if ((char)bVar3 != '\0') {
        UVar11 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_up(pUVar1,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar11;
      }
      UVar11 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_forward(pUVar1,(MethodInfo *)0x0);
      return (UnityEngine_Vector3_o)UVar11;
    }
  }
  else {
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UVar11 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_right(pUVar1,(MethodInfo *)0x0);
      return (UnityEngine_Vector3_o)UVar11;
    }
  }
  lVar6 = 0;
  pUStack_30 = (UnityEngine_Transform_o *)0x4459381;
  uVar2 = il2cpp_runtime_helper_022b2c90();
  fVar9 = in_XMM1_Da;
  pMStack_38 = __this;
  pUStack_30 = pUVar4;
  if (g_data_057ae73d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    g_data_057ae73d = '\x01';
  }
  _Var14.genericMethod = (Il2CppObject *)0x0;
  if ((*(long *)(lVar6 + 0x20) != 0) &&
     (__this_00 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(lVar6 + 0x20) + 0x38),
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)a_Stack_50,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    _Var14 = a_Stack_50[0];
    while (__this_01.fields._set._4_4_ = fVar9, __this_01.fields._set._0_4_ = in_stack_ffffffffffffff60,
          __this_01.fields._index = (int32_t)in_XMM3_Da, __this_01.fields._version = (int32_t)in_XMM4_Da,
          __this_01.fields._current = _Var14.genericMethod,
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff70), (char)bVar3 != '\0') {
      if (lStack_40 == 0) {
        il2cpp_runtime_helper_022b2c90();
label_044594d7:
        il2cpp_runtime_helper_022b2c90();
label_044594dc:
        il2cpp_runtime_helper_022b2c90();
        goto label_044594e1;
      }
      if (*(UnityEngine_GameObject_o **)(lStack_40 + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_044594d7;
      pUVar4 = UnityEngine_GameObject__get_transform
                         (*(UnityEngine_GameObject_o **)(lStack_40 + 0x18),(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_044594dc;
      axis.fields.y = (float)in_XMM2_Db;
      axis.fields.x = (float)in_XMM2_Da;
      point.fields.z = fVar9;
      point.fields.x = (float)(int)uVar2;
      point.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
      axis.fields.z = in_XMM3_Da;
      fVar13 = fVar9;
      UnityEngine_Transform__RotateAround(pUVar4,point,axis,in_XMM4_Da,(MethodInfo *)0x0);
      in_XMM1_Da = fVar9;
      fVar9 = fVar13;
    }
    __this_02.fields._set._4_4_ = fVar9;
    __this_02.fields._set._0_4_ = in_stack_ffffffffffffff60;
    __this_02.fields._index = (int32_t)in_XMM3_Da;
    __this_02.fields._version = (int32_t)in_XMM4_Da;
    __this_02.fields._current = _Var14.genericMethod;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff70);
    uVar7 = extraout_XMM0_Da;
    uVar8 = extraout_XMM0_Db;
label_044594ca:
    UVar12.fields.y = (float)uVar8;
    UVar12.fields.x = (float)uVar7;
    UVar12.fields.z = in_XMM1_Da;
    return (UnityEngine_Vector3_o)UVar12.fields;
  }
label_044594e1:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar6 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._set._4_4_ = fVar9;
    __this_03.fields._set._0_4_ = in_stack_ffffffffffffff60;
    __this_03.fields._index = (int32_t)in_XMM3_Da;
    __this_03.fields._version = (int32_t)in_XMM4_Da;
    __this_03.fields._current = _Var14.genericMethod;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff70);
    uVar7 = extraout_XMM0_Da_00;
    uVar8 = extraout_XMM0_Db_00;
    if (lVar6 == 0) goto label_044594ca;
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_04.fields._set._4_4_ = fVar9;
  __this_04.fields._set._0_4_ = in_stack_ffffffffffffff60;
  __this_04.fields._index = (int32_t)in_XMM3_Da;
  __this_04.fields._version = (int32_t)in_XMM4_Da;
  __this_04.fields._current = _Var14.genericMethod;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff70);
  _Unwind_Resume(auVar10._0_8_);
}


// MapEditor.RotationGizmo$$RotateSelectedObjects
// il2cpp: void MapEditor_RotationGizmo__RotateSelectedObjects (MapEditor_RotationGizmo_o* __this, UnityEngine_Vector3_o center, UnityEngine_Vector3_o axis, float angle, const MethodInfo* method);
// 0x4459390

void MapEditor_RotationGizmo__RotateSelectedObjects
               (MapEditor_RotationGizmo_o *__this,UnityEngine_Vector3_o center,UnityEngine_Vector3_o axis,
               float angle,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar3;
  UnityEngine_Transform_o *__this_05;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [12];
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o axis_00;
  undefined4 in_stack_ffffffffffffff88;
  _union_332950 _Var8;
  _union_332950 local_28 [2];
  long local_18;
  
  fVar6 = axis.fields.z;
  fVar5 = center.fields.z;
  if (g_data_057ae73d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    g_data_057ae73d = '\x01';
  }
  _Var8.genericMethod = (Il2CppObject *)0x0;
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_28,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    _Var8 = local_28[0];
    while( true ) {
      __this_01.fields._set._4_4_ = fVar5;
      __this_01.fields._set._0_4_ = in_stack_ffffffffffffff88;
      __this_01.fields._index = (int32_t)fVar6;
      __this_01.fields._version = (int32_t)angle;
      __this_01.fields._current = _Var8.genericMethod;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff98);
      if ((char)bVar3 == '\0') {
        __this_02.fields._set._4_4_ = fVar5;
        __this_02.fields._set._0_4_ = in_stack_ffffffffffffff88;
        __this_02.fields._index = (int32_t)fVar6;
        __this_02.fields._version = (int32_t)angle;
        __this_02.fields._current = _Var8.genericMethod;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
        return;
      }
      if (local_18 == 0) break;
      if (*(UnityEngine_GameObject_o **)(local_18 + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_044594d7;
      __this_05 = UnityEngine_GameObject__get_transform
                            (*(UnityEngine_GameObject_o **)(local_18 + 0x18),(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_Transform_o *)0x0) goto label_044594dc;
      point.fields.z = fVar5;
      point.fields.x = (float)(int)center.fields._0_8_;
      point.fields.y = (float)(int)((ulong)center.fields._0_8_ >> 0x20);
      axis_00.fields.z = fVar6;
      axis_00.fields.x = (float)(int)axis.fields._0_8_;
      axis_00.fields.y = (float)(int)((ulong)axis.fields._0_8_ >> 0x20);
      UnityEngine_Transform__RotateAround(__this_05,point,axis_00,angle,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_044594d7:
    il2cpp_runtime_helper_022b2c90();
label_044594dc:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._set._4_4_ = fVar5;
    __this_03.fields._set._0_4_ = in_stack_ffffffffffffff88;
    __this_03.fields._index = (int32_t)fVar6;
    __this_03.fields._version = (int32_t)angle;
    __this_03.fields._current = _Var8.genericMethod;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._set._4_4_ = fVar5;
  __this_04.fields._set._0_4_ = in_stack_ffffffffffffff88;
  __this_04.fields._index = (int32_t)fVar6;
  __this_04.fields._version = (int32_t)angle;
  __this_04.fields._current = _Var8.genericMethod;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
}


// MapEditor.RotationGizmo$$ResetCenter
// il2cpp: void MapEditor_RotationGizmo__ResetCenter (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x44581d0

void MapEditor_RotationGizmo__ResetCenter(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  long lVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar4;
  UnityEngine_Transform_o *__this_05;
  UnityEngine_Transform_o *pUVar5;
  long *plVar6;
  float fVar7;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar8 [16];
  UnityEngine_Quaternion_o value;
  undefined1 auVar9 [12];
  UnityEngine_Vector3_o UVar10;
  undefined1 in_stack_ffffffffffffff78 [12];
  float in_stack_ffffffffffffff84;
  Il2CppRGCTXData *pIVar11;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  System_Collections_Generic_HashSet_Enumerator_T__o local_40;
  
  if (g_data_057ae73e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ae73e = '\x01';
  }
  pIVar11 = (Il2CppRGCTXData *)0x0;
  pUVar5 = (__this->fields)._transform;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_rotation
              (pUVar5,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
               (MethodInfo *)0x0);
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
       __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___GetEnumerator(&local_40,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
      in_stack_ffffffffffffff84 = 0.0;
      _local_58 = ZEXT816(0);
      pIVar11 = (Il2CppRGCTXData *)local_40.fields._set;
      while( true ) {
        __this_01.fields._version = (int32_t)in_stack_ffffffffffffff84;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffff78._8_4_;
        __this_01.fields._current = (Il2CppObject *)pIVar11;
        bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff88);
        if ((char)bVar4 == '\0') {
          __this_02.fields._version = (int32_t)in_stack_ffffffffffffff84;
          __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78._0_8_;
          __this_02.fields._index = in_stack_ffffffffffffff78._8_4_;
          __this_02.fields._current = (Il2CppObject *)pIVar11;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff88);
          goto label_044583e6;
        }
        pGVar1 = (__this->fields)._gameManager;
        if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) break;
        if ((pGVar1->fields).CurrentGizmoMode == 1) {
          pSVar2 = (pGVar1->fields).SelectedObjects;
          if (pSVar2 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0445844b;
          if ((pSVar2->fields)._count != 1) goto label_04458380;
          if (local_40.fields._current == (Il2CppObject *)0x0) goto label_04458450;
          if (local_40.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_04458455;
          pUVar5 = (__this->fields)._transform;
          __this_05 = UnityEngine_GameObject__get_transform
                                (local_40.fields._current[1].monitor,(MethodInfo *)0x0);
          if (__this_05 == (UnityEngine_Transform_o *)0x0) goto label_0445845a;
          value = UnityEngine_Transform__get_rotation(__this_05,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_rotation(pUVar5,value,(MethodInfo *)0x0);
            goto label_04458389;
          }
          goto label_0445845f;
        }
label_04458380:
        if (local_40.fields._current == (Il2CppObject *)0x0) goto label_04458446;
label_04458389:
        if (local_40.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          break;
        }
        pUVar5 = UnityEngine_GameObject__get_transform(local_40.fields._current[1].monitor,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04458441;
        UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        local_58._0_4_ = (float)local_58._0_4_ + UVar10.fields.x;
        local_58._4_4_ = (float)local_58._4_4_ + UVar10.fields.y;
        fStack_50 = fStack_50 + extraout_XMM0_Dc;
        fStack_4c = fStack_4c + extraout_XMM0_Dd;
        in_stack_ffffffffffffff84 = in_stack_ffffffffffffff84 + UVar10.fields.z;
      }
      il2cpp_runtime_helper_022b2c90();
label_04458441:
      il2cpp_runtime_helper_022b2c90();
label_04458446:
      il2cpp_runtime_helper_022b2c90();
label_0445844b:
      il2cpp_runtime_helper_022b2c90();
label_04458450:
      il2cpp_runtime_helper_022b2c90();
label_04458455:
      il2cpp_runtime_helper_022b2c90();
label_0445845a:
      il2cpp_runtime_helper_022b2c90();
label_0445845f:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  do {
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) {
label_04458553:
      __this_04.fields._version = (int32_t)in_stack_ffffffffffffff84;
      __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78._0_8_;
      __this_04.fields._index = in_stack_ffffffffffffff78._8_4_;
      __this_04.fields._current = (Il2CppObject *)pIVar11;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff88);
      _Unwind_Resume(auVar9._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff84;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff78._8_4_;
    __this_03.fields._current = (Il2CppObject *)pIVar11;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff88);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_04458553;
    }
label_044583e6:
    pGVar1 = (__this->fields)._gameManager;
    if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
        (pSVar2 = (pGVar1->fields).SelectedObjects,
        pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
       (pUVar5 = (__this->fields)._transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      fVar7 = (float)(pSVar2->fields)._count;
      UVar10.fields.z = in_stack_ffffffffffffff84 / fVar7;
      auVar8._4_4_ = fVar7;
      auVar8._0_4_ = fVar7;
      auVar8._8_8_ = 0;
      auVar8 = divps(_local_58,auVar8);
      UVar10.fields.x = (float)(int)auVar8._0_8_;
      UVar10.fields.y = (float)(int)((ulong)auVar8._0_8_ >> 0x20);
      UnityEngine_Transform__set_position(pUVar5,UVar10,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// MapEditor.RotationGizmo$$ResetColors
// il2cpp: void MapEditor_RotationGizmo__ResetColors (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x4458060

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
// 0x44591d0

void MapEditor_RotationGizmo__SetCircleColor
               (MapEditor_RotationGizmo_o *__this,UnityEngine_Transform_o *line,UnityEngine_Color_o color,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  undefined8 uVar2;
  uint uVar3;
  bool_conflict bVar4;
  System_Object_array *pSVar5;
  UnityEngine_Material_o *__this_05;
  MapEditor_RotationGizmo_o *__this_06;
  UnityEngine_Transform_o *pUVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  float in_XMM3_Da;
  float in_XMM4_Da;
  undefined1 auVar12 [12];
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o axis;
  undefined4 in_stack_ffffffffffffff28;
  _union_332950 _Var13;
  _union_332950 a_Stack_88 [2];
  long lStack_78;
  MapEditor_RotationGizmo_o *pMStack_70;
  UnityEngine_Transform_o *pUStack_68;
  undefined8 uStack_60;
  MapEditor_RotationGizmo_o *pMStack_58;
  
  fVar10 = color.fields.b;
  fVar11 = fVar10;
  if (g_data_057ae73f == '\0') {
    __this = (MapEditor_RotationGizmo_o *)&MethodInfo_Renderer_GetComponentsInChildren_Renderer;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae73f = '\x01';
  }
  if ((line != (UnityEngine_Transform_o *)0x0) &&
     (__this_06 = (MapEditor_RotationGizmo_o *)line,
     pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                        ((UnityEngine_Component_o *)line,MethodInfo_Renderer_GetComponentsInChildren_Renderer), __this = __this_06,
     pSVar5 != (System_Object_array *)0x0)) {
    uVar3 = (uint)pSVar5->max_length;
    if (0 < (int)uVar3) {
      uVar9 = 0;
      do {
        __this = __this_06;
        if (uVar3 <= uVar9) goto label_0445929e;
        line = (UnityEngine_Transform_o *)pSVar5->m_Items[(int)uVar9];
        if (((MapEditor_RotationGizmo_o *)line == (MapEditor_RotationGizmo_o *)0x0) ||
           (__this = (MapEditor_RotationGizmo_o *)line,
           __this_05 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)line,(MethodInfo *)0x0),
           __this_05 == (UnityEngine_Material_o *)0x0)) goto label_04459299;
        fVar11 = fVar10;
        UnityEngine_Material__set_color(__this_05,color,(MethodInfo *)0x0);
        __this = (MapEditor_RotationGizmo_o *)line;
        __this_06 = (MapEditor_RotationGizmo_o *)
                    UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)line,(MethodInfo *)0x0);
        if (__this_06 == (MapEditor_RotationGizmo_o *)0x0) goto label_04459299;
        UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)__this_06,0xc27,(MethodInfo *)0x0);
        uVar9 = uVar9 + 1;
        uVar3 = (uint)pSVar5->max_length;
      } while ((int)uVar9 < (int)uVar3);
    }
    return;
  }
label_04459299:
  il2cpp_runtime_helper_022b2c90();
label_0445929e:
  uStack_60 = il2cpp_runtime_helper_022b2ca0();
  pMStack_58 = (MapEditor_RotationGizmo_o *)line;
  if (g_data_057ae73c == '\0') {
    pUStack_68 = (UnityEngine_Transform_o *)0x44592d0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae73c = '\x01';
  }
  pUVar6 = (__this->fields)._circleX;
  pUVar1 = (__this->fields)._activeCircle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_68 = (UnityEngine_Transform_o *)0x44592fb;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_68 = (UnityEngine_Transform_o *)0x4459308;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar6 = (__this->fields)._circleY;
    pUVar1 = (__this->fields)._activeCircle;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_68 = (UnityEngine_Transform_o *)0x4459344;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_68 = (UnityEngine_Transform_o *)0x4459351;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      if ((char)bVar4 == '\0') {
        UnityEngine_Transform__get_forward(pUVar1,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_Transform__get_up(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__get_right(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  lVar8 = 0;
  pUStack_68 = (UnityEngine_Transform_o *)0x4459381;
  uVar2 = il2cpp_runtime_helper_022b2c90();
  pMStack_70 = __this;
  pUStack_68 = pUVar6;
  if (g_data_057ae73d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    g_data_057ae73d = '\x01';
  }
  _Var13.genericMethod = (Il2CppObject *)0x0;
  if ((*(long *)(lVar8 + 0x20) != 0) &&
     (__this_00 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(lVar8 + 0x20) + 0x38),
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)a_Stack_88,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    _Var13 = a_Stack_88[0];
    while( true ) {
      __this_01.fields._set._4_4_ = fVar11;
      __this_01.fields._set._0_4_ = in_stack_ffffffffffffff28;
      __this_01.fields._index = (int32_t)in_XMM3_Da;
      __this_01.fields._version = (int32_t)in_XMM4_Da;
      __this_01.fields._current = _Var13.genericMethod;
      bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff38);
      if ((char)bVar4 == '\0') {
        __this_02.fields._set._4_4_ = fVar11;
        __this_02.fields._set._0_4_ = in_stack_ffffffffffffff28;
        __this_02.fields._index = (int32_t)in_XMM3_Da;
        __this_02.fields._version = (int32_t)in_XMM4_Da;
        __this_02.fields._current = _Var13.genericMethod;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff38);
        return;
      }
      if (lStack_78 == 0) break;
      if (*(UnityEngine_GameObject_o **)(lStack_78 + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_044594d7;
      pUVar6 = UnityEngine_GameObject__get_transform
                         (*(UnityEngine_GameObject_o **)(lStack_78 + 0x18),(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_044594dc;
      axis.fields.y = (float)in_XMM2_Db;
      axis.fields.x = (float)in_XMM2_Da;
      point.fields.z = fVar11;
      point.fields.x = (float)(int)uVar2;
      point.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
      axis.fields.z = in_XMM3_Da;
      UnityEngine_Transform__RotateAround(pUVar6,point,axis,in_XMM4_Da,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_044594d7:
    il2cpp_runtime_helper_022b2c90();
label_044594dc:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar8 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._set._4_4_ = fVar11;
    __this_03.fields._set._0_4_ = in_stack_ffffffffffffff28;
    __this_03.fields._index = (int32_t)in_XMM3_Da;
    __this_03.fields._version = (int32_t)in_XMM4_Da;
    __this_03.fields._current = _Var13.genericMethod;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff38);
    if (lVar8 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_04.fields._set._4_4_ = fVar11;
  __this_04.fields._set._0_4_ = in_stack_ffffffffffffff28;
  __this_04.fields._index = (int32_t)in_XMM3_Da;
  __this_04.fields._version = (int32_t)in_XMM4_Da;
  __this_04.fields._current = _Var13.genericMethod;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff38);
  _Unwind_Resume(auVar12._0_8_);
}


// MapEditor.RotationGizmo$$.ctor
// il2cpp: void MapEditor_RotationGizmo___ctor (MapEditor_RotationGizmo_o* __this, const MethodInfo* method);
// 0x4459590

void MapEditor_RotationGizmo___ctor(MapEditor_RotationGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  undefined8 uVar2;
  
  uVar2 = g_data_00d19fc0;
  UVar1.b = (float)(int)g_data_00d19fc0;
  UVar1.r = (float)(int)uVar2;
  UVar1.g = (float)(int)((ulong)uVar2 >> 0x20);
  UVar1.a = g_data_00d19fc0._4_4_;
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


