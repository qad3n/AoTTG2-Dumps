// Type: Gisketch.Aottg2UI.Styling.GisketchDropShadow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchDropShadow.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3acb240

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,UnityEngine_Color_o color,
               MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar1;
  UnityEngine_UI_Graphic_o *pUVar2;
  
  if (DAT_05701334 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701334 = '\x01';
  }
  (__this->fields)._color.fields.r = color.fields.r;
  (__this->fields)._color.fields.g = color.fields.g;
  (__this->fields)._color.fields.b = color.fields.b;
  (__this->fields)._color.fields.a = color.fields.a;
  *(undefined1 *)&(__this->fields)._solid = 0;
  pUVar2 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pUVar2 = UnityEngine_UI_BaseMeshEffect__get_graphic
                       ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_UI_Graphic_o *)0x0) {
      vtable_dispatch = (pUVar2->klass->vtable)._28_SetVerticesDirty.methodPtr;
      (*vtable_dispatch)
                (pUVar2,(pUVar2->klass->vtable)._28_SetVerticesDirty.method,vtable_dispatch);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_Color_o color, UnityEngine_Vector2_o offset, int32_t layers, float grain, bool solid, const MethodInfo* method);
// 0x3acb300

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,UnityEngine_Color_o color,
               UnityEngine_Vector2_o offset,int32_t layers,float grain,bool_conflict solid,
               MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar1;
  bool_conflict bVar2;
  UnityEngine_UI_Graphic_o *pUVar3;
  float fVar4;
  
  if (DAT_05701335 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701335 = '\x01';
  }
  (__this->fields)._color.fields.r = color.fields.r;
  (__this->fields)._color.fields.g = color.fields.g;
  (__this->fields)._color.fields.b = color.fields.b;
  (__this->fields)._color.fields.a = color.fields.a;
  (__this->fields)._offset.fields = offset.fields;
  iVar1 = 1;
  if (0 < layers) {
    iVar1 = layers;
  }
  (__this->fields)._layers = iVar1;
  fVar4 = 0.0;
  if (0.0 <= grain) {
    fVar4 = grain;
  }
  (__this->fields)._grain = fVar4;
  *(char *)&(__this->fields)._solid = (char)solid;
  pUVar3 = UnityEngine_UI_BaseMeshEffect__get_graphic
                     ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar3 = UnityEngine_UI_BaseMeshEffect__get_graphic
                       ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_Graphic_o *)0x0) {
      vtable_dispatch = (pUVar3->klass->vtable)._28_SetVerticesDirty.methodPtr;
      (*vtable_dispatch)
                (pUVar3,(pUVar3->klass->vtable)._28_SetVerticesDirty.method,vtable_dispatch);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$ModifyMesh
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__ModifyMesh (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
// 0x3acb3f0

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__ModifyMesh
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,
               UnityEngine_UI_VertexHelper_o *vh,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int32_t iVar4;
  System_Collections_Generic_List_UIVertex__o *__this_00;
  System_Collections_Generic_List_UIVertex__o *__this_01;
  MethodInfo *extraout_RDX;
  int iVar5;
  MethodInfo *in_R8;
  
  if (DAT_05701336 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_UIVertex);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_UIVertex);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_UIVertex);
    DAT_05701336 = '\x01';
    method = extraout_RDX;
  }
  cVar3 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                    (__this,(__this->klass->vtable)._9_IsActive.method,method);
  if (cVar3 == '\0') {
    return;
  }
  if (vh != (UnityEngine_UI_VertexHelper_o *)0x0) {
    iVar4 = UnityEngine_UI_VertexHelper__get_currentVertCount(vh,(MethodInfo *)0x0);
    if (iVar4 == 0) {
      return;
    }
    __this_00 = (System_Collections_Generic_List_UIVertex__o *)il2cpp_runtime_glue(TypeInfo_List_UIVertex);
    System_Collections_Generic_List<UIVertex>___ctor(__this_00,MethodInfo_List_1_UnityEngine_UIVertex);
    UnityEngine_UI_VertexHelper__GetUIVertexStream(vh,__this_00,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
      iVar5 = (__this->fields)._layers;
      iVar1 = (__this_00->fields)._size;
      __this_01 = (System_Collections_Generic_List_UIVertex__o *)il2cpp_runtime_glue(TypeInfo_List_UIVertex);
      System_Collections_Generic_List<UIVertex>___ctor(__this_01,(iVar5 + 1) * iVar1,MethodInfo_List_1_UnityEngine_UIVertex);
      iVar5 = (__this->fields)._layers;
      if (0 < iVar5) {
        do {
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer
                    (__this,__this_00,__this_01,iVar5,in_R8);
          bVar2 = 1 < iVar5;
          iVar5 = iVar5 + -1;
        } while (bVar2);
      }
      if (__this_01 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
        System_Collections_Generic_List<UIVertex>__AddRange
                  (__this_01,(System_Collections_Generic_IEnumerable_T__o *)__this_00,MethodInfo_Void_AddRange);
        UnityEngine_UI_VertexHelper__Clear(vh,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(vh,__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$AddLayer
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, System_Collections_Generic_List_UIVertex__o* source, System_Collections_Generic_List_UIVertex__o* output, int32_t layer, const MethodInfo* method);
// 0x3acb570

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,
               System_Collections_Generic_List_UIVertex__o *source,
               System_Collections_Generic_List_UIVertex__o *output,int32_t layer,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 *puVar2;
  UnityEngine_Vector3_o *pUVar3;
  undefined4 uVar4;
  UnityEngine_Vector2_Fields UVar5;
  uint uVar6;
  UnityEngine_UIVertex_array *pUVar7;
  undefined4 uVar8;
  UnityEngine_UIVertex_o item;
  undefined8 uVar9;
  UnityEngine_Vector3_Fields *pUVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int32_t iVar13;
  long lVar14;
  long lVar15;
  int index;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_stack_fffffffffffffe24;
  UnityEngine_UIVertex_o local_198;
  undefined4 local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [20];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (DAT_05701337 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_UIVertex_get_Item);
    DAT_05701337 = '\x01';
  }
  local_128._0_1_ = '\0';
  local_128._1_1_ = '\0';
  local_128._2_1_ = '\0';
  local_128._3_1_ = '\0';
  fStack_124 = 0.0;
  fStack_120 = 0.0;
  fStack_11c = 0.0;
  local_118 = 0.0;
  fStack_114 = 0.0;
  fStack_110 = 0.0;
  fStack_10c = 0.0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0.0;
  fStack_f4 = 0.0;
  fStack_f0 = 0.0;
  fStack_ec = 0.0;
  fVar16 = (float)layer;
  fVar19 = (float)(__this->fields)._layers;
  fVar17 = fVar16 / fVar19;
  UVar5 = (__this->fields)._offset.fields;
  fVar18 = UVar5.y;
  fVar20 = (__this->fields)._color.fields.a;
  if ((char)(__this->fields)._solid == '\0') {
    fVar20 = (fVar20 * (fVar17 * -0.55 + 1.1)) / fVar19;
  }
  local_a8 = ZEXT416((uint)fVar20);
  if (source != (System_Collections_Generic_List_UIVertex__o *)0x0) {
    if (0 < (source->fields)._size) {
      local_b8 = CONCAT44(fVar18,UVar5.x * fVar17);
      uStack_b0 = 0;
      local_c8 = CONCAT44(fVar18,fVar18 * fVar17);
      uStack_c0 = 0;
      index = 0;
      do {
        while( true ) {
          System_Collections_Generic_List<UIVertex>__get_Item(&local_198,source,index,MethodInfo_UIVertex_get_Item);
          uVar11 = local_198.fields.tangent.fields._8_8_;
          fVar17 = local_198.fields.position.fields.z;
          fVar20 = local_198.fields.position.fields.y;
          uVar9 = CONCAT44(local_198.fields.normal.fields.y,local_198.fields.normal.fields.x);
          local_128._0_1_ = local_198.fields.color.fields.r;
          local_128._1_1_ = local_198.fields.color.fields.g;
          local_128._2_1_ = local_198.fields.color.fields.b;
          local_128._3_1_ = local_198.fields.color.fields.a;
          fStack_124 = local_198.fields.uv0.fields.x;
          fStack_120 = local_198.fields.uv0.fields.y;
          fStack_11c = local_198.fields.uv0.fields.z;
          local_118 = local_198.fields.uv0.fields.w;
          fStack_114 = local_198.fields.uv1.fields.x;
          fStack_110 = local_198.fields.uv1.fields.y;
          fStack_10c = local_198.fields.uv1.fields.z;
          local_108 = CONCAT44(local_198.fields.uv2.fields.x,local_198.fields.uv1.fields.w);
          uStack_100 = CONCAT44(local_198.fields.uv2.fields.z,local_198.fields.uv2.fields.y);
          local_f8 = local_198.fields.uv2.fields.w;
          fStack_f4 = local_198.fields.uv3.fields.x;
          fStack_f0 = local_198.fields.uv3.fields.y;
          fStack_ec = local_198.fields.uv3.fields.z;
          local_88._0_4_ = local_198.fields.position.fields.x;
          local_88._4_4_ = local_198.fields.position.fields.y;
          local_88._8_8_ = 0;
          local_98 = CONCAT44(fVar20,fVar20);
          uStack_90 = 0;
          fVar19 = sinf(fVar20 * 78.233 + local_198.fields.position.fields.x * 12.9898 +
                        fVar16 * 37.719);
          fVar20 = (__this->fields)._grain;
          uVar4 = (__this->fields)._color.fields.r;
          iVar13 = il2cpp_glue_03ad8d60(uVar4,(__this->fields)._color.fields.b,0);
          uVar12 = local_198.fields.tangent.fields._8_8_;
          fStack_e0 = local_198.fields.normal.fields.z;
          fStack_dc = local_198.fields.tangent.fields.x;
          fStack_d8 = local_198.fields.tangent.fields.y;
          local_198.fields.tangent.fields.z = (float)uVar11;
          local_198.fields.tangent.fields.w = SUB84(uVar11,4);
          fStack_d4 = local_198.fields.tangent.fields.z;
          fStack_d0 = local_198.fields.tangent.fields.w;
          local_88[0x10] = (uint8_t)local_128;
          local_88[0x11] = local_128._1_1_;
          local_88[0x12] = local_128._2_1_;
          local_88[0x13] = local_128._3_1_;
          fStack_74 = fStack_124;
          fStack_70 = fStack_120;
          fStack_6c = fStack_11c;
          local_68 = local_118;
          fStack_64 = fStack_114;
          fStack_60 = fStack_110;
          fStack_5c = fStack_10c;
          local_58 = local_108;
          uStack_50 = uStack_100;
          local_48 = local_f8;
          fStack_44 = fStack_f4;
          fStack_40 = fStack_f0;
          fStack_3c = fStack_ec;
          local_198.fields.tangent.fields._8_8_ = uVar12;
          local_e8 = uVar9;
          if (output == (System_Collections_Generic_List_UIVertex__o *)0x0) goto LAB_03acba11;
          fVar18 = floorf(fVar19 * 43758.547);
          lVar14 = MethodInfo_Void_Add;
          fVar19 = fVar20 * ((fVar19 * 43758.547 - fVar18) + -0.5) * fVar16;
          fVar20 = (float)local_b8 + fVar19 + (float)local_88._0_4_;
          fVar19 = ((float)local_c8 - fVar19) + (float)local_98;
          local_198.fields.position.fields.z = fVar17 + 0.0;
          local_198.fields.position.fields.y = fVar19;
          local_198.fields.position.fields.x = fVar20;
          uVar9._0_4_ = fStack_d4;
          uVar9._4_4_ = fStack_d0;
          local_198.fields.tangent.fields.y = fStack_d8;
          local_198.fields.tangent.fields.z = fStack_d4;
          local_198.fields.tangent.fields.w = fStack_d0;
          local_198.fields.normal.fields.x = (float)local_e8;
          local_198.fields.normal.fields.y = (float)((ulong)local_e8 >> 0x20);
          local_198.fields.normal.fields.z = fStack_e0;
          local_198.fields.tangent.fields.x = fStack_dc;
          uVar8._0_1_ = local_88[0x10];
          uVar8._1_1_ = local_88[0x11];
          uVar8._2_1_ = local_88[0x12];
          uVar8._3_1_ = local_88[0x13];
          local_198.fields.uv0.fields.x = fStack_74;
          local_198.fields.uv0.fields.y = fStack_70;
          local_198.fields.uv0.fields.z = fStack_6c;
          local_198.fields.uv0.fields.w = local_68;
          local_198.fields.uv1.fields.x = fStack_64;
          local_198.fields.uv1.fields.y = fStack_60;
          local_198.fields.uv1.fields.z = fStack_5c;
          local_198.fields.uv2.fields.w = local_48;
          local_198.fields.uv3.fields.x = fStack_44;
          local_198.fields.uv3.fields.y = fStack_40;
          local_198.fields.uv3.fields.z = fStack_3c;
          local_198.fields.uv1.fields.w = (float)local_58;
          local_198.fields.uv2.fields.x = (float)((ulong)local_58 >> 0x20);
          local_198.fields.uv2.fields.y = (float)uStack_50;
          local_198.fields.uv2.fields.z = (float)((ulong)uStack_50 >> 0x20);
          local_198.fields.color.fields.r = local_88[0x10];
          local_198.fields.color.fields.g = local_88[0x11];
          local_198.fields.color.fields.b = local_88[0x12];
          local_198.fields.color.fields.a = local_88[0x13];
          piVar1 = &(output->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (output->fields)._items;
          local_198.fields.color.fields.rgba = iVar13;
          if (pUVar7 == (UnityEngine_UIVertex_array *)0x0) goto LAB_03acba11;
          uVar6 = (output->fields)._size;
          lVar15 = (long)(int)uVar6;
          local_198.fields.color.fields._4_4_ = uVar8;
          if ((uint)pUVar7->max_length <= uVar6) break;
          (output->fields)._size = uVar6 + 1;
          lVar14 = lVar15 * 0x6c;
          puVar2 = (undefined8 *)((long)&pUVar7->m_Items[0].fields.uv2 + lVar14 + 0xc);
          *puVar2 = CONCAT44(fStack_44,local_48);
          puVar2[1] = CONCAT44(fStack_3c,fStack_40);
          puVar2 = (undefined8 *)((long)&pUVar7->m_Items[0].fields.uv2 + lVar14);
          *puVar2 = CONCAT44(local_198.fields.uv2.fields.y,local_198.fields.uv2.fields.x);
          puVar2[1] = CONCAT44(local_48,local_198.fields.uv2.fields.z);
          puVar2 = (undefined8 *)((long)&pUVar7->m_Items[0].fields.uv1 + lVar14);
          *puVar2 = CONCAT44(fStack_60,fStack_64);
          puVar2[1] = CONCAT44(local_198.fields.uv1.fields.w,fStack_5c);
          puVar2 = (undefined8 *)((long)&pUVar7->m_Items[0].fields.uv0 + lVar14);
          *puVar2 = CONCAT44(fStack_70,fStack_74);
          puVar2[1] = CONCAT44(local_68,fStack_6c);
          puVar2 = (undefined8 *)((long)&pUVar7->m_Items[0].fields.tangent + lVar14 + 8);
          *puVar2 = _fStack_d4;
          puVar2[1] = CONCAT44(local_88._16_4_,iVar13);
          pUVar10 = &(&pUVar7->m_Items[0].fields.normal)[lVar15 * 9].fields;
          pUVar10->y = local_198.fields.normal.fields.y;
          pUVar10->z = fStack_e0;
          *(ulong *)(pUVar10 + 1) = CONCAT44(fStack_d8,fStack_dc);
          pUVar3 = &pUVar7->m_Items[0].fields.position + lVar15 * 9;
          (pUVar3->fields).x = fVar20;
          (pUVar3->fields).y = fVar19;
          *(ulong *)&(pUVar3->fields).z =
               CONCAT44(local_198.fields.normal.fields.x,local_198.fields.position.fields.z);
          index = index + 1;
          local_198.fields.tangent.fields._8_8_ = uVar9;
          if ((source->fields)._size <= index) {
            return;
          }
        }
        item.fields.uv3.fields.z = fStack_3c;
        item.fields.uv3.fields.y = fStack_40;
        item.fields.uv2.fields.y = local_198.fields.uv2.fields.y;
        item.fields.uv2.fields.x = local_198.fields.uv2.fields.x;
        item.fields.uv1.fields.y = fStack_60;
        item.fields.uv1.fields.x = fStack_64;
        item.fields.uv1.fields.w = local_198.fields.uv1.fields.w;
        item.fields.uv1.fields.z = fStack_5c;
        item.fields.normal.fields.x = local_198.fields.normal.fields.x;
        item.fields.position.fields.z = local_198.fields.position.fields.z;
        item.fields.normal.fields.z = fStack_e0;
        item.fields.normal.fields.y = local_198.fields.normal.fields.y;
        item.fields.tangent.fields.y = fStack_d8;
        item.fields.tangent.fields.x = fStack_dc;
        item.fields.color.fields.r = local_88[0x10];
        item.fields.color.fields.g = local_88[0x11];
        item.fields.color.fields.b = local_88[0x12];
        item.fields.color.fields.a = local_88[0x13];
        item.fields.color.fields.rgba = iVar13;
        item.fields.uv0.fields.y = fStack_70;
        item.fields.uv0.fields.x = fStack_74;
        item.fields.uv0.fields.w = local_68;
        item.fields.uv0.fields.z = fStack_6c;
        item.fields.position.fields.x = fVar20;
        item.fields.position.fields.y = fVar19;
        item.fields.tangent.fields.z = fStack_d4;
        item.fields.tangent.fields.w = fStack_d0;
        item.fields.uv2.fields.z = local_198.fields.uv2.fields.z;
        item.fields.uv2.fields.w = local_48;
        item.fields.uv3.fields.x = fStack_44;
        item.fields.uv3.fields.w = in_stack_fffffffffffffe24;
        local_198.fields.tangent.fields._8_8_ = uVar9;
        System_Collections_Generic_List<UIVertex>__AddWithResize
                  (output,item,
                   *(MethodInfo_360D010 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        index = index + 1;
      } while (index < (source->fields)._size);
    }
    return;
  }
LAB_03acba11:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Hash
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchDropShadow__Hash (UnityEngine_Vector3_o position, int32_t layer, const MethodInfo* method);
// 0x3acba20

float Gisketch_Aottg2UI_Styling_GisketchDropShadow__Hash
                (UnityEngine_Vector3_o position,int32_t layer,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = sinf(position.fields.y * 78.233 + position.fields.x * 12.9898 + (float)layer * 37.719);
  fVar2 = floorf(fVar1 * 43758.547);
  return fVar1 * 43758.547 - fVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow___ctor (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, const MethodInfo* method);
// 0x3acba70

void Gisketch_Aottg2UI_Styling_GisketchDropShadow___ctor
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,MethodInfo *method)

{
  (__this->fields)._color.fields.r = 0.0;
  (__this->fields)._color.fields.g = 0.0;
  (__this->fields)._color.fields.b = 0.0;
  (__this->fields)._color.fields.a = 0.32;
  (__this->fields)._offset.fields = (UnityEngine_Vector2_Fields)0xc0e00000c0e00000;
  (__this->fields)._layers = 5;
  (__this->fields)._grain = 1.25;
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


