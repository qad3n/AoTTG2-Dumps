// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetImageLayout.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Configure
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Configure (UnityEngine_UI_Image_o* image, float width, float height, const MethodInfo* method);
// 0x451af70

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Configure
               (UnityEngine_UI_Image_o *image,float width,float height,MethodInfo *method)

{
  Il2CppType *pIVar1;
  Il2CppMethodPointer pIVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *pUVar3;
  code *pcVar4;
  Il2CppClass *pIVar5;
  bool_conflict bVar6;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *pGVar7;
  Il2CppClass *image_00;
  Il2CppClass *__this;
  Il2CppType **ppIVar8;
  undefined8 uVar9;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Material_o *__this_00;
  char cVar11;
  char extraout_DL;
  Il2CppClass *unaff_RBX;
  float *pfVar12;
  Il2CppClass *unaff_RBP;
  Il2CppClass *method_00;
  Il2CppClass *pIVar13;
  long *plVar14;
  undefined8 unaff_R12;
  ulong unaff_R14;
  ulong uVar15;
  undefined8 *unaff_R15;
  undefined8 *puVar16;
  float extraout_XMM0_Da;
  undefined8 uStack_38;
  undefined8 uStack_30;
  float fStack_8;
  float fStack_4;
  
  fStack_8 = width;
  fStack_4 = height;
  pGVar7 = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,method);
  if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
    (pGVar7->fields)._baseWidth = fStack_8;
    (pGVar7->fields)._baseHeight = fStack_4;
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(pGVar7,1.0,method);
    return;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  uVar15 = (ulong)method & 0xffffffff;
  if (g_data_057aedf9 == '\0') {
    uStack_38 = 0x451afe2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgGuildPresetImageShimmer_GetComponent_AottgGuildPres);
    uStack_38 = 0x451afee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgGuildPresetImageShimmer_AddComponent_AottgGuildPres);
    uStack_38 = 0x451affa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedf9 = '\x01';
  }
  puVar16 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_38 = 0x451b019;
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (Il2CppClass *)0x0;
  uStack_38 = 0x451b025;
  pIVar13 = (Il2CppClass *)image;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pIVar5 = unaff_RBP;
  if ((Il2CppClass *)image == (Il2CppClass *)0x0) {
label_0451b0ae:
    image_00 = pIVar13;
    unaff_RBP = pIVar5;
    uStack_38 = 0x451b0b3;
    uStack_38._0_4_ = il2cpp_runtime_helper_022b2c90();
    pfVar12 = (float *)&uStack_38;
    uStack_38._4_4_ = extraout_XMM0_Da;
    pGVar7 = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime
                       ((UnityEngine_UI_Image_o *)image_00,(MethodInfo *)method_00);
    if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply
                (pGVar7,uStack_38._4_4_,(MethodInfo *)method_00);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = (Il2CppClass *)image;
    cVar11 = extraout_DL;
  }
  else {
    uStack_38 = 0x451b04b;
    image_00 = (Il2CppClass *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)image,MethodInfo_AottgGuildPresetImageShimmer_GetComponent_AottgGuildPres);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_38 = 0x451b05f;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (Il2CppClass *)0x0;
    uStack_38._0_4_ = 0x451b06b;
    uStack_38._4_4_ = 0.0;
    __this = image_00;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)image_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      method_00 = (Il2CppClass *)0x0;
      uStack_38 = 0x451b079;
      pIVar13 = (Il2CppClass *)image;
      __this = (Il2CppClass *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
      pIVar5 = image_00;
      if (__this == (Il2CppClass *)0x0) goto label_0451b0ae;
      uStack_38._0_4_ = 0x451b090;
      uStack_38._4_4_ = 0.0;
      method_00 = MethodInfo_AottgGuildPresetImageShimmer_AddComponent_AottgGuildPres;
      image_00 = (Il2CppClass *)
                 UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)__this,(MethodInfo_255A020 *)MethodInfo_AottgGuildPresetImageShimmer_AddComponent_AottgGuildPres);
    }
    pIVar5 = (Il2CppClass *)0x0;
    pIVar13 = __this;
    if (image_00 == (Il2CppClass *)0x0) goto label_0451b0ae;
    cVar11 = (char)method;
    pfVar12 = &fStack_8;
    method_00 = (Il2CppClass *)image;
    uVar15 = unaff_R14;
    puVar16 = unaff_R15;
  }
  *(Il2CppClass **)((long)pfVar12 + -8) = unaff_RBP;
  *(ulong *)((long)pfVar12 + -0x10) = uVar15;
  *(Il2CppClass **)((long)pfVar12 + -0x18) = unaff_RBX;
  if (g_data_057aedfa == '\0') {
    *(undefined8 *)((long)pfVar12 + -0x20) = 0x451b111;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedfa = '\x01';
  }
  (image_00->_1).byval_arg.data = method_00;
  *(undefined8 *)((long)pfVar12 + -0x20) = 0x451b128;
  pIVar13 = method_00;
  il2cpp_runtime_helper_022b4080(&(image_00->_1).byval_arg);
  if (cVar11 == '\0') {
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial
              ((Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *)image_00,(MethodInfo *)pIVar13);
    return;
  }
  *(undefined8 *)((long)pfVar12 + -0x20) = 0x451b135;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial
            ((Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *)image_00,(MethodInfo *)pIVar13);
  pUVar10 = *(UnityEngine_Object_o **)&(image_00->_1).byval_arg.bits;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)pfVar12 + -0x20) = 0x451b151;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)pfVar12 + -0x20) = 0x451b15d;
  bVar6 = UnityEngine_Object__op_Equality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(char *)&(image_00->_1).this_arg.bits == '\0') {
      if (method_00 == (Il2CppClass *)0x0) goto label_0451b1bf;
      pIVar2 = (method_00->_1).image;
      uVar9 = *(undefined8 *)(pIVar2 + 0x340);
      pcVar4 = *(code **)(pIVar2 + 0x338);
      *(undefined8 *)((long)pfVar12 + -0x20) = 0x451b18f;
      ppIVar8 = (Il2CppType **)(*pcVar4)(method_00,uVar9);
      (image_00->_1).this_arg.data = ppIVar8;
      *(undefined8 *)((long)pfVar12 + -0x20) = 0x451b19f;
      il2cpp_runtime_helper_022b4080(&(image_00->_1).this_arg,ppIVar8);
    }
    else if (method_00 == (Il2CppClass *)0x0) {
label_0451b1bf:
      *(undefined8 *)((long)pfVar12 + -0x20) = 0x451b1c4;
      uVar9 = il2cpp_runtime_helper_022b2c90();
      *(Il2CppClass **)((long)pfVar12 + -0x20) = method_00;
      *(Il2CppClass **)((long)pfVar12 + -0x28) = image_00;
      *(undefined8 *)((long)pfVar12 + -0x30) = uVar9;
      if (g_data_057aedfc == '\0') {
        *(undefined8 *)((long)pfVar12 + -0x38) = 0x451b1ec;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aedfc = '\x01';
      }
      x = pUVar10[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)pfVar12 + -0x38) = 0x451b20f;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)pfVar12 + -0x38) = 0x451b21b;
      bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar6 != '\0') && (*(char *)&pUVar10[2].monitor != '\0')) {
        plVar14 = pUVar10[1].monitor;
        if (plVar14 == (long *)0x0) {
          *(undefined8 *)((long)pfVar12 + -0x38) = 0x451b266;
          uVar9 = il2cpp_runtime_helper_022b2c90();
          *(undefined8 **)((long)pfVar12 + -0x38) = puVar16;
          *(UnityEngine_Object_o **)((long)pfVar12 + -0x40) = x;
          *(undefined8 *)((long)pfVar12 + -0x48) = unaff_R12;
          *(UnityEngine_Object_o **)((long)pfVar12 + -0x50) = pUVar10;
          *(undefined8 *)((long)pfVar12 + -0x58) = uVar9;
          if (g_data_057aedfb == '\0') {
            *(undefined8 *)((long)pfVar12 + -0x60) = 0x451b290;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
            *(undefined8 *)((long)pfVar12 + -0x60) = 0x451b29c;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            *(undefined8 *)((long)pfVar12 + -0x60) = 0x451b2a8;
            il2cpp_runtime_helper_023445d0(&"UI/AoTTG Guild Image Shimmer");
            g_data_057aedfb = '\x01';
          }
          pUVar10 = (UnityEngine_Object_o *)plVar14[5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)pfVar12 + -0x60) = 0x451b2cc;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)pfVar12 + -0x60) = 0x451b2d8;
          bVar6 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            *(undefined8 *)((long)pfVar12 + -0x60) = 0x451b2ed;
            pUVar10 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("UI/AoTTG Guild Image Shimmer",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)pfVar12 + -0x60) = 0x451b302;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)pfVar12 + -0x60) = 0x451b30e;
            bVar6 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              *(undefined8 *)((long)pfVar12 + -0x60) = 0x451b325;
              __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
              *(undefined8 *)((long)pfVar12 + -0x60) = 0x451b335;
              UnityEngine_Material___ctor(__this_00,(UnityEngine_Shader_o *)pUVar10,(MethodInfo *)0x0);
              plVar14[5] = (long)__this_00;
              il2cpp_runtime_helper_022b4080(plVar14 + 5,__this_00);
              return;
            }
          }
          return;
        }
        pUVar3 = pUVar10[2].klass;
        uVar9 = *(undefined8 *)(*plVar14 + 0x350);
        pcVar4 = *(code **)(*plVar14 + 0x348);
        *(undefined8 *)((long)pfVar12 + -0x38) = 0x451b242;
        (*pcVar4)(plVar14,pUVar3,uVar9);
      }
      pUVar10[2].klass = (UnityEngine_Object_c *)0x0;
      *(undefined8 *)((long)pfVar12 + -0x38) = 0x451b255;
      il2cpp_runtime_helper_022b4080(pUVar10 + 2,0);
      *(undefined1 *)&pUVar10[2].monitor = 0;
      return;
    }
    pIVar1 = *(Il2CppType **)&(image_00->_1).byval_arg.bits;
    pIVar2 = (method_00->_1).image;
    uVar9 = *(undefined8 *)(pIVar2 + 0x350);
    pcVar4 = *(code **)(pIVar2 + 0x348);
    *(undefined8 *)((long)pfVar12 + -0x20) = 0x451b1b6;
    (*pcVar4)(method_00,pIVar1,uVar9);
    *(undefined1 *)&(image_00->_1).this_arg.bits = 1;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Scale
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Scale (UnityEngine_UI_Image_o* image, float scale, const MethodInfo* method);
// 0x451b0c0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Scale
               (UnityEngine_UI_Image_o *image,float scale,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this;
  undefined8 uVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Material_o *__this_00;
  char extraout_DL;
  MethodInfo *method_00;
  long *plVar4;
  
  __this = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,method);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(__this,scale,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedfa = '\x01';
  }
  (image->fields).m_Material = (UnityEngine_Material_o *)method;
  method_00 = method;
  il2cpp_runtime_helper_022b4080(&(image->fields).m_Material);
  if (extraout_DL == '\0') {
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial
              ((Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *)image,method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial
            ((Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *)image,method_00);
  pUVar3 = *(UnityEngine_Object_o **)&(image->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if ((char)(image->fields).m_SkipLayoutUpdate == '\0') {
      if (method == (MethodInfo *)0x0) goto label_0451b1bf;
      uVar2 = (**(code **)(method->methodPointer + 0x338))
                        (method,*(undefined8 *)(method->methodPointer + 0x340));
      (image->fields).m_Color.fields.b = (float)(int)uVar2;
      (image->fields).m_Color.fields.a = (float)(int)((ulong)uVar2 >> 0x20);
      il2cpp_runtime_helper_022b4080(&(image->fields).m_Color.fields.b,uVar2);
    }
    else if (method == (MethodInfo *)0x0) {
label_0451b1bf:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aedfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aedfc = '\x01';
      }
      x = pUVar3[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar1 != '\0') && (*(char *)&pUVar3[2].monitor != '\0')) {
        plVar4 = pUVar3[1].monitor;
        if (plVar4 == (long *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aedfb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&"UI/AoTTG Guild Image Shimmer");
            g_data_057aedfb = '\x01';
          }
          pUVar3 = (UnityEngine_Object_o *)plVar4[5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            pUVar3 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("UI/AoTTG Guild Image Shimmer",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
              UnityEngine_Material___ctor(__this_00,(UnityEngine_Shader_o *)pUVar3,(MethodInfo *)0x0);
              plVar4[5] = (long)__this_00;
              il2cpp_runtime_helper_022b4080(plVar4 + 5,__this_00);
              return;
            }
          }
          return;
        }
        (**(code **)(*plVar4 + 0x348))(plVar4,pUVar3[2].klass,*(undefined8 *)(*plVar4 + 0x350));
      }
      pUVar3[2].klass = (UnityEngine_Object_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar3 + 2,0);
      *(undefined1 *)&pUVar3[2].monitor = 0;
      return;
    }
    uVar2._0_4_ = (image->fields).m_Color.fields.r;
    uVar2._4_4_ = (image->fields).m_Color.fields.g;
    (**(code **)(method->methodPointer + 0x348))(method,uVar2,*(undefined8 *)(method->methodPointer + 0x350));
    *(undefined1 *)&(image->fields).m_SkipLayoutUpdate = 1;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Runtime
// il2cpp: Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime (UnityEngine_UI_Image_o* image, const MethodInfo* method);
// 0x451b400

Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(UnityEngine_UI_Image_o *image,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o **ppUVar1;
  int iVar2;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar3;
  UnityEngine_UI_Image_o *x;
  UnityEngine_GameObject_o *__this;
  UnityEngine_UI_Image_o *x_00;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  undefined4 extraout_var;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *extraout_RAX;
  undefined8 extraout_RDX;
  long *__this_03;
  long *__this_04;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  
  __this_03 = (long *)image;
  if (g_data_057aedfe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgGuildPresetImageLayout_GetComponent_AottgGuildPrese);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgGuildPresetImageLayout_AddComponent_AottgGuildPrese);
    __this_03 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057aedfe = '\x01';
  }
  if (image != (UnityEngine_UI_Image_o *)0x0) {
    x = (UnityEngine_UI_Image_o *)
        UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)image,MethodInfo_AottgGuildPresetImageLayout_GetComponent_AottgGuildPrese);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = (long *)x;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (x != (UnityEngine_UI_Image_o *)0x0) {
        pUVar4 = (UnityEngine_UI_LayoutElement_o *)(x->fields).m_Material;
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
joined_r0x0451b586:
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          ppUVar1 = (UnityEngine_UI_LayoutElement_o **)&(x->fields).m_Material;
          pUVar4 = (UnityEngine_UI_LayoutElement_o *)
                   UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)image,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          *ppUVar1 = pUVar4;
          il2cpp_runtime_helper_022b4080(ppUVar1,pUVar4);
        }
        return (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)x;
      }
    }
    else {
      __this_03 = (long *)image;
      __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        x = (UnityEngine_UI_Image_o *)UnityEngine_GameObject__AddComponent_object_(__this,MethodInfo_AottgGuildPresetImageLayout_AddComponent_AottgGuildPrese);
        x_00 = (UnityEngine_UI_Image_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)image,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_03 = (long *)x_00;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          __this_03 = (long *)image;
          __this_00 = (UnityEngine_UI_Image_o *)
                      UnityEngine_UI_Graphic__get_rectTransform
                                ((UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_UI_Image_o *)0x0) goto label_0451b63c;
          UVar7 = UnityEngine_RectTransform__get_rect
                            ((UnityEngine_RectTransform_o *)__this_00,(MethodInfo *)0x0);
          fVar6 = UVar7.fields.m_Width;
          __this_03 = (long *)__this_00;
        }
        else {
          if (x_00 == (UnityEngine_UI_Image_o *)0x0) goto label_0451b63c;
          __this_03 = (long *)x_00;
          fVar6 = (float)(*(x_00->klass->vtable)._35_get_mainTexture.methodPtr)();
        }
        if (x != (UnityEngine_UI_Image_o *)0x0) {
          (x->fields).m_Color.fields.r = fVar6;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_03 = (long *)x_00;
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            __this_03 = (long *)image;
            __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                                  ((UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto label_0451b63c;
            UVar7 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
            fVar6 = UVar7.fields.m_Height;
          }
          else {
            if (x_00 == (UnityEngine_UI_Image_o *)0x0) goto label_0451b63c;
            fVar6 = (float)(*(x_00->klass->vtable)._37_Rebuild.methodPtr)(x_00);
          }
          (x->fields).m_Color.fields.g = fVar6;
          pUVar4 = (UnityEngine_UI_LayoutElement_o *)(x->fields).m_Material;
          iVar2 = *(int *)(TypeInfo_Object + 0xe4);
          goto joined_r0x0451b586;
        }
      }
    }
  }
label_0451b63c:
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedff = '\x01';
  }
  __this_04 = __this_03;
  __this_02 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (g_data_057a6932 == '\0') {
    __this_04 = &TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
  }
  if (__this_02 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localScale
              (__this_02,
               (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
               (MethodInfo *)0x0);
    pUVar4 = (UnityEngine_UI_LayoutElement_o *)(((UnityEngine_UI_Image_o *)__this_03)->fields).m_Material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)CONCAT44(extraout_var,bVar3);
    }
    pUVar4 = (UnityEngine_UI_LayoutElement_o *)(((UnityEngine_UI_Image_o *)__this_03)->fields).m_Material;
    __this_04 = (long *)0x0;
    if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                ((ulong)(uint)((((UnityEngine_UI_Image_o *)__this_03)->fields).m_Color.fields.r * fVar6));
      pUVar4 = (UnityEngine_UI_LayoutElement_o *)(((UnityEngine_UI_Image_o *)__this_03)->fields).m_Material;
      __this_04 = (long *)0x0;
      if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        vtableDispatch = (pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr;
        pGVar5 = (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)
                 (*vtableDispatch)
                           ((ulong)(uint)(fVar6 * (((UnityEngine_UI_Image_o *)__this_03)->fields).m_Color.
                                                  fields.g),pUVar4,
                            (pUVar4->klass->vtable)._38_set_preferredHeight.method,extraout_RDX,
                            vtableDispatch);
        return pGVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_04,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$Apply
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* __this, float scale, const MethodInfo* method);
// 0x451b650

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this,float scale,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  UnityEngine_Transform_o *__this_00;
  undefined8 extraout_RDX;
  long *__this_01;
  
  if (g_data_057aedff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedff = '\x01';
  }
  __this_01 = (long *)__this;
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (g_data_057a6932 == '\0') {
    __this_01 = &TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6932 = '\x01';
  }
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localScale
              (__this_00,
               (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
               (MethodInfo *)0x0);
    pUVar1 = (__this->fields)._layout;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    pUVar1 = (__this->fields)._layout;
    __this_01 = (long *)0x0;
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._36_set_preferredWidth.methodPtr)
                ((ulong)(uint)((__this->fields)._baseWidth * scale));
      pUVar1 = (__this->fields)._layout;
      __this_01 = (long *)0x0;
      if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        vtableDispatch = (pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr;
        (*vtableDispatch)
                  ((ulong)(uint)(scale * (__this->fields)._baseHeight),pUVar1,
                   (pUVar1->klass->vtable)._38_set_preferredHeight.method,extraout_RDX,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageLayout$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o* __this, const MethodInfo* method);
// 0x451b760

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout___ctor
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


