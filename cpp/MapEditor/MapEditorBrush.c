// Type: MapEditor.MapEditorBrush
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/MapEditorBrush.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.MapEditorBrush$$SetActive
// il2cpp: void MapEditor_MapEditorBrush__SetActive (MapEditor_MapEditorBrush_o* __this, bool active, const MethodInfo* method);
// 0x43333c0

void MapEditor_MapEditorBrush__SetActive
               (MapEditor_MapEditorBrush_o *__this,bool_conflict active,MethodInfo *method)

{
  uint in_register_00000034;
  
  *(char *)&(__this->fields).Active = (char)active;
  *(undefined1 *)((long)&(__this->fields).Active + 1) = 0;
  if (active != 0) {
    MapEditor_MapEditorBrush__EnsureCircle(__this,(MethodInfo *)CONCAT44(in_register_00000034,active));
    MapEditor_MapEditorBrush__RegenerateGhosts(__this,(MethodInfo *)CONCAT44(in_register_00000034,active));
    return;
  }
  MapEditor_MapEditorBrush__ClearGhosts(__this,(MethodInfo *)((ulong)in_register_00000034 << 0x20));
  MapEditor_MapEditorBrush__DestroyCircle(__this,(MethodInfo *)CONCAT44(in_register_00000034,active));
  *(undefined1 *)&(__this->fields)._hasCenter = 0;
  return;
}


// MapEditor.MapEditorBrush$$AddEntry
// il2cpp: void MapEditor_MapEditorBrush__AddEntry (MapEditor_MapEditorBrush_o* __this, System_String_o* asset, const MethodInfo* method);
// 0x4334ae0

void MapEditor_MapEditorBrush__AddEntry
               (MapEditor_MapEditorBrush_o *__this,System_String_o *asset,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_BrushEntry__o *pSVar3;
  MapEditor_BrushEntry_array *pMVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar6;
  MapEditor_BrushEntry_o *__this_06;
  long *plVar7;
  MethodInfo *method_00;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_T__o *pSVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (g_data_057ae08c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BrushEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BrushEntry_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&"Custom/");
    g_data_057ae08c = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_00,(Il2CppObject *)asset,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
      if (asset == (System_String_o *)0x0) goto label_04334d3c;
      bVar6 = System_String__StartsWith(asset,"Custom/",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
    }
    pSVar3 = (__this->fields).Entries;
    if (pSVar3 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
      pSVar9 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
      pIVar11 = local_30;
      while( true ) {
        __this_01.fields._8_8_ = pSVar10;
        __this_01.fields._list = pSVar9;
        __this_01.fields._current = (Il2CppObject *)pIVar11;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
        if ((char)bVar6 == '\0') {
          __this_03.fields._8_8_ = pSVar10;
          __this_03.fields._list = pSVar9;
          __this_03.fields._current = (Il2CppObject *)pIVar11;
          method_00 = MethodInfo_Void_Dispose;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
          goto label_04334c88;
        }
        if (pIVar11 == (Il2CppType *)0x0) break;
        bVar6 = System_String__op_Equality((System_String_o *)pIVar11[1].data,asset,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          __this_02.fields._8_8_ = pSVar10;
          __this_02.fields._list = pSVar9;
          __this_02.fields._current = (Il2CppObject *)pIVar11;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_04334d3c:
  do {
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
label_04334d90:
      __this_05.fields._8_8_ = pSVar10;
      __this_05.fields._list = pSVar9;
      __this_05.fields._current = (Il2CppObject *)pIVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar8._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pSVar10;
    __this_04.fields._list = pSVar9;
    __this_04.fields._current = (Il2CppObject *)pIVar11;
    method_00 = MethodInfo_Void_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      goto label_04334d90;
    }
label_04334c88:
    pSVar3 = (__this->fields).Entries;
    __this_06 = (MapEditor_BrushEntry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BrushEntry);
    MapEditor_BrushEntry___ctor(__this_06,method_00);
    if (__this_06 != (MapEditor_BrushEntry_o *)0x0) {
      (__this_06->fields).AssetName = asset;
      il2cpp_runtime_helper_022b4080(&__this_06->fields,asset);
      lVar5 = MethodInfo_Void_Add;
      if (pSVar3 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar4 = (pSVar3->fields)._items;
        if (pMVar4 != (MapEditor_BrushEntry_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pMVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pMVar4->m_Items[(int)uVar2] = __this_06;
            il2cpp_runtime_helper_022b4080(pMVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_06,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          MapEditor_MapEditorBrush__RegenerateGhosts(__this,(MethodInfo *)__this_06);
          return;
        }
      }
    }
  } while( true );
}


// MapEditor.MapEditorBrush$$RemoveEntry
// il2cpp: void MapEditor_MapEditorBrush__RemoveEntry (MapEditor_MapEditorBrush_o* __this, int32_t index, const MethodInfo* method);
// 0x4334dd0

void MapEditor_MapEditorBrush__RemoveEntry
               (MapEditor_MapEditorBrush_o *__this,int32_t index,MethodInfo *method)

{
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MapEditor_MapEditorBrush_o *__this_00;
  float fVar1;
  float fVar2;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  method_01 = (MethodInfo *)(ulong)(uint)index;
  if (g_data_057ae08d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057ae08d = '\x01';
  }
  if (-1 < index) {
    __this_00 = (MapEditor_MapEditorBrush_o *)(__this->fields).Entries;
    if (__this_00 == (MapEditor_MapEditorBrush_o *)0x0) {
      fVar1 = (float)il2cpp_runtime_helper_022b2c90();
      fVar2 = 500.0;
      if (fVar1 <= 500.0) {
        fVar2 = fVar1;
      }
      (__this_00->fields).Mode = ~-(uint)(0.5 <= fVar1) & 0x3f000000 | (uint)fVar2 & -(uint)(0.5 <= fVar1);
      MapEditor_MapEditorBrush__UpdateCircle(__this_00,method_00);
      MapEditor_MapEditorBrush__PositionGhosts(__this_00,method_00);
      return;
    }
    if (index < (__this_00->fields).Mode) {
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_Void_RemoveAt);
      MapEditor_MapEditorBrush__RegenerateGhosts(__this,method_01);
      return;
    }
  }
  return;
}


// MapEditor.MapEditorBrush$$SetRadius
// il2cpp: void MapEditor_MapEditorBrush__SetRadius (MapEditor_MapEditorBrush_o* __this, float radius, const MethodInfo* method);
// 0x4334e40

void MapEditor_MapEditorBrush__SetRadius(MapEditor_MapEditorBrush_o *__this,float radius,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 500.0;
  if (radius <= 500.0) {
    fVar1 = radius;
  }
  (__this->fields).Mode = ~-(uint)(0.5 <= radius) & 0x3f000000 | (uint)fVar1 & -(uint)(0.5 <= radius);
  MapEditor_MapEditorBrush__UpdateCircle(__this,method);
  MapEditor_MapEditorBrush__PositionGhosts(__this,method);
  return;
}


// MapEditor.MapEditorBrush$$SetCount
// il2cpp: void MapEditor_MapEditorBrush__SetCount (MapEditor_MapEditorBrush_o* __this, int32_t count, const MethodInfo* method);
// 0x4335b00

void MapEditor_MapEditorBrush__SetCount(MapEditor_MapEditorBrush_o *__this,int32_t count,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 in_register_00000034;
  
  fVar1 = 2.8026e-43;
  if (count < 0xc9) {
    fVar1 = (float)count;
  }
  fVar2 = 1.4013e-45;
  if (0 < (int)fVar1) {
    fVar2 = fVar1;
  }
  (__this->fields).Radius = fVar2;
  MapEditor_MapEditorBrush__RegenerateGhosts(__this,(MethodInfo *)CONCAT44(in_register_00000034,count));
  return;
}


// MapEditor.MapEditorBrush$$Reseed
// il2cpp: void MapEditor_MapEditorBrush__Reseed (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4335b20

void MapEditor_MapEditorBrush__Reseed(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = UnityEngine_Random__Range_4df2410(-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._seed = iVar1;
  return;
}


// MapEditor.MapEditorBrush$$SetCenter
// il2cpp: void MapEditor_MapEditorBrush__SetCenter (MapEditor_MapEditorBrush_o* __this, UnityEngine_Vector3_o center, const MethodInfo* method);
// 0x4335b40

void MapEditor_MapEditorBrush__SetCenter
               (MapEditor_MapEditorBrush_o *__this,UnityEngine_Vector3_o center,MethodInfo *method)

{
  (__this->fields)._center.fields.x = (float)(int)center.fields._0_8_;
  (__this->fields)._center.fields.y = (float)(int)((ulong)center.fields._0_8_ >> 0x20);
  (__this->fields)._center.fields.z = center.fields.z;
  *(undefined1 *)&(__this->fields)._hasCenter = 1;
  MapEditor_MapEditorBrush__UpdateCircle(__this,method);
  MapEditor_MapEditorBrush__PositionGhosts(__this,method);
  return;
}


// MapEditor.MapEditorBrush$$ClearCenter
// il2cpp: void MapEditor_MapEditorBrush__ClearCenter (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4335b70

void MapEditor_MapEditorBrush__ClearCenter(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_Mesh_o *__this_01;
  System_Collections_Generic_List_GameObject__o *__this_02;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Object_o *pUVar8;
  
  if (g_data_057ae08e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae08e = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pUVar7 = (UnityEngine_Object_o *)0x0;
  *(undefined1 *)&(__this->fields)._hasCenter = 0;
  pUVar8 = (UnityEngine_Object_o *)(__this->fields)._circleRenderer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this_00 = (__this->fields)._circleRenderer;
    if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) goto label_04335cfc;
    UnityEngine_LineRenderer__set_positionCount(__this_00,0,(MethodInfo *)0x0);
  }
  pUVar8 = (UnityEngine_Object_o *)(__this->fields)._diskMesh;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this_01 = (__this->fields)._diskMesh;
    if (__this_01 == (UnityEngine_Mesh_o *)0x0) goto label_04335cfc;
    UnityEngine_Mesh__Clear(__this_01,(MethodInfo *)0x0);
  }
  __this_02 = (__this->fields)._ghostObjects;
  if (__this_02 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    while( true ) {
      do {
        pUVar8 = pUVar7;
        __this_03.fields._8_8_ = pIVar6;
        __this_03.fields._list = pSVar5;
        __this_03.fields._current = (Il2CppObject *)pUVar8;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') {
          __this_04.fields._8_8_ = pIVar6;
          __this_04.fields._list = pSVar5;
          __this_04.fields._current = (Il2CppObject *)pUVar8;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
          return;
        }
        pUVar7 = pUVar8;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while ((char)bVar2 == '\0');
      if (pUVar8 == (UnityEngine_Object_o *)0x0) break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar8,0,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
label_04335cfc:
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar6;
    __this_05.fields._list = pSVar5;
    __this_05.fields._current = (Il2CppObject *)pUVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_06.fields._8_8_ = pIVar6;
  __this_06.fields._list = pSVar5;
  __this_06.fields._current = (Il2CppObject *)pUVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


// MapEditor.MapEditorBrush$$EnsureCircle
// il2cpp: void MapEditor_MapEditorBrush__EnsureCircle (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x43337d0

void MapEditor_MapEditorBrush__EnsureCircle(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  int32_t Seed;
  int iVar1;
  UnityEngine_Object_o *x;
  UnityEngine_LineRenderer_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Mesh_o *__this_00;
  System_Collections_Generic_List_BrushEntry__o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_int__object__o *__this_02;
  UnityEngine_GameObject_array *pUVar5;
  System_Collections_Generic_List_string__o *__this_03;
  System_String_array *pSVar6;
  System_Collections_Generic_List_Vector3__o *pSVar7;
  UnityEngine_Vector3_array *pUVar8;
  UnityEngine_Vector3_Fields *pUVar9;
  System_Collections_Generic_List_GameObject__o *pSVar10;
  long lVar11;
  UnityEngine_Vector3_Fields item;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  undefined1 auVar12 [16];
  int32_t *piVar13;
  _union_249689 x_00;
  bool_conflict bVar14;
  int iVar15;
  MapEditor_MapEditorBrush_o *pMVar16;
  MapEditor_MapEditorBrush_o *pMVar17;
  UnityEngine_Renderer_o *__this_11;
  MapEditor_MapEditorBrush_o *__this_12;
  MapEditor_BrushEntry_o *entry;
  Map_MapScriptSceneObject_o *script;
  Map_MapObject_o *pMVar18;
  int iVar19;
  uint uVar20;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  uint uVar21;
  float fVar22;
  long *plVar23;
  uint uVar24;
  System_Collections_Generic_List_Enumerator_T__c *method_02;
  uint uVar25;
  MapEditor_MapEditorBrush_o *__this_13;
  MethodInfo *pMVar26;
  ulong uVar27;
  UnityEngine_LineRenderer_o *__this_14;
  UnityEngine_GameObject_o **ppUVar28;
  MapEditor_MapEditorBrush_o *unaff_R15;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  UnityEngine_Color_o UVar36;
  UnityEngine_Color_o value;
  undefined1 auVar37 [12];
  UnityEngine_Vector3_o item_00;
  UnityEngine_Vector3_o item_01;
  UnityEngine_Vector3_o item_02;
  float in_stack_fffffffffffffeb0;
  float fVar38;
  float in_stack_fffffffffffffeb4;
  float fVar39;
  float in_stack_fffffffffffffeb8;
  float in_stack_fffffffffffffebc;
  Il2CppObject *in_stack_fffffffffffffec0;
  float fStack_134;
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined1 auStack_d0 [56];
  Il2CppRGCTXData *pIStack_98;
  _union_249689 _Stack_90;
  undefined1 auStack_80 [16];
  Il2CppObject *pIStack_70;
  MapEditor_MapEditorBrush_o *pMStack_68;
  MapEditor_MapEditorBrush_o *pMStack_60;
  UnityEngine_LineRenderer_o *pUStack_58;
  UnityEngine_GameObject_o **ppUStack_50;
  MapEditor_MapEditorBrush_o *pMStack_48;
  System_String_o **ppSStack_40;
  
  if (g_data_057ae08f == '\0') {
    ppSStack_40 = (System_String_o **)0x43337f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LineRenderer_AddComponent_LineRenderer);
    ppSStack_40 = (System_String_o **)0x4333803;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_AddComponent_MeshFilter);
    ppSStack_40 = (System_String_o **)0x433380f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
    ppSStack_40 = (System_String_o **)0x433381b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    ppSStack_40 = (System_String_o **)0x4333827;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    ppSStack_40 = (System_String_o **)0x4333833;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
    ppSStack_40 = (System_String_o **)0x433383f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppSStack_40 = (System_String_o **)0x433384b;
    il2cpp_runtime_helper_023445d0(&"MapEditorBrushDisk");
    ppSStack_40 = (System_String_o **)0x4333857;
    il2cpp_runtime_helper_023445d0(&"_SrcBlend");
    ppSStack_40 = (System_String_o **)0x4333863;
    il2cpp_runtime_helper_023445d0(&"Unlit/Color");
    ppSStack_40 = (System_String_o **)0x433386f;
    il2cpp_runtime_helper_023445d0(&"BrushDisk");
    ppSStack_40 = (System_String_o **)0x433387b;
    il2cpp_runtime_helper_023445d0(&"MapEditorBrushCircle");
    ppSStack_40 = (System_String_o **)0x4333887;
    il2cpp_runtime_helper_023445d0(&"_DstBlend");
    ppSStack_40 = (System_String_o **)0x4333893;
    il2cpp_runtime_helper_023445d0(&"Sprites/Default");
    ppSStack_40 = (System_String_o **)0x433389f;
    il2cpp_runtime_helper_023445d0(&"_ZWrite");
    ppSStack_40 = (System_String_o **)0x43338ab;
    il2cpp_runtime_helper_023445d0(&"RenderType");
    ppSStack_40 = (System_String_o **)0x43338b7;
    il2cpp_runtime_helper_023445d0(&"Transparent");
    g_data_057ae08f = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._circleIndicator;
  plVar23 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    ppSStack_40 = (System_String_o **)0x43338dc;
    il2cpp_runtime_helper_02337ed0();
  }
  ppSStack_40 = (System_String_o **)0x43338e8;
  bVar14 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return;
  }
  ppUVar28 = &(__this->fields)._circleIndicator;
  ppSStack_40 = (System_String_o **)0x4333910;
  pMVar16 = (MapEditor_MapEditorBrush_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  ppSStack_40 = (System_String_o **)0x4333927;
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pMVar16,"MapEditorBrushCircle",(MethodInfo *)0x0);
  *ppUVar28 = (UnityEngine_GameObject_o *)pMVar16;
  ppSStack_40 = (System_String_o **)0x4333935;
  pMVar17 = pMVar16;
  il2cpp_runtime_helper_022b4080(ppUVar28);
  __this_13 = (MapEditor_MapEditorBrush_o *)0x0;
  __this_14 = (UnityEngine_LineRenderer_o *)&TypeInfo_GameObject;
  if (*ppUVar28 != (UnityEngine_GameObject_o *)0x0) {
    ppSStack_40 = (System_String_o **)0x4333950;
    pMVar17 = (MapEditor_MapEditorBrush_o *)
              UnityEngine_GameObject__AddComponent_object_(*ppUVar28,MethodInfo_LineRenderer_AddComponent_LineRenderer);
    ppUVar28 = (UnityEngine_GameObject_o **)&(__this->fields)._circleRenderer;
    (__this->fields)._circleRenderer = (UnityEngine_LineRenderer_o *)pMVar17;
    ppSStack_40 = (System_String_o **)0x4333965;
    il2cpp_runtime_helper_022b4080(ppUVar28);
    pUVar2 = (__this->fields)._circleRenderer;
    __this_13 = (MapEditor_MapEditorBrush_o *)0x0;
    if (pUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
      pMVar17 = (MapEditor_MapEditorBrush_o *)0x1;
      ppSStack_40 = (System_String_o **)0x433397f;
      UnityEngine_LineRenderer__set_loop(pUVar2,1,(MethodInfo *)0x0);
      __this_13 = (MapEditor_MapEditorBrush_o *)0x0;
      if ((UnityEngine_LineRenderer_o *)*ppUVar28 != (UnityEngine_LineRenderer_o *)0x0) {
        pMVar17 = (MapEditor_MapEditorBrush_o *)0x1;
        ppSStack_40 = (System_String_o **)0x4333997;
        UnityEngine_LineRenderer__set_useWorldSpace
                  ((UnityEngine_LineRenderer_o *)*ppUVar28,1,(MethodInfo *)0x0);
        __this_13 = (MapEditor_MapEditorBrush_o *)0x0;
        if ((UnityEngine_LineRenderer_o *)*ppUVar28 != (UnityEngine_LineRenderer_o *)0x0) {
          ppSStack_40 = (System_String_o **)0x43339b2;
          UnityEngine_LineRenderer__set_widthMultiplier
                    ((UnityEngine_LineRenderer_o *)*ppUVar28,0.2,(MethodInfo *)0x0);
          ppSStack_40 = (System_String_o **)0x43339c3;
          unaff_R15 = (MapEditor_MapEditorBrush_o *)UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            ppSStack_40 = (System_String_o **)0x43339d8;
            il2cpp_runtime_helper_02337ed0();
          }
          ppSStack_40 = (System_String_o **)0x43339e4;
          bVar14 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar14 != '\0') {
            ppSStack_40 = (System_String_o **)0x43339f9;
            unaff_R15 = (MapEditor_MapEditorBrush_o *)UnityEngine_Shader__Find("Unlit/Color",(MethodInfo *)0x0)
            ;
          }
          ppSStack_40 = (System_String_o **)0x4333a0b;
          pMVar16 = (MapEditor_MapEditorBrush_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
          ppSStack_40 = (System_String_o **)0x4333a1b;
          pMVar17 = unaff_R15;
          __this_13 = pMVar16;
          UnityEngine_Material___ctor
                    ((UnityEngine_Material_o *)pMVar16,(UnityEngine_Shader_o *)unaff_R15,(MethodInfo *)0x0);
          if (pMVar16 != (MapEditor_MapEditorBrush_o *)0x0) {
            plVar23 = &TypeInfo_GameObject;
            pMVar17 = (MapEditor_MapEditorBrush_o *)0x0;
            ppSStack_40 = (System_String_o **)0x4333a3f;
            UVar36.fields.b = 1.0;
            UVar36.fields.a = 0.9;
            UVar36.fields.r = 0.2;
            UVar36.fields.g = 0.8;
            UnityEngine_Material__set_color((UnityEngine_Material_o *)pMVar16,UVar36,(MethodInfo *)0x0);
            __this_13 = (MapEditor_MapEditorBrush_o *)0x0;
            if ((UnityEngine_Renderer_o *)*ppUVar28 != (UnityEngine_Renderer_o *)0x0) {
              ppSStack_40 = (System_String_o **)0x4333a55;
              UnityEngine_Renderer__set_material
                        ((UnityEngine_Renderer_o *)*ppUVar28,(UnityEngine_Material_o *)pMVar16,
                         (MethodInfo *)0x0);
              pUVar2 = (UnityEngine_LineRenderer_o *)*ppUVar28;
              pMVar17 = (MapEditor_MapEditorBrush_o *)0x0;
              ppSStack_40 = (System_String_o **)0x4333a62;
              __this_13 = pMVar16;
              UVar36 = UnityEngine_Material__get_color((UnityEngine_Material_o *)pMVar16,(MethodInfo *)0x0);
              __this_14 = (UnityEngine_LineRenderer_o *)0x0;
              if (pUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
                ppSStack_40 = (System_String_o **)0x4333a75;
                UnityEngine_LineRenderer__set_startColor(pUVar2,UVar36,(MethodInfo *)0x0);
                __this_14 = (UnityEngine_LineRenderer_o *)*ppUVar28;
                pMVar17 = (MapEditor_MapEditorBrush_o *)0x0;
                ppSStack_40 = (System_String_o **)0x4333a82;
                __this_13 = pMVar16;
                UVar36 = UnityEngine_Material__get_color((UnityEngine_Material_o *)pMVar16,(MethodInfo *)0x0);
                if (__this_14 != (UnityEngine_LineRenderer_o *)0x0) {
                  pMVar17 = (MapEditor_MapEditorBrush_o *)0x0;
                  ppSStack_40 = (System_String_o **)0x4333a95;
                  UnityEngine_LineRenderer__set_endColor(__this_14,UVar36,(MethodInfo *)0x0);
                  __this_13 = (MapEditor_MapEditorBrush_o *)0x0;
                  if ((UnityEngine_LineRenderer_o *)*ppUVar28 != (UnityEngine_LineRenderer_o *)0x0) {
                    ppSStack_40 = (System_String_o **)0x4333aaa;
                    UnityEngine_LineRenderer__set_positionCount
                              ((UnityEngine_LineRenderer_o *)*ppUVar28,0,(MethodInfo *)0x0);
                    ppSStack_40 = (System_String_o **)0x4333ab3;
                    pMVar16 = (MapEditor_MapEditorBrush_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                    ppSStack_40 = (System_String_o **)0x4333aca;
                    UnityEngine_GameObject___ctor
                              ((UnityEngine_GameObject_o *)pMVar16,"MapEditorBrushDisk",(MethodInfo *)0x0);
                    (__this->fields)._diskIndicator = (UnityEngine_GameObject_o *)pMVar16;
                    ppSStack_40 = (System_String_o **)0x4333adc;
                    pMVar17 = pMVar16;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._diskIndicator);
                    pUVar3 = (__this->fields)._diskIndicator;
                    __this_13 = (MapEditor_MapEditorBrush_o *)0x0;
                    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                      ppSStack_40 = (System_String_o **)0x4333af9;
                      pMVar17 = (MapEditor_MapEditorBrush_o *)
                                UnityEngine_GameObject__AddComponent_object_(pUVar3,MethodInfo_MeshFilter_AddComponent_MeshFilter);
                      ppUVar28 = (UnityEngine_GameObject_o **)&(__this->fields)._diskFilter;
                      (__this->fields)._diskFilter = (UnityEngine_MeshFilter_o *)pMVar17;
                      ppSStack_40 = (System_String_o **)0x4333b0e;
                      il2cpp_runtime_helper_022b4080(ppUVar28);
                      __this_13 = (MapEditor_MapEditorBrush_o *)(__this->fields)._diskIndicator;
                      if (__this_13 != (MapEditor_MapEditorBrush_o *)0x0) {
                        ppSStack_40 = (System_String_o **)0x4333b2b;
                        pMVar17 = MethodInfo_MeshRenderer_AddComponent_MeshRenderer;
                        __this_11 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__AddComponent_object_
                                              ((UnityEngine_GameObject_o *)__this_13,
                                               (MethodInfo_255A020 *)MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
                        if (__this_11 != (UnityEngine_Renderer_o *)0x0) {
                          ppSStack_40 = (System_String_o **)0x4333b43;
                          UnityEngine_Renderer__set_shadowCastingMode(__this_11,0,(MethodInfo *)0x0);
                          ppSStack_40 = (System_String_o **)0x4333b4f;
                          UnityEngine_Renderer__set_receiveShadows(__this_11,0,(MethodInfo *)0x0);
                          ppSStack_40 = (System_String_o **)0x4333b5e;
                          __this_12 = (MapEditor_MapEditorBrush_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                          ppSStack_40 = (System_String_o **)0x4333b6e;
                          pMVar17 = unaff_R15;
                          __this_13 = __this_12;
                          UnityEngine_Material___ctor
                                    ((UnityEngine_Material_o *)__this_12,(UnityEngine_Shader_o *)unaff_R15,
                                     (MethodInfo *)0x0);
                          pMVar16 = (MapEditor_MapEditorBrush_o *)0x0;
                          __this_14 = (UnityEngine_LineRenderer_o *)__this_11;
                          if (__this_12 != (MapEditor_MapEditorBrush_o *)0x0) {
                            ppSStack_40 = (System_String_o **)0x4333b8f;
                            value.fields.b = 1.0;
                            value.fields.a = 0.25;
                            value.fields.r = 0.2;
                            value.fields.g = 0.8;
                            UnityEngine_Material__set_color
                                      ((UnityEngine_Material_o *)__this_12,value,(MethodInfo *)0x0);
                            ppSStack_40 = (System_String_o **)0x4333bad;
                            UnityEngine_Material__SetOverrideTag
                                      ((UnityEngine_Material_o *)__this_12,"RenderType","Transparent",
                                       (MethodInfo *)0x0);
                            ppSStack_40 = (System_String_o **)0x4333bc2;
                            bVar14 = UnityEngine_Material__HasProperty_4dcb5b0
                                               ((UnityEngine_Material_o *)__this_12,"_SrcBlend",
                                                (MethodInfo *)0x0);
                            if ((char)bVar14 != '\0') {
                              ppSStack_40 = (System_String_o **)0x4333bd9;
                              UnityEngine_Material__SetInt
                                        ((UnityEngine_Material_o *)__this_12,"_SrcBlend",5,(MethodInfo *)0x0)
                              ;
                            }
                            ppSStack_40 = (System_String_o **)0x4333bee;
                            bVar14 = UnityEngine_Material__HasProperty_4dcb5b0
                                               ((UnityEngine_Material_o *)__this_12,"_DstBlend",
                                                (MethodInfo *)0x0);
                            if ((char)bVar14 != '\0') {
                              ppSStack_40 = (System_String_o **)0x4333c05;
                              UnityEngine_Material__SetInt
                                        ((UnityEngine_Material_o *)__this_12,"_DstBlend",10,(MethodInfo *)0x0
                                        );
                            }
                            ppSStack_40 = (System_String_o **)0x4333c1a;
                            bVar14 = UnityEngine_Material__HasProperty_4dcb5b0
                                               ((UnityEngine_Material_o *)__this_12,"_ZWrite",
                                                (MethodInfo *)0x0);
                            if ((char)bVar14 != '\0') {
                              ppSStack_40 = (System_String_o **)0x4333c2e;
                              UnityEngine_Material__SetInt
                                        ((UnityEngine_Material_o *)__this_12,"_ZWrite",0,(MethodInfo *)0x0)
                              ;
                            }
                            ppSStack_40 = (System_String_o **)0x4333c3d;
                            UnityEngine_Material__set_renderQueue
                                      ((UnityEngine_Material_o *)__this_12,3000,(MethodInfo *)0x0);
                            ppSStack_40 = (System_String_o **)0x4333c4a;
                            UnityEngine_Renderer__set_sharedMaterial
                                      (__this_11,(UnityEngine_Material_o *)__this_12,(MethodInfo *)0x0);
                            ppSStack_40 = (System_String_o **)0x4333c59;
                            pMVar16 = (MapEditor_MapEditorBrush_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
                            pMVar17 = (MapEditor_MapEditorBrush_o *)0x0;
                            ppSStack_40 = (System_String_o **)0x4333c66;
                            __this_13 = pMVar16;
                            UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pMVar16,(MethodInfo *)0x0);
                            plVar23 = (long *)&"_ZWrite";
                            if (pMVar16 != (MapEditor_MapEditorBrush_o *)0x0) {
                              ppSStack_40 = (System_String_o **)0x4333c7f;
                              UnityEngine_Object__set_name
                                        ((UnityEngine_Object_o *)pMVar16,"BrushDisk",(MethodInfo *)0x0);
                              unaff_R15 = (MapEditor_MapEditorBrush_o *)&(__this->fields)._diskMesh;
                              (__this->fields)._diskMesh = (UnityEngine_Mesh_o *)pMVar16;
                              ppSStack_40 = (System_String_o **)0x4333c94;
                              pMVar17 = pMVar16;
                              il2cpp_runtime_helper_022b4080(unaff_R15);
                              __this_00 = (__this->fields)._diskMesh;
                              __this_13 = (MapEditor_MapEditorBrush_o *)0x0;
                              if (__this_00 != (UnityEngine_Mesh_o *)0x0) {
                                pMVar17 = (MapEditor_MapEditorBrush_o *)0x0;
                                ppSStack_40 = (System_String_o **)0x4333ca5;
                                UnityEngine_Mesh__MarkDynamic(__this_00,(MethodInfo *)0x0);
                                __this_13 = (MapEditor_MapEditorBrush_o *)0x0;
                                if ((UnityEngine_MeshFilter_o *)*ppUVar28 != (UnityEngine_MeshFilter_o *)0x0)
                                {
                                  UnityEngine_MeshFilter__set_mesh
                                            ((UnityEngine_MeshFilter_o *)*ppUVar28,
                                             *(UnityEngine_Mesh_o **)unaff_R15,(MethodInfo *)0x0);
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
  ppSStack_40 = (System_String_o **)0x4333cca;
  il2cpp_runtime_helper_022b2c90();
  pMStack_68 = pMVar16;
  pMStack_60 = __this;
  pUStack_58 = __this_14;
  ppUStack_50 = ppUVar28;
  pMStack_48 = unaff_R15;
  ppSStack_40 = (System_String_o **)plVar23;
  if (g_data_057ae093 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BrushEntry_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Random);
    g_data_057ae093 = '\x01';
  }
  auStack_d0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_d0._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_d0._16_8_ = (Il2CppObject *)0x0;
  auStack_d0._48_8_ = (Il2CppType **)0x0;
  pIStack_98 = (Il2CppRGCTXData *)0x0;
  _Stack_90.genericMethod = (UnityEngine_Object_o *)0x0;
  MapEditor_MapEditorBrush__ClearGhosts(__this_13,(MethodInfo *)pMVar17);
  if ((char)(__this_13->fields).Active == '\0') {
    return;
  }
  pSVar4 = (__this_13->fields).Entries;
  if (pSVar4 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
    if ((pSVar4->fields)._size == 0) {
      return;
    }
    Seed = (__this_13->fields)._seed;
    pMVar16 = (MapEditor_MapEditorBrush_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Random);
    System_Random___ctor_3ccb3c0((System_Random_o *)pMVar16,Seed,(MethodInfo *)0x0);
    pSVar4 = (__this_13->fields).Entries;
    if (pSVar4 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_80,
                 (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
      auStack_d0._16_8_ = pIStack_70;
      auStack_d0._0_8_ = auStack_80._0_8_;
      auStack_d0._8_8_ = auStack_80._8_8_;
      fStack_134 = 0.0;
      auStack_d0._40_8_ = __this_13;
      while (__this_04.fields._list._4_4_ = in_stack_fffffffffffffeb4,
            __this_04.fields._list._0_4_ = in_stack_fffffffffffffeb0,
            __this_04.fields._index = (int32_t)in_stack_fffffffffffffeb8,
            __this_04.fields._version = (int32_t)in_stack_fffffffffffffebc,
            __this_04.fields._current = in_stack_fffffffffffffec0,
            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_04,(MethodInfo_321A1D0 *)auStack_d0), (char)bVar14 != '\0') {
        if ((Il2CppObject *)auStack_d0._16_8_ == (Il2CppObject *)0x0) goto label_043349a9;
        fVar22 = 0.0001;
        if (0.0001 <= *(float *)&((Il2CppObject *)(auStack_d0._16_8_ + 0x10))->monitor) {
          fVar22 = *(float *)&((Il2CppObject *)(auStack_d0._16_8_ + 0x10))->monitor;
        }
        fStack_134 = fStack_134 + fVar22;
      }
      __this_05.fields._list._4_4_ = in_stack_fffffffffffffeb4;
      __this_05.fields._list._0_4_ = in_stack_fffffffffffffeb0;
      __this_05.fields._index = (int32_t)in_stack_fffffffffffffeb8;
      __this_05.fields._version = (int32_t)in_stack_fffffffffffffebc;
      __this_05.fields._current = in_stack_fffffffffffffec0;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)auStack_d0);
      if ((__this_13->fields).AssetSelectMode == 1) {
        uVar24 = (__this_13->fields).RandomizeEachPlacement;
        uVar25 = (__this_13->fields).GridX;
        uVar20 = 1;
        if (0 < (int)uVar24) {
          uVar20 = uVar24;
        }
        uVar21 = 1;
        if (0 < (int)uVar25) {
          uVar21 = uVar25;
        }
        iVar15 = (__this_13->fields).GridY;
        iVar19 = 1;
        if (0 < iVar15) {
          iVar19 = iVar15;
        }
        fVar22 = (float)(uVar21 * uVar20 * iVar19);
      }
      else {
        fVar22 = (__this_13->fields).Radius;
        uVar24 = (__this_13->fields).RandomizeEachPlacement;
        uVar25 = (__this_13->fields).GridX;
        iVar15 = (__this_13->fields).GridY;
      }
      if ((int)uVar24 < 1) {
        uVar24 = 1;
      }
      method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(ulong)uVar24;
      if ((int)uVar25 < 1) {
        uVar25 = 1;
      }
      pMVar26 = (MethodInfo *)(ulong)uVar25;
      auStack_d0._24_8_ = pMVar26;
      auStack_d0._32_8_ = method_02;
      if (0 < (int)fVar22) {
        if (iVar15 < 1) {
          iVar15 = 1;
        }
        uVar27 = 0;
        do {
          while( true ) {
            entry = MapEditor_MapEditorBrush__PickEntry
                              (__this_13,(System_Random_o *)pMVar16,fStack_134,pMVar26);
            if (entry == (MapEditor_BrushEntry_o *)0x0) goto label_043349a4;
            iVar19 = (int)uVar27;
            if ((char)(entry->fields).Advanced == '\0') break;
            if (pMVar16 == (MapEditor_MapEditorBrush_o *)0x0) goto label_043349a4;
            fVar35 = (entry->fields).ScaleXMin;
            fVar38 = (entry->fields).ScaleXMax;
            dVar31 = (double)(*(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.methodPtr)
                                       (pMVar16,(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.
                                                method);
            fVar39 = (entry->fields).ScaleYMin;
            fVar29 = (entry->fields).ScaleYMax;
            dVar32 = (double)(*(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.methodPtr)
                                       (pMVar16,(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.
                                                method);
            auVar34._0_4_ = (float)dVar31;
            auVar34._4_4_ = (float)dVar32;
            auVar34._8_8_ = 0;
            auVar33 = minps(_DAT_00d19fc0,auVar34);
            uStack_110 = CONCAT44((fVar29 - fVar39) * (float)(-(uint)(0.0 <= auVar34._4_4_) & auVar33._4_4_) +
                                  fVar39,(fVar38 - fVar35) *
                                         (float)(-(uint)(0.0 <= auVar34._0_4_) & auVar33._0_4_) + fVar35);
            fVar35 = (entry->fields).ScaleZMin;
            fVar38 = (entry->fields).ScaleZMax;
            dVar31 = (double)(*(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.methodPtr)
                                       (pMVar16,(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.
                                                method);
            fVar29 = (float)dVar31;
            fVar39 = 1.0;
            if (fVar29 <= 1.0) {
              fVar39 = fVar29;
            }
            fVar35 = (fVar38 - fVar35) * (float)(-(uint)(0.0 <= fVar29) & (uint)fVar39) + fVar35;
            in_stack_fffffffffffffeb0 = (entry->fields).RotXMin;
            fVar38 = (entry->fields).RotXMax;
            fVar29 = 0.0;
            dVar31 = (double)(*(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.methodPtr)
                                       (pMVar16,(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.
                                                method);
            auStack_130._4_4_ = (entry->fields).RotYMin;
            fVar39 = (entry->fields).RotYMax;
            fVar30 = 0.0;
            dVar32 = (double)(*(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.methodPtr)
                                       (pMVar16,(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.
                                                method);
            auVar33._0_4_ = (float)dVar31;
            auVar33._4_4_ = (float)dVar32;
            auVar33._8_8_ = 0;
            auVar34 = minps(_DAT_00d19fc0,auVar33);
            in_stack_fffffffffffffeb0 =
                 (fVar38 - in_stack_fffffffffffffeb0) * (float)(-(uint)(0.0 <= auVar33._0_4_) & auVar34._0_4_)
                 + in_stack_fffffffffffffeb0;
            in_stack_fffffffffffffeb4 =
                 (fVar39 - (float)auStack_130._4_4_) * (float)(-(uint)(0.0 <= auVar33._4_4_) & auVar34._4_4_)
                 + (float)auStack_130._4_4_;
            in_stack_fffffffffffffeb8 = (fVar29 - 0.0) * auVar34._8_4_ + 0.0;
            in_stack_fffffffffffffebc = (fVar30 - 0.0) * auVar34._12_4_ + 0.0;
            fVar38 = (entry->fields).RotZMin;
            fVar39 = (entry->fields).RotZMax;
            pMVar17 = pMVar16;
            dVar31 = (double)(*(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.methodPtr)
                                       (pMVar16,(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.
                                                method);
            fVar30 = (float)dVar31;
            fVar29 = 1.0;
            if (fVar30 <= 1.0) {
              fVar29 = fVar30;
            }
            auStack_130._0_4_ = (fVar39 - fVar38) * (float)(-(uint)(0.0 <= fVar30) & (uint)fVar29) + fVar38;
            auStack_130._8_8_ = 0;
            method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(entry->fields).AssetName;
            script = MapEditor_MapEditorBrush__CloneScript(pMVar17,(System_String_o *)method_02,method_00);
            pMVar26 = extraout_RDX_00;
            if (script != (Map_MapScriptSceneObject_o *)0x0) goto label_0433438b;
joined_r0x043348cf:
            uVar27 = (ulong)(uint)(iVar19 + 1);
            if (fVar22 == (float)(iVar19 + 1)) goto label_043348d5;
          }
          if (pMVar16 == (MapEditor_MapEditorBrush_o *)0x0) goto label_043349a4;
          fVar35 = (entry->fields).ScaleMin;
          fVar38 = (entry->fields).ScaleMax;
          dVar31 = (double)(*(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.methodPtr)
                                     (pMVar16,(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.
                                              method);
          fVar29 = (float)dVar31;
          fVar39 = 1.0;
          if (fVar29 <= 1.0) {
            fVar39 = fVar29;
          }
          fVar35 = (fVar38 - fVar35) * (float)(-(uint)(0.0 <= fVar29) & (uint)fVar39) + fVar35;
          uStack_110 = CONCAT44(fVar35,fVar35);
          in_stack_fffffffffffffeb4 = (entry->fields).YawMin;
          fVar38 = (entry->fields).YawMax;
          pMVar17 = pMVar16;
          dVar31 = (double)(*(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.methodPtr)
                                     (pMVar16,(((System_Random_c *)pMVar16->klass)->vtable)._8_NextDouble.
                                              method);
          fVar29 = (float)dVar31;
          fVar39 = 1.0;
          if (fVar29 <= 1.0) {
            fVar39 = fVar29;
          }
          auVar12._12_4_ = 0;
          auVar12._0_12_ = auStack_130._4_12_;
          auStack_130._0_16_ = auVar12 << 0x20;
          in_stack_fffffffffffffeb4 =
               (fVar38 - in_stack_fffffffffffffeb4) * (float)(-(uint)(0.0 <= fVar29) & (uint)fVar39) +
               in_stack_fffffffffffffeb4;
          in_stack_fffffffffffffeb0 = 0.0;
          in_stack_fffffffffffffeb8 = 0.0;
          in_stack_fffffffffffffebc = 0.0;
          method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(entry->fields).AssetName;
          script = MapEditor_MapEditorBrush__CloneScript(pMVar17,(System_String_o *)method_02,method_01);
          pMVar26 = extraout_RDX_01;
          if (script == (Map_MapScriptSceneObject_o *)0x0) goto joined_r0x043348cf;
label_0433438b:
          (script->fields).RotationY = (script->fields).RotationY * (float)uStack_110;
          (script->fields).RotationZ = uStack_110._4_4_ * (script->fields).RotationZ;
          (script->fields).ScaleX = (script->fields).ScaleX * fVar35;
          (script->fields).PositionY = in_stack_fffffffffffffeb0;
          (script->fields).PositionZ = in_stack_fffffffffffffeb4;
          (script->fields).RotationX = (float)auStack_130._0_4_;
          iVar1 = (__this_13->fields)._ghostIdCounter;
          (__this_13->fields)._ghostIdCounter = iVar1 + -1;
          (script->fields).Id = iVar1;
          MapEditor_MapEditorBrush__ApplyEntryFields(script,entry,pMVar26);
          if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)&(script->fields).ScaleZ = *(undefined8 *)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
          il2cpp_runtime_helper_022b4080(&(script->fields).ScaleZ);
          *(undefined1 *)((long)&(script->fields).Active + 3) = 0;
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar18 = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)script,1,(MethodInfo *)0x0);
          if ((((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8)
                == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
              (System_Collections_Generic_Dictionary_int__object___Remove
                         ((System_Collections_Generic_Dictionary_int__object__o *)
                          **(undefined8 **)(TypeInfo_MapLoader + 0xb8),(script->fields).Id,MethodInfo_Boolean_Remove),
              __this_13 = (MapEditor_MapEditorBrush_o *)auStack_d0._40_8_, pMVar18 == (Map_MapObject_o *)0x0))
             || (__this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)
                              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10),
                __this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
          goto label_043349a4;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (__this_01,(Il2CppObject *)(pMVar18->fields).GameObject,MethodInfo_Boolean_Remove);
          pMVar17 = *(MapEditor_MapEditorBrush_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
          if (pMVar17 == (MapEditor_MapEditorBrush_o *)0x0) goto label_043349a4;
          bVar14 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_int__object__o *)pMVar17,
                              (script->fields).Parent,MethodInfo_Boolean_ContainsKey);
          pMVar26 = extraout_RDX_02;
          if ((char)bVar14 != '\0') {
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_02 = *(System_Collections_Generic_Dictionary_int__object__o **)
                         (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
            if ((__this_02 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
               (pMVar17 = (MapEditor_MapEditorBrush_o *)
                          System_Collections_Generic_Dictionary_int__object___get_Item
                                    (__this_02,(script->fields).Parent,MethodInfo_HashSet_1_System_Int32_get_Item),
               pMVar17 == (MapEditor_MapEditorBrush_o *)0x0)) goto label_043349a4;
            System_Collections_Generic_HashSet_int___Remove
                      ((System_Collections_Generic_HashSet_int__o *)pMVar17,(script->fields).Id,MethodInfo_Boolean_Remove);
            pMVar26 = extraout_RDX_03;
          }
          MapEditor_MapEditorBrush__ApplyGhostAppearance(pMVar17,(pMVar18->fields).GameObject,pMVar26);
          lVar11 = MethodInfo_Void_Add;
          pSVar10 = ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->_ghostObjects;
          if (pSVar10 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043349a4;
          pUVar3 = (pMVar18->fields).GameObject;
          piVar13 = &(pSVar10->fields)._version;
          *piVar13 = *piVar13 + 1;
          pUVar5 = (pSVar10->fields)._items;
          if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_043349a4;
          uVar20 = (pSVar10->fields)._size;
          if (uVar20 < (uint)pUVar5->max_length) {
            (pSVar10->fields)._size = uVar20 + 1;
            pUVar5->m_Items[(int)uVar20] = pUVar3;
            il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar20);
            __this_03 = ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->_ghostAssets;
            lVar11 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pUVar3,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            __this_03 = ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->_ghostAssets;
            lVar11 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar11;
          if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) goto label_043349a4;
          method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(entry->fields).AssetName;
          piVar13 = &(__this_03->fields)._version;
          *piVar13 = *piVar13 + 1;
          pSVar6 = (__this_03->fields)._items;
          if (pSVar6 == (System_String_array *)0x0) goto label_043349a4;
          uVar20 = (__this_03->fields)._size;
          if (uVar20 < (uint)pSVar6->max_length) {
            (__this_03->fields)._size = uVar20 + 1;
            pSVar6->m_Items[(int)uVar20] = (System_String_o *)method_02;
            il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar20);
            pSVar7 = ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->_ghostScales;
            lVar11 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)method_02,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            pSVar7 = ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->_ghostScales;
            lVar11 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar11;
          if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_043349a4;
          piVar13 = &(pSVar7->fields)._version;
          *piVar13 = *piVar13 + 1;
          pUVar8 = (pSVar7->fields)._items;
          if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto label_043349a4;
          uVar20 = (pSVar7->fields)._size;
          if (uVar20 < (uint)pUVar8->max_length) {
            (pSVar7->fields)._size = uVar20 + 1;
            pUVar8->m_Items[(int)uVar20].fields.x = (float)uStack_110;
            pUVar8->m_Items[(int)uVar20].fields.y = uStack_110._4_4_;
            pUVar8->m_Items[(int)uVar20].fields.z = fVar35;
            pSVar7 = ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->_ghostRotations;
            lVar11 = MethodInfo_Void_Add;
          }
          else {
            method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
            item_00.fields.z = fVar35;
            item_00.fields.x = (float)uStack_110;
            item_00.fields.y = uStack_110._4_4_;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (pSVar7,item_00,(MethodInfo_36A2CA0 *)method_02);
            pSVar7 = ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->_ghostRotations;
            lVar11 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar11;
          if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_043349a4;
          piVar13 = &(pSVar7->fields)._version;
          *piVar13 = *piVar13 + 1;
          pUVar8 = (pSVar7->fields)._items;
          if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto label_043349a4;
          uVar20 = (pSVar7->fields)._size;
          if (uVar20 < (uint)pUVar8->max_length) {
            (pSVar7->fields)._size = uVar20 + 1;
            pUVar8->m_Items[(int)uVar20].fields.x = in_stack_fffffffffffffeb0;
            pUVar8->m_Items[(int)uVar20].fields.y = in_stack_fffffffffffffeb4;
            pUVar8->m_Items[(int)uVar20].fields.z = (float)auStack_130._0_4_;
            iVar1 = ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->AssetSelectMode;
            lVar11 = MethodInfo_Void_Add;
          }
          else {
            method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
            item_01.fields.y = in_stack_fffffffffffffeb4;
            item_01.fields.x = in_stack_fffffffffffffeb0;
            item_01.fields.z = (float)auStack_130._0_4_;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (pSVar7,item_01,(MethodInfo_36A2CA0 *)method_02);
            iVar1 = ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->AssetSelectMode;
            lVar11 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar11;
          if (iVar1 != 1) {
            pSVar7 = ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->_ghostLocalOffsets;
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            lVar11 = MethodInfo_Void_Add;
            if (pSVar7 != (System_Collections_Generic_List_Vector3__o *)0x0) {
              pUVar9 = *(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
              fVar38 = pUVar9->x;
              fVar39 = pUVar9->y;
              fVar35 = pUVar9->z;
              item = *pUVar9;
              piVar13 = &(pSVar7->fields)._version;
              *piVar13 = *piVar13 + 1;
              pUVar8 = (pSVar7->fields)._items;
              if (pUVar8 != (UnityEngine_Vector3_array *)0x0) {
                uVar20 = (pSVar7->fields)._size;
                pMVar26 = (MethodInfo *)(long)(int)uVar20;
                if (uVar20 < (uint)pUVar8->max_length) {
                  (pSVar7->fields)._size = uVar20 + 1;
                  pUVar8->m_Items[(long)pMVar26].fields.x = fVar38;
                  pUVar8->m_Items[(long)pMVar26].fields.y = fVar39;
                  pUVar8->m_Items[(long)pMVar26].fields.z = fVar35;
                }
                else {
                  method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                               (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
                  System_Collections_Generic_List_Vector3___AddWithResize
                            (pSVar7,(UnityEngine_Vector3_o)item,(MethodInfo_36A2CA0 *)method_02);
                  pMVar26 = extraout_RDX;
                }
                goto joined_r0x043348cf;
              }
            }
            goto label_043349a4;
          }
          method_02 = (System_Collections_Generic_List_Enumerator_T__c *)
                      ((uVar27 / (auStack_d0._32_8_ & 0xffffffff)) % (auStack_d0._24_8_ & 0xffffffff));
          pSVar7 = ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->_ghostLocalOffsets;
          if (pSVar7 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_043349a4;
          item_02.fields.x =
               ((float)(int)(uVar27 % (auStack_d0._32_8_ & 0xffffffff)) - (float)(int)(uVar24 - 1) * 0.5) *
               (float)((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->GridZ;
          fVar35 = ((float)(int)method_02 - (float)(int)(uVar25 - 1) * 0.5) *
                   ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->SpacingX;
          item_02.fields.z =
               ((float)(iVar19 / (int)(uVar25 * uVar24)) - (float)(iVar15 + -1) * 0.5) *
               ((MapEditor_MapEditorBrush_Fields *)((long)__this_13 + 0x10))->SpacingY;
          piVar13 = &(pSVar7->fields)._version;
          *piVar13 = *piVar13 + 1;
          pUVar8 = (pSVar7->fields)._items;
          if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto label_043349a4;
          item_02.fields.y = fVar35;
          uVar20 = (pSVar7->fields)._size;
          pMVar26 = (MethodInfo *)(long)(int)uVar20;
          if ((uint)pUVar8->max_length <= uVar20) {
            method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List_Vector3___AddWithResize
                      (pSVar7,item_02,(MethodInfo_36A2CA0 *)method_02);
            pMVar26 = extraout_RDX_04;
            goto joined_r0x043348cf;
          }
          (pSVar7->fields)._size = uVar20 + 1;
          pUVar8->m_Items[(long)pMVar26].fields.x = item_02.fields.x;
          pUVar8->m_Items[(long)pMVar26].fields.y = fVar35;
          pUVar8->m_Items[(long)pMVar26].fields.z = item_02.fields.z;
          uVar27 = (ulong)(uint)(iVar19 + 1);
        } while (fVar22 != (float)(iVar19 + 1));
      }
label_043348d5:
      if ((char)(__this_13->fields)._hasCenter != '\0') {
        MapEditor_MapEditorBrush__PositionGhosts(__this_13,(MethodInfo *)method_02);
        return;
      }
      pSVar10 = (__this_13->fields)._ghostObjects;
      if (pSVar10 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_d0 + 0x30),
                   (System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
        while( true ) {
          do {
            __this_06.fields._list._4_4_ = in_stack_fffffffffffffeb4;
            __this_06.fields._list._0_4_ = in_stack_fffffffffffffeb0;
            __this_06.fields._index = (int32_t)in_stack_fffffffffffffeb8;
            __this_06.fields._version = (int32_t)in_stack_fffffffffffffebc;
            __this_06.fields._current = in_stack_fffffffffffffec0;
            bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_06,(MethodInfo_321A1D0 *)(auStack_d0 + 0x30));
            x_00 = _Stack_90;
            if ((char)bVar14 == '\0') {
              __this_07.fields._list._4_4_ = in_stack_fffffffffffffeb4;
              __this_07.fields._list._0_4_ = in_stack_fffffffffffffeb0;
              __this_07.fields._index = (int32_t)in_stack_fffffffffffffeb8;
              __this_07.fields._version = (int32_t)in_stack_fffffffffffffebc;
              __this_07.fields._current = in_stack_fffffffffffffec0;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_07,(MethodInfo_321A1C0 *)(auStack_d0 + 0x30));
              return;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar14 = UnityEngine_Object__op_Inequality
                               (x_00.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          } while ((char)bVar14 == '\0');
          if (x_00.genericMethod == (UnityEngine_Object_o *)0x0) break;
          UnityEngine_GameObject__SetActive(x_00.genericMethod,0,(MethodInfo *)0x0);
        }
        goto label_043349ae;
      }
    }
  }
label_043349a4:
  il2cpp_runtime_helper_022b2c90();
label_043349a9:
  il2cpp_runtime_helper_022b2c90();
label_043349ae:
  auVar37 = il2cpp_runtime_helper_022b2c90();
  if (auVar37._8_4_ == 1) {
    plVar23 = (long *)__cxa_begin_catch(auVar37._0_8_);
    lVar11 = *plVar23;
    __cxa_end_catch();
    __this_08.fields._list._4_4_ = in_stack_fffffffffffffeb4;
    __this_08.fields._list._0_4_ = in_stack_fffffffffffffeb0;
    __this_08.fields._index = (int32_t)in_stack_fffffffffffffeb8;
    __this_08.fields._version = (int32_t)in_stack_fffffffffffffebc;
    __this_08.fields._current = in_stack_fffffffffffffec0;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)(auStack_d0 + 0x30));
    if (lVar11 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar11);
    __this_10.fields._list._4_4_ = in_stack_fffffffffffffeb4;
    __this_10.fields._list._0_4_ = in_stack_fffffffffffffeb0;
    __this_10.fields._index = (int32_t)in_stack_fffffffffffffeb8;
    __this_10.fields._version = (int32_t)in_stack_fffffffffffffebc;
    __this_10.fields._current = in_stack_fffffffffffffec0;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_10,(MethodInfo_321A1C0 *)auStack_d0);
  }
  else {
    __this_09.fields._list._4_4_ = in_stack_fffffffffffffeb4;
    __this_09.fields._list._0_4_ = in_stack_fffffffffffffeb0;
    __this_09.fields._index = (int32_t)in_stack_fffffffffffffeb8;
    __this_09.fields._version = (int32_t)in_stack_fffffffffffffebc;
    __this_09.fields._current = in_stack_fffffffffffffec0;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_09,(MethodInfo_321A1C0 *)(auStack_d0 + 0x30));
  }
  _Unwind_Resume(auVar37._0_8_);
}


// MapEditor.MapEditorBrush$$DestroyCircle
// il2cpp: void MapEditor_MapEditorBrush__DestroyCircle (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4333690

void MapEditor_MapEditorBrush__DestroyCircle(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  
  if (g_data_057ae090 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae090 = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._circleIndicator;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    ppUVar1 = &(__this->fields)._circleIndicator;
    pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
    (__this->fields)._circleIndicator = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    (__this->fields)._circleRenderer = (UnityEngine_LineRenderer_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._circleRenderer);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._diskIndicator;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    ppUVar1 = &(__this->fields)._diskIndicator;
    pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
    (__this->fields)._diskIndicator = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar1,0);
    (__this->fields)._diskFilter = (UnityEngine_MeshFilter_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._diskFilter,0);
    (__this->fields)._diskMesh = (UnityEngine_Mesh_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._diskMesh,0);
    return;
  }
  return;
}


// MapEditor.MapEditorBrush$$UpdateCircle
// il2cpp: void MapEditor_MapEditorBrush__UpdateCircle (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4334e80

void MapEditor_MapEditorBrush__UpdateCircle(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar4;
  UnityEngine_LineRenderer_o *pUVar8;
  UnityEngine_Mesh_o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar9;
  System_Collections_Generic_List_string__o *__this_01;
  long lVar10;
  double dVar11;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  UnityEngine_RaycastHit_o __this_06;
  UnityEngine_RaycastHit_o __this_07;
  UnityEngine_Vector3_Fields direction;
  UnityEngine_Vector3_array *pUVar12;
  bool_conflict bVar13;
  UnityEngine_LayerMask_o UVar14;
  int32_t iVar15;
  System_Random_o *__this_08;
  System_Int32_array *pSVar16;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar17;
  MapEditor_MapEditorBrush_o *__this_09;
  System_String_o *asset;
  MapEditor_BrushEntry_o *pMVar18;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar19;
  MapEditor_MapEditorBrush_o *__this_10;
  System_Collections_Generic_List_GameObject__o *pSVar20;
  long *unaff_R12;
  MethodInfo *unaff_R13;
  long *plVar21;
  MapEditor_MapEditorBrush_o **ppMVar22;
  float *unaff_R15;
  float fVar23;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Quaternion_o UVar29;
  undefined1 auVar30 [12];
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o local;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o xz;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o direction_00;
  float in_stack_fffffffffffffe60;
  float in_stack_fffffffffffffe64;
  undefined4 in_stack_fffffffffffffe68;
  undefined4 in_stack_fffffffffffffe6c;
  float in_stack_fffffffffffffe70;
  float in_stack_fffffffffffffe74;
  float fStack_170;
  float fStack_16c;
  float fStack_160;
  float fStack_15c;
  UnityEngine_Quaternion_Fields UStack_150;
  undefined1 auStack_140 [36];
  float fStack_11c;
  undefined8 uStack_118;
  Il2CppRGCTXData *pIStack_108;
  _union_249689 _Stack_100;
  MethodInfo *pMStack_f8;
  UnityEngine_Vector3_array *pUStack_f0;
  float *pfStack_e8;
  System_Int32_array *pSStack_e0;
  undefined1 in_stack_ffffffffffffff28 [12];
  int32_t in_stack_ffffffffffffff34;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 local_68 [16];
  InvokerMethod pIStack_58;
  int32_t iStack_50;
  float local_4c;
  int32_t iStack_48;
  undefined8 uStack_44;
  
  if (g_data_057ae091 == '\0') {
    pSStack_e0 = (System_Int32_array *)0x4334ea9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    pSStack_e0 = (System_Int32_array *)0x4334eb5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_e0 = (System_Int32_array *)0x4334ec1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    pSStack_e0 = (System_Int32_array *)0x4334ecd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    pSStack_e0 = (System_Int32_array *)0x4334ed9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ae091 = '\x01';
  }
  iStack_48 = 0;
  uStack_44._0_4_ = 0;
  uStack_44._4_4_ = 0;
  pIStack_58 = (InvokerMethod)0x0;
  iStack_50 = 0;
  local_4c = 0.0;
  local_68._0_8_ = (MapEditor_MapEditorBrush_c *)0x0;
  local_68._8_8_ = (Il2CppMethodPointer)0x0;
  pSVar16 = (System_Int32_array *)(__this->fields)._circleRenderer;
  plVar21 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_e0 = (System_Int32_array *)0x4334f14;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_e0 = (System_Int32_array *)0x4334f20;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pSVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return;
  }
  if ((char)(__this->fields)._hasCenter == '\0') {
    return;
  }
  if ((__this->fields).AssetSelectMode == 1) {
    pUVar8 = (__this->fields)._circleRenderer;
    __this_10 = (MapEditor_MapEditorBrush_o *)0x0;
    if (pUVar8 != (UnityEngine_LineRenderer_o *)0x0) {
      pSStack_e0 = (System_Int32_array *)0x4334f51;
      UnityEngine_LineRenderer__set_positionCount(pUVar8,0,(MethodInfo *)0x0);
      pSVar16 = (System_Int32_array *)(__this->fields)._diskMesh;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pSStack_e0 = (System_Int32_array *)0x4334f66;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_e0 = (System_Int32_array *)0x4334f72;
      bVar13 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pSVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return;
      }
      __this_00 = (__this->fields)._diskMesh;
      __this_10 = (MapEditor_MapEditorBrush_o *)0x0;
      if (__this_00 != (UnityEngine_Mesh_o *)0x0) {
        pSStack_e0 = (System_Int32_array *)0x4334f8e;
        UnityEngine_Mesh__Clear(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pSStack_e0 = (System_Int32_array *)0x4334fa7;
    pSVar16 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
    ppMVar22 = &TypeInfo_PhysicsLayer;
    if (TypeInfo_PhysicsLayer[1].fields.GridY == 0) {
      pSStack_e0 = (System_Int32_array *)0x4334fc2;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_10 = TypeInfo_PhysicsLayer;
    plVar21 = (long *)ppMVar22;
    if (pSVar16 != (System_Int32_array *)0x0) {
      if ((int)pSVar16->max_length == 0) {
label_0433520e:
        pSStack_e0 = (System_Int32_array *)0x4335213;
        il2cpp_runtime_helper_022b2ca0();
        pUVar12 = (UnityEngine_Vector3_array *)ppMVar22;
      }
      else {
        pSVar16->m_Items[0] = *(int32_t *)&((TypeInfo_PhysicsLayer[1].klass)->_1).element_class;
        pSStack_e0 = (System_Int32_array *)0x4334fef;
        UVar14 = Utility_PhysicsLayer__GetMask(pSVar16,(MethodInfo *)0x0);
        pSStack_e0 = (System_Int32_array *)0x4334ff8;
        in_stack_ffffffffffffff34 = UnityEngine_LayerMask__op_Implicit(UVar14,(MethodInfo *)0x0);
        pUVar8 = (__this->fields)._circleRenderer;
        __this_10 = (MapEditor_MapEditorBrush_o *)0x0;
        if (pUVar8 == (UnityEngine_LineRenderer_o *)0x0) goto label_043352f1;
        pSStack_e0 = (System_Int32_array *)0x4335015;
        UnityEngine_LineRenderer__set_positionCount(pUVar8,0x60,(MethodInfo *)0x0);
        pSStack_e0 = (System_Int32_array *)0x4335029;
        plVar21 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,0x60);
        pUVar12 = (UnityEngine_Vector3_array *)ppMVar22;
        if ((UnityEngine_Vector3_array *)plVar21 != (UnityEngine_Vector3_array *)0x0) {
          unaff_R15 = &((UnityEngine_Vector3_array *)plVar21)->m_Items[0].fields.z;
          pSVar16 = (System_Int32_array *)0x0;
          unaff_R12 = &TypeInfo_Vector3;
          unaff_R13 = (MethodInfo *)local_68;
          while( true ) {
            fVar1 = ((float)(int)pSVar16 / 96.0) * 3.1415927;
            fVar1 = fVar1 + fVar1;
            fVar23 = (__this->fields)._center.fields.x;
            pSStack_e0 = (System_Int32_array *)0x4335084;
            fVar5 = cosf(fVar1);
            UVar32.fields.x = fVar5 * (float)(__this->fields).Mode + fVar23;
            fVar23 = (__this->fields)._center.fields.z;
            pSStack_e0 = (System_Int32_array *)0x43350ad;
            fVar3 = sinf(fVar1);
            fVar1 = (float)(__this->fields).Mode;
            fVar5 = (__this->fields)._center.fields.y;
            uVar33 = 0;
            iVar15 = 0;
            fVar7 = fVar5 + 1000.0;
            if (g_data_057ac31b == '\0') {
              pSStack_e0 = (System_Int32_array *)0x43350e6;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057ac31b = '\x01';
            }
            fVar23 = fVar23 + fVar3 * fVar1;
            direction = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
            if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
              pSStack_e0 = (System_Int32_array *)0x433514d;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_e0 = (System_Int32_array *)0x4335179;
            UVar32.fields.y = fVar7;
            UVar32.fields.z = fVar23;
            bVar13 = UnityEngine_Physics__Raycast_4e776c0
                               (UVar32,(UnityEngine_Vector3_o)direction,(UnityEngine_RaycastHit_o *)unaff_R13,
                                5000.0,in_stack_ffffffffffffff34,(MethodInfo *)0x0);
            if ((char)bVar13 != '\0') {
              pSStack_e0 = (System_Int32_array *)0x433518c;
              __this_06.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff34;
              __this_06.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff28._0_4_;
              __this_06.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff28._4_4_;
              __this_06.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff28._8_4_;
              __this_06.fields.m_Normal.fields.y = fVar23;
              __this_06.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff3c;
              __this_06.fields.m_FaceID = in_stack_ffffffffffffff40;
              __this_06.fields.m_Distance = (float)in_stack_ffffffffffffff44;
              __this_06.fields.m_UV.fields.x = fVar5;
              __this_06.fields.m_UV.fields.y = (float)uVar33;
              __this_06.fields.m_Collider = iVar15;
              UVar31 = UnityEngine_RaycastHit__get_point(__this_06,unaff_R13);
              fVar5 = UVar31.fields.y;
            }
            ppMVar22 = (MapEditor_MapEditorBrush_o **)plVar21;
            if ((System_Int32_array *)(ulong)(uint)((UnityEngine_Vector3_array *)plVar21)->max_length <=
                pSVar16) break;
            ((UnityEngine_Vector3_Fields *)(unaff_R15 + -2))->x = UVar32.fields.x;
            ((UnityEngine_Vector3_Fields *)(unaff_R15 + -2))->y = fVar5 + 0.1;
            *unaff_R15 = fVar23;
            pUVar8 = (__this->fields)._circleRenderer;
            __this_10 = (MapEditor_MapEditorBrush_o *)0x0;
            if (pUVar8 == (UnityEngine_LineRenderer_o *)0x0) goto label_043352f1;
            pSStack_e0 = (System_Int32_array *)0x43351db;
            UVar31.fields.y = fVar5 + 0.1;
            UVar31.fields.x = UVar32.fields.x;
            UVar31.fields.z = fVar23;
            UnityEngine_LineRenderer__SetPosition(pUVar8,(int)pSVar16,UVar31,(MethodInfo *)0x0);
            pSVar16 = (System_Int32_array *)((long)&(pSVar16->obj).klass + 1);
            unaff_R15 = unaff_R15 + 3;
            if (pSVar16 == (System_Int32_array *)&g_data_00000060) {
              pSStack_e0 = (System_Int32_array *)0x43351fc;
              MapEditor_MapEditorBrush__UpdateDisk
                        (__this,(UnityEngine_Vector3_array *)plVar21,in_stack_ffffffffffffff34,in_RCX);
              return;
            }
          }
          goto label_0433520e;
        }
      }
      plVar21 = (long *)pUVar12;
      fVar23 = (float)(__this->fields).Mode;
      origin.fields.z = fVar23 * 0.0 + (__this->fields)._center.fields.z;
      fVar1 = (__this->fields)._center.fields.x;
      fVar5 = (__this->fields)._center.fields.y;
      fVar3 = 0.0;
      fVar7 = 0.0;
      fVar24 = 1000.0;
      fVar25 = 0.0;
      if (g_data_057ac31b == '\0') {
        pSStack_e0 = (System_Int32_array *)0x433525f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057ac31b = '\x01';
      }
      fVar1 = fVar1 + fVar23;
      fVar5 = fVar5 + fVar24;
      fVar3 = fVar3 + fVar25;
      fVar7 = fVar7 + 0.0;
      uVar4 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
      uVar33 = (undefined4)uVar4;
      uVar34 = (undefined4)((ulong)uVar4 >> 0x20);
      iVar15 = 0;
      fVar23 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        pSStack_e0 = (System_Int32_array *)0x43352b3;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_10 = (MapEditor_MapEditorBrush_o *)local_68;
      origin.fields.y = fVar5;
      origin.fields.x = fVar1;
      direction_00.fields.y = (float)uVar34;
      direction_00.fields.x = (float)uVar33;
      pSStack_e0 = (System_Int32_array *)0x43352e1;
      direction_00.fields.z = fVar23;
      bVar13 = UnityEngine_Physics__Raycast_4e776c0
                         (origin,direction_00,(UnityEngine_RaycastHit_o *)__this_10,5000.0,
                          in_stack_ffffffffffffff34,(MethodInfo *)0x0);
      if ((char)bVar13 != '\0') {
        __this_10 = (MapEditor_MapEditorBrush_o *)local_68;
        pSStack_e0 = (System_Int32_array *)0x43352f1;
        __this_07.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff34;
        __this_07.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff28._0_4_;
        __this_07.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff28._4_4_;
        __this_07.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff28._8_4_;
        __this_07.fields.m_Normal.fields.y = fVar1;
        __this_07.fields.m_Normal.fields.z = fVar5;
        __this_07.fields.m_FaceID = (uint32_t)fVar3;
        __this_07.fields.m_Distance = fVar7;
        __this_07.fields.m_UV.fields.x = (float)uVar33;
        __this_07.fields.m_UV.fields.y = (float)uVar34;
        __this_07.fields.m_Collider = iVar15;
        UnityEngine_RaycastHit__get_point(__this_07,(MethodInfo *)__this_10);
      }
    }
  }
label_043352f1:
  pSStack_e0 = (System_Int32_array *)0x43352f6;
  il2cpp_runtime_helper_022b2c90();
  pIStack_108 = (Il2CppRGCTXData *)__this;
  _Stack_100 = (_union_249689)unaff_R12;
  pMStack_f8 = unaff_R13;
  pUStack_f0 = (UnityEngine_Vector3_array *)plVar21;
  pfStack_e8 = unaff_R15;
  pSStack_e0 = pSVar16;
  if (g_data_057ae099 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Random);
    g_data_057ae099 = '\x01';
  }
  auStack_140._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_140._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_140._16_8_ = (UnityEngine_Object_o *)0x0;
  UStack_150.x = 0.0;
  UStack_150.y = 0.0;
  UStack_150.z = 0.0;
  UStack_150.w = 0.0;
  if ((char)(__this_10->fields)._hasCenter == '\0') {
    pSVar20 = (__this_10->fields)._ghostObjects;
    if (pSVar20 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04335a4e;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_140,
               (System_Collections_Generic_List_object__o *)pSVar20,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    while( true ) {
      do {
        __this_02.fields._list._4_4_ = in_stack_fffffffffffffe64;
        __this_02.fields._list._0_4_ = in_stack_fffffffffffffe60;
        __this_02.fields._index = in_stack_fffffffffffffe68;
        __this_02.fields._version = in_stack_fffffffffffffe6c;
        __this_02.fields._current._0_4_ = in_stack_fffffffffffffe70;
        __this_02.fields._current._4_4_ = in_stack_fffffffffffffe74;
        bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_02,(MethodInfo_321A1D0 *)auStack_140);
        uVar4 = auStack_140._16_8_;
        if ((char)bVar13 == '\0') {
          __this_03.fields._list._4_4_ = in_stack_fffffffffffffe64;
          __this_03.fields._list._0_4_ = in_stack_fffffffffffffe60;
          __this_03.fields._index = in_stack_fffffffffffffe68;
          __this_03.fields._version = in_stack_fffffffffffffe6c;
          __this_03.fields._current._0_4_ = in_stack_fffffffffffffe70;
          __this_03.fields._current._4_4_ = in_stack_fffffffffffffe74;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)auStack_140);
          return;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar13 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)uVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while ((char)bVar13 == '\0');
      if ((UnityEngine_Object_o *)uVar4 == (UnityEngine_Object_o *)0x0) break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)uVar4,0,(MethodInfo *)0x0);
    }
  }
  else {
    iVar19 = (__this_10->fields)._seed;
    __this_08 = (System_Random_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Random);
    System_Random___ctor_3ccb3c0(__this_08,iVar19 + 1,(MethodInfo *)0x0);
    pSVar16 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
    if (TypeInfo_PhysicsLayer[1].fields.GridY == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar16 != (System_Int32_array *)0x0) {
      if ((int)pSVar16->max_length == 0) goto label_04335a58;
      pSVar16->m_Items[0] = *(int32_t *)&((TypeInfo_PhysicsLayer[1].klass)->_1).element_class;
      iVar19 = 0;
      UVar14 = Utility_PhysicsLayer__GetMask(pSVar16,(MethodInfo *)0x0);
      iVar15 = UnityEngine_LayerMask__op_Implicit(UVar14,(MethodInfo *)0x0);
      pSVar20 = (__this_10->fields)._ghostObjects;
      if (pSVar20 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        auStack_140._24_8_ = __this_08;
        if ((pSVar20->fields)._size < 1) {
          return;
        }
        do {
          x = (UnityEngine_Object_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar20,iVar19,MethodInfo_GameObject_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar13 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            if (x == (UnityEngine_Object_o *)0x0) break;
            bVar13 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
            method_00 = extraout_RDX;
            if ((char)bVar13 == '\0') {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,1,(MethodInfo *)0x0);
              method_00 = extraout_RDX_00;
            }
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
              method_00 = extraout_RDX_01;
            }
            uStack_118 = 0;
            stack0xfffffffffffffee0 = **(ulong **)(TypeInfo_Vector3 + 0xb8);
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
              method_00 = extraout_RDX_02;
            }
            UStack_150._0_8_ = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            UStack_150._8_8_ = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if ((__this_10->fields).AssetSelectMode == 1) {
              pSVar9 = (__this_10->fields)._ghostLocalOffsets;
              if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
              if (iVar19 < (pSVar9->fields)._size) {
                UVar32 = System_Collections_Generic_List_Vector3___get_Item(pSVar9,iVar19,MethodInfo_Vector3_get_Item);
                fVar23 = UVar32.fields.z;
                fVar1 = UVar32.fields.x;
                fVar5 = UVar32.fields.y;
                method_00 = extraout_RDX_03;
              }
              else {
                if (g_data_057a65d5 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a65d5 = '\x01';
                  method_00 = extraout_RDX_04;
                }
                uVar4 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                fVar1 = (float)uVar4;
                fVar5 = (float)((ulong)uVar4 >> 0x20);
                fVar23 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
              }
              local.fields.y = fVar5;
              local.fields.x = fVar1;
              local.fields.z = fVar23;
              UVar32 = MapEditor_MapEditorBrush__ApplyCurve_4237110
                                 (__this_10,local,(UnityEngine_Quaternion_o *)&UStack_150,method_00);
              uVar2 = (__this_10->fields)._center.fields.x;
              uVar6 = (__this_10->fields)._center.fields.y;
              unique0x1000056d = extraout_XMM0_Dc;
              unique0x10000565 = UVar32.fields._0_8_;
              unique0x10000571 = extraout_XMM0_Dd;
              in_stack_fffffffffffffe70 = (float)uVar2 + UVar32.fields.x;
              in_stack_fffffffffffffe74 = (float)uVar6 + UVar32.fields.y;
              in_stack_fffffffffffffe60 = UVar32.fields.z + (__this_10->fields)._center.fields.z;
              pSVar9 = (__this_10->fields)._ghostRotations;
            }
            else {
              if (__this_08 == (System_Random_o *)0x0) break;
              dVar11 = (double)(*(__this_08->klass->vtable)._8_NextDouble.methodPtr)
                                         (__this_08,(__this_08->klass->vtable)._8_NextDouble.method);
              fVar23 = (float)dVar11;
              if (fVar23 < 0.0) {
                fVar23 = sqrtf(fVar23);
              }
              else {
                fVar23 = SQRT(fVar23);
              }
              fVar23 = fVar23 * (float)(__this_10->fields).Mode;
              dVar11 = (double)(*(__this_08->klass->vtable)._8_NextDouble.methodPtr)
                                         (__this_08,(__this_08->klass->vtable)._8_NextDouble.method);
              fVar5 = (float)dVar11 * 3.1415927 + (float)dVar11 * 3.1415927;
              fVar3 = (__this_10->fields)._center.fields.x;
              fVar7 = (__this_10->fields)._center.fields.y;
              in_stack_fffffffffffffe60 = (__this_10->fields)._center.fields.z;
              fVar1 = cosf(fVar5);
              fVar5 = sinf(fVar5);
              in_stack_fffffffffffffe70 = fVar1 * fVar23 + fVar3;
              in_stack_fffffffffffffe74 = fVar7 + 0.0;
              in_stack_fffffffffffffe60 = fVar5 * fVar23 + in_stack_fffffffffffffe60;
              pSVar9 = (__this_10->fields)._ghostRotations;
            }
            if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
            UVar32 = System_Collections_Generic_List_Vector3___get_Item(pSVar9,iVar19,MethodInfo_Vector3_get_Item);
            euler.fields.x = UVar32.fields.x * 0.017453292;
            euler.fields.y = UVar32.fields.y * 0.017453292;
            euler.fields.z = UVar32.fields.z * 0.017453292;
            UVar29 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
            pUVar17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
            fStack_170 = UVar29.fields.z;
            fStack_16c = UVar29.fields.w;
            fStack_160 = UVar29.fields.x;
            fStack_15c = UVar29.fields.y;
            if ((__this_10->fields).AssetSelectMode == 1) {
              fVar23 = UStack_150.x;
              fVar1 = UStack_150.y;
              fVar25 = UStack_150.z;
              fVar27 = UStack_150.w;
              fVar7 = fStack_16c * fVar23;
              fVar24 = fStack_16c * fVar1;
              fVar26 = fVar25 * fStack_170;
              fVar5 = fVar1 * fStack_170;
              fVar3 = fVar25 * fStack_160;
              fVar28 = fVar23 * fStack_170;
              fStack_170 = (fStack_15c * fVar23 + fStack_16c * fVar25 + fStack_170 * fVar27) -
                           fStack_160 * fVar1;
              fStack_16c = ((fStack_16c * fVar27 - fVar23 * fStack_160) - fStack_15c * fVar1) - fVar26;
              fStack_160 = (fVar5 + fVar7 + fStack_160 * fVar27) - fVar25 * fStack_15c;
              fStack_15c = (fVar3 + fVar24 + fStack_15c * fVar27) - fVar28;
            }
            if (pUVar17 == (UnityEngine_Transform_o *)0x0) break;
            UVar29.fields.y = fStack_15c;
            UVar29.fields.x = fStack_160;
            UVar29.fields.w = fStack_16c;
            UVar29.fields.z = fStack_170;
            UnityEngine_Transform__set_rotation(pUVar17,UVar29,(MethodInfo *)0x0);
            __this_09 = (MapEditor_MapEditorBrush_o *)
                        UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0)
            ;
            if (g_data_057a6844 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6844 = '\x01';
            }
            if (__this_09 == (MapEditor_MapEditorBrush_o *)0x0) break;
            uVar4 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            value.fields.x = (float)uVar4 * 500.0 + in_stack_fffffffffffffe70;
            value.fields.y = (float)((ulong)uVar4 >> 0x20) * 500.0 + in_stack_fffffffffffffe74;
            value.fields.z =
                 *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 500.0 + in_stack_fffffffffffffe60;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_09,value,(MethodInfo *)0x0);
            xz.fields.y = in_stack_fffffffffffffe74;
            xz.fields.x = in_stack_fffffffffffffe70;
            xz.fields.z = in_stack_fffffffffffffe60;
            UVar32 = MapEditor_MapEditorBrush__ProjectToGround
                               (__this_09,(UnityEngine_GameObject_o *)x,xz,iVar15,in_RCX);
            in_stack_fffffffffffffe70 = UVar32.fields.z;
            in_stack_fffffffffffffe60 = UVar32.fields.x;
            in_stack_fffffffffffffe64 = UVar32.fields.y;
            if ((__this_10->fields).AssetSelectMode == 1) {
              in_stack_fffffffffffffe64 = fStack_11c + in_stack_fffffffffffffe64;
            }
            __this_01 = (__this_10->fields)._ghostAssets;
            in_stack_fffffffffffffe68 = extraout_XMM0_Dc_00;
            in_stack_fffffffffffffe6c = extraout_XMM0_Dd_00;
            if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) break;
            asset = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,iVar19,MethodInfo_String_get_Item);
            pMVar18 = MapEditor_MapEditorBrush__FindEntry(__this_10,asset,method_01);
            __this_08 = (System_Random_o *)auStack_140._24_8_;
            if (pMVar18 != (MapEditor_BrushEntry_o *)0x0) {
              in_stack_fffffffffffffe64 = in_stack_fffffffffffffe64 + (pMVar18->fields).Offset.fields.x;
            }
            pUVar17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
            if (pUVar17 == (UnityEngine_Transform_o *)0x0) break;
            value_00.fields.y = in_stack_fffffffffffffe64;
            value_00.fields.x = in_stack_fffffffffffffe60;
            value_00.fields.z = in_stack_fffffffffffffe70;
            UnityEngine_Transform__set_position(pUVar17,value_00,(MethodInfo *)0x0);
          }
          iVar19 = iVar19 + 1;
          pSVar20 = (__this_10->fields)._ghostObjects;
          if (pSVar20 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
          if ((pSVar20->fields)._size <= iVar19) {
            return;
          }
        } while( true );
      }
    }
label_04335a4e:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_04335a58:
  auVar30 = il2cpp_runtime_helper_022b2ca0();
  if (auVar30._8_4_ == 1) {
    plVar21 = (long *)__cxa_begin_catch(auVar30._0_8_);
    lVar10 = *plVar21;
    __cxa_end_catch();
    __this_04.fields._list._4_4_ = in_stack_fffffffffffffe64;
    __this_04.fields._list._0_4_ = in_stack_fffffffffffffe60;
    __this_04.fields._index = in_stack_fffffffffffffe68;
    __this_04.fields._version = in_stack_fffffffffffffe6c;
    __this_04.fields._current._0_4_ = in_stack_fffffffffffffe70;
    __this_04.fields._current._4_4_ = in_stack_fffffffffffffe74;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)auStack_140);
    if (lVar10 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar10);
  }
  __this_05.fields._list._4_4_ = in_stack_fffffffffffffe64;
  __this_05.fields._list._0_4_ = in_stack_fffffffffffffe60;
  __this_05.fields._index = in_stack_fffffffffffffe68;
  __this_05.fields._version = in_stack_fffffffffffffe6c;
  __this_05.fields._current._0_4_ = in_stack_fffffffffffffe70;
  __this_05.fields._current._4_4_ = in_stack_fffffffffffffe74;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)auStack_140);
  _Unwind_Resume(auVar30._0_8_);
}


// MapEditor.MapEditorBrush$$UpdateDisk
// il2cpp: void MapEditor_MapEditorBrush__UpdateDisk (MapEditor_MapEditorBrush_o* __this, UnityEngine_Vector3_array* rim, int32_t mask, const MethodInfo* method);
// 0x4335da0

void MapEditor_MapEditorBrush__UpdateDisk
               (MapEditor_MapEditorBrush_o *__this,UnityEngine_Vector3_array *rim,int32_t mask,
               MethodInfo *method)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  UnityEngine_Mesh_o *pUVar5;
  Il2CppClass *pIVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  double dVar8;
  int iVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  UnityEngine_RaycastHit_o __this_04;
  bool_conflict bVar10;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector3_array *pUVar11;
  long *plVar12;
  float fVar13;
  long lVar14;
  uint uVar15;
  UnityEngine_Vector3_array *pUVar16;
  UnityEngine_Vector3_array *pUVar17;
  UnityEngine_Vector3_array *x;
  UnityEngine_Vector3_array *pUVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [12];
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o direction;
  undefined1 in_stack_ffffffffffffff20 [12];
  Il2CppObject *pIVar28;
  Il2CppRGCTXData *in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff74;
  float in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff7c;
  undefined8 in_stack_ffffffffffffff80;
  float in_stack_ffffffffffffff88;
  float in_stack_ffffffffffffff8c;
  float in_stack_ffffffffffffff90;
  Il2CppMethodPointer local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod pIStack_48;
  uint32_t uStack_40;
  float local_3c;
  float fStack_38;
  undefined8 uStack_34;
  
  if (g_data_057ae092 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ae092 = '\x01';
  }
  fStack_38 = 0.0;
  uStack_34 = 0;
  pIStack_48 = (InvokerMethod)0x0;
  uStack_40 = 0;
  local_3c = 0.0;
  local_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  x = (UnityEngine_Vector3_array *)(__this->fields)._diskMesh;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar17 = (UnityEngine_Vector3_array *)0x0;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  if (rim != (UnityEngine_Vector3_array *)0x0) {
    uVar3 = rim->max_length;
    fVar13 = (__this->fields)._center.fields.y;
    uVar21 = (__this->fields)._center.fields.z;
    fVar22 = fVar13 + 1000.0;
    fVar19 = (__this->fields)._center.fields.x;
    fVar20 = 0.0;
    if (g_data_057ac31b == '\0') {
      fVar20 = 0.0;
      in_stack_ffffffffffffff90 = 0.0;
      in_stack_ffffffffffffff7c._0_2_ = 0;
      in_stack_ffffffffffffff7c._2_2_ = 0;
      in_stack_ffffffffffffff80._0_2_ = 0;
      in_stack_ffffffffffffff80._2_1_ = '\0';
      in_stack_ffffffffffffff80._3_1_ = '\0';
      in_stack_ffffffffffffff80._4_4_ = 0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057ac31b = '\x01';
      in_stack_ffffffffffffff70 = uVar21;
      in_stack_ffffffffffffff78 = fVar22;
      in_stack_ffffffffffffff88 = fVar19;
      in_stack_ffffffffffffff8c = fVar20;
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    fVar23 = (float)uVar1;
    uVar24 = (undefined4)((ulong)uVar1 >> 0x20);
    uVar25 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      in_stack_ffffffffffffff80._0_2_ = 0;
      in_stack_ffffffffffffff80._2_1_ = '\0';
      in_stack_ffffffffffffff80._3_1_ = '\0';
      in_stack_ffffffffffffff80._4_4_ = 0;
      il2cpp_runtime_helper_02337ed0();
      in_stack_ffffffffffffff70 = uVar21;
      in_stack_ffffffffffffff74 = uVar25;
      in_stack_ffffffffffffff78 = fVar23;
      in_stack_ffffffffffffff7c = uVar24;
      in_stack_ffffffffffffff88 = fVar19;
      in_stack_ffffffffffffff8c = fVar22;
      in_stack_ffffffffffffff90 = fVar20;
    }
    UVar27.fields.y = fVar22;
    UVar27.fields.x = fVar19;
    UVar27.fields.z = (float)uVar21;
    direction.fields.y = (float)uVar24;
    direction.fields.x = fVar23;
    direction.fields.z = (float)uVar25;
    bVar10 = UnityEngine_Physics__Raycast_4e776c0
                       (UVar27,direction,(UnityEngine_RaycastHit_o *)&local_58,5000.0,mask,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      __this_04.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff70;
      __this_04.fields.m_Point.fields._0_8_ = in_stack_ffffffffffffff68;
      __this_04.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
      __this_04.fields.m_Normal.fields.y = in_stack_ffffffffffffff78;
      __this_04.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff7c;
      __this_04.fields._24_8_ = in_stack_ffffffffffffff80;
      __this_04.fields.m_UV.fields.x = in_stack_ffffffffffffff88;
      __this_04.fields.m_UV.fields.y = in_stack_ffffffffffffff8c;
      __this_04.fields.m_Collider = (int32_t)in_stack_ffffffffffffff90;
      UVar27 = UnityEngine_RaycastHit__get_point(__this_04,(MethodInfo *)&local_58);
      fVar13 = UVar27.fields.y;
    }
    iVar9 = (int)uVar3;
    pUVar17 = (UnityEngine_Vector3_array *)(ulong)(iVar9 + 1);
    x = TypeInfo_Vector3;
    value = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
    if (value != (UnityEngine_Vector3_array *)0x0) {
      uVar4 = value->max_length;
      if ((int)uVar4 == 0) {
label_043360db:
        il2cpp_runtime_helper_022b2ca0();
      }
      else {
        fVar19 = (__this->fields)._center.fields.z;
        value->m_Items[0].fields.x = (__this->fields)._center.fields.x;
        value->m_Items[0].fields.y = fVar13 + 0.05;
        value->m_Items[0].fields.z = fVar19;
        if (iVar9 < 1) {
          x = (UnityEngine_Vector3_array *)(ulong)(uint)(iVar9 * 3);
          pUVar11 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
        }
        else {
          pUVar16 = (UnityEngine_Vector3_array *)(uVar3 & 0xffffffff);
          lVar14 = 0x34;
          pUVar11 = (UnityEngine_Vector3_array *)0x0;
          do {
            pUVar17 = (UnityEngine_Vector3_array *)(ulong)(uint)rim->max_length;
            if ((pUVar17 <= pUVar11) ||
               (pUVar11 = (UnityEngine_Vector3_array *)((long)&(pUVar11->obj).klass + 1),
               (UnityEngine_Vector3_array *)(uVar4 & 0xffffffff) <= pUVar11)) goto label_043360db;
            uVar2 = *(uint *)((long)rim->m_Items + lVar14 + -0x2c);
            x = (UnityEngine_Vector3_array *)(ulong)uVar2;
            *(undefined8 *)((long)value->m_Items + lVar14 + -0x28) =
                 *(undefined8 *)((long)rim->m_Items + lVar14 + -0x34);
            *(uint *)((long)value->m_Items + lVar14 + -0x20) = uVar2;
            lVar14 = lVar14 + 0xc;
          } while (pUVar16 != pUVar11);
          x = (UnityEngine_Vector3_array *)(ulong)(uint)(iVar9 * 3);
          pUVar18 = TypeInfo_int;
          pUVar11 = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
          if (0 < iVar9) {
            pUVar17 = x;
            x = pUVar18;
            if (pUVar11 == (UnityEngine_Vector3_array *)0x0) goto label_043360e0;
            uVar2 = (uint)pUVar11->max_length;
            uVar15 = 2;
            pUVar17 = (UnityEngine_Vector3_array *)0x0;
            do {
              if (uVar2 <= uVar15 - 2) goto label_043360db;
              (&pUVar11->m_Items[0].fields.x)[(int)(uVar15 - 2)] = 0.0;
              if (uVar2 <= uVar15 - 1) goto label_043360db;
              x = (UnityEngine_Vector3_array *)((long)&(pUVar17->obj).klass + 1);
              (&pUVar11->m_Items[0].fields.x)[(int)(uVar15 - 1)] = SUB84(x,0);
              if (uVar2 <= uVar15) goto label_043360db;
              fVar13 = (float)((int)pUVar17 + 2);
              if ((UnityEngine_Vector3_array *)&pUVar16[-1].field_0xc0017 == pUVar17) {
                fVar13 = 1.4013e-45;
              }
              (&pUVar11->m_Items[0].fields.x)[(int)uVar15] = fVar13;
              uVar15 = uVar15 + 3;
              pUVar17 = x;
            } while (pUVar16 != x);
          }
        }
        pUVar5 = (__this->fields)._diskMesh;
        pUVar17 = x;
        x = (UnityEngine_Vector3_array *)0x0;
        if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
          pUVar17 = (UnityEngine_Vector3_array *)0x0;
          UnityEngine_Mesh__Clear(pUVar5,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._diskMesh;
          x = (UnityEngine_Vector3_array *)0x0;
          if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
            UnityEngine_Mesh__set_vertices(pUVar5,value,(MethodInfo *)0x0);
            pUVar5 = (__this->fields)._diskMesh;
            x = (UnityEngine_Vector3_array *)0x0;
            pUVar17 = value;
            if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
              UnityEngine_Mesh__set_triangles(pUVar5,(System_Int32_array *)pUVar11,(MethodInfo *)0x0);
              pUVar5 = (__this->fields)._diskMesh;
              x = (UnityEngine_Vector3_array *)0x0;
              pUVar17 = pUVar11;
              if (pUVar5 != (UnityEngine_Mesh_o *)0x0) {
                UnityEngine_Mesh__RecalculateBounds(pUVar5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_043360e0:
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae094 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BrushEntry_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BrushEntry_get_Item);
    g_data_057ae094 = '\x01';
  }
  pIVar28 = (Il2CppObject *)0x0;
  if (pUVar17 != (UnityEngine_Vector3_array *)0x0) {
    pIVar6 = (pUVar17->obj).klass;
    dVar8 = (double)(**(code **)((UnityEngine_Object_VTable *)pIVar6->vtable + 2))
                              (pUVar17,*(undefined8 *)
                                        ((long)((UnityEngine_Object_VTable *)pIVar6->vtable + 2) + 8));
    pSVar7 = *(System_Collections_Generic_List_object__o **)&x->m_Items[3].fields.y;
    if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
      fVar13 = (float)dVar8 * fVar13;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff30,pSVar7,
                 MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
      __this_00.fields._version = (int32_t)fVar13;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffff20._8_4_;
      __this_00.fields._current = pIVar28;
      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff30);
      if ((char)bVar10 == '\0') {
        __this_01.fields._version = (int32_t)fVar13;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffff20._8_4_;
        __this_01.fields._current = pIVar28;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
        goto label_04336239;
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  do {
    auVar26 = il2cpp_runtime_helper_022b2c90();
    if (auVar26._8_4_ != 1) {
label_043362b6:
      __this_03.fields._version = (int32_t)fVar13;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff20._8_4_;
      __this_03.fields._current = pIVar28;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
      _Unwind_Resume(auVar26._0_8_);
    }
    plVar12 = (long *)__cxa_begin_catch(auVar26._0_8_);
    lVar14 = *plVar12;
    __cxa_end_catch();
    __this_02.fields._version = (int32_t)fVar13;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff20._8_4_;
    __this_02.fields._current = pIVar28;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff30);
    if (lVar14 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar14);
      goto label_043362b6;
    }
label_04336239:
    pSVar7 = *(System_Collections_Generic_List_object__o **)&x->m_Items[3].fields.y;
    if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___get_Item(pSVar7,(pSVar7->fields)._size + -1,MethodInfo_BrushEntry_get_Item);
      return;
    }
  } while( true );
}


// MapEditor.MapEditorBrush$$RegenerateGhosts
// il2cpp: void MapEditor_MapEditorBrush__RegenerateGhosts (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4333cd0

void MapEditor_MapEditorBrush__RegenerateGhosts(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t Seed;
  int iVar2;
  System_Collections_Generic_List_BrushEntry__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  UnityEngine_GameObject_o *item;
  UnityEngine_GameObject_array *pUVar4;
  System_Collections_Generic_List_string__o *__this_02;
  System_String_array *pSVar5;
  System_Collections_Generic_List_Vector3__o *pSVar6;
  UnityEngine_Vector3_array *pUVar7;
  UnityEngine_Vector3_Fields *pUVar8;
  System_Collections_Generic_List_GameObject__o *pSVar9;
  long lVar10;
  UnityEngine_Vector3_Fields item_00;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  undefined1 auVar11 [16];
  undefined8 x;
  bool_conflict bVar12;
  int iVar13;
  MapEditor_MapEditorBrush_o *__this_10;
  MapEditor_BrushEntry_o *entry;
  Map_MapScriptSceneObject_o *script;
  Map_MapObject_o *pMVar14;
  MapEditor_MapEditorBrush_o *pMVar15;
  long *plVar16;
  int iVar17;
  uint uVar18;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  uint uVar19;
  float fVar20;
  uint uVar21;
  System_Collections_Generic_List_Enumerator_T__c *method_02;
  uint uVar22;
  MethodInfo *pMVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [12];
  UnityEngine_Vector3_o item_01;
  UnityEngine_Vector3_o item_02;
  UnityEngine_Vector3_o item_03;
  float in_stack_fffffffffffffee8;
  float fVar33;
  float in_stack_fffffffffffffeec;
  float fVar34;
  float in_stack_fffffffffffffef0;
  float in_stack_fffffffffffffef4;
  Il2CppObject *in_stack_fffffffffffffef8;
  float local_fc;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined1 local_98 [80];
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (g_data_057ae093 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BrushEntry_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Random);
    g_data_057ae093 = '\x01';
  }
  local_98._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_98._8_8_ = (Il2CppMethodPointer)0x0;
  local_98._16_8_ = (Il2CppObject *)0x0;
  local_98._48_8_ = (Il2CppType **)0x0;
  local_98._56_8_ = (Il2CppRGCTXData *)0x0;
  local_98._64_8_ = (UnityEngine_Object_o *)0x0;
  MapEditor_MapEditorBrush__ClearGhosts(__this,method);
  if ((char)(__this->fields).Active == '\0') {
    return;
  }
  pSVar3 = (__this->fields).Entries;
  if (pSVar3 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
    if ((pSVar3->fields)._size == 0) {
      return;
    }
    Seed = (__this->fields)._seed;
    __this_10 = (MapEditor_MapEditorBrush_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Random);
    System_Random___ctor_3ccb3c0((System_Random_o *)__this_10,Seed,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).Entries;
    if (pSVar3 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
      local_98._16_8_ = local_38;
      local_98._0_8_ = local_48._0_8_;
      local_98._8_8_ = local_48._8_8_;
      local_fc = 0.0;
      local_98._40_8_ = __this;
      while (__this_03.fields._list._4_4_ = in_stack_fffffffffffffeec,
            __this_03.fields._list._0_4_ = in_stack_fffffffffffffee8,
            __this_03.fields._index = (int32_t)in_stack_fffffffffffffef0,
            __this_03.fields._version = (int32_t)in_stack_fffffffffffffef4,
            __this_03.fields._current = in_stack_fffffffffffffef8,
            bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_03,(MethodInfo_321A1D0 *)local_98), (char)bVar12 != '\0') {
        if ((Il2CppObject *)local_98._16_8_ == (Il2CppObject *)0x0) goto label_043349a9;
        fVar20 = 0.0001;
        if (0.0001 <= *(float *)&((Il2CppObject *)(local_98._16_8_ + 0x10))->monitor) {
          fVar20 = *(float *)&((Il2CppObject *)(local_98._16_8_ + 0x10))->monitor;
        }
        local_fc = local_fc + fVar20;
      }
      __this_04.fields._list._4_4_ = in_stack_fffffffffffffeec;
      __this_04.fields._list._0_4_ = in_stack_fffffffffffffee8;
      __this_04.fields._index = (int32_t)in_stack_fffffffffffffef0;
      __this_04.fields._version = (int32_t)in_stack_fffffffffffffef4;
      __this_04.fields._current = in_stack_fffffffffffffef8;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)local_98);
      if ((__this->fields).AssetSelectMode == 1) {
        uVar21 = (__this->fields).RandomizeEachPlacement;
        uVar22 = (__this->fields).GridX;
        uVar18 = 1;
        if (0 < (int)uVar21) {
          uVar18 = uVar21;
        }
        uVar19 = 1;
        if (0 < (int)uVar22) {
          uVar19 = uVar22;
        }
        iVar13 = (__this->fields).GridY;
        iVar17 = 1;
        if (0 < iVar13) {
          iVar17 = iVar13;
        }
        fVar20 = (float)(uVar19 * uVar18 * iVar17);
      }
      else {
        fVar20 = (__this->fields).Radius;
        uVar21 = (__this->fields).RandomizeEachPlacement;
        uVar22 = (__this->fields).GridX;
        iVar13 = (__this->fields).GridY;
      }
      if ((int)uVar21 < 1) {
        uVar21 = 1;
      }
      method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(ulong)uVar21;
      if ((int)uVar22 < 1) {
        uVar22 = 1;
      }
      pMVar23 = (MethodInfo *)(ulong)uVar22;
      local_98._24_8_ = pMVar23;
      local_98._32_8_ = method_02;
      if (0 < (int)fVar20) {
        if (iVar13 < 1) {
          iVar13 = 1;
        }
        uVar24 = 0;
        do {
          while( true ) {
            entry = MapEditor_MapEditorBrush__PickEntry(__this,(System_Random_o *)__this_10,local_fc,pMVar23);
            if (entry == (MapEditor_BrushEntry_o *)0x0) goto label_043349a4;
            iVar17 = (int)uVar24;
            if ((char)(entry->fields).Advanced == '\0') break;
            if (__this_10 == (MapEditor_MapEditorBrush_o *)0x0) goto label_043349a4;
            fVar31 = (entry->fields).ScaleXMin;
            fVar33 = (entry->fields).ScaleXMax;
            dVar27 = (double)(*(((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.methodPtr)
                                       (__this_10,
                                        (((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.method);
            fVar34 = (entry->fields).ScaleYMin;
            fVar25 = (entry->fields).ScaleYMax;
            dVar28 = (double)(*(((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.methodPtr)
                                       (__this_10,
                                        (((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.method);
            auVar30._0_4_ = (float)dVar27;
            auVar30._4_4_ = (float)dVar28;
            auVar30._8_8_ = 0;
            auVar29 = minps(_DAT_00d19fc0,auVar30);
            local_d8 = CONCAT44((fVar25 - fVar34) * (float)(-(uint)(0.0 <= auVar30._4_4_) & auVar29._4_4_) +
                                fVar34,(fVar33 - fVar31) *
                                       (float)(-(uint)(0.0 <= auVar30._0_4_) & auVar29._0_4_) + fVar31);
            fVar31 = (entry->fields).ScaleZMin;
            fVar33 = (entry->fields).ScaleZMax;
            dVar27 = (double)(*(((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.methodPtr)
                                       (__this_10,
                                        (((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.method);
            fVar25 = (float)dVar27;
            fVar34 = 1.0;
            if (fVar25 <= 1.0) {
              fVar34 = fVar25;
            }
            fVar31 = (fVar33 - fVar31) * (float)(-(uint)(0.0 <= fVar25) & (uint)fVar34) + fVar31;
            in_stack_fffffffffffffee8 = (entry->fields).RotXMin;
            fVar33 = (entry->fields).RotXMax;
            fVar25 = 0.0;
            dVar27 = (double)(*(((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.methodPtr)
                                       (__this_10,
                                        (((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.method);
            local_f8._4_4_ = (entry->fields).RotYMin;
            fVar34 = (entry->fields).RotYMax;
            fVar26 = 0.0;
            dVar28 = (double)(*(((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.methodPtr)
                                       (__this_10,
                                        (((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.method);
            auVar29._0_4_ = (float)dVar27;
            auVar29._4_4_ = (float)dVar28;
            auVar29._8_8_ = 0;
            auVar30 = minps(_DAT_00d19fc0,auVar29);
            in_stack_fffffffffffffee8 =
                 (fVar33 - in_stack_fffffffffffffee8) * (float)(-(uint)(0.0 <= auVar29._0_4_) & auVar30._0_4_)
                 + in_stack_fffffffffffffee8;
            in_stack_fffffffffffffeec =
                 (fVar34 - (float)local_f8._4_4_) * (float)(-(uint)(0.0 <= auVar29._4_4_) & auVar30._4_4_) +
                 (float)local_f8._4_4_;
            in_stack_fffffffffffffef0 = (fVar25 - 0.0) * auVar30._8_4_ + 0.0;
            in_stack_fffffffffffffef4 = (fVar26 - 0.0) * auVar30._12_4_ + 0.0;
            fVar33 = (entry->fields).RotZMin;
            fVar34 = (entry->fields).RotZMax;
            pMVar15 = __this_10;
            dVar27 = (double)(*(((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.methodPtr)
                                       (__this_10,
                                        (((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.method);
            fVar26 = (float)dVar27;
            fVar25 = 1.0;
            if (fVar26 <= 1.0) {
              fVar25 = fVar26;
            }
            local_f8._0_4_ = (fVar34 - fVar33) * (float)(-(uint)(0.0 <= fVar26) & (uint)fVar25) + fVar33;
            local_f8._8_8_ = 0;
            method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(entry->fields).AssetName;
            script = MapEditor_MapEditorBrush__CloneScript(pMVar15,(System_String_o *)method_02,method_00);
            pMVar23 = extraout_RDX_00;
            if (script != (Map_MapScriptSceneObject_o *)0x0) goto label_0433438b;
joined_r0x043348cf:
            uVar24 = (ulong)(uint)(iVar17 + 1);
            if (fVar20 == (float)(iVar17 + 1)) goto label_043348d5;
          }
          if (__this_10 == (MapEditor_MapEditorBrush_o *)0x0) goto label_043349a4;
          fVar31 = (entry->fields).ScaleMin;
          fVar33 = (entry->fields).ScaleMax;
          dVar27 = (double)(*(((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.methodPtr)
                                     (__this_10,
                                      (((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.method);
          fVar25 = (float)dVar27;
          fVar34 = 1.0;
          if (fVar25 <= 1.0) {
            fVar34 = fVar25;
          }
          fVar31 = (fVar33 - fVar31) * (float)(-(uint)(0.0 <= fVar25) & (uint)fVar34) + fVar31;
          local_d8 = CONCAT44(fVar31,fVar31);
          in_stack_fffffffffffffeec = (entry->fields).YawMin;
          fVar33 = (entry->fields).YawMax;
          pMVar15 = __this_10;
          dVar27 = (double)(*(((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.methodPtr)
                                     (__this_10,
                                      (((System_Random_c *)__this_10->klass)->vtable)._8_NextDouble.method);
          fVar25 = (float)dVar27;
          fVar34 = 1.0;
          if (fVar25 <= 1.0) {
            fVar34 = fVar25;
          }
          auVar11._12_4_ = 0;
          auVar11._0_12_ = local_f8._4_12_;
          local_f8._0_16_ = auVar11 << 0x20;
          in_stack_fffffffffffffeec =
               (fVar33 - in_stack_fffffffffffffeec) * (float)(-(uint)(0.0 <= fVar25) & (uint)fVar34) +
               in_stack_fffffffffffffeec;
          in_stack_fffffffffffffee8 = 0.0;
          in_stack_fffffffffffffef0 = 0.0;
          in_stack_fffffffffffffef4 = 0.0;
          method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(entry->fields).AssetName;
          script = MapEditor_MapEditorBrush__CloneScript(pMVar15,(System_String_o *)method_02,method_01);
          pMVar23 = extraout_RDX_01;
          if (script == (Map_MapScriptSceneObject_o *)0x0) goto joined_r0x043348cf;
label_0433438b:
          (script->fields).RotationY = (script->fields).RotationY * (float)local_d8;
          (script->fields).RotationZ = local_d8._4_4_ * (script->fields).RotationZ;
          (script->fields).ScaleX = (script->fields).ScaleX * fVar31;
          (script->fields).PositionY = in_stack_fffffffffffffee8;
          (script->fields).PositionZ = in_stack_fffffffffffffeec;
          (script->fields).RotationX = (float)local_f8._0_4_;
          iVar2 = (__this->fields)._ghostIdCounter;
          (__this->fields)._ghostIdCounter = iVar2 + -1;
          (script->fields).Id = iVar2;
          MapEditor_MapEditorBrush__ApplyEntryFields(script,entry,pMVar23);
          if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)&(script->fields).ScaleZ = *(undefined8 *)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
          il2cpp_runtime_helper_022b4080(&(script->fields).ScaleZ);
          *(undefined1 *)((long)&(script->fields).Active + 3) = 0;
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar14 = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)script,1,(MethodInfo *)0x0);
          if ((((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8)
                == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
              (System_Collections_Generic_Dictionary_int__object___Remove
                         ((System_Collections_Generic_Dictionary_int__object__o *)
                          **(undefined8 **)(TypeInfo_MapLoader + 0xb8),(script->fields).Id,MethodInfo_Boolean_Remove),
              __this = (MapEditor_MapEditorBrush_o *)local_98._40_8_, pMVar14 == (Map_MapObject_o *)0x0)) ||
             (__this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10),
             __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_043349a4;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (__this_00,(Il2CppObject *)(pMVar14->fields).GameObject,MethodInfo_Boolean_Remove);
          pMVar15 = *(MapEditor_MapEditorBrush_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
          if (pMVar15 == (MapEditor_MapEditorBrush_o *)0x0) goto label_043349a4;
          bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_int__object__o *)pMVar15,
                              (script->fields).Parent,MethodInfo_Boolean_ContainsKey);
          pMVar23 = extraout_RDX_02;
          if ((char)bVar12 != '\0') {
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_01 = *(System_Collections_Generic_Dictionary_int__object__o **)
                         (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
            if ((__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
               (pMVar15 = (MapEditor_MapEditorBrush_o *)
                          System_Collections_Generic_Dictionary_int__object___get_Item
                                    (__this_01,(script->fields).Parent,MethodInfo_HashSet_1_System_Int32_get_Item),
               pMVar15 == (MapEditor_MapEditorBrush_o *)0x0)) goto label_043349a4;
            System_Collections_Generic_HashSet_int___Remove
                      ((System_Collections_Generic_HashSet_int__o *)pMVar15,(script->fields).Id,MethodInfo_Boolean_Remove);
            pMVar23 = extraout_RDX_03;
          }
          MapEditor_MapEditorBrush__ApplyGhostAppearance(pMVar15,(pMVar14->fields).GameObject,pMVar23);
          lVar10 = MethodInfo_Void_Add;
          pSVar9 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostObjects;
          if (pSVar9 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043349a4;
          item = (pMVar14->fields).GameObject;
          piVar1 = &(pSVar9->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (pSVar9->fields)._items;
          if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto label_043349a4;
          uVar18 = (pSVar9->fields)._size;
          if (uVar18 < (uint)pUVar4->max_length) {
            (pSVar9->fields)._size = uVar18 + 1;
            pUVar4->m_Items[(int)uVar18] = item;
            il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar18);
            __this_02 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostAssets;
            lVar10 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            __this_02 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostAssets;
            lVar10 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar10;
          if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) goto label_043349a4;
          method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(entry->fields).AssetName;
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_02->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) goto label_043349a4;
          uVar18 = (__this_02->fields)._size;
          if (uVar18 < (uint)pSVar5->max_length) {
            (__this_02->fields)._size = uVar18 + 1;
            pSVar5->m_Items[(int)uVar18] = (System_String_o *)method_02;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar18);
            pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostScales;
            lVar10 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)method_02,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostScales;
            lVar10 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar10;
          if (pSVar6 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_043349a4;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (pSVar6->fields)._items;
          if (pUVar7 == (UnityEngine_Vector3_array *)0x0) goto label_043349a4;
          uVar18 = (pSVar6->fields)._size;
          if (uVar18 < (uint)pUVar7->max_length) {
            (pSVar6->fields)._size = uVar18 + 1;
            pUVar7->m_Items[(int)uVar18].fields.x = (float)local_d8;
            pUVar7->m_Items[(int)uVar18].fields.y = local_d8._4_4_;
            pUVar7->m_Items[(int)uVar18].fields.z = fVar31;
            pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostRotations;
            lVar10 = MethodInfo_Void_Add;
          }
          else {
            method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                         (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
            item_01.fields.z = fVar31;
            item_01.fields.x = (float)local_d8;
            item_01.fields.y = local_d8._4_4_;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (pSVar6,item_01,(MethodInfo_36A2CA0 *)method_02);
            pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostRotations;
            lVar10 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar10;
          if (pSVar6 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_043349a4;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (pSVar6->fields)._items;
          if (pUVar7 == (UnityEngine_Vector3_array *)0x0) goto label_043349a4;
          uVar18 = (pSVar6->fields)._size;
          if (uVar18 < (uint)pUVar7->max_length) {
            (pSVar6->fields)._size = uVar18 + 1;
            pUVar7->m_Items[(int)uVar18].fields.x = in_stack_fffffffffffffee8;
            pUVar7->m_Items[(int)uVar18].fields.y = in_stack_fffffffffffffeec;
            pUVar7->m_Items[(int)uVar18].fields.z = (float)local_f8._0_4_;
            iVar2 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->AssetSelectMode;
            lVar10 = MethodInfo_Void_Add;
          }
          else {
            method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                         (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
            item_02.fields.y = in_stack_fffffffffffffeec;
            item_02.fields.x = in_stack_fffffffffffffee8;
            item_02.fields.z = (float)local_f8._0_4_;
            System_Collections_Generic_List_Vector3___AddWithResize
                      (pSVar6,item_02,(MethodInfo_36A2CA0 *)method_02);
            iVar2 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->AssetSelectMode;
            lVar10 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar10;
          if (iVar2 != 1) {
            pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostLocalOffsets;
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            lVar10 = MethodInfo_Void_Add;
            if (pSVar6 != (System_Collections_Generic_List_Vector3__o *)0x0) {
              pUVar8 = *(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
              fVar33 = pUVar8->x;
              fVar34 = pUVar8->y;
              fVar31 = pUVar8->z;
              item_00 = *pUVar8;
              piVar1 = &(pSVar6->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar7 = (pSVar6->fields)._items;
              if (pUVar7 != (UnityEngine_Vector3_array *)0x0) {
                uVar18 = (pSVar6->fields)._size;
                pMVar23 = (MethodInfo *)(long)(int)uVar18;
                if (uVar18 < (uint)pUVar7->max_length) {
                  (pSVar6->fields)._size = uVar18 + 1;
                  pUVar7->m_Items[(long)pMVar23].fields.x = fVar33;
                  pUVar7->m_Items[(long)pMVar23].fields.y = fVar34;
                  pUVar7->m_Items[(long)pMVar23].fields.z = fVar31;
                }
                else {
                  method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                               (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
                  System_Collections_Generic_List_Vector3___AddWithResize
                            (pSVar6,(UnityEngine_Vector3_o)item_00,(MethodInfo_36A2CA0 *)method_02);
                  pMVar23 = extraout_RDX;
                }
                goto joined_r0x043348cf;
              }
            }
            goto label_043349a4;
          }
          method_02 = (System_Collections_Generic_List_Enumerator_T__c *)
                      ((uVar24 / (local_98._32_8_ & 0xffffffff)) % (local_98._24_8_ & 0xffffffff));
          pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostLocalOffsets;
          if (pSVar6 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_043349a4;
          item_03.fields.x =
               ((float)(int)(uVar24 % (local_98._32_8_ & 0xffffffff)) - (float)(int)(uVar21 - 1) * 0.5) *
               (float)((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->GridZ;
          fVar31 = ((float)(int)method_02 - (float)(int)(uVar22 - 1) * 0.5) *
                   ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->SpacingX;
          item_03.fields.z =
               ((float)(iVar17 / (int)(uVar22 * uVar21)) - (float)(iVar13 + -1) * 0.5) *
               ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->SpacingY;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (pSVar6->fields)._items;
          if (pUVar7 == (UnityEngine_Vector3_array *)0x0) goto label_043349a4;
          item_03.fields.y = fVar31;
          uVar18 = (pSVar6->fields)._size;
          pMVar23 = (MethodInfo *)(long)(int)uVar18;
          if ((uint)pUVar7->max_length <= uVar18) {
            method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                         (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List_Vector3___AddWithResize
                      (pSVar6,item_03,(MethodInfo_36A2CA0 *)method_02);
            pMVar23 = extraout_RDX_04;
            goto joined_r0x043348cf;
          }
          (pSVar6->fields)._size = uVar18 + 1;
          pUVar7->m_Items[(long)pMVar23].fields.x = item_03.fields.x;
          pUVar7->m_Items[(long)pMVar23].fields.y = fVar31;
          pUVar7->m_Items[(long)pMVar23].fields.z = item_03.fields.z;
          uVar24 = (ulong)(uint)(iVar17 + 1);
        } while (fVar20 != (float)(iVar17 + 1));
      }
label_043348d5:
      if ((char)(__this->fields)._hasCenter != '\0') {
        MapEditor_MapEditorBrush__PositionGhosts(__this,(MethodInfo *)method_02);
        return;
      }
      pSVar9 = (__this->fields)._ghostObjects;
      if (pSVar9 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)(local_98 + 0x30),
                   (System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
        while( true ) {
          do {
            __this_05.fields._list._4_4_ = in_stack_fffffffffffffeec;
            __this_05.fields._list._0_4_ = in_stack_fffffffffffffee8;
            __this_05.fields._index = (int32_t)in_stack_fffffffffffffef0;
            __this_05.fields._version = (int32_t)in_stack_fffffffffffffef4;
            __this_05.fields._current = in_stack_fffffffffffffef8;
            bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_05,(MethodInfo_321A1D0 *)(local_98 + 0x30));
            x = local_98._64_8_;
            if ((char)bVar12 == '\0') {
              __this_06.fields._list._4_4_ = in_stack_fffffffffffffeec;
              __this_06.fields._list._0_4_ = in_stack_fffffffffffffee8;
              __this_06.fields._index = (int32_t)in_stack_fffffffffffffef0;
              __this_06.fields._version = (int32_t)in_stack_fffffffffffffef4;
              __this_06.fields._current = in_stack_fffffffffffffef8;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_06,(MethodInfo_321A1C0 *)(local_98 + 0x30));
              return;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          } while ((char)bVar12 == '\0');
          if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,0,(MethodInfo *)0x0);
        }
        goto label_043349ae;
      }
    }
  }
label_043349a4:
  il2cpp_runtime_helper_022b2c90();
label_043349a9:
  il2cpp_runtime_helper_022b2c90();
label_043349ae:
  auVar32 = il2cpp_runtime_helper_022b2c90();
  if (auVar32._8_4_ == 1) {
    plVar16 = (long *)__cxa_begin_catch(auVar32._0_8_);
    lVar10 = *plVar16;
    __cxa_end_catch();
    __this_07.fields._list._4_4_ = in_stack_fffffffffffffeec;
    __this_07.fields._list._0_4_ = in_stack_fffffffffffffee8;
    __this_07.fields._index = (int32_t)in_stack_fffffffffffffef0;
    __this_07.fields._version = (int32_t)in_stack_fffffffffffffef4;
    __this_07.fields._current = in_stack_fffffffffffffef8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)(local_98 + 0x30));
    if (lVar10 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar10);
    __this_09.fields._list._4_4_ = in_stack_fffffffffffffeec;
    __this_09.fields._list._0_4_ = in_stack_fffffffffffffee8;
    __this_09.fields._index = (int32_t)in_stack_fffffffffffffef0;
    __this_09.fields._version = (int32_t)in_stack_fffffffffffffef4;
    __this_09.fields._current = in_stack_fffffffffffffef8;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_09,(MethodInfo_321A1C0 *)local_98);
  }
  else {
    __this_08.fields._list._4_4_ = in_stack_fffffffffffffeec;
    __this_08.fields._list._0_4_ = in_stack_fffffffffffffee8;
    __this_08.fields._index = (int32_t)in_stack_fffffffffffffef0;
    __this_08.fields._version = (int32_t)in_stack_fffffffffffffef4;
    __this_08.fields._current = in_stack_fffffffffffffef8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)(local_98 + 0x30));
  }
  _Unwind_Resume(auVar32._0_8_);
}


// MapEditor.MapEditorBrush$$PickEntry
// il2cpp: MapEditor_BrushEntry_o* MapEditor_MapEditorBrush__PickEntry (MapEditor_MapEditorBrush_o* __this, System_Random_o* rand, float totalWeight, const MethodInfo* method);
// 0x43360f0

MapEditor_BrushEntry_o *
MapEditor_MapEditorBrush__PickEntry
          (MapEditor_MapEditorBrush_o *__this,System_Random_o *rand,float totalWeight,MethodInfo *method)

{
  System_Collections_Generic_List_BrushEntry__o *pSVar1;
  long lVar2;
  double dVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  MapEditor_BrushEntry_o *pMVar5;
  long *plVar6;
  MethodInfo *extraout_RDX;
  undefined1 auVar7 [12];
  undefined1 in_stack_ffffffffffffffb8 [12];
  Il2CppObject *pIVar8;
  
  if (g_data_057ae094 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BrushEntry_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BrushEntry_get_Item);
    g_data_057ae094 = '\x01';
    method = extraout_RDX;
  }
  pIVar8 = (Il2CppObject *)0x0;
  if (rand != (System_Random_o *)0x0) {
    dVar3 = (double)(*(rand->klass->vtable)._8_NextDouble.methodPtr)
                              (rand,(rand->klass->vtable)._8_NextDouble.method,method);
    pSVar1 = (__this->fields).Entries;
    if (pSVar1 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
      totalWeight = (float)dVar3 * totalWeight;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
      __this_00.fields._version = (int32_t)totalWeight;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffffb8._8_4_;
      __this_00.fields._current = pIVar8;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar4 == '\0') {
        __this_01.fields._version = (int32_t)totalWeight;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffffb8._8_4_;
        __this_01.fields._current = pIVar8;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        goto label_04336239;
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  do {
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ != 1) {
label_043362b6:
      __this_03.fields._version = (int32_t)totalWeight;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffffb8._8_4_;
      __this_03.fields._current = pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      _Unwind_Resume(auVar7._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._version = (int32_t)totalWeight;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffffb8._8_4_;
    __this_02.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_043362b6;
    }
label_04336239:
    pSVar1 = (__this->fields).Entries;
    if (pSVar1 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
      pMVar5 = (MapEditor_BrushEntry_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,(pSVar1->fields)._size + -1,
                          MethodInfo_BrushEntry_get_Item);
      return pMVar5;
    }
  } while( true );
}


// MapEditor.MapEditorBrush$$CloneScript
// il2cpp: Map_MapScriptSceneObject_o* MapEditor_MapEditorBrush__CloneScript (MapEditor_MapEditorBrush_o* __this, System_String_o* asset, const MethodInfo* method);
// 0x43362f0

Map_MapScriptSceneObject_o *
MapEditor_MapEditorBrush__CloneScript
          (MapEditor_MapEditorBrush_o *__this,System_String_o *asset,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar10;
  Map_MapScriptBaseObject_array *pMVar11;
  System_String_c *pSVar12;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Object_o *pUVar13;
  undefined1 auVar14 [16];
  int iVar15;
  undefined8 uVar16;
  bool_conflict bVar17;
  System_String_array *pSVar18;
  Map_MapScriptObjects_o *pMVar19;
  System_String_Fields __this_01;
  Map_MapScriptSceneObject_o *pMVar20;
  System_Object_array *pSVar21;
  UnityEngine_Material_array *pUVar22;
  UnityEngine_Material_array *value;
  long lVar23;
  UnityEngine_Material_o *pUVar24;
  Map_MapScriptSceneObject_o *extraout_RAX;
  Map_MapScriptSceneObject_o *extraout_RAX_00;
  float *pfVar25;
  uint uVar26;
  undefined8 *puVar27;
  uint uVar28;
  UnityEngine_Material_o **ppUVar29;
  int iVar30;
  ulong uVar31;
  System_String_Fields SVar32;
  MethodInfo *pMVar33;
  UnityEngine_Quaternion_Fields *pUVar34;
  System_String_o **ppSVar35;
  Map_MapScriptSceneObject_o *unaff_R12;
  ulong uVar36;
  UnityEngine_Material_o **ppUVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Da;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined1 auVar46 [16];
  UnityEngine_Color_o UVar47;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Quaternion_Fields UVar48;
  UnityEngine_Vector3_o axis;
  float fStack_f8;
  float fStack_f4;
  
  SVar32 = (System_String_Fields)asset;
  if (g_data_057ae095 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"Custom/");
    g_data_057ae095 = '\x01';
  }
  if (asset == (System_String_o *)0x0) {
label_04336644:
    il2cpp_runtime_helper_022b2c90();
label_04336649:
    il2cpp_runtime_helper_022b2fd0(asset);
  }
  else {
    SVar32 = "Custom/";
    bVar17 = System_String__StartsWith(asset,(System_String_o *)"Custom/",(MethodInfo *)0x0);
    if ((char)bVar17 != '\0') {
      pSVar18 = System_String__Split(asset,0x2f,0,(MethodInfo *)0x0);
      unaff_R12 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
      SVar32._stringLength = 0;
      SVar32._firstChar = 0;
      SVar32._6_2_ = 0;
      Map_MapScriptSceneObject___ctor(unaff_R12,(MethodInfo *)0x0);
      if (unaff_R12 != (Map_MapScriptSceneObject_o *)0x0) {
        (unaff_R12->fields).Asset = asset;
        SVar32 = (System_String_Fields)asset;
        il2cpp_runtime_helper_022b4080(&(unaff_R12->fields).Asset);
        if (pSVar18 != (System_String_array *)0x0) {
          SVar32 = (System_String_Fields)asset;
          if (2 < (int)pSVar18->max_length) {
            SVar32 = *(System_String_Fields *)(pSVar18->m_Items + 2);
          }
          *(System_String_Fields *)&(unaff_R12->fields).Visible = SVar32;
          il2cpp_runtime_helper_022b4080(&(unaff_R12->fields).Visible);
          pSVar8 = (unaff_R12->fields).PhysicsMaterial;
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          asset = (System_String_o *)&TypeInfo_MapObjectShader;
          if (pSVar8 != (System_String_o *)0x0) {
            pSVar8->fields = *(System_String_Fields *)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8);
            il2cpp_runtime_helper_022b4080(&pSVar8->fields);
            return unaff_R12;
          }
        }
      }
      goto label_04336644;
    }
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8)
    ;
    if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04336644;
    SVar32 = (System_String_Fields)asset;
    bVar17 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar9,(Il2CppObject *)asset,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar17 == '\0') {
      return (Map_MapScriptSceneObject_o *)0x0;
    }
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8)
    ;
    if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04336644;
    asset = (System_String_o *)
            System_Collections_Generic_Dictionary_object__object___get_Item
                      (pSVar9,(Il2CppObject *)asset,MethodInfo_MapScriptBaseObject_get_Item);
    if ((System_String_Fields)asset != (System_String_Fields)0x0) {
      SVar32 = TypeInfo_MapScriptSceneObject;
      if ((*(byte *)((long)TypeInfo_MapScriptSceneObject + 0x130) <= *(byte *)(*(long *)asset + 0x130)) &&
         (*(System_String_Fields *)
           (*(long *)(*(long *)asset + 200) + -8 + (ulong)*(byte *)((long)TypeInfo_MapScriptSceneObject + 0x130) * 8) ==
          TypeInfo_MapScriptSceneObject)) goto label_04336515;
      goto label_04336649;
    }
label_04336515:
    unaff_R12 = (Map_MapScriptSceneObject_o *)&TypeInfo_MapScriptObjects;
    pMVar19 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
    SVar32._stringLength = 0;
    SVar32._firstChar = 0;
    SVar32._6_2_ = 0;
    Map_MapScriptObjects___ctor(pMVar19,(MethodInfo *)0x0);
    lVar23 = MethodInfo_Void_Add;
    if ((pMVar19 == (Map_MapScriptObjects_o *)0x0) ||
       (pSVar10 = (pMVar19->fields).Objects,
       pSVar10 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) goto label_04336644;
    piVar1 = &(pSVar10->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar11 = (pSVar10->fields)._items;
    if (pMVar11 == (Map_MapScriptBaseObject_array *)0x0) goto label_04336644;
    uVar26 = (pSVar10->fields)._size;
    if (uVar26 < (uint)pMVar11->max_length) {
      (pSVar10->fields)._size = uVar26 + 1;
      *(System_String_o **)(pMVar11->m_Items + (int)uVar26) = asset;
      il2cpp_runtime_helper_022b4080(pMVar11->m_Items + (int)uVar26,asset);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)asset,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
    }
    asset = (System_String_o *)(*(pMVar19->klass->vtable)._8_Serialize.methodPtr)(pMVar19);
    pMVar19 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
    SVar32._stringLength = 0;
    SVar32._firstChar = 0;
    SVar32._6_2_ = 0;
    Map_MapScriptObjects___ctor(pMVar19,(MethodInfo *)0x0);
    if (pMVar19 == (Map_MapScriptObjects_o *)0x0) goto label_04336644;
    SVar32 = (System_String_Fields)asset;
    (*(pMVar19->klass->vtable)._9_Deserialize.methodPtr)
              (pMVar19,asset,(pMVar19->klass->vtable)._9_Deserialize.method);
    pSVar10 = (pMVar19->fields).Objects;
    if (pSVar10 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) goto label_04336644;
    unaff_R12 = (Map_MapScriptSceneObject_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar10,0,MethodInfo_MapScriptBaseObject_get_Item);
    if (unaff_R12 == (Map_MapScriptSceneObject_o *)0x0) {
      return (Map_MapScriptSceneObject_o *)0x0;
    }
    SVar32 = TypeInfo_MapScriptSceneObject;
    if ((*(byte *)((long)TypeInfo_MapScriptSceneObject + 0x130) <= (unaff_R12->klass->_2).naturalAligment) &&
       (*(System_String_Fields *)
         ((unaff_R12->klass->_2).typeHierarchy + ((ulong)*(byte *)((long)TypeInfo_MapScriptSceneObject + 0x130) - 1)) ==
        TypeInfo_MapScriptSceneObject)) {
      return unaff_R12;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  __this_01 = SVar32;
  if (g_data_057ae09e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBaseMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptReflectiveMaterial);
    g_data_057ae09e = '\x01';
  }
  if ((SVar32 != (System_String_Fields)0x0) && (unaff_R12 != (Map_MapScriptSceneObject_o *)0x0)) {
    *(undefined1 *)&(unaff_R12->fields).Active =
         *(undefined1 *)&((System_String_o *)((long)SVar32 + 0x60))->klass;
    *(undefined1 *)((long)&(unaff_R12->fields).Active + 1) = *(undefined1 *)((long)SVar32 + 0x61);
    *(undefined1 *)((long)&(unaff_R12->fields).Active + 2) = *(undefined1 *)((long)SVar32 + 0x62);
    *(void **)&(unaff_R12->fields).ScaleZ = *(void **)((long)SVar32 + 0x68);
    il2cpp_runtime_helper_022b4080(&(unaff_R12->fields).ScaleZ);
    (unaff_R12->fields).CollideMode = (System_String_o *)*(System_String_Fields *)((long)SVar32 + 0x70);
    il2cpp_runtime_helper_022b4080(&(unaff_R12->fields).CollideMode);
    (unaff_R12->fields).CollideWith = (System_String_o *)((System_String_o *)((long)SVar32 + 0x78))->klass;
    il2cpp_runtime_helper_022b4080(&(unaff_R12->fields).CollideWith);
    pSVar8 = (unaff_R12->fields).PhysicsMaterial;
    ppSVar35 = &(unaff_R12->fields).PhysicsMaterial;
    if (pSVar8 == (System_String_o *)0x0) {
label_04336747:
      pSVar8 = *(void **)((long)SVar32 + 0x80);
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar17 = System_String__op_Equality
                         (pSVar8,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8),(MethodInfo *)0x0);
      if ((char)bVar17 == '\0') {
        pSVar8 = *(void **)((long)SVar32 + 0x80);
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar17 = System_String__op_Equality
                           (pSVar8,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),(MethodInfo *)0x0
                           );
        if ((char)bVar17 != '\0') goto label_043367bd;
        pSVar8 = *(void **)((long)SVar32 + 0x80);
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar17 = System_String__op_Equality
                           (pSVar8,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),
                            (MethodInfo *)0x0);
        if ((char)bVar17 == '\0') {
          pSVar8 = *(void **)((long)SVar32 + 0x80);
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar17 = System_String__op_Equality
                             (pSVar8,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x18),
                              (MethodInfo *)0x0);
          if ((char)bVar17 == '\0') {
            pSVar8 = *(void **)((long)SVar32 + 0x80);
            if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar17 = System_String__op_Equality
                               (pSVar8,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x20),
                                (MethodInfo *)0x0);
            if ((char)bVar17 == '\0') {
              pSVar8 = *(void **)((long)SVar32 + 0x80);
              if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar17 = System_String__op_Equality
                                 (pSVar8,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x28),
                                  (MethodInfo *)0x0);
              if ((char)bVar17 == '\0') {
                pSVar8 = *(void **)((long)SVar32 + 0x80);
                if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar17 = Map_MapObjectShader__IsLegacyShader(pSVar8,(MethodInfo *)0x0);
                if ((char)bVar17 == '\0') goto label_043367bd;
                __this_01 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor
                          ((Map_MapScriptLegacyMaterial_o *)__this_01,(MethodInfo *)0x0);
              }
              else {
                __this_01 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptReflectiveMaterial);
                Map_MapScriptReflectiveMaterial___ctor
                          ((Map_MapScriptReflectiveMaterial_o *)__this_01,(MethodInfo *)0x0);
              }
              goto label_043367d9;
            }
          }
          __this_01 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
          Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this_01,(MethodInfo *)0x0);
        }
        else {
          __this_01 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptDefaultTiledMaterial);
          Map_MapScriptDefaultTiledMaterial___ctor
                    ((Map_MapScriptDefaultTiledMaterial_o *)__this_01,(MethodInfo *)0x0);
        }
      }
      else {
label_043367bd:
        __this_01 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBaseMaterial);
        Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this_01,(MethodInfo *)0x0);
      }
label_043367d9:
      *ppSVar35 = (System_String_o *)__this_01;
      il2cpp_runtime_helper_022b4080(ppSVar35);
      pSVar8 = *ppSVar35;
      if (pSVar8 == (System_String_o *)0x0) goto label_04336ad8;
      __this_01 = *(System_String_Fields *)((long)SVar32 + 0x80);
      pSVar8->fields = __this_01;
      il2cpp_runtime_helper_022b4080(&pSVar8->fields);
    }
    else {
      __this_01 = *(System_String_Fields *)((long)SVar32 + 0x80);
      bVar17 = System_String__op_Inequality
                         ((System_String_o *)pSVar8->fields,(System_String_o *)__this_01,(MethodInfo *)0x0);
      if ((char)bVar17 != '\0') goto label_04336747;
    }
    pSVar8 = *ppSVar35;
    if (pSVar8 != (System_String_o *)0x0) {
      pSVar8[1].klass = (System_String_c *)*(System_String_Fields *)((long)SVar32 + 0x88);
      pMVar20 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_022b4080(pSVar8 + 1);
      pSVar8 = *ppSVar35;
      if (pSVar8 == (System_String_o *)0x0) {
        return pMVar20;
      }
      pSVar12 = pSVar8->klass;
      bVar4 = (pSVar12->_2).naturalAligment;
      if (((*(byte *)(TypeInfo_MapScriptLegacyMaterial + 0x130) <= bVar4) &&
          ((pSVar12->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_MapScriptLegacyMaterial + 0x130) + 0xffffffffffffffff] ==
           (Il2CppClass *)TypeInfo_MapScriptLegacyMaterial)) ||
         ((*(byte *)(TypeInfo_MapScriptDefaultTiledMaterial + 0x130) <= bVar4 &&
          ((pSVar12->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_MapScriptDefaultTiledMaterial + 0x130) + 0xffffffffffffffff] ==
           (Il2CppClass *)TypeInfo_MapScriptDefaultTiledMaterial)))) {
        SVar32 = *(System_String_Fields *)((long)SVar32 + 0xa0);
        pSVar8[1].monitor = (void *)SVar32;
        return (Map_MapScriptSceneObject_o *)SVar32;
      }
      bVar5 = (byte)TypeInfo_MapScriptBasicMaterial[7].fields._size;
      if (bVar4 < bVar5) {
        return (Map_MapScriptSceneObject_o *)pSVar12;
      }
      pMVar20 = (Map_MapScriptSceneObject_o *)(pSVar12->_2).typeHierarchy;
      if (*(System_Collections_Generic_List_MapScriptComponent__o **)((long)pMVar20 + (ulong)bVar5 * 8 + -8)
          != TypeInfo_MapScriptBasicMaterial) {
        return pMVar20;
      }
      __this_01 = *(System_String_Fields *)((long)SVar32 + 0x98);
      pSVar8[1].monitor = (void *)__this_01;
      il2cpp_runtime_helper_022b4080();
      pSVar8[1].fields = *(System_String_Fields *)((long)SVar32 + 0xa0);
      pSVar8[2].klass = ((System_String_o *)((long)SVar32 + 0xa8))->klass;
      bVar4 = (TypeInfo_MapScriptReflectiveMaterial->_2).naturalAligment;
      if ((pSVar8->klass->_2).naturalAligment < bVar4) {
        return (Map_MapScriptSceneObject_o *)TypeInfo_MapScriptReflectiveMaterial;
      }
      if ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_MapScriptReflectiveMaterial) {
        return (Map_MapScriptSceneObject_o *)TypeInfo_MapScriptReflectiveMaterial;
      }
      if (pSVar8 != (System_String_o *)0x0) {
        pSVar8[2].monitor = ((System_String_o *)((long)SVar32 + 0x90))->klass;
        pMVar20 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_022b4080(&pSVar8[2].monitor);
        return pMVar20;
      }
    }
  }
label_04336ad8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae097 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_Color");
    g_data_057ae097 = '\x01';
  }
  if ((__this_01 == (System_String_Fields)0x0) ||
     (pSVar21 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                          ((UnityEngine_GameObject_o *)__this_01,MethodInfo_Collider_GetComponentsInChildren_Collider),
     pSVar21 == (System_Object_array *)0x0)) {
label_04336ef8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar26 = (uint)pSVar21->max_length;
    if (0 < (int)uVar26) {
      uVar28 = 0;
      do {
        if (uVar26 <= uVar28) goto label_04336efd;
        if ((UnityEngine_Collider_o *)pSVar21->m_Items[(int)uVar28] == (UnityEngine_Collider_o *)0x0)
        goto label_04336ef8;
        UnityEngine_Collider__set_enabled
                  ((UnityEngine_Collider_o *)pSVar21->m_Items[(int)uVar28],0,(MethodInfo *)0x0);
        uVar28 = uVar28 + 1;
        uVar26 = (uint)pSVar21->max_length;
      } while ((int)uVar28 < (int)uVar26);
    }
    pSVar21 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)__this_01,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    if (pSVar21 == (System_Object_array *)0x0) goto label_04336ef8;
    iVar6 = (int)pSVar21->max_length;
    if (iVar6 < 1) {
      return (Map_MapScriptSceneObject_o *)pSVar21;
    }
    uVar26 = 0;
    if (iVar6 != 0) {
      do {
        __this_00 = (UnityEngine_Renderer_o *)pSVar21->m_Items[(int)uVar26];
        if ((__this_00 == (UnityEngine_Renderer_o *)0x0) ||
           (pUVar22 = UnityEngine_Renderer__get_sharedMaterials(__this_00,(MethodInfo *)0x0),
           pUVar22 == (UnityEngine_Material_array *)0x0)) goto label_04336ef8;
        value = (UnityEngine_Material_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Material);
        uVar31 = pUVar22->max_length;
        if (0 < (int)uVar31) {
          uVar36 = uVar31 & 0xffffffff;
          if (value == (UnityEngine_Material_array *)0x0) {
            uVar31 = 0;
            do {
              if (uVar36 <= uVar31) goto label_04336efd;
              pUVar13 = (UnityEngine_Object_o *)pUVar22->m_Items[uVar31];
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar17 = UnityEngine_Object__op_Equality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar17 == '\0') {
                if ((uint)pUVar22->max_length <= (uint)uVar31) goto label_04336efd;
                pMVar33 = (MethodInfo *)pUVar22->m_Items[uVar31];
                pUVar24 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor_4dc9e70
                          (pUVar24,(UnityEngine_Material_o *)pMVar33,(MethodInfo *)0x0);
                MapEditor_MapEditorBrush__TryMakeTransparent(pUVar24,pMVar33);
                if ((pUVar24 != (UnityEngine_Material_o *)0x0) &&
                   (bVar17 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar24,"_Color",(MethodInfo *)0x0)
                   , (char)bVar17 != '\0')) {
                  UVar47 = UnityEngine_Material__get_color(pUVar24,(MethodInfo *)0x0);
                  value_01.fields.r = UVar47.fields.r + (0.6 - UVar47.fields.r) * 0.5;
                  value_01.fields.g = UVar47.fields.g + (0.9 - UVar47.fields.g) * 0.5;
                  in_XMM1_Da = (1.0 - UVar47.fields.b) * 0.5 + UVar47.fields.b;
                  value_01.fields.a = 0.45;
                  value_01.fields.b = in_XMM1_Da;
                  UnityEngine_Material__set_color(pUVar24,value_01,(MethodInfo *)0x0);
                }
                goto label_04336ef8;
              }
              uVar31 = uVar31 + 1;
              uVar28 = (uint)pUVar22->max_length;
              uVar36 = (ulong)uVar28;
            } while ((long)uVar31 < (long)(int)uVar28);
          }
          else {
            ppUVar37 = pUVar22->m_Items;
            ppUVar29 = value->m_Items;
            uVar36 = 0;
            if ((uVar31 & 0xffffffff) == 0) break;
            while( true ) {
              pUVar13 = (UnityEngine_Object_o *)*ppUVar37;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar17 = UnityEngine_Object__op_Equality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar17 == '\0') {
                if ((uint)pUVar22->max_length <= uVar36) goto label_04336efd;
                pMVar33 = (MethodInfo *)*ppUVar37;
                pUVar24 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor_4dc9e70
                          (pUVar24,(UnityEngine_Material_o *)pMVar33,(MethodInfo *)0x0);
                MapEditor_MapEditorBrush__TryMakeTransparent(pUVar24,pMVar33);
                if (pUVar24 == (UnityEngine_Material_o *)0x0) goto label_04336ef8;
                bVar17 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar24,"_Color",(MethodInfo *)0x0);
                if ((char)bVar17 != '\0') {
                  UVar47 = UnityEngine_Material__get_color(pUVar24,(MethodInfo *)0x0);
                  value_00.fields.r = UVar47.fields.r + (0.6 - UVar47.fields.r) * 0.5;
                  value_00.fields.g = UVar47.fields.g + (0.9 - UVar47.fields.g) * 0.5;
                  in_XMM1_Da = (1.0 - UVar47.fields.b) * 0.5 + UVar47.fields.b;
                  value_00.fields.a = 0.45;
                  value_00.fields.b = in_XMM1_Da;
                  UnityEngine_Material__set_color(pUVar24,value_00,(MethodInfo *)0x0);
                }
                lVar23 = il2cpp_runtime_helper_023051f0(pUVar24);
                if (lVar23 == 0) goto label_04336f02;
                if ((uint)value->max_length <= uVar36) goto label_04336efd;
                *ppUVar29 = pUVar24;
                il2cpp_runtime_helper_022b4080(ppUVar29);
              }
              uVar36 = uVar36 + 1;
              uVar28 = (uint)pUVar22->max_length;
              ppUVar37 = ppUVar37 + 1;
              ppUVar29 = ppUVar29 + 1;
              if ((long)(int)uVar28 <= (long)uVar36) break;
              if (uVar28 <= uVar36) goto label_04336efd;
            }
          }
        }
        UnityEngine_Renderer__set_sharedMaterials(__this_00,value,(MethodInfo *)0x0);
        UnityEngine_Renderer__set_shadowCastingMode(__this_00,0,(MethodInfo *)0x0);
        uVar26 = uVar26 + 1;
        uVar28 = (uint)pSVar21->max_length;
        if ((int)uVar28 <= (int)uVar26) {
          return (Map_MapScriptSceneObject_o *)pSVar21;
        }
      } while (uVar26 < uVar28);
    }
  }
label_04336efd:
  il2cpp_runtime_helper_022b2ca0();
label_04336f02:
  pUVar24 = (UnityEngine_Material_o *)il2cpp_runtime_helper_0231b270();
  pUVar34 = (UnityEngine_Quaternion_Fields *)0x0;
  il2cpp_runtime_helper_022b2b10();
  ppSVar35 = (System_String_o **)pUVar24;
  if (g_data_057ae098 == '\0') {
    il2cpp_runtime_helper_023445d0(&"_SrcBlend");
    il2cpp_runtime_helper_023445d0(&"_ALPHABLEND_ON");
    il2cpp_runtime_helper_023445d0(&"_ALPHAPREMULTIPLY_ON");
    il2cpp_runtime_helper_023445d0(&"_Surface");
    il2cpp_runtime_helper_023445d0(&"_DstBlend");
    il2cpp_runtime_helper_023445d0(&"_Mode");
    il2cpp_runtime_helper_023445d0(&"_ZWrite");
    il2cpp_runtime_helper_023445d0(&"_ALPHATEST_ON");
    il2cpp_runtime_helper_023445d0(&"RenderType");
    ppSVar35 = &"Transparent";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae098 = '\x01';
  }
  if (pUVar24 != (UnityEngine_Material_o *)0x0) {
    bVar17 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar24,"_Mode",(MethodInfo *)0x0);
    if ((char)bVar17 != '\0') {
      UnityEngine_Material__SetFloat(pUVar24,"_Mode",2.0,(MethodInfo *)0x0);
    }
    bVar17 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar24,"_Surface",(MethodInfo *)0x0);
    if ((char)bVar17 != '\0') {
      UnityEngine_Material__SetFloat(pUVar24,"_Surface",1.0,(MethodInfo *)0x0);
    }
    UnityEngine_Material__SetOverrideTag(pUVar24,"RenderType","Transparent",(MethodInfo *)0x0);
    bVar17 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar24,"_SrcBlend",(MethodInfo *)0x0);
    if ((char)bVar17 != '\0') {
      UnityEngine_Material__SetInt(pUVar24,"_SrcBlend",5,(MethodInfo *)0x0);
    }
    bVar17 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar24,"_DstBlend",(MethodInfo *)0x0);
    if ((char)bVar17 != '\0') {
      UnityEngine_Material__SetInt(pUVar24,"_DstBlend",10,(MethodInfo *)0x0);
    }
    bVar17 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar24,"_ZWrite",(MethodInfo *)0x0);
    if ((char)bVar17 != '\0') {
      UnityEngine_Material__SetInt(pUVar24,"_ZWrite",0,(MethodInfo *)0x0);
    }
    UnityEngine_Material__DisableKeyword(pUVar24,"_ALPHATEST_ON",(MethodInfo *)0x0);
    UnityEngine_Material__EnableKeyword(pUVar24,"_ALPHABLEND_ON",(MethodInfo *)0x0);
    UnityEngine_Material__DisableKeyword(pUVar24,"_ALPHAPREMULTIPLY_ON",(MethodInfo *)0x0);
    UnityEngine_Material__set_renderQueue(pUVar24,3000,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  uVar40 = il2cpp_runtime_helper_022b2c90();
  fVar39 = (float)uVar40;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  uVar3 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uVar16 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  pUVar34->x = (float)(int)uVar3;
  pUVar34->y = (float)(int)((ulong)uVar3 >> 0x20);
  pUVar34->z = (float)(int)uVar16;
  pUVar34->w = (float)(int)((ulong)uVar16 >> 0x20);
  uVar26 = *(uint *)((long)&((UnityEngine_Material_o *)((long)ppSVar35 + 0x30))->monitor + 4);
  if (uVar26 == 0) {
    return (Map_MapScriptSceneObject_o *)0x0;
  }
  if (ABS(*(float *)&(((UnityEngine_Material_o *)((long)ppSVar35 + 0x30))->fields).m_CachedPtr) < 0.0001) {
    return (Map_MapScriptSceneObject_o *)(ulong)uVar26;
  }
  iVar6 = *(int *)((long)&((UnityEngine_Material_o *)((long)ppSVar35 + 0x18))->monitor + 4);
  iVar15 = (int)(((UnityEngine_Material_o *)((long)ppSVar35 + 0x18))->fields).m_CachedPtr;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  if (iVar15 < 1) {
    iVar15 = 1;
  }
  iVar7 = *(int *)((long)&(((UnityEngine_Material_o *)((long)ppSVar35 + 0x18))->fields).m_CachedPtr + 4);
  iVar30 = 1;
  if (0 < iVar7) {
    iVar30 = iVar7;
  }
  if (uVar26 == 1) {
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    puVar27 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pfVar25 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  }
  else if (uVar26 == 2) {
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    puVar27 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    pfVar25 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  }
  else {
    if (g_data_057a6846 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6846 = '\x01';
    }
    puVar27 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
    pfVar25 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
  }
  uVar3 = *puVar27;
  fVar2 = *pfVar25;
  iVar7 = *(int *)((long)&((UnityEngine_Material_o *)((long)ppSVar35 + 0x30))->monitor + 4);
  if (iVar7 == 1) {
    fVar41 = (float)(iVar15 + -1) *
             *(float *)((long)&((UnityEngine_Material_o *)((long)ppSVar35 + 0x30))->klass + 4);
    fVar38 = 0.0;
  }
  else {
    fVar38 = (float)(iVar6 + -1) * *(float *)&((UnityEngine_Material_o *)((long)ppSVar35 + 0x30))->klass;
    fVar41 = 0.0;
    if (iVar7 != 2) {
      fVar41 = (float)(iVar15 + -1) *
               *(float *)((long)&((UnityEngine_Material_o *)((long)ppSVar35 + 0x30))->klass + 4);
      fVar42 = 0.0;
      if (iVar7 == 3) goto label_04337336;
    }
  }
  fVar42 = (float)(iVar30 + -1) * *(float *)&((UnityEngine_Material_o *)((long)ppSVar35 + 0x30))->monitor;
label_04337336:
  if ((fVar38 < fVar41) || (fVar38 < fVar42)) {
    if (fVar41 <= fVar42) {
      if (g_data_057a6846 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6846 = '\x01';
      }
      puVar27 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
      pMVar20 = (Map_MapScriptSceneObject_o *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
      fVar39 = in_XMM1_Da;
      fVar38 = fVar42;
    }
    else {
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      puVar27 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      pMVar20 = (Map_MapScriptSceneObject_o *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar39 = (float)((ulong)uVar40 >> 0x20);
      fVar38 = fVar41;
    }
  }
  else {
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    puVar27 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pMVar20 = (Map_MapScriptSceneObject_o *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  }
  if (0.0001 <= fVar38) {
    fVar42 = (float)*puVar27;
    fVar45 = (float)((ulong)*puVar27 >> 0x20);
    fVar41 = *(float *)&pMVar20->klass;
    fStack_f8 = (float)uVar3;
    fStack_f4 = (float)((ulong)uVar3 >> 0x20);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar46._0_4_ = fVar41 * fStack_f4 - fVar45 * fVar2;
    auVar46._4_4_ = fVar2 * fVar42 - fStack_f8 * fVar41;
    auVar46._8_8_ = 0;
    fVar41 = fVar45 * fStack_f8 - fStack_f4 * fVar42;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar44 = 0;
    uVar43 = 0;
    fVar41 = fVar41 * fVar41 + auVar46._4_4_ * auVar46._4_4_ + auVar46._0_4_ * auVar46._0_4_;
    if (fVar41 < 0.0) {
      fVar41 = sqrtf(fVar41);
      uVar43 = extraout_XMM0_Dc;
      uVar44 = extraout_XMM0_Dd;
    }
    else {
      fVar41 = SQRT(fVar41);
    }
    if (1e-05 < fVar41) {
      auVar14._4_4_ = fVar41;
      auVar14._0_4_ = fVar41;
      auVar14._8_4_ = uVar43;
      auVar14._12_4_ = uVar44;
      divps(auVar46,auVar14);
    }
    else if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    fVar39 = fVar39 / (fVar38 / (*(float *)&(((UnityEngine_Material_o *)((long)ppSVar35 + 0x30))->fields).
                                            m_CachedPtr * 0.017453292));
    sinf(fVar39);
    cosf(fVar39);
    axis.fields.z = fVar2;
    axis.fields.x = (float)(int)uVar3;
    axis.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
    UVar48 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__AngleAxis(fVar39 * 57.29578,axis,(MethodInfo *)0x0);
    *pUVar34 = UVar48;
    return extraout_RAX_00;
  }
  return pMVar20;
}


// MapEditor.MapEditorBrush$$ClearGhosts
// il2cpp: void MapEditor_MapEditorBrush__ClearGhosts (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4333400

void MapEditor_MapEditorBrush__ClearGhosts(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Collections_Generic_List_Vector3__o *pSVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar7;
  long *plVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_T__o *pSVar10;
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar12;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (g_data_057ae096 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae096 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  x = (UnityEngine_Object_o *)0x0;
  pSVar3 = (__this->fields)._ghostObjects;
  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043335f3;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
             (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pSVar10 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
  while (x = local_30, __this_00.fields._8_8_ = pSVar11, __this_00.fields._list = pSVar10,
        __this_00.fields._current = (Il2CppObject *)x,
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), (char)bVar7 != '\0') {
    pUVar12 = x;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    local_30 = pUVar12;
    if ((char)bVar7 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
      local_30 = pUVar12;
    }
  }
  __this_01.fields._8_8_ = pSVar11;
  __this_01.fields._list = pSVar10;
  __this_01.fields._current = (Il2CppObject *)x;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  do {
    pSVar3 = (__this->fields)._ghostObjects;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields)._ghostAssets;
      if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar2 = (pSVar4->fields)._size;
        (pSVar4->fields)._size = 0;
        if (0 < iVar2) {
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        pSVar5 = (__this->fields)._ghostScales;
        if (pSVar5 != (System_Collections_Generic_List_Vector3__o *)0x0) {
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          (pSVar5->fields)._size = 0;
          pSVar5 = (__this->fields)._ghostRotations;
          if (pSVar5 != (System_Collections_Generic_List_Vector3__o *)0x0) {
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            (pSVar5->fields)._size = 0;
            pSVar5 = (__this->fields)._ghostLocalOffsets;
            if (pSVar5 != (System_Collections_Generic_List_Vector3__o *)0x0) {
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              (pSVar5->fields)._size = 0;
              return;
            }
          }
        }
      }
    }
label_043335f3:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) goto label_04333651;
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar6 = *plVar8;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pSVar11;
    __this_02.fields._list = pSVar10;
    __this_02.fields._current = (Il2CppObject *)x;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  } while (lVar6 == 0);
  il2cpp_runtime_helper_022fefe0(lVar6);
label_04333651:
  __this_03.fields._8_8_ = pSVar11;
  __this_03.fields._list = pSVar10;
  __this_03.fields._current = (Il2CppObject *)x;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar9._0_8_);
}


// MapEditor.MapEditorBrush$$ApplyGhostAppearance
// il2cpp: void MapEditor_MapEditorBrush__ApplyGhostAppearance (MapEditor_MapEditorBrush_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x4336ae0

void MapEditor_MapEditorBrush__ApplyGhostAppearance
               (MapEditor_MapEditorBrush_o *__this,UnityEngine_GameObject_o *go,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Object_o *pUVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  bool_conflict bVar10;
  System_Object_array *pSVar11;
  UnityEngine_Material_array *pUVar12;
  UnityEngine_Material_array *value;
  long lVar13;
  UnityEngine_Material_o *__this_01;
  float *pfVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  UnityEngine_Material_o **ppUVar18;
  int iVar19;
  ulong uVar20;
  MethodInfo *pMVar21;
  UnityEngine_Quaternion_Fields *pUVar22;
  UnityEngine_Material_o *pUVar23;
  ulong uVar24;
  UnityEngine_Material_o **ppUVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Da;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  UnityEngine_Color_o UVar35;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Quaternion_Fields UVar36;
  UnityEngine_Vector3_o axis;
  float fStack_a8;
  float fStack_a4;
  
  if (g_data_057ae097 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_Color");
    g_data_057ae097 = '\x01';
  }
  if ((go == (UnityEngine_GameObject_o *)0x0) ||
     (pSVar11 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(go,MethodInfo_Collider_GetComponentsInChildren_Collider),
     pSVar11 == (System_Object_array *)0x0)) {
label_04336ef8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar15 = (uint)pSVar11->max_length;
    if (0 < (int)uVar15) {
      uVar17 = 0;
      do {
        if (uVar15 <= uVar17) goto label_04336efd;
        if ((UnityEngine_Collider_o *)pSVar11->m_Items[(int)uVar17] == (UnityEngine_Collider_o *)0x0)
        goto label_04336ef8;
        UnityEngine_Collider__set_enabled
                  ((UnityEngine_Collider_o *)pSVar11->m_Items[(int)uVar17],0,(MethodInfo *)0x0);
        uVar17 = uVar17 + 1;
        uVar15 = (uint)pSVar11->max_length;
      } while ((int)uVar17 < (int)uVar15);
    }
    pSVar11 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(go,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    if (pSVar11 == (System_Object_array *)0x0) goto label_04336ef8;
    iVar3 = (int)pSVar11->max_length;
    if (iVar3 < 1) {
      return;
    }
    uVar15 = 0;
    if (iVar3 != 0) {
      do {
        __this_00 = (UnityEngine_Renderer_o *)pSVar11->m_Items[(int)uVar15];
        if ((__this_00 == (UnityEngine_Renderer_o *)0x0) ||
           (pUVar12 = UnityEngine_Renderer__get_sharedMaterials(__this_00,(MethodInfo *)0x0),
           pUVar12 == (UnityEngine_Material_array *)0x0)) goto label_04336ef8;
        value = (UnityEngine_Material_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Material);
        uVar20 = pUVar12->max_length;
        if (0 < (int)uVar20) {
          uVar24 = uVar20 & 0xffffffff;
          if (value == (UnityEngine_Material_array *)0x0) {
            uVar20 = 0;
            do {
              if (uVar24 <= uVar20) goto label_04336efd;
              pUVar6 = (UnityEngine_Object_o *)pUVar12->m_Items[uVar20];
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar10 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                if ((uint)pUVar12->max_length <= (uint)uVar20) goto label_04336efd;
                pMVar21 = (MethodInfo *)pUVar12->m_Items[uVar20];
                pUVar23 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor_4dc9e70
                          (pUVar23,(UnityEngine_Material_o *)pMVar21,(MethodInfo *)0x0);
                MapEditor_MapEditorBrush__TryMakeTransparent(pUVar23,pMVar21);
                if ((pUVar23 != (UnityEngine_Material_o *)0x0) &&
                   (bVar10 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar23,"_Color",(MethodInfo *)0x0)
                   , (char)bVar10 != '\0')) {
                  UVar35 = UnityEngine_Material__get_color(pUVar23,(MethodInfo *)0x0);
                  value_01.fields.r = UVar35.fields.r + (0.6 - UVar35.fields.r) * 0.5;
                  value_01.fields.g = UVar35.fields.g + (0.9 - UVar35.fields.g) * 0.5;
                  in_XMM1_Da = (1.0 - UVar35.fields.b) * 0.5 + UVar35.fields.b;
                  value_01.fields.a = 0.45;
                  value_01.fields.b = in_XMM1_Da;
                  UnityEngine_Material__set_color(pUVar23,value_01,(MethodInfo *)0x0);
                }
                goto label_04336ef8;
              }
              uVar20 = uVar20 + 1;
              uVar17 = (uint)pUVar12->max_length;
              uVar24 = (ulong)uVar17;
            } while ((long)uVar20 < (long)(int)uVar17);
          }
          else {
            ppUVar25 = pUVar12->m_Items;
            ppUVar18 = value->m_Items;
            uVar24 = 0;
            if ((uVar20 & 0xffffffff) == 0) break;
            while( true ) {
              pUVar6 = (UnityEngine_Object_o *)*ppUVar25;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar10 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                if ((uint)pUVar12->max_length <= uVar24) goto label_04336efd;
                pMVar21 = (MethodInfo *)*ppUVar25;
                pUVar23 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor_4dc9e70
                          (pUVar23,(UnityEngine_Material_o *)pMVar21,(MethodInfo *)0x0);
                MapEditor_MapEditorBrush__TryMakeTransparent(pUVar23,pMVar21);
                if (pUVar23 == (UnityEngine_Material_o *)0x0) goto label_04336ef8;
                bVar10 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar23,"_Color",(MethodInfo *)0x0);
                if ((char)bVar10 != '\0') {
                  UVar35 = UnityEngine_Material__get_color(pUVar23,(MethodInfo *)0x0);
                  value_00.fields.r = UVar35.fields.r + (0.6 - UVar35.fields.r) * 0.5;
                  value_00.fields.g = UVar35.fields.g + (0.9 - UVar35.fields.g) * 0.5;
                  in_XMM1_Da = (1.0 - UVar35.fields.b) * 0.5 + UVar35.fields.b;
                  value_00.fields.a = 0.45;
                  value_00.fields.b = in_XMM1_Da;
                  UnityEngine_Material__set_color(pUVar23,value_00,(MethodInfo *)0x0);
                }
                lVar13 = il2cpp_runtime_helper_023051f0(pUVar23);
                if (lVar13 == 0) goto label_04336f02;
                if ((uint)value->max_length <= uVar24) goto label_04336efd;
                *ppUVar18 = pUVar23;
                il2cpp_runtime_helper_022b4080(ppUVar18);
              }
              uVar24 = uVar24 + 1;
              uVar17 = (uint)pUVar12->max_length;
              ppUVar25 = ppUVar25 + 1;
              ppUVar18 = ppUVar18 + 1;
              if ((long)(int)uVar17 <= (long)uVar24) break;
              if (uVar17 <= uVar24) goto label_04336efd;
            }
          }
        }
        UnityEngine_Renderer__set_sharedMaterials(__this_00,value,(MethodInfo *)0x0);
        UnityEngine_Renderer__set_shadowCastingMode(__this_00,0,(MethodInfo *)0x0);
        uVar15 = uVar15 + 1;
        uVar17 = (uint)pSVar11->max_length;
        if ((int)uVar17 <= (int)uVar15) {
          return;
        }
      } while (uVar15 < uVar17);
    }
  }
label_04336efd:
  il2cpp_runtime_helper_022b2ca0();
label_04336f02:
  __this_01 = (UnityEngine_Material_o *)il2cpp_runtime_helper_0231b270();
  pUVar22 = (UnityEngine_Quaternion_Fields *)0x0;
  il2cpp_runtime_helper_022b2b10();
  pUVar23 = __this_01;
  if (g_data_057ae098 == '\0') {
    il2cpp_runtime_helper_023445d0(&"_SrcBlend");
    il2cpp_runtime_helper_023445d0(&"_ALPHABLEND_ON");
    il2cpp_runtime_helper_023445d0(&"_ALPHAPREMULTIPLY_ON");
    il2cpp_runtime_helper_023445d0(&"_Surface");
    il2cpp_runtime_helper_023445d0(&"_DstBlend");
    il2cpp_runtime_helper_023445d0(&"_Mode");
    il2cpp_runtime_helper_023445d0(&"_ZWrite");
    il2cpp_runtime_helper_023445d0(&"_ALPHATEST_ON");
    il2cpp_runtime_helper_023445d0(&"RenderType");
    pUVar23 = (UnityEngine_Material_o *)&"Transparent";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae098 = '\x01';
  }
  if (__this_01 != (UnityEngine_Material_o *)0x0) {
    bVar10 = UnityEngine_Material__HasProperty_4dcb5b0(__this_01,"_Mode",(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      UnityEngine_Material__SetFloat(__this_01,"_Mode",2.0,(MethodInfo *)0x0);
    }
    bVar10 = UnityEngine_Material__HasProperty_4dcb5b0(__this_01,"_Surface",(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      UnityEngine_Material__SetFloat(__this_01,"_Surface",1.0,(MethodInfo *)0x0);
    }
    UnityEngine_Material__SetOverrideTag(__this_01,"RenderType","Transparent",(MethodInfo *)0x0);
    bVar10 = UnityEngine_Material__HasProperty_4dcb5b0(__this_01,"_SrcBlend",(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      UnityEngine_Material__SetInt(__this_01,"_SrcBlend",5,(MethodInfo *)0x0);
    }
    bVar10 = UnityEngine_Material__HasProperty_4dcb5b0(__this_01,"_DstBlend",(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      UnityEngine_Material__SetInt(__this_01,"_DstBlend",10,(MethodInfo *)0x0);
    }
    bVar10 = UnityEngine_Material__HasProperty_4dcb5b0(__this_01,"_ZWrite",(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      UnityEngine_Material__SetInt(__this_01,"_ZWrite",0,(MethodInfo *)0x0);
    }
    UnityEngine_Material__DisableKeyword(__this_01,"_ALPHATEST_ON",(MethodInfo *)0x0);
    UnityEngine_Material__EnableKeyword(__this_01,"_ALPHABLEND_ON",(MethodInfo *)0x0);
    UnityEngine_Material__DisableKeyword(__this_01,"_ALPHAPREMULTIPLY_ON",(MethodInfo *)0x0);
    UnityEngine_Material__set_renderQueue(__this_01,3000,(MethodInfo *)0x0);
    return;
  }
  uVar28 = il2cpp_runtime_helper_022b2c90();
  fVar27 = (float)uVar28;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uVar9 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  pUVar22->x = (float)(int)uVar2;
  pUVar22->y = (float)(int)((ulong)uVar2 >> 0x20);
  pUVar22->z = (float)(int)uVar9;
  pUVar22->w = (float)(int)((ulong)uVar9 >> 0x20);
  iVar3 = *(int *)((long)&pUVar23[2].monitor + 4);
  if (iVar3 == 0) {
    return;
  }
  if (ABS(*(float *)&pUVar23[2].fields.m_CachedPtr) < 0.0001) {
    return;
  }
  iVar4 = *(int *)((long)&pUVar23[1].monitor + 4);
  iVar8 = (int)pUVar23[1].fields.m_CachedPtr;
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  iVar5 = *(int *)((long)&pUVar23[1].fields.m_CachedPtr + 4);
  iVar19 = 1;
  if (0 < iVar5) {
    iVar19 = iVar5;
  }
  if (iVar3 == 1) {
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    puVar16 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pfVar14 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  }
  else if (iVar3 == 2) {
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    puVar16 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    pfVar14 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  }
  else {
    if (g_data_057a6846 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6846 = '\x01';
    }
    puVar16 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
    pfVar14 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
  }
  uVar2 = *puVar16;
  fVar1 = *pfVar14;
  iVar3 = *(int *)((long)&pUVar23[2].monitor + 4);
  if (iVar3 == 1) {
    fVar29 = (float)(iVar8 + -1) * *(float *)((long)&pUVar23[2].klass + 4);
    fVar26 = 0.0;
  }
  else {
    fVar26 = (float)(iVar4 + -1) * *(float *)&pUVar23[2].klass;
    fVar29 = 0.0;
    if (iVar3 != 2) {
      fVar29 = (float)(iVar8 + -1) * *(float *)((long)&pUVar23[2].klass + 4);
      fVar30 = 0.0;
      if (iVar3 == 3) goto label_04337336;
    }
  }
  fVar30 = (float)(iVar19 + -1) * *(float *)&pUVar23[2].monitor;
label_04337336:
  if ((fVar26 < fVar29) || (fVar26 < fVar30)) {
    if (fVar29 <= fVar30) {
      if (g_data_057a6846 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6846 = '\x01';
      }
      puVar16 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
      pfVar14 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
      fVar27 = in_XMM1_Da;
      fVar26 = fVar30;
    }
    else {
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      puVar16 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      pfVar14 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar27 = (float)((ulong)uVar28 >> 0x20);
      fVar26 = fVar29;
    }
  }
  else {
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    puVar16 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pfVar14 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  }
  if (0.0001 <= fVar26) {
    fVar30 = (float)*puVar16;
    fVar33 = (float)((ulong)*puVar16 >> 0x20);
    fVar29 = *pfVar14;
    fStack_a8 = (float)uVar2;
    fStack_a4 = (float)((ulong)uVar2 >> 0x20);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar34._0_4_ = fVar29 * fStack_a4 - fVar33 * fVar1;
    auVar34._4_4_ = fVar1 * fVar30 - fStack_a8 * fVar29;
    auVar34._8_8_ = 0;
    fVar29 = fVar33 * fStack_a8 - fStack_a4 * fVar30;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar32 = 0;
    uVar31 = 0;
    fVar29 = fVar29 * fVar29 + auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
    if (fVar29 < 0.0) {
      fVar29 = sqrtf(fVar29);
      uVar31 = extraout_XMM0_Dc;
      uVar32 = extraout_XMM0_Dd;
    }
    else {
      fVar29 = SQRT(fVar29);
    }
    if (fVar29 <= 1e-05) {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
    }
    else {
      auVar7._4_4_ = fVar29;
      auVar7._0_4_ = fVar29;
      auVar7._8_4_ = uVar31;
      auVar7._12_4_ = uVar32;
      divps(auVar34,auVar7);
    }
    fVar27 = fVar27 / (fVar26 / (*(float *)&pUVar23[2].fields.m_CachedPtr * 0.017453292));
    sinf(fVar27);
    cosf(fVar27);
    axis.fields.z = fVar1;
    axis.fields.x = (float)(int)uVar2;
    axis.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
    UVar36 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__AngleAxis(fVar27 * 57.29578,axis,(MethodInfo *)0x0);
    *pUVar22 = UVar36;
    return;
  }
  return;
}


// MapEditor.MapEditorBrush$$TryMakeTransparent
// il2cpp: void MapEditor_MapEditorBrush__TryMakeTransparent (UnityEngine_Material_o* m, const MethodInfo* method);
// 0x4336f20

void MapEditor_MapEditorBrush__TryMakeTransparent(UnityEngine_Material_o *m,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  int iVar7;
  Il2CppMethodPointer pIVar8;
  bool_conflict bVar9;
  float *pfVar10;
  undefined8 *puVar11;
  int iVar12;
  UnityEngine_Material_o *pUVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Da;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  UnityEngine_Quaternion_o UVar23;
  UnityEngine_Vector3_o axis;
  float fStack_50;
  float fStack_4c;
  
  pUVar13 = m;
  if (g_data_057ae098 == '\0') {
    il2cpp_runtime_helper_023445d0(&"_SrcBlend");
    il2cpp_runtime_helper_023445d0(&"_ALPHABLEND_ON");
    il2cpp_runtime_helper_023445d0(&"_ALPHAPREMULTIPLY_ON");
    il2cpp_runtime_helper_023445d0(&"_Surface");
    il2cpp_runtime_helper_023445d0(&"_DstBlend");
    il2cpp_runtime_helper_023445d0(&"_Mode");
    il2cpp_runtime_helper_023445d0(&"_ZWrite");
    il2cpp_runtime_helper_023445d0(&"_ALPHATEST_ON");
    il2cpp_runtime_helper_023445d0(&"RenderType");
    pUVar13 = (UnityEngine_Material_o *)&"Transparent";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae098 = '\x01';
  }
  if (m != (UnityEngine_Material_o *)0x0) {
    bVar9 = UnityEngine_Material__HasProperty_4dcb5b0(m,"_Mode",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      UnityEngine_Material__SetFloat(m,"_Mode",2.0,(MethodInfo *)0x0);
    }
    bVar9 = UnityEngine_Material__HasProperty_4dcb5b0(m,"_Surface",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      UnityEngine_Material__SetFloat(m,"_Surface",1.0,(MethodInfo *)0x0);
    }
    UnityEngine_Material__SetOverrideTag(m,"RenderType","Transparent",(MethodInfo *)0x0);
    bVar9 = UnityEngine_Material__HasProperty_4dcb5b0(m,"_SrcBlend",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      UnityEngine_Material__SetInt(m,"_SrcBlend",5,(MethodInfo *)0x0);
    }
    bVar9 = UnityEngine_Material__HasProperty_4dcb5b0(m,"_DstBlend",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      UnityEngine_Material__SetInt(m,"_DstBlend",10,(MethodInfo *)0x0);
    }
    bVar9 = UnityEngine_Material__HasProperty_4dcb5b0(m,"_ZWrite",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      UnityEngine_Material__SetInt(m,"_ZWrite",0,(MethodInfo *)0x0);
    }
    UnityEngine_Material__DisableKeyword(m,"_ALPHATEST_ON",(MethodInfo *)0x0);
    UnityEngine_Material__EnableKeyword(m,"_ALPHABLEND_ON",(MethodInfo *)0x0);
    UnityEngine_Material__DisableKeyword(m,"_ALPHAPREMULTIPLY_ON",(MethodInfo *)0x0);
    UnityEngine_Material__set_renderQueue(m,3000,(MethodInfo *)0x0);
    return;
  }
  uVar16 = il2cpp_runtime_helper_022b2c90();
  fVar15 = (float)uVar16;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  pIVar8 = (Il2CppMethodPointer)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  method->methodPointer = (Il2CppMethodPointer)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  method->virtualMethodPointer = pIVar8;
  iVar3 = *(int *)((long)&pUVar13[2].monitor + 4);
  if (iVar3 == 0) {
    return;
  }
  if (ABS(*(float *)&pUVar13[2].fields.m_CachedPtr) < 0.0001) {
    return;
  }
  iVar4 = *(int *)((long)&pUVar13[1].monitor + 4);
  iVar7 = (int)pUVar13[1].fields.m_CachedPtr;
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  if (iVar7 < 1) {
    iVar7 = 1;
  }
  iVar5 = *(int *)((long)&pUVar13[1].fields.m_CachedPtr + 4);
  iVar12 = 1;
  if (0 < iVar5) {
    iVar12 = iVar5;
  }
  if (iVar3 == 1) {
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    puVar11 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pfVar10 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  }
  else if (iVar3 == 2) {
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    puVar11 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    pfVar10 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  }
  else {
    if (g_data_057a6846 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6846 = '\x01';
    }
    puVar11 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
    pfVar10 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
  }
  uVar2 = *puVar11;
  fVar1 = *pfVar10;
  iVar3 = *(int *)((long)&pUVar13[2].monitor + 4);
  if (iVar3 == 1) {
    fVar17 = (float)(iVar7 + -1) * *(float *)((long)&pUVar13[2].klass + 4);
    fVar14 = 0.0;
  }
  else {
    fVar14 = (float)(iVar4 + -1) * *(float *)&pUVar13[2].klass;
    fVar17 = 0.0;
    if (iVar3 != 2) {
      fVar17 = (float)(iVar7 + -1) * *(float *)((long)&pUVar13[2].klass + 4);
      fVar18 = 0.0;
      if (iVar3 == 3) goto label_04337336;
    }
  }
  fVar18 = (float)(iVar12 + -1) * *(float *)&pUVar13[2].monitor;
label_04337336:
  if ((fVar14 < fVar17) || (fVar14 < fVar18)) {
    if (fVar17 <= fVar18) {
      if (g_data_057a6846 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6846 = '\x01';
      }
      puVar11 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
      pfVar10 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
      fVar15 = in_XMM1_Da;
      fVar14 = fVar18;
    }
    else {
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      puVar11 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      pfVar10 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar15 = (float)((ulong)uVar16 >> 0x20);
      fVar14 = fVar17;
    }
  }
  else {
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    puVar11 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pfVar10 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  }
  if (0.0001 <= fVar14) {
    fVar18 = (float)*puVar11;
    fVar21 = (float)((ulong)*puVar11 >> 0x20);
    fVar17 = *pfVar10;
    fStack_50 = (float)uVar2;
    fStack_4c = (float)((ulong)uVar2 >> 0x20);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar22._0_4_ = fVar17 * fStack_4c - fVar21 * fVar1;
    auVar22._4_4_ = fVar1 * fVar18 - fStack_50 * fVar17;
    auVar22._8_8_ = 0;
    fVar17 = fVar21 * fStack_50 - fStack_4c * fVar18;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar20 = 0;
    uVar19 = 0;
    fVar17 = fVar17 * fVar17 + auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_;
    if (fVar17 < 0.0) {
      fVar17 = sqrtf(fVar17);
      uVar19 = extraout_XMM0_Dc;
      uVar20 = extraout_XMM0_Dd;
    }
    else {
      fVar17 = SQRT(fVar17);
    }
    if (fVar17 <= 1e-05) {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
    }
    else {
      auVar6._4_4_ = fVar17;
      auVar6._0_4_ = fVar17;
      auVar6._8_4_ = uVar19;
      auVar6._12_4_ = uVar20;
      divps(auVar22,auVar6);
    }
    fVar15 = fVar15 / (fVar14 / (*(float *)&pUVar13[2].fields.m_CachedPtr * 0.017453292));
    sinf(fVar15);
    cosf(fVar15);
    axis.fields.z = fVar1;
    axis.fields.x = (float)(int)uVar2;
    axis.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
    UVar23 = UnityEngine_Quaternion__AngleAxis(fVar15 * 57.29578,axis,(MethodInfo *)0x0);
    *(UnityEngine_Quaternion_Fields *)method = UVar23.fields;
    return;
  }
  return;
}


// MapEditor.MapEditorBrush$$PositionGhosts
// il2cpp: void MapEditor_MapEditorBrush__PositionGhosts (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4335300

void MapEditor_MapEditorBrush__PositionGhosts(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar3;
  System_Collections_Generic_List_Vector3__o *pSVar6;
  System_Collections_Generic_List_string__o *__this_00;
  long lVar7;
  double dVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  UnityEngine_LayerMask_o mask;
  int32_t mask_00;
  bool_conflict bVar9;
  System_Random_o *__this_05;
  System_Int32_array *layers;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  MapEditor_MapEditorBrush_o *__this_06;
  System_String_o *asset;
  MapEditor_BrushEntry_o *pMVar12;
  long *plVar13;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar14;
  System_Collections_Generic_List_GameObject__o *pSVar15;
  float fVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Quaternion_o UVar24;
  undefined1 auVar25 [12];
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o xz;
  UnityEngine_Vector3_o value_00;
  float in_stack_ffffffffffffff38;
  float in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  float in_stack_ffffffffffffff48;
  float in_stack_ffffffffffffff4c;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  UnityEngine_Quaternion_Fields local_78;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  UnityEngine_Object_o *local_58;
  System_Random_o *local_50;
  undefined1 local_48 [24];
  
  if (g_data_057ae099 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Random);
    g_data_057ae099 = '\x01';
  }
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  local_78.x = 0.0;
  local_78.y = 0.0;
  local_78.z = 0.0;
  local_78.w = 0.0;
  if ((char)(__this->fields)._hasCenter == '\0') {
    pSVar15 = (__this->fields)._ghostObjects;
    if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04335a4e;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,
               (System_Collections_Generic_List_object__o *)pSVar15,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    while( true ) {
      do {
        __this_01.fields._list._4_4_ = in_stack_ffffffffffffff3c;
        __this_01.fields._list._0_4_ = in_stack_ffffffffffffff38;
        __this_01.fields._index = in_stack_ffffffffffffff40;
        __this_01.fields._version = in_stack_ffffffffffffff44;
        __this_01.fields._current._0_4_ = in_stack_ffffffffffffff48;
        __this_01.fields._current._4_4_ = in_stack_ffffffffffffff4c;
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&local_68);
        pUVar10 = local_58;
        if ((char)bVar9 == '\0') {
          __this_02.fields._list._4_4_ = in_stack_ffffffffffffff3c;
          __this_02.fields._list._0_4_ = in_stack_ffffffffffffff38;
          __this_02.fields._index = in_stack_ffffffffffffff40;
          __this_02.fields._version = in_stack_ffffffffffffff44;
          __this_02.fields._current._0_4_ = in_stack_ffffffffffffff48;
          __this_02.fields._current._4_4_ = in_stack_ffffffffffffff4c;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&local_68);
          return;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while ((char)bVar9 == '\0');
      if (pUVar10 == (UnityEngine_Object_o *)0x0) break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar10,0,(MethodInfo *)0x0);
    }
  }
  else {
    iVar14 = (__this->fields)._seed;
    __this_05 = (System_Random_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Random);
    System_Random___ctor_3ccb3c0(__this_05,iVar14 + 1,(MethodInfo *)0x0);
    layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length == 0) goto label_04335a58;
      layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
      iVar14 = 0;
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      mask_00 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      pSVar15 = (__this->fields)._ghostObjects;
      if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        local_50 = __this_05;
        if ((pSVar15->fields)._size < 1) {
          return;
        }
        do {
          pUVar10 = (UnityEngine_Object_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar15,iVar14,MethodInfo_GameObject_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar9 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 == '\0') {
            if (pUVar10 == (UnityEngine_Object_o *)0x0) break;
            bVar9 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
            method_00 = extraout_RDX;
            if ((char)bVar9 == '\0') {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar10,1,(MethodInfo *)0x0);
              method_00 = extraout_RDX_00;
            }
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
              method_00 = extraout_RDX_01;
            }
            local_48._8_8_ = 0;
            local_48._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
            if (g_data_057a6843 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
              g_data_057a6843 = '\x01';
              method_00 = extraout_RDX_02;
            }
            local_78._0_8_ = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            local_78._8_8_ = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if ((__this->fields).AssetSelectMode == 1) {
              pSVar6 = (__this->fields)._ghostLocalOffsets;
              if (pSVar6 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
              if (iVar14 < (pSVar6->fields)._size) {
                UVar26 = System_Collections_Generic_List_Vector3___get_Item(pSVar6,iVar14,MethodInfo_Vector3_get_Item);
                fVar16 = UVar26.fields.z;
                fVar2 = UVar26.fields.x;
                fVar5 = UVar26.fields.y;
                method_00 = extraout_RDX_03;
              }
              else {
                if (g_data_057a65d5 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a65d5 = '\x01';
                  method_00 = extraout_RDX_04;
                }
                uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                fVar2 = (float)uVar3;
                fVar5 = (float)((ulong)uVar3 >> 0x20);
                fVar16 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
              }
              UVar26.fields.y = fVar5;
              UVar26.fields.x = fVar2;
              UVar26.fields.z = fVar16;
              UVar26 = MapEditor_MapEditorBrush__ApplyCurve_4237110
                                 (__this,UVar26,(UnityEngine_Quaternion_o *)&local_78,method_00);
              uVar1 = (__this->fields)._center.fields.x;
              uVar4 = (__this->fields)._center.fields.y;
              local_48._8_4_ = extraout_XMM0_Dc;
              local_48._0_8_ = UVar26.fields._0_8_;
              local_48._12_4_ = extraout_XMM0_Dd;
              in_stack_ffffffffffffff48 = (float)uVar1 + UVar26.fields.x;
              in_stack_ffffffffffffff4c = (float)uVar4 + UVar26.fields.y;
              in_stack_ffffffffffffff38 = UVar26.fields.z + (__this->fields)._center.fields.z;
              pSVar6 = (__this->fields)._ghostRotations;
            }
            else {
              if (__this_05 == (System_Random_o *)0x0) break;
              dVar8 = (double)(*(__this_05->klass->vtable)._8_NextDouble.methodPtr)
                                        (__this_05,(__this_05->klass->vtable)._8_NextDouble.method);
              fVar16 = (float)dVar8;
              if (fVar16 < 0.0) {
                fVar16 = sqrtf(fVar16);
              }
              else {
                fVar16 = SQRT(fVar16);
              }
              fVar16 = fVar16 * (float)(__this->fields).Mode;
              dVar8 = (double)(*(__this_05->klass->vtable)._8_NextDouble.methodPtr)
                                        (__this_05,(__this_05->klass->vtable)._8_NextDouble.method);
              fVar18 = (float)dVar8 * 3.1415927 + (float)dVar8 * 3.1415927;
              fVar2 = (__this->fields)._center.fields.x;
              fVar5 = (__this->fields)._center.fields.y;
              in_stack_ffffffffffffff38 = (__this->fields)._center.fields.z;
              fVar17 = cosf(fVar18);
              fVar18 = sinf(fVar18);
              in_stack_ffffffffffffff48 = fVar17 * fVar16 + fVar2;
              in_stack_ffffffffffffff4c = fVar5 + 0.0;
              in_stack_ffffffffffffff38 = fVar18 * fVar16 + in_stack_ffffffffffffff38;
              pSVar6 = (__this->fields)._ghostRotations;
            }
            if (pSVar6 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
            UVar26 = System_Collections_Generic_List_Vector3___get_Item(pSVar6,iVar14,MethodInfo_Vector3_get_Item);
            euler.fields.x = UVar26.fields.x * 0.017453292;
            euler.fields.y = UVar26.fields.y * 0.017453292;
            euler.fields.z = UVar26.fields.z * 0.017453292;
            UVar24 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
            pUVar11 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
            local_98 = UVar24.fields.z;
            fStack_94 = UVar24.fields.w;
            local_88 = UVar24.fields.x;
            fStack_84 = UVar24.fields.y;
            if ((__this->fields).AssetSelectMode == 1) {
              fVar16 = local_78.x;
              fVar2 = local_78.y;
              fVar20 = local_78.z;
              fVar22 = local_78.w;
              fVar18 = fStack_94 * fVar16;
              fVar19 = fStack_94 * fVar2;
              fVar21 = fVar20 * local_98;
              fVar5 = fVar2 * local_98;
              fVar17 = fVar20 * local_88;
              fVar23 = fVar16 * local_98;
              local_98 = (fStack_84 * fVar16 + fStack_94 * fVar20 + local_98 * fVar22) - local_88 * fVar2;
              fStack_94 = ((fStack_94 * fVar22 - fVar16 * local_88) - fStack_84 * fVar2) - fVar21;
              local_88 = (fVar5 + fVar18 + local_88 * fVar22) - fVar20 * fStack_84;
              fStack_84 = (fVar17 + fVar19 + fStack_84 * fVar22) - fVar23;
            }
            if (pUVar11 == (UnityEngine_Transform_o *)0x0) break;
            UVar24.fields.y = fStack_84;
            UVar24.fields.x = local_88;
            UVar24.fields.w = fStack_94;
            UVar24.fields.z = local_98;
            UnityEngine_Transform__set_rotation(pUVar11,UVar24,(MethodInfo *)0x0);
            __this_06 = (MapEditor_MapEditorBrush_o *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
            if (g_data_057a6844 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6844 = '\x01';
            }
            if (__this_06 == (MapEditor_MapEditorBrush_o *)0x0) break;
            uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            value.fields.x = (float)uVar3 * 500.0 + in_stack_ffffffffffffff48;
            value.fields.y = (float)((ulong)uVar3 >> 0x20) * 500.0 + in_stack_ffffffffffffff4c;
            value.fields.z =
                 *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 500.0 + in_stack_ffffffffffffff38;
            UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_06,value,(MethodInfo *)0x0);
            xz.fields.y = in_stack_ffffffffffffff4c;
            xz.fields.x = in_stack_ffffffffffffff48;
            xz.fields.z = in_stack_ffffffffffffff38;
            UVar26 = MapEditor_MapEditorBrush__ProjectToGround
                               (__this_06,(UnityEngine_GameObject_o *)pUVar10,xz,mask_00,in_RCX);
            in_stack_ffffffffffffff48 = UVar26.fields.z;
            in_stack_ffffffffffffff38 = UVar26.fields.x;
            in_stack_ffffffffffffff3c = UVar26.fields.y;
            if ((__this->fields).AssetSelectMode == 1) {
              in_stack_ffffffffffffff3c = (float)local_48._4_4_ + in_stack_ffffffffffffff3c;
            }
            __this_00 = (__this->fields)._ghostAssets;
            in_stack_ffffffffffffff40 = extraout_XMM0_Dc_00;
            in_stack_ffffffffffffff44 = extraout_XMM0_Dd_00;
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) break;
            asset = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,iVar14,MethodInfo_String_get_Item);
            pMVar12 = MapEditor_MapEditorBrush__FindEntry(__this,asset,method_01);
            __this_05 = local_50;
            if (pMVar12 != (MapEditor_BrushEntry_o *)0x0) {
              in_stack_ffffffffffffff3c = in_stack_ffffffffffffff3c + (pMVar12->fields).Offset.fields.x;
            }
            pUVar11 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
            if (pUVar11 == (UnityEngine_Transform_o *)0x0) break;
            value_00.fields.y = in_stack_ffffffffffffff3c;
            value_00.fields.x = in_stack_ffffffffffffff38;
            value_00.fields.z = in_stack_ffffffffffffff48;
            UnityEngine_Transform__set_position(pUVar11,value_00,(MethodInfo *)0x0);
          }
          iVar14 = iVar14 + 1;
          pSVar15 = (__this->fields)._ghostObjects;
          if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
          if ((pSVar15->fields)._size <= iVar14) {
            return;
          }
        } while( true );
      }
    }
label_04335a4e:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_04335a58:
  auVar25 = il2cpp_runtime_helper_022b2ca0();
  if (auVar25._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(auVar25._0_8_);
    lVar7 = *plVar13;
    __cxa_end_catch();
    __this_03.fields._list._4_4_ = in_stack_ffffffffffffff3c;
    __this_03.fields._list._0_4_ = in_stack_ffffffffffffff38;
    __this_03.fields._index = in_stack_ffffffffffffff40;
    __this_03.fields._version = in_stack_ffffffffffffff44;
    __this_03.fields._current._0_4_ = in_stack_ffffffffffffff48;
    __this_03.fields._current._4_4_ = in_stack_ffffffffffffff4c;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&local_68);
    if (lVar7 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_04.fields._list._4_4_ = in_stack_ffffffffffffff3c;
  __this_04.fields._list._0_4_ = in_stack_ffffffffffffff38;
  __this_04.fields._index = in_stack_ffffffffffffff40;
  __this_04.fields._version = in_stack_ffffffffffffff44;
  __this_04.fields._current._0_4_ = in_stack_ffffffffffffff48;
  __this_04.fields._current._4_4_ = in_stack_ffffffffffffff4c;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&local_68);
  _Unwind_Resume(auVar25._0_8_);
}


// MapEditor.MapEditorBrush$$GetAverageGhostSize
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorBrush__GetAverageGhostSize (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4337dc0

UnityEngine_Vector3_o
MapEditor_MapEditorBrush__GetAverageGhostSize(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 auVar5 [16];
  UnityEngine_Object_o *x;
  bool_conflict bVar6;
  System_Object_array *pSVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  float fVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [12];
  UnityEngine_Vector3_o UVar32;
  undefined4 in_stack_ffffffffffffff48;
  float in_stack_ffffffffffffff4c;
  float in_stack_ffffffffffffff50;
  float in_stack_ffffffffffffff54;
  _union_249689 in_stack_ffffffffffffff58;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  int local_90;
  _union_249689 local_88;
  undefined8 uStack_80;
  UnityEngine_Object_o *local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (g_data_057ae09a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae09a = '\x01';
  }
  local_88.genericMethod = (System_Collections_Generic_List_T__o *)0x0;
  uStack_80 = 0;
  local_78 = (UnityEngine_Object_o *)0x0;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  __this_00 = (__this->fields)._ghostObjects;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    uVar12 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    local_68 = (float)uVar12;
    fStack_64 = (float)((ulong)uVar12 >> 0x20);
    fStack_60 = 0.0;
    fStack_5c = 0.0;
    in_stack_ffffffffffffff4c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff58,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    local_78 = (UnityEngine_Object_o *)CONCAT44(fStack_94,fStack_98);
    uStack_80 = CONCAT44(fStack_9c,fStack_a0);
    local_90 = 0;
    local_88 = in_stack_ffffffffffffff58;
label_04337ee0:
    do {
      __this_01.fields._list._4_4_ = in_stack_ffffffffffffff4c;
      __this_01.fields._list._0_4_ = in_stack_ffffffffffffff48;
      __this_01.fields._index = (int32_t)in_stack_ffffffffffffff50;
      __this_01.fields._version = (int32_t)in_stack_ffffffffffffff54;
      __this_01.fields._current = in_stack_ffffffffffffff58.genericMethod;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&local_88);
      x = local_78;
      if ((char)bVar6 == '\0') goto label_04338101;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        if (x == (UnityEngine_Object_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          fVar23 = in_stack_ffffffffffffff54;
label_0433818e:
          il2cpp_runtime_helper_022b2c90();
label_04338193:
          il2cpp_runtime_helper_022b2c90();
label_04338198:
          il2cpp_runtime_helper_022b2ca0();
          in_stack_ffffffffffffff54 = fVar23;
label_0433819d:
          il2cpp_runtime_helper_022b2ca0();
        }
        else {
          pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                             ((UnityEngine_GameObject_o *)x,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
          fVar23 = in_stack_ffffffffffffff54;
          if (pSVar7 == (System_Object_array *)0x0) goto label_0433818e;
          if (pSVar7->max_length == 0) goto label_04337ee0;
          if ((int)pSVar7->max_length == 0) goto label_0433819d;
          if ((UnityEngine_Renderer_o *)pSVar7->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            UnityEngine_Renderer__get_bounds
                      ((UnityEngine_Bounds_o *)&stack0xffffffffffffff58,
                       (UnityEngine_Renderer_o *)pSVar7->m_Items[0],(MethodInfo *)0x0);
            fVar26 = 0.0;
            fVar27 = 0.0;
            uVar9 = (uint)pSVar7->max_length;
            fVar23 = fStack_94;
            fVar11 = fStack_9c;
            fVar25 = fStack_98;
            if (1 < (int)uVar9) {
              local_58 = fStack_9c;
              fStack_54 = fStack_98;
              fStack_50 = 0.0;
              fStack_4c = 0.0;
              uStack_40 = 0;
              lVar10 = 5;
              in_stack_ffffffffffffff50 = fStack_a0;
              local_48 = in_stack_ffffffffffffff58;
              do {
                iVar4 = (int)lVar10;
                if (uVar9 <= iVar4 - 4U) goto label_04338198;
                if ((UnityEngine_Renderer_o *)pSVar7->m_Items[lVar10 + -4] == (UnityEngine_Renderer_o *)0x0)
                goto label_04338193;
                UnityEngine_Renderer__get_bounds
                          ((UnityEngine_Bounds_o *)&stack0xffffffffffffff58,
                           (UnityEngine_Renderer_o *)pSVar7->m_Items[lVar10 + -4],(MethodInfo *)0x0);
                fVar25 = in_stack_ffffffffffffff58._0_4_ - fStack_9c;
                fVar26 = in_stack_ffffffffffffff58._4_4_ - fStack_98;
                fVar27 = fStack_a0 - fStack_94;
                auVar19._0_4_ = (float)(undefined4)local_48 - local_58;
                auVar19._4_4_ = (float)local_48._4_4_ - fStack_54;
                auVar19._8_4_ = (float)uStack_40 - fStack_50;
                auVar19._12_4_ = uStack_40._4_4_ - fStack_4c;
                auVar13._4_4_ = fVar26;
                auVar13._0_4_ = fVar25;
                auVar13._8_8_ = 0;
                auVar13 = minps(auVar19,auVar13);
                fVar11 = in_stack_ffffffffffffff50 - fVar23;
                if (fVar27 <= in_stack_ffffffffffffff50 - fVar23) {
                  fVar11 = fVar27;
                }
                auVar18._0_4_ = local_58 + (float)(undefined4)local_48;
                auVar18._4_4_ = fStack_54 + (float)local_48._4_4_;
                auVar18._8_4_ = fStack_50 + (float)uStack_40;
                auVar18._12_4_ = fStack_4c + uStack_40._4_4_;
                auVar1._4_4_ = fVar26;
                auVar1._0_4_ = fVar25;
                auVar1._8_8_ = 0;
                auVar19 = maxps(auVar18,auVar1);
                fVar25 = fVar23 + in_stack_ffffffffffffff50;
                if (fVar23 + in_stack_ffffffffffffff50 <= fVar27) {
                  fVar25 = fVar27;
                }
                fVar17 = (auVar19._0_4_ - auVar13._0_4_) * 0.5;
                fVar20 = (auVar19._4_4_ - auVar13._4_4_) * 0.5;
                fVar21 = (auVar19._8_4_ - auVar13._8_4_) * 0.0;
                fVar22 = (auVar19._12_4_ - auVar13._12_4_) * 0.0;
                fVar23 = (fVar25 - fVar11) * 0.5;
                fVar25 = auVar13._0_4_ + fVar17;
                fVar26 = auVar13._4_4_ + fVar20;
                fVar27 = auVar13._8_4_ + fVar21;
                fVar16 = auVar13._12_4_ + fVar22;
                fVar29 = in_stack_ffffffffffffff58._0_4_ + fStack_9c;
                fVar30 = in_stack_ffffffffffffff58._4_4_ + fStack_98;
                fVar28 = fStack_a0 + fStack_94;
                auVar24._0_4_ = fVar25 - fVar17;
                auVar24._4_4_ = fVar26 - fVar20;
                auVar24._8_4_ = fVar27 - fVar21;
                auVar24._12_4_ = fVar16 - fVar22;
                in_stack_ffffffffffffff50 = (fVar11 + fVar23) - fVar23;
                auVar2._4_4_ = fVar30;
                auVar2._0_4_ = fVar29;
                auVar2._8_8_ = 0;
                auVar13 = minps(auVar24,auVar2);
                if (fVar28 <= in_stack_ffffffffffffff50) {
                  in_stack_ffffffffffffff50 = fVar28;
                }
                auVar14._0_4_ = fVar25 + fVar17;
                auVar14._4_4_ = fVar26 + fVar20;
                auVar14._8_4_ = fVar27 + fVar21;
                auVar14._12_4_ = fVar16 + fVar22;
                fVar23 = fVar11 + fVar23 + fVar23;
                auVar3._4_4_ = fVar30;
                auVar3._0_4_ = fVar29;
                auVar3._8_8_ = 0;
                auVar19 = maxps(auVar14,auVar3);
                if (fVar23 <= fVar28) {
                  fVar23 = fVar28;
                }
                fVar11 = (auVar19._0_4_ - auVar13._0_4_) * 0.5;
                fVar25 = (auVar19._4_4_ - auVar13._4_4_) * 0.5;
                fVar26 = (auVar19._8_4_ - auVar13._8_4_) * 0.0;
                fVar27 = (auVar19._12_4_ - auVar13._12_4_) * 0.0;
                fVar23 = (fVar23 - in_stack_ffffffffffffff50) * 0.5;
                local_48._4_4_ = auVar13._4_4_ + fVar25;
                local_48._0_4_ = auVar13._0_4_ + fVar11;
                uStack_40 = CONCAT44(auVar13._12_4_ + fVar27,auVar13._8_4_ + fVar26);
                in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 + fVar23;
                uVar9 = (uint)pSVar7->max_length;
                lVar10 = lVar10 + 1;
                in_stack_ffffffffffffff54 = fVar23;
                local_58 = fVar11;
                fStack_54 = fVar25;
                fStack_50 = fVar26;
                fStack_4c = fVar27;
              } while (iVar4 + -3 < (int)uVar9);
            }
            local_68 = local_68 + fVar11 + fVar11;
            fStack_64 = fStack_64 + fVar25 + fVar25;
            fStack_60 = fStack_60 + fVar26 + fVar26;
            fStack_5c = fStack_5c + fVar27 + fVar27;
            in_stack_ffffffffffffff4c = in_stack_ffffffffffffff4c + fVar23 + fVar23;
            local_90 = local_90 + 1;
            goto label_04337ee0;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        break;
      }
    } while( true );
  }
  auVar31 = il2cpp_runtime_helper_022b2c90();
  if (auVar31._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar31._0_8_);
    lVar10 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._list._4_4_ = in_stack_ffffffffffffff4c;
    __this_03.fields._list._0_4_ = in_stack_ffffffffffffff48;
    __this_03.fields._index = (int32_t)in_stack_ffffffffffffff50;
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff54;
    __this_03.fields._current = in_stack_ffffffffffffff58.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&local_88);
    if (lVar10 == 0) goto label_04338115;
    il2cpp_runtime_helper_022fefe0(lVar10);
  }
  __this_04.fields._list._4_4_ = in_stack_ffffffffffffff4c;
  __this_04.fields._list._0_4_ = in_stack_ffffffffffffff48;
  __this_04.fields._index = (int32_t)in_stack_ffffffffffffff50;
  __this_04.fields._version = (int32_t)in_stack_ffffffffffffff54;
  __this_04.fields._current = in_stack_ffffffffffffff58.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&local_88);
  _Unwind_Resume(auVar31._0_8_);
label_04338101:
  __this_02.fields._list._4_4_ = in_stack_ffffffffffffff4c;
  __this_02.fields._list._0_4_ = in_stack_ffffffffffffff48;
  __this_02.fields._index = (int32_t)in_stack_ffffffffffffff50;
  __this_02.fields._version = (int32_t)in_stack_ffffffffffffff54;
  __this_02.fields._current = in_stack_ffffffffffffff58.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)&local_88);
label_04338115:
  if (local_90 == 0) {
    if (g_data_057a6932 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6932 = '\x01';
    }
    uVar12 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    in_stack_ffffffffffffff4c = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
  }
  else {
    auVar15._0_4_ = (float)local_90;
    in_stack_ffffffffffffff4c = in_stack_ffffffffffffff4c / auVar15._0_4_;
    auVar15._4_4_ = auVar15._0_4_;
    auVar15._8_8_ = 0;
    auVar5._4_4_ = fStack_64;
    auVar5._0_4_ = local_68;
    auVar5._8_4_ = fStack_60;
    auVar5._12_4_ = fStack_5c;
    auVar13 = divps(auVar5,auVar15);
    uVar12 = auVar13._0_8_;
  }
  UVar32.fields.z = in_stack_ffffffffffffff4c;
  UVar32.fields.x = (float)(int)uVar12;
  UVar32.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
  return (UnityEngine_Vector3_o)UVar32.fields;
}


// MapEditor.MapEditorBrush$$ApplyCurve
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorBrush__ApplyCurve (MapEditor_MapEditorBrush_o* __this, UnityEngine_Vector3_o local, const MethodInfo* method);
// 0x4338290

UnityEngine_Vector3_o
MapEditor_MapEditorBrush__ApplyCurve
          (MapEditor_MapEditorBrush_o *__this,UnityEngine_Vector3_o local,MethodInfo *method)

{
  MethodInfo *in_RDX;
  UnityEngine_Vector3_Fields UVar1;
  UnityEngine_Quaternion_Fields UStack_18;
  
  UStack_18.x = 0.0;
  UStack_18.y = 0.0;
  UStack_18.z = 0.0;
  UStack_18.w = 0.0;
  UVar1 = (UnityEngine_Vector3_Fields)
          MapEditor_MapEditorBrush__ApplyCurve_4237110
                    (__this,local,(UnityEngine_Quaternion_o *)&UStack_18,in_RDX);
  return (UnityEngine_Vector3_o)UVar1;
}


// MapEditor.MapEditorBrush$$ApplyCurve
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorBrush__ApplyCurve (MapEditor_MapEditorBrush_o* __this, UnityEngine_Vector3_o local, UnityEngine_Quaternion_o* tangent, const MethodInfo* method);
// 0x4337110

UnityEngine_Vector3_o
MapEditor_MapEditorBrush__ApplyCurve_4237110
          (MapEditor_MapEditorBrush_o *__this,UnityEngine_Vector3_o local,UnityEngine_Quaternion_o *tangent,
          MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  float *pfVar7;
  undefined8 *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar26;
  undefined1 auVar25 [16];
  UnityEngine_Quaternion_Fields UVar27;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o axis;
  float local_38;
  float fStack_34;
  undefined8 uVar24;
  
  fVar13 = local.fields.z;
  fVar14 = local.fields.x;
  fVar17 = local.fields.y;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  uVar1 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uVar24 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  (tangent->fields).x = (float)(int)uVar1;
  (tangent->fields).y = (float)(int)((ulong)uVar1 >> 0x20);
  (tangent->fields).z = (float)(int)uVar24;
  (tangent->fields).w = (float)(int)((ulong)uVar24 >> 0x20);
  fVar2 = (__this->fields).SpacingZ;
  if ((fVar2 == 0.0) || (ABS((float)(__this->fields).CurveAxis) < 0.0001)) goto label_043377a1;
  iVar3 = (__this->fields).RandomizeEachPlacement;
  iVar4 = (__this->fields).GridX;
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  iVar5 = (__this->fields).GridY;
  iVar9 = 1;
  if (0 < iVar5) {
    iVar9 = iVar5;
  }
  if (fVar2 == 1.4013e-45) {
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pfVar7 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  }
  else if (fVar2 == 2.8026e-45) {
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    pfVar7 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  }
  else {
    if (g_data_057a6846 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6846 = '\x01';
    }
    puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
    pfVar7 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
  }
  uVar1 = *puVar8;
  fVar2 = *pfVar7;
  fVar12 = (__this->fields).SpacingZ;
  if (fVar12 == 1.4013e-45) {
    fVar18 = (float)(iVar4 + -1) * (__this->fields).SpacingX;
    fVar10 = 0.0;
label_04337325:
    fVar19 = (float)(iVar9 + -1) * (__this->fields).SpacingY;
  }
  else {
    fVar10 = (float)(iVar3 + -1) * (float)(__this->fields).GridZ;
    fVar18 = 0.0;
    if (fVar12 == 2.8026e-45) goto label_04337325;
    fVar18 = (float)(iVar4 + -1) * (__this->fields).SpacingX;
    fVar19 = 0.0;
    if (fVar12 != 4.2039e-45) goto label_04337325;
  }
  if ((fVar10 < fVar18) || (fVar10 < fVar19)) {
    if (fVar18 <= fVar19) {
      if (g_data_057a6846 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6846 = '\x01';
      }
      puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
      pfVar7 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
      fVar12 = fVar13;
      fVar10 = fVar19;
    }
    else {
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      pfVar7 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar12 = fVar17;
      fVar10 = fVar18;
    }
  }
  else {
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pfVar7 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
    fVar12 = fVar14;
  }
  if (fVar10 < 0.0001) goto label_043377a1;
  fVar19 = (float)*puVar8;
  fVar22 = (float)((ulong)*puVar8 >> 0x20);
  fVar18 = *pfVar7;
  local_38 = (float)uVar1;
  fStack_34 = (float)((ulong)uVar1 >> 0x20);
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6845 = '\x01';
  }
  auVar25._0_4_ = fVar18 * fStack_34 - fVar22 * fVar2;
  auVar25._4_4_ = fVar2 * fVar19 - local_38 * fVar18;
  auVar25._8_8_ = 0;
  fVar20 = fVar22 * local_38 - fStack_34 * fVar19;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar16 = 0;
  uVar15 = 0;
  fVar11 = fVar20 * fVar20 + auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_;
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
    uVar15 = extraout_XMM0_Dc;
    uVar16 = extraout_XMM0_Dd;
    if (1e-05 < fVar11) goto label_04337603;
label_0433759d:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar20 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar11 = SQRT(fVar11);
    if (fVar11 <= 1e-05) goto label_0433759d;
label_04337603:
    fVar20 = fVar20 / fVar11;
    auVar6._4_4_ = fVar11;
    auVar6._0_4_ = fVar11;
    auVar6._8_4_ = uVar15;
    auVar6._12_4_ = uVar16;
    auVar25 = divps(auVar25,auVar6);
    uVar24 = auVar25._0_8_;
  }
  fVar10 = fVar10 / ((float)(__this->fields).CurveAxis * 0.017453292);
  fVar12 = fVar12 / fVar10;
  fVar23 = (float)uVar24;
  fVar26 = (float)((ulong)uVar24 >> 0x20);
  fVar21 = fVar20 * fVar13 + fVar26 * fVar17 + fVar14 * fVar23;
  fVar11 = fVar13 * fVar2 + fVar17 * fStack_34 + local_38 * fVar14;
  fVar13 = sinf(fVar12);
  fVar13 = fVar13 * fVar10;
  fVar14 = cosf(fVar12);
  fVar10 = (1.0 - fVar14) * fVar10;
  fVar14 = fVar10 * fVar23 + fVar19 * fVar13 + fVar21 * fVar23 + fVar11 * local_38;
  fVar17 = fVar10 * fVar26 + fVar22 * fVar13 + fVar21 * fVar26 + fVar11 * fStack_34;
  fVar13 = fVar20 * fVar10 + fVar18 * fVar13 + fVar20 * fVar21 + fVar2 * fVar11;
  axis.fields.z = fVar2;
  axis.fields.x = (float)(int)uVar1;
  axis.fields.y = (float)(int)((ulong)uVar1 >> 0x20);
  UVar27 = (UnityEngine_Quaternion_Fields)
           UnityEngine_Quaternion__AngleAxis(fVar12 * 57.29578,axis,(MethodInfo *)0x0);
  tangent->fields = UVar27;
label_043377a1:
  UVar28.fields.y = fVar17;
  UVar28.fields.x = fVar14;
  UVar28.fields.z = fVar13;
  return (UnityEngine_Vector3_o)UVar28.fields;
}


// MapEditor.MapEditorBrush$$ProjectToGround
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorBrush__ProjectToGround (MapEditor_MapEditorBrush_o* __this, UnityEngine_GameObject_o* go, UnityEngine_Vector3_o xz, int32_t mask, const MethodInfo* method);
// 0x43377c0

UnityEngine_Vector3_o
MapEditor_MapEditorBrush__ProjectToGround
          (MapEditor_MapEditorBrush_o *__this,UnityEngine_GameObject_o *go,UnityEngine_Vector3_o xz,
          int32_t mask,MethodInfo *method)

{
  ulong uVar1;
  int iVar2;
  System_Collections_Generic_List_BrushEntry__o *__this_00;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 auVar7 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_09;
  UnityEngine_Object_o *x;
  uint uVar8;
  bool_conflict bVar9;
  System_Object_array *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  MethodInfo_255AB00 *b;
  MapEditor_MapEditorBrush_o *unaff_R12;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar16 [16];
  undefined1 extraout_var [12];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float extraout_XMM1_Da;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar37;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar38;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar44;
  undefined1 auVar41 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [12];
  UnityEngine_Vector3_o UVar50;
  UnityEngine_Vector3_o UVar51;
  UnityEngine_Vector3_o UVar52;
  undefined4 in_stack_fffffffffffffe08;
  float in_stack_fffffffffffffe0c;
  float in_stack_fffffffffffffe10;
  float in_stack_fffffffffffffe14;
  _union_249689 in_stack_fffffffffffffe18;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  int iStack_1d0;
  _union_249689 _Stack_1c8;
  undefined8 uStack_1c0;
  UnityEngine_Object_o *pUStack_1b8;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_170;
  MapEditor_MapEditorBrush_o *pMStack_168;
  System_Collections_Generic_List_T__o *pSVar53;
  Il2CppMethodPointer pIVar54;
  Il2CppObject *pIVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined4 in_stack_ffffffffffffff20;
  undefined4 uVar58;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float local_70;
  float fStack_6c;
  ulong local_64;
  Il2CppMethodPointer local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod pIStack_48;
  uint32_t uStack_40;
  float local_3c;
  float fStack_38;
  undefined8 uStack_34;
  
  auVar26._4_12_ = xz._12_12_;
  auVar26._0_4_ = xz.fields.z;
  local_a8 = xz.fields.x;
  fStack_a4 = xz.fields.y;
  b = (MethodInfo_255AB00 *)go;
  auVar31 = auVar26;
  if (g_data_057ae09b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    __this = (MapEditor_MapEditorBrush_o *)&TypeInfo_Physics;
    il2cpp_runtime_helper_023445d0();
    auVar31._8_8_ = extraout_XMM1_Qb;
    auVar31._0_8_ = extraout_XMM1_Qa;
    g_data_057ae09b = '\x01';
  }
  fStack_38 = 0.0;
  uStack_34 = 0;
  pIStack_48 = (InvokerMethod)0x0;
  uStack_40 = 0;
  local_3c = 0.0;
  local_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  if ((go == (UnityEngine_GameObject_o *)0x0) ||
     (b = MethodInfo_Renderer_GetComponentsInChildren_Renderer, __this = (MapEditor_MapEditorBrush_o *)go,
     pSVar10 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(go,MethodInfo_Renderer_GetComponentsInChildren_Renderer),
     pSVar10 == (System_Object_array *)0x0)) {
label_04337c26:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar10->max_length == 0) {
      fVar29 = 0.0;
label_0433799d:
      b = (MethodInfo_255AB00 *)0x0;
      pUVar11 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      __this = (MapEditor_MapEditorBrush_o *)go;
      if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
        UVar50 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
        auVar23._4_12_ = auVar31._4_12_;
        auVar23._0_4_ = UVar50.fields.z;
        lVar15 = UVar50.fields._0_8_;
        auVar48._8_8_ = auVar23._0_8_;
        auVar48._0_8_ = lVar15;
        fVar34 = UVar50.fields.y;
        if (g_data_057ac31b == '\0') {
          auVar48 = il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          lVar15 = (ulong)(uint)fVar34 << 0x20;
          g_data_057ac31b = '\x01';
        }
        fVar35 = (float)((ulong)lVar15 >> 0x20);
        uVar1 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
        auVar28._8_8_ = 0;
        auVar28._0_8_ = uVar1;
        fVar36 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
        if (g_data_057a6845 == '\0') {
          auVar48 = il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6845 = '\x01';
          iVar2 = *(int *)(TypeInfo_Math + 0xe4);
          fVar35 = fVar34;
        }
        else {
          iVar2 = *(int *)(TypeInfo_Math + 0xe4);
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0(auVar48._0_8_,auVar48._8_8_);
          fVar35 = fVar34;
        }
        fVar37 = (float)(uVar1 >> 0x20);
        fVar37 = fVar36 * fVar36 + fVar37 * fVar37 + (float)uVar1 * (float)uVar1;
        if (fVar37 < 0.0) {
          auVar16._0_4_ = sqrtf(fVar37);
          auVar16._4_12_ = extraout_var;
          fVar35 = fVar34;
          fVar37 = auVar16._0_4_;
        }
        else {
          fVar37 = SQRT(fVar37);
          auVar16 = ZEXT416((uint)fVar37);
        }
        fVar34 = local_a8;
        if (1e-05 < fVar37) {
          auVar17._0_4_ = auVar16._0_4_;
          fVar37 = fVar36 / auVar17._0_4_;
          auVar17._8_4_ = auVar16._8_4_;
          auVar17._12_4_ = auVar16._12_4_;
          auVar17._4_4_ = auVar17._0_4_;
          auVar31 = divps(auVar28,auVar17);
          uVar12 = auVar31._0_8_;
        }
        else {
          if (g_data_057a65d5 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
          }
          uVar12 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          fVar37 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          fVar36 = fVar37;
        }
        uVar58 = 0;
        uStack_7c = (undefined4)uVar12;
        uStack_78 = (undefined4)((ulong)uVar12 >> 0x20);
        uVar57 = CONCAT44(fVar37,uStack_78);
        uVar12._4_4_ = fVar35;
        uVar12._0_4_ = (uint32_t)fVar34;
        uVar56._4_4_ = uStack_7c;
        uVar56._0_4_ = auVar26._0_4_;
        ray.fields._8_8_ = uVar56;
        ray.fields.m_Origin.fields._0_8_ = uVar12;
        ray.fields.m_Direction.fields.y = (float)uStack_78;
        ray.fields.m_Direction.fields.z = fVar37;
        fVar35 = fStack_a4;
        bVar9 = UnityEngine_Physics__Raycast_4e78080
                          (ray,(UnityEngine_RaycastHit_o *)&local_58,2000.0,mask,(MethodInfo *)0x0);
        fVar34 = fVar29;
        if ((char)bVar9 != '\0') {
          __this_09.fields._8_8_ = uVar56;
          __this_09.fields.m_Point.fields._0_8_ = uVar12;
          __this_09.fields.m_Normal.fields.y = (float)(int)uVar57;
          __this_09.fields.m_Normal.fields.z = (float)(int)((ulong)uVar57 >> 0x20);
          __this_09.fields.m_FaceID = in_stack_ffffffffffffff20;
          __this_09.fields.m_Distance = fVar36;
          __this_09.fields.m_UV.fields.x = local_a8;
          __this_09.fields.m_UV.fields.y = (float)uVar58;
          __this_09.fields.m_Collider = (int32_t)fVar35;
          UVar50 = UnityEngine_RaycastHit__get_point(__this_09,(MethodInfo *)&local_58);
          fVar34 = UVar50.fields.y;
          fStack_a4 = fVar29;
        }
        UVar50.fields.y = fVar34 + fStack_a4;
        UVar50.fields.x = local_a8;
        UVar50.fields.z = auVar26._0_4_;
        return (UnityEngine_Vector3_o)UVar50.fields;
      }
      goto label_04337c26;
    }
    if ((int)pSVar10->max_length != 0) {
      b = (MethodInfo_255AB00 *)pSVar10->m_Items[0];
      if (b != (MethodInfo_255AB00 *)0x0) {
        __this = (MapEditor_MapEditorBrush_o *)&local_70;
        UnityEngine_Renderer__get_bounds
                  ((UnityEngine_Bounds_o *)__this,(UnityEngine_Renderer_o *)b,(MethodInfo *)0x0);
        fVar34 = 0.0;
        fVar36 = 0.0;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = local_64;
        uVar8 = (uint)pSVar10->max_length;
        fVar29 = fStack_6c;
        if ((int)uVar8 < 2) {
          fVar35 = (float)(local_64 >> 0x20);
        }
        else {
          lVar15 = 5;
          unaff_R12 = (MapEditor_MapEditorBrush_o *)&local_70;
          fVar37 = local_70;
          do {
            iVar2 = (int)lVar15;
            if (uVar8 <= iVar2 - 4U) goto label_04337c2b;
            b = (MethodInfo_255AB00 *)pSVar10->m_Items[lVar15 + -4];
            if (b == (MethodInfo_255AB00 *)0x0) goto label_04337c26;
            __this = unaff_R12;
            UnityEngine_Renderer__get_bounds
                      ((UnityEngine_Bounds_o *)unaff_R12,(UnityEngine_Renderer_o *)b,(MethodInfo *)0x0);
            auVar24._0_4_ = local_70 - (float)local_64;
            fVar35 = (float)(local_64 >> 0x20);
            auVar24._4_4_ = fStack_6c - fVar35;
            auVar24._8_8_ = 0;
            local_b8 = auVar40._0_4_;
            fStack_b4 = auVar40._4_4_;
            fStack_b0 = auVar40._8_4_;
            fStack_ac = auVar40._12_4_;
            auVar30._0_4_ = fVar37 - local_b8;
            auVar30._4_4_ = fVar29 - fStack_b4;
            auVar30._8_4_ = fVar34 - fStack_b0;
            auVar30._12_4_ = fVar36 - fStack_ac;
            auVar31 = minps(auVar30,auVar24);
            auVar39._0_4_ = local_b8 + fVar37;
            auVar39._4_4_ = fStack_b4 + fVar29;
            auVar39._8_4_ = fStack_b0 + fVar34;
            auVar39._12_4_ = fStack_ac + fVar36;
            auVar40 = maxps(auVar39,auVar24);
            fVar38 = (auVar40._0_4_ - auVar31._0_4_) * 0.5;
            fVar42 = (auVar40._4_4_ - auVar31._4_4_) * 0.5;
            fVar43 = (auVar40._8_4_ - auVar31._8_4_) * 0.0;
            fVar44 = (auVar40._12_4_ - auVar31._12_4_) * 0.0;
            fVar29 = auVar31._0_4_ + fVar38;
            fVar34 = auVar31._4_4_ + fVar42;
            fVar36 = auVar31._8_4_ + fVar43;
            fVar37 = auVar31._12_4_ + fVar44;
            auVar33._0_4_ = local_70 + (float)local_64;
            auVar33._4_4_ = fStack_6c + fVar35;
            auVar33._8_8_ = 0;
            auVar21._0_4_ = fVar29 - fVar38;
            auVar21._4_4_ = fVar34 - fVar42;
            auVar21._8_4_ = fVar36 - fVar43;
            auVar21._12_4_ = fVar37 - fVar44;
            auVar31 = minps(auVar21,auVar33);
            auVar32._0_4_ = fVar29 + fVar38;
            auVar32._4_4_ = fVar34 + fVar42;
            auVar32._8_4_ = fVar36 + fVar43;
            auVar32._12_4_ = fVar37 + fVar44;
            auVar33 = maxps(auVar32,auVar33);
            fVar37 = (auVar33._0_4_ - auVar31._0_4_) * 0.5;
            fVar35 = (auVar33._4_4_ - auVar31._4_4_) * 0.5;
            auVar40._4_4_ = fVar35;
            auVar40._0_4_ = fVar37;
            fVar38 = (auVar33._8_4_ - auVar31._8_4_) * 0.0;
            fVar42 = (auVar33._12_4_ - auVar31._12_4_) * 0.0;
            fVar37 = auVar31._0_4_ + fVar37;
            fVar29 = auVar31._4_4_ + fVar35;
            fVar34 = auVar31._8_4_ + fVar38;
            fVar36 = auVar31._12_4_ + fVar42;
            uVar8 = (uint)pSVar10->max_length;
            lVar15 = lVar15 + 1;
            auVar40._8_4_ = fVar38;
            auVar40._12_4_ = fVar42;
          } while (iVar2 + -3 < (int)uVar8);
        }
        b = (MethodInfo_255AB00 *)0x0;
        __this = (MapEditor_MapEditorBrush_o *)go;
        pUVar11 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
          UVar50 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
          auVar22._4_4_ = fVar29;
          auVar22._0_4_ = fVar29;
          auVar22._8_4_ = fVar34;
          auVar22._12_4_ = fVar36;
          auVar31._4_12_ = auVar22._4_12_;
          auVar31._0_4_ = fVar29 - fVar35;
          fVar29 = UVar50.fields.y - auVar31._0_4_;
          goto label_0433799d;
        }
      }
      goto label_04337c26;
    }
  }
label_04337c2b:
  il2cpp_runtime_helper_022b2ca0();
  uVar12 = extraout_XMM1_Qa_00;
  if (g_data_057ae09d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BrushEntry_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
    g_data_057ae09d = '\x01';
    uVar12 = extraout_XMM1_Qa_01;
  }
  pSVar53 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar54 = (Il2CppMethodPointer)0x0;
  pIVar55 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).Entries;
  if (__this_00 == (System_Collections_Generic_List_BrushEntry__o *)0x0) {
label_04337d27:
    auVar49 = il2cpp_runtime_helper_022b2c90();
    uVar12 = auVar49._0_8_;
    if (auVar49._8_4_ == 1) {
      plVar14 = (long *)__cxa_begin_catch(uVar12);
      lVar15 = *plVar14;
      __cxa_end_catch();
      __this_07.fields._8_8_ = pIVar54;
      __this_07.fields._list = pSVar53;
      __this_07.fields._current = pIVar55;
      fVar29 = extraout_XMM1_Da;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec0);
      uVar12 = extraout_XMM0_Qa_00;
      if (lVar15 == 0) goto label_04337d0c;
      uVar12 = il2cpp_runtime_helper_022fefe0(lVar15);
    }
    else {
      lVar15 = 0;
    }
    __this_08.fields._8_8_ = pIVar54;
    __this_08.fields._list = pSVar53;
    __this_08.fields._current = pIVar55;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec0);
    if (lVar15 == 0) {
      _Unwind_Resume(uVar12);
    }
    lVar13 = il2cpp_runtime_helper_022fefe0(lVar15);
    il2cpp_runtime_helper_01f66400();
    lStack_170 = lVar15;
    pMStack_168 = unaff_R12;
    if (g_data_057ae09a == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae09a = '\x01';
    }
    _Stack_1c8.genericMethod = (System_Collections_Generic_List_T__o *)0x0;
    uStack_1c0 = 0;
    pUStack_1b8 = (UnityEngine_Object_o *)0x0;
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    if (*(System_Collections_Generic_List_object__o **)(lVar13 + 0x78) !=
        (System_Collections_Generic_List_object__o *)0x0) {
      uVar12 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fStack_1a8 = (float)uVar12;
      fStack_1a4 = (float)((ulong)uVar12 >> 0x20);
      fStack_1a0 = 0.0;
      fStack_19c = 0.0;
      in_stack_fffffffffffffe0c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffe18,
                 *(System_Collections_Generic_List_object__o **)(lVar13 + 0x78),MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      pUStack_1b8 = (UnityEngine_Object_o *)CONCAT44(fStack_1d4,fStack_1d8);
      uStack_1c0 = CONCAT44(fStack_1dc,fStack_1e0);
      iStack_1d0 = 0;
      _Stack_1c8 = in_stack_fffffffffffffe18;
label_04337ee0:
      do {
        __this_01.fields._list._4_4_ = in_stack_fffffffffffffe0c;
        __this_01.fields._list._0_4_ = in_stack_fffffffffffffe08;
        __this_01.fields._index = (int32_t)in_stack_fffffffffffffe10;
        __this_01.fields._version = (int32_t)in_stack_fffffffffffffe14;
        __this_01.fields._current = in_stack_fffffffffffffe18.genericMethod;
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&_Stack_1c8);
        x = pUStack_1b8;
        if ((char)bVar9 == '\0') goto label_04338101;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar9 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          if (x == (UnityEngine_Object_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            fVar29 = in_stack_fffffffffffffe14;
label_0433818e:
            il2cpp_runtime_helper_022b2c90();
label_04338193:
            il2cpp_runtime_helper_022b2c90();
label_04338198:
            il2cpp_runtime_helper_022b2ca0();
            in_stack_fffffffffffffe14 = fVar29;
label_0433819d:
            il2cpp_runtime_helper_022b2ca0();
          }
          else {
            pSVar10 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                                ((UnityEngine_GameObject_o *)x,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
            fVar29 = in_stack_fffffffffffffe14;
            if (pSVar10 == (System_Object_array *)0x0) goto label_0433818e;
            if (pSVar10->max_length == 0) goto label_04337ee0;
            if ((int)pSVar10->max_length == 0) goto label_0433819d;
            if ((UnityEngine_Renderer_o *)pSVar10->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
              UnityEngine_Renderer__get_bounds
                        ((UnityEngine_Bounds_o *)&stack0xfffffffffffffe18,
                         (UnityEngine_Renderer_o *)pSVar10->m_Items[0],(MethodInfo *)0x0);
              fVar35 = 0.0;
              fVar37 = 0.0;
              uVar8 = (uint)pSVar10->max_length;
              fVar29 = fStack_1d4;
              fVar34 = fStack_1dc;
              fVar36 = fStack_1d8;
              if (1 < (int)uVar8) {
                fStack_198 = fStack_1dc;
                fStack_194 = fStack_1d8;
                fStack_190 = 0.0;
                fStack_18c = 0.0;
                uStack_180 = 0;
                lVar15 = 5;
                in_stack_fffffffffffffe10 = fStack_1e0;
                uStack_188 = in_stack_fffffffffffffe18;
                do {
                  iVar2 = (int)lVar15;
                  if (uVar8 <= iVar2 - 4U) goto label_04338198;
                  if ((UnityEngine_Renderer_o *)pSVar10->m_Items[lVar15 + -4] == (UnityEngine_Renderer_o *)0x0
                     ) goto label_04338193;
                  UnityEngine_Renderer__get_bounds
                            ((UnityEngine_Bounds_o *)&stack0xfffffffffffffe18,
                             (UnityEngine_Renderer_o *)pSVar10->m_Items[lVar15 + -4],(MethodInfo *)0x0);
                  fVar36 = in_stack_fffffffffffffe18._0_4_ - fStack_1dc;
                  fVar35 = in_stack_fffffffffffffe18._4_4_ - fStack_1d8;
                  fVar37 = fStack_1e0 - fStack_1d4;
                  auVar18._0_4_ = (float)(undefined4)uStack_188 - fStack_198;
                  auVar18._4_4_ = (float)uStack_188._4_4_ - fStack_194;
                  auVar18._8_4_ = (float)uStack_180 - fStack_190;
                  auVar18._12_4_ = uStack_180._4_4_ - fStack_18c;
                  auVar3._4_4_ = fVar35;
                  auVar3._0_4_ = fVar36;
                  auVar3._8_8_ = 0;
                  auVar31 = minps(auVar18,auVar3);
                  fVar34 = in_stack_fffffffffffffe10 - fVar29;
                  if (fVar37 <= in_stack_fffffffffffffe10 - fVar29) {
                    fVar34 = fVar37;
                  }
                  auVar25._0_4_ = fStack_198 + (float)(undefined4)uStack_188;
                  auVar25._4_4_ = fStack_194 + (float)uStack_188._4_4_;
                  auVar25._8_4_ = fStack_190 + (float)uStack_180;
                  auVar25._12_4_ = fStack_18c + uStack_180._4_4_;
                  auVar4._4_4_ = fVar35;
                  auVar4._0_4_ = fVar36;
                  auVar4._8_8_ = 0;
                  auVar26 = maxps(auVar25,auVar4);
                  fVar36 = fVar29 + in_stack_fffffffffffffe10;
                  if (fVar29 + in_stack_fffffffffffffe10 <= fVar37) {
                    fVar36 = fVar37;
                  }
                  fVar42 = (auVar26._0_4_ - auVar31._0_4_) * 0.5;
                  fVar43 = (auVar26._4_4_ - auVar31._4_4_) * 0.5;
                  fVar44 = (auVar26._8_4_ - auVar31._8_4_) * 0.0;
                  fVar27 = (auVar26._12_4_ - auVar31._12_4_) * 0.0;
                  fVar29 = (fVar36 - fVar34) * 0.5;
                  fVar36 = auVar31._0_4_ + fVar42;
                  fVar35 = auVar31._4_4_ + fVar43;
                  fVar37 = auVar31._8_4_ + fVar44;
                  fVar38 = auVar31._12_4_ + fVar27;
                  fVar46 = in_stack_fffffffffffffe18._0_4_ + fStack_1dc;
                  fVar47 = in_stack_fffffffffffffe18._4_4_ + fStack_1d8;
                  fVar45 = fStack_1e0 + fStack_1d4;
                  auVar41._0_4_ = fVar36 - fVar42;
                  auVar41._4_4_ = fVar35 - fVar43;
                  auVar41._8_4_ = fVar37 - fVar44;
                  auVar41._12_4_ = fVar38 - fVar27;
                  in_stack_fffffffffffffe10 = (fVar34 + fVar29) - fVar29;
                  auVar5._4_4_ = fVar47;
                  auVar5._0_4_ = fVar46;
                  auVar5._8_8_ = 0;
                  auVar31 = minps(auVar41,auVar5);
                  if (fVar45 <= in_stack_fffffffffffffe10) {
                    in_stack_fffffffffffffe10 = fVar45;
                  }
                  auVar19._0_4_ = fVar36 + fVar42;
                  auVar19._4_4_ = fVar35 + fVar43;
                  auVar19._8_4_ = fVar37 + fVar44;
                  auVar19._12_4_ = fVar38 + fVar27;
                  fVar29 = fVar34 + fVar29 + fVar29;
                  auVar6._4_4_ = fVar47;
                  auVar6._0_4_ = fVar46;
                  auVar6._8_8_ = 0;
                  auVar26 = maxps(auVar19,auVar6);
                  if (fVar29 <= fVar45) {
                    fVar29 = fVar45;
                  }
                  fVar34 = (auVar26._0_4_ - auVar31._0_4_) * 0.5;
                  fVar36 = (auVar26._4_4_ - auVar31._4_4_) * 0.5;
                  fVar35 = (auVar26._8_4_ - auVar31._8_4_) * 0.0;
                  fVar37 = (auVar26._12_4_ - auVar31._12_4_) * 0.0;
                  fVar29 = (fVar29 - in_stack_fffffffffffffe10) * 0.5;
                  uStack_188._4_4_ = auVar31._4_4_ + fVar36;
                  uStack_188._0_4_ = auVar31._0_4_ + fVar34;
                  uStack_180 = CONCAT44(auVar31._12_4_ + fVar37,auVar31._8_4_ + fVar35);
                  in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 + fVar29;
                  uVar8 = (uint)pSVar10->max_length;
                  lVar15 = lVar15 + 1;
                  in_stack_fffffffffffffe14 = fVar29;
                  fStack_198 = fVar34;
                  fStack_194 = fVar36;
                  fStack_190 = fVar35;
                  fStack_18c = fVar37;
                } while (iVar2 + -3 < (int)uVar8);
              }
              fStack_1a8 = fStack_1a8 + fVar34 + fVar34;
              fStack_1a4 = fStack_1a4 + fVar36 + fVar36;
              fStack_1a0 = fStack_1a0 + fVar35 + fVar35;
              fStack_19c = fStack_19c + fVar37 + fVar37;
              in_stack_fffffffffffffe0c = in_stack_fffffffffffffe0c + fVar29 + fVar29;
              iStack_1d0 = iStack_1d0 + 1;
              goto label_04337ee0;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          break;
        }
      } while( true );
    }
    auVar49 = il2cpp_runtime_helper_022b2c90();
    if (auVar49._8_4_ == 1) {
      plVar14 = (long *)__cxa_begin_catch(auVar49._0_8_);
      lVar15 = *plVar14;
      __cxa_end_catch();
      __this_03.fields._list._4_4_ = in_stack_fffffffffffffe0c;
      __this_03.fields._list._0_4_ = in_stack_fffffffffffffe08;
      __this_03.fields._index = (int32_t)in_stack_fffffffffffffe10;
      __this_03.fields._version = (int32_t)in_stack_fffffffffffffe14;
      __this_03.fields._current = in_stack_fffffffffffffe18.genericMethod;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&_Stack_1c8)
      ;
      if (lVar15 == 0) {
label_04338115:
        if (iStack_1d0 == 0) {
          if (g_data_057a6932 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6932 = '\x01';
          }
          uVar12 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          in_stack_fffffffffffffe0c = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        }
        else {
          auVar20._0_4_ = (float)iStack_1d0;
          in_stack_fffffffffffffe0c = in_stack_fffffffffffffe0c / auVar20._0_4_;
          auVar20._4_4_ = auVar20._0_4_;
          auVar20._8_8_ = 0;
          auVar7._4_4_ = fStack_1a4;
          auVar7._0_4_ = fStack_1a8;
          auVar7._8_4_ = fStack_1a0;
          auVar7._12_4_ = fStack_19c;
          auVar31 = divps(auVar7,auVar20);
          uVar12 = auVar31._0_8_;
        }
        UVar52.fields.z = in_stack_fffffffffffffe0c;
        UVar52.fields.x = (float)(int)uVar12;
        UVar52.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
        return (UnityEngine_Vector3_o)UVar52.fields;
      }
      il2cpp_runtime_helper_022fefe0(lVar15);
    }
    __this_04.fields._list._4_4_ = in_stack_fffffffffffffe0c;
    __this_04.fields._list._0_4_ = in_stack_fffffffffffffe08;
    __this_04.fields._index = (int32_t)in_stack_fffffffffffffe10;
    __this_04.fields._version = (int32_t)in_stack_fffffffffffffe14;
    __this_04.fields._current = in_stack_fffffffffffffe18.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_1c8);
    _Unwind_Resume(auVar49._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffec0,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
  unaff_R12 = (MapEditor_MapEditorBrush_o *)&MethodInfo_Boolean_MoveNext;
  do {
    __this_05.fields._8_8_ = pIVar54;
    __this_05.fields._list = pSVar53;
    __this_05.fields._current = pIVar55;
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_05,(MethodInfo_321A1D0 *)&stack0xfffffffffffffec0);
    fVar29 = (float)uVar12;
    if ((char)bVar9 == '\0') break;
    if (pIVar55 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_04337d27;
    }
    bVar9 = System_String__op_Equality
                      ((System_String_o *)pIVar55[1].klass,(System_String_o *)b,(MethodInfo *)0x0);
    fVar29 = (float)uVar12;
  } while ((char)bVar9 == '\0');
  __this_06.fields._8_8_ = pIVar54;
  __this_06.fields._list = pSVar53;
  __this_06.fields._current = pIVar55;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec0);
  uVar12 = extraout_XMM0_Qa;
label_04337d0c:
  UVar51.fields.z = fVar29;
  UVar51.fields.x = (float)(int)uVar12;
  UVar51.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
  return (UnityEngine_Vector3_o)UVar51.fields;
label_04338101:
  __this_02.fields._list._4_4_ = in_stack_fffffffffffffe0c;
  __this_02.fields._list._0_4_ = in_stack_fffffffffffffe08;
  __this_02.fields._index = (int32_t)in_stack_fffffffffffffe10;
  __this_02.fields._version = (int32_t)in_stack_fffffffffffffe14;
  __this_02.fields._current = in_stack_fffffffffffffe18.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)&_Stack_1c8);
  goto label_04338115;
}


// MapEditor.MapEditorBrush$$BuildPlacements
// il2cpp: System_Collections_Generic_List_MapScriptBaseObject__o* MapEditor_MapEditorBrush__BuildPlacements (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x43382b0

System_Collections_Generic_List_MapScriptBaseObject__o *
MapEditor_MapEditorBrush__BuildPlacements(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  uint uVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar4;
  Map_MapScriptBaseObject_array *pMVar5;
  long lVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_01;
  UnityEngine_Object_o *x;
  System_String_o *pSVar8;
  MapEditor_BrushEntry_o *entry;
  Map_MapScriptSceneObject_o *script;
  UnityEngine_Transform_o *pUVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Collections_Generic_List_GameObject__o *__this_02;
  MapEditor_MapEditorBrush_o *__this_03;
  int index;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar10;
  
  if (g_data_057ae09c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae09c = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_MapScriptBaseObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Map_MapScriptBaseObject);
  __this_02 = (__this->fields)._ghostObjects;
  if (__this_02 == (System_Collections_Generic_List_GameObject__o *)0x0) {
label_043385ab:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    index = 0;
    if (0 < (__this_02->fields)._size) {
      do {
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_GameObject_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          __this_00 = (__this->fields)._ghostAssets;
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_043385ab;
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_String_get_Item);
          entry = MapEditor_MapEditorBrush__FindEntry(__this,pSVar8,method_00);
          __this_03 = (MapEditor_MapEditorBrush_o *)(__this->fields)._ghostAssets;
          if (__this_03 == (MapEditor_MapEditorBrush_o *)0x0) goto label_043385ab;
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_03,index,MethodInfo_String_get_Item);
          script = MapEditor_MapEditorBrush__CloneScript(__this_03,pSVar8,method_01);
          if (script == (Map_MapScriptSceneObject_o *)0x0) goto label_04338390;
          pSVar4 = (__this->fields)._ghostScales;
          if (pSVar4 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_043385ab;
          fVar2 = (script->fields).RotationY;
          UVar10 = System_Collections_Generic_List_Vector3___get_Item(pSVar4,index,MethodInfo_Vector3_get_Item);
          (script->fields).RotationY = UVar10.fields.x * fVar2;
          pSVar4 = (__this->fields)._ghostScales;
          if (pSVar4 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_043385ab;
          fVar2 = (script->fields).RotationZ;
          UVar10 = System_Collections_Generic_List_Vector3___get_Item(pSVar4,index,MethodInfo_Vector3_get_Item);
          (script->fields).RotationZ = UVar10.fields.y * fVar2;
          pSVar4 = (__this->fields)._ghostScales;
          if (pSVar4 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_043385ab;
          fVar2 = (script->fields).ScaleX;
          UVar10 = System_Collections_Generic_List_Vector3___get_Item(pSVar4,index,MethodInfo_Vector3_get_Item);
          (script->fields).ScaleX = UVar10.fields.z * fVar2;
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0),
             pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_043385ab;
          UVar10 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
          Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)script,UVar10,(MethodInfo *)0x0);
          pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_043385ab;
          rotation = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
          Map_MapScriptBaseObject__SetRotation_3fb4ce0
                    ((Map_MapScriptBaseObject_o *)script,rotation,(MethodInfo *)0x0);
          if (entry != (MapEditor_BrushEntry_o *)0x0) {
            MapEditor_MapEditorBrush__ApplyEntryFields(script,entry,method_02);
          }
          lVar6 = MethodInfo_Void_Add;
          if (__this_01 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) goto label_043385ab;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar5 = (__this_01->fields)._items;
          if (pMVar5 == (Map_MapScriptBaseObject_array *)0x0) goto label_043385ab;
          uVar3 = (__this_01->fields)._size;
          if ((uint)pMVar5->max_length <= uVar3) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)script,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            goto label_04338390;
          }
          (__this_01->fields)._size = uVar3 + 1;
          pMVar5->m_Items[(int)uVar3] = (Map_MapScriptBaseObject_o *)script;
          il2cpp_runtime_helper_022b4080(pMVar5->m_Items + (int)uVar3,script);
          __this_02 = (__this->fields)._ghostObjects;
        }
        else {
label_04338390:
          __this_02 = (__this->fields)._ghostObjects;
        }
        if (__this_02 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043385ab;
        index = index + 1;
      } while (index < (__this_02->fields)._size);
    }
  }
  return __this_01;
}


// MapEditor.MapEditorBrush$$FindEntry
// il2cpp: MapEditor_BrushEntry_o* MapEditor_MapEditorBrush__FindEntry (MapEditor_MapEditorBrush_o* __this, System_String_o* asset, const MethodInfo* method);
// 0x4337c30

MapEditor_BrushEntry_o *
MapEditor_MapEditorBrush__FindEntry
          (MapEditor_MapEditorBrush_o *__this,System_String_o *asset,MethodInfo *method)

{
  System_Collections_Generic_List_BrushEntry__o *__this_00;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  UnityEngine_Object_o *x;
  bool_conflict bVar5;
  undefined8 uVar6;
  long lVar7;
  System_Object_array *pSVar8;
  long *plVar9;
  uint uVar10;
  MapEditor_BrushEntry_o *pMVar11;
  int iVar12;
  undefined8 *unaff_R12;
  long lVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [12];
  undefined4 in_stack_ffffffffffffff00;
  float in_stack_ffffffffffffff04;
  float in_stack_ffffffffffffff08;
  float in_stack_ffffffffffffff0c;
  _union_249689 in_stack_ffffffffffffff10;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  MapEditor_BrushEntry_o *pMStack_d8;
  _union_249689 _Stack_d0;
  undefined8 uStack_c8;
  UnityEngine_Object_o *pUStack_c0;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined8 *puStack_70;
  System_Collections_Generic_List_T__o *pSVar34;
  Il2CppMethodPointer pIVar35;
  MapEditor_BrushEntry_o *pMVar36;
  MapEditor_BrushEntry_o *pMVar37;
  
  if (g_data_057ae09d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BrushEntry_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
    g_data_057ae09d = '\x01';
  }
  pSVar34 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar35 = (Il2CppMethodPointer)0x0;
  pMVar36 = (MapEditor_BrushEntry_o *)0x0;
  __this_00 = (__this->fields).Entries;
  if (__this_00 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_MapEditor_BrushEntry_GetEnumerator);
    unaff_R12 = &MethodInfo_Boolean_MoveNext;
    pMVar37 = pMVar36;
    do {
      pMVar36 = pMVar37;
      __this_05.fields._8_8_ = pIVar35;
      __this_05.fields._list = pSVar34;
      __this_05.fields._current = (Il2CppObject *)pMVar36;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar5 == '\0') {
        iVar12 = 5;
        pMVar11 = (MapEditor_BrushEntry_o *)0x0;
        goto label_04337cfa;
      }
      if (pMVar36 == (MapEditor_BrushEntry_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04337d27;
      }
      pMVar37 = pMVar36;
      bVar5 = System_String__op_Equality((pMVar36->fields).AssetName,asset,(MethodInfo *)0x0);
    } while ((char)bVar5 == '\0');
    iVar12 = 4;
    pMVar11 = pMVar36;
    pMVar36 = pMVar37;
label_04337cfa:
    __this_06.fields._8_8_ = pIVar35;
    __this_06.fields._list = pSVar34;
    __this_06.fields._current = (Il2CppObject *)pMVar36;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
label_04337d0c:
    pMVar36 = (MapEditor_BrushEntry_o *)0x0;
    if (iVar12 == 4) {
      pMVar36 = pMVar11;
    }
    return pMVar36;
  }
label_04337d27:
  auVar33 = il2cpp_runtime_helper_022b2c90();
  uVar6 = auVar33._0_8_;
  if (auVar33._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(uVar6);
    lVar13 = *plVar9;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pIVar35;
    __this_07.fields._list = pSVar34;
    __this_07.fields._current = (Il2CppObject *)pMVar36;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar13 == 0) {
      pMVar11 = (MapEditor_BrushEntry_o *)0x0;
      iVar12 = 0;
      goto label_04337d0c;
    }
    uVar6 = il2cpp_runtime_helper_022fefe0(lVar13);
  }
  else {
    lVar13 = 0;
  }
  __this_08.fields._8_8_ = pIVar35;
  __this_08.fields._list = pSVar34;
  __this_08.fields._current = (Il2CppObject *)pMVar36;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  if (lVar13 == 0) {
    _Unwind_Resume(uVar6);
  }
  lVar7 = il2cpp_runtime_helper_022fefe0(lVar13);
  il2cpp_runtime_helper_01f66400();
  lStack_78 = lVar13;
  puStack_70 = unaff_R12;
  if (g_data_057ae09a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae09a = '\x01';
  }
  _Stack_d0.genericMethod = (System_Collections_Generic_List_T__o *)0x0;
  uStack_c8 = 0;
  pUStack_c0 = (UnityEngine_Object_o *)0x0;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  if (*(System_Collections_Generic_List_object__o **)(lVar7 + 0x78) !=
      (System_Collections_Generic_List_object__o *)0x0) {
    uVar6 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fStack_b0 = (float)uVar6;
    fStack_ac = (float)((ulong)uVar6 >> 0x20);
    fStack_a8 = 0.0;
    fStack_a4 = 0.0;
    in_stack_ffffffffffffff04 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff10,
               *(System_Collections_Generic_List_object__o **)(lVar7 + 0x78),MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pUStack_c0 = (UnityEngine_Object_o *)CONCAT44(fStack_dc,fStack_e0);
    uStack_c8 = CONCAT44(fStack_e4,fStack_e8);
    pMStack_d8 = (MapEditor_BrushEntry_o *)0x0;
    _Stack_d0 = in_stack_ffffffffffffff10;
label_04337ee0:
    do {
      __this_01.fields._list._4_4_ = in_stack_ffffffffffffff04;
      __this_01.fields._list._0_4_ = in_stack_ffffffffffffff00;
      __this_01.fields._index = (int32_t)in_stack_ffffffffffffff08;
      __this_01.fields._version = (int32_t)in_stack_ffffffffffffff0c;
      __this_01.fields._current = in_stack_ffffffffffffff10.genericMethod;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&_Stack_d0);
      x = pUStack_c0;
      if ((char)bVar5 == '\0') goto label_04338101;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (x == (UnityEngine_Object_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          fVar25 = in_stack_ffffffffffffff0c;
label_0433818e:
          il2cpp_runtime_helper_022b2c90();
label_04338193:
          il2cpp_runtime_helper_022b2c90();
label_04338198:
          il2cpp_runtime_helper_022b2ca0();
          in_stack_ffffffffffffff0c = fVar25;
label_0433819d:
          il2cpp_runtime_helper_022b2ca0();
        }
        else {
          pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                             ((UnityEngine_GameObject_o *)x,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
          fVar25 = in_stack_ffffffffffffff0c;
          if (pSVar8 == (System_Object_array *)0x0) goto label_0433818e;
          if (pSVar8->max_length == 0) goto label_04337ee0;
          if ((int)pSVar8->max_length == 0) goto label_0433819d;
          if ((UnityEngine_Renderer_o *)pSVar8->m_Items[0] != (UnityEngine_Renderer_o *)0x0) {
            UnityEngine_Renderer__get_bounds
                      ((UnityEngine_Bounds_o *)&stack0xffffffffffffff10,
                       (UnityEngine_Renderer_o *)pSVar8->m_Items[0],(MethodInfo *)0x0);
            fVar28 = 0.0;
            fVar29 = 0.0;
            uVar10 = (uint)pSVar8->max_length;
            fVar25 = fStack_dc;
            fVar14 = fStack_e4;
            fVar27 = fStack_e0;
            if (1 < (int)uVar10) {
              fStack_a0 = fStack_e4;
              fStack_9c = fStack_e0;
              fStack_98 = 0.0;
              fStack_94 = 0.0;
              uStack_88 = 0;
              lVar13 = 5;
              in_stack_ffffffffffffff08 = fStack_e8;
              uStack_90 = in_stack_ffffffffffffff10;
              do {
                iVar12 = (int)lVar13;
                if (uVar10 <= iVar12 - 4U) goto label_04338198;
                if ((UnityEngine_Renderer_o *)pSVar8->m_Items[lVar13 + -4] == (UnityEngine_Renderer_o *)0x0)
                goto label_04338193;
                UnityEngine_Renderer__get_bounds
                          ((UnityEngine_Bounds_o *)&stack0xffffffffffffff10,
                           (UnityEngine_Renderer_o *)pSVar8->m_Items[lVar13 + -4],(MethodInfo *)0x0);
                fVar27 = in_stack_ffffffffffffff10._0_4_ - fStack_e4;
                fVar28 = in_stack_ffffffffffffff10._4_4_ - fStack_e0;
                fVar29 = fStack_e8 - fStack_dc;
                auVar21._0_4_ = (float)(undefined4)uStack_90 - fStack_a0;
                auVar21._4_4_ = (float)uStack_90._4_4_ - fStack_9c;
                auVar21._8_4_ = (float)uStack_88 - fStack_98;
                auVar21._12_4_ = uStack_88._4_4_ - fStack_94;
                auVar15._4_4_ = fVar28;
                auVar15._0_4_ = fVar27;
                auVar15._8_8_ = 0;
                auVar15 = minps(auVar21,auVar15);
                fVar14 = in_stack_ffffffffffffff08 - fVar25;
                if (fVar29 <= in_stack_ffffffffffffff08 - fVar25) {
                  fVar14 = fVar29;
                }
                auVar20._0_4_ = fStack_a0 + (float)(undefined4)uStack_90;
                auVar20._4_4_ = fStack_9c + (float)uStack_90._4_4_;
                auVar20._8_4_ = fStack_98 + (float)uStack_88;
                auVar20._12_4_ = fStack_94 + uStack_88._4_4_;
                auVar1._4_4_ = fVar28;
                auVar1._0_4_ = fVar27;
                auVar1._8_8_ = 0;
                auVar21 = maxps(auVar20,auVar1);
                fVar27 = fVar25 + in_stack_ffffffffffffff08;
                if (fVar25 + in_stack_ffffffffffffff08 <= fVar29) {
                  fVar27 = fVar29;
                }
                fVar19 = (auVar21._0_4_ - auVar15._0_4_) * 0.5;
                fVar22 = (auVar21._4_4_ - auVar15._4_4_) * 0.5;
                fVar23 = (auVar21._8_4_ - auVar15._8_4_) * 0.0;
                fVar24 = (auVar21._12_4_ - auVar15._12_4_) * 0.0;
                fVar25 = (fVar27 - fVar14) * 0.5;
                fVar27 = auVar15._0_4_ + fVar19;
                fVar28 = auVar15._4_4_ + fVar22;
                fVar29 = auVar15._8_4_ + fVar23;
                fVar18 = auVar15._12_4_ + fVar24;
                fVar31 = in_stack_ffffffffffffff10._0_4_ + fStack_e4;
                fVar32 = in_stack_ffffffffffffff10._4_4_ + fStack_e0;
                fVar30 = fStack_e8 + fStack_dc;
                auVar26._0_4_ = fVar27 - fVar19;
                auVar26._4_4_ = fVar28 - fVar22;
                auVar26._8_4_ = fVar29 - fVar23;
                auVar26._12_4_ = fVar18 - fVar24;
                in_stack_ffffffffffffff08 = (fVar14 + fVar25) - fVar25;
                auVar2._4_4_ = fVar32;
                auVar2._0_4_ = fVar31;
                auVar2._8_8_ = 0;
                auVar15 = minps(auVar26,auVar2);
                if (fVar30 <= in_stack_ffffffffffffff08) {
                  in_stack_ffffffffffffff08 = fVar30;
                }
                auVar16._0_4_ = fVar27 + fVar19;
                auVar16._4_4_ = fVar28 + fVar22;
                auVar16._8_4_ = fVar29 + fVar23;
                auVar16._12_4_ = fVar18 + fVar24;
                fVar25 = fVar14 + fVar25 + fVar25;
                auVar3._4_4_ = fVar32;
                auVar3._0_4_ = fVar31;
                auVar3._8_8_ = 0;
                auVar21 = maxps(auVar16,auVar3);
                if (fVar25 <= fVar30) {
                  fVar25 = fVar30;
                }
                fVar14 = (auVar21._0_4_ - auVar15._0_4_) * 0.5;
                fVar27 = (auVar21._4_4_ - auVar15._4_4_) * 0.5;
                fVar28 = (auVar21._8_4_ - auVar15._8_4_) * 0.0;
                fVar29 = (auVar21._12_4_ - auVar15._12_4_) * 0.0;
                fVar25 = (fVar25 - in_stack_ffffffffffffff08) * 0.5;
                uStack_90._4_4_ = auVar15._4_4_ + fVar27;
                uStack_90._0_4_ = auVar15._0_4_ + fVar14;
                uStack_88 = CONCAT44(auVar15._12_4_ + fVar29,auVar15._8_4_ + fVar28);
                in_stack_ffffffffffffff08 = in_stack_ffffffffffffff08 + fVar25;
                uVar10 = (uint)pSVar8->max_length;
                lVar13 = lVar13 + 1;
                in_stack_ffffffffffffff0c = fVar25;
                fStack_a0 = fVar14;
                fStack_9c = fVar27;
                fStack_98 = fVar28;
                fStack_94 = fVar29;
              } while (iVar12 + -3 < (int)uVar10);
            }
            fStack_b0 = fStack_b0 + fVar14 + fVar14;
            fStack_ac = fStack_ac + fVar27 + fVar27;
            fStack_a8 = fStack_a8 + fVar28 + fVar28;
            fStack_a4 = fStack_a4 + fVar29 + fVar29;
            in_stack_ffffffffffffff04 = in_stack_ffffffffffffff04 + fVar25 + fVar25;
            pMStack_d8 = (MapEditor_BrushEntry_o *)(ulong)((int)pMStack_d8 + 1);
            goto label_04337ee0;
          }
        }
        il2cpp_runtime_helper_022b2c90();
        break;
      }
    } while( true );
  }
  auVar33 = il2cpp_runtime_helper_022b2c90();
  if (auVar33._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar33._0_8_);
    lVar13 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._list._4_4_ = in_stack_ffffffffffffff04;
    __this_03.fields._list._0_4_ = in_stack_ffffffffffffff00;
    __this_03.fields._index = (int32_t)in_stack_ffffffffffffff08;
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff0c;
    __this_03.fields._current = in_stack_ffffffffffffff10.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&_Stack_d0);
    if (lVar13 == 0) goto label_04338115;
    il2cpp_runtime_helper_022fefe0(lVar13);
  }
  __this_04.fields._list._4_4_ = in_stack_ffffffffffffff04;
  __this_04.fields._list._0_4_ = in_stack_ffffffffffffff00;
  __this_04.fields._index = (int32_t)in_stack_ffffffffffffff08;
  __this_04.fields._version = (int32_t)in_stack_ffffffffffffff0c;
  __this_04.fields._current = in_stack_ffffffffffffff10.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_d0);
  _Unwind_Resume(auVar33._0_8_);
label_04338101:
  __this_02.fields._list._4_4_ = in_stack_ffffffffffffff04;
  __this_02.fields._list._0_4_ = in_stack_ffffffffffffff00;
  __this_02.fields._index = (int32_t)in_stack_ffffffffffffff08;
  __this_02.fields._version = (int32_t)in_stack_ffffffffffffff0c;
  __this_02.fields._current = in_stack_ffffffffffffff10.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)&_Stack_d0);
label_04338115:
  if ((int)pMStack_d8 == 0) {
    if (g_data_057a6932 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6932 = '\x01';
    }
    pMStack_d8 = *(MapEditor_BrushEntry_o **)(TypeInfo_Vector3 + 0xb8);
  }
  else {
    auVar17._0_4_ = (float)(int)pMStack_d8;
    auVar17._4_4_ = auVar17._0_4_;
    auVar17._8_8_ = 0;
    auVar4._4_4_ = fStack_ac;
    auVar4._0_4_ = fStack_b0;
    auVar4._8_4_ = fStack_a8;
    auVar4._12_4_ = fStack_a4;
    divps(auVar4,auVar17);
  }
  return pMStack_d8;
}


// MapEditor.MapEditorBrush$$ApplyEntryFields
// il2cpp: void MapEditor_MapEditorBrush__ApplyEntryFields (Map_MapScriptSceneObject_o* script, MapEditor_BrushEntry_o* entry, const MethodInfo* method);
// 0x4336660

void MapEditor_MapEditorBrush__ApplyEntryFields
               (Map_MapScriptSceneObject_o *script,MapEditor_BrushEntry_o *entry,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  System_String_o *pSVar8;
  System_String_c *pSVar9;
  UnityEngine_Renderer_o *__this;
  UnityEngine_Object_o *pUVar10;
  undefined1 auVar11 [16];
  int iVar12;
  undefined8 uVar13;
  bool_conflict bVar14;
  System_String_Fields __this_00;
  System_Object_array *pSVar15;
  UnityEngine_Material_array *pUVar16;
  UnityEngine_Material_array *value;
  long lVar17;
  UnityEngine_Material_o *__this_01;
  float *pfVar18;
  uint uVar19;
  MethodInfo *extraout_RDX;
  undefined8 *puVar20;
  uint uVar21;
  System_String_o **ppSVar22;
  UnityEngine_Material_o **ppUVar23;
  int iVar24;
  ulong uVar25;
  MethodInfo *pMVar26;
  UnityEngine_Quaternion_Fields *pUVar27;
  UnityEngine_Material_o *pUVar28;
  ulong uVar29;
  UnityEngine_Material_o **ppUVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float in_XMM1_Da;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 auVar39 [16];
  UnityEngine_Color_o UVar40;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Quaternion_Fields UVar41;
  UnityEngine_Vector3_o axis;
  float fStack_d0;
  float fStack_cc;
  
  __this_00 = (System_String_Fields)entry;
  if (g_data_057ae09e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBaseMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptReflectiveMaterial);
    g_data_057ae09e = '\x01';
    method = extraout_RDX;
  }
  if ((entry != (MapEditor_BrushEntry_o *)0x0) && (script != (Map_MapScriptSceneObject_o *)0x0)) {
    *(char *)&(script->fields).Active = (char)(entry->fields).Active;
    *(undefined1 *)((long)&(script->fields).Active + 1) = *(undefined1 *)((long)&(entry->fields).Active + 1);
    *(undefined1 *)((long)&(script->fields).Active + 2) = *(undefined1 *)((long)&(entry->fields).Active + 2);
    uVar33 = *(undefined8 *)&(entry->fields).Visible;
    *(undefined8 *)&(script->fields).ScaleZ = uVar33;
    il2cpp_runtime_helper_022b4080(&(script->fields).ScaleZ,uVar33,method);
    (script->fields).CollideMode = (entry->fields).CollideMode;
    il2cpp_runtime_helper_022b4080(&(script->fields).CollideMode);
    (script->fields).CollideWith = (entry->fields).CollideWith;
    il2cpp_runtime_helper_022b4080(&(script->fields).CollideWith);
    pSVar8 = (script->fields).PhysicsMaterial;
    ppSVar22 = &(script->fields).PhysicsMaterial;
    if (pSVar8 == (System_String_o *)0x0) {
label_04336747:
      pSVar8 = (entry->fields).PhysicsMaterial;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar14 = System_String__op_Equality
                         (pSVar8,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8),(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        pSVar8 = (entry->fields).PhysicsMaterial;
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar14 = System_String__op_Equality
                           (pSVar8,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),(MethodInfo *)0x0
                           );
        if ((char)bVar14 != '\0') goto label_043367bd;
        pSVar8 = (entry->fields).PhysicsMaterial;
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar14 = System_String__op_Equality
                           (pSVar8,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),
                            (MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          pSVar8 = (entry->fields).PhysicsMaterial;
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar14 = System_String__op_Equality
                             (pSVar8,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x18),
                              (MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            pSVar8 = (entry->fields).PhysicsMaterial;
            if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar14 = System_String__op_Equality
                               (pSVar8,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x20),
                                (MethodInfo *)0x0);
            if ((char)bVar14 == '\0') {
              pSVar8 = (entry->fields).PhysicsMaterial;
              if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar14 = System_String__op_Equality
                                 (pSVar8,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x28),
                                  (MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
                pSVar8 = (entry->fields).PhysicsMaterial;
                if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar14 = Map_MapObjectShader__IsLegacyShader(pSVar8,(MethodInfo *)0x0);
                if ((char)bVar14 == '\0') goto label_043367bd;
                __this_00 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor
                          ((Map_MapScriptLegacyMaterial_o *)__this_00,(MethodInfo *)0x0);
              }
              else {
                __this_00 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptReflectiveMaterial);
                Map_MapScriptReflectiveMaterial___ctor
                          ((Map_MapScriptReflectiveMaterial_o *)__this_00,(MethodInfo *)0x0);
              }
              goto label_043367d9;
            }
          }
          __this_00 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
          Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this_00,(MethodInfo *)0x0);
        }
        else {
          __this_00 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptDefaultTiledMaterial);
          Map_MapScriptDefaultTiledMaterial___ctor
                    ((Map_MapScriptDefaultTiledMaterial_o *)__this_00,(MethodInfo *)0x0);
        }
      }
      else {
label_043367bd:
        __this_00 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBaseMaterial);
        Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this_00,(MethodInfo *)0x0);
      }
label_043367d9:
      *ppSVar22 = (System_String_o *)__this_00;
      il2cpp_runtime_helper_022b4080(ppSVar22);
      pSVar8 = *ppSVar22;
      if (pSVar8 == (System_String_o *)0x0) goto label_04336ad8;
      __this_00 = (System_String_Fields)(entry->fields).PhysicsMaterial;
      pSVar8->fields = __this_00;
      il2cpp_runtime_helper_022b4080(&pSVar8->fields);
    }
    else {
      __this_00 = (System_String_Fields)(entry->fields).PhysicsMaterial;
      bVar14 = System_String__op_Inequality
                         ((System_String_o *)pSVar8->fields,(System_String_o *)__this_00,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') goto label_04336747;
    }
    pSVar8 = *ppSVar22;
    if (pSVar8 != (System_String_o *)0x0) {
      pSVar8[1].klass = (System_String_c *)(entry->fields).Shader;
      il2cpp_runtime_helper_022b4080(pSVar8 + 1);
      pSVar8 = *ppSVar22;
      if (pSVar8 == (System_String_o *)0x0) {
        return;
      }
      pSVar9 = pSVar8->klass;
      bVar3 = (pSVar9->_2).naturalAligment;
      bVar4 = (TypeInfo_MapScriptLegacyMaterial->_2).naturalAligment;
      if (((bVar4 <= bVar3) && ((pSVar9->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_MapScriptLegacyMaterial)) ||
         ((bVar4 = (TypeInfo_MapScriptDefaultTiledMaterial->_2).naturalAligment, bVar4 <= bVar3 &&
          ((pSVar9->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_MapScriptDefaultTiledMaterial)))) {
        pSVar8[1].monitor = (entry->fields).Texture;
        return;
      }
      bVar4 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
      if (bVar3 < bVar4) {
        return;
      }
      if ((pSVar9->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_MapScriptBasicMaterial) {
        return;
      }
      __this_00 = (System_String_Fields)(entry->fields).ReflectColor;
      pSVar8[1].monitor = (void *)__this_00;
      il2cpp_runtime_helper_022b4080();
      pSVar8[1].fields = (System_String_Fields)(entry->fields).Texture;
      pSVar8[2].klass = (System_String_c *)(entry->fields).Tiling.fields;
      bVar3 = (TypeInfo_MapScriptReflectiveMaterial->_2).naturalAligment;
      if ((pSVar8->klass->_2).naturalAligment < bVar3) {
        return;
      }
      if ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_MapScriptReflectiveMaterial) {
        return;
      }
      if (pSVar8 != (System_String_o *)0x0) {
        pSVar8[2].monitor = (entry->fields).Color;
        il2cpp_runtime_helper_022b4080(&pSVar8[2].monitor);
        return;
      }
    }
  }
label_04336ad8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae097 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"_Color");
    g_data_057ae097 = '\x01';
  }
  if ((__this_00 == (System_String_Fields)0x0) ||
     (pSVar15 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                          ((UnityEngine_GameObject_o *)__this_00,MethodInfo_Collider_GetComponentsInChildren_Collider),
     pSVar15 == (System_Object_array *)0x0)) {
label_04336ef8:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar19 = (uint)pSVar15->max_length;
    if (0 < (int)uVar19) {
      uVar21 = 0;
      do {
        if (uVar19 <= uVar21) goto label_04336efd;
        if ((UnityEngine_Collider_o *)pSVar15->m_Items[(int)uVar21] == (UnityEngine_Collider_o *)0x0)
        goto label_04336ef8;
        UnityEngine_Collider__set_enabled
                  ((UnityEngine_Collider_o *)pSVar15->m_Items[(int)uVar21],0,(MethodInfo *)0x0);
        uVar21 = uVar21 + 1;
        uVar19 = (uint)pSVar15->max_length;
      } while ((int)uVar21 < (int)uVar19);
    }
    pSVar15 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)__this_00,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    if (pSVar15 == (System_Object_array *)0x0) goto label_04336ef8;
    iVar5 = (int)pSVar15->max_length;
    if (iVar5 < 1) {
      return;
    }
    uVar19 = 0;
    if (iVar5 != 0) {
      do {
        __this = (UnityEngine_Renderer_o *)pSVar15->m_Items[(int)uVar19];
        if ((__this == (UnityEngine_Renderer_o *)0x0) ||
           (pUVar16 = UnityEngine_Renderer__get_sharedMaterials(__this,(MethodInfo *)0x0),
           pUVar16 == (UnityEngine_Material_array *)0x0)) goto label_04336ef8;
        value = (UnityEngine_Material_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Material);
        uVar25 = pUVar16->max_length;
        if (0 < (int)uVar25) {
          uVar29 = uVar25 & 0xffffffff;
          if (value == (UnityEngine_Material_array *)0x0) {
            uVar25 = 0;
            do {
              if (uVar29 <= uVar25) goto label_04336efd;
              pUVar10 = (UnityEngine_Object_o *)pUVar16->m_Items[uVar25];
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar14 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
                if ((uint)pUVar16->max_length <= (uint)uVar25) goto label_04336efd;
                pMVar26 = (MethodInfo *)pUVar16->m_Items[uVar25];
                pUVar28 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor_4dc9e70
                          (pUVar28,(UnityEngine_Material_o *)pMVar26,(MethodInfo *)0x0);
                MapEditor_MapEditorBrush__TryMakeTransparent(pUVar28,pMVar26);
                if ((pUVar28 != (UnityEngine_Material_o *)0x0) &&
                   (bVar14 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar28,"_Color",(MethodInfo *)0x0)
                   , (char)bVar14 != '\0')) {
                  UVar40 = UnityEngine_Material__get_color(pUVar28,(MethodInfo *)0x0);
                  value_01.fields.r = UVar40.fields.r + (0.6 - UVar40.fields.r) * 0.5;
                  value_01.fields.g = UVar40.fields.g + (0.9 - UVar40.fields.g) * 0.5;
                  in_XMM1_Da = (1.0 - UVar40.fields.b) * 0.5 + UVar40.fields.b;
                  value_01.fields.a = 0.45;
                  value_01.fields.b = in_XMM1_Da;
                  UnityEngine_Material__set_color(pUVar28,value_01,(MethodInfo *)0x0);
                }
                goto label_04336ef8;
              }
              uVar25 = uVar25 + 1;
              uVar21 = (uint)pUVar16->max_length;
              uVar29 = (ulong)uVar21;
            } while ((long)uVar25 < (long)(int)uVar21);
          }
          else {
            ppUVar30 = pUVar16->m_Items;
            ppUVar23 = value->m_Items;
            uVar29 = 0;
            if ((uVar25 & 0xffffffff) == 0) break;
            while( true ) {
              pUVar10 = (UnityEngine_Object_o *)*ppUVar30;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar14 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
                if ((uint)pUVar16->max_length <= uVar29) goto label_04336efd;
                pMVar26 = (MethodInfo *)*ppUVar30;
                pUVar28 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor_4dc9e70
                          (pUVar28,(UnityEngine_Material_o *)pMVar26,(MethodInfo *)0x0);
                MapEditor_MapEditorBrush__TryMakeTransparent(pUVar28,pMVar26);
                if (pUVar28 == (UnityEngine_Material_o *)0x0) goto label_04336ef8;
                bVar14 = UnityEngine_Material__HasProperty_4dcb5b0(pUVar28,"_Color",(MethodInfo *)0x0);
                if ((char)bVar14 != '\0') {
                  UVar40 = UnityEngine_Material__get_color(pUVar28,(MethodInfo *)0x0);
                  value_00.fields.r = UVar40.fields.r + (0.6 - UVar40.fields.r) * 0.5;
                  value_00.fields.g = UVar40.fields.g + (0.9 - UVar40.fields.g) * 0.5;
                  in_XMM1_Da = (1.0 - UVar40.fields.b) * 0.5 + UVar40.fields.b;
                  value_00.fields.a = 0.45;
                  value_00.fields.b = in_XMM1_Da;
                  UnityEngine_Material__set_color(pUVar28,value_00,(MethodInfo *)0x0);
                }
                lVar17 = il2cpp_runtime_helper_023051f0(pUVar28);
                if (lVar17 == 0) goto label_04336f02;
                if ((uint)value->max_length <= uVar29) goto label_04336efd;
                *ppUVar23 = pUVar28;
                il2cpp_runtime_helper_022b4080(ppUVar23);
              }
              uVar29 = uVar29 + 1;
              uVar21 = (uint)pUVar16->max_length;
              ppUVar30 = ppUVar30 + 1;
              ppUVar23 = ppUVar23 + 1;
              if ((long)(int)uVar21 <= (long)uVar29) break;
              if (uVar21 <= uVar29) goto label_04336efd;
            }
          }
        }
        UnityEngine_Renderer__set_sharedMaterials(__this,value,(MethodInfo *)0x0);
        UnityEngine_Renderer__set_shadowCastingMode(__this,0,(MethodInfo *)0x0);
        uVar19 = uVar19 + 1;
        uVar21 = (uint)pSVar15->max_length;
        if ((int)uVar21 <= (int)uVar19) {
          return;
        }
      } while (uVar19 < uVar21);
    }
  }
label_04336efd:
  il2cpp_runtime_helper_022b2ca0();
label_04336f02:
  __this_01 = (UnityEngine_Material_o *)il2cpp_runtime_helper_0231b270();
  pUVar27 = (UnityEngine_Quaternion_Fields *)0x0;
  il2cpp_runtime_helper_022b2b10();
  pUVar28 = __this_01;
  if (g_data_057ae098 == '\0') {
    il2cpp_runtime_helper_023445d0(&"_SrcBlend");
    il2cpp_runtime_helper_023445d0(&"_ALPHABLEND_ON");
    il2cpp_runtime_helper_023445d0(&"_ALPHAPREMULTIPLY_ON");
    il2cpp_runtime_helper_023445d0(&"_Surface");
    il2cpp_runtime_helper_023445d0(&"_DstBlend");
    il2cpp_runtime_helper_023445d0(&"_Mode");
    il2cpp_runtime_helper_023445d0(&"_ZWrite");
    il2cpp_runtime_helper_023445d0(&"_ALPHATEST_ON");
    il2cpp_runtime_helper_023445d0(&"RenderType");
    pUVar28 = (UnityEngine_Material_o *)&"Transparent";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae098 = '\x01';
  }
  if (__this_01 != (UnityEngine_Material_o *)0x0) {
    bVar14 = UnityEngine_Material__HasProperty_4dcb5b0(__this_01,"_Mode",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      UnityEngine_Material__SetFloat(__this_01,"_Mode",2.0,(MethodInfo *)0x0);
    }
    bVar14 = UnityEngine_Material__HasProperty_4dcb5b0(__this_01,"_Surface",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      UnityEngine_Material__SetFloat(__this_01,"_Surface",1.0,(MethodInfo *)0x0);
    }
    UnityEngine_Material__SetOverrideTag(__this_01,"RenderType","Transparent",(MethodInfo *)0x0);
    bVar14 = UnityEngine_Material__HasProperty_4dcb5b0(__this_01,"_SrcBlend",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      UnityEngine_Material__SetInt(__this_01,"_SrcBlend",5,(MethodInfo *)0x0);
    }
    bVar14 = UnityEngine_Material__HasProperty_4dcb5b0(__this_01,"_DstBlend",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      UnityEngine_Material__SetInt(__this_01,"_DstBlend",10,(MethodInfo *)0x0);
    }
    bVar14 = UnityEngine_Material__HasProperty_4dcb5b0(__this_01,"_ZWrite",(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      UnityEngine_Material__SetInt(__this_01,"_ZWrite",0,(MethodInfo *)0x0);
    }
    UnityEngine_Material__DisableKeyword(__this_01,"_ALPHATEST_ON",(MethodInfo *)0x0);
    UnityEngine_Material__EnableKeyword(__this_01,"_ALPHABLEND_ON",(MethodInfo *)0x0);
    UnityEngine_Material__DisableKeyword(__this_01,"_ALPHAPREMULTIPLY_ON",(MethodInfo *)0x0);
    UnityEngine_Material__set_renderQueue(__this_01,3000,(MethodInfo *)0x0);
    return;
  }
  uVar33 = il2cpp_runtime_helper_022b2c90();
  fVar32 = (float)uVar33;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uVar13 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  pUVar27->x = (float)(int)uVar2;
  pUVar27->y = (float)(int)((ulong)uVar2 >> 0x20);
  pUVar27->z = (float)(int)uVar13;
  pUVar27->w = (float)(int)((ulong)uVar13 >> 0x20);
  iVar5 = *(int *)((long)&pUVar28[2].monitor + 4);
  if (iVar5 == 0) {
    return;
  }
  if (ABS(*(float *)&pUVar28[2].fields.m_CachedPtr) < 0.0001) {
    return;
  }
  iVar6 = *(int *)((long)&pUVar28[1].monitor + 4);
  iVar12 = (int)pUVar28[1].fields.m_CachedPtr;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  if (iVar12 < 1) {
    iVar12 = 1;
  }
  iVar7 = *(int *)((long)&pUVar28[1].fields.m_CachedPtr + 4);
  iVar24 = 1;
  if (0 < iVar7) {
    iVar24 = iVar7;
  }
  if (iVar5 == 1) {
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    puVar20 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pfVar18 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  }
  else if (iVar5 == 2) {
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    puVar20 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    pfVar18 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  }
  else {
    if (g_data_057a6846 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6846 = '\x01';
    }
    puVar20 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
    pfVar18 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
  }
  uVar2 = *puVar20;
  fVar1 = *pfVar18;
  iVar5 = *(int *)((long)&pUVar28[2].monitor + 4);
  if (iVar5 == 1) {
    fVar34 = (float)(iVar12 + -1) * *(float *)((long)&pUVar28[2].klass + 4);
    fVar31 = 0.0;
  }
  else {
    fVar31 = (float)(iVar6 + -1) * *(float *)&pUVar28[2].klass;
    fVar34 = 0.0;
    if (iVar5 != 2) {
      fVar34 = (float)(iVar12 + -1) * *(float *)((long)&pUVar28[2].klass + 4);
      fVar35 = 0.0;
      if (iVar5 == 3) goto label_04337336;
    }
  }
  fVar35 = (float)(iVar24 + -1) * *(float *)&pUVar28[2].monitor;
label_04337336:
  if ((fVar31 < fVar34) || (fVar31 < fVar35)) {
    if (fVar34 <= fVar35) {
      if (g_data_057a6846 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6846 = '\x01';
      }
      puVar20 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
      pfVar18 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
      fVar32 = in_XMM1_Da;
      fVar31 = fVar35;
    }
    else {
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      puVar20 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      pfVar18 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar32 = (float)((ulong)uVar33 >> 0x20);
      fVar31 = fVar34;
    }
  }
  else {
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057abfed = '\x01';
    }
    puVar20 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pfVar18 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  }
  if (0.0001 <= fVar31) {
    fVar35 = (float)*puVar20;
    fVar38 = (float)((ulong)*puVar20 >> 0x20);
    fVar34 = *pfVar18;
    fStack_d0 = (float)uVar2;
    fStack_cc = (float)((ulong)uVar2 >> 0x20);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auVar39._0_4_ = fVar34 * fStack_cc - fVar38 * fVar1;
    auVar39._4_4_ = fVar1 * fVar35 - fStack_d0 * fVar34;
    auVar39._8_8_ = 0;
    fVar34 = fVar38 * fStack_d0 - fStack_cc * fVar35;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar37 = 0;
    uVar36 = 0;
    fVar34 = fVar34 * fVar34 + auVar39._4_4_ * auVar39._4_4_ + auVar39._0_4_ * auVar39._0_4_;
    if (fVar34 < 0.0) {
      fVar34 = sqrtf(fVar34);
      uVar36 = extraout_XMM0_Dc;
      uVar37 = extraout_XMM0_Dd;
    }
    else {
      fVar34 = SQRT(fVar34);
    }
    if (1e-05 < fVar34) {
      auVar11._4_4_ = fVar34;
      auVar11._0_4_ = fVar34;
      auVar11._8_4_ = uVar36;
      auVar11._12_4_ = uVar37;
      divps(auVar39,auVar11);
    }
    else if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    fVar32 = fVar32 / (fVar31 / (*(float *)&pUVar28[2].fields.m_CachedPtr * 0.017453292));
    sinf(fVar32);
    cosf(fVar32);
    axis.fields.z = fVar1;
    axis.fields.x = (float)(int)uVar2;
    axis.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
    UVar41 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__AngleAxis(fVar32 * 57.29578,axis,(MethodInfo *)0x0);
    *pUVar27 = UVar41;
    return;
  }
  return;
}


// MapEditor.MapEditorBrush$$.ctor
// il2cpp: void MapEditor_MapEditorBrush___ctor (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x43385d0

void MapEditor_MapEditorBrush___ctor(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BrushEntry__o *__this_00;
  System_Collections_Generic_List_GameObject__o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  System_Collections_Generic_List_Vector3__o *pSVar1;
  
  if (g_data_057ae09f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_MapEditor_BrushEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BrushEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae09f = '\x01';
  }
  (__this->fields).Mode = 0x41200000;
  (__this->fields).Radius = 1.12104e-44;
  *(undefined1 *)&(__this->fields).Count = 1;
  (__this->fields).RandomizeEachPlacement = 3;
  (__this->fields).GridX = 1;
  (__this->fields).GridY = 3;
  (__this->fields).GridZ = 0x40a00000;
  (__this->fields).SpacingX = 5.0;
  (__this->fields).SpacingY = 5.0;
  __this_00 = (System_Collections_Generic_List_BrushEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BrushEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_MapEditor_BrushEntry);
  (__this->fields).Entries = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Entries,__this_00);
  __this_01 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._ghostObjects = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ghostObjects,__this_01);
  __this_02 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_System_String);
  (__this->fields)._ghostAssets = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ghostAssets,__this_02);
  pSVar1 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor(pSVar1,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._ghostScales = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ghostScales,pSVar1);
  pSVar1 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor(pSVar1,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._ghostRotations = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ghostRotations,pSVar1);
  pSVar1 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor(pSVar1,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._ghostLocalOffsets = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ghostLocalOffsets);
  (__this->fields)._ghostIdCounter = -100000;
  (__this->fields)._seed = 0x3039;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


