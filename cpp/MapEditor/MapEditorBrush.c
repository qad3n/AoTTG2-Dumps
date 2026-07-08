// Type: MapEditor.MapEditorBrush
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/MapEditorBrush.cs
// Prior source: NEW in this update
// --------------------------------

// MapEditor.MapEditorBrush$$SetActive
// il2cpp: void MapEditor_MapEditorBrush__SetActive (MapEditor_MapEditorBrush_o* __this, bool active, const MethodInfo* method);
// 0x403e580

void MapEditor_MapEditorBrush__SetActive
               (MapEditor_MapEditorBrush_o *__this,bool_conflict active,MethodInfo *method)

{
  uint in_register_00000034;
  
  *(char *)&(__this->fields).Active = (char)active;
  *(undefined1 *)((long)&(__this->fields).Active + 1) = 0;
  if (active != 0) {
    MapEditor_MapEditorBrush__EnsureCircle
              (__this,(MethodInfo *)CONCAT44(in_register_00000034,active));
    MapEditor_MapEditorBrush__RegenerateGhosts
              (__this,(MethodInfo *)CONCAT44(in_register_00000034,active));
    return;
  }
  MapEditor_MapEditorBrush__ClearGhosts(__this,(MethodInfo *)((ulong)in_register_00000034 << 0x20));
  MapEditor_MapEditorBrush__DestroyCircle
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,active));
  *(undefined1 *)&(__this->fields)._hasCenter = 0;
  return;
}


// MapEditor.MapEditorBrush$$AddEntry
// il2cpp: void MapEditor_MapEditorBrush__AddEntry (MapEditor_MapEditorBrush_o* __this, System_String_o* asset, const MethodInfo* method);
// 0x403fca0

void MapEditor_MapEditorBrush__AddEntry
               (MapEditor_MapEditorBrush_o *__this,System_String_o *asset,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_BrushEntry__o *pSVar3;
  MapEditor_BrushEntry_array *pMVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar5;
  bool_conflict bVar6;
  MapEditor_BrushEntry_o *__this_04;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (DAT_057043c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BrushEntry);
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BrushEntry_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_MapEditor_BrushEntry__GetEn);
    il2cpp_init_method_metadata(&"Custom/");
    DAT_057043c6 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this_00,(Il2CppObject *)asset,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
      if (asset == (System_String_o *)0x0) goto LAB_0403fefc;
      bVar6 = System_String__StartsWith(asset,"Custom/",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
    }
    pSVar3 = (__this->fields).Entries;
    if (pSVar3 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_MapEditor_BrushEntry__GetEn);
      pSVar7 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
      pIVar9 = local_30;
      while (__this_01.fields._8_8_ = pSVar8, __this_01.fields._list = pSVar7,
            __this_01.fields._current = (Il2CppObject *)pIVar9,
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
            (char)bVar6 != '\0') {
        if (pIVar9 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar6 = System_String__op_Equality
                          ((System_String_o *)pIVar9[1].data,asset,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          __this_02.fields._8_8_ = pSVar8;
          __this_02.fields._list = pSVar7;
          __this_02.fields._current = (Il2CppObject *)pIVar9;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
          return;
        }
      }
      __this_03.fields._8_8_ = pSVar8;
      __this_03.fields._list = pSVar7;
      __this_03.fields._current = (Il2CppObject *)pIVar9;
      method_00 = MethodInfo_Void_Dispose;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
      pSVar3 = (__this->fields).Entries;
      __this_04 = (MapEditor_BrushEntry_o *)il2cpp_runtime_glue(TypeInfo_BrushEntry);
      MapEditor_BrushEntry___ctor(__this_04,method_00);
      if (__this_04 != (MapEditor_BrushEntry_o *)0x0) {
        (__this_04->fields).AssetName = asset;
        il2cpp_runtime_glue(&__this_04->fields,asset);
        lVar5 = MethodInfo_Void_Add;
        if (pSVar3 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar4 = (pSVar3->fields)._items;
          if (pMVar4 != (MapEditor_BrushEntry_array *)0x0) {
            uVar2 = (pSVar3->fields)._size;
            if (uVar2 < (uint)pMVar4->max_length) {
              (pSVar3->fields)._size = uVar2 + 1;
              pMVar4->m_Items[(int)uVar2] = __this_04;
              il2cpp_runtime_glue(pMVar4->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar3,
                         (Il2CppObject *)__this_04,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
            }
            MapEditor_MapEditorBrush__RegenerateGhosts(__this,(MethodInfo *)__this_04);
            return;
          }
        }
      }
    }
  }
LAB_0403fefc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$RemoveEntry
// il2cpp: void MapEditor_MapEditorBrush__RemoveEntry (MapEditor_MapEditorBrush_o* __this, int32_t index, const MethodInfo* method);
// 0x403ff90

void MapEditor_MapEditorBrush__RemoveEntry
               (MapEditor_MapEditorBrush_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_BrushEntry__o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)index;
  if (DAT_057043c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057043c7 = '\x01';
  }
  if (-1 < index) {
    __this_00 = (__this->fields).Entries;
    if (__this_00 == (System_Collections_Generic_List_BrushEntry__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (index < (__this_00->fields)._size) {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_Void_RemoveAt);
      MapEditor_MapEditorBrush__RegenerateGhosts(__this,method_00);
      return;
    }
  }
  return;
}


// MapEditor.MapEditorBrush$$SetRadius
// il2cpp: void MapEditor_MapEditorBrush__SetRadius (MapEditor_MapEditorBrush_o* __this, float radius, const MethodInfo* method);
// 0x4040000

void MapEditor_MapEditorBrush__SetRadius
               (MapEditor_MapEditorBrush_o *__this,float radius,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 500.0;
  if (radius <= 500.0) {
    fVar1 = radius;
  }
  (__this->fields).Mode =
       ~-(uint)(0.5 <= radius) & 0x3f000000 | (uint)fVar1 & -(uint)(0.5 <= radius);
  MapEditor_MapEditorBrush__UpdateCircle(__this,method);
  MapEditor_MapEditorBrush__PositionGhosts(__this,method);
  return;
}


// MapEditor.MapEditorBrush$$SetCount
// il2cpp: void MapEditor_MapEditorBrush__SetCount (MapEditor_MapEditorBrush_o* __this, int32_t count, const MethodInfo* method);
// 0x4040cc0

void MapEditor_MapEditorBrush__SetCount
               (MapEditor_MapEditorBrush_o *__this,int32_t count,MethodInfo *method)

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
  MapEditor_MapEditorBrush__RegenerateGhosts
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,count));
  return;
}


// MapEditor.MapEditorBrush$$Reseed
// il2cpp: void MapEditor_MapEditorBrush__Reseed (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4040ce0

void MapEditor_MapEditorBrush__Reseed(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = UnityEngine_Random__Range(-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._seed = iVar1;
  return;
}


// MapEditor.MapEditorBrush$$SetCenter
// il2cpp: void MapEditor_MapEditorBrush__SetCenter (MapEditor_MapEditorBrush_o* __this, UnityEngine_Vector3_o center, const MethodInfo* method);
// 0x4040d00

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
// 0x4040d30

void MapEditor_MapEditorBrush__ClearCenter(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_Mesh_o *__this_01;
  System_Collections_Generic_List_GameObject__o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Object_o *pUVar5;
  
  if (DAT_057043c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057043c8 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pUVar4 = (UnityEngine_Object_o *)0x0;
  *(undefined1 *)&(__this->fields)._hasCenter = 0;
  pUVar5 = (UnityEngine_Object_o *)(__this->fields)._circleRenderer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._circleRenderer;
    if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_04040ebc;
    UnityEngine_LineRenderer__set_positionCount(__this_00,0,(MethodInfo *)0x0);
  }
  pUVar5 = (UnityEngine_Object_o *)(__this->fields)._diskMesh;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_01 = (__this->fields)._diskMesh;
    if (__this_01 == (UnityEngine_Mesh_o *)0x0) goto LAB_04040ebc;
    UnityEngine_Mesh__Clear(__this_01,(MethodInfo *)0x0);
  }
  __this_02 = (__this->fields)._ghostObjects;
  if (__this_02 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    while( true ) {
      do {
        pUVar5 = pUVar4;
        __this_03.fields._8_8_ = pIVar3;
        __this_03.fields._list = pSVar2;
        __this_03.fields._current = (Il2CppObject *)pUVar5;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar1 == '\0') {
          __this_04.fields._8_8_ = pIVar3;
          __this_04.fields._list = pSVar2;
          __this_04.fields._current = (Il2CppObject *)pUVar5;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
          return;
        }
        pUVar4 = pUVar5;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while ((char)bVar1 == '\0');
      if (pUVar5 == (UnityEngine_Object_o *)0x0) break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar5,0,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04040ebc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$EnsureCircle
// il2cpp: void MapEditor_MapEditorBrush__EnsureCircle (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x403e990

void MapEditor_MapEditorBrush__EnsureCircle(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_LineRenderer_o **ppUVar2;
  UnityEngine_MeshFilter_o **ppUVar3;
  UnityEngine_Mesh_o **ppUVar4;
  UnityEngine_Mesh_o *__this_00;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_LineRenderer_o *pUVar7;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_Material_o *pUVar9;
  UnityEngine_MeshFilter_o *pUVar10;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_Color_o UVar11;
  UnityEngine_Color_o value;
  
  if (DAT_057043c9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LineRenderer_AddComponent_LineRenderer);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter_AddComponent_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Mesh);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"MapEditorBrushDisk");
    il2cpp_init_method_metadata(&"_SrcBlend");
    il2cpp_init_method_metadata(&"Unlit/Color");
    il2cpp_init_method_metadata(&"BrushDisk");
    il2cpp_init_method_metadata(&"MapEditorBrushCircle");
    il2cpp_init_method_metadata(&"_DstBlend");
    il2cpp_init_method_metadata(&"Sprites/Default");
    il2cpp_init_method_metadata(&"_ZWrite");
    il2cpp_init_method_metadata(&"RenderType");
    il2cpp_init_method_metadata(&"Transparent");
    DAT_057043c9 = '\x01';
  }
  pUVar8 = (UnityEngine_Object_o *)(__this->fields)._circleIndicator;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  ppUVar1 = &(__this->fields)._circleIndicator;
  pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar6,"MapEditorBrushCircle",(MethodInfo *)0x0);
  *ppUVar1 = pUVar6;
  il2cpp_runtime_glue(ppUVar1,pUVar6);
  if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UnityEngine_LineRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_LineRenderer_AddComponent_LineRenderer);
    ppUVar2 = &(__this->fields)._circleRenderer;
    (__this->fields)._circleRenderer = pUVar7;
    il2cpp_runtime_glue(ppUVar2,pUVar7);
    pUVar7 = (__this->fields)._circleRenderer;
    if (pUVar7 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_loop(pUVar7,1,(MethodInfo *)0x0);
      if (*ppUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_useWorldSpace(*ppUVar2,1,(MethodInfo *)0x0);
        if (*ppUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
          UnityEngine_LineRenderer__set_widthMultiplier(*ppUVar2,0.2,(MethodInfo *)0x0);
          pUVar8 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Equality
                            (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar8 = (UnityEngine_Object_o *)
                     UnityEngine_Shader__Find("Unlit/Color",(MethodInfo *)0x0);
          }
          pUVar9 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
          UnityEngine_Material___ctor(pUVar9,(UnityEngine_Shader_o *)pUVar8,(MethodInfo *)0x0);
          if (pUVar9 != (UnityEngine_Material_o *)0x0) {
            UVar11.fields.b = 1.0;
            UVar11.fields.a = 0.9;
            UVar11.fields.r = 0.2;
            UVar11.fields.g = 0.8;
            UnityEngine_Material__set_color(pUVar9,UVar11,(MethodInfo *)0x0);
            if ((UnityEngine_Renderer_o *)*ppUVar2 != (UnityEngine_Renderer_o *)0x0) {
              UnityEngine_Renderer__set_material
                        ((UnityEngine_Renderer_o *)*ppUVar2,pUVar9,(MethodInfo *)0x0);
              pUVar7 = *ppUVar2;
              UVar11 = UnityEngine_Material__get_color(pUVar9,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_LineRenderer_o *)0x0) {
                UnityEngine_LineRenderer__set_startColor(pUVar7,UVar11,(MethodInfo *)0x0);
                pUVar7 = *ppUVar2;
                UVar11 = UnityEngine_Material__get_color(pUVar9,(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_LineRenderer_o *)0x0) {
                  UnityEngine_LineRenderer__set_endColor(pUVar7,UVar11,(MethodInfo *)0x0);
                  if (*ppUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
                    UnityEngine_LineRenderer__set_positionCount(*ppUVar2,0,(MethodInfo *)0x0);
                    pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                    UnityEngine_GameObject___ctor(pUVar6,"MapEditorBrushDisk",(MethodInfo *)0x0);
                    (__this->fields)._diskIndicator = pUVar6;
                    il2cpp_runtime_glue(&(__this->fields)._diskIndicator,pUVar6);
                    pUVar6 = (__this->fields)._diskIndicator;
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar10 = (UnityEngine_MeshFilter_o *)
                                UnityEngine_GameObject__AddComponent<object>(pUVar6,MethodInfo_MeshFilter_AddComponent_MeshFilter);
                      ppUVar3 = &(__this->fields)._diskFilter;
                      (__this->fields)._diskFilter = pUVar10;
                      il2cpp_runtime_glue(ppUVar3,pUVar10);
                      pUVar6 = (__this->fields)._diskIndicator;
                      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                        __this_01 = (UnityEngine_Renderer_o *)
                                    UnityEngine_GameObject__AddComponent<object>
                                              (pUVar6,MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
                        if (__this_01 != (UnityEngine_Renderer_o *)0x0) {
                          UnityEngine_Renderer__set_shadowCastingMode(__this_01,0,(MethodInfo *)0x0)
                          ;
                          UnityEngine_Renderer__set_receiveShadows(__this_01,0,(MethodInfo *)0x0);
                          pUVar9 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
                          UnityEngine_Material___ctor
                                    (pUVar9,(UnityEngine_Shader_o *)pUVar8,(MethodInfo *)0x0);
                          if (pUVar9 != (UnityEngine_Material_o *)0x0) {
                            value.fields.b = 1.0;
                            value.fields.a = 0.25;
                            value.fields.r = 0.2;
                            value.fields.g = 0.8;
                            UnityEngine_Material__set_color(pUVar9,value,(MethodInfo *)0x0);
                            UnityEngine_Material__SetOverrideTag
                                      (pUVar9,"RenderType","Transparent",(MethodInfo *)0x0);
                            bVar5 = UnityEngine_Material__HasProperty
                                              (pUVar9,"_SrcBlend",(MethodInfo *)0x0);
                            if ((char)bVar5 != '\0') {
                              UnityEngine_Material__SetInt(pUVar9,"_SrcBlend",5,(MethodInfo *)0x0);
                            }
                            bVar5 = UnityEngine_Material__HasProperty
                                              (pUVar9,"_DstBlend",(MethodInfo *)0x0);
                            if ((char)bVar5 != '\0') {
                              UnityEngine_Material__SetInt(pUVar9,"_DstBlend",10,(MethodInfo *)0x0)
                              ;
                            }
                            bVar5 = UnityEngine_Material__HasProperty
                                              (pUVar9,"_ZWrite",(MethodInfo *)0x0);
                            if ((char)bVar5 != '\0') {
                              UnityEngine_Material__SetInt(pUVar9,"_ZWrite",0,(MethodInfo *)0x0);
                            }
                            UnityEngine_Material__set_renderQueue(pUVar9,3000,(MethodInfo *)0x0);
                            UnityEngine_Renderer__set_sharedMaterial
                                      (__this_01,pUVar9,(MethodInfo *)0x0);
                            pUVar8 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Mesh);
                            UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar8,(MethodInfo *)0x0);
                            if (pUVar8 != (UnityEngine_Object_o *)0x0) {
                              UnityEngine_Object__set_name(pUVar8,"BrushDisk",(MethodInfo *)0x0);
                              ppUVar4 = &(__this->fields)._diskMesh;
                              (__this->fields)._diskMesh = (UnityEngine_Mesh_o *)pUVar8;
                              il2cpp_runtime_glue(ppUVar4);
                              __this_00 = (__this->fields)._diskMesh;
                              if (__this_00 != (UnityEngine_Mesh_o *)0x0) {
                                UnityEngine_Mesh__MarkDynamic(__this_00,(MethodInfo *)0x0);
                                pUVar10 = *ppUVar3;
                                if (pUVar10 != (UnityEngine_MeshFilter_o *)0x0) {
                                  UnityEngine_MeshFilter__set_mesh
                                            (pUVar10,*ppUVar4,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$DestroyCircle
// il2cpp: void MapEditor_MapEditorBrush__DestroyCircle (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x403e850

void MapEditor_MapEditorBrush__DestroyCircle(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  
  if (DAT_057043ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057043ca = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._circleIndicator;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    ppUVar1 = &(__this->fields)._circleIndicator;
    pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar2,(MethodInfo *)0x0);
    (__this->fields)._circleIndicator = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_glue(ppUVar1);
    (__this->fields)._circleRenderer = (UnityEngine_LineRenderer_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._circleRenderer);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._diskIndicator;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    ppUVar1 = &(__this->fields)._diskIndicator;
    pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar2,(MethodInfo *)0x0);
    (__this->fields)._diskIndicator = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_glue(ppUVar1,0);
    (__this->fields)._diskFilter = (UnityEngine_MeshFilter_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._diskFilter,0);
    (__this->fields)._diskMesh = (UnityEngine_Mesh_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._diskMesh,0);
    return;
  }
  return;
}


// MapEditor.MapEditorBrush$$UpdateCircle
// il2cpp: void MapEditor_MapEditorBrush__UpdateCircle (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4040040

void MapEditor_MapEditorBrush__UpdateCircle(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar3;
  undefined8 uVar2;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_LineRenderer_o *pUVar5;
  UnityEngine_Mesh_o *__this_00;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_Vector3_Fields direction;
  bool_conflict bVar6;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  System_Int32_array *layers;
  UnityEngine_Vector3_array *rim;
  MethodInfo *in_RCX;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o origin_00;
  UnityEngine_Vector3_o direction_00;
  undefined1 in_stack_ffffffffffffff28 [12];
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  int32_t iVar16;
  float fVar17;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod pIStack_58;
  uint32_t uStack_50;
  float local_4c;
  float fStack_48;
  undefined8 uStack_44;
  
  if (DAT_057043cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_057043cb = '\x01';
  }
  fStack_48 = 0.0;
  uStack_44 = 0;
  pIStack_58 = (InvokerMethod)0x0;
  uStack_50 = 0;
  local_4c = 0.0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._circleRenderer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if ((char)(__this->fields)._hasCenter == '\0') {
    return;
  }
  if ((__this->fields).AssetSelectMode == 1) {
    pUVar5 = (__this->fields)._circleRenderer;
    if (pUVar5 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_positionCount(pUVar5,0,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Object_o *)(__this->fields)._diskMesh;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        __this_00 = (__this->fields)._diskMesh;
        if (__this_00 == (UnityEngine_Mesh_o *)0x0) goto LAB_040404b1;
        UnityEngine_Mesh__Clear(__this_00,(MethodInfo *)0x0);
      }
      return;
    }
  }
  else {
    layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length == 0) {
LAB_040403ce:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._circleRenderer;
      if (pUVar5 != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_positionCount(pUVar5,0x60,(MethodInfo *)0x0);
        rim = (UnityEngine_Vector3_array *)il2cpp_glue_02274930(TypeInfo_Vector3,0x60);
        if (rim != (UnityEngine_Vector3_array *)0x0) {
          pfVar8 = &rim->m_Items[0].fields.z;
          uVar7 = 0;
          while( true ) {
            fVar1 = ((float)(int)uVar7 / 96.0) * 3.1415927;
            fVar1 = fVar1 + fVar1;
            fVar10 = (__this->fields)._center.fields.x;
            fVar3 = cosf(fVar1);
            origin.fields.x = fVar3 * (float)(__this->fields).Mode + fVar10;
            fVar10 = (__this->fields)._center.fields.z;
            fVar9 = sinf(fVar1);
            fVar1 = (float)(__this->fields).Mode;
            fVar3 = (__this->fields)._center.fields.y;
            uVar13 = 0;
            iVar16 = 0;
            fVar11 = fVar3 + 1000.0;
            if (DAT_0570266b == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_0570266b = '\x01';
            }
            fVar10 = fVar10 + fVar9 * fVar1;
            direction = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
            if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
              il2cpp_init_class();
            }
            origin.fields.y = fVar11;
            origin.fields.z = fVar10;
            bVar6 = UnityEngine_Physics__Raycast
                              (origin,(UnityEngine_Vector3_o)direction,
                               (UnityEngine_RaycastHit_o *)&local_68,5000.0,layerMask,
                               (MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              __this_01.fields.m_Normal.fields.x = (float)layerMask;
              __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff28._0_4_;
              __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff28._4_4_;
              __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff28._8_4_;
              __this_01.fields.m_Normal.fields.y = fVar10;
              __this_01.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff3c;
              __this_01.fields.m_FaceID = in_stack_ffffffffffffff40;
              __this_01.fields.m_Distance = (float)in_stack_ffffffffffffff44;
              __this_01.fields.m_UV.fields.x = fVar3;
              __this_01.fields.m_UV.fields.y = (float)uVar13;
              __this_01.fields.m_Collider = iVar16;
              UVar12 = UnityEngine_RaycastHit__get_point(__this_01,(MethodInfo *)&local_68);
              fVar3 = UVar12.fields.y;
            }
            if ((uint)rim->max_length <= uVar7) break;
            ((UnityEngine_Vector3_Fields *)(pfVar8 + -2))->x = origin.fields.x;
            ((UnityEngine_Vector3_Fields *)(pfVar8 + -2))->y = fVar3 + 0.1;
            *pfVar8 = fVar10;
            pUVar5 = (__this->fields)._circleRenderer;
            if (pUVar5 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_040404b1;
            UVar12.fields.y = fVar3 + 0.1;
            UVar12.fields.x = origin.fields.x;
            UVar12.fields.z = fVar10;
            UnityEngine_LineRenderer__SetPosition(pUVar5,(int)uVar7,UVar12,(MethodInfo *)0x0);
            uVar7 = uVar7 + 1;
            pfVar8 = pfVar8 + 3;
            if (uVar7 == 0x60) {
              MapEditor_MapEditorBrush__UpdateDisk(__this,rim,layerMask,in_RCX);
              return;
            }
          }
          goto LAB_040403ce;
        }
        fVar10 = (float)(__this->fields).Mode;
        origin_00.fields.z = fVar10 * 0.0 + (__this->fields)._center.fields.z;
        fVar1 = (__this->fields)._center.fields.x;
        fVar3 = (__this->fields)._center.fields.y;
        fVar9 = 0.0;
        fVar11 = 0.0;
        fVar14 = 1000.0;
        fVar17 = 0.0;
        if (DAT_0570266b == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_0570266b = '\x01';
        }
        fVar1 = fVar1 + fVar10;
        fVar3 = fVar3 + fVar14;
        fVar9 = fVar9 + fVar17;
        fVar11 = fVar11 + 0.0;
        uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
        uVar13 = (undefined4)uVar2;
        uVar15 = (undefined4)((ulong)uVar2 >> 0x20);
        iVar16 = 0;
        fVar10 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
        if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        origin_00.fields.y = fVar3;
        origin_00.fields.x = fVar1;
        direction_00.fields.y = (float)uVar15;
        direction_00.fields.x = (float)uVar13;
        direction_00.fields.z = fVar10;
        bVar6 = UnityEngine_Physics__Raycast
                          (origin_00,direction_00,(UnityEngine_RaycastHit_o *)&local_68,5000.0,
                           layerMask,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          __this_02.fields.m_Normal.fields.x = (float)layerMask;
          __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff28._0_4_;
          __this_02.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff28._4_4_;
          __this_02.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff28._8_4_;
          __this_02.fields.m_Normal.fields.y = fVar1;
          __this_02.fields.m_Normal.fields.z = fVar3;
          __this_02.fields.m_FaceID = (uint32_t)fVar9;
          __this_02.fields.m_Distance = fVar11;
          __this_02.fields.m_UV.fields.x = (float)uVar13;
          __this_02.fields.m_UV.fields.y = (float)uVar15;
          __this_02.fields.m_Collider = iVar16;
          UnityEngine_RaycastHit__get_point(__this_02,(MethodInfo *)&local_68);
        }
      }
    }
  }
LAB_040404b1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$UpdateDisk
// il2cpp: void MapEditor_MapEditorBrush__UpdateDisk (MapEditor_MapEditorBrush_o* __this, UnityEngine_Vector3_array* rim, int32_t mask, const MethodInfo* method);
// 0x4040f60

void MapEditor_MapEditorBrush__UpdateDisk
               (MapEditor_MapEditorBrush_o *__this,UnityEngine_Vector3_array *rim,int32_t mask,
               MethodInfo *method)

{
  undefined8 uVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Mesh_o *pUVar3;
  UnityEngine_RaycastHit_o __this_00;
  bool_conflict bVar4;
  UnityEngine_Vector3_array *value;
  System_Int32_array *value_00;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o direction;
  undefined8 in_stack_ffffffffffffff68;
  float in_stack_ffffffffffffff70;
  float in_stack_ffffffffffffff74;
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
  float fVar13;
  
  if (DAT_057043cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_057043cc = '\x01';
  }
  fStack_38 = 0.0;
  uStack_34 = 0;
  pIStack_48 = (InvokerMethod)0x0;
  uStack_40 = 0;
  local_3c = 0.0;
  local_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  x = (UnityEngine_Object_o *)(__this->fields)._diskMesh;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (rim != (UnityEngine_Vector3_array *)0x0) {
    uVar9 = rim->max_length;
    fVar13 = (__this->fields)._center.fields.y;
    fVar14 = (__this->fields)._center.fields.z;
    fVar15 = fVar13 + 1000.0;
    fVar11 = (__this->fields)._center.fields.x;
    fVar12 = 0.0;
    if (DAT_0570266b == '\0') {
      fVar12 = 0.0;
      in_stack_ffffffffffffff90 = 0.0;
      in_stack_ffffffffffffff7c = 0;
      in_stack_ffffffffffffff80 = 0;
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_0570266b = '\x01';
      in_stack_ffffffffffffff70 = fVar14;
      in_stack_ffffffffffffff78 = fVar15;
      in_stack_ffffffffffffff88 = fVar11;
      in_stack_ffffffffffffff8c = fVar12;
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    fVar16 = (float)uVar1;
    uVar17 = (undefined4)((ulong)uVar1 >> 0x20);
    fVar18 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      in_stack_ffffffffffffff80 = 0;
      il2cpp_init_class();
      in_stack_ffffffffffffff70 = fVar14;
      in_stack_ffffffffffffff74 = fVar18;
      in_stack_ffffffffffffff78 = fVar16;
      in_stack_ffffffffffffff7c = uVar17;
      in_stack_ffffffffffffff88 = fVar11;
      in_stack_ffffffffffffff8c = fVar15;
      in_stack_ffffffffffffff90 = fVar12;
    }
    UVar19.fields.y = fVar15;
    UVar19.fields.x = fVar11;
    UVar19.fields.z = fVar14;
    direction.fields.y = (float)uVar17;
    direction.fields.x = fVar16;
    direction.fields.z = fVar18;
    bVar4 = UnityEngine_Physics__Raycast
                      (UVar19,direction,(UnityEngine_RaycastHit_o *)&local_58,5000.0,mask,
                       (MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      __this_00.fields.m_Point.fields.z = in_stack_ffffffffffffff70;
      __this_00.fields.m_Point.fields.x = (float)(int)in_stack_ffffffffffffff68;
      __this_00.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff68 >> 0x20);
      __this_00.fields.m_Normal.fields.x = in_stack_ffffffffffffff74;
      __this_00.fields.m_Normal.fields.y = in_stack_ffffffffffffff78;
      __this_00.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff7c;
      __this_00.fields.m_FaceID = (int)in_stack_ffffffffffffff80;
      __this_00.fields.m_Distance = (float)(int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
      __this_00.fields.m_UV.fields.x = in_stack_ffffffffffffff88;
      __this_00.fields.m_UV.fields.y = in_stack_ffffffffffffff8c;
      __this_00.fields.m_Collider = (int32_t)in_stack_ffffffffffffff90;
      UVar19 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)&local_58);
      fVar13 = UVar19.fields.y;
    }
    iVar5 = (int)uVar9;
    value = (UnityEngine_Vector3_array *)il2cpp_glue_02274930(TypeInfo_Vector3,iVar5 + 1);
    if (value != (UnityEngine_Vector3_array *)0x0) {
      uVar10 = value->max_length;
      if ((int)uVar10 == 0) {
LAB_0404129b:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      fVar14 = (__this->fields)._center.fields.z;
      value->m_Items[0].fields.x = (__this->fields)._center.fields.x;
      value->m_Items[0].fields.y = fVar13 + 0.05;
      value->m_Items[0].fields.z = fVar14;
      if (iVar5 < 1) {
        value_00 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
      }
      else {
        uVar9 = uVar9 & 0xffffffff;
        lVar6 = 0x34;
        uVar8 = 0;
        do {
          if (((uint)rim->max_length <= uVar8) ||
             (uVar8 = uVar8 + 1, (uVar10 & 0xffffffff) <= uVar8)) goto LAB_0404129b;
          uVar17 = *(undefined4 *)((long)rim->m_Items + lVar6 + -0x2c);
          *(undefined8 *)((long)value->m_Items + lVar6 + -0x28) =
               *(undefined8 *)((long)rim->m_Items + lVar6 + -0x34);
          *(undefined4 *)((long)value->m_Items + lVar6 + -0x20) = uVar17;
          lVar6 = lVar6 + 0xc;
        } while (uVar9 != uVar8);
        value_00 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
        if (0 < iVar5) {
          if (value_00 == (System_Int32_array *)0x0) goto LAB_040412a0;
          uVar2 = (uint)value_00->max_length;
          uVar7 = 2;
          uVar10 = 0;
          do {
            if (uVar2 <= uVar7 - 2) goto LAB_0404129b;
            value_00->m_Items[(int)(uVar7 - 2)] = 0;
            if (uVar2 <= uVar7 - 1) goto LAB_0404129b;
            uVar8 = uVar10 + 1;
            value_00->m_Items[(int)(uVar7 - 1)] = (int32_t)uVar8;
            if (uVar2 <= uVar7) goto LAB_0404129b;
            iVar5 = (int)uVar10 + 2;
            if (uVar9 - 1 == uVar10) {
              iVar5 = 1;
            }
            value_00->m_Items[(int)uVar7] = iVar5;
            uVar7 = uVar7 + 3;
            uVar10 = uVar8;
          } while (uVar9 != uVar8);
        }
      }
      pUVar3 = (__this->fields)._diskMesh;
      if (pUVar3 != (UnityEngine_Mesh_o *)0x0) {
        UnityEngine_Mesh__Clear(pUVar3,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._diskMesh;
        if (pUVar3 != (UnityEngine_Mesh_o *)0x0) {
          UnityEngine_Mesh__set_vertices(pUVar3,value,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._diskMesh;
          if (pUVar3 != (UnityEngine_Mesh_o *)0x0) {
            UnityEngine_Mesh__set_triangles(pUVar3,value_00,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._diskMesh;
            if (pUVar3 != (UnityEngine_Mesh_o *)0x0) {
              UnityEngine_Mesh__RecalculateBounds(pUVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_040412a0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$RegenerateGhosts
// il2cpp: void MapEditor_MapEditorBrush__RegenerateGhosts (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x403ee90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MapEditor_MapEditorBrush__RegenerateGhosts
               (MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

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
  double dVar10;
  undefined1 auVar11 [16];
  UnityEngine_Vector3_Fields item_00;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  undefined1 auVar12 [16];
  long lVar13;
  undefined8 x;
  bool_conflict bVar14;
  int iVar15;
  MapEditor_MapEditorBrush_o *__this_07;
  MapEditor_BrushEntry_o *entry;
  Map_MapScriptSceneObject_o *script;
  Map_MapObject_o *pMVar16;
  MapEditor_MapEditorBrush_o *pMVar17;
  int iVar18;
  uint uVar19;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  uint uVar20;
  float fVar21;
  uint uVar22;
  System_Collections_Generic_List_Enumerator_T__c *method_02;
  uint uVar23;
  MethodInfo *pMVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  UnityEngine_Vector3_o item_01;
  UnityEngine_Vector3_o item_02;
  UnityEngine_Vector3_o item_03;
  float in_stack_fffffffffffffee8;
  float fVar30;
  float in_stack_fffffffffffffeec;
  float fVar31;
  float in_stack_fffffffffffffef0;
  float in_stack_fffffffffffffef4;
  Il2CppObject *in_stack_fffffffffffffef8;
  float local_fc;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 local_d8;
  double local_c8;
  undefined1 local_98 [80];
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_057043cd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BrushEntry_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_MapEditor_BrushEntry__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Random);
    DAT_057043cd = '\x01';
  }
  local_98._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_98._8_8_ = (Il2CppMethodPointer)0x0;
  local_98._16_8_ = (Il2CppObject *)0x0;
  local_98._48_8_ = (Il2CppType **)0x0;
  local_98._56_8_ = (Il2CppRGCTXData *)0x0;
  local_98._64_8_ = (UnityEngine_Object_o *)0x0;
  MapEditor_MapEditorBrush__ClearGhosts(__this,method);
  if ((char)(__this->fields).Active != '\0') {
    pSVar3 = (__this->fields).Entries;
    if (pSVar3 == (System_Collections_Generic_List_BrushEntry__o *)0x0) {
LAB_0403fb64:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSVar3->fields)._size != 0) {
      Seed = (__this->fields)._seed;
      __this_07 = (MapEditor_MapEditorBrush_o *)il2cpp_runtime_glue(TypeInfo_Random);
      System_Random___ctor((System_Random_o *)__this_07,Seed,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).Entries;
      if (pSVar3 == (System_Collections_Generic_List_BrushEntry__o *)0x0) goto LAB_0403fb64;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_MapEditor_BrushEntry__GetEn);
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
            bVar14 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (__this_03,(MethodInfo_3185E20 *)local_98), (char)bVar14 != '\0') {
        if ((Il2CppObject *)local_98._16_8_ == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar21 = 0.0001;
        if (0.0001 <= *(float *)&((Il2CppObject *)(local_98._16_8_ + 0x10))->monitor) {
          fVar21 = *(float *)&((Il2CppObject *)(local_98._16_8_ + 0x10))->monitor;
        }
        local_fc = local_fc + fVar21;
      }
      __this_04.fields._list._4_4_ = in_stack_fffffffffffffeec;
      __this_04.fields._list._0_4_ = in_stack_fffffffffffffee8;
      __this_04.fields._index = (int32_t)in_stack_fffffffffffffef0;
      __this_04.fields._version = (int32_t)in_stack_fffffffffffffef4;
      __this_04.fields._current = in_stack_fffffffffffffef8;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_04,(MethodInfo_3185E10 *)local_98);
      if ((__this->fields).AssetSelectMode == 1) {
        uVar22 = (__this->fields).RandomizeEachPlacement;
        uVar23 = (__this->fields).GridX;
        uVar19 = 1;
        if (0 < (int)uVar22) {
          uVar19 = uVar22;
        }
        uVar20 = 1;
        if (0 < (int)uVar23) {
          uVar20 = uVar23;
        }
        iVar15 = (__this->fields).GridY;
        iVar18 = 1;
        if (0 < iVar15) {
          iVar18 = iVar15;
        }
        fVar21 = (float)(uVar20 * uVar19 * iVar18);
      }
      else {
        fVar21 = (__this->fields).Radius;
        uVar22 = (__this->fields).RandomizeEachPlacement;
        uVar23 = (__this->fields).GridX;
        iVar15 = (__this->fields).GridY;
      }
      if ((int)uVar22 < 1) {
        uVar22 = 1;
      }
      method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(ulong)uVar22;
      if ((int)uVar23 < 1) {
        uVar23 = 1;
      }
      pMVar24 = (MethodInfo *)(ulong)uVar23;
      local_98._24_8_ = pMVar24;
      local_98._32_8_ = method_02;
      if (0 < (int)fVar21) {
        if (iVar15 < 1) {
          iVar15 = 1;
        }
        uVar25 = 0;
        do {
          while( true ) {
            entry = MapEditor_MapEditorBrush__PickEntry
                              (__this,(System_Random_o *)__this_07,local_fc,pMVar24);
            if (entry == (MapEditor_BrushEntry_o *)0x0) goto LAB_0403fb64;
            iVar18 = (int)uVar25;
            if ((char)(entry->fields).Advanced == '\0') break;
            if (__this_07 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0403fb64;
            fVar29 = (entry->fields).ScaleXMin;
            fVar30 = (entry->fields).ScaleXMax;
            local_e8 = (double)(*(((System_Random_c *)__this_07->klass)->vtable)._8_NextDouble.
                                 methodPtr)(__this_07,
                                            (((System_Random_c *)__this_07->klass)->vtable).
                                            _8_NextDouble.method);
            fVar31 = (entry->fields).ScaleYMin;
            fVar26 = (entry->fields).ScaleYMax;
            dVar10 = (double)(*(((System_Random_c *)__this_07->klass)->vtable)._8_NextDouble.
                               methodPtr)(__this_07,
                                          (((System_Random_c *)__this_07->klass)->vtable).
                                          _8_NextDouble.method);
            auVar28._4_4_ = (float)dVar10;
            auVar28._0_4_ = (float)local_e8;
            auVar28._8_8_ = 0;
            auVar28 = minps(_DAT_00ccd980,auVar28);
            local_d8 = CONCAT44((fVar26 - fVar31) *
                                (float)(-(uint)(0.0 <= (float)dVar10) & auVar28._4_4_) + fVar31,
                                (fVar30 - fVar29) *
                                (float)(-(uint)(0.0 <= (float)local_e8) & auVar28._0_4_) + fVar29);
            fVar29 = (entry->fields).ScaleZMin;
            fVar30 = (entry->fields).ScaleZMax;
            dVar10 = (double)(*(((System_Random_c *)__this_07->klass)->vtable)._8_NextDouble.
                               methodPtr)(__this_07,
                                          (((System_Random_c *)__this_07->klass)->vtable).
                                          _8_NextDouble.method);
            fVar26 = (float)dVar10;
            fVar31 = 1.0;
            if (fVar26 <= 1.0) {
              fVar31 = fVar26;
            }
            fVar29 = (fVar30 - fVar29) * (float)(-(uint)(0.0 <= fVar26) & (uint)fVar31) + fVar29;
            in_stack_fffffffffffffee8 = (entry->fields).RotXMin;
            fVar30 = (entry->fields).RotXMax;
            fVar26 = 0.0;
            local_c8 = (double)(*(((System_Random_c *)__this_07->klass)->vtable)._8_NextDouble.
                                 methodPtr)(__this_07,
                                            (((System_Random_c *)__this_07->klass)->vtable).
                                            _8_NextDouble.method);
            local_f8._4_4_ = (entry->fields).RotYMin;
            fVar31 = (entry->fields).RotYMax;
            fVar27 = 0.0;
            dVar10 = (double)(*(((System_Random_c *)__this_07->klass)->vtable)._8_NextDouble.
                               methodPtr)(__this_07,
                                          (((System_Random_c *)__this_07->klass)->vtable).
                                          _8_NextDouble.method);
            auVar11._4_4_ = (float)dVar10;
            auVar11._0_4_ = (float)local_c8;
            auVar11._8_8_ = 0;
            auVar28 = minps(_DAT_00ccd980,auVar11);
            in_stack_fffffffffffffee8 =
                 (fVar30 - in_stack_fffffffffffffee8) *
                 (float)(-(uint)(0.0 <= (float)local_c8) & auVar28._0_4_) +
                 in_stack_fffffffffffffee8;
            in_stack_fffffffffffffeec =
                 (fVar31 - (float)local_f8._4_4_) *
                 (float)(-(uint)(0.0 <= (float)dVar10) & auVar28._4_4_) + (float)local_f8._4_4_;
            in_stack_fffffffffffffef0 = (fVar26 - 0.0) * auVar28._8_4_ + 0.0;
            in_stack_fffffffffffffef4 = (fVar27 - 0.0) * auVar28._12_4_ + 0.0;
            fVar30 = (entry->fields).RotZMin;
            fVar31 = (entry->fields).RotZMax;
            pMVar17 = __this_07;
            dVar10 = (double)(*(((System_Random_c *)__this_07->klass)->vtable)._8_NextDouble.
                               methodPtr)(__this_07,
                                          (((System_Random_c *)__this_07->klass)->vtable).
                                          _8_NextDouble.method);
            fVar27 = (float)dVar10;
            fVar26 = 1.0;
            if (fVar27 <= 1.0) {
              fVar26 = fVar27;
            }
            local_f8._0_4_ =
                 (fVar31 - fVar30) * (float)(-(uint)(0.0 <= fVar27) & (uint)fVar26) + fVar30;
            local_f8._8_8_ = 0;
            method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(entry->fields).AssetName
            ;
            script = MapEditor_MapEditorBrush__CloneScript
                               (pMVar17,(System_String_o *)method_02,method_00);
            pMVar24 = extraout_RDX_00;
            if (script != (Map_MapScriptSceneObject_o *)0x0) goto LAB_0403f54b;
joined_r0x0403fa8f:
            uVar25 = (ulong)(uint)(iVar18 + 1);
            if (fVar21 == (float)(iVar18 + 1)) goto LAB_0403fa95;
          }
          if (__this_07 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0403fb64;
          fVar29 = (entry->fields).ScaleMin;
          fVar30 = (entry->fields).ScaleMax;
          dVar10 = (double)(*(((System_Random_c *)__this_07->klass)->vtable)._8_NextDouble.methodPtr
                           )(__this_07,
                             (((System_Random_c *)__this_07->klass)->vtable)._8_NextDouble.method);
          fVar26 = (float)dVar10;
          fVar31 = 1.0;
          if (fVar26 <= 1.0) {
            fVar31 = fVar26;
          }
          fVar29 = (fVar30 - fVar29) * (float)(-(uint)(0.0 <= fVar26) & (uint)fVar31) + fVar29;
          local_d8 = CONCAT44(fVar29,fVar29);
          in_stack_fffffffffffffeec = (entry->fields).YawMin;
          fVar30 = (entry->fields).YawMax;
          pMVar17 = __this_07;
          dVar10 = (double)(*(((System_Random_c *)__this_07->klass)->vtable)._8_NextDouble.methodPtr
                           )(__this_07,
                             (((System_Random_c *)__this_07->klass)->vtable)._8_NextDouble.method);
          fVar26 = (float)dVar10;
          fVar31 = 1.0;
          if (fVar26 <= 1.0) {
            fVar31 = fVar26;
          }
          auVar12._12_4_ = 0;
          auVar12._0_12_ = local_f8._4_12_;
          local_f8 = auVar12 << 0x20;
          in_stack_fffffffffffffeec =
               (fVar30 - in_stack_fffffffffffffeec) * (float)(-(uint)(0.0 <= fVar26) & (uint)fVar31)
               + in_stack_fffffffffffffeec;
          in_stack_fffffffffffffee8 = 0.0;
          in_stack_fffffffffffffef0 = 0.0;
          in_stack_fffffffffffffef4 = 0.0;
          method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(entry->fields).AssetName;
          script = MapEditor_MapEditorBrush__CloneScript
                             (pMVar17,(System_String_o *)method_02,method_01);
          pMVar24 = extraout_RDX_01;
          if (script == (Map_MapScriptSceneObject_o *)0x0) goto joined_r0x0403fa8f;
LAB_0403f54b:
          (script->fields).RotationY = (script->fields).RotationY * (float)local_d8;
          (script->fields).RotationZ = local_d8._4_4_ * (script->fields).RotationZ;
          (script->fields).ScaleX = (script->fields).ScaleX * fVar29;
          (script->fields).PositionY = in_stack_fffffffffffffee8;
          (script->fields).PositionZ = in_stack_fffffffffffffeec;
          (script->fields).RotationX = (float)local_f8._0_4_;
          iVar2 = (__this->fields)._ghostIdCounter;
          (__this->fields)._ghostIdCounter = iVar2 + -1;
          (script->fields).Id = iVar2;
          MapEditor_MapEditorBrush__ApplyEntryFields(script,entry,pMVar24);
          if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          *(undefined8 *)&(script->fields).ScaleZ =
               *(undefined8 *)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10);
          il2cpp_runtime_glue(&(script->fields).ScaleZ);
          *(undefined1 *)((long)&(script->fields).Active + 3) = 0;
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pMVar16 = Map_MapLoader__LoadObject
                              ((Map_MapScriptBaseObject_o *)script,1,(MethodInfo *)0x0);
          if ((((System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
              (System_Collections_Generic_Dictionary<int__object>__Remove
                         ((System_Collections_Generic_Dictionary_int__object__o *)
                          **(undefined8 **)(TypeInfo_MapLoader + 0xb8),(script->fields).Id,MethodInfo_Boolean_Remove),
              __this = (MapEditor_MapEditorBrush_o *)local_98._40_8_,
              pMVar16 == (Map_MapObject_o *)0x0)) ||
             (__this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10),
             __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
          goto LAB_0403fb64;
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (__this_00,(Il2CppObject *)(pMVar16->fields).GameObject,MethodInfo_Boolean_Remove);
          pMVar17 = *(MapEditor_MapEditorBrush_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
          if (pMVar17 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0403fb64;
          bVar14 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                             ((System_Collections_Generic_Dictionary_int__object__o *)pMVar17,
                              (script->fields).Parent,MethodInfo_Boolean_ContainsKey);
          pMVar24 = extraout_RDX_02;
          if ((char)bVar14 != '\0') {
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            __this_01 = *(System_Collections_Generic_Dictionary_int__object__o **)
                         (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
            if ((__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
               (pMVar17 = (MapEditor_MapEditorBrush_o *)
                          System_Collections_Generic_Dictionary<int__object>__get_Item
                                    (__this_01,(script->fields).Parent,MethodInfo_HashSet_1_System_Int32__get_Item),
               pMVar17 == (MapEditor_MapEditorBrush_o *)0x0)) goto LAB_0403fb64;
            System_Collections_Generic_HashSet<int>__Remove
                      ((System_Collections_Generic_HashSet_int__o *)pMVar17,(script->fields).Id,
                       MethodInfo_Boolean_Remove);
            pMVar24 = extraout_RDX_03;
          }
          MapEditor_MapEditorBrush__ApplyGhostAppearance
                    (pMVar17,(pMVar16->fields).GameObject,pMVar24);
          lVar13 = MethodInfo_Void_Add;
          pSVar9 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostObjects;
          if (pSVar9 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_0403fb64;
          item = (pMVar16->fields).GameObject;
          piVar1 = &(pSVar9->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (pSVar9->fields)._items;
          if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto LAB_0403fb64;
          uVar19 = (pSVar9->fields)._size;
          if (uVar19 < (uint)pUVar4->max_length) {
            (pSVar9->fields)._size = uVar19 + 1;
            pUVar4->m_Items[(int)uVar19] = item;
            il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar19);
            __this_02 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostAssets;
            lVar13 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            __this_02 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostAssets;
            lVar13 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar13;
          if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0403fb64;
          method_02 = (System_Collections_Generic_List_Enumerator_T__c *)(entry->fields).AssetName;
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_02->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) goto LAB_0403fb64;
          uVar19 = (__this_02->fields)._size;
          if (uVar19 < (uint)pSVar5->max_length) {
            (__this_02->fields)._size = uVar19 + 1;
            pSVar5->m_Items[(int)uVar19] = (System_String_o *)method_02;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar19);
            pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostScales;
            lVar13 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (Il2CppObject *)method_02,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostScales;
            lVar13 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar13;
          if (pSVar6 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_0403fb64;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (pSVar6->fields)._items;
          if (pUVar7 == (UnityEngine_Vector3_array *)0x0) goto LAB_0403fb64;
          uVar19 = (pSVar6->fields)._size;
          if (uVar19 < (uint)pUVar7->max_length) {
            (pSVar6->fields)._size = uVar19 + 1;
            pUVar7->m_Items[(int)uVar19].fields.x = (float)local_d8;
            pUVar7->m_Items[(int)uVar19].fields.y = local_d8._4_4_;
            pUVar7->m_Items[(int)uVar19].fields.z = fVar29;
            pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostRotations;
            lVar13 = MethodInfo_Void_Add;
          }
          else {
            method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                         (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
            item_01.fields.z = fVar29;
            item_01.fields.x = (float)local_d8;
            item_01.fields.y = local_d8._4_4_;
            System_Collections_Generic_List<Vector3>__AddWithResize
                      (pSVar6,item_01,(MethodInfo_361DDD0 *)method_02);
            pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostRotations;
            lVar13 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar13;
          if (pSVar6 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_0403fb64;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (pSVar6->fields)._items;
          if (pUVar7 == (UnityEngine_Vector3_array *)0x0) goto LAB_0403fb64;
          uVar19 = (pSVar6->fields)._size;
          if (uVar19 < (uint)pUVar7->max_length) {
            (pSVar6->fields)._size = uVar19 + 1;
            pUVar7->m_Items[(int)uVar19].fields.x = in_stack_fffffffffffffee8;
            pUVar7->m_Items[(int)uVar19].fields.y = in_stack_fffffffffffffeec;
            pUVar7->m_Items[(int)uVar19].fields.z = (float)local_f8._0_4_;
            iVar2 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->AssetSelectMode;
            lVar13 = MethodInfo_Void_Add;
          }
          else {
            method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                         (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
            item_02.fields.y = in_stack_fffffffffffffeec;
            item_02.fields.x = in_stack_fffffffffffffee8;
            item_02.fields.z = (float)local_f8._0_4_;
            System_Collections_Generic_List<Vector3>__AddWithResize
                      (pSVar6,item_02,(MethodInfo_361DDD0 *)method_02);
            iVar2 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->AssetSelectMode;
            lVar13 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar13;
          if (iVar2 != 1) {
            pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostLocalOffsets;
            if (DAT_056fdd15 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fdd15 = '\x01';
            }
            lVar13 = MethodInfo_Void_Add;
            if (pSVar6 != (System_Collections_Generic_List_Vector3__o *)0x0) {
              pUVar8 = *(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
              fVar30 = pUVar8->x;
              fVar31 = pUVar8->y;
              fVar29 = pUVar8->z;
              item_00 = *pUVar8;
              piVar1 = &(pSVar6->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar7 = (pSVar6->fields)._items;
              if (pUVar7 != (UnityEngine_Vector3_array *)0x0) {
                uVar19 = (pSVar6->fields)._size;
                pMVar24 = (MethodInfo *)(long)(int)uVar19;
                if (uVar19 < (uint)pUVar7->max_length) {
                  (pSVar6->fields)._size = uVar19 + 1;
                  pUVar7->m_Items[(long)pMVar24].fields.x = fVar30;
                  pUVar7->m_Items[(long)pMVar24].fields.y = fVar31;
                  pUVar7->m_Items[(long)pMVar24].fields.z = fVar29;
                }
                else {
                  method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                               (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
                  System_Collections_Generic_List<Vector3>__AddWithResize
                            (pSVar6,(UnityEngine_Vector3_o)item_00,(MethodInfo_361DDD0 *)method_02);
                  pMVar24 = extraout_RDX;
                }
                goto joined_r0x0403fa8f;
              }
            }
            goto LAB_0403fb64;
          }
          method_02 = (System_Collections_Generic_List_Enumerator_T__c *)
                      ((uVar25 / (local_98._32_8_ & 0xffffffff)) % (local_98._24_8_ & 0xffffffff));
          pSVar6 = ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->_ghostLocalOffsets;
          if (pSVar6 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_0403fb64;
          item_03.fields.x =
               ((float)(int)(uVar25 % (local_98._32_8_ & 0xffffffff)) -
               (float)(int)(uVar22 - 1) * 0.5) *
               (float)((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->GridZ;
          fVar29 = ((float)(int)method_02 - (float)(int)(uVar23 - 1) * 0.5) *
                   ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->SpacingX;
          item_03.fields.z =
               ((float)(iVar18 / (int)(uVar23 * uVar22)) - (float)(iVar15 + -1) * 0.5) *
               ((MapEditor_MapEditorBrush_Fields *)((long)__this + 0x10))->SpacingY;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (pSVar6->fields)._items;
          if (pUVar7 == (UnityEngine_Vector3_array *)0x0) goto LAB_0403fb64;
          uVar19 = (pSVar6->fields)._size;
          pMVar24 = (MethodInfo *)(long)(int)uVar19;
          if ((uint)pUVar7->max_length <= uVar19) {
            method_02 = *(System_Collections_Generic_List_Enumerator_T__c **)
                         (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
            item_03.fields.y = fVar29;
            System_Collections_Generic_List<Vector3>__AddWithResize
                      (pSVar6,item_03,(MethodInfo_361DDD0 *)method_02);
            pMVar24 = extraout_RDX_04;
            goto joined_r0x0403fa8f;
          }
          (pSVar6->fields)._size = uVar19 + 1;
          pUVar7->m_Items[(long)pMVar24].fields.x = item_03.fields.x;
          pUVar7->m_Items[(long)pMVar24].fields.y = fVar29;
          pUVar7->m_Items[(long)pMVar24].fields.z = item_03.fields.z;
          uVar25 = (ulong)(uint)(iVar18 + 1);
        } while (fVar21 != (float)(iVar18 + 1));
      }
LAB_0403fa95:
      if ((char)(__this->fields)._hasCenter == '\0') {
        pSVar9 = (__this->fields)._ghostObjects;
        if (pSVar9 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_0403fb64;
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)(local_98 + 0x30),
                   (System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
        while (__this_05.fields._list._4_4_ = in_stack_fffffffffffffeec,
              __this_05.fields._list._0_4_ = in_stack_fffffffffffffee8,
              __this_05.fields._index = (int32_t)in_stack_fffffffffffffef0,
              __this_05.fields._version = (int32_t)in_stack_fffffffffffffef4,
              __this_05.fields._current = in_stack_fffffffffffffef8,
              bVar14 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (__this_05,(MethodInfo_3185E20 *)(local_98 + 0x30)),
              x = local_98._64_8_, (char)bVar14 != '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar14 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                              (MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,0,(MethodInfo *)0x0);
          }
        }
        __this_06.fields._list._4_4_ = in_stack_fffffffffffffeec;
        __this_06.fields._list._0_4_ = in_stack_fffffffffffffee8;
        __this_06.fields._index = (int32_t)in_stack_fffffffffffffef0;
        __this_06.fields._version = (int32_t)in_stack_fffffffffffffef4;
        __this_06.fields._current = in_stack_fffffffffffffef8;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_06,(MethodInfo_3185E10 *)(local_98 + 0x30));
      }
      else {
        MapEditor_MapEditorBrush__PositionGhosts(__this,(MethodInfo *)method_02);
      }
    }
  }
  return;
}


// MapEditor.MapEditorBrush$$PickEntry
// il2cpp: MapEditor_BrushEntry_o* MapEditor_MapEditorBrush__PickEntry (MapEditor_MapEditorBrush_o* __this, System_Random_o* rand, float totalWeight, const MethodInfo* method);
// 0x40412b0

/* WARNING: Removing unreachable block (ram,0x040413aa) */
/* WARNING: Removing unreachable block (ram,0x040413b2) */
/* WARNING: Removing unreachable block (ram,0x040413b7) */
/* WARNING: Removing unreachable block (ram,0x040413cf) */

MapEditor_BrushEntry_o *
MapEditor_MapEditorBrush__PickEntry
          (MapEditor_MapEditorBrush_o *__this,System_Random_o *rand,float totalWeight,
          MethodInfo *method)

{
  System_Collections_Generic_List_BrushEntry__o *pSVar1;
  double dVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar3;
  MapEditor_BrushEntry_o *pMVar4;
  MethodInfo *extraout_RDX;
  float fVar5;
  undefined1 in_stack_ffffffffffffffb8 [12];
  Il2CppObject *pIVar6;
  
  if (DAT_057043ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BrushEntry_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_MapEditor_BrushEntry__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_BrushEntry_get_Item);
    DAT_057043ce = '\x01';
    method = extraout_RDX;
  }
  pIVar6 = (Il2CppObject *)0x0;
  if (rand != (System_Random_o *)0x0) {
    dVar2 = (double)(*(rand->klass->vtable)._8_NextDouble.methodPtr)
                              (rand,(rand->klass->vtable)._8_NextDouble.method,method);
    pSVar1 = (__this->fields).Entries;
    if (pSVar1 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
      fVar5 = (float)dVar2 * totalWeight;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T__Enumerator_MapEditor_BrushEntry__GetEn);
      __this_00.fields._version = (int32_t)fVar5;
      __this_00.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffffb8._8_4_;
      __this_00.fields._current = pIVar6;
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_01.fields._version = (int32_t)fVar5;
      __this_01.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffffb8._0_8_;
      __this_01.fields._index = in_stack_ffffffffffffffb8._8_4_;
      __this_01.fields._current = pIVar6;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
      pSVar1 = (__this->fields).Entries;
      if (pSVar1 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
        pMVar4 = (MapEditor_BrushEntry_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,
                            (pSVar1->fields)._size + -1,MethodInfo_BrushEntry_get_Item);
        return pMVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$CloneScript
// il2cpp: Map_MapScriptSceneObject_o* MapEditor_MapEditorBrush__CloneScript (MapEditor_MapEditorBrush_o* __this, System_String_o* asset, const MethodInfo* method);
// 0x40414b0

Map_MapScriptSceneObject_o *
MapEditor_MapEditorBrush__CloneScript
          (MapEditor_MapEditorBrush_o *__this,System_String_o *asset,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar6;
  Map_MapScriptBaseObject_array *pMVar7;
  long lVar8;
  bool_conflict bVar9;
  System_String_array *pSVar10;
  Map_MapScriptSceneObject_o *pMVar11;
  Map_MapScriptBaseObject_o *item;
  Map_MapScriptObjects_o *pMVar12;
  undefined8 uVar13;
  
  if (DAT_057043cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptObjects);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&"Custom/");
    DAT_057043cf = '\x01';
  }
  if (asset != (System_String_o *)0x0) {
    bVar9 = System_String__StartsWith(asset,"Custom/",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
      if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar9 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar5,(Il2CppObject *)asset,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar9 == '\0') {
          return (Map_MapScriptSceneObject_o *)0x0;
        }
        if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
        if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          item = (Map_MapScriptBaseObject_o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar5,(Il2CppObject *)asset,MethodInfo_MapScriptBaseObject_get_Item);
          if (item != (Map_MapScriptBaseObject_o *)0x0) {
            bVar2 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
            if (((((Il2CppClass *)item->klass)->_2).naturalAligment < bVar2) ||
               ((((Il2CppClass *)item->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapScriptSceneObject))
            {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(item);
            }
          }
          pMVar12 = (Map_MapScriptObjects_o *)il2cpp_runtime_glue(TypeInfo_MapScriptObjects);
          Map_MapScriptObjects___ctor(pMVar12,(MethodInfo *)0x0);
          lVar8 = MethodInfo_Void_Add;
          if ((pMVar12 != (Map_MapScriptObjects_o *)0x0) &&
             (pSVar6 = (pMVar12->fields).Objects,
             pSVar6 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pMVar7 = (pSVar6->fields)._items;
            if (pMVar7 != (Map_MapScriptBaseObject_array *)0x0) {
              uVar3 = (pSVar6->fields)._size;
              if (uVar3 < (uint)pMVar7->max_length) {
                (pSVar6->fields)._size = uVar3 + 1;
                pMVar7->m_Items[(int)uVar3] = item;
                il2cpp_runtime_glue(pMVar7->m_Items + (int)uVar3,item);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)item,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              uVar13 = (*(pMVar12->klass->vtable)._8_Serialize.methodPtr)(pMVar12);
              pMVar12 = (Map_MapScriptObjects_o *)il2cpp_runtime_glue(TypeInfo_MapScriptObjects);
              Map_MapScriptObjects___ctor(pMVar12,(MethodInfo *)0x0);
              if (pMVar12 != (Map_MapScriptObjects_o *)0x0) {
                (*(pMVar12->klass->vtable)._9_Deserialize.methodPtr)
                          (pMVar12,uVar13,(pMVar12->klass->vtable)._9_Deserialize.method);
                pSVar6 = (pMVar12->fields).Objects;
                if (pSVar6 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
                  pMVar11 = (Map_MapScriptSceneObject_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar6,0,
                                       MethodInfo_MapScriptBaseObject_get_Item);
                  if (pMVar11 == (Map_MapScriptSceneObject_o *)0x0) {
                    return (Map_MapScriptSceneObject_o *)0x0;
                  }
                  bVar2 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
                  if ((bVar2 <= (((Il2CppClass *)pMVar11->klass)->_2).naturalAligment) &&
                     ((((Il2CppClass *)pMVar11->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                      TypeInfo_MapScriptSceneObject)) {
                    return pMVar11;
                  }
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(pMVar11);
                }
              }
            }
          }
        }
      }
    }
    else {
      pSVar10 = System_String__Split(asset,0x2f,0,(MethodInfo *)0x0);
      pMVar11 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
      Map_MapScriptSceneObject___ctor(pMVar11,(MethodInfo *)0x0);
      if (pMVar11 != (Map_MapScriptSceneObject_o *)0x0) {
        (pMVar11->fields).Asset = asset;
        il2cpp_runtime_glue(&(pMVar11->fields).Asset,asset);
        if (pSVar10 != (System_String_array *)0x0) {
          if (2 < (int)pSVar10->max_length) {
            asset = pSVar10->m_Items[2];
          }
          *(System_String_o **)&(pMVar11->fields).Visible = asset;
          il2cpp_runtime_glue(&(pMVar11->fields).Visible,asset);
          pSVar4 = (pMVar11->fields).PhysicsMaterial;
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (pSVar4 != (System_String_o *)0x0) {
            pSVar4->fields = *(System_String_Fields *)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8);
            il2cpp_runtime_glue(&pSVar4->fields);
            return pMVar11;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$ClearGhosts
// il2cpp: void MapEditor_MapEditorBrush__ClearGhosts (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x403e5c0

void MapEditor_MapEditorBrush__ClearGhosts(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Collections_Generic_List_Vector3__o *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar6;
  System_Collections_Generic_List_T__o *pSVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar9;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (DAT_057043d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057043d0 = '\x01';
  }
  pSVar3 = (__this->fields)._ghostObjects;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    pSVar7 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    while( true ) {
      x = local_30;
      __this_00.fields._8_8_ = pSVar8;
      __this_00.fields._list = pSVar7;
      __this_00.fields._current = (Il2CppObject *)x;
      bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
      if ((char)bVar6 == '\0') break;
      pUVar9 = x;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      local_30 = pUVar9;
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy(x,(MethodInfo *)0x0);
        local_30 = pUVar9;
      }
    }
    __this_01.fields._8_8_ = pSVar8;
    __this_01.fields._list = pSVar7;
    __this_01.fields._current = (Il2CppObject *)x;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
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
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$ApplyGhostAppearance
// il2cpp: void MapEditor_MapEditorBrush__ApplyGhostAppearance (MapEditor_MapEditorBrush_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x4041ca0

void MapEditor_MapEditorBrush__ApplyGhostAppearance
               (MapEditor_MapEditorBrush_o *__this,UnityEngine_GameObject_o *go,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Material_array *pUVar5;
  UnityEngine_Material_array *value;
  UnityEngine_Material_o *pUVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  UnityEngine_Material_o **ppUVar11;
  ulong uVar12;
  MethodInfo *pMVar13;
  ulong uVar14;
  UnityEngine_Material_o **ppUVar15;
  UnityEngine_Color_o UVar16;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  
  if (DAT_057043d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"_Color");
    DAT_057043d1 = '\x01';
  }
  if ((go != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar4 = UnityEngine_GameObject__GetComponentsInChildren<object>(go,MethodInfo_Collider___GetComponentsInChildren_Collider),
     pSVar4 != (System_Object_array *)0x0)) {
    uVar9 = (uint)pSVar4->max_length;
    if (0 < (int)uVar9) {
      uVar10 = 0;
      do {
        if (uVar9 <= uVar10) goto LAB_040420bd;
        if ((UnityEngine_Collider_o *)pSVar4->m_Items[(int)uVar10] == (UnityEngine_Collider_o *)0x0)
        goto LAB_040420b8;
        UnityEngine_Collider__set_enabled
                  ((UnityEngine_Collider_o *)pSVar4->m_Items[(int)uVar10],0,(MethodInfo *)0x0);
        uVar10 = uVar10 + 1;
        uVar9 = (uint)pSVar4->max_length;
      } while ((int)uVar10 < (int)uVar9);
    }
    pSVar4 = UnityEngine_GameObject__GetComponentsInChildren<object>(go,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    if (pSVar4 != (System_Object_array *)0x0) {
      iVar1 = (int)pSVar4->max_length;
      if (iVar1 < 1) {
        return;
      }
      uVar9 = 0;
      if (iVar1 != 0) {
        do {
          __this_00 = (UnityEngine_Renderer_o *)pSVar4->m_Items[(int)uVar9];
          if ((__this_00 == (UnityEngine_Renderer_o *)0x0) ||
             (pUVar5 = UnityEngine_Renderer__get_sharedMaterials(__this_00,(MethodInfo *)0x0),
             pUVar5 == (UnityEngine_Material_array *)0x0)) goto LAB_040420b8;
          value = (UnityEngine_Material_array *)il2cpp_glue_02274930(TypeInfo_Material);
          uVar12 = pUVar5->max_length;
          if (0 < (int)uVar12) {
            uVar14 = uVar12 & 0xffffffff;
            if (value == (UnityEngine_Material_array *)0x0) {
              uVar12 = 0;
              do {
                if (uVar14 <= uVar12) goto LAB_040420bd;
                pUVar2 = (UnityEngine_Object_o *)pUVar5->m_Items[uVar12];
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar3 = UnityEngine_Object__op_Equality
                                  (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar3 == '\0') {
                  if ((uint)pUVar5->max_length <= (uint)uVar12) goto LAB_040420bd;
                  pMVar13 = (MethodInfo *)pUVar5->m_Items[uVar12];
                  pUVar6 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
                  UnityEngine_Material___ctor
                            (pUVar6,(UnityEngine_Material_o *)pMVar13,(MethodInfo *)0x0);
                  MapEditor_MapEditorBrush__TryMakeTransparent(pUVar6,pMVar13);
                  if ((pUVar6 != (UnityEngine_Material_o *)0x0) &&
                     (bVar3 = UnityEngine_Material__HasProperty
                                        (pUVar6,"_Color",(MethodInfo *)0x0), (char)bVar3 != '\0'
                     )) {
                    UVar16 = UnityEngine_Material__get_color(pUVar6,(MethodInfo *)0x0);
                    value_01.fields.r = UVar16.fields.r + (0.6 - UVar16.fields.r) * 0.5;
                    value_01.fields.g = UVar16.fields.g + (0.9 - UVar16.fields.g) * 0.5;
                    value_01.fields.a = 0.45;
                    value_01.fields.b = (1.0 - UVar16.fields.b) * 0.5 + UVar16.fields.b;
                    UnityEngine_Material__set_color(pUVar6,value_01,(MethodInfo *)0x0);
                  }
                  goto LAB_040420b8;
                }
                uVar12 = uVar12 + 1;
                uVar10 = (uint)pUVar5->max_length;
                uVar14 = (ulong)uVar10;
              } while ((long)uVar12 < (long)(int)uVar10);
            }
            else {
              ppUVar15 = pUVar5->m_Items;
              ppUVar11 = value->m_Items;
              uVar14 = 0;
              if ((uVar12 & 0xffffffff) == 0) break;
              while( true ) {
                pUVar2 = (UnityEngine_Object_o *)*ppUVar15;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar3 = UnityEngine_Object__op_Equality
                                  (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar3 == '\0') {
                  if ((uint)pUVar5->max_length <= uVar14) goto LAB_040420bd;
                  pMVar13 = (MethodInfo *)*ppUVar15;
                  pUVar6 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
                  UnityEngine_Material___ctor
                            (pUVar6,(UnityEngine_Material_o *)pMVar13,(MethodInfo *)0x0);
                  MapEditor_MapEditorBrush__TryMakeTransparent(pUVar6,pMVar13);
                  if (pUVar6 == (UnityEngine_Material_o *)0x0) goto LAB_040420b8;
                  bVar3 = UnityEngine_Material__HasProperty(pUVar6,"_Color",(MethodInfo *)0x0);
                  if ((char)bVar3 != '\0') {
                    UVar16 = UnityEngine_Material__get_color(pUVar6,(MethodInfo *)0x0);
                    value_00.fields.r = UVar16.fields.r + (0.6 - UVar16.fields.r) * 0.5;
                    value_00.fields.g = UVar16.fields.g + (0.9 - UVar16.fields.g) * 0.5;
                    value_00.fields.a = 0.45;
                    value_00.fields.b = (1.0 - UVar16.fields.b) * 0.5 + UVar16.fields.b;
                    UnityEngine_Material__set_color(pUVar6,value_00,(MethodInfo *)0x0);
                  }
                  lVar7 = il2cpp_runtime_glue(pUVar6,(((value->obj).klass)->_1).element_class);
                  if (lVar7 == 0) {
                    uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                    il2cpp_glue_02274a00(uVar8,0);
                  }
                  if ((uint)value->max_length <= uVar14) goto LAB_040420bd;
                  *ppUVar11 = pUVar6;
                  il2cpp_runtime_glue(ppUVar11);
                }
                uVar14 = uVar14 + 1;
                uVar10 = (uint)pUVar5->max_length;
                ppUVar15 = ppUVar15 + 1;
                ppUVar11 = ppUVar11 + 1;
                if ((long)(int)uVar10 <= (long)uVar14) break;
                if (uVar10 <= uVar14) goto LAB_040420bd;
              }
            }
          }
          UnityEngine_Renderer__set_sharedMaterials(__this_00,value,(MethodInfo *)0x0);
          UnityEngine_Renderer__set_shadowCastingMode(__this_00,0,(MethodInfo *)0x0);
          uVar9 = uVar9 + 1;
          uVar10 = (uint)pSVar4->max_length;
          if ((int)uVar10 <= (int)uVar9) {
            return;
          }
        } while (uVar9 < uVar10);
      }
LAB_040420bd:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_040420b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$TryMakeTransparent
// il2cpp: void MapEditor_MapEditorBrush__TryMakeTransparent (UnityEngine_Material_o* m, const MethodInfo* method);
// 0x40420e0

void MapEditor_MapEditorBrush__TryMakeTransparent(UnityEngine_Material_o *m,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057043d2 == '\0') {
    il2cpp_init_method_metadata(&"_SrcBlend");
    il2cpp_init_method_metadata(&"_ALPHABLEND_ON");
    il2cpp_init_method_metadata(&"_ALPHAPREMULTIPLY_ON");
    il2cpp_init_method_metadata(&"_Surface");
    il2cpp_init_method_metadata(&"_DstBlend");
    il2cpp_init_method_metadata(&"_Mode");
    il2cpp_init_method_metadata(&"_ZWrite");
    il2cpp_init_method_metadata(&"_ALPHATEST_ON");
    il2cpp_init_method_metadata(&"RenderType");
    il2cpp_init_method_metadata(&"Transparent");
    DAT_057043d2 = '\x01';
  }
  if (m != (UnityEngine_Material_o *)0x0) {
    bVar1 = UnityEngine_Material__HasProperty(m,"_Mode",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      UnityEngine_Material__SetFloat(m,"_Mode",2.0,(MethodInfo *)0x0);
    }
    bVar1 = UnityEngine_Material__HasProperty(m,"_Surface",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      UnityEngine_Material__SetFloat(m,"_Surface",1.0,(MethodInfo *)0x0);
    }
    UnityEngine_Material__SetOverrideTag(m,"RenderType","Transparent",(MethodInfo *)0x0);
    bVar1 = UnityEngine_Material__HasProperty(m,"_SrcBlend",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      UnityEngine_Material__SetInt(m,"_SrcBlend",5,(MethodInfo *)0x0);
    }
    bVar1 = UnityEngine_Material__HasProperty(m,"_DstBlend",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      UnityEngine_Material__SetInt(m,"_DstBlend",10,(MethodInfo *)0x0);
    }
    bVar1 = UnityEngine_Material__HasProperty(m,"_ZWrite",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      UnityEngine_Material__SetInt(m,"_ZWrite",0,(MethodInfo *)0x0);
    }
    UnityEngine_Material__DisableKeyword(m,"_ALPHATEST_ON",(MethodInfo *)0x0);
    UnityEngine_Material__EnableKeyword(m,"_ALPHABLEND_ON",(MethodInfo *)0x0);
    UnityEngine_Material__DisableKeyword(m,"_ALPHAPREMULTIPLY_ON",(MethodInfo *)0x0);
    UnityEngine_Material__set_renderQueue(m,3000,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$PositionGhosts
// il2cpp: void MapEditor_MapEditorBrush__PositionGhosts (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x40404c0

void MapEditor_MapEditorBrush__PositionGhosts(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar3;
  System_Collections_Generic_List_Vector3__o *pSVar6;
  System_Collections_Generic_List_string__o *__this_00;
  double dVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  UnityEngine_LayerMask_o mask;
  int32_t mask_00;
  bool_conflict bVar8;
  System_Random_o *__this_03;
  System_Int32_array *layers;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  MapEditor_MapEditorBrush_o *__this_04;
  System_String_o *asset;
  MapEditor_BrushEntry_o *pMVar11;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar12;
  System_Collections_Generic_List_GameObject__o *pSVar13;
  float fVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o xz;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Quaternion_o UVar26;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
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
  
  if (DAT_057043d3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Random);
    DAT_057043d3 = '\x01';
  }
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  local_78.x = 0.0;
  local_78.y = 0.0;
  local_78.z = 0.0;
  local_78.w = 0.0;
  if ((char)(__this->fields)._hasCenter == '\0') {
    pSVar13 = (__this->fields)._ghostObjects;
    if (pSVar13 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,
                 (System_Collections_Generic_List_object__o *)pSVar13,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
      while( true ) {
        do {
          __this_01.fields._list._4_4_ = in_stack_ffffffffffffff3c;
          __this_01.fields._list._0_4_ = in_stack_ffffffffffffff38;
          __this_01.fields._index = in_stack_ffffffffffffff40;
          __this_01.fields._version = in_stack_ffffffffffffff44;
          __this_01.fields._current._0_4_ = in_stack_ffffffffffffff48;
          __this_01.fields._current._4_4_ = in_stack_ffffffffffffff4c;
          bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&local_68);
          pUVar9 = local_58;
          if ((char)bVar8 == '\0') {
            __this_02.fields._list._4_4_ = in_stack_ffffffffffffff3c;
            __this_02.fields._list._0_4_ = in_stack_ffffffffffffff38;
            __this_02.fields._index = in_stack_ffffffffffffff40;
            __this_02.fields._version = in_stack_ffffffffffffff44;
            __this_02.fields._current._0_4_ = in_stack_ffffffffffffff48;
            __this_02.fields._current._4_4_ = in_stack_ffffffffffffff4c;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_02,(MethodInfo_3185E10 *)&local_68);
            return;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar8 = UnityEngine_Object__op_Inequality
                            (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        } while ((char)bVar8 == '\0');
        if (pUVar9 == (UnityEngine_Object_o *)0x0) break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar9,0,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    iVar12 = (__this->fields)._seed;
    __this_03 = (System_Random_o *)il2cpp_runtime_glue(TypeInfo_Random);
    System_Random___ctor(__this_03,iVar12 + 1,(MethodInfo *)0x0);
    layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (layers != (System_Int32_array *)0x0) {
      if ((int)layers->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
      iVar12 = 0;
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      mask_00 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      pSVar13 = (__this->fields)._ghostObjects;
      if (pSVar13 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        local_50 = __this_03;
        if ((pSVar13->fields)._size < 1) {
          return;
        }
        do {
          pUVar9 = (UnityEngine_Object_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar13,iVar12,
                              MethodInfo_GameObject_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar8 = UnityEngine_Object__op_Equality
                            (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            if (pUVar9 == (UnityEngine_Object_o *)0x0) break;
            bVar8 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)pUVar9,(MethodInfo *)0x0);
            method_00 = extraout_RDX;
            if ((char)bVar8 == '\0') {
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)pUVar9,1,(MethodInfo *)0x0);
              method_00 = extraout_RDX_00;
            }
            if (DAT_056fdd15 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fdd15 = '\x01';
              method_00 = extraout_RDX_01;
            }
            local_48._8_8_ = 0;
            local_48._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
            if (DAT_056fde1e == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Quaternion);
              DAT_056fde1e = '\x01';
              method_00 = extraout_RDX_02;
            }
            local_78._0_8_ = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            local_78._8_8_ = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            if ((__this->fields).AssetSelectMode == 1) {
              pSVar6 = (__this->fields)._ghostLocalOffsets;
              if (pSVar6 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
              if (iVar12 < (pSVar6->fields)._size) {
                UVar25 = System_Collections_Generic_List<Vector3>__get_Item
                                   (pSVar6,iVar12,MethodInfo_Vector3_get_Item);
                fVar14 = UVar25.fields.z;
                fVar16 = UVar25.fields.x;
                fVar2 = UVar25.fields.y;
                method_00 = extraout_RDX_03;
              }
              else {
                if (DAT_056fdd15 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector3);
                  DAT_056fdd15 = '\x01';
                  method_00 = extraout_RDX_04;
                }
                uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                fVar16 = (float)uVar3;
                fVar2 = (float)((ulong)uVar3 >> 0x20);
                fVar14 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
              }
              UVar25.fields.y = fVar2;
              UVar25.fields.x = fVar16;
              UVar25.fields.z = fVar14;
              UVar25 = MapEditor_MapEditorBrush__ApplyCurve
                                 (__this,UVar25,(UnityEngine_Quaternion_o *)&local_78,method_00);
              uVar1 = (__this->fields)._center.fields.x;
              uVar4 = (__this->fields)._center.fields.y;
              local_48._8_4_ = extraout_XMM0_Dc;
              local_48._0_8_ = UVar25.fields._0_8_;
              local_48._12_4_ = extraout_XMM0_Dd;
              fVar2 = (float)uVar1 + UVar25.fields.x;
              fVar5 = (float)uVar4 + UVar25.fields.y;
              fVar16 = UVar25.fields.z + (__this->fields)._center.fields.z;
              pSVar6 = (__this->fields)._ghostRotations;
            }
            else {
              if (__this_03 == (System_Random_o *)0x0) break;
              dVar7 = (double)(*(__this_03->klass->vtable)._8_NextDouble.methodPtr)
                                        (__this_03,(__this_03->klass->vtable)._8_NextDouble.method);
              fVar14 = (float)dVar7;
              if (fVar14 < 0.0) {
                fVar14 = sqrtf(fVar14);
              }
              else {
                fVar14 = SQRT(fVar14);
              }
              fVar14 = fVar14 * (float)(__this->fields).Mode;
              dVar7 = (double)(*(__this_03->klass->vtable)._8_NextDouble.methodPtr)
                                        (__this_03,(__this_03->klass->vtable)._8_NextDouble.method);
              fVar17 = (float)dVar7 * 3.1415927 + (float)dVar7 * 3.1415927;
              fVar2 = (__this->fields)._center.fields.x;
              fVar5 = (__this->fields)._center.fields.y;
              fVar16 = (__this->fields)._center.fields.z;
              fVar15 = cosf(fVar17);
              fVar17 = sinf(fVar17);
              fVar2 = fVar15 * fVar14 + fVar2;
              fVar5 = fVar5 + 0.0;
              fVar16 = fVar17 * fVar14 + fVar16;
              pSVar6 = (__this->fields)._ghostRotations;
            }
            if (pSVar6 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
            UVar25 = System_Collections_Generic_List<Vector3>__get_Item(pSVar6,iVar12,MethodInfo_Vector3_get_Item);
            euler.fields.x = UVar25.fields.x * 0.017453292;
            euler.fields.y = UVar25.fields.y * 0.017453292;
            euler.fields.z = UVar25.fields.z * 0.017453292;
            UVar26 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
            pUVar10 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pUVar9,(MethodInfo *)0x0);
            local_98 = UVar26.fields.z;
            fStack_94 = UVar26.fields.w;
            local_88 = UVar26.fields.x;
            fStack_84 = UVar26.fields.y;
            if ((__this->fields).AssetSelectMode == 1) {
              fVar14 = local_78.x;
              fVar15 = local_78.y;
              fVar21 = local_78.z;
              fVar23 = local_78.w;
              fVar19 = fStack_94 * fVar14;
              fVar20 = fStack_94 * fVar15;
              fVar22 = fVar21 * local_98;
              fVar17 = fVar15 * local_98;
              fVar18 = fVar21 * local_88;
              fVar24 = fVar14 * local_98;
              local_98 = (fStack_84 * fVar14 + fStack_94 * fVar21 + local_98 * fVar23) -
                         local_88 * fVar15;
              fStack_94 = ((fStack_94 * fVar23 - fVar14 * local_88) - fStack_84 * fVar15) - fVar22;
              local_88 = (fVar17 + fVar19 + local_88 * fVar23) - fVar21 * fStack_84;
              fStack_84 = (fVar18 + fVar20 + fStack_84 * fVar23) - fVar24;
            }
            if (pUVar10 == (UnityEngine_Transform_o *)0x0) break;
            UVar26.fields.y = fStack_84;
            UVar26.fields.x = local_88;
            UVar26.fields.w = fStack_94;
            UVar26.fields.z = local_98;
            UnityEngine_Transform__set_rotation(pUVar10,UVar26,(MethodInfo *)0x0);
            __this_04 = (MapEditor_MapEditorBrush_o *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pUVar9,(MethodInfo *)0x0);
            if (DAT_056fde1f == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fde1f = '\x01';
            }
            if (__this_04 == (MapEditor_MapEditorBrush_o *)0x0) break;
            uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            value.fields.x = (float)uVar3 * 500.0 + fVar2;
            value.fields.y = (float)((ulong)uVar3 >> 0x20) * 500.0 + fVar5;
            value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 500.0 + fVar16;
            UnityEngine_Transform__set_position
                      ((UnityEngine_Transform_o *)__this_04,value,(MethodInfo *)0x0);
            xz.fields.y = fVar5;
            xz.fields.x = fVar2;
            xz.fields.z = fVar16;
            UVar25 = MapEditor_MapEditorBrush__ProjectToGround
                               (__this_04,(UnityEngine_GameObject_o *)pUVar9,xz,mask_00,in_RCX);
            fVar2 = UVar25.fields.z;
            fVar14 = UVar25.fields.x;
            fVar16 = UVar25.fields.y;
            if ((__this->fields).AssetSelectMode == 1) {
              fVar16 = (float)local_48._4_4_ + fVar16;
            }
            __this_00 = (__this->fields)._ghostAssets;
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) break;
            asset = (System_String_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,iVar12,
                               MethodInfo_String_get_Item);
            pMVar11 = MapEditor_MapEditorBrush__FindEntry(__this,asset,method_01);
            __this_03 = local_50;
            if (pMVar11 != (MapEditor_BrushEntry_o *)0x0) {
              fVar16 = fVar16 + (pMVar11->fields).Offset.fields.x;
            }
            pUVar10 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pUVar9,(MethodInfo *)0x0);
            if (pUVar10 == (UnityEngine_Transform_o *)0x0) break;
            value_00.fields.y = fVar16;
            value_00.fields.x = fVar14;
            value_00.fields.z = fVar2;
            UnityEngine_Transform__set_position(pUVar10,value_00,(MethodInfo *)0x0);
          }
          iVar12 = iVar12 + 1;
          pSVar13 = (__this->fields)._ghostObjects;
          if (pSVar13 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
          if ((pSVar13->fields)._size <= iVar12) {
            return;
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$GetAverageGhostSize
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorBrush__GetAverageGhostSize (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4042f80

UnityEngine_Vector3_o
MapEditor_MapEditorBrush__GetAverageGhostSize(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar7;
  int iVar8;
  System_Object_array *pSVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  undefined1 auVar16 [16];
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  UnityEngine_Vector3_o UVar32;
  undefined4 in_stack_ffffffffffffff48;
  float in_stack_ffffffffffffff50;
  float in_stack_ffffffffffffff54;
  _union_247328 in_stack_ffffffffffffff58;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 local_88 [36];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (DAT_057043d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057043d4 = '\x01';
  }
  local_88._0_8_ = (Il2CppMethodPointer)0x0;
  local_88._8_8_ = (Il2CppMethodPointer)0x0;
  local_88._16_8_ = (InvokerMethod)0x0;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  __this_00 = (__this->fields)._ghostObjects;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar13 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  local_88._32_4_ = (undefined4)uVar13;
  fStack_64 = (float)((ulong)uVar13 >> 0x20);
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  fVar12 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff58,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
  local_88._16_8_ = CONCAT44(fStack_94,fStack_98);
  iVar8 = 0;
  while( true ) {
    do {
      do {
        __this_01.fields._list._4_4_ = fVar12;
        __this_01.fields._list._0_4_ = in_stack_ffffffffffffff48;
        __this_01.fields._index = (int32_t)in_stack_ffffffffffffff50;
        __this_01.fields._version = (int32_t)in_stack_ffffffffffffff54;
        __this_01.fields._current = in_stack_ffffffffffffff58.genericMethod;
        bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)local_88);
        uVar13 = local_88._16_8_;
        if ((char)bVar7 == '\0') {
          __this_02.fields._list._4_4_ = fVar12;
          __this_02.fields._list._0_4_ = in_stack_ffffffffffffff48;
          __this_02.fields._index = (int32_t)in_stack_ffffffffffffff50;
          __this_02.fields._version = (int32_t)in_stack_ffffffffffffff54;
          __this_02.fields._current = in_stack_ffffffffffffff58.genericMethod;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)local_88);
          if (iVar8 == 0) {
            if (DAT_056fe077 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fe077 = '\x01';
            }
            uVar13 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            fVar12 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
          }
          else {
            auVar20._0_4_ = (float)iVar8;
            fVar12 = fVar12 / auVar20._0_4_;
            auVar20._4_4_ = auVar20._0_4_;
            auVar20._8_8_ = 0;
            auVar15._4_4_ = fStack_64;
            auVar15._0_4_ = local_88._32_4_;
            auVar15._8_4_ = fStack_60;
            auVar15._12_4_ = fStack_5c;
            auVar15 = divps(auVar15,auVar20);
            uVar13 = auVar15._0_8_;
          }
          UVar32.fields.z = fVar12;
          UVar32.fields.x = (float)(int)uVar13;
          UVar32.fields.y = (float)(int)((ulong)uVar13 >> 0x20);
          return (UnityEngine_Vector3_o)UVar32.fields;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)uVar13,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
      } while ((char)bVar7 != '\0');
      if ((UnityEngine_Object_o *)uVar13 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar9 = UnityEngine_GameObject__GetComponentsInChildren<object>
                         ((UnityEngine_GameObject_o *)uVar13,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
      if (pSVar9 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    } while (pSVar9->max_length == 0);
    if ((int)pSVar9->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((UnityEngine_Renderer_o *)pSVar9->m_Items[0] == (UnityEngine_Renderer_o *)0x0) break;
    UnityEngine_Renderer__get_bounds
              ((UnityEngine_Bounds_o *)&stack0xffffffffffffff58,
               (UnityEngine_Renderer_o *)pSVar9->m_Items[0],(MethodInfo *)0x0);
    fVar27 = 0.0;
    fVar28 = 0.0;
    uVar1 = (uint)pSVar9->max_length;
    fVar24 = fStack_94;
    fVar11 = fStack_9c;
    fVar26 = fStack_98;
    if (1 < (int)uVar1) {
      local_58 = fStack_9c;
      fStack_54 = fStack_98;
      fStack_50 = 0.0;
      fStack_4c = 0.0;
      uStack_40._0_4_ = 0.0;
      uStack_40._4_2_ = 0;
      uStack_40._6_2_ = 0;
      lVar10 = 5;
      in_stack_ffffffffffffff50 = fStack_a0;
      local_48 = in_stack_ffffffffffffff58;
      do {
        iVar6 = (int)lVar10;
        if (uVar1 <= iVar6 - 4U) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((UnityEngine_Renderer_o *)pSVar9->m_Items[lVar10 + -4] == (UnityEngine_Renderer_o *)0x0)
        {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Renderer__get_bounds
                  ((UnityEngine_Bounds_o *)&stack0xffffffffffffff58,
                   (UnityEngine_Renderer_o *)pSVar9->m_Items[lVar10 + -4],(MethodInfo *)0x0);
        fVar26 = in_stack_ffffffffffffff58._0_4_ - fStack_9c;
        fVar27 = in_stack_ffffffffffffff58._4_4_ - fStack_98;
        fVar28 = fStack_a0 - fStack_94;
        auVar14._0_4_ = (float)(undefined4)local_48 - local_58;
        auVar14._4_4_ = (float)local_48._4_4_ - fStack_54;
        auVar14._8_4_ = (float)uStack_40 - fStack_50;
        auVar14._12_4_ = uStack_40._4_4_ - fStack_4c;
        auVar2._4_4_ = fVar27;
        auVar2._0_4_ = fVar26;
        auVar2._8_8_ = 0;
        auVar15 = minps(auVar14,auVar2);
        fVar11 = in_stack_ffffffffffffff50 - fVar24;
        if (fVar28 <= in_stack_ffffffffffffff50 - fVar24) {
          fVar11 = fVar28;
        }
        auVar19._0_4_ = local_58 + (float)(undefined4)local_48;
        auVar19._4_4_ = fStack_54 + (float)local_48._4_4_;
        auVar19._8_4_ = fStack_50 + (float)uStack_40;
        auVar19._12_4_ = fStack_4c + uStack_40._4_4_;
        auVar3._4_4_ = fVar27;
        auVar3._0_4_ = fVar26;
        auVar3._8_8_ = 0;
        auVar20 = maxps(auVar19,auVar3);
        fVar26 = fVar24 + in_stack_ffffffffffffff50;
        if (fVar24 + in_stack_ffffffffffffff50 <= fVar28) {
          fVar26 = fVar28;
        }
        fVar18 = (auVar20._0_4_ - auVar15._0_4_) * 0.5;
        fVar21 = (auVar20._4_4_ - auVar15._4_4_) * 0.5;
        fVar22 = (auVar20._8_4_ - auVar15._8_4_) * 0.0;
        fVar23 = (auVar20._12_4_ - auVar15._12_4_) * 0.0;
        fVar24 = (fVar26 - fVar11) * 0.5;
        fVar26 = auVar15._0_4_ + fVar18;
        fVar27 = auVar15._4_4_ + fVar21;
        fVar28 = auVar15._8_4_ + fVar22;
        fVar17 = auVar15._12_4_ + fVar23;
        fVar30 = in_stack_ffffffffffffff58._0_4_ + fStack_9c;
        fVar31 = in_stack_ffffffffffffff58._4_4_ + fStack_98;
        fVar29 = fStack_a0 + fStack_94;
        auVar25._0_4_ = fVar26 - fVar18;
        auVar25._4_4_ = fVar27 - fVar21;
        auVar25._8_4_ = fVar28 - fVar22;
        auVar25._12_4_ = fVar17 - fVar23;
        in_stack_ffffffffffffff50 = (fVar11 + fVar24) - fVar24;
        auVar4._4_4_ = fVar31;
        auVar4._0_4_ = fVar30;
        auVar4._8_8_ = 0;
        auVar15 = minps(auVar25,auVar4);
        if (fVar29 <= in_stack_ffffffffffffff50) {
          in_stack_ffffffffffffff50 = fVar29;
        }
        auVar16._0_4_ = fVar26 + fVar18;
        auVar16._4_4_ = fVar27 + fVar21;
        auVar16._8_4_ = fVar28 + fVar22;
        auVar16._12_4_ = fVar17 + fVar23;
        fVar24 = fVar11 + fVar24 + fVar24;
        auVar5._4_4_ = fVar31;
        auVar5._0_4_ = fVar30;
        auVar5._8_8_ = 0;
        auVar20 = maxps(auVar16,auVar5);
        if (fVar24 <= fVar29) {
          fVar24 = fVar29;
        }
        fVar11 = (auVar20._0_4_ - auVar15._0_4_) * 0.5;
        fVar26 = (auVar20._4_4_ - auVar15._4_4_) * 0.5;
        fVar27 = (auVar20._8_4_ - auVar15._8_4_) * 0.0;
        fVar28 = (auVar20._12_4_ - auVar15._12_4_) * 0.0;
        fVar24 = (fVar24 - in_stack_ffffffffffffff50) * 0.5;
        local_48._4_4_ = auVar15._4_4_ + fVar26;
        local_48._0_4_ = auVar15._0_4_ + fVar11;
        uStack_40._4_4_ = auVar15._12_4_ + fVar28;
        uStack_40._0_4_ = auVar15._8_4_ + fVar27;
        in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 + fVar24;
        uVar1 = (uint)pSVar9->max_length;
        lVar10 = lVar10 + 1;
        in_stack_ffffffffffffff54 = fVar24;
        local_58 = fVar11;
        fStack_54 = fVar26;
        fStack_50 = fVar27;
        fStack_4c = fVar28;
      } while (iVar6 + -3 < (int)uVar1);
    }
    local_88._32_4_ = (float)local_88._32_4_ + fVar11 + fVar11;
    fStack_64 = fStack_64 + fVar26 + fVar26;
    fStack_60 = fStack_60 + fVar27 + fVar27;
    fStack_5c = fStack_5c + fVar28 + fVar28;
    fVar12 = fVar12 + fVar24 + fVar24;
    iVar8 = iVar8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$ApplyCurve
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorBrush__ApplyCurve (MapEditor_MapEditorBrush_o* __this, UnityEngine_Vector3_o local, const MethodInfo* method);
// 0x4043450

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
          MapEditor_MapEditorBrush__ApplyCurve
                    (__this,local,(UnityEngine_Quaternion_o *)&UStack_18,in_RDX);
  return (UnityEngine_Vector3_o)UVar1;
}


// MapEditor.MapEditorBrush$$ApplyCurve
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorBrush__ApplyCurve (MapEditor_MapEditorBrush_o* __this, UnityEngine_Vector3_o local, UnityEngine_Quaternion_o* tangent, const MethodInfo* method);
// 0x40422d0

UnityEngine_Vector3_o
MapEditor_MapEditorBrush__ApplyCurve
          (MapEditor_MapEditorBrush_o *__this,UnityEngine_Vector3_o local,
          UnityEngine_Quaternion_o *tangent,MethodInfo *method)

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
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Quaternion_Fields UVar28;
  UnityEngine_Vector3_o axis;
  float local_38;
  float fStack_34;
  undefined8 uVar24;
  
  fVar13 = local.fields.z;
  fVar14 = local.fields.x;
  fVar17 = local.fields.y;
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  uVar1 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uVar24 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  (tangent->fields).x = (float)(int)uVar1;
  (tangent->fields).y = (float)(int)((ulong)uVar1 >> 0x20);
  (tangent->fields).z = (float)(int)uVar24;
  (tangent->fields).w = (float)(int)((ulong)uVar24 >> 0x20);
  fVar2 = (__this->fields).SpacingZ;
  if ((fVar2 == 0.0) || (ABS((float)(__this->fields).CurveAxis) < 0.0001)) goto LAB_04042961;
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
    if (DAT_0570222a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_0570222a = '\x01';
    }
    puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pfVar7 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
  }
  else if (fVar2 == 2.8026e-45) {
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    pfVar7 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  }
  else {
    if (DAT_056fde21 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde21 = '\x01';
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
LAB_040424e5:
    fVar19 = (float)(iVar9 + -1) * (__this->fields).SpacingY;
  }
  else {
    fVar10 = (float)(iVar3 + -1) * (float)(__this->fields).GridZ;
    fVar18 = 0.0;
    if (fVar12 == 2.8026e-45) goto LAB_040424e5;
    fVar18 = (float)(iVar4 + -1) * (__this->fields).SpacingX;
    fVar19 = 0.0;
    if (fVar12 != 4.2039e-45) goto LAB_040424e5;
  }
  if ((fVar10 < fVar18) || (fVar10 < fVar19)) {
    if (fVar18 <= fVar19) {
      if (DAT_056fde21 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde21 = '\x01';
      }
      puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
      pfVar7 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
      fVar12 = fVar13;
      fVar10 = fVar19;
    }
    else {
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
      }
      puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      pfVar7 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar12 = fVar17;
      fVar10 = fVar18;
    }
  }
  else {
    if (DAT_0570222a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_0570222a = '\x01';
    }
    puVar8 = (undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    pfVar7 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
    fVar12 = fVar14;
  }
  if (fVar10 < 0.0001) goto LAB_04042961;
  fVar19 = (float)*puVar8;
  fVar22 = (float)((ulong)*puVar8 >> 0x20);
  fVar18 = *pfVar7;
  local_38 = (float)uVar1;
  fStack_34 = (float)((ulong)uVar1 >> 0x20);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar25._0_4_ = fVar18 * fStack_34 - fVar22 * fVar2;
  auVar25._4_4_ = fVar2 * fVar19 - local_38 * fVar18;
  auVar25._8_8_ = 0;
  fVar20 = fVar22 * local_38 - fStack_34 * fVar19;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar16 = 0;
  uVar15 = 0;
  fVar11 = fVar20 * fVar20 + auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_;
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
    uVar15 = extraout_XMM0_Dc;
    uVar16 = extraout_XMM0_Dd;
    if (1e-05 < fVar11) goto LAB_040427c3;
LAB_0404275d:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
    }
    uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar20 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar11 = SQRT(fVar11);
    if (fVar11 <= 1e-05) goto LAB_0404275d;
LAB_040427c3:
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
  UVar28 = (UnityEngine_Quaternion_Fields)
           UnityEngine_Quaternion__AngleAxis(fVar12 * 57.29578,axis,(MethodInfo *)0x0);
  tangent->fields = UVar28;
LAB_04042961:
  UVar27.fields.y = fVar17;
  UVar27.fields.x = fVar14;
  UVar27.fields.z = fVar13;
  return (UnityEngine_Vector3_o)UVar27.fields;
}


// MapEditor.MapEditorBrush$$ProjectToGround
// il2cpp: UnityEngine_Vector3_o MapEditor_MapEditorBrush__ProjectToGround (MapEditor_MapEditorBrush_o* __this, UnityEngine_GameObject_o* go, UnityEngine_Vector3_o xz, int32_t mask, const MethodInfo* method);
// 0x4042980

UnityEngine_Vector3_o
MapEditor_MapEditorBrush__ProjectToGround
          (MapEditor_MapEditorBrush_o *__this,UnityEngine_GameObject_o *go,UnityEngine_Vector3_o xz,
          int32_t mask,MethodInfo *method)

{
  ulong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_00;
  uint uVar7;
  bool_conflict bVar8;
  System_Object_array *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  long lVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar25;
  undefined1 auVar21 [16];
  undefined4 uVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  UnityEngine_Vector3_o UVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined4 in_stack_ffffffffffffff20;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  UnityEngine_Bounds_o local_70;
  Il2CppMethodPointer local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod pIStack_48;
  uint32_t uStack_40;
  float local_3c;
  float fStack_38;
  undefined8 uStack_34;
  undefined8 uVar12;
  
  auVar13._4_12_ = xz._12_12_;
  auVar13._0_4_ = xz.fields.z;
  auVar20 = auVar13;
  if (DAT_057043d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    auVar20._8_8_ = extraout_XMM1_Qb;
    auVar20._0_8_ = extraout_XMM1_Qa;
    DAT_057043d5 = '\x01';
  }
  fStack_38 = 0.0;
  uStack_34 = 0;
  pIStack_48 = (InvokerMethod)0x0;
  uStack_40 = 0;
  local_3c = 0.0;
  local_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  if ((go == (UnityEngine_GameObject_o *)0x0) ||
     (pSVar9 = UnityEngine_GameObject__GetComponentsInChildren<object>(go,MethodInfo_Renderer___GetComponentsInChildren_Renderer),
     pSVar9 == (System_Object_array *)0x0)) goto LAB_04042de6;
  if (pSVar9->max_length == 0) {
    fVar18 = 0.0;
  }
  else {
    if ((int)pSVar9->max_length == 0) {
LAB_04042deb:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((UnityEngine_Renderer_o *)pSVar9->m_Items[0] == (UnityEngine_Renderer_o *)0x0)
    goto LAB_04042de6;
    UnityEngine_Renderer__get_bounds
              (&local_70,(UnityEngine_Renderer_o *)pSVar9->m_Items[0],(MethodInfo *)0x0);
    fVar27 = 0.0;
    fVar30 = 0.0;
    fVar23 = 0.0;
    fVar25 = 0.0;
    uVar7 = (uint)pSVar9->max_length;
    fVar18 = local_70.fields.m_Center.fields.y;
    fVar22 = local_70.fields.m_Extents.fields.y;
    if (1 < (int)uVar7) {
      lVar11 = 5;
      fVar31 = local_70.fields.m_Extents.fields.x;
      fVar32 = local_70.fields.m_Center.fields.x;
      do {
        iVar2 = (int)lVar11;
        if (uVar7 <= iVar2 - 4U) goto LAB_04042deb;
        if ((UnityEngine_Renderer_o *)pSVar9->m_Items[lVar11 + -4] == (UnityEngine_Renderer_o *)0x0)
        goto LAB_04042de6;
        UnityEngine_Renderer__get_bounds
                  (&local_70,(UnityEngine_Renderer_o *)pSVar9->m_Items[lVar11 + -4],
                   (MethodInfo *)0x0);
        auVar19._0_4_ = fVar32 - fVar31;
        auVar19._4_4_ = fVar18 - fVar22;
        auVar19._8_4_ = fVar27 - fVar23;
        auVar19._12_4_ = fVar30 - fVar25;
        auVar5._4_4_ = local_70.fields.m_Center.fields.y - local_70.fields.m_Extents.fields.y;
        auVar5._0_4_ = local_70.fields.m_Center.fields.x - local_70.fields.m_Extents.fields.x;
        auVar5._8_8_ = 0;
        auVar20 = minps(auVar19,auVar5);
        auVar28._0_4_ = fVar31 + fVar32;
        auVar28._4_4_ = fVar22 + fVar18;
        auVar28._8_4_ = fVar23 + fVar27;
        auVar28._12_4_ = fVar25 + fVar30;
        auVar6._4_4_ = local_70.fields.m_Center.fields.y - local_70.fields.m_Extents.fields.y;
        auVar6._0_4_ = local_70.fields.m_Center.fields.x - local_70.fields.m_Extents.fields.x;
        auVar6._8_8_ = 0;
        auVar29 = maxps(auVar28,auVar6);
        fVar27 = (auVar29._0_4_ - auVar20._0_4_) * 0.5;
        fVar30 = (auVar29._4_4_ - auVar20._4_4_) * 0.5;
        fVar31 = (auVar29._8_4_ - auVar20._8_4_) * 0.0;
        fVar32 = (auVar29._12_4_ - auVar20._12_4_) * 0.0;
        fVar18 = auVar20._0_4_ + fVar27;
        fVar22 = auVar20._4_4_ + fVar30;
        fVar23 = auVar20._8_4_ + fVar31;
        fVar25 = auVar20._12_4_ + fVar32;
        auVar14._0_4_ = fVar18 - fVar27;
        auVar14._4_4_ = fVar22 - fVar30;
        auVar14._8_4_ = fVar23 - fVar31;
        auVar14._12_4_ = fVar25 - fVar32;
        auVar29._4_4_ = local_70.fields.m_Center.fields.y + local_70.fields.m_Extents.fields.y;
        auVar29._0_4_ = local_70.fields.m_Center.fields.x + local_70.fields.m_Extents.fields.x;
        auVar29._8_8_ = 0;
        auVar20 = minps(auVar14,auVar29);
        auVar21._0_4_ = fVar18 + fVar27;
        auVar21._4_4_ = fVar22 + fVar30;
        auVar21._8_4_ = fVar23 + fVar31;
        auVar21._12_4_ = fVar25 + fVar32;
        auVar3._4_4_ = local_70.fields.m_Center.fields.y + local_70.fields.m_Extents.fields.y;
        auVar3._0_4_ = local_70.fields.m_Center.fields.x + local_70.fields.m_Extents.fields.x;
        auVar3._8_8_ = 0;
        auVar29 = maxps(auVar21,auVar3);
        fVar31 = (auVar29._0_4_ - auVar20._0_4_) * 0.5;
        fVar22 = (auVar29._4_4_ - auVar20._4_4_) * 0.5;
        fVar23 = (auVar29._8_4_ - auVar20._8_4_) * 0.0;
        fVar25 = (auVar29._12_4_ - auVar20._12_4_) * 0.0;
        fVar32 = auVar20._0_4_ + fVar31;
        fVar18 = auVar20._4_4_ + fVar22;
        fVar27 = auVar20._8_4_ + fVar23;
        fVar30 = auVar20._12_4_ + fVar25;
        uVar7 = (uint)pSVar9->max_length;
        lVar11 = lVar11 + 1;
      } while (iVar2 + -3 < (int)uVar7);
    }
    pUVar10 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto LAB_04042de6;
    UVar33 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    auVar15._4_4_ = fVar18;
    auVar15._0_4_ = fVar18;
    auVar15._8_4_ = fVar27;
    auVar15._12_4_ = fVar30;
    auVar20._4_12_ = auVar15._4_12_;
    auVar20._0_4_ = fVar18 - fVar22;
    fVar18 = UVar33.fields.y - auVar20._0_4_;
  }
  pUVar10 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
    UVar33 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    auVar16._4_12_ = auVar20._4_12_;
    auVar16._0_4_ = UVar33.fields.z;
    uVar12 = auVar16._0_8_;
    fVar22 = UVar33.fields.x;
    fVar23 = UVar33.fields.y;
    if (DAT_0570266b == '\0') {
      fVar22 = (float)il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_0570266b = '\x01';
      uVar12 = extraout_XMM1_Qa_00;
    }
    uVar1 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar1;
    fVar25 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
    if (DAT_056fde20 == '\0') {
      fVar22 = (float)il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
      uVar12 = extraout_XMM1_Qa_01;
    }
    else {
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class(fVar22,uVar12);
    }
    fVar22 = (float)(uVar1 >> 0x20);
    uVar24 = 0;
    uVar26 = 0;
    fVar22 = fVar25 * fVar25 + fVar22 * fVar22 + (float)uVar1 * (float)uVar1;
    fVar27 = xz.fields.x;
    if (fVar22 < 0.0) {
      fVar22 = sqrtf(fVar22);
      uVar24 = extraout_XMM0_Dc;
      uVar26 = extraout_XMM0_Dd;
    }
    else {
      fVar22 = SQRT(fVar22);
    }
    fVar30 = fVar27;
    if (1e-05 < fVar22) {
      fVar31 = fVar25 / fVar22;
      auVar4._4_4_ = fVar22;
      auVar4._0_4_ = fVar22;
      auVar4._8_4_ = uVar24;
      auVar4._12_4_ = uVar26;
      auVar20 = divps(auVar17,auVar4);
      uVar12 = auVar20._0_8_;
    }
    else {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar12 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar31 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      il2cpp_init_class();
      fVar25 = fVar31;
    }
    fVar32 = xz.fields.y;
    uVar24 = 0;
    uVar34 = CONCAT44(fVar23,fVar30);
    uStack_7c = (undefined4)uVar12;
    uStack_78 = (undefined4)((ulong)uVar12 >> 0x20);
    uVar35 = CONCAT44(fVar31,uStack_78);
    uVar12 = CONCAT44(uStack_7c,auVar13._0_4_);
    ray.fields.m_Origin.fields.z = auVar13._0_4_;
    ray.fields.m_Direction.fields.x = (float)uStack_7c;
    ray.fields.m_Origin.fields.x = fVar30;
    ray.fields.m_Origin.fields.y = fVar23;
    ray.fields.m_Direction.fields.y = (float)uStack_78;
    ray.fields.m_Direction.fields.z = fVar31;
    fVar23 = fVar32;
    bVar8 = UnityEngine_Physics__Raycast
                      (ray,(UnityEngine_RaycastHit_o *)&local_58,2000.0,mask,(MethodInfo *)0x0);
    fVar22 = fVar18;
    if ((char)bVar8 != '\0') {
      __this_00.fields.m_Point.fields.z = (float)(int)uVar12;
      __this_00.fields.m_Normal.fields.x = (float)(int)((ulong)uVar12 >> 0x20);
      __this_00.fields.m_Point.fields.x = (float)(int)uVar34;
      __this_00.fields.m_Point.fields.y = (float)(int)((ulong)uVar34 >> 0x20);
      __this_00.fields.m_Normal.fields.y = (float)(int)uVar35;
      __this_00.fields.m_Normal.fields.z = (float)(int)((ulong)uVar35 >> 0x20);
      __this_00.fields.m_FaceID = in_stack_ffffffffffffff20;
      __this_00.fields.m_Distance = fVar25;
      __this_00.fields.m_UV.fields.x = fVar27;
      __this_00.fields.m_UV.fields.y = (float)uVar24;
      __this_00.fields.m_Collider = (int32_t)fVar23;
      UVar33 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)&local_58);
      fVar22 = UVar33.fields.y;
      fVar32 = fVar18;
    }
    UVar33.fields.y = fVar22 + fVar32;
    UVar33.fields.x = fVar27;
    UVar33.fields.z = auVar13._0_4_;
    return (UnityEngine_Vector3_o)UVar33.fields;
  }
LAB_04042de6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$BuildPlacements
// il2cpp: System_Collections_Generic_List_MapScriptBaseObject__o* MapEditor_MapEditorBrush__BuildPlacements (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4043470

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
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_057043d6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_MapScriptBaseObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057043d6 = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_MapScriptBaseObject__o *)
              il2cpp_runtime_glue(TypeInfo_List_MapScriptBaseObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Map_MapScriptBaseObject);
  __this_02 = (__this->fields)._ghostObjects;
  if (__this_02 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    index = 0;
    if (0 < (__this_02->fields)._size) {
      do {
        x = (UnityEngine_Object_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_GameObject_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          __this_00 = (__this->fields)._ghostAssets;
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0404376b;
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              MethodInfo_String_get_Item);
          entry = MapEditor_MapEditorBrush__FindEntry(__this,pSVar8,method_00);
          __this_03 = (MapEditor_MapEditorBrush_o *)(__this->fields)._ghostAssets;
          if (__this_03 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0404376b;
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_03,index,
                              MethodInfo_String_get_Item);
          script = MapEditor_MapEditorBrush__CloneScript(__this_03,pSVar8,method_01);
          if (script == (Map_MapScriptSceneObject_o *)0x0) goto LAB_04043550;
          pSVar4 = (__this->fields)._ghostScales;
          if (pSVar4 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_0404376b;
          fVar2 = (script->fields).RotationY;
          UVar10 = System_Collections_Generic_List<Vector3>__get_Item(pSVar4,index,MethodInfo_Vector3_get_Item);
          (script->fields).RotationY = UVar10.fields.x * fVar2;
          pSVar4 = (__this->fields)._ghostScales;
          if (pSVar4 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_0404376b;
          fVar2 = (script->fields).RotationZ;
          UVar10 = System_Collections_Generic_List<Vector3>__get_Item(pSVar4,index,MethodInfo_Vector3_get_Item);
          (script->fields).RotationZ = UVar10.fields.y * fVar2;
          pSVar4 = (__this->fields)._ghostScales;
          if (pSVar4 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_0404376b;
          fVar2 = (script->fields).ScaleX;
          UVar10 = System_Collections_Generic_List<Vector3>__get_Item(pSVar4,index,MethodInfo_Vector3_get_Item);
          (script->fields).ScaleX = UVar10.fields.z * fVar2;
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (pUVar9 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0),
             pUVar9 == (UnityEngine_Transform_o *)0x0)) goto LAB_0404376b;
          UVar10 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
          Map_MapScriptBaseObject__SetPosition
                    ((Map_MapScriptBaseObject_o *)script,UVar10,(MethodInfo *)0x0);
          pUVar9 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto LAB_0404376b;
          rotation = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
          Map_MapScriptBaseObject__SetRotation
                    ((Map_MapScriptBaseObject_o *)script,rotation,(MethodInfo *)0x0);
          if (entry != (MapEditor_BrushEntry_o *)0x0) {
            MapEditor_MapEditorBrush__ApplyEntryFields(script,entry,method_02);
          }
          lVar6 = MethodInfo_Void_Add;
          if (__this_01 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)
          goto LAB_0404376b;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar5 = (__this_01->fields)._items;
          if (pMVar5 == (Map_MapScriptBaseObject_array *)0x0) goto LAB_0404376b;
          uVar3 = (__this_01->fields)._size;
          if ((uint)pMVar5->max_length <= uVar3) {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)script
                       ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            goto LAB_04043550;
          }
          (__this_01->fields)._size = uVar3 + 1;
          pMVar5->m_Items[(int)uVar3] = (Map_MapScriptBaseObject_o *)script;
          il2cpp_runtime_glue(pMVar5->m_Items + (int)uVar3,script);
          __this_02 = (__this->fields)._ghostObjects;
        }
        else {
LAB_04043550:
          __this_02 = (__this->fields)._ghostObjects;
        }
        if (__this_02 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_0404376b;
        index = index + 1;
      } while (index < (__this_02->fields)._size);
    }
    return __this_01;
  }
LAB_0404376b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$FindEntry
// il2cpp: MapEditor_BrushEntry_o* MapEditor_MapEditorBrush__FindEntry (MapEditor_MapEditorBrush_o* __this, System_String_o* asset, const MethodInfo* method);
// 0x4042df0

MapEditor_BrushEntry_o *
MapEditor_MapEditorBrush__FindEntry
          (MapEditor_MapEditorBrush_o *__this,System_String_o *asset,MethodInfo *method)

{
  System_Collections_Generic_List_BrushEntry__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  MapEditor_BrushEntry_o *pMVar2;
  int iVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  MapEditor_BrushEntry_o *pMVar6;
  MapEditor_BrushEntry_o *pMVar7;
  
  if (DAT_057043d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BrushEntry_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_MapEditor_BrushEntry__GetEn);
    DAT_057043d7 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pMVar6 = (MapEditor_BrushEntry_o *)0x0;
  __this_00 = (__this->fields).Entries;
  if (__this_00 == (System_Collections_Generic_List_BrushEntry__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_MapEditor_BrushEntry__GetEn);
  do {
    pMVar7 = pMVar6;
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = pSVar4;
    __this_01.fields._current = (Il2CppObject *)pMVar7;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
    if ((char)bVar1 == '\0') {
      iVar3 = 5;
      pMVar2 = (MapEditor_BrushEntry_o *)0x0;
      goto LAB_04042eba;
    }
    if (pMVar7 == (MapEditor_BrushEntry_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar6 = pMVar7;
    bVar1 = System_String__op_Equality((pMVar7->fields).AssetName,asset,(MethodInfo *)0x0);
  } while ((char)bVar1 == '\0');
  iVar3 = 4;
  pMVar2 = pMVar7;
  pMVar7 = pMVar6;
LAB_04042eba:
  __this_02.fields._8_8_ = pIVar5;
  __this_02.fields._list = pSVar4;
  __this_02.fields._current = (Il2CppObject *)pMVar7;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
  pMVar6 = (MapEditor_BrushEntry_o *)0x0;
  if (iVar3 == 4) {
    pMVar6 = pMVar2;
  }
  return pMVar6;
}


// MapEditor.MapEditorBrush$$ApplyEntryFields
// il2cpp: void MapEditor_MapEditorBrush__ApplyEntryFields (Map_MapScriptSceneObject_o* script, MapEditor_BrushEntry_o* entry, const MethodInfo* method);
// 0x4041820

void MapEditor_MapEditorBrush__ApplyEntryFields
               (Map_MapScriptSceneObject_o *script,MapEditor_BrushEntry_o *entry,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  System_String_c *pSVar5;
  bool_conflict bVar6;
  Map_MapScriptReflectiveMaterial_o *__this;
  MethodInfo *extraout_RDX;
  System_String_o **ppSVar7;
  
  if (DAT_057043d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBaseMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptReflectiveMaterial);
    DAT_057043d8 = '\x01';
    method = extraout_RDX;
  }
  if ((entry == (MapEditor_BrushEntry_o *)0x0) || (script == (Map_MapScriptSceneObject_o *)0x0))
  goto LAB_04041c98;
  *(char *)&(script->fields).Active = (char)(entry->fields).Active;
  *(undefined1 *)((long)&(script->fields).Active + 1) =
       *(undefined1 *)((long)&(entry->fields).Active + 1);
  *(undefined1 *)((long)&(script->fields).Active + 2) =
       *(undefined1 *)((long)&(entry->fields).Active + 2);
  uVar3 = *(undefined8 *)&(entry->fields).Visible;
  *(undefined8 *)&(script->fields).ScaleZ = uVar3;
  il2cpp_runtime_glue(&(script->fields).ScaleZ,uVar3,method);
  (script->fields).CollideMode = (entry->fields).CollideMode;
  il2cpp_runtime_glue(&(script->fields).CollideMode);
  (script->fields).CollideWith = (entry->fields).CollideWith;
  il2cpp_runtime_glue(&(script->fields).CollideWith);
  pSVar4 = (script->fields).PhysicsMaterial;
  ppSVar7 = &(script->fields).PhysicsMaterial;
  if ((pSVar4 == (System_String_o *)0x0) ||
     (bVar6 = System_String__op_Inequality
                        ((System_String_o *)pSVar4->fields,(entry->fields).PhysicsMaterial,
                         (MethodInfo *)0x0), (char)bVar6 != '\0')) {
    pSVar4 = (entry->fields).PhysicsMaterial;
    if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = System_String__op_Equality
                      (pSVar4,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      pSVar4 = (entry->fields).PhysicsMaterial;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = System_String__op_Equality
                        (pSVar4,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),
                         (MethodInfo *)0x0);
      if ((char)bVar6 != '\0') goto LAB_0404197d;
      pSVar4 = (entry->fields).PhysicsMaterial;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = System_String__op_Equality
                        (pSVar4,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),
                         (MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pSVar4 = (entry->fields).PhysicsMaterial;
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = System_String__op_Equality
                          (pSVar4,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x18),
                           (MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar4 = (entry->fields).PhysicsMaterial;
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar6 = System_String__op_Equality
                            (pSVar4,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x20),
                             (MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            pSVar4 = (entry->fields).PhysicsMaterial;
            if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar6 = System_String__op_Equality
                              (pSVar4,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x28),
                               (MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              pSVar4 = (entry->fields).PhysicsMaterial;
              if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar6 = Map_MapObjectShader__IsLegacyShader(pSVar4,(MethodInfo *)0x0);
              if ((char)bVar6 == '\0') goto LAB_0404197d;
              __this = (Map_MapScriptReflectiveMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptLegacyMaterial);
              Map_MapScriptLegacyMaterial___ctor
                        ((Map_MapScriptLegacyMaterial_o *)__this,(MethodInfo *)0x0);
            }
            else {
              __this = (Map_MapScriptReflectiveMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptReflectiveMaterial);
              Map_MapScriptReflectiveMaterial___ctor(__this,(MethodInfo *)0x0);
            }
            goto LAB_04041999;
          }
        }
        __this = (Map_MapScriptReflectiveMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
        Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this,(MethodInfo *)0x0);
      }
      else {
        __this = (Map_MapScriptReflectiveMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptDefaultTiledMaterial);
        Map_MapScriptDefaultTiledMaterial___ctor
                  ((Map_MapScriptDefaultTiledMaterial_o *)__this,(MethodInfo *)0x0);
      }
    }
    else {
LAB_0404197d:
      __this = (Map_MapScriptReflectiveMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBaseMaterial);
      Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,(MethodInfo *)0x0);
    }
LAB_04041999:
    *ppSVar7 = (System_String_o *)__this;
    il2cpp_runtime_glue(ppSVar7,__this);
    pSVar4 = *ppSVar7;
    if (pSVar4 == (System_String_o *)0x0) goto LAB_04041c98;
    pSVar4->fields = (System_String_Fields)(entry->fields).PhysicsMaterial;
    il2cpp_runtime_glue(&pSVar4->fields);
  }
  pSVar4 = *ppSVar7;
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar4[1].klass = (System_String_c *)(entry->fields).Shader;
    il2cpp_runtime_glue(pSVar4 + 1);
    pSVar4 = *ppSVar7;
    if (pSVar4 != (System_String_o *)0x0) {
      pSVar5 = pSVar4->klass;
      bVar1 = (pSVar5->_2).naturalAligment;
      bVar2 = (TypeInfo_MapScriptLegacyMaterial->_2).naturalAligment;
      if (((bVar1 < bVar2) || ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapScriptLegacyMaterial)) &&
         ((bVar2 = (TypeInfo_MapScriptDefaultTiledMaterial->_2).naturalAligment, bVar1 < bVar2 ||
          ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapScriptDefaultTiledMaterial)))) {
        bVar2 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
        if ((bVar2 <= bVar1) && ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MapScriptBasicMaterial)) {
          pSVar4[1].monitor = (entry->fields).ReflectColor;
          il2cpp_runtime_glue();
          pSVar4[1].fields = (System_String_Fields)(entry->fields).Texture;
          pSVar4[2].klass = (System_String_c *)(entry->fields).Tiling.fields;
          bVar1 = (TypeInfo_MapScriptReflectiveMaterial->_2).naturalAligment;
          if ((bVar1 <= (pSVar4->klass->_2).naturalAligment) &&
             ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapScriptReflectiveMaterial)) {
            if (pSVar4 != (System_String_o *)0x0) {
              pSVar4[2].monitor = (entry->fields).Color;
              il2cpp_runtime_glue(&pSVar4[2].monitor);
              return;
            }
            goto LAB_04041c98;
          }
        }
      }
      else {
        pSVar4[1].monitor = (entry->fields).Texture;
      }
    }
    return;
  }
LAB_04041c98:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.MapEditorBrush$$.ctor
// il2cpp: void MapEditor_MapEditorBrush___ctor (MapEditor_MapEditorBrush_o* __this, const MethodInfo* method);
// 0x4043790

void MapEditor_MapEditorBrush___ctor(MapEditor_MapEditorBrush_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BrushEntry__o *__this_00;
  System_Collections_Generic_List_GameObject__o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  System_Collections_Generic_List_Vector3__o *pSVar1;
  
  if (DAT_057043d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_MapEditor_BrushEntry);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_List_BrushEntry);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_057043d9 = '\x01';
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
  __this_00 = (System_Collections_Generic_List_BrushEntry__o *)il2cpp_runtime_glue(TypeInfo_List_BrushEntry);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_MapEditor_BrushEntry);
  (__this->fields).Entries = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Entries,__this_00);
  __this_01 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._ghostObjects = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._ghostObjects,__this_01);
  __this_02 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_System_String);
  (__this->fields)._ghostAssets = __this_02;
  il2cpp_runtime_glue(&(__this->fields)._ghostAssets,__this_02);
  pSVar1 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar1,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._ghostScales = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._ghostScales,pSVar1);
  pSVar1 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar1,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._ghostRotations = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._ghostRotations,pSVar1);
  pSVar1 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar1,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._ghostLocalOffsets = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._ghostLocalOffsets);
  (__this->fields)._ghostIdCounter = -100000;
  (__this->fields)._seed = 0x3039;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


