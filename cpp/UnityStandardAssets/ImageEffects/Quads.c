// Type: UnityStandardAssets.ImageEffects.Quads
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Quads.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Quads.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.Quads$$HasMeshes
// il2cpp: bool UnityStandardAssets_ImageEffects_Quads__HasMeshes (const MethodInfo* method);
// 0x4260c10

bool_conflict UnityStandardAssets_ImageEffects_Quads__HasMeshes(MethodInfo *method)

{
  long lVar1;
  UnityEngine_Object_o *y;
  bool_conflict bVar2;
  ulong uVar3;
  ulong uVar4;
  bool_conflict bVar5;
  undefined8 unaff_R14;
  
  if (DAT_05705275 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Quads);
    DAT_05705275 = '\x01';
  }
  lVar1 = **(long **)(TypeInfo_Quads + 0xb8);
  if (lVar1 == 0) {
LAB_04260cb0:
    bVar5 = 0;
  }
  else {
    bVar5 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar3 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      uVar4 = 0;
      do {
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        y = *(UnityEngine_Object_o **)(lVar1 + 0x20 + uVar4 * 8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)0x0,y,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') goto LAB_04260cb0;
        uVar4 = uVar4 + 1;
        uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
  }
  return bVar5;
}


// UnityStandardAssets.ImageEffects.Quads$$Cleanup
// il2cpp: void UnityStandardAssets_ImageEffects_Quads__Cleanup (const MethodInfo* method);
// 0x4260cd0

void UnityStandardAssets_ImageEffects_Quads__Cleanup(MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (DAT_05705276 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Quads);
    DAT_05705276 = '\x01';
  }
  plVar4 = *(long **)(TypeInfo_Quads + 0xb8);
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    return;
  }
  if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
    uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    uVar6 = 0;
    do {
      if (uVar5 <= uVar6) goto LAB_04260e3b;
      pUVar1 = *(UnityEngine_Object_o **)(lVar3 + 0x20 + uVar6 * 8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)0x0,pUVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        lVar3 = **(long **)(TypeInfo_Quads + 0xb8);
        if (lVar3 == 0) goto LAB_04260e40;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_04260e3b:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar1 = *(UnityEngine_Object_o **)(lVar3 + 0x20 + uVar6 * 8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
        lVar3 = **(long **)(TypeInfo_Quads + 0xb8);
        if (lVar3 == 0) goto LAB_04260e40;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_04260e3b;
        *(undefined8 *)(lVar3 + 0x20 + uVar6 * 8) = 0;
        il2cpp_runtime_glue(lVar3 + uVar6 * 8 + 0x20,0);
      }
      plVar4 = *(long **)(TypeInfo_Quads + 0xb8);
      lVar3 = *plVar4;
      if (lVar3 == 0) {
LAB_04260e40:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar6 = uVar6 + 1;
      uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  *plVar4 = 0;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Quads + 0xb8),0);
  return;
}


// UnityStandardAssets.ImageEffects.Quads$$GetMeshes
// il2cpp: UnityEngine_Mesh_array* UnityStandardAssets_ImageEffects_Quads__GetMeshes (int32_t totalWidth, int32_t totalHeight, const MethodInfo* method);
// 0x4260e50

UnityEngine_Mesh_array *
UnityStandardAssets_ImageEffects_Quads__GetMeshes
          (int32_t totalWidth,int32_t totalHeight,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  UnityEngine_Mesh_o *pUVar4;
  undefined8 *puVar5;
  int triOffset;
  int iVar6;
  undefined4 in_register_0000003c;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_0000003c,totalWidth);
  if (DAT_05705277 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mesh);
    method_00 = (MethodInfo *)&TypeInfo_Quads;
    il2cpp_init_method_metadata();
    DAT_05705277 = '\x01';
  }
  bVar2 = UnityStandardAssets_ImageEffects_Quads__HasMeshes(method_00);
  puVar5 = *(undefined8 **)(TypeInfo_Quads + 0xb8);
  if ((char)bVar2 == '\0') {
    *(int32_t *)(puVar5 + 1) = totalHeight * totalWidth;
  }
  else {
    if (*(int *)(puVar5 + 1) == totalHeight * totalWidth) goto LAB_0426103f;
    *(int32_t *)(puVar5 + 1) = totalHeight * totalWidth;
  }
  if (DAT_056fdee8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdee8 = '\x01';
  }
  iVar7 = totalHeight * totalWidth;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar10 = ceilf((float)(totalHeight * totalWidth) / 10833.0);
  uVar3 = il2cpp_glue_02274930(TypeInfo_Mesh,(int)fVar10);
  **(undefined8 **)(TypeInfo_Quads + 0xb8) = uVar3;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Quads + 0xb8),uVar3);
  if (0 < iVar7) {
    triOffset = 0;
    uVar8 = 0;
    iVar9 = iVar7;
    do {
      iVar6 = 0x2a51;
      if (iVar9 < 0x2a52) {
        iVar6 = iVar9;
      }
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      if (DAT_056fdee5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdee5 = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = **(long **)(TypeInfo_Quads + 0xb8);
      pUVar4 = UnityStandardAssets_ImageEffects_Quads__GetMesh
                         ((int)(float)iVar6,triOffset,totalWidth,totalHeight,in_R8);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(uint *)(lVar1 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(UnityEngine_Mesh_o **)(lVar1 + 0x20 + (long)(int)uVar8 * 8) = pUVar4;
      il2cpp_runtime_glue(lVar1 + (long)(int)uVar8 * 8 + 0x20,pUVar4);
      uVar8 = uVar8 + 1;
      triOffset = triOffset + 0x2a51;
      iVar9 = iVar9 + -0x2a51;
    } while (triOffset < iVar7);
  }
  puVar5 = *(undefined8 **)(TypeInfo_Quads + 0xb8);
LAB_0426103f:
  return (UnityEngine_Mesh_array *)*puVar5;
}


// UnityStandardAssets.ImageEffects.Quads$$GetMesh
// il2cpp: UnityEngine_Mesh_o* UnityStandardAssets_ImageEffects_Quads__GetMesh (int32_t triCount, int32_t triOffset, int32_t totalWidth, int32_t totalHeight, const MethodInfo* method);
// 0x42610a0

UnityEngine_Mesh_o *
UnityStandardAssets_ImageEffects_Quads__GetMesh
          (int32_t triCount,int32_t triOffset,int32_t totalWidth,int32_t totalHeight,
          MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Object_o *__this;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector2_array *value_00;
  UnityEngine_Vector2_array *value_01;
  System_Int32_array *value_02;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar8 = (ulong)(uint)triCount;
  if (DAT_05705278 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_Mesh);
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05705278 = '\x01';
  }
  __this = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Mesh);
  UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(__this,0x34,(MethodInfo *)0x0);
    iVar7 = triCount * 4;
    value = (UnityEngine_Vector3_array *)il2cpp_glue_02274930(TypeInfo_Vector3,iVar7);
    value_00 = (UnityEngine_Vector2_array *)il2cpp_glue_02274930(TypeInfo_Vector2,iVar7);
    value_01 = (UnityEngine_Vector2_array *)il2cpp_glue_02274930(TypeInfo_Vector2,iVar7);
    value_02 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,triCount * 6);
    if (0 < triCount) {
      if (value == (UnityEngine_Vector3_array *)0x0) goto LAB_04261433;
      uVar11 = 5;
      uVar9 = 3;
      do {
        uVar10 = uVar9 - 3;
        if ((uint)value->max_length <= uVar10) {
LAB_0426142e:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar14 = (float)(triOffset % totalWidth) / (float)totalWidth;
        fVar15 = (float)(triOffset / totalWidth) / (float)totalHeight;
        fVar16 = fVar14 + fVar14 + -1.0;
        fVar13 = fVar15 + fVar15 + -1.0;
        value->m_Items[(int)uVar10].fields.x = fVar16;
        value->m_Items[(int)uVar10].fields.y = fVar13;
        value->m_Items[(int)uVar10].fields.z = 1.0;
        uVar12 = uVar9 - 2;
        if ((uint)value->max_length <= uVar12) goto LAB_0426142e;
        value->m_Items[(int)uVar12].fields.x = fVar16;
        value->m_Items[(int)uVar12].fields.y = fVar13;
        value->m_Items[(int)uVar12].fields.z = 1.0;
        uVar6 = uVar9 - 1;
        if ((uint)value->max_length <= uVar6) goto LAB_0426142e;
        value->m_Items[(int)uVar6].fields.x = fVar16;
        value->m_Items[(int)uVar6].fields.y = fVar13;
        value->m_Items[(int)uVar6].fields.z = 1.0;
        if ((uint)value->max_length <= uVar9) goto LAB_0426142e;
        value->m_Items[(int)uVar9].fields.x = fVar16;
        value->m_Items[(int)uVar9].fields.y = fVar13;
        value->m_Items[(int)uVar9].fields.z = 1.0;
        if (value_00 == (UnityEngine_Vector2_array *)0x0) goto LAB_04261433;
        if (((((uint)value_00->max_length <= uVar10) ||
             (value_00->m_Items[(int)uVar10].fields.x = 0.0,
             value_00->m_Items[(int)uVar10].fields.y = 0.0, (uint)value_00->max_length <= uVar12))
            || (value_00->m_Items[(int)uVar12].fields.x = 1.0,
               value_00->m_Items[(int)uVar12].fields.y = 0.0, (uint)value_00->max_length <= uVar6))
           || (value_00->m_Items[(int)uVar6].fields.x = 0.0,
              value_00->m_Items[(int)uVar6].fields.y = 1.0, (uint)value_00->max_length <= uVar9))
        goto LAB_0426142e;
        value_00->m_Items[(int)uVar9].fields.x = 1.0;
        value_00->m_Items[(int)uVar9].fields.y = 1.0;
        if (value_01 == (UnityEngine_Vector2_array *)0x0) goto LAB_04261433;
        if ((((uint)value_01->max_length <= uVar10) ||
            (UVar2.fields.y = fVar15, UVar2.fields.x = fVar14,
            value_01->m_Items[(int)uVar10].fields = UVar2.fields,
            (uint)value_01->max_length <= uVar12)) ||
           ((UVar3.fields.y = fVar15, UVar3.fields.x = fVar14,
            value_01->m_Items[(int)uVar12].fields = UVar3.fields,
            (uint)value_01->max_length <= uVar6 ||
            (UVar4.fields.y = fVar15, UVar4.fields.x = fVar14,
            value_01->m_Items[(int)uVar6].fields = UVar4.fields, (uint)value_01->max_length <= uVar9
            )))) goto LAB_0426142e;
        UVar5.fields.y = fVar15;
        UVar5.fields.x = fVar14;
        value_01->m_Items[(int)uVar9].fields = UVar5.fields;
        if (value_02 == (System_Int32_array *)0x0) goto LAB_04261433;
        uVar1 = (uint)value_02->max_length;
        if (uVar1 <= uVar11 - 5) goto LAB_0426142e;
        value_02->m_Items[(int)(uVar11 - 5)] = uVar10;
        if (uVar1 <= uVar11 - 4) goto LAB_0426142e;
        value_02->m_Items[(int)(uVar11 - 4)] = uVar12;
        if (uVar1 <= uVar11 - 3) goto LAB_0426142e;
        value_02->m_Items[(int)(uVar11 - 3)] = uVar6;
        if (uVar1 <= uVar11 - 2) goto LAB_0426142e;
        value_02->m_Items[(int)(uVar11 - 2)] = uVar12;
        if (uVar1 <= uVar11 - 1) goto LAB_0426142e;
        value_02->m_Items[(int)(uVar11 - 1)] = uVar6;
        if (uVar1 <= uVar11) goto LAB_0426142e;
        value_02->m_Items[(int)uVar11] = uVar9;
        triOffset = triOffset + 1;
        uVar11 = uVar11 + 6;
        uVar9 = uVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)__this,value,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)__this,value_02,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)__this,value_00,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv2((UnityEngine_Mesh_o *)__this,value_01,(MethodInfo *)0x0);
    return (UnityEngine_Mesh_o *)__this;
  }
LAB_04261433:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Quads$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Quads___ctor (UnityStandardAssets_ImageEffects_Quads_o* __this, const MethodInfo* method);
// 0x4261440

void UnityStandardAssets_ImageEffects_Quads___ctor
               (UnityStandardAssets_ImageEffects_Quads_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


