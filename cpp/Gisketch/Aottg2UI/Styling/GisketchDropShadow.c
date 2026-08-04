// Type: Gisketch.Aottg2UI.Styling.GisketchDropShadow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchDropShadow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3b34440

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,UnityEngine_Color_o color,
               MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 *puVar2;
  UnityEngine_Vector3_Fields *pUVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIVertex_array *pUVar4;
  undefined4 uVar5;
  UnityEngine_UIVertex_o item;
  UnityEngine_Vector3_o *pUVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  UnityEngine_UI_Graphic_o *pUVar12;
  UnityEngine_UI_Graphic_o *pUVar13;
  UnityEngine_UI_VertexHelper_o *__this_00;
  int in_ECX;
  long lVar14;
  undefined1 extraout_DL;
  System_Collections_Generic_List_UIVertex__o *__this_01;
  long lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  UnityEngine_UI_VertexHelper_o *__this_02;
  Il2CppClass *__this_03;
  UnityEngine_UI_VertexHelper_o *__this_04;
  UnityEngine_UI_VertexHelper_o *pUVar19;
  MethodInfo_36918A0 **ppMVar20;
  MethodInfo *in_R8;
  Il2CppClass *unaff_R12;
  undefined8 *unaff_R13;
  float fVar21;
  float fVar22;
  float fVar23;
  System_Collections_Generic_List_Vector4__o *pSVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  float in_XMM3_Da;
  float fVar27;
  float in_stack_fffffffffffffd6c;
  UnityEngine_UIVertex_o UStack_250;
  undefined4 uStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined8 uStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [20];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  UnityEngine_UI_VertexHelper_o *pUStack_e8;
  Il2CppClass *pIStack_e0;
  undefined8 *puStack_d8;
  UnityEngine_UI_VertexHelper_o *pUStack_d0;
  UnityEngine_UI_VertexHelper_o *pUStack_c8;
  UnityEngine_UI_Graphic_o *pUStack_c0;
  UnityEngine_UI_VertexHelper_o *pUStack_b8;
  
  fVar27 = color.fields.b;
  fVar21 = color.fields.a;
  if (g_data_057a9c4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c4c = '\x01';
  }
  (__this->fields)._color.fields.r = color.fields.r;
  (__this->fields)._color.fields.g = color.fields.g;
  (__this->fields)._color.fields.b = fVar27;
  (__this->fields)._color.fields.a = fVar21;
  *(undefined1 *)&(__this->fields)._solid = 0;
  pUVar12 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return;
  }
  iVar17 = 0;
  pUVar12 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (pUVar12 != (UnityEngine_UI_Graphic_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar12->klass->vtable)._28_SetVerticesDirty.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar12,(pUVar12->klass->vtable)._28_SetVerticesDirty.method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  pSVar24 = (System_Collections_Generic_List_Vector4__o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c4d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c4d = '\x01';
  }
  (((UnityEngine_UI_VertexHelper_o *)__this)->fields).m_Uv1S = pSVar24;
  *(float *)&(((UnityEngine_UI_VertexHelper_o *)__this)->fields).m_Uv2S = fVar27;
  *(float *)((long)&(((UnityEngine_UI_VertexHelper_o *)__this)->fields).m_Uv2S + 4) = fVar21;
  (((UnityEngine_UI_VertexHelper_o *)__this)->fields).m_Uv3S =
       (System_Collections_Generic_List_Vector4__o *)CONCAT44(in_XMM2_Db,in_XMM2_Da);
  iVar18 = 1;
  if (0 < iVar17) {
    iVar18 = iVar17;
  }
  *(int *)&(((UnityEngine_UI_VertexHelper_o *)__this)->fields).m_Normals = iVar18;
  fVar27 = 0.0;
  if (0.0 <= in_XMM3_Da) {
    fVar27 = in_XMM3_Da;
  }
  *(float *)((long)&(((UnityEngine_UI_VertexHelper_o *)__this)->fields).m_Normals + 4) = fVar27;
  *(undefined1 *)&(((UnityEngine_UI_VertexHelper_o *)__this)->fields).m_Tangents = extraout_DL;
  pUVar12 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return;
  }
  __this_02 = (UnityEngine_UI_VertexHelper_o *)0x0;
  __this_04 = (UnityEngine_UI_VertexHelper_o *)__this;
  pUVar13 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_UI_Graphic_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar13->klass->vtable)._28_SetVerticesDirty.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar13,(pUVar13->klass->vtable)._28_SetVerticesDirty.method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_b8 = (UnityEngine_UI_VertexHelper_o *)__this;
  if (g_data_057a9c4e == '\0') {
    pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b34614;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b34620;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b3462c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b34638;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b34644;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_UIVertex);
    g_data_057a9c4e = '\x01';
  }
  __this_03 = __this_04->klass[1]._1.castClass;
  pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b3465e;
  pUVar19 = __this_04;
  cVar9 = (*(code *)__this_04->klass[1]._1.element_class)();
  if (cVar9 == '\0') {
    return;
  }
  if (__this_02 != (UnityEngine_UI_VertexHelper_o *)0x0) {
    pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b34679;
    iVar11 = UnityEngine_UI_VertexHelper__get_currentVertCount(__this_02,(MethodInfo *)0x0);
    if (iVar11 == 0) {
      return;
    }
    unaff_R13 = &TypeInfo_List_UIVertex;
    pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b34691;
    unaff_R12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
    pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b346a6;
    System_Collections_Generic_List_UIVertex____ctor
              ((System_Collections_Generic_List_UIVertex__o *)unaff_R12,MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b346b3;
    __this_03 = unaff_R12;
    pUVar19 = __this_02;
    UnityEngine_UI_VertexHelper__GetUIVertexStream
              (__this_02,(System_Collections_Generic_List_UIVertex__o *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (Il2CppClass *)0x0) {
      uVar16 = (*(int *)&(__this_04->fields).m_Normals + 1) * *(int *)&(unaff_R12->_1).namespaze;
      pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b346d2;
      __this_00 = (UnityEngine_UI_VertexHelper_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
      __this_03 = (Il2CppClass *)(ulong)uVar16;
      pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b346e9;
      pUVar19 = __this_00;
      System_Collections_Generic_List_UIVertex____ctor_3691300
                ((System_Collections_Generic_List_UIVertex__o *)__this_00,uVar16,MethodInfo_List_1_UnityEngine_UIVertex);
      uVar16 = *(uint *)&(__this_04->fields).m_Normals;
      __this = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)(ulong)uVar16;
      if (0 < (int)uVar16) {
        do {
          iVar17 = (int)__this;
          pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b34710;
          __this_03 = unaff_R12;
          pUVar19 = __this_04;
          in_ECX = iVar17;
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer
                    ((Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)__this_04,
                     (System_Collections_Generic_List_UIVertex__o *)unaff_R12,
                     (System_Collections_Generic_List_UIVertex__o *)__this_00,iVar17,in_R8);
          __this = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)(ulong)(iVar17 - 1);
        } while (1 < iVar17);
      }
      unaff_R13 = (undefined8 *)0x0;
      if (__this_00 != (UnityEngine_UI_VertexHelper_o *)0x0) {
        pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b34734;
        System_Collections_Generic_List_UIVertex___AddRange
                  ((System_Collections_Generic_List_UIVertex__o *)__this_00,
                   (System_Collections_Generic_IEnumerable_T__o *)unaff_R12,MethodInfo_Void_AddRange);
        pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b3473e;
        UnityEngine_UI_VertexHelper__Clear(__this_02,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream
                  (__this_02,(System_Collections_Generic_List_UIVertex__o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  pUStack_c0 = (UnityEngine_UI_Graphic_o *)0x3b34763;
  il2cpp_runtime_helper_022b2c90();
  ppMVar20 = (MethodInfo_36918A0 **)pUVar19;
  pUStack_e8 = (UnityEngine_UI_VertexHelper_o *)__this;
  pIStack_e0 = unaff_R12;
  puStack_d8 = unaff_R13;
  pUStack_d0 = __this_02;
  pUStack_c8 = __this_04;
  pUStack_c0 = pUVar12;
  if (g_data_057a9c4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    ppMVar20 = &MethodInfo_UIVertex_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c4f = '\x01';
  }
  iVar17 = (int)ppMVar20;
  uStack_1e0._0_1_ = '\0';
  uStack_1e0._1_1_ = '\0';
  uStack_1e0._2_1_ = '\0';
  uStack_1e0._3_1_ = '\0';
  fStack_1dc = 0.0;
  fStack_1d8 = 0.0;
  fStack_1d4 = 0.0;
  fStack_1d0 = 0.0;
  fStack_1cc = 0.0;
  fStack_1c8 = 0.0;
  fStack_1c4 = 0.0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  fStack_1b0 = 0.0;
  fStack_1ac = 0.0;
  fStack_1a8 = 0.0;
  fStack_1a4 = 0.0;
  fVar21 = (float)in_ECX;
  fVar26 = (float)*(int *)&(pUVar19->fields).m_Normals;
  fVar22 = fVar21 / fVar26;
  pSVar24 = (pUVar19->fields).m_Uv3S;
  fVar23 = (float)((ulong)pSVar24 >> 0x20);
  fVar27 = *(float *)((long)&(pUVar19->fields).m_Uv2S + 4);
  if (*(char *)&(pUVar19->fields).m_Tangents == '\0') {
    fVar27 = (fVar27 * (fVar22 * -0.55 + 1.1)) / fVar26;
  }
  auStack_160 = ZEXT416((uint)fVar27);
  if (__this_03 != (Il2CppClass *)0x0) {
    if (0 < *(int *)&(__this_03->_1).namespaze) {
      uStack_170 = CONCAT44(fVar23,SUB84(pSVar24,0) * fVar22);
      uStack_168 = 0;
      uStack_180 = CONCAT44(fVar23,fVar23 * fVar22);
      uStack_178 = 0;
      iVar18 = 0;
      do {
        while( true ) {
          System_Collections_Generic_List_UIVertex___get_Item
                    (&UStack_250,(System_Collections_Generic_List_UIVertex__o *)__this_03,iVar18,MethodInfo_UIVertex_get_Item)
          ;
          uVar7 = UStack_250.fields.tangent.fields._8_8_;
          fVar22 = UStack_250.fields.position.fields.z;
          fVar27 = UStack_250.fields.position.fields.y;
          uVar25 = CONCAT44(UStack_250.fields.normal.fields.y,UStack_250.fields.normal.fields.x);
          uStack_1e0._0_1_ = UStack_250.fields.color.fields.r;
          uStack_1e0._1_1_ = UStack_250.fields.color.fields.g;
          uStack_1e0._2_1_ = UStack_250.fields.color.fields.b;
          uStack_1e0._3_1_ = UStack_250.fields.color.fields.a;
          fStack_1dc = UStack_250.fields.uv0.fields.x;
          fStack_1d8 = UStack_250.fields.uv0.fields.y;
          fStack_1d4 = UStack_250.fields.uv0.fields.z;
          fStack_1d0 = UStack_250.fields.uv0.fields.w;
          fStack_1cc = UStack_250.fields.uv1.fields.x;
          fStack_1c8 = UStack_250.fields.uv1.fields.y;
          fStack_1c4 = UStack_250.fields.uv1.fields.z;
          uStack_1c0 = CONCAT44(UStack_250.fields.uv2.fields.x,UStack_250.fields.uv1.fields.w);
          uStack_1b8 = CONCAT44(UStack_250.fields.uv2.fields.z,UStack_250.fields.uv2.fields.y);
          fStack_1b0 = UStack_250.fields.uv2.fields.w;
          fStack_1ac = UStack_250.fields.uv3.fields.x;
          fStack_1a8 = UStack_250.fields.uv3.fields.y;
          fStack_1a4 = UStack_250.fields.uv3.fields.z;
          auStack_140._0_4_ = UStack_250.fields.position.fields.x;
          auStack_140._4_4_ = UStack_250.fields.position.fields.y;
          auStack_140._8_8_ = 0;
          uStack_150 = CONCAT44(fVar27,fVar27);
          uStack_148 = 0;
          fVar26 = sinf(fVar27 * 78.233 + UStack_250.fields.position.fields.x * 12.9898 + fVar21 * 37.719);
          fVar27 = *(float *)((long)&(pUVar19->fields).m_Normals + 4);
          iVar17 = 0;
          iVar11 = il2cpp_runtime_helper_03b428b0((int)(pUVar19->fields).m_Uv1S,*(undefined4 *)&(pUVar19->fields).m_Uv2S);
          uVar8 = UStack_250.fields.tangent.fields._8_8_;
          fStack_198 = UStack_250.fields.normal.fields.z;
          fStack_194 = UStack_250.fields.tangent.fields.x;
          fStack_190 = UStack_250.fields.tangent.fields.y;
          UStack_250.fields.tangent.fields.z = (float)uVar7;
          UStack_250.fields.tangent.fields.w = SUB84(uVar7,4);
          fStack_18c = UStack_250.fields.tangent.fields.z;
          fStack_188 = UStack_250.fields.tangent.fields.w;
          auStack_140[0x10] = (uint8_t)uStack_1e0;
          auStack_140[0x11] = uStack_1e0._1_1_;
          auStack_140[0x12] = uStack_1e0._2_1_;
          auStack_140[0x13] = uStack_1e0._3_1_;
          fStack_12c = fStack_1dc;
          fStack_128 = fStack_1d8;
          fStack_124 = fStack_1d4;
          fStack_120 = fStack_1d0;
          fStack_11c = fStack_1cc;
          fStack_118 = fStack_1c8;
          fStack_114 = fStack_1c4;
          uStack_110 = uStack_1c0;
          uStack_108 = uStack_1b8;
          fStack_100 = fStack_1b0;
          fStack_fc = fStack_1ac;
          fStack_f8 = fStack_1a8;
          fStack_f4 = fStack_1a4;
          UStack_250.fields.tangent.fields._8_8_ = uVar8;
          uStack_1a0 = uVar25;
          if (__this_01 == (System_Collections_Generic_List_UIVertex__o *)0x0) goto label_03b34c11;
          fVar23 = floorf(fVar26 * 43758.547);
          lVar14 = MethodInfo_Void_Add;
          fVar26 = fVar27 * ((fVar26 * 43758.547 - fVar23) + -0.5) * fVar21;
          fVar27 = (float)uStack_170 + fVar26 + (float)auStack_140._0_4_;
          fVar26 = ((float)uStack_180 - fVar26) + (float)uStack_150;
          UStack_250.fields.position.fields.z = fVar22 + 0.0;
          UStack_250.fields.position.fields.y = fVar26;
          UStack_250.fields.position.fields.x = fVar27;
          uVar25._0_4_ = fStack_18c;
          uVar25._4_4_ = fStack_188;
          UStack_250.fields.tangent.fields.y = fStack_190;
          UStack_250.fields.tangent.fields.z = fStack_18c;
          UStack_250.fields.tangent.fields.w = fStack_188;
          UStack_250.fields.normal.fields.x = (float)uStack_1a0;
          UStack_250.fields.normal.fields.y = (float)((ulong)uStack_1a0 >> 0x20);
          UStack_250.fields.normal.fields.z = fStack_198;
          UStack_250.fields.tangent.fields.x = fStack_194;
          uVar5._0_1_ = auStack_140[0x10];
          uVar5._1_1_ = auStack_140[0x11];
          uVar5._2_1_ = auStack_140[0x12];
          uVar5._3_1_ = auStack_140[0x13];
          UStack_250.fields.uv0.fields.x = fStack_12c;
          UStack_250.fields.uv0.fields.y = fStack_128;
          UStack_250.fields.uv0.fields.z = fStack_124;
          UStack_250.fields.uv0.fields.w = fStack_120;
          UStack_250.fields.uv1.fields.x = fStack_11c;
          UStack_250.fields.uv1.fields.y = fStack_118;
          UStack_250.fields.uv1.fields.z = fStack_114;
          UStack_250.fields.uv2.fields.w = fStack_100;
          UStack_250.fields.uv3.fields.x = fStack_fc;
          UStack_250.fields.uv3.fields.y = fStack_f8;
          UStack_250.fields.uv3.fields.z = fStack_f4;
          UStack_250.fields.uv1.fields.w = (float)uStack_110;
          UStack_250.fields.uv2.fields.x = (float)((ulong)uStack_110 >> 0x20);
          UStack_250.fields.uv2.fields.y = (float)uStack_108;
          UStack_250.fields.uv2.fields.z = (float)((ulong)uStack_108 >> 0x20);
          UStack_250.fields.color.fields.r = auStack_140[0x10];
          UStack_250.fields.color.fields.g = auStack_140[0x11];
          UStack_250.fields.color.fields.b = auStack_140[0x12];
          UStack_250.fields.color.fields.a = auStack_140[0x13];
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (__this_01->fields)._items;
          UStack_250.fields.color.fields.rgba = iVar11;
          if (pUVar4 == (UnityEngine_UIVertex_array *)0x0) goto label_03b34c11;
          uVar16 = (__this_01->fields)._size;
          lVar15 = (long)(int)uVar16;
          UStack_250.fields.color.fields._4_4_ = uVar5;
          if ((uint)pUVar4->max_length <= uVar16) break;
          (__this_01->fields)._size = uVar16 + 1;
          lVar14 = lVar15 * 0x6c;
          puVar2 = (undefined8 *)((long)&pUVar4->m_Items[0].fields.uv2 + lVar14 + 0xc);
          *puVar2 = CONCAT44(fStack_fc,fStack_100);
          puVar2[1] = CONCAT44(fStack_f4,fStack_f8);
          puVar2 = (undefined8 *)((long)&pUVar4->m_Items[0].fields.uv2 + lVar14);
          *puVar2 = CONCAT44(UStack_250.fields.uv2.fields.y,UStack_250.fields.uv2.fields.x);
          puVar2[1] = CONCAT44(fStack_100,UStack_250.fields.uv2.fields.z);
          puVar2 = (undefined8 *)((long)&pUVar4->m_Items[0].fields.uv1 + lVar14);
          *puVar2 = CONCAT44(fStack_118,fStack_11c);
          puVar2[1] = CONCAT44(UStack_250.fields.uv1.fields.w,fStack_114);
          puVar2 = (undefined8 *)((long)&pUVar4->m_Items[0].fields.uv0 + lVar14);
          *puVar2 = CONCAT44(fStack_128,fStack_12c);
          puVar2[1] = CONCAT44(fStack_120,fStack_124);
          puVar2 = (undefined8 *)((long)&pUVar4->m_Items[0].fields.tangent + lVar14 + 8);
          *puVar2 = _fStack_18c;
          puVar2[1] = CONCAT44(auStack_140._16_4_,iVar11);
          pUVar6 = &pUVar4->m_Items[0].fields.normal + lVar15 * 9;
          (pUVar6->fields).y = UStack_250.fields.normal.fields.y;
          (pUVar6->fields).z = fStack_198;
          *(ulong *)(&(pUVar6->fields).y + 2) = CONCAT44(fStack_190,fStack_194);
          pUVar3 = &(&pUVar4->m_Items[0].fields.position)[lVar15 * 9].fields;
          pUVar3->x = fVar27;
          pUVar3->y = fVar26;
          *(ulong *)&pUVar3->z =
               CONCAT44(UStack_250.fields.normal.fields.x,UStack_250.fields.position.fields.z);
          iVar18 = iVar18 + 1;
          UStack_250.fields.tangent.fields._8_8_ = uVar25;
          if (*(int *)&(__this_03->_1).namespaze <= iVar18) {
            return;
          }
        }
        item.fields.uv3.fields.z = fStack_f4;
        item.fields.uv3.fields.y = fStack_f8;
        item.fields.uv2.fields.y = UStack_250.fields.uv2.fields.y;
        item.fields.uv2.fields.x = UStack_250.fields.uv2.fields.x;
        item.fields.uv1.fields.y = fStack_118;
        item.fields.uv1.fields.x = fStack_11c;
        item.fields.uv1.fields.w = UStack_250.fields.uv1.fields.w;
        item.fields.uv1.fields.z = fStack_114;
        item.fields.normal.fields.x = UStack_250.fields.normal.fields.x;
        item.fields.position.fields.z = UStack_250.fields.position.fields.z;
        item.fields.normal.fields.z = fStack_198;
        item.fields.normal.fields.y = UStack_250.fields.normal.fields.y;
        item.fields.tangent.fields.y = fStack_190;
        item.fields.tangent.fields.x = fStack_194;
        item.fields.color.fields.r = auStack_140[0x10];
        item.fields.color.fields.g = auStack_140[0x11];
        item.fields.color.fields.b = auStack_140[0x12];
        item.fields.color.fields.a = auStack_140[0x13];
        item.fields.color.fields.rgba = iVar11;
        item.fields.uv0.fields.y = fStack_128;
        item.fields.uv0.fields.x = fStack_12c;
        item.fields.uv0.fields.w = fStack_120;
        item.fields.uv0.fields.z = fStack_124;
        item.fields.position.fields.x = fVar27;
        item.fields.position.fields.y = fVar26;
        item.fields.tangent.fields.z = fStack_18c;
        item.fields.tangent.fields.w = fStack_188;
        item.fields.uv2.fields.z = UStack_250.fields.uv2.fields.z;
        item.fields.uv2.fields.w = fStack_100;
        item.fields.uv3.fields.x = fStack_fc;
        item.fields.uv3.fields.w = in_stack_fffffffffffffd6c;
        UStack_250.fields.tangent.fields._8_8_ = uVar25;
        System_Collections_Generic_List_UIVertex___AddWithResize
                  (__this_01,item,*(MethodInfo_3691EE0 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
        ;
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)&(__this_03->_1).namespaze);
    }
    return;
  }
label_03b34c11:
  uVar25 = il2cpp_runtime_helper_022b2c90();
  fVar27 = sinf((float)((ulong)uVar25 >> 0x20) * 78.233 + (float)uVar25 * 12.9898 + (float)iVar17 * 37.719);
  floorf(fVar27 * 43758.547);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_Color_o color, UnityEngine_Vector2_o offset, int32_t layers, float grain, bool solid, const MethodInfo* method);
// 0x3b34500

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_3a34500
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,UnityEngine_Color_o color,
               UnityEngine_Vector2_o offset,int32_t layers,float grain,bool_conflict solid,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 *puVar2;
  UnityEngine_Vector3_Fields *pUVar3;
  System_Collections_Generic_List_Vector4__o *pSVar4;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UIVertex_array *pUVar5;
  undefined4 uVar6;
  UnityEngine_UIVertex_o item;
  UnityEngine_Vector3_o *pUVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  UnityEngine_UI_Graphic_o *x;
  UnityEngine_UI_Graphic_o *pUVar13;
  UnityEngine_UI_VertexHelper_o *__this_00;
  long lVar14;
  System_Collections_Generic_List_UIVertex__o *__this_01;
  long lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  UnityEngine_UI_VertexHelper_o *__this_02;
  Il2CppClass *__this_03;
  UnityEngine_UI_VertexHelper_o *__this_04;
  UnityEngine_UI_VertexHelper_o *pUVar19;
  MethodInfo_36918A0 **ppMVar20;
  MethodInfo *in_R8;
  Il2CppClass *unaff_R12;
  undefined8 *unaff_R13;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float in_stack_fffffffffffffda4;
  UnityEngine_UIVertex_o UStack_218;
  undefined4 uStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [20];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGStack_b0;
  Il2CppClass *pIStack_a8;
  undefined8 *puStack_a0;
  UnityEngine_UI_VertexHelper_o *pUStack_98;
  UnityEngine_UI_VertexHelper_o *pUStack_90;
  UnityEngine_UI_Graphic_o *pUStack_88;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGStack_80;
  
  iVar18 = (int)method;
  if (g_data_057a9c4d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c4d = '\x01';
  }
  (__this->fields)._color.fields.r = color.fields.r;
  (__this->fields)._color.fields.g = color.fields.g;
  (__this->fields)._color.fields.b = color.fields.b;
  (__this->fields)._color.fields.a = color.fields.a;
  (__this->fields)._offset.fields = offset.fields;
  iVar12 = 1;
  if (0 < layers) {
    iVar12 = layers;
  }
  (__this->fields)._layers = iVar12;
  fVar26 = 0.0;
  if (0.0 <= grain) {
    fVar26 = grain;
  }
  (__this->fields)._grain = fVar26;
  *(char *)&(__this->fields)._solid = (char)solid;
  x = UnityEngine_UI_BaseMeshEffect__get_graphic((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  __this_02 = (UnityEngine_UI_VertexHelper_o *)0x0;
  __this_04 = (UnityEngine_UI_VertexHelper_o *)__this;
  pUVar13 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_UI_Graphic_o *)0x0) {
    vtableDispatch = (pUVar13->klass->vtable)._28_SetVerticesDirty.methodPtr;
    (*vtableDispatch)
              (pUVar13,(pUVar13->klass->vtable)._28_SetVerticesDirty.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_80 = __this;
  if (g_data_057a9c4e == '\0') {
    pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b34614;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b34620;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b3462c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b34638;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b34644;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_UIVertex);
    g_data_057a9c4e = '\x01';
  }
  __this_03 = __this_04->klass[1]._1.castClass;
  pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b3465e;
  pUVar19 = __this_04;
  cVar10 = (*(code *)__this_04->klass[1]._1.element_class)();
  if (cVar10 == '\0') {
    return;
  }
  if (__this_02 != (UnityEngine_UI_VertexHelper_o *)0x0) {
    pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b34679;
    iVar12 = UnityEngine_UI_VertexHelper__get_currentVertCount(__this_02,(MethodInfo *)0x0);
    if (iVar12 == 0) {
      return;
    }
    unaff_R13 = &TypeInfo_List_UIVertex;
    pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b34691;
    unaff_R12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
    pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b346a6;
    System_Collections_Generic_List_UIVertex____ctor
              ((System_Collections_Generic_List_UIVertex__o *)unaff_R12,MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b346b3;
    __this_03 = unaff_R12;
    pUVar19 = __this_02;
    UnityEngine_UI_VertexHelper__GetUIVertexStream
              (__this_02,(System_Collections_Generic_List_UIVertex__o *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (Il2CppClass *)0x0) {
      uVar16 = (*(int *)&(__this_04->fields).m_Normals + 1) * *(int *)&(unaff_R12->_1).namespaze;
      pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b346d2;
      __this_00 = (UnityEngine_UI_VertexHelper_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
      __this_03 = (Il2CppClass *)(ulong)uVar16;
      pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b346e9;
      pUVar19 = __this_00;
      System_Collections_Generic_List_UIVertex____ctor_3691300
                ((System_Collections_Generic_List_UIVertex__o *)__this_00,uVar16,MethodInfo_List_1_UnityEngine_UIVertex);
      uVar16 = *(uint *)&(__this_04->fields).m_Normals;
      __this = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)(ulong)uVar16;
      if (0 < (int)uVar16) {
        do {
          iVar17 = (int)__this;
          pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b34710;
          __this_03 = unaff_R12;
          pUVar19 = __this_04;
          iVar18 = iVar17;
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer
                    ((Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)__this_04,
                     (System_Collections_Generic_List_UIVertex__o *)unaff_R12,
                     (System_Collections_Generic_List_UIVertex__o *)__this_00,iVar17,in_R8);
          __this = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)(ulong)(iVar17 - 1);
        } while (1 < iVar17);
      }
      unaff_R13 = (undefined8 *)0x0;
      if (__this_00 != (UnityEngine_UI_VertexHelper_o *)0x0) {
        pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b34734;
        System_Collections_Generic_List_UIVertex___AddRange
                  ((System_Collections_Generic_List_UIVertex__o *)__this_00,
                   (System_Collections_Generic_IEnumerable_T__o *)unaff_R12,MethodInfo_Void_AddRange);
        pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b3473e;
        UnityEngine_UI_VertexHelper__Clear(__this_02,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream
                  (__this_02,(System_Collections_Generic_List_UIVertex__o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  pUStack_88 = (UnityEngine_UI_Graphic_o *)0x3b34763;
  il2cpp_runtime_helper_022b2c90();
  ppMVar20 = (MethodInfo_36918A0 **)pUVar19;
  pGStack_b0 = __this;
  pIStack_a8 = unaff_R12;
  puStack_a0 = unaff_R13;
  pUStack_98 = __this_02;
  pUStack_90 = __this_04;
  pUStack_88 = x;
  if (g_data_057a9c4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    ppMVar20 = &MethodInfo_UIVertex_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c4f = '\x01';
  }
  iVar17 = (int)ppMVar20;
  uStack_1a8._0_1_ = '\0';
  uStack_1a8._1_1_ = '\0';
  uStack_1a8._2_1_ = '\0';
  uStack_1a8._3_1_ = '\0';
  fStack_1a4 = 0.0;
  fStack_1a0 = 0.0;
  fStack_19c = 0.0;
  fStack_198 = 0.0;
  fStack_194 = 0.0;
  fStack_190 = 0.0;
  fStack_18c = 0.0;
  uStack_188 = 0;
  uStack_180 = 0;
  fStack_178 = 0.0;
  fStack_174 = 0.0;
  fStack_170 = 0.0;
  fStack_16c = 0.0;
  fVar21 = (float)iVar18;
  fVar25 = (float)*(int *)&(pUVar19->fields).m_Normals;
  fVar22 = fVar21 / fVar25;
  pSVar4 = (pUVar19->fields).m_Uv3S;
  fVar23 = (float)((ulong)pSVar4 >> 0x20);
  fVar26 = *(float *)((long)&(pUVar19->fields).m_Uv2S + 4);
  if (*(char *)&(pUVar19->fields).m_Tangents == '\0') {
    fVar26 = (fVar26 * (fVar22 * -0.55 + 1.1)) / fVar25;
  }
  auStack_128 = ZEXT416((uint)fVar26);
  if (__this_03 != (Il2CppClass *)0x0) {
    if (0 < *(int *)&(__this_03->_1).namespaze) {
      uStack_138 = CONCAT44(fVar23,SUB84(pSVar4,0) * fVar22);
      uStack_130 = 0;
      uStack_148 = CONCAT44(fVar23,fVar23 * fVar22);
      uStack_140 = 0;
      iVar18 = 0;
      do {
        while( true ) {
          System_Collections_Generic_List_UIVertex___get_Item
                    (&UStack_218,(System_Collections_Generic_List_UIVertex__o *)__this_03,iVar18,MethodInfo_UIVertex_get_Item)
          ;
          uVar8 = UStack_218.fields.tangent.fields._8_8_;
          fVar22 = UStack_218.fields.position.fields.z;
          fVar26 = UStack_218.fields.position.fields.y;
          uVar24 = CONCAT44(UStack_218.fields.normal.fields.y,UStack_218.fields.normal.fields.x);
          uStack_1a8._0_1_ = UStack_218.fields.color.fields.r;
          uStack_1a8._1_1_ = UStack_218.fields.color.fields.g;
          uStack_1a8._2_1_ = UStack_218.fields.color.fields.b;
          uStack_1a8._3_1_ = UStack_218.fields.color.fields.a;
          fStack_1a4 = UStack_218.fields.uv0.fields.x;
          fStack_1a0 = UStack_218.fields.uv0.fields.y;
          fStack_19c = UStack_218.fields.uv0.fields.z;
          fStack_198 = UStack_218.fields.uv0.fields.w;
          fStack_194 = UStack_218.fields.uv1.fields.x;
          fStack_190 = UStack_218.fields.uv1.fields.y;
          fStack_18c = UStack_218.fields.uv1.fields.z;
          uStack_188 = CONCAT44(UStack_218.fields.uv2.fields.x,UStack_218.fields.uv1.fields.w);
          uStack_180 = CONCAT44(UStack_218.fields.uv2.fields.z,UStack_218.fields.uv2.fields.y);
          fStack_178 = UStack_218.fields.uv2.fields.w;
          fStack_174 = UStack_218.fields.uv3.fields.x;
          fStack_170 = UStack_218.fields.uv3.fields.y;
          fStack_16c = UStack_218.fields.uv3.fields.z;
          auStack_108._0_4_ = UStack_218.fields.position.fields.x;
          auStack_108._4_4_ = UStack_218.fields.position.fields.y;
          auStack_108._8_8_ = 0;
          uStack_118 = CONCAT44(fVar26,fVar26);
          uStack_110 = 0;
          fVar25 = sinf(fVar26 * 78.233 + UStack_218.fields.position.fields.x * 12.9898 + fVar21 * 37.719);
          fVar26 = *(float *)((long)&(pUVar19->fields).m_Normals + 4);
          iVar17 = 0;
          iVar12 = il2cpp_runtime_helper_03b428b0((int)(pUVar19->fields).m_Uv1S,*(undefined4 *)&(pUVar19->fields).m_Uv2S);
          uVar9 = UStack_218.fields.tangent.fields._8_8_;
          fStack_160 = UStack_218.fields.normal.fields.z;
          fStack_15c = UStack_218.fields.tangent.fields.x;
          fStack_158 = UStack_218.fields.tangent.fields.y;
          UStack_218.fields.tangent.fields.z = (float)uVar8;
          UStack_218.fields.tangent.fields.w = SUB84(uVar8,4);
          fStack_154 = UStack_218.fields.tangent.fields.z;
          fStack_150 = UStack_218.fields.tangent.fields.w;
          auStack_108[0x10] = (uint8_t)uStack_1a8;
          auStack_108[0x11] = uStack_1a8._1_1_;
          auStack_108[0x12] = uStack_1a8._2_1_;
          auStack_108[0x13] = uStack_1a8._3_1_;
          fStack_f4 = fStack_1a4;
          fStack_f0 = fStack_1a0;
          fStack_ec = fStack_19c;
          fStack_e8 = fStack_198;
          fStack_e4 = fStack_194;
          fStack_e0 = fStack_190;
          fStack_dc = fStack_18c;
          uStack_d8 = uStack_188;
          uStack_d0 = uStack_180;
          fStack_c8 = fStack_178;
          fStack_c4 = fStack_174;
          fStack_c0 = fStack_170;
          fStack_bc = fStack_16c;
          UStack_218.fields.tangent.fields._8_8_ = uVar9;
          uStack_168 = uVar24;
          if (__this_01 == (System_Collections_Generic_List_UIVertex__o *)0x0) goto label_03b34c11;
          fVar23 = floorf(fVar25 * 43758.547);
          lVar14 = MethodInfo_Void_Add;
          fVar25 = fVar26 * ((fVar25 * 43758.547 - fVar23) + -0.5) * fVar21;
          fVar26 = (float)uStack_138 + fVar25 + (float)auStack_108._0_4_;
          fVar25 = ((float)uStack_148 - fVar25) + (float)uStack_118;
          UStack_218.fields.position.fields.z = fVar22 + 0.0;
          UStack_218.fields.position.fields.y = fVar25;
          UStack_218.fields.position.fields.x = fVar26;
          uVar24._0_4_ = fStack_154;
          uVar24._4_4_ = fStack_150;
          UStack_218.fields.tangent.fields.y = fStack_158;
          UStack_218.fields.tangent.fields.z = fStack_154;
          UStack_218.fields.tangent.fields.w = fStack_150;
          UStack_218.fields.normal.fields.x = (float)uStack_168;
          UStack_218.fields.normal.fields.y = (float)((ulong)uStack_168 >> 0x20);
          UStack_218.fields.normal.fields.z = fStack_160;
          UStack_218.fields.tangent.fields.x = fStack_15c;
          uVar6._0_1_ = auStack_108[0x10];
          uVar6._1_1_ = auStack_108[0x11];
          uVar6._2_1_ = auStack_108[0x12];
          uVar6._3_1_ = auStack_108[0x13];
          UStack_218.fields.uv0.fields.x = fStack_f4;
          UStack_218.fields.uv0.fields.y = fStack_f0;
          UStack_218.fields.uv0.fields.z = fStack_ec;
          UStack_218.fields.uv0.fields.w = fStack_e8;
          UStack_218.fields.uv1.fields.x = fStack_e4;
          UStack_218.fields.uv1.fields.y = fStack_e0;
          UStack_218.fields.uv1.fields.z = fStack_dc;
          UStack_218.fields.uv2.fields.w = fStack_c8;
          UStack_218.fields.uv3.fields.x = fStack_c4;
          UStack_218.fields.uv3.fields.y = fStack_c0;
          UStack_218.fields.uv3.fields.z = fStack_bc;
          UStack_218.fields.uv1.fields.w = (float)uStack_d8;
          UStack_218.fields.uv2.fields.x = (float)((ulong)uStack_d8 >> 0x20);
          UStack_218.fields.uv2.fields.y = (float)uStack_d0;
          UStack_218.fields.uv2.fields.z = (float)((ulong)uStack_d0 >> 0x20);
          UStack_218.fields.color.fields.r = auStack_108[0x10];
          UStack_218.fields.color.fields.g = auStack_108[0x11];
          UStack_218.fields.color.fields.b = auStack_108[0x12];
          UStack_218.fields.color.fields.a = auStack_108[0x13];
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (__this_01->fields)._items;
          UStack_218.fields.color.fields.rgba = iVar12;
          if (pUVar5 == (UnityEngine_UIVertex_array *)0x0) goto label_03b34c11;
          uVar16 = (__this_01->fields)._size;
          lVar15 = (long)(int)uVar16;
          UStack_218.fields.color.fields._4_4_ = uVar6;
          if ((uint)pUVar5->max_length <= uVar16) break;
          (__this_01->fields)._size = uVar16 + 1;
          lVar14 = lVar15 * 0x6c;
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv2 + lVar14 + 0xc);
          *puVar2 = CONCAT44(fStack_c4,fStack_c8);
          puVar2[1] = CONCAT44(fStack_bc,fStack_c0);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv2 + lVar14);
          *puVar2 = CONCAT44(UStack_218.fields.uv2.fields.y,UStack_218.fields.uv2.fields.x);
          puVar2[1] = CONCAT44(fStack_c8,UStack_218.fields.uv2.fields.z);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv1 + lVar14);
          *puVar2 = CONCAT44(fStack_e0,fStack_e4);
          puVar2[1] = CONCAT44(UStack_218.fields.uv1.fields.w,fStack_dc);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv0 + lVar14);
          *puVar2 = CONCAT44(fStack_f0,fStack_f4);
          puVar2[1] = CONCAT44(fStack_e8,fStack_ec);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.tangent + lVar14 + 8);
          *puVar2 = _fStack_154;
          puVar2[1] = CONCAT44(auStack_108._16_4_,iVar12);
          pUVar7 = &pUVar5->m_Items[0].fields.normal + lVar15 * 9;
          (pUVar7->fields).y = UStack_218.fields.normal.fields.y;
          (pUVar7->fields).z = fStack_160;
          *(ulong *)(&(pUVar7->fields).y + 2) = CONCAT44(fStack_158,fStack_15c);
          pUVar3 = &(&pUVar5->m_Items[0].fields.position)[lVar15 * 9].fields;
          pUVar3->x = fVar26;
          pUVar3->y = fVar25;
          *(ulong *)&pUVar3->z =
               CONCAT44(UStack_218.fields.normal.fields.x,UStack_218.fields.position.fields.z);
          iVar18 = iVar18 + 1;
          UStack_218.fields.tangent.fields._8_8_ = uVar24;
          if (*(int *)&(__this_03->_1).namespaze <= iVar18) {
            return;
          }
        }
        item.fields.uv3.fields.z = fStack_bc;
        item.fields.uv3.fields.y = fStack_c0;
        item.fields.uv2.fields.y = UStack_218.fields.uv2.fields.y;
        item.fields.uv2.fields.x = UStack_218.fields.uv2.fields.x;
        item.fields.uv1.fields.y = fStack_e0;
        item.fields.uv1.fields.x = fStack_e4;
        item.fields.uv1.fields.w = UStack_218.fields.uv1.fields.w;
        item.fields.uv1.fields.z = fStack_dc;
        item.fields.normal.fields.x = UStack_218.fields.normal.fields.x;
        item.fields.position.fields.z = UStack_218.fields.position.fields.z;
        item.fields.normal.fields.z = fStack_160;
        item.fields.normal.fields.y = UStack_218.fields.normal.fields.y;
        item.fields.tangent.fields.y = fStack_158;
        item.fields.tangent.fields.x = fStack_15c;
        item.fields.color.fields.r = auStack_108[0x10];
        item.fields.color.fields.g = auStack_108[0x11];
        item.fields.color.fields.b = auStack_108[0x12];
        item.fields.color.fields.a = auStack_108[0x13];
        item.fields.color.fields.rgba = iVar12;
        item.fields.uv0.fields.y = fStack_f0;
        item.fields.uv0.fields.x = fStack_f4;
        item.fields.uv0.fields.w = fStack_e8;
        item.fields.uv0.fields.z = fStack_ec;
        item.fields.position.fields.x = fVar26;
        item.fields.position.fields.y = fVar25;
        item.fields.tangent.fields.z = fStack_154;
        item.fields.tangent.fields.w = fStack_150;
        item.fields.uv2.fields.z = UStack_218.fields.uv2.fields.z;
        item.fields.uv2.fields.w = fStack_c8;
        item.fields.uv3.fields.x = fStack_c4;
        item.fields.uv3.fields.w = in_stack_fffffffffffffda4;
        UStack_218.fields.tangent.fields._8_8_ = uVar24;
        System_Collections_Generic_List_UIVertex___AddWithResize
                  (__this_01,item,*(MethodInfo_3691EE0 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
        ;
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)&(__this_03->_1).namespaze);
    }
    return;
  }
label_03b34c11:
  uVar24 = il2cpp_runtime_helper_022b2c90();
  fVar26 = sinf((float)((ulong)uVar24 >> 0x20) * 78.233 + (float)uVar24 * 12.9898 + (float)iVar17 * 37.719);
  floorf(fVar26 * 43758.547);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$ModifyMesh
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__ModifyMesh (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
// 0x3b345f0

void Gisketch_Aottg2UI_Styling_GisketchDropShadow__ModifyMesh
               (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this,UnityEngine_UI_VertexHelper_o *vh,
               MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 *puVar2;
  UnityEngine_Vector3_Fields *pUVar3;
  System_Collections_Generic_List_Vector4__o *pSVar4;
  UnityEngine_UIVertex_array *pUVar5;
  undefined4 uVar6;
  UnityEngine_UIVertex_o item;
  UnityEngine_Vector3_o *pUVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int32_t iVar11;
  UnityEngine_UI_VertexHelper_o *__this_00;
  int in_ECX;
  long lVar12;
  MethodInfo *extraout_RDX;
  System_Collections_Generic_List_UIVertex__o *__this_01;
  long lVar13;
  uint uVar14;
  int iVar15;
  int index;
  ulong unaff_RBX;
  MethodInfo *__this_02;
  UnityEngine_UI_VertexHelper_o *pUVar16;
  MethodInfo_36918A0 **ppMVar17;
  MethodInfo *in_R8;
  MethodInfo *unaff_R12;
  undefined8 *unaff_R13;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float in_stack_fffffffffffffdfc;
  UnityEngine_UIVertex_o UStack_1c0;
  undefined4 uStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [20];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  ulong uStack_58;
  MethodInfo *pMStack_50;
  undefined8 *puStack_48;
  UnityEngine_UI_VertexHelper_o *pUStack_40;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGStack_38;
  
  if (g_data_057a9c4e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_UIVertex);
    g_data_057a9c4e = '\x01';
    method = extraout_RDX;
  }
  __this_02 = (__this->klass->vtable)._9_IsActive.method;
  pUVar16 = (UnityEngine_UI_VertexHelper_o *)__this;
  cVar10 = (*(__this->klass->vtable)._9_IsActive.methodPtr)(__this,__this_02,method);
  if (cVar10 == '\0') {
    return;
  }
  if (vh != (UnityEngine_UI_VertexHelper_o *)0x0) {
    iVar11 = UnityEngine_UI_VertexHelper__get_currentVertCount(vh,(MethodInfo *)0x0);
    if (iVar11 == 0) {
      return;
    }
    unaff_R13 = &TypeInfo_List_UIVertex;
    unaff_R12 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
    System_Collections_Generic_List_UIVertex____ctor
              ((System_Collections_Generic_List_UIVertex__o *)unaff_R12,MethodInfo_List_1_UnityEngine_UIVertex);
    __this_02 = unaff_R12;
    pUVar16 = vh;
    UnityEngine_UI_VertexHelper__GetUIVertexStream
              (vh,(System_Collections_Generic_List_UIVertex__o *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (MethodInfo *)0x0) {
      uVar14 = ((__this->fields)._layers + 1) * *(int *)&unaff_R12->name;
      __this_00 = (UnityEngine_UI_VertexHelper_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
      __this_02 = (MethodInfo *)(ulong)uVar14;
      pUVar16 = __this_00;
      System_Collections_Generic_List_UIVertex____ctor_3691300
                ((System_Collections_Generic_List_UIVertex__o *)__this_00,uVar14,MethodInfo_List_1_UnityEngine_UIVertex);
      uVar14 = (__this->fields)._layers;
      unaff_RBX = (ulong)uVar14;
      if (0 < (int)uVar14) {
        do {
          iVar15 = (int)unaff_RBX;
          __this_02 = unaff_R12;
          pUVar16 = (UnityEngine_UI_VertexHelper_o *)__this;
          in_ECX = iVar15;
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer
                    (__this,(System_Collections_Generic_List_UIVertex__o *)unaff_R12,
                     (System_Collections_Generic_List_UIVertex__o *)__this_00,iVar15,in_R8);
          unaff_RBX = (ulong)(iVar15 - 1);
        } while (1 < iVar15);
      }
      unaff_R13 = (undefined8 *)0x0;
      if (__this_00 != (UnityEngine_UI_VertexHelper_o *)0x0) {
        System_Collections_Generic_List_UIVertex___AddRange
                  ((System_Collections_Generic_List_UIVertex__o *)__this_00,
                   (System_Collections_Generic_IEnumerable_T__o *)unaff_R12,MethodInfo_Void_AddRange);
        UnityEngine_UI_VertexHelper__Clear(vh,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream
                  (vh,(System_Collections_Generic_List_UIVertex__o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppMVar17 = (MethodInfo_36918A0 **)pUVar16;
  uStack_58 = unaff_RBX;
  pMStack_50 = unaff_R12;
  puStack_48 = unaff_R13;
  pUStack_40 = vh;
  pGStack_38 = __this;
  if (g_data_057a9c4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    ppMVar17 = &MethodInfo_UIVertex_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c4f = '\x01';
  }
  iVar15 = (int)ppMVar17;
  uStack_150._0_1_ = '\0';
  uStack_150._1_1_ = '\0';
  uStack_150._2_1_ = '\0';
  uStack_150._3_1_ = '\0';
  fStack_14c = 0.0;
  fStack_148 = 0.0;
  fStack_144 = 0.0;
  fStack_140 = 0.0;
  fStack_13c = 0.0;
  fStack_138 = 0.0;
  fStack_134 = 0.0;
  uStack_130 = 0;
  uStack_128 = 0;
  fStack_120 = 0.0;
  fStack_11c = 0.0;
  fStack_118 = 0.0;
  fStack_114 = 0.0;
  fVar18 = (float)in_ECX;
  fVar22 = (float)*(int *)&(pUVar16->fields).m_Normals;
  fVar19 = fVar18 / fVar22;
  pSVar4 = (pUVar16->fields).m_Uv3S;
  fVar20 = (float)((ulong)pSVar4 >> 0x20);
  fVar23 = *(float *)((long)&(pUVar16->fields).m_Uv2S + 4);
  if (*(char *)&(pUVar16->fields).m_Tangents == '\0') {
    fVar23 = (fVar23 * (fVar19 * -0.55 + 1.1)) / fVar22;
  }
  auStack_d0 = ZEXT416((uint)fVar23);
  if (__this_02 != (MethodInfo *)0x0) {
    if (0 < *(int *)&__this_02->name) {
      uStack_e0 = CONCAT44(fVar20,SUB84(pSVar4,0) * fVar19);
      uStack_d8 = 0;
      uStack_f0 = CONCAT44(fVar20,fVar20 * fVar19);
      uStack_e8 = 0;
      index = 0;
      do {
        while( true ) {
          System_Collections_Generic_List_UIVertex___get_Item
                    (&UStack_1c0,(System_Collections_Generic_List_UIVertex__o *)__this_02,index,MethodInfo_UIVertex_get_Item);
          uVar8 = UStack_1c0.fields.tangent.fields._8_8_;
          fVar19 = UStack_1c0.fields.position.fields.z;
          fVar23 = UStack_1c0.fields.position.fields.y;
          uVar21 = CONCAT44(UStack_1c0.fields.normal.fields.y,UStack_1c0.fields.normal.fields.x);
          uStack_150._0_1_ = UStack_1c0.fields.color.fields.r;
          uStack_150._1_1_ = UStack_1c0.fields.color.fields.g;
          uStack_150._2_1_ = UStack_1c0.fields.color.fields.b;
          uStack_150._3_1_ = UStack_1c0.fields.color.fields.a;
          fStack_14c = UStack_1c0.fields.uv0.fields.x;
          fStack_148 = UStack_1c0.fields.uv0.fields.y;
          fStack_144 = UStack_1c0.fields.uv0.fields.z;
          fStack_140 = UStack_1c0.fields.uv0.fields.w;
          fStack_13c = UStack_1c0.fields.uv1.fields.x;
          fStack_138 = UStack_1c0.fields.uv1.fields.y;
          fStack_134 = UStack_1c0.fields.uv1.fields.z;
          uStack_130 = CONCAT44(UStack_1c0.fields.uv2.fields.x,UStack_1c0.fields.uv1.fields.w);
          uStack_128 = CONCAT44(UStack_1c0.fields.uv2.fields.z,UStack_1c0.fields.uv2.fields.y);
          fStack_120 = UStack_1c0.fields.uv2.fields.w;
          fStack_11c = UStack_1c0.fields.uv3.fields.x;
          fStack_118 = UStack_1c0.fields.uv3.fields.y;
          fStack_114 = UStack_1c0.fields.uv3.fields.z;
          auStack_b0._0_4_ = UStack_1c0.fields.position.fields.x;
          auStack_b0._4_4_ = UStack_1c0.fields.position.fields.y;
          auStack_b0._8_8_ = 0;
          uStack_c0 = CONCAT44(fVar23,fVar23);
          uStack_b8 = 0;
          fVar22 = sinf(fVar23 * 78.233 + UStack_1c0.fields.position.fields.x * 12.9898 + fVar18 * 37.719);
          fVar23 = *(float *)((long)&(pUVar16->fields).m_Normals + 4);
          iVar15 = 0;
          iVar11 = il2cpp_runtime_helper_03b428b0((int)(pUVar16->fields).m_Uv1S,*(undefined4 *)&(pUVar16->fields).m_Uv2S);
          uVar9 = UStack_1c0.fields.tangent.fields._8_8_;
          fStack_108 = UStack_1c0.fields.normal.fields.z;
          fStack_104 = UStack_1c0.fields.tangent.fields.x;
          fStack_100 = UStack_1c0.fields.tangent.fields.y;
          UStack_1c0.fields.tangent.fields.z = (float)uVar8;
          UStack_1c0.fields.tangent.fields.w = SUB84(uVar8,4);
          fStack_fc = UStack_1c0.fields.tangent.fields.z;
          fStack_f8 = UStack_1c0.fields.tangent.fields.w;
          auStack_b0[0x10] = (uint8_t)uStack_150;
          auStack_b0[0x11] = uStack_150._1_1_;
          auStack_b0[0x12] = uStack_150._2_1_;
          auStack_b0[0x13] = uStack_150._3_1_;
          fStack_9c = fStack_14c;
          fStack_98 = fStack_148;
          fStack_94 = fStack_144;
          fStack_90 = fStack_140;
          fStack_8c = fStack_13c;
          fStack_88 = fStack_138;
          fStack_84 = fStack_134;
          uStack_80 = uStack_130;
          uStack_78 = uStack_128;
          fStack_70 = fStack_120;
          fStack_6c = fStack_11c;
          fStack_68 = fStack_118;
          fStack_64 = fStack_114;
          UStack_1c0.fields.tangent.fields._8_8_ = uVar9;
          uStack_110 = uVar21;
          if (__this_01 == (System_Collections_Generic_List_UIVertex__o *)0x0) goto label_03b34c11;
          fVar20 = floorf(fVar22 * 43758.547);
          lVar12 = MethodInfo_Void_Add;
          fVar22 = fVar23 * ((fVar22 * 43758.547 - fVar20) + -0.5) * fVar18;
          fVar23 = (float)uStack_e0 + fVar22 + (float)auStack_b0._0_4_;
          fVar22 = ((float)uStack_f0 - fVar22) + (float)uStack_c0;
          UStack_1c0.fields.position.fields.z = fVar19 + 0.0;
          UStack_1c0.fields.position.fields.y = fVar22;
          UStack_1c0.fields.position.fields.x = fVar23;
          uVar21._0_4_ = fStack_fc;
          uVar21._4_4_ = fStack_f8;
          UStack_1c0.fields.tangent.fields.y = fStack_100;
          UStack_1c0.fields.tangent.fields.z = fStack_fc;
          UStack_1c0.fields.tangent.fields.w = fStack_f8;
          UStack_1c0.fields.normal.fields.x = (float)uStack_110;
          UStack_1c0.fields.normal.fields.y = (float)((ulong)uStack_110 >> 0x20);
          UStack_1c0.fields.normal.fields.z = fStack_108;
          UStack_1c0.fields.tangent.fields.x = fStack_104;
          uVar6._0_1_ = auStack_b0[0x10];
          uVar6._1_1_ = auStack_b0[0x11];
          uVar6._2_1_ = auStack_b0[0x12];
          uVar6._3_1_ = auStack_b0[0x13];
          UStack_1c0.fields.uv0.fields.x = fStack_9c;
          UStack_1c0.fields.uv0.fields.y = fStack_98;
          UStack_1c0.fields.uv0.fields.z = fStack_94;
          UStack_1c0.fields.uv0.fields.w = fStack_90;
          UStack_1c0.fields.uv1.fields.x = fStack_8c;
          UStack_1c0.fields.uv1.fields.y = fStack_88;
          UStack_1c0.fields.uv1.fields.z = fStack_84;
          UStack_1c0.fields.uv2.fields.w = fStack_70;
          UStack_1c0.fields.uv3.fields.x = fStack_6c;
          UStack_1c0.fields.uv3.fields.y = fStack_68;
          UStack_1c0.fields.uv3.fields.z = fStack_64;
          UStack_1c0.fields.uv1.fields.w = (float)uStack_80;
          UStack_1c0.fields.uv2.fields.x = (float)((ulong)uStack_80 >> 0x20);
          UStack_1c0.fields.uv2.fields.y = (float)uStack_78;
          UStack_1c0.fields.uv2.fields.z = (float)((ulong)uStack_78 >> 0x20);
          UStack_1c0.fields.color.fields.r = auStack_b0[0x10];
          UStack_1c0.fields.color.fields.g = auStack_b0[0x11];
          UStack_1c0.fields.color.fields.b = auStack_b0[0x12];
          UStack_1c0.fields.color.fields.a = auStack_b0[0x13];
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (__this_01->fields)._items;
          UStack_1c0.fields.color.fields.rgba = iVar11;
          if (pUVar5 == (UnityEngine_UIVertex_array *)0x0) goto label_03b34c11;
          uVar14 = (__this_01->fields)._size;
          lVar13 = (long)(int)uVar14;
          UStack_1c0.fields.color.fields._4_4_ = uVar6;
          if ((uint)pUVar5->max_length <= uVar14) break;
          (__this_01->fields)._size = uVar14 + 1;
          lVar12 = lVar13 * 0x6c;
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv2 + lVar12 + 0xc);
          *puVar2 = CONCAT44(fStack_6c,fStack_70);
          puVar2[1] = CONCAT44(fStack_64,fStack_68);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv2 + lVar12);
          *puVar2 = CONCAT44(UStack_1c0.fields.uv2.fields.y,UStack_1c0.fields.uv2.fields.x);
          puVar2[1] = CONCAT44(fStack_70,UStack_1c0.fields.uv2.fields.z);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv1 + lVar12);
          *puVar2 = CONCAT44(fStack_88,fStack_8c);
          puVar2[1] = CONCAT44(UStack_1c0.fields.uv1.fields.w,fStack_84);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv0 + lVar12);
          *puVar2 = CONCAT44(fStack_98,fStack_9c);
          puVar2[1] = CONCAT44(fStack_90,fStack_94);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.tangent + lVar12 + 8);
          *puVar2 = _fStack_fc;
          puVar2[1] = CONCAT44(auStack_b0._16_4_,iVar11);
          pUVar7 = &pUVar5->m_Items[0].fields.normal + lVar13 * 9;
          (pUVar7->fields).y = UStack_1c0.fields.normal.fields.y;
          (pUVar7->fields).z = fStack_108;
          *(ulong *)(&(pUVar7->fields).y + 2) = CONCAT44(fStack_100,fStack_104);
          pUVar3 = &(&pUVar5->m_Items[0].fields.position)[lVar13 * 9].fields;
          pUVar3->x = fVar23;
          pUVar3->y = fVar22;
          *(ulong *)&pUVar3->z =
               CONCAT44(UStack_1c0.fields.normal.fields.x,UStack_1c0.fields.position.fields.z);
          index = index + 1;
          UStack_1c0.fields.tangent.fields._8_8_ = uVar21;
          if (*(int *)&__this_02->name <= index) {
            return;
          }
        }
        item.fields.uv3.fields.z = fStack_64;
        item.fields.uv3.fields.y = fStack_68;
        item.fields.uv2.fields.y = UStack_1c0.fields.uv2.fields.y;
        item.fields.uv2.fields.x = UStack_1c0.fields.uv2.fields.x;
        item.fields.uv1.fields.y = fStack_88;
        item.fields.uv1.fields.x = fStack_8c;
        item.fields.uv1.fields.w = UStack_1c0.fields.uv1.fields.w;
        item.fields.uv1.fields.z = fStack_84;
        item.fields.normal.fields.x = UStack_1c0.fields.normal.fields.x;
        item.fields.position.fields.z = UStack_1c0.fields.position.fields.z;
        item.fields.normal.fields.z = fStack_108;
        item.fields.normal.fields.y = UStack_1c0.fields.normal.fields.y;
        item.fields.tangent.fields.y = fStack_100;
        item.fields.tangent.fields.x = fStack_104;
        item.fields.color.fields.r = auStack_b0[0x10];
        item.fields.color.fields.g = auStack_b0[0x11];
        item.fields.color.fields.b = auStack_b0[0x12];
        item.fields.color.fields.a = auStack_b0[0x13];
        item.fields.color.fields.rgba = iVar11;
        item.fields.uv0.fields.y = fStack_98;
        item.fields.uv0.fields.x = fStack_9c;
        item.fields.uv0.fields.w = fStack_90;
        item.fields.uv0.fields.z = fStack_94;
        item.fields.position.fields.x = fVar23;
        item.fields.position.fields.y = fVar22;
        item.fields.tangent.fields.z = fStack_fc;
        item.fields.tangent.fields.w = fStack_f8;
        item.fields.uv2.fields.z = UStack_1c0.fields.uv2.fields.z;
        item.fields.uv2.fields.w = fStack_70;
        item.fields.uv3.fields.x = fStack_6c;
        item.fields.uv3.fields.w = in_stack_fffffffffffffdfc;
        UStack_1c0.fields.tangent.fields._8_8_ = uVar21;
        System_Collections_Generic_List_UIVertex___AddWithResize
                  (__this_01,item,*(MethodInfo_3691EE0 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
        ;
        index = index + 1;
      } while (index < *(int *)&__this_02->name);
    }
    return;
  }
label_03b34c11:
  uVar21 = il2cpp_runtime_helper_022b2c90();
  fVar23 = sinf((float)((ulong)uVar21 >> 0x20) * 78.233 + (float)uVar21 * 12.9898 + (float)iVar15 * 37.719);
  floorf(fVar23 * 43758.547);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$AddLayer
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* __this, System_Collections_Generic_List_UIVertex__o* source, System_Collections_Generic_List_UIVertex__o* output, int32_t layer, const MethodInfo* method);
// 0x3b34770

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
  UnityEngine_Vector3_Fields *pUVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int32_t iVar12;
  long lVar13;
  long lVar14;
  int index;
  int iVar15;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
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
  
  pGVar16 = __this;
  if (g_data_057a9c4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar16 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)&MethodInfo_UIVertex_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c4f = '\x01';
  }
  iVar15 = (int)pGVar16;
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
  fVar17 = (float)layer;
  fVar21 = (float)(__this->fields)._layers;
  fVar18 = fVar17 / fVar21;
  UVar5 = (__this->fields)._offset.fields;
  fVar19 = UVar5.y;
  fVar22 = (__this->fields)._color.fields.a;
  if ((char)(__this->fields)._solid == '\0') {
    fVar22 = (fVar22 * (fVar18 * -0.55 + 1.1)) / fVar21;
  }
  local_a8 = ZEXT416((uint)fVar22);
  if (source != (System_Collections_Generic_List_UIVertex__o *)0x0) {
    if (0 < (source->fields)._size) {
      local_b8 = CONCAT44(fVar19,UVar5.x * fVar18);
      uStack_b0 = 0;
      local_c8 = CONCAT44(fVar19,fVar19 * fVar18);
      uStack_c0 = 0;
      index = 0;
      do {
        while( true ) {
          System_Collections_Generic_List_UIVertex___get_Item(&local_198,source,index,MethodInfo_UIVertex_get_Item);
          uVar10 = local_198.fields.tangent.fields._8_8_;
          fVar18 = local_198.fields.position.fields.z;
          fVar22 = local_198.fields.position.fields.y;
          uVar20 = CONCAT44(local_198.fields.normal.fields.y,local_198.fields.normal.fields.x);
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
          local_98 = CONCAT44(fVar22,fVar22);
          uStack_90 = 0;
          fVar21 = sinf(fVar22 * 78.233 + local_198.fields.position.fields.x * 12.9898 + fVar17 * 37.719);
          fVar22 = (__this->fields)._grain;
          uVar4 = (__this->fields)._color.fields.r;
          iVar15 = 0;
          iVar12 = il2cpp_runtime_helper_03b428b0(uVar4,(__this->fields)._color.fields.b);
          uVar11 = local_198.fields.tangent.fields._8_8_;
          fStack_e0 = local_198.fields.normal.fields.z;
          fStack_dc = local_198.fields.tangent.fields.x;
          fStack_d8 = local_198.fields.tangent.fields.y;
          local_198.fields.tangent.fields.z = (float)uVar10;
          local_198.fields.tangent.fields.w = SUB84(uVar10,4);
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
          local_198.fields.tangent.fields._8_8_ = uVar11;
          local_e8 = uVar20;
          if (output == (System_Collections_Generic_List_UIVertex__o *)0x0) goto label_03b34c11;
          fVar19 = floorf(fVar21 * 43758.547);
          lVar13 = MethodInfo_Void_Add;
          fVar21 = fVar22 * ((fVar21 * 43758.547 - fVar19) + -0.5) * fVar17;
          fVar22 = (float)local_b8 + fVar21 + (float)local_88._0_4_;
          fVar21 = ((float)local_c8 - fVar21) + (float)local_98;
          local_198.fields.position.fields.z = fVar18 + 0.0;
          local_198.fields.position.fields.y = fVar21;
          local_198.fields.position.fields.x = fVar22;
          uVar20._0_4_ = fStack_d4;
          uVar20._4_4_ = fStack_d0;
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
          local_198.fields.color.fields.rgba = iVar12;
          if (pUVar7 == (UnityEngine_UIVertex_array *)0x0) goto label_03b34c11;
          uVar6 = (output->fields)._size;
          lVar14 = (long)(int)uVar6;
          local_198.fields.color.fields._4_4_ = uVar8;
          if ((uint)pUVar7->max_length <= uVar6) break;
          (output->fields)._size = uVar6 + 1;
          lVar13 = lVar14 * 0x6c;
          puVar2 = (undefined8 *)((long)&pUVar7->m_Items[0].fields.uv2 + lVar13 + 0xc);
          *puVar2 = CONCAT44(fStack_44,local_48);
          puVar2[1] = CONCAT44(fStack_3c,fStack_40);
          puVar2 = (undefined8 *)((long)&pUVar7->m_Items[0].fields.uv2 + lVar13);
          *puVar2 = CONCAT44(local_198.fields.uv2.fields.y,local_198.fields.uv2.fields.x);
          puVar2[1] = CONCAT44(local_48,local_198.fields.uv2.fields.z);
          puVar2 = (undefined8 *)((long)&pUVar7->m_Items[0].fields.uv1 + lVar13);
          *puVar2 = CONCAT44(fStack_60,fStack_64);
          puVar2[1] = CONCAT44(local_198.fields.uv1.fields.w,fStack_5c);
          puVar2 = (undefined8 *)((long)&pUVar7->m_Items[0].fields.uv0 + lVar13);
          *puVar2 = CONCAT44(fStack_70,fStack_74);
          puVar2[1] = CONCAT44(local_68,fStack_6c);
          puVar2 = (undefined8 *)((long)&pUVar7->m_Items[0].fields.tangent + lVar13 + 8);
          *puVar2 = _fStack_d4;
          puVar2[1] = CONCAT44(local_88._16_4_,iVar12);
          pUVar9 = &(&pUVar7->m_Items[0].fields.normal)[lVar14 * 9].fields;
          pUVar9->y = local_198.fields.normal.fields.y;
          pUVar9->z = fStack_e0;
          *(ulong *)(pUVar9 + 1) = CONCAT44(fStack_d8,fStack_dc);
          pUVar3 = &pUVar7->m_Items[0].fields.position + lVar14 * 9;
          (pUVar3->fields).x = fVar22;
          (pUVar3->fields).y = fVar21;
          *(ulong *)&(pUVar3->fields).z =
               CONCAT44(local_198.fields.normal.fields.x,local_198.fields.position.fields.z);
          index = index + 1;
          local_198.fields.tangent.fields._8_8_ = uVar20;
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
        item.fields.color.fields.rgba = iVar12;
        item.fields.uv0.fields.y = fStack_70;
        item.fields.uv0.fields.x = fStack_74;
        item.fields.uv0.fields.w = local_68;
        item.fields.uv0.fields.z = fStack_6c;
        item.fields.position.fields.x = fVar22;
        item.fields.position.fields.y = fVar21;
        item.fields.tangent.fields.z = fStack_d4;
        item.fields.tangent.fields.w = fStack_d0;
        item.fields.uv2.fields.z = local_198.fields.uv2.fields.z;
        item.fields.uv2.fields.w = local_48;
        item.fields.uv3.fields.x = fStack_44;
        item.fields.uv3.fields.w = in_stack_fffffffffffffe24;
        local_198.fields.tangent.fields._8_8_ = uVar20;
        System_Collections_Generic_List_UIVertex___AddWithResize
                  (output,item,*(MethodInfo_3691EE0 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        index = index + 1;
      } while (index < (source->fields)._size);
    }
    return;
  }
label_03b34c11:
  uVar20 = il2cpp_runtime_helper_022b2c90();
  fVar22 = sinf((float)((ulong)uVar20 >> 0x20) * 78.233 + (float)uVar20 * 12.9898 + (float)iVar15 * 37.719);
  floorf(fVar22 * 43758.547);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchDropShadow$$Hash
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchDropShadow__Hash (UnityEngine_Vector3_o position, int32_t layer, const MethodInfo* method);
// 0x3b34c20

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
// 0x3b34c70

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
  UnityEngine_UI_BaseMeshEffect___ctor((UnityEngine_UI_BaseMeshEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


