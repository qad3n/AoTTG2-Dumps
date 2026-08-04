// Type: UnityStandardAssets.ImageEffects.Quads
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/StandardAssets.Effects/UnityStandardAssets.ImageEffects/Quads.cs
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/Quads.cs
// --------------------------------

// UnityStandardAssets.ImageEffects.Quads$$HasMeshes
// il2cpp: bool UnityStandardAssets_ImageEffects_Quads__HasMeshes (const MethodInfo* method);
// 0x4585d10

bool_conflict UnityStandardAssets_ImageEffects_Quads__HasMeshes(MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  uint uVar6;
  bool_conflict bVar7;
  bool_conflict bVar8;
  bool_conflict extraout_EAX;
  long lVar9;
  undefined8 uVar10;
  UnityEngine_Mesh_o *pUVar11;
  UnityEngine_Object_o *__this;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector2_array *value_00;
  UnityEngine_Vector2_array *value_01;
  System_Int32_array *value_02;
  int iVar12;
  long *plVar13;
  undefined8 *puVar14;
  int extraout_EDX;
  uint uVar15;
  int32_t triOffset;
  int iVar16;
  int iVar17;
  ulong uVar18;
  UnityEngine_Object_o *in_RSI;
  ulong uVar19;
  int totalWidth;
  UnityEngine_Object_o *pUVar20;
  int iVar21;
  MethodInfo *in_R8;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined8 unaff_R14;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  if (g_data_057af0f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    method = (MethodInfo *)&TypeInfo_Quads;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0f1 = '\x01';
  }
  lVar9 = **(long **)(TypeInfo_Quads + 0xb8);
  if (lVar9 == 0) {
label_04585db0:
    bVar8 = 0;
  }
  else {
    bVar8 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar19 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      uVar18 = 0;
      do {
        if (uVar19 <= uVar18) {
          il2cpp_runtime_helper_022b2ca0();
          if (g_data_057af0f2 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            method = (MethodInfo *)&TypeInfo_Quads;
            il2cpp_runtime_helper_023445d0();
            g_data_057af0f2 = '\x01';
          }
          plVar13 = *(long **)(TypeInfo_Quads + 0xb8);
          lVar9 = *plVar13;
          if (lVar9 == 0) {
            return 0;
          }
          if ((int)*(ulong *)(lVar9 + 0x18) < 1) goto label_04585f0c;
          uVar19 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          uVar18 = 0;
          goto label_04585e40;
        }
        in_RSI = *(UnityEngine_Object_o **)(lVar9 + 0x20 + uVar18 * 8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)0x0;
        bVar7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)0x0,in_RSI,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') goto label_04585db0;
        uVar18 = uVar18 + 1;
        uVar19 = (ulong)*(uint *)(lVar9 + 0x18);
      } while ((long)uVar18 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
  }
  return bVar8;
label_04585e40:
  iVar17 = (int)in_RSI;
  if (uVar19 <= uVar18) goto label_04585f3b;
  pUVar20 = *(UnityEngine_Object_o **)(lVar9 + 0x20 + uVar18 * 8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar20,(MethodInfo *)0x0);
  iVar17 = (int)pUVar20;
  if ((char)bVar8 != '\0') {
    lVar9 = **(long **)(TypeInfo_Quads + 0xb8);
    if (lVar9 != 0) {
      if (uVar18 < *(uint *)(lVar9 + 0x18)) {
        method = *(MethodInfo **)(lVar9 + 0x20 + uVar18 * 8);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar17 = 0;
        UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)method,(MethodInfo *)0x0);
        lVar9 = **(long **)(TypeInfo_Quads + 0xb8);
        if (lVar9 == 0) goto label_04585f40;
        if (uVar18 < *(uint *)(lVar9 + 0x18)) {
          method = (MethodInfo *)(lVar9 + uVar18 * 8 + 0x20);
          *(undefined8 *)(lVar9 + 0x20 + uVar18 * 8) = 0;
          iVar17 = 0;
          il2cpp_runtime_helper_022b4080();
          goto label_04585ee7;
        }
      }
label_04585f3b:
      il2cpp_runtime_helper_022b2ca0();
    }
label_04585f40:
    il2cpp_runtime_helper_022b2c90();
    totalWidth = (int)method;
    if (g_data_057af0f3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
      method = (MethodInfo *)&TypeInfo_Quads;
      il2cpp_runtime_helper_023445d0();
      g_data_057af0f3 = '\x01';
    }
    bVar8 = UnityStandardAssets_ImageEffects_Quads__HasMeshes(method);
    puVar14 = *(undefined8 **)(TypeInfo_Quads + 0xb8);
    if ((char)bVar8 == '\0') {
      *(int *)(puVar14 + 1) = iVar17 * totalWidth;
    }
    else {
      if (*(int *)(puVar14 + 1) == iVar17 * totalWidth) goto label_0458613f;
      *(int *)(puVar14 + 1) = iVar17 * totalWidth;
    }
    iVar24 = iVar17 * totalWidth;
    if (g_data_057a690d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690d = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar27 = ceilf((float)iVar24 / 10833.0);
    uVar10 = il2cpp_runtime_helper_022b2a40(TypeInfo_Mesh,(int)fVar27);
    **(undefined8 **)(TypeInfo_Quads + 0xb8) = uVar10;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Quads + 0xb8),uVar10);
    if (iVar24 < 1) goto label_0458612e;
    triOffset = 0;
    uVar25 = 0;
    iVar26 = iVar24;
    goto label_04586060;
  }
label_04585ee7:
  plVar13 = *(long **)(TypeInfo_Quads + 0xb8);
  lVar9 = *plVar13;
  if (lVar9 == 0) goto label_04585f40;
  uVar18 = uVar18 + 1;
  uVar19 = (ulong)*(uint *)(lVar9 + 0x18);
  in_RSI = (UnityEngine_Object_o *)(long)(int)*(uint *)(lVar9 + 0x18);
  if ((long)in_RSI <= (long)uVar18) {
label_04585f0c:
    *plVar13 = 0;
    bVar8 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Quads + 0xb8),0);
    return bVar8;
  }
  goto label_04585e40;
label_04586060:
  iVar16 = 0x2a51;
  if (iVar26 < 0x2a52) {
    iVar16 = iVar26;
  }
  if (iVar16 < 0) {
    iVar16 = 0;
  }
  if (g_data_057a690a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a690a = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar19 = (ulong)(uint)(int)(float)iVar16;
  lVar9 = **(long **)(TypeInfo_Quads + 0xb8);
  iVar12 = iVar17;
  iVar21 = triOffset;
  pUVar11 = UnityStandardAssets_ImageEffects_Quads__GetMesh
                      ((int)(float)iVar16,triOffset,totalWidth,iVar17,in_R8);
  if (lVar9 == 0) {
    il2cpp_runtime_helper_022b2c90();
label_0458619b:
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057af0f4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_int);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057af0f4 = '\x01';
    }
    __this = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
    pUVar20 = __this;
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Object_o *)0x0) goto label_04586533;
    UnityEngine_Object__set_hideFlags(__this,0x34,(MethodInfo *)0x0);
    iVar17 = (int)uVar19 * 4;
    value = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,iVar17);
    value_00 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar17);
    value_01 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar17);
    pUVar20 = TypeInfo_int;
    value_02 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
    if ((int)uVar19 < 1) goto label_045864e3;
    if (value == (UnityEngine_Vector3_array *)0x0) goto label_04586533;
    uVar19 = uVar19 & 0xffffffff;
    uVar25 = 5;
    pUVar20 = (UnityEngine_Object_o *)0x3;
    goto label_045862f0;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar25) goto label_0458619b;
  *(UnityEngine_Mesh_o **)(lVar9 + 0x20 + (long)(int)uVar25 * 8) = pUVar11;
  il2cpp_runtime_helper_022b4080(lVar9 + (long)(int)uVar25 * 8 + 0x20,pUVar11);
  uVar25 = uVar25 + 1;
  triOffset = triOffset + 0x2a51;
  iVar26 = iVar26 + -0x2a51;
  if (iVar24 <= triOffset) {
label_0458612e:
    puVar14 = *(undefined8 **)(TypeInfo_Quads + 0xb8);
label_0458613f:
    return (bool_conflict)*puVar14;
  }
  goto label_04586060;
label_045862f0:
  uVar6 = (uint)pUVar20;
  uVar22 = uVar6 - 3;
  if ((uint)value->max_length <= uVar22) {
label_0458652e:
    il2cpp_runtime_helper_022b2ca0();
label_04586533:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar20,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  fVar28 = (float)(iVar21 % extraout_EDX) / (float)extraout_EDX;
  fVar29 = (float)(iVar21 / extraout_EDX) / (float)iVar12;
  fVar30 = fVar28 + fVar28 + -1.0;
  fVar27 = fVar29 + fVar29 + -1.0;
  value->m_Items[(int)uVar22].fields.x = fVar30;
  value->m_Items[(int)uVar22].fields.y = fVar27;
  value->m_Items[(int)uVar22].fields.z = 1.0;
  uVar23 = uVar6 - 2;
  if ((uint)value->max_length <= uVar23) goto label_0458652e;
  value->m_Items[(int)uVar23].fields.x = fVar30;
  value->m_Items[(int)uVar23].fields.y = fVar27;
  value->m_Items[(int)uVar23].fields.z = 1.0;
  uVar15 = uVar6 - 1;
  if ((uint)value->max_length <= uVar15) goto label_0458652e;
  value->m_Items[(int)uVar15].fields.x = fVar30;
  value->m_Items[(int)uVar15].fields.y = fVar27;
  value->m_Items[(int)uVar15].fields.z = 1.0;
  if ((uint)value->max_length <= uVar6) goto label_0458652e;
  value->m_Items[(int)uVar6].fields.x = fVar30;
  value->m_Items[(int)uVar6].fields.y = fVar27;
  value->m_Items[(int)uVar6].fields.z = 1.0;
  if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_04586533;
  if (((((uint)value_00->max_length <= uVar22) ||
       (value_00->m_Items[(int)uVar22].fields.x = 0.0, value_00->m_Items[(int)uVar22].fields.y = 0.0,
       (uint)value_00->max_length <= uVar23)) ||
      (value_00->m_Items[(int)uVar23].fields.x = 1.0, value_00->m_Items[(int)uVar23].fields.y = 0.0,
      (uint)value_00->max_length <= uVar15)) ||
     (value_00->m_Items[(int)uVar15].fields.x = 0.0, value_00->m_Items[(int)uVar15].fields.y = 1.0,
     (uint)value_00->max_length <= uVar6)) goto label_0458652e;
  value_00->m_Items[(int)uVar6].fields.x = 1.0;
  value_00->m_Items[(int)uVar6].fields.y = 1.0;
  if (value_01 == (UnityEngine_Vector2_array *)0x0) goto label_04586533;
  if ((((uint)value_01->max_length <= uVar22) ||
      (UVar2.fields.y = fVar29, UVar2.fields.x = fVar28, value_01->m_Items[(int)uVar22].fields = UVar2.fields,
      (uint)value_01->max_length <= uVar23)) ||
     ((UVar3.fields.y = fVar29, UVar3.fields.x = fVar28, value_01->m_Items[(int)uVar23].fields = UVar3.fields,
      (uint)value_01->max_length <= uVar15 ||
      (UVar4.fields.y = fVar29, UVar4.fields.x = fVar28, value_01->m_Items[(int)uVar15].fields = UVar4.fields,
      (uint)value_01->max_length <= uVar6)))) goto label_0458652e;
  UVar5.fields.y = fVar29;
  UVar5.fields.x = fVar28;
  value_01->m_Items[(int)uVar6].fields = UVar5.fields;
  if (value_02 == (System_Int32_array *)0x0) goto label_04586533;
  uVar1 = (uint)value_02->max_length;
  if (uVar1 <= uVar25 - 5) goto label_0458652e;
  value_02->m_Items[(int)(uVar25 - 5)] = uVar22;
  if (uVar1 <= uVar25 - 4) goto label_0458652e;
  value_02->m_Items[(int)(uVar25 - 4)] = uVar23;
  if (uVar1 <= uVar25 - 3) goto label_0458652e;
  value_02->m_Items[(int)(uVar25 - 3)] = uVar15;
  if (uVar1 <= uVar25 - 2) goto label_0458652e;
  value_02->m_Items[(int)(uVar25 - 2)] = uVar23;
  if ((uVar1 <= uVar25 - 1) || (value_02->m_Items[(int)(uVar25 - 1)] = uVar15, uVar1 <= uVar25))
  goto label_0458652e;
  value_02->m_Items[(int)uVar25] = uVar6;
  iVar21 = iVar21 + 1;
  uVar25 = uVar25 + 6;
  pUVar20 = (UnityEngine_Object_o *)(ulong)(uVar6 + 4);
  uVar19 = uVar19 - 1;
  if (uVar19 == 0) {
label_045864e3:
    UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)__this,value,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)__this,value_02,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)__this,value_00,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv2((UnityEngine_Mesh_o *)__this,value_01,(MethodInfo *)0x0);
    return (bool_conflict)__this;
  }
  goto label_045862f0;
}


// UnityStandardAssets.ImageEffects.Quads$$Cleanup
// il2cpp: void UnityStandardAssets_ImageEffects_Quads__Cleanup (const MethodInfo* method);
// 0x4585dd0

void UnityStandardAssets_ImageEffects_Quads__Cleanup(MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  uint uVar6;
  bool_conflict bVar7;
  long lVar8;
  undefined8 uVar9;
  UnityEngine_Mesh_o *pUVar10;
  UnityEngine_Object_o *__this;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector2_array *value_00;
  UnityEngine_Vector2_array *value_01;
  System_Int32_array *value_02;
  int iVar11;
  long *plVar12;
  int extraout_EDX;
  uint uVar13;
  int32_t triOffset;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long in_RSI;
  ulong uVar17;
  int totalWidth;
  UnityEngine_Object_o *pUVar18;
  int iVar19;
  MethodInfo *in_R8;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if (g_data_057af0f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    method = (MethodInfo *)&TypeInfo_Quads;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0f2 = '\x01';
  }
  plVar12 = *(long **)(TypeInfo_Quads + 0xb8);
  lVar8 = *plVar12;
  if (lVar8 == 0) {
    return;
  }
  if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
    uVar17 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
    uVar14 = 0;
    do {
      iVar16 = (int)in_RSI;
      if (uVar17 <= uVar14) goto label_04585f3b;
      pUVar18 = *(UnityEngine_Object_o **)(lVar8 + 0x20 + uVar14 * 8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      bVar7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)0x0,pUVar18,(MethodInfo *)0x0);
      iVar16 = (int)pUVar18;
      if ((char)bVar7 != '\0') {
        lVar8 = **(long **)(TypeInfo_Quads + 0xb8);
        if (lVar8 != 0) {
          if (uVar14 < *(uint *)(lVar8 + 0x18)) {
            method = *(MethodInfo **)(lVar8 + 0x20 + uVar14 * 8);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar16 = 0;
            UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)method,(MethodInfo *)0x0);
            lVar8 = **(long **)(TypeInfo_Quads + 0xb8);
            if (lVar8 == 0) goto label_04585f40;
            if (uVar14 < *(uint *)(lVar8 + 0x18)) {
              method = (MethodInfo *)(lVar8 + uVar14 * 8 + 0x20);
              *(undefined8 *)(lVar8 + 0x20 + uVar14 * 8) = 0;
              iVar16 = 0;
              il2cpp_runtime_helper_022b4080();
              goto label_04585ee7;
            }
          }
label_04585f3b:
          il2cpp_runtime_helper_022b2ca0();
        }
label_04585f40:
        il2cpp_runtime_helper_022b2c90();
        totalWidth = (int)method;
        if (g_data_057af0f3 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
          method = (MethodInfo *)&TypeInfo_Quads;
          il2cpp_runtime_helper_023445d0();
          g_data_057af0f3 = '\x01';
        }
        bVar7 = UnityStandardAssets_ImageEffects_Quads__HasMeshes(method);
        lVar8 = *(long *)(TypeInfo_Quads + 0xb8);
        if ((char)bVar7 == '\0') {
          *(int *)(lVar8 + 8) = iVar16 * totalWidth;
        }
        else {
          if (*(int *)(lVar8 + 8) == iVar16 * totalWidth) {
            return;
          }
          *(int *)(lVar8 + 8) = iVar16 * totalWidth;
        }
        iVar22 = iVar16 * totalWidth;
        if (g_data_057a690d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a690d = '\x01';
        }
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        fVar25 = ceilf((float)iVar22 / 10833.0);
        uVar9 = il2cpp_runtime_helper_022b2a40(TypeInfo_Mesh,(int)fVar25);
        **(undefined8 **)(TypeInfo_Quads + 0xb8) = uVar9;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Quads + 0xb8),uVar9);
        if (iVar22 < 1) {
          return;
        }
        triOffset = 0;
        uVar23 = 0;
        iVar24 = iVar22;
        goto label_04586060;
      }
label_04585ee7:
      plVar12 = *(long **)(TypeInfo_Quads + 0xb8);
      lVar8 = *plVar12;
      if (lVar8 == 0) goto label_04585f40;
      uVar14 = uVar14 + 1;
      uVar17 = (ulong)*(uint *)(lVar8 + 0x18);
      in_RSI = (long)(int)*(uint *)(lVar8 + 0x18);
    } while ((long)uVar14 < in_RSI);
  }
  *plVar12 = 0;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Quads + 0xb8),0);
  return;
label_04586060:
  iVar15 = 0x2a51;
  if (iVar24 < 0x2a52) {
    iVar15 = iVar24;
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
  uVar17 = (ulong)(uint)(int)(float)iVar15;
  lVar8 = **(long **)(TypeInfo_Quads + 0xb8);
  iVar11 = iVar16;
  iVar19 = triOffset;
  pUVar10 = UnityStandardAssets_ImageEffects_Quads__GetMesh
                      ((int)(float)iVar15,triOffset,totalWidth,iVar16,in_R8);
  if (lVar8 == 0) {
    il2cpp_runtime_helper_022b2c90();
label_0458619b:
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057af0f4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_int);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057af0f4 = '\x01';
    }
    __this = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
    pUVar18 = __this;
    UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Object_o *)0x0) goto label_04586533;
    UnityEngine_Object__set_hideFlags(__this,0x34,(MethodInfo *)0x0);
    iVar16 = (int)uVar17 * 4;
    value = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,iVar16);
    value_00 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar16);
    value_01 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar16);
    pUVar18 = TypeInfo_int;
    value_02 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
    if ((int)uVar17 < 1) goto label_045864e3;
    if (value == (UnityEngine_Vector3_array *)0x0) goto label_04586533;
    uVar17 = uVar17 & 0xffffffff;
    uVar23 = 5;
    pUVar18 = (UnityEngine_Object_o *)0x3;
    goto label_045862f0;
  }
  if (*(uint *)(lVar8 + 0x18) <= uVar23) goto label_0458619b;
  *(UnityEngine_Mesh_o **)(lVar8 + 0x20 + (long)(int)uVar23 * 8) = pUVar10;
  il2cpp_runtime_helper_022b4080(lVar8 + (long)(int)uVar23 * 8 + 0x20,pUVar10);
  uVar23 = uVar23 + 1;
  triOffset = triOffset + 0x2a51;
  iVar24 = iVar24 + -0x2a51;
  if (iVar22 <= triOffset) {
    return;
  }
  goto label_04586060;
label_045862f0:
  uVar6 = (uint)pUVar18;
  uVar20 = uVar6 - 3;
  if ((uint)value->max_length <= uVar20) {
label_0458652e:
    il2cpp_runtime_helper_022b2ca0();
label_04586533:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar18,(MethodInfo *)0x0);
    return;
  }
  fVar26 = (float)(iVar19 % extraout_EDX) / (float)extraout_EDX;
  fVar27 = (float)(iVar19 / extraout_EDX) / (float)iVar11;
  fVar28 = fVar26 + fVar26 + -1.0;
  fVar25 = fVar27 + fVar27 + -1.0;
  value->m_Items[(int)uVar20].fields.x = fVar28;
  value->m_Items[(int)uVar20].fields.y = fVar25;
  value->m_Items[(int)uVar20].fields.z = 1.0;
  uVar21 = uVar6 - 2;
  if ((uint)value->max_length <= uVar21) goto label_0458652e;
  value->m_Items[(int)uVar21].fields.x = fVar28;
  value->m_Items[(int)uVar21].fields.y = fVar25;
  value->m_Items[(int)uVar21].fields.z = 1.0;
  uVar13 = uVar6 - 1;
  if ((uint)value->max_length <= uVar13) goto label_0458652e;
  value->m_Items[(int)uVar13].fields.x = fVar28;
  value->m_Items[(int)uVar13].fields.y = fVar25;
  value->m_Items[(int)uVar13].fields.z = 1.0;
  if ((uint)value->max_length <= uVar6) goto label_0458652e;
  value->m_Items[(int)uVar6].fields.x = fVar28;
  value->m_Items[(int)uVar6].fields.y = fVar25;
  value->m_Items[(int)uVar6].fields.z = 1.0;
  if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_04586533;
  if (((((uint)value_00->max_length <= uVar20) ||
       (value_00->m_Items[(int)uVar20].fields.x = 0.0, value_00->m_Items[(int)uVar20].fields.y = 0.0,
       (uint)value_00->max_length <= uVar21)) ||
      (value_00->m_Items[(int)uVar21].fields.x = 1.0, value_00->m_Items[(int)uVar21].fields.y = 0.0,
      (uint)value_00->max_length <= uVar13)) ||
     (value_00->m_Items[(int)uVar13].fields.x = 0.0, value_00->m_Items[(int)uVar13].fields.y = 1.0,
     (uint)value_00->max_length <= uVar6)) goto label_0458652e;
  value_00->m_Items[(int)uVar6].fields.x = 1.0;
  value_00->m_Items[(int)uVar6].fields.y = 1.0;
  if (value_01 == (UnityEngine_Vector2_array *)0x0) goto label_04586533;
  if ((((uint)value_01->max_length <= uVar20) ||
      (UVar2.fields.y = fVar27, UVar2.fields.x = fVar26, value_01->m_Items[(int)uVar20].fields = UVar2.fields,
      (uint)value_01->max_length <= uVar21)) ||
     ((UVar3.fields.y = fVar27, UVar3.fields.x = fVar26, value_01->m_Items[(int)uVar21].fields = UVar3.fields,
      (uint)value_01->max_length <= uVar13 ||
      (UVar4.fields.y = fVar27, UVar4.fields.x = fVar26, value_01->m_Items[(int)uVar13].fields = UVar4.fields,
      (uint)value_01->max_length <= uVar6)))) goto label_0458652e;
  UVar5.fields.y = fVar27;
  UVar5.fields.x = fVar26;
  value_01->m_Items[(int)uVar6].fields = UVar5.fields;
  if (value_02 == (System_Int32_array *)0x0) goto label_04586533;
  uVar1 = (uint)value_02->max_length;
  if (uVar1 <= uVar23 - 5) goto label_0458652e;
  value_02->m_Items[(int)(uVar23 - 5)] = uVar20;
  if (uVar1 <= uVar23 - 4) goto label_0458652e;
  value_02->m_Items[(int)(uVar23 - 4)] = uVar21;
  if (uVar1 <= uVar23 - 3) goto label_0458652e;
  value_02->m_Items[(int)(uVar23 - 3)] = uVar13;
  if (uVar1 <= uVar23 - 2) goto label_0458652e;
  value_02->m_Items[(int)(uVar23 - 2)] = uVar21;
  if ((uVar1 <= uVar23 - 1) || (value_02->m_Items[(int)(uVar23 - 1)] = uVar13, uVar1 <= uVar23))
  goto label_0458652e;
  value_02->m_Items[(int)uVar23] = uVar6;
  iVar19 = iVar19 + 1;
  uVar23 = uVar23 + 6;
  pUVar18 = (UnityEngine_Object_o *)(ulong)(uVar6 + 4);
  uVar17 = uVar17 - 1;
  if (uVar17 == 0) {
label_045864e3:
    UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)__this,value,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)__this,value_02,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)__this,value_00,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv2((UnityEngine_Mesh_o *)__this,value_01,(MethodInfo *)0x0);
    return;
  }
  goto label_045862f0;
}


// UnityStandardAssets.ImageEffects.Quads$$GetMeshes
// il2cpp: UnityEngine_Mesh_array* UnityStandardAssets_ImageEffects_Quads__GetMeshes (int32_t totalWidth, int32_t totalHeight, const MethodInfo* method);
// 0x4585f50

UnityEngine_Mesh_array *
UnityStandardAssets_ImageEffects_Quads__GetMeshes(int32_t totalWidth,int32_t totalHeight,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  uint uVar7;
  bool_conflict bVar8;
  undefined8 uVar9;
  UnityEngine_Mesh_o *pUVar10;
  UnityEngine_Mesh_array *__this;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector2_array *value_00;
  UnityEngine_Vector2_array *value_01;
  System_Int32_array *value_02;
  UnityEngine_Mesh_array *extraout_RAX;
  int32_t iVar11;
  undefined8 *puVar12;
  int extraout_EDX;
  uint uVar13;
  int32_t triOffset;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined4 in_register_0000003c;
  MethodInfo *method_00;
  UnityEngine_Mesh_array *__this_00;
  int iVar17;
  MethodInfo *in_R8;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_0000003c,totalWidth);
  if (g_data_057af0f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
    method_00 = (MethodInfo *)&TypeInfo_Quads;
    il2cpp_runtime_helper_023445d0();
    g_data_057af0f3 = '\x01';
  }
  bVar8 = UnityStandardAssets_ImageEffects_Quads__HasMeshes(method_00);
  puVar12 = *(undefined8 **)(TypeInfo_Quads + 0xb8);
  if ((char)bVar8 == '\0') {
    *(int32_t *)(puVar12 + 1) = totalHeight * totalWidth;
  }
  else {
    if (*(int *)(puVar12 + 1) == totalHeight * totalWidth) goto label_0458613f;
    *(int32_t *)(puVar12 + 1) = totalHeight * totalWidth;
  }
  iVar15 = totalHeight * totalWidth;
  if (g_data_057a690d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a690d = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar22 = ceilf((float)iVar15 / 10833.0);
  uVar9 = il2cpp_runtime_helper_022b2a40(TypeInfo_Mesh,(int)fVar22);
  **(undefined8 **)(TypeInfo_Quads + 0xb8) = uVar9;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Quads + 0xb8),uVar9);
  if (0 < iVar15) {
    triOffset = 0;
    uVar20 = 0;
    iVar21 = iVar15;
    do {
      iVar14 = 0x2a51;
      if (iVar21 < 0x2a52) {
        iVar14 = iVar21;
      }
      if (iVar14 < 0) {
        iVar14 = 0;
      }
      if (g_data_057a690a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a690a = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar16 = (ulong)(uint)(int)(float)iVar14;
      lVar2 = **(long **)(TypeInfo_Quads + 0xb8);
      iVar11 = totalHeight;
      iVar17 = triOffset;
      pUVar10 = UnityStandardAssets_ImageEffects_Quads__GetMesh
                          ((int)(float)iVar14,triOffset,totalWidth,totalHeight,in_R8);
      if (lVar2 == 0) {
        il2cpp_runtime_helper_022b2c90();
label_0458619b:
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057af0f4 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_int);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057af0f4 = '\x01';
        }
        __this = (UnityEngine_Mesh_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
        __this_00 = __this;
        UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
        if (__this == (UnityEngine_Mesh_array *)0x0) goto label_04586533;
        UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this,0x34,(MethodInfo *)0x0);
        iVar15 = (int)uVar16 * 4;
        value = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,iVar15);
        value_00 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar15);
        value_01 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar15);
        __this_00 = TypeInfo_int;
        value_02 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
        if ((int)uVar16 < 1) goto label_045864e3;
        if (value == (UnityEngine_Vector3_array *)0x0) goto label_04586533;
        uVar16 = uVar16 & 0xffffffff;
        uVar20 = 5;
        __this_00 = (UnityEngine_Mesh_array *)0x3;
        goto label_045862f0;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar20) goto label_0458619b;
      *(UnityEngine_Mesh_o **)(lVar2 + 0x20 + (long)(int)uVar20 * 8) = pUVar10;
      il2cpp_runtime_helper_022b4080(lVar2 + (long)(int)uVar20 * 8 + 0x20,pUVar10);
      uVar20 = uVar20 + 1;
      triOffset = triOffset + 0x2a51;
      iVar21 = iVar21 + -0x2a51;
    } while (triOffset < iVar15);
  }
  puVar12 = *(undefined8 **)(TypeInfo_Quads + 0xb8);
label_0458613f:
  return (UnityEngine_Mesh_array *)*puVar12;
label_045862f0:
  uVar7 = (uint)__this_00;
  uVar18 = uVar7 - 3;
  if ((uint)value->max_length <= uVar18) {
label_0458652e:
    il2cpp_runtime_helper_022b2ca0();
label_04586533:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(&__this_00->obj,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  fVar23 = (float)(iVar17 % extraout_EDX) / (float)extraout_EDX;
  fVar24 = (float)(iVar17 / extraout_EDX) / (float)iVar11;
  fVar25 = fVar23 + fVar23 + -1.0;
  fVar22 = fVar24 + fVar24 + -1.0;
  value->m_Items[(int)uVar18].fields.x = fVar25;
  value->m_Items[(int)uVar18].fields.y = fVar22;
  value->m_Items[(int)uVar18].fields.z = 1.0;
  uVar19 = uVar7 - 2;
  if ((uint)value->max_length <= uVar19) goto label_0458652e;
  value->m_Items[(int)uVar19].fields.x = fVar25;
  value->m_Items[(int)uVar19].fields.y = fVar22;
  value->m_Items[(int)uVar19].fields.z = 1.0;
  uVar13 = uVar7 - 1;
  if ((uint)value->max_length <= uVar13) goto label_0458652e;
  value->m_Items[(int)uVar13].fields.x = fVar25;
  value->m_Items[(int)uVar13].fields.y = fVar22;
  value->m_Items[(int)uVar13].fields.z = 1.0;
  if ((uint)value->max_length <= uVar7) goto label_0458652e;
  value->m_Items[(int)uVar7].fields.x = fVar25;
  value->m_Items[(int)uVar7].fields.y = fVar22;
  value->m_Items[(int)uVar7].fields.z = 1.0;
  if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_04586533;
  if (((((uint)value_00->max_length <= uVar18) ||
       (value_00->m_Items[(int)uVar18].fields.x = 0.0, value_00->m_Items[(int)uVar18].fields.y = 0.0,
       (uint)value_00->max_length <= uVar19)) ||
      (value_00->m_Items[(int)uVar19].fields.x = 1.0, value_00->m_Items[(int)uVar19].fields.y = 0.0,
      (uint)value_00->max_length <= uVar13)) ||
     (value_00->m_Items[(int)uVar13].fields.x = 0.0, value_00->m_Items[(int)uVar13].fields.y = 1.0,
     (uint)value_00->max_length <= uVar7)) goto label_0458652e;
  value_00->m_Items[(int)uVar7].fields.x = 1.0;
  value_00->m_Items[(int)uVar7].fields.y = 1.0;
  if (value_01 == (UnityEngine_Vector2_array *)0x0) goto label_04586533;
  if ((((uint)value_01->max_length <= uVar18) ||
      (UVar3.fields.y = fVar24, UVar3.fields.x = fVar23, value_01->m_Items[(int)uVar18].fields = UVar3.fields,
      (uint)value_01->max_length <= uVar19)) ||
     ((UVar4.fields.y = fVar24, UVar4.fields.x = fVar23, value_01->m_Items[(int)uVar19].fields = UVar4.fields,
      (uint)value_01->max_length <= uVar13 ||
      (UVar5.fields.y = fVar24, UVar5.fields.x = fVar23, value_01->m_Items[(int)uVar13].fields = UVar5.fields,
      (uint)value_01->max_length <= uVar7)))) goto label_0458652e;
  UVar6.fields.y = fVar24;
  UVar6.fields.x = fVar23;
  value_01->m_Items[(int)uVar7].fields = UVar6.fields;
  if (value_02 == (System_Int32_array *)0x0) goto label_04586533;
  uVar1 = (uint)value_02->max_length;
  if (uVar1 <= uVar20 - 5) goto label_0458652e;
  value_02->m_Items[(int)(uVar20 - 5)] = uVar18;
  if (uVar1 <= uVar20 - 4) goto label_0458652e;
  value_02->m_Items[(int)(uVar20 - 4)] = uVar19;
  if (uVar1 <= uVar20 - 3) goto label_0458652e;
  value_02->m_Items[(int)(uVar20 - 3)] = uVar13;
  if (uVar1 <= uVar20 - 2) goto label_0458652e;
  value_02->m_Items[(int)(uVar20 - 2)] = uVar19;
  if ((uVar1 <= uVar20 - 1) || (value_02->m_Items[(int)(uVar20 - 1)] = uVar13, uVar1 <= uVar20))
  goto label_0458652e;
  value_02->m_Items[(int)uVar20] = uVar7;
  iVar17 = iVar17 + 1;
  uVar20 = uVar20 + 6;
  __this_00 = (UnityEngine_Mesh_array *)(ulong)(uVar7 + 4);
  uVar16 = uVar16 - 1;
  if (uVar16 == 0) {
label_045864e3:
    UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)__this,value,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)__this,value_02,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)__this,value_00,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv2((UnityEngine_Mesh_o *)__this,value_01,(MethodInfo *)0x0);
    return __this;
  }
  goto label_045862f0;
}


// UnityStandardAssets.ImageEffects.Quads$$GetMesh
// il2cpp: UnityEngine_Mesh_o* UnityStandardAssets_ImageEffects_Quads__GetMesh (int32_t triCount, int32_t triOffset, int32_t totalWidth, int32_t totalHeight, const MethodInfo* method);
// 0x45861a0

UnityEngine_Mesh_o *
UnityStandardAssets_ImageEffects_Quads__GetMesh
          (int32_t triCount,int32_t triOffset,int32_t totalWidth,int32_t totalHeight,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  uint uVar6;
  UnityEngine_Object_o *__this;
  UnityEngine_Vector3_array *value;
  UnityEngine_Vector2_array *value_00;
  UnityEngine_Vector2_array *value_01;
  System_Int32_array *value_02;
  UnityEngine_Mesh_o *extraout_RAX;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  UnityEngine_Object_o *__this_00;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar9 = (ulong)(uint)triCount;
  if (g_data_057af0f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057af0f4 = '\x01';
  }
  __this = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
  __this_00 = __this;
  UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_hideFlags(__this,0x34,(MethodInfo *)0x0);
    iVar8 = triCount * 4;
    value = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector3,iVar8);
    value_00 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar8);
    value_01 = (UnityEngine_Vector2_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Vector2,iVar8);
    __this_00 = TypeInfo_int;
    value_02 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40();
    if (0 < triCount) {
      if (value == (UnityEngine_Vector3_array *)0x0) goto label_04586533;
      uVar11 = 5;
      __this_00 = (UnityEngine_Object_o *)0x3;
      do {
        uVar6 = (uint)__this_00;
        uVar10 = uVar6 - 3;
        if ((uint)value->max_length <= uVar10) {
label_0458652e:
          il2cpp_runtime_helper_022b2ca0();
          goto label_04586533;
        }
        fVar14 = (float)(triOffset % totalWidth) / (float)totalWidth;
        fVar15 = (float)(triOffset / totalWidth) / (float)totalHeight;
        fVar16 = fVar14 + fVar14 + -1.0;
        fVar13 = fVar15 + fVar15 + -1.0;
        value->m_Items[(int)uVar10].fields.x = fVar16;
        value->m_Items[(int)uVar10].fields.y = fVar13;
        value->m_Items[(int)uVar10].fields.z = 1.0;
        uVar12 = uVar6 - 2;
        if ((uint)value->max_length <= uVar12) goto label_0458652e;
        value->m_Items[(int)uVar12].fields.x = fVar16;
        value->m_Items[(int)uVar12].fields.y = fVar13;
        value->m_Items[(int)uVar12].fields.z = 1.0;
        uVar7 = uVar6 - 1;
        if ((uint)value->max_length <= uVar7) goto label_0458652e;
        value->m_Items[(int)uVar7].fields.x = fVar16;
        value->m_Items[(int)uVar7].fields.y = fVar13;
        value->m_Items[(int)uVar7].fields.z = 1.0;
        if ((uint)value->max_length <= uVar6) goto label_0458652e;
        value->m_Items[(int)uVar6].fields.x = fVar16;
        value->m_Items[(int)uVar6].fields.y = fVar13;
        value->m_Items[(int)uVar6].fields.z = 1.0;
        if (value_00 == (UnityEngine_Vector2_array *)0x0) goto label_04586533;
        if (((((uint)value_00->max_length <= uVar10) ||
             (value_00->m_Items[(int)uVar10].fields.x = 0.0, value_00->m_Items[(int)uVar10].fields.y = 0.0,
             (uint)value_00->max_length <= uVar12)) ||
            (value_00->m_Items[(int)uVar12].fields.x = 1.0, value_00->m_Items[(int)uVar12].fields.y = 0.0,
            (uint)value_00->max_length <= uVar7)) ||
           (value_00->m_Items[(int)uVar7].fields.x = 0.0, value_00->m_Items[(int)uVar7].fields.y = 1.0,
           (uint)value_00->max_length <= uVar6)) goto label_0458652e;
        value_00->m_Items[(int)uVar6].fields.x = 1.0;
        value_00->m_Items[(int)uVar6].fields.y = 1.0;
        if (value_01 == (UnityEngine_Vector2_array *)0x0) goto label_04586533;
        if ((((uint)value_01->max_length <= uVar10) ||
            (UVar2.fields.y = fVar15, UVar2.fields.x = fVar14,
            value_01->m_Items[(int)uVar10].fields = UVar2.fields, (uint)value_01->max_length <= uVar12)) ||
           ((UVar3.fields.y = fVar15, UVar3.fields.x = fVar14,
            value_01->m_Items[(int)uVar12].fields = UVar3.fields, (uint)value_01->max_length <= uVar7 ||
            (UVar4.fields.y = fVar15, UVar4.fields.x = fVar14,
            value_01->m_Items[(int)uVar7].fields = UVar4.fields, (uint)value_01->max_length <= uVar6))))
        goto label_0458652e;
        UVar5.fields.y = fVar15;
        UVar5.fields.x = fVar14;
        value_01->m_Items[(int)uVar6].fields = UVar5.fields;
        if (value_02 == (System_Int32_array *)0x0) goto label_04586533;
        uVar1 = (uint)value_02->max_length;
        if (uVar1 <= uVar11 - 5) goto label_0458652e;
        value_02->m_Items[(int)(uVar11 - 5)] = uVar10;
        if (uVar1 <= uVar11 - 4) goto label_0458652e;
        value_02->m_Items[(int)(uVar11 - 4)] = uVar12;
        if (uVar1 <= uVar11 - 3) goto label_0458652e;
        value_02->m_Items[(int)(uVar11 - 3)] = uVar7;
        if (uVar1 <= uVar11 - 2) goto label_0458652e;
        value_02->m_Items[(int)(uVar11 - 2)] = uVar12;
        if (uVar1 <= uVar11 - 1) goto label_0458652e;
        value_02->m_Items[(int)(uVar11 - 1)] = uVar7;
        if (uVar1 <= uVar11) goto label_0458652e;
        value_02->m_Items[(int)uVar11] = uVar6;
        triOffset = triOffset + 1;
        uVar11 = uVar11 + 6;
        __this_00 = (UnityEngine_Object_o *)(ulong)(uVar6 + 4);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    UnityEngine_Mesh__set_vertices((UnityEngine_Mesh_o *)__this,value,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_triangles((UnityEngine_Mesh_o *)__this,value_02,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv((UnityEngine_Mesh_o *)__this,value_00,(MethodInfo *)0x0);
    UnityEngine_Mesh__set_uv2((UnityEngine_Mesh_o *)__this,value_01,(MethodInfo *)0x0);
    return (UnityEngine_Mesh_o *)__this;
  }
label_04586533:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UnityStandardAssets.ImageEffects.Quads$$.ctor
// il2cpp: void UnityStandardAssets_ImageEffects_Quads___ctor (UnityStandardAssets_ImageEffects_Quads_o* __this, const MethodInfo* method);
// 0x4586540

void UnityStandardAssets_ImageEffects_Quads___ctor
               (UnityStandardAssets_ImageEffects_Quads_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


