// Type: MapEditor.ScaleGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/ScaleGizmo.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Gizmos/ScaleGizmo.cs  [CHANGED since prior version]
// --------------------------------

// MapEditor.ScaleGizmo$$Create
// il2cpp: MapEditor_ScaleGizmo_o* MapEditor_ScaleGizmo__Create (const MethodInfo* method);
// 0x415ec60

MapEditor_ScaleGizmo_o * MapEditor_ScaleGizmo__Create(MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *__this;
  MapEditor_ScaleGizmo_o *pMVar1;
  
  if (DAT_05704a3d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ScaleGizmo_AddComponent_ScaleGizmo);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Gizmos/ScaleGizmo");
    DAT_05704a3d = '\x01';
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
                     (path,"Gizmos/ScaleGizmo",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pMVar1 = (MapEditor_ScaleGizmo_o *)
             UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_ScaleGizmo_AddComponent_ScaleGizmo);
    UnityEngine_GameObject__SetActive(__this,0,(MethodInfo *)0x0);
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.ScaleGizmo$$IsActive
// il2cpp: bool MapEditor_ScaleGizmo__IsActive (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x415ed50

bool_conflict MapEditor_ScaleGizmo__IsActive(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *x;
  bool_conflict bVar1;
  
  if (DAT_05704a3e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a3e = '\x01';
  }
  x = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// MapEditor.ScaleGizmo$$Awake
// il2cpp: void MapEditor_ScaleGizmo__Awake (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x415eda0

void MapEditor_ScaleGizmo__Awake(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  MethodInfo *in_RCX;
  MapEditor_ScaleGizmo_o *__this_00;
  
  if (DAT_05704a3f == '\0') {
    il2cpp_init_method_metadata(&"LineZ");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"LineY");
    il2cpp_init_method_metadata(&"LineX");
    DAT_05704a3f = '\x01';
  }
  MapEditor_BaseGizmo__Awake((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._transform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineX",(MethodInfo *)0x0);
    (__this->fields)._lineX = pUVar1;
    il2cpp_runtime_glue(&(__this->fields)._lineX,pUVar1);
    pUVar1 = (__this->fields)._transform;
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineY",(MethodInfo *)0x0);
      (__this->fields)._lineY = pUVar1;
      il2cpp_runtime_glue(&(__this->fields)._lineY,pUVar1);
      pUVar1 = (__this->fields)._transform;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"LineZ",(MethodInfo *)0x0);
        (__this->fields)._lineZ = pUVar1;
        il2cpp_runtime_glue(&(__this->fields)._lineZ,pUVar1);
        pUVar1 = (__this->fields)._transform;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = UnityEngine_Transform__Find(pUVar1,"Center",(MethodInfo *)0x0);
          __this_00 = (MapEditor_ScaleGizmo_o *)&(__this->fields)._center;
          (__this->fields)._center = pUVar1;
          il2cpp_runtime_glue(__this_00,pUVar1);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineX,
                     (UnityEngine_Color_o)(__this->fields).LineXColor.fields,0xc27,in_RCX);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineY,
                     (UnityEngine_Color_o)(__this->fields).LineYColor.fields,0xc27,in_RCX);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineZ,
                     (UnityEngine_Color_o)(__this->fields).LineZColor.fields,0xc27,in_RCX);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._center,
                     (UnityEngine_Color_o)(__this->fields).CenterColor.fields,4000,in_RCX);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.ScaleGizmo$$OnSelectionChange
// il2cpp: void MapEditor_ScaleGizmo__OnSelectionChange (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x415efa0

void MapEditor_ScaleGizmo__OnSelectionChange(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_BaseGizmo_o *x;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MapEditor_ScaleGizmo_o *__this_00;
  
  if (DAT_05704a40 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a40 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (method_00 = (MethodInfo *)(pGVar1->fields).SelectedObjects, method_00 != (MethodInfo *)0x0)) {
    if (0 < *(int *)&method_00->klass) {
      x = (pGVar1->fields).CurrentGizmo;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0)
      ;
      if ((char)bVar2 != '\0') {
        pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          method_01 = (MethodInfo *)0x1;
          UnityEngine_GameObject__SetActive(pUVar3,1,(MethodInfo *)0x0);
          __this_00 = __this;
          MapEditor_ScaleGizmo__ResetCenter(__this,method_01);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineX,
                     (UnityEngine_Color_o)(__this->fields).LineXColor.fields,0xc27,method_00);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineY,
                     (UnityEngine_Color_o)(__this->fields).LineYColor.fields,0xc27,method_00);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._lineZ,
                     (UnityEngine_Color_o)(__this->fields).LineZColor.fields,0xc27,method_00);
          MapEditor_ScaleGizmo__SetLineColor
                    (__this_00,(__this->fields)._center,
                     (UnityEngine_Color_o)(__this->fields).CenterColor.fields,4000,method_00);
          return;
        }
        goto LAB_0415f0e6;
      }
    }
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0415f0e6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.ScaleGizmo$$ContainsCenter
// il2cpp: bool MapEditor_ScaleGizmo__ContainsCenter (MapEditor_ScaleGizmo_o* __this, UnityEngine_RaycastHit_array* hits, const MethodInfo* method);
// 0x415f3e0

bool_conflict
MapEditor_ScaleGizmo__ContainsCenter
          (MapEditor_ScaleGizmo_o *__this,UnityEngine_RaycastHit_array *hits,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Transform_o *y;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_RaycastHit_o __this_00;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined4 uVar6;
  bool_conflict bVar7;
  UnityEngine_Collider_o *__this_01;
  UnityEngine_Transform_o *x;
  UnityEngine_RaycastHit_o *pUVar8;
  ulong uVar9;
  
  if (DAT_05704a41 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a41 = '\x01';
  }
  if (hits != (UnityEngine_RaycastHit_array *)0x0) {
    pUVar8 = hits->m_Items;
    uVar9 = 0;
    uVar1 = (uint)hits->max_length;
    if (0 < (int)uVar1) {
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (pUVar8->fields).m_Distance;
        auVar4 = *(undefined1 (*) [12])&(pUVar8->fields).m_Point;
        auVar5 = *(undefined1 (*) [12])&(pUVar8->fields).m_Normal;
        uVar6 = (pUVar8->fields).m_FaceID;
        __this_00.fields.m_FaceID = uVar6;
        __this_00.fields.m_Normal.fields = (UnityEngine_Vector3_Fields)auVar5;
        __this_00.fields.m_Point.fields = (UnityEngine_Vector3_Fields)auVar4;
        uVar3 = (pUVar8->fields).m_UV.fields.x;
        __this_00.fields.m_Distance = (float)uVar2;
        __this_00.fields.m_UV.fields.x = (float)uVar3;
        __this_00.fields._36_8_ = *(undefined8 *)&(pUVar8->fields).m_UV.fields.y;
        __this_01 = UnityEngine_RaycastHit__get_collider
                              (__this_00,(MethodInfo *)&stack0xffffffffffffff98);
        if (__this_01 == (UnityEngine_Collider_o *)0x0) goto LAB_0415f4e9;
        x = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        y = (__this->fields)._center;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar8 = pUVar8 + 1;
        uVar9 = uVar9 + 1;
        bVar7 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar7 >> 8),1);
        }
        uVar1 = (uint)hits->max_length;
      } while ((long)uVar9 < (long)(int)uVar1);
    }
    return 0;
  }
LAB_0415f4e9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.ScaleGizmo$$Update
// il2cpp: void MapEditor_ScaleGizmo__Update (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x415f4f0

void MapEditor_ScaleGizmo__Update(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  UnityEngine_Component_o *__this_00;
  Settings_KeybindSetting_o *__this_01;
  UI_MapEditorMenu_o *pUVar10;
  UnityEngine_Camera_o *pUVar11;
  System_Collections_Generic_HashSet_MapObject__o *collection;
  GameManagers_MapEditorGameManager_o *pGVar12;
  double dVar13;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_RaycastHit_o __this_03;
  UnityEngine_RaycastHit_o __this_04;
  UnityEngine_RaycastHit_o __this_05;
  UnityEngine_RaycastHit_o __this_06;
  undefined4 uVar14;
  undefined4 uVar15;
  bool_conflict bVar16;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  System_Int32_array *layers;
  UnityEngine_RaycastHit_array *hits;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MapEditor_TransformScaleCommand_o *__this_07;
  float *pfVar17;
  undefined8 *puVar18;
  UnityEngine_Collider_o *pUVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  MethodInfo *pMVar22;
  MethodInfo *method_00;
  MapEditor_ScaleGizmo_o *__this_08;
  MethodInfo *pMVar23;
  MapEditor_ScaleGizmo_o *__this_09;
  ulong uVar24;
  _union_14 *p_Var25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  UnityEngine_Vector3_o UVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 in_stack_fffffffffffffea0;
  undefined4 in_stack_fffffffffffffea8;
  undefined4 in_stack_fffffffffffffeac;
  int32_t in_stack_fffffffffffffeb0;
  undefined8 uStack_148;
  float fStack_128;
  float fStack_124;
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
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  _union_14 _Stack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint32_t uStack_60;
  float fStack_5c;
  float fStack_58;
  undefined8 uStack_54;
  UnityEngine_Ray_o UStack_48;
  
  if (DAT_05704a42 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RaycastHit_First_RaycastHit);
    il2cpp_init_method_metadata(&TypeInfo_Func_RaycastHit__bool);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__Update_b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TransformScaleCommand);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    DAT_05704a42 = '\x01';
  }
  fStack_58 = 0.0;
  uStack_54 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  fStack_5c = 0.0;
  _Stack_78.genericMethod = (void *)0x0;
  uStack_70 = 0;
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  uStack_80 = 0;
  _Stack_98.genericMethod = (void *)0x0;
  uStack_90 = 0;
  uStack_8c = 0;
  _Stack_a8.genericMethod = (void *)0x0;
  _Stack_a0.genericMethod = (void *)0x0;
  MapEditor_BaseGizmo__Update((MapEditor_BaseGizmo_o *)__this,(MethodInfo *)0x0);
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) goto LAB_04160ba7;
  pMVar22 = *(MethodInfo **)(TypeInfo_SceneLoader + 0xb8);
  __this_00 = (UnityEngine_Component_o *)pMVar22->name;
  __this_01 = *(Settings_KeybindSetting_o **)(lVar9 + 0x78);
  pUVar21 = (__this->fields)._activeLine;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_09 = (MapEditor_ScaleGizmo_o *)&(__this->fields)._activeLine;
  bVar16 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar16 != '\0') {
    pUVar10 = (__this->fields)._menu;
    if (pUVar10 == (UI_MapEditorMenu_o *)0x0) goto LAB_04160ba7;
    if ((char)(pUVar10->fields).IsMouseUI != '\0') {
LAB_0416042a:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar36 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar27 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      (__this->fields)._currentScaleAmount.fields.x = (float)(int)uVar36;
      (__this->fields)._currentScaleAmount.fields.y = (float)(int)((ulong)uVar36 >> 0x20);
      (__this->fields)._currentScaleAmount.fields.z = fVar27;
      return;
    }
    if (__this_01 == (Settings_KeybindSetting_o *)0x0) goto LAB_04160ba7;
    bVar16 = Settings_KeybindSetting__GetKeyDown(__this_01,0,(MethodInfo *)0x0);
    if ((char)bVar16 == '\0') goto LAB_0416042a;
    if (__this_00 != (UnityEngine_Component_o *)0x0) {
      pUVar11 = __this_00[1].monitor;
      UVar35 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__ScreenPointToRay(&UStack_48,pUVar11,UVar35,(MethodInfo *)0x0);
        fStack_d8 = UStack_48.fields.m_Direction.fields.y;
        fStack_d4 = UStack_48.fields.m_Direction.fields.z;
        auStack_e8._0_4_ = UStack_48.fields.m_Origin.fields.x;
        auStack_e8._4_4_ = UStack_48.fields.m_Origin.fields.y;
        fStack_e0 = UStack_48.fields.m_Origin.fields.z;
        fStack_dc = UStack_48.fields.m_Direction.fields.x;
        layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (layers != (System_Int32_array *)0x0) {
          if ((int)layers->max_length == 0) {
LAB_04160bac:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x44);
          mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          uVar38 = CONCAT44(fStack_d4,fStack_d8);
          uVar36 = CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
          uVar37 = CONCAT44(fStack_dc,fStack_e0);
          ray.fields.m_Origin.fields.z = fStack_e0;
          ray.fields.m_Direction.fields.x = fStack_dc;
          ray.fields.m_Origin.fields.x = (float)auStack_e8._0_4_;
          ray.fields.m_Origin.fields.y = (float)auStack_e8._4_4_;
          ray.fields.m_Direction.fields.y = fStack_d8;
          ray.fields.m_Direction.fields.z = fStack_d4;
          hits = UnityEngine_Physics__RaycastAll(ray,100000.0,layerMask,(MethodInfo *)0x0);
          bVar16 = MapEditor_ScaleGizmo__ContainsCenter(__this,hits,method_00);
          if ((char)bVar16 == '\0') {
            if (hits == (UnityEngine_RaycastHit_array *)0x0) goto LAB_04160ba7;
            p_Var25 = (_union_14 *)hits->m_Items;
            uVar24 = 0;
            do {
              uVar8 = (uint)hits->max_length;
              if ((long)(int)uVar8 <= (long)uVar24) goto LAB_0416042a;
              if (uVar8 <= uVar24) goto LAB_04160bac;
              _Stack_a8 = *p_Var25;
              _Stack_a0 = p_Var25[1];
              _Stack_98 = p_Var25[2];
              uStack_80 = *(uint *)(p_Var25 + 5);
              pMVar22 = (MethodInfo *)(ulong)uStack_80;
              fStack_88 = SUB84(p_Var25[4],0);
              fStack_84 = SUB84(p_Var25[4],4);
              uStack_90 = SUB84(p_Var25[3],0);
              uStack_8c = SUB84(p_Var25[3],4);
              __this_02.fields.m_Point.fields.z = (float)(int)uVar37;
              __this_02.fields.m_Normal.fields.x = (float)(int)((ulong)uVar37 >> 0x20);
              __this_02.fields.m_Point.fields.x = (float)(int)uVar36;
              __this_02.fields.m_Point.fields.y = (float)(int)((ulong)uVar36 >> 0x20);
              __this_02.fields.m_Normal.fields.y = (float)(int)uVar38;
              __this_02.fields.m_Normal.fields.z = (float)(int)((ulong)uVar38 >> 0x20);
              __this_02.fields.m_FaceID = (int)in_stack_fffffffffffffea0;
              __this_02.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
              __this_02.fields.m_UV.fields.x = (float)in_stack_fffffffffffffea8;
              __this_02.fields.m_UV.fields.y = (float)in_stack_fffffffffffffeac;
              __this_02.fields.m_Collider = in_stack_fffffffffffffeb0;
              pUVar19 = UnityEngine_RaycastHit__get_collider(__this_02,(MethodInfo *)&_Stack_a8);
              if (pUVar19 == (UnityEngine_Collider_o *)0x0) goto LAB_04160ba7;
              pUVar20 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
              pUVar21 = (__this->fields)._lineX;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar16 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)pUVar21,
                                  (MethodInfo *)0x0);
              if ((char)bVar16 != '\0') break;
              __this_03.fields.m_Point.fields.z = (float)(int)uVar37;
              __this_03.fields.m_Normal.fields.x = (float)(int)((ulong)uVar37 >> 0x20);
              __this_03.fields.m_Point.fields.x = (float)(int)uVar36;
              __this_03.fields.m_Point.fields.y = (float)(int)((ulong)uVar36 >> 0x20);
              __this_03.fields.m_Normal.fields.y = (float)(int)uVar38;
              __this_03.fields.m_Normal.fields.z = (float)(int)((ulong)uVar38 >> 0x20);
              __this_03.fields.m_FaceID = (int)in_stack_fffffffffffffea0;
              __this_03.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
              __this_03.fields.m_UV.fields.x = (float)in_stack_fffffffffffffea8;
              __this_03.fields.m_UV.fields.y = (float)in_stack_fffffffffffffeac;
              __this_03.fields.m_Collider = in_stack_fffffffffffffeb0;
              pUVar19 = UnityEngine_RaycastHit__get_collider(__this_03,(MethodInfo *)&_Stack_a8);
              if (pUVar19 == (UnityEngine_Collider_o *)0x0) goto LAB_04160ba7;
              pUVar20 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
              pUVar21 = (__this->fields)._lineY;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar16 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)pUVar21,
                                  (MethodInfo *)0x0);
              if ((char)bVar16 != '\0') break;
              __this_04.fields.m_Point.fields.z = (float)(int)uVar37;
              __this_04.fields.m_Normal.fields.x = (float)(int)((ulong)uVar37 >> 0x20);
              __this_04.fields.m_Point.fields.x = (float)(int)uVar36;
              __this_04.fields.m_Point.fields.y = (float)(int)((ulong)uVar36 >> 0x20);
              __this_04.fields.m_Normal.fields.y = (float)(int)uVar38;
              __this_04.fields.m_Normal.fields.z = (float)(int)((ulong)uVar38 >> 0x20);
              __this_04.fields.m_FaceID = (int)in_stack_fffffffffffffea0;
              __this_04.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
              __this_04.fields.m_UV.fields.x = (float)in_stack_fffffffffffffea8;
              __this_04.fields.m_UV.fields.y = (float)in_stack_fffffffffffffeac;
              __this_04.fields.m_Collider = in_stack_fffffffffffffeb0;
              pUVar19 = UnityEngine_RaycastHit__get_collider(__this_04,(MethodInfo *)&_Stack_a8);
              if (pUVar19 == (UnityEngine_Collider_o *)0x0) goto LAB_04160ba7;
              pUVar20 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
              pUVar21 = (__this->fields)._lineZ;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              p_Var25 = (_union_14 *)((long)p_Var25 + 0x2c);
              uVar24 = uVar24 + 1;
              bVar16 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)pUVar21,
                                  (MethodInfo *)0x0);
            } while ((char)bVar16 == '\0');
            __this_05.fields.m_Point.fields.z = (float)(int)uVar37;
            __this_05.fields.m_Normal.fields.x = (float)(int)((ulong)uVar37 >> 0x20);
            __this_05.fields.m_Point.fields.x = (float)(int)uVar36;
            __this_05.fields.m_Point.fields.y = (float)(int)((ulong)uVar36 >> 0x20);
            __this_05.fields.m_Normal.fields.y = (float)(int)uVar38;
            __this_05.fields.m_Normal.fields.z = (float)(int)((ulong)uVar38 >> 0x20);
            __this_05.fields.m_FaceID = (int)in_stack_fffffffffffffea0;
            __this_05.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
            __this_05.fields.m_UV.fields.x = (float)in_stack_fffffffffffffea8;
            __this_05.fields.m_UV.fields.y = (float)in_stack_fffffffffffffeac;
            __this_05.fields.m_Collider = in_stack_fffffffffffffeb0;
            pUVar19 = UnityEngine_RaycastHit__get_collider(__this_05,(MethodInfo *)&_Stack_a8);
            if (pUVar19 == (UnityEngine_Collider_o *)0x0) goto LAB_04160ba7;
            pUVar21 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
            (__this->fields)._activeLine = pUVar21;
            il2cpp_runtime_glue(__this_09,pUVar21);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._lineX,
                       (UnityEngine_Color_o)(__this->fields).LineXColor.fields,0xc27,pMVar22);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._lineY,
                       (UnityEngine_Color_o)(__this->fields).LineYColor.fields,0xc27,pMVar22);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._lineZ,
                       (UnityEngine_Color_o)(__this->fields).LineZColor.fields,0xc27,pMVar22);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._center,
                       (UnityEngine_Color_o)(__this->fields).CenterColor.fields,4000,pMVar22);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._activeLine,
                       (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0xc27,pMVar22);
            p_Var25 = &_Stack_a8;
          }
          else {
            (__this->fields)._activeLine = (__this->fields)._center;
            il2cpp_runtime_glue();
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._lineX,
                       (UnityEngine_Color_o)(__this->fields).LineXColor.fields,0xc27,pMVar22);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._lineY,
                       (UnityEngine_Color_o)(__this->fields).LineYColor.fields,0xc27,pMVar22);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._lineZ,
                       (UnityEngine_Color_o)(__this->fields).LineZColor.fields,0xc27,pMVar22);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._center,
                       (UnityEngine_Color_o)(__this->fields).CenterColor.fields,4000,pMVar22);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._activeLine,
                       (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0xc27,pMVar22);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._lineX,
                       (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0xc27,pMVar22);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._lineY,
                       (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0xc27,pMVar22);
            MapEditor_ScaleGizmo__SetLineColor
                      (__this_09,(__this->fields)._lineZ,
                       (UnityEngine_Color_o)(__this->fields).SelectedColor.fields,0xc27,pMVar22);
            predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_RaycastHit__bool);
            System_Func<RaycastHit__bool>___ctor();
            System_Linq_Enumerable__First<RaycastHit>
                      ((UnityEngine_RaycastHit_o *)auStack_e8,
                       (System_Collections_Generic_IEnumerable_TSource__o *)hits,predicate,
                       MethodInfo_RaycastHit_First_RaycastHit);
            _Stack_78._4_4_ = auStack_e8._4_4_;
            _Stack_78._0_4_ = auStack_e8._0_4_;
            uStack_70 = CONCAT44(fStack_dc,fStack_e0);
            uStack_68 = CONCAT44(fStack_d4,fStack_d8);
            fStack_58 = fStack_c8;
            uStack_54 = uStack_c4;
            uStack_60 = uStack_d0;
            fStack_5c = fStack_cc;
            p_Var25 = &_Stack_78;
          }
          __this_06.fields.m_Point.fields.z = (float)(int)uVar37;
          __this_06.fields.m_Normal.fields.x = (float)(int)((ulong)uVar37 >> 0x20);
          __this_06.fields.m_Point.fields.x = (float)(int)uVar36;
          __this_06.fields.m_Point.fields.y = (float)(int)((ulong)uVar36 >> 0x20);
          __this_06.fields.m_Normal.fields.y = (float)(int)uVar38;
          __this_06.fields.m_Normal.fields.z = (float)(int)((ulong)uVar38 >> 0x20);
          __this_06.fields.m_FaceID = (int)in_stack_fffffffffffffea0;
          __this_06.fields.m_Distance = (float)(int)((ulong)in_stack_fffffffffffffea0 >> 0x20);
          __this_06.fields.m_UV.fields.x = (float)in_stack_fffffffffffffea8;
          __this_06.fields.m_UV.fields.y = (float)in_stack_fffffffffffffeac;
          __this_06.fields.m_Collider = in_stack_fffffffffffffeb0;
          UVar35 = UnityEngine_RaycastHit__get_point(__this_06,(MethodInfo *)p_Var25);
          (__this->fields)._previousMousePoint.fields.x = (float)(int)UVar35.fields._0_8_;
          (__this->fields)._previousMousePoint.fields.y =
               (float)(int)((ulong)UVar35.fields._0_8_ >> 0x20);
          (__this->fields)._previousMousePoint.fields.z = UVar35.fields.z;
          goto LAB_0416042a;
        }
      }
    }
    goto LAB_04160ba7;
  }
  if (__this_01 == (Settings_KeybindSetting_o *)0x0) goto LAB_04160ba7;
  bVar16 = Settings_KeybindSetting__GetKey(__this_01,0,(MethodInfo *)0x0);
  if ((char)bVar16 == '\0') {
    __this_08 = (MapEditor_ScaleGizmo_o *)(__this->fields)._gameManager;
    if (__this_08 == (MapEditor_ScaleGizmo_o *)0x0) goto LAB_04160ba7;
    collection = (System_Collections_Generic_HashSet_MapObject__o *)(__this_08->fields)._lineX;
    mapObjects = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)mapObjects,
               (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_Map_MapObject);
    __this_07 = (MapEditor_TransformScaleCommand_o *)il2cpp_runtime_glue(TypeInfo_TransformScaleCommand);
    MapEditor_TransformScaleCommand___ctor(__this_07,mapObjects,(MethodInfo *)0x0);
    pMVar22 = (MethodInfo *)0x0;
    GameManagers_MapEditorGameManager__NewCommand
              ((GameManagers_MapEditorGameManager_o *)__this_08,(MapEditor_BaseCommand_o *)__this_07
               ,1,(MethodInfo *)0x0);
    MapEditor_ScaleGizmo__SetLineColor
              (__this_08,(__this->fields)._lineX,
               (UnityEngine_Color_o)(__this->fields).LineXColor.fields,0xc27,pMVar22);
    MapEditor_ScaleGizmo__SetLineColor
              (__this_08,(__this->fields)._lineY,
               (UnityEngine_Color_o)(__this->fields).LineYColor.fields,0xc27,pMVar22);
    MapEditor_ScaleGizmo__SetLineColor
              (__this_08,(__this->fields)._lineZ,
               (UnityEngine_Color_o)(__this->fields).LineZColor.fields,0xc27,pMVar22);
    MapEditor_ScaleGizmo__SetLineColor
              (__this_08,(__this->fields)._center,
               (UnityEngine_Color_o)(__this->fields).CenterColor.fields,4000,pMVar22);
    (__this->fields)._activeLine = (UnityEngine_Transform_o *)0x0;
    il2cpp_runtime_glue(__this_09,0);
    pGVar12 = (__this->fields)._gameManager;
  }
  else {
    if (__this_00 == (UnityEngine_Component_o *)0x0) goto LAB_04160ba7;
    pUVar11 = __this_00[1].monitor;
    UVar35 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Camera_o *)0x0) goto LAB_04160ba7;
    UnityEngine_Camera__ScreenPointToRay
              ((UnityEngine_Ray_o *)auStack_e8,pUVar11,UVar35,(MethodInfo *)0x0);
    fVar30 = fStack_d4;
    fVar29 = fStack_d8;
    fVar28 = fStack_dc;
    fVar27 = fStack_e0;
    uVar15 = auStack_e8._4_4_;
    uVar14 = auStack_e8._0_4_;
    uVar1 = (__this->fields)._previousMousePoint.fields.x;
    uVar4 = (__this->fields)._previousMousePoint.fields.y;
    fVar31 = (float)uVar1 - (float)auStack_e8._0_4_;
    fVar32 = (float)uVar4 - (float)auStack_e8._4_4_;
    fVar5 = (__this->fields)._previousMousePoint.fields.z - fStack_e0;
    if (DAT_0570266a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_0570266a = '\x01';
    }
    fVar26 = fVar30 * fVar30 + fVar29 * fVar29 + fVar28 * fVar28;
    fVar33 = fVar5 * fVar5 + fVar32 * fVar32 + fVar31 * fVar31;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      auStack_b8._0_4_ = fVar26;
      il2cpp_init_class();
      fVar26 = (float)auStack_b8._0_4_ * fVar33;
      if (fVar26 < 0.0) goto LAB_0415fbea;
LAB_0415fa8b:
      fVar26 = SQRT(fVar26);
      pMVar22 = TypeInfo_Math;
    }
    else {
      fVar26 = fVar26 * fVar33;
      if (0.0 <= fVar26) goto LAB_0415fa8b;
LAB_0415fbea:
      fVar26 = sqrtf(fVar26);
      pMVar22 = TypeInfo_Math;
    }
    fVar34 = 0.0;
    TypeInfo_Math = pMVar22;
    if (1e-15 <= fVar26) {
      fVar26 = (fVar5 * fVar30 + fVar32 * fVar29 + fVar31 * fVar28) / fVar26;
      fVar5 = 1.0;
      if (fVar26 <= 1.0) {
        fVar5 = fVar26;
      }
      if (*(int *)((long)&pMVar22[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      dVar13 = acos((double)(float)(~-(uint)(-1.0 <= fVar26) & 0xbf800000 |
                                   (uint)fVar5 & -(uint)(-1.0 <= fVar26)),pMVar22);
      fVar34 = (float)dVar13 * 57.29578;
    }
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      iVar7 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
    }
    else {
      iVar7 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
    }
    if (iVar7 == 0) {
      il2cpp_init_class();
    }
    if (fVar33 < 0.0) {
      fVar33 = sqrtf(fVar33);
    }
    else {
      fVar33 = SQRT(fVar33);
    }
    fVar5 = cosf(fVar34 * 0.017453292);
    fVar33 = fVar33 / fVar5;
    fVar27 = fVar27 + fVar30 * fVar33;
    uVar2 = (__this->fields)._previousMousePoint.fields.x;
    fVar5 = (__this->fields)._previousMousePoint.fields.y;
    fVar30 = (__this->fields)._previousMousePoint.fields.z;
    pUVar21 = (__this->fields)._lineX;
    pUVar20 = (__this->fields)._activeLine;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar28 = (float)uVar14 + fVar28 * fVar33;
    fVar29 = (float)uVar15 + fVar29 * fVar33;
    bVar16 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)pUVar21,
                        (MethodInfo *)0x0);
    if ((char)bVar16 == '\0') {
      pUVar21 = (__this->fields)._lineY;
      pUVar20 = (__this->fields)._activeLine;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar16 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)pUVar21,
                          (MethodInfo *)0x0);
      if ((char)bVar16 == '\0') {
        pUVar21 = (__this->fields)._lineZ;
        pUVar20 = (__this->fields)._activeLine;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar16 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)pUVar21,
                            (MethodInfo *)0x0);
        if ((char)bVar16 == '\0') {
          if (DAT_056fe077 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fe077 = '\x01';
          }
          puVar18 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          pfVar17 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        }
        else {
          if (DAT_056fde21 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fde21 = '\x01';
          }
          puVar18 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
          pfVar17 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
        }
      }
      else {
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
        }
        puVar18 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        pfVar17 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      }
    }
    else {
      if (DAT_0570222a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_0570222a = '\x01';
      }
      puVar18 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
      pfVar17 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
    }
    uVar36 = *puVar18;
    fVar31 = *pfVar17;
    pUVar21 = (__this->fields)._center;
    pUVar20 = (__this->fields)._activeLine;
    fVar32 = fVar29;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      auStack_b8._4_4_ = fVar5;
      auStack_b8._0_4_ = fVar5;
      auStack_b8._8_8_ = 0;
      il2cpp_init_class();
      fVar5 = (float)auStack_b8._0_4_;
    }
    fVar32 = fVar32 - fVar5;
    bVar16 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)pUVar21,
                        (MethodInfo *)0x0);
    if ((char)bVar16 == '\0') {
      pUVar21 = *(UnityEngine_Transform_o **)__this_09;
    }
    else {
      pUVar21 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    }
    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto LAB_04160ba7;
    pMVar22 = (MethodInfo *)0x0;
    UVar35 = UnityEngine_Transform__get_right(pUVar21,(MethodInfo *)0x0);
    fVar30 = (fVar27 - fVar30) * UVar35.fields.z +
             fVar32 * UVar35.fields.y + (fVar28 - (float)uVar2) * UVar35.fields.x;
    pGVar12 = (__this->fields)._gameManager;
    if (pGVar12 == (GameManagers_MapEditorGameManager_o *)0x0) goto LAB_04160ba7;
    fStack_118 = (float)uVar36;
    fStack_114 = (float)((ulong)uVar36 >> 0x20);
    uStack_148._0_4_ = fVar30 * fStack_118 * 0.1;
    uStack_148._4_4_ = fVar30 * fStack_114 * 0.1;
    fVar30 = fVar31 * fVar30 * 0.1;
    if ((char)(pGVar12->fields).Snap != '\0') {
      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
      if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x60), lVar9 == 0)) goto LAB_04160ba7;
      fVar5 = *(float *)(lVar9 + 0x14);
      uVar3 = (__this->fields)._currentScaleAmount.fields.x;
      uVar6 = (__this->fields)._currentScaleAmount.fields.y;
      fVar32 = (__this->fields)._currentScaleAmount.fields.z;
      (__this->fields)._currentScaleAmount.fields.x = (float)uStack_148 + (float)uVar3;
      (__this->fields)._currentScaleAmount.fields.y = uStack_148._4_4_ + (float)uVar6;
      (__this->fields)._currentScaleAmount.fields.z = fVar30 + fVar32;
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      puVar18 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uStack_148 = *puVar18;
      fVar30 = *(float *)(puVar18 + 1);
      if (DAT_0570222a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_0570222a = '\x01';
        puVar18 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      fVar26 = fStack_114 - (float)((ulong)*(undefined8 *)((long)puVar18 + 0x3c) >> 0x20);
      fVar32 = fVar31 - *(float *)((long)puVar18 + 0x44);
      fVar33 = fStack_118 - (float)*(undefined8 *)((long)puVar18 + 0x3c);
      if ((fVar33 * fVar33 + fVar26 * fVar26 + fVar32 * fVar32 < 9.9999994e-11) &&
         (fVar32 = (__this->fields)._currentScaleAmount.fields.x, fVar5 < ABS(fVar32))) {
        fVar32 = fVar32 / fVar5;
        auStack_b8 = ZEXT416((uint)fVar32);
        pMVar23 = (MethodInfo *)auStack_e8;
        dVar13 = modf((double)fVar32,(double *)pMVar23,pMVar22);
        if (0.0 <= (float)auStack_b8._0_4_) {
          if ((dVar13 != 0.5) || (NAN(dVar13))) {
            fVar32 = floorf((float)auStack_b8._0_4_ + 0.5);
          }
          else {
            fVar32 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
            if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
              fVar32 = fVar32 + 1.0;
            }
          }
        }
        else if ((dVar13 != -0.5) || (NAN(dVar13))) {
          fVar32 = ceilf((float)auStack_b8._0_4_ + -0.5);
        }
        else {
          fVar32 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
          if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
            fVar32 = fVar32 + -1.0;
          }
        }
        uStack_148._4_4_ = (float)((ulong)uStack_148 >> 0x20);
        uStack_148 = CONCAT44(uStack_148._4_4_,fVar32 * fVar5);
        fVar32 = fmodf((__this->fields)._currentScaleAmount.fields.x,fVar5,pMVar23);
        (__this->fields)._currentScaleAmount.fields.x = fVar32;
      }
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
      }
      uVar36 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar26 = fStack_114 - (float)((ulong)uVar36 >> 0x20);
      fVar32 = fVar31 - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar33 = fStack_118 - (float)uVar36;
      if ((fVar33 * fVar33 + fVar26 * fVar26 + fVar32 * fVar32 < 9.9999994e-11) &&
         (fVar32 = (__this->fields)._currentScaleAmount.fields.y, fVar5 < ABS(fVar32))) {
        fVar32 = fVar32 / fVar5;
        auStack_b8 = ZEXT416((uint)fVar32);
        pMVar23 = (MethodInfo *)auStack_e8;
        dVar13 = modf((double)fVar32,(double *)pMVar23,pMVar22);
        if (0.0 <= (float)auStack_b8._0_4_) {
          if ((dVar13 != 0.5) || (NAN(dVar13))) {
            fVar32 = floorf((float)auStack_b8._0_4_ + 0.5);
          }
          else {
            fVar32 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
            if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
              fVar32 = fVar32 + 1.0;
            }
          }
        }
        else if ((dVar13 != -0.5) || (NAN(dVar13))) {
          fVar32 = ceilf((float)auStack_b8._0_4_ + -0.5);
        }
        else {
          fVar32 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
          if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
            fVar32 = fVar32 + -1.0;
          }
        }
        uStack_148 = CONCAT44(fVar32 * fVar5,(float)uStack_148);
        fVar32 = fmodf((__this->fields)._currentScaleAmount.fields.y,fVar5,pMVar23);
        (__this->fields)._currentScaleAmount.fields.y = fVar32;
      }
      if (DAT_056fde21 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde21 = '\x01';
      }
      uVar36 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
      fVar26 = fStack_114 - (float)((ulong)uVar36 >> 0x20);
      fVar32 = fVar31 - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
      fVar33 = fStack_118 - (float)uVar36;
      if ((fVar33 * fVar33 + fVar26 * fVar26 + fVar32 * fVar32 < 9.9999994e-11) &&
         (fVar32 = (__this->fields)._currentScaleAmount.fields.z, fVar5 < ABS(fVar32))) {
        fVar32 = fVar32 / fVar5;
        pMVar23 = (MethodInfo *)auStack_e8;
        dVar13 = modf((double)fVar32,(double *)pMVar23,pMVar22);
        if (0.0 <= fVar32) {
          if ((dVar13 != 0.5) || (NAN(dVar13))) {
            fVar30 = floorf(fVar32 + 0.5);
          }
          else {
            fVar30 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
            if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
              fVar30 = fVar30 + 1.0;
            }
          }
        }
        else if ((dVar13 != -0.5) || (NAN(dVar13))) {
          fVar30 = ceilf(fVar32 + -0.5);
        }
        else {
          fVar30 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
          if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
            fVar30 = fVar30 + -1.0;
          }
        }
        fVar30 = fVar30 * fVar5;
        fVar32 = fmodf((__this->fields)._currentScaleAmount.fields.z,fVar5,pMVar23);
        (__this->fields)._currentScaleAmount.fields.z = fVar32;
      }
      if (DAT_056fe077 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fe077 = '\x01';
      }
      uVar36 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
      fStack_114 = fStack_114 - (float)((ulong)uVar36 >> 0x20);
      fVar31 = fVar31 - *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
      fStack_118 = fStack_118 - (float)uVar36;
      if ((fStack_118 * fStack_118 + fStack_114 * fStack_114 + fVar31 * fVar31 < 9.9999994e-11) &&
         (fVar31 = (__this->fields)._currentScaleAmount.fields.x, fVar5 < ABS(fVar31))) {
        fVar31 = fVar31 / fVar5;
        dVar13 = modf((double)fVar31,(double *)auStack_e8,pMVar22);
        if (0.0 <= fVar31) {
          if ((dVar13 != 0.5) || (NAN(dVar13))) {
            uStack_148._0_4_ = floorf(fVar31 + 0.5);
          }
          else {
            uStack_148._0_4_ = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
            if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
              uStack_148._0_4_ = (float)uStack_148 + 1.0;
            }
          }
        }
        else if ((dVar13 != -0.5) || (NAN(dVar13))) {
          uStack_148._0_4_ = ceilf(fVar31 + -0.5);
        }
        else {
          uStack_148._0_4_ = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
          if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
            uStack_148._0_4_ = (float)uStack_148 + -1.0;
          }
        }
        uStack_148._0_4_ = (float)uStack_148 * fVar5;
        fVar30 = (__this->fields)._currentScaleAmount.fields.x / fVar5;
        dVar13 = modf((double)fVar30,(double *)auStack_e8,pMVar22);
        if (0.0 <= fVar30) {
          if ((dVar13 != 0.5) || (NAN(dVar13))) {
            uStack_148._4_4_ = floorf(fVar30 + 0.5);
          }
          else {
            uStack_148._4_4_ = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
            if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
              uStack_148._4_4_ = uStack_148._4_4_ + 1.0;
            }
          }
        }
        else if ((dVar13 != -0.5) || (NAN(dVar13))) {
          uStack_148._4_4_ = ceilf(fVar30 + -0.5);
        }
        else {
          uStack_148._4_4_ = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
          if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
            uStack_148._4_4_ = uStack_148._4_4_ + -1.0;
          }
        }
        uStack_148._4_4_ = uStack_148._4_4_ * fVar5;
        fVar30 = (__this->fields)._currentScaleAmount.fields.x / fVar5;
        pMVar23 = (MethodInfo *)auStack_e8;
        dVar13 = modf((double)fVar30,(double *)pMVar23,pMVar22);
        if (0.0 <= fVar30) {
          if ((dVar13 != 0.5) || (NAN(dVar13))) {
            fVar30 = floorf(fVar30 + 0.5);
          }
          else {
            fVar30 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
            if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
              fVar30 = fVar30 + 1.0;
            }
          }
        }
        else if ((dVar13 != -0.5) || (NAN(dVar13))) {
          fVar30 = ceilf(fVar30 + -0.5);
        }
        else {
          fVar30 = (float)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_);
          if (((long)(double)CONCAT44(auStack_e8._4_4_,auStack_e8._0_4_) & 1U) != 0) {
            fVar30 = fVar30 + -1.0;
          }
        }
        fVar30 = fVar30 * fVar5;
        fVar5 = fmodf((__this->fields)._currentScaleAmount.fields.x,fVar5,pMVar23);
        (__this->fields)._currentScaleAmount.fields.x = fVar5;
      }
    }
    UVar35.fields.y = uStack_148._4_4_;
    UVar35.fields.x = (float)uStack_148;
    UVar35.fields.z = fVar30;
    MapEditor_ScaleGizmo__ScaleSelectedObjects(__this,UVar35,pMVar22);
    MapEditor_ScaleGizmo__ResetCenter(__this,pMVar22);
    (__this->fields)._previousMousePoint.fields.x = fVar28;
    (__this->fields)._previousMousePoint.fields.y = fVar29;
    (__this->fields)._previousMousePoint.fields.z = fVar27;
    pGVar12 = (__this->fields)._gameManager;
  }
  if (pGVar12 != (GameManagers_MapEditorGameManager_o *)0x0) {
    *(undefined1 *)&(pGVar12->fields).IgnoreNextSelect = 1;
    return;
  }
LAB_04160ba7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.ScaleGizmo$$ScaleSelectedObjects
// il2cpp: void MapEditor_ScaleGizmo__ScaleSelectedObjects (MapEditor_ScaleGizmo_o* __this, UnityEngine_Vector3_o frameDelta, const MethodInfo* method);
// 0x4160ca0

void MapEditor_ScaleGizmo__ScaleSelectedObjects
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_Vector3_o frameDelta,MethodInfo *method)

{
  undefined8 uVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar3;
  UnityEngine_Transform_o *__this_03;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  undefined8 in_stack_ffffffffffffff78;
  float in_stack_ffffffffffffff80;
  float fVar7;
  _union_329995 _Var8;
  float local_58;
  float fStack_54;
  _union_329995 local_38 [2];
  long local_28;
  
  fVar4 = frameDelta.fields.z;
  if (DAT_05704a43 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704a43 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if ((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
     __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<object>__GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_38,__this_00,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
  _Var8 = local_38[0];
  while( true ) {
    __this_01.fields._index = (int32_t)in_stack_ffffffffffffff80;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78;
    __this_01.fields._version = (int32_t)fVar4;
    __this_01.fields._current = _Var8.genericMethod;
    bVar3 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff88);
    if ((char)bVar3 == '\0') {
      __this_02.fields._index = (int32_t)in_stack_ffffffffffffff80;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff78;
      __this_02.fields._version = (int32_t)fVar4;
      __this_02.fields._current = _Var8.genericMethod;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff88);
      return;
    }
    if (local_28 == 0) break;
    uVar1 = *(undefined8 *)(local_28 + 0x28);
    fVar7 = *(float *)(local_28 + 0x30);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar5.fields.z = fVar7;
    UVar5.fields._0_8_ = uVar1;
    UVar6.fields.z = fVar4;
    UVar6.fields.x = (float)(int)frameDelta.fields._0_8_;
    UVar6.fields.y = (float)(int)((ulong)frameDelta.fields._0_8_ >> 0x20);
    UVar5 = Utility_Util__MultiplyVectors(UVar5,UVar6,(MethodInfo *)0x0);
    in_stack_ffffffffffffff80 = UVar5.fields.z;
    if (*(UnityEngine_GameObject_o **)(local_28 + 0x18) == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_03 = UnityEngine_GameObject__get_transform
                          (*(UnityEngine_GameObject_o **)(local_28 + 0x18),(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar6 = UnityEngine_Transform__get_localScale(__this_03,(MethodInfo *)0x0);
    local_58 = UVar5.fields.x;
    fStack_54 = UVar5.fields.y;
    value.fields.y = fStack_54 + UVar6.fields.y;
    value.fields.x = local_58 + UVar6.fields.x;
    value.fields.z = in_stack_ffffffffffffff80 + UVar6.fields.z;
    UnityEngine_Transform__set_localScale(__this_03,value,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.ScaleGizmo$$ResetCenter
// il2cpp: void MapEditor_ScaleGizmo__ResetCenter (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x415f0f0

void MapEditor_ScaleGizmo__ResetCenter(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_MapObject__o *pSVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  undefined1 auVar3 [16];
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *__this_03;
  float fVar6;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined1 auVar7 [16];
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Quaternion_o value;
  undefined1 in_stack_ffffffffffffff88 [12];
  float fVar9;
  System_Collections_Generic_HashSet_T__o *pSVar10;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  System_Collections_Generic_HashSet_Enumerator_T__o local_38;
  
  if (DAT_05704a44 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05704a44 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar1->fields).SelectedObjects,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet<object>__GetEnumerator(&local_38,__this_00,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    fVar9 = 0.0;
    local_48 = 0.0;
    fStack_44 = 0.0;
    fStack_40 = 0.0;
    fStack_3c = 0.0;
    pSVar10 = local_38.fields._set;
    while( true ) {
      __this_01.fields._version = (int32_t)fVar9;
      __this_01.fields._set =
           (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_01.fields._current = (Il2CppObject *)pSVar10;
      bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
      if ((char)bVar4 == '\0') break;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(void **)((long)local_38.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar5 = UnityEngine_GameObject__get_transform
                         (*(void **)((long)local_38.fields._current + 0x18),(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar8 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      local_48 = local_48 + UVar8.fields.x;
      fStack_44 = fStack_44 + UVar8.fields.y;
      fStack_40 = fStack_40 + extraout_XMM0_Dc;
      fStack_3c = fStack_3c + extraout_XMM0_Dd;
      fVar9 = fVar9 + UVar8.fields.z;
      if (*(void **)((long)local_38.fields._current + 0x18) == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar5 = (__this->fields)._transform;
      __this_03 = UnityEngine_GameObject__get_transform
                            (*(void **)((long)local_38.fields._current + 0x18),(MethodInfo *)0x0);
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
    __this_02.fields._version = (int32_t)fVar9;
    __this_02.fields._set =
         (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    pGVar1 = (__this->fields)._gameManager;
    if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
        (pSVar2 = (pGVar1->fields).SelectedObjects,
        pSVar2 != (System_Collections_Generic_HashSet_MapObject__o *)0x0)) &&
       (pUVar5 = (__this->fields)._transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      fVar6 = (float)(pSVar2->fields)._count;
      UVar8.fields.z = fVar9 / fVar6;
      auVar3._4_4_ = fStack_44;
      auVar3._0_4_ = local_48;
      auVar3._8_4_ = fStack_40;
      auVar3._12_4_ = fStack_3c;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.ScaleGizmo$$ResetColors
// il2cpp: void MapEditor_ScaleGizmo__ResetColors (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x415ef20

void MapEditor_ScaleGizmo__ResetColors(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  MapEditor_ScaleGizmo_o *__this_00;
  
  __this_00 = __this;
  MapEditor_ScaleGizmo__SetLineColor
            (__this,(__this->fields)._lineX,(UnityEngine_Color_o)(__this->fields).LineXColor.fields,
             0xc27,in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (__this_00,(__this->fields)._lineY,
             (UnityEngine_Color_o)(__this->fields).LineYColor.fields,0xc27,in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (__this_00,(__this->fields)._lineZ,
             (UnityEngine_Color_o)(__this->fields).LineZColor.fields,0xc27,in_RCX);
  MapEditor_ScaleGizmo__SetLineColor
            (__this_00,(__this->fields)._center,
             (UnityEngine_Color_o)(__this->fields).CenterColor.fields,4000,in_RCX);
  return;
}


// MapEditor.ScaleGizmo$$SetLineColor
// il2cpp: void MapEditor_ScaleGizmo__SetLineColor (MapEditor_ScaleGizmo_o* __this, UnityEngine_Transform_o* line, UnityEngine_Color_o color, int32_t renderQueue, const MethodInfo* method);
// 0x4160bc0

void MapEditor_ScaleGizmo__SetLineColor
               (MapEditor_ScaleGizmo_o *__this,UnityEngine_Transform_o *line,
               UnityEngine_Color_o color,int32_t renderQueue,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_Material_o *pUVar3;
  uint uVar4;
  
  if (DAT_05704a45 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    DAT_05704a45 = '\x01';
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
          if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto LAB_04160c95;
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_04160c95;
          UnityEngine_Material__set_color(pUVar3,color,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_Material_o *)0x0) goto LAB_04160c95;
          UnityEngine_Material__set_renderQueue(pUVar3,renderQueue,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar4 < (int)uVar1);
      }
      return;
    }
  }
LAB_04160c95:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.ScaleGizmo$$.ctor
// il2cpp: void MapEditor_ScaleGizmo___ctor (MapEditor_ScaleGizmo_o* __this, const MethodInfo* method);
// 0x4160f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MapEditor_ScaleGizmo___ctor(MapEditor_ScaleGizmo_o *__this,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_00ccd980;
  UVar1.b = (float)(int)DAT_00ccd980;
  UVar1.r = (float)(int)uVar2;
  UVar1.g = (float)(int)((ulong)uVar2 >> 0x20);
  UVar1.a = DAT_00ccd980._4_4_;
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
// 0x4160f80

bool_conflict
MapEditor_ScaleGizmo__<Update>b__17_0
          (MapEditor_ScaleGizmo_o *__this,UnityEngine_RaycastHit_o hit,MethodInfo *method)

{
  UnityEngine_Transform_o *y;
  UnityEngine_RaycastHit_o __this_00;
  bool_conflict bVar1;
  UnityEngine_Collider_o *__this_01;
  UnityEngine_Transform_o *x;
  undefined8 unaff_RBX;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  
  unique0x100000e6 = hit.fields;
  __this_00.fields._24_8_ = unaff_retaddr;
  if (DAT_05704a46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a46 = '\x01';
  }
  __this_00.fields.m_Point.fields.z = (float)(int)unaff_R14;
  __this_00.fields.m_Normal.fields.x = (float)(int)((ulong)unaff_R14 >> 0x20);
  __this_00.fields.m_Point.fields.x = (float)(int)unaff_RBX;
  __this_00.fields.m_Point.fields.y = (float)(int)((ulong)unaff_RBX >> 0x20);
  __this_00.fields.m_Normal.fields.y = (float)(int)unaff_R15;
  __this_00.fields.m_Normal.fields.z = (float)(int)((ulong)unaff_R15 >> 0x20);
  __this_01 = UnityEngine_RaycastHit__get_collider(__this_00,(MethodInfo *)&hit);
  if (__this_01 != (UnityEngine_Collider_o *)0x0) {
    x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
    ;
    y = (__this->fields)._center;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


