// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetChoicePreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register (const MethodInfo* method);
// 0x4519c40

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  System_Action_GisketchChoiceOptionRenderContext__o *renderer;
  
  if (g_data_057aedee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchChoiceOptionRenderContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Render);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgGuildPresetChoicePreview);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionRenderer);
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-preset-preview");
    g_data_057aedee = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8);
    cVar1 = *(char *)(lVar3 + 0x10);
  }
  else {
    lVar3 = *(long *)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8);
    cVar1 = *(char *)(lVar3 + 0x10);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AottgGuildPresetChoicePreview + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8);
  }
  *(undefined1 *)(lVar3 + 0x10) = 1;
  renderer = (System_Action_GisketchChoiceOptionRenderContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchChoiceOptionRenderContext);
  System_Action_object____ctor();
  if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register("profile-character-guild-preset-preview",renderer,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$UseRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__UseRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x4516010

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__UseRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (g_data_057aedef == '\0') {
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-preset-preview");
    g_data_057aedef = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).choiceOptions = "profile-character-guild-preset-preview";
    il2cpp_runtime_helper_022b4080(&(node->fields).choiceOptions);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$Render
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Render (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x4519d50

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Render
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  int iVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_Threading_CancellationTokenSource_o *__this;
  UnityEngine_UI_RectMask2D_o *pUVar3;
  bool_conflict bVar4;
  uint uVar5;
  TMPro_TextMeshProUGUI_o *__this_00;
  TMPro_TextMeshProUGUI_o *pTVar6;
  TMPro_TextMeshProUGUI_o *__this_01;
  UnityEngine_Object_o *pUVar7;
  TMPro_TextMeshProUGUI_o *pTVar8;
  System_String_o *pSVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o *normal;
  MethodInfo *method_03;
  MethodInfo *method_04;
  TMPro_TextMeshProUGUI_o *__this_02;
  MethodInfo *in_R8;
  byte bVar10;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o GStack_c8;
  undefined8 uStack_a0;
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *pGStack_98;
  TMPro_TextMeshProUGUI_o *pTStack_90;
  undefined8 *puStack_88;
  System_String_o *pSStack_80;
  ulong uStack_78;
  TMPro_TextMeshProUGUI_o *pTStack_70;
  byte bStack_59;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o GStack_58;
  ulong uVar11;
  
  if (g_data_057aedf0 == '\0') {
    pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519d76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgGuildPresetChoicePreview);
    pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519d82;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgGuildPresetChoicePreviewRuntime_GetComponent_AottgG);
    pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519d8e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgGuildPresetChoicePreviewRuntime_AddComponent_AottgG);
    pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519d9a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519da6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedf0 = '\x01';
  }
  if (context == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    return;
  }
  pTVar8 = (context->fields).Label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519dd3;
    il2cpp_runtime_helper_02337ed0();
  }
  method_04 = (MethodInfo *)0x0;
  pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519ddf;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)((long)&(TypeInfo_AottgGuildPresetChoicePreview->fields).m_Corners + 4) == 0) {
    pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519dff;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519e07;
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface(context,method_04);
  GStack_58.fields.Kind = 0;
  GStack_58.fields._20_4_ = 0;
  GStack_58.fields.Sprite = (System_String_o *)0x0;
  GStack_58.fields.Id = (System_String_o *)0x0;
  GStack_58.fields.Label = (System_String_o *)0x0;
  GStack_58.fields.ImageScale = 0.0;
  GStack_58.fields._36_4_ = 0;
  pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519e2b;
  uVar5 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet((context->fields).Value,&GStack_58,method_00)
  ;
  uVar11 = (ulong)uVar5;
  bStack_59 = GStack_58.fields.Kind == 1;
  GStack_58.fields.Kind = 0;
  GStack_58.fields._20_4_ = 0;
  GStack_58.fields.Sprite = (System_String_o *)0x0;
  GStack_58.fields.Id = (System_String_o *)0x0;
  GStack_58.fields.Label = (System_String_o *)0x0;
  GStack_58.fields.ImageScale = 0.0;
  GStack_58.fields._36_4_ = 0;
  pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519e5c;
  bVar4 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet((context->fields).Value,&GStack_58,method_01)
  ;
  if ((char)bVar4 == '\0') {
    pSVar9 = (context->fields).Text;
label_04519ea7:
    pTVar8 = (TMPro_TextMeshProUGUI_o *)(context->fields).Root;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pSVar9 = (context->fields).Value;
    GStack_58.fields.Kind = 0;
    GStack_58.fields._20_4_ = 0;
    GStack_58.fields.Sprite = (System_String_o *)0x0;
    GStack_58.fields.Id = (System_String_o *)0x0;
    GStack_58.fields.Label = (System_String_o *)0x0;
    GStack_58.fields.ImageScale = 0.0;
    GStack_58.fields._36_4_ = 0;
    pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519e87;
    bVar4 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(pSVar9,&GStack_58,method_02);
    if ((char)bVar4 == '\0') goto label_04519ea7;
    pTVar8 = (TMPro_TextMeshProUGUI_o *)(context->fields).Root;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
    pSVar9 = GStack_58.fields.Label;
  }
  if (iVar1 == 0) {
    pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519ebd;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (TMPro_TextMeshProUGUI_o *)0x0;
  pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519ecc;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_04519eef:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519f01;
      il2cpp_runtime_helper_02337ed0();
    }
    pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519f0d;
    __this_02 = __this_00;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      bVar10 = (byte)uVar5 & bStack_59;
      uVar11 = (ulong)CONCAT31((int3)(uVar5 >> 8),bVar10);
      normal = pSVar9;
      if (bVar10 != 0) {
        normal = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      if (__this_00 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_04519fe0;
      in_R8 = (MethodInfo *)0x0;
      pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519f4e;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
                ((Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)__this_00,normal,normal,
                 (uint)(byte)(context->fields).Enabled,(MethodInfo *)0x0);
    }
    pTVar6 = (context->fields).Label;
    __this_02 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519f6a;
      pTVar6 = (TMPro_TextMeshProUGUI_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pTVar6,MethodInfo_AottgGuildPresetChoicePreviewRuntime_GetComponent_AottgG);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519f7f;
        il2cpp_runtime_helper_02337ed0();
      }
      pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519f8b;
      __this_01 = pTVar6;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
label_04519fb9:
        pTVar8 = (TMPro_TextMeshProUGUI_o *)0x0;
        __this_02 = __this_01;
        if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519fd1;
          Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__Configure
                    ((Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *)pTVar6,
                     (context->fields).Value,pSVar9,(uint)(byte)(context->fields).Enabled,in_R8);
          return;
        }
      }
      else {
        __this_02 = (context->fields).Label;
        pTVar8 = pTVar6;
        if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519f9f;
          __this_01 = (TMPro_TextMeshProUGUI_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if (__this_01 != (TMPro_TextMeshProUGUI_o *)0x0) {
            pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519fb6;
            pTVar6 = (TMPro_TextMeshProUGUI_o *)
                     UnityEngine_GameObject__AddComponent_object_
                               ((UnityEngine_GameObject_o *)__this_01,MethodInfo_AottgGuildPresetChoicePreviewRuntime_AddComponent_AottgG);
            goto label_04519fb9;
          }
        }
      }
    }
  }
  else {
    pUVar2 = (context->fields).Root;
    __this_02 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519eec;
      __this_00 = (TMPro_TextMeshProUGUI_o *)UnityEngine_GameObject__GetComponent_object_(pUVar2,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo)
      ;
      goto label_04519eef;
    }
  }
label_04519fe0:
  pTStack_70 = (TMPro_TextMeshProUGUI_o *)0x4519fe5;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  puStack_88 = &TypeInfo_Object;
  pTVar6 = __this_02;
  pGStack_98 = context;
  pTStack_90 = __this_00;
  pSStack_80 = pSVar9;
  uStack_78 = uVar11;
  pTStack_70 = pTVar8;
  if (g_data_057aedf1 == '\0') {
    GStack_c8.fields.ImageScale = 2.4641334e-36;
    GStack_c8.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgGuildPresetChoicePreview);
    GStack_c8.fields.ImageScale = 2.4641356e-36;
    GStack_c8.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponentInParent_Image);
    GStack_c8.fields.ImageScale = 2.4641377e-36;
    GStack_c8.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    GStack_c8.fields.ImageScale = 2.4641399e-36;
    GStack_c8.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    GStack_c8.fields.ImageScale = 2.464142e-36;
    GStack_c8.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&"-popover");
    pTVar6 = (TMPro_TextMeshProUGUI_o *)&"-options-scroll";
    GStack_c8.fields.ImageScale = 2.4641442e-36;
    GStack_c8.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057aedf1 = '\x01';
  }
  if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
    if (*(char *)((long)&(__this_02->fields).m_SkipMaterialUpdate + 2) == '\0') {
      pUVar7 = (UnityEngine_Object_o *)(__this_02->fields).m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        GStack_c8.fields.ImageScale = 2.4641838e-36;
        GStack_c8.fields._36_4_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      pTVar8 = (TMPro_TextMeshProUGUI_o *)0x0;
      GStack_c8.fields.ImageScale = 2.4641865e-36;
      GStack_c8.fields._36_4_ = 0;
      bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pUVar2 = (UnityEngine_GameObject_o *)(__this_02->fields).m_CachedPtr;
        pTVar6 = (TMPro_TextMeshProUGUI_o *)0x0;
        if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_0451a296;
        GStack_c8.fields.ImageScale = 2.4641908e-36;
        GStack_c8.fields._36_4_ = 0;
        pTVar8 = (TMPro_TextMeshProUGUI_o *)UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      }
      iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      while( true ) {
        if (iVar1 == 0) {
          GStack_c8.fields.ImageScale = 2.4642045e-36;
          GStack_c8.fields._36_4_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        GStack_c8.fields.ImageScale = 2.4642066e-36;
        GStack_c8.fields._36_4_ = 0;
        pTVar6 = pTVar8;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          return;
        }
        if (pTVar8 == (TMPro_TextMeshProUGUI_o *)0x0) break;
        GStack_c8.fields.ImageScale = 2.4642115e-36;
        GStack_c8.fields._36_4_ = 0;
        pTVar6 = pTVar8;
        pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pTVar8,(MethodInfo *)0x0);
        if (pSVar9 == (System_String_o *)0x0) break;
        GStack_c8.fields.ImageScale = 2.4642154e-36;
        GStack_c8.fields._36_4_ = 0;
        bVar4 = System_String__EndsWith(pSVar9,"-popover",(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          GStack_c8.fields.ImageScale = 2.464218e-36;
          GStack_c8.fields._36_4_ = 0;
          pTVar6 = pTVar8;
          pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pTVar8,(MethodInfo *)0x0);
          if (pSVar9 == (System_String_o *)0x0) break;
          GStack_c8.fields.ImageScale = 2.4642231e-36;
          GStack_c8.fields._36_4_ = 0;
          bVar4 = System_String__EndsWith(pSVar9,"-options-scroll",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') goto label_0451a20f;
        }
        else {
label_0451a20f:
          GStack_c8.fields.ImageScale = 2.4642267e-36;
          GStack_c8.fields._36_4_ = 0;
          pUVar7 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pTVar8,MethodInfo_Image_GetComponent_Image)
          ;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            GStack_c8.fields.ImageScale = 2.4642305e-36;
            GStack_c8.fields._36_4_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          GStack_c8.fields.ImageScale = 2.4642326e-36;
          GStack_c8.fields._36_4_ = 0;
          bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)((long)&(TypeInfo_AottgGuildPresetChoicePreview->fields).m_Corners + 4) == 0) {
              GStack_c8.fields.ImageScale = 2.4642373e-36;
              GStack_c8.fields._36_4_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            pTVar6 = TypeInfo_AottgGuildPresetChoicePreview;
            if (pUVar7 == (UnityEngine_Object_o *)0x0) break;
            pUVar3 = (TypeInfo_AottgGuildPresetChoicePreview->fields).m_ParentMask;
            GStack_c8.fields.ImageScale = 2.4642452e-36;
            GStack_c8.fields._36_4_ = 0;
            (**(code **)&pUVar7->klass[1]._2.naturalAligment)((int)pUVar3->klass,pUVar3->monitor,pUVar7);
          }
        }
        GStack_c8.fields.ImageScale = 2.4642007e-36;
        GStack_c8.fields._36_4_ = 0;
        pTVar8 = (TMPro_TextMeshProUGUI_o *)
                 UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pTVar8,(MethodInfo *)0x0);
        iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      }
    }
    else {
      __this = (__this_02->fields).m_CancellationTokenSource;
      pTVar6 = (TMPro_TextMeshProUGUI_o *)0x0;
      if (__this != (System_Threading_CancellationTokenSource_o *)0x0) {
        GStack_c8.fields.ImageScale = 2.464154e-36;
        GStack_c8.fields._36_4_ = 0;
        pUVar7 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponentInParent_object_
                           ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponentInParent_Image);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          GStack_c8.fields.ImageScale = 2.464159e-36;
          GStack_c8.fields._36_4_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        GStack_c8.fields.ImageScale = 2.464161e-36;
        GStack_c8.fields._36_4_ = 0;
        bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          return;
        }
        if (*(int *)((long)&(TypeInfo_AottgGuildPresetChoicePreview->fields).m_Corners + 4) == 0) {
          GStack_c8.fields.ImageScale = 2.464167e-36;
          GStack_c8.fields._36_4_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        pTVar6 = TypeInfo_AottgGuildPresetChoicePreview;
        if (pUVar7 != (UnityEngine_Object_o *)0x0) {
          pUVar3 = (TypeInfo_AottgGuildPresetChoicePreview->fields).m_ParentMask;
          (**(code **)&pUVar7->klass[1]._2.naturalAligment)
                    ((int)pUVar3->klass,pUVar3->monitor,pUVar7,pUVar7->klass[1].vtable._0_Equals.methodPtr);
          return;
        }
      }
    }
  }
label_0451a296:
  GStack_c8.fields.ImageScale = 2.4642497e-36;
  GStack_c8.fields._36_4_ = 0;
  il2cpp_runtime_helper_022b2c90();
  GStack_c8.fields.Kind = 0;
  GStack_c8.fields._20_4_ = 0;
  GStack_c8.fields.Sprite = (System_String_o *)0x0;
  GStack_c8.fields.Id = (System_String_o *)0x0;
  GStack_c8.fields.Label = (System_String_o *)0x0;
  GStack_c8.fields.ImageScale = 0.0;
  GStack_c8.fields._36_4_ = 0;
  Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet((System_String_o *)pTVar6,&GStack_c8,method_03);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$ApplyDarkSurface
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x4519ff0

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  int iVar1;
  TMPro_TextMeshProUGUI_o *__this;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Object_o *pUVar3;
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *__this_01;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *id;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_60;
  
  id = context;
  if (g_data_057aedf1 == '\0') {
    local_60.fields.ImageScale = 2.4641334e-36;
    local_60.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgGuildPresetChoicePreview);
    local_60.fields.ImageScale = 2.4641356e-36;
    local_60.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponentInParent_Image);
    local_60.fields.ImageScale = 2.4641377e-36;
    local_60.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    local_60.fields.ImageScale = 2.4641399e-36;
    local_60.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    local_60.fields.ImageScale = 2.464142e-36;
    local_60.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&"-popover");
    id = (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)&"-options-scroll";
    local_60.fields.ImageScale = 2.4641442e-36;
    local_60.fields._36_4_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057aedf1 = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    if (*(char *)((long)&(context->fields).Enabled + 2) == '\0') {
      pUVar3 = (UnityEngine_Object_o *)(context->fields).Root;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        local_60.fields.ImageScale = 2.4641838e-36;
        local_60.fields._36_4_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0;
      local_60.fields.ImageScale = 2.4641865e-36;
      local_60.fields._36_4_ = 0;
      bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        __this_00 = (context->fields).Root;
        id = (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_0451a296;
        local_60.fields.ImageScale = 2.4641908e-36;
        local_60.fields._36_4_ = 0;
        __this_01 = (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)
                    UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      }
      iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      while( true ) {
        if (iVar1 == 0) {
          local_60.fields.ImageScale = 2.4642045e-36;
          local_60.fields._36_4_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        local_60.fields.ImageScale = 2.4642066e-36;
        local_60.fields._36_4_ = 0;
        id = __this_01;
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        if (__this_01 == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) break;
        local_60.fields.ImageScale = 2.4642115e-36;
        local_60.fields._36_4_ = 0;
        id = __this_01;
        pSVar4 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
        if (pSVar4 == (System_String_o *)0x0) break;
        local_60.fields.ImageScale = 2.4642154e-36;
        local_60.fields._36_4_ = 0;
        bVar2 = System_String__EndsWith(pSVar4,"-popover",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          local_60.fields.ImageScale = 2.464218e-36;
          local_60.fields._36_4_ = 0;
          id = __this_01;
          pSVar4 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
          if (pSVar4 == (System_String_o *)0x0) break;
          local_60.fields.ImageScale = 2.4642231e-36;
          local_60.fields._36_4_ = 0;
          bVar2 = System_String__EndsWith(pSVar4,"-options-scroll",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') goto label_0451a20f;
        }
        else {
label_0451a20f:
          local_60.fields.ImageScale = 2.4642267e-36;
          local_60.fields._36_4_ = 0;
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_01,MethodInfo_Image_GetComponent_Image);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            local_60.fields.ImageScale = 2.4642305e-36;
            local_60.fields._36_4_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          local_60.fields.ImageScale = 2.4642326e-36;
          local_60.fields._36_4_ = 0;
          bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)((long)&TypeInfo_AottgGuildPresetChoicePreview[3].monitor + 4) == 0) {
              local_60.fields.ImageScale = 2.4642373e-36;
              local_60.fields._36_4_ = 0;
              il2cpp_runtime_helper_02337ed0();
            }
            id = TypeInfo_AottgGuildPresetChoicePreview;
            if (pUVar3 == (UnityEngine_Object_o *)0x0) break;
            pSVar4 = TypeInfo_AottgGuildPresetChoicePreview[2].fields.Text;
            local_60.fields.ImageScale = 2.4642452e-36;
            local_60.fields._36_4_ = 0;
            (**(code **)&pUVar3->klass[1]._2.naturalAligment)((int)pSVar4->klass,pSVar4->monitor,pUVar3);
          }
        }
        local_60.fields.ImageScale = 2.4642007e-36;
        local_60.fields._36_4_ = 0;
        __this_01 = (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)
                    UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
        iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      }
    }
    else {
      __this = (context->fields).Label;
      id = (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0;
      if (__this != (TMPro_TextMeshProUGUI_o *)0x0) {
        local_60.fields.ImageScale = 2.464154e-36;
        local_60.fields._36_4_ = 0;
        pUVar3 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponentInParent_object_
                           ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponentInParent_Image);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          local_60.fields.ImageScale = 2.464159e-36;
          local_60.fields._36_4_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        local_60.fields.ImageScale = 2.464161e-36;
        local_60.fields._36_4_ = 0;
        bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        if (*(int *)((long)&TypeInfo_AottgGuildPresetChoicePreview[3].monitor + 4) == 0) {
          local_60.fields.ImageScale = 2.464167e-36;
          local_60.fields._36_4_ = 0;
          il2cpp_runtime_helper_02337ed0();
        }
        id = TypeInfo_AottgGuildPresetChoicePreview;
        if (pUVar3 != (UnityEngine_Object_o *)0x0) {
          pSVar4 = TypeInfo_AottgGuildPresetChoicePreview[2].fields.Text;
          (**(code **)&pUVar3->klass[1]._2.naturalAligment)
                    ((int)pSVar4->klass,pSVar4->monitor,pUVar3,pUVar3->klass[1].vtable._0_Equals.methodPtr);
          return;
        }
      }
    }
  }
label_0451a296:
  local_60.fields.ImageScale = 2.4642497e-36;
  local_60.fields._36_4_ = 0;
  il2cpp_runtime_helper_022b2c90();
  local_60.fields.Kind = 0;
  local_60.fields._20_4_ = 0;
  local_60.fields.Sprite = (System_String_o *)0x0;
  local_60.fields.Id = (System_String_o *)0x0;
  local_60.fields.Label = (System_String_o *)0x0;
  local_60.fields.ImageScale = 0.0;
  local_60.fields._36_4_ = 0;
  Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet((System_String_o *)id,&local_60,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview___cctor (const MethodInfo* method);
// 0x451a580

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview___cctor(MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (g_data_057aedf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgGuildPresetChoicePreview);
    g_data_057aedf2 = '\x01';
  }
  puVar1 = *(undefined8 **)(TypeInfo_AottgGuildPresetChoicePreview + 0xb8);
  *puVar1 = 0x3e0f5c293e0f5c29;
  puVar1[1] = 0x3f8000003e0f5c29;
  return;
}


