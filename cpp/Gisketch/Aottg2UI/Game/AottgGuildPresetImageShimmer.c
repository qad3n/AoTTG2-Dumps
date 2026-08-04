// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetImageShimmer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$SetEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled (UnityEngine_UI_Image_o* image, bool enabled, const MethodInfo* method);
// 0x451afc0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled
               (UnityEngine_UI_Image_o *image,bool_conflict enabled,MethodInfo *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *pUVar3;
  code *pcVar4;
  UnityEngine_UI_Image_o *pUVar5;
  bool_conflict bVar6;
  UnityEngine_UI_Image_o *image_00;
  UnityEngine_UI_Image_o *__this;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this_00;
  undefined8 uVar7;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_Material_o *__this_01;
  char cVar9;
  char extraout_DL;
  UnityEngine_UI_Image_o *unaff_RBX;
  UnityEngine_UI_Image_o *unaff_RBP;
  UnityEngine_UI_Image_o *method_00;
  UnityEngine_UI_Image_o *pUVar10;
  long *plVar11;
  undefined8 unaff_R12;
  ulong unaff_R14;
  ulong uVar12;
  long *unaff_R15;
  long *plVar13;
  float extraout_XMM0_Da;
  undefined8 uStack_30;
  
  uVar12 = (ulong)(uint)enabled;
  if (g_data_057aedf9 == '\0') {
    uStack_30 = 0x451afe2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgGuildPresetImageShimmer_GetComponent_AottgGuildPres);
    uStack_30 = 0x451afee;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgGuildPresetImageShimmer_AddComponent_AottgGuildPres);
    uStack_30 = 0x451affa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedf9 = '\x01';
  }
  plVar13 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_30 = 0x451b019;
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (UnityEngine_UI_Image_o *)0x0;
  uStack_30 = 0x451b025;
  pUVar10 = image;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pUVar5 = unaff_RBP;
  if (image == (UnityEngine_UI_Image_o *)0x0) {
label_0451b0ae:
    image_00 = pUVar10;
    unaff_RBP = pUVar5;
    uStack_30 = 0x451b0b3;
    uStack_30._0_4_ = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&uStack_30;
    uStack_30._4_4_ = extraout_XMM0_Da;
    __this_00 = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image_00,(MethodInfo *)method_00);
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply
                (__this_00,uStack_30._4_4_,(MethodInfo *)method_00);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = image;
    cVar9 = extraout_DL;
  }
  else {
    uStack_30 = 0x451b04b;
    image_00 = (UnityEngine_UI_Image_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)image,MethodInfo_AottgGuildPresetImageShimmer_GetComponent_AottgGuildPres);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_30 = 0x451b05f;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (UnityEngine_UI_Image_o *)0x0;
    uStack_30._0_4_ = 0x451b06b;
    uStack_30._4_4_ = 0.0;
    __this = image_00;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)image_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      method_00 = (UnityEngine_UI_Image_o *)0x0;
      uStack_30 = 0x451b079;
      pUVar10 = image;
      __this = (UnityEngine_UI_Image_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
      pUVar5 = image_00;
      if (__this == (UnityEngine_UI_Image_o *)0x0) goto label_0451b0ae;
      uStack_30._0_4_ = 0x451b090;
      uStack_30._4_4_ = 0.0;
      method_00 = MethodInfo_AottgGuildPresetImageShimmer_AddComponent_AottgGuildPres;
      image_00 = (UnityEngine_UI_Image_o *)
                 UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)__this,(MethodInfo_255A020 *)MethodInfo_AottgGuildPresetImageShimmer_AddComponent_AottgGuildPres);
    }
    pUVar5 = (UnityEngine_UI_Image_o *)0x0;
    pUVar10 = __this;
    if (image_00 == (UnityEngine_UI_Image_o *)0x0) goto label_0451b0ae;
    cVar9 = (char)enabled;
    method_00 = image;
    uVar12 = unaff_R14;
    plVar13 = unaff_R15;
  }
  *(UnityEngine_UI_Image_o **)((long)register0x00000020 + -8) = unaff_RBP;
  *(ulong *)((long)register0x00000020 + -0x10) = uVar12;
  *(UnityEngine_UI_Image_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057aedfa == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x451b111;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedfa = '\x01';
  }
  (image_00->fields).m_Material = (UnityEngine_Material_o *)method_00;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x451b128;
  pUVar10 = method_00;
  il2cpp_runtime_helper_022b4080(&(image_00->fields).m_Material);
  if (cVar9 == '\0') {
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial
              ((Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *)image_00,(MethodInfo *)pUVar10);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x451b135;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial
            ((Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *)image_00,(MethodInfo *)pUVar10);
  pUVar8 = *(UnityEngine_Object_o **)&(image_00->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x451b151;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x451b15d;
  bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if ((char)(image_00->fields).m_SkipLayoutUpdate == '\0') {
      if (method_00 == (UnityEngine_UI_Image_o *)0x0) goto label_0451b1bf;
      pMVar1 = (method_00->klass->vtable)._32_get_material.method;
      pIVar2 = (method_00->klass->vtable)._32_get_material.methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x451b18f;
      uVar7 = (*pIVar2)(method_00,pMVar1);
      (image_00->fields).m_Color.fields.b = (float)(int)uVar7;
      (image_00->fields).m_Color.fields.a = (float)(int)((ulong)uVar7 >> 0x20);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x451b19f;
      il2cpp_runtime_helper_022b4080(&(image_00->fields).m_Color.fields.b,uVar7);
    }
    else if (method_00 == (UnityEngine_UI_Image_o *)0x0) {
label_0451b1bf:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x451b1c4;
      uVar7 = il2cpp_runtime_helper_022b2c90();
      *(UnityEngine_UI_Image_o **)((long)register0x00000020 + -0x20) = method_00;
      *(UnityEngine_UI_Image_o **)((long)register0x00000020 + -0x28) = image_00;
      *(undefined8 *)((long)register0x00000020 + -0x30) = uVar7;
      if (g_data_057aedfc == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x451b1ec;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aedfc = '\x01';
      }
      x = pUVar8[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x451b20f;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x451b21b;
      bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar6 != '\0') && (*(char *)&pUVar8[2].monitor != '\0')) {
        plVar11 = pUVar8[1].monitor;
        if (plVar11 == (long *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x451b266;
          uVar7 = il2cpp_runtime_helper_022b2c90();
          *(long **)((long)register0x00000020 + -0x38) = plVar13;
          *(UnityEngine_Object_o **)((long)register0x00000020 + -0x40) = x;
          *(undefined8 *)((long)register0x00000020 + -0x48) = unaff_R12;
          *(UnityEngine_Object_o **)((long)register0x00000020 + -0x50) = pUVar8;
          *(undefined8 *)((long)register0x00000020 + -0x58) = uVar7;
          if (g_data_057aedfb == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451b290;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451b29c;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451b2a8;
            il2cpp_runtime_helper_023445d0(&"UI/AoTTG Guild Image Shimmer");
            g_data_057aedfb = '\x01';
          }
          pUVar8 = (UnityEngine_Object_o *)plVar11[5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451b2cc;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451b2d8;
          bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451b2ed;
            pUVar8 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("UI/AoTTG Guild Image Shimmer",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451b302;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451b30e;
            bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451b325;
              __this_01 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x451b335;
              UnityEngine_Material___ctor(__this_01,(UnityEngine_Shader_o *)pUVar8,(MethodInfo *)0x0);
              plVar11[5] = (long)__this_01;
              il2cpp_runtime_helper_022b4080(plVar11 + 5,__this_01);
              return;
            }
          }
          return;
        }
        pUVar3 = pUVar8[2].klass;
        uVar7 = *(undefined8 *)(*plVar11 + 0x350);
        pcVar4 = *(code **)(*plVar11 + 0x348);
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x451b242;
        (*pcVar4)(plVar11,pUVar3,uVar7);
      }
      pUVar8[2].klass = (UnityEngine_Object_c *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x451b255;
      il2cpp_runtime_helper_022b4080(pUVar8 + 2,0);
      *(undefined1 *)&pUVar8[2].monitor = 0;
      return;
    }
    uVar7._0_4_ = (image_00->fields).m_Color.fields.r;
    uVar7._4_4_ = (image_00->fields).m_Color.fields.g;
    pMVar1 = (method_00->klass->vtable)._33_set_material.method;
    pIVar2 = (method_00->klass->vtable)._33_set_material.methodPtr;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x451b1b6;
    (*pIVar2)(method_00,uVar7,pMVar1);
    *(undefined1 *)&(image_00->fields).m_SkipLayoutUpdate = 1;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$Configure
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__Configure (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, UnityEngine_UI_Image_o* source, bool enabled, const MethodInfo* method);
// 0x451b0f0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__Configure
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,UnityEngine_UI_Image_o *source,
               bool_conflict enabled,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_UI_Image_o *method_00;
  long *plVar4;
  
  if (g_data_057aedfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedfa = '\x01';
  }
  (__this->fields)._source = source;
  method_00 = source;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._source);
  if ((char)enabled == '\0') {
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial(__this,(MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial(__this,(MethodInfo *)method_00);
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if ((char)(__this->fields)._enabled == '\0') {
      if (source == (UnityEngine_UI_Image_o *)0x0) goto label_0451b1bf;
      pUVar3 = (UnityEngine_Material_o *)
               (*(source->klass->vtable)._32_get_material.methodPtr)
                         (source,(source->klass->vtable)._32_get_material.method);
      (__this->fields)._originalMaterial = pUVar3;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._originalMaterial,pUVar3);
    }
    else if (source == (UnityEngine_UI_Image_o *)0x0) {
label_0451b1bf:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aedfc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057aedfc = '\x01';
      }
      x = pUVar2[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar1 != '\0') && (*(char *)&pUVar2[2].monitor != '\0')) {
        plVar4 = pUVar2[1].monitor;
        if (plVar4 == (long *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aedfb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&"UI/AoTTG Guild Image Shimmer");
            g_data_057aedfb = '\x01';
          }
          pUVar2 = (UnityEngine_Object_o *)plVar4[5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            pUVar2 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("UI/AoTTG Guild Image Shimmer",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              pUVar3 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
              UnityEngine_Material___ctor(pUVar3,(UnityEngine_Shader_o *)pUVar2,(MethodInfo *)0x0);
              plVar4[5] = (long)pUVar3;
              il2cpp_runtime_helper_022b4080(plVar4 + 5,pUVar3);
              return;
            }
          }
          return;
        }
        (**(code **)(*plVar4 + 0x348))(plVar4,pUVar2[2].klass,*(undefined8 *)(*plVar4 + 0x350));
      }
      pUVar2[2].klass = (UnityEngine_Object_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar2 + 2,0);
      *(undefined1 *)&pUVar2[2].monitor = 0;
      return;
    }
    (*(source->klass->vtable)._33_set_material.methodPtr)
              (source,(__this->fields)._material,(source->klass->vtable)._33_set_material.method);
    *(undefined1 *)&(__this->fields)._enabled = 1;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$EnsureMaterial
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x451b270

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Material_o **ppUVar3;
  
  if (g_data_057aedfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"UI/AoTTG Guild Image Shimmer");
    g_data_057aedfb = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pUVar2 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("UI/AoTTG Guild Image Shimmer",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      ppUVar3 = &(__this->fields)._material;
      __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
      UnityEngine_Material___ctor(__this_00,(UnityEngine_Shader_o *)pUVar2,(MethodInfo *)0x0);
      *ppUVar3 = __this_00;
      il2cpp_runtime_helper_022b4080(ppUVar3,__this_00);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$RestoreMaterial
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x451b1d0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Material_o *__this_00;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_Color_o *pUVar4;
  
  if (g_data_057aedfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedfc = '\x01';
  }
  pUVar3 = (__this->fields)._source;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') && ((char)(__this->fields)._enabled != '\0')) {
    pUVar3 = (__this->fields)._source;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aedfb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&"UI/AoTTG Guild Image Shimmer");
        g_data_057aedfb = '\x01';
      }
      pUVar2 = *(UnityEngine_Object_o **)&(pUVar3->fields).m_Color.fields;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pUVar2 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("UI/AoTTG Guild Image Shimmer",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          pUVar4 = &(pUVar3->fields).m_Color;
          __this_00 = (UnityEngine_Material_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
          UnityEngine_Material___ctor(__this_00,(UnityEngine_Shader_o *)pUVar2,(MethodInfo *)0x0);
          *(UnityEngine_Material_o **)&pUVar4->fields = __this_00;
          il2cpp_runtime_helper_022b4080(pUVar4,__this_00);
          return;
        }
      }
      return;
    }
    (*(pUVar3->klass->vtable)._33_set_material.methodPtr)
              (pUVar3,(__this->fields)._originalMaterial,(pUVar3->klass->vtable)._33_set_material.method);
  }
  (__this->fields)._originalMaterial = (UnityEngine_Material_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._originalMaterial,0);
  *(undefined1 *)&(__this->fields)._enabled = 0;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__OnDestroy (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x451b360

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057aedfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedfd = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial(__this,method);
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x451b3f0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer___ctor
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


