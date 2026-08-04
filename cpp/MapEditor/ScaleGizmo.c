// Type: MapEditor.ScaleGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/ScaleGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/ScaleGizmo.cs
// --------------------------------

// MapEditor.ScaleGizmo$$Create
// il2cpp: MapEditor_ScaleGizmo_o* MapEditor_ScaleGizmo__Create (const MethodInfo* method);
// 0x44595e0

MapEditor_ScaleGizmo_o * MapEditor_ScaleGizmo__Create(MethodInfo *method)

{
  System_String_c *x;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  MapEditor_ScaleGizmo_o *pMVar2;
  undefined4 extraout_var;
  System_String_o *path;
  
  if (g_data_057ae740 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScaleGizmo_AddComponent_ScaleGizmo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Gizmos/ScaleGizmo");
    g_data_057ae740 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_(path,"Gizmos/ScaleGizmo",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pMVar2 = (MapEditor_ScaleGizmo_o *)UnityEngine_GameObject__AddComponent_object_(__this,MethodInfo_ScaleGizmo_AddComponent_ScaleGizmo);
    UnityEngine_GameObject__SetActive(__this,0,(MethodInfo *)0x0);
    return pMVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae741 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae741 = '\x01';
  }
  x = path[7].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return (MapEditor_ScaleGizmo_o *)CONCAT44(extraout_var,bVar1);
}


// MapEditor.ScaleGizmo$$IsActive
// il2cpp: bool MapEditor_ScaleGizmo__IsActive (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x44596d0

bool_conflict MapEditor_ScaleGizmo__IsActive(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool_conflict bVar1;
  
  if (g_data_057ae741 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae741 = '\x01';
  }
  x = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// MapEditor.ScaleGizmo$$Awake
// il2cpp: void MapEditor_ScaleGizmo__Awake (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x4459720

void MapEditor_ScaleGizmo__Awake(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  MethodInfo *in_RCX;
  MapEditor_ScaleGizmo_o *__this_00;
  MapEditor_ScaleGizmo_o *pMVar2;
  
  if (g_data_057ae742 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LineZ");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"LineY");
    il2cpp_runtime_helper_023445d0(&"LineX");
    g_data_057ae742 = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineX",(MethodInfo *)0x0);
    (__this->fields)._lineX = pUVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._lineX,pUVar1);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineY",(MethodInfo *)0x0);
      (__this->fields)._lineY = pUVar1;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._lineY,pUVar1);
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineZ",(MethodInfo *)0x0);
        (__this->fields)._lineZ = pUVar1;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._lineZ,pUVar1);
        pUVar1 = (__this->fields)._transform;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"Center",(MethodInfo *)0x0);
          pMVar2 = (MapEditor_ScaleGizmo_o *)&(__this->fields)._center;
          (__this->fields)._center = pUVar1;
          il2cpp_runtime_helper_022b4080(pMVar2,pUVar1);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar2,(__this->fields)._lineX,(UnityEngine_Color_o)(__this->fields).LineXColor.fields,
                     0xc27,in_RCX);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar2,(__this->fields)._lineY,(UnityEngine_Color_o)(__this->fields).LineYColor.fields,
                     0xc27,in_RCX);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar2,(__this->fields)._lineZ,(UnityEngine_Color_o)(__this->fields).LineZColor.fields,
                     0xc27,in_RCX);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar2,(__this->fields)._center,(UnityEngine_Color_o)(__this->fields).CenterColor.fields,
                     4000,in_RCX);
          return;
        }
      }
    }
  }
  __this_00 = (MapEditor_ScaleGizmo_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = __this_00;
  MapEditor_ScaleGizmo__SetLineColor
            (__this_00,(__this_00->fields)._lineX,(UnityEngine_Color_o)(__this_00->fields).LineXColor.fields,
             0xc27,in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (pMVar2,(__this_00->fields)._lineY,(UnityEngine_Color_o)(__this_00->fields).LineYColor.fields,
             0xc27,in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (pMVar2,(__this_00->fields)._lineZ,(UnityEngine_Color_o)(__this_00->fields).LineZColor.fields,
             0xc27,in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (pMVar2,(__this_00->fields)._center,(UnityEngine_Color_o)(__this_00->fields).CenterColor.fields,
             4000,in_RCX);
  return;
}


// MapEditor.ScaleGizmo$$OnSelectionChange
// il2cpp: void MapEditor_ScaleGizmo__OnSelectionChange (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x4459920

void MapEditor_ScaleGizmo__OnSelectionChange(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_BaseGizmo_o *x;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  long lVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *__this_05;
  long *plVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MapEditor_ScaleGizmo_o *pMVar8;
  float fVar9;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar10 [16];
  UnityEngine_Quaternion_o value;
  undefined1 auVar11 [12];
  UnityEngine_Vector3_o UVar12;
  undefined1 in_stack_ffffffffffffff70 [12];
  float in_stack_ffffffffffffff7c;
  System_Collections_Generic_HashSet_T__o *pSVar13;
  undefined1 auStack_60 [8];
  float fStack_58;
  float fStack_54;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_50;
  MapEditor_ScaleGizmo_o *pMStack_38;
  
  pMVar8 = __this;
  if (g_data_057ae743 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMVar8 = (MapEditor_ScaleGizmo_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae743 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (method_00 = (MethodInfo *)(pGVar1->fields).SelectedObjects, method_00 != (MethodInfo *)0x0)) {
    if (0 < *(int *)&method_00->klass) {
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
          method_01 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
          pMVar8 = __this;
          MapEditor_ScaleGizmo__ResetCenter(__this,method_01);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar8,(__this->fields)._lineX,(UnityEngine_Color_o)(__this->fields).LineXColor.fields,
                     0xc27,method_00);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar8,(__this->fields)._lineY,(UnityEngine_Color_o)(__this->fields).LineYColor.fields,
                     0xc27,method_00);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar8,(__this->fields)._lineZ,(UnityEngine_Color_o)(__this->fields).LineZColor.fields,
                     0xc27,method_00);
          MapEditor_ScaleGizmo__SetLineColor
                    (pMVar8,(__this->fields)._center,(UnityEngine_Color_o)(__this->fields).CenterColor.fields,
                     4000,method_00);
          return;
        }
        goto label_04459a66;
      }
    }
    pMVar8 = __this;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      return;
    }
  }
label_04459a66:
  il2cpp_runtime_helper_022b2c90();
  pMStack_38 = __this;
  if (g_data_057ae747 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ae747 = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pGVar1 = (pMVar8->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator(&SStack_50,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    in_stack_ffffffffffffff7c = 0.0;
    _auStack_60 = ZEXT816(0);
    pSVar13 = SStack_50.fields._set;
    while( true ) {
      __this_01.fields._version = (int32_t)in_stack_ffffffffffffff7c;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffff70._8_4_;
      __this_01.fields._current = (Il2CppObject *)pSVar13;
      bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff80);
      if ((char)bVar4 == '\0') {
        __this_02.fields._version = (int32_t)in_stack_ffffffffffffff7c;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70._0_8_;
        __this_02.fields._index = in_stack_ffffffffffffff70._8_4_;
        __this_02.fields._current = (Il2CppObject *)pSVar13;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
        goto label_04459bfd;
      }
      if (SStack_50.fields._current == (Il2CppObject *)0x0) break;
      if (*(void **)((long)SStack_50.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_04459c56;
      pUVar6 = UnityEngine_GameObject__get_transform
                         (*(void **)((long)SStack_50.fields._current + 0x18),(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04459c5b;
      UVar12 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
      auStack_60._0_4_ = (float)auStack_60._0_4_ + UVar12.fields.x;
      auStack_60._4_4_ = (float)auStack_60._4_4_ + UVar12.fields.y;
      fStack_58 = fStack_58 + extraout_XMM0_Dc;
      fStack_54 = fStack_54 + extraout_XMM0_Dd;
      in_stack_ffffffffffffff7c = in_stack_ffffffffffffff7c + UVar12.fields.z;
      if (*(void **)((long)SStack_50.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_04459c60;
      pUVar6 = (pMVar8->fields)._transform;
      __this_05 = UnityEngine_GameObject__get_transform
                            (*(void **)((long)SStack_50.fields._current + 0x18),(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_Transform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        break;
      }
      value = UnityEngine_Transform__get_rotation(__this_05,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04459c65;
      UnityEngine_Transform__set_rotation(pUVar6,value,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_04459c56:
    il2cpp_runtime_helper_022b2c90();
label_04459c5b:
    il2cpp_runtime_helper_022b2c90();
label_04459c60:
    il2cpp_runtime_helper_022b2c90();
label_04459c65:
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ != 1) {
label_04459d26:
      __this_04.fields._version = (int32_t)in_stack_ffffffffffffff7c;
      __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70._0_8_;
      __this_04.fields._index = in_stack_ffffffffffffff70._8_4_;
      __this_04.fields._current = (Il2CppObject *)pSVar13;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
      _Unwind_Resume(auVar11._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar3 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff7c;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff70._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar13;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_04459d26;
    }
label_04459bfd:
    pGVar1 = (pMVar8->fields)._gameManager;
    if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
        (pSVar2 = (pGVar1->fields).SelectedObjects,
        pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
       (pUVar6 = (pMVar8->fields)._transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
      fVar9 = (float)(pSVar2->fields)._count;
      UVar12.fields.z = in_stack_ffffffffffffff7c / fVar9;
      auVar10._4_4_ = fVar9;
      auVar10._0_4_ = fVar9;
      auVar10._8_8_ = 0;
      auVar10 = divps(_auStack_60,auVar10);
      UVar12.fields.x = (float)(int)auVar10._0_8_;
      UVar12.fields.y = (float)(int)((ulong)auVar10._0_8_ >> 0x20);
      UnityEngine_Transform__set_position(pUVar6,UVar12,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// MapEditor.ScaleGizmo$$ContainsCenter
// il2cpp: bool MapEditor_ScaleGizmo__ContainsCenter (MapEditor_ScaleGizmo_o* __this, UnityEngine_RaycastHit_array* hits, const MethodInfo* method);
// 0x4459d60

bool_conflict
MapEditor_ScaleGizmo__ContainsCenter
          (MapEditor_ScaleGizmo_o *__this,UnityEngine_RaycastHit_array *hits,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  long lVar6;
  Il2CppClass *pIVar7;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Vector2_o y;
  System_Collections_Generic_HashSet_object__o *__this_00;
  double dVar10;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_05;
  UnityEngine_RaycastHit_o __this_06;
  UnityEngine_RaycastHit_o __this_07;
  UnityEngine_RaycastHit_o __this_08;
  UnityEngine_RaycastHit_o __this_09;
  UnityEngine_RaycastHit_o __this_10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool_conflict bVar13;
  UnityEngine_LayerMask_o mask;
  uint uVar14;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  UnityEngine_Collider_o *pUVar15;
  UnityEngine_Vector2_Fields UVar16;
  System_Func_TSource__bool__o *predicate;
  float *pfVar17;
  undefined8 *puVar18;
  UnityEngine_Vector2_Fields UVar19;
  UnityEngine_Transform_o *pUVar20;
  ulong uVar21;
  UnityEngine_Vector2_Fields UVar22;
  UnityEngine_Material_o *__this_11;
  long *plVar23;
  MethodInfo *pMVar24;
  MethodInfo *method_00;
  ulong extraout_RDX;
  UnityEngine_Vector2_Fields unaff_RBX;
  UnityEngine_Vector2_Fields method_01;
  UnityEngine_Vector2_Fields unaff_RBP;
  UnityEngine_Vector2_Fields UVar25;
  _union_14 *method_02;
  UnityEngine_Vector2_Fields UVar26;
  UnityEngine_Vector2_Fields UVar27;
  UnityEngine_Vector2_Fields unaff_R13;
  UnityEngine_Vector2_Fields unaff_R15;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float in_XMM1_Da;
  float in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  UnityEngine_Color_o value;
  undefined1 auVar37 [12];
  UnityEngine_Vector3_o UVar38;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o b;
  undefined8 in_stack_fffffffffffffd50;
  float in_stack_fffffffffffffd58;
  _union_332950 _Var40;
  float fStack_280;
  float fStack_27c;
  _union_332950 a_Stack_260 [2];
  long lStack_250;
  UnityEngine_Vector2_Fields UStack_248;
  UnityEngine_Vector2_Fields UStack_240;
  ulong uStack_238;
  UnityEngine_Vector2_Fields UStack_230;
  undefined8 uStack_228;
  float fStack_218;
  float fStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  UnityEngine_Vector2_Fields UStack_200;
  UnityEngine_Vector2_Fields UStack_1f8;
  UnityEngine_Vector2_Fields UStack_1f0;
  UnityEngine_Vector2_Fields UStack_1e8;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 in_stack_fffffffffffffe38;
  undefined4 in_stack_fffffffffffffe40;
  undefined4 in_stack_fffffffffffffe44;
  int32_t in_stack_fffffffffffffe48;
  undefined8 local_1b0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [8];
  undefined4 uStack_188;
  undefined4 uStack_184;
  float local_180;
  float fStack_17c;
  undefined8 local_160;
  undefined1 local_150 [8];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint32_t uStack_138;
  float fStack_134;
  float fStack_130;
  undefined8 uStack_12c;
  undefined1 local_120 [16];
  _union_14 local_110;
  Il2CppMethodPointer pIStack_108;
  InvokerMethod pIStack_100;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  _union_14 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint32_t uStack_c8;
  float local_c4;
  float fStack_c0;
  undefined8 uStack_bc;
  UnityEngine_Ray_o local_b0;
  UnityEngine_Vector2_Fields UStack_98;
  UnityEngine_RaycastHit_array *pUStack_90;
  UnityEngine_Vector2_Fields UStack_88;
  MapEditor_ScaleGizmo_o *pMStack_80;
  UnityEngine_Vector2_Fields UStack_78;
  UnityEngine_Vector2_Fields UStack_70;
  
  UVar25 = (UnityEngine_Vector2_Fields)__this;
  local_190._0_4_ = in_XMM1_Da;
  if (g_data_057ae744 == '\0') {
    UVar25 = (UnityEngine_Vector2_Fields)&TypeInfo_Object;
    UStack_70.x = 2.3229575e-36;
    UStack_70.y = 0.0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae744 = '\x01';
    local_190._0_4_ = in_XMM1_Da;
  }
  if (hits != (UnityEngine_RaycastHit_array *)0x0) {
    unaff_RBP = (UnityEngine_Vector2_Fields)hits->m_Items;
    unaff_R15.x = 0.0;
    unaff_R15.y = 0.0;
    uVar14 = (uint)hits->max_length;
    if (0 < (int)uVar14) {
      do {
        UVar27.y = 0.0;
        UVar27.x = (float)uVar14;
        if ((ulong)UVar27 <= (ulong)unaff_R15) {
          UStack_70.x = 2.3229977e-36;
          UStack_70.y = 0.0;
          il2cpp_runtime_helper_022b2ca0();
          goto label_04459e69;
        }
        local_190._0_4_ =
             *(undefined4 *)
              &((GameManagers_MapEditorGameManager_Fields *)((long)unaff_RBP + 0x10))->m_CachedPtr;
        in_XMM1_Db = *(float *)((long)unaff_RBP + 0x14);
        in_XMM1_Dc = *(undefined4 *)((long)unaff_RBP + 0x18);
        in_XMM1_Dd = *(undefined4 *)((long)unaff_RBP + 0x1c);
        UStack_70.x = 2.3229844e-36;
        UStack_70.y = 0.0;
        __this_10.fields.m_UV.fields.x = (float)(int)((ulong)*(undefined8 *)((long)unaff_RBP + 0x1c) >> 0x20);
        __this_10.fields._0_32_ = *(undefined1 (*) [32])unaff_RBP;
        __this_10.fields.m_UV.fields.y = (float)((int32_t *)((long)unaff_RBP + 0x24))[0];
        __this_10.fields.m_Collider = ((int32_t *)((long)unaff_RBP + 0x24))[1];
        UVar25 = (UnityEngine_Vector2_Fields)&stack0xffffffffffffff98;
        pUVar15 = UnityEngine_RaycastHit__get_collider(__this_10,(MethodInfo *)&stack0xffffffffffffff98);
        if (pUVar15 == (UnityEngine_Collider_o *)0x0) goto label_04459e69;
        UStack_70.x = 2.3229871e-36;
        UStack_70.y = 0.0;
        unaff_R13 = (UnityEngine_Vector2_Fields)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0)
        ;
        unaff_RBX = (UnityEngine_Vector2_Fields)(__this->fields)._center;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          UStack_70.x = 2.3229927e-36;
          UStack_70.y = 0.0;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBP = (UnityEngine_Vector2_Fields)((long)unaff_RBP + 0x2c);
        unaff_R15 = (UnityEngine_Vector2_Fields)((long)unaff_R15 + 1);
        UStack_70.x = 2.322974e-36;
        UStack_70.y = 0.0;
        UVar25 = unaff_R13;
        bVar13 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)unaff_RBX,
                            (MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar13 >> 8),1);
        }
        uVar14 = (uint)hits->max_length;
      } while ((long)unaff_R15 < (long)(int)uVar14);
    }
    return 0;
  }
label_04459e69:
  UStack_70.x = 2.3229986e-36;
  UStack_70.y = 0.0;
  il2cpp_runtime_helper_022b2c90();
  UStack_98 = unaff_RBX;
  pUStack_90 = hits;
  UStack_88 = unaff_R13;
  pMStack_80 = __this;
  UStack_78 = unaff_R15;
  UStack_70 = unaff_RBP;
  if (g_data_057ae745 == '\0') {
    UStack_1e8.x = 2.323007e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RaycastHit_First_RaycastHit);
    UStack_1e8.x = 2.3230092e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_RaycastHit_bool);
    UStack_1e8.x = 2.3230113e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    UStack_1e8.x = 2.3230135e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    UStack_1e8.x = 2.3230156e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    UStack_1e8.x = 2.3230178e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    UStack_1e8.x = 2.32302e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    UStack_1e8.x = 2.3230221e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    UStack_1e8.x = 2.3230243e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Update_b__17_0);
    UStack_1e8.x = 2.3230264e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    UStack_1e8.x = 2.3230286e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    UStack_1e8.x = 2.3230307e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransformScaleCommand);
    UStack_1e8.x = 2.3230329e-36;
    UStack_1e8.y = 0.0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    g_data_057ae745 = '\x01';
  }
  fStack_c0 = 0.0;
  uStack_bc = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_c4 = 0.0;
  local_e0.genericMethod = (void *)0x0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  pIStack_100 = (InvokerMethod)0x0;
  uStack_f8 = 0;
  local_f4 = 0;
  local_110.genericMethod = (void *)0x0;
  pIStack_108 = (Il2CppMethodPointer)0x0;
  method_01.x = 0.0;
  method_01.y = 0.0;
  UStack_1e8.x = 2.323045e-36;
  UStack_1e8.y = 0.0;
  UVar26 = UVar25;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)UVar25,(MethodInfo *)0x0);
  UVar27 = (UnityEngine_Vector2_Fields)&TypeInfo_SettingsManager;
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x50), lVar6 != 0)) {
    pMVar24 = *(MethodInfo **)(TypeInfo_SceneLoader + 0xb8);
    unaff_R15 = (UnityEngine_Vector2_Fields)pMVar24->name;
    unaff_RBX = *(UnityEngine_Vector2_Fields *)(lVar6 + 0x78);
    unaff_RBP = *(UnityEngine_Vector2_Fields *)((long)UVar25 + 0xa8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      UStack_1e8.x = 2.323063e-36;
      UStack_1e8.y = 0.0;
      il2cpp_runtime_helper_02337ed0();
    }
    UVar22 = (UnityEngine_Vector2_Fields)((long)UVar25 + 0xa8);
    method_01.x = 0.0;
    method_01.y = 0.0;
    UStack_1e8.x = 2.3230664e-36;
    UStack_1e8.y = 0.0;
    UVar26 = unaff_RBP;
    bVar13 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    __this = (MapEditor_ScaleGizmo_o *)UVar22;
    if ((char)bVar13 == '\0') {
      if (unaff_RBX != (UnityEngine_Vector2_Fields)0x0) {
        method_01.x = 0.0;
        method_01.y = 0.0;
        UStack_1e8.x = 2.3232006e-36;
        UStack_1e8.y = 0.0;
        UVar26 = unaff_RBX;
        bVar13 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)unaff_RBX,0,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          UVar27 = *(UnityEngine_Vector2_Fields *)((long)UVar25 + 0x20);
          if (UVar27 == (UnityEngine_Vector2_Fields)0x0) goto label_0445b527;
          unaff_R15 = *(UnityEngine_Vector2_Fields *)((long)UVar27 + 0x38);
          UStack_1e8.x = 2.323267e-36;
          UStack_1e8.y = 0.0;
          unaff_RBP = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
          UStack_1e8.x = 2.3232712e-36;
          UStack_1e8.y = 0.0;
          System_Collections_Generic_List_object____ctor_362ba10
                    ((System_Collections_Generic_List_object__o *)unaff_RBP,
                     (System_Collections_Generic_IEnumerable_T__o *)unaff_R15,MethodInfo_List_1_Map_MapObject);
          UStack_1e8.x = 2.323274e-36;
          UStack_1e8.y = 0.0;
          unaff_RBX = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_TransformScaleCommand);
          UStack_1e8.x = 2.3232768e-36;
          UStack_1e8.y = 0.0;
          MapEditor_TransformScaleCommand___ctor
                    ((MapEditor_TransformScaleCommand_o *)unaff_RBX,
                     (System_Collections_Generic_List_MapObject__o *)unaff_RBP,(MethodInfo *)0x0);
          pMVar24 = (MethodInfo *)0x0;
          UStack_1e8.x = 2.32328e-36;
          UStack_1e8.y = 0.0;
          UVar26 = UVar27;
          GameManagers_MapEditorGameManager__NewCommand
                    ((GameManagers_MapEditorGameManager_o *)UVar27,(MapEditor_BaseCommand_o *)unaff_RBX,1,
                     (MethodInfo *)0x0);
          UStack_1e8.x = 2.3232847e-36;
          UStack_1e8.y = 0.0;
          MapEditor_ScaleGizmo__SetLineColor
                    ((MapEditor_ScaleGizmo_o *)UVar26,*(UnityEngine_Transform_o **)((long)UVar25 + 0x38),
                     (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x68),0xc27,pMVar24);
          UStack_1e8.x = 2.3232899e-36;
          UStack_1e8.y = 0.0;
          MapEditor_ScaleGizmo__SetLineColor
                    ((MapEditor_ScaleGizmo_o *)UVar26,
                     (UnityEngine_Transform_o *)*(UnityEngine_Vector2_Fields *)((long)UVar25 + 0x40),
                     (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x78),0xc27,pMVar24);
          UStack_1e8.x = 2.3232956e-36;
          UStack_1e8.y = 0.0;
          MapEditor_ScaleGizmo__SetLineColor
                    ((MapEditor_ScaleGizmo_o *)UVar26,*(UnityEngine_Transform_o **)((long)UVar25 + 0x48),
                     (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x88),0xc27,pMVar24);
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          UStack_1e8.x = 2.3233014e-36;
          UStack_1e8.y = 0.0;
          local_190._0_4_ = (undefined4)*(undefined8 *)((long)UVar25 + 0xa0);
          in_XMM1_Db = (float)((ulong)*(undefined8 *)((long)UVar25 + 0xa0) >> 0x20);
          MapEditor_ScaleGizmo__SetLineColor
                    ((MapEditor_ScaleGizmo_o *)UVar26,*(UnityEngine_Transform_o **)((long)UVar25 + 0x50),
                     (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x98),4000,pMVar24);
          *(undefined8 *)((long)UVar25 + 0xa8) = 0;
          method_01.x = 0.0;
          method_01.y = 0.0;
          UStack_1e8.x = 2.3233051e-36;
          UStack_1e8.y = 0.0;
          UVar26 = UVar22;
          il2cpp_runtime_helper_022b4080();
          uVar21._0_4_ = (((UnityEngine_RaycastHit_o *)((long)UVar25 + 0x20))->fields).m_Point.fields.x;
          uVar21._4_4_ = (((UnityEngine_RaycastHit_o *)((long)UVar25 + 0x20))->fields).m_Point.fields.y;
joined_r0x0445a522:
          __this = (MapEditor_ScaleGizmo_o *)UVar22;
          if (uVar21 != 0) {
            *(undefined1 *)(uVar21 + 0xa4) = 1;
label_0445b515:
            return (bool_conflict)uVar21;
          }
        }
        else if (unaff_R15 != (UnityEngine_Vector2_Fields)0x0) {
          pIVar7 = *(Il2CppClass **)((long)unaff_R15 + 0x20);
          UVar26.x = 0.0;
          UVar26.y = 0.0;
          UStack_1e8.x = 2.3232056e-36;
          UStack_1e8.y = 0.0;
          UVar38 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          local_190._0_4_ = UVar38.fields.z;
          unaff_RBX.x = 0.0;
          unaff_RBX.y = 0.0;
          if (pIVar7 != (Il2CppClass *)0x0) {
            UStack_1e8.x = 2.3232104e-36;
            UStack_1e8.y = 0.0;
            UnityEngine_Camera__ScreenPointToRay_4db37e0
                      ((UnityEngine_Ray_o *)local_150,(UnityEngine_Camera_o *)pIVar7,UVar38,(MethodInfo *)0x0)
            ;
            fVar32 = fStack_13c;
            fVar31 = fStack_140;
            fVar30 = fStack_144;
            fVar29 = fStack_148;
            uVar12 = local_150._4_4_;
            uVar11 = local_150._0_4_;
            uVar1 = (((UnityEngine_Vector3_o *)((long)UVar25 + 0xb0))->fields).x;
            uVar3 = (((UnityEngine_Vector3_o *)((long)UVar25 + 0xb0))->fields).y;
            fVar33 = (float)uVar1 - (float)local_150._0_4_;
            fVar34 = (float)uVar3 - (float)local_150._4_4_;
            fVar4 = *(float *)((long)UVar25 + 0xb8) - fStack_148;
            if (g_data_057ac31a == '\0') {
              UStack_1e8.x = 2.3232314e-36;
              UStack_1e8.y = 0.0;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057ac31a = '\x01';
            }
            fVar28 = fVar32 * fVar32 + fVar31 * fVar31 + fVar30 * fVar30;
            fVar35 = fVar4 * fVar4 + fVar34 * fVar34 + fVar33 * fVar33;
            if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
              local_120._0_4_ = fVar28;
              UStack_1e8.x = 2.3233109e-36;
              UStack_1e8.y = 0.0;
              il2cpp_runtime_helper_02337ed0();
              fVar28 = (float)local_120._0_4_ * fVar35;
              if (0.0 <= fVar28) goto label_0445a40b;
label_0445a56a:
              UStack_1e8.x = 2.3233202e-36;
              UStack_1e8.y = 0.0;
              fVar28 = sqrtf(fVar28);
              pMVar24 = TypeInfo_Math;
            }
            else {
              fVar28 = fVar28 * fVar35;
              if (fVar28 < 0.0) goto label_0445a56a;
label_0445a40b:
              fVar28 = SQRT(fVar28);
              pMVar24 = TypeInfo_Math;
            }
            fVar36 = 0.0;
            TypeInfo_Math = pMVar24;
            if (1e-15 <= fVar28) {
              fVar28 = (fVar4 * fVar32 + fVar34 * fVar31 + fVar33 * fVar30) / fVar28;
              fVar4 = 1.0;
              if (fVar28 <= 1.0) {
                fVar4 = fVar28;
              }
              if (*(int *)((long)&pMVar24[2].parameters + 4) == 0) {
                UStack_1e8.x = 2.323341e-36;
                UStack_1e8.y = 0.0;
                il2cpp_runtime_helper_02337ed0();
              }
              UStack_1e8.x = 2.323344e-36;
              UStack_1e8.y = 0.0;
              dVar10 = acos((double)(float)(~-(uint)(-1.0 <= fVar28) & 0xbf800000 |
                                           (uint)fVar4 & -(uint)(-1.0 <= fVar28)),pMVar24);
              fVar36 = (float)dVar10 * 57.29578;
            }
            if (g_data_057a6841 == '\0') {
              UStack_1e8.x = 2.3235541e-36;
              UStack_1e8.y = 0.0;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6841 = '\x01';
              iVar5 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            else {
              iVar5 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            if (iVar5 == 0) {
              UStack_1e8.x = 2.3235613e-36;
              UStack_1e8.y = 0.0;
              il2cpp_runtime_helper_02337ed0();
            }
            if (fVar35 < 0.0) {
              UStack_1e8.x = 2.3233595e-36;
              UStack_1e8.y = 0.0;
              fVar35 = sqrtf(fVar35);
            }
            else {
              fVar35 = SQRT(fVar35);
            }
            UStack_1e8.x = 2.3233629e-36;
            UStack_1e8.y = 0.0;
            fVar4 = cosf(fVar36 * 0.017453292);
            fVar35 = fVar35 / fVar4;
            fVar29 = fVar29 + fVar32 * fVar35;
            uVar2 = (((UnityEngine_Vector3_o *)((long)UVar25 + 0xb0))->fields).x;
            fVar4 = (((UnityEngine_Vector3_o *)((long)UVar25 + 0xb0))->fields).y;
            fVar32 = *(float *)((long)UVar25 + 0xb8);
            pUVar8 = *(UnityEngine_Object_o **)((long)UVar25 + 0x38);
            pUVar9 = *(UnityEngine_Object_o **)((long)UVar25 + 0xa8);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              UStack_1e8.x = 2.3233835e-36;
              UStack_1e8.y = 0.0;
              il2cpp_runtime_helper_02337ed0();
            }
            fVar30 = (float)uVar11 + fVar30 * fVar35;
            fVar31 = (float)uVar12 + fVar31 * fVar35;
            UStack_1e8.x = 2.3233902e-36;
            UStack_1e8.y = 0.0;
            bVar13 = UnityEngine_Object__op_Equality(pUVar9,pUVar8,(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
              y.fields = *(UnityEngine_Vector2_Fields *)((long)UVar25 + 0x40);
              pUVar8 = *(UnityEngine_Object_o **)((long)UVar25 + 0xa8);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                UStack_1e8.x = 2.323407e-36;
                UStack_1e8.y = 0.0;
                il2cpp_runtime_helper_02337ed0();
              }
              UStack_1e8.x = 2.3234094e-36;
              UStack_1e8.y = 0.0;
              bVar13 = UnityEngine_Object__op_Equality
                                 (pUVar8,(UnityEngine_Object_o *)y.fields,(MethodInfo *)0x0);
              if ((char)bVar13 == '\0') {
                pUVar8 = *(UnityEngine_Object_o **)((long)UVar25 + 0x48);
                pUVar9 = *(UnityEngine_Object_o **)((long)UVar25 + 0xa8);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  UStack_1e8.x = 2.3235695e-36;
                  UStack_1e8.y = 0.0;
                  il2cpp_runtime_helper_02337ed0();
                }
                UStack_1e8.x = 2.3235719e-36;
                UStack_1e8.y = 0.0;
                bVar13 = UnityEngine_Object__op_Equality(pUVar9,pUVar8,(MethodInfo *)0x0);
                if ((char)bVar13 == '\0') {
                  if (g_data_057a6932 == '\0') {
                    UStack_1e8.x = 2.3237168e-36;
                    UStack_1e8.y = 0.0;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6932 = '\x01';
                  }
                  puVar18 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                  pfVar17 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
                }
                else {
                  if (g_data_057a6846 == '\0') {
                    UStack_1e8.x = 2.3235794e-36;
                    UStack_1e8.y = 0.0;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6846 = '\x01';
                  }
                  puVar18 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
                  pfVar17 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
                }
              }
              else {
                if (g_data_057a6844 == '\0') {
                  UStack_1e8.x = 2.3234146e-36;
                  UStack_1e8.y = 0.0;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a6844 = '\x01';
                }
                puVar18 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
                pfVar17 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
              }
            }
            else {
              if (g_data_057abfed == '\0') {
                UStack_1e8.x = 2.3233946e-36;
                UStack_1e8.y = 0.0;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057abfed = '\x01';
              }
              puVar18 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
              pfVar17 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
            }
            uVar41 = *puVar18;
            fVar33 = *pfVar17;
            in_XMM1_Db = 0.0;
            in_XMM1_Dc = 0;
            in_XMM1_Dd = 0;
            unaff_RBX = *(UnityEngine_Vector2_Fields *)((long)UVar25 + 0x50);
            unaff_RBP = *(UnityEngine_Vector2_Fields *)((long)UVar25 + 0xa8);
            local_190._0_4_ = fVar33;
            fVar34 = fVar31;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              local_120._4_4_ = fVar4;
              local_120._0_4_ = fVar4;
              local_120._8_8_ = 0;
              UStack_1e8.x = 2.323437e-36;
              UStack_1e8.y = 0.0;
              il2cpp_runtime_helper_02337ed0();
              fVar4 = (float)local_120._0_4_;
            }
            fVar34 = fVar34 - fVar4;
            UStack_1e8.x = 2.3234472e-36;
            UStack_1e8.y = 0.0;
            method_01 = unaff_RBX;
            bVar13 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)unaff_RBX,
                                (MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
              UVar16 = *(UnityEngine_Vector2_Fields *)UVar22;
              UVar26 = UVar16;
            }
            else {
              method_01.x = 0.0;
              method_01.y = 0.0;
              UStack_1e8.x = 2.3234497e-36;
              UStack_1e8.y = 0.0;
              UVar26 = unaff_R15;
              UVar16 = (UnityEngine_Vector2_Fields)
                       UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)unaff_R15,(MethodInfo *)0x0);
            }
            if (UVar16 != (UnityEngine_Vector2_Fields)0x0) {
              method_01.x = 0.0;
              method_01.y = 0.0;
              UStack_1e8.x = 2.3234556e-36;
              UStack_1e8.y = 0.0;
              UVar38 = UnityEngine_Transform__get_right((UnityEngine_Transform_o *)UVar16,(MethodInfo *)0x0);
              local_190._0_4_ = UVar38.fields.z;
              fVar32 = (fVar29 - fVar32) * (float)local_190._0_4_ +
                       fVar34 * UVar38.fields.y + (fVar30 - (float)uVar2) * UVar38.fields.x;
              lVar6 = *(long *)&(((UnityEngine_RaycastHit_o *)((long)UVar25 + 0x20))->fields).m_Point.fields;
              UVar26 = UVar16;
              if (lVar6 != 0) {
                fStack_19c = 0.0;
                uStack_198 = 0;
                uStack_194 = 0;
                local_180 = (float)uVar41;
                fStack_17c = (float)((ulong)uVar41 >> 0x20);
                local_1b0._0_4_ = fVar32 * local_180 * 0.1;
                local_1b0._4_4_ = fVar32 * fStack_17c * 0.1;
                local_190._0_4_ = fVar33 * fVar32 * 0.1;
                if (*(char *)(lVar6 + 0x4c) != '\0') {
                  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
                  in_XMM1_Db = fStack_19c;
                  in_XMM1_Dc = uStack_198;
                  in_XMM1_Dd = uStack_194;
                  if ((lVar6 == 0) ||
                     (lVar6 = *(long *)(lVar6 + 0x60), in_XMM1_Db = 0.0, in_XMM1_Dc = 0, in_XMM1_Dd = 0,
                     lVar6 == 0)) goto label_0445b527;
                  fVar32 = *(float *)(lVar6 + 0x14);
                  fVar4 = (((UnityEngine_Vector2_o *)((long)UVar25 + 0xc4))->fields).x;
                  *(ulong *)((long)UVar25 + 0xbc) =
                       CONCAT44(local_1b0._4_4_ + (float)((ulong)*(undefined8 *)((long)UVar25 + 0xbc) >> 0x20)
                                ,(float)local_1b0 + (float)*(undefined8 *)((long)UVar25 + 0xbc));
                  (((UnityEngine_Vector2_o *)((long)UVar25 + 0xc4))->fields).x =
                       (float)local_190._0_4_ + fVar4;
                  if (g_data_057a65d5 == '\0') {
                    UStack_1e8.x = 2.3234919e-36;
                    UStack_1e8.y = 0.0;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a65d5 = '\x01';
                  }
                  UVar22 = (UnityEngine_Vector2_Fields)&TypeInfo_Vector3;
                  puVar18 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  local_1b0 = *puVar18;
                  _local_190 = ZEXT416(*(uint *)(puVar18 + 1));
                  if (g_data_057abfed == '\0') {
                    UStack_1e8.x = 2.3235037e-36;
                    UStack_1e8.y = 0.0;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057abfed = '\x01';
                    puVar18 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  }
                  fVar35 = fStack_17c - (float)((ulong)*(undefined8 *)((long)puVar18 + 0x3c) >> 0x20);
                  fVar4 = fVar33 - *(float *)((long)puVar18 + 0x44);
                  fVar34 = local_180 - (float)*(undefined8 *)((long)puVar18 + 0x3c);
                  if ((fVar34 * fVar34 + fVar35 * fVar35 + fVar4 * fVar4 < 9.9999994e-11) &&
                     (fVar32 < ABS(*(float *)((long)UVar25 + 0xbc)))) {
                    fVar4 = *(float *)((long)UVar25 + 0xbc) / fVar32;
                    local_120 = ZEXT416((uint)fVar4);
                    pMVar24 = (MethodInfo *)local_150;
                    UStack_1e8.x = 2.3235353e-36;
                    UStack_1e8.y = 0.0;
                    dVar10 = modf((double)fVar4,(double *)pMVar24,(MethodInfo *)method_01);
                    if (0.0 <= (float)local_120._0_4_) {
                      if ((dVar10 != 0.5) || (NAN(dVar10))) {
                        UStack_1e8.x = 2.3237397e-36;
                        UStack_1e8.y = 0.0;
                        fVar4 = floorf((float)local_120._0_4_ + 0.5);
                      }
                      else {
                        fVar4 = (float)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                        if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                          fVar4 = fVar4 + 1.0;
                        }
                      }
                    }
                    else if ((dVar10 != -0.5) || (NAN(dVar10))) {
                      UStack_1e8.x = 2.3237365e-36;
                      UStack_1e8.y = 0.0;
                      fVar4 = ceilf((float)local_120._0_4_ + -0.5);
                    }
                    else {
                      fVar4 = (float)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                      if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                        fVar4 = fVar4 + -1.0;
                      }
                    }
                    local_1b0._4_4_ = (float)((ulong)local_1b0 >> 0x20);
                    local_1b0 = CONCAT44(local_1b0._4_4_,fVar4 * fVar32);
                    UStack_1e8.x = 2.3237466e-36;
                    UStack_1e8.y = 0.0;
                    fVar4 = fmodf(*(float *)((long)UVar25 + 0xbc),fVar32,pMVar24);
                    *(float *)((long)UVar25 + 0xbc) = fVar4;
                  }
                  if (g_data_057a6844 == '\0') {
                    UStack_1e8.x = 2.3237545e-36;
                    UStack_1e8.y = 0.0;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6844 = '\x01';
                  }
                  uVar41 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
                  fVar35 = fStack_17c - (float)((ulong)uVar41 >> 0x20);
                  fVar4 = fVar33 - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
                  fVar34 = local_180 - (float)uVar41;
                  if ((fVar34 * fVar34 + fVar35 * fVar35 + fVar4 * fVar4 < 9.9999994e-11) &&
                     (fVar32 < ABS(*(float *)((long)UVar25 + 0xc0)))) {
                    fVar4 = *(float *)((long)UVar25 + 0xc0) / fVar32;
                    local_120 = ZEXT416((uint)fVar4);
                    pMVar24 = (MethodInfo *)local_150;
                    UStack_1e8.x = 2.3237824e-36;
                    UStack_1e8.y = 0.0;
                    dVar10 = modf((double)fVar4,(double *)pMVar24,(MethodInfo *)method_01);
                    if (0.0 <= (float)local_120._0_4_) {
                      if ((dVar10 != 0.5) || (NAN(dVar10))) {
                        UStack_1e8.x = 2.3238086e-36;
                        UStack_1e8.y = 0.0;
                        fVar4 = floorf((float)local_120._0_4_ + 0.5);
                      }
                      else {
                        fVar4 = (float)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                        if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                          fVar4 = fVar4 + 1.0;
                        }
                      }
                    }
                    else if ((dVar10 != -0.5) || (NAN(dVar10))) {
                      UStack_1e8.x = 2.3238054e-36;
                      UStack_1e8.y = 0.0;
                      fVar4 = ceilf((float)local_120._0_4_ + -0.5);
                    }
                    else {
                      fVar4 = (float)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                      if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                        fVar4 = fVar4 + -1.0;
                      }
                    }
                    local_1b0 = CONCAT44(fVar4 * fVar32,(float)local_1b0);
                    UStack_1e8.x = 2.3238162e-36;
                    UStack_1e8.y = 0.0;
                    fVar4 = fmodf(*(float *)((long)UVar25 + 0xc0),fVar32,pMVar24);
                    *(float *)((long)UVar25 + 0xc0) = fVar4;
                  }
                  if (g_data_057a6846 == '\0') {
                    UStack_1e8.x = 2.323824e-36;
                    UStack_1e8.y = 0.0;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6846 = '\x01';
                  }
                  uVar41 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
                  fVar35 = fStack_17c - (float)((ulong)uVar41 >> 0x20);
                  fVar4 = fVar33 - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
                  fVar34 = local_180 - (float)uVar41;
                  if ((fVar34 * fVar34 + fVar35 * fVar35 + fVar4 * fVar4 < 9.9999994e-11) &&
                     (fVar4 = (((UnityEngine_Vector2_o *)((long)UVar25 + 0xc4))->fields).x,
                     fVar32 < ABS(fVar4))) {
                    fVar4 = fVar4 / fVar32;
                    pMVar24 = (MethodInfo *)local_150;
                    UStack_1e8.x = 2.3238515e-36;
                    UStack_1e8.y = 0.0;
                    dVar10 = modf((double)fVar4,(double *)pMVar24,(MethodInfo *)method_01);
                    local_190._4_4_ = local_150._4_4_;
                    if (0.0 <= fVar4) {
                      if ((dVar10 != 0.5) || (NAN(dVar10))) {
                        UStack_1e8.x = 2.3238766e-36;
                        UStack_1e8.y = 0.0;
                        fVar4 = floorf(fVar4 + 0.5);
                        local_190._4_4_ = extraout_XMM0_Db_00;
                        uStack_188 = extraout_XMM0_Dc_00;
                        uStack_184 = extraout_XMM0_Dd_00;
                      }
                      else {
                        uStack_188 = 0;
                        uStack_184 = 0;
                        fVar4 = (float)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                        if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                          fVar4 = fVar4 + 1.0;
                        }
                      }
                    }
                    else if ((dVar10 != -0.5) || (NAN(dVar10))) {
                      UStack_1e8.x = 2.3238734e-36;
                      UStack_1e8.y = 0.0;
                      fVar4 = ceilf(fVar4 + -0.5);
                      local_190._4_4_ = extraout_XMM0_Db;
                      uStack_188 = extraout_XMM0_Dc;
                      uStack_184 = extraout_XMM0_Dd;
                    }
                    else {
                      uStack_188 = 0;
                      uStack_184 = 0;
                      fVar4 = (float)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                      if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                        fVar4 = fVar4 + -1.0;
                      }
                    }
                    local_190._0_4_ = fVar4 * fVar32;
                    UStack_1e8.x = 2.3238818e-36;
                    UStack_1e8.y = 0.0;
                    fVar4 = fmodf((((UnityEngine_Vector2_o *)((long)UVar25 + 0xc4))->fields).x,fVar32,pMVar24)
                    ;
                    (((UnityEngine_Vector2_o *)((long)UVar25 + 0xc4))->fields).x = fVar4;
                  }
                  if (g_data_057a6932 == '\0') {
                    UStack_1e8.x = 2.3238897e-36;
                    UStack_1e8.y = 0.0;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6932 = '\x01';
                  }
                  uVar41 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                  fStack_17c = fStack_17c - (float)((ulong)uVar41 >> 0x20);
                  fVar33 = fVar33 - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
                  local_180 = local_180 - (float)uVar41;
                  fStack_19c = (float)local_190._4_4_;
                  uStack_198 = uStack_188;
                  uStack_194 = uStack_184;
                  if ((local_180 * local_180 + fStack_17c * fStack_17c + fVar33 * fVar33 < 9.9999994e-11) &&
                     (fVar32 < ABS(*(float *)((long)UVar25 + 0xbc)))) {
                    fVar4 = *(float *)((long)UVar25 + 0xbc) / fVar32;
                    UStack_1e8.x = 2.3239182e-36;
                    UStack_1e8.y = 0.0;
                    dVar10 = modf((double)fVar4,(double *)local_150,(MethodInfo *)method_01);
                    if (0.0 <= fVar4) {
                      if ((dVar10 != 0.5) || (NAN(dVar10))) {
                        UStack_1e8.x = 2.3239451e-36;
                        UStack_1e8.y = 0.0;
                        local_1b0._0_4_ = floorf(fVar4 + 0.5);
                      }
                      else {
                        local_1b0._0_4_ = (float)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                        if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                          local_1b0._0_4_ = (float)local_1b0 + 1.0;
                        }
                      }
                    }
                    else if ((dVar10 != -0.5) || (NAN(dVar10))) {
                      UStack_1e8.x = 2.3239419e-36;
                      UStack_1e8.y = 0.0;
                      local_1b0._0_4_ = ceilf(fVar4 + -0.5);
                    }
                    else {
                      local_1b0._0_4_ = (float)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                      if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                        local_1b0._0_4_ = (float)local_1b0 + -1.0;
                      }
                    }
                    local_1b0._0_4_ = (float)local_1b0 * fVar32;
                    fVar4 = *(float *)((long)UVar25 + 0xbc) / fVar32;
                    UStack_1e8.x = 2.3239543e-36;
                    UStack_1e8.y = 0.0;
                    dVar10 = modf((double)fVar4,(double *)local_150,(MethodInfo *)method_01);
                    if (0.0 <= fVar4) {
                      if ((dVar10 != 0.5) || (NAN(dVar10))) {
                        UStack_1e8.x = 2.3239792e-36;
                        UStack_1e8.y = 0.0;
                        local_1b0._4_4_ = floorf(fVar4 + 0.5);
                      }
                      else {
                        local_1b0._4_4_ = (float)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                        if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                          local_1b0._4_4_ = local_1b0._4_4_ + 1.0;
                        }
                      }
                    }
                    else if ((dVar10 != -0.5) || (NAN(dVar10))) {
                      UStack_1e8.x = 2.323976e-36;
                      UStack_1e8.y = 0.0;
                      local_1b0._4_4_ = ceilf(fVar4 + -0.5);
                    }
                    else {
                      local_1b0._4_4_ = (float)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                      if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                        local_1b0._4_4_ = local_1b0._4_4_ + -1.0;
                      }
                    }
                    local_1b0._4_4_ = local_1b0._4_4_ * fVar32;
                    fVar4 = *(float *)((long)UVar25 + 0xbc) / fVar32;
                    pMVar24 = (MethodInfo *)local_150;
                    UStack_1e8.x = 2.32399e-36;
                    UStack_1e8.y = 0.0;
                    dVar10 = modf((double)fVar4,(double *)pMVar24,(MethodInfo *)method_01);
                    fStack_19c = (float)local_150._4_4_;
                    if (0.0 <= fVar4) {
                      if ((dVar10 != 0.5) || (NAN(dVar10))) {
                        UStack_1e8.x = 2.3240149e-36;
                        UStack_1e8.y = 0.0;
                        local_190._0_4_ = floorf(fVar4 + 0.5);
                        fStack_19c = extraout_XMM0_Db_02;
                        uStack_198 = extraout_XMM0_Dc_02;
                        uStack_194 = extraout_XMM0_Dd_02;
                      }
                      else {
                        uStack_198 = 0;
                        uStack_194 = 0;
                        local_190._0_4_ = (undefined4)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                        if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                          local_190._0_4_ = (float)local_190._0_4_ + 1.0;
                        }
                      }
                    }
                    else if ((dVar10 != -0.5) || (NAN(dVar10))) {
                      UStack_1e8.x = 2.3240117e-36;
                      UStack_1e8.y = 0.0;
                      local_190._0_4_ = ceilf(fVar4 + -0.5);
                      fStack_19c = extraout_XMM0_Db_01;
                      uStack_198 = extraout_XMM0_Dc_01;
                      uStack_194 = extraout_XMM0_Dd_01;
                    }
                    else {
                      uStack_198 = 0;
                      uStack_194 = 0;
                      local_190._0_4_ = (undefined4)(double)CONCAT44(local_150._4_4_,local_150._0_4_);
                      if (((long)(double)CONCAT44(local_150._4_4_,local_150._0_4_) & 1U) != 0) {
                        local_190._0_4_ = (float)local_190._0_4_ + -1.0;
                      }
                    }
                    local_190._0_4_ = (float)local_190._0_4_ * fVar32;
                    UStack_1e8.x = 2.3240235e-36;
                    UStack_1e8.y = 0.0;
                    fVar32 = fmodf(*(float *)((long)UVar25 + 0xbc),fVar32,pMVar24);
                    *(float *)((long)UVar25 + 0xbc) = fVar32;
                  }
                }
                UStack_1e8.x = 2.3240289e-36;
                UStack_1e8.y = 0.0;
                UVar38.fields.y = local_1b0._4_4_;
                UVar38.fields.x = (float)local_1b0;
                UVar38.fields.z = (float)local_190._0_4_;
                MapEditor_ScaleGizmo__ScaleSelectedObjects
                          ((MapEditor_ScaleGizmo_o *)UVar25,UVar38,(MethodInfo *)method_01);
                UStack_1e8.x = 2.3240303e-36;
                UStack_1e8.y = 0.0;
                UVar26 = UVar25;
                MapEditor_ScaleGizmo__ResetCenter((MapEditor_ScaleGizmo_o *)UVar25,(MethodInfo *)method_01);
                (((UnityEngine_Vector3_o *)((long)UVar25 + 0xb0))->fields).x = fVar30;
                (((UnityEngine_Vector3_o *)((long)UVar25 + 0xb0))->fields).y = fVar31;
                *(float *)((long)UVar25 + 0xb8) = fVar29;
                uVar21._0_4_ = (((UnityEngine_RaycastHit_o *)((long)UVar25 + 0x20))->fields).m_Point.fields.x;
                uVar21._4_4_ = (((UnityEngine_RaycastHit_o *)((long)UVar25 + 0x20))->fields).m_Point.fields.y;
                in_XMM1_Db = fStack_19c;
                in_XMM1_Dc = uStack_198;
                in_XMM1_Dd = uStack_194;
                goto joined_r0x0445a522;
              }
            }
          }
        }
      }
    }
    else if (*(long *)((long)UVar25 + 0x30) != 0) {
      if (*(char *)(*(long *)((long)UVar25 + 0x30) + 0x120) != '\0') {
label_0445adaa:
        if (g_data_057a65d5 == '\0') {
          UStack_1e8.x = 2.3237019e-36;
          UStack_1e8.y = 0.0;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        uVar21 = (ulong)(uint)fVar29;
        *(undefined8 *)((long)UVar25 + 0xbc) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        (((UnityEngine_Vector2_o *)((long)UVar25 + 0xc4))->fields).x = fVar29;
        goto label_0445b515;
      }
      if (unaff_RBX != (UnityEngine_Vector2_Fields)0x0) {
        method_01.x = 0.0;
        method_01.y = 0.0;
        UStack_1e8.x = 2.3230777e-36;
        UStack_1e8.y = 0.0;
        UVar26 = unaff_RBX;
        bVar13 = Settings_KeybindSetting__GetKeyDown
                           ((Settings_KeybindSetting_o *)unaff_RBX,0,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_0445adaa;
        if (unaff_R15 != (UnityEngine_Vector2_Fields)0x0) {
          pIVar7 = *(Il2CppClass **)((long)unaff_R15 + 0x20);
          UVar26.x = 0.0;
          UVar26.y = 0.0;
          UStack_1e8.x = 2.3230827e-36;
          UStack_1e8.y = 0.0;
          UVar38 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          local_190._0_4_ = UVar38.fields.z;
          unaff_RBX.x = 0.0;
          unaff_RBX.y = 0.0;
          if (pIVar7 != (Il2CppClass *)0x0) {
            UStack_1e8.x = 2.323089e-36;
            UStack_1e8.y = 0.0;
            UnityEngine_Camera__ScreenPointToRay_4db37e0
                      (&local_b0,(UnityEngine_Camera_o *)pIVar7,UVar38,(MethodInfo *)0x0);
            fStack_140 = local_b0.fields.m_Direction.fields.y;
            fStack_13c = local_b0.fields.m_Direction.fields.z;
            local_150._0_4_ = local_b0.fields.m_Origin.fields.x;
            local_150._4_4_ = local_b0.fields.m_Origin.fields.y;
            fStack_148 = local_b0.fields.m_Origin.fields.z;
            fStack_144 = local_b0.fields.m_Direction.fields.x;
            method_01.x = 1.4013e-45;
            method_01.y = 0.0;
            UStack_1e8.x = 2.3230983e-36;
            UStack_1e8.y = 0.0;
            unaff_RBX = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
            unaff_RBP = (UnityEngine_Vector2_Fields)&TypeInfo_PhysicsLayer;
            if (*(float *)((long)TypeInfo_PhysicsLayer + 0xe4) == 0.0) {
              UStack_1e8.x = 2.3231034e-36;
              UStack_1e8.y = 0.0;
              il2cpp_runtime_helper_02337ed0();
            }
            UVar26 = TypeInfo_PhysicsLayer;
            if (unaff_RBX != (UnityEngine_Vector2_Fields)0x0) {
              if (*(int *)((long)unaff_RBX + 0x18) == 0) goto label_0445b52c;
              (((UnityEngine_RaycastHit_o *)((long)unaff_RBX + 0x20))->fields).m_Point.fields.x =
                   *(float *)(*(Il2CppMethodPointer *)((long)TypeInfo_PhysicsLayer + 0xb8) + 0x44);
              UStack_1e8.x = 2.3231116e-36;
              UStack_1e8.y = 0.0;
              mask = Utility_PhysicsLayer__GetMask((System_Int32_array *)unaff_RBX,(MethodInfo *)0x0);
              UStack_1e8.x = 2.3231132e-36;
              UStack_1e8.y = 0.0;
              uVar14 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
              unaff_RBX.y = 0.0;
              unaff_RBX.x = (float)uVar14;
              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                UStack_1e8.x = 2.3231179e-36;
                UStack_1e8.y = 0.0;
                il2cpp_runtime_helper_02337ed0();
              }
              uVar43 = CONCAT44(fStack_13c,fStack_140);
              uVar41 = CONCAT44(local_150._4_4_,local_150._0_4_);
              uVar42 = CONCAT44(fStack_144,fStack_148);
              UStack_1e8.x = 2.3231254e-36;
              UStack_1e8.y = 0.0;
              ray.fields.m_Origin.fields.z = fStack_148;
              ray.fields.m_Direction.fields.x = fStack_144;
              ray.fields.m_Origin.fields.x = (float)local_150._0_4_;
              ray.fields.m_Origin.fields.y = (float)local_150._4_4_;
              ray.fields.m_Direction.fields.y = fStack_140;
              ray.fields.m_Direction.fields.z = fStack_13c;
              UVar16 = (UnityEngine_Vector2_Fields)
                       UnityEngine_Physics__RaycastAll_4e79890(ray,100000.0,uVar14,(MethodInfo *)0x0);
              UStack_1e8.x = 2.323128e-36;
              UStack_1e8.y = 0.0;
              method_01 = UVar16;
              UVar26 = UVar25;
              bVar13 = MapEditor_ScaleGizmo__ContainsCenter
                                 ((MapEditor_ScaleGizmo_o *)UVar25,(UnityEngine_RaycastHit_array *)UVar16,
                                  method_00);
              if ((char)bVar13 != '\0') {
                *(undefined8 *)((long)UVar25 + 0xa8) = *(undefined8 *)((long)UVar25 + 0x50);
                UStack_1e8.x = 2.3231328e-36;
                UStack_1e8.y = 0.0;
                il2cpp_runtime_helper_022b4080();
                UStack_1e8.x = 2.3231374e-36;
                UStack_1e8.y = 0.0;
                MapEditor_ScaleGizmo__SetLineColor
                          ((MapEditor_ScaleGizmo_o *)UVar22,*(UnityEngine_Transform_o **)((long)UVar25 + 0x38)
                           ,(UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x68),0xc27,
                           pMVar24);
                UStack_1e8.x = 2.3231426e-36;
                UStack_1e8.y = 0.0;
                MapEditor_ScaleGizmo__SetLineColor
                          ((MapEditor_ScaleGizmo_o *)UVar22,
                           (UnityEngine_Transform_o *)*(UnityEngine_Vector2_Fields *)((long)UVar25 + 0x40),
                           (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x78),0xc27,
                           pMVar24);
                UStack_1e8.x = 2.3231484e-36;
                UStack_1e8.y = 0.0;
                MapEditor_ScaleGizmo__SetLineColor
                          ((MapEditor_ScaleGizmo_o *)UVar22,*(UnityEngine_Transform_o **)((long)UVar25 + 0x48)
                           ,(UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x88),0xc27,
                           pMVar24);
                UStack_1e8.x = 2.3231541e-36;
                UStack_1e8.y = 0.0;
                MapEditor_ScaleGizmo__SetLineColor
                          ((MapEditor_ScaleGizmo_o *)UVar22,*(UnityEngine_Transform_o **)((long)UVar25 + 0x50)
                           ,(UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x98),4000,
                           pMVar24);
                UStack_1e8.x = 2.3231593e-36;
                UStack_1e8.y = 0.0;
                MapEditor_ScaleGizmo__SetLineColor
                          ((MapEditor_ScaleGizmo_o *)UVar22,*(UnityEngine_Transform_o **)((long)UVar25 + 0xa8)
                           ,(UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x58),0xc27,
                           pMVar24);
                UStack_1e8.x = 2.323164e-36;
                UStack_1e8.y = 0.0;
                MapEditor_ScaleGizmo__SetLineColor
                          ((MapEditor_ScaleGizmo_o *)UVar22,*(UnityEngine_Transform_o **)((long)UVar25 + 0x38)
                           ,(UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x58),0xc27,
                           pMVar24);
                UStack_1e8.x = 2.3231686e-36;
                UStack_1e8.y = 0.0;
                MapEditor_ScaleGizmo__SetLineColor
                          ((MapEditor_ScaleGizmo_o *)UVar22,
                           (UnityEngine_Transform_o *)*(UnityEngine_Vector2_Fields *)((long)UVar25 + 0x40),
                           (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x58),0xc27,
                           pMVar24);
                UStack_1e8.x = 2.3231733e-36;
                UStack_1e8.y = 0.0;
                MapEditor_ScaleGizmo__SetLineColor
                          ((MapEditor_ScaleGizmo_o *)UVar22,*(UnityEngine_Transform_o **)((long)UVar25 + 0x48)
                           ,(UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x58),0xc27,
                           pMVar24);
                UStack_1e8.x = 2.323176e-36;
                UStack_1e8.y = 0.0;
                predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_RaycastHit_bool);
                UStack_1e8.x = 2.3231807e-36;
                UStack_1e8.y = 0.0;
                System_Func_RaycastHit__bool____ctor();
                UStack_1e8.x = 2.3231859e-36;
                UStack_1e8.y = 0.0;
                System_Linq_Enumerable__First_RaycastHit_
                          ((UnityEngine_RaycastHit_o *)local_150,
                           (System_Collections_Generic_IEnumerable_TSource__o *)UVar16,predicate,MethodInfo_RaycastHit_First_RaycastHit)
                ;
                local_e0._4_4_ = local_150._4_4_;
                local_e0._0_4_ = local_150._0_4_;
                uStack_d8 = CONCAT44(fStack_144,fStack_148);
                uStack_d0 = CONCAT44(fStack_13c,fStack_140);
                fStack_c0 = fStack_130;
                uStack_bc = uStack_12c;
                uStack_c8 = uStack_138;
                local_c4 = fStack_134;
                method_02 = &local_e0;
label_0445ad92:
                UStack_1e8.x = 2.323695e-36;
                UStack_1e8.y = 0.0;
                __this_09.fields.m_Point.fields.z = (float)(int)uVar42;
                __this_09.fields.m_Normal.fields.x = (float)(int)((ulong)uVar42 >> 0x20);
                __this_09.fields.m_Point.fields.x = (float)(int)uVar41;
                __this_09.fields.m_Point.fields.y = (float)(int)((ulong)uVar41 >> 0x20);
                __this_09.fields.m_Normal.fields.y = (float)(int)uVar43;
                __this_09.fields.m_Normal.fields.z = (float)(int)((ulong)uVar43 >> 0x20);
                __this_09.fields.m_FaceID = (int)in_stack_fffffffffffffe38;
                __this_09.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffe38 >> 0x20);
                __this_09.fields.m_UV.fields.x = (float)in_stack_fffffffffffffe40;
                __this_09.fields.m_UV.fields.y = (float)in_stack_fffffffffffffe44;
                __this_09.fields.m_Collider = in_stack_fffffffffffffe48;
                UVar38 = UnityEngine_RaycastHit__get_point(__this_09,(MethodInfo *)method_02);
                (((UnityEngine_Vector3_o *)((long)UVar25 + 0xb0))->fields).x = (float)(int)UVar38.fields._0_8_
                ;
                (((UnityEngine_Vector3_o *)((long)UVar25 + 0xb0))->fields).y =
                     (float)(int)((ulong)UVar38.fields._0_8_ >> 0x20);
                *(float *)((long)UVar25 + 0xb8) = UVar38.fields.z;
                goto label_0445adaa;
              }
              unaff_R15 = UVar16;
              if (UVar16 != (UnityEngine_Vector2_Fields)0x0) {
                unaff_R15 = (UnityEngine_Vector2_Fields)((long)UVar16 + 0x20);
                __this._0_4_ = 0.0;
                __this._4_4_ = 0.0;
                UVar27 = (UnityEngine_Vector2_Fields)&local_110;
                do {
                  UVar19.y = 0.0;
                  UVar19.x = (float)*(uint *)((long)UVar16 + 0x18);
                  if ((long)(int)*(uint *)((long)UVar16 + 0x18) <= (long)__this) goto label_0445adaa;
                  if ((ulong)UVar19 <= __this) goto label_0445b52c;
                  local_110 = *(_union_14 *)unaff_R15;
                  pIStack_108 = *(Il2CppMethodPointer *)((long)unaff_R15 + 8);
                  local_190._0_4_ =
                       *(undefined4 *)
                        &((GameManagers_MapEditorGameManager_Fields *)((long)unaff_R15 + 0x10))->m_CachedPtr;
                  in_XMM1_Db = *(float *)((long)unaff_R15 + 0x14);
                  pIStack_100 = (InvokerMethod)
                                ((GameManagers_MapEditorGameManager_Fields *)((long)unaff_R15 + 0x10))->
                                m_CachedPtr;
                  in_XMM1_Dc = *(undefined4 *)((long)unaff_R15 + 0x18);
                  in_XMM1_Dd = *(undefined4 *)((long)unaff_R15 + 0x1c);
                  uStack_e8 = *(uint *)((long)unaff_R15 + 0x28);
                  pMVar24 = (MethodInfo *)(ulong)uStack_e8;
                  uStack_f0 = SUB84(*(Il2CppClass **)((long)unaff_R15 + 0x20),0);
                  uStack_ec = (undefined4)((ulong)*(Il2CppClass **)((long)unaff_R15 + 0x20) >> 0x20);
                  method_01.x = 0.0;
                  method_01.y = 0.0;
                  UStack_1e8.x = 2.3236167e-36;
                  UStack_1e8.y = 0.0;
                  __this_05.fields.m_Point.fields.z = (float)(int)uVar42;
                  __this_05.fields.m_Normal.fields.x = (float)(int)((ulong)uVar42 >> 0x20);
                  __this_05.fields.m_Point.fields.x = (float)(int)uVar41;
                  __this_05.fields.m_Point.fields.y = (float)(int)((ulong)uVar41 >> 0x20);
                  __this_05.fields.m_Normal.fields.y = (float)(int)uVar43;
                  __this_05.fields.m_Normal.fields.z = (float)(int)((ulong)uVar43 >> 0x20);
                  __this_05.fields.m_FaceID = (int)in_stack_fffffffffffffe38;
                  __this_05.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffe38 >> 0x20);
                  __this_05.fields.m_UV.fields.x = (float)in_stack_fffffffffffffe40;
                  __this_05.fields.m_UV.fields.y = (float)in_stack_fffffffffffffe44;
                  __this_05.fields.m_Collider = in_stack_fffffffffffffe48;
                  UVar26 = UVar27;
                  uStack_f8 = in_XMM1_Dc;
                  local_f4 = in_XMM1_Dd;
                  pUVar15 = UnityEngine_RaycastHit__get_collider(__this_05,(MethodInfo *)UVar27);
                  if (pUVar15 == (UnityEngine_Collider_o *)0x0) goto label_0445b527;
                  UStack_1e8.x = 2.3236201e-36;
                  UStack_1e8.y = 0.0;
                  unaff_RBX = (UnityEngine_Vector2_Fields)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
                  unaff_RBP = *(UnityEngine_Vector2_Fields *)((long)UVar25 + 0x38);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    UStack_1e8.x = 2.3236257e-36;
                    UStack_1e8.y = 0.0;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UStack_1e8.x = 2.323628e-36;
                  UStack_1e8.y = 0.0;
                  bVar13 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)unaff_RBP,
                                      (MethodInfo *)0x0);
                  if ((char)bVar13 != '\0') break;
                  method_01.x = 0.0;
                  method_01.y = 0.0;
                  UStack_1e8.x = 2.3236312e-36;
                  UStack_1e8.y = 0.0;
                  __this_06.fields.m_Point.fields.z = (float)(int)uVar42;
                  __this_06.fields.m_Normal.fields.x = (float)(int)((ulong)uVar42 >> 0x20);
                  __this_06.fields.m_Point.fields.x = (float)(int)uVar41;
                  __this_06.fields.m_Point.fields.y = (float)(int)((ulong)uVar41 >> 0x20);
                  __this_06.fields.m_Normal.fields.y = (float)(int)uVar43;
                  __this_06.fields.m_Normal.fields.z = (float)(int)((ulong)uVar43 >> 0x20);
                  __this_06.fields.m_FaceID = (int)in_stack_fffffffffffffe38;
                  __this_06.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffe38 >> 0x20);
                  __this_06.fields.m_UV.fields.x = (float)in_stack_fffffffffffffe40;
                  __this_06.fields.m_UV.fields.y = (float)in_stack_fffffffffffffe44;
                  __this_06.fields.m_Collider = in_stack_fffffffffffffe48;
                  UVar26 = UVar27;
                  pUVar15 = UnityEngine_RaycastHit__get_collider(__this_06,(MethodInfo *)UVar27);
                  if (pUVar15 == (UnityEngine_Collider_o *)0x0) goto label_0445b527;
                  UStack_1e8.x = 2.3236346e-36;
                  UStack_1e8.y = 0.0;
                  unaff_RBX = (UnityEngine_Vector2_Fields)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
                  unaff_RBP = *(UnityEngine_Vector2_Fields *)((long)UVar25 + 0x40);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    UStack_1e8.x = 2.3236402e-36;
                    UStack_1e8.y = 0.0;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UStack_1e8.x = 2.3236425e-36;
                  UStack_1e8.y = 0.0;
                  bVar13 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)unaff_RBP,
                                      (MethodInfo *)0x0);
                  if ((char)bVar13 != '\0') break;
                  method_01.x = 0.0;
                  method_01.y = 0.0;
                  UStack_1e8.x = 2.323645e-36;
                  UStack_1e8.y = 0.0;
                  __this_07.fields.m_Point.fields.z = (float)(int)uVar42;
                  __this_07.fields.m_Normal.fields.x = (float)(int)((ulong)uVar42 >> 0x20);
                  __this_07.fields.m_Point.fields.x = (float)(int)uVar41;
                  __this_07.fields.m_Point.fields.y = (float)(int)((ulong)uVar41 >> 0x20);
                  __this_07.fields.m_Normal.fields.y = (float)(int)uVar43;
                  __this_07.fields.m_Normal.fields.z = (float)(int)((ulong)uVar43 >> 0x20);
                  __this_07.fields.m_FaceID = (int)in_stack_fffffffffffffe38;
                  __this_07.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffe38 >> 0x20);
                  __this_07.fields.m_UV.fields.x = (float)in_stack_fffffffffffffe40;
                  __this_07.fields.m_UV.fields.y = (float)in_stack_fffffffffffffe44;
                  __this_07.fields.m_Collider = in_stack_fffffffffffffe48;
                  UVar26 = UVar27;
                  pUVar15 = UnityEngine_RaycastHit__get_collider(__this_07,(MethodInfo *)UVar27);
                  if (pUVar15 == (UnityEngine_Collider_o *)0x0) goto label_0445b527;
                  UStack_1e8.x = 2.3236484e-36;
                  UStack_1e8.y = 0.0;
                  unaff_RBX = (UnityEngine_Vector2_Fields)
                              UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
                  unaff_RBP = *(UnityEngine_Vector2_Fields *)((long)UVar25 + 0x48);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    UStack_1e8.x = 2.3236547e-36;
                    UStack_1e8.y = 0.0;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  unaff_R15 = (UnityEngine_Vector2_Fields)((long)unaff_R15 + 0x2c);
                  __this = (MapEditor_ScaleGizmo_o *)((long)__this + 1);
                  UStack_1e8.x = 2.3235997e-36;
                  UStack_1e8.y = 0.0;
                  method_01 = unaff_RBP;
                  UVar26 = unaff_RBX;
                  bVar13 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)unaff_RBP,
                                      (MethodInfo *)0x0);
                } while ((char)bVar13 == '\0');
                UVar26 = (UnityEngine_Vector2_Fields)&local_110;
                method_01.x = 0.0;
                method_01.y = 0.0;
                UStack_1e8.x = 2.3236583e-36;
                UStack_1e8.y = 0.0;
                __this_08.fields.m_Point.fields.z = (float)(int)uVar42;
                __this_08.fields.m_Normal.fields.x = (float)(int)((ulong)uVar42 >> 0x20);
                __this_08.fields.m_Point.fields.x = (float)(int)uVar41;
                __this_08.fields.m_Point.fields.y = (float)(int)((ulong)uVar41 >> 0x20);
                __this_08.fields.m_Normal.fields.y = (float)(int)uVar43;
                __this_08.fields.m_Normal.fields.z = (float)(int)((ulong)uVar43 >> 0x20);
                __this_08.fields.m_FaceID = (int)in_stack_fffffffffffffe38;
                __this_08.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffe38 >> 0x20);
                __this_08.fields.m_UV.fields.x = (float)in_stack_fffffffffffffe40;
                __this_08.fields.m_UV.fields.y = (float)in_stack_fffffffffffffe44;
                __this_08.fields.m_Collider = in_stack_fffffffffffffe48;
                pUVar15 = UnityEngine_RaycastHit__get_collider(__this_08,(MethodInfo *)UVar26);
                if (pUVar15 != (UnityEngine_Collider_o *)0x0) {
                  UStack_1e8.x = 2.3236617e-36;
                  UStack_1e8.y = 0.0;
                  pUVar20 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
                  *(UnityEngine_Transform_o **)((long)UVar25 + 0xa8) = pUVar20;
                  UStack_1e8.x = 2.3236658e-36;
                  UStack_1e8.y = 0.0;
                  il2cpp_runtime_helper_022b4080(UVar22,pUVar20);
                  UStack_1e8.x = 2.3236705e-36;
                  UStack_1e8.y = 0.0;
                  MapEditor_ScaleGizmo__SetLineColor
                            ((MapEditor_ScaleGizmo_o *)UVar22,
                             *(UnityEngine_Transform_o **)((long)UVar25 + 0x38),
                             (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x68),0xc27,
                             pMVar24);
                  UStack_1e8.x = 2.3236757e-36;
                  UStack_1e8.y = 0.0;
                  MapEditor_ScaleGizmo__SetLineColor
                            ((MapEditor_ScaleGizmo_o *)UVar22,
                             (UnityEngine_Transform_o *)*(UnityEngine_Vector2_Fields *)((long)UVar25 + 0x40),
                             (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x78),0xc27,
                             pMVar24);
                  UStack_1e8.x = 2.3236815e-36;
                  UStack_1e8.y = 0.0;
                  MapEditor_ScaleGizmo__SetLineColor
                            ((MapEditor_ScaleGizmo_o *)UVar22,
                             *(UnityEngine_Transform_o **)((long)UVar25 + 0x48),
                             (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x88),0xc27,
                             pMVar24);
                  UStack_1e8.x = 2.3236872e-36;
                  UStack_1e8.y = 0.0;
                  MapEditor_ScaleGizmo__SetLineColor
                            ((MapEditor_ScaleGizmo_o *)UVar22,
                             *(UnityEngine_Transform_o **)((long)UVar25 + 0x50),
                             (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x98),4000,
                             pMVar24);
                  UStack_1e8.x = 2.3236924e-36;
                  UStack_1e8.y = 0.0;
                  MapEditor_ScaleGizmo__SetLineColor
                            ((MapEditor_ScaleGizmo_o *)UVar22,
                             *(UnityEngine_Transform_o **)((long)UVar25 + 0xa8),
                             (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)((long)UVar25 + 0x58),0xc27,
                             pMVar24);
                  method_02 = &local_110;
                  goto label_0445ad92;
                }
              }
            }
          }
        }
      }
    }
  }
label_0445b527:
  UStack_1e8.x = 2.3240429e-36;
  UStack_1e8.y = 0.0;
  il2cpp_runtime_helper_022b2c90();
label_0445b52c:
  UStack_1e8.x = 2.3240438e-36;
  UStack_1e8.y = 0.0;
  uStack_228 = il2cpp_runtime_helper_022b2ca0();
  fStack_218 = (float)local_190._0_4_;
  fStack_214 = in_XMM1_Db;
  uStack_210 = in_XMM1_Dc;
  uStack_20c = in_XMM1_Dd;
  UStack_200 = unaff_RBX;
  UStack_1f8 = (UnityEngine_Vector2_Fields)__this;
  UStack_1f0 = unaff_R15;
  UStack_1e8 = unaff_RBP;
  if (g_data_057ae748 == '\0') {
    UVar26 = (UnityEngine_Vector2_Fields)&MethodInfo_Renderer_GetComponentsInChildren_Renderer;
    UStack_230.x = 2.3240547e-36;
    UStack_230.y = 0.0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae748 = '\x01';
  }
  if (method_01 != (UnityEngine_Vector2_Fields)0x0) {
    UStack_230.x = 2.3240608e-36;
    UStack_230.y = 0.0;
    UVar25 = method_01;
    UVar22 = (UnityEngine_Vector2_Fields)
             UnityEngine_Component__GetComponentsInChildren_object__24e8500
                       ((UnityEngine_Component_o *)method_01,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    UVar26 = UVar25;
    if (UVar22 != (UnityEngine_Vector2_Fields)0x0) {
      fVar29 = *(float *)((long)UVar22 + 0x18);
      if (0 < (int)fVar29) {
        method_01.x = 0.0;
        method_01.y = 0.0;
        do {
          fVar30 = method_01.x;
          UVar26 = UVar25;
          unaff_R15 = UVar22;
          if ((uint)fVar29 <= (uint)fVar30) goto label_0445b61a;
          UVar16 = *(UnityEngine_Vector2_Fields *)((long)UVar22 + 0x20 + (long)(int)fVar30 * 8);
          if (UVar16 == (UnityEngine_Vector2_Fields)0x0) goto label_0445b615;
          UStack_230.x = 2.3240714e-36;
          UStack_230.y = 0.0;
          UVar26 = UVar16;
          __this_11 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)UVar16,(MethodInfo *)0x0);
          if (__this_11 == (UnityEngine_Material_o *)0x0) goto label_0445b615;
          value.fields.a = fStack_214;
          value.fields.b = fStack_218;
          UStack_230.x = 2.3240757e-36;
          UStack_230.y = 0.0;
          value.fields.r = (float)(undefined4)uStack_228;
          value.fields.g = (float)uStack_228._4_4_;
          local_190._0_4_ = fStack_218;
          UnityEngine_Material__set_color(__this_11,value,(MethodInfo *)0x0);
          UStack_230.x = 2.3240775e-36;
          UStack_230.y = 0.0;
          UVar25 = (UnityEngine_Vector2_Fields)
                   UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)UVar16,(MethodInfo *)0x0);
          UVar26 = UVar16;
          if (UVar25 == (UnityEngine_Vector2_Fields)0x0) goto label_0445b615;
          UStack_230.x = 2.3240807e-36;
          UStack_230.y = 0.0;
          UnityEngine_Material__set_renderQueue
                    ((UnityEngine_Material_o *)UVar25,(int32_t)extraout_RDX,(MethodInfo *)0x0);
          method_01.x = (float)((int)fVar30 + 1);
          method_01.y = 0.0;
          fVar29 = *(float *)((long)UVar22 + 0x18);
        } while ((int)method_01.x < (int)fVar29);
      }
      return (bool_conflict)fVar29;
    }
  }
label_0445b615:
  UStack_230.x = 2.3240856e-36;
  UStack_230.y = 0.0;
  il2cpp_runtime_helper_022b2c90();
label_0445b61a:
  UStack_230.x = 2.3240865e-36;
  UStack_230.y = 0.0;
  uVar41 = il2cpp_runtime_helper_022b2ca0();
  UStack_230 = unaff_R15;
  uStack_238 = extraout_RDX & 0xffffffff;
  UStack_240 = UVar27;
  UStack_248 = method_01;
  if (g_data_057ae746 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae746 = '\x01';
  }
  _Var40.genericMethod = (Il2CppObject *)0x0;
  pIVar7 = *(Il2CppClass **)&(((UnityEngine_RaycastHit_o *)((long)UVar26 + 0x20))->fields).m_Point.fields;
  if ((pIVar7 != (Il2CppClass *)0x0) &&
     (__this_00 = *(System_Collections_Generic_HashSet_object__o **)&(pIVar7->_1).this_arg.bits,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)a_Stack_260,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    _Var40 = a_Stack_260[0];
    while( true ) {
      __this_01.fields._index = (int32_t)in_stack_fffffffffffffd58;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffd50;
      __this_01.fields._version = local_190._0_4_;
      __this_01.fields._current = _Var40.genericMethod;
      bVar13 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                         (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffd60);
      if ((char)bVar13 == '\0') {
        __this_02.fields._index = (int32_t)in_stack_fffffffffffffd58;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffd50;
        __this_02.fields._version = local_190._0_4_;
        __this_02.fields._current = _Var40.genericMethod;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffd60);
        return extraout_EAX;
      }
      if (lStack_250 == 0) break;
      uVar42 = *(undefined8 *)(lStack_250 + 0x28);
      fVar29 = *(float *)(lStack_250 + 0x30);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar39.fields.z = fVar29;
      UVar39.fields._0_8_ = uVar42;
      b.fields.z = (float)local_190._0_4_;
      b.fields.x = (float)(int)uVar41;
      b.fields.y = (float)(int)((ulong)uVar41 >> 0x20);
      UVar38 = Utility_Util__MultiplyVectors(UVar39,b,(MethodInfo *)0x0);
      in_stack_fffffffffffffd58 = UVar38.fields.z;
      if (*(UnityEngine_GameObject_o **)(lStack_250 + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_0445b7ce;
      pUVar20 = UnityEngine_GameObject__get_transform
                          (*(UnityEngine_GameObject_o **)(lStack_250 + 0x18),(MethodInfo *)0x0);
      if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_0445b7d3;
      UVar39 = UnityEngine_Transform__get_localScale(pUVar20,(MethodInfo *)0x0);
      fStack_280 = UVar38.fields.x;
      fStack_27c = UVar38.fields.y;
      value_00.fields.y = fStack_27c + UVar39.fields.y;
      value_00.fields.x = fStack_280 + UVar39.fields.x;
      value_00.fields.z = in_stack_fffffffffffffd58 + UVar39.fields.z;
      UnityEngine_Transform__set_localScale(pUVar20,value_00,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_0445b7ce:
    il2cpp_runtime_helper_022b2c90();
label_0445b7d3:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar37 = il2cpp_runtime_helper_022b2c90();
  if (auVar37._8_4_ == 1) {
    plVar23 = (long *)__cxa_begin_catch(auVar37._0_8_);
    lVar6 = *plVar23;
    __cxa_end_catch();
    __this_03.fields._index = (int32_t)in_stack_fffffffffffffd58;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffd50;
    __this_03.fields._version = local_190._0_4_;
    __this_03.fields._current = _Var40.genericMethod;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffd60);
    if (lVar6 == 0) {
      return extraout_EAX_00;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_04.fields._index = (int32_t)in_stack_fffffffffffffd58;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffd50;
  __this_04.fields._version = local_190._0_4_;
  __this_04.fields._current = _Var40.genericMethod;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffd60);
  _Unwind_Resume(auVar37._0_8_);
}


// MapEditor.ScaleGizmo$$Update
// il2cpp: void MapEditor_ScaleGizmo__Update (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x4459e70

void MapEditor_ScaleGizmo__Update(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  UI_MapEditorMenu_o *pUVar11;
  Il2CppClass *pIVar12;
  UnityEngine_Transform_o *pUVar13;
  GameManagers_MapEditorGameManager_o *pGVar14;
  System_Collections_Generic_HashSet_object__o *__this_00;
  double dVar15;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_05;
  UnityEngine_RaycastHit_o __this_06;
  UnityEngine_RaycastHit_o __this_07;
  UnityEngine_RaycastHit_o __this_08;
  UnityEngine_RaycastHit_o __this_09;
  undefined4 uVar16;
  undefined4 uVar17;
  bool_conflict bVar18;
  UnityEngine_LayerMask_o mask;
  uint uVar19;
  _union_14 *p_Var20;
  System_Func_TSource__bool__o *predicate;
  float *pfVar21;
  undefined8 *puVar22;
  UnityEngine_Collider_o *pUVar23;
  UnityEngine_Transform_o *pUVar24;
  _union_14 *p_Var25;
  UnityEngine_Material_o *__this_10;
  long *plVar26;
  MethodInfo *pMVar27;
  MethodInfo *method_00;
  ulong extraout_RDX;
  uint uVar28;
  _union_14 *unaff_RBX;
  _union_14 *unaff_RBP;
  _union_14 *method_01;
  _union_14 *p_Var29;
  _union_14 *__this_11;
  _union_14 *p_Var30;
  UnityEngine_Transform_o **unaff_R14;
  MapEditor_ScaleGizmo_o *__this_12;
  _union_14 *unaff_R15;
  float fVar31;
  float fVar32;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float in_XMM1_Da;
  float in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  UnityEngine_Color_o value;
  undefined1 auVar38 [12];
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o b;
  undefined8 in_stack_fffffffffffffdb8;
  float in_stack_fffffffffffffdc0;
  _union_332950 _Var41;
  float fStack_218;
  float fStack_214;
  _union_332950 a_Stack_1f8 [2];
  long lStack_1e8;
  _union_14 *p_Stack_1e0;
  _union_14 *p_Stack_1d8;
  ulong uStack_1d0;
  _union_14 *p_Stack_1c8;
  undefined8 uStack_1c0;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  _union_14 *p_Stack_198;
  UnityEngine_Transform_o **ppUStack_190;
  _union_14 *p_Stack_188;
  _union_14 *p_Stack_180;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 in_stack_fffffffffffffea0;
  undefined4 in_stack_fffffffffffffea8;
  undefined4 in_stack_fffffffffffffeac;
  int32_t in_stack_fffffffffffffeb0;
  undefined8 uStack_148;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [8];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint32_t uStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c4;
  undefined1 auStack_b8 [16];
  _union_14 _Stack_a8;
  _union_14 _Stack_a0;
  _union_14 _Stack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  _union_14 _Stack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint32_t uStack_60;
  float fStack_5c;
  float fStack_58;
  undefined8 uStack_54;
  UnityEngine_Ray_o UStack_48;
  
  auStack_128._0_4_ = in_XMM1_Da;
  if (g_data_057ae745 == '\0') {
    p_Stack_180 = (_union_14 *)0x4459e9d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RaycastHit_First_RaycastHit);
    p_Stack_180 = (_union_14 *)0x4459ea9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_RaycastHit_bool);
    p_Stack_180 = (_union_14 *)0x4459eb5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    p_Stack_180 = (_union_14 *)0x4459ec1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    p_Stack_180 = (_union_14 *)0x4459ecd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    p_Stack_180 = (_union_14 *)0x4459ed9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    p_Stack_180 = (_union_14 *)0x4459ee5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    p_Stack_180 = (_union_14 *)0x4459ef1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    p_Stack_180 = (_union_14 *)0x4459efd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Update_b__17_0);
    p_Stack_180 = (_union_14 *)0x4459f09;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    p_Stack_180 = (_union_14 *)0x4459f15;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    p_Stack_180 = (_union_14 *)0x4459f21;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransformScaleCommand);
    p_Stack_180 = (_union_14 *)0x4459f2d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    g_data_057ae745 = '\x01';
    auStack_128._0_4_ = in_XMM1_Da;
  }
  fStack_58 = 0.0;
  uStack_54 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  fStack_5c = 0.0;
  _Stack_78.genericMethod = (void *)0x0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  _Stack_98.genericMethod = (InvokerMethod)0x0;
  uStack_90 = 0;
  uStack_8c = 0;
  _Stack_a8.genericMethod = (void *)0x0;
  _Stack_a0.genericMethod = (Il2CppMethodPointer)0x0;
  method_01 = (_union_14 *)0x0;
  p_Stack_180 = (_union_14 *)0x4459f71;
  p_Var29 = (_union_14 *)__this;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  p_Var30 = (_union_14 *)&TypeInfo_SettingsManager;
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x50), lVar10 != 0)) {
    pMVar27 = *(MethodInfo **)(TypeInfo_SceneLoader + 0xb8);
    unaff_R15 = (_union_14 *)pMVar27->name;
    unaff_RBX = *(_union_14 **)(lVar10 + 0x78);
    unaff_RBP = (_union_14 *)(__this->fields)._activeLine;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      p_Stack_180 = (_union_14 *)0x4459fd5;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_12 = (MapEditor_ScaleGizmo_o *)&(__this->fields)._activeLine;
    method_01 = (_union_14 *)0x0;
    p_Stack_180 = (_union_14 *)0x4459fe8;
    p_Var29 = unaff_RBP;
    bVar18 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    unaff_R14 = (UnityEngine_Transform_o **)__this_12;
    if ((char)bVar18 == '\0') {
      if (unaff_RBX != (_union_14 *)0x0) {
        method_01 = (_union_14 *)0x0;
        p_Stack_180 = (_union_14 *)0x445a2d4;
        p_Var29 = unaff_RBX;
        bVar18 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)unaff_RBX,0,(MethodInfo *)0x0);
        if ((char)bVar18 == '\0') {
          p_Var30 = (_union_14 *)(__this->fields)._gameManager;
          if (p_Var30 == (_union_14 *)0x0) goto label_0445b527;
          unaff_R15 = p_Var30[7].genericMethod;
          p_Stack_180 = (_union_14 *)0x445a446;
          unaff_RBP = (_union_14 *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
          p_Stack_180 = (_union_14 *)0x445a45e;
          System_Collections_Generic_List_object____ctor_362ba10
                    ((System_Collections_Generic_List_object__o *)unaff_RBP,
                     (System_Collections_Generic_IEnumerable_T__o *)unaff_R15,MethodInfo_List_1_Map_MapObject);
          p_Stack_180 = (_union_14 *)0x445a46d;
          unaff_RBX = (_union_14 *)il2cpp_runtime_helper_023052d0(TypeInfo_TransformScaleCommand);
          p_Stack_180 = (_union_14 *)0x445a47d;
          MapEditor_TransformScaleCommand___ctor
                    ((MapEditor_TransformScaleCommand_o *)unaff_RBX,
                     (System_Collections_Generic_List_MapObject__o *)unaff_RBP,(MethodInfo *)0x0);
          pMVar27 = (MethodInfo *)0x0;
          p_Stack_180 = (_union_14 *)0x445a48f;
          p_Var29 = p_Var30;
          GameManagers_MapEditorGameManager__NewCommand
                    ((GameManagers_MapEditorGameManager_o *)p_Var30,(MapEditor_BaseCommand_o *)unaff_RBX,1,
                     (MethodInfo *)0x0);
          p_Stack_180 = (_union_14 *)0x445a4a9;
          MapEditor_ScaleGizmo__SetLineColor
                    ((MapEditor_ScaleGizmo_o *)p_Var29,(__this->fields)._lineX,
                     (UnityEngine_Color_o)(__this->fields).LineXColor.fields,0xc27,pMVar27);
          p_Stack_180 = (_union_14 *)0x445a4c6;
          MapEditor_ScaleGizmo__SetLineColor
                    ((MapEditor_ScaleGizmo_o *)p_Var29,(__this->fields)._lineY,
                     (UnityEngine_Color_o)(__this->fields).LineYColor.fields,0xc27,pMVar27);
          p_Stack_180 = (_union_14 *)0x445a4e6;
          MapEditor_ScaleGizmo__SetLineColor
                    ((MapEditor_ScaleGizmo_o *)p_Var29,(__this->fields)._lineZ,
                     (UnityEngine_Color_o)(__this->fields).LineZColor.fields,0xc27,pMVar27);
          fVar2 = (__this->fields).CenterColor.fields.b;
          fVar6 = (__this->fields).CenterColor.fields.a;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          p_Stack_180 = (_union_14 *)0x445a506;
          MapEditor_ScaleGizmo__SetLineColor
                    ((MapEditor_ScaleGizmo_o *)p_Var29,(__this->fields)._center,
                     (UnityEngine_Color_o)(__this->fields).CenterColor.fields,4000,pMVar27);
          (__this->fields)._activeLine = (UnityEngine_Transform_o *)0x0;
          method_01 = (_union_14 *)0x0;
          p_Stack_180 = (_union_14 *)0x445a51b;
          p_Var29 = (_union_14 *)__this_12;
          il2cpp_runtime_helper_022b4080();
          pGVar14 = (__this->fields)._gameManager;
          auStack_128._0_4_ = fVar2;
          in_XMM1_Db = fVar6;
joined_r0x0445a522:
          unaff_R14 = (UnityEngine_Transform_o **)__this_12;
          if (pGVar14 != (GameManagers_MapEditorGameManager_o *)0x0) {
            *(undefined1 *)&(pGVar14->fields).IgnoreNextSelect = 1;
            return;
          }
        }
        else if (unaff_R15 != (_union_14 *)0x0) {
          pIVar12 = unaff_R15[4].genericMethod;
          p_Var29 = (_union_14 *)0x0;
          p_Stack_180 = (_union_14 *)0x445a2f0;
          UVar39 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          auStack_128._0_4_ = UVar39.fields.z;
          unaff_RBX = (_union_14 *)0x0;
          if (pIVar12 != (Il2CppClass *)0x0) {
            p_Stack_180 = (_union_14 *)0x445a30b;
            UnityEngine_Camera__ScreenPointToRay_4db37e0
                      ((UnityEngine_Ray_o *)auStack_e8,(UnityEngine_Camera_o *)pIVar12,UVar39,
                       (MethodInfo *)0x0);
            fVar33 = fStack_d4;
            fVar32 = fStack_d8;
            fVar6 = fStack_dc;
            fVar2 = fStack_e0;
            uVar17 = auStack_e8._4_4_;
            uVar16 = auStack_e8._0_4_;
            uVar1 = (__this->fields)._previousMousePoint.fields.x;
            uVar5 = (__this->fields)._previousMousePoint.fields.y;
            fVar34 = (float)uVar1 - (float)auStack_e8._0_4_;
            fVar35 = (float)uVar5 - (float)auStack_e8._4_4_;
            fVar7 = (__this->fields)._previousMousePoint.fields.z - fStack_e0;
            if (g_data_057ac31a == '\0') {
              p_Stack_180 = (_union_14 *)0x445a380;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057ac31a = '\x01';
            }
            fVar31 = fVar33 * fVar33 + fVar32 * fVar32 + fVar6 * fVar6;
            fVar36 = fVar7 * fVar7 + fVar35 * fVar35 + fVar34 * fVar34;
            if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
              auStack_b8._0_4_ = fVar31;
              p_Stack_180 = (_union_14 *)0x445a53b;
              il2cpp_runtime_helper_02337ed0();
              fVar31 = (float)auStack_b8._0_4_ * fVar36;
              if (0.0 <= fVar31) goto label_0445a40b;
label_0445a56a:
              p_Stack_180 = (_union_14 *)0x445a56f;
              fVar31 = sqrtf(fVar31);
              pMVar27 = TypeInfo_Math;
            }
            else {
              fVar31 = fVar31 * fVar36;
              if (fVar31 < 0.0) goto label_0445a56a;
label_0445a40b:
              fVar31 = SQRT(fVar31);
              pMVar27 = TypeInfo_Math;
            }
            fVar37 = 0.0;
            TypeInfo_Math = pMVar27;
            if (1e-15 <= fVar31) {
              fVar31 = (fVar7 * fVar33 + fVar35 * fVar32 + fVar34 * fVar6) / fVar31;
              fVar7 = 1.0;
              if (fVar31 <= 1.0) {
                fVar7 = fVar31;
              }
              if (*(int *)((long)&pMVar27[2].parameters + 4) == 0) {
                p_Stack_180 = (_union_14 *)0x445a5e3;
                il2cpp_runtime_helper_02337ed0();
              }
              p_Stack_180 = (_union_14 *)0x445a5f4;
              dVar15 = acos((double)(float)(~-(uint)(-1.0 <= fVar31) & 0xbf800000 |
                                           (uint)fVar7 & -(uint)(-1.0 <= fVar31)),pMVar27);
              fVar37 = (float)dVar15 * 57.29578;
            }
            if (g_data_057a6841 == '\0') {
              p_Stack_180 = (_union_14 *)0x445aa87;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6841 = '\x01';
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            else {
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            if (iVar9 == 0) {
              p_Stack_180 = (_union_14 *)0x445aaaf;
              il2cpp_runtime_helper_02337ed0();
            }
            if (fVar36 < 0.0) {
              p_Stack_180 = (_union_14 *)0x445a64a;
              fVar36 = sqrtf(fVar36);
            }
            else {
              fVar36 = SQRT(fVar36);
            }
            p_Stack_180 = (_union_14 *)0x445a65d;
            fVar7 = cosf(fVar37 * 0.017453292);
            fVar36 = fVar36 / fVar7;
            fVar2 = fVar2 + fVar33 * fVar36;
            uVar3 = (__this->fields)._previousMousePoint.fields.x;
            fVar7 = (__this->fields)._previousMousePoint.fields.y;
            fVar33 = (__this->fields)._previousMousePoint.fields.z;
            pUVar24 = (__this->fields)._lineX;
            pUVar13 = (__this->fields)._activeLine;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              p_Stack_180 = (_union_14 *)0x445a6d0;
              il2cpp_runtime_helper_02337ed0();
            }
            fVar6 = (float)uVar16 + fVar6 * fVar36;
            fVar32 = (float)uVar17 + fVar32 * fVar36;
            p_Stack_180 = (_union_14 *)0x445a6f5;
            bVar18 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)pUVar24,
                                (MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              pUVar24 = (__this->fields)._lineY;
              pUVar13 = (__this->fields)._activeLine;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                p_Stack_180 = (_union_14 *)0x445a753;
                il2cpp_runtime_helper_02337ed0();
              }
              p_Stack_180 = (_union_14 *)0x445a760;
              bVar18 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)pUVar24,
                                  (MethodInfo *)0x0);
              if ((char)bVar18 == '\0') {
                pUVar24 = (__this->fields)._lineZ;
                pUVar13 = (__this->fields)._activeLine;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  p_Stack_180 = (_union_14 *)0x445aadd;
                  il2cpp_runtime_helper_02337ed0();
                }
                p_Stack_180 = (_union_14 *)0x445aaea;
                bVar18 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)pUVar24,
                                    (MethodInfo *)0x0);
                if ((char)bVar18 == '\0') {
                  if (g_data_057a6932 == '\0') {
                    p_Stack_180 = (_union_14 *)0x445ae12;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6932 = '\x01';
                  }
                  puVar22 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                  pfVar21 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
                }
                else {
                  if (g_data_057a6846 == '\0') {
                    p_Stack_180 = (_union_14 *)0x445ab14;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6846 = '\x01';
                  }
                  puVar22 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
                  pfVar21 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
                }
              }
              else {
                if (g_data_057a6844 == '\0') {
                  p_Stack_180 = (_union_14 *)0x445a77d;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a6844 = '\x01';
                }
                puVar22 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
                pfVar21 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
              }
            }
            else {
              if (g_data_057abfed == '\0') {
                p_Stack_180 = (_union_14 *)0x445a70e;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057abfed = '\x01';
              }
              puVar22 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
              pfVar21 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
            }
            uVar42 = *puVar22;
            fVar34 = *pfVar21;
            in_XMM1_Db = 0.0;
            in_XMM1_Dc = 0;
            in_XMM1_Dd = 0;
            unaff_RBX = (_union_14 *)(__this->fields)._center;
            unaff_RBP = (_union_14 *)(__this->fields)._activeLine;
            auStack_128._0_4_ = fVar34;
            fVar35 = fVar32;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              auStack_b8._4_4_ = fVar7;
              auStack_b8._0_4_ = fVar7;
              auStack_b8._8_8_ = 0;
              p_Stack_180 = (_union_14 *)0x445a7fa;
              il2cpp_runtime_helper_02337ed0();
              fVar7 = (float)auStack_b8._0_4_;
            }
            fVar35 = fVar35 - fVar7;
            p_Stack_180 = (_union_14 *)0x445a833;
            method_01 = unaff_RBX;
            bVar18 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)unaff_RBX,
                                (MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              p_Var20 = *(_union_14 **)__this_12;
              p_Var29 = p_Var20;
            }
            else {
              method_01 = (_union_14 *)0x0;
              p_Stack_180 = (_union_14 *)0x445a841;
              p_Var29 = unaff_R15;
              p_Var20 = (_union_14 *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)unaff_R15,(MethodInfo *)0x0);
            }
            if (p_Var20 != (_union_14 *)0x0) {
              method_01 = (_union_14 *)0x0;
              p_Stack_180 = (_union_14 *)0x445a862;
              UVar39 = UnityEngine_Transform__get_right((UnityEngine_Transform_o *)p_Var20,(MethodInfo *)0x0);
              auStack_128._0_4_ = UVar39.fields.z;
              fVar33 = (fVar2 - fVar33) * (float)auStack_128._0_4_ +
                       fVar35 * UVar39.fields.y + (fVar6 - (float)uVar3) * UVar39.fields.x;
              pGVar14 = (__this->fields)._gameManager;
              p_Var29 = p_Var20;
              if (pGVar14 != (GameManagers_MapEditorGameManager_o *)0x0) {
                fStack_134 = 0.0;
                uStack_130 = 0;
                uStack_12c = 0;
                fStack_118 = (float)uVar42;
                fStack_114 = (float)((ulong)uVar42 >> 0x20);
                uStack_148._0_4_ = fVar33 * fStack_118 * 0.1;
                uStack_148._4_4_ = fVar33 * fStack_114 * 0.1;
                auStack_128._0_4_ = fVar34 * fVar33 * 0.1;
                if ((char)(pGVar14->fields).Snap != '\0') {
                  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
                  in_XMM1_Db = fStack_134;
                  in_XMM1_Dc = uStack_130;
                  in_XMM1_Dd = uStack_12c;
                  if ((lVar10 == 0) ||
                     (lVar10 = *(long *)(lVar10 + 0x60), in_XMM1_Db = 0.0, in_XMM1_Dc = 0, in_XMM1_Dd = 0,
                     lVar10 == 0)) goto label_0445b527;
                  fVar33 = *(float *)(lVar10 + 0x14);
                  uVar4 = (__this->fields)._currentScaleAmount.fields.x;
                  uVar8 = (__this->fields)._currentScaleAmount.fields.y;
                  fVar7 = (__this->fields)._currentScaleAmount.fields.z;
                  (__this->fields)._currentScaleAmount.fields.x = (float)uStack_148 + (float)uVar4;
                  (__this->fields)._currentScaleAmount.fields.y = uStack_148._4_4_ + (float)uVar8;
                  (__this->fields)._currentScaleAmount.fields.z = (float)auStack_128._0_4_ + fVar7;
                  if (g_data_057a65d5 == '\0') {
                    p_Stack_180 = (_union_14 *)0x445a92c;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a65d5 = '\x01';
                  }
                  __this_12 = (MapEditor_ScaleGizmo_o *)&TypeInfo_Vector3;
                  puVar22 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  uStack_148 = *puVar22;
                  _auStack_128 = ZEXT416(*(uint *)(puVar22 + 1));
                  if (g_data_057abfed == '\0') {
                    p_Stack_180 = (_union_14 *)0x445a96e;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057abfed = '\x01';
                    puVar22 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  }
                  fVar36 = fStack_114 - (float)((ulong)*(undefined8 *)((long)puVar22 + 0x3c) >> 0x20);
                  fVar7 = fVar34 - *(float *)((long)puVar22 + 0x44);
                  fVar35 = fStack_118 - (float)*(undefined8 *)((long)puVar22 + 0x3c);
                  if ((fVar35 * fVar35 + fVar36 * fVar36 + fVar7 * fVar7 < 9.9999994e-11) &&
                     (fVar7 = (__this->fields)._currentScaleAmount.fields.x, fVar33 < ABS(fVar7))) {
                    fVar7 = fVar7 / fVar33;
                    auStack_b8 = ZEXT416((uint)fVar7);
                    pMVar27 = (MethodInfo *)auStack_e8;
                    p_Stack_180 = (_union_14 *)0x445aa1e;
                    dVar15 = modf((double)fVar7,(double *)pMVar27,(MethodInfo *)method_01);
                    if (0.0 <= (float)auStack_b8._0_4_) {
                      if ((dVar15 != 0.5) || (NAN(dVar15))) {
                        p_Stack_180 = (_union_14 *)0x445ae92;
                        fVar7 = floorf((float)auStack_b8._0_4_ + 0.5);
                      }
                      else {
                        fVar7 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                        if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                          fVar7 = fVar7 + 1.0;
                        }
                      }
                    }
                    else if ((dVar15 != -0.5) || (NAN(dVar15))) {
                      p_Stack_180 = (_union_14 *)0x445ae80;
                      fVar7 = ceilf((float)auStack_b8._0_4_ + -0.5);
                    }
                    else {
                      fVar7 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                      if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                        fVar7 = fVar7 + -1.0;
                      }
                    }
                    uStack_148._4_4_ = (float)((ulong)uStack_148 >> 0x20);
                    uStack_148 = CONCAT44(uStack_148._4_4_,fVar7 * fVar33);
                    p_Stack_180 = (_union_14 *)0x445aeb8;
                    fVar7 = fmodf((__this->fields)._currentScaleAmount.fields.x,fVar33,pMVar27);
                    (__this->fields)._currentScaleAmount.fields.x = fVar7;
                  }
                  if (g_data_057a6844 == '\0') {
                    p_Stack_180 = (_union_14 *)0x445aee4;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6844 = '\x01';
                  }
                  uVar42 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
                  fVar36 = fStack_114 - (float)((ulong)uVar42 >> 0x20);
                  fVar7 = fVar34 - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
                  fVar35 = fStack_118 - (float)uVar42;
                  if ((fVar35 * fVar35 + fVar36 * fVar36 + fVar7 * fVar7 < 9.9999994e-11) &&
                     (fVar7 = (__this->fields)._currentScaleAmount.fields.y, fVar33 < ABS(fVar7))) {
                    fVar7 = fVar7 / fVar33;
                    auStack_b8 = ZEXT416((uint)fVar7);
                    pMVar27 = (MethodInfo *)auStack_e8;
                    p_Stack_180 = (_union_14 *)0x445af80;
                    dVar15 = modf((double)fVar7,(double *)pMVar27,(MethodInfo *)method_01);
                    if (0.0 <= (float)auStack_b8._0_4_) {
                      if ((dVar15 != 0.5) || (NAN(dVar15))) {
                        p_Stack_180 = (_union_14 *)0x445b012;
                        fVar7 = floorf((float)auStack_b8._0_4_ + 0.5);
                      }
                      else {
                        fVar7 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                        if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                          fVar7 = fVar7 + 1.0;
                        }
                      }
                    }
                    else if ((dVar15 != -0.5) || (NAN(dVar15))) {
                      p_Stack_180 = (_union_14 *)0x445b000;
                      fVar7 = ceilf((float)auStack_b8._0_4_ + -0.5);
                    }
                    else {
                      fVar7 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                      if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                        fVar7 = fVar7 + -1.0;
                      }
                    }
                    uStack_148 = CONCAT44(fVar7 * fVar33,(float)uStack_148);
                    p_Stack_180 = (_union_14 *)0x445b03c;
                    fVar7 = fmodf((__this->fields)._currentScaleAmount.fields.y,fVar33,pMVar27);
                    (__this->fields)._currentScaleAmount.fields.y = fVar7;
                  }
                  if (g_data_057a6846 == '\0') {
                    p_Stack_180 = (_union_14 *)0x445b068;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6846 = '\x01';
                  }
                  uVar42 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
                  fVar36 = fStack_114 - (float)((ulong)uVar42 >> 0x20);
                  fVar7 = fVar34 - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
                  fVar35 = fStack_118 - (float)uVar42;
                  if ((fVar35 * fVar35 + fVar36 * fVar36 + fVar7 * fVar7 < 9.9999994e-11) &&
                     (fVar7 = (__this->fields)._currentScaleAmount.fields.z, fVar33 < ABS(fVar7))) {
                    fVar7 = fVar7 / fVar33;
                    pMVar27 = (MethodInfo *)auStack_e8;
                    p_Stack_180 = (_union_14 *)0x445b101;
                    dVar15 = modf((double)fVar7,(double *)pMVar27,(MethodInfo *)method_01);
                    auStack_128._4_4_ = auStack_e8._4_4_;
                    if (0.0 <= fVar7) {
                      if ((dVar15 != 0.5) || (NAN(dVar15))) {
                        p_Stack_180 = (_union_14 *)0x445b18d;
                        fVar7 = floorf(fVar7 + 0.5);
                        auStack_128._4_4_ = extraout_XMM0_Db_00;
                        uStack_120 = extraout_XMM0_Dc_00;
                        uStack_11c = extraout_XMM0_Dd_00;
                      }
                      else {
                        uStack_120 = 0;
                        uStack_11c = 0;
                        fVar7 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                        if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                          fVar7 = fVar7 + 1.0;
                        }
                      }
                    }
                    else if ((dVar15 != -0.5) || (NAN(dVar15))) {
                      p_Stack_180 = (_union_14 *)0x445b17b;
                      fVar7 = ceilf(fVar7 + -0.5);
                      auStack_128._4_4_ = extraout_XMM0_Db;
                      uStack_120 = extraout_XMM0_Dc;
                      uStack_11c = extraout_XMM0_Dd;
                    }
                    else {
                      uStack_120 = 0;
                      uStack_11c = 0;
                      fVar7 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                      if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                        fVar7 = fVar7 + -1.0;
                      }
                    }
                    auStack_128._0_4_ = fVar7 * fVar33;
                    p_Stack_180 = (_union_14 *)0x445b1aa;
                    fVar7 = fmodf((__this->fields)._currentScaleAmount.fields.z,fVar33,pMVar27);
                    (__this->fields)._currentScaleAmount.fields.z = fVar7;
                  }
                  if (g_data_057a6932 == '\0') {
                    p_Stack_180 = (_union_14 *)0x445b1d6;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6932 = '\x01';
                  }
                  uVar42 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                  fStack_114 = fStack_114 - (float)((ulong)uVar42 >> 0x20);
                  fVar34 = fVar34 - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
                  fStack_118 = fStack_118 - (float)uVar42;
                  fStack_134 = (float)auStack_128._4_4_;
                  uStack_130 = uStack_120;
                  uStack_12c = uStack_11c;
                  if ((fStack_118 * fStack_118 + fStack_114 * fStack_114 + fVar34 * fVar34 < 9.9999994e-11) &&
                     (fVar7 = (__this->fields)._currentScaleAmount.fields.x, fVar33 < ABS(fVar7))) {
                    fVar7 = fVar7 / fVar33;
                    p_Stack_180 = (_union_14 *)0x445b275;
                    dVar15 = modf((double)fVar7,(double *)auStack_e8,(MethodInfo *)method_01);
                    if (0.0 <= fVar7) {
                      if ((dVar15 != 0.5) || (NAN(dVar15))) {
                        p_Stack_180 = (_union_14 *)0x445b30b;
                        uStack_148._0_4_ = floorf(fVar7 + 0.5);
                      }
                      else {
                        uStack_148._0_4_ = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                        if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                          uStack_148._0_4_ = (float)uStack_148 + 1.0;
                        }
                      }
                    }
                    else if ((dVar15 != -0.5) || (NAN(dVar15))) {
                      p_Stack_180 = (_union_14 *)0x445b2f9;
                      uStack_148._0_4_ = ceilf(fVar7 + -0.5);
                    }
                    else {
                      uStack_148._0_4_ = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                      if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                        uStack_148._0_4_ = (float)uStack_148 + -1.0;
                      }
                    }
                    uStack_148._0_4_ = (float)uStack_148 * fVar33;
                    fVar7 = (__this->fields)._currentScaleAmount.fields.x / fVar33;
                    p_Stack_180 = (_union_14 *)0x445b33e;
                    dVar15 = modf((double)fVar7,(double *)auStack_e8,(MethodInfo *)method_01);
                    if (0.0 <= fVar7) {
                      if ((dVar15 != 0.5) || (NAN(dVar15))) {
                        p_Stack_180 = (_union_14 *)0x445b3c9;
                        uStack_148._4_4_ = floorf(fVar7 + 0.5);
                      }
                      else {
                        uStack_148._4_4_ = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                        if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                          uStack_148._4_4_ = uStack_148._4_4_ + 1.0;
                        }
                      }
                    }
                    else if ((dVar15 != -0.5) || (NAN(dVar15))) {
                      p_Stack_180 = (_union_14 *)0x445b3b7;
                      uStack_148._4_4_ = ceilf(fVar7 + -0.5);
                    }
                    else {
                      uStack_148._4_4_ = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                      if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                        uStack_148._4_4_ = uStack_148._4_4_ + -1.0;
                      }
                    }
                    uStack_148._4_4_ = uStack_148._4_4_ * fVar33;
                    fVar7 = (__this->fields)._currentScaleAmount.fields.x / fVar33;
                    pMVar27 = (MethodInfo *)auStack_e8;
                    p_Stack_180 = (_union_14 *)0x445b405;
                    dVar15 = modf((double)fVar7,(double *)pMVar27,(MethodInfo *)method_01);
                    fStack_134 = (float)auStack_e8._4_4_;
                    if (0.0 <= fVar7) {
                      if ((dVar15 != 0.5) || (NAN(dVar15))) {
                        p_Stack_180 = (_union_14 *)0x445b490;
                        auStack_128._0_4_ = floorf(fVar7 + 0.5);
                        fStack_134 = extraout_XMM0_Db_02;
                        uStack_130 = extraout_XMM0_Dc_02;
                        uStack_12c = extraout_XMM0_Dd_02;
                      }
                      else {
                        uStack_130 = 0;
                        uStack_12c = 0;
                        auStack_128._0_4_ = (undefined4)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                        if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                          auStack_128._0_4_ = (float)auStack_128._0_4_ + 1.0;
                        }
                      }
                    }
                    else if ((dVar15 != -0.5) || (NAN(dVar15))) {
                      p_Stack_180 = (_union_14 *)0x445b47e;
                      auStack_128._0_4_ = ceilf(fVar7 + -0.5);
                      fStack_134 = extraout_XMM0_Db_01;
                      uStack_130 = extraout_XMM0_Dc_01;
                      uStack_12c = extraout_XMM0_Dd_01;
                    }
                    else {
                      uStack_130 = 0;
                      uStack_12c = 0;
                      auStack_128._0_4_ = (undefined4)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                      if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
                        auStack_128._0_4_ = (float)auStack_128._0_4_ + -1.0;
                      }
                    }
                    auStack_128._0_4_ = (float)auStack_128._0_4_ * fVar33;
                    p_Stack_180 = (_union_14 *)0x445b4c0;
                    fVar33 = fmodf((__this->fields)._currentScaleAmount.fields.x,fVar33,pMVar27);
                    (__this->fields)._currentScaleAmount.fields.x = fVar33;
                  }
                }
                p_Stack_180 = (_union_14 *)0x445b4de;
                UVar39.fields.y = uStack_148._4_4_;
                UVar39.fields.x = (float)uStack_148;
                UVar39.fields.z = (float)auStack_128._0_4_;
                MapEditor_ScaleGizmo__ScaleSelectedObjects(__this,UVar39,(MethodInfo *)method_01);
                p_Stack_180 = (_union_14 *)0x445b4e6;
                p_Var29 = (_union_14 *)__this;
                MapEditor_ScaleGizmo__ResetCenter(__this,(MethodInfo *)method_01);
                (__this->fields)._previousMousePoint.fields.x = fVar6;
                (__this->fields)._previousMousePoint.fields.y = fVar32;
                (__this->fields)._previousMousePoint.fields.z = fVar2;
                pGVar14 = (__this->fields)._gameManager;
                in_XMM1_Db = fStack_134;
                in_XMM1_Dc = uStack_130;
                in_XMM1_Dd = uStack_12c;
                goto joined_r0x0445a522;
              }
            }
          }
        }
      }
    }
    else {
      pUVar11 = (__this->fields)._menu;
      if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
        if ((char)(pUVar11->fields).IsMouseUI != '\0') goto label_0445adaa;
        if (unaff_RBX != (_union_14 *)0x0) {
          method_01 = (_union_14 *)0x0;
          p_Stack_180 = (_union_14 *)0x445a027;
          p_Var29 = unaff_RBX;
          bVar18 = Settings_KeybindSetting__GetKeyDown
                             ((Settings_KeybindSetting_o *)unaff_RBX,0,(MethodInfo *)0x0);
          if ((char)bVar18 == '\0') goto label_0445adaa;
          if (unaff_R15 != (_union_14 *)0x0) {
            pIVar12 = unaff_R15[4].genericMethod;
            p_Var29 = (_union_14 *)0x0;
            p_Stack_180 = (_union_14 *)0x445a043;
            UVar39 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
            auStack_128._0_4_ = UVar39.fields.z;
            unaff_RBX = (_union_14 *)0x0;
            if (pIVar12 != (Il2CppClass *)0x0) {
              p_Stack_180 = (_union_14 *)0x445a066;
              UnityEngine_Camera__ScreenPointToRay_4db37e0
                        (&UStack_48,(UnityEngine_Camera_o *)pIVar12,UVar39,(MethodInfo *)0x0);
              fStack_d8 = UStack_48.fields.m_Direction.fields.y;
              fStack_d4 = UStack_48.fields.m_Direction.fields.z;
              auStack_e8._0_4_ = UStack_48.fields.m_Origin.fields.x;
              auStack_e8._4_4_ = UStack_48.fields.m_Origin.fields.y;
              fStack_e0 = UStack_48.fields.m_Origin.fields.z;
              fStack_dc = UStack_48.fields.m_Direction.fields.x;
              method_01 = (_union_14 *)0x1;
              p_Stack_180 = (_union_14 *)0x445a09a;
              unaff_RBX = (_union_14 *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
              unaff_RBP = (_union_14 *)&TypeInfo_PhysicsLayer;
              if (*(float *)((long)TypeInfo_PhysicsLayer + 0xe4) == 0.0) {
                p_Stack_180 = (_union_14 *)0x445a0b6;
                il2cpp_runtime_helper_02337ed0();
              }
              p_Var29 = TypeInfo_PhysicsLayer;
              if (unaff_RBX != (_union_14 *)0x0) {
                if (*(int *)(unaff_RBX + 3) == 0) goto label_0445b52c;
                *(int32_t *)(unaff_RBX + 4) = *(int32_t *)((long)TypeInfo_PhysicsLayer[0x17].genericMethod + 0x44);
                p_Stack_180 = (_union_14 *)0x445a0e4;
                mask = Utility_PhysicsLayer__GetMask((System_Int32_array *)unaff_RBX,(MethodInfo *)0x0);
                p_Stack_180 = (_union_14 *)0x445a0ed;
                uVar19 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
                unaff_RBX = (_union_14 *)(ulong)uVar19;
                if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                  p_Stack_180 = (_union_14 *)0x445a107;
                  il2cpp_runtime_helper_02337ed0();
                }
                uVar44 = CONCAT44(fStack_d4,fStack_d8);
                uVar42 = CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
                uVar43 = CONCAT44(fStack_dc,fStack_e0);
                p_Stack_180 = (_union_14 *)0x445a131;
                ray.fields.m_Origin.fields.z = fStack_e0;
                ray.fields.m_Direction.fields.x = fStack_dc;
                ray.fields.m_Origin.fields.x = (float)auStack_e8._0_4_;
                ray.fields.m_Origin.fields.y = (float)auStack_e8._4_4_;
                ray.fields.m_Direction.fields.y = fStack_d8;
                ray.fields.m_Direction.fields.z = fStack_d4;
                p_Var20 = (_union_14 *)
                          UnityEngine_Physics__RaycastAll_4e79890(ray,100000.0,uVar19,(MethodInfo *)0x0);
                p_Stack_180 = (_union_14 *)0x445a13f;
                method_01 = p_Var20;
                p_Var29 = (_union_14 *)__this;
                bVar18 = MapEditor_ScaleGizmo__ContainsCenter
                                   (__this,(UnityEngine_RaycastHit_array *)p_Var20,method_00);
                if ((char)bVar18 != '\0') {
                  (__this->fields)._activeLine = (__this->fields)._center;
                  p_Stack_180 = (_union_14 *)0x445a15a;
                  il2cpp_runtime_helper_022b4080();
                  p_Stack_180 = (_union_14 *)0x445a174;
                  MapEditor_ScaleGizmo__SetLineColor
                            (__this_12,(__this->fields)._lineX,
                             (UnityEngine_Color_o)(__this->fields).LineXColor.fields,0xc27,pMVar27);
                  p_Stack_180 = (_union_14 *)0x445a191;
                  MapEditor_ScaleGizmo__SetLineColor
                            (__this_12,(__this->fields)._lineY,
                             (UnityEngine_Color_o)(__this->fields).LineYColor.fields,0xc27,pMVar27);
                  p_Stack_180 = (_union_14 *)0x445a1b1;
                  MapEditor_ScaleGizmo__SetLineColor
                            (__this_12,(__this->fields)._lineZ,
                             (UnityEngine_Color_o)(__this->fields).LineZColor.fields,0xc27,pMVar27);
                  p_Stack_180 = (_union_14 *)0x445a1d1;
                  MapEditor_ScaleGizmo__SetLineColor
                            (__this_12,(__this->fields)._center,
                             (UnityEngine_Color_o)(__this->fields).CenterColor.fields,4000,pMVar27);
                  p_Stack_180 = (_union_14 *)0x445a1ee;
                  MapEditor_ScaleGizmo__SetLineColor
                            (__this_12,(__this->fields)._activeLine,
                             (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0xc27,pMVar27);
                  p_Stack_180 = (_union_14 *)0x445a208;
                  MapEditor_ScaleGizmo__SetLineColor
                            (__this_12,(__this->fields)._lineX,
                             (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0xc27,pMVar27);
                  p_Stack_180 = (_union_14 *)0x445a222;
                  MapEditor_ScaleGizmo__SetLineColor
                            (__this_12,(__this->fields)._lineY,
                             (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0xc27,pMVar27);
                  p_Stack_180 = (_union_14 *)0x445a23c;
                  MapEditor_ScaleGizmo__SetLineColor
                            (__this_12,(__this->fields)._lineZ,
                             (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0xc27,pMVar27);
                  p_Stack_180 = (_union_14 *)0x445a24b;
                  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_RaycastHit_bool);
                  p_Stack_180 = (_union_14 *)0x445a265;
                  System_Func_RaycastHit__bool____ctor();
                  p_Stack_180 = (_union_14 *)0x445a282;
                  System_Linq_Enumerable__First_RaycastHit_
                            ((UnityEngine_RaycastHit_o *)auStack_e8,
                             (System_Collections_Generic_IEnumerable_TSource__o *)p_Var20,predicate,
                             MethodInfo_RaycastHit_First_RaycastHit);
                  _Stack_78._4_4_ = auStack_e8._4_4_;
                  _Stack_78._0_4_ = auStack_e8._0_4_;
                  uStack_70 = CONCAT44(fStack_dc,fStack_e0);
                  uStack_68 = CONCAT44(fStack_d4,fStack_d8);
                  fStack_58 = fStack_c8;
                  uStack_54 = uStack_c4;
                  uStack_60 = uStack_d0;
                  fStack_5c = fStack_cc;
                  p_Var30 = &_Stack_78;
label_0445ad92:
                  p_Stack_180 = (_union_14 *)0x445ad99;
                  __this_09.fields.m_Point.fields.z = (float)(int)uVar43;
                  __this_09.fields.m_Normal.fields.x = (float)(int)((ulong)uVar43 >> 0x20);
                  __this_09.fields.m_Point.fields.x = (float)(int)uVar42;
                  __this_09.fields.m_Point.fields.y = (float)(int)((ulong)uVar42 >> 0x20);
                  __this_09.fields.m_Normal.fields.y = (float)(int)uVar44;
                  __this_09.fields.m_Normal.fields.z = (float)(int)((ulong)uVar44 >> 0x20);
                  __this_09.fields.m_FaceID = (int)in_stack_fffffffffffffea0;
                  __this_09.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
                  __this_09.fields.m_UV.fields.x = (float)in_stack_fffffffffffffea8;
                  __this_09.fields.m_UV.fields.y = (float)in_stack_fffffffffffffeac;
                  __this_09.fields.m_Collider = in_stack_fffffffffffffeb0;
                  UVar39 = UnityEngine_RaycastHit__get_point(__this_09,(MethodInfo *)p_Var30);
                  (__this->fields)._previousMousePoint.fields.x = (float)(int)UVar39.fields._0_8_;
                  (__this->fields)._previousMousePoint.fields.y =
                       (float)(int)((ulong)UVar39.fields._0_8_ >> 0x20);
                  (__this->fields)._previousMousePoint.fields.z = UVar39.fields.z;
label_0445adaa:
                  if (g_data_057a65d5 == '\0') {
                    p_Stack_180 = (_union_14 *)0x445adbf;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a65d5 = '\x01';
                  }
                  uVar42 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  fVar2 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                  (__this->fields)._currentScaleAmount.fields.x = (float)(int)uVar42;
                  (__this->fields)._currentScaleAmount.fields.y = (float)(int)((ulong)uVar42 >> 0x20);
                  (__this->fields)._currentScaleAmount.fields.z = fVar2;
                  return;
                }
                unaff_R15 = p_Var20;
                if (p_Var20 != (_union_14 *)0x0) {
                  unaff_R15 = p_Var20 + 4;
                  unaff_R14 = (UnityEngine_Transform_o **)0x0;
                  p_Var30 = &_Stack_a8;
                  do {
                    if ((long)(int)*(uint *)(p_Var20 + 3) <= (long)unaff_R14) goto label_0445adaa;
                    if ((undefined8 *)(ulong)*(uint *)(p_Var20 + 3) <= unaff_R14) goto label_0445b52c;
                    _Stack_a8 = *unaff_R15;
                    _Stack_a0 = unaff_R15[1];
                    auStack_128._0_4_ = *(undefined4 *)(unaff_R15 + 2);
                    in_XMM1_Db = *(float *)((long)unaff_R15 + 0x14);
                    _Stack_98 = unaff_R15[2];
                    in_XMM1_Dc = *(undefined4 *)(unaff_R15 + 3);
                    in_XMM1_Dd = *(undefined4 *)((long)unaff_R15 + 0x1c);
                    uStack_80 = *(uint *)(unaff_R15 + 5);
                    pMVar27 = (MethodInfo *)(ulong)uStack_80;
                    uStack_88 = SUB84(unaff_R15[4],0);
                    uStack_84 = SUB84(unaff_R15[4],4);
                    method_01 = (_union_14 *)0x0;
                    p_Stack_180 = (_union_14 *)0x445abe4;
                    __this_05.fields.m_Point.fields.z = (float)(int)uVar43;
                    __this_05.fields.m_Normal.fields.x = (float)(int)((ulong)uVar43 >> 0x20);
                    __this_05.fields.m_Point.fields.x = (float)(int)uVar42;
                    __this_05.fields.m_Point.fields.y = (float)(int)((ulong)uVar42 >> 0x20);
                    __this_05.fields.m_Normal.fields.y = (float)(int)uVar44;
                    __this_05.fields.m_Normal.fields.z = (float)(int)((ulong)uVar44 >> 0x20);
                    __this_05.fields.m_FaceID = (int)in_stack_fffffffffffffea0;
                    __this_05.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
                    __this_05.fields.m_UV.fields.x = (float)in_stack_fffffffffffffea8;
                    __this_05.fields.m_UV.fields.y = (float)in_stack_fffffffffffffeac;
                    __this_05.fields.m_Collider = in_stack_fffffffffffffeb0;
                    p_Var29 = p_Var30;
                    uStack_90 = in_XMM1_Dc;
                    uStack_8c = in_XMM1_Dd;
                    pUVar23 = UnityEngine_RaycastHit__get_collider(__this_05,(MethodInfo *)p_Var30);
                    if (pUVar23 == (UnityEngine_Collider_o *)0x0) goto label_0445b527;
                    p_Stack_180 = (_union_14 *)0x445abf7;
                    unaff_RBX = (_union_14 *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                    unaff_RBP = (_union_14 *)(__this->fields)._lineX;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      p_Stack_180 = (_union_14 *)0x445ac16;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    p_Stack_180 = (_union_14 *)0x445ac23;
                    bVar18 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)unaff_RBP,
                                        (MethodInfo *)0x0);
                    if ((char)bVar18 != '\0') break;
                    method_01 = (_union_14 *)0x0;
                    p_Stack_180 = (_union_14 *)0x445ac35;
                    __this_06.fields.m_Point.fields.z = (float)(int)uVar43;
                    __this_06.fields.m_Normal.fields.x = (float)(int)((ulong)uVar43 >> 0x20);
                    __this_06.fields.m_Point.fields.x = (float)(int)uVar42;
                    __this_06.fields.m_Point.fields.y = (float)(int)((ulong)uVar42 >> 0x20);
                    __this_06.fields.m_Normal.fields.y = (float)(int)uVar44;
                    __this_06.fields.m_Normal.fields.z = (float)(int)((ulong)uVar44 >> 0x20);
                    __this_06.fields.m_FaceID = (int)in_stack_fffffffffffffea0;
                    __this_06.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
                    __this_06.fields.m_UV.fields.x = (float)in_stack_fffffffffffffea8;
                    __this_06.fields.m_UV.fields.y = (float)in_stack_fffffffffffffeac;
                    __this_06.fields.m_Collider = in_stack_fffffffffffffeb0;
                    p_Var29 = p_Var30;
                    pUVar23 = UnityEngine_RaycastHit__get_collider(__this_06,(MethodInfo *)p_Var30);
                    if (pUVar23 == (UnityEngine_Collider_o *)0x0) goto label_0445b527;
                    p_Stack_180 = (_union_14 *)0x445ac48;
                    unaff_RBX = (_union_14 *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                    unaff_RBP = (_union_14 *)(__this->fields)._lineY;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      p_Stack_180 = (_union_14 *)0x445ac67;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    p_Stack_180 = (_union_14 *)0x445ac74;
                    bVar18 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)unaff_RBP,
                                        (MethodInfo *)0x0);
                    if ((char)bVar18 != '\0') break;
                    method_01 = (_union_14 *)0x0;
                    p_Stack_180 = (_union_14 *)0x445ac82;
                    __this_07.fields.m_Point.fields.z = (float)(int)uVar43;
                    __this_07.fields.m_Normal.fields.x = (float)(int)((ulong)uVar43 >> 0x20);
                    __this_07.fields.m_Point.fields.x = (float)(int)uVar42;
                    __this_07.fields.m_Point.fields.y = (float)(int)((ulong)uVar42 >> 0x20);
                    __this_07.fields.m_Normal.fields.y = (float)(int)uVar44;
                    __this_07.fields.m_Normal.fields.z = (float)(int)((ulong)uVar44 >> 0x20);
                    __this_07.fields.m_FaceID = (int)in_stack_fffffffffffffea0;
                    __this_07.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
                    __this_07.fields.m_UV.fields.x = (float)in_stack_fffffffffffffea8;
                    __this_07.fields.m_UV.fields.y = (float)in_stack_fffffffffffffeac;
                    __this_07.fields.m_Collider = in_stack_fffffffffffffeb0;
                    p_Var29 = p_Var30;
                    pUVar23 = UnityEngine_RaycastHit__get_collider(__this_07,(MethodInfo *)p_Var30);
                    if (pUVar23 == (UnityEngine_Collider_o *)0x0) goto label_0445b527;
                    p_Stack_180 = (_union_14 *)0x445ac95;
                    unaff_RBX = (_union_14 *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                    unaff_RBP = (_union_14 *)(__this->fields)._lineZ;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      p_Stack_180 = (_union_14 *)0x445acb8;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    unaff_R15 = (_union_14 *)((long)unaff_R15 + 0x2c);
                    unaff_R14 = (UnityEngine_Transform_o **)((long)unaff_R14 + 1);
                    p_Stack_180 = (_union_14 *)0x445ab85;
                    method_01 = unaff_RBP;
                    p_Var29 = unaff_RBX;
                    bVar18 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)unaff_RBP,
                                        (MethodInfo *)0x0);
                  } while ((char)bVar18 == '\0');
                  p_Var29 = &_Stack_a8;
                  method_01 = (_union_14 *)0x0;
                  p_Stack_180 = (_union_14 *)0x445accc;
                  __this_08.fields.m_Point.fields.z = (float)(int)uVar43;
                  __this_08.fields.m_Normal.fields.x = (float)(int)((ulong)uVar43 >> 0x20);
                  __this_08.fields.m_Point.fields.x = (float)(int)uVar42;
                  __this_08.fields.m_Point.fields.y = (float)(int)((ulong)uVar42 >> 0x20);
                  __this_08.fields.m_Normal.fields.y = (float)(int)uVar44;
                  __this_08.fields.m_Normal.fields.z = (float)(int)((ulong)uVar44 >> 0x20);
                  __this_08.fields.m_FaceID = (int)in_stack_fffffffffffffea0;
                  __this_08.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
                  __this_08.fields.m_UV.fields.x = (float)in_stack_fffffffffffffea8;
                  __this_08.fields.m_UV.fields.y = (float)in_stack_fffffffffffffeac;
                  __this_08.fields.m_Collider = in_stack_fffffffffffffeb0;
                  pUVar23 = UnityEngine_RaycastHit__get_collider(__this_08,(MethodInfo *)p_Var29);
                  if (pUVar23 != (UnityEngine_Collider_o *)0x0) {
                    p_Stack_180 = (_union_14 *)0x445acdf;
                    pUVar24 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                    (__this->fields)._activeLine = pUVar24;
                    p_Stack_180 = (_union_14 *)0x445acf6;
                    il2cpp_runtime_helper_022b4080(__this_12,pUVar24);
                    p_Stack_180 = (_union_14 *)0x445ad10;
                    MapEditor_ScaleGizmo__SetLineColor
                              (__this_12,(__this->fields)._lineX,
                               (UnityEngine_Color_o)(__this->fields).LineXColor.fields,0xc27,pMVar27);
                    p_Stack_180 = (_union_14 *)0x445ad2d;
                    MapEditor_ScaleGizmo__SetLineColor
                              (__this_12,(__this->fields)._lineY,
                               (UnityEngine_Color_o)(__this->fields).LineYColor.fields,0xc27,pMVar27);
                    p_Stack_180 = (_union_14 *)0x445ad4d;
                    MapEditor_ScaleGizmo__SetLineColor
                              (__this_12,(__this->fields)._lineZ,
                               (UnityEngine_Color_o)(__this->fields).LineZColor.fields,0xc27,pMVar27);
                    p_Stack_180 = (_union_14 *)0x445ad6d;
                    MapEditor_ScaleGizmo__SetLineColor
                              (__this_12,(__this->fields)._center,
                               (UnityEngine_Color_o)(__this->fields).CenterColor.fields,4000,pMVar27);
                    p_Stack_180 = (_union_14 *)0x445ad8a;
                    MapEditor_ScaleGizmo__SetLineColor
                              (__this_12,(__this->fields)._activeLine,
                               (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0xc27,pMVar27);
                    p_Var30 = &_Stack_a8;
                    goto label_0445ad92;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_0445b527:
  p_Stack_180 = (_union_14 *)0x445b52c;
  il2cpp_runtime_helper_022b2c90();
label_0445b52c:
  p_Stack_180 = (_union_14 *)0x445b531;
  uStack_1c0 = il2cpp_runtime_helper_022b2ca0();
  fStack_1b0 = (float)auStack_128._0_4_;
  fStack_1ac = in_XMM1_Db;
  uStack_1a8 = in_XMM1_Dc;
  uStack_1a4 = in_XMM1_Dd;
  p_Stack_198 = unaff_RBX;
  ppUStack_190 = unaff_R14;
  p_Stack_188 = unaff_R15;
  p_Stack_180 = unaff_RBP;
  if (g_data_057ae748 == '\0') {
    p_Var29 = (_union_14 *)&MethodInfo_Renderer_GetComponentsInChildren_Renderer;
    p_Stack_1c8 = (_union_14 *)0x445b56e;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae748 = '\x01';
  }
  if (method_01 != (_union_14 *)0x0) {
    p_Stack_1c8 = (_union_14 *)0x445b590;
    p_Var20 = method_01;
    p_Var25 = (_union_14 *)
              UnityEngine_Component__GetComponentsInChildren_object__24e8500
                        ((UnityEngine_Component_o *)method_01,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    p_Var29 = p_Var20;
    if (p_Var25 != (_union_14 *)0x0) {
      uVar19 = *(uint *)(p_Var25 + 3);
      if (0 < (int)uVar19) {
        method_01 = (_union_14 *)0x0;
        do {
          uVar28 = (uint)method_01;
          p_Var29 = p_Var20;
          unaff_R15 = p_Var25;
          if (uVar19 <= uVar28) goto label_0445b61a;
          __this_11 = p_Var25[(long)(int)uVar28 + 4].genericMethod;
          if (__this_11 == (_union_14 *)0x0) goto label_0445b615;
          p_Stack_1c8 = (_union_14 *)0x445b5cb;
          p_Var29 = __this_11;
          __this_10 = UnityEngine_Renderer__get_material
                                ((UnityEngine_Renderer_o *)__this_11,(MethodInfo *)0x0);
          if (__this_10 == (UnityEngine_Material_o *)0x0) goto label_0445b615;
          value.fields.a = fStack_1ac;
          value.fields.b = fStack_1b0;
          p_Stack_1c8 = (_union_14 *)0x445b5e3;
          value.fields.r = (float)(undefined4)uStack_1c0;
          value.fields.g = (float)uStack_1c0._4_4_;
          auStack_128._0_4_ = fStack_1b0;
          UnityEngine_Material__set_color(__this_10,value,(MethodInfo *)0x0);
          p_Stack_1c8 = (_union_14 *)0x445b5ed;
          p_Var20 = (_union_14 *)
                    UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)__this_11,(MethodInfo *)0x0);
          p_Var29 = __this_11;
          if (p_Var20 == (_union_14 *)0x0) goto label_0445b615;
          p_Stack_1c8 = (_union_14 *)0x445b5ff;
          UnityEngine_Material__set_renderQueue
                    ((UnityEngine_Material_o *)p_Var20,(int32_t)extraout_RDX,(MethodInfo *)0x0);
          method_01 = (_union_14 *)(ulong)(uVar28 + 1);
          uVar19 = *(uint *)(p_Var25 + 3);
        } while ((int)(uVar28 + 1) < (int)uVar19);
      }
      return;
    }
  }
label_0445b615:
  p_Stack_1c8 = (_union_14 *)0x445b61a;
  il2cpp_runtime_helper_022b2c90();
label_0445b61a:
  p_Stack_1c8 = (_union_14 *)0x445b61f;
  uVar42 = il2cpp_runtime_helper_022b2ca0();
  p_Stack_1e0 = method_01;
  p_Stack_1d8 = p_Var30;
  uStack_1d0 = extraout_RDX & 0xffffffff;
  p_Stack_1c8 = unaff_R15;
  if (g_data_057ae746 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae746 = '\x01';
  }
  _Var41.genericMethod = (Il2CppObject *)0x0;
  if ((p_Var29[4].genericMethod != (Il2CppClass *)0x0) &&
     (__this_00 = *(System_Collections_Generic_HashSet_object__o **)
                   &((p_Var29[4].genericMethod)->_1).this_arg.bits,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)a_Stack_1f8,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    _Var41 = a_Stack_1f8[0];
    while( true ) {
      __this_01.fields._index = (int32_t)in_stack_fffffffffffffdc0;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffdb8;
      __this_01.fields._version = auStack_128._0_4_;
      __this_01.fields._current = _Var41.genericMethod;
      bVar18 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                         (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffdc8);
      if ((char)bVar18 == '\0') {
        __this_02.fields._index = (int32_t)in_stack_fffffffffffffdc0;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffdb8;
        __this_02.fields._version = auStack_128._0_4_;
        __this_02.fields._current = _Var41.genericMethod;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffdc8);
        return;
      }
      if (lStack_1e8 == 0) break;
      uVar43 = *(undefined8 *)(lStack_1e8 + 0x28);
      fVar2 = *(float *)(lStack_1e8 + 0x30);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar40.fields.z = fVar2;
      UVar40.fields._0_8_ = uVar43;
      b.fields.z = (float)auStack_128._0_4_;
      b.fields.x = (float)(int)uVar42;
      b.fields.y = (float)(int)((ulong)uVar42 >> 0x20);
      UVar39 = Utility_Util__MultiplyVectors(UVar40,b,(MethodInfo *)0x0);
      in_stack_fffffffffffffdc0 = UVar39.fields.z;
      if (*(UnityEngine_GameObject_o **)(lStack_1e8 + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_0445b7ce;
      pUVar24 = UnityEngine_GameObject__get_transform
                          (*(UnityEngine_GameObject_o **)(lStack_1e8 + 0x18),(MethodInfo *)0x0);
      if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_0445b7d3;
      UVar40 = UnityEngine_Transform__get_localScale(pUVar24,(MethodInfo *)0x0);
      fStack_218 = UVar39.fields.x;
      fStack_214 = UVar39.fields.y;
      value_00.fields.y = fStack_214 + UVar40.fields.y;
      value_00.fields.x = fStack_218 + UVar40.fields.x;
      value_00.fields.z = in_stack_fffffffffffffdc0 + UVar40.fields.z;
      UnityEngine_Transform__set_localScale(pUVar24,value_00,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_0445b7ce:
    il2cpp_runtime_helper_022b2c90();
label_0445b7d3:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar38 = il2cpp_runtime_helper_022b2c90();
  if (auVar38._8_4_ == 1) {
    plVar26 = (long *)__cxa_begin_catch(auVar38._0_8_);
    lVar10 = *plVar26;
    __cxa_end_catch();
    __this_03.fields._index = (int32_t)in_stack_fffffffffffffdc0;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffdb8;
    __this_03.fields._version = auStack_128._0_4_;
    __this_03.fields._current = _Var41.genericMethod;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffdc8);
    if (lVar10 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar10);
  }
  __this_04.fields._index = (int32_t)in_stack_fffffffffffffdc0;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffdb8;
  __this_04.fields._version = auStack_128._0_4_;
  __this_04.fields._current = _Var41.genericMethod;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffdc8);
  _Unwind_Resume(auVar38._0_8_);
}


// MapEditor.ScaleGizmo$$ScaleSelectedObjects
// il2cpp: void MapEditor_ScaleGizmo__ScaleSelectedObjects (MapEditor_ScaleGizmo_o* __this, UnityEngine_Vector3_o frameDelta, const MethodInfo* method);
// 0x445b620

void MapEditor_ScaleGizmo__ScaleSelectedObjects
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_Vector3_o frameDelta,MethodInfo *method)

{
  undefined8 uVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar4;
  UnityEngine_Transform_o *__this_05;
  long *plVar5;
  float fVar6;
  undefined1 auVar7 [12];
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o value;
  undefined8 in_stack_ffffffffffffff78;
  float in_stack_ffffffffffffff80;
  float fVar10;
  _union_332950 _Var11;
  float local_58;
  float fStack_54;
  _union_332950 local_38 [2];
  long local_28;
  
  fVar6 = frameDelta.fields.z;
  if (g_data_057ae746 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae746 = '\x01';
  }
  _Var11.genericMethod = (Il2CppObject *)0x0;
  pGVar2 = (__this->fields)._gameManager;
  if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_38,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    _Var11 = local_38[0];
    while( true ) {
      __this_01.fields._index = (int32_t)in_stack_ffffffffffffff80;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78;
      __this_01.fields._version = (int32_t)fVar6;
      __this_01.fields._current = _Var11.genericMethod;
      bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff88);
      if ((char)bVar4 == '\0') {
        __this_02.fields._index = (int32_t)in_stack_ffffffffffffff80;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78;
        __this_02.fields._version = (int32_t)fVar6;
        __this_02.fields._current = _Var11.genericMethod;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff88);
        return;
      }
      if (local_28 == 0) break;
      uVar1 = *(undefined8 *)(local_28 + 0x28);
      fVar10 = *(float *)(local_28 + 0x30);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar8.fields.z = fVar10;
      UVar8.fields._0_8_ = uVar1;
      UVar9.fields.z = fVar6;
      UVar9.fields.x = (float)(int)frameDelta.fields._0_8_;
      UVar9.fields.y = (float)(int)((ulong)frameDelta.fields._0_8_ >> 0x20);
      UVar8 = Utility_Util__MultiplyVectors(UVar8,UVar9,(MethodInfo *)0x0);
      in_stack_ffffffffffffff80 = UVar8.fields.z;
      if (*(UnityEngine_GameObject_o **)(local_28 + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_0445b7ce;
      __this_05 = UnityEngine_GameObject__get_transform
                            (*(UnityEngine_GameObject_o **)(local_28 + 0x18),(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_Transform_o *)0x0) goto label_0445b7d3;
      UVar9 = UnityEngine_Transform__get_localScale(__this_05,(MethodInfo *)0x0);
      local_58 = UVar8.fields.x;
      fStack_54 = UVar8.fields.y;
      value.fields.y = fStack_54 + UVar9.fields.y;
      value.fields.x = local_58 + UVar9.fields.x;
      value.fields.z = in_stack_ffffffffffffff80 + UVar9.fields.z;
      UnityEngine_Transform__set_localScale(__this_05,value,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_0445b7ce:
    il2cpp_runtime_helper_022b2c90();
label_0445b7d3:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._index = (int32_t)in_stack_ffffffffffffff80;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78;
    __this_03.fields._version = (int32_t)fVar6;
    __this_03.fields._current = _Var11.genericMethod;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff88);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._index = (int32_t)in_stack_ffffffffffffff80;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78;
  __this_04.fields._version = (int32_t)fVar6;
  __this_04.fields._current = _Var11.genericMethod;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff88);
  _Unwind_Resume(auVar7._0_8_);
}


// MapEditor.ScaleGizmo$$ResetCenter
// il2cpp: void MapEditor_ScaleGizmo__ResetCenter (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x4459a70

void MapEditor_ScaleGizmo__ResetCenter(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

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
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *__this_05;
  long *plVar6;
  float fVar7;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar8 [16];
  UnityEngine_Quaternion_o value;
  undefined1 auVar9 [12];
  UnityEngine_Vector3_o UVar10;
  undefined1 in_stack_ffffffffffffff88 [12];
  float in_stack_ffffffffffffff94;
  System_Collections_Generic_HashSet_T__o *pSVar11;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  System_Collections_Generic_HashSet_Enumerator_T__o local_38;
  
  if (g_data_057ae747 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ae747 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator(&local_38,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    in_stack_ffffffffffffff94 = 0.0;
    _local_48 = ZEXT816(0);
    pSVar11 = local_38.fields._set;
    while( true ) {
      __this_01.fields._version = (int32_t)in_stack_ffffffffffffff94;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_01.fields._current = (Il2CppObject *)pSVar11;
      bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff98);
      if ((char)bVar4 == '\0') {
        __this_02.fields._version = (int32_t)in_stack_ffffffffffffff94;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
        __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
        __this_02.fields._current = (Il2CppObject *)pSVar11;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
        goto label_04459bfd;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      if (*(void **)((long)local_38.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_04459c56;
      pUVar5 = UnityEngine_GameObject__get_transform
                         (*(void **)((long)local_38.fields._current + 0x18),(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04459c5b;
      UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      local_48._0_4_ = (float)local_48._0_4_ + UVar10.fields.x;
      local_48._4_4_ = (float)local_48._4_4_ + UVar10.fields.y;
      fStack_40 = fStack_40 + extraout_XMM0_Dc;
      fStack_3c = fStack_3c + extraout_XMM0_Dd;
      in_stack_ffffffffffffff94 = in_stack_ffffffffffffff94 + UVar10.fields.z;
      if (*(void **)((long)local_38.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_04459c60;
      pUVar5 = (__this->fields)._transform;
      __this_05 = UnityEngine_GameObject__get_transform
                            (*(void **)((long)local_38.fields._current + 0x18),(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_Transform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        break;
      }
      value = UnityEngine_Transform__get_rotation(__this_05,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04459c65;
      UnityEngine_Transform__set_rotation(pUVar5,value,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_04459c56:
    il2cpp_runtime_helper_022b2c90();
label_04459c5b:
    il2cpp_runtime_helper_022b2c90();
label_04459c60:
    il2cpp_runtime_helper_022b2c90();
label_04459c65:
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) {
label_04459d26:
      __this_04.fields._version = (int32_t)in_stack_ffffffffffffff94;
      __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_04.fields._current = (Il2CppObject *)pSVar11;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar9._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff94;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar11;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_04459d26;
    }
label_04459bfd:
    pGVar1 = (__this->fields)._gameManager;
    if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
        (pSVar2 = (pGVar1->fields).SelectedObjects,
        pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
       (pUVar5 = (__this->fields)._transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      fVar7 = (float)(pSVar2->fields)._count;
      UVar10.fields.z = in_stack_ffffffffffffff94 / fVar7;
      auVar8._4_4_ = fVar7;
      auVar8._0_4_ = fVar7;
      auVar8._8_8_ = 0;
      auVar8 = divps(_local_48,auVar8);
      UVar10.fields.x = (float)(int)auVar8._0_8_;
      UVar10.fields.y = (float)(int)((ulong)auVar8._0_8_ >> 0x20);
      UnityEngine_Transform__set_position(pUVar5,UVar10,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// MapEditor.ScaleGizmo$$ResetColors
// il2cpp: void MapEditor_ScaleGizmo__ResetColors (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x44598a0

void MapEditor_ScaleGizmo__ResetColors(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  MapEditor_ScaleGizmo_o *__this_00;
  
  __this_00 = __this;
  MapEditor_ScaleGizmo__SetLineColor
            (__this,(__this->fields)._lineX,(UnityEngine_Color_o)(__this->fields).LineXColor.fields,0xc27,
             in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (__this_00,(__this->fields)._lineY,(UnityEngine_Color_o)(__this->fields).LineYColor.fields,0xc27,
             in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (__this_00,(__this->fields)._lineZ,(UnityEngine_Color_o)(__this->fields).LineZColor.fields,0xc27,
             in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (__this_00,(__this->fields)._center,(UnityEngine_Color_o)(__this->fields).CenterColor.fields,4000,
             in_RCX);
  return;
}


// MapEditor.ScaleGizmo$$SetLineColor
// il2cpp: void MapEditor_ScaleGizmo__SetLineColor (MapEditor_ScaleGizmo_o* __this, UnityEngine_Transform_o* line, UnityEngine_Color_o color, int32_t renderQueue, const MethodInfo* method);
// 0x445b540

void MapEditor_ScaleGizmo__SetLineColor
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_Transform_o *line,UnityEngine_Color_o color,
               int32_t renderQueue,MethodInfo *method)

{
  undefined8 uVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  undefined8 uVar4;
  uint uVar5;
  bool_conflict bVar6;
  System_Object_array *pSVar7;
  UnityEngine_Material_o *__this_05;
  MapEditor_ScaleGizmo_o *__this_06;
  UnityEngine_Transform_o *__this_07;
  long *plVar8;
  uint uVar9;
  MapEditor_ScaleGizmo_o *__this_08;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [12];
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o value;
  undefined8 in_stack_ffffffffffffff30;
  float in_stack_ffffffffffffff38;
  _union_332950 _Var15;
  float fStack_a0;
  float fStack_9c;
  _union_332950 a_Stack_80 [2];
  long lStack_70;
  UnityEngine_Transform_o *pUStack_68;
  
  fVar10 = color.fields.b;
  fVar11 = fVar10;
  if (g_data_057ae748 == '\0') {
    __this = (MapEditor_ScaleGizmo_o *)&MethodInfo_Renderer_GetComponentsInChildren_Renderer;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae748 = '\x01';
  }
  if ((line != (UnityEngine_Transform_o *)0x0) &&
     (__this_06 = (MapEditor_ScaleGizmo_o *)line,
     pSVar7 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                        ((UnityEngine_Component_o *)line,MethodInfo_Renderer_GetComponentsInChildren_Renderer), __this = __this_06,
     pSVar7 != (System_Object_array *)0x0)) {
    uVar5 = (uint)pSVar7->max_length;
    if (0 < (int)uVar5) {
      line = (UnityEngine_Transform_o *)0x0;
      do {
        uVar9 = (uint)line;
        __this = __this_06;
        if (uVar5 <= uVar9) goto label_0445b61a;
        __this_08 = (MapEditor_ScaleGizmo_o *)pSVar7->m_Items[(int)uVar9];
        if ((__this_08 == (MapEditor_ScaleGizmo_o *)0x0) ||
           (__this = __this_08,
           __this_05 = UnityEngine_Renderer__get_material
                                 ((UnityEngine_Renderer_o *)__this_08,(MethodInfo *)0x0),
           __this_05 == (UnityEngine_Material_o *)0x0)) goto label_0445b615;
        fVar11 = fVar10;
        UnityEngine_Material__set_color(__this_05,color,(MethodInfo *)0x0);
        __this_06 = (MapEditor_ScaleGizmo_o *)
                    UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)__this_08,(MethodInfo *)0x0);
        __this = __this_08;
        if (__this_06 == (MapEditor_ScaleGizmo_o *)0x0) goto label_0445b615;
        UnityEngine_Material__set_renderQueue
                  ((UnityEngine_Material_o *)__this_06,renderQueue,(MethodInfo *)0x0);
        line = (UnityEngine_Transform_o *)(ulong)(uVar9 + 1);
        uVar5 = (uint)pSVar7->max_length;
      } while ((int)(uVar9 + 1) < (int)uVar5);
    }
    return;
  }
label_0445b615:
  il2cpp_runtime_helper_022b2c90();
label_0445b61a:
  uVar4 = il2cpp_runtime_helper_022b2ca0();
  pUStack_68 = line;
  if (g_data_057ae746 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae746 = '\x01';
  }
  _Var15.genericMethod = (Il2CppObject *)0x0;
  pGVar2 = (__this->fields)._gameManager;
  if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)a_Stack_80,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    _Var15 = a_Stack_80[0];
    while( true ) {
      __this_01.fields._index = (int32_t)in_stack_ffffffffffffff38;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff30;
      __this_01.fields._version = (int32_t)fVar11;
      __this_01.fields._current = _Var15.genericMethod;
      bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff40);
      if ((char)bVar6 == '\0') {
        __this_02.fields._index = (int32_t)in_stack_ffffffffffffff38;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff30;
        __this_02.fields._version = (int32_t)fVar11;
        __this_02.fields._current = _Var15.genericMethod;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff40);
        return;
      }
      if (lStack_70 == 0) break;
      uVar1 = *(undefined8 *)(lStack_70 + 0x28);
      fVar10 = *(float *)(lStack_70 + 0x30);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar13.fields.z = fVar10;
      UVar13.fields._0_8_ = uVar1;
      UVar14.fields.z = fVar11;
      UVar14.fields.x = (float)(int)uVar4;
      UVar14.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
      UVar13 = Utility_Util__MultiplyVectors(UVar13,UVar14,(MethodInfo *)0x0);
      in_stack_ffffffffffffff38 = UVar13.fields.z;
      if (*(UnityEngine_GameObject_o **)(lStack_70 + 0x18) == (UnityEngine_GameObject_o *)0x0)
      goto label_0445b7ce;
      __this_07 = UnityEngine_GameObject__get_transform
                            (*(UnityEngine_GameObject_o **)(lStack_70 + 0x18),(MethodInfo *)0x0);
      if (__this_07 == (UnityEngine_Transform_o *)0x0) goto label_0445b7d3;
      UVar14 = UnityEngine_Transform__get_localScale(__this_07,(MethodInfo *)0x0);
      fStack_a0 = UVar13.fields.x;
      fStack_9c = UVar13.fields.y;
      value.fields.y = fStack_9c + UVar14.fields.y;
      value.fields.x = fStack_a0 + UVar14.fields.x;
      value.fields.z = in_stack_ffffffffffffff38 + UVar14.fields.z;
      UnityEngine_Transform__set_localScale(__this_07,value,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_0445b7ce:
    il2cpp_runtime_helper_022b2c90();
label_0445b7d3:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar3 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._index = (int32_t)in_stack_ffffffffffffff38;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff30;
    __this_03.fields._version = (int32_t)fVar11;
    __this_03.fields._current = _Var15.genericMethod;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff40);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._index = (int32_t)in_stack_ffffffffffffff38;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff30;
  __this_04.fields._version = (int32_t)fVar11;
  __this_04.fields._current = _Var15.genericMethod;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff40);
  _Unwind_Resume(auVar12._0_8_);
}


// MapEditor.ScaleGizmo$$.ctor
// il2cpp: void MapEditor_ScaleGizmo___ctor (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x445b8b0

void MapEditor_ScaleGizmo___ctor(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  undefined8 uVar2;
  
  uVar2 = g_data_00d19fc0;
  UVar1.b = (float)(int)g_data_00d19fc0;
  UVar1.r = (float)(int)uVar2;
  UVar1.g = (float)(int)((ulong)uVar2 >> 0x20);
  UVar1.a = g_data_00d19fc0._4_4_;
  (__this->fields).SelectedColor.fields = UVar1;
  (__this->fields).LineXColor.fields.r = 1.0;
  (__this->fields).LineXColor.fields.g = 0.0;
  (__this->fields).LineXColor.fields.b = 0.0;
  (__this->fields).LineXColor.fields.a = 1.0;
  (__this->fields).LineYColor.fields.r = 1.0;
  (__this->fields).LineYColor.fields.g = 0.92156863;
  (__this->fields).LineYColor.fields.b = 0.015686275;
  (__this->fields).LineYColor.fields.a = 1.0;
  (__this->fields).LineZColor.fields.r = 0.0;
  (__this->fields).LineZColor.fields.g = 0.0;
  (__this->fields).LineZColor.fields.b = (float)(int)uVar2;
  (__this->fields).LineZColor.fields.a = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields).CenterColor.fields.r = 120.0;
  (__this->fields).CenterColor.fields.g = 120.0;
  (__this->fields).CenterColor.fields.b = 120.0;
  (__this->fields).CenterColor.fields.a = 1.0;
  MapEditor_BaseGizmo___ctor((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.ScaleGizmo$$<Update>b__17_0
// il2cpp: bool MapEditor_ScaleGizmo___Update_b__17_0 (MapEditor_ScaleGizmo_o* __this, UnityEngine_RaycastHit_o hit, const MethodInfo* method);
// 0x445b900

bool_conflict
MapEditor_ScaleGizmo___Update_b__17_0
          (MapEditor_ScaleGizmo_o *__this,UnityEngine_RaycastHit_o hit,MethodInfo *method)

{
  UnityEngine_Transform_o *y;
  UnityEngine_RaycastHit_o __this_00;
  bool_conflict bVar1;
  UnityEngine_Collider_o *__this_01;
  UnityEngine_Transform_o *x;
  Il2CppType *in_RCX;
  char *extraout_RDX;
  undefined8 unaff_RBX;
  InvokerMethod pIVar2;
  MethodInfo *method_00;
  Il2CppClass *in_R8;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  
  unique0x1000018e = hit.fields;
  __this_00.fields._24_8_ = unaff_retaddr;
  method_00 = (MethodInfo *)&hit;
  if (g_data_057ae749 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae749 = '\x01';
  }
  pIVar2 = (InvokerMethod)0x0;
  __this_00.fields.m_Point.fields.z = (float)(int)unaff_R14;
  __this_00.fields.m_Normal.fields.x = (float)(int)((ulong)unaff_R14 >> 0x20);
  __this_00.fields.m_Point.fields.x = (float)(int)unaff_RBX;
  __this_00.fields.m_Point.fields.y = (float)(int)((ulong)unaff_RBX >> 0x20);
  __this_00.fields.m_Normal.fields.y = (float)(int)unaff_R15;
  __this_00.fields.m_Normal.fields.z = (float)(int)((ulong)unaff_R15 >> 0x20);
  __this_01 = UnityEngine_RaycastHit__get_collider(__this_00,method_00);
  if (__this_01 != (UnityEngine_Collider_o *)0x0) {
    x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    y = (__this->fields)._center;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae74a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ActionButton);
    g_data_057ae74a = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)method_00,(MethodInfo *)0x0);
  method_00->invoker_method = pIVar2;
  il2cpp_runtime_helper_022b4080(&method_00->invoker_method,pIVar2);
  method_00->name = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&method_00->name,extraout_RDX);
  method_00->return_type = in_RCX;
  il2cpp_runtime_helper_022b4080(&method_00->return_type,in_RCX);
  if (in_R8 == (Il2CppClass *)0x0) {
    in_R8 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_ActionButton,0);
  }
  method_00->klass = in_R8;
  bVar1 = il2cpp_runtime_helper_022b4080(&method_00->klass,in_R8);
  return bVar1;
}


