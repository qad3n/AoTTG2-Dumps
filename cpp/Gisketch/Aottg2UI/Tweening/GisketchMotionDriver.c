// Type: Gisketch.Aottg2UI.Tweening.GisketchMotionDriver
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Tweening/GisketchMotionDriver.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.ActiveTween$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o* __this, DG_Tweening_Tween_o* tween, bool blocksInput, int32_t createdFrame, const MethodInfo* method);
// 0x3b33d10

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *__this,
               DG_Tweening_Tween_o *tween,bool_conflict blocksInput,int32_t createdFrame,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Tween = tween;
  il2cpp_runtime_helper_022b4080(&__this->fields,tween);
  *(char *)&(__this->fields).BlocksInput = (char)blocksInput;
  (__this->fields).CreatedFrame = createdFrame;
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___cctor (const MethodInfo* method);
// 0x3b342a0

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057a9c4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9c4a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o* __this, const MethodInfo* method);
// 0x3b34310

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$<CompleteActive>b__13_0
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___CompleteActive_b__13_0 (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o* __this, Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o* tween, const MethodInfo* method);
// 0x3b34320

bool_conflict
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c___CompleteActive_b__13_0
          (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_o *__this,
          Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *tween,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 *puVar2;
  UnityEngine_Vector3_Fields *pUVar3;
  DG_Tweening_Tween_o *pDVar4;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_c *pGVar5;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  undefined4 uVar6;
  UnityEngine_UIVertex_o item;
  undefined8 uVar7;
  UnityEngine_Vector3_o *pUVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  bool_conflict extraout_EAX;
  UnityEngine_UI_Graphic_o *pUVar13;
  UnityEngine_UI_Graphic_o *pUVar14;
  UnityEngine_UI_VertexHelper_o *__this_01;
  UnityEngine_UIVertex_array *pUVar15;
  UnityEngine_UIVertex_array *extraout_RAX;
  int in_ECX;
  long lVar16;
  undefined1 extraout_DL;
  System_Collections_Generic_List_UIVertex__o *__this_02;
  long lVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  UnityEngine_UI_VertexHelper_o *__this_03;
  UnityEngine_UI_VertexHelper_o *__this_04;
  Il2CppClass *__this_05;
  UnityEngine_UI_VertexHelper_o *__this_06;
  UnityEngine_UI_VertexHelper_o *pUVar21;
  MethodInfo_36918A0 **ppMVar22;
  MethodInfo *in_R8;
  Il2CppClass *unaff_R12;
  undefined8 *unaff_R13;
  float fVar23;
  float fVar24;
  float fVar25;
  float extraout_XMM0_Da;
  System_Collections_Generic_List_Vector4__o *pSVar26;
  float extraout_XMM0_Db;
  undefined4 in_XMM1_Da;
  float fVar27;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  float in_XMM3_Da;
  float fVar28;
  undefined1 auVar29 [16];
  float in_stack_fffffffffffffd4c;
  UnityEngine_UIVertex_o UStack_270;
  undefined4 uStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [20];
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
  UnityEngine_UI_VertexHelper_o *pUStack_108;
  Il2CppClass *pIStack_100;
  undefined8 *puStack_f8;
  UnityEngine_UI_VertexHelper_o *pUStack_f0;
  UnityEngine_UI_VertexHelper_o *pUStack_e8;
  UnityEngine_UI_Graphic_o *pUStack_e0;
  UnityEngine_UI_VertexHelper_o *pUStack_d8;
  
  if (tween != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *)0x0) {
    pDVar4 = (tween->fields).Tween;
    if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
      return (bool_conflict)CONCAT71((int7)((ulong)pDVar4 >> 8),*(char *)&(pDVar4->fields).typeofT1 == '\0');
    }
    return 1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c4b = '\x01';
  }
  pGVar5 = __this[1].klass;
  if (pGVar5 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_c *)0x0) {
    (*(code *)(pGVar5->_1).namespaze)((pGVar5->_1).element_class);
  }
  if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].fields.m_Uv0S + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)&TypeInfo_GisketchMotionDriver[1].fields.m_ListsInitalized;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return bVar11;
  }
  if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].fields.m_Uv0S + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar16 = **(long **)&TypeInfo_GisketchMotionDriver[1].fields.m_ListsInitalized;
  __this_03 = TypeInfo_GisketchMotionDriver;
  if (lVar16 != 0) {
    __this_00 = *(System_Collections_Generic_List_object__o **)(lVar16 + 0x20);
    __this_03 = (UnityEngine_UI_VertexHelper_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      bVar11 = System_Collections_Generic_List_object___Remove(__this_00,__this[1].monitor,MethodInfo_Boolean_Remove);
      return bVar11;
    }
  }
  pSVar26 = (System_Collections_Generic_List_Vector4__o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c4c = '\x01';
  }
  (__this_03->fields).m_Uv1S = pSVar26;
  *(undefined4 *)&(__this_03->fields).m_Uv2S = in_XMM1_Da;
  *(undefined4 *)((long)&(__this_03->fields).m_Uv2S + 4) = in_XMM1_Db;
  *(undefined1 *)&(__this_03->fields).m_Tangents = 0;
  pUVar13 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this_03,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return bVar11;
  }
  iVar19 = 0;
  pUVar13 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this_03,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_UI_Graphic_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar13->klass->vtable)._28_SetVerticesDirty.methodPtr;
    bVar11 = (*UNRECOVERED_JUMPTABLE_00)
                       (pUVar13,(pUVar13->klass->vtable)._28_SetVerticesDirty.method,UNRECOVERED_JUMPTABLE_00)
    ;
    return bVar11;
  }
  pSVar26 = (System_Collections_Generic_List_Vector4__o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c4d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c4d = '\x01';
  }
  (__this_03->fields).m_Uv1S = pSVar26;
  *(undefined4 *)&(__this_03->fields).m_Uv2S = in_XMM1_Da;
  *(undefined4 *)((long)&(__this_03->fields).m_Uv2S + 4) = in_XMM1_Db;
  (__this_03->fields).m_Uv3S = (System_Collections_Generic_List_Vector4__o *)CONCAT44(in_XMM2_Db,in_XMM2_Da);
  iVar20 = 1;
  if (0 < iVar19) {
    iVar20 = iVar19;
  }
  *(int *)&(__this_03->fields).m_Normals = iVar20;
  fVar28 = 0.0;
  if (0.0 <= in_XMM3_Da) {
    fVar28 = in_XMM3_Da;
  }
  *(float *)((long)&(__this_03->fields).m_Normals + 4) = fVar28;
  *(undefined1 *)&(__this_03->fields).m_Tangents = extraout_DL;
  pUVar13 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this_03,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return bVar11;
  }
  __this_04 = (UnityEngine_UI_VertexHelper_o *)0x0;
  __this_06 = __this_03;
  pUVar14 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this_03,(MethodInfo *)0x0);
  if (pUVar14 != (UnityEngine_UI_Graphic_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar14->klass->vtable)._28_SetVerticesDirty.methodPtr;
    bVar11 = (*UNRECOVERED_JUMPTABLE_00)
                       (pUVar14,(pUVar14->klass->vtable)._28_SetVerticesDirty.method,UNRECOVERED_JUMPTABLE_00)
    ;
    return bVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_d8 = __this_03;
  if (g_data_057a9c4e == '\0') {
    pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b34614;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b34620;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b3462c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b34638;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b34644;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_UIVertex);
    g_data_057a9c4e = '\x01';
  }
  __this_05 = __this_06->klass[1]._1.castClass;
  pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b3465e;
  pUVar21 = __this_06;
  bVar11 = (*(code *)__this_06->klass[1]._1.element_class)();
  if ((char)bVar11 == '\0') {
    return bVar11;
  }
  if (__this_04 != (UnityEngine_UI_VertexHelper_o *)0x0) {
    pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b34679;
    iVar12 = UnityEngine_UI_VertexHelper__get_currentVertCount(__this_04,(MethodInfo *)0x0);
    if (iVar12 == 0) {
      return 0;
    }
    unaff_R13 = &TypeInfo_List_UIVertex;
    pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b34691;
    unaff_R12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
    pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b346a6;
    System_Collections_Generic_List_UIVertex____ctor
              ((System_Collections_Generic_List_UIVertex__o *)unaff_R12,MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b346b3;
    __this_05 = unaff_R12;
    pUVar21 = __this_04;
    UnityEngine_UI_VertexHelper__GetUIVertexStream
              (__this_04,(System_Collections_Generic_List_UIVertex__o *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (Il2CppClass *)0x0) {
      uVar18 = (*(int *)&(__this_06->fields).m_Normals + 1) * *(int *)&(unaff_R12->_1).namespaze;
      pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b346d2;
      __this_01 = (UnityEngine_UI_VertexHelper_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
      __this_05 = (Il2CppClass *)(ulong)uVar18;
      pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b346e9;
      pUVar21 = __this_01;
      System_Collections_Generic_List_UIVertex____ctor_3691300
                ((System_Collections_Generic_List_UIVertex__o *)__this_01,uVar18,MethodInfo_List_1_UnityEngine_UIVertex);
      uVar18 = *(uint *)&(__this_06->fields).m_Normals;
      __this_03 = (UnityEngine_UI_VertexHelper_o *)(ulong)uVar18;
      if (0 < (int)uVar18) {
        do {
          iVar19 = (int)__this_03;
          pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b34710;
          __this_05 = unaff_R12;
          pUVar21 = __this_06;
          in_ECX = iVar19;
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer
                    ((Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)__this_06,
                     (System_Collections_Generic_List_UIVertex__o *)unaff_R12,
                     (System_Collections_Generic_List_UIVertex__o *)__this_01,iVar19,in_R8);
          __this_03 = (UnityEngine_UI_VertexHelper_o *)(ulong)(iVar19 - 1);
        } while (1 < iVar19);
      }
      unaff_R13 = (undefined8 *)0x0;
      if (__this_01 != (UnityEngine_UI_VertexHelper_o *)0x0) {
        pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b34734;
        System_Collections_Generic_List_UIVertex___AddRange
                  ((System_Collections_Generic_List_UIVertex__o *)__this_01,
                   (System_Collections_Generic_IEnumerable_T__o *)unaff_R12,MethodInfo_Void_AddRange);
        pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b3473e;
        UnityEngine_UI_VertexHelper__Clear(__this_04,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream
                  (__this_04,(System_Collections_Generic_List_UIVertex__o *)__this_01,(MethodInfo *)0x0);
        return extraout_EAX;
      }
    }
  }
  pUStack_e0 = (UnityEngine_UI_Graphic_o *)0x3b34763;
  auVar29 = il2cpp_runtime_helper_022b2c90();
  __this_02 = auVar29._8_8_;
  pUVar15 = auVar29._0_8_;
  ppMVar22 = (MethodInfo_36918A0 **)pUVar21;
  pUStack_108 = __this_03;
  pIStack_100 = unaff_R12;
  puStack_f8 = unaff_R13;
  pUStack_f0 = __this_04;
  pUStack_e8 = __this_06;
  pUStack_e0 = pUVar13;
  if (g_data_057a9c4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    ppMVar22 = &MethodInfo_UIVertex_get_Item;
    pUVar15 = (UnityEngine_UIVertex_array *)il2cpp_runtime_helper_023445d0();
    g_data_057a9c4f = '\x01';
  }
  iVar19 = (int)ppMVar22;
  uStack_200._0_1_ = '\0';
  uStack_200._1_1_ = '\0';
  uStack_200._2_1_ = '\0';
  uStack_200._3_1_ = '\0';
  fStack_1fc = 0.0;
  fStack_1f8 = 0.0;
  fStack_1f4 = 0.0;
  fStack_1f0 = 0.0;
  fStack_1ec = 0.0;
  fStack_1e8 = 0.0;
  fStack_1e4 = 0.0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  fStack_1d0 = 0.0;
  fStack_1cc = 0.0;
  fStack_1c8 = 0.0;
  fStack_1c4 = 0.0;
  fVar23 = (float)in_ECX;
  fVar27 = (float)*(int *)&(pUVar21->fields).m_Normals;
  fVar24 = fVar23 / fVar27;
  pSVar26 = (pUVar21->fields).m_Uv3S;
  fVar25 = (float)((ulong)pSVar26 >> 0x20);
  fVar28 = *(float *)((long)&(pUVar21->fields).m_Uv2S + 4);
  if (*(char *)&(pUVar21->fields).m_Tangents == '\0') {
    fVar28 = (fVar28 * (fVar24 * -0.55 + 1.1)) / fVar27;
  }
  auStack_180 = ZEXT416((uint)fVar28);
  if (__this_05 == (Il2CppClass *)0x0) {
label_03b34c11:
    bVar11 = il2cpp_runtime_helper_022b2c90();
    fVar28 = sinf(extraout_XMM0_Db * 78.233 + extraout_XMM0_Da * 12.9898 + (float)iVar19 * 37.719);
    floorf(fVar28 * 43758.547);
    return bVar11;
  }
  if (0 < *(int *)&(__this_05->_1).namespaze) {
    uStack_190 = CONCAT44(fVar25,SUB84(pSVar26,0) * fVar24);
    uStack_188 = 0;
    uStack_1a0 = CONCAT44(fVar25,fVar25 * fVar24);
    uStack_198 = 0;
    iVar20 = 0;
    do {
      while( true ) {
        System_Collections_Generic_List_UIVertex___get_Item
                  (&UStack_270,(System_Collections_Generic_List_UIVertex__o *)__this_05,iVar20,MethodInfo_UIVertex_get_Item);
        uVar9 = UStack_270.fields.tangent.fields._8_8_;
        fVar24 = UStack_270.fields.position.fields.z;
        fVar28 = UStack_270.fields.position.fields.y;
        uVar7 = CONCAT44(UStack_270.fields.normal.fields.y,UStack_270.fields.normal.fields.x);
        uStack_200._0_1_ = UStack_270.fields.color.fields.r;
        uStack_200._1_1_ = UStack_270.fields.color.fields.g;
        uStack_200._2_1_ = UStack_270.fields.color.fields.b;
        uStack_200._3_1_ = UStack_270.fields.color.fields.a;
        fStack_1fc = UStack_270.fields.uv0.fields.x;
        fStack_1f8 = UStack_270.fields.uv0.fields.y;
        fStack_1f4 = UStack_270.fields.uv0.fields.z;
        fStack_1f0 = UStack_270.fields.uv0.fields.w;
        fStack_1ec = UStack_270.fields.uv1.fields.x;
        fStack_1e8 = UStack_270.fields.uv1.fields.y;
        fStack_1e4 = UStack_270.fields.uv1.fields.z;
        uStack_1e0 = CONCAT44(UStack_270.fields.uv2.fields.x,UStack_270.fields.uv1.fields.w);
        uStack_1d8 = CONCAT44(UStack_270.fields.uv2.fields.z,UStack_270.fields.uv2.fields.y);
        fStack_1d0 = UStack_270.fields.uv2.fields.w;
        fStack_1cc = UStack_270.fields.uv3.fields.x;
        fStack_1c8 = UStack_270.fields.uv3.fields.y;
        fStack_1c4 = UStack_270.fields.uv3.fields.z;
        auStack_160._0_4_ = UStack_270.fields.position.fields.x;
        auStack_160._4_4_ = UStack_270.fields.position.fields.y;
        auStack_160._8_8_ = 0;
        uStack_170 = CONCAT44(fVar28,fVar28);
        uStack_168 = 0;
        fVar27 = sinf(fVar28 * 78.233 + UStack_270.fields.position.fields.x * 12.9898 + fVar23 * 37.719);
        fVar28 = *(float *)((long)&(pUVar21->fields).m_Normals + 4);
        iVar19 = 0;
        iVar12 = il2cpp_runtime_helper_03b428b0((int)(pUVar21->fields).m_Uv1S,*(undefined4 *)&(pUVar21->fields).m_Uv2S);
        uVar10 = UStack_270.fields.tangent.fields._8_8_;
        fStack_1b8 = UStack_270.fields.normal.fields.z;
        fStack_1b4 = UStack_270.fields.tangent.fields.x;
        fStack_1b0 = UStack_270.fields.tangent.fields.y;
        UStack_270.fields.tangent.fields.z = (float)uVar9;
        UStack_270.fields.tangent.fields.w = SUB84(uVar9,4);
        fStack_1ac = UStack_270.fields.tangent.fields.z;
        fStack_1a8 = UStack_270.fields.tangent.fields.w;
        auStack_160[0x10] = (uint8_t)uStack_200;
        auStack_160[0x11] = uStack_200._1_1_;
        auStack_160[0x12] = uStack_200._2_1_;
        auStack_160[0x13] = uStack_200._3_1_;
        fStack_14c = fStack_1fc;
        fStack_148 = fStack_1f8;
        fStack_144 = fStack_1f4;
        fStack_140 = fStack_1f0;
        fStack_13c = fStack_1ec;
        fStack_138 = fStack_1e8;
        fStack_134 = fStack_1e4;
        uStack_130 = uStack_1e0;
        uStack_128 = uStack_1d8;
        fStack_120 = fStack_1d0;
        fStack_11c = fStack_1cc;
        fStack_118 = fStack_1c8;
        fStack_114 = fStack_1c4;
        UStack_270.fields.tangent.fields._8_8_ = uVar10;
        uStack_1c0 = uVar7;
        if (__this_02 == (System_Collections_Generic_List_UIVertex__o *)0x0) goto label_03b34c11;
        fVar25 = floorf(fVar27 * 43758.547);
        lVar16 = MethodInfo_Void_Add;
        fVar27 = fVar28 * ((fVar27 * 43758.547 - fVar25) + -0.5) * fVar23;
        fVar28 = (float)uStack_190 + fVar27 + (float)auStack_160._0_4_;
        fVar27 = ((float)uStack_1a0 - fVar27) + (float)uStack_170;
        UStack_270.fields.position.fields.z = fVar24 + 0.0;
        UStack_270.fields.position.fields.y = fVar27;
        UStack_270.fields.position.fields.x = fVar28;
        uVar7._0_4_ = fStack_1ac;
        uVar7._4_4_ = fStack_1a8;
        UStack_270.fields.tangent.fields.y = fStack_1b0;
        UStack_270.fields.tangent.fields.z = fStack_1ac;
        UStack_270.fields.tangent.fields.w = fStack_1a8;
        UStack_270.fields.normal.fields.x = (float)uStack_1c0;
        UStack_270.fields.normal.fields.y = (float)((ulong)uStack_1c0 >> 0x20);
        UStack_270.fields.normal.fields.z = fStack_1b8;
        UStack_270.fields.tangent.fields.x = fStack_1b4;
        uVar6._0_1_ = auStack_160[0x10];
        uVar6._1_1_ = auStack_160[0x11];
        uVar6._2_1_ = auStack_160[0x12];
        uVar6._3_1_ = auStack_160[0x13];
        UStack_270.fields.uv0.fields.x = fStack_14c;
        UStack_270.fields.uv0.fields.y = fStack_148;
        UStack_270.fields.uv0.fields.z = fStack_144;
        UStack_270.fields.uv0.fields.w = fStack_140;
        UStack_270.fields.uv1.fields.x = fStack_13c;
        UStack_270.fields.uv1.fields.y = fStack_138;
        UStack_270.fields.uv1.fields.z = fStack_134;
        UStack_270.fields.uv2.fields.w = fStack_120;
        UStack_270.fields.uv3.fields.x = fStack_11c;
        UStack_270.fields.uv3.fields.y = fStack_118;
        UStack_270.fields.uv3.fields.z = fStack_114;
        UStack_270.fields.uv1.fields.w = (float)uStack_130;
        UStack_270.fields.uv2.fields.x = (float)((ulong)uStack_130 >> 0x20);
        UStack_270.fields.uv2.fields.y = (float)uStack_128;
        UStack_270.fields.uv2.fields.z = (float)((ulong)uStack_128 >> 0x20);
        UStack_270.fields.color.fields.r = auStack_160[0x10];
        UStack_270.fields.color.fields.g = auStack_160[0x11];
        UStack_270.fields.color.fields.b = auStack_160[0x12];
        UStack_270.fields.color.fields.a = auStack_160[0x13];
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar15 = (__this_02->fields)._items;
        UStack_270.fields.color.fields.rgba = iVar12;
        if (pUVar15 == (UnityEngine_UIVertex_array *)0x0) goto label_03b34c11;
        uVar18 = (__this_02->fields)._size;
        lVar17 = (long)(int)uVar18;
        UStack_270.fields.color.fields._4_4_ = uVar6;
        if ((uint)pUVar15->max_length <= uVar18) break;
        (__this_02->fields)._size = uVar18 + 1;
        lVar16 = lVar17 * 0x6c;
        puVar2 = (undefined8 *)((long)&pUVar15->m_Items[0].fields.uv2 + lVar16 + 0xc);
        *puVar2 = CONCAT44(fStack_11c,fStack_120);
        puVar2[1] = CONCAT44(fStack_114,fStack_118);
        puVar2 = (undefined8 *)((long)&pUVar15->m_Items[0].fields.uv2 + lVar16);
        *puVar2 = CONCAT44(UStack_270.fields.uv2.fields.y,UStack_270.fields.uv2.fields.x);
        puVar2[1] = CONCAT44(fStack_120,UStack_270.fields.uv2.fields.z);
        puVar2 = (undefined8 *)((long)&pUVar15->m_Items[0].fields.uv1 + lVar16);
        *puVar2 = CONCAT44(fStack_138,fStack_13c);
        puVar2[1] = CONCAT44(UStack_270.fields.uv1.fields.w,fStack_134);
        puVar2 = (undefined8 *)((long)&pUVar15->m_Items[0].fields.uv0 + lVar16);
        *puVar2 = CONCAT44(fStack_148,fStack_14c);
        puVar2[1] = CONCAT44(fStack_140,fStack_144);
        puVar2 = (undefined8 *)((long)&pUVar15->m_Items[0].fields.tangent + lVar16 + 8);
        *puVar2 = _fStack_1ac;
        puVar2[1] = CONCAT44(auStack_160._16_4_,iVar12);
        pUVar8 = &pUVar15->m_Items[0].fields.normal + lVar17 * 9;
        (pUVar8->fields).y = UStack_270.fields.normal.fields.y;
        (pUVar8->fields).z = fStack_1b8;
        *(ulong *)(&(pUVar8->fields).y + 2) = CONCAT44(fStack_1b0,fStack_1b4);
        pUVar3 = &(&pUVar15->m_Items[0].fields.position)[lVar17 * 9].fields;
        pUVar3->x = fVar28;
        pUVar3->y = fVar27;
        *(ulong *)&pUVar3->z = CONCAT44(UStack_270.fields.normal.fields.x,UStack_270.fields.position.fields.z)
        ;
        iVar20 = iVar20 + 1;
        UStack_270.fields.tangent.fields._8_8_ = uVar7;
        if (*(int *)&(__this_05->_1).namespaze <= iVar20) goto label_03b34bff;
      }
      item.fields.uv3.fields.z = fStack_114;
      item.fields.uv3.fields.y = fStack_118;
      item.fields.uv2.fields.y = UStack_270.fields.uv2.fields.y;
      item.fields.uv2.fields.x = UStack_270.fields.uv2.fields.x;
      item.fields.uv1.fields.y = fStack_138;
      item.fields.uv1.fields.x = fStack_13c;
      item.fields.uv1.fields.w = UStack_270.fields.uv1.fields.w;
      item.fields.uv1.fields.z = fStack_134;
      item.fields.normal.fields.x = UStack_270.fields.normal.fields.x;
      item.fields.position.fields.z = UStack_270.fields.position.fields.z;
      item.fields.normal.fields.z = fStack_1b8;
      item.fields.normal.fields.y = UStack_270.fields.normal.fields.y;
      item.fields.tangent.fields.y = fStack_1b0;
      item.fields.tangent.fields.x = fStack_1b4;
      item.fields.color.fields.r = auStack_160[0x10];
      item.fields.color.fields.g = auStack_160[0x11];
      item.fields.color.fields.b = auStack_160[0x12];
      item.fields.color.fields.a = auStack_160[0x13];
      item.fields.color.fields.rgba = iVar12;
      item.fields.uv0.fields.y = fStack_148;
      item.fields.uv0.fields.x = fStack_14c;
      item.fields.uv0.fields.w = fStack_140;
      item.fields.uv0.fields.z = fStack_144;
      item.fields.position.fields.x = fVar28;
      item.fields.position.fields.y = fVar27;
      item.fields.tangent.fields.z = fStack_1ac;
      item.fields.tangent.fields.w = fStack_1a8;
      item.fields.uv2.fields.z = UStack_270.fields.uv2.fields.z;
      item.fields.uv2.fields.w = fStack_120;
      item.fields.uv3.fields.x = fStack_11c;
      item.fields.uv3.fields.w = in_stack_fffffffffffffd4c;
      UStack_270.fields.tangent.fields._8_8_ = uVar7;
      System_Collections_Generic_List_UIVertex___AddWithResize
                (__this_02,item,*(MethodInfo_3691EE0 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      iVar20 = iVar20 + 1;
      pUVar15 = extraout_RAX;
    } while (iVar20 < *(int *)&(__this_05->_1).namespaze);
  }
label_03b34bff:
  return (bool_conflict)pUVar15;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c__DisplayClass3_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x3b33d00

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c__DisplayClass3_0$$<Track>b__0
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___Track_b__0 (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x3b34350

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0___Track_b__0
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c__DisplayClass3_0_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 *puVar2;
  UnityEngine_Vector3_Fields *pUVar3;
  DG_Tweening_TweenCallback_o *pDVar4;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UIVertex_array *pUVar5;
  undefined4 uVar6;
  UnityEngine_UIVertex_o item;
  UnityEngine_Vector3_o *pUVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  UnityEngine_UI_Graphic_o *pUVar13;
  UnityEngine_UI_Graphic_o *pUVar14;
  UnityEngine_UI_VertexHelper_o *__this_01;
  int in_ECX;
  long lVar15;
  undefined1 extraout_DL;
  System_Collections_Generic_List_UIVertex__o *__this_02;
  long lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  UnityEngine_UI_VertexHelper_o *__this_03;
  UnityEngine_UI_VertexHelper_o *__this_04;
  Il2CppClass *__this_05;
  UnityEngine_UI_VertexHelper_o *__this_06;
  UnityEngine_UI_VertexHelper_o *pUVar20;
  MethodInfo_36918A0 **ppMVar21;
  MethodInfo *in_R8;
  Il2CppClass *unaff_R12;
  undefined8 *unaff_R13;
  float fVar22;
  float fVar23;
  float fVar24;
  System_Collections_Generic_List_Vector4__o *pSVar25;
  undefined8 uVar26;
  undefined4 in_XMM1_Da;
  float fVar27;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  float in_XMM3_Da;
  float fVar28;
  float in_stack_fffffffffffffd54;
  UnityEngine_UIVertex_o UStack_268;
  undefined4 uStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 uStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [20];
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  UnityEngine_UI_VertexHelper_o *pUStack_100;
  Il2CppClass *pIStack_f8;
  undefined8 *puStack_f0;
  UnityEngine_UI_VertexHelper_o *pUStack_e8;
  UnityEngine_UI_VertexHelper_o *pUStack_e0;
  UnityEngine_UI_Graphic_o *pUStack_d8;
  UnityEngine_UI_VertexHelper_o *pUStack_d0;
  
  if (g_data_057a9c4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c4b = '\x01';
  }
  pDVar4 = (__this->fields).onKill;
  if (pDVar4 != (DG_Tweening_TweenCallback_o *)0x0) {
    (*(code *)(pDVar4->fields).invoke_impl)((pDVar4->fields).method_code);
  }
  if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].fields.m_Uv0S + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)&TypeInfo_GisketchMotionDriver[1].fields.m_ListsInitalized;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].fields.m_Uv0S + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar15 = **(long **)&TypeInfo_GisketchMotionDriver[1].fields.m_ListsInitalized;
  __this_03 = TypeInfo_GisketchMotionDriver;
  if (lVar15 != 0) {
    __this_00 = *(System_Collections_Generic_List_object__o **)(lVar15 + 0x20);
    __this_03 = (UnityEngine_UI_VertexHelper_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove
                (__this_00,(Il2CppObject *)(__this->fields).active,MethodInfo_Boolean_Remove);
      return;
    }
  }
  pSVar25 = (System_Collections_Generic_List_Vector4__o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c4c = '\x01';
  }
  (__this_03->fields).m_Uv1S = pSVar25;
  *(undefined4 *)&(__this_03->fields).m_Uv2S = in_XMM1_Da;
  *(undefined4 *)((long)&(__this_03->fields).m_Uv2S + 4) = in_XMM1_Db;
  *(undefined1 *)&(__this_03->fields).m_Tangents = 0;
  pUVar13 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this_03,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  iVar18 = 0;
  pUVar13 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this_03,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_UI_Graphic_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar13->klass->vtable)._28_SetVerticesDirty.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar13,(pUVar13->klass->vtable)._28_SetVerticesDirty.method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  pSVar25 = (System_Collections_Generic_List_Vector4__o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c4d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c4d = '\x01';
  }
  (__this_03->fields).m_Uv1S = pSVar25;
  *(undefined4 *)&(__this_03->fields).m_Uv2S = in_XMM1_Da;
  *(undefined4 *)((long)&(__this_03->fields).m_Uv2S + 4) = in_XMM1_Db;
  (__this_03->fields).m_Uv3S = (System_Collections_Generic_List_Vector4__o *)CONCAT44(in_XMM2_Db,in_XMM2_Da);
  iVar19 = 1;
  if (0 < iVar18) {
    iVar19 = iVar18;
  }
  *(int *)&(__this_03->fields).m_Normals = iVar19;
  fVar28 = 0.0;
  if (0.0 <= in_XMM3_Da) {
    fVar28 = in_XMM3_Da;
  }
  *(float *)((long)&(__this_03->fields).m_Normals + 4) = fVar28;
  *(undefined1 *)&(__this_03->fields).m_Tangents = extraout_DL;
  pUVar13 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this_03,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  __this_04 = (UnityEngine_UI_VertexHelper_o *)0x0;
  __this_06 = __this_03;
  pUVar14 = UnityEngine_UI_BaseMeshEffect__get_graphic
                      ((UnityEngine_UI_BaseMeshEffect_o *)__this_03,(MethodInfo *)0x0);
  if (pUVar14 != (UnityEngine_UI_Graphic_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar14->klass->vtable)._28_SetVerticesDirty.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pUVar14,(pUVar14->klass->vtable)._28_SetVerticesDirty.method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_d0 = __this_03;
  if (g_data_057a9c4e == '\0') {
    pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b34614;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b34620;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b3462c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b34638;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b34644;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_UIVertex);
    g_data_057a9c4e = '\x01';
  }
  __this_05 = __this_06->klass[1]._1.castClass;
  pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b3465e;
  pUVar20 = __this_06;
  cVar10 = (*(code *)__this_06->klass[1]._1.element_class)();
  if (cVar10 == '\0') {
    return;
  }
  if (__this_04 != (UnityEngine_UI_VertexHelper_o *)0x0) {
    pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b34679;
    iVar12 = UnityEngine_UI_VertexHelper__get_currentVertCount(__this_04,(MethodInfo *)0x0);
    if (iVar12 == 0) {
      return;
    }
    unaff_R13 = &TypeInfo_List_UIVertex;
    pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b34691;
    unaff_R12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
    pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b346a6;
    System_Collections_Generic_List_UIVertex____ctor
              ((System_Collections_Generic_List_UIVertex__o *)unaff_R12,MethodInfo_List_1_UnityEngine_UIVertex);
    pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b346b3;
    __this_05 = unaff_R12;
    pUVar20 = __this_04;
    UnityEngine_UI_VertexHelper__GetUIVertexStream
              (__this_04,(System_Collections_Generic_List_UIVertex__o *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (Il2CppClass *)0x0) {
      uVar17 = (*(int *)&(__this_06->fields).m_Normals + 1) * *(int *)&(unaff_R12->_1).namespaze;
      pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b346d2;
      __this_01 = (UnityEngine_UI_VertexHelper_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_UIVertex);
      __this_05 = (Il2CppClass *)(ulong)uVar17;
      pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b346e9;
      pUVar20 = __this_01;
      System_Collections_Generic_List_UIVertex____ctor_3691300
                ((System_Collections_Generic_List_UIVertex__o *)__this_01,uVar17,MethodInfo_List_1_UnityEngine_UIVertex);
      uVar17 = *(uint *)&(__this_06->fields).m_Normals;
      __this_03 = (UnityEngine_UI_VertexHelper_o *)(ulong)uVar17;
      if (0 < (int)uVar17) {
        do {
          iVar18 = (int)__this_03;
          pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b34710;
          __this_05 = unaff_R12;
          pUVar20 = __this_06;
          in_ECX = iVar18;
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__AddLayer
                    ((Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)__this_06,
                     (System_Collections_Generic_List_UIVertex__o *)unaff_R12,
                     (System_Collections_Generic_List_UIVertex__o *)__this_01,iVar18,in_R8);
          __this_03 = (UnityEngine_UI_VertexHelper_o *)(ulong)(iVar18 - 1);
        } while (1 < iVar18);
      }
      unaff_R13 = (undefined8 *)0x0;
      if (__this_01 != (UnityEngine_UI_VertexHelper_o *)0x0) {
        pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b34734;
        System_Collections_Generic_List_UIVertex___AddRange
                  ((System_Collections_Generic_List_UIVertex__o *)__this_01,
                   (System_Collections_Generic_IEnumerable_T__o *)unaff_R12,MethodInfo_Void_AddRange);
        pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b3473e;
        UnityEngine_UI_VertexHelper__Clear(__this_04,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream
                  (__this_04,(System_Collections_Generic_List_UIVertex__o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  pUStack_d8 = (UnityEngine_UI_Graphic_o *)0x3b34763;
  il2cpp_runtime_helper_022b2c90();
  ppMVar21 = (MethodInfo_36918A0 **)pUVar20;
  pUStack_100 = __this_03;
  pIStack_f8 = unaff_R12;
  puStack_f0 = unaff_R13;
  pUStack_e8 = __this_04;
  pUStack_e0 = __this_06;
  pUStack_d8 = pUVar13;
  if (g_data_057a9c4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    ppMVar21 = &MethodInfo_UIVertex_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c4f = '\x01';
  }
  iVar18 = (int)ppMVar21;
  uStack_1f8._0_1_ = '\0';
  uStack_1f8._1_1_ = '\0';
  uStack_1f8._2_1_ = '\0';
  uStack_1f8._3_1_ = '\0';
  fStack_1f4 = 0.0;
  fStack_1f0 = 0.0;
  fStack_1ec = 0.0;
  fStack_1e8 = 0.0;
  fStack_1e4 = 0.0;
  fStack_1e0 = 0.0;
  fStack_1dc = 0.0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  fStack_1c8 = 0.0;
  fStack_1c4 = 0.0;
  fStack_1c0 = 0.0;
  fStack_1bc = 0.0;
  fVar22 = (float)in_ECX;
  fVar27 = (float)*(int *)&(pUVar20->fields).m_Normals;
  fVar23 = fVar22 / fVar27;
  pSVar25 = (pUVar20->fields).m_Uv3S;
  fVar24 = (float)((ulong)pSVar25 >> 0x20);
  fVar28 = *(float *)((long)&(pUVar20->fields).m_Uv2S + 4);
  if (*(char *)&(pUVar20->fields).m_Tangents == '\0') {
    fVar28 = (fVar28 * (fVar23 * -0.55 + 1.1)) / fVar27;
  }
  auStack_178 = ZEXT416((uint)fVar28);
  if (__this_05 != (Il2CppClass *)0x0) {
    if (0 < *(int *)&(__this_05->_1).namespaze) {
      uStack_188 = CONCAT44(fVar24,SUB84(pSVar25,0) * fVar23);
      uStack_180 = 0;
      uStack_198 = CONCAT44(fVar24,fVar24 * fVar23);
      uStack_190 = 0;
      iVar19 = 0;
      do {
        while( true ) {
          System_Collections_Generic_List_UIVertex___get_Item
                    (&UStack_268,(System_Collections_Generic_List_UIVertex__o *)__this_05,iVar19,MethodInfo_UIVertex_get_Item)
          ;
          uVar8 = UStack_268.fields.tangent.fields._8_8_;
          fVar23 = UStack_268.fields.position.fields.z;
          fVar28 = UStack_268.fields.position.fields.y;
          uVar26 = CONCAT44(UStack_268.fields.normal.fields.y,UStack_268.fields.normal.fields.x);
          uStack_1f8._0_1_ = UStack_268.fields.color.fields.r;
          uStack_1f8._1_1_ = UStack_268.fields.color.fields.g;
          uStack_1f8._2_1_ = UStack_268.fields.color.fields.b;
          uStack_1f8._3_1_ = UStack_268.fields.color.fields.a;
          fStack_1f4 = UStack_268.fields.uv0.fields.x;
          fStack_1f0 = UStack_268.fields.uv0.fields.y;
          fStack_1ec = UStack_268.fields.uv0.fields.z;
          fStack_1e8 = UStack_268.fields.uv0.fields.w;
          fStack_1e4 = UStack_268.fields.uv1.fields.x;
          fStack_1e0 = UStack_268.fields.uv1.fields.y;
          fStack_1dc = UStack_268.fields.uv1.fields.z;
          uStack_1d8 = CONCAT44(UStack_268.fields.uv2.fields.x,UStack_268.fields.uv1.fields.w);
          uStack_1d0 = CONCAT44(UStack_268.fields.uv2.fields.z,UStack_268.fields.uv2.fields.y);
          fStack_1c8 = UStack_268.fields.uv2.fields.w;
          fStack_1c4 = UStack_268.fields.uv3.fields.x;
          fStack_1c0 = UStack_268.fields.uv3.fields.y;
          fStack_1bc = UStack_268.fields.uv3.fields.z;
          auStack_158._0_4_ = UStack_268.fields.position.fields.x;
          auStack_158._4_4_ = UStack_268.fields.position.fields.y;
          auStack_158._8_8_ = 0;
          uStack_168 = CONCAT44(fVar28,fVar28);
          uStack_160 = 0;
          fVar27 = sinf(fVar28 * 78.233 + UStack_268.fields.position.fields.x * 12.9898 + fVar22 * 37.719);
          fVar28 = *(float *)((long)&(pUVar20->fields).m_Normals + 4);
          iVar18 = 0;
          iVar12 = il2cpp_runtime_helper_03b428b0((int)(pUVar20->fields).m_Uv1S,*(undefined4 *)&(pUVar20->fields).m_Uv2S);
          uVar9 = UStack_268.fields.tangent.fields._8_8_;
          fStack_1b0 = UStack_268.fields.normal.fields.z;
          fStack_1ac = UStack_268.fields.tangent.fields.x;
          fStack_1a8 = UStack_268.fields.tangent.fields.y;
          UStack_268.fields.tangent.fields.z = (float)uVar8;
          UStack_268.fields.tangent.fields.w = SUB84(uVar8,4);
          fStack_1a4 = UStack_268.fields.tangent.fields.z;
          fStack_1a0 = UStack_268.fields.tangent.fields.w;
          auStack_158[0x10] = (uint8_t)uStack_1f8;
          auStack_158[0x11] = uStack_1f8._1_1_;
          auStack_158[0x12] = uStack_1f8._2_1_;
          auStack_158[0x13] = uStack_1f8._3_1_;
          fStack_144 = fStack_1f4;
          fStack_140 = fStack_1f0;
          fStack_13c = fStack_1ec;
          fStack_138 = fStack_1e8;
          fStack_134 = fStack_1e4;
          fStack_130 = fStack_1e0;
          fStack_12c = fStack_1dc;
          uStack_128 = uStack_1d8;
          uStack_120 = uStack_1d0;
          fStack_118 = fStack_1c8;
          fStack_114 = fStack_1c4;
          fStack_110 = fStack_1c0;
          fStack_10c = fStack_1bc;
          UStack_268.fields.tangent.fields._8_8_ = uVar9;
          uStack_1b8 = uVar26;
          if (__this_02 == (System_Collections_Generic_List_UIVertex__o *)0x0) goto label_03b34c11;
          fVar24 = floorf(fVar27 * 43758.547);
          lVar15 = MethodInfo_Void_Add;
          fVar27 = fVar28 * ((fVar27 * 43758.547 - fVar24) + -0.5) * fVar22;
          fVar28 = (float)uStack_188 + fVar27 + (float)auStack_158._0_4_;
          fVar27 = ((float)uStack_198 - fVar27) + (float)uStack_168;
          UStack_268.fields.position.fields.z = fVar23 + 0.0;
          UStack_268.fields.position.fields.y = fVar27;
          UStack_268.fields.position.fields.x = fVar28;
          uVar26._0_4_ = fStack_1a4;
          uVar26._4_4_ = fStack_1a0;
          UStack_268.fields.tangent.fields.y = fStack_1a8;
          UStack_268.fields.tangent.fields.z = fStack_1a4;
          UStack_268.fields.tangent.fields.w = fStack_1a0;
          UStack_268.fields.normal.fields.x = (float)uStack_1b8;
          UStack_268.fields.normal.fields.y = (float)((ulong)uStack_1b8 >> 0x20);
          UStack_268.fields.normal.fields.z = fStack_1b0;
          UStack_268.fields.tangent.fields.x = fStack_1ac;
          uVar6._0_1_ = auStack_158[0x10];
          uVar6._1_1_ = auStack_158[0x11];
          uVar6._2_1_ = auStack_158[0x12];
          uVar6._3_1_ = auStack_158[0x13];
          UStack_268.fields.uv0.fields.x = fStack_144;
          UStack_268.fields.uv0.fields.y = fStack_140;
          UStack_268.fields.uv0.fields.z = fStack_13c;
          UStack_268.fields.uv0.fields.w = fStack_138;
          UStack_268.fields.uv1.fields.x = fStack_134;
          UStack_268.fields.uv1.fields.y = fStack_130;
          UStack_268.fields.uv1.fields.z = fStack_12c;
          UStack_268.fields.uv2.fields.w = fStack_118;
          UStack_268.fields.uv3.fields.x = fStack_114;
          UStack_268.fields.uv3.fields.y = fStack_110;
          UStack_268.fields.uv3.fields.z = fStack_10c;
          UStack_268.fields.uv1.fields.w = (float)uStack_128;
          UStack_268.fields.uv2.fields.x = (float)((ulong)uStack_128 >> 0x20);
          UStack_268.fields.uv2.fields.y = (float)uStack_120;
          UStack_268.fields.uv2.fields.z = (float)((ulong)uStack_120 >> 0x20);
          UStack_268.fields.color.fields.r = auStack_158[0x10];
          UStack_268.fields.color.fields.g = auStack_158[0x11];
          UStack_268.fields.color.fields.b = auStack_158[0x12];
          UStack_268.fields.color.fields.a = auStack_158[0x13];
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar5 = (__this_02->fields)._items;
          UStack_268.fields.color.fields.rgba = iVar12;
          if (pUVar5 == (UnityEngine_UIVertex_array *)0x0) goto label_03b34c11;
          uVar17 = (__this_02->fields)._size;
          lVar16 = (long)(int)uVar17;
          UStack_268.fields.color.fields._4_4_ = uVar6;
          if ((uint)pUVar5->max_length <= uVar17) break;
          (__this_02->fields)._size = uVar17 + 1;
          lVar15 = lVar16 * 0x6c;
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv2 + lVar15 + 0xc);
          *puVar2 = CONCAT44(fStack_114,fStack_118);
          puVar2[1] = CONCAT44(fStack_10c,fStack_110);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv2 + lVar15);
          *puVar2 = CONCAT44(UStack_268.fields.uv2.fields.y,UStack_268.fields.uv2.fields.x);
          puVar2[1] = CONCAT44(fStack_118,UStack_268.fields.uv2.fields.z);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv1 + lVar15);
          *puVar2 = CONCAT44(fStack_130,fStack_134);
          puVar2[1] = CONCAT44(UStack_268.fields.uv1.fields.w,fStack_12c);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.uv0 + lVar15);
          *puVar2 = CONCAT44(fStack_140,fStack_144);
          puVar2[1] = CONCAT44(fStack_138,fStack_13c);
          puVar2 = (undefined8 *)((long)&pUVar5->m_Items[0].fields.tangent + lVar15 + 8);
          *puVar2 = _fStack_1a4;
          puVar2[1] = CONCAT44(auStack_158._16_4_,iVar12);
          pUVar7 = &pUVar5->m_Items[0].fields.normal + lVar16 * 9;
          (pUVar7->fields).y = UStack_268.fields.normal.fields.y;
          (pUVar7->fields).z = fStack_1b0;
          *(ulong *)(&(pUVar7->fields).y + 2) = CONCAT44(fStack_1a8,fStack_1ac);
          pUVar3 = &(&pUVar5->m_Items[0].fields.position)[lVar16 * 9].fields;
          pUVar3->x = fVar28;
          pUVar3->y = fVar27;
          *(ulong *)&pUVar3->z =
               CONCAT44(UStack_268.fields.normal.fields.x,UStack_268.fields.position.fields.z);
          iVar19 = iVar19 + 1;
          UStack_268.fields.tangent.fields._8_8_ = uVar26;
          if (*(int *)&(__this_05->_1).namespaze <= iVar19) {
            return;
          }
        }
        item.fields.uv3.fields.z = fStack_10c;
        item.fields.uv3.fields.y = fStack_110;
        item.fields.uv2.fields.y = UStack_268.fields.uv2.fields.y;
        item.fields.uv2.fields.x = UStack_268.fields.uv2.fields.x;
        item.fields.uv1.fields.y = fStack_130;
        item.fields.uv1.fields.x = fStack_134;
        item.fields.uv1.fields.w = UStack_268.fields.uv1.fields.w;
        item.fields.uv1.fields.z = fStack_12c;
        item.fields.normal.fields.x = UStack_268.fields.normal.fields.x;
        item.fields.position.fields.z = UStack_268.fields.position.fields.z;
        item.fields.normal.fields.z = fStack_1b0;
        item.fields.normal.fields.y = UStack_268.fields.normal.fields.y;
        item.fields.tangent.fields.y = fStack_1a8;
        item.fields.tangent.fields.x = fStack_1ac;
        item.fields.color.fields.r = auStack_158[0x10];
        item.fields.color.fields.g = auStack_158[0x11];
        item.fields.color.fields.b = auStack_158[0x12];
        item.fields.color.fields.a = auStack_158[0x13];
        item.fields.color.fields.rgba = iVar12;
        item.fields.uv0.fields.y = fStack_140;
        item.fields.uv0.fields.x = fStack_144;
        item.fields.uv0.fields.w = fStack_138;
        item.fields.uv0.fields.z = fStack_13c;
        item.fields.position.fields.x = fVar28;
        item.fields.position.fields.y = fVar27;
        item.fields.tangent.fields.z = fStack_1a4;
        item.fields.tangent.fields.w = fStack_1a0;
        item.fields.uv2.fields.z = UStack_268.fields.uv2.fields.z;
        item.fields.uv2.fields.w = fStack_118;
        item.fields.uv3.fields.x = fStack_114;
        item.fields.uv3.fields.w = in_stack_fffffffffffffd54;
        UStack_268.fields.tangent.fields._8_8_ = uVar26;
        System_Collections_Generic_List_UIVertex___AddWithResize
                  (__this_02,item,*(MethodInfo_3691EE0 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
        ;
        iVar19 = iVar19 + 1;
      } while (iVar19 < *(int *)&(__this_05->_1).namespaze);
    }
    return;
  }
label_03b34c11:
  uVar26 = il2cpp_runtime_helper_022b2c90();
  fVar28 = sinf((float)((ulong)uVar26 >> 0x20) * 78.233 + (float)uVar26 * 12.9898 + (float)iVar18 * 37.719);
  floorf(fVar28 * 43758.547);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Track
// il2cpp: DG_Tweening_Tween_o* Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track (DG_Tweening_Tween_o* tween, bool blocksInput, const MethodInfo* method);
// 0x3b30510

DG_Tweening_Tween_o *
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
          (DG_Tweening_Tween_o *tween,bool_conflict blocksInput,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_o *item;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_array *pGVar3;
  long lVar4;
  int32_t iVar5;
  Il2CppObject *__this;
  Il2CppObject *__this_00;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *pGVar6;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *extraout_RAX;
  MethodInfo *method_00;
  
  if (g_data_057a9c40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ActiveTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnKill_Tween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Track_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    g_data_057a9c40 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (tween == (DG_Tweening_Tween_o *)0x0) {
    return (DG_Tweening_Tween_o *)0x0;
  }
  iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ActiveTween);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)(__this_00 + 1);
  __this_00[1].klass = (Il2CppClass *)tween;
  il2cpp_runtime_helper_022b4080();
  *(char *)&__this_00[1].monitor = (char)blocksInput;
  *(int32_t *)((long)&__this_00[1].monitor + 4) = iVar5;
  if (__this != (Il2CppObject *)0x0) {
    __this[1].monitor = __this_00;
    il2cpp_runtime_helper_022b4080(&__this[1].monitor);
    method_00 = TypeInfo_GisketchMotionDriver;
    if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Ensure(method_00);
    lVar4 = MethodInfo_Void_Add;
    if ((pGVar6 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)0x0) &&
       (method_00 = (MethodInfo *)(pGVar6->fields)._active, method_00 != (MethodInfo *)0x0)) {
      item = __this[1].monitor;
      piVar1 = (int32_t *)((long)&method_00->name + 4);
      *piVar1 = *piVar1 + 1;
      pGVar3 = ((System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__Fields *)
               &method_00->invoker_method)->_items;
      if (pGVar3 != (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_ActiveTween_array *)0x0) {
        uVar2 = *(uint *)&method_00->name;
        if (uVar2 < (uint)pGVar3->max_length) {
          *(uint *)&method_00->name = uVar2 + 1;
          pGVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pGVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)method_00,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        __this[1].klass = (Il2CppClass *)(tween->fields).onComplete;
        il2cpp_runtime_helper_022b4080(__this + 1);
        action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__OnKill_object_((Il2CppObject *)tween,action,MethodInfo_Tween_OnKill_Tween);
        return tween;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)method_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$get_HasActive
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive (const MethodInfo* method);
// 0x3b2c530

bool_conflict Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *pIVar10;
  
  if (g_data_057a9c41 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchMotionDriver_ActiveTween_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Tweening_GisketchM);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c41 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_GisketchMotionDriver + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = 0;
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((**(long **)(TypeInfo_GisketchMotionDriver + 0xb8) == 0) ||
       (__this = *(System_Collections_Generic_List_object__o **)(**(long **)(TypeInfo_GisketchMotionDriver + 0xb8) + 0x20),
       __this == (System_Collections_Generic_List_object__o *)0x0)) {
label_03b2c6ae:
      auVar7 = il2cpp_runtime_helper_022b2c90();
      uVar5 = auVar7._0_8_;
      if (auVar7._8_4_ != 1) {
label_03b2c6fb:
        __this_03.fields._8_8_ = pIVar9;
        __this_03.fields._list = pSVar8;
        __this_03.fields._current = pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        _Unwind_Resume(uVar5);
      }
      plVar3 = (long *)__cxa_begin_catch(uVar5);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pIVar9;
      __this_02.fields._list = pSVar8;
      __this_02.fields._current = pIVar10;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      bVar6 = 0;
      uVar5 = 0;
      if (lVar1 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar1);
        goto label_03b2c6fb;
      }
    }
    else {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,__this,
                 MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Tweening_GisketchM);
      do {
        __this_00.fields._8_8_ = pIVar9;
        __this_00.fields._list = pSVar8;
        __this_00.fields._current = pIVar10;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') {
          uVar5 = 6;
          bVar6 = 0;
          goto label_03b2c681;
        }
        if (pIVar10 == (Il2CppObject *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_03b2c6ae;
        }
      } while (*(char *)&pIVar10[1].monitor == '\0');
      bVar6 = 1;
      uVar5 = 5;
label_03b2c681:
      __this_01.fields._8_8_ = pIVar9;
      __this_01.fields._list = pSVar8;
      __this_01.fields._current = pIVar10;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    }
    uVar4 = (uint)((int)uVar5 == 5 & bVar6);
  }
  return uVar4;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Update
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Update (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x3b33eb0

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Update
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (g_data_057a9c42 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    g_data_057a9c42 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c46 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c46 = '\x01';
  }
  bVar2 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') &&
     (bVar2 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
    if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
  }
  if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) != 0) {
    Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(TypeInfo_GisketchMotionDriver);
    return;
  }
  method_00 = TypeInfo_GisketchMotionDriver;
  il2cpp_runtime_helper_02337ed0();
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(method_00);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$CompleteActiveForSkip
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip (const MethodInfo* method);
// 0x3b2a1c0

bool_conflict Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  char cVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  bool_conflict extraout_EAX;
  MethodInfo *pMVar6;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this;
  
  if (g_data_057a9c43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c43 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
    pMVar6 = TypeInfo_GisketchMotionDriver;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
    pMVar6 = TypeInfo_GisketchMotionDriver;
  }
  TypeInfo_GisketchMotionDriver = pMVar6;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive(pMVar6);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive(pMVar6);
    cVar2 = (char)bVar3;
  }
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    x = *(UnityEngine_Object_o **)TypeInfo_GisketchMotionDriver[2].virtualMethodPointer;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = 0;
    pMVar6 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o **)TypeInfo_GisketchMotionDriver[2].virtualMethodPointer;
      if (__this == (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
        return extraout_EAX;
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActive(__this,pMVar6);
      iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
      *(int32_t *)(TypeInfo_GisketchMotionDriver[2].virtualMethodPointer + 8) = iVar5;
      bVar3 = 1;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$get_ConsumedSkipThisFrame
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_ConsumedSkipThisFrame (const MethodInfo* method);
// 0x3b2a170

bool_conflict Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_ConsumedSkipThisFrame(MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (g_data_057a9c44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    g_data_057a9c44 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = *(int *)(*(long *)(TypeInfo_GisketchMotionDriver + 0xb8) + 8);
  iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar1 == iVar2);
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Ensure
// il2cpp: Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Ensure (const MethodInfo* method);
// 0x3b33d50

Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *
Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Ensure(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *pUVar3;
  Il2CppObject *pIVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  MethodInfo *method_00;
  
  if (g_data_057a9c45 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchMotionDriver_AddComponent_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"AoTTG Motion Driver");
    g_data_057a9c45 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = *(UnityEngine_Object_o **)TypeInfo_GisketchMotionDriver[2].virtualMethodPointer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar3 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pUVar3,"AoTTG Motion Driver",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DontDestroyOnLoad(pUVar3,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Object_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c42 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
        g_data_057a9c42 = '\x01';
        iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
      }
      else {
        iVar1 = *(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9c46 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057a9c46 = '\x01';
      }
      bVar2 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
      if (((char)bVar2 == '\0') &&
         (bVar2 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
        if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)CONCAT44(extraout_var,bVar2);
        }
      }
      if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) != 0) {
        bVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(TypeInfo_GisketchMotionDriver);
        return (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)CONCAT44(extraout_var_00,bVar2);
      }
      method_00 = TypeInfo_GisketchMotionDriver;
      il2cpp_runtime_helper_02337ed0();
      bVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip(method_00);
      return (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *)CONCAT44(extraout_var_01,bVar2);
    }
    pIVar4 = UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pUVar3,MethodInfo_GisketchMotionDriver_AddComponent_GisketchMotionDriver);
    if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(Il2CppObject **)TypeInfo_GisketchMotionDriver[2].virtualMethodPointer = pIVar4;
    il2cpp_runtime_helper_022b4080(TypeInfo_GisketchMotionDriver[2].virtualMethodPointer,pIVar4);
  }
  else if (*(int *)((long)&TypeInfo_GisketchMotionDriver[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  return *(Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o **)TypeInfo_GisketchMotionDriver[2].virtualMethodPointer;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$SkipPressed
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__SkipPressed (const MethodInfo* method);
// 0x3b33f90

bool_conflict Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__SkipPressed(MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057a9c46 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c46 = '\x01';
  }
  bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) != 0) {
        bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
        return bVar1;
      }
      il2cpp_runtime_helper_02337ed0();
      bVar1 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$IsKeyboardSkip
// il2cpp: bool Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsKeyboardSkip (int32_t key, const MethodInfo* method);
// 0x3b341d0

bool_conflict Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__IsKeyboardSkip(int32_t key,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),key == 0x1b);
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$CompleteActive
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActive (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x3b34000

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActive
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *t;
  long lVar5;
  int32_t iVar6;
  System_Object_array *pSVar7;
  System_Predicate_T__o *match;
  uint uVar8;
  
  if (g_data_057a9c47 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveAll);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchMotionDriver_ActiveTween_ToArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_ActiveTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_CompleteActive_b__13_0);
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c47 = '\x01';
  }
  iVar6 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  pSVar3 = (__this->fields)._active;
  if ((pSVar3 != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0) &&
     (pSVar7 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_GisketchMotionDriver_ActiveTween_ToArray),
     pSVar7 != (System_Object_array *)0x0)) {
    iVar1 = (int)pSVar7->max_length;
    if (0 < iVar1) {
      uVar8 = 0;
      if (iVar1 != 0) {
        do {
          pIVar4 = pSVar7->m_Items[(int)uVar8];
          if (pIVar4 == (Il2CppObject *)0x0) goto label_03b341b7;
          if (((*(int *)((long)&pIVar4[1].monitor + 4) != iVar6) &&
              (t = pIVar4[1].klass, t != (Il2CppClass *)0x0)) && (*(char *)&(t->_2).cctor_thread != '\0')) {
            DG_Tweening_TweenExtensions__Complete_235b780((DG_Tweening_Tween_o *)t,1,(MethodInfo *)0x0);
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)pSVar7->max_length;
          if ((int)uVar2 <= (int)uVar8) goto label_03b340e9;
        } while (uVar8 < uVar2);
      }
      goto label_03b341bc;
    }
label_03b340e9:
    pSVar3 = (__this->fields)._active;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (match == (System_Predicate_T__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_ActiveTween);
      System_Predicate_object____ctor();
      lVar5 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Predicate_T__o **)(lVar5 + 8) = match;
      il2cpp_runtime_helper_022b4080(lVar5 + 8,match);
    }
    if (pSVar3 != (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAll
                ((System_Collections_Generic_List_object__o *)pSVar3,match,MethodInfo_Int32_RemoveAll);
      return;
    }
  }
label_03b341b7:
  il2cpp_runtime_helper_022b2c90();
label_03b341bc:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___ctor (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o* __this, const MethodInfo* method);
// 0x3b341e0

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___ctor
               (Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *__this_00;
  
  if (g_data_057a9c48 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_A);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ActiveTween);
    g_data_057a9c48 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GisketchMotionDriver_ActiveTween__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_ActiveTween);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_A);
  (__this->fields)._active = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._active);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___cctor (const MethodInfo* method);
// 0x3b34260

void Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___cctor(MethodInfo *method)

{
  if (g_data_057a9c49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    g_data_057a9c49 = '\x01';
  }
  *(undefined4 *)(*(long *)(TypeInfo_GisketchMotionDriver + 0xb8) + 8) = 0xffffffff;
  return;
}


