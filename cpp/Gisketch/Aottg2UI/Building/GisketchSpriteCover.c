// Type: Gisketch.Aottg2UI.Building.GisketchSpriteCover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchSpriteCover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$Awake
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__Awake (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b88760

void Gisketch_Aottg2UI_Building_GisketchSpriteCover__Awake
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  Gilzoide_FlexUi_FlexLayout_o *pGVar2;
  
  if (g_data_057a9e8d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    g_data_057a9e8d = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Image_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
  (__this->fields)._image = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._image,pUVar1);
  pGVar2 = (Gilzoide_FlexUi_FlexLayout_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  (__this->fields)._flex = pGVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._flex,pGVar2);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnEnable (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b887e0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnEnable
          (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  void *pvVar1;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  Il2CppClass *pIVar4;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool_conflict bVar10;
  float fVar11;
  UnityEngine_Material_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Material_c *pUVar15;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar16;
  UnityEngine_Material_c *unaff_RBX;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  undefined1 *puVar17;
  UnityEngine_Color_o *unaff_RBP;
  UnityEngine_Material_c *__this_01;
  undefined8 unaff_R12;
  UnityEngine_Material_c *unaff_R13;
  UnityEngine_Object_o *unaff_R14;
  Il2CppType *unaff_R15;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  UnityEngine_Rect_o UVar27;
  
  puVar17 = (undefined1 *)register0x00000020;
  do {
    __this_01 = (UnityEngine_Material_c *)__this;
    *(UnityEngine_Color_o **)(puVar17 + -8) = unaff_RBP;
    *(Il2CppType **)(puVar17 + -0x10) = unaff_R15;
    *(UnityEngine_Object_o **)(puVar17 + -0x18) = unaff_R14;
    *(UnityEngine_Material_c **)(puVar17 + -0x20) = unaff_R13;
    *(undefined8 *)(puVar17 + -0x28) = unaff_R12;
    *(UnityEngine_Material_c **)(puVar17 + -0x30) = unaff_RBX;
    if (g_data_057a9e8e == '\0') {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88816;
      il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88822;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
      *(undefined8 *)(puVar17 + -0x80) = 0x3b8882e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar17 + -0x80) = 0x3b8883a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88846;
      il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
      g_data_057a9e8e = '\x01';
    }
    pUVar3 = (__this_01->_1).byval_arg.data;
    unaff_R14 = (UnityEngine_Object_o *)&TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88869;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R15 = &(__this_01->_1).byval_arg;
    *(undefined8 *)(puVar17 + -0x80) = 0x3b88879;
    bVar10 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b8888f;
      pUVar12 = (UnityEngine_Material_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image)
      ;
      (__this_01->_1).byval_arg.data = pUVar12;
      *(undefined8 *)(puVar17 + -0x80) = 0x3b8889e;
      il2cpp_runtime_helper_022b4080(unaff_R15);
    }
    pUVar3 = *(UnityEngine_Object_o **)&((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b888b3;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = (UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits;
    *(undefined8 *)(puVar17 + -0x80) = 0x3b888c3;
    bVar10 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b888d9;
      pIVar13 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_FlexLayout_GetComponent_FlexLayout)
      ;
      *(Il2CppObject **)&((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields = pIVar13;
      *(undefined8 *)(puVar17 + -0x80) = 0x3b888e8;
      il2cpp_runtime_helper_022b4080(unaff_RBP);
    }
    unaff_RBX = unaff_R15->data;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b888fc;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R12 = 0;
    *(undefined8 *)(puVar17 + -0x80) = 0x3b8890b;
    __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') goto label_03b88e80;
    if (unaff_R15->data != (UnityEngine_Material_o *)0x0) {
      pUVar15 = unaff_R15->data[9].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar17 + -0x80) = 0x3b88937;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = 0;
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88946;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') goto label_03b88e80;
      unaff_RBX = *(UnityEngine_Material_c **)&unaff_RBP->fields;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar17 + -0x80) = 0x3b88963;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = 0;
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88972;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') goto label_03b88e80;
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88984;
      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)__this_01;
      pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)(puVar17 + -0x80) = 0x3b88997;
        unaff_RBX = (UnityEngine_Material_c *)UnityEngine_Transform__get_parent(pUVar14,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar17 + -0x80) = 0x3b889ab;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R12 = 0;
        *(undefined8 *)(puVar17 + -0x80) = 0x3b889ba;
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') goto label_03b88e80;
        *(undefined8 *)(puVar17 + -0x80) = 0x3b889cc;
        __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)__this_01;
        pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
        ;
        unaff_R12 = 0;
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)(puVar17 + -0x80) = 0x3b889e1;
          pUVar15 = (UnityEngine_Material_c *)UnityEngine_Transform__get_parent(pUVar14,(MethodInfo *)0x0);
          unaff_RBX = (UnityEngine_Material_c *)0x0;
          if ((pUVar15 != (UnityEngine_Material_c *)0x0) &&
             (unaff_RBX = (UnityEngine_Material_c *)0x0, (pUVar15->_1).image == TypeInfo_RectTransform)) {
            unaff_RBX = pUVar15;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar17 + -0x80) = 0x3b88a0a;
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_R12 = 0;
          *(undefined8 *)(puVar17 + -0x80) = 0x3b88a19;
          __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
          bVar10 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar10 != '\0') goto label_03b88e80;
          if (unaff_RBX != (UnityEngine_Material_c *)0x0) {
            unaff_R12 = 0;
            *(undefined8 *)(puVar17 + -0x80) = 0x3b88a37;
            UVar27 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            if (UVar27.fields.m_Width <= 0.0) goto label_03b88e80;
            unaff_R12 = 0;
            *(undefined8 *)(puVar17 + -0x80) = 0x3b88a50;
            UVar27 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            if (UVar27.fields.m_Height <= 0.0) goto label_03b88e80;
            *(undefined8 *)(puVar17 + -0x80) = 0x3b88a6a;
            __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
            UVar27 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            fVar11 = UVar27.fields.m_Width;
            fVar20 = UVar27.fields.m_Height;
            pvVar1 = (__this_01->_1).this_arg.data;
            fVar22 = fVar11 - SUB84(pvVar1,0);
            fVar23 = fVar20 - (float)((ulong)pvVar1 >> 0x20);
            auVar6._8_4_ = in_XMM1_Dc;
            auVar6._0_8_ = UVar27.fields._8_8_;
            auVar6._12_4_ = in_XMM1_Dd;
            *(undefined1 (*) [16])(puVar17 + -0x78) = auVar6;
            if (fVar23 * fVar23 + fVar22 * fVar22 < 9.9999994e-11) {
              if (unaff_R15->data == (UnityEngine_Material_o *)0x0) goto label_03b88e92;
              unaff_RBX = unaff_R15->data[9].klass;
              pUVar3 = *(UnityEngine_Object_o **)&(__this_01->_1).this_arg.bits;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)(puVar17 + -0x80) = 0x3b88ac0;
                il2cpp_runtime_helper_02337ed0();
                unaff_R14 = pUVar3;
              }
              unaff_R12 = 0;
              *(undefined8 *)(puVar17 + -0x80) = 0x3b88ad0;
              __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
              bVar10 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)unaff_RBX,pUVar3,(MethodInfo *)0x0);
              fVar11 = *(float *)(puVar17 + -0x78);
              fVar20 = *(float *)(puVar17 + -0x74);
              in_XMM1_Dc = *(uint *)(puVar17 + -0x70);
              in_XMM1_Dd = *(uint *)(puVar17 + -0x6c);
              if ((char)bVar10 != '\0') goto label_03b88e80;
            }
            unaff_R12 = 0;
            (__this_01->_1).this_arg.data = (void *)CONCAT44(fVar20,fVar11);
            pUVar12 = (__this_01->_1).byval_arg.data;
            if (pUVar12 != (UnityEngine_Material_o *)0x0) {
              __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&(__this_01->_1).this_arg.bits;
              *(UnityEngine_Material_c **)&(__this_01->_1).this_arg.bits = pUVar12[9].klass;
              *(undefined8 *)(puVar17 + -0x80) = 0x3b88b02;
              il2cpp_runtime_helper_022b4080();
              pUVar12 = (__this_01->_1).byval_arg.data;
              if ((pUVar12 != (UnityEngine_Material_o *)0x0) &&
                 (pUVar15 = pUVar12[9].klass, __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0
                 , pUVar15 != (UnityEngine_Material_c *)0x0)) {
                *(undefined8 *)(puVar17 + -0x80) = 0x3b88b26;
                UVar27 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)pUVar15,(MethodInfo *)0x0);
                __this = unaff_R15->data;
                if ((UnityEngine_UI_Image_o *)__this != (UnityEngine_UI_Image_o *)0x0) {
                  uVar18 = -(uint)(0.0 < UVar27.fields.m_Height);
                  uVar19 = -(uint)(0.0 < UVar27.fields.m_Width);
                  fVar24 = (float)(~uVar19 & 0x3f800000 |
                                  (~uVar18 & 0x3f800000 |
                                  (uint)(UVar27.fields.m_Width / UVar27.fields.m_Height) & uVar18) & uVar19);
                  fVar11 = *(float *)(puVar17 + -0x78);
                  fVar20 = *(float *)(puVar17 + -0x74);
                  uVar7 = *(undefined4 *)(puVar17 + -0x70);
                  uVar8 = *(undefined4 *)(puVar17 + -0x6c);
                  *(float *)(puVar17 + -0x68) = fVar20;
                  *(float *)(puVar17 + -100) = fVar20;
                  *(undefined4 *)(puVar17 + -0x60) = uVar7;
                  *(undefined4 *)(puVar17 + -0x5c) = uVar8;
                  fVar23 = fVar20 * fVar24;
                  fVar22 = fVar11;
                  if (fVar11 <= fVar23) {
                    fVar22 = fVar23;
                  }
                  *(float *)(puVar17 + -0x58) = fVar22;
                  *(float *)(puVar17 + -0x54) = fVar20;
                  *(undefined4 *)(puVar17 + -0x50) = uVar7;
                  *(undefined4 *)(puVar17 + -0x4c) = uVar8;
                  *(float *)(puVar17 + -0x78) = fVar11 / fVar24;
                  *(float *)(puVar17 + -0x74) = fVar20;
                  *(undefined4 *)(puVar17 + -0x70) = uVar7;
                  *(undefined4 *)(puVar17 + -0x6c) = uVar8;
                  *(undefined8 *)(puVar17 + -0x80) = 0x3b88ba1;
                  UnityEngine_UI_Image__set_preserveAspect
                            ((UnityEngine_UI_Image_o *)__this,1,(MethodInfo *)0x0);
                  fVar11 = *(float *)&(__this_01->_1).element_class;
                  in_XMM1_Dc = 0;
                  in_XMM1_Dd = 0;
                  if (g_data_057a68c8 == '\0') {
                    __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&TypeInfo_Mathf;
                    *(float *)(puVar17 + -0x48) = fVar11;
                    *(undefined4 *)(puVar17 + -0x44) = 0;
                    *(undefined4 *)(puVar17 + -0x40) = 0;
                    *(undefined4 *)(puVar17 + -0x3c) = 0;
                    *(undefined8 *)(puVar17 + -0x80) = 0x3b88bc1;
                    il2cpp_runtime_helper_023445d0();
                    fVar11 = *(float *)(puVar17 + -0x48);
                    in_XMM1_Dc = *(uint *)(puVar17 + -0x40);
                    in_XMM1_Dd = *(uint *)(puVar17 + -0x3c);
                    g_data_057a68c8 = '\x01';
                  }
                  uVar7 = *(undefined4 *)(puVar17 + -100);
                  uVar8 = *(undefined4 *)(puVar17 + -0x60);
                  uVar9 = *(undefined4 *)(puVar17 + -0x5c);
                  fVar20 = *(float *)(puVar17 + -0x68);
                  if (*(float *)(puVar17 + -0x68) <= *(float *)(puVar17 + -0x78)) {
                    fVar20 = *(float *)(puVar17 + -0x78);
                  }
                  fVar22 = *(float *)(puVar17 + -0x58);
                  fVar23 = ABS(fVar22);
                  uVar18 = *(uint *)(puVar17 + -0x54) & 0x7fffffff;
                  uVar19 = *(uint *)(puVar17 + -0x50) & 0x7fffffff;
                  uVar26 = *(uint *)(puVar17 + -0x4c) & 0x7fffffff;
                  fVar24 = fVar23;
                  if (fVar23 <= ABS(fVar11)) {
                    fVar24 = ABS(fVar11);
                  }
                  unaff_R14 = (UnityEngine_Object_o *)&TypeInfo_Mathf;
                  fVar25 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                  in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
                  in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
                  fVar21 = fVar24 * 1e-06;
                  if (fVar24 * 1e-06 <= fVar25) {
                    fVar21 = fVar25;
                  }
                  if (ABS(fVar11 - fVar22) < fVar21) {
                    fVar11 = *(float *)((long)&(__this_01->_1).element_class + 4);
                    fVar21 = ABS(fVar11);
                    in_XMM1_Dc = 0;
                    in_XMM1_Dd = 0;
                    fVar24 = ABS(fVar20);
                    if (ABS(fVar20) <= fVar21) {
                      fVar24 = fVar21;
                    }
                    fVar21 = fVar24 * 1e-06;
                    if (fVar24 * 1e-06 <= fVar25) {
                      fVar21 = fVar25;
                    }
                    if (ABS(fVar11 - fVar20) < fVar21) {
                      unaff_R12 = 0;
                      goto label_03b88e80;
                    }
                  }
                  *(float *)&(__this_01->_1).element_class = fVar22;
                  *(float *)((long)&(__this_01->_1).element_class + 4) = fVar20;
                  pUVar15 = *(UnityEngine_Material_c **)
                             &((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields;
                  unaff_RBX = (UnityEngine_Material_c *)0x0;
                  unaff_R15 = (Il2CppType *)unaff_RBP;
                  if (pUVar15 != (UnityEngine_Material_c *)0x0) {
                    iVar2 = *(int *)&(pUVar15->_1).interopData;
                    *(float *)(puVar17 + -0x68) = fVar20;
                    *(undefined4 *)(puVar17 + -100) = uVar7;
                    *(undefined4 *)(puVar17 + -0x60) = uVar8;
                    *(undefined4 *)(puVar17 + -0x5c) = uVar9;
                    if (iVar2 == 2) {
                      unaff_R12 = 0;
                    }
                    else {
                      *(float *)(puVar17 + -0x78) = fVar23;
                      *(uint *)(puVar17 + -0x74) = uVar18;
                      *(uint *)(puVar17 + -0x70) = uVar19;
                      *(uint *)(puVar17 + -0x6c) = uVar26;
                      *(undefined8 *)(puVar17 + -0x80) = 0x3b88c99;
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)pUVar15;
                      Gilzoide_FlexUi_FlexLayout__set_AlignSelf
                                ((Gilzoide_FlexUi_FlexLayout_o *)pUVar15,2,(MethodInfo *)0x0);
                      fVar23 = *(float *)(puVar17 + -0x78);
                      uVar18 = *(uint *)(puVar17 + -0x74);
                      uVar19 = *(uint *)(puVar17 + -0x70);
                      uVar26 = *(uint *)(puVar17 + -0x6c);
                      fVar22 = *(float *)(puVar17 + -0x58);
                      fVar20 = *(float *)(puVar17 + -0x68);
                      pUVar15 = *(UnityEngine_Material_c **)&unaff_RBP->fields;
                      unaff_R12 = 1;
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (pUVar15 == (UnityEngine_Material_c *)0x0) goto label_03b88e92;
                    }
                    pIVar4 = (pUVar15->_1).klass;
                    if ((ulong)pIVar4 >> 0x20 == 1) {
                      fVar11 = SUB84(pIVar4,0);
                      if (g_data_057a68c8 == '\0') {
                        __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&TypeInfo_Mathf;
                        *(float *)(puVar17 + -0x78) = fVar23;
                        *(uint *)(puVar17 + -0x74) = uVar18;
                        *(uint *)(puVar17 + -0x70) = uVar19;
                        *(uint *)(puVar17 + -0x6c) = uVar26;
                        *(float *)(puVar17 + -0x48) = fVar11;
                        *(undefined4 *)(puVar17 + -0x44) = 0;
                        *(undefined4 *)(puVar17 + -0x40) = 0;
                        *(undefined4 *)(puVar17 + -0x3c) = 0;
                        *(undefined8 *)(puVar17 + -0x80) = 0x3b88cf5;
                        il2cpp_runtime_helper_023445d0();
                        fVar11 = *(float *)(puVar17 + -0x48);
                        fVar23 = *(float *)(puVar17 + -0x78);
                        fVar22 = *(float *)(puVar17 + -0x58);
                        fVar20 = *(float *)(puVar17 + -0x68);
                        g_data_057a68c8 = '\x01';
                      }
                      fVar24 = ABS(fVar11);
                      if (ABS(fVar11) <= fVar23) {
                        fVar24 = fVar23;
                      }
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      fVar21 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                      fVar23 = fVar24 * 1e-06;
                      if (fVar24 * 1e-06 <= fVar21) {
                        fVar23 = fVar21;
                      }
                      if (fVar23 <= ABS(fVar22 - fVar11)) {
                        pUVar15 = *(UnityEngine_Material_c **)&unaff_RBP->fields;
                        goto label_03b88d52;
                      }
                    }
                    else {
label_03b88d52:
                      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                        *(undefined8 *)(puVar17 + -0x80) = 0x3b88d6a;
                        il2cpp_runtime_helper_02337ed0();
                        fVar22 = *(float *)(puVar17 + -0x58);
                      }
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0;
                      *(undefined8 *)(puVar17 + -0x80) = 0x3b88d79;
                      GVar16 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar22,(MethodInfo *)0x0);
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (pUVar15 == (UnityEngine_Material_c *)0x0) goto label_03b88e92;
                      *(undefined8 *)(puVar17 + -0x80) = 0x3b88d8f;
                      Gilzoide_FlexUi_FlexLayout__set_Width
                                ((Gilzoide_FlexUi_FlexLayout_o *)pUVar15,GVar16,(MethodInfo *)0x0);
                      unaff_R12 = 1;
                      fVar20 = *(float *)(puVar17 + -0x68);
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)pUVar15;
                    }
                    __this_00 = *(Gilzoide_FlexUi_FlexLayout_o **)&unaff_RBP->fields;
                    unaff_RBX = (UnityEngine_Material_c *)0x0;
                    if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                      GVar5 = (__this_00->fields)._height.fields;
                      if (((ulong)GVar5 & 0xffffffff00000000) == 0x100000000) {
                        fVar11 = GVar5.Value;
                        if (g_data_057a68c8 == '\0') {
                          *(float *)(puVar17 + -0x78) = fVar11;
                          *(undefined4 *)(puVar17 + -0x74) = 0;
                          *(undefined4 *)(puVar17 + -0x70) = 0;
                          *(undefined4 *)(puVar17 + -0x6c) = 0;
                          *(undefined8 *)(puVar17 + -0x80) = 0x3b88deb;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
                          fVar11 = *(float *)(puVar17 + -0x78);
                          fVar20 = *(float *)(puVar17 + -0x68);
                          g_data_057a68c8 = '\x01';
                        }
                        fVar22 = ABS(fVar11);
                        if (ABS(fVar11) <= ABS(fVar20)) {
                          fVar22 = ABS(fVar20);
                        }
                        in_XMM1_Dc = 0;
                        in_XMM1_Dd = 0;
                        fVar24 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                        fVar23 = fVar22 * 1e-06;
                        if (fVar22 * 1e-06 <= fVar24) {
                          fVar23 = fVar24;
                        }
                        if (ABS(fVar20 - fVar11) < fVar23) goto label_03b88e80;
                        __this_00 = *(Gilzoide_FlexUi_FlexLayout_o **)&unaff_RBP->fields;
                      }
                      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                        *(undefined8 *)(puVar17 + -0x80) = 0x3b88e5a;
                        il2cpp_runtime_helper_02337ed0();
                        fVar20 = *(float *)(puVar17 + -0x68);
                      }
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0;
                      *(undefined8 *)(puVar17 + -0x80) = 0x3b88e66;
                      GVar16 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar20,(MethodInfo *)0x0);
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                        *(undefined8 *)(puVar17 + -0x80) = 0x3b88e78;
                        Gilzoide_FlexUi_FlexLayout__set_Height(__this_00,GVar16,(MethodInfo *)0x0);
                        unaff_R12 = 1;
label_03b88e80:
                        return (bool_conflict)unaff_R12;
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
label_03b88e92:
    *(undefined8 *)(puVar17 + -0x80) = 0x3b88e97;
    il2cpp_runtime_helper_022b2c90();
    puVar17 = puVar17 + -0x78;
    unaff_R13 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__LateUpdate (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b88ea0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchSpriteCover__LateUpdate
          (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  void *pvVar1;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  Il2CppClass *pIVar4;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool_conflict bVar10;
  float fVar11;
  UnityEngine_Material_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Material_c *pUVar15;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar16;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  UnityEngine_Material_c *unaff_RBX;
  UnityEngine_Color_o *unaff_RBP;
  UnityEngine_Material_c *__this_01;
  undefined8 unaff_R12;
  UnityEngine_Material_c *unaff_R13;
  UnityEngine_Object_o *unaff_R14;
  Il2CppType *unaff_R15;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  UnityEngine_Rect_o UVar26;
  
  do {
    __this_01 = (UnityEngine_Material_c *)__this;
    *(UnityEngine_Color_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(Il2CppType **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(UnityEngine_Material_c **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(UnityEngine_Material_c **)((long)register0x00000020 + -0x30) = unaff_RBX;
    if (g_data_057a9e8e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88816;
      il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88822;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b8882e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b8883a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88846;
      il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
      g_data_057a9e8e = '\x01';
    }
    pUVar3 = (__this_01->_1).byval_arg.data;
    unaff_R14 = (UnityEngine_Object_o *)&TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88869;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R15 = &(__this_01->_1).byval_arg;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88879;
    bVar10 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b8888f;
      pUVar12 = (UnityEngine_Material_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image)
      ;
      (__this_01->_1).byval_arg.data = pUVar12;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b8889e;
      il2cpp_runtime_helper_022b4080(unaff_R15);
    }
    pUVar3 = *(UnityEngine_Object_o **)&((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b888b3;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = (UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b888c3;
    bVar10 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b888d9;
      pIVar13 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_FlexLayout_GetComponent_FlexLayout)
      ;
      *(Il2CppObject **)&((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields = pIVar13;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b888e8;
      il2cpp_runtime_helper_022b4080(unaff_RBP);
    }
    unaff_RBX = unaff_R15->data;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b888fc;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R12 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b8890b;
    __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') goto label_03b88e80;
    if (unaff_R15->data != (UnityEngine_Material_o *)0x0) {
      pUVar15 = unaff_R15->data[9].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88937;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = 0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88946;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') goto label_03b88e80;
      unaff_RBX = *(UnityEngine_Material_c **)&unaff_RBP->fields;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88963;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = 0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88972;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') goto label_03b88e80;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88984;
      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)__this_01;
      pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88997;
        unaff_RBX = (UnityEngine_Material_c *)UnityEngine_Transform__get_parent(pUVar14,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b889ab;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R12 = 0;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b889ba;
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') goto label_03b88e80;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b889cc;
        __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)__this_01;
        pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
        ;
        unaff_R12 = 0;
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b889e1;
          pUVar15 = (UnityEngine_Material_c *)UnityEngine_Transform__get_parent(pUVar14,(MethodInfo *)0x0);
          unaff_RBX = (UnityEngine_Material_c *)0x0;
          if ((pUVar15 != (UnityEngine_Material_c *)0x0) &&
             (unaff_RBX = (UnityEngine_Material_c *)0x0, (pUVar15->_1).image == TypeInfo_RectTransform)) {
            unaff_RBX = pUVar15;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88a0a;
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_R12 = 0;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88a19;
          __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
          bVar10 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar10 != '\0') goto label_03b88e80;
          if (unaff_RBX != (UnityEngine_Material_c *)0x0) {
            unaff_R12 = 0;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88a37;
            UVar26 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            if (UVar26.fields.m_Width <= 0.0) goto label_03b88e80;
            unaff_R12 = 0;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88a50;
            UVar26 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            if (UVar26.fields.m_Height <= 0.0) goto label_03b88e80;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88a6a;
            __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
            UVar26 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            fVar11 = UVar26.fields.m_Width;
            fVar19 = UVar26.fields.m_Height;
            pvVar1 = (__this_01->_1).this_arg.data;
            fVar21 = fVar11 - SUB84(pvVar1,0);
            fVar22 = fVar19 - (float)((ulong)pvVar1 >> 0x20);
            auVar6._8_4_ = in_XMM1_Dc;
            auVar6._0_8_ = UVar26.fields._8_8_;
            auVar6._12_4_ = in_XMM1_Dd;
            *(undefined1 (*) [16])((long)register0x00000020 + -0x78) = auVar6;
            if (fVar22 * fVar22 + fVar21 * fVar21 < 9.9999994e-11) {
              if (unaff_R15->data == (UnityEngine_Material_o *)0x0) goto label_03b88e92;
              unaff_RBX = unaff_R15->data[9].klass;
              pUVar3 = *(UnityEngine_Object_o **)&(__this_01->_1).this_arg.bits;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88ac0;
                il2cpp_runtime_helper_02337ed0();
                unaff_R14 = pUVar3;
              }
              unaff_R12 = 0;
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88ad0;
              __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
              bVar10 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)unaff_RBX,pUVar3,(MethodInfo *)0x0);
              fVar11 = *(float *)((long)register0x00000020 + -0x78);
              fVar19 = *(float *)((long)register0x00000020 + -0x74);
              in_XMM1_Dc = *(uint *)((long)register0x00000020 + -0x70);
              in_XMM1_Dd = *(uint *)((long)register0x00000020 + -0x6c);
              if ((char)bVar10 != '\0') goto label_03b88e80;
            }
            unaff_R12 = 0;
            (__this_01->_1).this_arg.data = (void *)CONCAT44(fVar19,fVar11);
            pUVar12 = (__this_01->_1).byval_arg.data;
            if (pUVar12 != (UnityEngine_Material_o *)0x0) {
              __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&(__this_01->_1).this_arg.bits;
              *(UnityEngine_Material_c **)&(__this_01->_1).this_arg.bits = pUVar12[9].klass;
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88b02;
              il2cpp_runtime_helper_022b4080();
              pUVar12 = (__this_01->_1).byval_arg.data;
              if ((pUVar12 != (UnityEngine_Material_o *)0x0) &&
                 (pUVar15 = pUVar12[9].klass, __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0
                 , pUVar15 != (UnityEngine_Material_c *)0x0)) {
                *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88b26;
                UVar26 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)pUVar15,(MethodInfo *)0x0);
                __this = unaff_R15->data;
                if ((UnityEngine_UI_Image_o *)__this != (UnityEngine_UI_Image_o *)0x0) {
                  uVar17 = -(uint)(0.0 < UVar26.fields.m_Height);
                  uVar18 = -(uint)(0.0 < UVar26.fields.m_Width);
                  fVar23 = (float)(~uVar18 & 0x3f800000 |
                                  (~uVar17 & 0x3f800000 |
                                  (uint)(UVar26.fields.m_Width / UVar26.fields.m_Height) & uVar17) & uVar18);
                  fVar11 = *(float *)((long)register0x00000020 + -0x78);
                  fVar19 = *(float *)((long)register0x00000020 + -0x74);
                  uVar7 = *(undefined4 *)((long)register0x00000020 + -0x70);
                  uVar8 = *(undefined4 *)((long)register0x00000020 + -0x6c);
                  *(float *)((long)register0x00000020 + -0x68) = fVar19;
                  *(float *)((long)register0x00000020 + -100) = fVar19;
                  *(undefined4 *)((long)register0x00000020 + -0x60) = uVar7;
                  *(undefined4 *)((long)register0x00000020 + -0x5c) = uVar8;
                  fVar22 = fVar19 * fVar23;
                  fVar21 = fVar11;
                  if (fVar11 <= fVar22) {
                    fVar21 = fVar22;
                  }
                  *(float *)((long)register0x00000020 + -0x58) = fVar21;
                  *(float *)((long)register0x00000020 + -0x54) = fVar19;
                  *(undefined4 *)((long)register0x00000020 + -0x50) = uVar7;
                  *(undefined4 *)((long)register0x00000020 + -0x4c) = uVar8;
                  *(float *)((long)register0x00000020 + -0x78) = fVar11 / fVar23;
                  *(float *)((long)register0x00000020 + -0x74) = fVar19;
                  *(undefined4 *)((long)register0x00000020 + -0x70) = uVar7;
                  *(undefined4 *)((long)register0x00000020 + -0x6c) = uVar8;
                  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88ba1;
                  UnityEngine_UI_Image__set_preserveAspect
                            ((UnityEngine_UI_Image_o *)__this,1,(MethodInfo *)0x0);
                  fVar11 = *(float *)&(__this_01->_1).element_class;
                  in_XMM1_Dc = 0;
                  in_XMM1_Dd = 0;
                  if (g_data_057a68c8 == '\0') {
                    __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&TypeInfo_Mathf;
                    *(float *)((long)register0x00000020 + -0x48) = fVar11;
                    *(undefined4 *)((long)register0x00000020 + -0x44) = 0;
                    *(undefined4 *)((long)register0x00000020 + -0x40) = 0;
                    *(undefined4 *)((long)register0x00000020 + -0x3c) = 0;
                    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88bc1;
                    il2cpp_runtime_helper_023445d0();
                    fVar11 = *(float *)((long)register0x00000020 + -0x48);
                    in_XMM1_Dc = *(uint *)((long)register0x00000020 + -0x40);
                    in_XMM1_Dd = *(uint *)((long)register0x00000020 + -0x3c);
                    g_data_057a68c8 = '\x01';
                  }
                  uVar7 = *(undefined4 *)((long)register0x00000020 + -100);
                  uVar8 = *(undefined4 *)((long)register0x00000020 + -0x60);
                  uVar9 = *(undefined4 *)((long)register0x00000020 + -0x5c);
                  fVar19 = *(float *)((long)register0x00000020 + -0x68);
                  if (*(float *)((long)register0x00000020 + -0x68) <=
                      *(float *)((long)register0x00000020 + -0x78)) {
                    fVar19 = *(float *)((long)register0x00000020 + -0x78);
                  }
                  fVar21 = *(float *)((long)register0x00000020 + -0x58);
                  fVar22 = ABS(fVar21);
                  uVar17 = *(uint *)((long)register0x00000020 + -0x54) & 0x7fffffff;
                  uVar18 = *(uint *)((long)register0x00000020 + -0x50) & 0x7fffffff;
                  uVar25 = *(uint *)((long)register0x00000020 + -0x4c) & 0x7fffffff;
                  fVar23 = fVar22;
                  if (fVar22 <= ABS(fVar11)) {
                    fVar23 = ABS(fVar11);
                  }
                  unaff_R14 = (UnityEngine_Object_o *)&TypeInfo_Mathf;
                  fVar24 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                  in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
                  in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
                  fVar20 = fVar23 * 1e-06;
                  if (fVar23 * 1e-06 <= fVar24) {
                    fVar20 = fVar24;
                  }
                  if (ABS(fVar11 - fVar21) < fVar20) {
                    fVar11 = *(float *)((long)&(__this_01->_1).element_class + 4);
                    fVar20 = ABS(fVar11);
                    in_XMM1_Dc = 0;
                    in_XMM1_Dd = 0;
                    fVar23 = ABS(fVar19);
                    if (ABS(fVar19) <= fVar20) {
                      fVar23 = fVar20;
                    }
                    fVar20 = fVar23 * 1e-06;
                    if (fVar23 * 1e-06 <= fVar24) {
                      fVar20 = fVar24;
                    }
                    if (ABS(fVar11 - fVar19) < fVar20) {
                      unaff_R12 = 0;
                      goto label_03b88e80;
                    }
                  }
                  *(float *)&(__this_01->_1).element_class = fVar21;
                  *(float *)((long)&(__this_01->_1).element_class + 4) = fVar19;
                  pUVar15 = *(UnityEngine_Material_c **)
                             &((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields;
                  unaff_RBX = (UnityEngine_Material_c *)0x0;
                  unaff_R15 = (Il2CppType *)unaff_RBP;
                  if (pUVar15 != (UnityEngine_Material_c *)0x0) {
                    iVar2 = *(int *)&(pUVar15->_1).interopData;
                    *(float *)((long)register0x00000020 + -0x68) = fVar19;
                    *(undefined4 *)((long)register0x00000020 + -100) = uVar7;
                    *(undefined4 *)((long)register0x00000020 + -0x60) = uVar8;
                    *(undefined4 *)((long)register0x00000020 + -0x5c) = uVar9;
                    if (iVar2 == 2) {
                      unaff_R12 = 0;
                    }
                    else {
                      *(float *)((long)register0x00000020 + -0x78) = fVar22;
                      *(uint *)((long)register0x00000020 + -0x74) = uVar17;
                      *(uint *)((long)register0x00000020 + -0x70) = uVar18;
                      *(uint *)((long)register0x00000020 + -0x6c) = uVar25;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88c99;
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)pUVar15;
                      Gilzoide_FlexUi_FlexLayout__set_AlignSelf
                                ((Gilzoide_FlexUi_FlexLayout_o *)pUVar15,2,(MethodInfo *)0x0);
                      fVar22 = *(float *)((long)register0x00000020 + -0x78);
                      uVar17 = *(uint *)((long)register0x00000020 + -0x74);
                      uVar18 = *(uint *)((long)register0x00000020 + -0x70);
                      uVar25 = *(uint *)((long)register0x00000020 + -0x6c);
                      fVar21 = *(float *)((long)register0x00000020 + -0x58);
                      fVar19 = *(float *)((long)register0x00000020 + -0x68);
                      pUVar15 = *(UnityEngine_Material_c **)&unaff_RBP->fields;
                      unaff_R12 = 1;
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (pUVar15 == (UnityEngine_Material_c *)0x0) goto label_03b88e92;
                    }
                    pIVar4 = (pUVar15->_1).klass;
                    if ((ulong)pIVar4 >> 0x20 == 1) {
                      fVar11 = SUB84(pIVar4,0);
                      if (g_data_057a68c8 == '\0') {
                        __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&TypeInfo_Mathf;
                        *(float *)((long)register0x00000020 + -0x78) = fVar22;
                        *(uint *)((long)register0x00000020 + -0x74) = uVar17;
                        *(uint *)((long)register0x00000020 + -0x70) = uVar18;
                        *(uint *)((long)register0x00000020 + -0x6c) = uVar25;
                        *(float *)((long)register0x00000020 + -0x48) = fVar11;
                        *(undefined4 *)((long)register0x00000020 + -0x44) = 0;
                        *(undefined4 *)((long)register0x00000020 + -0x40) = 0;
                        *(undefined4 *)((long)register0x00000020 + -0x3c) = 0;
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88cf5;
                        il2cpp_runtime_helper_023445d0();
                        fVar11 = *(float *)((long)register0x00000020 + -0x48);
                        fVar22 = *(float *)((long)register0x00000020 + -0x78);
                        fVar21 = *(float *)((long)register0x00000020 + -0x58);
                        fVar19 = *(float *)((long)register0x00000020 + -0x68);
                        g_data_057a68c8 = '\x01';
                      }
                      fVar23 = ABS(fVar11);
                      if (ABS(fVar11) <= fVar22) {
                        fVar23 = fVar22;
                      }
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      fVar20 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                      fVar22 = fVar23 * 1e-06;
                      if (fVar23 * 1e-06 <= fVar20) {
                        fVar22 = fVar20;
                      }
                      if (fVar22 <= ABS(fVar21 - fVar11)) {
                        pUVar15 = *(UnityEngine_Material_c **)&unaff_RBP->fields;
                        goto label_03b88d52;
                      }
                    }
                    else {
label_03b88d52:
                      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88d6a;
                        il2cpp_runtime_helper_02337ed0();
                        fVar21 = *(float *)((long)register0x00000020 + -0x58);
                      }
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88d79;
                      GVar16 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar21,(MethodInfo *)0x0);
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (pUVar15 == (UnityEngine_Material_c *)0x0) goto label_03b88e92;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88d8f;
                      Gilzoide_FlexUi_FlexLayout__set_Width
                                ((Gilzoide_FlexUi_FlexLayout_o *)pUVar15,GVar16,(MethodInfo *)0x0);
                      unaff_R12 = 1;
                      fVar19 = *(float *)((long)register0x00000020 + -0x68);
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)pUVar15;
                    }
                    __this_00 = *(Gilzoide_FlexUi_FlexLayout_o **)&unaff_RBP->fields;
                    unaff_RBX = (UnityEngine_Material_c *)0x0;
                    if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                      GVar5 = (__this_00->fields)._height.fields;
                      if (((ulong)GVar5 & 0xffffffff00000000) == 0x100000000) {
                        fVar11 = GVar5.Value;
                        if (g_data_057a68c8 == '\0') {
                          *(float *)((long)register0x00000020 + -0x78) = fVar11;
                          *(undefined4 *)((long)register0x00000020 + -0x74) = 0;
                          *(undefined4 *)((long)register0x00000020 + -0x70) = 0;
                          *(undefined4 *)((long)register0x00000020 + -0x6c) = 0;
                          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88deb;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
                          fVar11 = *(float *)((long)register0x00000020 + -0x78);
                          fVar19 = *(float *)((long)register0x00000020 + -0x68);
                          g_data_057a68c8 = '\x01';
                        }
                        fVar21 = ABS(fVar11);
                        if (ABS(fVar11) <= ABS(fVar19)) {
                          fVar21 = ABS(fVar19);
                        }
                        in_XMM1_Dc = 0;
                        in_XMM1_Dd = 0;
                        fVar23 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                        fVar22 = fVar21 * 1e-06;
                        if (fVar21 * 1e-06 <= fVar23) {
                          fVar22 = fVar23;
                        }
                        if (ABS(fVar19 - fVar11) < fVar22) goto label_03b88e80;
                        __this_00 = *(Gilzoide_FlexUi_FlexLayout_o **)&unaff_RBP->fields;
                      }
                      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88e5a;
                        il2cpp_runtime_helper_02337ed0();
                        fVar19 = *(float *)((long)register0x00000020 + -0x68);
                      }
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88e66;
                      GVar16 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar19,(MethodInfo *)0x0);
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88e78;
                        Gilzoide_FlexUi_FlexLayout__set_Height(__this_00,GVar16,(MethodInfo *)0x0);
                        unaff_R12 = 1;
label_03b88e80:
                        return (bool_conflict)unaff_R12;
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
label_03b88e92:
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88e97;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x78);
    unaff_R13 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b88eb0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchSpriteCover__OnRectTransformDimensionsChange
          (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  void *pvVar1;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  Il2CppClass *pIVar4;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool_conflict bVar10;
  float fVar11;
  UnityEngine_Material_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Material_c *pUVar15;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar16;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  UnityEngine_Material_c *unaff_RBX;
  undefined1 *puVar17;
  UnityEngine_Color_o *unaff_RBP;
  UnityEngine_Material_c *__this_01;
  undefined8 unaff_R12;
  UnityEngine_Material_c *unaff_R13;
  UnityEngine_Object_o *unaff_R14;
  Il2CppType *unaff_R15;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  UnityEngine_Rect_o UVar27;
  
  puVar17 = (undefined1 *)register0x00000020;
  do {
    __this_01 = (UnityEngine_Material_c *)__this;
    *(UnityEngine_Color_o **)(puVar17 + -8) = unaff_RBP;
    *(Il2CppType **)(puVar17 + -0x10) = unaff_R15;
    *(UnityEngine_Object_o **)(puVar17 + -0x18) = unaff_R14;
    *(UnityEngine_Material_c **)(puVar17 + -0x20) = unaff_R13;
    *(undefined8 *)(puVar17 + -0x28) = unaff_R12;
    *(UnityEngine_Material_c **)(puVar17 + -0x30) = unaff_RBX;
    if (g_data_057a9e8e == '\0') {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88816;
      il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88822;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
      *(undefined8 *)(puVar17 + -0x80) = 0x3b8882e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar17 + -0x80) = 0x3b8883a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88846;
      il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
      g_data_057a9e8e = '\x01';
    }
    pUVar3 = (__this_01->_1).byval_arg.data;
    unaff_R14 = (UnityEngine_Object_o *)&TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88869;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R15 = &(__this_01->_1).byval_arg;
    *(undefined8 *)(puVar17 + -0x80) = 0x3b88879;
    bVar10 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b8888f;
      pUVar12 = (UnityEngine_Material_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image)
      ;
      (__this_01->_1).byval_arg.data = pUVar12;
      *(undefined8 *)(puVar17 + -0x80) = 0x3b8889e;
      il2cpp_runtime_helper_022b4080(unaff_R15);
    }
    pUVar3 = *(UnityEngine_Object_o **)&((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b888b3;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = (UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits;
    *(undefined8 *)(puVar17 + -0x80) = 0x3b888c3;
    bVar10 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b888d9;
      pIVar13 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_FlexLayout_GetComponent_FlexLayout)
      ;
      *(Il2CppObject **)&((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields = pIVar13;
      *(undefined8 *)(puVar17 + -0x80) = 0x3b888e8;
      il2cpp_runtime_helper_022b4080(unaff_RBP);
    }
    unaff_RBX = unaff_R15->data;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar17 + -0x80) = 0x3b888fc;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R12 = 0;
    *(undefined8 *)(puVar17 + -0x80) = 0x3b8890b;
    __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') goto label_03b88e80;
    if (unaff_R15->data != (UnityEngine_Material_o *)0x0) {
      pUVar15 = unaff_R15->data[9].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar17 + -0x80) = 0x3b88937;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = 0;
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88946;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') goto label_03b88e80;
      unaff_RBX = *(UnityEngine_Material_c **)&unaff_RBP->fields;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar17 + -0x80) = 0x3b88963;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = 0;
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88972;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') goto label_03b88e80;
      *(undefined8 *)(puVar17 + -0x80) = 0x3b88984;
      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)__this_01;
      pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)(puVar17 + -0x80) = 0x3b88997;
        unaff_RBX = (UnityEngine_Material_c *)UnityEngine_Transform__get_parent(pUVar14,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar17 + -0x80) = 0x3b889ab;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R12 = 0;
        *(undefined8 *)(puVar17 + -0x80) = 0x3b889ba;
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') goto label_03b88e80;
        *(undefined8 *)(puVar17 + -0x80) = 0x3b889cc;
        __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)__this_01;
        pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
        ;
        unaff_R12 = 0;
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)(puVar17 + -0x80) = 0x3b889e1;
          pUVar15 = (UnityEngine_Material_c *)UnityEngine_Transform__get_parent(pUVar14,(MethodInfo *)0x0);
          unaff_RBX = (UnityEngine_Material_c *)0x0;
          if ((pUVar15 != (UnityEngine_Material_c *)0x0) &&
             (unaff_RBX = (UnityEngine_Material_c *)0x0, (pUVar15->_1).image == TypeInfo_RectTransform)) {
            unaff_RBX = pUVar15;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar17 + -0x80) = 0x3b88a0a;
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_R12 = 0;
          *(undefined8 *)(puVar17 + -0x80) = 0x3b88a19;
          __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
          bVar10 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar10 != '\0') goto label_03b88e80;
          if (unaff_RBX != (UnityEngine_Material_c *)0x0) {
            unaff_R12 = 0;
            *(undefined8 *)(puVar17 + -0x80) = 0x3b88a37;
            UVar27 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            if (UVar27.fields.m_Width <= 0.0) goto label_03b88e80;
            unaff_R12 = 0;
            *(undefined8 *)(puVar17 + -0x80) = 0x3b88a50;
            UVar27 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            if (UVar27.fields.m_Height <= 0.0) goto label_03b88e80;
            *(undefined8 *)(puVar17 + -0x80) = 0x3b88a6a;
            __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
            UVar27 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            fVar11 = UVar27.fields.m_Width;
            fVar20 = UVar27.fields.m_Height;
            pvVar1 = (__this_01->_1).this_arg.data;
            fVar22 = fVar11 - SUB84(pvVar1,0);
            fVar23 = fVar20 - (float)((ulong)pvVar1 >> 0x20);
            auVar6._8_4_ = in_XMM1_Dc;
            auVar6._0_8_ = UVar27.fields._8_8_;
            auVar6._12_4_ = in_XMM1_Dd;
            *(undefined1 (*) [16])(puVar17 + -0x78) = auVar6;
            if (fVar23 * fVar23 + fVar22 * fVar22 < 9.9999994e-11) {
              if (unaff_R15->data == (UnityEngine_Material_o *)0x0) goto label_03b88e92;
              unaff_RBX = unaff_R15->data[9].klass;
              pUVar3 = *(UnityEngine_Object_o **)&(__this_01->_1).this_arg.bits;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)(puVar17 + -0x80) = 0x3b88ac0;
                il2cpp_runtime_helper_02337ed0();
                unaff_R14 = pUVar3;
              }
              unaff_R12 = 0;
              *(undefined8 *)(puVar17 + -0x80) = 0x3b88ad0;
              __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
              bVar10 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)unaff_RBX,pUVar3,(MethodInfo *)0x0);
              fVar11 = *(float *)(puVar17 + -0x78);
              fVar20 = *(float *)(puVar17 + -0x74);
              in_XMM1_Dc = *(uint *)(puVar17 + -0x70);
              in_XMM1_Dd = *(uint *)(puVar17 + -0x6c);
              if ((char)bVar10 != '\0') goto label_03b88e80;
            }
            unaff_R12 = 0;
            (__this_01->_1).this_arg.data = (void *)CONCAT44(fVar20,fVar11);
            pUVar12 = (__this_01->_1).byval_arg.data;
            if (pUVar12 != (UnityEngine_Material_o *)0x0) {
              __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&(__this_01->_1).this_arg.bits;
              *(UnityEngine_Material_c **)&(__this_01->_1).this_arg.bits = pUVar12[9].klass;
              *(undefined8 *)(puVar17 + -0x80) = 0x3b88b02;
              il2cpp_runtime_helper_022b4080();
              pUVar12 = (__this_01->_1).byval_arg.data;
              if ((pUVar12 != (UnityEngine_Material_o *)0x0) &&
                 (pUVar15 = pUVar12[9].klass, __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0
                 , pUVar15 != (UnityEngine_Material_c *)0x0)) {
                *(undefined8 *)(puVar17 + -0x80) = 0x3b88b26;
                UVar27 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)pUVar15,(MethodInfo *)0x0);
                __this = unaff_R15->data;
                if ((UnityEngine_UI_Image_o *)__this != (UnityEngine_UI_Image_o *)0x0) {
                  uVar18 = -(uint)(0.0 < UVar27.fields.m_Height);
                  uVar19 = -(uint)(0.0 < UVar27.fields.m_Width);
                  fVar24 = (float)(~uVar19 & 0x3f800000 |
                                  (~uVar18 & 0x3f800000 |
                                  (uint)(UVar27.fields.m_Width / UVar27.fields.m_Height) & uVar18) & uVar19);
                  fVar11 = *(float *)(puVar17 + -0x78);
                  fVar20 = *(float *)(puVar17 + -0x74);
                  uVar7 = *(undefined4 *)(puVar17 + -0x70);
                  uVar8 = *(undefined4 *)(puVar17 + -0x6c);
                  *(float *)(puVar17 + -0x68) = fVar20;
                  *(float *)(puVar17 + -100) = fVar20;
                  *(undefined4 *)(puVar17 + -0x60) = uVar7;
                  *(undefined4 *)(puVar17 + -0x5c) = uVar8;
                  fVar23 = fVar20 * fVar24;
                  fVar22 = fVar11;
                  if (fVar11 <= fVar23) {
                    fVar22 = fVar23;
                  }
                  *(float *)(puVar17 + -0x58) = fVar22;
                  *(float *)(puVar17 + -0x54) = fVar20;
                  *(undefined4 *)(puVar17 + -0x50) = uVar7;
                  *(undefined4 *)(puVar17 + -0x4c) = uVar8;
                  *(float *)(puVar17 + -0x78) = fVar11 / fVar24;
                  *(float *)(puVar17 + -0x74) = fVar20;
                  *(undefined4 *)(puVar17 + -0x70) = uVar7;
                  *(undefined4 *)(puVar17 + -0x6c) = uVar8;
                  *(undefined8 *)(puVar17 + -0x80) = 0x3b88ba1;
                  UnityEngine_UI_Image__set_preserveAspect
                            ((UnityEngine_UI_Image_o *)__this,1,(MethodInfo *)0x0);
                  fVar11 = *(float *)&(__this_01->_1).element_class;
                  in_XMM1_Dc = 0;
                  in_XMM1_Dd = 0;
                  if (g_data_057a68c8 == '\0') {
                    __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&TypeInfo_Mathf;
                    *(float *)(puVar17 + -0x48) = fVar11;
                    *(undefined4 *)(puVar17 + -0x44) = 0;
                    *(undefined4 *)(puVar17 + -0x40) = 0;
                    *(undefined4 *)(puVar17 + -0x3c) = 0;
                    *(undefined8 *)(puVar17 + -0x80) = 0x3b88bc1;
                    il2cpp_runtime_helper_023445d0();
                    fVar11 = *(float *)(puVar17 + -0x48);
                    in_XMM1_Dc = *(uint *)(puVar17 + -0x40);
                    in_XMM1_Dd = *(uint *)(puVar17 + -0x3c);
                    g_data_057a68c8 = '\x01';
                  }
                  uVar7 = *(undefined4 *)(puVar17 + -100);
                  uVar8 = *(undefined4 *)(puVar17 + -0x60);
                  uVar9 = *(undefined4 *)(puVar17 + -0x5c);
                  fVar20 = *(float *)(puVar17 + -0x68);
                  if (*(float *)(puVar17 + -0x68) <= *(float *)(puVar17 + -0x78)) {
                    fVar20 = *(float *)(puVar17 + -0x78);
                  }
                  fVar22 = *(float *)(puVar17 + -0x58);
                  fVar23 = ABS(fVar22);
                  uVar18 = *(uint *)(puVar17 + -0x54) & 0x7fffffff;
                  uVar19 = *(uint *)(puVar17 + -0x50) & 0x7fffffff;
                  uVar26 = *(uint *)(puVar17 + -0x4c) & 0x7fffffff;
                  fVar24 = fVar23;
                  if (fVar23 <= ABS(fVar11)) {
                    fVar24 = ABS(fVar11);
                  }
                  unaff_R14 = (UnityEngine_Object_o *)&TypeInfo_Mathf;
                  fVar25 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                  in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
                  in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
                  fVar21 = fVar24 * 1e-06;
                  if (fVar24 * 1e-06 <= fVar25) {
                    fVar21 = fVar25;
                  }
                  if (ABS(fVar11 - fVar22) < fVar21) {
                    fVar11 = *(float *)((long)&(__this_01->_1).element_class + 4);
                    fVar21 = ABS(fVar11);
                    in_XMM1_Dc = 0;
                    in_XMM1_Dd = 0;
                    fVar24 = ABS(fVar20);
                    if (ABS(fVar20) <= fVar21) {
                      fVar24 = fVar21;
                    }
                    fVar21 = fVar24 * 1e-06;
                    if (fVar24 * 1e-06 <= fVar25) {
                      fVar21 = fVar25;
                    }
                    if (ABS(fVar11 - fVar20) < fVar21) {
                      unaff_R12 = 0;
                      goto label_03b88e80;
                    }
                  }
                  *(float *)&(__this_01->_1).element_class = fVar22;
                  *(float *)((long)&(__this_01->_1).element_class + 4) = fVar20;
                  pUVar15 = *(UnityEngine_Material_c **)
                             &((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields;
                  unaff_RBX = (UnityEngine_Material_c *)0x0;
                  unaff_R15 = (Il2CppType *)unaff_RBP;
                  if (pUVar15 != (UnityEngine_Material_c *)0x0) {
                    iVar2 = *(int *)&(pUVar15->_1).interopData;
                    *(float *)(puVar17 + -0x68) = fVar20;
                    *(undefined4 *)(puVar17 + -100) = uVar7;
                    *(undefined4 *)(puVar17 + -0x60) = uVar8;
                    *(undefined4 *)(puVar17 + -0x5c) = uVar9;
                    if (iVar2 == 2) {
                      unaff_R12 = 0;
                    }
                    else {
                      *(float *)(puVar17 + -0x78) = fVar23;
                      *(uint *)(puVar17 + -0x74) = uVar18;
                      *(uint *)(puVar17 + -0x70) = uVar19;
                      *(uint *)(puVar17 + -0x6c) = uVar26;
                      *(undefined8 *)(puVar17 + -0x80) = 0x3b88c99;
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)pUVar15;
                      Gilzoide_FlexUi_FlexLayout__set_AlignSelf
                                ((Gilzoide_FlexUi_FlexLayout_o *)pUVar15,2,(MethodInfo *)0x0);
                      fVar23 = *(float *)(puVar17 + -0x78);
                      uVar18 = *(uint *)(puVar17 + -0x74);
                      uVar19 = *(uint *)(puVar17 + -0x70);
                      uVar26 = *(uint *)(puVar17 + -0x6c);
                      fVar22 = *(float *)(puVar17 + -0x58);
                      fVar20 = *(float *)(puVar17 + -0x68);
                      pUVar15 = *(UnityEngine_Material_c **)&unaff_RBP->fields;
                      unaff_R12 = 1;
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (pUVar15 == (UnityEngine_Material_c *)0x0) goto label_03b88e92;
                    }
                    pIVar4 = (pUVar15->_1).klass;
                    if ((ulong)pIVar4 >> 0x20 == 1) {
                      fVar11 = SUB84(pIVar4,0);
                      if (g_data_057a68c8 == '\0') {
                        __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&TypeInfo_Mathf;
                        *(float *)(puVar17 + -0x78) = fVar23;
                        *(uint *)(puVar17 + -0x74) = uVar18;
                        *(uint *)(puVar17 + -0x70) = uVar19;
                        *(uint *)(puVar17 + -0x6c) = uVar26;
                        *(float *)(puVar17 + -0x48) = fVar11;
                        *(undefined4 *)(puVar17 + -0x44) = 0;
                        *(undefined4 *)(puVar17 + -0x40) = 0;
                        *(undefined4 *)(puVar17 + -0x3c) = 0;
                        *(undefined8 *)(puVar17 + -0x80) = 0x3b88cf5;
                        il2cpp_runtime_helper_023445d0();
                        fVar11 = *(float *)(puVar17 + -0x48);
                        fVar23 = *(float *)(puVar17 + -0x78);
                        fVar22 = *(float *)(puVar17 + -0x58);
                        fVar20 = *(float *)(puVar17 + -0x68);
                        g_data_057a68c8 = '\x01';
                      }
                      fVar24 = ABS(fVar11);
                      if (ABS(fVar11) <= fVar23) {
                        fVar24 = fVar23;
                      }
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      fVar21 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                      fVar23 = fVar24 * 1e-06;
                      if (fVar24 * 1e-06 <= fVar21) {
                        fVar23 = fVar21;
                      }
                      if (fVar23 <= ABS(fVar22 - fVar11)) {
                        pUVar15 = *(UnityEngine_Material_c **)&unaff_RBP->fields;
                        goto label_03b88d52;
                      }
                    }
                    else {
label_03b88d52:
                      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                        *(undefined8 *)(puVar17 + -0x80) = 0x3b88d6a;
                        il2cpp_runtime_helper_02337ed0();
                        fVar22 = *(float *)(puVar17 + -0x58);
                      }
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0;
                      *(undefined8 *)(puVar17 + -0x80) = 0x3b88d79;
                      GVar16 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar22,(MethodInfo *)0x0);
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (pUVar15 == (UnityEngine_Material_c *)0x0) goto label_03b88e92;
                      *(undefined8 *)(puVar17 + -0x80) = 0x3b88d8f;
                      Gilzoide_FlexUi_FlexLayout__set_Width
                                ((Gilzoide_FlexUi_FlexLayout_o *)pUVar15,GVar16,(MethodInfo *)0x0);
                      unaff_R12 = 1;
                      fVar20 = *(float *)(puVar17 + -0x68);
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)pUVar15;
                    }
                    __this_00 = *(Gilzoide_FlexUi_FlexLayout_o **)&unaff_RBP->fields;
                    unaff_RBX = (UnityEngine_Material_c *)0x0;
                    if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                      GVar5 = (__this_00->fields)._height.fields;
                      if (((ulong)GVar5 & 0xffffffff00000000) == 0x100000000) {
                        fVar11 = GVar5.Value;
                        if (g_data_057a68c8 == '\0') {
                          *(float *)(puVar17 + -0x78) = fVar11;
                          *(undefined4 *)(puVar17 + -0x74) = 0;
                          *(undefined4 *)(puVar17 + -0x70) = 0;
                          *(undefined4 *)(puVar17 + -0x6c) = 0;
                          *(undefined8 *)(puVar17 + -0x80) = 0x3b88deb;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
                          fVar11 = *(float *)(puVar17 + -0x78);
                          fVar20 = *(float *)(puVar17 + -0x68);
                          g_data_057a68c8 = '\x01';
                        }
                        fVar22 = ABS(fVar11);
                        if (ABS(fVar11) <= ABS(fVar20)) {
                          fVar22 = ABS(fVar20);
                        }
                        in_XMM1_Dc = 0;
                        in_XMM1_Dd = 0;
                        fVar24 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                        fVar23 = fVar22 * 1e-06;
                        if (fVar22 * 1e-06 <= fVar24) {
                          fVar23 = fVar24;
                        }
                        if (ABS(fVar20 - fVar11) < fVar23) goto label_03b88e80;
                        __this_00 = *(Gilzoide_FlexUi_FlexLayout_o **)&unaff_RBP->fields;
                      }
                      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                        *(undefined8 *)(puVar17 + -0x80) = 0x3b88e5a;
                        il2cpp_runtime_helper_02337ed0();
                        fVar20 = *(float *)(puVar17 + -0x68);
                      }
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0;
                      *(undefined8 *)(puVar17 + -0x80) = 0x3b88e66;
                      GVar16 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar20,(MethodInfo *)0x0);
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                        *(undefined8 *)(puVar17 + -0x80) = 0x3b88e78;
                        Gilzoide_FlexUi_FlexLayout__set_Height(__this_00,GVar16,(MethodInfo *)0x0);
                        unaff_R12 = 1;
label_03b88e80:
                        return (bool_conflict)unaff_R12;
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
label_03b88e92:
    *(undefined8 *)(puVar17 + -0x80) = 0x3b88e97;
    il2cpp_runtime_helper_022b2c90();
    puVar17 = puVar17 + -0x78;
    unaff_R13 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$Refresh
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b887f0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchSpriteCover__Refresh
          (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  void *pvVar1;
  int iVar2;
  UnityEngine_Object_o *pUVar3;
  Il2CppClass *pIVar4;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool_conflict bVar10;
  float fVar11;
  UnityEngine_Material_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Material_c *pUVar15;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar16;
  UnityEngine_Material_c *unaff_RBX;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  UnityEngine_Color_o *unaff_RBP;
  UnityEngine_Material_c *__this_01;
  undefined8 unaff_R12;
  UnityEngine_Material_c *unaff_R13;
  UnityEngine_Object_o *unaff_R14;
  Il2CppType *unaff_R15;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  uint in_XMM1_Dc;
  uint in_XMM1_Dd;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  UnityEngine_Rect_o UVar26;
  
  do {
    __this_01 = (UnityEngine_Material_c *)__this;
    *(UnityEngine_Color_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(Il2CppType **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(UnityEngine_Material_c **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(UnityEngine_Material_c **)((long)register0x00000020 + -0x30) = unaff_RBX;
    if (g_data_057a9e8e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88816;
      il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88822;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b8882e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b8883a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88846;
      il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
      g_data_057a9e8e = '\x01';
    }
    pUVar3 = (__this_01->_1).byval_arg.data;
    unaff_R14 = (UnityEngine_Object_o *)&TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88869;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R15 = &(__this_01->_1).byval_arg;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88879;
    bVar10 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b8888f;
      pUVar12 = (UnityEngine_Material_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image)
      ;
      (__this_01->_1).byval_arg.data = pUVar12;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b8889e;
      il2cpp_runtime_helper_022b4080(unaff_R15);
    }
    pUVar3 = *(UnityEngine_Object_o **)&((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b888b3;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = (UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b888c3;
    bVar10 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b888d9;
      pIVar13 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_FlexLayout_GetComponent_FlexLayout)
      ;
      *(Il2CppObject **)&((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields = pIVar13;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b888e8;
      il2cpp_runtime_helper_022b4080(unaff_RBP);
    }
    unaff_RBX = unaff_R15->data;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b888fc;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R12 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b8890b;
    __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') goto label_03b88e80;
    if (unaff_R15->data != (UnityEngine_Material_o *)0x0) {
      pUVar15 = unaff_R15->data[9].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88937;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = 0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88946;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') goto label_03b88e80;
      unaff_RBX = *(UnityEngine_Material_c **)&unaff_RBP->fields;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88963;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R12 = 0;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88972;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') goto label_03b88e80;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88984;
      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)__this_01;
      pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88997;
        unaff_RBX = (UnityEngine_Material_c *)UnityEngine_Transform__get_parent(pUVar14,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b889ab;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R12 = 0;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b889ba;
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') goto label_03b88e80;
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b889cc;
        __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)__this_01;
        pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
        ;
        unaff_R12 = 0;
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b889e1;
          pUVar15 = (UnityEngine_Material_c *)UnityEngine_Transform__get_parent(pUVar14,(MethodInfo *)0x0);
          unaff_RBX = (UnityEngine_Material_c *)0x0;
          if ((pUVar15 != (UnityEngine_Material_c *)0x0) &&
             (unaff_RBX = (UnityEngine_Material_c *)0x0, (pUVar15->_1).image == TypeInfo_RectTransform)) {
            unaff_RBX = pUVar15;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88a0a;
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_R12 = 0;
          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88a19;
          __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
          bVar10 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar10 != '\0') goto label_03b88e80;
          if (unaff_RBX != (UnityEngine_Material_c *)0x0) {
            unaff_R12 = 0;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88a37;
            UVar26 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            if (UVar26.fields.m_Width <= 0.0) goto label_03b88e80;
            unaff_R12 = 0;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88a50;
            UVar26 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            if (UVar26.fields.m_Height <= 0.0) goto label_03b88e80;
            *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88a6a;
            __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
            UVar26 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
            fVar11 = UVar26.fields.m_Width;
            fVar19 = UVar26.fields.m_Height;
            pvVar1 = (__this_01->_1).this_arg.data;
            fVar21 = fVar11 - SUB84(pvVar1,0);
            fVar22 = fVar19 - (float)((ulong)pvVar1 >> 0x20);
            auVar6._8_4_ = in_XMM1_Dc;
            auVar6._0_8_ = UVar26.fields._8_8_;
            auVar6._12_4_ = in_XMM1_Dd;
            *(undefined1 (*) [16])((long)register0x00000020 + -0x78) = auVar6;
            if (fVar22 * fVar22 + fVar21 * fVar21 < 9.9999994e-11) {
              if (unaff_R15->data == (UnityEngine_Material_o *)0x0) goto label_03b88e92;
              unaff_RBX = unaff_R15->data[9].klass;
              pUVar3 = *(UnityEngine_Object_o **)&(__this_01->_1).this_arg.bits;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88ac0;
                il2cpp_runtime_helper_02337ed0();
                unaff_R14 = pUVar3;
              }
              unaff_R12 = 0;
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88ad0;
              __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)unaff_RBX;
              bVar10 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)unaff_RBX,pUVar3,(MethodInfo *)0x0);
              fVar11 = *(float *)((long)register0x00000020 + -0x78);
              fVar19 = *(float *)((long)register0x00000020 + -0x74);
              in_XMM1_Dc = *(uint *)((long)register0x00000020 + -0x70);
              in_XMM1_Dd = *(uint *)((long)register0x00000020 + -0x6c);
              if ((char)bVar10 != '\0') goto label_03b88e80;
            }
            unaff_R12 = 0;
            (__this_01->_1).this_arg.data = (void *)CONCAT44(fVar19,fVar11);
            pUVar12 = (__this_01->_1).byval_arg.data;
            if (pUVar12 != (UnityEngine_Material_o *)0x0) {
              __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&(__this_01->_1).this_arg.bits;
              *(UnityEngine_Material_c **)&(__this_01->_1).this_arg.bits = pUVar12[9].klass;
              *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88b02;
              il2cpp_runtime_helper_022b4080();
              pUVar12 = (__this_01->_1).byval_arg.data;
              if ((pUVar12 != (UnityEngine_Material_o *)0x0) &&
                 (pUVar15 = pUVar12[9].klass, __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0
                 , pUVar15 != (UnityEngine_Material_c *)0x0)) {
                *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88b26;
                UVar26 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)pUVar15,(MethodInfo *)0x0);
                __this = unaff_R15->data;
                if ((UnityEngine_UI_Image_o *)__this != (UnityEngine_UI_Image_o *)0x0) {
                  uVar17 = -(uint)(0.0 < UVar26.fields.m_Height);
                  uVar18 = -(uint)(0.0 < UVar26.fields.m_Width);
                  fVar23 = (float)(~uVar18 & 0x3f800000 |
                                  (~uVar17 & 0x3f800000 |
                                  (uint)(UVar26.fields.m_Width / UVar26.fields.m_Height) & uVar17) & uVar18);
                  fVar11 = *(float *)((long)register0x00000020 + -0x78);
                  fVar19 = *(float *)((long)register0x00000020 + -0x74);
                  uVar7 = *(undefined4 *)((long)register0x00000020 + -0x70);
                  uVar8 = *(undefined4 *)((long)register0x00000020 + -0x6c);
                  *(float *)((long)register0x00000020 + -0x68) = fVar19;
                  *(float *)((long)register0x00000020 + -100) = fVar19;
                  *(undefined4 *)((long)register0x00000020 + -0x60) = uVar7;
                  *(undefined4 *)((long)register0x00000020 + -0x5c) = uVar8;
                  fVar22 = fVar19 * fVar23;
                  fVar21 = fVar11;
                  if (fVar11 <= fVar22) {
                    fVar21 = fVar22;
                  }
                  *(float *)((long)register0x00000020 + -0x58) = fVar21;
                  *(float *)((long)register0x00000020 + -0x54) = fVar19;
                  *(undefined4 *)((long)register0x00000020 + -0x50) = uVar7;
                  *(undefined4 *)((long)register0x00000020 + -0x4c) = uVar8;
                  *(float *)((long)register0x00000020 + -0x78) = fVar11 / fVar23;
                  *(float *)((long)register0x00000020 + -0x74) = fVar19;
                  *(undefined4 *)((long)register0x00000020 + -0x70) = uVar7;
                  *(undefined4 *)((long)register0x00000020 + -0x6c) = uVar8;
                  *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88ba1;
                  UnityEngine_UI_Image__set_preserveAspect
                            ((UnityEngine_UI_Image_o *)__this,1,(MethodInfo *)0x0);
                  fVar11 = *(float *)&(__this_01->_1).element_class;
                  in_XMM1_Dc = 0;
                  in_XMM1_Dd = 0;
                  if (g_data_057a68c8 == '\0') {
                    __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&TypeInfo_Mathf;
                    *(float *)((long)register0x00000020 + -0x48) = fVar11;
                    *(undefined4 *)((long)register0x00000020 + -0x44) = 0;
                    *(undefined4 *)((long)register0x00000020 + -0x40) = 0;
                    *(undefined4 *)((long)register0x00000020 + -0x3c) = 0;
                    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88bc1;
                    il2cpp_runtime_helper_023445d0();
                    fVar11 = *(float *)((long)register0x00000020 + -0x48);
                    in_XMM1_Dc = *(uint *)((long)register0x00000020 + -0x40);
                    in_XMM1_Dd = *(uint *)((long)register0x00000020 + -0x3c);
                    g_data_057a68c8 = '\x01';
                  }
                  uVar7 = *(undefined4 *)((long)register0x00000020 + -100);
                  uVar8 = *(undefined4 *)((long)register0x00000020 + -0x60);
                  uVar9 = *(undefined4 *)((long)register0x00000020 + -0x5c);
                  fVar19 = *(float *)((long)register0x00000020 + -0x68);
                  if (*(float *)((long)register0x00000020 + -0x68) <=
                      *(float *)((long)register0x00000020 + -0x78)) {
                    fVar19 = *(float *)((long)register0x00000020 + -0x78);
                  }
                  fVar21 = *(float *)((long)register0x00000020 + -0x58);
                  fVar22 = ABS(fVar21);
                  uVar17 = *(uint *)((long)register0x00000020 + -0x54) & 0x7fffffff;
                  uVar18 = *(uint *)((long)register0x00000020 + -0x50) & 0x7fffffff;
                  uVar25 = *(uint *)((long)register0x00000020 + -0x4c) & 0x7fffffff;
                  fVar23 = fVar22;
                  if (fVar22 <= ABS(fVar11)) {
                    fVar23 = ABS(fVar11);
                  }
                  unaff_R14 = (UnityEngine_Object_o *)&TypeInfo_Mathf;
                  fVar24 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                  in_XMM1_Dc = in_XMM1_Dc & 0x7fffffff;
                  in_XMM1_Dd = in_XMM1_Dd & 0x7fffffff;
                  fVar20 = fVar23 * 1e-06;
                  if (fVar23 * 1e-06 <= fVar24) {
                    fVar20 = fVar24;
                  }
                  if (ABS(fVar11 - fVar21) < fVar20) {
                    fVar11 = *(float *)((long)&(__this_01->_1).element_class + 4);
                    fVar20 = ABS(fVar11);
                    in_XMM1_Dc = 0;
                    in_XMM1_Dd = 0;
                    fVar23 = ABS(fVar19);
                    if (ABS(fVar19) <= fVar20) {
                      fVar23 = fVar20;
                    }
                    fVar20 = fVar23 * 1e-06;
                    if (fVar23 * 1e-06 <= fVar24) {
                      fVar20 = fVar24;
                    }
                    if (ABS(fVar11 - fVar19) < fVar20) {
                      unaff_R12 = 0;
                      goto label_03b88e80;
                    }
                  }
                  *(float *)&(__this_01->_1).element_class = fVar21;
                  *(float *)((long)&(__this_01->_1).element_class + 4) = fVar19;
                  pUVar15 = *(UnityEngine_Material_c **)
                             &((UnityEngine_Color_o *)&(__this_01->_1).byval_arg.bits)->fields;
                  unaff_RBX = (UnityEngine_Material_c *)0x0;
                  unaff_R15 = (Il2CppType *)unaff_RBP;
                  if (pUVar15 != (UnityEngine_Material_c *)0x0) {
                    iVar2 = *(int *)&(pUVar15->_1).interopData;
                    *(float *)((long)register0x00000020 + -0x68) = fVar19;
                    *(undefined4 *)((long)register0x00000020 + -100) = uVar7;
                    *(undefined4 *)((long)register0x00000020 + -0x60) = uVar8;
                    *(undefined4 *)((long)register0x00000020 + -0x5c) = uVar9;
                    if (iVar2 == 2) {
                      unaff_R12 = 0;
                    }
                    else {
                      *(float *)((long)register0x00000020 + -0x78) = fVar22;
                      *(uint *)((long)register0x00000020 + -0x74) = uVar17;
                      *(uint *)((long)register0x00000020 + -0x70) = uVar18;
                      *(uint *)((long)register0x00000020 + -0x6c) = uVar25;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88c99;
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)pUVar15;
                      Gilzoide_FlexUi_FlexLayout__set_AlignSelf
                                ((Gilzoide_FlexUi_FlexLayout_o *)pUVar15,2,(MethodInfo *)0x0);
                      fVar22 = *(float *)((long)register0x00000020 + -0x78);
                      uVar17 = *(uint *)((long)register0x00000020 + -0x74);
                      uVar18 = *(uint *)((long)register0x00000020 + -0x70);
                      uVar25 = *(uint *)((long)register0x00000020 + -0x6c);
                      fVar21 = *(float *)((long)register0x00000020 + -0x58);
                      fVar19 = *(float *)((long)register0x00000020 + -0x68);
                      pUVar15 = *(UnityEngine_Material_c **)&unaff_RBP->fields;
                      unaff_R12 = 1;
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (pUVar15 == (UnityEngine_Material_c *)0x0) goto label_03b88e92;
                    }
                    pIVar4 = (pUVar15->_1).klass;
                    if ((ulong)pIVar4 >> 0x20 == 1) {
                      fVar11 = SUB84(pIVar4,0);
                      if (g_data_057a68c8 == '\0') {
                        __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)&TypeInfo_Mathf;
                        *(float *)((long)register0x00000020 + -0x78) = fVar22;
                        *(uint *)((long)register0x00000020 + -0x74) = uVar17;
                        *(uint *)((long)register0x00000020 + -0x70) = uVar18;
                        *(uint *)((long)register0x00000020 + -0x6c) = uVar25;
                        *(float *)((long)register0x00000020 + -0x48) = fVar11;
                        *(undefined4 *)((long)register0x00000020 + -0x44) = 0;
                        *(undefined4 *)((long)register0x00000020 + -0x40) = 0;
                        *(undefined4 *)((long)register0x00000020 + -0x3c) = 0;
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88cf5;
                        il2cpp_runtime_helper_023445d0();
                        fVar11 = *(float *)((long)register0x00000020 + -0x48);
                        fVar22 = *(float *)((long)register0x00000020 + -0x78);
                        fVar21 = *(float *)((long)register0x00000020 + -0x58);
                        fVar19 = *(float *)((long)register0x00000020 + -0x68);
                        g_data_057a68c8 = '\x01';
                      }
                      fVar23 = ABS(fVar11);
                      if (ABS(fVar11) <= fVar22) {
                        fVar23 = fVar22;
                      }
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      fVar20 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                      fVar22 = fVar23 * 1e-06;
                      if (fVar23 * 1e-06 <= fVar20) {
                        fVar22 = fVar20;
                      }
                      if (fVar22 <= ABS(fVar21 - fVar11)) {
                        pUVar15 = *(UnityEngine_Material_c **)&unaff_RBP->fields;
                        goto label_03b88d52;
                      }
                    }
                    else {
label_03b88d52:
                      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88d6a;
                        il2cpp_runtime_helper_02337ed0();
                        fVar21 = *(float *)((long)register0x00000020 + -0x58);
                      }
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88d79;
                      GVar16 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar21,(MethodInfo *)0x0);
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (pUVar15 == (UnityEngine_Material_c *)0x0) goto label_03b88e92;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88d8f;
                      Gilzoide_FlexUi_FlexLayout__set_Width
                                ((Gilzoide_FlexUi_FlexLayout_o *)pUVar15,GVar16,(MethodInfo *)0x0);
                      unaff_R12 = 1;
                      fVar19 = *(float *)((long)register0x00000020 + -0x68);
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)pUVar15;
                    }
                    __this_00 = *(Gilzoide_FlexUi_FlexLayout_o **)&unaff_RBP->fields;
                    unaff_RBX = (UnityEngine_Material_c *)0x0;
                    if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                      GVar5 = (__this_00->fields)._height.fields;
                      if (((ulong)GVar5 & 0xffffffff00000000) == 0x100000000) {
                        fVar11 = GVar5.Value;
                        if (g_data_057a68c8 == '\0') {
                          *(float *)((long)register0x00000020 + -0x78) = fVar11;
                          *(undefined4 *)((long)register0x00000020 + -0x74) = 0;
                          *(undefined4 *)((long)register0x00000020 + -0x70) = 0;
                          *(undefined4 *)((long)register0x00000020 + -0x6c) = 0;
                          *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88deb;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
                          fVar11 = *(float *)((long)register0x00000020 + -0x78);
                          fVar19 = *(float *)((long)register0x00000020 + -0x68);
                          g_data_057a68c8 = '\x01';
                        }
                        fVar21 = ABS(fVar11);
                        if (ABS(fVar11) <= ABS(fVar19)) {
                          fVar21 = ABS(fVar19);
                        }
                        in_XMM1_Dc = 0;
                        in_XMM1_Dd = 0;
                        fVar23 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
                        fVar22 = fVar21 * 1e-06;
                        if (fVar21 * 1e-06 <= fVar23) {
                          fVar22 = fVar23;
                        }
                        if (ABS(fVar19 - fVar11) < fVar22) goto label_03b88e80;
                        __this_00 = *(Gilzoide_FlexUi_FlexLayout_o **)&unaff_RBP->fields;
                      }
                      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88e5a;
                        il2cpp_runtime_helper_02337ed0();
                        fVar19 = *(float *)((long)register0x00000020 + -0x68);
                      }
                      __this = (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *)0x0;
                      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88e66;
                      GVar16 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar19,(MethodInfo *)0x0);
                      unaff_RBX = (UnityEngine_Material_c *)0x0;
                      if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88e78;
                        Gilzoide_FlexUi_FlexLayout__set_Height(__this_00,GVar16,(MethodInfo *)0x0);
                        unaff_R12 = 1;
label_03b88e80:
                        return (bool_conflict)unaff_R12;
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
label_03b88e92:
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x3b88e97;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x78);
    unaff_R13 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$CoverSize
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Building_GisketchSpriteCover__CoverSize (UnityEngine_Vector2_o parentSize, UnityEngine_Vector2_o spriteSize, const MethodInfo* method);
// 0x3b88ec0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Building_GisketchSpriteCover__CoverSize
          (UnityEngine_Vector2_o parentSize,UnityEngine_Vector2_o spriteSize,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = parentSize.fields.x;
  fVar3 = parentSize.fields.y;
  fVar5 = 1.0;
  if ((0.0 < spriteSize.fields.x) && (0.0 < spriteSize.fields.y)) {
    fVar5 = spriteSize.fields.x / spriteSize.fields.y;
  }
  fVar4 = fVar2;
  if (fVar2 <= fVar3 * fVar5) {
    fVar4 = fVar3 * fVar5;
  }
  if (fVar3 <= fVar2 / fVar5) {
    fVar3 = fVar2 / fVar5;
  }
  UVar1.fields.y = fVar3;
  UVar1.fields.x = fVar4;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$SamePoint
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchSpriteCover__SamePoint (Gilzoide_FlexUi_Yoga_YGValue_o value, float expected, const MethodInfo* method);
// 0x3b88f10

bool_conflict
Gisketch_Aottg2UI_Building_GisketchSpriteCover__SamePoint
          (Gilzoide_FlexUi_Yoga_YGValue_o value,float expected,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((ulong)value.fields >> 0x20 == 1) {
    if (g_data_057a68c8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
      g_data_057a68c8 = '\x01';
    }
    fVar2 = ABS(value.fields.Value);
    if (fVar2 <= ABS(expected)) {
      fVar2 = ABS(expected);
    }
    fVar1 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
    fVar3 = fVar2 * 1e-06;
    if (fVar2 * 1e-06 <= fVar1) {
      fVar3 = fVar1;
    }
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(float **)(TypeInfo_Mathf + 0xb8) >> 8),
                    ABS(expected - value.fields.Value) < fVar3);
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchSpriteCover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchSpriteCover___ctor (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o* __this, const MethodInfo* method);
// 0x3b88fb0

void Gisketch_Aottg2UI_Building_GisketchSpriteCover___ctor
               (Gisketch_Aottg2UI_Building_GisketchSpriteCover_o *__this,MethodInfo *method)

{
  (__this->fields)._lastWidth = -1.0;
  (__this->fields)._lastHeight = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


