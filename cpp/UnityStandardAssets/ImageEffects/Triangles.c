// Type: UnityStandardAssets.ImageEffects.Triangles
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Triangles.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Triangles.cs  [prior source available (delta unverified)]
// --------------------------------

// UnityStandardAssets.ImageEffects.Triangles$$HasMeshes
// il2cpp: bool UnityStandardAssets_ImageEffects_Triangles__HasMeshes (const MethodInfo* method);
// 0x4264870

bool_conflict UnityStandardAssets_ImageEffects_Triangles__HasMeshes(MethodInfo *method)

{
  UnityEngine_Object_o *y;
  bool_conflict bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_R12;
  
  if (DAT_0570528c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Triangles);
    DAT_0570528c = '\x01';
  }
  lVar2 = **(long **)(TypeInfo_Triangles + 0xb8);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    uVar3 = 0;
    while ((long)uVar3 < (long)(int)*(uint *)(lVar2 + 0x18)) {
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      y = *(UnityEngine_Object_o **)(lVar2 + 0x20 + uVar3 * 8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      unaff_R12 = 0;
      bVar1 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)0x0,y,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return 0;
      }
      uVar3 = uVar3 + 1;
      lVar2 = **(long **)(TypeInfo_Triangles + 0xb8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    bVar1 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
  }
  return bVar1;
}


// UnityStandardAssets.ImageEffects.Triangles$$Cleanup
// il2cpp: void UnityStandardAssets_ImageEffects_Triangles__Cleanup (const MethodInfo* method);
// 0x4264940

void UnityStandardAssets_ImageEffects_Triangles__Cleanup(MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (DAT_0570528d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Triangles);
    DAT_0570528d = '\x01';
  }
  plVar4 = *(long **)(TypeInfo_Triangles + 0xb8);
  lVar3 = *plVar4;
  if (lVar3 == 0) {
    return;
  }
  if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
    uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    uVar6 = 0;
    do {
      if (uVar5 <= uVar6) goto LAB_04264aab;
      pUVar1 = *(UnityEngine_Object_o **)(lVar3 + 0x20 + uVar6 * 8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)0x0,pUVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        lVar3 = **(long **)(TypeInfo_Triangles + 0xb8);
        if (lVar3 == 0) goto LAB_04264ab0;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_04264aab:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar1 = *(UnityEngine_Object_o **)(lVar3 + 0x20 + uVar6 * 8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
        lVar3 = **(long **)(TypeInfo_Triangles + 0xb8);
        if (lVar3 == 0) goto LAB_04264ab0;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_04264aab;
        *(undefined8 *)(lVar3 + 0x20 + uVar6 * 8) = 0;
        il2cpp_runtime_glue(lVar3 + uVar6 * 8 + 0x20,0);
      }
      plVar4 = *(long **)(TypeInfo_Triangles + 0xb8);
      lVar3 = *plVar4;
      if (lVar3 == 0) {
LAB_04264ab0:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar6 = uVar6 + 1;
      uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  *plVar4 = 0;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Triangles + 0xb8),0);
  return;
}


// UnityStandardAssets.ImageEffects.Triangles$$GetMeshes
// il2cpp: UnityEngine_Mesh_array* UnityStandardAssets_ImageEffects_Triangles__GetMeshes (int32_t totalWidth, int32_t totalHeight, const MethodInfo* method);
// 0x4264ac0

UnityEngine_Mesh_array *
UnityStandardAssets_ImageEffects_Triangles__GetMeshes
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
  if (DAT_0570528e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Mesh);
    method_00 = (MethodInfo *)&TypeInfo_Triangles;
    il2cpp_init_method_metadata();
    DAT_0570528e = '\x01';
  }
  bVar2 = UnityStandardAssets_ImageEffects_Triangles__HasMeshes(method_00);
  puVar5 = *(undefined8 **)(TypeInfo_Triangles + 0xb8);
  if ((char)bVar2 == '\0') {
    *(int32_t *)(puVar5 + 1) = totalHeight * totalWidth;
  }
  else {
    if (*(int *)(puVar5 + 1) == totalHeight * totalWidth) goto LAB_04264caf;
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
  fVar10 = ceilf((float)(totalHeight * totalWidth) / 21666.0);
  uVar3 = il2cpp_glue_02274930(TypeInfo_Mesh,(int)fVar10);
  **(undefined8 **)(TypeInfo_Triangles + 0xb8) = uVar3;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Triangles + 0xb8),uVar3);
  if (0 < iVar7) {
    triOffset = 0;
    uVar8 = 0;
    iVar9 = iVar7;
    do {
      iVar6 = 0x54a2;
      if (iVar9 < 0x54a3) {
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
      lVar1 = **(long **)(TypeInfo_Triangles + 0xb8);
      pUVar4 = UnityStandardAssets_ImageEffects_Triangles__GetMesh
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
      triOffset = triOffset + 0x54a2;
      iVar9 = iVar9 + -0x54a2;
    } while (triOffset < iVar7);
  }
  puVar5 = *(undefined8 **)(TypeInfo_Triangles + 0xb8);
LAB_04264caf:
  return (UnityEngine_Mesh_array *)*puVar5;
}


// UnityStandardAssets.ImageEffects.Triangles$$GetMesh
// il2cpp: UnityEngine_Mesh_o* UnityStandardAssets_ImageEffects_Triangles__GetMesh (int32_t triCount, int32_t triOffset, int32_t totalWidth, int32_t totalHeight, const MethodInfo* method);
// 0x4264d10

UnityEngine_Mesh_o *
UnityStandardAssets_ImageEffects_Triangles__GetMesh
          (int32_t triCount,int32_t triOffset,int32_t totalWidth,int32_t totalHeight,
          MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  int iVar5;
  UnityEngine_Object_o *__this;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector2_array *value_00;
  UnityEngine_Vector2_array *value_01;
  System_Int32_array *value_02;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar9 = (ulong)(uint)triCount;
  if (DAT_0570528f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_Mesh);
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570528f = '\x01';
  }
  __this = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Mesh);
  UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(__this,0x34,(MethodInfo *)0x0);
    iVar5 = triCount * 3;
    value = (UnityEngine_Vector3_array *)il2cpp_glue_02274930(TypeInfo_Vector3,iVar5);
    value_00 = (UnityEngine_Vector2_array *)il2cpp_glue_02274930(TypeInfo_Vector2,iVar5);
    value_01 = (UnityEngine_Vector2_array *)il2cpp_glue_02274930(TypeInfo_Vector2,iVar5);
    value_02 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int,iVar5);
    if (0 < triCount) {
      if (value == (UnityEngine_Vector3_array *)0x0) goto LAB_04264ff2;
      uVar7 = 2;
      do {
        uVar8 = uVar7 - 2;
        if ((uint)value->max_length <= uVar8) {
LAB_04264fed:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar10 = (float)(triOffset % totalWidth) / (float)totalWidth;
        fVar11 = (float)(triOffset / totalWidth) / (float)totalHeight;
        fVar12 = fVar10 + fVar10 + -1.0;
        fVar13 = fVar11 + fVar11 + -1.0;
        value->m_Items[(int)uVar8].fields.x = fVar12;
        value->m_Items[(int)uVar8].fields.y = fVar13;
        value->m_Items[(int)uVar8].fields.z = 1.0;
        uVar6 = uVar7 - 1;
        if ((uint)value->max_length <= uVar6) goto LAB_04264fed;
        value->m_Items[(int)uVar6].fields.x = fVar12;
        value->m_Items[(int)uVar6].fields.y = fVar13;
        value->m_Items[(int)uVar6].fields.z = 1.0;
        if ((uint)value->max_length <= uVar7) goto LAB_04264fed;
        value->m_Items[(int)uVar7].fields.x = fVar12;
        value->m_Items[(int)uVar7].fields.y = fVar13;
        value->m_Items[(int)uVar7].fields.z = 1.0;
        if (value_00 == (UnityEngine_Vector2_array *)0x0) goto LAB_04264ff2;
        if ((((uint)value_00->max_length <= uVar8) ||
            (value_00->m_Items[(int)uVar8].fields.x = 0.0,
            value_00->m_Items[(int)uVar8].fields.y = 0.0, (uint)value_00->max_length <= uVar6)) ||
           (value_00->m_Items[(int)uVar6].fields.x = 1.0,
           value_00->m_Items[(int)uVar6].fields.y = 0.0, (uint)value_00->max_length <= uVar7))
        goto LAB_04264fed;
        value_00->m_Items[(int)uVar7].fields.x = 0.0;
        value_00->m_Items[(int)uVar7].fields.y = 1.0;
        if (value_01 == (UnityEngine_Vector2_array *)0x0) goto LAB_04264ff2;
        if ((((uint)value_01->max_length <= uVar8) ||
            (UVar2.fields.y = fVar11, UVar2.fields.x = fVar10,
            value_01->m_Items[(int)uVar8].fields = UVar2.fields, (uint)value_01->max_length <= uVar6
            )) || (UVar3.fields.y = fVar11, UVar3.fields.x = fVar10,
                  value_01->m_Items[(int)uVar6].fields = UVar3.fields,
                  (uint)value_01->max_length <= uVar7)) goto LAB_04264fed;
        UVar4.fields.y = fVar11;
        UVar4.fields.x = fVar10;
        value_01->m_Items[(int)uVar7].fields = UVar4.fields;
        if (value_02 == (System_Int32_array *)0x0) goto LAB_04264ff2;
        uVar1 = (uint)value_02->max_length;
        if (((uVar1 <= uVar8) || (value_02->m_Items[(int)uVar8] = uVar8, uVar1 <= uVar6)) ||
           (value_02->m_Items[(int)uVar6] = uVar6, uVar1 <= uVar7)) goto LAB_04264fed;
        value_02->m_Items[(int)uVar7] = uVar7;
        triOffset = triOffset + 1;
        uVar7 = uVar7 + 3;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)__this,value,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)__this,value_02,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)__this,value_00,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv2((UnityEngine_Mesh_o *)__this,value_01,(MethodInfo *)0x0);
    return (UnityEngine_Mesh_o *)__this;
  }
LAB_04264ff2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UnityStandardAssets.ImageEffects.Triangles$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Triangles___ctor (UnityStandardAssets_ImageEffects_Triangles_o* __this, const MethodInfo* method);
// 0x4265000

void UnityStandardAssets_ImageEffects_Triangles___ctor
               (UnityStandardAssets_ImageEffects_Triangles_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


