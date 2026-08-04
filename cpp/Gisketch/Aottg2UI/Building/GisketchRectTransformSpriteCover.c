// Type: Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchRectTransformSpriteCover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$Awake
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Awake (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b88fd0

void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Awake
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_c *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  
  if (g_data_057a9e8f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9e8f = '\x01';
  }
  pUVar2 = (UnityEngine_UI_Image_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
  (__this->fields)._image = pUVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._image);
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar1 = TypeInfo_RectTransform;
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3->klass == TypeInfo_RectTransform) {
      pUVar4 = pUVar3;
    }
    (__this->fields)._rect = pUVar4;
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3->klass == pUVar1) {
      pUVar4 = pUVar3;
    }
    il2cpp_runtime_helper_022b4080(&(__this->fields)._rect,pUVar4);
    return;
  }
  (__this->fields)._rect = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rect,0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnEnable (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b89080

bool_conflict
Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnEnable
          (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  void *pvVar1;
  UnityEngine_Vector2_Fields value;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_UI_Image_o *__this_00;
  undefined1 auVar3 [16];
  uint *puVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Object_c *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Object_c *unaff_RBX;
  undefined1 *puVar10;
  UnityEngine_Object_c *unaff_RBP;
  UnityEngine_Object_c *__this_01;
  UnityEngine_Object_c *unaff_R12;
  UnityEngine_Object_c *unaff_R13;
  undefined8 *unaff_R14;
  Il2CppType *unaff_R15;
  uint uVar11;
  uint uVar12;
  UnityEngine_Vector2_o value_00;
  float fVar13;
  float fVar14;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar15;
  float fVar16;
  UnityEngine_Rect_o UVar17;
  
  puVar10 = (undefined1 *)register0x00000020;
  do {
    __this_01 = (UnityEngine_Object_c *)__this;
    *(UnityEngine_Object_c **)(puVar10 + -8) = unaff_RBP;
    *(Il2CppType **)(puVar10 + -0x10) = unaff_R15;
    *(undefined8 **)(puVar10 + -0x18) = unaff_R14;
    *(UnityEngine_Object_c **)(puVar10 + -0x20) = unaff_R13;
    *(UnityEngine_Object_c **)(puVar10 + -0x28) = unaff_R12;
    *(UnityEngine_Object_c **)(puVar10 + -0x30) = unaff_RBX;
    if (g_data_057a9e90 == '\0') {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b890b6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
      *(undefined8 *)(puVar10 + -0x60) = 0x3b890c2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar10 + -0x60) = 0x3b890ce;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      g_data_057a9e90 = '\x01';
    }
    pUVar2 = (__this_01->_1).byval_arg.data;
    unaff_R14 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b890f2;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R15 = &(__this_01->_1).byval_arg;
    *(undefined8 *)(puVar10 + -0x60) = 0x3b89103;
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b89119;
      pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image);
      (__this_01->_1).byval_arg.data = pIVar6;
      *(undefined8 *)(puVar10 + -0x60) = 0x3b89129;
      il2cpp_runtime_helper_022b4080(unaff_R15);
    }
    pUVar2 = *(UnityEngine_Object_o **)&(__this_01->_1).byval_arg.bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b8913f;
      il2cpp_runtime_helper_02337ed0();
    }
    puVar4 = &(__this_01->_1).byval_arg.bits;
    *(undefined8 *)(puVar10 + -0x60) = 0x3b89150;
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b8915e;
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)puVar4 = 0;
      }
      else {
        pUVar9 = (UnityEngine_Transform_o *)0x0;
        if (pUVar7->klass == TypeInfo_RectTransform) {
          pUVar9 = pUVar7;
        }
        *(UnityEngine_Transform_o **)puVar4 = pUVar9;
      }
      *(undefined8 *)(puVar10 + -0x60) = 0x3b8919a;
      il2cpp_runtime_helper_022b4080(puVar4);
    }
    *(uint **)(puVar10 + -0x50) = puVar4;
    unaff_RBP = unaff_R15->data;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b891b3;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBX = (UnityEngine_Object_c *)0x0;
    *(undefined8 *)(puVar10 + -0x60) = 0x3b891c1;
    __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_RBP;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_03b89509;
    if (unaff_R15->data != (void *)0x0) {
      pUVar2 = *(UnityEngine_Object_o **)((long)unaff_R15->data + 0xd8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar10 + -0x60) = 0x3b891ed;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (UnityEngine_Object_c *)0x0;
      *(undefined8 *)(puVar10 + -0x60) = 0x3b891fb;
      bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_03b89509;
      unaff_RBP = (UnityEngine_Object_c *)**(undefined8 **)(puVar10 + -0x50);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar10 + -0x60) = 0x3b8921c;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (UnityEngine_Object_c *)0x0;
      *(undefined8 *)(puVar10 + -0x60) = 0x3b8922a;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_03b89509;
      *(undefined8 *)(puVar10 + -0x60) = 0x3b8923c;
      __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)__this_01;
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)(puVar10 + -0x60) = 0x3b8924f;
        unaff_R13 = (UnityEngine_Object_c *)UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar10 + -0x60) = 0x3b89263;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBX = (UnityEngine_Object_c *)0x0;
        *(undefined8 *)(puVar10 + -0x60) = 0x3b89271;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') goto label_03b89509;
        *(undefined8 *)(puVar10 + -0x60) = 0x3b89283;
        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)__this_01;
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        unaff_RBX = (UnityEngine_Object_c *)0x0;
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)(puVar10 + -0x60) = 0x3b89299;
          pUVar8 = (UnityEngine_Object_c *)UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
          unaff_R13 = (UnityEngine_Object_c *)0x0;
          if ((pUVar8 != (UnityEngine_Object_c *)0x0) &&
             (unaff_R13 = (UnityEngine_Object_c *)0x0, (pUVar8->_1).image == TypeInfo_RectTransform)) {
            unaff_R13 = pUVar8;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar10 + -0x60) = 0x3b892c3;
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_RBX = (UnityEngine_Object_c *)0x0;
          *(undefined8 *)(puVar10 + -0x60) = 0x3b892d1;
          __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') goto label_03b89509;
          if (unaff_R13 != (UnityEngine_Object_c *)0x0) {
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            *(undefined8 *)(puVar10 + -0x60) = 0x3b892ee;
            UVar17 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            if (UVar17.fields.m_Width <= 0.0) goto label_03b89509;
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            *(undefined8 *)(puVar10 + -0x60) = 0x3b89306;
            UVar17 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            if (UVar17.fields.m_Height <= 0.0) goto label_03b89509;
            *(undefined8 *)(puVar10 + -0x60) = 0x3b89320;
            __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
            UVar17 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            fVar13 = UVar17.fields.m_Width;
            fVar14 = UVar17.fields.m_Height;
            pvVar1 = (__this_01->_1).this_arg.data;
            fVar15 = fVar13 - SUB84(pvVar1,0);
            fVar16 = fVar14 - (float)((ulong)pvVar1 >> 0x20);
            auVar3._8_4_ = in_XMM1_Dc;
            auVar3._0_8_ = UVar17.fields._8_8_;
            auVar3._12_4_ = in_XMM1_Dd;
            *(undefined1 (*) [16])(puVar10 + -0x48) = auVar3;
            if (fVar16 * fVar16 + fVar15 * fVar15 < 9.9999994e-11) {
              if (unaff_R15->data == (void *)0x0) goto label_03b8951a;
              unaff_R13 = *(UnityEngine_Object_c **)((long)unaff_R15->data + 0xd8);
              unaff_RBP = *(UnityEngine_Object_c **)&(__this_01->_1).this_arg.bits;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)(puVar10 + -0x60) = 0x3b89376;
                il2cpp_runtime_helper_02337ed0();
              }
              unaff_RBX = (UnityEngine_Object_c *)0x0;
              *(undefined8 *)(puVar10 + -0x60) = 0x3b89385;
              __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
              bVar5 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)unaff_RBP,
                                 (MethodInfo *)0x0);
              fVar13 = *(float *)(puVar10 + -0x48);
              fVar14 = *(float *)(puVar10 + -0x44);
              in_XMM1_Dc = *(undefined4 *)(puVar10 + -0x40);
              in_XMM1_Dd = *(undefined4 *)(puVar10 + -0x3c);
              if ((char)bVar5 != '\0') goto label_03b89509;
            }
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            (__this_01->_1).this_arg.data = (void *)CONCAT44(fVar14,fVar13);
            pvVar1 = (__this_01->_1).byval_arg.data;
            if (pvVar1 != (void *)0x0) {
              *(undefined8 *)&(__this_01->_1).this_arg.bits = *(undefined8 *)((long)pvVar1 + 0xd8);
              *(undefined8 *)(puVar10 + -0x60) = 0x3b893bc;
              il2cpp_runtime_helper_022b4080(&(__this_01->_1).this_arg.bits);
              __this_00 = (__this_01->_1).byval_arg.data;
              unaff_RBP = *(UnityEngine_Object_c **)(puVar10 + -0x50);
              __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                *(undefined8 *)(puVar10 + -0x60) = 0x3b893db;
                UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
                pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
                if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                  *(undefined8 *)(puVar10 + -0x60) = 0x3b893f6;
                  UnityEngine_RectTransform__set_anchorMin
                            ((UnityEngine_RectTransform_o *)pUVar8,(UnityEngine_Vector2_o)0x3f0000003f000000,
                             (MethodInfo *)0x0);
                  pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                  __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
                  if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                    *(undefined8 *)(puVar10 + -0x60) = 0x3b89411;
                    UnityEngine_RectTransform__set_anchorMax
                              ((UnityEngine_RectTransform_o *)pUVar8,(UnityEngine_Vector2_o)0x3f0000003f000000
                               ,(MethodInfo *)0x0);
                    __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)
                             ((UnityEngine_Object_o *)unaff_RBP)->klass;
                    if ((UnityEngine_Object_c *)__this != (UnityEngine_Object_c *)0x0) {
                      *(undefined8 *)(puVar10 + -0x60) = 0x3b8942c;
                      UnityEngine_RectTransform__set_pivot
                                ((UnityEngine_RectTransform_o *)__this,
                                 (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                      unaff_RBX = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                      if (g_data_057a694c == '\0') {
                        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)
                                 &TypeInfo_Vector2;
                        *(undefined8 *)(puVar10 + -0x60) = 0x3b89445;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057a694c = '\x01';
                      }
                      if (unaff_RBX != (UnityEngine_Object_c *)0x0) {
                        value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
                        *(undefined8 *)(puVar10 + -0x60) = 0x3b89474;
                        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_RBX;
                        UnityEngine_RectTransform__set_anchoredPosition
                                  ((UnityEngine_RectTransform_o *)unaff_RBX,(UnityEngine_Vector2_o)value,
                                   (MethodInfo *)0x0);
                        if ((unaff_R15->data != (void *)0x0) &&
                           (__this = *(Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o **)
                                      ((long)unaff_R15->data + 0xd8),
                           (UnityEngine_Object_c *)__this != (UnityEngine_Object_c *)0x0)) {
                          pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                          *(undefined8 *)(puVar10 + -0x60) = 0x3b8949b;
                          UVar17 = UnityEngine_Sprite__get_rect
                                             ((UnityEngine_Sprite_o *)__this,(MethodInfo *)0x0);
                          unaff_RBX = (UnityEngine_Object_c *)0x0;
                          if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                            uVar11 = -(uint)(0.0 < UVar17.fields.m_Height);
                            uVar12 = -(uint)(0.0 < UVar17.fields.m_Width);
                            fVar16 = (float)(~uVar12 & 0x3f800000 |
                                            (~uVar11 & 0x3f800000 |
                                            (uint)(UVar17.fields.m_Width / UVar17.fields.m_Height) & uVar11) &
                                            uVar12);
                            fVar13 = *(float *)(puVar10 + -0x48);
                            fVar14 = *(float *)(puVar10 + -0x44);
                            fVar15 = fVar14 * fVar16;
                            fVar16 = fVar13 / fVar16;
                            if (fVar13 <= fVar15) {
                              fVar13 = fVar15;
                            }
                            if (fVar14 <= fVar16) {
                              fVar14 = fVar16;
                            }
                            value_00.fields.y = fVar14;
                            value_00.fields.x = fVar13;
                            *(undefined8 *)(puVar10 + -0x60) = 0x3b89507;
                            UnityEngine_RectTransform__set_sizeDelta
                                      ((UnityEngine_RectTransform_o *)pUVar8,value_00,(MethodInfo *)0x0);
                            unaff_RBX = (UnityEngine_Object_c *)CONCAT71((int7)((ulong)pUVar8 >> 8),1);
label_03b89509:
                            return (bool_conflict)unaff_RBX;
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
label_03b8951a:
    *(undefined8 *)(puVar10 + -0x60) = 0x3b8951f;
    il2cpp_runtime_helper_022b2c90();
    puVar10 = puVar10 + -0x58;
    unaff_R12 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__LateUpdate (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b89520

bool_conflict
Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__LateUpdate
          (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  void *pvVar1;
  UnityEngine_Vector2_Fields value;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_UI_Image_o *__this_00;
  undefined1 auVar3 [16];
  uint *puVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Object_c *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Object_c *unaff_RBX;
  UnityEngine_Object_c *unaff_RBP;
  UnityEngine_Object_c *__this_01;
  UnityEngine_Object_c *unaff_R12;
  UnityEngine_Object_c *unaff_R13;
  undefined8 *unaff_R14;
  Il2CppType *unaff_R15;
  uint uVar10;
  uint uVar11;
  UnityEngine_Vector2_o value_00;
  float fVar12;
  float fVar13;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar14;
  float fVar15;
  UnityEngine_Rect_o UVar16;
  
  do {
    __this_01 = (UnityEngine_Object_c *)__this;
    *(UnityEngine_Object_c **)((long)register0x00000020 + -8) = unaff_RBP;
    *(Il2CppType **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(UnityEngine_Object_c **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(UnityEngine_Object_c **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(UnityEngine_Object_c **)((long)register0x00000020 + -0x30) = unaff_RBX;
    if (g_data_057a9e90 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b890b6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b890c2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b890ce;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      g_data_057a9e90 = '\x01';
    }
    pUVar2 = (__this_01->_1).byval_arg.data;
    unaff_R14 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b890f2;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R15 = &(__this_01->_1).byval_arg;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89103;
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89119;
      pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image);
      (__this_01->_1).byval_arg.data = pIVar6;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89129;
      il2cpp_runtime_helper_022b4080(unaff_R15);
    }
    pUVar2 = *(UnityEngine_Object_o **)&(__this_01->_1).byval_arg.bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8913f;
      il2cpp_runtime_helper_02337ed0();
    }
    puVar4 = &(__this_01->_1).byval_arg.bits;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89150;
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8915e;
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)puVar4 = 0;
      }
      else {
        pUVar9 = (UnityEngine_Transform_o *)0x0;
        if (pUVar7->klass == TypeInfo_RectTransform) {
          pUVar9 = pUVar7;
        }
        *(UnityEngine_Transform_o **)puVar4 = pUVar9;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8919a;
      il2cpp_runtime_helper_022b4080(puVar4);
    }
    *(uint **)((long)register0x00000020 + -0x50) = puVar4;
    unaff_RBP = unaff_R15->data;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b891b3;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBX = (UnityEngine_Object_c *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b891c1;
    __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_RBP;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_03b89509;
    if (unaff_R15->data != (void *)0x0) {
      pUVar2 = *(UnityEngine_Object_o **)((long)unaff_R15->data + 0xd8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b891ed;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (UnityEngine_Object_c *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b891fb;
      bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_03b89509;
      unaff_RBP = (UnityEngine_Object_c *)**(undefined8 **)((long)register0x00000020 + -0x50);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8921c;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (UnityEngine_Object_c *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8922a;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_03b89509;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8923c;
      __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)__this_01;
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8924f;
        unaff_R13 = (UnityEngine_Object_c *)UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89263;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBX = (UnityEngine_Object_c *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89271;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') goto label_03b89509;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89283;
        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)__this_01;
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        unaff_RBX = (UnityEngine_Object_c *)0x0;
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89299;
          pUVar8 = (UnityEngine_Object_c *)UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
          unaff_R13 = (UnityEngine_Object_c *)0x0;
          if ((pUVar8 != (UnityEngine_Object_c *)0x0) &&
             (unaff_R13 = (UnityEngine_Object_c *)0x0, (pUVar8->_1).image == TypeInfo_RectTransform)) {
            unaff_R13 = pUVar8;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b892c3;
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_RBX = (UnityEngine_Object_c *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b892d1;
          __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') goto label_03b89509;
          if (unaff_R13 != (UnityEngine_Object_c *)0x0) {
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b892ee;
            UVar16 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            if (UVar16.fields.m_Width <= 0.0) goto label_03b89509;
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89306;
            UVar16 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            if (UVar16.fields.m_Height <= 0.0) goto label_03b89509;
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89320;
            __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
            UVar16 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            fVar12 = UVar16.fields.m_Width;
            fVar13 = UVar16.fields.m_Height;
            pvVar1 = (__this_01->_1).this_arg.data;
            fVar14 = fVar12 - SUB84(pvVar1,0);
            fVar15 = fVar13 - (float)((ulong)pvVar1 >> 0x20);
            auVar3._8_4_ = in_XMM1_Dc;
            auVar3._0_8_ = UVar16.fields._8_8_;
            auVar3._12_4_ = in_XMM1_Dd;
            *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar3;
            if (fVar15 * fVar15 + fVar14 * fVar14 < 9.9999994e-11) {
              if (unaff_R15->data == (void *)0x0) goto label_03b8951a;
              unaff_R13 = *(UnityEngine_Object_c **)((long)unaff_R15->data + 0xd8);
              unaff_RBP = *(UnityEngine_Object_c **)&(__this_01->_1).this_arg.bits;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89376;
                il2cpp_runtime_helper_02337ed0();
              }
              unaff_RBX = (UnityEngine_Object_c *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89385;
              __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
              bVar5 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)unaff_RBP,
                                 (MethodInfo *)0x0);
              fVar12 = *(float *)((long)register0x00000020 + -0x48);
              fVar13 = *(float *)((long)register0x00000020 + -0x44);
              in_XMM1_Dc = *(undefined4 *)((long)register0x00000020 + -0x40);
              in_XMM1_Dd = *(undefined4 *)((long)register0x00000020 + -0x3c);
              if ((char)bVar5 != '\0') goto label_03b89509;
            }
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            (__this_01->_1).this_arg.data = (void *)CONCAT44(fVar13,fVar12);
            pvVar1 = (__this_01->_1).byval_arg.data;
            if (pvVar1 != (void *)0x0) {
              *(undefined8 *)&(__this_01->_1).this_arg.bits = *(undefined8 *)((long)pvVar1 + 0xd8);
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b893bc;
              il2cpp_runtime_helper_022b4080(&(__this_01->_1).this_arg.bits);
              __this_00 = (__this_01->_1).byval_arg.data;
              unaff_RBP = *(UnityEngine_Object_c **)((long)register0x00000020 + -0x50);
              __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b893db;
                UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
                pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
                if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b893f6;
                  UnityEngine_RectTransform__set_anchorMin
                            ((UnityEngine_RectTransform_o *)pUVar8,(UnityEngine_Vector2_o)0x3f0000003f000000,
                             (MethodInfo *)0x0);
                  pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                  __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
                  if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89411;
                    UnityEngine_RectTransform__set_anchorMax
                              ((UnityEngine_RectTransform_o *)pUVar8,(UnityEngine_Vector2_o)0x3f0000003f000000
                               ,(MethodInfo *)0x0);
                    __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)
                             ((UnityEngine_Object_o *)unaff_RBP)->klass;
                    if ((UnityEngine_Object_c *)__this != (UnityEngine_Object_c *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8942c;
                      UnityEngine_RectTransform__set_pivot
                                ((UnityEngine_RectTransform_o *)__this,
                                 (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                      unaff_RBX = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                      if (g_data_057a694c == '\0') {
                        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)
                                 &TypeInfo_Vector2;
                        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89445;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057a694c = '\x01';
                      }
                      if (unaff_RBX != (UnityEngine_Object_c *)0x0) {
                        value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
                        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89474;
                        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_RBX;
                        UnityEngine_RectTransform__set_anchoredPosition
                                  ((UnityEngine_RectTransform_o *)unaff_RBX,(UnityEngine_Vector2_o)value,
                                   (MethodInfo *)0x0);
                        if ((unaff_R15->data != (void *)0x0) &&
                           (__this = *(Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o **)
                                      ((long)unaff_R15->data + 0xd8),
                           (UnityEngine_Object_c *)__this != (UnityEngine_Object_c *)0x0)) {
                          pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8949b;
                          UVar16 = UnityEngine_Sprite__get_rect
                                             ((UnityEngine_Sprite_o *)__this,(MethodInfo *)0x0);
                          unaff_RBX = (UnityEngine_Object_c *)0x0;
                          if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                            uVar10 = -(uint)(0.0 < UVar16.fields.m_Height);
                            uVar11 = -(uint)(0.0 < UVar16.fields.m_Width);
                            fVar15 = (float)(~uVar11 & 0x3f800000 |
                                            (~uVar10 & 0x3f800000 |
                                            (uint)(UVar16.fields.m_Width / UVar16.fields.m_Height) & uVar10) &
                                            uVar11);
                            fVar12 = *(float *)((long)register0x00000020 + -0x48);
                            fVar13 = *(float *)((long)register0x00000020 + -0x44);
                            fVar14 = fVar13 * fVar15;
                            fVar15 = fVar12 / fVar15;
                            if (fVar12 <= fVar14) {
                              fVar12 = fVar14;
                            }
                            if (fVar13 <= fVar15) {
                              fVar13 = fVar15;
                            }
                            value_00.fields.y = fVar13;
                            value_00.fields.x = fVar12;
                            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89507;
                            UnityEngine_RectTransform__set_sizeDelta
                                      ((UnityEngine_RectTransform_o *)pUVar8,value_00,(MethodInfo *)0x0);
                            unaff_RBX = (UnityEngine_Object_c *)CONCAT71((int7)((ulong)pUVar8 >> 8),1);
label_03b89509:
                            return (bool_conflict)unaff_RBX;
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
label_03b8951a:
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8951f;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x58);
    unaff_R12 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b89530

bool_conflict
Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__OnRectTransformDimensionsChange
          (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  void *pvVar1;
  UnityEngine_Vector2_Fields value;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_UI_Image_o *__this_00;
  undefined1 auVar3 [16];
  uint *puVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Object_c *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Object_c *unaff_RBX;
  undefined1 *puVar10;
  UnityEngine_Object_c *unaff_RBP;
  UnityEngine_Object_c *__this_01;
  UnityEngine_Object_c *unaff_R12;
  UnityEngine_Object_c *unaff_R13;
  undefined8 *unaff_R14;
  Il2CppType *unaff_R15;
  uint uVar11;
  uint uVar12;
  UnityEngine_Vector2_o value_00;
  float fVar13;
  float fVar14;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar15;
  float fVar16;
  UnityEngine_Rect_o UVar17;
  
  puVar10 = (undefined1 *)register0x00000020;
  do {
    __this_01 = (UnityEngine_Object_c *)__this;
    *(UnityEngine_Object_c **)(puVar10 + -8) = unaff_RBP;
    *(Il2CppType **)(puVar10 + -0x10) = unaff_R15;
    *(undefined8 **)(puVar10 + -0x18) = unaff_R14;
    *(UnityEngine_Object_c **)(puVar10 + -0x20) = unaff_R13;
    *(UnityEngine_Object_c **)(puVar10 + -0x28) = unaff_R12;
    *(UnityEngine_Object_c **)(puVar10 + -0x30) = unaff_RBX;
    if (g_data_057a9e90 == '\0') {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b890b6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
      *(undefined8 *)(puVar10 + -0x60) = 0x3b890c2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar10 + -0x60) = 0x3b890ce;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      g_data_057a9e90 = '\x01';
    }
    pUVar2 = (__this_01->_1).byval_arg.data;
    unaff_R14 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b890f2;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R15 = &(__this_01->_1).byval_arg;
    *(undefined8 *)(puVar10 + -0x60) = 0x3b89103;
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b89119;
      pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image);
      (__this_01->_1).byval_arg.data = pIVar6;
      *(undefined8 *)(puVar10 + -0x60) = 0x3b89129;
      il2cpp_runtime_helper_022b4080(unaff_R15);
    }
    pUVar2 = *(UnityEngine_Object_o **)&(__this_01->_1).byval_arg.bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b8913f;
      il2cpp_runtime_helper_02337ed0();
    }
    puVar4 = &(__this_01->_1).byval_arg.bits;
    *(undefined8 *)(puVar10 + -0x60) = 0x3b89150;
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b8915e;
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)puVar4 = 0;
      }
      else {
        pUVar9 = (UnityEngine_Transform_o *)0x0;
        if (pUVar7->klass == TypeInfo_RectTransform) {
          pUVar9 = pUVar7;
        }
        *(UnityEngine_Transform_o **)puVar4 = pUVar9;
      }
      *(undefined8 *)(puVar10 + -0x60) = 0x3b8919a;
      il2cpp_runtime_helper_022b4080(puVar4);
    }
    *(uint **)(puVar10 + -0x50) = puVar4;
    unaff_RBP = unaff_R15->data;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar10 + -0x60) = 0x3b891b3;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBX = (UnityEngine_Object_c *)0x0;
    *(undefined8 *)(puVar10 + -0x60) = 0x3b891c1;
    __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_RBP;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_03b89509;
    if (unaff_R15->data != (void *)0x0) {
      pUVar2 = *(UnityEngine_Object_o **)((long)unaff_R15->data + 0xd8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar10 + -0x60) = 0x3b891ed;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (UnityEngine_Object_c *)0x0;
      *(undefined8 *)(puVar10 + -0x60) = 0x3b891fb;
      bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_03b89509;
      unaff_RBP = (UnityEngine_Object_c *)**(undefined8 **)(puVar10 + -0x50);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar10 + -0x60) = 0x3b8921c;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (UnityEngine_Object_c *)0x0;
      *(undefined8 *)(puVar10 + -0x60) = 0x3b8922a;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_03b89509;
      *(undefined8 *)(puVar10 + -0x60) = 0x3b8923c;
      __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)__this_01;
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)(puVar10 + -0x60) = 0x3b8924f;
        unaff_R13 = (UnityEngine_Object_c *)UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar10 + -0x60) = 0x3b89263;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBX = (UnityEngine_Object_c *)0x0;
        *(undefined8 *)(puVar10 + -0x60) = 0x3b89271;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') goto label_03b89509;
        *(undefined8 *)(puVar10 + -0x60) = 0x3b89283;
        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)__this_01;
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        unaff_RBX = (UnityEngine_Object_c *)0x0;
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)(puVar10 + -0x60) = 0x3b89299;
          pUVar8 = (UnityEngine_Object_c *)UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
          unaff_R13 = (UnityEngine_Object_c *)0x0;
          if ((pUVar8 != (UnityEngine_Object_c *)0x0) &&
             (unaff_R13 = (UnityEngine_Object_c *)0x0, (pUVar8->_1).image == TypeInfo_RectTransform)) {
            unaff_R13 = pUVar8;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar10 + -0x60) = 0x3b892c3;
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_RBX = (UnityEngine_Object_c *)0x0;
          *(undefined8 *)(puVar10 + -0x60) = 0x3b892d1;
          __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') goto label_03b89509;
          if (unaff_R13 != (UnityEngine_Object_c *)0x0) {
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            *(undefined8 *)(puVar10 + -0x60) = 0x3b892ee;
            UVar17 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            if (UVar17.fields.m_Width <= 0.0) goto label_03b89509;
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            *(undefined8 *)(puVar10 + -0x60) = 0x3b89306;
            UVar17 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            if (UVar17.fields.m_Height <= 0.0) goto label_03b89509;
            *(undefined8 *)(puVar10 + -0x60) = 0x3b89320;
            __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
            UVar17 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            fVar13 = UVar17.fields.m_Width;
            fVar14 = UVar17.fields.m_Height;
            pvVar1 = (__this_01->_1).this_arg.data;
            fVar15 = fVar13 - SUB84(pvVar1,0);
            fVar16 = fVar14 - (float)((ulong)pvVar1 >> 0x20);
            auVar3._8_4_ = in_XMM1_Dc;
            auVar3._0_8_ = UVar17.fields._8_8_;
            auVar3._12_4_ = in_XMM1_Dd;
            *(undefined1 (*) [16])(puVar10 + -0x48) = auVar3;
            if (fVar16 * fVar16 + fVar15 * fVar15 < 9.9999994e-11) {
              if (unaff_R15->data == (void *)0x0) goto label_03b8951a;
              unaff_R13 = *(UnityEngine_Object_c **)((long)unaff_R15->data + 0xd8);
              unaff_RBP = *(UnityEngine_Object_c **)&(__this_01->_1).this_arg.bits;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)(puVar10 + -0x60) = 0x3b89376;
                il2cpp_runtime_helper_02337ed0();
              }
              unaff_RBX = (UnityEngine_Object_c *)0x0;
              *(undefined8 *)(puVar10 + -0x60) = 0x3b89385;
              __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
              bVar5 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)unaff_RBP,
                                 (MethodInfo *)0x0);
              fVar13 = *(float *)(puVar10 + -0x48);
              fVar14 = *(float *)(puVar10 + -0x44);
              in_XMM1_Dc = *(undefined4 *)(puVar10 + -0x40);
              in_XMM1_Dd = *(undefined4 *)(puVar10 + -0x3c);
              if ((char)bVar5 != '\0') goto label_03b89509;
            }
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            (__this_01->_1).this_arg.data = (void *)CONCAT44(fVar14,fVar13);
            pvVar1 = (__this_01->_1).byval_arg.data;
            if (pvVar1 != (void *)0x0) {
              *(undefined8 *)&(__this_01->_1).this_arg.bits = *(undefined8 *)((long)pvVar1 + 0xd8);
              *(undefined8 *)(puVar10 + -0x60) = 0x3b893bc;
              il2cpp_runtime_helper_022b4080(&(__this_01->_1).this_arg.bits);
              __this_00 = (__this_01->_1).byval_arg.data;
              unaff_RBP = *(UnityEngine_Object_c **)(puVar10 + -0x50);
              __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                *(undefined8 *)(puVar10 + -0x60) = 0x3b893db;
                UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
                pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
                if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                  *(undefined8 *)(puVar10 + -0x60) = 0x3b893f6;
                  UnityEngine_RectTransform__set_anchorMin
                            ((UnityEngine_RectTransform_o *)pUVar8,(UnityEngine_Vector2_o)0x3f0000003f000000,
                             (MethodInfo *)0x0);
                  pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                  __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
                  if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                    *(undefined8 *)(puVar10 + -0x60) = 0x3b89411;
                    UnityEngine_RectTransform__set_anchorMax
                              ((UnityEngine_RectTransform_o *)pUVar8,(UnityEngine_Vector2_o)0x3f0000003f000000
                               ,(MethodInfo *)0x0);
                    __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)
                             ((UnityEngine_Object_o *)unaff_RBP)->klass;
                    if ((UnityEngine_Object_c *)__this != (UnityEngine_Object_c *)0x0) {
                      *(undefined8 *)(puVar10 + -0x60) = 0x3b8942c;
                      UnityEngine_RectTransform__set_pivot
                                ((UnityEngine_RectTransform_o *)__this,
                                 (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                      unaff_RBX = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                      if (g_data_057a694c == '\0') {
                        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)
                                 &TypeInfo_Vector2;
                        *(undefined8 *)(puVar10 + -0x60) = 0x3b89445;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057a694c = '\x01';
                      }
                      if (unaff_RBX != (UnityEngine_Object_c *)0x0) {
                        value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
                        *(undefined8 *)(puVar10 + -0x60) = 0x3b89474;
                        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_RBX;
                        UnityEngine_RectTransform__set_anchoredPosition
                                  ((UnityEngine_RectTransform_o *)unaff_RBX,(UnityEngine_Vector2_o)value,
                                   (MethodInfo *)0x0);
                        if ((unaff_R15->data != (void *)0x0) &&
                           (__this = *(Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o **)
                                      ((long)unaff_R15->data + 0xd8),
                           (UnityEngine_Object_c *)__this != (UnityEngine_Object_c *)0x0)) {
                          pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                          *(undefined8 *)(puVar10 + -0x60) = 0x3b8949b;
                          UVar17 = UnityEngine_Sprite__get_rect
                                             ((UnityEngine_Sprite_o *)__this,(MethodInfo *)0x0);
                          unaff_RBX = (UnityEngine_Object_c *)0x0;
                          if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                            uVar11 = -(uint)(0.0 < UVar17.fields.m_Height);
                            uVar12 = -(uint)(0.0 < UVar17.fields.m_Width);
                            fVar16 = (float)(~uVar12 & 0x3f800000 |
                                            (~uVar11 & 0x3f800000 |
                                            (uint)(UVar17.fields.m_Width / UVar17.fields.m_Height) & uVar11) &
                                            uVar12);
                            fVar13 = *(float *)(puVar10 + -0x48);
                            fVar14 = *(float *)(puVar10 + -0x44);
                            fVar15 = fVar14 * fVar16;
                            fVar16 = fVar13 / fVar16;
                            if (fVar13 <= fVar15) {
                              fVar13 = fVar15;
                            }
                            if (fVar14 <= fVar16) {
                              fVar14 = fVar16;
                            }
                            value_00.fields.y = fVar14;
                            value_00.fields.x = fVar13;
                            *(undefined8 *)(puVar10 + -0x60) = 0x3b89507;
                            UnityEngine_RectTransform__set_sizeDelta
                                      ((UnityEngine_RectTransform_o *)pUVar8,value_00,(MethodInfo *)0x0);
                            unaff_RBX = (UnityEngine_Object_c *)CONCAT71((int7)((ulong)pUVar8 >> 8),1);
label_03b89509:
                            return (bool_conflict)unaff_RBX;
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
label_03b8951a:
    *(undefined8 *)(puVar10 + -0x60) = 0x3b8951f;
    il2cpp_runtime_helper_022b2c90();
    puVar10 = puVar10 + -0x58;
    unaff_R12 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$Refresh
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b89090

bool_conflict
Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover__Refresh
          (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  void *pvVar1;
  UnityEngine_Vector2_Fields value;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_UI_Image_o *__this_00;
  undefined1 auVar3 [16];
  uint *puVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Object_c *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Object_c *unaff_RBX;
  UnityEngine_Object_c *unaff_RBP;
  UnityEngine_Object_c *__this_01;
  UnityEngine_Object_c *unaff_R12;
  UnityEngine_Object_c *unaff_R13;
  undefined8 *unaff_R14;
  Il2CppType *unaff_R15;
  uint uVar10;
  uint uVar11;
  UnityEngine_Vector2_o value_00;
  float fVar12;
  float fVar13;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar14;
  float fVar15;
  UnityEngine_Rect_o UVar16;
  
  do {
    __this_01 = (UnityEngine_Object_c *)__this;
    *(UnityEngine_Object_c **)((long)register0x00000020 + -8) = unaff_RBP;
    *(Il2CppType **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(UnityEngine_Object_c **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(UnityEngine_Object_c **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(UnityEngine_Object_c **)((long)register0x00000020 + -0x30) = unaff_RBX;
    if (g_data_057a9e90 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b890b6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b890c2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b890ce;
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      g_data_057a9e90 = '\x01';
    }
    pUVar2 = (__this_01->_1).byval_arg.data;
    unaff_R14 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b890f2;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R15 = &(__this_01->_1).byval_arg;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89103;
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89119;
      pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image);
      (__this_01->_1).byval_arg.data = pIVar6;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89129;
      il2cpp_runtime_helper_022b4080(unaff_R15);
    }
    pUVar2 = *(UnityEngine_Object_o **)&(__this_01->_1).byval_arg.bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8913f;
      il2cpp_runtime_helper_02337ed0();
    }
    puVar4 = &(__this_01->_1).byval_arg.bits;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89150;
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8915e;
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)puVar4 = 0;
      }
      else {
        pUVar9 = (UnityEngine_Transform_o *)0x0;
        if (pUVar7->klass == TypeInfo_RectTransform) {
          pUVar9 = pUVar7;
        }
        *(UnityEngine_Transform_o **)puVar4 = pUVar9;
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8919a;
      il2cpp_runtime_helper_022b4080(puVar4);
    }
    *(uint **)((long)register0x00000020 + -0x50) = puVar4;
    unaff_RBP = unaff_R15->data;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b891b3;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBX = (UnityEngine_Object_c *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b891c1;
    __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_RBP;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_03b89509;
    if (unaff_R15->data != (void *)0x0) {
      pUVar2 = *(UnityEngine_Object_o **)((long)unaff_R15->data + 0xd8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b891ed;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (UnityEngine_Object_c *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b891fb;
      bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_03b89509;
      unaff_RBP = (UnityEngine_Object_c *)**(undefined8 **)((long)register0x00000020 + -0x50);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8921c;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBX = (UnityEngine_Object_c *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8922a;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_03b89509;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8923c;
      __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)__this_01;
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8924f;
        unaff_R13 = (UnityEngine_Object_c *)UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89263;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBX = (UnityEngine_Object_c *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89271;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') goto label_03b89509;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89283;
        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)__this_01;
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        unaff_RBX = (UnityEngine_Object_c *)0x0;
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89299;
          pUVar8 = (UnityEngine_Object_c *)UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0);
          unaff_R13 = (UnityEngine_Object_c *)0x0;
          if ((pUVar8 != (UnityEngine_Object_c *)0x0) &&
             (unaff_R13 = (UnityEngine_Object_c *)0x0, (pUVar8->_1).image == TypeInfo_RectTransform)) {
            unaff_R13 = pUVar8;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b892c3;
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_RBX = (UnityEngine_Object_c *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b892d1;
          __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') goto label_03b89509;
          if (unaff_R13 != (UnityEngine_Object_c *)0x0) {
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b892ee;
            UVar16 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            if (UVar16.fields.m_Width <= 0.0) goto label_03b89509;
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89306;
            UVar16 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            if (UVar16.fields.m_Height <= 0.0) goto label_03b89509;
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89320;
            __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
            UVar16 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)unaff_R13,(MethodInfo *)0x0);
            fVar12 = UVar16.fields.m_Width;
            fVar13 = UVar16.fields.m_Height;
            pvVar1 = (__this_01->_1).this_arg.data;
            fVar14 = fVar12 - SUB84(pvVar1,0);
            fVar15 = fVar13 - (float)((ulong)pvVar1 >> 0x20);
            auVar3._8_4_ = in_XMM1_Dc;
            auVar3._0_8_ = UVar16.fields._8_8_;
            auVar3._12_4_ = in_XMM1_Dd;
            *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar3;
            if (fVar15 * fVar15 + fVar14 * fVar14 < 9.9999994e-11) {
              if (unaff_R15->data == (void *)0x0) goto label_03b8951a;
              unaff_R13 = *(UnityEngine_Object_c **)((long)unaff_R15->data + 0xd8);
              unaff_RBP = *(UnityEngine_Object_c **)&(__this_01->_1).this_arg.bits;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89376;
                il2cpp_runtime_helper_02337ed0();
              }
              unaff_RBX = (UnityEngine_Object_c *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89385;
              __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_R13;
              bVar5 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)unaff_R13,(UnityEngine_Object_o *)unaff_RBP,
                                 (MethodInfo *)0x0);
              fVar12 = *(float *)((long)register0x00000020 + -0x48);
              fVar13 = *(float *)((long)register0x00000020 + -0x44);
              in_XMM1_Dc = *(undefined4 *)((long)register0x00000020 + -0x40);
              in_XMM1_Dd = *(undefined4 *)((long)register0x00000020 + -0x3c);
              if ((char)bVar5 != '\0') goto label_03b89509;
            }
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            (__this_01->_1).this_arg.data = (void *)CONCAT44(fVar13,fVar12);
            pvVar1 = (__this_01->_1).byval_arg.data;
            if (pvVar1 != (void *)0x0) {
              *(undefined8 *)&(__this_01->_1).this_arg.bits = *(undefined8 *)((long)pvVar1 + 0xd8);
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b893bc;
              il2cpp_runtime_helper_022b4080(&(__this_01->_1).this_arg.bits);
              __this_00 = (__this_01->_1).byval_arg.data;
              unaff_RBP = *(UnityEngine_Object_c **)((long)register0x00000020 + -0x50);
              __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b893db;
                UnityEngine_UI_Image__set_preserveAspect(__this_00,1,(MethodInfo *)0x0);
                pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
                if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b893f6;
                  UnityEngine_RectTransform__set_anchorMin
                            ((UnityEngine_RectTransform_o *)pUVar8,(UnityEngine_Vector2_o)0x3f0000003f000000,
                             (MethodInfo *)0x0);
                  pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                  __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)0x0;
                  if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89411;
                    UnityEngine_RectTransform__set_anchorMax
                              ((UnityEngine_RectTransform_o *)pUVar8,(UnityEngine_Vector2_o)0x3f0000003f000000
                               ,(MethodInfo *)0x0);
                    __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)
                             ((UnityEngine_Object_o *)unaff_RBP)->klass;
                    if ((UnityEngine_Object_c *)__this != (UnityEngine_Object_c *)0x0) {
                      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8942c;
                      UnityEngine_RectTransform__set_pivot
                                ((UnityEngine_RectTransform_o *)__this,
                                 (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                      unaff_RBX = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                      if (g_data_057a694c == '\0') {
                        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)
                                 &TypeInfo_Vector2;
                        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89445;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057a694c = '\x01';
                      }
                      if (unaff_RBX != (UnityEngine_Object_c *)0x0) {
                        value = **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
                        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89474;
                        __this = (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *)unaff_RBX;
                        UnityEngine_RectTransform__set_anchoredPosition
                                  ((UnityEngine_RectTransform_o *)unaff_RBX,(UnityEngine_Vector2_o)value,
                                   (MethodInfo *)0x0);
                        if ((unaff_R15->data != (void *)0x0) &&
                           (__this = *(Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o **)
                                      ((long)unaff_R15->data + 0xd8),
                           (UnityEngine_Object_c *)__this != (UnityEngine_Object_c *)0x0)) {
                          pUVar8 = ((UnityEngine_Object_o *)unaff_RBP)->klass;
                          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8949b;
                          UVar16 = UnityEngine_Sprite__get_rect
                                             ((UnityEngine_Sprite_o *)__this,(MethodInfo *)0x0);
                          unaff_RBX = (UnityEngine_Object_c *)0x0;
                          if (pUVar8 != (UnityEngine_Object_c *)0x0) {
                            uVar10 = -(uint)(0.0 < UVar16.fields.m_Height);
                            uVar11 = -(uint)(0.0 < UVar16.fields.m_Width);
                            fVar15 = (float)(~uVar11 & 0x3f800000 |
                                            (~uVar10 & 0x3f800000 |
                                            (uint)(UVar16.fields.m_Width / UVar16.fields.m_Height) & uVar10) &
                                            uVar11);
                            fVar12 = *(float *)((long)register0x00000020 + -0x48);
                            fVar13 = *(float *)((long)register0x00000020 + -0x44);
                            fVar14 = fVar13 * fVar15;
                            fVar15 = fVar12 / fVar15;
                            if (fVar12 <= fVar14) {
                              fVar12 = fVar14;
                            }
                            if (fVar13 <= fVar15) {
                              fVar13 = fVar15;
                            }
                            value_00.fields.y = fVar13;
                            value_00.fields.x = fVar12;
                            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b89507;
                            UnityEngine_RectTransform__set_sizeDelta
                                      ((UnityEngine_RectTransform_o *)pUVar8,value_00,(MethodInfo *)0x0);
                            unaff_RBX = (UnityEngine_Object_c *)CONCAT71((int7)((ulong)pUVar8 >> 8),1);
label_03b89509:
                            return (bool_conflict)unaff_RBX;
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
label_03b8951a:
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x3b8951f;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x58);
    unaff_R12 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchRectTransformSpriteCover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover___ctor (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o* __this, const MethodInfo* method);
// 0x3b89540

void Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover___ctor
               (Gisketch_Aottg2UI_Building_GisketchRectTransformSpriteCover_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


