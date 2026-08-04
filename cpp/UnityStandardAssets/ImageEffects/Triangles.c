// Type: UnityStandardAssets.ImageEffects.Triangles
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Triangles.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Triangles.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.Triangles$$HasMeshes
// il2cpp: bool UnityStandardAssets_ImageEffects_Triangles__HasMeshes (const MethodInfo* method);
// 0x4589970

bool_conflict UnityStandardAssets_ImageEffects_Triangles__HasMeshes(MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  long lVar6;
  undefined8 uVar7;
  UnityEngine_Mesh_o *pUVar8;
  UnityEngine_Object_o *__this;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector2_array *value_00;
  UnityEngine_Vector2_array *value_01;
  System_Int32_array *value_02;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  int extraout_EDX;
  uint uVar12;
  int32_t triOffset;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  UnityEngine_Object_o *in_RSI;
  UnityEngine_Object_o *pUVar17;
  int totalWidth;
  uint uVar18;
  MethodInfo *in_R8;
  int32_t iVar19;
  undefined8 unaff_R12;
  int iVar20;
  uint uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (g_data_057af108 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    method = (MethodInfo *)&TypeInfo_Triangles;
    il2cpp_runtime_helper_023445d0();
    g_data_057af108 = '\x01';
  }
  lVar6 = **(long **)(TypeInfo_Triangles + 0xb8);
  if (lVar6 != 0) {
    uVar13 = 0;
    do {
      if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar13) {
        return (bool_conflict)CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar13) {
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057af109 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          method = (MethodInfo *)&TypeInfo_Triangles;
          il2cpp_runtime_helper_023445d0();
          g_data_057af109 = '\x01';
        }
        plVar10 = *(long **)(TypeInfo_Triangles + 0xb8);
        lVar6 = *plVar10;
        if (lVar6 == 0) {
          return 0;
        }
        if ((int)*(ulong *)(lVar6 + 0x18) < 1) goto label_04589b7c;
        uVar13 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        uVar14 = 0;
        goto label_04589ab0;
      }
      in_RSI = *(UnityEngine_Object_o **)(lVar6 + 0x20 + uVar13 * 8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = 0;
      method = (MethodInfo *)0x0;
      bVar5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)0x0,in_RSI,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return 0;
      }
      uVar13 = uVar13 + 1;
      lVar6 = **(long **)(TypeInfo_Triangles + 0xb8);
    } while (lVar6 != 0);
    il2cpp_runtime_helper_022b2c90();
  }
  return 0;
label_04589ab0:
  iVar16 = (int)in_RSI;
  if (uVar13 <= uVar14) goto label_04589bab;
  pUVar17 = *(UnityEngine_Object_o **)(lVar6 + 0x20 + uVar14 * 8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar17,(MethodInfo *)0x0);
  iVar16 = (int)pUVar17;
  if ((char)bVar5 != '\0') {
    lVar6 = **(long **)(TypeInfo_Triangles + 0xb8);
    if (lVar6 != 0) {
      if (uVar14 < *(uint *)(lVar6 + 0x18)) {
        method = *(MethodInfo **)(lVar6 + 0x20 + uVar14 * 8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar16 = 0;
        UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)method,(MethodInfo *)0x0);
        lVar6 = **(long **)(TypeInfo_Triangles + 0xb8);
        if (lVar6 == 0) goto label_04589bb0;
        if (uVar14 < *(uint *)(lVar6 + 0x18)) {
          method = (MethodInfo *)(lVar6 + uVar14 * 8 + 0x20);
          *(undefined8 *)(lVar6 + 0x20 + uVar14 * 8) = 0;
          iVar16 = 0;
          il2cpp_runtime_helper_022b4080();
          goto label_04589b57;
        }
      }
label_04589bab:
      il2cpp_runtime_helper_022b2ca0();
    }
label_04589bb0:
    il2cpp_runtime_helper_022b2c90();
    totalWidth = (int)method;
    if (g_data_057af10a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
      method = (MethodInfo *)&TypeInfo_Triangles;
      il2cpp_runtime_helper_023445d0();
      g_data_057af10a = '\x01';
    }
    bVar5 = UnityStandardAssets_ImageEffects_Triangles__HasMeshes(method);
    puVar11 = *(undefined8 **)(TypeInfo_Triangles + 0xb8);
    if ((char)bVar5 == '\0') {
      *(int *)(puVar11 + 1) = iVar16 * totalWidth;
    }
    else {
      if (*(int *)(puVar11 + 1) == iVar16 * totalWidth) goto label_04589daf;
      *(int *)(puVar11 + 1) = iVar16 * totalWidth;
    }
    iVar20 = iVar16 * totalWidth;
    if (g_data_057a690d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690d = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar23 = ceilf((float)iVar20 / 21666.0);
    uVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_Mesh,(int)fVar23);
    **(undefined8 **)(TypeInfo_Triangles + 0xb8) = uVar7;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Triangles + 0xb8),uVar7);
    if (iVar20 < 1) goto label_04589d9e;
    triOffset = 0;
    uVar21 = 0;
    iVar22 = iVar20;
    goto label_04589cd0;
  }
label_04589b57:
  plVar10 = *(long **)(TypeInfo_Triangles + 0xb8);
  lVar6 = *plVar10;
  if (lVar6 == 0) goto label_04589bb0;
  uVar14 = uVar14 + 1;
  uVar13 = (ulong)*(uint *)(lVar6 + 0x18);
  in_RSI = (UnityEngine_Object_o *)(long)(int)*(uint *)(lVar6 + 0x18);
  if ((long)in_RSI <= (long)uVar14) {
label_04589b7c:
    *plVar10 = 0;
    bVar5 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Triangles + 0xb8),0);
    return bVar5;
  }
  goto label_04589ab0;
label_04589cd0:
  iVar15 = 0x54a2;
  if (iVar22 < 0x54a3) {
    iVar15 = iVar22;
  }
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  if (g_data_057a690a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a690a = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar13 = (ulong)(uint)(int)(float)iVar15;
  lVar6 = **(long **)(TypeInfo_Triangles + 0xb8);
  iVar9 = iVar16;
  iVar19 = triOffset;
  pUVar8 = UnityStandardAssets_ImageEffects_Triangles__GetMesh
                     ((int)(float)iVar15,triOffset,totalWidth,iVar16,in_R8);
  if (lVar6 == 0) {
    il2cpp_runtime_helper_022b2c90();
label_04589e0b:
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057af10b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_int);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057af10b = '\x01';
    }
    __this = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
    pUVar17 = __this;
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Object_o *)0x0) goto label_0458a0f2;
    UnityEngine_Object__set_hideFlags(__this,0x34,(MethodInfo *)0x0);
    iVar16 = (int)uVar13 * 3;
    value = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,iVar16);
    value_00 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar16);
    value_01 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar16);
    pUVar17 = TypeInfo_int;
    value_02 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
    if ((int)uVar13 < 1) goto label_0458a0a2;
    if (value == (UnityEngine_Vector3_array *)0x0) goto label_0458a0f2;
    uVar13 = uVar13 & 0xffffffff;
    uVar21 = 2;
    goto label_04589f50;
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar21) goto label_04589e0b;
  *(UnityEngine_Mesh_o **)(lVar6 + 0x20 + (long)(int)uVar21 * 8) = pUVar8;
  il2cpp_runtime_helper_022b4080(lVar6 + (long)(int)uVar21 * 8 + 0x20,pUVar8);
  uVar21 = uVar21 + 1;
  triOffset = triOffset + 0x54a2;
  iVar22 = iVar22 + -0x54a2;
  if (iVar20 <= triOffset) {
label_04589d9e:
    puVar11 = *(undefined8 **)(TypeInfo_Triangles + 0xb8);
label_04589daf:
    return (bool_conflict)*puVar11;
  }
  goto label_04589cd0;
label_04589f50:
  uVar18 = uVar21 - 2;
  pUVar17 = (UnityEngine_Object_o *)(ulong)uVar18;
  if ((uint)value->max_length <= uVar18) {
label_0458a0ed:
    il2cpp_runtime_helper_022b2ca0();
label_0458a0f2:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar17,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  fVar23 = (float)(iVar19 % extraout_EDX) / (float)extraout_EDX;
  fVar24 = (float)(iVar19 / extraout_EDX) / (float)iVar9;
  fVar25 = fVar23 + fVar23 + -1.0;
  fVar26 = fVar24 + fVar24 + -1.0;
  value->m_Items[(int)uVar18].fields.x = fVar25;
  value->m_Items[(int)uVar18].fields.y = fVar26;
  value->m_Items[(int)uVar18].fields.z = 1.0;
  uVar12 = uVar21 - 1;
  if ((uint)value->max_length <= uVar12) goto label_0458a0ed;
  value->m_Items[(int)uVar12].fields.x = fVar25;
  value->m_Items[(int)uVar12].fields.y = fVar26;
  value->m_Items[(int)uVar12].fields.z = 1.0;
  if ((uint)value->max_length <= uVar21) goto label_0458a0ed;
  value->m_Items[(int)uVar21].fields.x = fVar25;
  value->m_Items[(int)uVar21].fields.y = fVar26;
  value->m_Items[(int)uVar21].fields.z = 1.0;
  if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_0458a0f2;
  if ((((uint)value_00->max_length <= uVar18) ||
      (value_00->m_Items[(int)uVar18].fields.x = 0.0, value_00->m_Items[(int)uVar18].fields.y = 0.0,
      (uint)value_00->max_length <= uVar12)) ||
     (value_00->m_Items[(int)uVar12].fields.x = 1.0, value_00->m_Items[(int)uVar12].fields.y = 0.0,
     (uint)value_00->max_length <= uVar21)) goto label_0458a0ed;
  value_00->m_Items[(int)uVar21].fields.x = 0.0;
  value_00->m_Items[(int)uVar21].fields.y = 1.0;
  if (value_01 == (UnityEngine_Vector2_array *)0x0) goto label_0458a0f2;
  if ((((uint)value_01->max_length <= uVar18) ||
      (UVar2.fields.y = fVar24, UVar2.fields.x = fVar23, value_01->m_Items[(int)uVar18].fields = UVar2.fields,
      (uint)value_01->max_length <= uVar12)) ||
     (UVar3.fields.y = fVar24, UVar3.fields.x = fVar23, value_01->m_Items[(int)uVar12].fields = UVar3.fields,
     (uint)value_01->max_length <= uVar21)) goto label_0458a0ed;
  UVar4.fields.y = fVar24;
  UVar4.fields.x = fVar23;
  value_01->m_Items[(int)uVar21].fields = UVar4.fields;
  if (value_02 == (System_Int32_array *)0x0) goto label_0458a0f2;
  uVar1 = (uint)value_02->max_length;
  if (((uVar1 <= uVar18) || (value_02->m_Items[(int)uVar18] = uVar18, uVar1 <= uVar12)) ||
     (value_02->m_Items[(int)uVar12] = uVar12, uVar1 <= uVar21)) goto label_0458a0ed;
  value_02->m_Items[(int)uVar21] = uVar21;
  iVar19 = iVar19 + 1;
  uVar21 = uVar21 + 3;
  uVar13 = uVar13 - 1;
  if (uVar13 == 0) {
label_0458a0a2:
    UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)__this,value,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)__this,value_02,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)__this,value_00,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv2((UnityEngine_Mesh_o *)__this,value_01,(MethodInfo *)0x0);
    return (bool_conflict)__this;
  }
  goto label_04589f50;
}


// UnityStandardAssets.ImageEffects.Triangles$$Cleanup
// il2cpp: void UnityStandardAssets_ImageEffects_Triangles__Cleanup (const MethodInfo* method);
// 0x4589a40

void UnityStandardAssets_ImageEffects_Triangles__Cleanup(MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  bool_conflict bVar5;
  long lVar6;
  undefined8 uVar7;
  UnityEngine_Mesh_o *pUVar8;
  UnityEngine_Object_o *__this;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector2_array *value_00;
  UnityEngine_Vector2_array *value_01;
  System_Int32_array *value_02;
  int iVar9;
  long *plVar10;
  int extraout_EDX;
  uint uVar11;
  int32_t triOffset;
  ulong uVar12;
  int iVar13;
  int iVar14;
  long in_RSI;
  UnityEngine_Object_o *pUVar15;
  int totalWidth;
  uint uVar16;
  MethodInfo *in_R8;
  ulong uVar17;
  int32_t iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if (g_data_057af109 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    method = (MethodInfo *)&TypeInfo_Triangles;
    il2cpp_runtime_helper_023445d0();
    g_data_057af109 = '\x01';
  }
  plVar10 = *(long **)(TypeInfo_Triangles + 0xb8);
  lVar6 = *plVar10;
  if (lVar6 == 0) {
    return;
  }
  if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
    uVar17 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
    uVar12 = 0;
    do {
      iVar14 = (int)in_RSI;
      if (uVar17 <= uVar12) goto label_04589bab;
      pUVar15 = *(UnityEngine_Object_o **)(lVar6 + 0x20 + uVar12 * 8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      bVar5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar15,(MethodInfo *)0x0);
      iVar14 = (int)pUVar15;
      if ((char)bVar5 != '\0') {
        lVar6 = **(long **)(TypeInfo_Triangles + 0xb8);
        if (lVar6 != 0) {
          if (uVar12 < *(uint *)(lVar6 + 0x18)) {
            method = *(MethodInfo **)(lVar6 + 0x20 + uVar12 * 8);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar14 = 0;
            UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)method,(MethodInfo *)0x0);
            lVar6 = **(long **)(TypeInfo_Triangles + 0xb8);
            if (lVar6 == 0) goto label_04589bb0;
            if (uVar12 < *(uint *)(lVar6 + 0x18)) {
              method = (MethodInfo *)(lVar6 + uVar12 * 8 + 0x20);
              *(undefined8 *)(lVar6 + 0x20 + uVar12 * 8) = 0;
              iVar14 = 0;
              il2cpp_runtime_helper_022b4080();
              goto label_04589b57;
            }
          }
label_04589bab:
          il2cpp_runtime_helper_022b2ca0();
        }
label_04589bb0:
        il2cpp_runtime_helper_022b2c90();
        totalWidth = (int)method;
        if (g_data_057af10a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
          method = (MethodInfo *)&TypeInfo_Triangles;
          il2cpp_runtime_helper_023445d0();
          g_data_057af10a = '\x01';
        }
        bVar5 = UnityStandardAssets_ImageEffects_Triangles__HasMeshes(method);
        lVar6 = *(long *)(TypeInfo_Triangles + 0xb8);
        if ((char)bVar5 == '\0') {
          *(int *)(lVar6 + 8) = iVar14 * totalWidth;
        }
        else {
          if (*(int *)(lVar6 + 8) == iVar14 * totalWidth) {
            return;
          }
          *(int *)(lVar6 + 8) = iVar14 * totalWidth;
        }
        iVar19 = iVar14 * totalWidth;
        if (g_data_057a690d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a690d = '\x01';
        }
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        fVar22 = ceilf((float)iVar19 / 21666.0);
        uVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_Mesh,(int)fVar22);
        **(undefined8 **)(TypeInfo_Triangles + 0xb8) = uVar7;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Triangles + 0xb8),uVar7);
        if (iVar19 < 1) {
          return;
        }
        triOffset = 0;
        uVar20 = 0;
        iVar21 = iVar19;
        goto label_04589cd0;
      }
label_04589b57:
      plVar10 = *(long **)(TypeInfo_Triangles + 0xb8);
      lVar6 = *plVar10;
      if (lVar6 == 0) goto label_04589bb0;
      uVar12 = uVar12 + 1;
      uVar17 = (ulong)*(uint *)(lVar6 + 0x18);
      in_RSI = (long)(int)*(uint *)(lVar6 + 0x18);
    } while ((long)uVar12 < in_RSI);
  }
  *plVar10 = 0;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Triangles + 0xb8),0);
  return;
label_04589cd0:
  iVar13 = 0x54a2;
  if (iVar21 < 0x54a3) {
    iVar13 = iVar21;
  }
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  if (g_data_057a690a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a690a = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar17 = (ulong)(uint)(int)(float)iVar13;
  lVar6 = **(long **)(TypeInfo_Triangles + 0xb8);
  iVar9 = iVar14;
  iVar18 = triOffset;
  pUVar8 = UnityStandardAssets_ImageEffects_Triangles__GetMesh
                     ((int)(float)iVar13,triOffset,totalWidth,iVar14,in_R8);
  if (lVar6 == 0) {
    il2cpp_runtime_helper_022b2c90();
label_04589e0b:
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057af10b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_int);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057af10b = '\x01';
    }
    __this = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
    pUVar15 = __this;
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Object_o *)0x0) goto label_0458a0f2;
    UnityEngine_Object__set_hideFlags(__this,0x34,(MethodInfo *)0x0);
    iVar14 = (int)uVar17 * 3;
    value = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,iVar14);
    value_00 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar14);
    value_01 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar14);
    pUVar15 = TypeInfo_int;
    value_02 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
    if ((int)uVar17 < 1) goto label_0458a0a2;
    if (value == (UnityEngine_Vector3_array *)0x0) goto label_0458a0f2;
    uVar17 = uVar17 & 0xffffffff;
    uVar20 = 2;
    goto label_04589f50;
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar20) goto label_04589e0b;
  *(UnityEngine_Mesh_o **)(lVar6 + 0x20 + (long)(int)uVar20 * 8) = pUVar8;
  il2cpp_runtime_helper_022b4080(lVar6 + (long)(int)uVar20 * 8 + 0x20,pUVar8);
  uVar20 = uVar20 + 1;
  triOffset = triOffset + 0x54a2;
  iVar21 = iVar21 + -0x54a2;
  if (iVar19 <= triOffset) {
    return;
  }
  goto label_04589cd0;
label_04589f50:
  uVar16 = uVar20 - 2;
  pUVar15 = (UnityEngine_Object_o *)(ulong)uVar16;
  if ((uint)value->max_length <= uVar16) {
label_0458a0ed:
    il2cpp_runtime_helper_022b2ca0();
label_0458a0f2:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar15,(MethodInfo *)0x0);
    return;
  }
  fVar22 = (float)(iVar18 % extraout_EDX) / (float)extraout_EDX;
  fVar23 = (float)(iVar18 / extraout_EDX) / (float)iVar9;
  fVar24 = fVar22 + fVar22 + -1.0;
  fVar25 = fVar23 + fVar23 + -1.0;
  value->m_Items[(int)uVar16].fields.x = fVar24;
  value->m_Items[(int)uVar16].fields.y = fVar25;
  value->m_Items[(int)uVar16].fields.z = 1.0;
  uVar11 = uVar20 - 1;
  if ((uint)value->max_length <= uVar11) goto label_0458a0ed;
  value->m_Items[(int)uVar11].fields.x = fVar24;
  value->m_Items[(int)uVar11].fields.y = fVar25;
  value->m_Items[(int)uVar11].fields.z = 1.0;
  if ((uint)value->max_length <= uVar20) goto label_0458a0ed;
  value->m_Items[(int)uVar20].fields.x = fVar24;
  value->m_Items[(int)uVar20].fields.y = fVar25;
  value->m_Items[(int)uVar20].fields.z = 1.0;
  if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_0458a0f2;
  if ((((uint)value_00->max_length <= uVar16) ||
      (value_00->m_Items[(int)uVar16].fields.x = 0.0, value_00->m_Items[(int)uVar16].fields.y = 0.0,
      (uint)value_00->max_length <= uVar11)) ||
     (value_00->m_Items[(int)uVar11].fields.x = 1.0, value_00->m_Items[(int)uVar11].fields.y = 0.0,
     (uint)value_00->max_length <= uVar20)) goto label_0458a0ed;
  value_00->m_Items[(int)uVar20].fields.x = 0.0;
  value_00->m_Items[(int)uVar20].fields.y = 1.0;
  if (value_01 == (UnityEngine_Vector2_array *)0x0) goto label_0458a0f2;
  if ((((uint)value_01->max_length <= uVar16) ||
      (UVar2.fields.y = fVar23, UVar2.fields.x = fVar22, value_01->m_Items[(int)uVar16].fields = UVar2.fields,
      (uint)value_01->max_length <= uVar11)) ||
     (UVar3.fields.y = fVar23, UVar3.fields.x = fVar22, value_01->m_Items[(int)uVar11].fields = UVar3.fields,
     (uint)value_01->max_length <= uVar20)) goto label_0458a0ed;
  UVar4.fields.y = fVar23;
  UVar4.fields.x = fVar22;
  value_01->m_Items[(int)uVar20].fields = UVar4.fields;
  if (value_02 == (System_Int32_array *)0x0) goto label_0458a0f2;
  uVar1 = (uint)value_02->max_length;
  if (((uVar1 <= uVar16) || (value_02->m_Items[(int)uVar16] = uVar16, uVar1 <= uVar11)) ||
     (value_02->m_Items[(int)uVar11] = uVar11, uVar1 <= uVar20)) goto label_0458a0ed;
  value_02->m_Items[(int)uVar20] = uVar20;
  iVar18 = iVar18 + 1;
  uVar20 = uVar20 + 3;
  uVar17 = uVar17 - 1;
  if (uVar17 == 0) {
label_0458a0a2:
    UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)__this,value,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)__this,value_02,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)__this,value_00,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv2((UnityEngine_Mesh_o *)__this,value_01,(MethodInfo *)0x0);
    return;
  }
  goto label_04589f50;
}


// UnityStandardAssets.ImageEffects.Triangles$$GetMeshes
// il2cpp: UnityEngine_Mesh_array* UnityStandardAssets_ImageEffects_Triangles__GetMeshes (int32_t totalWidth, int32_t totalHeight, const MethodInfo* method);
// 0x4589bc0

UnityEngine_Mesh_array *
UnityStandardAssets_ImageEffects_Triangles__GetMeshes
          (int32_t totalWidth,int32_t totalHeight,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  bool_conflict bVar6;
  undefined8 uVar7;
  UnityEngine_Mesh_o *pUVar8;
  UnityEngine_Mesh_array *__this;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector2_array *value_00;
  UnityEngine_Vector2_array *value_01;
  System_Int32_array *value_02;
  UnityEngine_Mesh_array *extraout_RAX;
  int32_t iVar9;
  undefined8 *puVar10;
  int extraout_EDX;
  uint uVar11;
  int32_t triOffset;
  int iVar12;
  uint uVar13;
  undefined4 in_register_0000003c;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  ulong uVar14;
  int32_t iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Mesh_array *__this_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_0000003c,totalWidth);
  if (g_data_057af10a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
    method_00 = (MethodInfo *)&TypeInfo_Triangles;
    il2cpp_runtime_helper_023445d0();
    g_data_057af10a = '\x01';
  }
  bVar6 = UnityStandardAssets_ImageEffects_Triangles__HasMeshes(method_00);
  puVar10 = *(undefined8 **)(TypeInfo_Triangles + 0xb8);
  if ((char)bVar6 == '\0') {
    *(int32_t *)(puVar10 + 1) = totalHeight * totalWidth;
  }
  else {
    if (*(int *)(puVar10 + 1) == totalHeight * totalWidth) goto label_04589daf;
    *(int32_t *)(puVar10 + 1) = totalHeight * totalWidth;
  }
  iVar16 = totalHeight * totalWidth;
  if (g_data_057a690d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a690d = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar19 = ceilf((float)iVar16 / 21666.0);
  uVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_Mesh,(int)fVar19);
  **(undefined8 **)(TypeInfo_Triangles + 0xb8) = uVar7;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Triangles + 0xb8),uVar7);
  if (0 < iVar16) {
    triOffset = 0;
    uVar17 = 0;
    iVar18 = iVar16;
    do {
      iVar12 = 0x54a2;
      if (iVar18 < 0x54a3) {
        iVar12 = iVar18;
      }
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      if (g_data_057a690a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a690a = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar14 = (ulong)(uint)(int)(float)iVar12;
      lVar2 = **(long **)(TypeInfo_Triangles + 0xb8);
      iVar9 = totalHeight;
      iVar15 = triOffset;
      pUVar8 = UnityStandardAssets_ImageEffects_Triangles__GetMesh
                         ((int)(float)iVar12,triOffset,totalWidth,totalHeight,in_R8);
      if (lVar2 == 0) {
        il2cpp_runtime_helper_022b2c90();
label_04589e0b:
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057af10b == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_int);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057af10b = '\x01';
        }
        __this = (UnityEngine_Mesh_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
        __this_00 = __this;
        UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
        if (__this == (UnityEngine_Mesh_array *)0x0) goto label_0458a0f2;
        UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this,0x34,(MethodInfo *)0x0);
        iVar16 = (int)uVar14 * 3;
        value = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,iVar16);
        value_00 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar16);
        value_01 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar16);
        __this_00 = TypeInfo_int;
        value_02 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
        if ((int)uVar14 < 1) goto label_0458a0a2;
        if (value == (UnityEngine_Vector3_array *)0x0) goto label_0458a0f2;
        uVar14 = uVar14 & 0xffffffff;
        uVar17 = 2;
        goto label_04589f50;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar17) goto label_04589e0b;
      *(UnityEngine_Mesh_o **)(lVar2 + 0x20 + (long)(int)uVar17 * 8) = pUVar8;
      il2cpp_runtime_helper_022b4080(lVar2 + (long)(int)uVar17 * 8 + 0x20,pUVar8);
      uVar17 = uVar17 + 1;
      triOffset = triOffset + 0x54a2;
      iVar18 = iVar18 + -0x54a2;
    } while (triOffset < iVar16);
  }
  puVar10 = *(undefined8 **)(TypeInfo_Triangles + 0xb8);
label_04589daf:
  return (UnityEngine_Mesh_array *)*puVar10;
label_04589f50:
  uVar13 = uVar17 - 2;
  __this_00 = (UnityEngine_Mesh_array *)(ulong)uVar13;
  if ((uint)value->max_length <= uVar13) {
label_0458a0ed:
    il2cpp_runtime_helper_022b2ca0();
label_0458a0f2:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(&__this_00->obj,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  fVar19 = (float)(iVar15 % extraout_EDX) / (float)extraout_EDX;
  fVar20 = (float)(iVar15 / extraout_EDX) / (float)iVar9;
  fVar21 = fVar19 + fVar19 + -1.0;
  fVar22 = fVar20 + fVar20 + -1.0;
  value->m_Items[(int)uVar13].fields.x = fVar21;
  value->m_Items[(int)uVar13].fields.y = fVar22;
  value->m_Items[(int)uVar13].fields.z = 1.0;
  uVar11 = uVar17 - 1;
  if ((uint)value->max_length <= uVar11) goto label_0458a0ed;
  value->m_Items[(int)uVar11].fields.x = fVar21;
  value->m_Items[(int)uVar11].fields.y = fVar22;
  value->m_Items[(int)uVar11].fields.z = 1.0;
  if ((uint)value->max_length <= uVar17) goto label_0458a0ed;
  value->m_Items[(int)uVar17].fields.x = fVar21;
  value->m_Items[(int)uVar17].fields.y = fVar22;
  value->m_Items[(int)uVar17].fields.z = 1.0;
  if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_0458a0f2;
  if ((((uint)value_00->max_length <= uVar13) ||
      (value_00->m_Items[(int)uVar13].fields.x = 0.0, value_00->m_Items[(int)uVar13].fields.y = 0.0,
      (uint)value_00->max_length <= uVar11)) ||
     (value_00->m_Items[(int)uVar11].fields.x = 1.0, value_00->m_Items[(int)uVar11].fields.y = 0.0,
     (uint)value_00->max_length <= uVar17)) goto label_0458a0ed;
  value_00->m_Items[(int)uVar17].fields.x = 0.0;
  value_00->m_Items[(int)uVar17].fields.y = 1.0;
  if (value_01 == (UnityEngine_Vector2_array *)0x0) goto label_0458a0f2;
  if ((((uint)value_01->max_length <= uVar13) ||
      (UVar3.fields.y = fVar20, UVar3.fields.x = fVar19, value_01->m_Items[(int)uVar13].fields = UVar3.fields,
      (uint)value_01->max_length <= uVar11)) ||
     (UVar4.fields.y = fVar20, UVar4.fields.x = fVar19, value_01->m_Items[(int)uVar11].fields = UVar4.fields,
     (uint)value_01->max_length <= uVar17)) goto label_0458a0ed;
  UVar5.fields.y = fVar20;
  UVar5.fields.x = fVar19;
  value_01->m_Items[(int)uVar17].fields = UVar5.fields;
  if (value_02 == (System_Int32_array *)0x0) goto label_0458a0f2;
  uVar1 = (uint)value_02->max_length;
  if (((uVar1 <= uVar13) || (value_02->m_Items[(int)uVar13] = uVar13, uVar1 <= uVar11)) ||
     (value_02->m_Items[(int)uVar11] = uVar11, uVar1 <= uVar17)) goto label_0458a0ed;
  value_02->m_Items[(int)uVar17] = uVar17;
  iVar15 = iVar15 + 1;
  uVar17 = uVar17 + 3;
  uVar14 = uVar14 - 1;
  if (uVar14 == 0) {
label_0458a0a2:
    UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)__this,value,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)__this,value_02,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)__this,value_00,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv2((UnityEngine_Mesh_o *)__this,value_01,(MethodInfo *)0x0);
    return __this;
  }
  goto label_04589f50;
}


// UnityStandardAssets.ImageEffects.Triangles$$GetMesh
// il2cpp: UnityEngine_Mesh_o* UnityStandardAssets_ImageEffects_Triangles__GetMesh (int32_t triCount, int32_t triOffset, int32_t totalWidth, int32_t totalHeight, const MethodInfo* method);
// 0x4589e10

UnityEngine_Mesh_o *
UnityStandardAssets_ImageEffects_Triangles__GetMesh
          (int32_t triCount,int32_t triOffset,int32_t totalWidth,int32_t totalHeight,MethodInfo *method)

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
  UnityEngine_Mesh_o *extraout_RAX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Object_o *__this_00;
  
  uVar9 = (ulong)(uint)triCount;
  if (g_data_057af10b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057af10b = '\x01';
  }
  __this = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
  __this_00 = __this;
  UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(__this,0x34,(MethodInfo *)0x0);
    iVar5 = triCount * 3;
    value = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,iVar5);
    value_00 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar5);
    value_01 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar5);
    __this_00 = TypeInfo_int;
    value_02 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
    if (0 < triCount) {
      if (value == (UnityEngine_Vector3_array *)0x0) goto label_0458a0f2;
      uVar7 = 2;
      do {
        uVar8 = uVar7 - 2;
        __this_00 = (UnityEngine_Object_o *)(ulong)uVar8;
        if ((uint)value->max_length <= uVar8) {
label_0458a0ed:
          il2cpp_runtime_helper_022b2ca0();
          goto label_0458a0f2;
        }
        fVar10 = (float)(triOffset % totalWidth) / (float)totalWidth;
        fVar11 = (float)(triOffset / totalWidth) / (float)totalHeight;
        fVar12 = fVar10 + fVar10 + -1.0;
        fVar13 = fVar11 + fVar11 + -1.0;
        value->m_Items[(int)uVar8].fields.x = fVar12;
        value->m_Items[(int)uVar8].fields.y = fVar13;
        value->m_Items[(int)uVar8].fields.z = 1.0;
        uVar6 = uVar7 - 1;
        if ((uint)value->max_length <= uVar6) goto label_0458a0ed;
        value->m_Items[(int)uVar6].fields.x = fVar12;
        value->m_Items[(int)uVar6].fields.y = fVar13;
        value->m_Items[(int)uVar6].fields.z = 1.0;
        if ((uint)value->max_length <= uVar7) goto label_0458a0ed;
        value->m_Items[(int)uVar7].fields.x = fVar12;
        value->m_Items[(int)uVar7].fields.y = fVar13;
        value->m_Items[(int)uVar7].fields.z = 1.0;
        if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_0458a0f2;
        if ((((uint)value_00->max_length <= uVar8) ||
            (value_00->m_Items[(int)uVar8].fields.x = 0.0, value_00->m_Items[(int)uVar8].fields.y = 0.0,
            (uint)value_00->max_length <= uVar6)) ||
           (value_00->m_Items[(int)uVar6].fields.x = 1.0, value_00->m_Items[(int)uVar6].fields.y = 0.0,
           (uint)value_00->max_length <= uVar7)) goto label_0458a0ed;
        value_00->m_Items[(int)uVar7].fields.x = 0.0;
        value_00->m_Items[(int)uVar7].fields.y = 1.0;
        if (value_01 == (UnityEngine_Vector2_array *)0x0) goto label_0458a0f2;
        if ((((uint)value_01->max_length <= uVar8) ||
            (UVar2.fields.y = fVar11, UVar2.fields.x = fVar10,
            value_01->m_Items[(int)uVar8].fields = UVar2.fields, (uint)value_01->max_length <= uVar6)) ||
           (UVar3.fields.y = fVar11, UVar3.fields.x = fVar10,
           value_01->m_Items[(int)uVar6].fields = UVar3.fields, (uint)value_01->max_length <= uVar7))
        goto label_0458a0ed;
        UVar4.fields.y = fVar11;
        UVar4.fields.x = fVar10;
        value_01->m_Items[(int)uVar7].fields = UVar4.fields;
        if (value_02 == (System_Int32_array *)0x0) goto label_0458a0f2;
        uVar1 = (uint)value_02->max_length;
        if (((uVar1 <= uVar8) || (value_02->m_Items[(int)uVar8] = uVar8, uVar1 <= uVar6)) ||
           (value_02->m_Items[(int)uVar6] = uVar6, uVar1 <= uVar7)) goto label_0458a0ed;
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
label_0458a0f2:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UnityStandardAssets.ImageEffects.Triangles$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Triangles___ctor (UnityStandardAssets_ImageEffects_Triangles_o* __this, const MethodInfo* method);
// 0x458a100

void UnityStandardAssets_ImageEffects_Triangles___ctor
               (UnityStandardAssets_ImageEffects_Triangles_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


