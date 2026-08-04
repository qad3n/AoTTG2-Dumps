// Type: MapEditor.PositionGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/PositionGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/PositionGizmo.cs
// --------------------------------

// MapEditor.PositionGizmo$$Create
// il2cpp: MapEditor_PositionGizmo_o* MapEditor_PositionGizmo__Create (const MethodInfo* method);
// 0x433d370

MapEditor_PositionGizmo_o * MapEditor_PositionGizmo__Create(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  MapEditor_PositionGizmo_o *pMVar2;
  undefined4 extraout_var;
  System_String_o *path;
  
  if (g_data_057ae0bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_PositionGizmo_AddComponent_PositionGizmo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Gizmos/PositionGizmo");
    g_data_057ae0bf = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset_object_(path,"Gizmos/PositionGizmo",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pMVar2 = (MapEditor_PositionGizmo_o *)UnityEngine_GameObject__AddComponent_object_(__this,MethodInfo_PositionGizmo_AddComponent_PositionGizmo);
    UnityEngine_GameObject__SetActive(__this,0,(MethodInfo *)0x0);
    return pMVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0c0 = '\x01';
  }
  x = path[7].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return (MapEditor_PositionGizmo_o *)CONCAT44(extraout_var,bVar1);
}


// MapEditor.PositionGizmo$$IsActive
// il2cpp: bool MapEditor_PositionGizmo__IsActive (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x433d460

bool_conflict MapEditor_PositionGizmo__IsActive(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool_conflict bVar1;
  
  if (g_data_057ae0c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0c0 = '\x01';
  }
  x = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// MapEditor.PositionGizmo$$Awake
// il2cpp: void MapEditor_PositionGizmo__Awake (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x433d4b0

void MapEditor_PositionGizmo__Awake(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool_conflict bVar7;
  UnityEngine_Transform_o *pUVar8;
  MethodInfo *pMVar9;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MapEditor_PositionGizmo_o *pMVar10;
  MapEditor_PositionGizmo_o *pMVar11;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Vector3_o axisMask;
  UnityEngine_Vector3_o axisMask_00;
  
  if (g_data_057ae0c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LineZ");
    il2cpp_runtime_helper_023445d0(&"LineY");
    il2cpp_runtime_helper_023445d0(&"LineX");
    g_data_057ae0c1 = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,method);
  pUVar8 = (__this->fields)._transform;
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    pUVar8 = UnityEngine_Transform__Find(pUVar8,"LineX",(MethodInfo *)0x0);
    (__this->fields)._lineX = pUVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._lineX,pUVar8);
    pUVar8 = (__this->fields)._transform;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      pUVar8 = UnityEngine_Transform__Find(pUVar8,"LineY",(MethodInfo *)0x0);
      (__this->fields)._lineY = pUVar8;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._lineY,pUVar8);
      pUVar8 = (__this->fields)._transform;
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        pMVar9 = (MethodInfo *)UnityEngine_Transform__Find(pUVar8,"LineZ",(MethodInfo *)0x0);
        (__this->fields)._lineZ = (UnityEngine_Transform_o *)pMVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._lineZ);
        MapEditor_PositionGizmo__CreatePlaneHandles(__this,pMVar9);
        MapEditor_PositionGizmo__ResetColors(__this,pMVar9);
        return;
      }
    }
  }
  pMVar10 = (MapEditor_PositionGizmo_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = extraout_RDX;
  if (g_data_057ae0c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"PlaneXZ");
    il2cpp_runtime_helper_023445d0(&"PlaneXY");
    il2cpp_runtime_helper_023445d0(&"PlaneYZ");
    g_data_057ae0c2 = '\x01';
    pMVar9 = extraout_RDX_00;
  }
  pUVar8 = MapEditor_PositionGizmo__CreatePlaneHandle
                     (pMVar10,"PlaneXY",(UnityEngine_Vector3_o)ZEXT812(0x3f8000003f800000),
                      (UnityEngine_Color_o)(pMVar10->fields).LineZColor.fields,pMVar9);
  (pMVar10->fields)._planeXY = pUVar8;
  il2cpp_runtime_helper_022b4080(&(pMVar10->fields)._planeXY,pUVar8);
  axisMask.fields.z = 1.0;
  axisMask.fields.x = 0.0;
  axisMask.fields.y = 1.0;
  pUVar8 = MapEditor_PositionGizmo__CreatePlaneHandle
                     (pMVar10,"PlaneYZ",axisMask,(UnityEngine_Color_o)(pMVar10->fields).LineXColor.fields,
                      method_00);
  (pMVar10->fields)._planeYZ = pUVar8;
  il2cpp_runtime_helper_022b4080(&(pMVar10->fields)._planeYZ,pUVar8);
  axisMask_00.fields.z = 1.0;
  axisMask_00.fields.x = 1.0;
  axisMask_00.fields.y = 0.0;
  pMVar9 = (MethodInfo *)
           MapEditor_PositionGizmo__CreatePlaneHandle
                     (pMVar10,"PlaneXZ",axisMask_00,
                      (UnityEngine_Color_o)(pMVar10->fields).LineYColor.fields,method_01);
  (pMVar10->fields)._planeXZ = (UnityEngine_Transform_o *)pMVar9;
  il2cpp_runtime_helper_022b4080(&(pMVar10->fields)._planeXZ);
  pUVar8 = MapEditor_PositionGizmo__CreateCenterSquare(pMVar10,pMVar9);
  (pMVar10->fields)._centerSquare = pUVar8;
  il2cpp_runtime_helper_022b4080(&(pMVar10->fields)._centerSquare);
  pMVar10 = (MapEditor_PositionGizmo_o *)(pMVar10->fields)._centerSquare;
  if (pMVar10 != (MapEditor_PositionGizmo_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar10,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = extraout_RDX_01;
  pMVar11 = pMVar10;
  if (g_data_057ae0d2 == '\0') {
    pMVar11 = (MapEditor_PositionGizmo_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0d2 = '\x01';
    pMVar9 = extraout_RDX_02;
  }
  MapEditor_PositionGizmo__SetLineColor
            (pMVar11,(pMVar10->fields)._lineX,(UnityEngine_Color_o)(pMVar10->fields).LineXColor.fields,pMVar9)
  ;
  MapEditor_PositionGizmo__SetLineColor
            (pMVar11,(pMVar10->fields)._lineY,(UnityEngine_Color_o)(pMVar10->fields).LineYColor.fields,
             method_02);
  MapEditor_PositionGizmo__SetLineColor
            (pMVar11,(pMVar10->fields)._lineZ,(UnityEngine_Color_o)(pMVar10->fields).LineZColor.fields,
             method_03);
  pMVar11 = (MapEditor_PositionGizmo_o *)(pMVar10->fields)._planeXY;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar1 = (pMVar10->fields).LineZColor.fields.r;
    uVar4 = (pMVar10->fields).LineZColor.fields.g;
    color.fields.g = (float)uVar4;
    color.fields.r = (float)uVar1;
    color.fields.a = 0.4;
    color.fields.b = (pMVar10->fields).LineZColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar11,(pMVar10->fields)._planeXY,color,method_04);
  }
  pMVar11 = (MapEditor_PositionGizmo_o *)(pMVar10->fields)._planeYZ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar2 = (pMVar10->fields).LineXColor.fields.r;
    uVar5 = (pMVar10->fields).LineXColor.fields.g;
    color_00.fields.g = (float)uVar5;
    color_00.fields.r = (float)uVar2;
    color_00.fields.a = 0.4;
    color_00.fields.b = (pMVar10->fields).LineXColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar11,(pMVar10->fields)._planeYZ,color_00,method_05);
  }
  pMVar11 = (MapEditor_PositionGizmo_o *)(pMVar10->fields)._planeXZ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar3 = (pMVar10->fields).LineYColor.fields.r;
    uVar6 = (pMVar10->fields).LineYColor.fields.g;
    color_01.fields.g = (float)uVar6;
    color_01.fields.r = (float)uVar3;
    color_01.fields.a = 0.4;
    color_01.fields.b = (pMVar10->fields).LineYColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar11,(pMVar10->fields)._planeXZ,color_01,method_06);
    return;
  }
  return;
}


// MapEditor.PositionGizmo$$CreatePlaneHandles
// il2cpp: void MapEditor_PositionGizmo__CreatePlaneHandles (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x433d590

void MapEditor_PositionGizmo__CreatePlaneHandles(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool_conflict bVar7;
  UnityEngine_Transform_o *pUVar8;
  MethodInfo *pMVar9;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MapEditor_PositionGizmo_o *__this_01;
  MapEditor_PositionGizmo_o *pMVar10;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Vector3_o axisMask;
  UnityEngine_Vector3_o axisMask_00;
  
  if (g_data_057ae0c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"PlaneXZ");
    il2cpp_runtime_helper_023445d0(&"PlaneXY");
    il2cpp_runtime_helper_023445d0(&"PlaneYZ");
    g_data_057ae0c2 = '\x01';
    in_RDX = extraout_RDX;
  }
  pUVar8 = MapEditor_PositionGizmo__CreatePlaneHandle
                     (__this,"PlaneXY",(UnityEngine_Vector3_o)ZEXT812(0x3f8000003f800000),
                      (UnityEngine_Color_o)(__this->fields).LineZColor.fields,in_RDX);
  (__this->fields)._planeXY = pUVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._planeXY,pUVar8);
  axisMask.fields.z = 1.0;
  axisMask.fields.x = 0.0;
  axisMask.fields.y = 1.0;
  pUVar8 = MapEditor_PositionGizmo__CreatePlaneHandle
                     (__this,"PlaneYZ",axisMask,(UnityEngine_Color_o)(__this->fields).LineXColor.fields,
                      method_00);
  (__this->fields)._planeYZ = pUVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._planeYZ,pUVar8);
  axisMask_00.fields.z = 1.0;
  axisMask_00.fields.x = 1.0;
  axisMask_00.fields.y = 0.0;
  pMVar9 = (MethodInfo *)
           MapEditor_PositionGizmo__CreatePlaneHandle
                     (__this,"PlaneXZ",axisMask_00,(UnityEngine_Color_o)(__this->fields).LineYColor.fields,
                      method_01);
  (__this->fields)._planeXZ = (UnityEngine_Transform_o *)pMVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._planeXZ);
  pUVar8 = MapEditor_PositionGizmo__CreateCenterSquare(__this,pMVar9);
  (__this->fields)._centerSquare = pUVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._centerSquare);
  __this_01 = (MapEditor_PositionGizmo_o *)(__this->fields)._centerSquare;
  if (__this_01 != (MapEditor_PositionGizmo_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = extraout_RDX_00;
  pMVar10 = __this_01;
  if (g_data_057ae0d2 == '\0') {
    pMVar10 = (MapEditor_PositionGizmo_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0d2 = '\x01';
    pMVar9 = extraout_RDX_01;
  }
  MapEditor_PositionGizmo__SetLineColor
            (pMVar10,(__this_01->fields)._lineX,(UnityEngine_Color_o)(__this_01->fields).LineXColor.fields,
             pMVar9);
  MapEditor_PositionGizmo__SetLineColor
            (pMVar10,(__this_01->fields)._lineY,(UnityEngine_Color_o)(__this_01->fields).LineYColor.fields,
             method_02);
  MapEditor_PositionGizmo__SetLineColor
            (pMVar10,(__this_01->fields)._lineZ,(UnityEngine_Color_o)(__this_01->fields).LineZColor.fields,
             method_03);
  pMVar10 = (MapEditor_PositionGizmo_o *)(__this_01->fields)._planeXY;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar1 = (__this_01->fields).LineZColor.fields.r;
    uVar4 = (__this_01->fields).LineZColor.fields.g;
    color.fields.g = (float)uVar4;
    color.fields.r = (float)uVar1;
    color.fields.a = 0.4;
    color.fields.b = (__this_01->fields).LineZColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar10,(__this_01->fields)._planeXY,color,method_04);
  }
  pMVar10 = (MapEditor_PositionGizmo_o *)(__this_01->fields)._planeYZ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar2 = (__this_01->fields).LineXColor.fields.r;
    uVar5 = (__this_01->fields).LineXColor.fields.g;
    color_00.fields.g = (float)uVar5;
    color_00.fields.r = (float)uVar2;
    color_00.fields.a = 0.4;
    color_00.fields.b = (__this_01->fields).LineXColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar10,(__this_01->fields)._planeYZ,color_00,method_05);
  }
  pMVar10 = (MapEditor_PositionGizmo_o *)(__this_01->fields)._planeXZ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar3 = (__this_01->fields).LineYColor.fields.r;
    uVar6 = (__this_01->fields).LineYColor.fields.g;
    color_01.fields.g = (float)uVar6;
    color_01.fields.r = (float)uVar3;
    color_01.fields.a = 0.4;
    color_01.fields.b = (__this_01->fields).LineYColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar10,(__this_01->fields)._planeXZ,color_01,method_06);
    return;
  }
  return;
}


// MapEditor.PositionGizmo$$CreateCenterSquare
// il2cpp: UnityEngine_Transform_o* MapEditor_PositionGizmo__CreateCenterSquare (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x433db60

UnityEngine_Transform_o *
MapEditor_PositionGizmo__CreateCenterSquare(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  uint uVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar7;
  MapEditor_PositionGizmo_o *__this_05;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_MeshFilter_o *__this_06;
  UnityEngine_Mesh_o *value;
  UnityEngine_BoxCollider_o *__this_07;
  UnityEngine_Vector3_array *value_00;
  UnityEngine_Vector3_array *value_01;
  MapEditor_PositionGizmo_o *pMVar9;
  System_Int32_array *value_02;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Transform_o *extraout_RAX;
  UnityEngine_Transform_o *extraout_RAX_00;
  UnityEngine_Transform_o *__this_08;
  UnityEngine_Transform_o *extraout_RAX_01;
  long *plVar11;
  UnityEngine_Material_o *__this_09;
  MethodInfo *pMVar12;
  MapEditor_PositionGizmo_o *pMVar13;
  UnityEngine_Shader_o *unaff_R12;
  float fVar14;
  undefined8 uVar15;
  float extraout_XMM1_Da;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar16;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar17;
  float extraout_XMM0_Dd_01;
  ulong uVar18;
  float fVar21;
  undefined1 in_XMM2 [16];
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  UnityEngine_Color_o value_03;
  UnityEngine_Quaternion_o value_04;
  undefined1 auVar32 [12];
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o value_05;
  undefined1 in_stack_fffffffffffffeb0 [12];
  float in_stack_fffffffffffffebc;
  System_Collections_Generic_HashSet_T__o *pSVar34;
  undefined1 auStack_120 [8];
  float fStack_118;
  float fStack_114;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_110;
  MapEditor_PositionGizmo_o *pMStack_f8;
  UnityEngine_Shader_o *pUStack_f0;
  UnityEngine_Vector3_array *pUStack_e8;
  MapEditor_PositionGizmo_o *pMStack_e0;
  undefined8 uStack_d8;
  UnityEngine_Vector3_array *pUStack_d0;
  UnityEngine_Vector3_array *pUStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [8];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  UnityEngine_Material_o *pUStack_40;
  UnityEngine_Vector3_array *pUStack_38;
  MapEditor_PositionGizmo_o *pMStack_30;
  
  if (g_data_057ae0c3 == '\0') {
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x433db81;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x433db8d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_AddComponent_MeshFilter);
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x433db99;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dba5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dbb1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dbbd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dbc9;
    il2cpp_runtime_helper_023445d0(&"CenterSquare");
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dbd5;
    il2cpp_runtime_helper_023445d0(&"MapEditor/Gizmo");
    g_data_057ae0c3 = '\x01';
  }
  pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dbeb;
  __this_05 = (MapEditor_PositionGizmo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dc02;
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_05,"CenterSquare",(MethodInfo *)0x0);
  __this_09 = (UnityEngine_Material_o *)&TypeInfo_PhysicsLayer;
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dc1a;
    il2cpp_runtime_helper_02337ed0();
  }
  if (__this_05 != (MapEditor_PositionGizmo_o *)0x0) {
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dc3a;
    UnityEngine_GameObject__set_layer
              ((UnityEngine_GameObject_o *)__this_05,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x44),
               (MethodInfo *)0x0);
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dc44;
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_05,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dc5d;
      UnityEngine_Transform__SetParent_4e09e30(pUVar8,(__this->fields)._transform,0,(MethodInfo *)0x0);
      pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dc67;
      pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_05,(MethodInfo *)0x0);
      if (g_data_057a65d5 == '\0') {
        pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dc7f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      __this_09 = (UnityEngine_Material_o *)0x0;
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dcb4;
        UnityEngine_Transform__set_localPosition
                  (pUVar8,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                   (MethodInfo *)0x0);
        pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dcc6;
        __this_06 = (UnityEngine_MeshFilter_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)__this_05,MethodInfo_MeshFilter_AddComponent_MeshFilter);
        pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dcdb;
        pMVar12 = MethodInfo_MeshRenderer_AddComponent_MeshRenderer;
        pMVar13 = __this_05;
        __this = (MapEditor_PositionGizmo_o *)
                 UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)__this_05,(MethodInfo_255A020 *)MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
        in_XMM2._0_12_ = ZEXT812(0x40c00000);
        in_XMM2._12_4_ = 0;
        pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dcf5;
        value = MapEditor_PositionGizmo__BuildQuadMesh
                          (pMVar13,(UnityEngine_Vector3_o)ZEXT812(0x3f8000003f800000),6.0,pMVar12);
        __this_09 = (UnityEngine_Material_o *)0x0;
        if (__this_06 != (UnityEngine_MeshFilter_o *)0x0) {
          pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dd0b;
          UnityEngine_MeshFilter__set_sharedMesh(__this_06,value,(MethodInfo *)0x0);
          pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dd1c;
          unaff_R12 = UnityEngine_Shader__Find("MapEditor/Gizmo",(MethodInfo *)0x0);
          pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dd2e;
          __this_09 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
          pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dd3e;
          UnityEngine_Material___ctor(__this_09,unaff_R12,(MethodInfo *)0x0);
          if (__this_09 != (UnityEngine_Material_o *)0x0) {
            pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dd5f;
            value_03.fields.b = 1.0;
            value_03.fields.a = 0.5;
            value_03.fields.r = 1.0;
            value_03.fields.g = 1.0;
            UnityEngine_Material__set_color(__this_09,value_03,(MethodInfo *)0x0);
            pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dd6e;
            UnityEngine_Material__set_renderQueue(__this_09,0xc28,(MethodInfo *)0x0);
            if ((UnityEngine_Vector3_array *)__this != (UnityEngine_Vector3_array *)0x0) {
              pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dd84;
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)__this,__this_09,(MethodInfo *)0x0);
              pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dd90;
              UnityEngine_Renderer__set_shadowCastingMode
                        ((UnityEngine_Renderer_o *)__this,0,(MethodInfo *)0x0);
              pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dd9c;
              UnityEngine_Renderer__set_receiveShadows((UnityEngine_Renderer_o *)__this,0,(MethodInfo *)0x0);
              pMStack_30 = (MapEditor_PositionGizmo_o *)0x433ddae;
              __this_07 = (UnityEngine_BoxCollider_o *)
                          UnityEngine_GameObject__AddComponent_object_
                                    ((UnityEngine_GameObject_o *)__this_05,MethodInfo_BoxCollider_AddComponent_BoxCollider);
              if (__this_07 != (UnityEngine_BoxCollider_o *)0x0) {
                pMStack_30 = (MapEditor_PositionGizmo_o *)0x433ddcf;
                UVar33.fields.z = 0.5;
                UVar33.fields.x = 6.0;
                UVar33.fields.y = 6.0;
                UnityEngine_BoxCollider__set_size(__this_07,UVar33,(MethodInfo *)0x0);
                if (g_data_057a65d5 == '\0') {
                  pMStack_30 = (MapEditor_PositionGizmo_o *)0x433dde4;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a65d5 = '\x01';
                }
                pMStack_30 = (MapEditor_PositionGizmo_o *)0x433de09;
                UnityEngine_BoxCollider__set_center
                          (__this_07,
                           (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                           (MethodInfo *)0x0);
                pUVar8 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)__this_05,(MethodInfo *)0x0);
                return pUVar8;
              }
            }
          }
        }
      }
    }
  }
  pMStack_30 = (MapEditor_PositionGizmo_o *)0x433de21;
  uVar15 = il2cpp_runtime_helper_022b2c90();
  auStack_50 = in_XMM2;
  pUStack_40 = __this_09;
  pUStack_38 = (UnityEngine_Vector3_array *)__this;
  pMStack_30 = __this_05;
  fVar14 = extraout_XMM1_Da;
  if (g_data_057ae0c5 == '\0') {
    fStack_a8 = (float)extraout_XMM0_Dc;
    auStack_b0 = (undefined1  [8])uVar15;
    fStack_a4 = (float)extraout_XMM0_Dd;
    auStack_c0._0_4_ = extraout_XMM1_Da;
    pUStack_c8 = (UnityEngine_Vector3_array *)0x433de60;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    pUStack_c8 = (UnityEngine_Vector3_array *)0x433de6c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
    pUStack_c8 = (UnityEngine_Vector3_array *)0x433de78;
    il2cpp_runtime_helper_023445d0(&fld_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7646C4E94);
    pUStack_c8 = (UnityEngine_Vector3_array *)0x433de84;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    uVar15 = auStack_b0;
    g_data_057ae0c5 = '\x01';
    fVar14 = (float)auStack_c0._0_4_;
  }
  fVar25 = (float)((ulong)uVar15 >> 0x20);
  fVar24 = 0.0;
  if (((float)uVar15 <= 0.0) || (fVar25 <= 0.0)) {
    auStack_70 = _DAT_00d1ca10;
    if (fVar14 <= 0.0) {
      auStack_70._0_12_ = ZEXT812(0x3f800000);
      auStack_70._12_4_ = 0;
    }
    if (fVar25 <= 0.0) {
      auStack_70._0_12_ = ZEXT812(0x3f800000);
      auStack_70._12_4_ = 0;
    }
    fStack_7c = 0.0;
    fVar24 = 1.0;
  }
  else {
    fStack_7c = 1.0;
    auStack_70._0_12_ = ZEXT812(0x3f800000);
    auStack_70._12_4_ = 0;
  }
  auStack_60 = ZEXT416((uint)fVar24);
  fVar27 = auStack_70._4_4_;
  fVar21 = auStack_70._8_4_ * 0.0;
  fVar22 = auStack_70._12_4_ * 0.0;
  fVar25 = fVar24 * auStack_70._0_4_;
  auVar20._0_4_ = fStack_7c * auStack_70._0_4_;
  auVar20._4_4_ = fStack_7c;
  auVar20._8_8_ = 0;
  fStack_80 = 0.0;
  uStack_78 = 0;
  uStack_74 = 0;
  fVar14 = fStack_7c * 0.0;
  fVar28 = 0.0;
  fVar29 = 0.0;
  fVar30 = fVar27 * 0.0;
  fVar31 = fVar24 * fVar27;
  fVar26 = 0.0;
  if (g_data_057a6845 == '\0') {
    auStack_b0._4_4_ = 0;
    auStack_b0._0_4_ = fVar24 * fVar27;
    fStack_a8 = fVar21;
    fStack_a4 = fVar22;
    pUStack_c8 = (UnityEngine_Vector3_array *)0x433df6c;
    auStack_c0 = auVar20;
    fStack_a0 = fStack_7c * 0.0;
    fStack_9c = fVar25;
    fStack_98 = 0.0;
    fStack_94 = 0.0;
    fStack_90 = fVar27 * 0.0;
    fStack_8c = fVar27;
    fStack_88 = auStack_70._8_4_;
    fStack_84 = auStack_70._12_4_;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    auVar20 = auStack_c0;
    fVar14 = fStack_a0;
    fVar25 = fStack_9c;
    fVar28 = fStack_98;
    fVar29 = fStack_94;
    fVar30 = fStack_90;
    fVar31 = (float)auStack_b0._0_4_;
    fVar26 = (float)auStack_b0._4_4_;
    fVar21 = fStack_a8;
    fVar22 = fStack_a4;
  }
  auVar19._0_4_ = fVar31 - fVar14;
  auVar19._4_4_ = fVar26 - fVar25;
  auVar19._8_4_ = fVar21 - fVar28;
  auVar19._12_4_ = fVar22 - fVar29;
  auVar23._4_12_ = auVar20._4_12_;
  auVar23._0_4_ = auVar20._0_4_ - fVar30;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    pUStack_c8 = (UnityEngine_Vector3_array *)0x433dfae;
    auStack_c0 = auVar23;
    _auStack_b0 = auVar19;
    il2cpp_runtime_helper_02337ed0();
    auVar19 = _auStack_b0;
    auVar23 = auStack_c0;
  }
  uVar16 = auVar23._8_4_;
  uVar17 = auVar23._12_4_;
  fVar14 = auVar23._0_4_ * auVar23._0_4_ + auVar19._4_4_ * auVar19._4_4_ + auVar19._0_4_ * auVar19._0_4_;
  if (fVar14 < 0.0) {
    pUStack_c8 = (UnityEngine_Vector3_array *)0x433e037;
    auStack_c0 = auVar23;
    _auStack_b0 = auVar19;
    fVar14 = sqrtf(fVar14);
    uVar16 = extraout_XMM0_Dc_00;
    uVar17 = extraout_XMM0_Dd_00;
    auVar19 = _auStack_b0;
    auVar23 = auStack_c0;
    if (1e-05 < fVar14) goto label_0433e049;
label_0433dfe8:
    if (g_data_057a65d5 == '\0') {
      pUStack_c8 = (UnityEngine_Vector3_array *)0x433dffd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    _fStack_a8 = 0;
    auStack_b0 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
    auStack_c0 = ZEXT416((uint)(*(ulong **)(TypeInfo_Vector3 + 0xb8))[1]);
  }
  else {
    fVar14 = SQRT(fVar14);
    if (fVar14 <= 1e-05) goto label_0433dfe8;
label_0433e049:
    auStack_c0._4_12_ = auVar23._4_12_;
    auStack_c0._0_4_ = auVar23._0_4_ / fVar14;
    auVar6._4_4_ = fVar14;
    auVar6._0_4_ = fVar14;
    auVar6._8_4_ = uVar16;
    auVar6._12_4_ = uVar17;
    _auStack_b0 = divps(auVar19,auVar6);
  }
  pUStack_c8 = (UnityEngine_Vector3_array *)0x433e071;
  pMVar13 = TypeInfo_Vector3;
  value_00 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
  pUStack_d0 = (UnityEngine_Vector3_array *)&TypeInfo_Vector3;
  if (value_00 == (UnityEngine_Vector3_array *)0x0) goto label_0433e2e5;
  uVar1 = (uint)value_00->max_length;
  value_01 = (UnityEngine_Vector3_array *)&TypeInfo_Vector3;
  __this = (MapEditor_PositionGizmo_o *)value_00;
  if (uVar1 == 0) {
label_0433e2e0:
    pUStack_c8 = (UnityEngine_Vector3_array *)0x433e2e5;
    il2cpp_runtime_helper_022b2ca0();
    pUStack_d0 = value_01;
  }
  else {
    fVar30 = (float)auStack_50._0_4_ * 0.5;
    fVar28 = (float)auStack_70._0_4_ * fVar30;
    fVar29 = (float)auStack_70._4_4_ * fVar30;
    fVar14 = fVar30 * fStack_80;
    fVar25 = fVar30 * fStack_7c;
    fVar24 = auStack_60._0_4_ * fVar30;
    fVar31 = fVar30 * -0.0 - fVar24;
    value_00->m_Items[0].fields.x = -fVar28 - fVar14;
    value_00->m_Items[0].fields.y = -fVar29 - fVar25;
    value_00->m_Items[0].fields.z = fVar31;
    if (uVar1 == 1) goto label_0433e2e0;
    fVar26 = fVar30 * 0.0 - fVar24;
    value_00->m_Items[1].fields.x = fVar28 - fVar14;
    value_00->m_Items[1].fields.y = fVar29 - fVar25;
    value_00->m_Items[1].fields.z = fVar26;
    if (uVar1 < 3) goto label_0433e2e0;
    fVar21 = fVar30 * 0.0 + fVar24;
    value_00->m_Items[2].fields.x = fVar28 + fVar14;
    value_00->m_Items[2].fields.y = fVar29 + fVar25;
    value_00->m_Items[2].fields.z = fVar21;
    if (uVar1 == 3) goto label_0433e2e0;
    fVar24 = fVar30 * -0.0 + fVar24;
    value_00->m_Items[3].fields.x = fVar14 - fVar28;
    value_00->m_Items[3].fields.y = fVar25 - fVar29;
    value_00->m_Items[3].fields.z = fVar24;
    if (uVar1 < 5) goto label_0433e2e0;
    value_00->m_Items[4].fields.x = -fVar28 - fVar14;
    value_00->m_Items[4].fields.y = -fVar29 - fVar25;
    value_00->m_Items[4].fields.z = fVar31;
    if (uVar1 == 5) goto label_0433e2e0;
    value_00->m_Items[5].fields.x = fVar28 - fVar14;
    value_00->m_Items[5].fields.y = fVar29 - fVar25;
    value_00->m_Items[5].fields.z = fVar26;
    if (uVar1 < 7) goto label_0433e2e0;
    value_00->m_Items[6].fields.x = fVar28 + fVar14;
    value_00->m_Items[6].fields.y = fVar29 + fVar25;
    value_00->m_Items[6].fields.z = fVar21;
    if (uVar1 == 7) goto label_0433e2e0;
    value_00->m_Items[7].fields.x = fVar14 - fVar28;
    value_00->m_Items[7].fields.y = fVar25 - fVar29;
    value_00->m_Items[7].fields.z = fVar24;
    pUStack_c8 = (UnityEngine_Vector3_array *)0x433e19f;
    pMVar13 = TypeInfo_Vector3;
    value_01 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
    if (value_01 != (UnityEngine_Vector3_array *)0x0) {
      uVar1 = (uint)value_01->max_length;
      if (uVar1 != 0) {
        value_01->m_Items[0].fields.x = (float)auStack_b0._0_4_;
        value_01->m_Items[0].fields.y = (float)auStack_b0._4_4_;
        fVar14 = auStack_c0._0_4_;
        value_01->m_Items[0].fields.z = fVar14;
        if (uVar1 != 1) {
          value_01->m_Items[1].fields.x = (float)auStack_b0._0_4_;
          value_01->m_Items[1].fields.y = (float)auStack_b0._4_4_;
          value_01->m_Items[1].fields.z = fVar14;
          if (2 < uVar1) {
            value_01->m_Items[2].fields.x = (float)auStack_b0._0_4_;
            value_01->m_Items[2].fields.y = (float)auStack_b0._4_4_;
            value_01->m_Items[2].fields.z = fVar14;
            if (uVar1 != 3) {
              value_01->m_Items[3].fields.x = (float)auStack_b0._0_4_;
              value_01->m_Items[3].fields.y = (float)auStack_b0._4_4_;
              value_01->m_Items[3].fields.z = fVar14;
              if (4 < uVar1) {
                uVar18 = auStack_b0 ^ 0x8000000080000000;
                fVar14 = -fVar14;
                value_01->m_Items[4].fields.x = (float)(int)uVar18;
                value_01->m_Items[4].fields.y = (float)(int)(uVar18 >> 0x20);
                value_01->m_Items[4].fields.z = fVar14;
                if (uVar1 != 5) {
                  value_01->m_Items[5].fields.x = (float)(int)uVar18;
                  value_01->m_Items[5].fields.y = (float)(int)(uVar18 >> 0x20);
                  value_01->m_Items[5].fields.z = fVar14;
                  if (6 < uVar1) {
                    value_01->m_Items[6].fields.x = (float)(int)uVar18;
                    value_01->m_Items[6].fields.y = (float)(int)(uVar18 >> 0x20);
                    value_01->m_Items[6].fields.z = fVar14;
                    if (uVar1 != 7) {
                      value_01->m_Items[7].fields.x = (float)(int)uVar18;
                      value_01->m_Items[7].fields.y = (float)(int)(uVar18 >> 0x20);
                      value_01->m_Items[7].fields.z = fVar14;
                      pUStack_c8 = (UnityEngine_Vector3_array *)0x433e262;
                      pMVar9 = (MapEditor_PositionGizmo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
                      pUStack_c8 = (UnityEngine_Vector3_array *)0x433e26f;
                      pMVar13 = pMVar9;
                      UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pMVar9,(MethodInfo *)0x0);
                      __this_05 = (MapEditor_PositionGizmo_o *)0x0;
                      pUStack_d0 = value_01;
                      if (pMVar9 != (MapEditor_PositionGizmo_o *)0x0) {
                        pUStack_c8 = (UnityEngine_Vector3_array *)0x433e281;
                        UnityEngine_Mesh__set_vertices
                                  ((UnityEngine_Mesh_o *)pMVar9,value_00,(MethodInfo *)0x0);
                        pUStack_c8 = (UnityEngine_Vector3_array *)0x433e28e;
                        UnityEngine_Mesh__set_normals((UnityEngine_Mesh_o *)pMVar9,value_01,(MethodInfo *)0x0)
                        ;
                        pUStack_c8 = (UnityEngine_Vector3_array *)0x433e2a2;
                        value_02 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int,0xc);
                        pUStack_c8 = (UnityEngine_Vector3_array *)0x433e2b9;
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                  ((System_Array_o *)value_02,fld_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7646C4E94,(MethodInfo *)0x0);
                        pUStack_c8 = (UnityEngine_Vector3_array *)0x433e2c6;
                        UnityEngine_Mesh__set_triangles
                                  ((UnityEngine_Mesh_o *)pMVar9,value_02,(MethodInfo *)0x0);
                        pUStack_c8 = (UnityEngine_Vector3_array *)0x433e2d0;
                        UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)pMVar9,(MethodInfo *)0x0);
                        return (UnityEngine_Transform_o *)pMVar9;
                      }
                      goto label_0433e2e5;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_0433e2e0;
    }
  }
label_0433e2e5:
  pUStack_c8 = (UnityEngine_Vector3_array *)0x433e2ea;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar13;
  pUStack_c8 = (UnityEngine_Vector3_array *)__this;
  if (g_data_057ae0c6 == '\0') {
    pMStack_e0 = (MapEditor_PositionGizmo_o *)0x433e30c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMVar9 = (MapEditor_PositionGizmo_o *)&TypeInfo_Object;
    pMStack_e0 = (MapEditor_PositionGizmo_o *)0x433e318;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0c6 = '\x01';
  }
  pGVar2 = (pMVar13->fields)._gameManager;
  if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).SelectedObjects,
     pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if (0 < (pSVar3->fields)._count) {
      __this = (MapEditor_PositionGizmo_o *)(pGVar2->fields).CurrentGizmo;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_e0 = (MapEditor_PositionGizmo_o *)0x433e35b;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_e0 = (MapEditor_PositionGizmo_o *)0x433e368;
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)pMVar13,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pMStack_e0 = (MapEditor_PositionGizmo_o *)0x433e376;
        pMVar9 = pMVar13;
        pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar13,(MethodInfo *)0x0);
        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
          pMVar12 = (MethodInfo *)0x1;
          pMStack_e0 = (MapEditor_PositionGizmo_o *)0x433e38a;
          UnityEngine_GameObject__SetActive(pUVar10,1,(MethodInfo *)0x0);
          pMStack_e0 = (MapEditor_PositionGizmo_o *)0x433e392;
          MapEditor_PositionGizmo__ResetCenter(pMVar13,pMVar12);
          MapEditor_PositionGizmo__ResetColors(pMVar13,pMVar12);
          return extraout_RAX;
        }
        goto label_0433e3c3;
      }
    }
    pMStack_e0 = (MapEditor_PositionGizmo_o *)0x433e3ab;
    pMVar9 = pMVar13;
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar13,(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
label_0433e3c3:
  pMStack_e0 = (MapEditor_PositionGizmo_o *)0x433e3c8;
  il2cpp_runtime_helper_022b2c90();
  pMStack_f8 = pMVar13;
  pUStack_f0 = unaff_R12;
  pUStack_e8 = (UnityEngine_Vector3_array *)__this;
  pMStack_e0 = __this_05;
  if (g_data_057ae0d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ae0d1 = '\x01';
  }
  pSVar34 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pUVar8 = (pMVar9->fields)._transform;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
label_0433e632:
    do {
      auVar32 = il2cpp_runtime_helper_022b2c90();
      if (auVar32._8_4_ != 1) {
label_0433e6ff:
        __this_04.fields._version = (int32_t)in_stack_fffffffffffffebc;
        __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb0._0_8_;
        __this_04.fields._index = in_stack_fffffffffffffeb0._8_4_;
        __this_04.fields._current = (Il2CppObject *)pSVar34;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffec0);
        _Unwind_Resume(auVar32._0_8_);
      }
      plVar11 = (long *)__cxa_begin_catch(auVar32._0_8_);
      lVar4 = *plVar11;
      __cxa_end_catch();
      __this_03.fields._version = (int32_t)in_stack_fffffffffffffebc;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb0._0_8_;
      __this_03.fields._index = in_stack_fffffffffffffeb0._8_4_;
      __this_03.fields._current = (Il2CppObject *)pSVar34;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffec0);
      if (lVar4 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar4);
        goto label_0433e6ff;
      }
label_0433e5c0:
      pGVar2 = (pMVar9->fields)._gameManager;
      if (((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pSVar3 = (pGVar2->fields).SelectedObjects,
          pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
         (pUVar8 = (pMVar9->fields)._transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
        fVar14 = (float)(pSVar3->fields)._count;
        value_05.fields.z = in_stack_fffffffffffffebc / fVar14;
        auVar5._4_4_ = fVar14;
        auVar5._0_4_ = fVar14;
        auVar5._8_8_ = 0;
        auVar20 = divps(_auStack_120,auVar5);
        value_05.fields.x = (float)(int)auVar20._0_8_;
        value_05.fields.y = (float)(int)((ulong)auVar20._0_8_ >> 0x20);
        UnityEngine_Transform__set_position(pUVar8,value_05,(MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    } while( true );
  }
  UnityEngine_Transform__set_rotation
            (pUVar8,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
             (MethodInfo *)0x0);
  pGVar2 = (pMVar9->fields)._gameManager;
  if ((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_0433e632;
  System_Collections_Generic_HashSet_object___GetEnumerator(&SStack_110,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  in_stack_fffffffffffffebc = 0.0;
  _auStack_120 = ZEXT816(0);
  pSVar34 = SStack_110.fields._set;
label_0433e4f0:
  do {
    __this_01.fields._version = (int32_t)in_stack_fffffffffffffebc;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb0._0_8_;
    __this_01.fields._index = in_stack_fffffffffffffeb0._8_4_;
    __this_01.fields._current = (Il2CppObject *)pSVar34;
    bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffec0);
    if ((char)bVar7 == '\0') {
      __this_02.fields._version = (int32_t)in_stack_fffffffffffffebc;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb0._0_8_;
      __this_02.fields._index = in_stack_fffffffffffffeb0._8_4_;
      __this_02.fields._current = (Il2CppObject *)pSVar34;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffec0);
      goto label_0433e5c0;
    }
    if (SStack_110.fields._current == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_0433e614:
      il2cpp_runtime_helper_022b2c90();
label_0433e619:
      il2cpp_runtime_helper_022b2c90();
label_0433e61e:
      il2cpp_runtime_helper_022b2c90();
      goto label_0433e623;
    }
    if (*(void **)((long)SStack_110.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0)
    goto label_0433e614;
    pUVar8 = UnityEngine_GameObject__get_transform
                       (*(void **)((long)SStack_110.fields._current + 0x18),(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_0433e619;
    UVar33 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    auStack_120._0_4_ = (float)auStack_120._0_4_ + UVar33.fields.x;
    auStack_120._4_4_ = (float)auStack_120._4_4_ + UVar33.fields.y;
    fStack_118 = fStack_118 + extraout_XMM0_Dc_01;
    fStack_114 = fStack_114 + extraout_XMM0_Dd_01;
    in_stack_fffffffffffffebc = in_stack_fffffffffffffebc + UVar33.fields.z;
    pGVar2 = (pMVar9->fields)._gameManager;
    if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_0433e61e;
  } while ((pGVar2->fields).CurrentGizmoMode != 1);
  if (*(void **)((long)SStack_110.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0) {
label_0433e623:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar8 = (pMVar9->fields)._transform;
    __this_08 = UnityEngine_GameObject__get_transform
                          (*(void **)((long)SStack_110.fields._current + 0x18),(MethodInfo *)0x0);
    if (__this_08 != (UnityEngine_Transform_o *)0x0) {
      value_04 = UnityEngine_Transform__get_rotation(__this_08,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar8,value_04,(MethodInfo *)0x0);
        goto label_0433e4f0;
      }
      goto label_0433e62d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0433e62d:
  il2cpp_runtime_helper_022b2c90();
  goto label_0433e632;
}


// MapEditor.PositionGizmo$$CreatePlaneHandle
// il2cpp: UnityEngine_Transform_o* MapEditor_PositionGizmo__CreatePlaneHandle (MapEditor_PositionGizmo_o* __this, System_String_o* name, UnityEngine_Vector3_o axisMask, UnityEngine_Color_o color, const MethodInfo* method);
// 0x433d830

UnityEngine_Transform_o *
MapEditor_PositionGizmo__CreatePlaneHandle
          (MapEditor_PositionGizmo_o *__this,System_String_o *name,UnityEngine_Vector3_o axisMask,
          UnityEngine_Color_o color,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar4;
  UnityEngine_Vector3_array *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_MeshFilter_o *pUVar7;
  UnityEngine_Renderer_o *__this_05;
  UnityEngine_Mesh_o *pUVar8;
  UnityEngine_BoxCollider_o *pUVar9;
  MapEditor_PositionGizmo_o *__this_06;
  UnityEngine_Vector3_array *pUVar10;
  MapEditor_PositionGizmo_o *pMVar11;
  System_Int32_array *value;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Transform_o *extraout_RAX;
  UnityEngine_Transform_o *extraout_RAX_00;
  UnityEngine_Transform_o *__this_07;
  UnityEngine_Transform_o *extraout_RAX_01;
  long *plVar13;
  UnityEngine_Vector3_array *pUVar14;
  UnityEngine_Material_o *__this_08;
  MethodInfo *pMVar15;
  MapEditor_PositionGizmo_o *pMVar16;
  UnityEngine_Shader_o *unaff_R12;
  uint uVar17;
  float fVar21;
  float extraout_XMM0_Dc;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 extraout_var [12];
  undefined1 auVar19 [16];
  float extraout_XMM0_Dd;
  undefined1 auVar20 [16];
  ulong uVar22;
  uint uVar23;
  float fVar27;
  undefined8 in_XMM2_Qb;
  undefined1 auVar24 [16];
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Quaternion_o value_02;
  UnityEngine_Vector3_o value_03;
  UnityEngine_Vector3_o value_04;
  undefined1 auVar39 [12];
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o value_05;
  undefined1 in_stack_fffffffffffffe38 [12];
  float in_stack_fffffffffffffe44;
  System_Collections_Generic_HashSet_T__o *pSVar41;
  undefined1 auStack_198 [8];
  float fStack_190;
  float fStack_18c;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_188;
  MapEditor_PositionGizmo_o *pMStack_170;
  UnityEngine_Shader_o *pUStack_168;
  UnityEngine_Vector3_array *pUStack_160;
  MapEditor_PositionGizmo_o *pMStack_158;
  undefined8 uStack_150;
  UnityEngine_Vector3_array *pUStack_148;
  UnityEngine_Vector3_array *pUStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  UnityEngine_Material_o *pUStack_b8;
  UnityEngine_Vector3_array *pUStack_b0;
  MapEditor_PositionGizmo_o *pMStack_a8;
  UnityEngine_Vector3_array *pUStack_a0;
  UnityEngine_Shader_o *pUStack_98;
  undefined8 local_68;
  float local_58;
  float fStack_54;
  float local_38;
  
  auVar24._0_8_ = color.fields._0_8_;
  auVar24._8_8_ = in_XMM2_Qb;
  auVar26 = auVar24;
  if (g_data_057ae0c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_AddComponent_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&"MapEditor/Gizmo");
    g_data_057ae0c4 = '\x01';
  }
  pUVar5 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pUVar5,name,(MethodInfo *)0x0);
  pUVar14 = (UnityEngine_Vector3_array *)&TypeInfo_PhysicsLayer;
  pUVar10 = TypeInfo_PhysicsLayer;
  if (TypeInfo_PhysicsLayer->m_Items[0x10].fields.y == 0.0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
    UnityEngine_GameObject__set_layer
              ((UnityEngine_GameObject_o *)pUVar5,
               *(int32_t *)(*(long *)&TypeInfo_PhysicsLayer->m_Items[0xc].fields.z + 0x44),(MethodInfo *)0x0);
    pUVar10 = pUVar5;
    pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_4e09e30(pUVar6,(__this->fields)._transform,0,(MethodInfo *)0x0);
      pUVar10 = pUVar5;
      pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        local_58 = axisMask.fields.x;
        fStack_54 = axisMask.fields.y;
        UVar40.fields.x = local_58 * 8.0;
        UVar40.fields.y = fStack_54 * 8.0;
        UVar40.fields.z = axisMask.fields.z * 8.0;
        UnityEngine_Transform__set_localPosition(pUVar6,UVar40,(MethodInfo *)0x0);
        pUVar7 = (UnityEngine_MeshFilter_o *)
                 UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pUVar5,MethodInfo_MeshFilter_AddComponent_MeshFilter)
        ;
        pMVar15 = MethodInfo_MeshRenderer_AddComponent_MeshRenderer;
        pUVar10 = pUVar5;
        __this_05 = (UnityEngine_Renderer_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo_255A020 *)MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
        auVar26._0_12_ = ZEXT812(0x40c00000);
        auVar26._12_4_ = 0;
        pUVar8 = MapEditor_PositionGizmo__BuildQuadMesh
                           ((MapEditor_PositionGizmo_o *)pUVar10,axisMask,6.0,pMVar15);
        pUVar14 = (UnityEngine_Vector3_array *)0x0;
        if (pUVar7 != (UnityEngine_MeshFilter_o *)0x0) {
          UnityEngine_MeshFilter__set_sharedMesh(pUVar7,pUVar8,(MethodInfo *)0x0);
          unaff_R12 = UnityEngine_Shader__Find("MapEditor/Gizmo",(MethodInfo *)0x0);
          pUVar14 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
          pUVar10 = pUVar14;
          UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar14,unaff_R12,(MethodInfo *)0x0);
          if (pUVar14 != (UnityEngine_Vector3_array *)0x0) {
            local_38 = color.fields.b;
            value_00.fields.a = 0.4;
            value_00.fields.b = local_38;
            value_00.fields.r = (float)(int)auVar24._0_8_;
            value_00.fields.g = (float)(int)((ulong)auVar24._0_8_ >> 0x20);
            UnityEngine_Material__set_color((UnityEngine_Material_o *)pUVar14,value_00,(MethodInfo *)0x0);
            pUVar10 = pUVar14;
            UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)pUVar14,0xc27,(MethodInfo *)0x0);
            if (__this_05 != (UnityEngine_Renderer_o *)0x0) {
              UnityEngine_Renderer__set_sharedMaterial
                        (__this_05,(UnityEngine_Material_o *)pUVar14,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_shadowCastingMode(__this_05,0,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_receiveShadows(__this_05,0,(MethodInfo *)0x0);
              pUVar10 = pUVar5;
              pUVar9 = (UnityEngine_BoxCollider_o *)
                       UnityEngine_GameObject__AddComponent_object_
                                 ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_BoxCollider_AddComponent_BoxCollider);
              uVar17 = -(uint)(0.0 < axisMask.fields.z);
              uVar23 = uVar17 & 0x40c00000;
              auVar26 = ZEXT416(uVar23);
              if (pUVar9 != (UnityEngine_BoxCollider_o *)0x0) {
                value_03.fields.z = (float)(~uVar17 & 0x3f000000 | uVar23);
                value_03.fields.x =
                     (float)(~-(uint)(0.0 < local_58) & 0x3f000000 | -(uint)(0.0 < local_58) & 0x40c00000);
                value_03.fields.y =
                     (float)(~-(uint)(0.0 < fStack_54) & 0x3f000000 | -(uint)(0.0 < fStack_54) & 0x40c00000);
                UnityEngine_BoxCollider__set_size(pUVar9,value_03,(MethodInfo *)0x0);
                if (g_data_057a65d5 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a65d5 = '\x01';
                }
                UnityEngine_BoxCollider__set_center
                          (pUVar9,(UnityEngine_Vector3_o)
                                  **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0);
                pUVar6 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
                return pUVar6;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_a0 = pUVar14;
  pUStack_98 = unaff_R12;
  if (g_data_057ae0c3 == '\0') {
    pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433db81;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433db8d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_AddComponent_MeshFilter);
    pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433db99;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
    pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dba5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dbb1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dbbd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dbc9;
    il2cpp_runtime_helper_023445d0(&"CenterSquare");
    pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dbd5;
    il2cpp_runtime_helper_023445d0(&"MapEditor/Gizmo");
    g_data_057ae0c3 = '\x01';
  }
  pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dbeb;
  __this_06 = (MapEditor_PositionGizmo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dc02;
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_06,"CenterSquare",(MethodInfo *)0x0);
  __this_08 = (UnityEngine_Material_o *)&TypeInfo_PhysicsLayer;
  if (TypeInfo_PhysicsLayer->m_Items[0x10].fields.y == 0.0) {
    pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dc1a;
    il2cpp_runtime_helper_02337ed0();
  }
  if (__this_06 != (MapEditor_PositionGizmo_o *)0x0) {
    pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dc3a;
    UnityEngine_GameObject__set_layer
              ((UnityEngine_GameObject_o *)__this_06,
               *(int32_t *)(*(long *)&TypeInfo_PhysicsLayer->m_Items[0xc].fields.z + 0x44),(MethodInfo *)0x0);
    pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dc44;
    pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_06,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dc5d;
      UnityEngine_Transform__SetParent_4e09e30
                (pUVar6,*(UnityEngine_Transform_o **)&pUVar10->m_Items[0].fields.z,0,(MethodInfo *)0x0);
      pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dc67;
      pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_06,(MethodInfo *)0x0);
      if (g_data_057a65d5 == '\0') {
        pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dc7f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      __this_08 = (UnityEngine_Material_o *)0x0;
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dcb4;
        UnityEngine_Transform__set_localPosition
                  (pUVar6,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                   (MethodInfo *)0x0);
        pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dcc6;
        pUVar7 = (UnityEngine_MeshFilter_o *)
                 UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)__this_06,MethodInfo_MeshFilter_AddComponent_MeshFilter);
        pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dcdb;
        pMVar15 = MethodInfo_MeshRenderer_AddComponent_MeshRenderer;
        pMVar16 = __this_06;
        pUVar10 = (UnityEngine_Vector3_array *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this_06,(MethodInfo_255A020 *)MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
        auVar26._0_12_ = ZEXT812(0x40c00000);
        auVar26._12_4_ = 0;
        pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dcf5;
        pUVar8 = MapEditor_PositionGizmo__BuildQuadMesh
                           (pMVar16,(UnityEngine_Vector3_o)ZEXT812(0x3f8000003f800000),6.0,pMVar15);
        __this_08 = (UnityEngine_Material_o *)0x0;
        if (pUVar7 != (UnityEngine_MeshFilter_o *)0x0) {
          pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dd0b;
          UnityEngine_MeshFilter__set_sharedMesh(pUVar7,pUVar8,(MethodInfo *)0x0);
          pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dd1c;
          unaff_R12 = UnityEngine_Shader__Find("MapEditor/Gizmo",(MethodInfo *)0x0);
          pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dd2e;
          __this_08 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
          pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dd3e;
          UnityEngine_Material___ctor(__this_08,unaff_R12,(MethodInfo *)0x0);
          if (__this_08 != (UnityEngine_Material_o *)0x0) {
            pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dd5f;
            value_01.fields.b = 1.0;
            value_01.fields.a = 0.5;
            value_01.fields.r = 1.0;
            value_01.fields.g = 1.0;
            UnityEngine_Material__set_color(__this_08,value_01,(MethodInfo *)0x0);
            pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dd6e;
            UnityEngine_Material__set_renderQueue(__this_08,0xc28,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_Vector3_array *)0x0) {
              pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dd84;
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)pUVar10,__this_08,(MethodInfo *)0x0);
              pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dd90;
              UnityEngine_Renderer__set_shadowCastingMode
                        ((UnityEngine_Renderer_o *)pUVar10,0,(MethodInfo *)0x0);
              pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dd9c;
              UnityEngine_Renderer__set_receiveShadows((UnityEngine_Renderer_o *)pUVar10,0,(MethodInfo *)0x0);
              pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433ddae;
              pUVar9 = (UnityEngine_BoxCollider_o *)
                       UnityEngine_GameObject__AddComponent_object_
                                 ((UnityEngine_GameObject_o *)__this_06,MethodInfo_BoxCollider_AddComponent_BoxCollider);
              if (pUVar9 != (UnityEngine_BoxCollider_o *)0x0) {
                pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433ddcf;
                value_04.fields.z = 0.5;
                value_04.fields.x = 6.0;
                value_04.fields.y = 6.0;
                UnityEngine_BoxCollider__set_size(pUVar9,value_04,(MethodInfo *)0x0);
                if (g_data_057a65d5 == '\0') {
                  pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433dde4;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a65d5 = '\x01';
                }
                pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433de09;
                UnityEngine_BoxCollider__set_center
                          (pUVar9,(UnityEngine_Vector3_o)
                                  **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0);
                pUVar6 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)__this_06,(MethodInfo *)0x0);
                return pUVar6;
              }
            }
          }
        }
      }
    }
  }
  pMStack_a8 = (MapEditor_PositionGizmo_o *)0x433de21;
  auVar39 = il2cpp_runtime_helper_022b2c90();
  auStack_c8 = auVar26;
  pUStack_b8 = __this_08;
  pUStack_b0 = pUVar10;
  pMStack_a8 = __this_06;
  if (g_data_057ae0c5 == '\0') {
    uStack_120 = extraout_XMM0_Qb;
    auStack_128 = (undefined1  [8])auVar39._0_8_;
    auStack_138._0_4_ = auVar39._8_4_;
    pUStack_140 = (UnityEngine_Vector3_array *)0x433de60;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    pUStack_140 = (UnityEngine_Vector3_array *)0x433de6c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
    pUStack_140 = (UnityEngine_Vector3_array *)0x433de78;
    il2cpp_runtime_helper_023445d0(&fld_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7646C4E94);
    pUStack_140 = (UnityEngine_Vector3_array *)0x433de84;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    auVar39._8_4_ = auStack_138._0_4_;
    auVar39._0_8_ = auStack_128;
    g_data_057ae0c5 = '\x01';
  }
  fVar31 = 0.0;
  if ((auVar39._0_4_ <= 0.0) || (auVar39._4_4_ <= 0.0)) {
    auStack_e8 = _DAT_00d1ca10;
    if (auVar39._8_4_ <= 0.0) {
      auStack_e8._0_12_ = ZEXT812(0x3f800000);
      auStack_e8._12_4_ = 0;
    }
    if (auVar39._4_4_ <= 0.0) {
      auStack_e8._0_12_ = ZEXT812(0x3f800000);
      auStack_e8._12_4_ = 0;
    }
    fStack_f4 = 0.0;
    fVar31 = 1.0;
  }
  else {
    fStack_f4 = 1.0;
    auStack_e8._0_12_ = ZEXT812(0x3f800000);
    auStack_e8._12_4_ = 0;
  }
  auStack_d8 = ZEXT416((uint)fVar31);
  fVar34 = auStack_e8._4_4_;
  fVar27 = auStack_e8._8_4_ * 0.0;
  fVar28 = auStack_e8._12_4_ * 0.0;
  fVar32 = fVar31 * auStack_e8._0_4_;
  auVar29._0_4_ = fStack_f4 * auStack_e8._0_4_;
  auVar29._4_4_ = fStack_f4;
  auVar29._8_8_ = 0;
  fStack_f8 = 0.0;
  uStack_f0 = 0;
  uStack_ec = 0;
  fVar21 = fStack_f4 * 0.0;
  fVar35 = 0.0;
  fVar36 = 0.0;
  fVar37 = fVar34 * 0.0;
  fVar38 = fVar31 * fVar34;
  fVar33 = 0.0;
  if (g_data_057a6845 == '\0') {
    auStack_128._4_4_ = 0;
    auStack_128._0_4_ = fVar31 * fVar34;
    uStack_120._0_4_ = fVar27;
    uStack_120._4_4_ = fVar28;
    pUStack_140 = (UnityEngine_Vector3_array *)0x433df6c;
    auStack_138 = auVar29;
    fStack_118 = fStack_f4 * 0.0;
    fStack_114 = fVar32;
    fStack_110 = 0.0;
    fStack_10c = 0.0;
    fStack_108 = fVar34 * 0.0;
    fStack_104 = fVar34;
    fStack_100 = auStack_e8._8_4_;
    fStack_fc = auStack_e8._12_4_;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    auVar29 = auStack_138;
    fVar21 = fStack_118;
    fVar32 = fStack_114;
    fVar35 = fStack_110;
    fVar36 = fStack_10c;
    fVar37 = fStack_108;
    fVar38 = (float)auStack_128._0_4_;
    fVar33 = (float)auStack_128._4_4_;
    fVar27 = (float)uStack_120;
    fVar28 = uStack_120._4_4_;
  }
  auVar25._0_4_ = fVar38 - fVar21;
  auVar25._4_4_ = fVar33 - fVar32;
  auVar25._8_4_ = fVar27 - fVar35;
  auVar25._12_4_ = fVar28 - fVar36;
  auVar30._4_12_ = auVar29._4_12_;
  auVar30._0_4_ = auVar29._0_4_ - fVar37;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    pUStack_140 = (UnityEngine_Vector3_array *)0x433dfae;
    auStack_138 = auVar30;
    _auStack_128 = auVar25;
    il2cpp_runtime_helper_02337ed0();
    auVar25 = _auStack_128;
    auVar30 = auStack_138;
  }
  auVar18._4_12_ = auVar30._4_12_;
  fVar31 = auVar30._0_4_ * auVar30._0_4_ + auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_;
  if (fVar31 < 0.0) {
    pUStack_140 = (UnityEngine_Vector3_array *)0x433e037;
    auStack_138 = auVar30;
    _auStack_128 = auVar25;
    auVar18._0_4_ = sqrtf(fVar31);
    auVar18._4_12_ = extraout_var;
    auVar25 = _auStack_128;
    auVar30 = auStack_138;
    if (1e-05 < auVar18._0_4_) goto label_0433e049;
label_0433dfe8:
    if (g_data_057a65d5 == '\0') {
      pUStack_140 = (UnityEngine_Vector3_array *)0x433dffd;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uStack_120 = 0;
    auStack_128 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
    auStack_138 = ZEXT416((uint)(*(ulong **)(TypeInfo_Vector3 + 0xb8))[1]);
  }
  else {
    auVar18._0_4_ = SQRT(fVar31);
    if (auVar18._0_4_ <= 1e-05) goto label_0433dfe8;
label_0433e049:
    auVar19._0_4_ = auVar18._0_4_;
    auStack_138._4_12_ = auVar30._4_12_;
    auStack_138._0_4_ = auVar30._0_4_ / auVar19._0_4_;
    auVar19._8_4_ = auVar18._8_4_;
    auVar19._12_4_ = auVar18._12_4_;
    auVar19._4_4_ = auVar19._0_4_;
    _auStack_128 = divps(auVar25,auVar19);
  }
  pUStack_140 = (UnityEngine_Vector3_array *)0x433e071;
  pMVar16 = TypeInfo_Vector3;
  pUVar14 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
  pUStack_148 = (UnityEngine_Vector3_array *)&TypeInfo_Vector3;
  if (pUVar14 == (UnityEngine_Vector3_array *)0x0) goto label_0433e2e5;
  uVar17 = (uint)pUVar14->max_length;
  pUVar5 = (UnityEngine_Vector3_array *)&TypeInfo_Vector3;
  pUVar10 = pUVar14;
  if (uVar17 == 0) {
label_0433e2e0:
    pUStack_140 = (UnityEngine_Vector3_array *)0x433e2e5;
    il2cpp_runtime_helper_022b2ca0();
    pUStack_148 = pUVar5;
  }
  else {
    fVar37 = (float)auStack_c8._0_4_ * 0.5;
    fVar35 = (float)auStack_e8._0_4_ * fVar37;
    fVar36 = (float)auStack_e8._4_4_ * fVar37;
    fVar31 = fVar37 * fStack_f8;
    fVar21 = fVar37 * fStack_f4;
    fVar32 = auStack_d8._0_4_ * fVar37;
    fVar38 = fVar37 * -0.0 - fVar32;
    pUVar14->m_Items[0].fields.x = -fVar35 - fVar31;
    pUVar14->m_Items[0].fields.y = -fVar36 - fVar21;
    pUVar14->m_Items[0].fields.z = fVar38;
    if (uVar17 == 1) goto label_0433e2e0;
    fVar33 = fVar37 * 0.0 - fVar32;
    pUVar14->m_Items[1].fields.x = fVar35 - fVar31;
    pUVar14->m_Items[1].fields.y = fVar36 - fVar21;
    pUVar14->m_Items[1].fields.z = fVar33;
    if (uVar17 < 3) goto label_0433e2e0;
    fVar27 = fVar37 * 0.0 + fVar32;
    pUVar14->m_Items[2].fields.x = fVar35 + fVar31;
    pUVar14->m_Items[2].fields.y = fVar36 + fVar21;
    pUVar14->m_Items[2].fields.z = fVar27;
    if (uVar17 == 3) goto label_0433e2e0;
    fVar32 = fVar37 * -0.0 + fVar32;
    pUVar14->m_Items[3].fields.x = fVar31 - fVar35;
    pUVar14->m_Items[3].fields.y = fVar21 - fVar36;
    pUVar14->m_Items[3].fields.z = fVar32;
    if (uVar17 < 5) goto label_0433e2e0;
    pUVar14->m_Items[4].fields.x = -fVar35 - fVar31;
    pUVar14->m_Items[4].fields.y = -fVar36 - fVar21;
    pUVar14->m_Items[4].fields.z = fVar38;
    if (uVar17 == 5) goto label_0433e2e0;
    pUVar14->m_Items[5].fields.x = fVar35 - fVar31;
    pUVar14->m_Items[5].fields.y = fVar36 - fVar21;
    pUVar14->m_Items[5].fields.z = fVar33;
    if (uVar17 < 7) goto label_0433e2e0;
    pUVar14->m_Items[6].fields.x = fVar35 + fVar31;
    pUVar14->m_Items[6].fields.y = fVar36 + fVar21;
    pUVar14->m_Items[6].fields.z = fVar27;
    if (uVar17 == 7) goto label_0433e2e0;
    pUVar14->m_Items[7].fields.x = fVar31 - fVar35;
    pUVar14->m_Items[7].fields.y = fVar21 - fVar36;
    pUVar14->m_Items[7].fields.z = fVar32;
    pUStack_140 = (UnityEngine_Vector3_array *)0x433e19f;
    pMVar16 = TypeInfo_Vector3;
    pUVar5 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
    if (pUVar5 != (UnityEngine_Vector3_array *)0x0) {
      uVar17 = (uint)pUVar5->max_length;
      if (uVar17 != 0) {
        pUVar5->m_Items[0].fields.x = (float)auStack_128._0_4_;
        pUVar5->m_Items[0].fields.y = (float)auStack_128._4_4_;
        fVar31 = auStack_138._0_4_;
        pUVar5->m_Items[0].fields.z = fVar31;
        if (uVar17 != 1) {
          pUVar5->m_Items[1].fields.x = (float)auStack_128._0_4_;
          pUVar5->m_Items[1].fields.y = (float)auStack_128._4_4_;
          pUVar5->m_Items[1].fields.z = fVar31;
          if (2 < uVar17) {
            pUVar5->m_Items[2].fields.x = (float)auStack_128._0_4_;
            pUVar5->m_Items[2].fields.y = (float)auStack_128._4_4_;
            pUVar5->m_Items[2].fields.z = fVar31;
            if (uVar17 != 3) {
              pUVar5->m_Items[3].fields.x = (float)auStack_128._0_4_;
              pUVar5->m_Items[3].fields.y = (float)auStack_128._4_4_;
              pUVar5->m_Items[3].fields.z = fVar31;
              if (4 < uVar17) {
                uVar22 = auStack_128 ^ 0x8000000080000000;
                fVar31 = -fVar31;
                pUVar5->m_Items[4].fields.x = (float)(int)uVar22;
                pUVar5->m_Items[4].fields.y = (float)(int)(uVar22 >> 0x20);
                pUVar5->m_Items[4].fields.z = fVar31;
                if (uVar17 != 5) {
                  pUVar5->m_Items[5].fields.x = (float)(int)uVar22;
                  pUVar5->m_Items[5].fields.y = (float)(int)(uVar22 >> 0x20);
                  pUVar5->m_Items[5].fields.z = fVar31;
                  if (6 < uVar17) {
                    pUVar5->m_Items[6].fields.x = (float)(int)uVar22;
                    pUVar5->m_Items[6].fields.y = (float)(int)(uVar22 >> 0x20);
                    pUVar5->m_Items[6].fields.z = fVar31;
                    if (uVar17 != 7) {
                      pUVar5->m_Items[7].fields.x = (float)(int)uVar22;
                      pUVar5->m_Items[7].fields.y = (float)(int)(uVar22 >> 0x20);
                      pUVar5->m_Items[7].fields.z = fVar31;
                      pUStack_140 = (UnityEngine_Vector3_array *)0x433e262;
                      pMVar11 = (MapEditor_PositionGizmo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
                      pUStack_140 = (UnityEngine_Vector3_array *)0x433e26f;
                      pMVar16 = pMVar11;
                      UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pMVar11,(MethodInfo *)0x0);
                      __this_06 = (MapEditor_PositionGizmo_o *)0x0;
                      pUStack_148 = pUVar5;
                      if (pMVar11 != (MapEditor_PositionGizmo_o *)0x0) {
                        pUStack_140 = (UnityEngine_Vector3_array *)0x433e281;
                        UnityEngine_Mesh__set_vertices
                                  ((UnityEngine_Mesh_o *)pMVar11,pUVar14,(MethodInfo *)0x0);
                        pUStack_140 = (UnityEngine_Vector3_array *)0x433e28e;
                        UnityEngine_Mesh__set_normals((UnityEngine_Mesh_o *)pMVar11,pUVar5,(MethodInfo *)0x0);
                        pUStack_140 = (UnityEngine_Vector3_array *)0x433e2a2;
                        value = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int,0xc);
                        pUStack_140 = (UnityEngine_Vector3_array *)0x433e2b9;
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                  ((System_Array_o *)value,fld_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7646C4E94,(MethodInfo *)0x0);
                        pUStack_140 = (UnityEngine_Vector3_array *)0x433e2c6;
                        UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)pMVar11,value,(MethodInfo *)0x0)
                        ;
                        pUStack_140 = (UnityEngine_Vector3_array *)0x433e2d0;
                        UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)pMVar11,(MethodInfo *)0x0);
                        return (UnityEngine_Transform_o *)pMVar11;
                      }
                      goto label_0433e2e5;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_0433e2e0;
    }
  }
label_0433e2e5:
  pUStack_140 = (UnityEngine_Vector3_array *)0x433e2ea;
  uStack_150 = il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar16;
  pUStack_140 = pUVar10;
  if (g_data_057ae0c6 == '\0') {
    pMStack_158 = (MapEditor_PositionGizmo_o *)0x433e30c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMVar11 = (MapEditor_PositionGizmo_o *)&TypeInfo_Object;
    pMStack_158 = (MapEditor_PositionGizmo_o *)0x433e318;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0c6 = '\x01';
  }
  pGVar1 = (pMVar16->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).SelectedObjects,
     pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if (0 < (pSVar2->fields)._count) {
      pUVar10 = (UnityEngine_Vector3_array *)(pGVar1->fields).CurrentGizmo;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_158 = (MapEditor_PositionGizmo_o *)0x433e35b;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_158 = (MapEditor_PositionGizmo_o *)0x433e368;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)pMVar16,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pMStack_158 = (MapEditor_PositionGizmo_o *)0x433e376;
        pMVar11 = pMVar16;
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar16,(MethodInfo *)0x0);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pMVar15 = (MethodInfo *)0x1;
          pMStack_158 = (MapEditor_PositionGizmo_o *)0x433e38a;
          UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
          pMStack_158 = (MapEditor_PositionGizmo_o *)0x433e392;
          MapEditor_PositionGizmo__ResetCenter(pMVar16,pMVar15);
          MapEditor_PositionGizmo__ResetColors(pMVar16,pMVar15);
          return extraout_RAX;
        }
        goto label_0433e3c3;
      }
    }
    pMStack_158 = (MapEditor_PositionGizmo_o *)0x433e3ab;
    pMVar11 = pMVar16;
    pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar16,(MethodInfo *)0x0);
    if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
label_0433e3c3:
  pMStack_158 = (MapEditor_PositionGizmo_o *)0x433e3c8;
  il2cpp_runtime_helper_022b2c90();
  pMStack_170 = pMVar16;
  pUStack_168 = unaff_R12;
  pUStack_160 = pUVar10;
  pMStack_158 = __this_06;
  if (g_data_057ae0d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ae0d1 = '\x01';
  }
  pSVar41 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pUVar6 = (pMVar11->fields)._transform;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
label_0433e632:
    do {
      auVar39 = il2cpp_runtime_helper_022b2c90();
      if (auVar39._8_4_ != 1) {
label_0433e6ff:
        __this_04.fields._version = (int32_t)in_stack_fffffffffffffe44;
        __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe38._0_8_;
        __this_04.fields._index = in_stack_fffffffffffffe38._8_4_;
        __this_04.fields._current = (Il2CppObject *)pSVar41;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffe48);
        _Unwind_Resume(auVar39._0_8_);
      }
      plVar13 = (long *)__cxa_begin_catch(auVar39._0_8_);
      lVar3 = *plVar13;
      __cxa_end_catch();
      __this_03.fields._version = (int32_t)in_stack_fffffffffffffe44;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe38._0_8_;
      __this_03.fields._index = in_stack_fffffffffffffe38._8_4_;
      __this_03.fields._current = (Il2CppObject *)pSVar41;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffe48);
      if (lVar3 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar3);
        goto label_0433e6ff;
      }
label_0433e5c0:
      pGVar1 = (pMVar11->fields)._gameManager;
      if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pSVar2 = (pGVar1->fields).SelectedObjects,
          pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
         (pUVar6 = (pMVar11->fields)._transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        auVar20._0_4_ = (float)(pSVar2->fields)._count;
        value_05.fields.z = in_stack_fffffffffffffe44 / auVar20._0_4_;
        auVar20._4_4_ = auVar20._0_4_;
        auVar20._8_8_ = 0;
        auVar26 = divps(_auStack_198,auVar20);
        value_05.fields._0_8_ = auVar26._0_8_;
        UnityEngine_Transform__set_position(pUVar6,value_05,(MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    } while( true );
  }
  UnityEngine_Transform__set_rotation
            (pUVar6,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
             (MethodInfo *)0x0);
  pGVar1 = (pMVar11->fields)._gameManager;
  if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_0433e632;
  System_Collections_Generic_HashSet_object___GetEnumerator(&SStack_188,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  in_stack_fffffffffffffe44 = 0.0;
  _auStack_198 = ZEXT816(0);
  pSVar41 = SStack_188.fields._set;
label_0433e4f0:
  do {
    __this_01.fields._version = (int32_t)in_stack_fffffffffffffe44;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe38._0_8_;
    __this_01.fields._index = in_stack_fffffffffffffe38._8_4_;
    __this_01.fields._current = (Il2CppObject *)pSVar41;
    bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffe48);
    if ((char)bVar4 == '\0') {
      __this_02.fields._version = (int32_t)in_stack_fffffffffffffe44;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffe38._0_8_;
      __this_02.fields._index = in_stack_fffffffffffffe38._8_4_;
      __this_02.fields._current = (Il2CppObject *)pSVar41;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffe48);
      goto label_0433e5c0;
    }
    if (SStack_188.fields._current == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_0433e614:
      il2cpp_runtime_helper_022b2c90();
label_0433e619:
      il2cpp_runtime_helper_022b2c90();
label_0433e61e:
      il2cpp_runtime_helper_022b2c90();
      goto label_0433e623;
    }
    if (*(void **)((long)SStack_188.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0)
    goto label_0433e614;
    pUVar6 = UnityEngine_GameObject__get_transform
                       (*(void **)((long)SStack_188.fields._current + 0x18),(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0433e619;
    UVar40 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    auStack_198._0_4_ = (float)auStack_198._0_4_ + UVar40.fields.x;
    auStack_198._4_4_ = (float)auStack_198._4_4_ + UVar40.fields.y;
    fStack_190 = fStack_190 + extraout_XMM0_Dc;
    fStack_18c = fStack_18c + extraout_XMM0_Dd;
    in_stack_fffffffffffffe44 = in_stack_fffffffffffffe44 + UVar40.fields.z;
    pGVar1 = (pMVar11->fields)._gameManager;
    if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_0433e61e;
  } while ((pGVar1->fields).CurrentGizmoMode != 1);
  if (*(void **)((long)SStack_188.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0) {
label_0433e623:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar6 = (pMVar11->fields)._transform;
    __this_07 = UnityEngine_GameObject__get_transform
                          (*(void **)((long)SStack_188.fields._current + 0x18),(MethodInfo *)0x0);
    if (__this_07 != (UnityEngine_Transform_o *)0x0) {
      value_02 = UnityEngine_Transform__get_rotation(__this_07,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar6,value_02,(MethodInfo *)0x0);
        goto label_0433e4f0;
      }
      goto label_0433e62d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0433e62d:
  il2cpp_runtime_helper_022b2c90();
  goto label_0433e632;
}


// MapEditor.PositionGizmo$$BuildQuadMesh
// il2cpp: UnityEngine_Mesh_o* MapEditor_PositionGizmo__BuildQuadMesh (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o axisMask, float size, const MethodInfo* method);
// 0x433de30

UnityEngine_Mesh_o *
MapEditor_PositionGizmo__BuildQuadMesh
          (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o axisMask,float size,MethodInfo *method)

{
  uint uVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  MapEditor_BaseGizmo_o *x;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar7;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector3_array *value_00;
  MapEditor_PositionGizmo_o *pMVar8;
  System_Int32_array *value_01;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Mesh_o *extraout_RAX;
  UnityEngine_Mesh_o *extraout_RAX_00;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o *__this_05;
  UnityEngine_Mesh_o *extraout_RAX_01;
  long *plVar11;
  MethodInfo *method_00;
  MapEditor_PositionGizmo_o *__this_06;
  float fVar12;
  float fVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar14;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar15;
  float extraout_XMM0_Dd_00;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Quaternion_o value_02;
  undefined1 auVar26 [12];
  UnityEngine_Vector3_o UVar27;
  undefined1 in_stack_fffffffffffffed8 [12];
  float in_stack_fffffffffffffee4;
  System_Collections_Generic_HashSet_T__o *pSVar28;
  undefined1 auStack_f8 [8];
  float fStack_f0;
  float fStack_ec;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_e8;
  MapEditor_PositionGizmo_o *pMStack_d0;
  undefined8 local_88;
  
  if (g_data_057ae0c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
    il2cpp_runtime_helper_023445d0(&fld_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7646C4E94);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ae0c5 = '\x01';
  }
  fVar19 = 0.0;
  if ((axisMask.fields.x <= 0.0) || (axisMask.fields.y <= 0.0)) {
    auVar17 = _DAT_00d1ca10;
    if (axisMask.fields.z <= 0.0) {
      auVar17._0_12_ = ZEXT812(0x3f800000);
      auVar17._12_4_ = 0;
    }
    if (axisMask.fields.y <= 0.0) {
      auVar17._0_12_ = ZEXT812(0x3f800000);
      auVar17._12_4_ = 0;
    }
    fVar13 = 0.0;
    fVar19 = 1.0;
  }
  else {
    fVar13 = 1.0;
    auVar17._0_12_ = ZEXT812(0x3f800000);
    auVar17._12_4_ = 0;
  }
  fVar21 = auVar17._0_4_;
  fVar22 = auVar17._4_4_;
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
  }
  auVar16._0_4_ = fVar19 * fVar22 - fVar13 * 0.0;
  auVar16._4_4_ = 0.0 - fVar19 * fVar21;
  auVar16._8_4_ = auVar17._8_4_ * 0.0 - 0.0;
  auVar16._12_4_ = auVar17._12_4_ * 0.0 - 0.0;
  fVar18 = fVar13 * fVar21 - fVar22 * 0.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar14 = 0;
  uVar15 = 0;
  fVar12 = fVar18 * fVar18 + auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_;
  if (fVar12 < 0.0) {
    fVar12 = sqrtf(fVar12);
    uVar14 = extraout_XMM0_Dc;
    uVar15 = extraout_XMM0_Dd;
    if (1e-05 < fVar12) goto label_0433e049;
label_0433dfe8:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    local_88 = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar18 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar12 = SQRT(fVar12);
    if (fVar12 <= 1e-05) goto label_0433dfe8;
label_0433e049:
    fVar18 = fVar18 / fVar12;
    auVar6._4_4_ = fVar12;
    auVar6._0_4_ = fVar12;
    auVar6._8_4_ = uVar14;
    auVar6._12_4_ = uVar15;
    auVar17 = divps(auVar16,auVar6);
    local_88 = auVar17._0_8_;
  }
  __this_06 = TypeInfo_Vector3;
  value = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
  if (value == (UnityEngine_Vector3_array *)0x0) goto label_0433e2e5;
  uVar1 = (uint)value->max_length;
  if (uVar1 == 0) {
label_0433e2e0:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    fVar23 = size * 0.5;
    fVar21 = fVar21 * fVar23;
    fVar22 = fVar22 * fVar23;
    fVar12 = fVar23 * 0.0;
    fVar13 = fVar23 * fVar13;
    fVar19 = fVar19 * fVar23;
    fVar25 = fVar23 * -0.0 - fVar19;
    value->m_Items[0].fields.x = -fVar21 - fVar12;
    value->m_Items[0].fields.y = -fVar22 - fVar13;
    value->m_Items[0].fields.z = fVar25;
    if (uVar1 == 1) goto label_0433e2e0;
    fVar20 = fVar23 * 0.0 - fVar19;
    value->m_Items[1].fields.x = fVar21 - fVar12;
    value->m_Items[1].fields.y = fVar22 - fVar13;
    value->m_Items[1].fields.z = fVar20;
    if (uVar1 < 3) goto label_0433e2e0;
    fVar24 = fVar23 * 0.0 + fVar19;
    value->m_Items[2].fields.x = fVar21 + fVar12;
    value->m_Items[2].fields.y = fVar22 + fVar13;
    value->m_Items[2].fields.z = fVar24;
    if (uVar1 == 3) goto label_0433e2e0;
    fVar19 = fVar23 * -0.0 + fVar19;
    value->m_Items[3].fields.x = fVar12 - fVar21;
    value->m_Items[3].fields.y = fVar13 - fVar22;
    value->m_Items[3].fields.z = fVar19;
    if (uVar1 < 5) goto label_0433e2e0;
    value->m_Items[4].fields.x = -fVar21 - fVar12;
    value->m_Items[4].fields.y = -fVar22 - fVar13;
    value->m_Items[4].fields.z = fVar25;
    if (uVar1 == 5) goto label_0433e2e0;
    value->m_Items[5].fields.x = fVar21 - fVar12;
    value->m_Items[5].fields.y = fVar22 - fVar13;
    value->m_Items[5].fields.z = fVar20;
    if (uVar1 < 7) goto label_0433e2e0;
    value->m_Items[6].fields.x = fVar21 + fVar12;
    value->m_Items[6].fields.y = fVar22 + fVar13;
    value->m_Items[6].fields.z = fVar24;
    if (uVar1 == 7) goto label_0433e2e0;
    value->m_Items[7].fields.x = fVar12 - fVar21;
    value->m_Items[7].fields.y = fVar13 - fVar22;
    value->m_Items[7].fields.z = fVar19;
    __this_06 = TypeInfo_Vector3;
    value_00 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
    if (value_00 != (UnityEngine_Vector3_array *)0x0) {
      uVar1 = (uint)value_00->max_length;
      if (uVar1 != 0) {
        value_00->m_Items[0].fields.x = (float)local_88;
        value_00->m_Items[0].fields.y = local_88._4_4_;
        value_00->m_Items[0].fields.z = fVar18;
        if (uVar1 != 1) {
          value_00->m_Items[1].fields.x = (float)local_88;
          value_00->m_Items[1].fields.y = local_88._4_4_;
          value_00->m_Items[1].fields.z = fVar18;
          if (2 < uVar1) {
            value_00->m_Items[2].fields.x = (float)local_88;
            value_00->m_Items[2].fields.y = local_88._4_4_;
            value_00->m_Items[2].fields.z = fVar18;
            if (uVar1 != 3) {
              value_00->m_Items[3].fields.x = (float)local_88;
              value_00->m_Items[3].fields.y = local_88._4_4_;
              value_00->m_Items[3].fields.z = fVar18;
              if (4 < uVar1) {
                local_88 = local_88 ^ 0x8000000080000000;
                fVar18 = -fVar18;
                value_00->m_Items[4].fields.x = (float)(int)local_88;
                value_00->m_Items[4].fields.y = (float)(int)(local_88 >> 0x20);
                value_00->m_Items[4].fields.z = fVar18;
                if (uVar1 != 5) {
                  value_00->m_Items[5].fields.x = (float)(int)local_88;
                  value_00->m_Items[5].fields.y = (float)(int)(local_88 >> 0x20);
                  value_00->m_Items[5].fields.z = fVar18;
                  if (6 < uVar1) {
                    value_00->m_Items[6].fields.x = (float)(int)local_88;
                    value_00->m_Items[6].fields.y = (float)(int)(local_88 >> 0x20);
                    value_00->m_Items[6].fields.z = fVar18;
                    if (uVar1 != 7) {
                      value_00->m_Items[7].fields.x = (float)(int)local_88;
                      value_00->m_Items[7].fields.y = (float)(int)(local_88 >> 0x20);
                      value_00->m_Items[7].fields.z = fVar18;
                      pMVar8 = (MapEditor_PositionGizmo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
                      __this_06 = pMVar8;
                      UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pMVar8,(MethodInfo *)0x0);
                      if (pMVar8 != (MapEditor_PositionGizmo_o *)0x0) {
                        UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)pMVar8,value,(MethodInfo *)0x0);
                        UnityEngine_Mesh__set_normals((UnityEngine_Mesh_o *)pMVar8,value_00,(MethodInfo *)0x0)
                        ;
                        value_01 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int,0xc);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                  ((System_Array_o *)value_01,fld_FFCFE8C732FB2538B70629A852495F56B61798396E582AC7646C4E94,(MethodInfo *)0x0);
                        UnityEngine_Mesh__set_triangles
                                  ((UnityEngine_Mesh_o *)pMVar8,value_01,(MethodInfo *)0x0);
                        UnityEngine_Mesh__RecalculateBounds((UnityEngine_Mesh_o *)pMVar8,(MethodInfo *)0x0);
                        return (UnityEngine_Mesh_o *)pMVar8;
                      }
                      goto label_0433e2e5;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_0433e2e0;
    }
  }
label_0433e2e5:
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = __this_06;
  if (g_data_057ae0c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMVar8 = (MapEditor_PositionGizmo_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0c6 = '\x01';
  }
  pGVar2 = (__this_06->fields)._gameManager;
  if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).SelectedObjects,
     pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if (0 < (pSVar3->fields)._count) {
      x = (pGVar2->fields).CurrentGizmo;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this_06,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pMVar8 = __this_06;
        pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0)
        ;
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          method_00 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
          MapEditor_PositionGizmo__ResetCenter(__this_06,method_00);
          MapEditor_PositionGizmo__ResetColors(__this_06,method_00);
          return extraout_RAX;
        }
        goto label_0433e3c3;
      }
    }
    pMVar8 = __this_06;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
label_0433e3c3:
  il2cpp_runtime_helper_022b2c90();
  pMStack_d0 = __this_06;
  if (g_data_057ae0d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ae0d1 = '\x01';
  }
  pSVar28 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pUVar10 = (pMVar8->fields)._transform;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
label_0433e632:
    do {
      auVar26 = il2cpp_runtime_helper_022b2c90();
      if (auVar26._8_4_ != 1) {
label_0433e6ff:
        __this_04.fields._version = (int32_t)in_stack_fffffffffffffee4;
        __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffed8._0_8_;
        __this_04.fields._index = in_stack_fffffffffffffed8._8_4_;
        __this_04.fields._current = (Il2CppObject *)pSVar28;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffee8);
        _Unwind_Resume(auVar26._0_8_);
      }
      plVar11 = (long *)__cxa_begin_catch(auVar26._0_8_);
      lVar4 = *plVar11;
      __cxa_end_catch();
      __this_03.fields._version = (int32_t)in_stack_fffffffffffffee4;
      __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffed8._0_8_;
      __this_03.fields._index = in_stack_fffffffffffffed8._8_4_;
      __this_03.fields._current = (Il2CppObject *)pSVar28;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffee8);
      if (lVar4 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar4);
        goto label_0433e6ff;
      }
label_0433e5c0:
      pGVar2 = (pMVar8->fields)._gameManager;
      if (((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pSVar3 = (pGVar2->fields).SelectedObjects,
          pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
         (pUVar10 = (pMVar8->fields)._transform, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
        fVar19 = (float)(pSVar3->fields)._count;
        UVar27.fields.z = in_stack_fffffffffffffee4 / fVar19;
        auVar5._4_4_ = fVar19;
        auVar5._0_4_ = fVar19;
        auVar5._8_8_ = 0;
        auVar17 = divps(_auStack_f8,auVar5);
        UVar27.fields.x = (float)(int)auVar17._0_8_;
        UVar27.fields.y = (float)(int)((ulong)auVar17._0_8_ >> 0x20);
        UnityEngine_Transform__set_position(pUVar10,UVar27,(MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    } while( true );
  }
  UnityEngine_Transform__set_rotation
            (pUVar10,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
             (MethodInfo *)0x0);
  pGVar2 = (pMVar8->fields)._gameManager;
  if ((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_0433e632;
  System_Collections_Generic_HashSet_object___GetEnumerator(&SStack_e8,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  in_stack_fffffffffffffee4 = 0.0;
  _auStack_f8 = ZEXT816(0);
  pSVar28 = SStack_e8.fields._set;
label_0433e4f0:
  do {
    __this_01.fields._version = (int32_t)in_stack_fffffffffffffee4;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffed8._0_8_;
    __this_01.fields._index = in_stack_fffffffffffffed8._8_4_;
    __this_01.fields._current = (Il2CppObject *)pSVar28;
    bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffee8);
    if ((char)bVar7 == '\0') {
      __this_02.fields._version = (int32_t)in_stack_fffffffffffffee4;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffed8._0_8_;
      __this_02.fields._index = in_stack_fffffffffffffed8._8_4_;
      __this_02.fields._current = (Il2CppObject *)pSVar28;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffee8);
      goto label_0433e5c0;
    }
    if (SStack_e8.fields._current == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_0433e614:
      il2cpp_runtime_helper_022b2c90();
label_0433e619:
      il2cpp_runtime_helper_022b2c90();
label_0433e61e:
      il2cpp_runtime_helper_022b2c90();
      goto label_0433e623;
    }
    if (*(void **)((long)SStack_e8.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0)
    goto label_0433e614;
    pUVar10 = UnityEngine_GameObject__get_transform
                        (*(void **)((long)SStack_e8.fields._current + 0x18),(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_0433e619;
    UVar27 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    auStack_f8._0_4_ = (float)auStack_f8._0_4_ + UVar27.fields.x;
    auStack_f8._4_4_ = (float)auStack_f8._4_4_ + UVar27.fields.y;
    fStack_f0 = fStack_f0 + extraout_XMM0_Dc_00;
    fStack_ec = fStack_ec + extraout_XMM0_Dd_00;
    in_stack_fffffffffffffee4 = in_stack_fffffffffffffee4 + UVar27.fields.z;
    pGVar2 = (pMVar8->fields)._gameManager;
    if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_0433e61e;
  } while ((pGVar2->fields).CurrentGizmoMode != 1);
  if (*(void **)((long)SStack_e8.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0) {
label_0433e623:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar10 = (pMVar8->fields)._transform;
    __this_05 = UnityEngine_GameObject__get_transform
                          (*(void **)((long)SStack_e8.fields._current + 0x18),(MethodInfo *)0x0);
    if (__this_05 != (UnityEngine_Transform_o *)0x0) {
      value_02 = UnityEngine_Transform__get_rotation(__this_05,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar10,value_02,(MethodInfo *)0x0);
        goto label_0433e4f0;
      }
      goto label_0433e62d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0433e62d:
  il2cpp_runtime_helper_022b2c90();
  goto label_0433e632;
}


// MapEditor.PositionGizmo$$OnSelectionChange
// il2cpp: void MapEditor_PositionGizmo__OnSelectionChange (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x433e2f0

void MapEditor_PositionGizmo__OnSelectionChange(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

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
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *__this_05;
  long *plVar7;
  MethodInfo *method_00;
  MapEditor_PositionGizmo_o *pMVar8;
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
  MapEditor_PositionGizmo_o *pMStack_38;
  
  pMVar8 = __this;
  if (g_data_057ae0c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMVar8 = (MapEditor_PositionGizmo_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0c6 = '\x01';
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
          method_00 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
          MapEditor_PositionGizmo__ResetCenter(__this,method_00);
          MapEditor_PositionGizmo__ResetColors(__this,method_00);
          return;
        }
        goto label_0433e3c3;
      }
    }
    pMVar8 = __this;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      return;
    }
  }
label_0433e3c3:
  il2cpp_runtime_helper_022b2c90();
  pMStack_38 = __this;
  if (g_data_057ae0d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ae0d1 = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pUVar6 = (pMVar8->fields)._transform;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
label_0433e632:
    do {
      auVar11 = il2cpp_runtime_helper_022b2c90();
      if (auVar11._8_4_ != 1) {
label_0433e6ff:
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
        goto label_0433e6ff;
      }
label_0433e5c0:
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
  UnityEngine_Transform__set_rotation
            (pUVar6,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
             (MethodInfo *)0x0);
  pGVar1 = (pMVar8->fields)._gameManager;
  if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_0433e632;
  System_Collections_Generic_HashSet_object___GetEnumerator(&SStack_50,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  in_stack_ffffffffffffff7c = 0.0;
  _auStack_60 = ZEXT816(0);
  pSVar13 = SStack_50.fields._set;
label_0433e4f0:
  do {
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
      goto label_0433e5c0;
    }
    if (SStack_50.fields._current == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_0433e614:
      il2cpp_runtime_helper_022b2c90();
label_0433e619:
      il2cpp_runtime_helper_022b2c90();
label_0433e61e:
      il2cpp_runtime_helper_022b2c90();
      goto label_0433e623;
    }
    if (*(void **)((long)SStack_50.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0)
    goto label_0433e614;
    pUVar6 = UnityEngine_GameObject__get_transform
                       (*(void **)((long)SStack_50.fields._current + 0x18),(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0433e619;
    UVar12 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    auStack_60._0_4_ = (float)auStack_60._0_4_ + UVar12.fields.x;
    auStack_60._4_4_ = (float)auStack_60._4_4_ + UVar12.fields.y;
    fStack_58 = fStack_58 + extraout_XMM0_Dc;
    fStack_54 = fStack_54 + extraout_XMM0_Dd;
    in_stack_ffffffffffffff7c = in_stack_ffffffffffffff7c + UVar12.fields.z;
    pGVar1 = (pMVar8->fields)._gameManager;
    if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_0433e61e;
  } while ((pGVar1->fields).CurrentGizmoMode != 1);
  if (*(void **)((long)SStack_50.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0) {
label_0433e623:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar6 = (pMVar8->fields)._transform;
    __this_05 = UnityEngine_GameObject__get_transform
                          (*(void **)((long)SStack_50.fields._current + 0x18),(MethodInfo *)0x0);
    if (__this_05 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_rotation(__this_05,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar6,value,(MethodInfo *)0x0);
        goto label_0433e4f0;
      }
      goto label_0433e62d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0433e62d:
  il2cpp_runtime_helper_022b2c90();
  goto label_0433e632;
}


// MapEditor.PositionGizmo$$Update
// il2cpp: void MapEditor_PositionGizmo__Update (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x433e740

void MapEditor_PositionGizmo__Update(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char *pcVar7;
  Settings_KeybindSetting_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar8;
  System_Collections_Generic_HashSet_MapObject__o *pSVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UI_MapEditorMenu_o *pUVar12;
  UnityEngine_Camera_o *pUVar13;
  System_Collections_Generic_HashSet_object__o *pSVar14;
  UnityEngine_MeshFilter_o *__this_01;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  UnityEngine_Ray_o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  UnityEngine_Bounds_o bounds;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_08;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_09;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_10;
  UnityEngine_Ray_o ray;
  UnityEngine_Ray_o ray_00;
  UnityEngine_Ray_o __this_11;
  UnityEngine_RaycastHit_o __this_12;
  UnityEngine_RaycastHit_o __this_13;
  undefined1 auVar23 [16];
  bool_conflict bVar24;
  UnityEngine_LayerMask_o mask;
  int32_t iVar25;
  int32_t iVar26;
  UnityEngine_GameObject_o *pUVar27;
  System_Int32_array *layers;
  UnityEngine_Object_o *pUVar28;
  UnityEngine_Collider_o *__this_14;
  UnityEngine_Transform_o *pUVar29;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  System_Object_array *pSVar30;
  ulong uVar31;
  MethodInfo *pMVar32;
  undefined4 extraout_var_00;
  UnityEngine_Mesh_o *__this_15;
  UnityEngine_Vector3_array *pUVar33;
  UnityEngine_Transform_c *__this_16;
  undefined8 uVar34;
  MethodInfo_24E8500 *pMVar35;
  UnityEngine_Material_o *__this_17;
  MethodInfo_24E8500 *__this_18;
  long *plVar36;
  uint uVar37;
  undefined7 uVar39;
  undefined8 uVar38;
  int iVar40;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_03;
  MethodInfo *pMVar41;
  MethodInfo *method_04;
  Il2CppObject *extraout_RDX_01;
  undefined1 uVar42;
  float *pfVar43;
  MethodInfo_24E8500 *__this_19;
  Cameras_BaseCamera_o *pCVar44;
  ulong uVar45;
  long lVar46;
  Il2CppType *pIVar47;
  MethodInfo_24E8500 *x;
  Cameras_BaseCamera_o *camera;
  System_Object_array *method_05;
  MapEditor_PositionGizmo_o *pMVar48;
  Il2CppObject *in_R8;
  MethodInfo *in_R9;
  GameManagers_MapEditorGameManager_o *unaff_R12;
  uint uVar49;
  GameManagers_MapEditorGameManager_o *pGVar50;
  undefined4 uVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 uVar54;
  float extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dc_10;
  undefined4 extraout_XMM0_Dc_11;
  undefined4 extraout_XMM0_Dc_12;
  undefined4 extraout_XMM0_Dc_13;
  undefined4 extraout_XMM0_Dc_14;
  uint extraout_XMM0_Dc_15;
  uint extraout_XMM0_Dc_16;
  float extraout_XMM0_Dc_17;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 uVar55;
  float extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  undefined4 extraout_XMM0_Dd_09;
  undefined4 extraout_XMM0_Dd_10;
  undefined4 extraout_XMM0_Dd_11;
  undefined4 extraout_XMM0_Dd_12;
  undefined4 extraout_XMM0_Dd_13;
  undefined4 extraout_XMM0_Dd_14;
  uint extraout_XMM0_Dd_15;
  uint extraout_XMM0_Dd_16;
  uint uVar56;
  float extraout_XMM0_Dd_17;
  undefined1 auVar57 [8];
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar62 [16];
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qb_01;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  undefined1 in_XMM2 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  UnityEngine_Quaternion_o value;
  UnityEngine_Color_o value_00;
  undefined1 auVar83 [12];
  UnityEngine_Vector3_o UVar84;
  UnityEngine_Vector3_o UVar85;
  UnityEngine_Vector3_o UVar86;
  UnityEngine_Vector3_o drag;
  UnityEngine_Vector3_o frameDelta;
  UnityEngine_Vector3_o value_01;
  float in_stack_fffffffffffffb68;
  float in_stack_fffffffffffffb6c;
  float in_stack_fffffffffffffb70;
  uint uVar87;
  float in_stack_fffffffffffffb74;
  uint uVar88;
  float in_stack_fffffffffffffb78;
  float in_stack_fffffffffffffb7c;
  UnityEngine_Vector3_o UStack_478;
  float fStack_46c;
  UnityEngine_Vector3_Fields UStack_468;
  undefined1 auStack_458 [40];
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  undefined1 auStack_420 [16];
  Il2CppObject *pIStack_410;
  undefined1 auStack_408 [8];
  float fStack_400;
  float fStack_3fc;
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [12];
  float fStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined1 auStack_3c8 [16];
  undefined8 uStack_3b8;
  Il2CppType **ppIStack_3b0;
  undefined1 auStack_3a8 [16];
  Cameras_BaseCamera_o *pCStack_398;
  MethodInfo_24E8500 *pMStack_390;
  MethodInfo_24E8500 *pMStack_388;
  undefined8 uStack_380;
  MethodInfo_24E8500 *pMStack_378;
  UnityEngine_Transform_c *pUStack_370;
  System_Object_array *pSStack_368;
  Il2CppObject *pIStack_360;
  undefined8 uStack_358;
  undefined8 uStack_348;
  undefined8 uStack_338;
  System_Object_array *pSStack_330;
  Il2CppObject *pIStack_328;
  undefined8 in_stack_fffffffffffffce0;
  undefined8 in_stack_fffffffffffffce8;
  Il2CppObject *in_stack_fffffffffffffcf0;
  undefined1 uStack_305;
  float fStack_304;
  UnityEngine_Transform_c *pUStack_300;
  float fStack_2f8;
  undefined1 auStack_2d0 [48];
  undefined1 auStack_2a0 [8];
  float fStack_298;
  float fStack_294;
  _union_332932 _Stack_290;
  Il2CppObject *pIStack_288;
  Il2CppObject *pIStack_280;
  UnityEngine_Transform_c *pUStack_278;
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [24];
  System_Int32_array *pSStack_238;
  GameManagers_MapEditorGameManager_o *pGStack_230;
  MapEditor_PositionGizmo_o *pMStack_228;
  Settings_KeybindSetting_o *pSStack_220;
  Il2CppObject *pIStack_218;
  Il2CppObject *pIStack_210;
  Il2CppObject *in_stack_fffffffffffffdf8;
  Il2CppClass *pIVar89;
  Il2CppObject *in_stack_fffffffffffffe00;
  Il2CppObject *pIVar90;
  Il2CppObject *in_stack_fffffffffffffe08;
  Il2CppObject *pIVar91;
  Il2CppObject *in_stack_fffffffffffffe10;
  float in_stack_fffffffffffffe18;
  float in_stack_fffffffffffffe1c;
  int32_t in_stack_fffffffffffffe20;
  undefined4 uStack_1dc;
  undefined1 auStack_1d8 [8];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 auStack_1c8 [8];
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 auStack_1b8 [32];
  undefined1 auStack_198 [8];
  float fStack_190;
  float fStack_18c;
  UnityEngine_Ray_o UStack_188;
  undefined1 auStack_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [8];
  float fStack_140;
  undefined1 auStack_138 [16];
  Il2CppClass *pIStack_128;
  float fStack_120;
  Il2CppObject IStack_118;
  _union_14 _Stack_108;
  float fStack_100;
  undefined1 auStack_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 auStack_e0 [16];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  _union_14 _Stack_b8;
  Il2CppObject *pIStack_b0;
  Il2CppClass *pIStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  _union_14 _Stack_78;
  Il2CppObject *pIStack_70;
  Il2CppClass *pIStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  UnityEngine_Ray_o UStack_48;
  undefined4 extraout_var;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  
  if (g_data_057ae0c7 == '\0') {
    pIStack_210 = (Il2CppObject *)0x433e76d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    pIStack_210 = (Il2CppObject *)0x433e779;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pIStack_210 = (Il2CppObject *)0x433e785;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    pIStack_210 = (Il2CppObject *)0x433e791;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    pIStack_210 = (Il2CppObject *)0x433e79d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    pIStack_210 = (Il2CppObject *)0x433e7a9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStack_210 = (Il2CppObject *)0x433e7b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    pIStack_210 = (Il2CppObject *)0x433e7c1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    pIStack_210 = (Il2CppObject *)0x433e7cd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pIStack_210 = (Il2CppObject *)0x433e7d9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIStack_210 = (Il2CppObject *)0x433e7e5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransformPositionCommand);
    pIStack_210 = (Il2CppObject *)0x433e7f1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    g_data_057ae0c7 = '\x01';
  }
  fStack_100 = 0.0;
  _Stack_108.genericMethod = (void *)0x0;
  auStack_e0._0_8_ = (Il2CppObject *)0x0;
  IStack_118.monitor._0_4_ = 0.0;
  IStack_118.klass = (Il2CppClass *)0x0;
  uStack_98 = 0;
  uStack_94 = 0;
  pIStack_a8 = (Il2CppClass *)0x0;
  uStack_a0 = 0;
  uStack_9c = 0;
  _Stack_b8.genericMethod = (void *)0x0;
  pIStack_b0 = (Il2CppObject *)0x0;
  auStack_e0._8_8_ = (Il2CppClass *)0x0;
  fStack_d0 = 0.0;
  fStack_cc = 0.0;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  uStack_58 = 0;
  uStack_54 = 0;
  pIStack_68 = (Il2CppClass *)0x0;
  uStack_60 = 0;
  uStack_5c = 0;
  _Stack_78.genericMethod = (void *)0x0;
  pIStack_70 = (Il2CppObject *)0x0;
  auStack_f8 = (undefined1  [8])0x0;
  fStack_f0 = 0.0;
  fStack_ec = 0.0;
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  fStack_120 = 0.0;
  pIStack_128 = (Il2CppClass *)0x0;
  fStack_140 = 0.0;
  auStack_148 = (undefined1  [8])0x0;
  pIStack_210 = (Il2CppObject *)0x433e8c3;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,method);
  lVar46 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  auVar74._0_4_ = in_stack_fffffffffffffe18;
  auVar74._4_4_ = in_stack_fffffffffffffe1c;
  auVar70 = auStack_1b8._0_16_;
  if ((lVar46 == 0) || (lVar46 = *(long *)(lVar46 + 0x50), lVar46 == 0)) goto label_043406a9;
  __this_16 = *(UnityEngine_Transform_c **)(TypeInfo_SceneLoader + 0xb8);
  pcVar7 = (__this_16->_1).namespaze;
  __this_00 = *(Settings_KeybindSetting_o **)(lVar46 + 0x78);
  unaff_R12 = *(GameManagers_MapEditorGameManager_o **)(lVar46 + 0x110);
  pUVar29 = (__this->fields)._activeLine;
  pGVar50 = (GameManagers_MapEditorGameManager_o *)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStack_210 = (Il2CppObject *)0x433e92d;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_210 = (Il2CppObject *)0x433e939;
  bVar24 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  auVar74._0_4_ = SUB84(pcVar7,0);
  auVar74._4_4_ = (float)((ulong)pcVar7 >> 0x20);
  if ((char)bVar24 != '\0') {
    pUVar29 = (__this->fields)._centerSquare;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_210 = (Il2CppObject *)0x433e95b;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_210 = (Il2CppObject *)0x433e967;
    bVar24 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar24 != '\0') {
      if (unaff_R12 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_043406a9;
      uVar37 = 0;
      pIStack_210 = (Il2CppObject *)0x433e986;
      bVar24 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)unaff_R12,0,(MethodInfo *)0x0);
      if ((char)bVar24 != '\0') {
        pGVar8 = (__this->fields)._gameManager;
        if ((pGVar8 == (GameManagers_MapEditorGameManager_o *)0x0) ||
           (pSVar9 = (pGVar8->fields).SelectedObjects,
           pSVar9 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_043406a9;
        uVar37 = (uint)(0 < (pSVar9->fields)._count);
      }
      pUVar29 = (__this->fields)._centerSquare;
      if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
      pIStack_210 = (Il2CppObject *)0x433e9c1;
      pUVar27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar29,(MethodInfo *)0x0);
      if (pUVar27 == (UnityEngine_GameObject_o *)0x0) goto label_043406a9;
      pIStack_210 = (Il2CppObject *)0x433e9d6;
      UnityEngine_GameObject__SetActive(pUVar27,uVar37,(MethodInfo *)0x0);
      pUVar29 = (__this->fields)._planeXY;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pIStack_210 = (Il2CppObject *)0x433e9eb;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_210 = (Il2CppObject *)0x433e9f7;
      bVar24 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar24 != '\0') {
        pUVar29 = (__this->fields)._planeXY;
        if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
        pIStack_210 = (Il2CppObject *)0x433ea0f;
        pUVar27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar29,(MethodInfo *)0x0);
        if (pUVar27 == (UnityEngine_GameObject_o *)0x0) goto label_043406a9;
        pIStack_210 = (Il2CppObject *)0x433ea2a;
        UnityEngine_GameObject__SetActive(pUVar27,(uint)(uVar37 == 0),(MethodInfo *)0x0);
      }
      pUVar29 = (__this->fields)._planeYZ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pIStack_210 = (Il2CppObject *)0x433ea3f;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_210 = (Il2CppObject *)0x433ea4b;
      bVar24 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar24 != '\0') {
        pUVar29 = (__this->fields)._planeYZ;
        if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
        pIStack_210 = (Il2CppObject *)0x433ea63;
        pUVar27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar29,(MethodInfo *)0x0);
        if (pUVar27 == (UnityEngine_GameObject_o *)0x0) goto label_043406a9;
        pIStack_210 = (Il2CppObject *)0x433ea7e;
        UnityEngine_GameObject__SetActive(pUVar27,(uint)(uVar37 == 0),(MethodInfo *)0x0);
      }
      pUVar29 = (__this->fields)._planeXZ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pIStack_210 = (Il2CppObject *)0x433ea93;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_210 = (Il2CppObject *)0x433ea9f;
      bVar24 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pCVar44 = (Cameras_BaseCamera_o *)CONCAT44(auVar74._4_4_,auVar74._0_4_);
      if ((char)bVar24 != '\0') {
        pUVar29 = (__this->fields)._planeXZ;
        if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
        pIStack_210 = (Il2CppObject *)0x433eabc;
        pUVar27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar29,(MethodInfo *)0x0);
        if (pUVar27 == (UnityEngine_GameObject_o *)0x0) goto label_043406a9;
        pIStack_210 = (Il2CppObject *)0x433ead7;
        UnityEngine_GameObject__SetActive(pUVar27,(uint)(uVar37 == 0),(MethodInfo *)0x0);
      }
      if (uVar37 == 0) {
        *(undefined1 *)&(__this->fields)._snapAnchorLocal.fields.y = 0;
        *(undefined8 *)&(__this->fields)._vertexSnapOrigin.fields.z = 0;
        pMVar32 = (MethodInfo *)0x0;
        pIStack_210 = (Il2CppObject *)0x433ec3b;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._vertexSnapOrigin.fields.z);
        pIStack_210 = (Il2CppObject *)0x433ec43;
        MapEditor_PositionGizmo__ResetCenter(__this,pMVar32);
      }
      else {
        __this_16 = (UnityEngine_Transform_c *)auStack_e0;
        in_R8 = &IStack_118;
        pIStack_210 = (Il2CppObject *)0x433eb02;
        bVar24 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                           (__this,pCVar44,(UnityEngine_Vector3_o *)&_Stack_108,
                            (UnityEngine_Transform_o **)__this_16,(UnityEngine_Vector3_o *)in_R8,in_R9);
        if ((char)bVar24 != '\0') {
          pUVar29 = (__this->fields)._transform;
          if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
          UVar84.fields.z = fStack_100;
          UVar84.fields._0_8_ = _Stack_108.genericMethod;
          pIStack_210 = (Il2CppObject *)0x433eb2c;
          UnityEngine_Transform__set_position(pUVar29,UVar84,(MethodInfo *)0x0);
          *(undefined8 *)&(__this->fields)._vertexSnapOrigin.fields.z = auStack_e0._0_8_;
          pIStack_210 = (Il2CppObject *)0x433eb47;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._vertexSnapOrigin.fields.z);
          (__this->fields)._snapAnchorLocal.fields.x = (float)IStack_118.monitor._0_4_;
          (__this->fields)._snapAnchorTransform = (UnityEngine_Transform_o *)IStack_118.klass;
          *(undefined1 *)&(__this->fields)._snapAnchorLocal.fields.y = 1;
        }
        pUVar29 = (__this->fields)._centerSquare;
        if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
        pIStack_210 = (Il2CppObject *)0x433eb83;
        UVar84 = UnityEngine_Transform__get_position(pUVar29,(MethodInfo *)0x0);
        if ((pCVar44 == (Cameras_BaseCamera_o *)0x0) ||
           (pUVar10 = (pCVar44->fields).Cache, pUVar10 == (Utility_BaseComponentCache_o *)0x0))
        goto label_043406a9;
        fStack_190 = extraout_XMM0_Dc;
        auStack_198 = (undefined1  [8])UVar84.fields._0_8_;
        fStack_18c = extraout_XMM0_Dd;
        pUVar11 = (pUVar10->fields).Transform;
        if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
        pIStack_210 = (Il2CppObject *)0x433ebb8;
        UVar85 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
        pUVar10 = (pCVar44->fields).Cache;
        if ((pUVar10 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar11 = (pUVar10->fields).Transform, pUVar11 == (UnityEngine_Transform_o *)0x0))
        goto label_043406a9;
        auStack_198._0_4_ = UVar84.fields.x;
        auStack_198._4_4_ = UVar84.fields.y;
        auStack_198._0_4_ = (float)auStack_198._0_4_ - UVar85.fields.x;
        auStack_198._4_4_ = (float)auStack_198._4_4_ - UVar85.fields.y;
        fStack_190 = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
        fStack_18c = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
        pIStack_210 = (Il2CppObject *)0x433ebf6;
        UVar86 = UnityEngine_Transform__get_up(pUVar11,(MethodInfo *)0x0);
        auVar68._0_8_ = UVar86.fields._0_8_;
        auVar68._8_4_ = extraout_XMM0_Dc_01;
        auVar68._12_4_ = extraout_XMM0_Dd_01;
        pIStack_210 = (Il2CppObject *)0x433ec0e;
        UVar85.fields.z = UVar84.fields.z - UVar85.fields.z;
        UVar85.fields.x = (float)auStack_198._0_4_;
        UVar85.fields.y = (float)auStack_198._4_4_;
        in_XMM2._8_8_ = auVar68._8_8_;
        in_XMM2._0_8_ = auVar68._0_8_;
        value = UnityEngine_Quaternion__LookRotation(UVar85,UVar86,(MethodInfo *)0x0);
        pIStack_210 = (Il2CppObject *)0x433ec18;
        UnityEngine_Transform__set_rotation(pUVar29,value,(MethodInfo *)0x0);
      }
    }
  }
  ppUVar1 = &(__this->fields)._activeLine;
  pUVar29 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStack_210 = (Il2CppObject *)0x433ec5f;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_210 = (Il2CppObject *)0x433ec6b;
  bVar24 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar24 != '\0') {
    pUVar12 = (__this->fields)._menu;
    if (pUVar12 == (UI_MapEditorMenu_o *)0x0) goto label_043406a9;
    if ((char)(pUVar12->fields).IsMouseUI != '\0') {
      return;
    }
    if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto label_043406a9;
    pIStack_210 = (Il2CppObject *)0x433eca5;
    bVar24 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
    if ((char)bVar24 == '\0') {
      return;
    }
    if (CONCAT44(auVar74._4_4_,auVar74._0_4_) == 0) goto label_043406a9;
    pUVar13 = *(UnityEngine_Camera_o **)(CONCAT44(auVar74._4_4_,auVar74._0_4_) + 0x20);
    pIStack_210 = (Il2CppObject *)0x433ecc6;
    UVar84 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_Camera_o *)0x0) goto label_043406a9;
    pIStack_210 = (Il2CppObject *)0x433ece1;
    UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_48,pUVar13,UVar84,(MethodInfo *)0x0);
    UStack_188.fields.m_Direction.fields.y = UStack_48.fields.m_Direction.fields.y;
    UStack_188.fields.m_Direction.fields.z = UStack_48.fields.m_Direction.fields.z;
    UStack_188.fields.m_Origin.fields.y = UStack_48.fields.m_Origin.fields.y;
    UStack_188.fields.m_Origin.fields.x = UStack_48.fields.m_Origin.fields.x;
    UStack_188.fields.m_Origin.fields.z = UStack_48.fields.m_Origin.fields.z;
    UStack_188.fields.m_Direction.fields.x = UStack_48.fields.m_Direction.fields.x;
    pIVar47 = (Il2CppType *)0x1;
    pIStack_210 = (Il2CppObject *)0x433ed15;
    layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
    if (*(int *)((long)TypeInfo_PhysicsLayer->m_Items + 0xc4) == 0) {
      pIStack_210 = (Il2CppObject *)0x433ed31;
      il2cpp_runtime_helper_02337ed0();
    }
    if (layers == (System_Int32_array *)0x0) goto label_043406a9;
    if ((int)layers->max_length == 0) {
      pIStack_210 = (Il2CppObject *)0x434070b;
      method_05 = TypeInfo_PhysicsLayer;
      il2cpp_runtime_helper_022b2ca0();
      pIStack_210 = (Il2CppObject *)&TypeInfo_Object;
      pSStack_238 = layers;
      pGStack_230 = unaff_R12;
      pMStack_228 = __this;
      pSStack_220 = __this_00;
      pIStack_218 = (Il2CppObject *)ppUVar1;
      if (g_data_057ae0cf == '\0') {
        pIStack_328 = (Il2CppObject *)0x4340745;
        il2cpp_runtime_helper_023445d0(&MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
        pIStack_328 = (Il2CppObject *)0x4340751;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        pIStack_328 = (Il2CppObject *)0x434075d;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        pIStack_328 = (Il2CppObject *)0x4340769;
        il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
        pIStack_328 = (Il2CppObject *)0x4340775;
        il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
        pIStack_328 = (Il2CppObject *)0x4340781;
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
        pIStack_328 = (Il2CppObject *)0x434078d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae0cf = '\x01';
      }
      auStack_2d0._0_8_ = (Il2CppClass *)0x0;
      auStack_2d0._8_8_ = (Il2CppMethodPointer)0x0;
      auStack_2d0._16_8_ = (Il2CppObject *)0x0;
      if (g_data_057a65d5 == '\0') {
        pIStack_328 = (Il2CppObject *)0x43407ba;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar51 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      extraout_RDX_01->klass = (Il2CppClass *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      *(undefined4 *)&extraout_RDX_01->monitor = uVar51;
      (__this_16->_1).image = (UnityEngine_Transform_c *)0x0;
      pIStack_328 = (Il2CppObject *)0x43407f1;
      il2cpp_runtime_helper_022b4080(__this_16,0);
      if (g_data_057a65d5 == '\0') {
        pIStack_328 = (Il2CppObject *)0x4340806;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      uVar38 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      auVar74._0_4_ = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      *(float *)&in_R8->klass = (float)(int)uVar38;
      *(int *)((long)&in_R8->klass + 4) = (int)((ulong)uVar38 >> 0x20);
      *(float *)&in_R8->monitor = auVar74._0_4_;
      pIStack_328 = (Il2CppObject *)0x434082c;
      UVar84 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      auStack_270._8_4_ = extraout_XMM0_Dc_13;
      auStack_270._0_8_ = UVar84.fields._0_8_;
      auStack_270._12_4_ = extraout_XMM0_Dd_13;
      pIStack_328 = (Il2CppObject *)0x434083b;
      iVar25 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      pIStack_328 = (Il2CppObject *)0x4340844;
      iVar26 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      if (((System_Collections_Generic_HashSet_Enumerator_T__c *)method_05->m_Items[0] !=
           (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0) &&
         (pSVar14 = *(System_Collections_Generic_HashSet_object__o **)
                     &(((System_Collections_Generic_HashSet_Enumerator_T__c *)method_05->m_Items[0])->_1).
                      this_arg.bits, auStack_2d0._40_8_ = pIVar47, pIStack_288 = in_R8,
         pIStack_280 = extraout_RDX_01, pUStack_278 = __this_16,
         pSVar14 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        auVar74._4_4_ = (float)iVar25;
        fVar72 = (float)iVar26;
        pIStack_328 = (Il2CppObject *)0x43408ac;
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_2a0,pSVar14,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
        auStack_2d0._16_8_ = _Stack_290;
        auStack_2d0._0_8_ = CONCAT44(auStack_2a0._4_4_,auStack_2a0._0_4_);
        auStack_2d0._8_8_ = CONCAT44(fStack_294,fStack_298);
        auVar74._0_4_ = auVar74._4_4_;
        if (auVar74._4_4_ <= fVar72) {
          auVar74._0_4_ = fVar72;
        }
        method_05 = (System_Object_array *)auStack_2d0;
        in_R8 = (Il2CppObject *)&TypeInfo_Object;
        fStack_2f8 = 3.4028235e+38;
        fStack_304 = 3.4028235e+38;
        __this_16 = (UnityEngine_Transform_c *)0x0;
label_04340910:
        do {
          pIStack_328 = (Il2CppObject *)0x434091c;
          __this_07.fields._index = (int)in_stack_fffffffffffffce8;
          __this_07.fields._version = (int)((ulong)in_stack_fffffffffffffce8 >> 0x20);
          __this_07.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffce0;
          __this_07.fields._current = in_stack_fffffffffffffcf0;
          bVar24 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             (__this_07,(MethodInfo_3219C40 *)method_05);
          if ((char)bVar24 == '\0') {
            pIStack_328 = (Il2CppObject *)0x4340d2b;
            __this_08.fields._index = (int)in_stack_fffffffffffffce8;
            __this_08.fields._version = (int)((ulong)in_stack_fffffffffffffce8 >> 0x20);
            __this_08.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffce0;
            __this_08.fields._current = in_stack_fffffffffffffcf0;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_08,(MethodInfo_3219C30 *)auStack_2d0);
            return;
          }
          if ((Il2CppObject *)auStack_2d0._16_8_ == (Il2CppObject *)0x0) {
            pIStack_328 = (Il2CppObject *)0x4340d47;
            il2cpp_runtime_helper_022b2c90();
label_04340d47:
            pIStack_328 = (Il2CppObject *)0x4340d55;
            il2cpp_runtime_helper_022b2ca0();
label_04340d55:
            pIStack_328 = (Il2CppObject *)0x4340d5a;
            il2cpp_runtime_helper_022b2c90();
label_04340d5a:
            pIStack_328 = (Il2CppObject *)0x4340d5f;
            il2cpp_runtime_helper_022b2c90();
            break;
          }
          pUVar28 = *(void **)(auStack_2d0._16_8_ + 0x18);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pIStack_328 = (Il2CppObject *)0x4340947;
            il2cpp_runtime_helper_02337ed0();
          }
          pIStack_328 = (Il2CppObject *)0x4340953;
          bVar24 = UnityEngine_Object__op_Equality(pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar24 == '\0') {
            if (pUVar28 == (UnityEngine_Object_o *)0x0) goto label_04340d64;
            pIStack_328 = (Il2CppObject *)0x434096c;
            pSVar30 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                                ((UnityEngine_GameObject_o *)pUVar28,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
            pUStack_300 = __this_16;
            if (pSVar30 == (System_Object_array *)0x0) goto label_04340d69;
            iVar40 = (int)pSVar30->max_length;
            if (0 < iVar40) {
              uVar37 = 0;
              uStack_305 = SUB81(__this_16,0);
              auStack_2d0._24_8_ = pSVar30;
              if (iVar40 != 0) {
                do {
                  __this_01 = (UnityEngine_MeshFilter_o *)
                              ((Il2CppObject **)(auStack_2d0._24_8_ + 0x20))[(int)uVar37];
                  if (__this_01 == (UnityEngine_MeshFilter_o *)0x0) goto label_04340d6e;
                  pIStack_328 = (Il2CppObject *)0x4340a22;
                  pSVar30 = (System_Object_array *)auStack_2d0._24_8_;
                  pUVar28 = (UnityEngine_Object_o *)
                            UnityEngine_MeshFilter__get_sharedMesh(__this_01,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    pIStack_328 = (Il2CppObject *)0x4340a36;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pIStack_328 = (Il2CppObject *)0x4340a42;
                  bVar24 = UnityEngine_Object__op_Equality
                                     (pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  uVar31 = CONCAT44(extraout_var,bVar24);
                  if ((char)bVar24 == '\0') {
                    pIStack_328 = (Il2CppObject *)0x4340a5c;
                    pMVar32 = (MethodInfo *)
                              UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)__this_01,MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      pIStack_328 = (Il2CppObject *)0x4340a70;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pIStack_328 = (Il2CppObject *)0x4340a7c;
                    bVar24 = UnityEngine_Object__op_Inequality
                                       ((UnityEngine_Object_o *)pMVar32,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                    if ((char)bVar24 != '\0') {
                      if (pMVar32 == (MethodInfo *)0x0) goto label_04340d73;
                      pIStack_328 = (Il2CppObject *)0x4340a9f;
                      UnityEngine_Renderer__get_bounds
                                ((UnityEngine_Bounds_o *)auStack_250,(UnityEngine_Renderer_o *)pMVar32,
                                 (MethodInfo *)0x0);
                      _Stack_290.genericMethod = (void *)auStack_250._16_8_;
                      auStack_2a0._0_4_ = auStack_250._0_4_;
                      auStack_2a0._4_4_ = auStack_250._4_4_;
                      fStack_298 = (float)auStack_250._8_4_;
                      fStack_294 = (float)auStack_250._12_4_;
                      __this_16 = pUStack_300;
                      if ((Il2CppType *)auStack_2d0._40_8_ == (Il2CppType *)0x0) goto label_04340d8c;
                      in_stack_fffffffffffffce0 = CONCAT44(auStack_250._4_4_,auStack_250._0_4_);
                      in_stack_fffffffffffffce8 = CONCAT44(auStack_250._12_4_,auStack_250._8_4_);
                      pIStack_328 = (Il2CppObject *)0x4340afd;
                      bounds.fields.m_Center.fields.z = (float)auStack_250._8_4_;
                      bounds.fields.m_Extents.fields.x = (float)auStack_250._12_4_;
                      bounds.fields.m_Center.fields.x = (float)auStack_250._0_4_;
                      bounds.fields.m_Center.fields.y = (float)auStack_250._4_4_;
                      bounds.fields.m_Extents.fields.y = (float)auStack_250._16_4_;
                      bounds.fields.m_Extents.fields.z = (float)auStack_250._20_4_;
                      in_stack_fffffffffffffcf0 = (Il2CppObject *)auStack_250._16_8_;
                      bVar24 = MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
                                         (bounds,(UnityEngine_Camera_o *)
                                                 ((Il2CppType *)(auStack_2d0._40_8_ + 0x20))->data,
                                          (UnityEngine_Vector2_o)auStack_270._0_8_,auVar74._0_4_,pMVar32);
                      uVar31 = CONCAT44(extraout_var_00,bVar24);
                      if ((char)bVar24 == '\0') goto label_043409b0;
                    }
                    pIStack_328 = (Il2CppObject *)0x4340b0f;
                    __this_15 = UnityEngine_MeshFilter__get_sharedMesh(__this_01,(MethodInfo *)0x0);
                    if (__this_15 == (UnityEngine_Mesh_o *)0x0) goto label_04340d78;
                    pIStack_328 = (Il2CppObject *)0x4340b22;
                    pUVar33 = UnityEngine_Mesh__get_vertices(__this_15,(MethodInfo *)0x0);
                    pIStack_328 = (Il2CppObject *)0x4340b2f;
                    __this_16 = (UnityEngine_Transform_c *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                    if (pUVar33 == (UnityEngine_Vector3_array *)0x0) goto label_04340d7d;
                    uVar31 = pUVar33->max_length;
                    if (__this_16 == (UnityEngine_Transform_c *)0x0) {
                      if ((int)uVar31 < 1) goto label_043409b0;
                      goto label_04340d87;
                    }
                    if ((int)uVar31 < 1) goto label_043409b0;
                    pfVar43 = &pUVar33->m_Items[0].fields.z;
                    pUStack_300 = (UnityEngine_Transform_c *)CONCAT71((int7)((ulong)pSVar30 >> 8),uStack_305);
                    uVar45 = 0;
                    auStack_2d0._32_8_ = pUVar33;
                    if ((uVar31 & 0xffffffff) == 0) goto label_04340d47;
                    while( true ) {
                      uVar3 = ((UnityEngine_Vector3_Fields *)(pfVar43 + -2))->x;
                      uVar5 = ((UnityEngine_Vector3_Fields *)(pfVar43 + -2))->y;
                      UVar86.fields.y = (float)uVar5;
                      UVar86.fields.x = (float)uVar3;
                      pIStack_328 = (Il2CppObject *)0x4340bc6;
                      UVar86.fields.z = *pfVar43;
                      UVar84 = UnityEngine_Transform__TransformPoint
                                         ((UnityEngine_Transform_o *)__this_16,UVar86,(MethodInfo *)0x0);
                      if ((Il2CppType *)auStack_2d0._40_8_ == (Il2CppType *)0x0) goto label_04340d55;
                      if (((Il2CppType *)(auStack_2d0._40_8_ + 0x20))->data == (Il2CppClass *)0x0)
                      goto label_04340d5a;
                      auStack_260._8_4_ = extraout_XMM0_Dc_14;
                      auStack_260._0_8_ = UVar84.fields._0_8_;
                      auStack_260._12_4_ = extraout_XMM0_Dd_14;
                      pIStack_328 = (Il2CppObject *)0x4340bf6;
                      UVar85 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                         ((UnityEngine_Camera_o *)
                                          ((Il2CppType *)(auStack_2d0._40_8_ + 0x20))->data,UVar84,
                                          (MethodInfo *)0x0);
                      fVar77 = UVar85.fields.z;
                      auVar74._8_4_ = UVar85.fields.x;
                      auVar63._0_4_ = UVar85.fields.y;
                      if ((((0.0 < fVar77) && (0.0 <= auVar74._8_4_)) && (auVar63._0_4_ <= fVar72)) &&
                         ((0.0 <= auVar63._0_4_ && (auVar74._8_4_ <= auVar74._4_4_)))) {
                        auVar74._8_4_ =
                             (auVar63._0_4_ - (float)auStack_270._4_4_) *
                             (auVar63._0_4_ - (float)auStack_270._4_4_) +
                             (auVar74._8_4_ - (float)auStack_270._0_4_) *
                             (auVar74._8_4_ - (float)auStack_270._0_4_);
                        if ((auVar74._8_4_ + 36.0 < fStack_304) ||
                           ((fVar77 < fStack_2f8 && (ABS(auVar74._8_4_ - fStack_304) <= 36.0)))) {
                          pIStack_280->klass = (Il2CppClass *)auStack_260._0_8_;
                          *(float *)&pIStack_280->monitor = UVar84.fields.z;
                          (pUStack_278->_1).image = __this_16;
                          pIStack_328 = (Il2CppObject *)0x4340cd5;
                          il2cpp_runtime_helper_022b4080();
                          if ((uint)*(il2cpp_array_size_t *)(auStack_2d0._32_8_ + 0x18) <= uVar45)
                          goto label_04340d82;
                          uVar38._0_4_ = ((UnityEngine_Vector3_Fields *)(pfVar43 + -2))->x;
                          uVar38._4_4_ = ((UnityEngine_Vector3_Fields *)(pfVar43 + -2))->y;
                          auVar63._0_4_ = *pfVar43;
                          *(float *)&pIStack_288->klass = (float)(undefined4)uVar38;
                          *(undefined4 *)((long)&pIStack_288->klass + 4) = uVar38._4_4_;
                          *(float *)&pIStack_288->monitor = auVar63._0_4_;
                          pUStack_300 = (UnityEngine_Transform_c *)CONCAT71((int7)((ulong)uVar38 >> 8),1);
                          fStack_2f8 = fVar77;
                          fStack_304 = auVar74._8_4_;
                        }
                      }
                      uVar45 = uVar45 + 1;
                      uVar49 = (uint)*(il2cpp_array_size_t *)(auStack_2d0._32_8_ + 0x18);
                      pfVar43 = pfVar43 + 3;
                      if ((long)(int)uVar49 <= (long)uVar45) break;
                      if (uVar49 <= uVar45) goto label_04340d47;
                    }
                  }
                  else {
label_043409b0:
                    pUStack_300 = (UnityEngine_Transform_c *)CONCAT71((int7)(uVar31 >> 8),uStack_305);
                  }
                  uVar37 = uVar37 + 1;
                  uVar49 = (uint)*(il2cpp_array_size_t *)(auStack_2d0._24_8_ + 0x18);
                  uStack_305 = SUB81(pUStack_300,0);
                  __this_16 = pUStack_300;
                  if ((int)uVar49 <= (int)uVar37) goto label_04340910;
                  if (uVar49 <= uVar37) break;
                } while( true );
              }
              goto label_04340d91;
            }
          }
        } while( true );
      }
      pIStack_328 = (Il2CppObject *)0x4340d64;
      il2cpp_runtime_helper_022b2c90();
label_04340d64:
      pIStack_328 = (Il2CppObject *)0x4340d69;
      il2cpp_runtime_helper_022b2c90();
      pUStack_300 = __this_16;
label_04340d69:
      pIStack_328 = (Il2CppObject *)0x4340d6e;
      il2cpp_runtime_helper_022b2c90();
label_04340d6e:
      pIStack_328 = (Il2CppObject *)0x4340d73;
      il2cpp_runtime_helper_022b2c90();
label_04340d73:
      pIStack_328 = (Il2CppObject *)0x4340d78;
      il2cpp_runtime_helper_022b2c90();
label_04340d78:
      pIStack_328 = (Il2CppObject *)0x4340d7d;
      il2cpp_runtime_helper_022b2c90();
label_04340d7d:
      __this_16 = pUStack_300;
      pIStack_328 = (Il2CppObject *)0x4340d82;
      il2cpp_runtime_helper_022b2c90();
label_04340d82:
      pIStack_328 = (Il2CppObject *)0x4340d87;
      il2cpp_runtime_helper_022b2ca0();
label_04340d87:
      pIStack_328 = (Il2CppObject *)0x4340d8c;
      il2cpp_runtime_helper_022b2c90();
label_04340d8c:
      pIStack_328 = (Il2CppObject *)0x4340d91;
      il2cpp_runtime_helper_022b2c90();
label_04340d91:
      pIStack_328 = (Il2CppObject *)0x4340d96;
      auVar70 = il2cpp_runtime_helper_022b2ca0();
      uVar38 = auVar70._8_8_;
      if (auVar70._8_4_ == 1) {
        pIStack_328 = (Il2CppObject *)0x4340e0c;
        plVar36 = (long *)__cxa_begin_catch(auVar70._0_8_);
        lVar46 = *plVar36;
        pIStack_328 = (Il2CppObject *)0x4340e14;
        __cxa_end_catch();
        pIStack_328 = (Il2CppObject *)0x4340e28;
        __this_09.fields._index = (int)in_stack_fffffffffffffce8;
        __this_09.fields._version = (int)((ulong)in_stack_fffffffffffffce8 >> 0x20);
        __this_09.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffce0;
        __this_09.fields._current = in_stack_fffffffffffffcf0;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_09,(MethodInfo_3219C30 *)auStack_2d0);
        if (lVar46 == 0) {
          return;
        }
        pIStack_328 = (Il2CppObject *)0x4340e3d;
        uVar34 = il2cpp_runtime_helper_022fefe0(lVar46);
        auVar70._8_8_ = uVar38;
        auVar70._0_8_ = uVar34;
      }
      else {
        lVar46 = 0;
      }
      pMVar32 = auVar70._8_8_;
      uVar38 = auVar70._0_8_;
      pIStack_328 = (Il2CppObject *)0x4340e54;
      __this_10.fields._index = (int)in_stack_fffffffffffffce8;
      __this_10.fields._version = (int)((ulong)in_stack_fffffffffffffce8 >> 0x20);
      __this_10.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffce0;
      __this_10.fields._current = in_stack_fffffffffffffcf0;
      __this_19 = MethodInfo_Void_Dispose;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_10,(MethodInfo_3219C30 *)auStack_2d0);
      if (lVar46 == 0) {
        pIStack_328 = (Il2CppObject *)0x4340e61;
        _Unwind_Resume(uVar38);
      }
      pIStack_328 = (Il2CppObject *)0x4340e69;
      pMVar35 = (MethodInfo_24E8500 *)il2cpp_runtime_helper_022fefe0(lVar46);
      pIStack_328 = (Il2CppObject *)0x4340e71;
      uStack_358 = il2cpp_runtime_helper_01f66400();
      x = __this_19;
      uStack_348 = extraout_XMM1_Qa;
      uStack_338 = uVar38;
      pSStack_330 = method_05;
      pIStack_328 = in_R8;
      if (g_data_057ae0d3 == '\0') {
        pMVar35 = (MethodInfo_24E8500 *)&MethodInfo_Renderer_GetComponentsInChildren_Renderer;
        pIStack_360 = (Il2CppObject *)0x4340eaa;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae0d3 = '\x01';
      }
      if (__this_19 != (MethodInfo_24E8500 *)0x0) {
        pIStack_360 = (Il2CppObject *)0x4340ecc;
        x = MethodInfo_Renderer_GetComponentsInChildren_Renderer;
        __this_18 = __this_19;
        pSVar30 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                            ((UnityEngine_Component_o *)__this_19,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
        pMVar35 = __this_18;
        if (pSVar30 != (System_Object_array *)0x0) {
          uVar37 = (uint)pSVar30->max_length;
          if (0 < (int)uVar37) {
            in_R8 = (Il2CppObject *)0x0;
            do {
              uVar49 = (uint)in_R8;
              pMVar35 = __this_18;
              method_05 = pSVar30;
              if (uVar37 <= uVar49) goto label_04340f4e;
              __this_19 = (MethodInfo_24E8500 *)pSVar30->m_Items[(int)uVar49];
              if (__this_19 == (MethodInfo_24E8500 *)0x0) goto label_04340f49;
              x = (MethodInfo_24E8500 *)0x0;
              pIStack_360 = (Il2CppObject *)0x4340efc;
              pMVar35 = __this_19;
              __this_17 = UnityEngine_Renderer__get_material
                                    ((UnityEngine_Renderer_o *)__this_19,(MethodInfo *)0x0);
              if (__this_17 == (UnityEngine_Material_o *)0x0) goto label_04340f49;
              pIStack_360 = (Il2CppObject *)0x4340f14;
              value_00.fields.b = (float)(undefined4)uStack_348;
              value_00.fields.a = (float)uStack_348._4_4_;
              value_00.fields.r = (float)(undefined4)uStack_358;
              value_00.fields.g = (float)uStack_358._4_4_;
              UnityEngine_Material__set_color(__this_17,value_00,(MethodInfo *)0x0);
              x = (MethodInfo_24E8500 *)0x0;
              pIStack_360 = (Il2CppObject *)0x4340f1e;
              pMVar35 = __this_19;
              __this_18 = (MethodInfo_24E8500 *)
                          UnityEngine_Renderer__get_material
                                    ((UnityEngine_Renderer_o *)__this_19,(MethodInfo *)0x0);
              if (__this_18 == (MethodInfo_24E8500 *)0x0) goto label_04340f49;
              x = (MethodInfo_24E8500 *)0xc27;
              pIStack_360 = (Il2CppObject *)0x4340f32;
              UnityEngine_Material__set_renderQueue
                        ((UnityEngine_Material_o *)__this_18,0xc27,(MethodInfo *)0x0);
              in_R8 = (Il2CppObject *)(ulong)(uVar49 + 1);
              uVar37 = (uint)pSVar30->max_length;
            } while ((int)(uVar49 + 1) < (int)uVar37);
          }
          return;
        }
      }
label_04340f49:
      pIStack_360 = (Il2CppObject *)0x4340f4e;
      il2cpp_runtime_helper_022b2c90();
label_04340f4e:
      pIStack_360 = (Il2CppObject *)0x4340f53;
      uStack_380 = il2cpp_runtime_helper_022b2ca0();
      pMStack_378 = __this_19;
      pUStack_370 = __this_16;
      pSStack_368 = method_05;
      pIStack_360 = in_R8;
      if (g_data_057ae0c8 == '\0') {
        pMStack_388 = (MethodInfo_24E8500 *)0x4340f83;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae0c8 = '\x01';
      }
      pCVar44 = *(Cameras_BaseCamera_o **)&pMVar35->slot;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_388 = (MethodInfo_24E8500 *)0x4340fa7;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_388 = (MethodInfo_24E8500 *)0x4340fb4;
      camera = pCVar44;
      bVar24 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pCVar44,(MethodInfo *)0x0);
      if ((char)bVar24 == '\0') {
        pCVar44 = (Cameras_BaseCamera_o *)pMVar35[1].methodPointer;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pMStack_388 = (MethodInfo_24E8500 *)0x4340fe7;
          il2cpp_runtime_helper_02337ed0();
        }
        pMStack_388 = (MethodInfo_24E8500 *)0x4340ff4;
        camera = pCVar44;
        bVar24 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pCVar44,(MethodInfo *)0x0);
        if ((char)bVar24 == '\0') {
          pCVar44 = (Cameras_BaseCamera_o *)pMVar35[1].virtualMethodPointer;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pMStack_388 = (MethodInfo_24E8500 *)0x4341024;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_388 = (MethodInfo_24E8500 *)0x4341031;
          camera = pCVar44;
          bVar24 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pCVar44,(MethodInfo *)0x0);
          if ((char)bVar24 == '\0') {
            if (g_data_057a6844 == '\0') {
              pMStack_388 = (MethodInfo_24E8500 *)0x434105c;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6844 = '\x01';
            }
            return;
          }
          if ((UnityEngine_Transform_o *)pMVar35->return_type != (UnityEngine_Transform_o *)0x0) {
            pMStack_388 = (MethodInfo_24E8500 *)0x4341045;
            UnityEngine_Transform__get_up((UnityEngine_Transform_o *)pMVar35->return_type,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((UnityEngine_Transform_o *)pMVar35->return_type != (UnityEngine_Transform_o *)0x0) {
          pMStack_388 = (MethodInfo_24E8500 *)0x434100c;
          UnityEngine_Transform__get_right((UnityEngine_Transform_o *)pMVar35->return_type,(MethodInfo *)0x0);
          return;
        }
      }
      else if ((UnityEngine_Transform_o *)pMVar35->return_type != (UnityEngine_Transform_o *)0x0) {
        pMStack_388 = (MethodInfo_24E8500 *)0x4340fcc;
        UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)pMVar35->return_type,(MethodInfo *)0x0);
        return;
      }
      pMVar48 = (MapEditor_PositionGizmo_o *)0x0;
      pMStack_388 = (MethodInfo_24E8500 *)0x434108f;
      il2cpp_runtime_helper_022b2c90();
      auVar61._8_8_ = extraout_XMM1_Qb;
      auVar61._0_8_ = extraout_XMM1_Qa_00;
      pCStack_398 = pCVar44;
      pMStack_390 = x;
      pMStack_388 = pMVar35;
      if (g_data_057ae0cd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0();
        auVar61._8_8_ = extraout_XMM1_Qb_00;
        auVar61._0_8_ = extraout_XMM1_Qa_01;
        g_data_057ae0cd = '\x01';
      }
      auStack_458._32_8_ = (Il2CppRGCTXData *)0x0;
      fStack_430 = 0.0;
      fStack_42c = 0.0;
      fStack_428 = 0.0;
      fStack_424 = 0.0;
      UStack_478.fields.z = 0.0;
      UStack_478.fields.x = 0.0;
      UStack_478.fields.y = 0.0;
      UStack_468.z = 0.0;
      UStack_468.x = 0.0;
      UStack_468.y = 0.0;
      auStack_458._0_8_ = (Il2CppRGCTXData *)0x0;
      auStack_458._8_8_ = (Il2CppMethodPointer)0x0;
      auStack_458._16_8_ = (Il2CppObject *)0x0;
      pGVar50 = (pMVar48->fields)._gameManager;
      if ((pGVar50 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (pSVar9 = (pGVar50->fields).SelectedObjects,
         pSVar9 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
        if ((pSVar9->fields)._count == 0) {
          return;
        }
        if (camera != (Cameras_BaseCamera_o *)0x0) {
          pUVar13 = (camera->fields).Camera;
          UVar84 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          if (pUVar13 != (UnityEngine_Camera_o *)0x0) {
            auVar21._12_4_ = 0;
            auVar21._0_12_ = auVar61._4_12_;
            auVar62 = auVar21 << 0x20;
            UnityEngine_Camera__ScreenPointToRay_4db37e0
                      ((UnityEngine_Ray_o *)auStack_420,pUVar13,UVar84,(MethodInfo *)0x0);
            fStack_428 = SUB84(pIStack_410,0);
            fStack_424 = (float)((ulong)pIStack_410 >> 0x20);
            auStack_458._32_8_ = auStack_420._0_8_;
            fStack_430 = (float)auStack_420._8_4_;
            fStack_42c = (float)auStack_420._12_4_;
            if (*(char *)&(pMVar48->fields)._snapAnchorLocal.fields.y == '\0') {
label_0434121d:
              auStack_3e0._0_8_ = (Il2CppMethodPointer)0x0;
              auStack_420._8_4_ = 0.0;
              auStack_420._0_8_ = (Il2CppRGCTXData *)0x0;
              pMVar32 = (MethodInfo *)auStack_3e0;
              bVar24 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                                 (pMVar48,camera,&UStack_478,(UnityEngine_Transform_o **)pMVar32,
                                  (UnityEngine_Vector3_o *)auStack_420,in_R9);
              if ((char)bVar24 == '\0') {
                return;
              }
              pUVar10 = (camera->fields).Cache;
            }
            else {
              pUVar28 = *(UnityEngine_Object_o **)&(pMVar48->fields)._vertexSnapOrigin.fields.z;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                auVar62._8_8_ = extraout_XMM1_Qb_01;
                auVar62._0_8_ = extraout_XMM1_Qa_02;
              }
              bVar24 = UnityEngine_Object__op_Inequality
                                 (pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar24 == '\0') goto label_0434121d;
              pUVar29 = *(UnityEngine_Transform_o **)&(pMVar48->fields)._vertexSnapOrigin.fields.z;
              if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_04341781;
              auVar83 = ZEXT812(0);
              UVar84 = UnityEngine_Transform__TransformPoint
                                 (pUVar29,*(UnityEngine_Vector3_Fields *)
                                           &(pMVar48->fields)._snapAnchorTransform,(MethodInfo *)0x0);
              auVar62._0_4_ = UVar84.fields.z;
              auVar62._4_12_ = auVar83;
              UStack_478.fields._0_8_ = UVar84.fields._0_8_;
              pUVar10 = (camera->fields).Cache;
              UStack_478.fields.z = auVar62._0_4_;
            }
            if ((pUVar10 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar29 = (pUVar10->fields).Transform, pUVar29 != (UnityEngine_Transform_o *)0x0)) {
              UVar84 = UnityEngine_Transform__get_position(pUVar29,(MethodInfo *)0x0);
              auVar63._4_12_ = auVar62._4_12_;
              auVar63._0_4_ = UVar84.fields.z;
              uVar38 = auVar63._0_8_;
              fVar72 = UVar84.fields.x;
              auVar74._8_4_ = UVar84.fields.y;
              register0x000012c8 = 0;
              auStack_408._0_4_ = UStack_478.fields.x;
              auStack_408._4_4_ = UStack_478.fields.y;
              auStack_3f8._0_16_ = ZEXT416((uint)UStack_478.fields.z);
              auVar74._0_4_ = UStack_478.fields.z;
              auVar74._4_4_ = 0.0;
              if (g_data_057a68cb == '\0') {
                in_stack_fffffffffffffb6c = auVar62._4_4_;
                in_stack_fffffffffffffb70 = auVar62._8_4_;
                in_stack_fffffffffffffb74 = auVar62._12_4_;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                uVar38 = CONCAT44(in_stack_fffffffffffffb6c,auVar63._0_4_);
                g_data_057a68cb = '\x01';
                auVar74._0_4_ = (float)auStack_3f8._0_4_;
                auVar74._4_4_ = (float)auStack_3f8._4_4_;
                in_stack_fffffffffffffb78 = fVar72;
                in_stack_fffffffffffffb7c = auVar74._8_4_;
              }
              auVar63._0_4_ = auStack_408._4_4_;
              auStack_3a8._4_4_ = auVar63._0_4_;
              auStack_3a8._0_4_ = auVar63._0_4_;
              auStack_3a8._8_4_ = auStack_408._8_4_;
              auStack_3a8._12_4_ = auStack_408._12_4_;
              fVar77 = auVar74._8_4_ - auVar63._0_4_;
              auVar74._0_4_ = (float)uVar38 - auVar74._0_4_;
              fVar72 = fVar72 - auStack_408._0_4_;
              auVar74._4_4_ = (float)((ulong)uVar38 >> 0x20) - auVar74._4_4_;
              auVar63._0_4_ = auVar74._8_4_ - auVar63._0_4_;
              if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                in_stack_fffffffffffffb6c = fVar72;
                in_stack_fffffffffffffb70 = auVar74._4_4_;
                in_stack_fffffffffffffb74 = auVar63._0_4_;
                in_stack_fffffffffffffb78 = fVar77;
                in_stack_fffffffffffffb7c = auVar74._8_4_;
              }
              in_stack_fffffffffffffb68 = fVar72 * fVar72 + fVar77 * fVar77 + auVar74._0_4_ * auVar74._0_4_;
              auVar65 = ZEXT816(0);
              if (in_stack_fffffffffffffb68 < 0.0) {
                in_stack_fffffffffffffb68 = sqrtf(in_stack_fffffffffffffb68);
              }
              else {
                in_stack_fffffffffffffb68 = SQRT(in_stack_fffffffffffffb68);
              }
              bVar24 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_4243720
                                 (pMVar48,camera,30.0,(UnityEngine_Vector3_o *)&UStack_468,pMVar32);
              if ((char)bVar24 == '\0') {
label_043413d6:
                pUVar10 = (camera->fields).Cache;
                if ((pUVar10 == (Utility_BaseComponentCache_o *)0x0) ||
                   (pUVar29 = (pUVar10->fields).Transform, pUVar29 == (UnityEngine_Transform_o *)0x0))
                goto label_04341781;
                UVar84 = UnityEngine_Transform__get_forward(pUVar29,(MethodInfo *)0x0);
                auVar74._0_4_ = UVar84.fields.z;
                uVar31 = UVar84.fields._0_8_;
                uVar37 = auVar65._4_4_;
                uVar49 = auVar65._8_4_;
                uVar56 = auVar65._12_4_;
                auVar74._4_4_ = UVar84.fields.x;
                in_stack_fffffffffffffb7c = UVar84.fields.y;
                if (g_data_057a6845 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  uVar31 = CONCAT44(in_stack_fffffffffffffb7c,auVar74._4_4_);
                  g_data_057a6845 = '\x01';
                  iVar40 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
                }
                else {
                  iVar40 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
                }
                if (iVar40 == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  uVar31 = CONCAT44(in_stack_fffffffffffffb7c,auVar74._4_4_);
                }
                fVar72 = (float)(uVar31 >> 0x20);
                fVar72 = auVar74._0_4_ * auVar74._0_4_ + fVar72 * fVar72 + (float)uVar31 * (float)uVar31;
                uVar87 = uVar49;
                uVar88 = uVar56;
                if (fVar72 < 0.0) {
                  fVar72 = sqrtf(fVar72);
                  uVar31 = CONCAT44(in_stack_fffffffffffffb7c,auVar74._4_4_);
                  uVar49 = extraout_XMM0_Dc_16;
                  uVar56 = extraout_XMM0_Dd_16;
                  if (1e-05 < fVar72) goto label_043414a3;
label_04341454:
                  if (g_data_057a65d5 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a65d5 = '\x01';
                  }
                  auVar82._8_8_ = 0;
                  auVar82._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
                  auVar74._8_4_ = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
                  uVar78 = 0;
                  uVar79 = 0;
                  uVar80 = 0;
                }
                else {
                  fVar72 = SQRT(fVar72);
                  if (fVar72 <= 1e-05) goto label_04341454;
label_043414a3:
                  uVar78 = uVar37 ^ 0x80000000;
                  uVar79 = uVar87 ^ 0x80000000;
                  uVar80 = uVar88 ^ 0x80000000;
                  auVar81._0_8_ = uVar31 ^ 0x8000000080000000;
                  auVar81._8_4_ = extraout_XMM0_Dc_15 ^ 0x80000000;
                  auVar81._12_4_ = extraout_XMM0_Dd_15 ^ 0x80000000;
                  auVar74._8_4_ = -auVar74._0_4_ / fVar72;
                  auVar16._4_4_ = fVar72;
                  auVar16._0_4_ = fVar72;
                  auVar16._8_4_ = uVar49;
                  auVar16._12_4_ = uVar56;
                  auVar82 = divps(auVar81,auVar16);
                }
                fVar67 = auVar82._0_4_;
                fVar73 = auVar82._4_4_;
                uVar51 = auVar82._8_4_;
                uVar53 = auVar82._12_4_;
                fVar77 = fStack_424 * auVar74._8_4_ + fStack_428 * fVar73 + fVar67 * fStack_42c;
                fVar72 = fStack_430 * auVar74._8_4_;
                auVar63._0_4_ = fVar73;
                uVar49 = 0;
                uVar56 = 0;
                fVar66 = (float)auStack_458._32_8_;
                fVar52 = SUB84(auStack_458._32_8_,4);
                if (g_data_057a68c8 == '\0') {
                  uStack_3b8 = (Il2CppRGCTXData *)auStack_458._32_8_;
                  ppIStack_3b0 = (Il2CppType **)0x0;
                  auStack_3c8 = ZEXT416((uint)fVar77);
                  fStack_46c = fStack_430 * auVar74._8_4_;
                  auStack_3e0._8_4_ = fVar73;
                  fStack_3d4 = fVar73;
                  uStack_3d0 = uVar51;
                  uStack_3cc = uVar53;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
                  auVar82._4_4_ = fVar73;
                  auVar82._0_4_ = fVar67;
                  auVar82._8_4_ = uVar51;
                  auVar82._12_4_ = uVar53;
                  g_data_057a68c8 = '\x01';
                  fVar72 = fStack_46c;
                  auVar63._0_4_ = (float)auStack_3e0._8_4_;
                  fVar77 = (float)auStack_3c8._0_4_;
                  uVar49 = auStack_3c8._8_4_;
                  uVar56 = auStack_3c8._12_4_;
                  fVar66 = (float)uStack_3b8;
                  fVar52 = uStack_3b8._4_4_;
                  auVar74._0_4_ = auVar74._8_4_;
                  uVar37 = uVar78;
                  uVar87 = uVar79;
                  uVar88 = uVar80;
                  auVar74._4_4_ = fVar67;
                  in_stack_fffffffffffffb7c = fVar73;
                }
                auVar71._0_4_ = ABS(fVar77);
                auVar71._4_4_ = 0;
                auVar71._8_4_ = uVar49 & 0x7fffffff;
                auVar71._12_4_ = uVar56 & 0x7fffffff;
                if (auVar71._0_4_ <= 0.0) {
                  auVar22._12_4_ = 0;
                  auVar22._0_12_ = auVar71._4_12_;
                  auVar71 = auVar22 << 0x20;
                }
                fVar67 = auVar71._0_4_ * 1e-06;
                fVar73 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                if (fVar67 <= fVar73) {
                  fVar67 = fVar73;
                }
                if (ABS(0.0 - fVar77) < fVar67) {
                  return;
                }
                fVar77 = ((auVar74._8_4_ * (float)auStack_3f8._0_4_ +
                          (float)auStack_3a8._0_4_ * auVar63._0_4_ + (float)auStack_408._0_4_ * auVar82._0_4_)
                         - (fVar72 + fVar52 * auVar63._0_4_ + auVar82._0_4_ * fVar66)) / fVar77;
                if (fVar77 <= 0.0) {
                  return;
                }
                __this_02.fields.m_Origin.fields.y = (float)uVar37;
                __this_02.fields.m_Origin.fields.x = auVar74._0_4_;
                __this_02.fields.m_Origin.fields.z = (float)uVar87;
                __this_02.fields.m_Direction.fields.x = (float)uVar88;
                __this_02.fields.m_Direction.fields.y = auVar74._4_4_;
                __this_02.fields.m_Direction.fields.z = in_stack_fffffffffffffb7c;
                UVar84 = UnityEngine_Ray__GetPoint(__this_02,fVar77,(MethodInfo *)(auStack_458 + 0x20));
                in_stack_fffffffffffffb68 = UVar84.fields.x - (float)auStack_408._0_4_;
                in_stack_fffffffffffffb6c = UVar84.fields.y - (float)auStack_408._4_4_;
                in_stack_fffffffffffffb70 = extraout_XMM0_Dc_17 - fStack_400;
                in_stack_fffffffffffffb74 = extraout_XMM0_Dd_17 - fStack_3fc;
                in_stack_fffffffffffffb78 = UVar84.fields.z - (float)auStack_3f8._0_4_;
                auVar74._4_4_ =
                     in_stack_fffffffffffffb78 * in_stack_fffffffffffffb78 +
                     in_stack_fffffffffffffb6c * in_stack_fffffffffffffb6c +
                     in_stack_fffffffffffffb68 * in_stack_fffffffffffffb68;
              }
              else {
                auVar74._0_4_ = in_stack_fffffffffffffb68 * 0.3;
                if (auVar74._0_4_ <= 60.0) {
                  auVar74._0_4_ = 60.0;
                }
                in_stack_fffffffffffffb68 = UStack_468.x - (float)auStack_408._0_4_;
                in_stack_fffffffffffffb6c = UStack_468.y - (float)auStack_408._4_4_;
                in_stack_fffffffffffffb70 = 0.0 - fStack_400;
                in_stack_fffffffffffffb74 = 0.0 - fStack_3fc;
                in_stack_fffffffffffffb78 = UStack_468.z - (float)auStack_3f8._0_4_;
                auVar74._4_4_ = in_stack_fffffffffffffb6c * in_stack_fffffffffffffb6c;
                auVar64._4_4_ = auVar74._4_4_;
                auVar64._0_4_ = auVar74._4_4_;
                auVar64._8_4_ = in_stack_fffffffffffffb70 * in_stack_fffffffffffffb70;
                auVar64._12_4_ = in_stack_fffffffffffffb74 * in_stack_fffffffffffffb74;
                auVar65._4_12_ = auVar64._4_12_;
                auVar65._0_4_ = auVar74._4_4_ + in_stack_fffffffffffffb68 * in_stack_fffffffffffffb68;
                auVar74._4_4_ = in_stack_fffffffffffffb78 * in_stack_fffffffffffffb78 + auVar65._0_4_;
                if (auVar74._0_4_ * auVar74._0_4_ < auVar74._4_4_) goto label_043413d6;
              }
              if (auVar74._4_4_ < 1e-08) {
                return;
              }
              pGVar50 = (pMVar48->fields)._gameManager;
              if ((pGVar50 != (GameManagers_MapEditorGameManager_o *)0x0) &&
                 (pSVar14 = (System_Collections_Generic_HashSet_object__o *)(pGVar50->fields).SelectedObjects,
                 pSVar14 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
                System_Collections_Generic_HashSet_object___GetEnumerator
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_420,pSVar14,
                           MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
                auStack_458._16_8_ = pIStack_410;
                auStack_458._8_8_ = CONCAT44(auStack_420._12_4_,auStack_420._8_4_);
                auStack_458._0_8_ = auStack_420._0_8_;
                while( true ) {
                  __this_03.fields._set._4_4_ = in_stack_fffffffffffffb6c;
                  __this_03.fields._set._0_4_ = in_stack_fffffffffffffb68;
                  __this_03.fields._index = (int32_t)in_stack_fffffffffffffb70;
                  __this_03.fields._version = (int32_t)in_stack_fffffffffffffb74;
                  __this_03.fields._current._0_4_ = in_stack_fffffffffffffb78;
                  __this_03.fields._current._4_4_ = in_stack_fffffffffffffb7c;
                  bVar24 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                     (__this_03,(MethodInfo_3219C40 *)auStack_458);
                  if ((char)bVar24 == '\0') {
                    __this_04.fields._set._4_4_ = in_stack_fffffffffffffb6c;
                    __this_04.fields._set._0_4_ = in_stack_fffffffffffffb68;
                    __this_04.fields._index = (int32_t)in_stack_fffffffffffffb70;
                    __this_04.fields._version = (int32_t)in_stack_fffffffffffffb74;
                    __this_04.fields._current._0_4_ = in_stack_fffffffffffffb78;
                    __this_04.fields._current._4_4_ = in_stack_fffffffffffffb7c;
                    System_Collections_Generic_HashSet_Enumerator_object___Dispose
                              (__this_04,(MethodInfo_3219C30 *)auStack_458);
                    return;
                  }
                  if ((Il2CppObject *)auStack_458._16_8_ == (Il2CppObject *)0x0) break;
                  if (((Il2CppObject *)(auStack_458._16_8_ + 0x10))->monitor ==
                      (UnityEngine_GameObject_o *)0x0) goto label_0434178b;
                  pUVar29 = UnityEngine_GameObject__get_transform
                                      (((Il2CppObject *)(auStack_458._16_8_ + 0x10))->monitor,
                                       (MethodInfo *)0x0);
                  if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_04341790;
                  UVar84 = UnityEngine_Transform__get_position(pUVar29,(MethodInfo *)0x0);
                  value_01.fields.x = UVar84.fields.x + in_stack_fffffffffffffb68;
                  value_01.fields.y = UVar84.fields.y + in_stack_fffffffffffffb6c;
                  value_01.fields.z = UVar84.fields.z + in_stack_fffffffffffffb78;
                  UnityEngine_Transform__set_position(pUVar29,value_01,(MethodInfo *)0x0);
                }
                goto label_04341786;
              }
            }
          }
        }
      }
label_04341781:
      il2cpp_runtime_helper_022b2c90();
label_04341786:
      il2cpp_runtime_helper_022b2c90();
label_0434178b:
      il2cpp_runtime_helper_022b2c90();
label_04341790:
      auVar83 = il2cpp_runtime_helper_022b2c90();
      if (auVar83._8_4_ == 1) {
        plVar36 = (long *)__cxa_begin_catch(auVar83._0_8_);
        lVar46 = *plVar36;
        __cxa_end_catch();
        __this_05.fields._set._4_4_ = in_stack_fffffffffffffb6c;
        __this_05.fields._set._0_4_ = in_stack_fffffffffffffb68;
        __this_05.fields._index = (int32_t)in_stack_fffffffffffffb70;
        __this_05.fields._version = (int32_t)in_stack_fffffffffffffb74;
        __this_05.fields._current._0_4_ = in_stack_fffffffffffffb78;
        __this_05.fields._current._4_4_ = in_stack_fffffffffffffb7c;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_3219C30 *)auStack_458);
        if (lVar46 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar46);
      }
      __this_06.fields._set._4_4_ = in_stack_fffffffffffffb6c;
      __this_06.fields._set._0_4_ = in_stack_fffffffffffffb68;
      __this_06.fields._index = (int32_t)in_stack_fffffffffffffb70;
      __this_06.fields._version = (int32_t)in_stack_fffffffffffffb74;
      __this_06.fields._current._0_4_ = in_stack_fffffffffffffb78;
      __this_06.fields._current._4_4_ = in_stack_fffffffffffffb7c;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_06,(MethodInfo_3219C30 *)auStack_458);
      _Unwind_Resume(auVar83._0_8_);
    }
    layers->m_Items[0] = *(int32_t *)((long)TypeInfo_PhysicsLayer->m_Items[0x13] + 0x44);
    pIStack_210 = (Il2CppObject *)0x433ed66;
    mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
    pIStack_210 = (Il2CppObject *)0x433ed6f;
    iVar25 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      pIStack_210 = (Il2CppObject *)0x433ed89;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar91 = (Il2CppObject *)
              CONCAT44(UStack_188.fields.m_Direction.fields.z,UStack_188.fields.m_Direction.fields.y);
    pIVar90 = (Il2CppObject *)
              CONCAT44(UStack_188.fields.m_Direction.fields.x,UStack_188.fields.m_Origin.fields.z);
    pIStack_210 = (Il2CppObject *)0x433edbb;
    ray.fields._8_8_ = pIVar90;
    ray.fields.m_Origin.fields.x = UStack_188.fields.m_Origin.fields.x;
    ray.fields.m_Origin.fields.y = UStack_188.fields.m_Origin.fields.y;
    ray.fields.m_Direction.fields._4_8_ = pIVar91;
    pIVar89 = (Il2CppClass *)UStack_188.fields.m_Origin.fields._0_8_;
    bVar24 = UnityEngine_Physics__Raycast_4e78080
                       (ray,(UnityEngine_RaycastHit_o *)&_Stack_b8,100000.0,iVar25,(MethodInfo *)0x0);
    if ((char)bVar24 == '\0') {
      return;
    }
    if (unaff_R12 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_043406a9;
    pIStack_210 = (Il2CppObject *)0x433edd8;
    bVar24 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)unaff_R12,0,(MethodInfo *)0x0);
    if ((char)bVar24 != '\0') {
      pUVar29 = (__this->fields)._centerSquare;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pIStack_210 = (Il2CppObject *)0x433edf6;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_210 = (Il2CppObject *)0x433ee02;
      bVar24 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar24 != '\0') {
        pUVar29 = (__this->fields)._centerSquare;
        if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
        pIStack_210 = (Il2CppObject *)0x433ee1e;
        pUVar27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar29,(MethodInfo *)0x0);
        if (pUVar27 == (UnityEngine_GameObject_o *)0x0) goto label_043406a9;
        pIStack_210 = (Il2CppObject *)0x433ee31;
        bVar24 = UnityEngine_GameObject__get_activeSelf(pUVar27,(MethodInfo *)0x0);
        if ((char)bVar24 != '\0') {
          pUVar29 = (__this->fields)._centerSquare;
          if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
          pIStack_210 = (Il2CppObject *)0x433ee55;
          pUVar28 = (UnityEngine_Object_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar29,MethodInfo_Collider_GetComponent_Collider);
          pUVar13 = *(UnityEngine_Camera_o **)(CONCAT44(auVar74._4_4_,auVar74._0_4_) + 0x20);
          pIStack_210 = (Il2CppObject *)0x433ee68;
          UVar84 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          if (pUVar13 == (UnityEngine_Camera_o *)0x0) goto label_043406a9;
          pIStack_210 = (Il2CppObject *)0x433ee83;
          UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_188,pUVar13,UVar84,(MethodInfo *)0x0);
          fStack_c8 = UStack_188.fields.m_Direction.fields.y;
          fStack_c4 = UStack_188.fields.m_Direction.fields.z;
          auStack_e0._8_8_ = UStack_188.fields.m_Origin.fields._0_8_;
          fStack_d0 = UStack_188.fields.m_Origin.fields.z;
          fStack_cc = UStack_188.fields.m_Direction.fields.x;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pIStack_210 = (Il2CppObject *)0x433eebb;
            il2cpp_runtime_helper_02337ed0();
          }
          pIStack_210 = (Il2CppObject *)0x433eec7;
          bVar24 = UnityEngine_Object__op_Inequality(pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar24 != '\0') {
            UStack_188.fields.m_Direction.fields.y = fStack_c8;
            UStack_188.fields.m_Direction.fields.z = fStack_c4;
            UStack_188.fields.m_Origin.fields.x = (float)auStack_e0._8_4_;
            UStack_188.fields.m_Origin.fields.y = (float)auStack_e0._12_4_;
            UStack_188.fields.m_Origin.fields.z = fStack_d0;
            UStack_188.fields.m_Direction.fields.x = fStack_cc;
            if (pUVar28 == (UnityEngine_Object_o *)0x0) goto label_043406a9;
            pIVar91 = (Il2CppObject *)CONCAT44(fStack_c4,fStack_c8);
            pIVar90 = (Il2CppObject *)CONCAT44(fStack_cc,fStack_d0);
            pIStack_210 = (Il2CppObject *)0x433ef2b;
            ray_00.fields._8_8_ = pIVar90;
            ray_00.fields.m_Origin.fields.x = (float)auStack_e0._8_4_;
            ray_00.fields.m_Origin.fields.y = (float)auStack_e0._12_4_;
            ray_00.fields.m_Direction.fields._4_8_ = pIVar91;
            pIVar89 = (Il2CppClass *)auStack_e0._8_8_;
            bVar24 = UnityEngine_Collider__Raycast_4e812c0
                               ((UnityEngine_Collider_o *)pUVar28,ray_00,
                                (UnityEngine_RaycastHit_o *)&_Stack_78,100000.0,(MethodInfo *)0x0);
            if ((char)bVar24 != '\0') {
              uStack_98 = uStack_58;
              uStack_94 = uStack_54;
              pIStack_a8 = pIStack_68;
              uStack_a0 = uStack_60;
              uStack_9c = uStack_5c;
              _Stack_b8 = _Stack_78;
              pIStack_b0 = pIStack_70;
            }
          }
        }
      }
    }
    pIStack_210 = (Il2CppObject *)0x433ef6e;
    __this_12.fields._8_8_ = pIVar90;
    __this_12.fields.m_Point.fields._0_8_ = pIVar89;
    __this_12.fields.m_Normal.fields._4_8_ = pIVar91;
    __this_12.fields._24_8_ = in_stack_fffffffffffffe10;
    __this_12.fields.m_UV.fields.x = auVar74._0_4_;
    __this_12.fields.m_UV.fields.y = auVar74._4_4_;
    __this_12.fields.m_Collider = in_stack_fffffffffffffe20;
    __this_14 = UnityEngine_RaycastHit__get_collider(__this_12,(MethodInfo *)&_Stack_b8);
    if (__this_14 == (UnityEngine_Collider_o *)0x0) goto label_043406a9;
    pIStack_210 = (Il2CppObject *)0x433ef81;
    pUVar29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_14,(MethodInfo *)0x0);
    (__this->fields)._activeLine = pUVar29;
    pIStack_210 = (Il2CppObject *)0x433ef93;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar29);
    pUVar29 = (__this->fields)._planeXY;
    pUVar11 = (__this->fields)._activeLine;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_210 = (Il2CppObject *)0x433efb6;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_210 = (Il2CppObject *)0x433efc3;
    bVar24 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0);
    uVar42 = 1;
    if ((char)bVar24 == '\0') {
      pUVar29 = (__this->fields)._planeYZ;
      pUVar11 = (__this->fields)._activeLine;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pIStack_210 = (Il2CppObject *)0x433efec;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_210 = (Il2CppObject *)0x433eff9;
      bVar24 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0);
      if ((char)bVar24 == '\0') {
        pUVar29 = (__this->fields)._planeXZ;
        pUVar11 = (__this->fields)._activeLine;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pIStack_210 = (Il2CppObject *)0x433f020;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_210 = (Il2CppObject *)0x433f02d;
        bVar24 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0)
        ;
        uVar42 = (undefined1)bVar24;
      }
    }
    *(undefined1 *)&(__this->fields)._activeIsPlane = uVar42;
    pMVar32 = (MethodInfo *)(__this->fields)._centerSquare;
    pUVar29 = (__this->fields)._activeLine;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_210 = (Il2CppObject *)0x433f059;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_210 = (Il2CppObject *)0x433f066;
    bVar24 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pMVar32,(MethodInfo *)0x0);
    *(char *)((long)&(__this->fields)._activeIsPlane + 1) = (char)bVar24;
    pIStack_210 = (Il2CppObject *)0x433f075;
    pMVar48 = __this;
    MapEditor_PositionGizmo__ResetColors(__this,pMVar32);
    pIStack_210 = (Il2CppObject *)0x433f08d;
    MapEditor_PositionGizmo__SetLineColor
              (pMVar48,(__this->fields)._activeLine,(UnityEngine_Color_o)(__this->fields).SelectedColor.fields
               ,method_00);
    pIStack_210 = (Il2CppObject *)0x433f09c;
    __this_13.fields._8_8_ = pIVar90;
    __this_13.fields.m_Point.fields._0_8_ = pIVar89;
    __this_13.fields.m_Normal.fields._4_8_ = pIVar91;
    __this_13.fields._24_8_ = in_stack_fffffffffffffe10;
    __this_13.fields.m_UV.fields.x = auVar74._0_4_;
    __this_13.fields.m_UV.fields.y = auVar74._4_4_;
    __this_13.fields.m_Collider = in_stack_fffffffffffffe20;
    UVar84 = UnityEngine_RaycastHit__get_point(__this_13,(MethodInfo *)&_Stack_b8);
    *(long *)&(__this->fields)._dragPlane.fields.m_Distance = UVar84.fields._0_8_;
    (__this->fields)._previousMousePoint.fields.y = UVar84.fields.z;
    if ((char)(__this->fields)._activeIsPlane == '\0') goto label_0433f4bb;
    pIStack_210 = (Il2CppObject *)0x433f0ca;
    UVar84 = MapEditor_PositionGizmo__GetPlaneNormal(__this,(__this->fields)._activeLine,method_01);
    fVar72 = UVar84.fields.z;
    auVar74._0_4_ = UVar84.fields.x;
    auVar74._4_4_ = UVar84.fields.y;
    auStack_198._0_4_ = fVar72;
    pUVar29 = (__this->fields)._transform;
    if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
    pIStack_210 = (Il2CppObject *)0x433f0e9;
    uVar51 = extraout_XMM0_Dc_02;
    UVar84 = UnityEngine_Transform__get_position(pUVar29,(MethodInfo *)0x0);
    auStack_138._8_4_ = extraout_XMM0_Dc_03;
    auStack_138._0_8_ = UVar84.fields._0_8_;
    auStack_138._12_4_ = extraout_XMM0_Dd_03;
    if (g_data_057a6845 == '\0') {
      pIStack_210 = (Il2CppObject *)0x433f10b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar83._4_4_ = auVar74._4_4_;
    auVar83._0_4_ = auVar74._0_4_;
    auVar83._8_4_ = uVar51;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      pIStack_210 = (Il2CppObject *)0x433f135;
      il2cpp_runtime_helper_02337ed0();
      auVar83._4_4_ = auVar74._4_4_;
      auVar83._0_4_ = auVar74._0_4_;
      auVar83._8_4_ = uVar51;
    }
    uVar53 = 0;
    uVar54 = 0;
    auVar74._8_4_ = fVar72 * fVar72 + auVar83._4_4_ * auVar83._4_4_ + auVar83._0_4_ * auVar83._0_4_;
    if (auVar74._8_4_ < 0.0) {
      pIStack_210 = (Il2CppObject *)0x433f41d;
      auVar74._8_4_ = sqrtf(auVar74._8_4_);
      auVar83._4_4_ = auVar74._4_4_;
      auVar83._0_4_ = auVar74._0_4_;
      auVar83._8_4_ = uVar51;
      uVar53 = extraout_XMM0_Dc_04;
      uVar54 = extraout_XMM0_Dd_04;
      if (auVar74._8_4_ <= 1e-05) goto label_0433f435;
label_0433f179:
      auVar69._12_4_ = extraout_XMM0_Dd_02;
      auVar69._0_12_ = auVar83;
      fVar72 = fVar72 / auVar74._8_4_;
      auVar15._4_4_ = auVar74._8_4_;
      auVar15._0_4_ = auVar74._8_4_;
      auVar15._8_4_ = uVar53;
      auVar15._12_4_ = uVar54;
      auVar70 = divps(auVar69,auVar15);
      uVar38 = auVar70._0_8_;
    }
    else {
      auVar74._8_4_ = SQRT(auVar74._8_4_);
      if (1e-05 < auVar74._8_4_) goto label_0433f179;
label_0433f435:
      if (g_data_057a65d5 == '\0') {
        pIStack_210 = (Il2CppObject *)0x433f44a;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      uVar38 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar72 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    (__this->fields)._activeIsCenter = (int)uVar38;
    (__this->fields)._dragPlane.fields.m_Normal.fields.x = (float)(int)((ulong)uVar38 >> 0x20);
    (__this->fields)._dragPlane.fields.m_Normal.fields.y = fVar72;
    (__this->fields)._dragPlane.fields.m_Normal.fields.z =
         -(UVar84.fields.z * fVar72 +
          (float)auStack_138._4_4_ * (float)((ulong)uVar38 >> 0x20) + (float)auStack_138._0_4_ * (float)uVar38
          );
label_0433f4bb:
    (__this->fields)._snapAnchorLocal.fields.z = 0.0;
    pIStack_210 = (Il2CppObject *)0x433f4cd;
    UVar84 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    (__this->fields)._hasSnapAnchor = (int)UVar84.fields._0_8_;
    (__this->fields)._axisSnapDirection = (int)((ulong)UVar84.fields._0_8_ >> 0x20);
    return;
  }
  if (__this_00 == (Settings_KeybindSetting_o *)0x0) goto label_043406a9;
  pIStack_210 = (Il2CppObject *)0x433f19e;
  bVar24 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
  if ((char)bVar24 == '\0') {
    unaff_R12 = (__this->fields)._gameManager;
    if (unaff_R12 != (GameManagers_MapEditorGameManager_o *)0x0) {
      pSVar9 = (unaff_R12->fields).SelectedObjects;
      pIStack_210 = (Il2CppObject *)0x433f2a8;
      mapObjects = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
      pIStack_210 = (Il2CppObject *)0x433f2c0;
      System_Collections_Generic_List_object____ctor_362ba10
                ((System_Collections_Generic_List_object__o *)mapObjects,
                 (System_Collections_Generic_IEnumerable_T__o *)pSVar9,MethodInfo_List_1_Map_MapObject);
      pIStack_210 = (Il2CppObject *)0x433f2cf;
      auVar70 = il2cpp_runtime_helper_023052d0(TypeInfo_TransformPositionCommand);
      pMVar32 = auVar70._0_8_;
      pIStack_210 = (Il2CppObject *)0x433f2dd;
      MapEditor_TransformPositionCommand___ctor
                ((MapEditor_TransformPositionCommand_o *)pMVar32,mapObjects,auVar70._8_8_);
      pIStack_210 = (Il2CppObject *)0x433f2ef;
      GameManagers_MapEditorGameManager__NewCommand
                (unaff_R12,(MapEditor_BaseCommand_o *)pMVar32,1,(MethodInfo *)0x0);
      pIStack_210 = (Il2CppObject *)0x433f2f7;
      MapEditor_PositionGizmo__ResetColors(__this,pMVar32);
      (__this->fields)._activeLine = (UnityEngine_Transform_o *)0x0;
      pIStack_210 = (Il2CppObject *)0x433f30c;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      *(undefined2 *)&(__this->fields)._activeIsPlane = 0;
      *(undefined1 *)&(__this->fields)._previousMousePoint.fields.z = 0;
      *(undefined1 *)&(__this->fields)._snapAnchorLocal.fields.y = 0;
      *(undefined8 *)&(__this->fields)._vertexSnapOrigin.fields.z = 0;
      pIStack_210 = (Il2CppObject *)0x433f33f;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._vertexSnapOrigin.fields.z);
      (__this->fields)._snapAnchorLocal.fields.z = 0.0;
      pGVar50 = (__this->fields)._gameManager;
      goto joined_r0x0433f351;
    }
    goto label_043406a9;
  }
  if (unaff_R12 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_043406a9;
  pIStack_210 = (Il2CppObject *)0x433f1bb;
  bVar24 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)unaff_R12,0,(MethodInfo *)0x0);
  uVar39 = (undefined7)((ulong)__this_16 >> 8);
  pMVar32 = (MethodInfo *)CONCAT71(uVar39,1);
  if ((char)bVar24 == '\0') {
    pMVar32 = (MethodInfo *)CONCAT71(uVar39,*(undefined1 *)((long)&(__this->fields)._activeIsPlane + 1));
  }
  *(char *)&(__this->fields)._previousMousePoint.fields.z = (char)pMVar32;
  if (*(char *)((long)&(__this->fields)._activeIsPlane + 1) != '\0') {
    pIStack_210 = (Il2CppObject *)0x433f1ea;
    MapEditor_PositionGizmo__DoFreeDragVertexSnap
              (__this,(Cameras_BaseCamera_o *)CONCAT44(auVar74._4_4_,auVar74._0_4_),method_02);
    cVar6 = *(char *)&(__this->fields)._previousMousePoint.fields.z;
    goto joined_r0x0433f1f2;
  }
  if ((char)pMVar32 != '\0') {
    pUVar29 = (__this->fields)._lineX;
    pUVar11 = (__this->fields)._activeLine;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_210 = (Il2CppObject *)0x433f386;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_210 = (Il2CppObject *)0x433f393;
    bVar24 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0);
    pMVar41 = extraout_RDX;
    unaff_R12 = (GameManagers_MapEditorGameManager_o *)ppUVar1;
    if ((char)bVar24 == '\0') {
      pUVar29 = (__this->fields)._lineY;
      pUVar11 = (__this->fields)._activeLine;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pIStack_210 = (Il2CppObject *)0x433f3b3;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_210 = (Il2CppObject *)0x433f3c0;
      bVar24 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0);
      pMVar41 = extraout_RDX_00;
      if ((char)bVar24 == '\0') {
        pUVar29 = (__this->fields)._lineZ;
        pUVar11 = (__this->fields)._activeLine;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pIStack_210 = (Il2CppObject *)0x433f3e0;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_210 = (Il2CppObject *)0x433f3ed;
        bVar24 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0)
        ;
        pMVar41 = method_03;
        if ((char)bVar24 == '\0') {
          if (*(char *)&(__this->fields)._previousMousePoint.fields.z != '\0') {
            pIStack_210 = (Il2CppObject *)0x433f4f7;
            MapEditor_PositionGizmo__DoVertexSnap
                      (__this,(Cameras_BaseCamera_o *)CONCAT44(auVar74._4_4_,auVar74._0_4_),method_03);
            cVar6 = *(char *)&(__this->fields)._previousMousePoint.fields.z;
            goto joined_r0x0433f40d;
          }
          goto label_0433f50a;
        }
      }
    }
    pIStack_210 = (Il2CppObject *)0x433f402;
    MapEditor_PositionGizmo__DoAxisSurfaceSnap
              (__this,(Cameras_BaseCamera_o *)CONCAT44(auVar74._4_4_,auVar74._0_4_),pMVar41);
    cVar6 = *(char *)&(__this->fields)._previousMousePoint.fields.z;
joined_r0x0433f40d:
    pGVar50 = (GameManagers_MapEditorGameManager_o *)&TypeInfo_Object;
    goto joined_r0x0433f1f2;
  }
label_0433f50a:
  if (CONCAT44(auVar74._4_4_,auVar74._0_4_) == 0) goto label_043406a9;
  unaff_R12 = (GameManagers_MapEditorGameManager_o *)&TypeInfo_Object;
  bVar24 = (__this->fields)._activeIsPlane;
  pUVar13 = *(UnityEngine_Camera_o **)(CONCAT44(auVar74._4_4_,auVar74._0_4_) + 0x20);
  pIStack_210 = (Il2CppObject *)0x433f530;
  UVar84 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if (pUVar13 == (UnityEngine_Camera_o *)0x0) goto label_043406a9;
  if ((char)bVar24 != '\0') {
    pIStack_210 = (Il2CppObject *)0x433f554;
    UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_188,pUVar13,UVar84,(MethodInfo *)0x0);
    fStack_e8 = UStack_188.fields.m_Direction.fields.y;
    fStack_e4 = UStack_188.fields.m_Direction.fields.z;
    auStack_f8._0_4_ = UStack_188.fields.m_Origin.fields.x;
    auStack_f8._4_4_ = UStack_188.fields.m_Origin.fields.y;
    fStack_f0 = UStack_188.fields.m_Origin.fields.z;
    fStack_ec = UStack_188.fields.m_Direction.fields.x;
    uVar2 = (__this->fields)._activeIsCenter;
    uVar4 = (__this->fields)._dragPlane.fields.m_Normal.fields.x;
    fVar72 = (__this->fields)._dragPlane.fields.m_Normal.fields.y;
    auVar74._8_4_ =
         UStack_188.fields.m_Direction.fields.z * fVar72 +
         UStack_188.fields.m_Direction.fields.y * (float)uVar4 +
         UStack_188.fields.m_Direction.fields.x * (float)uVar2;
    fVar72 = -(fVar72 * UStack_188.fields.m_Origin.fields.z +
              UStack_188.fields.m_Origin.fields.y * (float)uVar4 +
              UStack_188.fields.m_Origin.fields.x * (float)uVar2) -
             (__this->fields)._dragPlane.fields.m_Normal.fields.z;
    pGVar50 = (GameManagers_MapEditorGameManager_o *)&TypeInfo_Object;
    if (g_data_057a68c8 == '\0') {
      auVar74._4_4_ = -0.0;
      _auStack_198 = ZEXT416((uint)auVar74._8_4_);
      pIStack_210 = (Il2CppObject *)0x433f612;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
      g_data_057a68c8 = '\x01';
      auVar74._0_4_ = fVar72;
    }
    auVar70 = ZEXT416((uint)ABS(auVar74._8_4_));
    if (ABS(auVar74._8_4_) <= 0.0) {
      auVar70 = ZEXT1216((undefined1  [12])0x0) << 0x20;
    }
    in_XMM2._4_12_ = auVar70._4_12_;
    auVar63._0_4_ = auVar70._0_4_ * 1e-06;
    fVar77 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
    if (auVar63._0_4_ <= fVar77) {
      auVar63._0_4_ = fVar77;
    }
    in_XMM2._0_4_ = auVar63._0_4_;
    if (ABS(0.0 - auVar74._8_4_) < auVar63._0_4_) goto label_0434065d;
    if (fVar72 / auVar74._8_4_ <= 0.0) goto label_0434065d;
    pIStack_210 = (Il2CppObject *)0x433f68c;
    __this_11.fields._8_8_ = in_stack_fffffffffffffe00;
    __this_11.fields.m_Origin.fields._0_8_ = in_stack_fffffffffffffdf8;
    __this_11.fields.m_Direction.fields._4_8_ = in_stack_fffffffffffffe08;
    UVar84 = UnityEngine_Ray__GetPoint(__this_11,fVar72 / auVar74._8_4_,(MethodInfo *)auStack_f8);
    fStack_120 = UVar84.fields.z;
    pIStack_128 = UVar84.fields._0_8_;
    uVar31 = *(ulong *)&(__this->fields)._dragPlane.fields.m_Distance;
    in_XMM2._8_8_ = 0;
    in_XMM2._0_8_ = uVar31;
    drag.fields.x = UVar84.fields.x - (float)uVar31;
    drag.fields.y = UVar84.fields.y - (float)(uVar31 >> 0x20);
    drag.fields.z = fStack_120 - (__this->fields)._previousMousePoint.fields.y;
    pIStack_210 = (Il2CppObject *)0x433f6c1;
    UVar84 = MapEditor_PositionGizmo__ProjectDragOntoPlaneHandle
                       (__this,drag,(__this->fields)._activeLine,method_04);
    fStack_140 = UVar84.fields.z;
    auStack_148 = UVar84.fields._0_8_;
    pMVar41 = (MethodInfo *)auStack_148;
    pIStack_210 = (Il2CppObject *)0x433f6ea;
    MapEditor_PositionGizmo__ApplySnap
              (__this,(UnityEngine_Vector3_o *)pMVar41,(UnityEngine_Vector3_o *)&pIStack_128,pMVar32);
    uVar51 = auStack_148._0_4_;
    uVar53 = auStack_148._4_4_;
    _auStack_1d8 = ZEXT416((uint)fStack_140);
    goto label_04340650;
  }
  pIStack_210 = (Il2CppObject *)0x433f709;
  UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_188,pUVar13,UVar84,(MethodInfo *)0x0);
  fVar77 = UStack_188.fields.m_Direction.fields.z;
  auVar63._0_4_ = UStack_188.fields.m_Direction.fields.y;
  auVar74._8_4_ = UStack_188.fields.m_Direction.fields.x;
  uVar38 = *(undefined8 *)&(__this->fields)._dragPlane.fields.m_Distance;
  auStack_198._0_4_ = UStack_188.fields.m_Origin.fields.x;
  auStack_168._0_4_ = (float)uVar38 - (float)auStack_198._0_4_;
  auStack_198._4_4_ = UStack_188.fields.m_Origin.fields.y;
  auStack_168._4_4_ = (float)((ulong)uVar38 >> 0x20) - (float)auStack_198._4_4_;
  auStack_138._0_4_ = UStack_188.fields.m_Origin.fields.z;
  fVar72 = (__this->fields)._previousMousePoint.fields.y - UStack_188.fields.m_Origin.fields.z;
  _fStack_160 = 0;
  fVar66 = (float)auStack_168._0_4_;
  fVar52 = (float)auStack_168._4_4_;
  if (g_data_057ac31a == '\0') {
    pIStack_210 = (Il2CppObject *)0x433f782;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057ac31a = '\x01';
    fVar66 = (float)auStack_168._0_4_;
    fVar52 = (float)auStack_168._4_4_;
  }
  fVar67 = fVar77 * fVar77 + auVar63._0_4_ * auVar63._0_4_ + auVar74._8_4_ * auVar74._8_4_;
  fVar66 = fVar72 * fVar72 + fVar52 * fVar52 + fVar66 * fVar66;
  if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
    auStack_158._0_4_ = fVar67;
    pIStack_210 = (Il2CppObject *)0x433f808;
    il2cpp_runtime_helper_02337ed0();
    fVar67 = (float)auStack_158._0_4_;
  }
  fVar67 = fVar67 * fVar66;
  if (fVar67 < 0.0) {
    pIStack_210 = (Il2CppObject *)0x433f849;
    fVar67 = sqrtf(fVar67);
    pMVar32 = TypeInfo_Math;
    auVar70 = auStack_158;
  }
  else {
    fVar67 = SQRT(fVar67);
    pMVar32 = TypeInfo_Math;
    auVar70 = auStack_158;
  }
  fVar52 = 0.0;
  TypeInfo_Math = pMVar32;
  auStack_158 = auVar70;
  if (1e-15 <= fVar67) {
    fVar67 = (fVar77 * fVar72 +
             auVar63._0_4_ * (float)auStack_168._4_4_ + auVar74._8_4_ * (float)auStack_168._0_4_) / fVar67;
    fVar52 = 1.0;
    if (fVar67 <= 1.0) {
      fVar52 = fVar67;
    }
    auStack_158 = ZEXT416(~-(uint)(-1.0 <= fVar67) & 0xbf800000 | (uint)fVar52 & -(uint)(-1.0 <= fVar67));
    auVar68 = auStack_158;
    if (*(int *)((long)&pMVar32[2].parameters + 4) == 0) {
      pIStack_210 = (Il2CppObject *)0x433f8c7;
      il2cpp_runtime_helper_02337ed0();
      auVar68 = auStack_158;
      auVar70 = auStack_158;
    }
    auStack_158 = auVar70;
    pIStack_210 = (Il2CppObject *)0x433f8db;
    dVar19 = acos((double)auVar68._0_4_,pMVar32);
    fVar52 = (float)dVar19 * 57.29578;
  }
  if (g_data_057a6841 == '\0') {
    auStack_158._0_4_ = fVar52;
    pIStack_210 = (Il2CppObject *)0x433fa8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
    iVar40 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
    fVar52 = (float)auStack_158._0_4_;
  }
  else {
    iVar40 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
  }
  if (iVar40 == 0) {
    auStack_158._0_4_ = fVar52;
    pIStack_210 = (Il2CppObject *)0x433fabb;
    il2cpp_runtime_helper_02337ed0();
    fVar52 = (float)auStack_158._0_4_;
  }
  uStack_84 = 0;
  fStack_80 = 0.0;
  fStack_7c = 0.0;
  if (fVar66 < 0.0) {
    auStack_158._0_4_ = fVar52 * 0.017453292;
    pIStack_210 = (Il2CppObject *)0x433f934;
    fStack_88 = sqrtf(fVar66);
    uStack_84 = extraout_XMM0_Db;
    fStack_80 = extraout_XMM0_Dc_05;
    fStack_7c = extraout_XMM0_Dd_05;
    fVar52 = (float)auStack_158._0_4_;
  }
  else {
    fStack_88 = SQRT(fVar66);
    fVar52 = fVar52 * 0.017453292;
  }
  pIStack_210 = (Il2CppObject *)0x433f94d;
  fVar52 = cosf(fVar52);
  fVar52 = fStack_88 / fVar52;
  auStack_198._0_4_ = (float)auStack_198._0_4_ + auVar74._8_4_ * fVar52;
  auStack_198._4_4_ = (float)auStack_198._4_4_ + auVar63._0_4_ * fVar52;
  fStack_190 = fStack_80 * 0.0 + 0.0;
  fStack_18c = fStack_7c * 0.0 + 0.0;
  auVar74._8_4_ = (float)auStack_138._0_4_ + fVar77 * fVar52;
  uVar31 = *(ulong *)&(__this->fields)._dragPlane.fields.m_Distance;
  in_XMM2._8_8_ = 0;
  in_XMM2._0_8_ = uVar31;
  auStack_138._0_4_ = auVar74._8_4_;
  auVar74._8_4_ = auVar74._8_4_ - (__this->fields)._previousMousePoint.fields.y;
  pUVar29 = (__this->fields)._lineY;
  pUVar11 = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStack_210 = (Il2CppObject *)0x433f9cb;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_1b8._0_4_ = (float)auStack_198._0_4_ - (float)uVar31;
  auStack_1b8._4_4_ = (float)auStack_198._4_4_ - (float)(uVar31 >> 0x20);
  auStack_1b8._8_4_ = fStack_190 - 0.0;
  auStack_1b8._12_4_ = fStack_18c - 0.0;
  pIStack_210 = (Il2CppObject *)0x433f9ea;
  auVar58 = auStack_1b8._0_16_;
  bVar24 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0);
  if ((char)bVar24 != '\0') {
    if (g_data_057a6845 == '\0') {
      pIStack_210 = (Il2CppObject *)0x433fa07;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      pIStack_210 = (Il2CppObject *)0x433fa1f;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar51 = 0;
    uVar53 = 0;
    if (fVar66 < 0.0) {
      pIStack_210 = (Il2CppObject *)0x433face;
      fVar66 = sqrtf(fVar66);
      uVar51 = extraout_XMM0_Dc_06;
      uVar53 = extraout_XMM0_Dd_06;
      if (fVar66 <= 1e-05) goto label_0433fae1;
label_0433fa4b:
      fVar72 = fVar72 / fVar66;
      auVar17._4_4_ = fVar66;
      auVar17._0_4_ = fVar66;
      auVar17._8_4_ = uVar51;
      auVar17._12_4_ = uVar53;
      auVar70 = divps(_auStack_168,auVar17);
      uVar51 = auVar70._0_4_;
      uVar53 = auVar70._4_4_;
      uVar54 = auVar70._8_4_;
      uVar55 = auVar70._12_4_;
      lVar46 = *(long *)(CONCAT44(auVar74._4_4_,auVar74._0_4_) + 0x28);
    }
    else {
      fVar66 = SQRT(fVar66);
      if (1e-05 < fVar66) goto label_0433fa4b;
label_0433fae1:
      if (g_data_057a65d5 == '\0') {
        pIStack_210 = (Il2CppObject *)0x433faf6;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar38 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar51 = (undefined4)uVar38;
      uVar53 = (undefined4)((ulong)uVar38 >> 0x20);
      uVar54 = 0;
      uVar55 = 0;
      fVar72 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      lVar46 = *(long *)(CONCAT44(auVar74._4_4_,auVar74._0_4_) + 0x28);
    }
    in_XMM2 = ZEXT416((uint)fVar72);
    auVar70 = auStack_1b8._0_16_;
    if (lVar46 == 0) goto label_043406a9;
    auStack_168._4_4_ = uVar53;
    auStack_168._0_4_ = uVar51;
    fStack_160 = (float)uVar54;
    fStack_15c = (float)uVar55;
    if (*(UnityEngine_Transform_o **)(lVar46 + 0x10) == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
    pIStack_210 = (Il2CppObject *)0x433fb59;
    auVar63._0_4_ = auStack_1b8._8_4_;
    fVar77 = auStack_1b8._12_4_;
    auVar74._0_4_ = (float)auStack_1b8._4_4_;
    auVar74._4_4_ = (float)auStack_1b8._4_4_;
    UVar84 = UnityEngine_Transform__get_up(*(UnityEngine_Transform_o **)(lVar46 + 0x10),(MethodInfo *)0x0);
    fVar66 = UVar84.fields.z * auVar74._8_4_ +
             UVar84.fields.y * auVar74._0_4_ + (float)auStack_1b8._0_4_ * UVar84.fields.x;
    fVar72 = fVar72 * fVar66 + fVar72 * fVar66;
    in_XMM2 = ZEXT416((uint)fVar72);
    auVar58._0_4_ =
         (float)auStack_1b8._0_4_ + (float)auStack_168._0_4_ * fVar66 + (float)auStack_168._0_4_ * fVar66;
    auVar58._4_4_ =
         (float)auStack_1b8._4_4_ + (float)auStack_168._4_4_ * fVar66 + (float)auStack_168._4_4_ * fVar66;
    auVar58._8_4_ = auStack_1b8._8_4_ + fStack_160 * auVar63._0_4_ + fStack_160 * auVar63._0_4_;
    auVar58._12_4_ = auStack_1b8._12_4_ + fStack_15c * fVar77 + fStack_15c * fVar77;
    auVar74._8_4_ = auVar74._8_4_ + fVar72;
    auStack_1b8._0_16_ = auVar58;
  }
  auVar70 = auStack_1b8._0_16_;
  if (*ppUVar1 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
  pIStack_210 = (Il2CppObject *)0x433fbc7;
  UVar84 = UnityEngine_Transform__get_right(*ppUVar1,(MethodInfo *)0x0);
  auVar59._4_12_ = auVar58._4_12_;
  auVar59._0_4_ = UVar84.fields.z;
  fVar72 = UVar84.fields.x;
  auVar63._0_4_ = UVar84.fields.y;
  auVar74._0_4_ = fVar72;
  auVar74._4_4_ = auVar63._0_4_;
  if (*ppUVar1 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
  pMVar41 = (MethodInfo *)0x0;
  pIStack_210 = (Il2CppObject *)0x433fbe4;
  fVar52 = extraout_XMM0_Dc_07;
  UVar84 = UnityEngine_Transform__get_right(*ppUVar1,(MethodInfo *)0x0);
  fVar77 = UVar84.fields.x;
  fVar66 = UVar84.fields.y;
  if (g_data_057a65d5 == '\0') {
    fStack_160 = (float)extraout_XMM0_Dc_08;
    auStack_168 = (undefined1  [8])UVar84.fields._0_8_;
    fStack_15c = (float)extraout_XMM0_Dd_08;
    pIStack_210 = (Il2CppObject *)0x433fc07;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
    fVar77 = (float)auStack_168._0_4_;
    fVar66 = (float)auStack_168._4_4_;
  }
  pGVar8 = (__this->fields)._gameManager;
  in_XMM2 = auVar59;
  auVar74._0_4_ = fVar72;
  auVar74._4_4_ = auVar63._0_4_;
  if (pGVar8 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_043406a9;
  auVar74._4_4_ = auVar74._8_4_ * UVar84.fields.z + fVar66 * auStack_1b8._4_4_ + auStack_1b8._0_4_ * fVar77;
  in_XMM2._0_4_ = auVar59._0_4_ * auVar74._4_4_;
  in_XMM2._4_12_ = auVar59._4_12_;
  auVar74._0_4_ = fVar72 * auVar74._4_4_;
  auVar74._4_4_ = auVar63._0_4_ * auVar74._4_4_;
  auVar74._8_4_ = fVar52 * 0.0;
  auVar74._12_4_ = extraout_XMM0_Dd_07 * 0.0;
  uVar31 = **(ulong **)(TypeInfo_Vector3 + 0xb8);
  uVar37 = (uint)(*(ulong **)(TypeInfo_Vector3 + 0xb8))[1];
  iVar40 = (pGVar8->fields).CurrentGizmoMode;
  if (iVar40 == 0) {
    auStack_1b8._8_8_ = 0;
    auStack_1b8._0_8_ = uVar31;
    auVar70 = auStack_1b8._0_16_;
    pMVar41 = (MethodInfo *)(__this->fields)._lineX;
    pUVar29 = (__this->fields)._activeLine;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_210 = (Il2CppObject *)0x433fcdc;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_210 = (Il2CppObject *)0x433fce9;
    bVar24 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pMVar41,(MethodInfo *)0x0);
    if ((char)bVar24 == '\0') {
      pMVar41 = (MethodInfo *)(__this->fields)._lineY;
      pUVar29 = (__this->fields)._activeLine;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pIStack_210 = (Il2CppObject *)0x433fd1e;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_210 = (Il2CppObject *)0x433fd2b;
      bVar24 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pMVar41,(MethodInfo *)0x0);
      if ((char)bVar24 != '\0') {
        auStack_1b8._0_4_ = (undefined4)uVar31;
        auStack_1b8._4_4_ = auVar74._4_4_;
        auStack_1b8._8_8_ = 0;
        goto label_0433fd41;
      }
      pMVar41 = (MethodInfo *)(__this->fields)._lineZ;
      pUVar29 = (__this->fields)._activeLine;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pIStack_210 = (Il2CppObject *)0x433fd7a;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_210 = (Il2CppObject *)0x433fd87;
      bVar24 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pMVar41,(MethodInfo *)0x0);
      if ((char)bVar24 == '\0') {
        in_XMM2 = ZEXT416(uVar37);
      }
      pGVar8 = (__this->fields)._gameManager;
    }
    else {
      auStack_1b8._4_4_ = (undefined4)(uVar31 >> 0x20);
      auStack_1b8._0_4_ = auVar74._0_4_;
      auStack_1b8._8_4_ = auVar74._8_4_;
      auStack_1b8._12_4_ = auVar74._12_4_;
label_0433fd41:
      in_XMM2 = ZEXT416(uVar37);
      pGVar8 = (__this->fields)._gameManager;
    }
    if (pGVar8 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_043406a9;
    uVar38 = auStack_1b8._0_8_;
    cVar6 = (char)(pGVar8->fields).Snap;
    _auStack_1d8 = in_XMM2;
    auVar68 = auStack_1b8._0_16_;
    auStack_1b8._0_16_ = auVar70;
  }
  else {
    if (iVar40 != 1) {
      auVar74._8_8_ = 0;
      auVar74._0_8_ = uVar31;
      in_XMM2 = ZEXT416(uVar37);
    }
    uVar38 = auVar74._0_8_;
    cVar6 = (char)(pGVar8->fields).Snap;
    _auStack_1d8 = in_XMM2;
    auVar68 = auVar74;
    auVar74._0_4_ = fVar72;
    auVar74._4_4_ = auVar63._0_4_;
  }
  if (cVar6 == '\0') {
label_0433fed5:
    pGVar50 = (GameManagers_MapEditorGameManager_o *)&TypeInfo_Object;
    *(undefined1 (*) [8])&(__this->fields)._dragPlane.fields.m_Distance = auStack_198;
    goto label_04340635;
  }
  uVar38 = auVar68._0_8_;
  pGVar50 = (GameManagers_MapEditorGameManager_o *)&TypeInfo_Object;
  iVar40 = (pGVar8->fields).CurrentGizmoMode;
  fVar72 = auVar68._0_4_;
  auVar74._8_4_ = auVar68._4_4_;
  uVar51 = auVar68._8_4_;
  uStack_1dc = auVar68._12_4_;
  auVar70 = auStack_1b8._0_16_;
  in_XMM2 = _auStack_1d8;
  if (iVar40 == 1) {
    lVar46 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
    if ((lVar46 != 0) && (lVar46 = *(long *)(lVar46 + 0x50), lVar46 != 0)) {
      auStack_1b8._0_4_ = *(float *)(lVar46 + 0x14);
      if (g_data_057a6841 == '\0') {
        pIStack_210 = (Il2CppObject *)0x433ff37;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        uVar38 = CONCAT44(auVar74._8_4_,fVar72);
        g_data_057a6841 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
        pIStack_210 = (Il2CppObject *)0x433ff60;
        il2cpp_runtime_helper_02337ed0();
        uVar38 = CONCAT44(auVar74._8_4_,fVar72);
      }
      auVar74._0_4_ = (float)((ulong)uVar38 >> 0x20);
      auVar74._0_4_ =
           (float)auStack_1d8._0_4_ * (float)auStack_1d8._0_4_ +
           auVar74._0_4_ * auVar74._0_4_ + (float)uVar38 * (float)uVar38;
      auStack_168._0_4_ = auVar74._0_4_;
      if (auVar74._0_4_ < 0.0) {
        pIStack_210 = (Il2CppObject *)0x434007e;
        auVar74._0_4_ = sqrtf(auVar74._0_4_);
      }
      else {
        auVar74._0_4_ = SQRT(auVar74._0_4_);
      }
      auVar74._0_4_ = auVar74._0_4_ / (float)auStack_1b8._0_4_;
      pIStack_210 = (Il2CppObject *)0x434009b;
      dVar19 = modf((double)auVar74._0_4_,(double *)&UStack_188,pMVar41);
      if (0.0 <= auVar74._0_4_) {
        if ((dVar19 != 0.5) || (NAN(dVar19))) {
          pIStack_210 = (Il2CppObject *)0x434027b;
          auVar74._0_4_ = floorf(auVar74._0_4_ + 0.5);
        }
        else {
          auVar74._0_4_ = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
          if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) != 0) {
            auVar74._0_4_ = auVar74._0_4_ + 1.0;
          }
        }
      }
      else if ((dVar19 != -0.5) || (NAN(dVar19))) {
        pIStack_210 = (Il2CppObject *)0x4340269;
        auVar74._0_4_ = ceilf(auVar74._0_4_ + -0.5);
      }
      else {
        auVar74._0_4_ = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
        if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) != 0) {
          auVar74._0_4_ = auVar74._0_4_ + -1.0;
        }
      }
      if (g_data_057a6845 == '\0') {
        pIStack_210 = (Il2CppObject *)0x4340298;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
        pIStack_210 = (Il2CppObject *)0x43402bc;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar53 = 0;
      uVar54 = 0;
      if ((float)auStack_168._0_4_ < 0.0) {
        pIStack_210 = (Il2CppObject *)0x43402e0;
        auVar74._4_4_ = sqrtf((float)auStack_168._0_4_);
        uVar53 = extraout_XMM0_Dc_10;
        uVar54 = extraout_XMM0_Dd_10;
      }
      else {
        auVar74._4_4_ = SQRT((float)auStack_168._0_4_);
      }
      auVar23._4_4_ = auVar74._8_4_;
      auVar23._0_4_ = fVar72;
      auVar23._8_4_ = uVar51;
      auVar23._12_4_ = uStack_1dc;
      auVar74._0_4_ = auVar74._0_4_ * (float)auStack_1b8._0_4_;
      if (auVar74._4_4_ <= 1e-05) {
        if (g_data_057a65d5 == '\0') {
          pIStack_210 = (Il2CppObject *)0x43403e2;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        auVar57 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
        auVar60._8_8_ = 0;
        auVar60._0_8_ = auVar57;
        auStack_1d8._0_4_ = *(undefined4 *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
        register0x00001284 = (undefined1  [12])0x0;
        auVar70 = _auStack_168;
      }
      else {
        auStack_1d8._0_4_ = (float)auStack_1d8._0_4_ / auVar74._4_4_;
        auVar18._4_4_ = auVar74._4_4_;
        auVar18._0_4_ = auVar74._4_4_;
        auVar18._8_4_ = uVar53;
        auVar18._12_4_ = uVar54;
        auVar60 = divps(auVar23,auVar18);
        auVar57 = auVar60._0_8_;
        auVar70 = _auStack_168;
      }
      _auStack_168 = auVar60;
      auVar74._4_4_ = auVar74._0_4_;
      auVar63._0_4_ = auVar74._0_4_;
      if (g_data_057a6841 == '\0') {
        pIStack_210 = (Il2CppObject *)0x4340340;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        fVar72 = auVar74._4_4_;
        auVar74._8_4_ = auVar63._0_4_;
        auVar70 = _auStack_168;
        auVar57 = auStack_168;
      }
      _auStack_168 = auVar70;
      auVar74._4_4_ = auVar74._4_4_ * SUB84(auVar57,0);
      auVar63._0_4_ = auVar63._0_4_ * (float)((ulong)auVar57 >> 0x20);
      uVar38 = CONCAT44(auVar63._0_4_,auVar74._4_4_);
      auStack_1d8._0_4_ = (float)auStack_1d8._0_4_ * auVar74._0_4_;
      if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
        pIStack_210 = (Il2CppObject *)0x4340387;
        il2cpp_runtime_helper_02337ed0();
        uVar38 = CONCAT44(auVar63._0_4_,auVar74._4_4_);
        fVar72 = auVar74._4_4_;
        auVar74._8_4_ = auVar63._0_4_;
      }
      auVar74._0_4_ = (float)uVar38;
      auVar74._4_4_ = (float)((ulong)uVar38 >> 0x20);
      auVar63._0_4_ =
           (float)auStack_1d8._0_4_ * (float)auStack_1d8._0_4_ +
           auVar74._4_4_ * auVar74._4_4_ + auVar74._0_4_ * auVar74._0_4_;
      if (0.0 <= auVar63._0_4_) goto label_04340600;
      goto label_04340612;
    }
    goto label_043406a9;
  }
  if (iVar40 != 0) goto label_0433fed5;
  lVar46 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if ((lVar46 == 0) ||
     (lVar46 = *(long *)(lVar46 + 0x50), auVar74._0_4_ = fVar72, auVar74._4_4_ = auVar74._8_4_, lVar46 == 0))
  goto label_043406a9;
  auStack_1b8._0_4_ = *(float *)(lVar46 + 0x14);
  pUVar29 = (__this->fields)._lineX;
  pUVar11 = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStack_210 = (Il2CppObject *)0x433fe2b;
    il2cpp_runtime_helper_02337ed0();
    auVar74._0_4_ = fVar72;
    auVar74._4_4_ = auVar74._8_4_;
  }
  pIStack_210 = (Il2CppObject *)0x433fe38;
  bVar24 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0);
  auVar70 = auStack_1b8._0_16_;
  if ((char)bVar24 != '\0') {
    pUVar29 = (__this->fields)._transform;
    if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
    pMVar32 = (MethodInfo *)0x0;
    pIStack_210 = (Il2CppObject *)0x433fe54;
    UVar84 = UnityEngine_Transform__get_position(pUVar29,(MethodInfo *)0x0);
    auStack_1c8._0_4_ = (UVar84.fields.x + auVar74._0_4_) / (float)auStack_1b8._0_4_;
    auStack_1c8._4_4_ = UVar84.fields.y;
    uStack_1c0 = extraout_XMM0_Dc_09;
    uStack_1bc = extraout_XMM0_Dd_09;
    pIStack_210 = (Il2CppObject *)0x433fe76;
    dVar19 = modf((double)(float)auStack_1c8._0_4_,(double *)&UStack_188,pMVar32);
    if (0.0 <= (float)auStack_1c8._0_4_) {
      if ((dVar19 != 0.5) || (NAN(dVar19))) {
        pIStack_210 = (Il2CppObject *)0x434049d;
        fVar72 = floorf((float)auStack_1c8._0_4_ + 0.5);
      }
      else {
        fVar72 = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
        if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) != 0) {
          fVar72 = fVar72 + 1.0;
          pUVar29 = (__this->fields)._transform;
          goto joined_r0x04340486;
        }
      }
label_0434049d:
      pUVar29 = (__this->fields)._transform;
    }
    else if ((dVar19 != -0.5) || (NAN(dVar19))) {
      pIStack_210 = (Il2CppObject *)0x434047f;
      fVar72 = ceilf((float)auStack_1c8._0_4_ + -0.5);
      pUVar29 = (__this->fields)._transform;
    }
    else {
      fVar72 = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
      if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) == 0) goto label_0434049d;
      fVar72 = fVar72 + -1.0;
      pUVar29 = (__this->fields)._transform;
    }
joined_r0x04340486:
    in_XMM2 = _auStack_1c8;
    if (pUVar29 != (UnityEngine_Transform_o *)0x0) {
      pMVar41 = (MethodInfo *)0x0;
      pIStack_210 = (Il2CppObject *)0x43404bc;
      UVar84 = UnityEngine_Transform__get_position(pUVar29,(MethodInfo *)0x0);
      auVar20._4_8_ = auVar68._8_8_;
      auVar20._0_4_ = auVar74._4_4_;
      auVar75._0_8_ = auVar20._0_8_ << 0x20;
      auVar75._8_4_ = uVar51;
      auVar75._12_4_ = uStack_1dc;
      auVar76._4_12_ = auVar75._4_12_;
      auVar76._0_4_ = fVar72 * (float)auStack_1b8._0_4_ - UVar84.fields.x;
      uVar38 = auVar76._0_8_;
label_04340585:
      pGVar50 = (GameManagers_MapEditorGameManager_o *)&TypeInfo_Object;
      auVar74._0_4_ = (float)uVar38;
      auVar74._4_4_ = (float)((ulong)uVar38 >> 0x20);
      if (g_data_057a6841 != '\0') goto label_043405ba;
      goto label_0434059d;
    }
    goto label_043406a9;
  }
  pUVar29 = (__this->fields)._lineY;
  pUVar11 = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStack_210 = (Il2CppObject *)0x433ffc1;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_210 = (Il2CppObject *)0x433ffce;
  bVar24 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)pUVar29,(MethodInfo *)0x0);
  if ((char)bVar24 != '\0') {
    pUVar29 = (__this->fields)._transform;
    if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
    pMVar32 = (MethodInfo *)0x0;
    pIStack_210 = (Il2CppObject *)0x433ffea;
    UVar84 = UnityEngine_Transform__get_position(pUVar29,(MethodInfo *)0x0);
    auStack_1c8._0_4_ = (auVar74._4_4_ + UVar84.fields.y) / (float)auStack_1b8._0_4_;
    auStack_1c8._4_4_ = auVar74._4_4_;
    uStack_1c0 = uVar51;
    uStack_1bc = uStack_1dc;
    pIStack_210 = (Il2CppObject *)0x434001a;
    dVar19 = modf((double)(float)auStack_1c8._0_4_,(double *)&UStack_188,pMVar32);
    if (0.0 <= (float)auStack_1c8._0_4_) {
      if ((dVar19 != 0.5) || (NAN(dVar19))) {
        pIStack_210 = (Il2CppObject *)0x434054c;
        fVar72 = floorf((float)auStack_1c8._0_4_ + 0.5);
      }
      else {
        fVar72 = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
        if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) != 0) {
          fVar72 = fVar72 + 1.0;
          pUVar29 = (__this->fields)._transform;
          goto joined_r0x04340535;
        }
      }
label_0434054c:
      pUVar29 = (__this->fields)._transform;
    }
    else if ((dVar19 != -0.5) || (NAN(dVar19))) {
      pIStack_210 = (Il2CppObject *)0x434052e;
      fVar72 = ceilf((float)auStack_1c8._0_4_ + -0.5);
      pUVar29 = (__this->fields)._transform;
    }
    else {
      fVar72 = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
      if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) == 0) goto label_0434054c;
      fVar72 = fVar72 + -1.0;
      pUVar29 = (__this->fields)._transform;
    }
joined_r0x04340535:
    in_XMM2 = _auStack_1c8;
    if (pUVar29 != (UnityEngine_Transform_o *)0x0) {
      pMVar41 = (MethodInfo *)0x0;
      pIStack_210 = (Il2CppObject *)0x434056b;
      UVar84 = UnityEngine_Transform__get_position(pUVar29,(MethodInfo *)0x0);
      uVar38 = CONCAT44(fVar72 * (float)auStack_1b8._0_4_ - UVar84.fields.y,auVar74._0_4_);
      goto label_04340585;
    }
    goto label_043406a9;
  }
  pMVar41 = (MethodInfo *)(__this->fields)._lineZ;
  pUVar29 = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStack_210 = (Il2CppObject *)0x43401af;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_210 = (Il2CppObject *)0x43401bc;
  bVar24 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar29,(UnityEngine_Object_o *)pMVar41,(MethodInfo *)0x0);
  if ((char)bVar24 == '\0') {
    pGVar50 = (GameManagers_MapEditorGameManager_o *)&TypeInfo_Object;
    goto label_043406e5;
  }
  pUVar29 = (__this->fields)._transform;
  if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
  pMVar32 = (MethodInfo *)0x0;
  pIStack_210 = (Il2CppObject *)0x43401d8;
  UVar84 = UnityEngine_Transform__get_position(pUVar29,(MethodInfo *)0x0);
  auStack_1d8._0_4_ = ((float)auStack_1d8._0_4_ + UVar84.fields.z) / (float)auStack_1b8._0_4_;
  pIStack_210 = (Il2CppObject *)0x43401fd;
  dVar19 = modf((double)(float)auStack_1d8._0_4_,(double *)&UStack_188,pMVar32);
  uVar51 = UStack_188.fields.m_Origin.fields.y;
  if (0.0 <= (float)auStack_1d8._0_4_) {
    if (dVar19 != 0.5) goto label_043406ae;
    if (NAN(dVar19)) goto label_043406ae;
    uVar53 = 0;
    uVar54 = 0;
    fVar72 = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
    if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) == 0) goto label_043406be;
    fVar72 = fVar72 + 1.0;
    pUVar29 = (__this->fields)._transform;
joined_r0x04340513:
    uVar54 = 0;
    uVar53 = 0;
  }
  else {
    if ((dVar19 == -0.5) && (!NAN(dVar19))) {
      uVar53 = 0;
      uVar54 = 0;
      fVar72 = (float)(double)UStack_188.fields.m_Origin.fields._0_8_;
      if (((long)(double)UStack_188.fields.m_Origin.fields._0_8_ & 1U) == 0) goto label_043406be;
      fVar72 = fVar72 + -1.0;
      pUVar29 = (__this->fields)._transform;
      goto joined_r0x04340513;
    }
    auStack_1d8._0_4_ = (float)auStack_1d8._0_4_ + -0.5;
    pIStack_210 = (Il2CppObject *)0x434069d;
    fVar72 = ceilf((float)auStack_1d8._0_4_);
    pUVar29 = (__this->fields)._transform;
    uVar51 = extraout_XMM0_Db_00;
    uVar53 = extraout_XMM0_Dc_11;
    uVar54 = extraout_XMM0_Dd_11;
  }
  pGVar50 = (GameManagers_MapEditorGameManager_o *)&TypeInfo_Object;
  in_XMM2 = _auStack_1d8;
  if (pUVar29 != (UnityEngine_Transform_o *)0x0) goto label_043406ca;
label_043406a9:
  do {
    do {
      auStack_1b8._0_16_ = auVar70;
      pIStack_210 = (Il2CppObject *)0x43406ae;
      il2cpp_runtime_helper_022b2c90();
      _auStack_1d8 = in_XMM2;
label_043406ae:
      auStack_1d8._0_4_ = auStack_1d8._0_4_ + 0.5;
      pIStack_210 = (Il2CppObject *)0x43406be;
      fVar72 = floorf((float)auStack_1d8._0_4_);
      uVar51 = extraout_XMM0_Db_01;
      uVar53 = extraout_XMM0_Dc_12;
      uVar54 = extraout_XMM0_Dd_12;
label_043406be:
      pUVar29 = (__this->fields)._transform;
      pGVar50 = unaff_R12;
      in_XMM2 = _auStack_1d8;
      auVar70 = auStack_1b8._0_16_;
    } while (pUVar29 == (UnityEngine_Transform_o *)0x0);
label_043406ca:
    auStack_1d8._4_4_ = uVar51;
    auStack_1d8._0_4_ = fVar72 * (float)auStack_1b8._0_4_;
    uStack_1d0 = uVar53;
    uStack_1cc = uVar54;
    pMVar41 = (MethodInfo *)0x0;
    pIStack_210 = (Il2CppObject *)0x43406dc;
    UVar84 = UnityEngine_Transform__get_position(pUVar29,(MethodInfo *)0x0);
    auStack_1d8._0_4_ = fVar72 * (float)auStack_1b8._0_4_ - UVar84.fields.z;
label_043406e5:
    uVar38 = CONCAT44(auVar74._4_4_,auVar74._0_4_);
    if (g_data_057a6841 == '\0') {
label_0434059d:
      pIStack_210 = (Il2CppObject *)0x43405a9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      uVar38 = CONCAT44(auVar74._4_4_,auVar74._0_4_);
      g_data_057a6841 = '\x01';
    }
label_043405ba:
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      pIStack_210 = (Il2CppObject *)0x43405d2;
      il2cpp_runtime_helper_02337ed0();
      uVar38 = CONCAT44(auVar74._4_4_,auVar74._0_4_);
    }
    fVar72 = (float)((ulong)uVar38 >> 0x20);
    auVar63._0_4_ = auStack_1d8._0_4_ * auStack_1d8._0_4_ + fVar72 * fVar72 + (float)uVar38 * (float)uVar38;
    fVar72 = auVar74._0_4_;
    auVar74._8_4_ = auVar74._4_4_;
    if (auVar63._0_4_ < 0.0) {
label_04340612:
      pIStack_210 = (Il2CppObject *)0x4340617;
      fVar72 = sqrtf(auVar63._0_4_);
      uVar38 = CONCAT44(auVar74._4_4_,auVar74._0_4_);
      if ((float)auStack_1b8._0_4_ <= fVar72) goto label_0434062d;
    }
    else {
label_04340600:
      auVar74._0_4_ = fVar72;
      auVar74._4_4_ = auVar74._8_4_;
      if ((float)auStack_1b8._0_4_ <= SQRT(auVar63._0_4_)) {
label_0434062d:
        *(undefined1 (*) [8])&(__this->fields)._dragPlane.fields.m_Distance = auStack_198;
label_04340635:
        (__this->fields)._previousMousePoint.fields.y = (float)auStack_138._0_4_;
      }
    }
    uVar51 = (undefined4)uVar38;
    uVar53 = (undefined4)((ulong)uVar38 >> 0x20);
    in_XMM2 = _auStack_1d8;
label_04340650:
    pIStack_210 = (Il2CppObject *)0x4340655;
    frameDelta.fields.y = (float)uVar53;
    frameDelta.fields.x = (float)uVar51;
    frameDelta.fields.z = auStack_1d8._0_4_;
    MapEditor_PositionGizmo__MoveSelectedObjects(__this,frameDelta,pMVar41);
    pIStack_210 = (Il2CppObject *)0x434065d;
    MapEditor_PositionGizmo__ResetCenter(__this,pMVar41);
label_0434065d:
    cVar6 = *(char *)&(__this->fields)._previousMousePoint.fields.z;
    unaff_R12 = pGVar50;
joined_r0x0433f1f2:
    if ((cVar6 == '\0') || (*(char *)&(__this->fields)._snapAnchorLocal.fields.y == '\0')) {
label_0434066b:
      pGVar50 = (__this->fields)._gameManager;
    }
    else {
      pUVar28 = *(UnityEngine_Object_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
      if (*(int *)&(pGVar50->klass->_2).field_0x1c == 0) {
        pIStack_210 = (Il2CppObject *)0x433f21e;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_210 = (Il2CppObject *)0x433f22a;
      bVar24 = UnityEngine_Object__op_Inequality(pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar24 == '\0') goto label_0434066b;
      pUVar29 = *(UnityEngine_Transform_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
      auVar70 = auStack_1b8._0_16_;
      if (pUVar29 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
      pUVar11 = (__this->fields)._transform;
      pIStack_210 = (Il2CppObject *)0x433f25f;
      UVar84 = UnityEngine_Transform__TransformPoint
                         (pUVar29,*(UnityEngine_Vector3_Fields *)&(__this->fields)._snapAnchorTransform,
                          (MethodInfo *)0x0);
      if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_043406a9;
      pIStack_210 = (Il2CppObject *)0x433f272;
      UnityEngine_Transform__set_position(pUVar11,UVar84,(MethodInfo *)0x0);
      pGVar50 = (__this->fields)._gameManager;
    }
joined_r0x0433f351:
    auVar70 = auStack_1b8._0_16_;
    if (pGVar50 != (GameManagers_MapEditorGameManager_o *)0x0) {
      *(undefined1 *)&((GameManagers_MapEditorGameManager_Fields *)((long)pGVar50 + 0xa4))->m_CachedPtr = 1;
      return;
    }
  } while( true );
}


// MapEditor.PositionGizmo$$GetPlaneNormal
// il2cpp: UnityEngine_Vector3_o MapEditor_PositionGizmo__GetPlaneNormal (MapEditor_PositionGizmo_o* __this, UnityEngine_Transform_o* plane, const MethodInfo* method);
// 0x4340f60

UnityEngine_Vector3_o
MapEditor_PositionGizmo__GetPlaneNormal
          (MapEditor_PositionGizmo_o *__this,UnityEngine_Transform_o *plane,MethodInfo *method)

{
  int iVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Object_o *x;
  Utility_BaseComponentCache_o *pUVar4;
  System_Collections_Generic_HashSet_object__o *__this_01;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  UnityEngine_Ray_o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  long *plVar10;
  MethodInfo *in_RCX;
  Cameras_BaseCamera_o *y;
  Cameras_BaseCamera_o *camera;
  MapEditor_PositionGizmo_o *__this_07;
  MethodInfo *in_R9;
  float fVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint uVar13;
  float extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint uVar14;
  float extraout_XMM0_Dd_01;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  uint uVar21;
  undefined8 extraout_XMM1_Qa_02;
  float fVar22;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar16 [16];
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qb_01;
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM1_Qb_02;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [12];
  UnityEngine_Vector3_o UVar38;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o UVar39;
  float in_stack_fffffffffffffec0;
  float in_stack_fffffffffffffec4;
  float in_stack_fffffffffffffec8;
  uint uVar40;
  float in_stack_fffffffffffffecc;
  uint uVar41;
  float in_stack_fffffffffffffed0;
  float in_stack_fffffffffffffed4;
  UnityEngine_Vector3_o UStack_120;
  float fStack_114;
  UnityEngine_Vector3_Fields UStack_110;
  undefined1 auStack_100 [40];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [16];
  Il2CppObject *pIStack_b8;
  undefined1 auStack_b0 [8];
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [12];
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  Il2CppType **ppIStack_58;
  undefined1 auStack_50 [16];
  Cameras_BaseCamera_o *pCStack_40;
  UnityEngine_Transform_o *pUStack_38;
  MapEditor_PositionGizmo_o *pMStack_30;
  undefined8 uVar15;
  
  if (g_data_057ae0c8 == '\0') {
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x4340f83;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0c8 = '\x01';
  }
  y = (Cameras_BaseCamera_o *)(__this->fields)._planeXY;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x4340fa7;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_30 = (MapEditor_PositionGizmo_o *)0x4340fb4;
  camera = y;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    y = (Cameras_BaseCamera_o *)(__this->fields)._planeYZ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pMStack_30 = (MapEditor_PositionGizmo_o *)0x4340fe7;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_30 = (MapEditor_PositionGizmo_o *)0x4340ff4;
    camera = y;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      y = (Cameras_BaseCamera_o *)(__this->fields)._planeXZ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_30 = (MapEditor_PositionGizmo_o *)0x4341024;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_30 = (MapEditor_PositionGizmo_o *)0x4341031;
      camera = y;
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        if (g_data_057a6844 == '\0') {
          pMStack_30 = (MapEditor_PositionGizmo_o *)0x434105c;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        uVar15 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar22 = (float)uVar15;
        fVar20 = (float)((ulong)uVar15 >> 0x20);
        fVar11 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
label_0434107e:
        UVar38.fields.y = fVar20;
        UVar38.fields.x = fVar22;
        UVar38.fields.z = fVar11;
        return (UnityEngine_Vector3_o)UVar38.fields;
      }
      pUVar9 = (__this->fields)._transform;
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        pMStack_30 = (MapEditor_PositionGizmo_o *)0x4341045;
        UVar38 = UnityEngine_Transform__get_up(pUVar9,(MethodInfo *)0x0);
        fVar11 = UVar38.fields.z;
        fVar22 = UVar38.fields.x;
        fVar20 = UVar38.fields.y;
        goto label_0434107e;
      }
    }
    else {
      pUVar9 = (__this->fields)._transform;
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        pMStack_30 = (MapEditor_PositionGizmo_o *)0x434100c;
        UVar38 = UnityEngine_Transform__get_right(pUVar9,(MethodInfo *)0x0);
        fVar11 = UVar38.fields.z;
        fVar22 = UVar38.fields.x;
        fVar20 = UVar38.fields.y;
        goto label_0434107e;
      }
    }
  }
  else {
    pUVar9 = (__this->fields)._transform;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      pMStack_30 = (MapEditor_PositionGizmo_o *)0x4340fcc;
      UVar38 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
      fVar11 = UVar38.fields.z;
      fVar22 = UVar38.fields.x;
      fVar20 = UVar38.fields.y;
      goto label_0434107e;
    }
  }
  __this_07 = (MapEditor_PositionGizmo_o *)0x0;
  pMStack_30 = (MapEditor_PositionGizmo_o *)0x434108f;
  il2cpp_runtime_helper_022b2c90();
  auVar16._8_8_ = extraout_XMM1_Qb;
  auVar16._0_8_ = extraout_XMM1_Qa;
  pCStack_40 = y;
  pUStack_38 = plane;
  pMStack_30 = __this;
  if (g_data_057ae0cd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0();
    auVar16._8_8_ = extraout_XMM1_Qb_00;
    auVar16._0_8_ = extraout_XMM1_Qa_00;
    g_data_057ae0cd = '\x01';
  }
  fVar11 = 0.0;
  uVar12 = 0;
  auStack_100._32_8_ = (Il2CppRGCTXData *)0x0;
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  fStack_d0 = 0.0;
  fStack_cc = 0.0;
  UStack_120.fields.z = 0.0;
  UStack_120.fields.x = 0.0;
  UStack_120.fields.y = 0.0;
  UStack_110.z = 0.0;
  UStack_110.x = 0.0;
  UStack_110.y = 0.0;
  auStack_100._0_8_ = (Il2CppRGCTXData *)0x0;
  auStack_100._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_100._16_8_ = (Il2CppObject *)0x0;
  pGVar2 = (__this_07->fields)._gameManager;
  if ((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar3 = (pGVar2->fields).SelectedObjects,
     pSVar3 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_04341781;
  if ((pSVar3->fields)._count == 0) goto label_04341774;
  if (camera != (Cameras_BaseCamera_o *)0x0) {
    __this_00 = (camera->fields).Camera;
    UVar38 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    auVar16._0_4_ = UVar38.fields.z;
    if (__this_00 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0
                ((UnityEngine_Ray_o *)auStack_c8,__this_00,UVar38,(MethodInfo *)0x0);
      fStack_d0 = SUB84(pIStack_b8,0);
      fStack_cc = (float)((ulong)pIStack_b8 >> 0x20);
      auStack_100._32_8_ = auStack_c8._0_8_;
      fStack_d8 = (float)auStack_c8._8_4_;
      fStack_d4 = (float)auStack_c8._12_4_;
      if (*(char *)&(__this_07->fields)._snapAnchorLocal.fields.y == '\0') {
label_0434121d:
        auStack_88._0_8_ = (Il2CppMethodPointer)0x0;
        auStack_c8._8_4_ = 0.0;
        auStack_c8._0_8_ = (Il2CppRGCTXData *)0x0;
        in_RCX = (MethodInfo *)auStack_88;
        bVar8 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                          (__this_07,camera,&UStack_120,(UnityEngine_Transform_o **)in_RCX,
                           (UnityEngine_Vector3_o *)auStack_c8,in_R9);
        fVar11 = extraout_XMM0_Da;
        uVar12 = extraout_XMM0_Db;
        if ((char)bVar8 == '\0') goto label_04341774;
        pUVar4 = (camera->fields).Cache;
      }
      else {
        x = *(UnityEngine_Object_o **)&(__this_07->fields)._vertexSnapOrigin.fields.z;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          auVar16._8_8_ = extraout_XMM1_Qb_01;
          auVar16._0_8_ = extraout_XMM1_Qa_01;
        }
        bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') goto label_0434121d;
        pUVar9 = *(UnityEngine_Transform_o **)&(__this_07->fields)._vertexSnapOrigin.fields.z;
        if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04341781;
        auVar37 = ZEXT812(0);
        UVar38 = UnityEngine_Transform__TransformPoint
                           (pUVar9,*(UnityEngine_Vector3_Fields *)&(__this_07->fields)._snapAnchorTransform,
                            (MethodInfo *)0x0);
        auVar16._0_4_ = UVar38.fields.z;
        auVar16._4_12_ = auVar37;
        UStack_120.fields._0_8_ = UVar38.fields._0_8_;
        pUVar4 = (camera->fields).Cache;
        UStack_120.fields.z = auVar16._0_4_;
      }
      if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar9 = (pUVar4->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
        UVar38 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
        auVar17._4_12_ = auVar16._4_12_;
        auVar17._0_4_ = UVar38.fields.z;
        uVar15 = auVar17._0_8_;
        fVar20 = UVar38.fields.x;
        fVar27 = UVar38.fields.y;
        register0x000012c8 = 0;
        auStack_b0._0_4_ = UStack_120.fields.x;
        auStack_b0._4_4_ = UStack_120.fields.y;
        auStack_a0._0_16_ = ZEXT416((uint)UStack_120.fields.z);
        fVar11 = UStack_120.fields.z;
        fVar22 = 0.0;
        if (g_data_057a68cb == '\0') {
          in_stack_fffffffffffffec4 = auVar16._4_4_;
          in_stack_fffffffffffffec8 = auVar16._8_4_;
          in_stack_fffffffffffffecc = auVar16._12_4_;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          uVar15 = CONCAT44(in_stack_fffffffffffffec4,auVar17._0_4_);
          g_data_057a68cb = '\x01';
          fVar11 = (float)auStack_a0._0_4_;
          fVar22 = (float)auStack_a0._4_4_;
          in_stack_fffffffffffffed0 = fVar20;
          in_stack_fffffffffffffed4 = fVar27;
        }
        auVar17._0_4_ = auStack_b0._4_4_;
        auStack_50._4_4_ = auVar17._0_4_;
        auStack_50._0_4_ = auVar17._0_4_;
        auStack_50._8_4_ = auStack_b0._8_4_;
        auStack_50._12_4_ = auStack_b0._12_4_;
        fVar26 = fVar27 - auVar17._0_4_;
        fVar11 = (float)uVar15 - fVar11;
        fVar20 = fVar20 - auStack_b0._0_4_;
        fVar22 = (float)((ulong)uVar15 >> 0x20) - fVar22;
        auVar17._0_4_ = fVar27 - auVar17._0_4_;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_stack_fffffffffffffec4 = fVar20;
          in_stack_fffffffffffffec8 = fVar22;
          in_stack_fffffffffffffecc = auVar17._0_4_;
          in_stack_fffffffffffffed0 = fVar26;
          in_stack_fffffffffffffed4 = fVar27;
        }
        in_stack_fffffffffffffec0 = fVar20 * fVar20 + fVar26 * fVar26 + fVar11 * fVar11;
        auVar19 = ZEXT816(0);
        if (in_stack_fffffffffffffec0 < 0.0) {
          in_stack_fffffffffffffec0 = sqrtf(in_stack_fffffffffffffec0);
        }
        else {
          in_stack_fffffffffffffec0 = SQRT(in_stack_fffffffffffffec0);
        }
        bVar8 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_4243720
                          (__this_07,camera,30.0,(UnityEngine_Vector3_o *)&UStack_110,in_RCX);
        if ((char)bVar8 == '\0') {
label_043413d6:
          pUVar4 = (camera->fields).Cache;
          if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar9 = (pUVar4->fields).Transform, pUVar9 == (UnityEngine_Transform_o *)0x0))
          goto label_04341781;
          UVar38 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
          fVar22 = UVar38.fields.z;
          uVar31 = UVar38.fields._0_8_;
          uVar21 = auVar19._4_4_;
          uVar13 = auVar19._8_4_;
          uVar14 = auVar19._12_4_;
          fVar20 = UVar38.fields.x;
          in_stack_fffffffffffffed4 = UVar38.fields.y;
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            uVar31 = CONCAT44(in_stack_fffffffffffffed4,fVar20);
            g_data_057a6845 = '\x01';
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
            uVar31 = CONCAT44(in_stack_fffffffffffffed4,fVar20);
          }
          fVar11 = (float)(uVar31 >> 0x20);
          fVar11 = fVar22 * fVar22 + fVar11 * fVar11 + (float)uVar31 * (float)uVar31;
          uVar40 = uVar13;
          uVar41 = uVar14;
          if (fVar11 < 0.0) {
            fVar11 = sqrtf(fVar11);
            uVar31 = CONCAT44(in_stack_fffffffffffffed4,fVar20);
            uVar13 = extraout_XMM0_Dc_00;
            uVar14 = extraout_XMM0_Dd_00;
            if (1e-05 < fVar11) goto label_043414a3;
label_04341454:
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            auVar33._8_8_ = 0;
            auVar33._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
            fVar27 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
            uVar28 = 0;
            uVar29 = 0;
            uVar30 = 0;
          }
          else {
            fVar11 = SQRT(fVar11);
            if (fVar11 <= 1e-05) goto label_04341454;
label_043414a3:
            uVar28 = uVar21 ^ 0x80000000;
            uVar29 = uVar40 ^ 0x80000000;
            uVar30 = uVar41 ^ 0x80000000;
            auVar32._0_8_ = uVar31 ^ 0x8000000080000000;
            auVar32._8_4_ = extraout_XMM0_Dc ^ 0x80000000;
            auVar32._12_4_ = extraout_XMM0_Dd ^ 0x80000000;
            fVar27 = -fVar22 / fVar11;
            auVar6._4_4_ = fVar11;
            auVar6._0_4_ = fVar11;
            auVar6._8_4_ = uVar13;
            auVar6._12_4_ = uVar14;
            auVar33 = divps(auVar32,auVar6);
          }
          fVar23 = auVar33._0_4_;
          fVar25 = auVar33._4_4_;
          uVar12 = auVar33._8_4_;
          uVar34 = auVar33._12_4_;
          fVar26 = fStack_cc * fVar27 + fStack_d0 * fVar25 + fVar23 * fStack_d4;
          fVar11 = fStack_d8 * fVar27;
          auVar17._0_4_ = fVar25;
          uVar13 = 0;
          uVar14 = 0;
          fVar35 = (float)auStack_100._32_8_;
          fVar36 = SUB84(auStack_100._32_8_,4);
          if (g_data_057a68c8 == '\0') {
            uStack_60 = (Il2CppRGCTXData *)auStack_100._32_8_;
            ppIStack_58 = (Il2CppType **)0x0;
            auStack_70 = ZEXT416((uint)fVar26);
            fStack_114 = fStack_d8 * fVar27;
            auStack_88._8_4_ = fVar25;
            fStack_7c = fVar25;
            uStack_78 = uVar12;
            uStack_74 = uVar34;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
            auVar33._4_4_ = fVar25;
            auVar33._0_4_ = fVar23;
            auVar33._8_4_ = uVar12;
            auVar33._12_4_ = uVar34;
            g_data_057a68c8 = '\x01';
            fVar11 = fStack_114;
            auVar17._0_4_ = (float)auStack_88._8_4_;
            fVar26 = (float)auStack_70._0_4_;
            uVar13 = auStack_70._8_4_;
            uVar14 = auStack_70._12_4_;
            fVar35 = (float)uStack_60;
            fVar36 = uStack_60._4_4_;
            fVar22 = fVar27;
            uVar21 = uVar28;
            uVar40 = uVar29;
            uVar41 = uVar30;
            fVar20 = fVar23;
            in_stack_fffffffffffffed4 = fVar25;
          }
          uVar12 = 0;
          auVar16 = ZEXT416((uint)ABS(0.0 - fVar26));
          auVar24._0_4_ = ABS(fVar26);
          auVar24._4_4_ = 0;
          auVar24._8_4_ = uVar13 & 0x7fffffff;
          auVar24._12_4_ = uVar14 & 0x7fffffff;
          if (auVar24._0_4_ <= 0.0) {
            auVar7._12_4_ = 0;
            auVar7._0_12_ = auVar24._4_12_;
            auVar24 = auVar7 << 0x20;
          }
          fVar23 = auVar24._0_4_ * 1e-06;
          fVar25 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
          if (fVar23 <= fVar25) {
            fVar23 = fVar25;
          }
          if (ABS(0.0 - fVar26) < fVar23) goto label_04341774;
          auVar16._4_12_ = auStack_b0._4_12_;
          auVar16._0_4_ = auStack_b0._0_4_ * auVar33._0_4_;
          fVar11 = fVar11 + fVar36 * auVar17._0_4_ + auVar33._0_4_ * fVar35;
          fVar26 = ((fVar27 * (float)auStack_a0._0_4_ +
                    (float)auStack_50._0_4_ * auVar17._0_4_ + auVar16._0_4_) - fVar11) / fVar26;
          if (fVar26 <= 0.0) goto label_04341774;
          __this_02.fields.m_Origin.fields.y = (float)uVar21;
          __this_02.fields.m_Origin.fields.x = fVar22;
          __this_02.fields.m_Origin.fields.z = (float)uVar40;
          __this_02.fields.m_Direction.fields.x = (float)uVar41;
          __this_02.fields.m_Direction.fields.y = fVar20;
          __this_02.fields.m_Direction.fields.z = in_stack_fffffffffffffed4;
          UVar38 = UnityEngine_Ray__GetPoint(__this_02,fVar26,(MethodInfo *)(auStack_100 + 0x20));
          in_stack_fffffffffffffec0 = UVar38.fields.x - (float)auStack_b0._0_4_;
          in_stack_fffffffffffffec4 = UVar38.fields.y - (float)auStack_b0._4_4_;
          in_stack_fffffffffffffec8 = extraout_XMM0_Dc_01 - fStack_a8;
          in_stack_fffffffffffffecc = extraout_XMM0_Dd_01 - fStack_a4;
          in_stack_fffffffffffffed0 = UVar38.fields.z - (float)auStack_a0._0_4_;
          uVar12 = auVar16._4_4_;
          fVar11 = in_stack_fffffffffffffed0 * in_stack_fffffffffffffed0 +
                   in_stack_fffffffffffffec4 * in_stack_fffffffffffffec4 +
                   in_stack_fffffffffffffec0 * in_stack_fffffffffffffec0;
        }
        else {
          fVar22 = in_stack_fffffffffffffec0 * 0.3;
          if (fVar22 <= 60.0) {
            fVar22 = 60.0;
          }
          in_stack_fffffffffffffec0 = UStack_110.x - (float)auStack_b0._0_4_;
          in_stack_fffffffffffffec4 = UStack_110.y - (float)auStack_b0._4_4_;
          in_stack_fffffffffffffec8 = 0.0 - fStack_a8;
          in_stack_fffffffffffffecc = 0.0 - fStack_a4;
          in_stack_fffffffffffffed0 = UStack_110.z - (float)auStack_a0._0_4_;
          fVar11 = in_stack_fffffffffffffec4 * in_stack_fffffffffffffec4;
          auVar18._4_4_ = fVar11;
          auVar18._0_4_ = fVar11;
          auVar18._8_4_ = in_stack_fffffffffffffec8 * in_stack_fffffffffffffec8;
          auVar18._12_4_ = in_stack_fffffffffffffecc * in_stack_fffffffffffffecc;
          auVar19._4_12_ = auVar18._4_12_;
          auVar19._0_4_ = fVar11 + in_stack_fffffffffffffec0 * in_stack_fffffffffffffec0;
          uVar12 = 0;
          fVar11 = in_stack_fffffffffffffed0 * in_stack_fffffffffffffed0 + auVar19._0_4_;
          if (fVar22 * fVar22 < fVar11) goto label_043413d6;
        }
        auVar16._0_12_ = ZEXT812(0x322bcc77);
        auVar16._12_4_ = 0;
        if (fVar11 < 1e-08) goto label_04341774;
        pGVar2 = (__this_07->fields)._gameManager;
        if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
           (__this_01 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
           __this_01 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
          System_Collections_Generic_HashSet_object___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_c8,__this_01,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
          auStack_100._16_8_ = pIStack_b8;
          auStack_100._8_8_ = CONCAT44(auStack_c8._12_4_,auStack_c8._8_4_);
          auStack_100._0_8_ = auStack_c8._0_8_;
          while (__this_03.fields._set._4_4_ = in_stack_fffffffffffffec4,
                __this_03.fields._set._0_4_ = in_stack_fffffffffffffec0,
                __this_03.fields._index = (int32_t)in_stack_fffffffffffffec8,
                __this_03.fields._version = (int32_t)in_stack_fffffffffffffecc,
                __this_03.fields._current._0_4_ = in_stack_fffffffffffffed0,
                __this_03.fields._current._4_4_ = in_stack_fffffffffffffed4,
                bVar8 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                  (__this_03,(MethodInfo_3219C40 *)auStack_100), (char)bVar8 != '\0') {
            if ((Il2CppObject *)auStack_100._16_8_ == (Il2CppObject *)0x0) goto label_04341786;
            if (((Il2CppObject *)(auStack_100._16_8_ + 0x10))->monitor == (UnityEngine_GameObject_o *)0x0)
            goto label_0434178b;
            pUVar9 = UnityEngine_GameObject__get_transform
                               (((Il2CppObject *)(auStack_100._16_8_ + 0x10))->monitor,(MethodInfo *)0x0);
            if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04341790;
            UVar38 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
            value.fields.x = UVar38.fields.x + in_stack_fffffffffffffec0;
            value.fields.y = UVar38.fields.y + in_stack_fffffffffffffec4;
            value.fields.z = UVar38.fields.z + in_stack_fffffffffffffed0;
            auVar16._0_4_ = value.fields.z;
            UnityEngine_Transform__set_position(pUVar9,value,(MethodInfo *)0x0);
          }
          __this_04.fields._set._4_4_ = in_stack_fffffffffffffec4;
          __this_04.fields._set._0_4_ = in_stack_fffffffffffffec0;
          __this_04.fields._index = (int32_t)in_stack_fffffffffffffec8;
          __this_04.fields._version = (int32_t)in_stack_fffffffffffffecc;
          __this_04.fields._current._0_4_ = in_stack_fffffffffffffed0;
          __this_04.fields._current._4_4_ = in_stack_fffffffffffffed4;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_3219C30 *)auStack_100);
          fVar11 = extraout_XMM0_Da_00;
          uVar12 = extraout_XMM0_Db_00;
          goto label_04341774;
        }
      }
    }
  }
label_04341781:
  il2cpp_runtime_helper_022b2c90();
label_04341786:
  il2cpp_runtime_helper_022b2c90();
label_0434178b:
  il2cpp_runtime_helper_022b2c90();
label_04341790:
  auVar37 = il2cpp_runtime_helper_022b2c90();
  if (auVar37._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar37._0_8_);
    lVar5 = *plVar10;
    __cxa_end_catch();
    auVar16._8_8_ = extraout_XMM1_Qb_02;
    auVar16._0_8_ = extraout_XMM1_Qa_02;
    __this_05.fields._set._4_4_ = in_stack_fffffffffffffec4;
    __this_05.fields._set._0_4_ = in_stack_fffffffffffffec0;
    __this_05.fields._index = (int32_t)in_stack_fffffffffffffec8;
    __this_05.fields._version = (int32_t)in_stack_fffffffffffffecc;
    __this_05.fields._current._0_4_ = in_stack_fffffffffffffed0;
    __this_05.fields._current._4_4_ = in_stack_fffffffffffffed4;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_05,(MethodInfo_3219C30 *)auStack_100);
    fVar11 = extraout_XMM0_Da_01;
    uVar12 = extraout_XMM0_Db_01;
    if (lVar5 == 0) {
label_04341774:
      UVar39.fields.y = (float)uVar12;
      UVar39.fields.x = fVar11;
      UVar39.fields.z = auVar16._0_4_;
      return (UnityEngine_Vector3_o)UVar39.fields;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_06.fields._set._4_4_ = in_stack_fffffffffffffec4;
  __this_06.fields._set._0_4_ = in_stack_fffffffffffffec0;
  __this_06.fields._index = (int32_t)in_stack_fffffffffffffec8;
  __this_06.fields._version = (int32_t)in_stack_fffffffffffffecc;
  __this_06.fields._current._0_4_ = in_stack_fffffffffffffed0;
  __this_06.fields._current._4_4_ = in_stack_fffffffffffffed4;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_06,(MethodInfo_3219C30 *)auStack_100);
  _Unwind_Resume(auVar37._0_8_);
}


// MapEditor.PositionGizmo$$ProjectDragOntoPlaneHandle
// il2cpp: UnityEngine_Vector3_o MapEditor_PositionGizmo__ProjectDragOntoPlaneHandle (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o drag, UnityEngine_Transform_o* plane, const MethodInfo* method);
// 0x4342920

UnityEngine_Vector3_o
MapEditor_PositionGizmo__ProjectDragOntoPlaneHandle
          (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o drag,UnityEngine_Transform_o *plane,
          MethodInfo *method)

{
  int iVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  long lVar3;
  undefined8 uVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  double dVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar6;
  UnityEngine_Transform_o *pUVar7;
  long *plVar8;
  MethodInfo *extraout_RDX;
  undefined8 *extraout_RDX_00;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  MapEditor_PositionGizmo_o *pMVar11;
  MapEditor_PositionGizmo_o *pMVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar14;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  float extraout_XMM0_Dc;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  float extraout_XMM0_Dd;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [12];
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o UVar24;
  undefined1 in_stack_fffffffffffffea8 [12];
  Il2CppRGCTXData *pIVar25;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_110;
  MapEditor_PositionGizmo_o *pMStack_f8;
  undefined8 *puStack_f0;
  MapEditor_PositionGizmo_o *pMStack_e8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [8];
  float fStack_98;
  float fStack_94;
  MapEditor_PositionGizmo_o *pMStack_88;
  float local_48;
  
  fVar19 = drag.fields.z;
  fVar14 = drag.fields.y;
  pMVar9 = (MethodInfo *)plane;
  pMVar11 = __this;
  UVar22.fields.z = fVar19;
  if (g_data_057ae0c9 == '\0') {
    pMVar11 = (MapEditor_PositionGizmo_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0c9 = '\x01';
    method = extraout_RDX;
  }
  pGVar2 = (__this->fields)._gameManager;
  if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
    local_48 = drag.fields.x;
    if ((pGVar2->fields).CurrentGizmoMode == 0) {
      pUVar7 = (__this->fields)._planeXY;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pUVar7 = (__this->fields)._planeYZ;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pUVar7 = (__this->fields)._planeXZ;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)plane,(UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            fVar14 = 0.0;
          }
        }
        else {
          local_48 = 0.0;
        }
      }
      else {
        fVar19 = 0.0;
      }
    }
    else {
      UVar21 = MapEditor_PositionGizmo__GetPlaneNormal(__this,plane,method);
      UVar22.fields.z = UVar21.fields.z * fVar19 + UVar21.fields.y * fVar14 + local_48 * UVar21.fields.x;
      local_48 = local_48 - UVar22.fields.z * UVar21.fields.x;
      fVar14 = fVar14 - UVar22.fields.z * UVar21.fields.y;
      fVar19 = fVar19 - UVar21.fields.z * UVar22.fields.z;
    }
    UVar21.fields.y = fVar14;
    UVar21.fields.x = local_48;
    UVar21.fields.z = fVar19;
    return (UnityEngine_Vector3_o)UVar21.fields;
  }
  uVar13 = il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar9;
  pMVar12 = pMVar11;
  pMStack_88 = __this;
  if (g_data_057ae0ca == '\0') {
    pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342adc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342ae8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pMVar12 = (MapEditor_PositionGizmo_o *)&MethodInfo_Single_get_Value;
    pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342af4;
    uVar13 = il2cpp_runtime_helper_023445d0();
    g_data_057ae0ca = '\x01';
  }
  pGVar2 = (pMVar11->fields)._gameManager;
  if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_043434d5;
  if ((char)(pGVar2->fields).Snap == '\0') {
label_043434b1:
    uVar4 = *extraout_RDX_00;
    (pMVar11->fields)._previousMousePoint.fields.y = *(float *)(extraout_RDX_00 + 1);
    *(undefined8 *)&(pMVar11->fields)._dragPlane.fields.m_Distance = uVar4;
label_043434c6:
    UVar23.fields.z = UVar22.fields.z;
    UVar23.fields.x = (float)(int)uVar13;
    UVar23.fields.y = (float)(int)((ulong)uVar13 >> 0x20);
    return (UnityEngine_Vector3_o)UVar23.fields;
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x50), lVar3 != 0)) {
    fStack_d4 = *(float *)(lVar3 + 0x14);
    if ((pGVar2->fields).CurrentGizmoMode != 0) {
      if (g_data_057a6841 == '\0') {
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342b63;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      uVar13 = *(undefined8 *)((long)&pMVar9->methodPointer + 4);
      UVar22.fields.z = (float)uVar13;
      fVar14 = (float)((ulong)uVar13 >> 0x20);
      fVar19 = *(float *)&pMVar9->methodPointer;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        uStack_c8 = 0;
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342b9a;
        uStack_d0 = uVar13;
        fStack_b0 = *(float *)&pMVar9->methodPointer;
        il2cpp_runtime_helper_02337ed0();
        UVar22.fields.z = (float)uStack_d0;
        fVar14 = uStack_d0._4_4_;
        fVar19 = fStack_b0;
      }
      UVar22.fields.z = fVar14 * fVar14 + fVar19 * fVar19 + UVar22.fields.z * UVar22.fields.z;
      if (UVar22.fields.z < 0.0) {
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342cad;
        UVar22.fields.z = sqrtf(UVar22.fields.z);
      }
      else {
        UVar22.fields.z = SQRT(UVar22.fields.z);
      }
      uStack_d0 = CONCAT44(uStack_d0._4_4_,UVar22.fields.z);
      fStack_b0 = UVar22.fields.z / fStack_d4;
      pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342ccd;
      dVar5 = modf((double)fStack_b0,&dStack_b8,pMVar10);
      uVar15 = (undefined4)((ulong)dStack_b8 >> 0x20);
      if (0.0 <= fStack_b0) {
        if ((dVar5 != 0.5) || (NAN(dVar5))) {
          pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342f54;
          UVar22.fields.z = floorf(fStack_b0 + 0.5);
          uVar15 = extraout_XMM0_Db_00;
          uVar17 = extraout_XMM0_Dc_02;
          uVar16 = extraout_XMM0_Dd_02;
        }
        else {
          UVar22.fields.z = (float)dStack_b8;
          if (((long)dStack_b8 & 1U) != 0) {
            UVar22.fields.z = UVar22.fields.z + 1.0;
          }
label_04342d4d:
          uVar16 = 0;
          uVar17 = 0;
        }
      }
      else if ((dVar5 != -0.5) || (NAN(dVar5))) {
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342f2d;
        UVar22.fields.z = ceilf(fStack_b0 + -0.5);
        uVar15 = extraout_XMM0_Db;
        uVar17 = extraout_XMM0_Dc_01;
        uVar16 = extraout_XMM0_Dd_01;
      }
      else {
        uVar17 = 0;
        uVar16 = 0;
        UVar22.fields.z = (float)dStack_b8;
        if (((long)dStack_b8 & 1U) == 0) goto label_04342d4d;
        UVar22.fields.z = UVar22.fields.z + -1.0;
      }
      if (0.0 < (float)uStack_d0) {
        uStack_d0 = CONCAT44(uVar15,UVar22.fields.z);
        uStack_c8 = CONCAT44(uVar16,uVar17);
        register0x000012c8 = 0;
        auStack_a0 = (undefined1  [8])pMVar9->methodPointer;
        fStack_b0 = *(float *)&pMVar9->virtualMethodPointer;
        if (g_data_057a6845 == '\0') {
          pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342f77;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6845 = '\x01';
          iVar1 = *(int *)(TypeInfo_Math + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_Math + 0xe4);
        }
        if (iVar1 == 0) {
          pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342f9e;
          il2cpp_runtime_helper_02337ed0();
        }
        uVar15 = 0;
        uVar17 = 0;
        UVar22.fields.z =
             fStack_b0 * fStack_b0 + auStack_a0._4_4_ * auStack_a0._4_4_ + auStack_a0._0_4_ * auStack_a0._0_4_
        ;
        if (UVar22.fields.z < 0.0) {
          pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342ec3;
          UVar22.fields.z = sqrtf(UVar22.fields.z);
          fVar14 = (float)uStack_d0 * fStack_d4;
          uVar15 = extraout_XMM0_Dc_00;
          uVar17 = extraout_XMM0_Dd_00;
          if (UVar22.fields.z <= 1e-05) goto label_04342ddd;
label_04342ee6:
          fVar19 = fStack_b0 / UVar22.fields.z;
          auVar18._4_4_ = UVar22.fields.z;
          auVar18._0_4_ = UVar22.fields.z;
          auVar18._8_4_ = uVar15;
          auVar18._12_4_ = uVar17;
          auVar18 = divps(_auStack_a0,auVar18);
          uVar13 = auVar18._0_8_;
        }
        else {
          UVar22.fields.z = SQRT(UVar22.fields.z);
          fVar14 = (float)uStack_d0 * fStack_d4;
          if (1e-05 < UVar22.fields.z) goto label_04342ee6;
label_04342ddd:
          if (g_data_057a65d5 == '\0') {
            uStack_d0 = CONCAT44(uStack_d0._4_4_,fVar14);
            pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342df7;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
            fVar14 = (float)uStack_d0;
          }
          uVar13 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        pMVar9->methodPointer =
             (Il2CppMethodPointer)CONCAT44(fVar14 * (float)((ulong)uVar13 >> 0x20),fVar14 * (float)uVar13);
        *(float *)&pMVar9->virtualMethodPointer = fVar19 * fVar14;
      }
joined_r0x04342f12:
      if (g_data_057a6841 == '\0') {
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x434343b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
      }
      uVar13 = *(undefined8 *)((long)&pMVar9->methodPointer + 4);
      UVar22.fields.z = (float)uVar13;
      fVar14 = (float)((ulong)uVar13 >> 0x20);
      fVar19 = *(float *)&pMVar9->methodPointer;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        uStack_c8 = 0;
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4343472;
        uStack_d0 = uVar13;
        fStack_b0 = *(float *)&pMVar9->methodPointer;
        il2cpp_runtime_helper_02337ed0();
        UVar22.fields.z = (float)uStack_d0;
        fVar14 = uStack_d0._4_4_;
        fVar19 = fStack_b0;
      }
      fVar19 = fVar14 * fVar14 + fVar19 * fVar19 + UVar22.fields.z * UVar22.fields.z;
      UVar22.fields.z = 0.0;
      if (fVar19 < 0.0) {
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x43434aa;
        fVar14 = sqrtf(fVar19);
        uVar13 = CONCAT44(extraout_XMM0_Db_05,fVar14);
        if (fVar14 < fStack_d4) goto label_043434c6;
      }
      else {
        uVar13 = CONCAT44(fVar14 * fVar14,SQRT(fVar19));
        if (SQRT(fVar19) < fStack_d4) goto label_043434c6;
      }
      goto label_043434b1;
    }
    pUVar7 = (pMVar11->fields)._transform;
    pMVar12 = (MapEditor_PositionGizmo_o *)0x0;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342be1;
      UVar22 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      fStack_b0 = (float)((ulong)pMVar9->methodPointer >> 0x20) + UVar22.fields.y;
      fStack_a8 = extraout_XMM0_Dc + 0.0;
      fStack_a4 = extraout_XMM0_Dd + 0.0;
      auStack_a0._4_4_ = fStack_b0;
      auStack_a0._0_4_ = SUB84((UnityEngine_Transform_c *)pMVar9->methodPointer,0) + UVar22.fields.x;
      fStack_98 = fStack_a8;
      fStack_94 = fStack_a4;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,UVar22.fields.z + *(float *)&pMVar9->virtualMethodPointer);
      pMVar10 = (MethodInfo *)(pMVar11->fields)._planeXY;
      __this = (MapEditor_PositionGizmo_o *)(pMVar11->fields)._activeLine;
      fStack_ac = fStack_b0;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342c29;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342c36;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)pMVar10,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pMVar10 = (MethodInfo *)(pMVar11->fields)._planeYZ;
        __this = (MapEditor_PositionGizmo_o *)(pMVar11->fields)._activeLine;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342e3f;
          il2cpp_runtime_helper_02337ed0();
        }
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342e4c;
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)pMVar10,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pMVar10 = (MethodInfo *)(pMVar11->fields)._planeXZ;
          __this = (MapEditor_PositionGizmo_o *)(pMVar11->fields)._activeLine;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4343003;
            il2cpp_runtime_helper_02337ed0();
          }
          pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4343010;
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)pMVar10,(MethodInfo *)0x0)
          ;
          if ((char)bVar6 != '\0') {
            fStack_b0 = (float)auStack_a0._0_4_ / fStack_d4;
            pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4343037;
            dVar5 = modf((double)fStack_b0,&dStack_b8,pMVar10);
            uVar15 = (undefined4)((ulong)dStack_b8 >> 0x20);
            if (0.0 <= fStack_b0) {
              if ((dVar5 != 0.5) || (NAN(dVar5))) {
                pMStack_e8 = (MapEditor_PositionGizmo_o *)0x434331d;
                fStack_b0 = floorf(fStack_b0 + 0.5);
                uVar15 = extraout_XMM0_Db_04;
                fStack_a8 = (float)extraout_XMM0_Dc_06;
                fStack_a4 = (float)extraout_XMM0_Dd_06;
              }
              else {
                fStack_a8 = 0.0;
                fStack_a4 = 0.0;
                fStack_b0 = (float)dStack_b8;
                if (((long)dStack_b8 & 1U) != 0) {
                  fStack_b0 = fStack_b0 + 1.0;
                }
              }
            }
            else if ((dVar5 != -0.5) || (NAN(dVar5))) {
              pMStack_e8 = (MapEditor_PositionGizmo_o *)0x434330b;
              fStack_b0 = ceilf(fStack_b0 + -0.5);
              uVar15 = extraout_XMM0_Db_03;
              fStack_a8 = (float)extraout_XMM0_Dc_05;
              fStack_a4 = (float)extraout_XMM0_Dd_05;
            }
            else {
              fStack_a8 = 0.0;
              fStack_a4 = 0.0;
              fStack_b0 = (float)dStack_b8;
              if (((long)dStack_b8 & 1U) != 0) {
                fStack_b0 = fStack_b0 + -1.0;
              }
            }
            fStack_b0 = fStack_b0 * fStack_d4;
            UVar22.fields.z = (float)uStack_d0 / fStack_d4;
            uStack_d0 = CONCAT44(uStack_d0._4_4_,UVar22.fields.z);
            pMStack_e8 = (MapEditor_PositionGizmo_o *)0x434334d;
            fStack_ac = (float)uVar15;
            dVar5 = modf((double)UVar22.fields.z,&dStack_b8,pMVar10);
            if (0.0 <= (float)uStack_d0) {
              if ((dVar5 != 0.5) || (NAN(dVar5))) {
                pMStack_e8 = (MapEditor_PositionGizmo_o *)0x43433d5;
                UVar22.fields.z = floorf((float)uStack_d0 + 0.5);
              }
              else {
                UVar22.fields.z = (float)dStack_b8;
                if (((long)dStack_b8 & 1U) != 0) {
                  UVar22.fields.z = UVar22.fields.z + 1.0;
                }
              }
            }
            else if ((dVar5 != -0.5) || (NAN(dVar5))) {
              pMStack_e8 = (MapEditor_PositionGizmo_o *)0x43433c3;
              UVar22.fields.z = ceilf((float)uStack_d0 + -0.5);
            }
            else {
              UVar22.fields.z = (float)dStack_b8;
              if (((long)dStack_b8 & 1U) != 0) {
                UVar22.fields.z = UVar22.fields.z + -1.0;
              }
            }
            fStack_ac = (float)auStack_a0._4_4_;
            fStack_a8 = fStack_98;
            fStack_a4 = fStack_94;
            goto label_043433e3;
          }
          fVar14 = (float)uStack_d0;
          UVar22.fields.z = (float)auStack_a0._0_4_;
          fStack_ac = (float)auStack_a0._4_4_;
          fStack_a8 = fStack_98;
          fStack_a4 = fStack_94;
        }
        else {
          fStack_b0 = fStack_b0 / fStack_d4;
          pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342e72;
          dVar5 = modf((double)fStack_b0,&dStack_b8,pMVar10);
          if (0.0 <= fStack_b0) {
            if ((dVar5 != 0.5) || (NAN(dVar5))) {
              pMStack_e8 = (MapEditor_PositionGizmo_o *)0x434321e;
              fStack_ac = floorf(fStack_b0 + 0.5);
            }
            else {
              fStack_ac = (float)dStack_b8;
              if (((long)dStack_b8 & 1U) != 0) {
                fStack_ac = fStack_ac + 1.0;
              }
            }
          }
          else if ((dVar5 != -0.5) || (NAN(dVar5))) {
            pMStack_e8 = (MapEditor_PositionGizmo_o *)0x434320c;
            fStack_ac = ceilf(fStack_b0 + -0.5);
          }
          else {
            fStack_ac = (float)dStack_b8;
            if (((long)dStack_b8 & 1U) != 0) {
              fStack_ac = fStack_ac + -1.0;
            }
          }
          fStack_ac = fStack_ac * fStack_d4;
          fStack_b0 = (float)auStack_a0._0_4_;
          fStack_a8 = fStack_98;
          fStack_a4 = fStack_94;
          UVar22.fields.z = (float)uStack_d0 / fStack_d4;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,UVar22.fields.z);
          pMStack_e8 = (MapEditor_PositionGizmo_o *)0x434325b;
          dVar5 = modf((double)UVar22.fields.z,&dStack_b8,pMVar10);
          if (0.0 <= (float)uStack_d0) {
            if ((dVar5 != 0.5) || (NAN(dVar5))) {
              pMStack_e8 = (MapEditor_PositionGizmo_o *)0x43432eb;
              UVar22.fields.z = floorf((float)uStack_d0 + 0.5);
              goto label_043432eb;
            }
            UVar22.fields.z = (float)dStack_b8;
            if (((long)dStack_b8 & 1U) != 0) {
              UVar22.fields.z = UVar22.fields.z + 1.0;
            }
          }
          else {
            if ((dVar5 != -0.5) || (NAN(dVar5))) {
              pMStack_e8 = (MapEditor_PositionGizmo_o *)0x43432d9;
              UVar22.fields.z = ceilf((float)uStack_d0 + -0.5);
label_043432eb:
              fVar14 = UVar22.fields.z * fStack_d4;
              UVar22.fields.z = fStack_b0;
              fStack_a8 = fStack_a8;
              fStack_a4 = fStack_a4;
              goto label_043433e9;
            }
            UVar22.fields.z = (float)dStack_b8;
            if (((long)dStack_b8 & 1U) != 0) {
              UVar22.fields.z = UVar22.fields.z + -1.0;
            }
          }
label_043433e3:
          fVar14 = UVar22.fields.z * fStack_d4;
          UVar22.fields.z = fStack_b0;
        }
      }
      else {
        auStack_a0._0_4_ = (float)auStack_a0._0_4_ / fStack_d4;
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4342c5c;
        dVar5 = modf((double)(float)auStack_a0._0_4_,&dStack_b8,pMVar10);
        uVar15 = (undefined4)((ulong)dStack_b8 >> 0x20);
        if (0.0 <= (float)auStack_a0._0_4_) {
          if ((dVar5 != 0.5) || (NAN(dVar5))) {
            pMStack_e8 = (MapEditor_PositionGizmo_o *)0x43430ee;
            UVar22.fields.z = floorf((float)auStack_a0._0_4_ + 0.5);
            uVar15 = extraout_XMM0_Db_02;
            fStack_98 = (float)extraout_XMM0_Dc_04;
            fStack_94 = (float)extraout_XMM0_Dd_04;
          }
          else {
            fStack_98 = 0.0;
            fStack_94 = 0.0;
            UVar22.fields.z = (float)dStack_b8;
            if (((long)dStack_b8 & 1U) != 0) {
              UVar22.fields.z = UVar22.fields.z + 1.0;
            }
          }
        }
        else if ((dVar5 != -0.5) || (NAN(dVar5))) {
          pMStack_e8 = (MapEditor_PositionGizmo_o *)0x43430dc;
          UVar22.fields.z = ceilf((float)auStack_a0._0_4_ + -0.5);
          uVar15 = extraout_XMM0_Db_01;
          fStack_98 = (float)extraout_XMM0_Dc_03;
          fStack_94 = (float)extraout_XMM0_Dd_03;
        }
        else {
          fStack_98 = 0.0;
          fStack_94 = 0.0;
          UVar22.fields.z = (float)dStack_b8;
          if (((long)dStack_b8 & 1U) != 0) {
            UVar22.fields.z = UVar22.fields.z + -1.0;
          }
        }
        auStack_a0._4_4_ = uVar15;
        auStack_a0._0_4_ = UVar22.fields.z * fStack_d4;
        fStack_b0 = fStack_b0 / fStack_d4;
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4343119;
        dVar5 = modf((double)fStack_b0,&dStack_b8,pMVar10);
        if (0.0 <= fStack_b0) {
          if ((dVar5 != 0.5) || (NAN(dVar5))) {
            pMStack_e8 = (MapEditor_PositionGizmo_o *)0x43431a3;
            fStack_ac = floorf(fStack_b0 + 0.5);
          }
          else {
            fStack_ac = (float)dStack_b8;
            if (((long)dStack_b8 & 1U) != 0) {
              fStack_ac = fStack_ac + 1.0;
            }
          }
        }
        else if ((dVar5 != -0.5) || (NAN(dVar5))) {
          pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4343191;
          fStack_ac = ceilf(fStack_b0 + -0.5);
        }
        else {
          fStack_ac = (float)dStack_b8;
          if (((long)dStack_b8 & 1U) != 0) {
            fStack_ac = fStack_ac + -1.0;
          }
        }
        fStack_ac = fStack_ac * fStack_d4;
        fVar14 = (float)uStack_d0;
        UVar22.fields.z = (float)auStack_a0._0_4_;
        fStack_a8 = fStack_98;
        fStack_a4 = fStack_94;
      }
label_043433e9:
      uStack_d0 = CONCAT44(uStack_d0._4_4_,fVar14);
      pUVar7 = (pMVar11->fields)._transform;
      pMVar12 = (MapEditor_PositionGizmo_o *)0x0;
      fStack_b0 = UVar22.fields.z;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pMStack_e8 = (MapEditor_PositionGizmo_o *)0x4343408;
        UVar22 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
        pMVar9->methodPointer =
             (Il2CppMethodPointer)CONCAT44(fStack_ac - UVar22.fields.y,fStack_b0 - UVar22.fields.x);
        *(float *)&pMVar9->virtualMethodPointer = (float)uStack_d0 - UVar22.fields.z;
        goto joined_r0x04342f12;
      }
    }
  }
label_043434d5:
  pMStack_e8 = (MapEditor_PositionGizmo_o *)0x43434da;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  fVar14 = UVar22.fields.z;
  pMStack_f8 = __this;
  puStack_f0 = extraout_RDX_00;
  pMStack_e8 = pMVar11;
  if (g_data_057ae0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    g_data_057ae0d0 = '\x01';
  }
  pIVar25 = (Il2CppRGCTXData *)0x0;
  pGVar2 = (pMVar12->fields)._gameManager;
  if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator(&SStack_110,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    pIVar25 = (Il2CppRGCTXData *)SStack_110.fields._set;
    while (__this_01.fields._version = (int32_t)fVar14,
          __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffea8._0_8_,
          __this_01.fields._index = in_stack_fffffffffffffea8._8_4_,
          __this_01.fields._current = (Il2CppObject *)pIVar25,
          bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_3219C40 *)&stack0xfffffffffffffeb8), (char)bVar6 != '\0') {
      if (SStack_110.fields._current == (Il2CppObject *)0x0) {
label_04343615:
        il2cpp_runtime_helper_022b2c90();
label_0434361a:
        il2cpp_runtime_helper_022b2c90();
        goto label_0434361f;
      }
      if (SStack_110.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_0434361a;
      pUVar7 = UnityEngine_GameObject__get_transform(SStack_110.fields._current[1].monitor,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04343615;
      }
      UVar21 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      UVar22.fields.x = UVar21.fields.x + (float)uVar13;
      UVar22.fields.y = UVar21.fields.y + (float)((ulong)uVar13 >> 0x20);
      UVar22.fields.z = UVar21.fields.z + fVar14;
      UnityEngine_Transform__set_position(pUVar7,UVar22,(MethodInfo *)0x0);
    }
    __this_02.fields._version = (int32_t)fVar14;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffea8._0_8_;
    __this_02.fields._index = in_stack_fffffffffffffea8._8_4_;
    __this_02.fields._current = (Il2CppObject *)pIVar25;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xfffffffffffffeb8);
    uVar15 = extraout_XMM0_Da;
    uVar17 = extraout_XMM0_Db_06;
label_04343606:
    UVar24.fields.y = (float)uVar17;
    UVar24.fields.x = (float)uVar15;
    UVar24.fields.z = UVar22.fields.z;
    return (UnityEngine_Vector3_o)UVar24.fields;
  }
label_0434361f:
  auVar20 = il2cpp_runtime_helper_022b2c90();
  if (auVar20._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar20._0_8_);
    lVar3 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)fVar14;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffea8._0_8_;
    __this_03.fields._index = in_stack_fffffffffffffea8._8_4_;
    __this_03.fields._current = (Il2CppObject *)pIVar25;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xfffffffffffffeb8);
    uVar15 = extraout_XMM0_Da_00;
    uVar17 = extraout_XMM0_Db_07;
    if (lVar3 == 0) goto label_04343606;
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._version = (int32_t)fVar14;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffea8._0_8_;
  __this_04.fields._index = in_stack_fffffffffffffea8._8_4_;
  __this_04.fields._current = (Il2CppObject *)pIVar25;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xfffffffffffffeb8);
  _Unwind_Resume(auVar20._0_8_);
}


// MapEditor.PositionGizmo$$ApplySnap
// il2cpp: void MapEditor_PositionGizmo__ApplySnap (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o* frameDelta, UnityEngine_Vector3_o* mousePoint, const MethodInfo* method);
// 0x4342ab0

void MapEditor_PositionGizmo__ApplySnap
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o *frameDelta,
               UnityEngine_Vector3_o *mousePoint,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  GameManagers_MapEditorGameManager_o *pGVar6;
  long lVar7;
  System_Collections_Generic_HashSet_object__o *__this_00;
  double dVar8;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar9;
  UnityEngine_Transform_o *pUVar10;
  long *plVar11;
  UnityEngine_Transform_o *unaff_RBX;
  MethodInfo *pMVar12;
  MapEditor_PositionGizmo_o *pMVar13;
  float fVar14;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined8 uVar15;
  float extraout_XMM0_Dc;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  float extraout_XMM0_Dd;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  float in_XMM1_Da;
  undefined8 uVar19;
  undefined1 auVar21 [12];
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff00 [12];
  Il2CppRGCTXData *pIVar23;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_b8;
  UnityEngine_Transform_o *pUStack_a0;
  UnityEngine_Vector3_o *pUStack_98;
  MapEditor_PositionGizmo_o *pMStack_90;
  float local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined1 auVar20 [16];
  
  pMVar12 = (MethodInfo *)frameDelta;
  pMVar13 = __this;
  if (g_data_057ae0ca == '\0') {
    pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342adc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342ae8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pMVar13 = (MapEditor_PositionGizmo_o *)&MethodInfo_Single_get_Value;
    pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342af4;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0ca = '\x01';
  }
  pGVar6 = (__this->fields)._gameManager;
  if (pGVar6 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_043434d5;
  if ((char)(pGVar6->fields).Snap == '\0') goto label_043434b1;
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x50), lVar7 == 0)) goto label_043434d5;
  local_7c = *(float *)(lVar7 + 0x14);
  if ((pGVar6->fields).CurrentGizmoMode == 0) {
    pUVar10 = (__this->fields)._transform;
    pMVar13 = (MapEditor_PositionGizmo_o *)0x0;
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_043434d5;
    pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342be1;
    UVar22 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    uVar1 = (frameDelta->fields).x;
    uVar3 = (frameDelta->fields).y;
    local_58 = (float)uVar3 + UVar22.fields.y;
    fStack_50 = extraout_XMM0_Dc + 0.0;
    fStack_4c = extraout_XMM0_Dd + 0.0;
    local_48._4_4_ = local_58;
    local_48._0_4_ = (float)uVar1 + UVar22.fields.x;
    fStack_40 = fStack_50;
    fStack_3c = fStack_4c;
    local_78 = CONCAT44(local_78._4_4_,UVar22.fields.z + (frameDelta->fields).z);
    pMVar12 = (MethodInfo *)(__this->fields)._planeXY;
    unaff_RBX = (__this->fields)._activeLine;
    fStack_54 = local_58;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342c29;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342c36;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)pMVar12,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      pMVar12 = (MethodInfo *)(__this->fields)._planeYZ;
      unaff_RBX = (__this->fields)._activeLine;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342e3f;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342e4c;
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)pMVar12,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        pMVar12 = (MethodInfo *)(__this->fields)._planeXZ;
        unaff_RBX = (__this->fields)._activeLine;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pMStack_90 = (MapEditor_PositionGizmo_o *)0x4343003;
          il2cpp_runtime_helper_02337ed0();
        }
        pMStack_90 = (MapEditor_PositionGizmo_o *)0x4343010;
        bVar9 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)pMVar12,(MethodInfo *)0x0
                          );
        if ((char)bVar9 != '\0') {
          local_58 = (float)local_48._0_4_ / local_7c;
          pMStack_90 = (MapEditor_PositionGizmo_o *)0x4343037;
          dVar8 = modf((double)local_58,&local_60,pMVar12);
          uVar16 = (undefined4)((ulong)local_60 >> 0x20);
          if (0.0 <= local_58) {
            if ((dVar8 != 0.5) || (NAN(dVar8))) {
              pMStack_90 = (MapEditor_PositionGizmo_o *)0x434331d;
              local_58 = floorf(local_58 + 0.5);
              uVar16 = extraout_XMM0_Db_04;
              fStack_50 = (float)extraout_XMM0_Dc_06;
              fStack_4c = (float)extraout_XMM0_Dd_06;
            }
            else {
              fStack_50 = 0.0;
              fStack_4c = 0.0;
              local_58 = (float)local_60;
              if (((long)local_60 & 1U) != 0) {
                local_58 = local_58 + 1.0;
              }
            }
          }
          else if ((dVar8 != -0.5) || (NAN(dVar8))) {
            pMStack_90 = (MapEditor_PositionGizmo_o *)0x434330b;
            local_58 = ceilf(local_58 + -0.5);
            uVar16 = extraout_XMM0_Db_03;
            fStack_50 = (float)extraout_XMM0_Dc_05;
            fStack_4c = (float)extraout_XMM0_Dd_05;
          }
          else {
            fStack_50 = 0.0;
            fStack_4c = 0.0;
            local_58 = (float)local_60;
            if (((long)local_60 & 1U) != 0) {
              local_58 = local_58 + -1.0;
            }
          }
          local_58 = local_58 * local_7c;
          fVar14 = (float)local_78 / local_7c;
          local_78 = CONCAT44(local_78._4_4_,fVar14);
          pMStack_90 = (MapEditor_PositionGizmo_o *)0x434334d;
          fStack_54 = (float)uVar16;
          dVar8 = modf((double)fVar14,&local_60,pMVar12);
          if (0.0 <= (float)local_78) {
            if ((dVar8 != 0.5) || (NAN(dVar8))) {
              pMStack_90 = (MapEditor_PositionGizmo_o *)0x43433d5;
              fVar14 = floorf((float)local_78 + 0.5);
            }
            else {
              fVar14 = (float)local_60;
              if (((long)local_60 & 1U) != 0) {
                fVar14 = fVar14 + 1.0;
              }
            }
          }
          else if ((dVar8 != -0.5) || (NAN(dVar8))) {
            pMStack_90 = (MapEditor_PositionGizmo_o *)0x43433c3;
            fVar14 = ceilf((float)local_78 + -0.5);
          }
          else {
            fVar14 = (float)local_60;
            if (((long)local_60 & 1U) != 0) {
              fVar14 = fVar14 + -1.0;
            }
          }
          fStack_54 = (float)local_48._4_4_;
          fStack_50 = fStack_40;
          fStack_4c = fStack_3c;
          goto label_043433e3;
        }
        fVar14 = (float)local_78;
        in_XMM1_Da = (float)local_48._0_4_;
        fStack_54 = (float)local_48._4_4_;
        fStack_50 = fStack_40;
        fStack_4c = fStack_3c;
      }
      else {
        local_58 = local_58 / local_7c;
        pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342e72;
        dVar8 = modf((double)local_58,&local_60,pMVar12);
        if (0.0 <= local_58) {
          if ((dVar8 != 0.5) || (NAN(dVar8))) {
            pMStack_90 = (MapEditor_PositionGizmo_o *)0x434321e;
            fStack_54 = floorf(local_58 + 0.5);
          }
          else {
            fStack_54 = (float)local_60;
            if (((long)local_60 & 1U) != 0) {
              fStack_54 = fStack_54 + 1.0;
            }
          }
        }
        else if ((dVar8 != -0.5) || (NAN(dVar8))) {
          pMStack_90 = (MapEditor_PositionGizmo_o *)0x434320c;
          fStack_54 = ceilf(local_58 + -0.5);
        }
        else {
          fStack_54 = (float)local_60;
          if (((long)local_60 & 1U) != 0) {
            fStack_54 = fStack_54 + -1.0;
          }
        }
        fStack_54 = fStack_54 * local_7c;
        local_58 = (float)local_48._0_4_;
        fStack_50 = fStack_40;
        fStack_4c = fStack_3c;
        fVar14 = (float)local_78 / local_7c;
        local_78 = CONCAT44(local_78._4_4_,fVar14);
        pMStack_90 = (MapEditor_PositionGizmo_o *)0x434325b;
        dVar8 = modf((double)fVar14,&local_60,pMVar12);
        if (0.0 <= (float)local_78) {
          if ((dVar8 != 0.5) || (NAN(dVar8))) {
            pMStack_90 = (MapEditor_PositionGizmo_o *)0x43432eb;
            fVar14 = floorf((float)local_78 + 0.5);
            goto label_043432eb;
          }
          fVar14 = (float)local_60;
          if (((long)local_60 & 1U) != 0) {
            fVar14 = fVar14 + 1.0;
          }
        }
        else {
          if ((dVar8 != -0.5) || (NAN(dVar8))) {
            pMStack_90 = (MapEditor_PositionGizmo_o *)0x43432d9;
            fVar14 = ceilf((float)local_78 + -0.5);
label_043432eb:
            fVar14 = fVar14 * local_7c;
            in_XMM1_Da = local_58;
            fStack_50 = fStack_50;
            fStack_4c = fStack_4c;
            goto label_043433e9;
          }
          fVar14 = (float)local_60;
          if (((long)local_60 & 1U) != 0) {
            fVar14 = fVar14 + -1.0;
          }
        }
label_043433e3:
        fVar14 = fVar14 * local_7c;
        in_XMM1_Da = local_58;
      }
    }
    else {
      local_48._0_4_ = (float)local_48._0_4_ / local_7c;
      pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342c5c;
      dVar8 = modf((double)(float)local_48._0_4_,&local_60,pMVar12);
      uVar16 = (undefined4)((ulong)local_60 >> 0x20);
      if (0.0 <= (float)local_48._0_4_) {
        if ((dVar8 != 0.5) || (NAN(dVar8))) {
          pMStack_90 = (MapEditor_PositionGizmo_o *)0x43430ee;
          fVar14 = floorf((float)local_48._0_4_ + 0.5);
          uVar16 = extraout_XMM0_Db_02;
          fStack_40 = (float)extraout_XMM0_Dc_04;
          fStack_3c = (float)extraout_XMM0_Dd_04;
        }
        else {
          fStack_40 = 0.0;
          fStack_3c = 0.0;
          fVar14 = (float)local_60;
          if (((long)local_60 & 1U) != 0) {
            fVar14 = fVar14 + 1.0;
          }
        }
      }
      else if ((dVar8 != -0.5) || (NAN(dVar8))) {
        pMStack_90 = (MapEditor_PositionGizmo_o *)0x43430dc;
        fVar14 = ceilf((float)local_48._0_4_ + -0.5);
        uVar16 = extraout_XMM0_Db_01;
        fStack_40 = (float)extraout_XMM0_Dc_03;
        fStack_3c = (float)extraout_XMM0_Dd_03;
      }
      else {
        fStack_40 = 0.0;
        fStack_3c = 0.0;
        fVar14 = (float)local_60;
        if (((long)local_60 & 1U) != 0) {
          fVar14 = fVar14 + -1.0;
        }
      }
      local_48._4_4_ = uVar16;
      local_48._0_4_ = fVar14 * local_7c;
      local_58 = local_58 / local_7c;
      pMStack_90 = (MapEditor_PositionGizmo_o *)0x4343119;
      dVar8 = modf((double)local_58,&local_60,pMVar12);
      if (0.0 <= local_58) {
        if ((dVar8 != 0.5) || (NAN(dVar8))) {
          pMStack_90 = (MapEditor_PositionGizmo_o *)0x43431a3;
          fStack_54 = floorf(local_58 + 0.5);
        }
        else {
          fStack_54 = (float)local_60;
          if (((long)local_60 & 1U) != 0) {
            fStack_54 = fStack_54 + 1.0;
          }
        }
      }
      else if ((dVar8 != -0.5) || (NAN(dVar8))) {
        pMStack_90 = (MapEditor_PositionGizmo_o *)0x4343191;
        fStack_54 = ceilf(local_58 + -0.5);
      }
      else {
        fStack_54 = (float)local_60;
        if (((long)local_60 & 1U) != 0) {
          fStack_54 = fStack_54 + -1.0;
        }
      }
      fStack_54 = fStack_54 * local_7c;
      fVar14 = (float)local_78;
      in_XMM1_Da = (float)local_48._0_4_;
      fStack_50 = fStack_40;
      fStack_4c = fStack_3c;
    }
label_043433e9:
    local_78 = CONCAT44(local_78._4_4_,fVar14);
    pUVar10 = (__this->fields)._transform;
    pMVar13 = (MapEditor_PositionGizmo_o *)0x0;
    local_58 = in_XMM1_Da;
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
label_043434d5:
      pMStack_90 = (MapEditor_PositionGizmo_o *)0x43434da;
      uVar15 = il2cpp_runtime_helper_022b2c90();
      pUStack_a0 = unaff_RBX;
      pUStack_98 = mousePoint;
      pMStack_90 = __this;
      if (g_data_057ae0d0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
        g_data_057ae0d0 = '\x01';
      }
      pIVar23 = (Il2CppRGCTXData *)0x0;
      pGVar6 = (pMVar13->fields)._gameManager;
      if ((pGVar6 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar6->fields).SelectedObjects,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet_object___GetEnumerator(&SStack_b8,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
        pIVar23 = (Il2CppRGCTXData *)SStack_b8.fields._set;
        while( true ) {
          __this_01.fields._version = (int32_t)in_XMM1_Da;
          __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00._0_8_;
          __this_01.fields._index = in_stack_ffffffffffffff00._8_4_;
          __this_01.fields._current = (Il2CppObject *)pIVar23;
          bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff10);
          if ((char)bVar9 == '\0') {
            __this_02.fields._version = (int32_t)in_XMM1_Da;
            __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00._0_8_
            ;
            __this_02.fields._index = in_stack_ffffffffffffff00._8_4_;
            __this_02.fields._current = (Il2CppObject *)pIVar23;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff10);
            return;
          }
          if (SStack_b8.fields._current == (Il2CppObject *)0x0) break;
          if (SStack_b8.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_0434361a;
          pUVar10 = UnityEngine_GameObject__get_transform
                              (SStack_b8.fields._current[1].monitor,(MethodInfo *)0x0);
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            break;
          }
          UVar22 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
          value.fields.x = UVar22.fields.x + (float)uVar15;
          value.fields.y = UVar22.fields.y + (float)((ulong)uVar15 >> 0x20);
          value.fields.z = UVar22.fields.z + in_XMM1_Da;
          UnityEngine_Transform__set_position(pUVar10,value,(MethodInfo *)0x0);
        }
        il2cpp_runtime_helper_022b2c90();
label_0434361a:
        il2cpp_runtime_helper_022b2c90();
      }
      auVar21 = il2cpp_runtime_helper_022b2c90();
      if (auVar21._8_4_ == 1) {
        plVar11 = (long *)__cxa_begin_catch(auVar21._0_8_);
        lVar7 = *plVar11;
        __cxa_end_catch();
        __this_03.fields._version = (int32_t)in_XMM1_Da;
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00._0_8_;
        __this_03.fields._index = in_stack_ffffffffffffff00._8_4_;
        __this_03.fields._current = (Il2CppObject *)pIVar23;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff10);
        if (lVar7 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar7);
      }
      __this_04.fields._version = (int32_t)in_XMM1_Da;
      __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff00._0_8_;
      __this_04.fields._index = in_stack_ffffffffffffff00._8_4_;
      __this_04.fields._current = (Il2CppObject *)pIVar23;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff10);
      _Unwind_Resume(auVar21._0_8_);
    }
    pMStack_90 = (MapEditor_PositionGizmo_o *)0x4343408;
    UVar22 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    (frameDelta->fields).x = local_58 - UVar22.fields.x;
    (frameDelta->fields).y = fStack_54 - UVar22.fields.y;
    (frameDelta->fields).z = (float)local_78 - UVar22.fields.z;
  }
  else {
    if (g_data_057a6841 == '\0') {
      pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342b63;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
    }
    fVar14 = (frameDelta->fields).x;
    uVar15._0_4_ = (frameDelta->fields).y;
    uVar15._4_4_ = (frameDelta->fields).z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      uStack_70 = 0;
      pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342b9a;
      local_78 = uVar15;
      local_58 = fVar14;
      il2cpp_runtime_helper_02337ed0();
      uVar15._0_4_ = (float)local_78;
      uVar15._4_4_ = local_78._4_4_;
      fVar14 = local_58;
    }
    fVar14 = uVar15._4_4_ * uVar15._4_4_ + fVar14 * fVar14 + (float)uVar15 * (float)uVar15;
    if (fVar14 < 0.0) {
      pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342cad;
      fVar14 = sqrtf(fVar14);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    local_78 = CONCAT44(local_78._4_4_,fVar14);
    local_58 = fVar14 / local_7c;
    pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342ccd;
    dVar8 = modf((double)local_58,&local_60,pMVar12);
    uVar16 = (undefined4)((ulong)local_60 >> 0x20);
    if (0.0 <= local_58) {
      if ((dVar8 != 0.5) || (NAN(dVar8))) {
        pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342f54;
        fVar14 = floorf(local_58 + 0.5);
        uVar16 = extraout_XMM0_Db_00;
        uVar18 = extraout_XMM0_Dc_02;
        uVar17 = extraout_XMM0_Dd_02;
      }
      else {
        fVar14 = (float)local_60;
        if (((long)local_60 & 1U) != 0) {
          fVar14 = fVar14 + 1.0;
        }
label_04342d4d:
        uVar17 = 0;
        uVar18 = 0;
      }
    }
    else if ((dVar8 != -0.5) || (NAN(dVar8))) {
      pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342f2d;
      fVar14 = ceilf(local_58 + -0.5);
      uVar16 = extraout_XMM0_Db;
      uVar18 = extraout_XMM0_Dc_01;
      uVar17 = extraout_XMM0_Dd_01;
    }
    else {
      uVar18 = 0;
      uVar17 = 0;
      fVar14 = (float)local_60;
      if (((long)local_60 & 1U) == 0) goto label_04342d4d;
      fVar14 = fVar14 + -1.0;
    }
    if (0.0 < (float)local_78) {
      local_78 = CONCAT44(uVar16,fVar14);
      uStack_70 = CONCAT44(uVar17,uVar18);
      uVar2 = (frameDelta->fields).x;
      uVar4 = (frameDelta->fields).y;
      local_48._4_4_ = uVar4;
      local_48._0_4_ = uVar2;
      register0x000012c8 = 0;
      local_58 = (frameDelta->fields).z;
      if (g_data_057a6845 == '\0') {
        pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342f77;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
        iVar5 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar5 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar5 == 0) {
        pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342f9e;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar16 = 0;
      uVar18 = 0;
      fVar14 = local_58 * local_58 + local_48._4_4_ * local_48._4_4_ + local_48._0_4_ * local_48._0_4_;
      if (fVar14 < 0.0) {
        pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342ec3;
        fVar14 = sqrtf(fVar14);
        uVar15._0_4_ = (float)local_78 * local_7c;
        uVar16 = extraout_XMM0_Dc_00;
        uVar18 = extraout_XMM0_Dd_00;
        if (1e-05 < fVar14) goto label_04342ee6;
label_04342ddd:
        if (g_data_057a65d5 == '\0') {
          local_78 = CONCAT44(local_78._4_4_,(float)uVar15);
          pMStack_90 = (MapEditor_PositionGizmo_o *)0x4342df7;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
          uVar15._0_4_ = (float)local_78;
        }
        uVar19 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        uVar15._4_4_ = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      }
      else {
        fVar14 = SQRT(fVar14);
        uVar15._0_4_ = (float)local_78 * local_7c;
        if (fVar14 <= 1e-05) goto label_04342ddd;
label_04342ee6:
        uVar15._4_4_ = local_58 / fVar14;
        auVar20._4_4_ = fVar14;
        auVar20._0_4_ = fVar14;
        auVar20._8_4_ = uVar16;
        auVar20._12_4_ = uVar18;
        auVar20 = divps(_local_48,auVar20);
        uVar19 = auVar20._0_8_;
      }
      (frameDelta->fields).x = (float)uVar15 * (float)uVar19;
      (frameDelta->fields).y = (float)uVar15 * (float)((ulong)uVar19 >> 0x20);
      (frameDelta->fields).z = uVar15._4_4_ * (float)uVar15;
    }
  }
  if (g_data_057a6841 == '\0') {
    pMStack_90 = (MapEditor_PositionGizmo_o *)0x434343b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  fVar14 = (frameDelta->fields).x;
  uVar19._0_4_ = (frameDelta->fields).y;
  uVar19._4_4_ = (frameDelta->fields).z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    uStack_70 = 0;
    pMStack_90 = (MapEditor_PositionGizmo_o *)0x4343472;
    local_78 = uVar19;
    local_58 = fVar14;
    il2cpp_runtime_helper_02337ed0();
    uVar19._0_4_ = (float)local_78;
    uVar19._4_4_ = local_78._4_4_;
    fVar14 = local_58;
  }
  fVar14 = uVar19._4_4_ * uVar19._4_4_ + fVar14 * fVar14 + (float)uVar19 * (float)uVar19;
  if (fVar14 < 0.0) {
    pMStack_90 = (MapEditor_PositionGizmo_o *)0x43434aa;
    fVar14 = sqrtf(fVar14);
    if (fVar14 < local_7c) {
      return;
    }
  }
  else if (SQRT(fVar14) < local_7c) {
    return;
  }
label_043434b1:
  uVar15 = *(undefined8 *)&mousePoint->fields;
  (__this->fields)._previousMousePoint.fields.y = (mousePoint->fields).z;
  *(undefined8 *)&(__this->fields)._dragPlane.fields.m_Distance = uVar15;
  return;
}


// MapEditor.PositionGizmo$$DoVertexSnap
// il2cpp: void MapEditor_PositionGizmo__DoVertexSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x43425b0

void MapEditor_PositionGizmo__DoVertexSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar3;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  long *plVar6;
  MethodInfo *in_RCX;
  MethodInfo *in_R9;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [12];
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o value;
  undefined8 uVar11;
  float fVar12;
  float in_stack_ffffffffffffff84;
  Il2CppObject *pIVar13;
  System_Collections_Generic_HashSet_Enumerator_T__c *local_68;
  Il2CppMethodPointer pIStack_60;
  Il2CppObject *local_58;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  Il2CppRGCTXData *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  InvokerMethod pIStack_20;
  
  if (g_data_057ae0cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0cb = '\x01';
  }
  fVar12 = 0.0;
  uVar11._0_4_ = 0.0;
  uVar11._4_4_ = 0.0;
  pIVar13 = (Il2CppObject *)0x0;
  local_68 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  local_58 = (Il2CppObject *)0x0;
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar2 = (pGVar1->fields).SelectedObjects,
     pSVar2 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_0434285f;
  if ((pSVar2->fields)._count == 0) {
    return;
  }
  if (*(char *)&(__this->fields)._snapAnchorLocal.fields.y == '\0') {
label_043426d8:
    local_30 = (Il2CppRGCTXData *)0x0;
    local_48.fields._index = 0;
    local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
    in_RCX = (MethodInfo *)&stack0xffffffffffffffd0;
    bVar4 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                      (__this,camera,(UnityEngine_Vector3_o *)&stack0xffffffffffffff78,
                       (UnityEngine_Transform_o **)in_RCX,(UnityEngine_Vector3_o *)&local_48,in_R9);
    if ((char)bVar4 == '\0') {
      return;
    }
  }
  else {
    x = *(UnityEngine_Object_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto label_043426d8;
    pUVar5 = *(UnityEngine_Transform_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0434285f;
    UVar10 = UnityEngine_Transform__TransformPoint
                       (pUVar5,*(UnityEngine_Vector3_Fields *)&(__this->fields)._snapAnchorTransform,
                        (MethodInfo *)0x0);
    fVar12 = UVar10.fields.z;
    uVar11 = UVar10.fields._0_8_;
  }
  bVar4 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_4243720
                    (__this,camera,INFINITY,(UnityEngine_Vector3_o *)&stack0xffffffffffffff88,in_RCX);
  if ((char)bVar4 == '\0') {
    return;
  }
  fVar7 = SUB84(pIVar13,0) - (float)uVar11;
  fVar8 = (float)((ulong)pIVar13 >> 0x20) - SUB84(uVar11,4);
  in_stack_ffffffffffffff84 = 0.0 - fVar12;
  uStack_24 = fVar8;
  local_28 = fVar7;
  pIStack_20 = (InvokerMethod)0x0;
  if (in_stack_ffffffffffffff84 * in_stack_ffffffffffffff84 + fVar8 * fVar8 + fVar7 * fVar7 < 1e-08) {
    return;
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator(&local_48,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    local_58 = local_48.fields._current;
    pIStack_60 = (Il2CppMethodPointer)CONCAT44(local_48.fields._version,local_48.fields._index);
    local_68 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48.fields._set;
    while( true ) {
      __this_01.fields._index = (int32_t)fVar12;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)uVar11;
      __this_01.fields._version = (int32_t)in_stack_ffffffffffffff84;
      __this_01.fields._current = pIVar13;
      bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&local_68);
      if ((char)bVar4 == '\0') {
        __this_02.fields._index = (int32_t)fVar12;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)uVar11;
        __this_02.fields._version = (int32_t)in_stack_ffffffffffffff84;
        __this_02.fields._current = pIVar13;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&local_68);
        return;
      }
      if (local_58 == (Il2CppObject *)0x0) break;
      if (local_58[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_0434285a;
      pUVar5 = UnityEngine_GameObject__get_transform(local_58[1].monitor,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        break;
      }
      UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      value.fields.x = UVar10.fields.x + (float)local_28;
      value.fields.y = UVar10.fields.y + (float)uStack_24;
      value.fields.z = UVar10.fields.z + in_stack_ffffffffffffff84;
      UnityEngine_Transform__set_position(pUVar5,value,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_0434285a:
    il2cpp_runtime_helper_022b2c90();
  }
label_0434285f:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._index = (int32_t)fVar12;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)uVar11;
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff84;
    __this_03.fields._current = pIVar13;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_03,(MethodInfo_3219C30 *)&local_68);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._index = (int32_t)fVar12;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)uVar11;
  __this_04.fields._version = (int32_t)in_stack_ffffffffffffff84;
  __this_04.fields._current = pIVar13;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_04,(MethodInfo_3219C30 *)&local_68);
  _Unwind_Resume(auVar9._0_8_);
}


// MapEditor.PositionGizmo$$DoAxisSurfaceSnap
// il2cpp: void MapEditor_PositionGizmo__DoAxisSurfaceSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x4341850

void MapEditor_PositionGizmo__DoAxisSurfaceSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  System_Collections_Generic_HashSet_MapObject__o *pSVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Camera_o *pUVar5;
  System_Object_array *pSVar6;
  void *pvVar7;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  undefined1 auVar9 [16];
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_08;
  UnityEngine_RaycastHit_o __this_09;
  undefined1 auVar10 [16];
  bool_conflict bVar11;
  uint uVar12;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  bool_conflict bVar13;
  System_Collections_Generic_List_object__o *__this_10;
  System_Object_array *pSVar14;
  System_Int32_array *layers;
  UnityEngine_Transform_o *pUVar15;
  long *plVar16;
  UnityEngine_Collider_c *x_00;
  uint uVar17;
  long lVar18;
  MethodInfo *in_R9;
  float fVar19;
  float fVar20;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float fVar24;
  float fVar25;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o direction;
  undefined1 in_stack_fffffffffffffeb8 [12];
  float in_stack_fffffffffffffec4;
  Il2CppObject *pIVar32;
  float fVar33;
  undefined4 in_stack_fffffffffffffed4;
  undefined1 local_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [24];
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  _union_249689 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 uVar26;
  
  if (g_data_057ae0cc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057ae0cc = '\x01';
  }
  fVar33 = 0.0;
  pIVar32 = (Il2CppObject *)0x0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_58._0_2_ = 0;
  uStack_58._2_1_ = '\0';
  uStack_58._3_1_ = '\0';
  uStack_58._4_4_ = 0;
  uStack_50 = 0;
  local_4c = 0;
  local_68.genericMethod = (void *)0x0;
  uStack_60._0_4_ = 0;
  uStack_60._4_2_ = 0;
  uStack_60._6_2_ = 0;
  local_118._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_118._8_8_ = (Il2CppMethodPointer)0x0;
  local_118._16_8_ = (UnityEngine_Collider_o *)0x0;
  local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_a8._8_8_ = (Il2CppMethodPointer)0x0;
  local_a8._16_8_ = (UnityEngine_Collider_o *)0x0;
  pGVar3 = (__this->fields)._gameManager;
  if ((pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar4 = (pGVar3->fields).SelectedObjects,
     pSVar4 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_043422f5;
  if ((pSVar4->fields)._count == 0) {
    return;
  }
  pUVar15 = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  if (*(char *)&(__this->fields)._snapAnchorLocal.fields.y == '\0') {
label_04341a67:
    local_a8._24_8_ = (char *)0x0;
    local_d0.fields._index = 0;
    local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    bVar11 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                       (__this,camera,(UnityEngine_Vector3_o *)&stack0xfffffffffffffec8,
                        (UnityEngine_Transform_o **)(local_a8 + 0x18),(UnityEngine_Vector3_o *)&local_d0,in_R9
                       );
    if ((char)bVar11 == '\0') {
      return;
    }
    pUVar15 = (__this->fields)._activeLine;
  }
  else {
    x = *(UnityEngine_Object_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') goto label_04341a67;
    pUVar15 = *(UnityEngine_Transform_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
    if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_043422f5;
    UVar31 = UnityEngine_Transform__TransformPoint
                       (pUVar15,*(UnityEngine_Vector3_Fields *)&(__this->fields)._snapAnchorTransform,
                        (MethodInfo *)0x0);
    fVar33 = UVar31.fields.z;
    pIVar32 = UVar31.fields._0_8_;
    pUVar15 = (__this->fields)._activeLine;
  }
  if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_043422f5;
  UVar31 = UnityEngine_Transform__get_right(pUVar15,(MethodInfo *)0x0);
  in_stack_fffffffffffffec4 = UVar31.fields.z;
  fVar20 = UVar31.fields.x;
  fVar24 = UVar31.fields.y;
  uVar22 = extraout_XMM0_Dc;
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar21 = 0;
  uVar23 = 0;
  fVar19 = in_stack_fffffffffffffec4 * in_stack_fffffffffffffec4 + fVar24 * fVar24 + fVar20 * fVar20;
  if (fVar19 < 0.0) {
    fVar19 = sqrtf(fVar19);
    uVar21 = extraout_XMM0_Dc_00;
    uVar23 = extraout_XMM0_Dd_00;
    if (fVar19 <= 1e-05) goto label_04341b28;
label_04341b87:
    in_stack_fffffffffffffec4 = in_stack_fffffffffffffec4 / fVar19;
    auVar10._4_4_ = fVar24;
    auVar10._0_4_ = fVar20;
    auVar10._8_4_ = uVar22;
    auVar10._12_4_ = extraout_XMM0_Dd;
    auVar27._4_4_ = fVar19;
    auVar27._0_4_ = fVar19;
    auVar27._8_4_ = uVar21;
    auVar27._12_4_ = uVar23;
    auVar27 = divps(auVar10,auVar27);
    fVar24 = auVar27._0_4_;
    fVar19 = auVar27._4_4_;
    fVar25 = auVar27._8_4_;
    fVar20 = (__this->fields)._snapAnchorLocal.fields.z;
  }
  else {
    fVar19 = SQRT(fVar19);
    if (1e-05 < fVar19) goto label_04341b87;
label_04341b28:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    uVar26 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar24 = (float)uVar26;
    fVar19 = (float)((ulong)uVar26 >> 0x20);
    fVar25 = 0.0;
    in_stack_fffffffffffffec4 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    fVar20 = (__this->fields)._snapAnchorLocal.fields.z;
  }
  if (fVar20 == 0.0) {
    UVar31 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    fStack_b0 = (float)extraout_XMM0_Dc_01;
    local_b8 = (undefined1  [8])UVar31.fields._0_8_;
    fStack_ac = (float)extraout_XMM0_Dd_01;
    if ((camera != (Cameras_BaseCamera_o *)0x0) &&
       (pUVar5 = (camera->fields).Camera, pUVar5 != (UnityEngine_Camera_o *)0x0)) {
      local_88 = *(System_Collections_Generic_List_Enumerator_T__c **)&(__this->fields)._hasSnapAnchor;
      uStack_80 = (Il2CppType *)0x0;
      UVar31.fields.z = fVar33;
      UVar31.fields._0_8_ = pIVar32;
      local_e8._8_8_ = 0;
      local_e8._0_8_ = pIVar32;
      local_f8._0_4_ = fVar33;
      UVar31 = UnityEngine_Camera__WorldToScreenPoint_4db3370(pUVar5,UVar31,(MethodInfo *)0x0);
      fStack_70 = (float)extraout_XMM0_Dc_02;
      local_78 = UVar31.fields._0_8_;
      fStack_6c = (float)extraout_XMM0_Dd_02;
      pUVar5 = (camera->fields).Camera;
      if (pUVar5 != (UnityEngine_Camera_o *)0x0) {
        position.fields.x = (float)local_e8._0_4_ + fVar24;
        position.fields.y = (float)local_e8._4_4_ + fVar19;
        position.fields.z = (float)local_f8._0_4_ + in_stack_fffffffffffffec4;
        UVar31 = UnityEngine_Camera__WorldToScreenPoint_4db3370(pUVar5,position,(MethodInfo *)0x0);
        local_e8._0_4_ = UVar31.fields.x - (float)local_78._0_4_;
        local_e8._4_4_ = UVar31.fields.y - (float)local_78._4_4_;
        local_e8._8_4_ = extraout_XMM0_Dc_03 - fStack_70;
        local_e8._12_4_ = extraout_XMM0_Dd_03 - fStack_6c;
        fVar20 = (float)local_e8._4_4_ * (float)local_e8._4_4_;
        auVar28._4_4_ = fVar20;
        auVar28._0_4_ = fVar20;
        auVar28._8_4_ = local_e8._8_4_ * local_e8._8_4_;
        auVar28._12_4_ = local_e8._12_4_ * local_e8._12_4_;
        auVar29._4_12_ = auVar28._4_12_;
        auVar29._0_4_ = fVar20 + (float)local_e8._0_4_ * (float)local_e8._0_4_;
        if (auVar29._0_4_ < 1e-06) {
          return;
        }
        local_b8._0_4_ = (float)local_b8._0_4_ - (float)local_88;
        local_b8._4_4_ = (float)local_b8._4_4_ - local_88._4_4_;
        fStack_b0 = fStack_b0 - (float)uStack_80;
        fStack_ac = fStack_ac - uStack_80._4_4_;
        if ((float)local_b8._4_4_ * (float)local_b8._4_4_ + (float)local_b8._0_4_ * (float)local_b8._0_4_ <
            25.0) {
          return;
        }
        if (g_data_057a68c9 == '\0') {
          local_f8 = auVar29;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a68c9 = '\x01';
          auVar29 = local_f8;
          if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto label_04341cbd;
label_04341d48:
          local_f8 = auVar29;
          il2cpp_runtime_helper_02337ed0();
          fVar20 = local_f8._0_4_;
          auVar29 = local_f8;
          if (0.0 <= fVar20) goto label_04341cc9;
label_04341d68:
          fVar20 = sqrtf(fVar20);
          uVar22 = extraout_XMM0_Dc_04;
          uVar21 = extraout_XMM0_Dd_04;
          if (fVar20 <= 1e-05) goto label_04341d87;
label_04341d7e:
          auVar9._4_4_ = fVar20;
          auVar9._0_4_ = fVar20;
          auVar9._8_4_ = uVar22;
          auVar9._12_4_ = uVar21;
          auVar27 = divps(local_e8._0_16_,auVar9);
          uVar26 = auVar27._0_8_;
        }
        else {
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto label_04341d48;
label_04341cbd:
          fVar20 = auVar29._0_4_;
          if (fVar20 < 0.0) goto label_04341d68;
label_04341cc9:
          uVar22 = 0;
          uVar21 = 0;
          fVar20 = SQRT(auVar29._0_4_);
          if (1e-05 < fVar20) goto label_04341d7e;
label_04341d87:
          if (g_data_057a694c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          uVar26 = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
        }
        fVar20 = (float)((uint)(0.0 <= (float)local_b8._4_4_ * (float)((ulong)uVar26 >> 0x20) +
                                       (float)local_b8._0_4_ * (float)uVar26) * 2 + -1);
        (__this->fields)._snapAnchorLocal.fields.z = fVar20;
        goto label_04341de5;
      }
    }
    goto label_043422f5;
  }
label_04341de5:
  __this_10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor(__this_10,MethodInfo_List_1_UnityEngine_Collider);
  pGVar3 = (__this->fields)._gameManager;
  if (pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_043422f5;
  local_f8._0_8_ = __this;
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)(pGVar3->fields).SelectedObjects;
  if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043422f5;
  fVar20 = (float)(int)fVar20;
  in_stack_fffffffffffffec4 = in_stack_fffffffffffffec4 * fVar20;
  fVar24 = fVar24 * fVar20;
  fVar19 = fVar19 * fVar20;
  fVar25 = fVar25 * 0.0;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_d0,pSVar8,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  local_118._16_8_ = local_d0.fields._current;
  local_118._8_8_ = CONCAT44(local_d0.fields._version,local_d0.fields._index);
  local_118._0_8_ = local_d0.fields._list;
  while (__this_00.fields._version = (int32_t)in_stack_fffffffffffffec4,
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8._0_8_,
        __this_00.fields._index = in_stack_fffffffffffffeb8._8_4_, __this_00.fields._current = pIVar32,
        bVar11 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                           (__this_00,(MethodInfo_3219C40 *)local_118), uVar26 = local_118._16_8_,
        (char)bVar11 != '\0') {
    if ((UnityEngine_Collider_o *)local_118._16_8_ == (UnityEngine_Collider_o *)0x0) goto label_043422f0;
    x_00 = ((UnityEngine_Collider_o *)(local_118._16_8_ + 0x18))->klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (((UnityEngine_Collider_o *)(uVar26 + 0x18))->klass == (UnityEngine_Collider_c *)0x0)
      goto label_043422fa;
      pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                          ((UnityEngine_GameObject_o *)((UnityEngine_Collider_o *)(uVar26 + 0x18))->klass,
                           MethodInfo_Collider_GetComponentsInChildren_Collider);
      if (pSVar14 == (System_Object_array *)0x0) goto label_043422ff;
      uVar12 = (uint)pSVar14->max_length;
      if (__this_10 == (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (int)uVar12) {
          lVar18 = 0;
          do {
            if (uVar12 <= (uint)lVar18) goto label_043422cb;
            x_00 = (UnityEngine_Collider_c *)pSVar14->m_Items[lVar18];
            if (x_00 == (UnityEngine_Collider_c *)0x0) goto label_043422d0;
            bVar11 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x_00,(MethodInfo *)0x0);
            if ((char)bVar11 != '\0') goto label_043422d5;
            uVar12 = (uint)pSVar14->max_length;
            lVar18 = lVar18 + 1;
          } while ((int)lVar18 < (int)uVar12);
        }
      }
      else if (0 < (int)uVar12) {
        uVar17 = 0;
        if (uVar12 == 0) {
label_043422cb:
          il2cpp_runtime_helper_022b2ca0();
label_043422d0:
          il2cpp_runtime_helper_022b2c90();
label_043422d5:
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)x_00,0,(MethodInfo *)0x0);
          il2cpp_runtime_helper_022b2c90();
label_043422e6:
          il2cpp_runtime_helper_022b2c90();
          goto label_043422eb;
        }
        while( true ) {
          x_00 = (UnityEngine_Collider_c *)pSVar14->m_Items[(int)uVar17];
          if (x_00 == (UnityEngine_Collider_c *)0x0) goto label_043422d0;
          bVar11 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x_00,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)x_00,0,(MethodInfo *)0x0);
            lVar18 = MethodInfo_Void_Add;
            piVar1 = &(__this_10->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this_10->fields)._items;
            if (pSVar6 == (System_Object_array *)0x0) goto label_043422e6;
            uVar12 = (__this_10->fields)._size;
            if (uVar12 < (uint)pSVar6->max_length) {
              (__this_10->fields)._size = uVar12 + 1;
              pSVar6->m_Items[(int)uVar12] = (Il2CppObject *)x_00;
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar12);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_10,(Il2CppObject *)x_00,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar17 = uVar17 + 1;
          uVar12 = (uint)pSVar14->max_length;
          if ((int)uVar12 <= (int)uVar17) break;
          if (uVar12 <= uVar17) goto label_043422cb;
        }
      }
    }
  }
  __this_01.fields._version = (int32_t)in_stack_fffffffffffffec4;
  __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8._0_8_;
  __this_01.fields._index = in_stack_fffffffffffffeb8._8_4_;
  __this_01.fields._current = pIVar32;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_01,(MethodInfo_3219C30 *)local_118);
  local_e8._8_8_ = 0;
  local_e8._0_8_ = pIVar32;
  local_b8._0_4_ = fVar33;
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  uVar26 = local_f8._0_8_;
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers == (System_Int32_array *)0x0) goto label_043422f5;
  if ((int)layers->max_length == 0) goto label_04342313;
  layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
  mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
  layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  auVar27 = local_e8._0_16_;
  direction.fields.y = fVar19;
  direction.fields.x = fVar24;
  origin.fields.z = (float)local_b8._0_4_;
  origin.fields.x = (float)local_e8._0_4_;
  origin.fields.y = (float)local_e8._4_4_;
  direction.fields.z = in_stack_fffffffffffffec4;
  local_e8._0_16_ = auVar27;
  bVar11 = UnityEngine_Physics__Raycast_4e776c0
                     (origin,direction,(UnityEngine_RaycastHit_o *)&local_68,100000.0,layerMask,
                      (MethodInfo *)0x0);
  if (__this_10 == (System_Collections_Generic_List_object__o *)0x0) goto label_043422f5;
  System_Collections_Generic_List_object___GetEnumerator(&local_d0,__this_10,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
  local_a8._16_8_ = local_d0.fields._current;
  local_a8._8_8_ = CONCAT44(local_d0.fields._version,local_d0.fields._index);
  local_a8._0_8_ = local_d0.fields._list;
  while (__this_02.fields._version = (int32_t)in_stack_fffffffffffffec4,
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8._0_8_,
        __this_02.fields._index = in_stack_fffffffffffffeb8._8_4_, __this_02.fields._current = pIVar32,
        bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_02,(MethodInfo_321A1D0 *)local_a8), (char)bVar13 != '\0') {
    if ((UnityEngine_Collider_o *)local_a8._16_8_ == (UnityEngine_Collider_o *)0x0) goto label_043422eb;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)local_a8._16_8_,1,(MethodInfo *)0x0);
  }
  __this_03.fields._version = (int32_t)in_stack_fffffffffffffec4;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8._0_8_;
  __this_03.fields._index = in_stack_fffffffffffffeb8._8_4_;
  __this_03.fields._current = pIVar32;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)local_a8);
  if ((char)bVar11 == '\0') {
    return;
  }
  __this_09.fields.m_Normal.fields.x = in_stack_fffffffffffffec4;
  __this_09.fields.m_Point.fields.x = (float)in_stack_fffffffffffffeb8._0_4_;
  __this_09.fields.m_Point.fields.y = (float)in_stack_fffffffffffffeb8._4_4_;
  __this_09.fields.m_Point.fields.z = (float)in_stack_fffffffffffffeb8._8_4_;
  __this_09.fields.m_Normal.fields._4_8_ = pIVar32;
  __this_09.fields.m_FaceID = (uint32_t)fVar33;
  __this_09.fields.m_Distance = (float)in_stack_fffffffffffffed4;
  __this_09.fields.m_UV.fields.x = fVar24;
  __this_09.fields.m_UV.fields.y = fVar19;
  __this_09.fields.m_Collider = (int32_t)fVar25;
  UVar31 = UnityEngine_RaycastHit__get_point(__this_09,(MethodInfo *)&local_68);
  fVar33 = UVar31.fields.x - (float)local_e8._0_4_;
  fVar20 = UVar31.fields.y - (float)local_e8._4_4_;
  in_stack_fffffffffffffec4 = UVar31.fields.z - (float)local_b8._0_4_;
  if (in_stack_fffffffffffffec4 * in_stack_fffffffffffffec4 + fVar20 * fVar20 + fVar33 * fVar33 < 1e-08) {
    return;
  }
  pvVar7 = (((Il2CppClass_1 *)uVar26)->byval_arg).data;
  if ((pvVar7 == (void *)0x0) ||
     (pSVar8 = *(System_Collections_Generic_HashSet_object__o **)((long)pvVar7 + 0x38),
     pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_043422f5;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_d0,pSVar8,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  local_118._16_8_ = local_d0.fields._current;
  local_118._8_8_ = CONCAT44(local_d0.fields._version,local_d0.fields._index);
  local_118._0_8_ = local_d0.fields._list;
  while( true ) {
    __this_04.fields._version = (int32_t)in_stack_fffffffffffffec4;
    __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8._0_8_;
    __this_04.fields._index = in_stack_fffffffffffffeb8._8_4_;
    __this_04.fields._current = pIVar32;
    bVar11 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                       (__this_04,(MethodInfo_3219C40 *)local_118);
    if ((char)bVar11 == '\0') {
      __this_05.fields._version = (int32_t)in_stack_fffffffffffffec4;
      __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8._0_8_;
      __this_05.fields._index = in_stack_fffffffffffffeb8._8_4_;
      __this_05.fields._current = pIVar32;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_05,(MethodInfo_3219C30 *)local_118);
      return;
    }
    if ((UnityEngine_Collider_o *)local_118._16_8_ == (UnityEngine_Collider_o *)0x0) break;
    if (((UnityEngine_Collider_o *)(local_118._16_8_ + 0x18))->klass == (UnityEngine_Collider_c *)0x0)
    goto label_04342309;
    pUVar15 = UnityEngine_GameObject__get_transform
                        ((UnityEngine_GameObject_o *)
                         ((UnityEngine_Collider_o *)(local_118._16_8_ + 0x18))->klass,(MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0434230e;
    UVar31 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
    value.fields.x = UVar31.fields.x + fVar33;
    value.fields.y = UVar31.fields.y + fVar20;
    value.fields.z = UVar31.fields.z + in_stack_fffffffffffffec4;
    UnityEngine_Transform__set_position(pUVar15,value,(MethodInfo *)0x0);
  }
  goto label_04342304;
label_043422eb:
  il2cpp_runtime_helper_022b2c90();
label_043422f0:
  il2cpp_runtime_helper_022b2c90();
label_043422f5:
  il2cpp_runtime_helper_022b2c90();
label_043422fa:
  il2cpp_runtime_helper_022b2c90();
label_043422ff:
  il2cpp_runtime_helper_022b2c90();
label_04342304:
  il2cpp_runtime_helper_022b2c90();
label_04342309:
  il2cpp_runtime_helper_022b2c90();
label_0434230e:
  il2cpp_runtime_helper_022b2c90();
label_04342313:
  auVar30 = il2cpp_runtime_helper_022b2ca0();
  if (auVar30._8_4_ == 1) {
    plVar16 = (long *)__cxa_begin_catch(auVar30._0_8_);
    lVar18 = *plVar16;
    __cxa_end_catch();
    __this_06.fields._version = (int32_t)in_stack_fffffffffffffec4;
    __this_06.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8._0_8_;
    __this_06.fields._index = in_stack_fffffffffffffeb8._8_4_;
    __this_06.fields._current = pIVar32;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_06,(MethodInfo_3219C30 *)local_118);
    if (lVar18 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar18);
    __this_08.fields._version = (int32_t)in_stack_fffffffffffffec4;
    __this_08.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8._0_8_;
    __this_08.fields._index = in_stack_fffffffffffffeb8._8_4_;
    __this_08.fields._current = pIVar32;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_08,(MethodInfo_3219C30 *)local_118);
  }
  else {
    __this_07.fields._version = (int32_t)in_stack_fffffffffffffec4;
    __this_07.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8._0_8_;
    __this_07.fields._index = in_stack_fffffffffffffeb8._8_4_;
    __this_07.fields._current = pIVar32;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_07,(MethodInfo_3219C30 *)local_118);
  }
  _Unwind_Resume(auVar30._0_8_);
}


// MapEditor.PositionGizmo$$DoFreeDragVertexSnap
// il2cpp: void MapEditor_PositionGizmo__DoFreeDragVertexSnap (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, const MethodInfo* method);
// 0x4341090

void MapEditor_PositionGizmo__DoFreeDragVertexSnap
               (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,MethodInfo *method)

{
  int iVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Object_o *x;
  Utility_BaseComponentCache_o *pUVar4;
  System_Collections_Generic_HashSet_object__o *__this_01;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  UnityEngine_Ray_o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  bool_conflict bVar9;
  UnityEngine_Transform_o *pUVar10;
  long *plVar11;
  MethodInfo *in_RCX;
  MethodInfo *in_R9;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint uVar12;
  float extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint uVar13;
  float extraout_XMM0_Dd_01;
  float fVar14;
  undefined8 extraout_XMM1_Qa;
  uint uVar21;
  float fVar22;
  undefined1 in_XMM1 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar16 [16];
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  undefined4 uVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [12];
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o value;
  float in_stack_fffffffffffffee8;
  float in_stack_fffffffffffffeec;
  float in_stack_fffffffffffffef0;
  uint uVar40;
  float in_stack_fffffffffffffef4;
  uint uVar41;
  float in_stack_fffffffffffffef8;
  float in_stack_fffffffffffffefc;
  UnityEngine_Vector3_o local_f8;
  float local_ec;
  UnityEngine_Vector3_Fields local_e8;
  undefined1 local_d8 [40];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [16];
  Il2CppObject *local_90;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [24];
  Il2CppMethodPointer local_60;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined8 local_38;
  Il2CppType **ppIStack_30;
  undefined1 local_28 [16];
  undefined8 uVar15;
  
  if (g_data_057ae0cd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0();
    in_XMM1._8_8_ = extraout_XMM1_Qb;
    in_XMM1._0_8_ = extraout_XMM1_Qa;
    g_data_057ae0cd = '\x01';
  }
  local_d8._32_8_ = (Il2CppRGCTXData *)0x0;
  fStack_b0 = 0.0;
  fStack_ac = 0.0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  local_f8.fields.z = 0.0;
  local_f8.fields.x = 0.0;
  local_f8.fields.y = 0.0;
  local_e8.z = 0.0;
  local_e8.x = 0.0;
  local_e8.y = 0.0;
  local_d8._0_8_ = (Il2CppRGCTXData *)0x0;
  local_d8._8_8_ = (Il2CppMethodPointer)0x0;
  local_d8._16_8_ = (Il2CppObject *)0x0;
  pGVar2 = (__this->fields)._gameManager;
  if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).SelectedObjects,
     pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if ((pSVar3->fields)._count == 0) {
      return;
    }
    if (camera != (Cameras_BaseCamera_o *)0x0) {
      __this_00 = (camera->fields).Camera;
      UVar39 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Camera_o *)0x0) {
        auVar7._12_4_ = 0;
        auVar7._0_12_ = in_XMM1._4_12_;
        auVar16 = auVar7 << 0x20;
        UnityEngine_Camera__ScreenPointToRay_4db37e0
                  ((UnityEngine_Ray_o *)local_a0,__this_00,UVar39,(MethodInfo *)0x0);
        fStack_a8 = SUB84(local_90,0);
        fStack_a4 = (float)((ulong)local_90 >> 0x20);
        local_d8._32_8_ = local_a0._0_8_;
        fStack_b0 = (float)local_a0._8_4_;
        fStack_ac = (float)local_a0._12_4_;
        if (*(char *)&(__this->fields)._snapAnchorLocal.fields.y == '\0') {
label_0434121d:
          local_60 = (Il2CppMethodPointer)0x0;
          local_a0._8_4_ = 0.0;
          local_a0._0_8_ = (Il2CppRGCTXData *)0x0;
          in_RCX = (MethodInfo *)&local_60;
          bVar9 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                            (__this,camera,&local_f8,(UnityEngine_Transform_o **)in_RCX,
                             (UnityEngine_Vector3_o *)local_a0,in_R9);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar4 = (camera->fields).Cache;
        }
        else {
          x = *(UnityEngine_Object_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            auVar16._8_8_ = extraout_XMM1_Qb_00;
            auVar16._0_8_ = extraout_XMM1_Qa_00;
          }
          bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') goto label_0434121d;
          pUVar10 = *(UnityEngine_Transform_o **)&(__this->fields)._vertexSnapOrigin.fields.z;
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04341781;
          auVar38 = ZEXT812(0);
          UVar39 = UnityEngine_Transform__TransformPoint
                             (pUVar10,*(UnityEngine_Vector3_Fields *)&(__this->fields)._snapAnchorTransform,
                              (MethodInfo *)0x0);
          auVar16._0_4_ = UVar39.fields.z;
          auVar16._4_12_ = auVar38;
          local_f8.fields._0_8_ = UVar39.fields._0_8_;
          pUVar4 = (camera->fields).Cache;
          local_f8.fields.z = auVar16._0_4_;
        }
        if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar10 = (pUVar4->fields).Transform, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
          UVar39 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
          auVar17._4_12_ = auVar16._4_12_;
          auVar17._0_4_ = UVar39.fields.z;
          uVar15 = auVar17._0_8_;
          fVar20 = UVar39.fields.x;
          fVar27 = UVar39.fields.y;
          register0x000012c8 = 0;
          local_88._0_4_ = local_f8.fields.x;
          local_88._4_4_ = local_f8.fields.y;
          local_78._0_16_ = ZEXT416((uint)local_f8.fields.z);
          fVar14 = local_f8.fields.z;
          fVar22 = 0.0;
          if (g_data_057a68cb == '\0') {
            in_stack_fffffffffffffeec = auVar16._4_4_;
            in_stack_fffffffffffffef0 = auVar16._8_4_;
            in_stack_fffffffffffffef4 = auVar16._12_4_;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            uVar15 = CONCAT44(in_stack_fffffffffffffeec,auVar17._0_4_);
            g_data_057a68cb = '\x01';
            fVar14 = (float)local_78._0_4_;
            fVar22 = (float)local_78._4_4_;
            in_stack_fffffffffffffef8 = fVar20;
            in_stack_fffffffffffffefc = fVar27;
          }
          auVar17._0_4_ = local_88._4_4_;
          local_28._4_4_ = auVar17._0_4_;
          local_28._0_4_ = auVar17._0_4_;
          local_28._8_4_ = local_88._8_4_;
          local_28._12_4_ = local_88._12_4_;
          fVar26 = fVar27 - auVar17._0_4_;
          fVar14 = (float)uVar15 - fVar14;
          fVar20 = fVar20 - local_88._0_4_;
          fVar22 = (float)((ulong)uVar15 >> 0x20) - fVar22;
          auVar17._0_4_ = fVar27 - auVar17._0_4_;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            in_stack_fffffffffffffeec = fVar20;
            in_stack_fffffffffffffef0 = fVar22;
            in_stack_fffffffffffffef4 = auVar17._0_4_;
            in_stack_fffffffffffffef8 = fVar26;
            in_stack_fffffffffffffefc = fVar27;
          }
          in_stack_fffffffffffffee8 = fVar20 * fVar20 + fVar26 * fVar26 + fVar14 * fVar14;
          auVar19 = ZEXT816(0);
          if (in_stack_fffffffffffffee8 < 0.0) {
            in_stack_fffffffffffffee8 = sqrtf(in_stack_fffffffffffffee8);
          }
          else {
            in_stack_fffffffffffffee8 = SQRT(in_stack_fffffffffffffee8);
          }
          bVar9 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_4243720
                            (__this,camera,30.0,(UnityEngine_Vector3_o *)&local_e8,in_RCX);
          if ((char)bVar9 == '\0') {
label_043413d6:
            pUVar4 = (camera->fields).Cache;
            if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar10 = (pUVar4->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0))
            goto label_04341781;
            UVar39 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
            fVar14 = UVar39.fields.z;
            uVar31 = UVar39.fields._0_8_;
            uVar21 = auVar19._4_4_;
            uVar12 = auVar19._8_4_;
            uVar13 = auVar19._12_4_;
            fVar22 = UVar39.fields.x;
            in_stack_fffffffffffffefc = UVar39.fields.y;
            if (g_data_057a6845 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              uVar31 = CONCAT44(in_stack_fffffffffffffefc,fVar22);
              g_data_057a6845 = '\x01';
              iVar1 = *(int *)(TypeInfo_Math + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_Math + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
              uVar31 = CONCAT44(in_stack_fffffffffffffefc,fVar22);
            }
            fVar20 = (float)(uVar31 >> 0x20);
            fVar20 = fVar14 * fVar14 + fVar20 * fVar20 + (float)uVar31 * (float)uVar31;
            uVar40 = uVar12;
            uVar41 = uVar13;
            if (fVar20 < 0.0) {
              fVar20 = sqrtf(fVar20);
              uVar31 = CONCAT44(in_stack_fffffffffffffefc,fVar22);
              uVar12 = extraout_XMM0_Dc_00;
              uVar13 = extraout_XMM0_Dd_00;
              if (fVar20 <= 1e-05) goto label_04341454;
label_043414a3:
              uVar28 = uVar21 ^ 0x80000000;
              uVar29 = uVar40 ^ 0x80000000;
              uVar30 = uVar41 ^ 0x80000000;
              auVar32._0_8_ = uVar31 ^ 0x8000000080000000;
              auVar32._8_4_ = extraout_XMM0_Dc ^ 0x80000000;
              auVar32._12_4_ = extraout_XMM0_Dd ^ 0x80000000;
              fVar27 = -fVar14 / fVar20;
              auVar6._4_4_ = fVar20;
              auVar6._0_4_ = fVar20;
              auVar6._8_4_ = uVar12;
              auVar6._12_4_ = uVar13;
              auVar33 = divps(auVar32,auVar6);
            }
            else {
              fVar20 = SQRT(fVar20);
              if (1e-05 < fVar20) goto label_043414a3;
label_04341454:
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a65d5 = '\x01';
              }
              auVar33._8_8_ = 0;
              auVar33._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
              fVar27 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
              uVar28 = 0;
              uVar29 = 0;
              uVar30 = 0;
            }
            fVar23 = auVar33._0_4_;
            fVar25 = auVar33._4_4_;
            uVar34 = auVar33._8_4_;
            uVar35 = auVar33._12_4_;
            fVar26 = fStack_a4 * fVar27 + fStack_a8 * fVar25 + fVar23 * fStack_ac;
            fVar20 = fStack_b0 * fVar27;
            auVar17._0_4_ = fVar25;
            uVar12 = 0;
            uVar13 = 0;
            fVar36 = (float)local_d8._32_8_;
            fVar37 = SUB84(local_d8._32_8_,4);
            if (g_data_057a68c8 == '\0') {
              local_38 = (Il2CppRGCTXData *)local_d8._32_8_;
              ppIStack_30 = (Il2CppType **)0x0;
              local_48 = ZEXT416((uint)fVar26);
              local_ec = fStack_b0 * fVar27;
              local_58 = fVar25;
              fStack_54 = fVar25;
              uStack_50 = uVar34;
              uStack_4c = uVar35;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
              auVar33._4_4_ = fVar25;
              auVar33._0_4_ = fVar23;
              auVar33._8_4_ = uVar34;
              auVar33._12_4_ = uVar35;
              g_data_057a68c8 = '\x01';
              fVar20 = local_ec;
              auVar17._0_4_ = local_58;
              fVar26 = (float)local_48._0_4_;
              uVar12 = local_48._8_4_;
              uVar13 = local_48._12_4_;
              fVar36 = (float)local_38;
              fVar37 = local_38._4_4_;
              fVar14 = fVar27;
              uVar21 = uVar28;
              uVar40 = uVar29;
              uVar41 = uVar30;
              fVar22 = fVar23;
              in_stack_fffffffffffffefc = fVar25;
            }
            auVar24._0_4_ = ABS(fVar26);
            auVar24._4_4_ = 0;
            auVar24._8_4_ = uVar12 & 0x7fffffff;
            auVar24._12_4_ = uVar13 & 0x7fffffff;
            if (auVar24._0_4_ <= 0.0) {
              auVar8._12_4_ = 0;
              auVar8._0_12_ = auVar24._4_12_;
              auVar24 = auVar8 << 0x20;
            }
            fVar23 = auVar24._0_4_ * 1e-06;
            fVar25 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
            if (fVar23 <= fVar25) {
              fVar23 = fVar25;
            }
            if (ABS(0.0 - fVar26) < fVar23) {
              return;
            }
            fVar26 = ((fVar27 * (float)local_78._0_4_ +
                      (float)local_28._0_4_ * auVar17._0_4_ + (float)local_88._0_4_ * auVar33._0_4_) -
                     (fVar20 + fVar37 * auVar17._0_4_ + auVar33._0_4_ * fVar36)) / fVar26;
            if (fVar26 <= 0.0) {
              return;
            }
            __this_02.fields.m_Origin.fields.y = (float)uVar21;
            __this_02.fields.m_Origin.fields.x = fVar14;
            __this_02.fields.m_Origin.fields.z = (float)uVar40;
            __this_02.fields.m_Direction.fields.x = (float)uVar41;
            __this_02.fields.m_Direction.fields.y = fVar22;
            __this_02.fields.m_Direction.fields.z = in_stack_fffffffffffffefc;
            UVar39 = UnityEngine_Ray__GetPoint(__this_02,fVar26,(MethodInfo *)(local_d8 + 0x20));
            in_stack_fffffffffffffee8 = UVar39.fields.x - (float)local_88._0_4_;
            in_stack_fffffffffffffeec = UVar39.fields.y - (float)local_88._4_4_;
            in_stack_fffffffffffffef0 = extraout_XMM0_Dc_01 - fStack_80;
            in_stack_fffffffffffffef4 = extraout_XMM0_Dd_01 - fStack_7c;
            in_stack_fffffffffffffef8 = UVar39.fields.z - (float)local_78._0_4_;
            fVar22 = in_stack_fffffffffffffef8 * in_stack_fffffffffffffef8 +
                     in_stack_fffffffffffffeec * in_stack_fffffffffffffeec +
                     in_stack_fffffffffffffee8 * in_stack_fffffffffffffee8;
          }
          else {
            fVar14 = in_stack_fffffffffffffee8 * 0.3;
            if (fVar14 <= 60.0) {
              fVar14 = 60.0;
            }
            in_stack_fffffffffffffee8 = local_e8.x - (float)local_88._0_4_;
            in_stack_fffffffffffffeec = local_e8.y - (float)local_88._4_4_;
            in_stack_fffffffffffffef0 = 0.0 - fStack_80;
            in_stack_fffffffffffffef4 = 0.0 - fStack_7c;
            in_stack_fffffffffffffef8 = local_e8.z - (float)local_78._0_4_;
            fVar22 = in_stack_fffffffffffffeec * in_stack_fffffffffffffeec;
            auVar18._4_4_ = fVar22;
            auVar18._0_4_ = fVar22;
            auVar18._8_4_ = in_stack_fffffffffffffef0 * in_stack_fffffffffffffef0;
            auVar18._12_4_ = in_stack_fffffffffffffef4 * in_stack_fffffffffffffef4;
            auVar19._4_12_ = auVar18._4_12_;
            auVar19._0_4_ = fVar22 + in_stack_fffffffffffffee8 * in_stack_fffffffffffffee8;
            fVar22 = in_stack_fffffffffffffef8 * in_stack_fffffffffffffef8 + auVar19._0_4_;
            if (fVar14 * fVar14 < fVar22) goto label_043413d6;
          }
          if (fVar22 < 1e-08) {
            return;
          }
          pGVar2 = (__this->fields)._gameManager;
          if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
             (__this_01 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
             __this_01 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
            System_Collections_Generic_HashSet_object___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a0,__this_01,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
            local_d8._16_8_ = local_90;
            local_d8._8_8_ = CONCAT44(local_a0._12_4_,local_a0._8_4_);
            local_d8._0_8_ = local_a0._0_8_;
            while( true ) {
              __this_03.fields._set._4_4_ = in_stack_fffffffffffffeec;
              __this_03.fields._set._0_4_ = in_stack_fffffffffffffee8;
              __this_03.fields._index = (int32_t)in_stack_fffffffffffffef0;
              __this_03.fields._version = (int32_t)in_stack_fffffffffffffef4;
              __this_03.fields._current._0_4_ = in_stack_fffffffffffffef8;
              __this_03.fields._current._4_4_ = in_stack_fffffffffffffefc;
              bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                (__this_03,(MethodInfo_3219C40 *)local_d8);
              if ((char)bVar9 == '\0') {
                __this_04.fields._set._4_4_ = in_stack_fffffffffffffeec;
                __this_04.fields._set._0_4_ = in_stack_fffffffffffffee8;
                __this_04.fields._index = (int32_t)in_stack_fffffffffffffef0;
                __this_04.fields._version = (int32_t)in_stack_fffffffffffffef4;
                __this_04.fields._current._0_4_ = in_stack_fffffffffffffef8;
                __this_04.fields._current._4_4_ = in_stack_fffffffffffffefc;
                System_Collections_Generic_HashSet_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_3219C30 *)local_d8);
                return;
              }
              if ((Il2CppObject *)local_d8._16_8_ == (Il2CppObject *)0x0) break;
              if (((Il2CppObject *)(local_d8._16_8_ + 0x10))->monitor == (UnityEngine_GameObject_o *)0x0)
              goto label_0434178b;
              pUVar10 = UnityEngine_GameObject__get_transform
                                  (((Il2CppObject *)(local_d8._16_8_ + 0x10))->monitor,(MethodInfo *)0x0);
              if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04341790;
              UVar39 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
              value.fields.x = UVar39.fields.x + in_stack_fffffffffffffee8;
              value.fields.y = UVar39.fields.y + in_stack_fffffffffffffeec;
              value.fields.z = UVar39.fields.z + in_stack_fffffffffffffef8;
              UnityEngine_Transform__set_position(pUVar10,value,(MethodInfo *)0x0);
            }
            goto label_04341786;
          }
        }
      }
    }
  }
label_04341781:
  il2cpp_runtime_helper_022b2c90();
label_04341786:
  il2cpp_runtime_helper_022b2c90();
label_0434178b:
  il2cpp_runtime_helper_022b2c90();
label_04341790:
  auVar38 = il2cpp_runtime_helper_022b2c90();
  if (auVar38._8_4_ == 1) {
    plVar11 = (long *)__cxa_begin_catch(auVar38._0_8_);
    lVar5 = *plVar11;
    __cxa_end_catch();
    __this_05.fields._set._4_4_ = in_stack_fffffffffffffeec;
    __this_05.fields._set._0_4_ = in_stack_fffffffffffffee8;
    __this_05.fields._index = (int32_t)in_stack_fffffffffffffef0;
    __this_05.fields._version = (int32_t)in_stack_fffffffffffffef4;
    __this_05.fields._current._0_4_ = in_stack_fffffffffffffef8;
    __this_05.fields._current._4_4_ = in_stack_fffffffffffffefc;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_05,(MethodInfo_3219C30 *)local_d8);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_06.fields._set._4_4_ = in_stack_fffffffffffffeec;
  __this_06.fields._set._0_4_ = in_stack_fffffffffffffee8;
  __this_06.fields._index = (int32_t)in_stack_fffffffffffffef0;
  __this_06.fields._version = (int32_t)in_stack_fffffffffffffef4;
  __this_06.fields._current._0_4_ = in_stack_fffffffffffffef8;
  __this_06.fields._current._4_4_ = in_stack_fffffffffffffefc;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_06,(MethodInfo_3219C30 *)local_d8);
  _Unwind_Resume(auVar38._0_8_);
}


// MapEditor.PositionGizmo$$TryFindNearestSceneVertexOnScreen
// il2cpp: bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x4343710

bool_conflict
MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen
          (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,UnityEngine_Vector3_o *vertex,
          MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_4243720
                    (__this,camera,INFINITY,vertex,method);
  return bVar1;
}


// MapEditor.PositionGizmo$$TryFindNearestSceneVertexOnScreen
// il2cpp: bool MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, float screenRadius, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x4343720

bool_conflict
MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_4243720
          (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,float screenRadius,
          UnityEngine_Vector3_o *vertex,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  GameManagers_MapEditorGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_MeshFilter_o *__this_01;
  UnityEngine_Camera_o *pUVar5;
  long lVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o __this_06;
  _union_231565 _Var7;
  _union_231565 _Var8;
  int32_t iVar9;
  int32_t iVar10;
  bool_conflict bVar11;
  uint uVar12;
  int iVar13;
  System_Object_array *pSVar14;
  UnityEngine_Object_o *pUVar15;
  MethodInfo *method_00;
  UnityEngine_Mesh_o *__this_07;
  UnityEngine_Vector3_array *pUVar16;
  UnityEngine_Transform_o *__this_08;
  long *plVar17;
  Il2CppObject *item;
  uint uVar18;
  undefined1 uVar19;
  ulong unaff_R13;
  ulong uVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float extraout_XMM0_Dc;
  undefined8 extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [12];
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o UVar29;
  void *in_stack_fffffffffffffe68;
  void *in_stack_fffffffffffffe70;
  void *in_stack_fffffffffffffe78;
  undefined7 in_stack_fffffffffffffe80;
  undefined1 in_stack_fffffffffffffe87;
  ulong in_stack_fffffffffffffe88;
  undefined8 uVar30;
  float local_170;
  float local_16c;
  _union_231565 local_148;
  _union_231565 _Stack_140;
  _union_231565 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  void *local_108;
  void *pvStack_100;
  void *local_f8;
  _union_231565 *local_e8;
  System_Object_array *local_e0;
  _union_231565 local_d8;
  _union_231565 _Stack_d0;
  _union_231565 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  UnityEngine_Vector2_Fields local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  _union_231565 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  _union_231565 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  _union_231565 local_48;
  _union_231565 _Stack_40;
  _union_231565 local_38;
  
  if (g_data_057ae0ce == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Int32_Map_Map);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Int32_Map_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0ce = '\x01';
  }
  local_138.genericMethod = (void *)0x0;
  uStack_130 = 0;
  local_148.genericMethod = (void *)0x0;
  _Stack_140.genericMethod = (void *)0x0;
  local_128 = 0;
  local_68.genericMethod = (void *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_108 = (void *)0x0;
  pvStack_100 = (void *)0x0;
  local_f8 = (void *)0x0;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a65d5 = '\x01';
  }
  uVar30 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar22 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (vertex->fields).x = (float)(int)uVar30;
  (vertex->fields).y = (float)(int)((ulong)uVar30 >> 0x20);
  (vertex->fields).z = fVar22;
  UVar28 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  local_a8 = UVar28.fields._0_8_;
  uStack_a0 = extraout_XMM0_Qb;
  iVar9 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar10 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pGVar4 = (__this->fields)._gameManager;
  if (pGVar4 == (GameManagers_MapEditorGameManager_o *)0x0) {
label_04343e53:
    il2cpp_runtime_helper_022b2c90();
label_04343e58:
    il2cpp_runtime_helper_022b2c90();
label_04343e62:
    uVar19 = (undefined1)unaff_R13;
    il2cpp_runtime_helper_022b2c90();
label_04343e6c:
    il2cpp_runtime_helper_022b2c90();
label_04343e76:
    il2cpp_runtime_helper_022b2c90();
label_04343e80:
    il2cpp_runtime_helper_022b2c90();
label_04343e8a:
    il2cpp_runtime_helper_022b2c90();
    in_stack_fffffffffffffe87 = uVar19;
  }
  else {
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar4->fields).SelectedObjects;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04343e53;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&local_d8,
               (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8),
               MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_Int32_Map_Map);
    local_128 = local_b8;
    local_138 = local_c8;
    uStack_130 = CONCAT44(uStack_bc,uStack_c0);
    local_148 = local_d8;
    _Stack_140 = _Stack_d0;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      fVar26 = (float)iVar9;
      fVar22 = (float)iVar10;
      local_118 = (float)(~-(uint)(INFINITY <= screenRadius) & (uint)(screenRadius * screenRadius) |
                         -(uint)(INFINITY <= screenRadius) & 0x7f7fffff);
      fStack_114 = 0.0;
      fStack_110 = 0.0;
      fStack_10c = 0.0;
      local_170 = screenRadius;
      local_e8 = &local_88;
      if ((INFINITY <= screenRadius) && (local_170 = fVar26, local_e8 = &local_68, fVar26 <= fVar22)) {
        local_170 = fVar22;
      }
      local_16c = 3.4028235e+38;
      uVar20 = 0;
      do {
        do {
          do {
            do {
              __this_02.fields._8_8_ = in_stack_fffffffffffffe70;
              __this_02.fields._dictionary = in_stack_fffffffffffffe68;
              __this_02.fields._current.fields.key = in_stack_fffffffffffffe78;
              __this_02.fields._current.fields.value._0_7_ = in_stack_fffffffffffffe80;
              __this_02.fields._current.fields.value._7_1_ = in_stack_fffffffffffffe87;
              __this_02.fields._32_8_ = in_stack_fffffffffffffe88;
              bVar11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                                 (__this_02,(MethodInfo_3243CF0 *)&local_148);
              if ((char)bVar11 == '\0') goto label_04343def;
              il2cpp_runtime_helper_02776c30(&local_148,MethodInfo_KeyValuePair_2_System_Int32_Map_MapObject_get_Current);
              bVar11 = System_Collections_Generic_HashSet_object___Contains(__this_00,item,MethodInfo_Boolean_Contains);
            } while ((char)bVar11 != '\0');
            if (item == (Il2CppObject *)0x0) {
label_04343e2b:
              il2cpp_runtime_helper_022b2c90();
label_04343e35:
              il2cpp_runtime_helper_022b2c90();
label_04343e3f:
              il2cpp_runtime_helper_022b2ca0();
              unaff_R13 = uVar20;
label_04343e49:
              il2cpp_runtime_helper_022b2c90();
              goto label_04343e53;
            }
            pUVar15 = item[1].monitor;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar11 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          } while ((char)bVar11 != '\0');
          if (pUVar15 == (UnityEngine_Object_o *)0x0) goto label_04343e35;
          bVar11 = UnityEngine_GameObject__get_activeInHierarchy
                             ((UnityEngine_GameObject_o *)pUVar15,(MethodInfo *)0x0);
        } while ((char)bVar11 == '\0');
        pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                            ((UnityEngine_GameObject_o *)pUVar15,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
        unaff_R13 = uVar20;
        if (pSVar14 == (System_Object_array *)0x0) goto label_04343e58;
        iVar13 = (int)pSVar14->max_length;
        if (0 < iVar13) {
          uVar18 = 0;
          local_e0 = pSVar14;
          if (iVar13 != 0) {
            do {
              __this_01 = (UnityEngine_MeshFilter_o *)local_e0->m_Items[(int)uVar18];
              if (__this_01 == (UnityEngine_MeshFilter_o *)0x0) goto label_04343e49;
              pUVar15 = (UnityEngine_Object_o *)
                        UnityEngine_MeshFilter__get_sharedMesh(__this_01,(MethodInfo *)0x0);
              uVar19 = in_stack_fffffffffffffe87;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                uVar19 = in_stack_fffffffffffffe87;
              }
              bVar11 = UnityEngine_Object__op_Equality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              in_stack_fffffffffffffe87 = (undefined1)unaff_R13;
              if ((char)bVar11 == '\0') {
                method_00 = (MethodInfo *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)__this_01,MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)method_00,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') {
                  if (method_00 == (MethodInfo *)0x0) goto label_04343e6c;
                  UnityEngine_Renderer__get_bounds
                            ((UnityEngine_Bounds_o *)&local_48,(UnityEngine_Renderer_o *)method_00,
                             (MethodInfo *)0x0);
                  _Var8 = _Stack_40;
                  _Var7 = local_48;
                  local_c8 = local_38;
                  local_d8 = local_48;
                  _Stack_d0 = _Stack_40;
                  if (camera == (Cameras_BaseCamera_o *)0x0) goto label_04343e76;
                  pUVar5 = (camera->fields).Camera;
                  local_e8[2] = local_38;
                  *local_e8 = _Var7;
                  local_e8[1] = _Var8;
                  in_stack_fffffffffffffe68 = local_e8->genericMethod;
                  in_stack_fffffffffffffe70 = local_e8[1].genericMethod;
                  in_stack_fffffffffffffe78 = local_e8[2].genericMethod;
                  local_108 = in_stack_fffffffffffffe68;
                  pvStack_100 = in_stack_fffffffffffffe70;
                  local_f8 = in_stack_fffffffffffffe78;
                  bVar11 = MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
                                     ((UnityEngine_Bounds_o)*(UnityEngine_Bounds_Fields *)local_e8,pUVar5,
                                      (UnityEngine_Vector2_o)local_a8,local_170,method_00);
                  if ((char)bVar11 == '\0') goto label_04343a98;
                }
                __this_07 = UnityEngine_MeshFilter__get_sharedMesh(__this_01,(MethodInfo *)0x0);
                if (__this_07 == (UnityEngine_Mesh_o *)0x0) goto label_04343e80;
                pUVar16 = UnityEngine_Mesh__get_vertices(__this_07,(MethodInfo *)0x0);
                __this_08 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Vector3_array *)0x0) goto label_04343e8a;
                iVar13 = (int)pUVar16->max_length;
                if (__this_08 == (UnityEngine_Transform_o *)0x0) {
                  if (0 < iVar13) goto label_04343e62;
                }
                else if (0 < iVar13) {
                  pfVar21 = &pUVar16->m_Items[0].fields.z;
                  uVar20 = 0;
                  in_stack_fffffffffffffe88 = unaff_R13;
                  if ((pUVar16->max_length & 0xffffffff) == 0) {
label_04343e1c:
                    il2cpp_runtime_helper_022b2ca0();
label_04343e21:
                    il2cpp_runtime_helper_022b2c90();
label_04343e26:
                    il2cpp_runtime_helper_022b2c90();
                    goto label_04343e2b;
                  }
                  while( true ) {
                    uVar1 = ((UnityEngine_Vector3_Fields *)(pfVar21 + -2))->x;
                    uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar21 + -2))->y;
                    UVar28.fields.y = (float)uVar2;
                    UVar28.fields.x = (float)uVar1;
                    UVar28.fields.z = *pfVar21;
                    UVar28 = UnityEngine_Transform__TransformPoint(__this_08,UVar28,(MethodInfo *)0x0);
                    if (camera == (Cameras_BaseCamera_o *)0x0) goto label_04343e26;
                    pUVar5 = (camera->fields).Camera;
                    if (pUVar5 == (UnityEngine_Camera_o *)0x0) goto label_04343e21;
                    local_98 = UVar28.fields._0_8_;
                    UVar29 = UnityEngine_Camera__WorldToScreenPoint_4db3370(pUVar5,UVar28,(MethodInfo *)0x0);
                    fVar24 = UVar29.fields.z;
                    if ((((0.0 < fVar24) && (fVar25 = UVar29.fields.x, 0.0 <= fVar25)) &&
                        (fVar23 = UVar29.fields.y, fVar23 <= fVar22)) &&
                       ((0.0 <= fVar23 && (fVar25 <= fVar26)))) {
                      fVar23 = (fVar23 - local_a8.y) * (fVar23 - local_a8.y);
                      fVar25 = fVar23 + (fVar25 - local_a8.x) * (fVar25 - local_a8.x);
                      if ((fVar25 + 36.0 < local_118) ||
                         (((fVar25 <= local_118 + 36.0 && (fVar24 < local_16c)) &&
                          (ABS(fVar25 - local_118) <= 36.0)))) {
                        (vertex->fields).x = (float)(undefined4)local_98;
                        (vertex->fields).y = (float)local_98._4_4_;
                        (vertex->fields).z = UVar28.fields.z;
                        in_stack_fffffffffffffe87 = 1;
                        local_16c = fVar24;
                        local_118 = fVar25;
                        fStack_114 = fVar23;
                        fStack_110 = (extraout_XMM0_Dc - (float)uStack_a0) *
                                     (extraout_XMM0_Dc - (float)uStack_a0);
                        fStack_10c = (extraout_XMM0_Dd - uStack_a0._4_4_) *
                                     (extraout_XMM0_Dd - uStack_a0._4_4_);
                      }
                    }
                    uVar20 = uVar20 + 1;
                    uVar3 = (uint)pUVar16->max_length;
                    unaff_R13 = (ulong)uVar3;
                    pfVar21 = pfVar21 + 3;
                    if ((long)(int)uVar3 <= (long)uVar20) break;
                    if (uVar3 <= uVar20) goto label_04343e1c;
                  }
                }
              }
label_04343a98:
              uVar18 = uVar18 + 1;
              uVar3 = (uint)local_e0->max_length;
              uVar20 = CONCAT71((int7)(unaff_R13 >> 8),in_stack_fffffffffffffe87);
              uVar12 = (uint)uVar20;
              if ((int)uVar3 <= (int)uVar18) goto label_04343dba;
              unaff_R13 = uVar20;
              if (uVar3 <= uVar18) break;
            } while( true );
          }
          goto label_04343e3f;
        }
        uVar12 = (uint)uVar20;
label_04343dba:
        uVar20 = (ulong)uVar12;
      } while (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0);
    }
    __this_03.fields._8_8_ = in_stack_fffffffffffffe70;
    __this_03.fields._dictionary = in_stack_fffffffffffffe68;
    __this_03.fields._current.fields.key = in_stack_fffffffffffffe78;
    __this_03.fields._current.fields.value._0_7_ = in_stack_fffffffffffffe80;
    __this_03.fields._current.fields.value._7_1_ = in_stack_fffffffffffffe87;
    __this_03.fields._32_8_ = in_stack_fffffffffffffe88;
    bVar11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext
                       (__this_03,(MethodInfo_3243CF0 *)&local_148);
    if ((char)bVar11 == '\0') {
      uVar20 = 0;
label_04343def:
      uVar18 = (uint)uVar20;
      __this_04.fields._8_8_ = in_stack_fffffffffffffe70;
      __this_04.fields._dictionary = in_stack_fffffffffffffe68;
      __this_04.fields._current.fields.key = in_stack_fffffffffffffe78;
      __this_04.fields._current.fields.value._0_7_ = in_stack_fffffffffffffe80;
      __this_04.fields._current.fields.value._7_1_ = in_stack_fffffffffffffe87;
      __this_04.fields._32_8_ = in_stack_fffffffffffffe88;
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
                (__this_04,(MethodInfo_3243E00 *)&local_148);
      goto label_04343e03;
    }
  }
  il2cpp_runtime_helper_02776c30(&local_148,MethodInfo_KeyValuePair_2_System_Int32_Map_MapObject_get_Current);
  auVar27 = il2cpp_runtime_helper_022b2c90();
  uVar30 = 0;
  if (auVar27._8_4_ == 1) {
    plVar17 = (long *)__cxa_begin_catch(auVar27._0_8_);
    lVar6 = *plVar17;
    __cxa_end_catch();
    __this_05.fields._8_8_ = in_stack_fffffffffffffe70;
    __this_05.fields._dictionary = in_stack_fffffffffffffe68;
    __this_05.fields._current.fields.key = in_stack_fffffffffffffe78;
    __this_05.fields._current.fields.value._0_7_ = in_stack_fffffffffffffe80;
    __this_05.fields._current.fields.value._7_1_ = in_stack_fffffffffffffe87;
    __this_05.fields._32_8_ = uVar30;
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
              (__this_05,(MethodInfo_3243E00 *)&local_148);
    uVar18 = (uint)uVar30;
    if (lVar6 == 0) {
label_04343e03:
      return uVar18 & 0xffffff01;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_06.fields._8_8_ = in_stack_fffffffffffffe70;
  __this_06.fields._dictionary = in_stack_fffffffffffffe68;
  __this_06.fields._current.fields.key = in_stack_fffffffffffffe78;
  __this_06.fields._current.fields.value._0_7_ = in_stack_fffffffffffffe80;
  __this_06.fields._current.fields.value._7_1_ = in_stack_fffffffffffffe87;
  __this_06.fields._32_8_ = uVar30;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose
            (__this_06,(MethodInfo_3243E00 *)&local_148);
  _Unwind_Resume(auVar27._0_8_);
}


// MapEditor.PositionGizmo$$ScreenBoundsIntersectsMouse
// il2cpp: bool MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse (UnityEngine_Bounds_o bounds, UnityEngine_Camera_o* cam, UnityEngine_Vector2_o mouseScreen, float screenRadius, const MethodInfo* method);
// 0x4344050

bool_conflict
MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
          (UnityEngine_Bounds_o bounds,UnityEngine_Camera_o *cam,UnityEngine_Vector2_o mouseScreen,
          float screenRadius,MethodInfo *method)

{
  bool_conflict extraout_EAX;
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  undefined8 local_140;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  float local_28;
  float fStack_24;
  UnityEngine_Vector3_o position;
  undefined1 auVar5 [16];
  undefined1 extraout_XMM0 [16];
  
  if (cam != (UnityEngine_Camera_o *)0x0) {
    fVar2 = bounds.fields.m_Center.fields.x - bounds.fields.m_Extents.fields.x;
    fVar6 = bounds.fields.m_Center.fields.y - bounds.fields.m_Extents.fields.y;
    fVar7 = bounds.fields.m_Center.fields.z - bounds.fields.m_Extents.fields.z;
    uVar1 = 0;
    UVar11.fields.z = fVar7;
    UVar11.fields.x = fVar2;
    UVar11.fields.y = fVar6;
    UVar11 = UnityEngine_Camera__WorldToScreenPoint_4db3370(cam,UVar11,(MethodInfo *)0x0);
    fVar3 = bounds.fields.m_Center.fields.x + bounds.fields.m_Extents.fields.x;
    UVar12.fields.z = fVar7;
    UVar12.fields.x = fVar3;
    UVar12.fields.y = fVar6;
    UVar12 = UnityEngine_Camera__WorldToScreenPoint_4db3370(cam,UVar12,(MethodInfo *)0x0);
    fVar4 = bounds.fields.m_Center.fields.y + bounds.fields.m_Extents.fields.y;
    UVar13.fields.z = fVar7;
    UVar13.fields.x = fVar2;
    UVar13.fields.y = fVar4;
    UVar13 = UnityEngine_Camera__WorldToScreenPoint_4db3370(cam,UVar13,(MethodInfo *)0x0);
    UVar14.fields.z = fVar7;
    UVar14.fields.x = fVar3;
    UVar14.fields.y = fVar4;
    UVar14 = UnityEngine_Camera__WorldToScreenPoint_4db3370(cam,UVar14,(MethodInfo *)0x0);
    UVar18.fields.z = bounds.fields.m_Center.fields.z + bounds.fields.m_Extents.fields.z;
    UVar18.fields.x = fVar2;
    UVar18.fields.y = fVar6;
    UVar15 = UnityEngine_Camera__WorldToScreenPoint_4db3370(cam,UVar18,(MethodInfo *)0x0);
    UVar16.fields.z = UVar18.fields.z;
    UVar16.fields.x = fVar3;
    UVar16.fields.y = fVar6;
    UVar16 = UnityEngine_Camera__WorldToScreenPoint_4db3370(cam,UVar16,(MethodInfo *)0x0);
    UVar17.fields.z = UVar18.fields.z;
    UVar17.fields.x = fVar2;
    UVar17.fields.y = fVar4;
    UVar17 = UnityEngine_Camera__WorldToScreenPoint_4db3370(cam,UVar17,(MethodInfo *)0x0);
    position.fields.z = UVar18.fields.z;
    position.fields.x = fVar3;
    position.fields.y = fVar4;
    UVar18 = UnityEngine_Camera__WorldToScreenPoint_4db3370(cam,position,(MethodInfo *)0x0);
    auVar5._8_8_ = extraout_XMM0._8_8_;
    auVar5._0_8_ = UVar18.fields._0_8_;
    local_a8 = UVar17.fields.x;
    fStack_a4 = UVar17.fields.y;
    local_98 = UVar16.fields.x;
    fStack_94 = UVar16.fields.y;
    local_88 = UVar15.fields.x;
    fStack_84 = UVar15.fields.y;
    local_78 = UVar14.fields.x;
    fStack_74 = UVar14.fields.y;
    local_68 = UVar13.fields.x;
    fStack_64 = UVar13.fields.y;
    local_58 = UVar12.fields.x;
    fStack_54 = UVar12.fields.y;
    local_48 = UVar11.fields.x;
    fStack_44 = UVar11.fields.y;
    auVar9._4_4_ = -(uint)(0.0 < UVar13.fields.z);
    auVar9._0_4_ = -(uint)(0.0 < UVar14.fields.z);
    auVar9._8_4_ = -(uint)(0.0 < UVar12.fields.z);
    auVar9._12_4_ = -(uint)(0.0 < UVar11.fields.z);
    auVar8._4_4_ = -(uint)(0.0 < UVar17.fields.z);
    auVar8._0_4_ = -(uint)(0.0 < UVar18.fields.z);
    auVar8._8_4_ = -(uint)(0.0 < UVar16.fields.z);
    auVar8._12_4_ = -(uint)(0.0 < UVar15.fields.z);
    auVar8 = packssdw(auVar8,auVar9);
    auVar8 = packsswb(auVar8,auVar5);
    local_28 = mouseScreen.fields.x;
    fStack_24 = mouseScreen.fields.y;
    if ((((((((SUB161(auVar8 >> 7,0) & 1) != 0 || (SUB161(auVar8 >> 0xf,0) & 1) != 0) ||
            (SUB161(auVar8 >> 0x17,0) & 1) != 0) || (SUB161(auVar8 >> 0x1f,0) & 1) != 0) ||
          (SUB161(auVar8 >> 0x27,0) & 1) != 0) || (SUB161(auVar8 >> 0x2f,0) & 1) != 0) ||
        (SUB161(auVar8 >> 0x37,0) & 1) != 0) || (SUB161(auVar8 >> 0x3f,0) & 1) != 0) {
      fVar2 = local_48;
      if (local_48 <= -3.4028235e+38) {
        fVar2 = -3.4028235e+38;
      }
      fVar3 = local_58;
      if (local_58 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar2 = local_68;
      if (local_68 <= fVar3) {
        fVar2 = fVar3;
      }
      fVar3 = local_78;
      if (local_78 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar2 = local_88;
      if (local_88 <= fVar3) {
        fVar2 = fVar3;
      }
      fVar3 = local_98;
      if (local_98 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar2 = local_a8;
      if (local_a8 <= fVar3) {
        fVar2 = fVar3;
      }
      auVar10 = auVar5;
      if (UVar18.fields.x <= fVar2) {
        auVar10._4_12_ = auVar5._4_12_;
        auVar10._0_4_ = fVar2;
      }
      uVar1 = 0;
      if (local_28 <= auVar10._0_4_ + screenRadius) {
        if (3.4028235e+38 <= local_48) {
          local_48 = 3.4028235e+38;
        }
        if (local_48 <= local_58) {
          local_58 = local_48;
        }
        if (local_58 <= local_68) {
          local_68 = local_58;
        }
        if (local_68 <= local_78) {
          local_78 = local_68;
        }
        if (local_78 <= local_88) {
          local_88 = local_78;
        }
        if (local_88 <= local_98) {
          local_98 = local_88;
        }
        if (local_98 <= local_a8) {
          local_a8 = local_98;
        }
        if (local_a8 <= UVar18.fields.x) {
          auVar5._4_12_ = auVar5._4_12_;
          auVar5._0_4_ = local_a8;
        }
        if (auVar5._0_4_ - screenRadius <= local_28) {
          fVar2 = fStack_44;
          if (3.4028235e+38 <= fStack_44) {
            fVar2 = 3.4028235e+38;
          }
          fVar3 = fStack_54;
          if (fVar2 <= fStack_54) {
            fVar3 = fVar2;
          }
          fVar2 = fStack_64;
          if (fVar3 <= fStack_64) {
            fVar2 = fVar3;
          }
          fVar3 = fStack_74;
          if (fVar2 <= fStack_74) {
            fVar3 = fVar2;
          }
          fVar2 = fStack_84;
          if (fVar3 <= fStack_84) {
            fVar2 = fVar3;
          }
          fVar3 = fStack_94;
          if (fVar2 <= fStack_94) {
            fVar3 = fVar2;
          }
          fVar2 = fStack_a4;
          if (fVar3 <= fStack_a4) {
            fVar2 = fVar3;
          }
          fVar3 = UVar18.fields.y;
          fVar4 = fVar3;
          if (fVar2 <= fVar3) {
            fVar4 = fVar2;
          }
          if (fVar4 - screenRadius <= fStack_24) {
            if (fStack_44 <= -3.4028235e+38) {
              fStack_44 = -3.4028235e+38;
            }
            if (fStack_54 <= fStack_44) {
              fStack_54 = fStack_44;
            }
            if (fStack_64 <= fStack_54) {
              fStack_64 = fStack_54;
            }
            if (fStack_74 <= fStack_64) {
              fStack_74 = fStack_64;
            }
            if (fStack_84 <= fStack_74) {
              fStack_84 = fStack_74;
            }
            if (fStack_94 <= fStack_84) {
              fStack_94 = fStack_84;
            }
            if (fStack_a4 <= fStack_94) {
              fStack_a4 = fStack_94;
            }
            if (fVar3 <= fStack_a4) {
              fVar3 = fStack_a4;
            }
            uVar1 = (uint)(fStack_24 <= fVar3 + screenRadius);
          }
          else {
            uVar1 = 0;
          }
        }
      }
    }
    return uVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  (((UnityEngine_MonoBehaviour_o *)((long)cam + 0x60))->fields).m_CachedPtr = 0x3f8000003f800000;
  (((UnityEngine_MonoBehaviour_o *)((long)cam + 0x60))->fields).m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3f8000003f800000;
  ((UnityEngine_MonoBehaviour_o *)((long)cam + 0x80))->klass = (UnityEngine_MonoBehaviour_c *)0x3f800000;
  ((UnityEngine_MonoBehaviour_o *)((long)cam + 0x80))->monitor = (void *)0x3f80000000000000;
  (((UnityEngine_MonoBehaviour_o *)((long)cam + 0x80))->fields).m_CachedPtr = 0x3f6bebec3f800000;
  (((UnityEngine_MonoBehaviour_o *)((long)cam + 0x80))->fields).m_CancellationTokenSource =
       (System_Threading_CancellationTokenSource_o *)0x3f8000003c808081;
  ((UnityEngine_MonoBehaviour_o *)((long)cam + 0xa0))->klass = (UnityEngine_MonoBehaviour_c *)0x0;
  ((UnityEngine_MonoBehaviour_o *)((long)cam + 0xa0))->monitor = (void *)0x3f8000003f800000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)cam,(MethodInfo *)0x0);
  return extraout_EAX;
}


// MapEditor.PositionGizmo$$TryFindClosestVertexOnSelection
// il2cpp: bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, UnityEngine_Transform_o** owner, UnityEngine_Vector3_o* localVertex, const MethodInfo* method);
// 0x4340710

bool_conflict
MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
          (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,UnityEngine_Vector3_o *vertex,
          UnityEngine_Transform_o **owner,UnityEngine_Vector3_o *localVertex,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  GameManagers_MapEditorGameManager_o *pGVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  UnityEngine_MeshFilter_o *__this_00;
  UnityEngine_Camera_o *pUVar5;
  Utility_BaseComponentCache_o *pUVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  UnityEngine_Ray_o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  UnityEngine_Bounds_o bounds;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_08;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_09;
  Il2CppClass *pIVar10;
  int32_t iVar11;
  int32_t iVar12;
  bool_conflict bVar13;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  uint uVar14;
  System_Object_array *pSVar15;
  UnityEngine_Object_o *pUVar16;
  ulong uVar17;
  MethodInfo *pMVar18;
  undefined4 extraout_var_00;
  UnityEngine_Mesh_o *__this_10;
  UnityEngine_Vector3_array *pUVar19;
  undefined8 extraout_RAX;
  undefined8 uVar20;
  MethodInfo_24E8500 *pMVar21;
  UnityEngine_Material_o *__this_11;
  MethodInfo_24E8500 *__this_12;
  System_Collections_Generic_HashSet_MapObject__o *pSVar22;
  System_Collections_Generic_HashSet_MapObject__o *extraout_RAX_00;
  UnityEngine_Transform_o *pUVar23;
  System_Collections_Generic_HashSet_MapObject__o *extraout_RAX_01;
  long *plVar24;
  System_Collections_Generic_HashSet_MapObject__o *extraout_RAX_02;
  undefined8 uVar25;
  int iVar26;
  float *pfVar27;
  MethodInfo_24E8500 *__this_13;
  Cameras_BaseCamera_o *y;
  ulong uVar28;
  long lVar29;
  MethodInfo_24E8500 *x;
  Cameras_BaseCamera_o *camera_00;
  MapEditor_PositionGizmo_o *__this_14;
  uint uVar30;
  float fVar31;
  float fVar32;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  uint extraout_XMM0_Dd_01;
  uint extraout_XMM0_Dd_02;
  uint uVar33;
  float extraout_XMM0_Dd_03;
  float fVar34;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar36 [16];
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qb_01;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  undefined4 uVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  UnityEngine_Color_o value;
  undefined1 auVar54 [12];
  undefined1 auVar55 [16];
  UnityEngine_Vector3_o UVar56;
  UnityEngine_Vector3_o UVar57;
  float in_stack_fffffffffffffd70;
  float in_stack_fffffffffffffd74;
  float in_stack_fffffffffffffd78;
  uint uVar58;
  float in_stack_fffffffffffffd7c;
  uint uVar59;
  float in_stack_fffffffffffffd80;
  float in_stack_fffffffffffffd84;
  UnityEngine_Vector3_o UStack_270;
  float fStack_264;
  UnityEngine_Vector3_Fields UStack_260;
  undefined1 auStack_250 [40];
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined1 auStack_218 [16];
  Il2CppObject *pIStack_208;
  undefined1 auStack_200 [8];
  float fStack_1f8;
  float fStack_1f4;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [12];
  float fStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  Il2CppType **ppIStack_1a8;
  undefined1 auStack_1a0 [16];
  Cameras_BaseCamera_o *pCStack_190;
  MethodInfo_24E8500 *pMStack_188;
  MethodInfo_24E8500 *pMStack_180;
  undefined8 uStack_178;
  MethodInfo_24E8500 *pMStack_170;
  Il2CppClass *pIStack_168;
  System_Object_array *pSStack_160;
  UnityEngine_Vector3_o *pUStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_130;
  System_Object_array *pSStack_128;
  UnityEngine_Vector3_o *pUStack_120;
  undefined8 in_stack_fffffffffffffee8;
  undefined8 in_stack_fffffffffffffef0;
  Il2CppObject *in_stack_fffffffffffffef8;
  undefined1 local_fd;
  float local_fc;
  Il2CppClass *local_f8;
  float local_f0;
  undefined1 local_c8 [48];
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  _union_332932 local_88;
  Il2CppObject *local_80;
  Il2CppObject *local_78;
  Il2CppObject *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  undefined4 extraout_var;
  undefined1 auVar35 [16];
  
  if (g_data_057ae0cf == '\0') {
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340745;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340751;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    pUStack_120 = (UnityEngine_Vector3_o *)0x434075d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340769;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340775;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340781;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    pUStack_120 = (UnityEngine_Vector3_o *)0x434078d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0cf = '\x01';
  }
  local_c8._0_8_ = (Il2CppClass *)0x0;
  local_c8._8_8_ = (Il2CppMethodPointer)0x0;
  local_c8._16_8_ = (Il2CppObject *)0x0;
  if (g_data_057a65d5 == '\0') {
    pUStack_120 = (UnityEngine_Vector3_o *)0x43407ba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar34 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (vertex->fields).x = (float)(int)uVar25;
  (vertex->fields).y = (float)(int)((ulong)uVar25 >> 0x20);
  (vertex->fields).z = fVar34;
  *owner = (UnityEngine_Transform_o *)0x0;
  pUStack_120 = (UnityEngine_Vector3_o *)0x43407f1;
  il2cpp_runtime_helper_022b4080(owner,0);
  if (g_data_057a65d5 == '\0') {
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340806;
    il2cpp_runtime_helper_023445d0();
    g_data_057a65d5 = '\x01';
  }
  uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar34 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (localVertex->fields).x = (float)(int)uVar25;
  (localVertex->fields).y = (float)(int)((ulong)uVar25 >> 0x20);
  (localVertex->fields).z = fVar34;
  pUStack_120 = (UnityEngine_Vector3_o *)0x434082c;
  UVar56 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  local_68._8_4_ = extraout_XMM0_Dc;
  local_68._0_8_ = UVar56.fields._0_8_;
  local_68._12_4_ = extraout_XMM0_Dd;
  pUStack_120 = (UnityEngine_Vector3_o *)0x434083b;
  iVar11 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340844;
  iVar12 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pGVar3 = (__this->fields)._gameManager;
  if ((pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pGVar3->fields).SelectedObjects,
     local_c8._40_8_ = camera, local_80 = (Il2CppObject *)localVertex, local_78 = (Il2CppObject *)vertex,
     local_70 = (Il2CppObject *)owner, pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    fVar31 = (float)iVar11;
    fVar32 = (float)iVar12;
    pUStack_120 = (UnityEngine_Vector3_o *)0x43408ac;
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_98,pSVar4,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    local_c8._16_8_ = local_88;
    local_c8._0_8_ = CONCAT44(local_98._4_4_,local_98._0_4_);
    local_c8._8_8_ = CONCAT44(fStack_8c,fStack_90);
    fVar34 = fVar31;
    if (fVar31 <= fVar32) {
      fVar34 = fVar32;
    }
    __this = (MapEditor_PositionGizmo_o *)local_c8;
    localVertex = (UnityEngine_Vector3_o *)&TypeInfo_Object;
    local_f0 = 3.4028235e+38;
    local_fc = 3.4028235e+38;
    owner = (UnityEngine_Transform_o **)(Il2CppClass *)0x0;
label_04340910:
    pUStack_120 = (UnityEngine_Vector3_o *)0x434091c;
    __this_06.fields._index = (int)in_stack_fffffffffffffef0;
    __this_06.fields._version = (int)((ulong)in_stack_fffffffffffffef0 >> 0x20);
    __this_06.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8;
    __this_06.fields._current = in_stack_fffffffffffffef8;
    bVar13 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                       (__this_06,(MethodInfo_3219C40 *)__this);
    if ((char)bVar13 != '\0') {
      if ((Il2CppObject *)local_c8._16_8_ == (Il2CppObject *)0x0) {
        pUStack_120 = (UnityEngine_Vector3_o *)0x4340d47;
        il2cpp_runtime_helper_022b2c90();
label_04340d47:
        local_fd = SUB81(local_f8,0);
        pUStack_120 = (UnityEngine_Vector3_o *)0x4340d55;
        il2cpp_runtime_helper_022b2ca0();
label_04340d55:
        pUStack_120 = (UnityEngine_Vector3_o *)0x4340d5a;
        il2cpp_runtime_helper_022b2c90();
label_04340d5a:
        pUStack_120 = (UnityEngine_Vector3_o *)0x4340d5f;
        il2cpp_runtime_helper_022b2c90();
        goto label_04340d5f;
      }
      pUVar16 = *(void **)(local_c8._16_8_ + 0x18);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pUStack_120 = (UnityEngine_Vector3_o *)0x4340947;
        il2cpp_runtime_helper_02337ed0();
      }
      pUStack_120 = (UnityEngine_Vector3_o *)0x4340953;
      bVar13 = UnityEngine_Object__op_Equality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        if (pUVar16 == (UnityEngine_Object_o *)0x0) goto label_04340d64;
        pUStack_120 = (UnityEngine_Vector3_o *)0x434096c;
        pSVar15 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                            ((UnityEngine_GameObject_o *)pUVar16,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
        pIVar10 = (Il2CppClass *)owner;
        if (pSVar15 == (System_Object_array *)0x0) goto label_04340d69;
        iVar26 = (int)pSVar15->max_length;
        if (0 < iVar26) {
          uVar14 = 0;
          local_fd = SUB81(owner,0);
          local_f8 = (Il2CppClass *)owner;
          local_c8._24_8_ = pSVar15;
          if (iVar26 != 0) {
            do {
              __this_00 = (UnityEngine_MeshFilter_o *)((Il2CppObject **)(local_c8._24_8_ + 0x20))[(int)uVar14]
              ;
              if (__this_00 == (UnityEngine_MeshFilter_o *)0x0) goto label_04340d6e;
              pUStack_120 = (UnityEngine_Vector3_o *)0x4340a22;
              pSVar15 = (System_Object_array *)local_c8._24_8_;
              pUVar16 = (UnityEngine_Object_o *)
                        UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pUStack_120 = (UnityEngine_Vector3_o *)0x4340a36;
                il2cpp_runtime_helper_02337ed0();
              }
              pUStack_120 = (UnityEngine_Vector3_o *)0x4340a42;
              bVar13 = UnityEngine_Object__op_Equality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              uVar17 = CONCAT44(extraout_var,bVar13);
              if ((char)bVar13 == '\0') {
                pUStack_120 = (UnityEngine_Vector3_o *)0x4340a5c;
                pMVar18 = (MethodInfo *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this_00,MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  pUStack_120 = (UnityEngine_Vector3_o *)0x4340a70;
                  il2cpp_runtime_helper_02337ed0();
                }
                pUStack_120 = (UnityEngine_Vector3_o *)0x4340a7c;
                bVar13 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pMVar18,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar13 != '\0') {
                  if (pMVar18 == (MethodInfo *)0x0) goto label_04340d73;
                  pUStack_120 = (UnityEngine_Vector3_o *)0x4340a9f;
                  UnityEngine_Renderer__get_bounds
                            ((UnityEngine_Bounds_o *)local_48,(UnityEngine_Renderer_o *)pMVar18,
                             (MethodInfo *)0x0);
                  local_88.genericMethod = (void *)local_48._16_8_;
                  local_98._0_4_ = local_48._0_4_;
                  local_98._4_4_ = local_48._4_4_;
                  fStack_90 = (float)local_48._8_4_;
                  fStack_8c = (float)local_48._12_4_;
                  owner = (UnityEngine_Transform_o **)local_f8;
                  if ((Cameras_BaseCamera_o *)local_c8._40_8_ == (Cameras_BaseCamera_o *)0x0)
                  goto label_04340d8c;
                  in_stack_fffffffffffffee8 = CONCAT44(local_48._4_4_,local_48._0_4_);
                  in_stack_fffffffffffffef0 = CONCAT44(local_48._12_4_,local_48._8_4_);
                  pUStack_120 = (UnityEngine_Vector3_o *)0x4340afd;
                  bounds.fields.m_Center.fields.z = (float)local_48._8_4_;
                  bounds.fields.m_Extents.fields.x = (float)local_48._12_4_;
                  bounds.fields.m_Center.fields.x = (float)local_48._0_4_;
                  bounds.fields.m_Center.fields.y = (float)local_48._4_4_;
                  bounds.fields.m_Extents.fields.y = (float)local_48._16_4_;
                  bounds.fields.m_Extents.fields.z = (float)local_48._20_4_;
                  in_stack_fffffffffffffef8 = (Il2CppObject *)local_48._16_8_;
                  bVar13 = MapEditor_PositionGizmo__ScreenBoundsIntersectsMouse
                                     (bounds,((Cameras_BaseCamera_Fields *)(local_c8._40_8_ + 0x10))->Camera,
                                      (UnityEngine_Vector2_o)local_68._0_8_,fVar34,pMVar18);
                  uVar17 = CONCAT44(extraout_var_00,bVar13);
                  if ((char)bVar13 == '\0') goto label_043409b0;
                }
                pUStack_120 = (UnityEngine_Vector3_o *)0x4340b0f;
                __this_10 = UnityEngine_MeshFilter__get_sharedMesh(__this_00,(MethodInfo *)0x0);
                if (__this_10 == (UnityEngine_Mesh_o *)0x0) goto label_04340d78;
                pUStack_120 = (UnityEngine_Vector3_o *)0x4340b22;
                pUVar19 = UnityEngine_Mesh__get_vertices(__this_10,(MethodInfo *)0x0);
                pUStack_120 = (UnityEngine_Vector3_o *)0x4340b2f;
                owner = (UnityEngine_Transform_o **)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if (pUVar19 == (UnityEngine_Vector3_array *)0x0) goto label_04340d7d;
                uVar17 = pUVar19->max_length;
                if ((Il2CppClass *)owner == (Il2CppClass *)0x0) {
                  if ((int)uVar17 < 1) goto label_043409b0;
                  goto label_04340d87;
                }
                if ((int)uVar17 < 1) goto label_043409b0;
                pfVar27 = &pUVar19->m_Items[0].fields.z;
                local_f8 = (Il2CppClass *)CONCAT71((int7)((ulong)pSVar15 >> 8),local_fd);
                uVar28 = 0;
                local_c8._32_8_ = pUVar19;
                if ((uVar17 & 0xffffffff) == 0) goto label_04340d47;
                while( true ) {
                  uVar1 = ((UnityEngine_Vector3_Fields *)(pfVar27 + -2))->x;
                  uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar27 + -2))->y;
                  UVar56.fields.y = (float)uVar2;
                  UVar56.fields.x = (float)uVar1;
                  pUStack_120 = (UnityEngine_Vector3_o *)0x4340bc6;
                  UVar56.fields.z = *pfVar27;
                  UVar56 = UnityEngine_Transform__TransformPoint
                                     ((UnityEngine_Transform_o *)owner,UVar56,(MethodInfo *)0x0);
                  if ((Cameras_BaseCamera_o *)local_c8._40_8_ == (Cameras_BaseCamera_o *)0x0)
                  goto label_04340d55;
                  pUVar5 = ((Cameras_BaseCamera_Fields *)(local_c8._40_8_ + 0x10))->Camera;
                  if (pUVar5 == (UnityEngine_Camera_o *)0x0) goto label_04340d5a;
                  local_58._8_4_ = extraout_XMM0_Dc_00;
                  local_58._0_8_ = UVar56.fields._0_8_;
                  local_58._12_4_ = extraout_XMM0_Dd_00;
                  pUStack_120 = (UnityEngine_Vector3_o *)0x4340bf6;
                  UVar57 = UnityEngine_Camera__WorldToScreenPoint_4db3370(pUVar5,UVar56,(MethodInfo *)0x0);
                  auVar55 = local_58;
                  fVar43 = UVar57.fields.z;
                  fVar44 = UVar57.fields.x;
                  auVar37._0_4_ = UVar57.fields.y;
                  if ((((0.0 < fVar43) && (0.0 <= fVar44)) && (auVar37._0_4_ <= fVar32)) &&
                     ((0.0 <= auVar37._0_4_ && (fVar44 <= fVar31)))) {
                    fVar44 = (auVar37._0_4_ - (float)local_68._4_4_) * (auVar37._0_4_ - (float)local_68._4_4_)
                             + (fVar44 - (float)local_68._0_4_) * (fVar44 - (float)local_68._0_4_);
                    if ((fVar44 + 36.0 < local_fc) ||
                       ((fVar43 < local_f0 && (ABS(fVar44 - local_fc) <= 36.0)))) {
                      *(float *)&local_78->klass = (float)local_58._0_4_;
                      *(undefined4 *)((long)&local_78->klass + 4) = local_58._4_4_;
                      *(float *)&local_78->monitor = UVar56.fields.z;
                      local_70->klass = (Il2CppClass *)owner;
                      pUStack_120 = (UnityEngine_Vector3_o *)0x4340cd5;
                      local_58 = auVar55;
                      il2cpp_runtime_helper_022b4080();
                      if ((uint)*(il2cpp_array_size_t *)(local_c8._32_8_ + 0x18) <= uVar28) goto label_04340d82;
                      uVar25._0_4_ = ((UnityEngine_Vector3_Fields *)(pfVar27 + -2))->x;
                      uVar25._4_4_ = ((UnityEngine_Vector3_Fields *)(pfVar27 + -2))->y;
                      auVar37._0_4_ = *pfVar27;
                      *(float *)&local_80->klass = (float)(undefined4)uVar25;
                      *(undefined4 *)((long)&local_80->klass + 4) = uVar25._4_4_;
                      *(float *)&local_80->monitor = auVar37._0_4_;
                      local_f8 = (Il2CppClass *)CONCAT71((int7)((ulong)uVar25 >> 8),1);
                      local_f0 = fVar43;
                      local_fc = fVar44;
                    }
                  }
                  uVar28 = uVar28 + 1;
                  uVar30 = (uint)*(il2cpp_array_size_t *)(local_c8._32_8_ + 0x18);
                  pfVar27 = pfVar27 + 3;
                  if ((long)(int)uVar30 <= (long)uVar28) break;
                  if (uVar30 <= uVar28) goto label_04340d47;
                }
              }
              else {
label_043409b0:
                local_f8 = (Il2CppClass *)CONCAT71((int7)(uVar17 >> 8),local_fd);
              }
              uVar14 = uVar14 + 1;
              uVar30 = (uint)*(il2cpp_array_size_t *)(local_c8._24_8_ + 0x18);
              local_fd = SUB81(local_f8,0);
              owner = (UnityEngine_Transform_o **)local_f8;
              if ((int)uVar30 <= (int)uVar14) goto label_04340910;
              if (uVar30 <= uVar14) break;
            } while( true );
          }
          goto label_04340d91;
        }
      }
      goto label_04340910;
    }
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340d2b;
    __this_07.fields._index = (int)in_stack_fffffffffffffef0;
    __this_07.fields._version = (int)((ulong)in_stack_fffffffffffffef0 >> 0x20);
    __this_07.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8;
    __this_07.fields._current = in_stack_fffffffffffffef8;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_07,(MethodInfo_3219C30 *)local_c8);
    uVar14 = (uint)owner;
label_04340d2e:
    return uVar14 & 0xffffff01;
  }
label_04340d5f:
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340d64;
  il2cpp_runtime_helper_022b2c90();
label_04340d64:
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340d69;
  il2cpp_runtime_helper_022b2c90();
  pIVar10 = (Il2CppClass *)owner;
label_04340d69:
  local_f8 = pIVar10;
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340d6e;
  il2cpp_runtime_helper_022b2c90();
label_04340d6e:
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340d73;
  il2cpp_runtime_helper_022b2c90();
label_04340d73:
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340d78;
  il2cpp_runtime_helper_022b2c90();
label_04340d78:
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340d7d;
  il2cpp_runtime_helper_022b2c90();
label_04340d7d:
  owner = (UnityEngine_Transform_o **)local_f8;
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340d82;
  il2cpp_runtime_helper_022b2c90();
label_04340d82:
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340d87;
  il2cpp_runtime_helper_022b2ca0();
label_04340d87:
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340d8c;
  il2cpp_runtime_helper_022b2c90();
label_04340d8c:
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340d91;
  il2cpp_runtime_helper_022b2c90();
label_04340d91:
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340d96;
  auVar55 = il2cpp_runtime_helper_022b2ca0();
  uVar25 = auVar55._8_8_;
  if (auVar55._8_4_ == 1) {
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340e0c;
    plVar24 = (long *)__cxa_begin_catch(auVar55._0_8_);
    lVar29 = *plVar24;
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340e14;
    __cxa_end_catch();
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340e28;
    __this_08.fields._index = (int)in_stack_fffffffffffffef0;
    __this_08.fields._version = (int)((ulong)in_stack_fffffffffffffef0 >> 0x20);
    __this_08.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8;
    __this_08.fields._current = in_stack_fffffffffffffef8;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_08,(MethodInfo_3219C30 *)local_c8);
    uVar14 = (uint)CONCAT71((int7)((ulong)extraout_RAX >> 8),local_fd);
    if (lVar29 == 0) goto label_04340d2e;
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340e3d;
    uVar20 = il2cpp_runtime_helper_022fefe0(lVar29);
    auVar55._8_8_ = uVar25;
    auVar55._0_8_ = uVar20;
  }
  else {
    lVar29 = 0;
  }
  pMVar18 = auVar55._8_8_;
  uVar25 = auVar55._0_8_;
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340e54;
  __this_09.fields._index = (int)in_stack_fffffffffffffef0;
  __this_09.fields._version = (int)((ulong)in_stack_fffffffffffffef0 >> 0x20);
  __this_09.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8;
  __this_09.fields._current = in_stack_fffffffffffffef8;
  __this_13 = MethodInfo_Void_Dispose;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_09,(MethodInfo_3219C30 *)local_c8);
  if (lVar29 == 0) {
    pUStack_120 = (UnityEngine_Vector3_o *)0x4340e61;
    _Unwind_Resume(uVar25);
  }
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340e69;
  pMVar21 = (MethodInfo_24E8500 *)il2cpp_runtime_helper_022fefe0(lVar29);
  pUStack_120 = (UnityEngine_Vector3_o *)0x4340e71;
  uStack_150 = il2cpp_runtime_helper_01f66400();
  x = __this_13;
  uStack_140 = extraout_XMM1_Qa;
  uStack_130 = uVar25;
  pSStack_128 = (System_Object_array *)__this;
  pUStack_120 = localVertex;
  if (g_data_057ae0d3 == '\0') {
    pMVar21 = (MethodInfo_24E8500 *)&MethodInfo_Renderer_GetComponentsInChildren_Renderer;
    pUStack_158 = (UnityEngine_Vector3_o *)0x4340eaa;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0d3 = '\x01';
  }
  if (__this_13 != (MethodInfo_24E8500 *)0x0) {
    pUStack_158 = (UnityEngine_Vector3_o *)0x4340ecc;
    x = MethodInfo_Renderer_GetComponentsInChildren_Renderer;
    __this_12 = __this_13;
    pSVar15 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                        ((UnityEngine_Component_o *)__this_13,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pMVar21 = __this_12;
    if (pSVar15 != (System_Object_array *)0x0) {
      uVar14 = (uint)pSVar15->max_length;
      if (0 < (int)uVar14) {
        localVertex = (UnityEngine_Vector3_o *)0x0;
        do {
          uVar30 = (uint)localVertex;
          pMVar21 = __this_12;
          __this = (MapEditor_PositionGizmo_o *)pSVar15;
          if (uVar14 <= uVar30) goto label_04340f4e;
          __this_13 = (MethodInfo_24E8500 *)pSVar15->m_Items[(int)uVar30];
          if (__this_13 == (MethodInfo_24E8500 *)0x0) goto label_04340f49;
          x = (MethodInfo_24E8500 *)0x0;
          pUStack_158 = (UnityEngine_Vector3_o *)0x4340efc;
          pMVar21 = __this_13;
          __this_11 = UnityEngine_Renderer__get_material
                                ((UnityEngine_Renderer_o *)__this_13,(MethodInfo *)0x0);
          if (__this_11 == (UnityEngine_Material_o *)0x0) goto label_04340f49;
          pUStack_158 = (UnityEngine_Vector3_o *)0x4340f14;
          value.fields.b = (float)(undefined4)uStack_140;
          value.fields.a = (float)uStack_140._4_4_;
          value.fields.r = (float)(undefined4)uStack_150;
          value.fields.g = (float)uStack_150._4_4_;
          UnityEngine_Material__set_color(__this_11,value,(MethodInfo *)0x0);
          x = (MethodInfo_24E8500 *)0x0;
          pUStack_158 = (UnityEngine_Vector3_o *)0x4340f1e;
          pMVar21 = __this_13;
          __this_12 = (MethodInfo_24E8500 *)
                      UnityEngine_Renderer__get_material
                                ((UnityEngine_Renderer_o *)__this_13,(MethodInfo *)0x0);
          if (__this_12 == (MethodInfo_24E8500 *)0x0) goto label_04340f49;
          x = (MethodInfo_24E8500 *)0xc27;
          pUStack_158 = (UnityEngine_Vector3_o *)0x4340f32;
          UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)__this_12,0xc27,(MethodInfo *)0x0);
          localVertex = (UnityEngine_Vector3_o *)(ulong)(uVar30 + 1);
          uVar14 = (uint)pSVar15->max_length;
        } while ((int)(uVar30 + 1) < (int)uVar14);
      }
      return uVar14;
    }
  }
label_04340f49:
  pUStack_158 = (UnityEngine_Vector3_o *)0x4340f4e;
  il2cpp_runtime_helper_022b2c90();
label_04340f4e:
  pUStack_158 = (UnityEngine_Vector3_o *)0x4340f53;
  uStack_178 = il2cpp_runtime_helper_022b2ca0();
  pMStack_170 = __this_13;
  pIStack_168 = (Il2CppClass *)owner;
  pSStack_160 = (System_Object_array *)__this;
  pUStack_158 = localVertex;
  if (g_data_057ae0c8 == '\0') {
    pMStack_180 = (MethodInfo_24E8500 *)0x4340f83;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0c8 = '\x01';
  }
  y = *(Cameras_BaseCamera_o **)&pMVar21->slot;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pMStack_180 = (MethodInfo_24E8500 *)0x4340fa7;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_180 = (MethodInfo_24E8500 *)0x4340fb4;
  camera_00 = y;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    y = (Cameras_BaseCamera_o *)pMVar21[1].methodPointer;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pMStack_180 = (MethodInfo_24E8500 *)0x4340fe7;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_180 = (MethodInfo_24E8500 *)0x4340ff4;
    camera_00 = y;
    bVar13 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      y = (Cameras_BaseCamera_o *)pMVar21[1].virtualMethodPointer;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_180 = (MethodInfo_24E8500 *)0x4341024;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_180 = (MethodInfo_24E8500 *)0x4341031;
      camera_00 = y;
      bVar13 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        if (g_data_057a6844 == '\0') {
          pMStack_180 = (MethodInfo_24E8500 *)0x434105c;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        return (bool_conflict)*(undefined8 *)(TypeInfo_Vector3 + 0xb8);
      }
      if ((UnityEngine_Transform_o *)pMVar21->return_type != (UnityEngine_Transform_o *)0x0) {
        pMStack_180 = (MethodInfo_24E8500 *)0x4341045;
        UnityEngine_Transform__get_up((UnityEngine_Transform_o *)pMVar21->return_type,(MethodInfo *)0x0);
        return extraout_EAX_01;
      }
    }
    else if ((UnityEngine_Transform_o *)pMVar21->return_type != (UnityEngine_Transform_o *)0x0) {
      pMStack_180 = (MethodInfo_24E8500 *)0x434100c;
      UnityEngine_Transform__get_right((UnityEngine_Transform_o *)pMVar21->return_type,(MethodInfo *)0x0);
      return extraout_EAX_00;
    }
  }
  else if ((UnityEngine_Transform_o *)pMVar21->return_type != (UnityEngine_Transform_o *)0x0) {
    pMStack_180 = (MethodInfo_24E8500 *)0x4340fcc;
    UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)pMVar21->return_type,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  __this_14 = (MapEditor_PositionGizmo_o *)0x0;
  pMStack_180 = (MethodInfo_24E8500 *)0x434108f;
  il2cpp_runtime_helper_022b2c90();
  auVar35._8_8_ = extraout_XMM1_Qb;
  auVar35._0_8_ = extraout_XMM1_Qa_00;
  pCStack_190 = y;
  pMStack_188 = x;
  pMStack_180 = pMVar21;
  if (g_data_057ae0cd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0();
    auVar35._8_8_ = extraout_XMM1_Qb_00;
    auVar35._0_8_ = extraout_XMM1_Qa_01;
    g_data_057ae0cd = '\x01';
  }
  auStack_250._32_8_ = (Il2CppRGCTXData *)0x0;
  fStack_228 = 0.0;
  fStack_224 = 0.0;
  fStack_220 = 0.0;
  fStack_21c = 0.0;
  UStack_270.fields.z = 0.0;
  UStack_270.fields.x = 0.0;
  UStack_270.fields.y = 0.0;
  UStack_260.z = 0.0;
  UStack_260.x = 0.0;
  UStack_260.y = 0.0;
  auStack_250._0_8_ = (Il2CppRGCTXData *)0x0;
  auStack_250._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_250._16_8_ = (Il2CppObject *)0x0;
  pGVar3 = (__this_14->fields)._gameManager;
  if ((pGVar3 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (pSVar22 = (pGVar3->fields).SelectedObjects,
     pSVar22 == (System_Collections_Generic_HashSet_MapObject__o *)0x0)) goto label_04341781;
  if ((pSVar22->fields)._count == 0) goto label_04341774;
  if (camera_00 != (Cameras_BaseCamera_o *)0x0) {
    pUVar5 = (camera_00->fields).Camera;
    UVar56 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Camera_o *)0x0) {
      auVar8._12_4_ = 0;
      auVar8._0_12_ = auVar35._4_12_;
      auVar36 = auVar8 << 0x20;
      UnityEngine_Camera__ScreenPointToRay_4db37e0
                ((UnityEngine_Ray_o *)auStack_218,pUVar5,UVar56,(MethodInfo *)0x0);
      fStack_220 = SUB84(pIStack_208,0);
      fStack_21c = (float)((ulong)pIStack_208 >> 0x20);
      auStack_250._32_8_ = auStack_218._0_8_;
      fStack_228 = (float)auStack_218._8_4_;
      fStack_224 = (float)auStack_218._12_4_;
      if (*(char *)&(__this_14->fields)._snapAnchorLocal.fields.y == '\0') {
label_0434121d:
        auStack_1d8._0_8_ = (Il2CppMethodPointer)0x0;
        auStack_218._8_4_ = 0.0;
        auStack_218._0_8_ = (Il2CppRGCTXData *)0x0;
        pMVar18 = (MethodInfo *)auStack_1d8;
        uVar14 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                           (__this_14,camera_00,&UStack_270,(UnityEngine_Transform_o **)pMVar18,
                            (UnityEngine_Vector3_o *)auStack_218,method);
        pSVar22 = (System_Collections_Generic_HashSet_MapObject__o *)(ulong)uVar14;
        if ((char)uVar14 == '\0') goto label_04341774;
        pUVar6 = (camera_00->fields).Cache;
      }
      else {
        pUVar16 = *(UnityEngine_Object_o **)&(__this_14->fields)._vertexSnapOrigin.fields.z;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          auVar36._8_8_ = extraout_XMM1_Qb_01;
          auVar36._0_8_ = extraout_XMM1_Qa_02;
        }
        bVar13 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_0434121d;
        pUVar23 = *(UnityEngine_Transform_o **)&(__this_14->fields)._vertexSnapOrigin.fields.z;
        if (pUVar23 == (UnityEngine_Transform_o *)0x0) goto label_04341781;
        auVar54 = ZEXT812(0);
        UVar56 = UnityEngine_Transform__TransformPoint
                           (pUVar23,*(UnityEngine_Vector3_Fields *)&(__this_14->fields)._snapAnchorTransform,
                            (MethodInfo *)0x0);
        auVar36._0_4_ = UVar56.fields.z;
        auVar36._4_12_ = auVar54;
        UStack_270.fields._0_8_ = UVar56.fields._0_8_;
        pUVar6 = (camera_00->fields).Cache;
        UStack_270.fields.z = auVar36._0_4_;
      }
      if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar23 = (pUVar6->fields).Transform, pUVar23 != (UnityEngine_Transform_o *)0x0)) {
        UVar56 = UnityEngine_Transform__get_position(pUVar23,(MethodInfo *)0x0);
        auVar37._4_12_ = auVar36._4_12_;
        auVar37._0_4_ = UVar56.fields.z;
        uVar25 = auVar37._0_8_;
        fVar32 = UVar56.fields.x;
        fVar44 = UVar56.fields.y;
        register0x000012c8 = 0;
        auStack_200._0_4_ = UStack_270.fields.x;
        auStack_200._4_4_ = UStack_270.fields.y;
        auStack_1f0._0_16_ = ZEXT416((uint)UStack_270.fields.z);
        fVar34 = UStack_270.fields.z;
        fVar31 = 0.0;
        if (g_data_057a68cb == '\0') {
          in_stack_fffffffffffffd74 = auVar36._4_4_;
          in_stack_fffffffffffffd78 = auVar36._8_4_;
          in_stack_fffffffffffffd7c = auVar36._12_4_;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          uVar25 = CONCAT44(in_stack_fffffffffffffd74,auVar37._0_4_);
          g_data_057a68cb = '\x01';
          fVar34 = (float)auStack_1f0._0_4_;
          fVar31 = (float)auStack_1f0._4_4_;
          in_stack_fffffffffffffd80 = fVar32;
          in_stack_fffffffffffffd84 = fVar44;
        }
        auVar37._0_4_ = auStack_200._4_4_;
        auStack_1a0._4_4_ = auVar37._0_4_;
        auStack_1a0._0_4_ = auVar37._0_4_;
        auStack_1a0._8_4_ = auStack_200._8_4_;
        auStack_1a0._12_4_ = auStack_200._12_4_;
        fVar43 = fVar44 - auVar37._0_4_;
        fVar34 = (float)uVar25 - fVar34;
        fVar32 = fVar32 - auStack_200._0_4_;
        fVar31 = (float)((ulong)uVar25 >> 0x20) - fVar31;
        auVar37._0_4_ = fVar44 - auVar37._0_4_;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_stack_fffffffffffffd74 = fVar32;
          in_stack_fffffffffffffd78 = fVar31;
          in_stack_fffffffffffffd7c = auVar37._0_4_;
          in_stack_fffffffffffffd80 = fVar43;
          in_stack_fffffffffffffd84 = fVar44;
        }
        in_stack_fffffffffffffd70 = fVar32 * fVar32 + fVar43 * fVar43 + fVar34 * fVar34;
        auVar39 = ZEXT816(0);
        if (in_stack_fffffffffffffd70 < 0.0) {
          in_stack_fffffffffffffd70 = sqrtf(in_stack_fffffffffffffd70);
        }
        else {
          in_stack_fffffffffffffd70 = SQRT(in_stack_fffffffffffffd70);
        }
        uVar14 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_4243720
                           (__this_14,camera_00,30.0,(UnityEngine_Vector3_o *)&UStack_260,pMVar18);
        pSVar22 = (System_Collections_Generic_HashSet_MapObject__o *)(ulong)uVar14;
        if ((char)uVar14 == '\0') {
label_043413d6:
          pUVar6 = (camera_00->fields).Cache;
          if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar23 = (pUVar6->fields).Transform, pUVar23 == (UnityEngine_Transform_o *)0x0))
          goto label_04341781;
          UVar56 = UnityEngine_Transform__get_forward(pUVar23,(MethodInfo *)0x0);
          fVar34 = UVar56.fields.z;
          uVar17 = UVar56.fields._0_8_;
          uVar14 = auVar39._4_4_;
          uVar30 = auVar39._8_4_;
          uVar33 = auVar39._12_4_;
          fVar31 = UVar56.fields.x;
          in_stack_fffffffffffffd84 = UVar56.fields.y;
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            uVar17 = CONCAT44(in_stack_fffffffffffffd84,fVar31);
            g_data_057a6845 = '\x01';
            iVar26 = *(int *)(TypeInfo_Math + 0xe4);
          }
          else {
            iVar26 = *(int *)(TypeInfo_Math + 0xe4);
          }
          if (iVar26 == 0) {
            il2cpp_runtime_helper_02337ed0();
            uVar17 = CONCAT44(in_stack_fffffffffffffd84,fVar31);
          }
          fVar32 = (float)(uVar17 >> 0x20);
          fVar32 = fVar34 * fVar34 + fVar32 * fVar32 + (float)uVar17 * (float)uVar17;
          uVar58 = uVar30;
          uVar59 = uVar33;
          if (fVar32 < 0.0) {
            fVar32 = sqrtf(fVar32);
            uVar17 = CONCAT44(in_stack_fffffffffffffd84,fVar31);
            uVar30 = extraout_XMM0_Dc_02;
            uVar33 = extraout_XMM0_Dd_02;
            if (fVar32 <= 1e-05) goto label_04341454;
label_043414a3:
            uVar45 = uVar14 ^ 0x80000000;
            uVar46 = uVar58 ^ 0x80000000;
            uVar47 = uVar59 ^ 0x80000000;
            auVar48._0_8_ = uVar17 ^ 0x8000000080000000;
            auVar48._8_4_ = extraout_XMM0_Dc_01 ^ 0x80000000;
            auVar48._12_4_ = extraout_XMM0_Dd_01 ^ 0x80000000;
            fVar44 = -fVar34 / fVar32;
            auVar7._4_4_ = fVar32;
            auVar7._0_4_ = fVar32;
            auVar7._8_4_ = uVar30;
            auVar7._12_4_ = uVar33;
            auVar49 = divps(auVar48,auVar7);
          }
          else {
            fVar32 = SQRT(fVar32);
            if (1e-05 < fVar32) goto label_043414a3;
label_04341454:
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            auVar49._8_8_ = 0;
            auVar49._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
            fVar44 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
            uVar45 = 0;
            uVar46 = 0;
            uVar47 = 0;
          }
          fVar40 = auVar49._0_4_;
          fVar42 = auVar49._4_4_;
          uVar50 = auVar49._8_4_;
          uVar51 = auVar49._12_4_;
          fVar43 = fStack_21c * fVar44 + fStack_220 * fVar42 + fVar40 * fStack_224;
          fVar32 = fStack_228 * fVar44;
          auVar37._0_4_ = fVar42;
          uVar30 = 0;
          uVar33 = 0;
          fVar52 = (float)auStack_250._32_8_;
          fVar53 = SUB84(auStack_250._32_8_,4);
          if (g_data_057a68c8 == '\0') {
            uStack_1b0 = (Il2CppRGCTXData *)auStack_250._32_8_;
            ppIStack_1a8 = (Il2CppType **)0x0;
            auStack_1c0 = ZEXT416((uint)fVar43);
            fStack_264 = fStack_228 * fVar44;
            auStack_1d8._8_4_ = fVar42;
            fStack_1cc = fVar42;
            uStack_1c8 = uVar50;
            uStack_1c4 = uVar51;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
            auVar49._4_4_ = fVar42;
            auVar49._0_4_ = fVar40;
            auVar49._8_4_ = uVar50;
            auVar49._12_4_ = uVar51;
            g_data_057a68c8 = '\x01';
            fVar32 = fStack_264;
            auVar37._0_4_ = (float)auStack_1d8._8_4_;
            fVar43 = (float)auStack_1c0._0_4_;
            uVar30 = auStack_1c0._8_4_;
            uVar33 = auStack_1c0._12_4_;
            fVar52 = (float)uStack_1b0;
            fVar53 = uStack_1b0._4_4_;
            fVar34 = fVar44;
            uVar14 = uVar45;
            uVar58 = uVar46;
            uVar59 = uVar47;
            fVar31 = fVar40;
            in_stack_fffffffffffffd84 = fVar42;
          }
          auVar41._0_4_ = ABS(fVar43);
          auVar41._4_4_ = 0;
          auVar41._8_4_ = uVar30 & 0x7fffffff;
          auVar41._12_4_ = uVar33 & 0x7fffffff;
          if (auVar41._0_4_ <= 0.0) {
            auVar9._12_4_ = 0;
            auVar9._0_12_ = auVar41._4_12_;
            auVar41 = auVar9 << 0x20;
          }
          pSVar22 = *(System_Collections_Generic_HashSet_MapObject__o **)(TypeInfo_Mathf + 0xb8);
          fVar40 = auVar41._0_4_ * 1e-06;
          fVar42 = *(float *)&pSVar22->klass * 8.0;
          if (fVar40 <= fVar42) {
            fVar40 = fVar42;
          }
          if (ABS(0.0 - fVar43) < fVar40) goto label_04341774;
          fVar43 = ((fVar44 * (float)auStack_1f0._0_4_ +
                    (float)auStack_1a0._0_4_ * auVar37._0_4_ + (float)auStack_200._0_4_ * auVar49._0_4_) -
                   (fVar32 + fVar53 * auVar37._0_4_ + auVar49._0_4_ * fVar52)) / fVar43;
          if (fVar43 <= 0.0) goto label_04341774;
          __this_01.fields.m_Origin.fields.y = (float)uVar14;
          __this_01.fields.m_Origin.fields.x = fVar34;
          __this_01.fields.m_Origin.fields.z = (float)uVar58;
          __this_01.fields.m_Direction.fields.x = (float)uVar59;
          __this_01.fields.m_Direction.fields.y = fVar31;
          __this_01.fields.m_Direction.fields.z = in_stack_fffffffffffffd84;
          UVar56 = UnityEngine_Ray__GetPoint(__this_01,fVar43,(MethodInfo *)(auStack_250 + 0x20));
          in_stack_fffffffffffffd70 = UVar56.fields.x - (float)auStack_200._0_4_;
          in_stack_fffffffffffffd74 = UVar56.fields.y - (float)auStack_200._4_4_;
          in_stack_fffffffffffffd78 = extraout_XMM0_Dc_03 - fStack_1f8;
          in_stack_fffffffffffffd7c = extraout_XMM0_Dd_03 - fStack_1f4;
          in_stack_fffffffffffffd80 = UVar56.fields.z - (float)auStack_1f0._0_4_;
          fVar31 = in_stack_fffffffffffffd80 * in_stack_fffffffffffffd80 +
                   in_stack_fffffffffffffd74 * in_stack_fffffffffffffd74 +
                   in_stack_fffffffffffffd70 * in_stack_fffffffffffffd70;
          pSVar22 = extraout_RAX_00;
        }
        else {
          fVar34 = in_stack_fffffffffffffd70 * 0.3;
          if (fVar34 <= 60.0) {
            fVar34 = 60.0;
          }
          in_stack_fffffffffffffd70 = UStack_260.x - (float)auStack_200._0_4_;
          in_stack_fffffffffffffd74 = UStack_260.y - (float)auStack_200._4_4_;
          in_stack_fffffffffffffd78 = 0.0 - fStack_1f8;
          in_stack_fffffffffffffd7c = 0.0 - fStack_1f4;
          in_stack_fffffffffffffd80 = UStack_260.z - (float)auStack_1f0._0_4_;
          fVar31 = in_stack_fffffffffffffd74 * in_stack_fffffffffffffd74;
          auVar38._4_4_ = fVar31;
          auVar38._0_4_ = fVar31;
          auVar38._8_4_ = in_stack_fffffffffffffd78 * in_stack_fffffffffffffd78;
          auVar38._12_4_ = in_stack_fffffffffffffd7c * in_stack_fffffffffffffd7c;
          auVar39._4_12_ = auVar38._4_12_;
          auVar39._0_4_ = fVar31 + in_stack_fffffffffffffd70 * in_stack_fffffffffffffd70;
          fVar31 = in_stack_fffffffffffffd80 * in_stack_fffffffffffffd80 + auVar39._0_4_;
          if (fVar34 * fVar34 < fVar31) goto label_043413d6;
        }
        if (fVar31 < 1e-08) goto label_04341774;
        pGVar3 = (__this_14->fields)._gameManager;
        if ((pGVar3 != (GameManagers_MapEditorGameManager_o *)0x0) &&
           (pSVar4 = (System_Collections_Generic_HashSet_object__o *)(pGVar3->fields).SelectedObjects,
           pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
          System_Collections_Generic_HashSet_object___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_218,pSVar4,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
          auStack_250._16_8_ = pIStack_208;
          auStack_250._8_8_ = CONCAT44(auStack_218._12_4_,auStack_218._8_4_);
          auStack_250._0_8_ = auStack_218._0_8_;
          while( true ) {
            __this_02.fields._set._4_4_ = in_stack_fffffffffffffd74;
            __this_02.fields._set._0_4_ = in_stack_fffffffffffffd70;
            __this_02.fields._index = (int32_t)in_stack_fffffffffffffd78;
            __this_02.fields._version = (int32_t)in_stack_fffffffffffffd7c;
            __this_02.fields._current._0_4_ = in_stack_fffffffffffffd80;
            __this_02.fields._current._4_4_ = in_stack_fffffffffffffd84;
            bVar13 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               (__this_02,(MethodInfo_3219C40 *)auStack_250);
            if ((char)bVar13 == '\0') break;
            if ((Il2CppObject *)auStack_250._16_8_ == (Il2CppObject *)0x0) goto label_04341786;
            if (((Il2CppObject *)(auStack_250._16_8_ + 0x10))->monitor == (UnityEngine_GameObject_o *)0x0)
            goto label_0434178b;
            pUVar23 = UnityEngine_GameObject__get_transform
                                (((Il2CppObject *)(auStack_250._16_8_ + 0x10))->monitor,(MethodInfo *)0x0);
            if (pUVar23 == (UnityEngine_Transform_o *)0x0) goto label_04341790;
            UVar56 = UnityEngine_Transform__get_position(pUVar23,(MethodInfo *)0x0);
            UVar57.fields.x = UVar56.fields.x + in_stack_fffffffffffffd70;
            UVar57.fields.y = UVar56.fields.y + in_stack_fffffffffffffd74;
            UVar57.fields.z = UVar56.fields.z + in_stack_fffffffffffffd80;
            UnityEngine_Transform__set_position(pUVar23,UVar57,(MethodInfo *)0x0);
          }
          __this_03.fields._set._4_4_ = in_stack_fffffffffffffd74;
          __this_03.fields._set._0_4_ = in_stack_fffffffffffffd70;
          __this_03.fields._index = (int32_t)in_stack_fffffffffffffd78;
          __this_03.fields._version = (int32_t)in_stack_fffffffffffffd7c;
          __this_03.fields._current._0_4_ = in_stack_fffffffffffffd80;
          __this_03.fields._current._4_4_ = in_stack_fffffffffffffd84;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_3219C30 *)auStack_250);
          pSVar22 = extraout_RAX_01;
          goto label_04341774;
        }
      }
    }
  }
label_04341781:
  il2cpp_runtime_helper_022b2c90();
label_04341786:
  il2cpp_runtime_helper_022b2c90();
label_0434178b:
  il2cpp_runtime_helper_022b2c90();
label_04341790:
  auVar54 = il2cpp_runtime_helper_022b2c90();
  if (auVar54._8_4_ == 1) {
    plVar24 = (long *)__cxa_begin_catch(auVar54._0_8_);
    lVar29 = *plVar24;
    __cxa_end_catch();
    __this_04.fields._set._4_4_ = in_stack_fffffffffffffd74;
    __this_04.fields._set._0_4_ = in_stack_fffffffffffffd70;
    __this_04.fields._index = (int32_t)in_stack_fffffffffffffd78;
    __this_04.fields._version = (int32_t)in_stack_fffffffffffffd7c;
    __this_04.fields._current._0_4_ = in_stack_fffffffffffffd80;
    __this_04.fields._current._4_4_ = in_stack_fffffffffffffd84;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)auStack_250);
    pSVar22 = extraout_RAX_02;
    if (lVar29 == 0) {
label_04341774:
      return (bool_conflict)pSVar22;
    }
    il2cpp_runtime_helper_022fefe0(lVar29);
  }
  __this_05.fields._set._4_4_ = in_stack_fffffffffffffd74;
  __this_05.fields._set._0_4_ = in_stack_fffffffffffffd70;
  __this_05.fields._index = (int32_t)in_stack_fffffffffffffd78;
  __this_05.fields._version = (int32_t)in_stack_fffffffffffffd7c;
  __this_05.fields._current._0_4_ = in_stack_fffffffffffffd80;
  __this_05.fields._current._4_4_ = in_stack_fffffffffffffd84;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_05,(MethodInfo_3219C30 *)auStack_250);
  _Unwind_Resume(auVar54._0_8_);
}


// MapEditor.PositionGizmo$$TryFindClosestVertexOnSelection
// il2cpp: bool MapEditor_PositionGizmo__TryFindClosestVertexOnSelection (MapEditor_PositionGizmo_o* __this, Cameras_BaseCamera_o* camera, UnityEngine_Vector3_o* vertex, const MethodInfo* method);
// 0x43436e0

bool_conflict
MapEditor_PositionGizmo__TryFindClosestVertexOnSelection_42436e0
          (MapEditor_PositionGizmo_o *__this,Cameras_BaseCamera_o *camera,UnityEngine_Vector3_o *vertex,
          MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_R9;
  UnityEngine_Vector3_Fields UStack_18;
  UnityEngine_Transform_o *pUStack_8;
  
  pUStack_8 = (UnityEngine_Transform_o *)0x0;
  UStack_18.z = 0.0;
  UStack_18.x = 0.0;
  UStack_18.y = 0.0;
  bVar1 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                    (__this,camera,vertex,&pUStack_8,(UnityEngine_Vector3_o *)&UStack_18,in_R9);
  return bVar1;
}


// MapEditor.PositionGizmo$$MoveSelectedObjects
// il2cpp: void MapEditor_PositionGizmo__MoveSelectedObjects (MapEditor_PositionGizmo_o* __this, UnityEngine_Vector3_o frameDelta, const MethodInfo* method);
// 0x43434e0

void MapEditor_PositionGizmo__MoveSelectedObjects
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Vector3_o frameDelta,MethodInfo *method)

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
  undefined1 auVar6 [12];
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff88 [12];
  Il2CppRGCTXData *pIVar8;
  float local_48;
  float fStack_44;
  System_Collections_Generic_HashSet_Enumerator_T__o local_30;
  
  fVar5 = frameDelta.fields.z;
  if (g_data_057ae0d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    g_data_057ae0d0 = '\x01';
  }
  pIVar8 = (Il2CppRGCTXData *)0x0;
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator(&local_30,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    pIVar8 = (Il2CppRGCTXData *)local_30.fields._set;
    while( true ) {
      __this_01.fields._version = (int32_t)fVar5;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_01.fields._current = (Il2CppObject *)pIVar8;
      bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff98);
      if ((char)bVar3 == '\0') {
        __this_02.fields._version = (int32_t)fVar5;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
        __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
        __this_02.fields._current = (Il2CppObject *)pIVar8;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
        return;
      }
      if (local_30.fields._current == (Il2CppObject *)0x0) break;
      if (local_30.fields._current[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_0434361a;
      __this_05 = UnityEngine_GameObject__get_transform(local_30.fields._current[1].monitor,(MethodInfo *)0x0)
      ;
      if (__this_05 == (UnityEngine_Transform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        break;
      }
      UVar7 = UnityEngine_Transform__get_position(__this_05,(MethodInfo *)0x0);
      local_48 = frameDelta.fields.x;
      fStack_44 = frameDelta.fields.y;
      value.fields.x = UVar7.fields.x + local_48;
      value.fields.y = UVar7.fields.y + fStack_44;
      value.fields.z = UVar7.fields.z + fVar5;
      UnityEngine_Transform__set_position(__this_05,value,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
label_0434361a:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)fVar5;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_03.fields._current = (Il2CppObject *)pIVar8;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._version = (int32_t)fVar5;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_04.fields._current = (Il2CppObject *)pIVar8;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar6._0_8_);
}


// MapEditor.PositionGizmo$$ResetCenter
// il2cpp: void MapEditor_PositionGizmo__ResetCenter (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x433e3d0

void MapEditor_PositionGizmo__ResetCenter(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

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
  
  if (g_data_057ae0d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ae0d1 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pUVar5 = (__this->fields)._transform;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
label_0433e632:
    do {
      auVar9 = il2cpp_runtime_helper_022b2c90();
      if (auVar9._8_4_ != 1) {
label_0433e6ff:
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
        goto label_0433e6ff;
      }
label_0433e5c0:
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
  UnityEngine_Transform__set_rotation
            (pUVar5,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
             (MethodInfo *)0x0);
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_0433e632;
  System_Collections_Generic_HashSet_object___GetEnumerator(&local_38,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  in_stack_ffffffffffffff94 = 0.0;
  _local_48 = ZEXT816(0);
  pSVar11 = local_38.fields._set;
label_0433e4f0:
  do {
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
      goto label_0433e5c0;
    }
    if (local_38.fields._current == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_0433e614:
      il2cpp_runtime_helper_022b2c90();
label_0433e619:
      il2cpp_runtime_helper_022b2c90();
label_0433e61e:
      il2cpp_runtime_helper_022b2c90();
      goto label_0433e623;
    }
    if (*(void **)((long)local_38.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0)
    goto label_0433e614;
    pUVar5 = UnityEngine_GameObject__get_transform
                       (*(void **)((long)local_38.fields._current + 0x18),(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0433e619;
    UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    local_48._0_4_ = (float)local_48._0_4_ + UVar10.fields.x;
    local_48._4_4_ = (float)local_48._4_4_ + UVar10.fields.y;
    fStack_40 = fStack_40 + extraout_XMM0_Dc;
    fStack_3c = fStack_3c + extraout_XMM0_Dd;
    in_stack_ffffffffffffff94 = in_stack_ffffffffffffff94 + UVar10.fields.z;
    pGVar1 = (__this->fields)._gameManager;
    if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_0433e61e;
  } while ((pGVar1->fields).CurrentGizmoMode != 1);
  if (*(void **)((long)local_38.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0) {
label_0433e623:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar5 = (__this->fields)._transform;
    __this_05 = UnityEngine_GameObject__get_transform
                          (*(void **)((long)local_38.fields._current + 0x18),(MethodInfo *)0x0);
    if (__this_05 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_rotation(__this_05,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar5,value,(MethodInfo *)0x0);
        goto label_0433e4f0;
      }
      goto label_0433e62d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0433e62d:
  il2cpp_runtime_helper_022b2c90();
  goto label_0433e632;
}


// MapEditor.PositionGizmo$$ResetColors
// il2cpp: void MapEditor_PositionGizmo__ResetColors (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x433d6d0

void MapEditor_PositionGizmo__ResetColors(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool_conflict bVar7;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MapEditor_PositionGizmo_o *pMVar8;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  
  pMVar8 = __this;
  if (g_data_057ae0d2 == '\0') {
    pMVar8 = (MapEditor_PositionGizmo_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0d2 = '\x01';
    in_RDX = extraout_RDX;
  }
  MapEditor_PositionGizmo__SetLineColor
            (pMVar8,(__this->fields)._lineX,(UnityEngine_Color_o)(__this->fields).LineXColor.fields,in_RDX);
  MapEditor_PositionGizmo__SetLineColor
            (pMVar8,(__this->fields)._lineY,(UnityEngine_Color_o)(__this->fields).LineYColor.fields,method_00)
  ;
  MapEditor_PositionGizmo__SetLineColor
            (pMVar8,(__this->fields)._lineZ,(UnityEngine_Color_o)(__this->fields).LineZColor.fields,method_01)
  ;
  pMVar8 = (MapEditor_PositionGizmo_o *)(__this->fields)._planeXY;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar1 = (__this->fields).LineZColor.fields.r;
    uVar4 = (__this->fields).LineZColor.fields.g;
    color.fields.g = (float)uVar4;
    color.fields.r = (float)uVar1;
    color.fields.a = 0.4;
    color.fields.b = (__this->fields).LineZColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar8,(__this->fields)._planeXY,color,method_02);
  }
  pMVar8 = (MapEditor_PositionGizmo_o *)(__this->fields)._planeYZ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar2 = (__this->fields).LineXColor.fields.r;
    uVar5 = (__this->fields).LineXColor.fields.g;
    color_00.fields.g = (float)uVar5;
    color_00.fields.r = (float)uVar2;
    color_00.fields.a = 0.4;
    color_00.fields.b = (__this->fields).LineXColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar8,(__this->fields)._planeYZ,color_00,method_03);
  }
  pMVar8 = (MapEditor_PositionGizmo_o *)(__this->fields)._planeXZ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    uVar3 = (__this->fields).LineYColor.fields.r;
    uVar6 = (__this->fields).LineYColor.fields.g;
    color_01.fields.g = (float)uVar6;
    color_01.fields.r = (float)uVar3;
    color_01.fields.a = 0.4;
    color_01.fields.b = (__this->fields).LineYColor.fields.b;
    MapEditor_PositionGizmo__SetLineColor(pMVar8,(__this->fields)._planeXZ,color_01,method_04);
    return;
  }
  return;
}


// MapEditor.PositionGizmo$$SetLineColor
// il2cpp: void MapEditor_PositionGizmo__SetLineColor (MapEditor_PositionGizmo_o* __this, UnityEngine_Transform_o* line, UnityEngine_Color_o color, const MethodInfo* method);
// 0x4340e80

void MapEditor_PositionGizmo__SetLineColor
               (MapEditor_PositionGizmo_o *__this,UnityEngine_Transform_o *line,UnityEngine_Color_o color,
               MethodInfo *method)

{
  int iVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Object_o *x;
  Utility_BaseComponentCache_o *pUVar4;
  System_Collections_Generic_HashSet_object__o *__this_01;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  UnityEngine_Ray_o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  bool_conflict bVar9;
  System_Object_array *pSVar10;
  UnityEngine_Material_o *__this_07;
  MapEditor_PositionGizmo_o *pMVar11;
  UnityEngine_Transform_o *pUVar12;
  long *plVar13;
  MethodInfo *in_RCX;
  Cameras_BaseCamera_o *y;
  MethodInfo_24E8500 *x_00;
  Cameras_BaseCamera_o *camera;
  MethodInfo *in_R9;
  uint uVar14;
  float fVar16;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint uVar15;
  float extraout_XMM0_Dd_01;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  uint uVar24;
  float fVar25;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qb_01;
  undefined1 auVar20 [16];
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  undefined4 uVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [12];
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o value;
  float in_stack_fffffffffffffe88;
  float in_stack_fffffffffffffe8c;
  float in_stack_fffffffffffffe90;
  uint uVar43;
  float in_stack_fffffffffffffe94;
  uint uVar44;
  float in_stack_fffffffffffffe98;
  float in_stack_fffffffffffffe9c;
  UnityEngine_Vector3_o UStack_158;
  float fStack_14c;
  UnityEngine_Vector3_Fields UStack_148;
  undefined1 auStack_138 [40];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined1 auStack_100 [16];
  Il2CppObject *pIStack_f0;
  undefined1 auStack_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [12];
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  Il2CppType **ppIStack_90;
  undefined1 auStack_88 [16];
  Cameras_BaseCamera_o *pCStack_78;
  MethodInfo_24E8500 *pMStack_70;
  MapEditor_PositionGizmo_o *pMStack_68;
  undefined8 uStack_60;
  MapEditor_PositionGizmo_o *pMStack_58;
  undefined1 auVar18 [16];
  undefined8 uVar17;
  
  x_00 = (MethodInfo_24E8500 *)line;
  if (g_data_057ae0d3 == '\0') {
    __this = (MapEditor_PositionGizmo_o *)&MethodInfo_Renderer_GetComponentsInChildren_Renderer;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0d3 = '\x01';
  }
  if ((line != (UnityEngine_Transform_o *)0x0) &&
     (x_00 = MethodInfo_Renderer_GetComponentsInChildren_Renderer, pMVar11 = (MapEditor_PositionGizmo_o *)line,
     pSVar10 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                         ((UnityEngine_Component_o *)line,MethodInfo_Renderer_GetComponentsInChildren_Renderer), __this = pMVar11,
     pSVar10 != (System_Object_array *)0x0)) {
    uVar24 = (uint)pSVar10->max_length;
    if (0 < (int)uVar24) {
      uVar14 = 0;
      do {
        __this = pMVar11;
        if (uVar24 <= uVar14) goto label_04340f4e;
        line = (UnityEngine_Transform_o *)pSVar10->m_Items[(int)uVar14];
        if ((MapEditor_PositionGizmo_o *)line == (MapEditor_PositionGizmo_o *)0x0) goto label_04340f49;
        x_00 = (MethodInfo_24E8500 *)0x0;
        __this = (MapEditor_PositionGizmo_o *)line;
        __this_07 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)line,(MethodInfo *)0x0);
        if (__this_07 == (UnityEngine_Material_o *)0x0) goto label_04340f49;
        UnityEngine_Material__set_color(__this_07,color,(MethodInfo *)0x0);
        x_00 = (MethodInfo_24E8500 *)0x0;
        __this = (MapEditor_PositionGizmo_o *)line;
        pMVar11 = (MapEditor_PositionGizmo_o *)
                  UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)line,(MethodInfo *)0x0);
        if (pMVar11 == (MapEditor_PositionGizmo_o *)0x0) goto label_04340f49;
        x_00 = (MethodInfo_24E8500 *)0xc27;
        UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)pMVar11,0xc27,(MethodInfo *)0x0);
        uVar14 = uVar14 + 1;
        uVar24 = (uint)pSVar10->max_length;
      } while ((int)uVar14 < (int)uVar24);
    }
    return;
  }
label_04340f49:
  il2cpp_runtime_helper_022b2c90();
label_04340f4e:
  uStack_60 = il2cpp_runtime_helper_022b2ca0();
  pMStack_58 = (MapEditor_PositionGizmo_o *)line;
  if (g_data_057ae0c8 == '\0') {
    pMStack_68 = (MapEditor_PositionGizmo_o *)0x4340f83;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0c8 = '\x01';
  }
  y = (Cameras_BaseCamera_o *)(__this->fields)._planeXY;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pMStack_68 = (MapEditor_PositionGizmo_o *)0x4340fa7;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_68 = (MapEditor_PositionGizmo_o *)0x4340fb4;
  camera = y;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    y = (Cameras_BaseCamera_o *)(__this->fields)._planeYZ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pMStack_68 = (MapEditor_PositionGizmo_o *)0x4340fe7;
      il2cpp_runtime_helper_02337ed0();
    }
    pMStack_68 = (MapEditor_PositionGizmo_o *)0x4340ff4;
    camera = y;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      y = (Cameras_BaseCamera_o *)(__this->fields)._planeXZ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_68 = (MapEditor_PositionGizmo_o *)0x4341024;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_68 = (MapEditor_PositionGizmo_o *)0x4341031;
      camera = y;
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (g_data_057a6844 == '\0') {
          pMStack_68 = (MapEditor_PositionGizmo_o *)0x434105c;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        return;
      }
      pUVar12 = (__this->fields)._transform;
      if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
        pMStack_68 = (MapEditor_PositionGizmo_o *)0x4341045;
        UnityEngine_Transform__get_up(pUVar12,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pUVar12 = (__this->fields)._transform;
      if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
        pMStack_68 = (MapEditor_PositionGizmo_o *)0x434100c;
        UnityEngine_Transform__get_right(pUVar12,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pUVar12 = (__this->fields)._transform;
    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
      pMStack_68 = (MapEditor_PositionGizmo_o *)0x4340fcc;
      UnityEngine_Transform__get_forward(pUVar12,(MethodInfo *)0x0);
      return;
    }
  }
  pMVar11 = (MapEditor_PositionGizmo_o *)0x0;
  pMStack_68 = (MapEditor_PositionGizmo_o *)0x434108f;
  il2cpp_runtime_helper_022b2c90();
  auVar18._8_8_ = extraout_XMM1_Qb;
  auVar18._0_8_ = extraout_XMM1_Qa;
  pCStack_78 = y;
  pMStack_70 = x_00;
  pMStack_68 = __this;
  if (g_data_057ae0cd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0();
    auVar18._8_8_ = extraout_XMM1_Qb_00;
    auVar18._0_8_ = extraout_XMM1_Qa_00;
    g_data_057ae0cd = '\x01';
  }
  auStack_138._32_8_ = (Il2CppRGCTXData *)0x0;
  fStack_110 = 0.0;
  fStack_10c = 0.0;
  fStack_108 = 0.0;
  fStack_104 = 0.0;
  UStack_158.fields.z = 0.0;
  UStack_158.fields.x = 0.0;
  UStack_158.fields.y = 0.0;
  UStack_148.z = 0.0;
  UStack_148.x = 0.0;
  UStack_148.y = 0.0;
  auStack_138._0_8_ = (Il2CppRGCTXData *)0x0;
  auStack_138._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_138._16_8_ = (Il2CppObject *)0x0;
  pGVar2 = (pMVar11->fields)._gameManager;
  if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).SelectedObjects,
     pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) {
    if ((pSVar3->fields)._count == 0) {
      return;
    }
    if (camera != (Cameras_BaseCamera_o *)0x0) {
      __this_00 = (camera->fields).Camera;
      UVar42 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Camera_o *)0x0) {
        auVar7._12_4_ = 0;
        auVar7._0_12_ = auVar18._4_12_;
        auVar19 = auVar7 << 0x20;
        UnityEngine_Camera__ScreenPointToRay_4db37e0
                  ((UnityEngine_Ray_o *)auStack_100,__this_00,UVar42,(MethodInfo *)0x0);
        fStack_108 = SUB84(pIStack_f0,0);
        fStack_104 = (float)((ulong)pIStack_f0 >> 0x20);
        auStack_138._32_8_ = auStack_100._0_8_;
        fStack_110 = (float)auStack_100._8_4_;
        fStack_10c = (float)auStack_100._12_4_;
        if (*(char *)&(pMVar11->fields)._snapAnchorLocal.fields.y == '\0') {
label_0434121d:
          auStack_c0._0_8_ = (Il2CppMethodPointer)0x0;
          auStack_100._8_4_ = 0.0;
          auStack_100._0_8_ = (Il2CppRGCTXData *)0x0;
          in_RCX = (MethodInfo *)auStack_c0;
          bVar9 = MapEditor_PositionGizmo__TryFindClosestVertexOnSelection
                            (pMVar11,camera,&UStack_158,(UnityEngine_Transform_o **)in_RCX,
                             (UnityEngine_Vector3_o *)auStack_100,in_R9);
          if ((char)bVar9 == '\0') {
            return;
          }
          pUVar4 = (camera->fields).Cache;
        }
        else {
          x = *(UnityEngine_Object_o **)&(pMVar11->fields)._vertexSnapOrigin.fields.z;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            auVar19._8_8_ = extraout_XMM1_Qb_01;
            auVar19._0_8_ = extraout_XMM1_Qa_01;
          }
          bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') goto label_0434121d;
          pUVar12 = *(UnityEngine_Transform_o **)&(pMVar11->fields)._vertexSnapOrigin.fields.z;
          if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_04341781;
          auVar41 = ZEXT812(0);
          UVar42 = UnityEngine_Transform__TransformPoint
                             (pUVar12,*(UnityEngine_Vector3_Fields *)&(pMVar11->fields)._snapAnchorTransform,
                              (MethodInfo *)0x0);
          auVar19._0_4_ = UVar42.fields.z;
          auVar19._4_12_ = auVar41;
          UStack_158.fields._0_8_ = UVar42.fields._0_8_;
          pUVar4 = (camera->fields).Cache;
          UStack_158.fields.z = auVar19._0_4_;
        }
        if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar12 = (pUVar4->fields).Transform, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
          UVar42 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
          auVar20._4_12_ = auVar19._4_12_;
          auVar20._0_4_ = UVar42.fields.z;
          uVar17 = auVar20._0_8_;
          fVar23 = UVar42.fields.x;
          fVar30 = UVar42.fields.y;
          register0x000012c8 = 0;
          auStack_e8._0_4_ = UStack_158.fields.x;
          auStack_e8._4_4_ = UStack_158.fields.y;
          auStack_d8._0_16_ = ZEXT416((uint)UStack_158.fields.z);
          fVar16 = UStack_158.fields.z;
          fVar25 = 0.0;
          if (g_data_057a68cb == '\0') {
            in_stack_fffffffffffffe8c = auVar19._4_4_;
            in_stack_fffffffffffffe90 = auVar19._8_4_;
            in_stack_fffffffffffffe94 = auVar19._12_4_;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            uVar17 = CONCAT44(in_stack_fffffffffffffe8c,auVar20._0_4_);
            g_data_057a68cb = '\x01';
            fVar16 = (float)auStack_d8._0_4_;
            fVar25 = (float)auStack_d8._4_4_;
            in_stack_fffffffffffffe98 = fVar23;
            in_stack_fffffffffffffe9c = fVar30;
          }
          auVar20._0_4_ = auStack_e8._4_4_;
          auStack_88._4_4_ = auVar20._0_4_;
          auStack_88._0_4_ = auVar20._0_4_;
          auStack_88._8_4_ = auStack_e8._8_4_;
          auStack_88._12_4_ = auStack_e8._12_4_;
          fVar29 = fVar30 - auVar20._0_4_;
          fVar16 = (float)uVar17 - fVar16;
          fVar23 = fVar23 - auStack_e8._0_4_;
          fVar25 = (float)((ulong)uVar17 >> 0x20) - fVar25;
          auVar20._0_4_ = fVar30 - auVar20._0_4_;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            in_stack_fffffffffffffe8c = fVar23;
            in_stack_fffffffffffffe90 = fVar25;
            in_stack_fffffffffffffe94 = auVar20._0_4_;
            in_stack_fffffffffffffe98 = fVar29;
            in_stack_fffffffffffffe9c = fVar30;
          }
          in_stack_fffffffffffffe88 = fVar23 * fVar23 + fVar29 * fVar29 + fVar16 * fVar16;
          auVar22 = ZEXT816(0);
          if (in_stack_fffffffffffffe88 < 0.0) {
            in_stack_fffffffffffffe88 = sqrtf(in_stack_fffffffffffffe88);
          }
          else {
            in_stack_fffffffffffffe88 = SQRT(in_stack_fffffffffffffe88);
          }
          bVar9 = MapEditor_PositionGizmo__TryFindNearestSceneVertexOnScreen_4243720
                            (pMVar11,camera,30.0,(UnityEngine_Vector3_o *)&UStack_148,in_RCX);
          if ((char)bVar9 == '\0') {
label_043413d6:
            pUVar4 = (camera->fields).Cache;
            if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar12 = (pUVar4->fields).Transform, pUVar12 == (UnityEngine_Transform_o *)0x0))
            goto label_04341781;
            UVar42 = UnityEngine_Transform__get_forward(pUVar12,(MethodInfo *)0x0);
            fVar16 = UVar42.fields.z;
            uVar34 = UVar42.fields._0_8_;
            uVar24 = auVar22._4_4_;
            uVar14 = auVar22._8_4_;
            uVar15 = auVar22._12_4_;
            fVar25 = UVar42.fields.x;
            in_stack_fffffffffffffe9c = UVar42.fields.y;
            if (g_data_057a6845 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              uVar34 = CONCAT44(in_stack_fffffffffffffe9c,fVar25);
              g_data_057a6845 = '\x01';
              iVar1 = *(int *)(TypeInfo_Math + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_Math + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
              uVar34 = CONCAT44(in_stack_fffffffffffffe9c,fVar25);
            }
            fVar23 = (float)(uVar34 >> 0x20);
            fVar23 = fVar16 * fVar16 + fVar23 * fVar23 + (float)uVar34 * (float)uVar34;
            uVar43 = uVar14;
            uVar44 = uVar15;
            if (fVar23 < 0.0) {
              fVar23 = sqrtf(fVar23);
              uVar34 = CONCAT44(in_stack_fffffffffffffe9c,fVar25);
              uVar14 = extraout_XMM0_Dc_00;
              uVar15 = extraout_XMM0_Dd_00;
              if (fVar23 <= 1e-05) goto label_04341454;
label_043414a3:
              uVar31 = uVar24 ^ 0x80000000;
              uVar32 = uVar43 ^ 0x80000000;
              uVar33 = uVar44 ^ 0x80000000;
              auVar35._0_8_ = uVar34 ^ 0x8000000080000000;
              auVar35._8_4_ = extraout_XMM0_Dc ^ 0x80000000;
              auVar35._12_4_ = extraout_XMM0_Dd ^ 0x80000000;
              fVar30 = -fVar16 / fVar23;
              auVar6._4_4_ = fVar23;
              auVar6._0_4_ = fVar23;
              auVar6._8_4_ = uVar14;
              auVar6._12_4_ = uVar15;
              auVar36 = divps(auVar35,auVar6);
            }
            else {
              fVar23 = SQRT(fVar23);
              if (1e-05 < fVar23) goto label_043414a3;
label_04341454:
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a65d5 = '\x01';
              }
              auVar36._8_8_ = 0;
              auVar36._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
              fVar30 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
              uVar31 = 0;
              uVar32 = 0;
              uVar33 = 0;
            }
            fVar26 = auVar36._0_4_;
            fVar28 = auVar36._4_4_;
            uVar37 = auVar36._8_4_;
            uVar38 = auVar36._12_4_;
            fVar29 = fStack_104 * fVar30 + fStack_108 * fVar28 + fVar26 * fStack_10c;
            fVar23 = fStack_110 * fVar30;
            auVar20._0_4_ = fVar28;
            uVar14 = 0;
            uVar15 = 0;
            fVar39 = (float)auStack_138._32_8_;
            fVar40 = SUB84(auStack_138._32_8_,4);
            if (g_data_057a68c8 == '\0') {
              uStack_98 = (Il2CppRGCTXData *)auStack_138._32_8_;
              ppIStack_90 = (Il2CppType **)0x0;
              auStack_a8 = ZEXT416((uint)fVar29);
              fStack_14c = fStack_110 * fVar30;
              auStack_c0._8_4_ = fVar28;
              fStack_b4 = fVar28;
              uStack_b0 = uVar37;
              uStack_ac = uVar38;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
              auVar36._4_4_ = fVar28;
              auVar36._0_4_ = fVar26;
              auVar36._8_4_ = uVar37;
              auVar36._12_4_ = uVar38;
              g_data_057a68c8 = '\x01';
              fVar23 = fStack_14c;
              auVar20._0_4_ = (float)auStack_c0._8_4_;
              fVar29 = (float)auStack_a8._0_4_;
              uVar14 = auStack_a8._8_4_;
              uVar15 = auStack_a8._12_4_;
              fVar39 = (float)uStack_98;
              fVar40 = uStack_98._4_4_;
              fVar16 = fVar30;
              uVar24 = uVar31;
              uVar43 = uVar32;
              uVar44 = uVar33;
              fVar25 = fVar26;
              in_stack_fffffffffffffe9c = fVar28;
            }
            auVar27._0_4_ = ABS(fVar29);
            auVar27._4_4_ = 0;
            auVar27._8_4_ = uVar14 & 0x7fffffff;
            auVar27._12_4_ = uVar15 & 0x7fffffff;
            if (auVar27._0_4_ <= 0.0) {
              auVar8._12_4_ = 0;
              auVar8._0_12_ = auVar27._4_12_;
              auVar27 = auVar8 << 0x20;
            }
            fVar26 = auVar27._0_4_ * 1e-06;
            fVar28 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
            if (fVar26 <= fVar28) {
              fVar26 = fVar28;
            }
            if (ABS(0.0 - fVar29) < fVar26) {
              return;
            }
            fVar29 = ((fVar30 * (float)auStack_d8._0_4_ +
                      (float)auStack_88._0_4_ * auVar20._0_4_ + (float)auStack_e8._0_4_ * auVar36._0_4_) -
                     (fVar23 + fVar40 * auVar20._0_4_ + auVar36._0_4_ * fVar39)) / fVar29;
            if (fVar29 <= 0.0) {
              return;
            }
            __this_02.fields.m_Origin.fields.y = (float)uVar24;
            __this_02.fields.m_Origin.fields.x = fVar16;
            __this_02.fields.m_Origin.fields.z = (float)uVar43;
            __this_02.fields.m_Direction.fields.x = (float)uVar44;
            __this_02.fields.m_Direction.fields.y = fVar25;
            __this_02.fields.m_Direction.fields.z = in_stack_fffffffffffffe9c;
            UVar42 = UnityEngine_Ray__GetPoint(__this_02,fVar29,(MethodInfo *)(auStack_138 + 0x20));
            in_stack_fffffffffffffe88 = UVar42.fields.x - (float)auStack_e8._0_4_;
            in_stack_fffffffffffffe8c = UVar42.fields.y - (float)auStack_e8._4_4_;
            in_stack_fffffffffffffe90 = extraout_XMM0_Dc_01 - fStack_e0;
            in_stack_fffffffffffffe94 = extraout_XMM0_Dd_01 - fStack_dc;
            in_stack_fffffffffffffe98 = UVar42.fields.z - (float)auStack_d8._0_4_;
            fVar25 = in_stack_fffffffffffffe98 * in_stack_fffffffffffffe98 +
                     in_stack_fffffffffffffe8c * in_stack_fffffffffffffe8c +
                     in_stack_fffffffffffffe88 * in_stack_fffffffffffffe88;
          }
          else {
            fVar16 = in_stack_fffffffffffffe88 * 0.3;
            if (fVar16 <= 60.0) {
              fVar16 = 60.0;
            }
            in_stack_fffffffffffffe88 = UStack_148.x - (float)auStack_e8._0_4_;
            in_stack_fffffffffffffe8c = UStack_148.y - (float)auStack_e8._4_4_;
            in_stack_fffffffffffffe90 = 0.0 - fStack_e0;
            in_stack_fffffffffffffe94 = 0.0 - fStack_dc;
            in_stack_fffffffffffffe98 = UStack_148.z - (float)auStack_d8._0_4_;
            fVar25 = in_stack_fffffffffffffe8c * in_stack_fffffffffffffe8c;
            auVar21._4_4_ = fVar25;
            auVar21._0_4_ = fVar25;
            auVar21._8_4_ = in_stack_fffffffffffffe90 * in_stack_fffffffffffffe90;
            auVar21._12_4_ = in_stack_fffffffffffffe94 * in_stack_fffffffffffffe94;
            auVar22._4_12_ = auVar21._4_12_;
            auVar22._0_4_ = fVar25 + in_stack_fffffffffffffe88 * in_stack_fffffffffffffe88;
            fVar25 = in_stack_fffffffffffffe98 * in_stack_fffffffffffffe98 + auVar22._0_4_;
            if (fVar16 * fVar16 < fVar25) goto label_043413d6;
          }
          if (fVar25 < 1e-08) {
            return;
          }
          pGVar2 = (pMVar11->fields)._gameManager;
          if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
             (__this_01 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
             __this_01 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
            System_Collections_Generic_HashSet_object___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_100,__this_01,
                       MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
            auStack_138._16_8_ = pIStack_f0;
            auStack_138._8_8_ = CONCAT44(auStack_100._12_4_,auStack_100._8_4_);
            auStack_138._0_8_ = auStack_100._0_8_;
            while( true ) {
              __this_03.fields._set._4_4_ = in_stack_fffffffffffffe8c;
              __this_03.fields._set._0_4_ = in_stack_fffffffffffffe88;
              __this_03.fields._index = (int32_t)in_stack_fffffffffffffe90;
              __this_03.fields._version = (int32_t)in_stack_fffffffffffffe94;
              __this_03.fields._current._0_4_ = in_stack_fffffffffffffe98;
              __this_03.fields._current._4_4_ = in_stack_fffffffffffffe9c;
              bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                (__this_03,(MethodInfo_3219C40 *)auStack_138);
              if ((char)bVar9 == '\0') {
                __this_04.fields._set._4_4_ = in_stack_fffffffffffffe8c;
                __this_04.fields._set._0_4_ = in_stack_fffffffffffffe88;
                __this_04.fields._index = (int32_t)in_stack_fffffffffffffe90;
                __this_04.fields._version = (int32_t)in_stack_fffffffffffffe94;
                __this_04.fields._current._0_4_ = in_stack_fffffffffffffe98;
                __this_04.fields._current._4_4_ = in_stack_fffffffffffffe9c;
                System_Collections_Generic_HashSet_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_3219C30 *)auStack_138);
                return;
              }
              if ((Il2CppObject *)auStack_138._16_8_ == (Il2CppObject *)0x0) break;
              if (((Il2CppObject *)(auStack_138._16_8_ + 0x10))->monitor == (UnityEngine_GameObject_o *)0x0)
              goto label_0434178b;
              pUVar12 = UnityEngine_GameObject__get_transform
                                  (((Il2CppObject *)(auStack_138._16_8_ + 0x10))->monitor,(MethodInfo *)0x0);
              if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_04341790;
              UVar42 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
              value.fields.x = UVar42.fields.x + in_stack_fffffffffffffe88;
              value.fields.y = UVar42.fields.y + in_stack_fffffffffffffe8c;
              value.fields.z = UVar42.fields.z + in_stack_fffffffffffffe98;
              UnityEngine_Transform__set_position(pUVar12,value,(MethodInfo *)0x0);
            }
            goto label_04341786;
          }
        }
      }
    }
  }
label_04341781:
  il2cpp_runtime_helper_022b2c90();
label_04341786:
  il2cpp_runtime_helper_022b2c90();
label_0434178b:
  il2cpp_runtime_helper_022b2c90();
label_04341790:
  auVar41 = il2cpp_runtime_helper_022b2c90();
  if (auVar41._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(auVar41._0_8_);
    lVar5 = *plVar13;
    __cxa_end_catch();
    __this_05.fields._set._4_4_ = in_stack_fffffffffffffe8c;
    __this_05.fields._set._0_4_ = in_stack_fffffffffffffe88;
    __this_05.fields._index = (int32_t)in_stack_fffffffffffffe90;
    __this_05.fields._version = (int32_t)in_stack_fffffffffffffe94;
    __this_05.fields._current._0_4_ = in_stack_fffffffffffffe98;
    __this_05.fields._current._4_4_ = in_stack_fffffffffffffe9c;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_05,(MethodInfo_3219C30 *)auStack_138);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_06.fields._set._4_4_ = in_stack_fffffffffffffe8c;
  __this_06.fields._set._0_4_ = in_stack_fffffffffffffe88;
  __this_06.fields._index = (int32_t)in_stack_fffffffffffffe90;
  __this_06.fields._version = (int32_t)in_stack_fffffffffffffe94;
  __this_06.fields._current._0_4_ = in_stack_fffffffffffffe98;
  __this_06.fields._current._4_4_ = in_stack_fffffffffffffe9c;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_06,(MethodInfo_3219C30 *)auStack_138);
  _Unwind_Resume(auVar41._0_8_);
}


// MapEditor.PositionGizmo$$.ctor
// il2cpp: void MapEditor_PositionGizmo___ctor (MapEditor_PositionGizmo_o* __this, const MethodInfo* method);
// 0x4344500

void MapEditor_PositionGizmo___ctor(MapEditor_PositionGizmo_o *__this,MethodInfo *method)

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
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


