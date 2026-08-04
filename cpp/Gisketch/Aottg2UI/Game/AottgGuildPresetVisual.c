// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetVisual
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetVisual.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$IsPreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset (System_String_o* presetId, const MethodInfo* method);
// 0x451a2d0

bool_conflict
Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset(System_String_o *presetId,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RDX;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_28;
  
  local_28.fields.Kind = 0;
  local_28.fields._20_4_ = 0;
  local_28.fields.Sprite = (System_String_o *)0x0;
  local_28.fields.Id = (System_String_o *)0x0;
  local_28.fields.Label = (System_String_o *)0x0;
  local_28.fields.ImageScale = 0.0;
  local_28.fields._36_4_ = 0;
  bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&local_28,in_RDX);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$IsImagePreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsImagePreset (System_String_o* presetId, const MethodInfo* method);
// 0x451a2a0

bool_conflict
Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsImagePreset(System_String_o *presetId,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RDX;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o GStack_28;
  
  GStack_28.fields.Kind = 0;
  GStack_28.fields._20_4_ = 0;
  GStack_28.fields.Sprite = (System_String_o *)0x0;
  GStack_28.fields.Id = (System_String_o *)0x0;
  GStack_28.fields.Label = (System_String_o *)0x0;
  GStack_28.fields.ImageScale = 0.0;
  GStack_28.fields._36_4_ = 0;
  bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&GStack_28,in_RDX);
  return CONCAT31((int3)((uint)bVar1 >> 8),(byte)bVar1 & GStack_28.fields.Kind == 1);
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ApplyText
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText (TMPro_TMP_Text_o* label, PatreonEffects_NameEffectController_o** effect, System_String_o* presetId, System_String_o* fallback, UnityEngine_Color_o color, const MethodInfo* method);
// 0x451ace0

bool_conflict
Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
          (TMPro_TMP_Text_o *label,PatreonEffects_NameEffectController_o **effect,System_String_o *presetId,
          System_String_o *fallback,UnityEngine_Color_o color,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  TMPro_TMP_FontAsset_o *pTVar2;
  UnityEngine_GameObject_o *__this;
  PatreonEffects_NameEffectController_o *pPVar3;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_Color_o color_00;
  float local_68;
  float local_58;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_48;
  
  method_00 = (MethodInfo *)presetId;
  if (g_data_057aedf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"Aottg2");
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aedf5 = '\x01';
    method_00 = extraout_RDX;
  }
  local_48.fields.Kind = 0;
  local_48.fields._20_4_ = 0;
  local_48.fields.Sprite = (System_String_o *)0x0;
  local_48.fields.Id = (System_String_o *)0x0;
  local_48.fields.Label = (System_String_o *)0x0;
  local_48.fields.ImageScale = 0.0;
  local_48.fields._36_4_ = 0;
  Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect(label,effect,color,method_00);
  bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&local_48,method_01);
  if ((char)bVar1 == '\0') {
    if (fallback == (System_String_o *)0x0) {
      fallback = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (label == (TMPro_TMP_Text_o *)0x0) goto label_0451af33;
    (*(label->klass->vtable)._66_set_text.methodPtr)
              (label,fallback,(label->klass->vtable)._66_set_text.method);
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = 0;
    pTVar2 = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
    TMPro_TMP_Text__set_font(label,pTVar2,(MethodInfo *)0x0);
    local_68 = color.fields.r;
    local_58 = color.fields.b;
    (*(label->klass->vtable)._23_set_color.methodPtr)
              (local_68,local_58,label,(label->klass->vtable)._23_set_color.method);
  }
  else {
    if (local_48.fields.Kind == 1) {
      if (label == (TMPro_TMP_Text_o *)0x0) goto label_0451af33;
      (*(label->klass->vtable)._66_set_text.methodPtr)
                (label,**(undefined8 **)(g_data_057b9c00 + 0xb8),(label->klass->vtable)._66_set_text.method);
    }
    else {
      if (label == (TMPro_TMP_Text_o *)0x0) {
label_0451af33:
        il2cpp_runtime_helper_022b2c90();
        color_00.fields.b = 1.0;
        color_00.fields.a = 1.0;
        color_00.fields.r = 1.0;
        color_00.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  ((TMPro_TMP_Text_o *)(((TMPro_TMP_Text_o *)presetId)->fields).m_Material,
                   (PatreonEffects_NameEffectController_o **)
                   &(((TMPro_TMP_Text_o *)presetId)->fields).m_Color.fields.b,color_00,method_02);
        return extraout_EAX;
      }
      (*(label->klass->vtable)._66_set_text.methodPtr)
                (label,local_48.fields.Label,(label->klass->vtable)._66_set_text.method);
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pTVar2 = PatreonEffects_NameFontCatalog__Load("Aottg2",(MethodInfo *)0x0);
      TMPro_TMP_Text__set_font(label,pTVar2,(MethodInfo *)0x0);
      (*(label->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,label);
      __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label,(MethodInfo *)0x0);
      presetId = (System_String_o *)label;
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_0451af33;
      pPVar3 = (PatreonEffects_NameEffectController_o *)
               UnityEngine_GameObject__AddComponent_object_(__this,MethodInfo_NameEffectController_AddComponent_NameEffectController);
      *effect = pPVar3;
      il2cpp_runtime_helper_022b4080(effect);
      presetId = (System_String_o *)*effect;
      if ((TMPro_TMP_Text_o *)presetId == (TMPro_TMP_Text_o *)0x0) goto label_0451af33;
      PatreonEffects_NameEffectController__AutoConfigure
                ((PatreonEffects_NameEffectController_o *)presetId,(MethodInfo *)0x0);
      pPVar3 = *effect;
      settings = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__SupporterShimmer((MethodInfo *)presetId);
      if (pPVar3 == (PatreonEffects_NameEffectController_o *)0x0) goto label_0451af33;
      PatreonEffects_NameEffectController__Apply(pPVar3,settings,(MethodInfo *)0x0);
    }
    bVar1 = (bool_conflict)CONCAT71((int7)((ulong)effect >> 8),1);
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$EnsureImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage (UnityEngine_Transform_o* parent, UnityEngine_UI_Image_o** image, System_String_o* name, float height, const MethodInfo* method);
// 0x451a650

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage
          (UnityEngine_Transform_o *parent,UnityEngine_UI_Image_o **image,System_String_o *name,float height,
          MethodInfo *method)

{
  System_String_o *resourcePath;
  undefined4 in_EAX;
  bool_conflict bVar1;
  uint uVar2;
  uint uVar3;
  System_Type_array *components;
  System_Type_o *pSVar4;
  long lVar5;
  System_RuntimeTypeHandle_o handle;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *__this;
  UnityEngine_UI_Image_o *pUVar7;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *pGVar8;
  TMPro_TMP_Text_o *pTVar9;
  MethodInfo *method_00;
  TMPro_TMP_Text_o *__this_00;
  undefined4 extraout_var;
  TMPro_TMP_FontAsset_o *pTVar10;
  PatreonEffects_NameEffectController_o *pPVar11;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_UI_Image_o *extraout_RAX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  TMPro_TMP_Text_o *id;
  TMPro_TMP_Text_o *extraout_RDX_01;
  MethodInfo *method_03;
  MethodInfo *method_04;
  long *plVar12;
  UnityEngine_Object_o *pUVar13;
  MethodInfo *pMVar14;
  TMPro_TMP_Text_o *pTVar15;
  PatreonEffects_NameEffectController_o **effect;
  TMPro_TMP_Text_o *x;
  ulong uVar16;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o GStack_120;
  UnityEngine_Object_o *pUStack_f8;
  long *plStack_f0;
  TMPro_TMP_Text_o *pTStack_e8;
  MethodInfo *pMStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  long *plStack_b0;
  TMPro_TMP_Text_o *pTStack_a8;
  TMPro_TMP_Text_o *pTStack_a0;
  TMPro_TMP_Text_o *pTStack_98;
  float fStack_84;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o GStack_80;
  UnityEngine_Object_o *pUStack_58;
  UnityEngine_UI_Image_o **ppUStack_50;
  UnityEngine_Transform_o *pUStack_48;
  System_String_o *pSStack_40;
  undefined4 uStack_38;
  float local_34;
  
  _uStack_38 = CONCAT44(height,in_EAX);
  if (g_data_057aedf6 == '\0') {
    pSStack_40 = (System_String_o *)0x451a67f;
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    pSStack_40 = (System_String_o *)0x451a68b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pSStack_40 = (System_String_o *)0x451a697;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pSStack_40 = (System_String_o *)0x451a6a3;
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    pSStack_40 = (System_String_o *)0x451a6af;
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    pSStack_40 = (System_String_o *)0x451a6bb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_40 = (System_String_o *)0x451a6c7;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pSStack_40 = (System_String_o *)0x451a6d3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aedf6 = '\x01';
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)*image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_40 = (System_String_o *)0x451a6f6;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar14 = (MethodInfo *)0x0;
  pSStack_40 = (System_String_o *)0x451a702;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)handle.fields.value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 == '\0') {
label_0451a91a:
    pSStack_40 = (System_String_o *)0x451a923;
    pGVar8 = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(*image,pMVar14);
    if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
      (pGVar8->fields)._baseWidth = local_34 * 2.9;
      (pGVar8->fields)._baseHeight = local_34;
      pSStack_40 = (System_String_o *)0x451a954;
      Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(pGVar8,1.0,pMVar14);
      return *image;
    }
label_0451a967:
    pSStack_40 = (System_String_o *)0x451a96c;
    il2cpp_runtime_helper_022b2c90();
label_0451a96c:
    pSStack_40 = (System_String_o *)0x451a971;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    pSStack_40 = (System_String_o *)0x451a71e;
    components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      pSStack_40 = (System_String_o *)0x451a747;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_40 = (System_String_o *)0x451a751;
    pSVar4 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_0451a967;
    if (pSVar4 == (System_Type_o *)0x0) {
label_0451a77b:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar4;
        pSStack_40 = (System_String_o *)0x451a795;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        pSStack_40 = (System_String_o *)0x451a7a6;
        handle.fields.value =
             (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if (handle.fields.value != 0) {
          pSStack_40 = (System_String_o *)0x451a7be;
          lVar5 = il2cpp_runtime_helper_023051f0(handle.fields.value);
          if (lVar5 == 0) goto label_0451a971;
        }
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = (System_Type_o *)handle.fields.value;
          pSStack_40 = (System_String_o *)0x451a7e1;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1);
          pSStack_40 = (System_String_o *)0x451a7f2;
          handle.fields.value =
               (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0)
          ;
          if (handle.fields.value != 0) {
            pSStack_40 = (System_String_o *)0x451a80a;
            lVar5 = il2cpp_runtime_helper_023051f0(handle.fields.value);
            if (lVar5 == 0) goto label_0451a971;
          }
          if (2 < (uint)components->max_length) {
            components->m_Items[2] = (System_Type_o *)handle.fields.value;
            pSStack_40 = (System_String_o *)0x451a82d;
            il2cpp_runtime_helper_022b4080(components->m_Items + 2);
            pSStack_40 = (System_String_o *)0x451a83e;
            handle.fields.value =
                 (System_RuntimeTypeHandle_Fields)
                 System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
            if (handle.fields.value != 0) {
              pSStack_40 = (System_String_o *)0x451a856;
              lVar5 = il2cpp_runtime_helper_023051f0(handle.fields.value);
              if (lVar5 == 0) goto label_0451a971;
            }
            if (3 < (uint)components->max_length) {
              components->m_Items[3] = (System_Type_o *)handle.fields.value;
              pSStack_40 = (System_String_o *)0x451a87c;
              il2cpp_runtime_helper_022b4080(components->m_Items + 3,handle.fields.value);
              pSStack_40 = (System_String_o *)0x451a88b;
              pUVar6 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
              method = (MethodInfo *)0x0;
              pSStack_40 = (System_String_o *)0x451a89e;
              UnityEngine_GameObject___ctor_4dfc440(pUVar6,name,components,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                pSStack_40 = (System_String_o *)0x451a8b1;
                __this = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                if (__this != (UnityEngine_Transform_o *)0x0) {
                  method = (MethodInfo *)0x0;
                  pSStack_40 = (System_String_o *)0x451a8c9;
                  UnityEngine_Transform__SetParent_4e09e30(__this,parent,0,(MethodInfo *)0x0);
                  pSStack_40 = (System_String_o *)0x451a8db;
                  pUVar7 = (UnityEngine_UI_Image_o *)
                           UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_Image_GetComponent_Image);
                  *image = pUVar7;
                  pSStack_40 = (System_String_o *)0x451a8ea;
                  il2cpp_runtime_helper_022b4080(image);
                  pUVar7 = *image;
                  if (pUVar7 != (UnityEngine_UI_Image_o *)0x0) {
                    pSStack_40 = (System_String_o *)0x451a905;
                    (*(pUVar7->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pUVar7,0,(pUVar7->klass->vtable)._25_set_raycastTarget.method);
                    if (*image != (UnityEngine_UI_Image_o *)0x0) {
                      pMVar14 = (MethodInfo *)0x1;
                      pSStack_40 = (System_String_o *)0x451a91a;
                      UnityEngine_UI_Image__set_preserveAspect(*image,1,(MethodInfo *)0x0);
                      goto label_0451a91a;
                    }
                  }
                }
              }
              goto label_0451a967;
            }
          }
        }
      }
      goto label_0451a96c;
    }
    pSStack_40 = (System_String_o *)0x451a772;
    lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
    if (lVar5 != 0) goto label_0451a77b;
  }
label_0451a971:
  pSStack_40 = (System_String_o *)0x451a976;
  pTVar9 = (TMPro_TMP_Text_o *)il2cpp_runtime_helper_0231b270();
  pTVar15 = (TMPro_TMP_Text_o *)0x0;
  pSStack_40 = (System_String_o *)Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage;
  il2cpp_runtime_helper_022b2b10();
  pUStack_58 = (UnityEngine_Object_o *)handle.fields.value;
  ppUStack_50 = image;
  pUStack_48 = parent;
  pSStack_40 = name;
  if (g_data_057aedf7 == '\0') {
    pTStack_98 = (TMPro_TMP_Text_o *)0x451a9a6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    pTStack_98 = (TMPro_TMP_Text_o *)0x451a9b2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pTStack_98 = (TMPro_TMP_Text_o *)0x451a9be;
    il2cpp_runtime_helper_023445d0(&"aottg2_developer_team");
    g_data_057aedf7 = '\x01';
  }
  GStack_80.fields.Kind = 0;
  GStack_80.fields._20_4_ = 0;
  GStack_80.fields.Sprite = (System_String_o *)0x0;
  GStack_80.fields.Id = (System_String_o *)0x0;
  GStack_80.fields.Label = (System_String_o *)0x0;
  GStack_80.fields.ImageScale = 0.0;
  GStack_80.fields._36_4_ = 0;
  plVar12 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pTStack_98 = (TMPro_TMP_Text_o *)0x451a9f3;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_98 = (TMPro_TMP_Text_o *)0x451a9ff;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pTStack_98 = (TMPro_TMP_Text_o *)0x451aa14;
    bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet
                      ((System_String_o *)pTVar15,&GStack_80,method_01);
    resourcePath = GStack_80.fields.Sprite;
    if (((char)bVar1 == '\0') || (GStack_80.fields.Kind != 1)) goto label_0451ab51;
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      pTStack_98 = (TMPro_TMP_Text_o *)0x451aa44;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar14 = (MethodInfo *)0x0;
    pTStack_98 = (TMPro_TMP_Text_o *)0x451aa4e;
    x = (TMPro_TMP_Text_o *)resourcePath;
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(resourcePath,(MethodInfo *)0x0);
    pTVar15 = (TMPro_TMP_Text_o *)resourcePath;
    if (pTVar9 != (TMPro_TMP_Text_o *)0x0) {
      pTStack_98 = (TMPro_TMP_Text_o *)0x451aa64;
      UnityEngine_UI_Image__set_sprite
                ((UnityEngine_UI_Image_o *)pTVar9,(UnityEngine_Sprite_o *)method_00,(MethodInfo *)0x0);
      fStack_84 = GStack_80.fields.ImageScale;
      pTStack_98 = (TMPro_TMP_Text_o *)0x451aa78;
      x = pTVar9;
      pGVar8 = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime
                         ((UnityEngine_UI_Image_o *)pTVar9,method_00);
      pMVar14 = method_00;
      if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
        pTStack_98 = (TMPro_TMP_Text_o *)0x451aa8f;
        Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(pGVar8,fStack_84,method_00);
        pTStack_98 = (TMPro_TMP_Text_o *)0x451aa99;
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar9,(MethodInfo *)0x0);
        name = *(System_String_o **)&(pTVar9->fields).m_ShouldRecalculate;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pTStack_98 = (TMPro_TMP_Text_o *)0x451aab5;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar14 = (MethodInfo *)0x0;
        pTStack_98 = (TMPro_TMP_Text_o *)0x451aac1;
        x = (TMPro_TMP_Text_o *)name;
        uVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)name,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pTVar15 = (TMPro_TMP_Text_o *)0x0;
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          uVar3 = 0;
          pTStack_98 = (TMPro_TMP_Text_o *)0x451aada;
          UnityEngine_GameObject__SetActive(pUVar6,uVar2 & 0xff,(MethodInfo *)0x0);
          pTStack_98 = (TMPro_TMP_Text_o *)0x451aaf0;
          bVar1 = System_String__op_Equality(GStack_80.fields.Id,"aottg2_developer_team",(MethodInfo *)0x0);
          pMVar14 = extraout_RDX;
          if ((char)bVar1 != '\0') {
            pUVar13 = *(UnityEngine_Object_o **)&(pTVar9->fields).m_ShouldRecalculate;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pTStack_98 = (TMPro_TMP_Text_o *)0x451ab0d;
              il2cpp_runtime_helper_02337ed0();
            }
            pTStack_98 = (TMPro_TMP_Text_o *)0x451ab19;
            uVar3 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            pMVar14 = extraout_RDX_00;
          }
          pTStack_98 = (TMPro_TMP_Text_o *)0x451ab28;
          Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled
                    ((UnityEngine_UI_Image_o *)pTVar9,uVar3 & 0xff,pMVar14);
          pUVar13 = *(UnityEngine_Object_o **)&(pTVar9->fields).m_ShouldRecalculate;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pTStack_98 = (TMPro_TMP_Text_o *)0x451ab41;
            il2cpp_runtime_helper_02337ed0();
          }
          pTStack_98 = (TMPro_TMP_Text_o *)0x451ab4d;
          uVar2 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          return (UnityEngine_UI_Image_o *)(ulong)uVar2;
        }
      }
    }
  }
  else {
label_0451ab51:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pTStack_98 = (TMPro_TMP_Text_o *)0x451ab62;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar12 = (long *)0x0;
    pTStack_98 = (TMPro_TMP_Text_o *)0x451ab70;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return (UnityEngine_UI_Image_o *)0x0;
    }
    pMVar14 = (MethodInfo *)0x0;
    pTStack_98 = (TMPro_TMP_Text_o *)0x451ab7e;
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled
              ((UnityEngine_UI_Image_o *)pTVar9,0,method_02);
    pTStack_98 = (TMPro_TMP_Text_o *)0x451ab86;
    x = pTVar9;
    __this_00 = (TMPro_TMP_Text_o *)
                Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime
                          ((UnityEngine_UI_Image_o *)pTVar9,pMVar14);
    if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
      pTStack_98 = (TMPro_TMP_Text_o *)0x451ab9b;
      Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply
                ((Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)__this_00,1.0,pMVar14);
      x = __this_00;
      if (pTVar9 != (TMPro_TMP_Text_o *)0x0) {
        pMVar14 = (MethodInfo *)0x0;
        pTStack_98 = (TMPro_TMP_Text_o *)0x451abaa;
        x = pTVar9;
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar9,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pTStack_98 = (TMPro_TMP_Text_o *)0x451abbd;
          UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
          return (UnityEngine_UI_Image_o *)0x0;
        }
      }
    }
  }
  pTStack_98 = (TMPro_TMP_Text_o *)Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  uStack_c8 = in_XMM1_Da;
  plStack_b0 = plVar12;
  pTStack_a8 = pTVar9;
  pTStack_a0 = pTVar15;
  pTStack_98 = (TMPro_TMP_Text_o *)name;
  if (g_data_057aedf8 == '\0') {
    pMStack_e0 = (MethodInfo *)0x451abff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedf8 = '\x01';
  }
  pUVar13 = (UnityEngine_Object_o *)pMVar14->methodPointer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pMStack_e0 = (MethodInfo *)0x451ac22;
    il2cpp_runtime_helper_02337ed0();
  }
  effect = (PatreonEffects_NameEffectController_o **)0x0;
  pMStack_e0 = (MethodInfo *)0x451ac2e;
  bVar1 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
label_0451ac75:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pMStack_e0 = (MethodInfo *)0x451ac87;
      il2cpp_runtime_helper_02337ed0();
    }
    effect = (PatreonEffects_NameEffectController_o **)0x0;
    pMStack_e0 = (MethodInfo *)0x451ac93;
    pTVar15 = x;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return (UnityEngine_UI_Image_o *)CONCAT44(extraout_var,bVar1);
    }
    if (x != (TMPro_TMP_Text_o *)0x0) {
      pUVar7 = (UnityEngine_UI_Image_o *)
               (*(x->klass->vtable)._23_set_color.methodPtr)
                         ((undefined4)uStack_d8,uStack_c8,x,(x->klass->vtable)._23_set_color.method);
      return pUVar7;
    }
  }
  else {
    pTVar15 = (TMPro_TMP_Text_o *)0x0;
    if ((PatreonEffects_NameEffectController_o *)pMVar14->methodPointer !=
        (PatreonEffects_NameEffectController_o *)0x0) {
      pMStack_e0 = (MethodInfo *)0x451ac45;
      PatreonEffects_NameEffectController__Clear
                ((PatreonEffects_NameEffectController_o *)pMVar14->methodPointer,(MethodInfo *)0x0);
      pUVar13 = (UnityEngine_Object_o *)pMVar14->methodPointer;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_e0 = (MethodInfo *)0x451ac5a;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_e0 = (MethodInfo *)0x451ac64;
      UnityEngine_Object__Destroy_4e01c60(pUVar13,(MethodInfo *)0x0);
      pMVar14->methodPointer = (Il2CppMethodPointer)0x0;
      pMStack_e0 = (MethodInfo *)0x451ac75;
      il2cpp_runtime_helper_022b4080(pMVar14);
      goto label_0451ac75;
    }
  }
  pMStack_e0 = (MethodInfo *)0x451acd7;
  color.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  plStack_f0 = &TypeInfo_Object;
  pTVar9 = id;
  pUStack_f8 = pUVar13;
  pTStack_e8 = x;
  pMStack_e0 = pMVar14;
  if (g_data_057aedf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"Aottg2");
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aedf5 = '\x01';
    pTVar9 = extraout_RDX_01;
  }
  GStack_120.fields.Kind = 0;
  GStack_120.fields._20_4_ = 0;
  GStack_120.fields.Sprite = (System_String_o *)0x0;
  GStack_120.fields.Id = (System_String_o *)0x0;
  GStack_120.fields.Label = (System_String_o *)0x0;
  GStack_120.fields.ImageScale = 0.0;
  GStack_120.fields._36_4_ = 0;
  color.fields.a = (float)in_XMM1_Db;
  color.fields.b = (float)in_XMM1_Da;
  Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect(pTVar15,effect,color,(MethodInfo *)pTVar9);
  pTVar9 = id;
  bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet((System_String_o *)id,&GStack_120,method_03);
  if ((char)bVar1 == '\0') {
    if (method == (MethodInfo *)0x0) {
      method = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (pTVar15 == (TMPro_TMP_Text_o *)0x0) goto label_0451af33;
    (*(pTVar15->klass->vtable)._66_set_text.methodPtr)
              (pTVar15,method,(pTVar15->klass->vtable)._66_set_text.method);
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar16 = 0;
    pTVar10 = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
    TMPro_TMP_Text__set_font(pTVar15,pTVar10,(MethodInfo *)0x0);
    (*(pTVar15->klass->vtable)._23_set_color.methodPtr)
              ((int)color.fields._0_8_,in_XMM1_Da,pTVar15,(pTVar15->klass->vtable)._23_set_color.method);
  }
  else {
    if (GStack_120.fields.Kind == 1) {
      if (pTVar15 == (TMPro_TMP_Text_o *)0x0) goto label_0451af33;
      (*(pTVar15->klass->vtable)._66_set_text.methodPtr)
                (pTVar15,**(undefined8 **)(g_data_057b9c00 + 0xb8),(pTVar15->klass->vtable)._66_set_text.method);
    }
    else {
      if (pTVar15 == (TMPro_TMP_Text_o *)0x0) {
label_0451af33:
        il2cpp_runtime_helper_022b2c90();
        color_00.fields.b = 1.0;
        color_00.fields.a = 1.0;
        color_00.fields.r = 1.0;
        color_00.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  ((TMPro_TMP_Text_o *)(pTVar9->fields).m_Material,
                   (PatreonEffects_NameEffectController_o **)&(pTVar9->fields).m_Color.fields.b,color_00,
                   method_04);
        return extraout_RAX;
      }
      (*(pTVar15->klass->vtable)._66_set_text.methodPtr)
                (pTVar15,GStack_120.fields.Label,(pTVar15->klass->vtable)._66_set_text.method);
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pTVar10 = PatreonEffects_NameFontCatalog__Load("Aottg2",(MethodInfo *)0x0);
      TMPro_TMP_Text__set_font(pTVar15,pTVar10,(MethodInfo *)0x0);
      (*(pTVar15->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar15);
      pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar15,(MethodInfo *)0x0);
      pTVar9 = pTVar15;
      if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_0451af33;
      pPVar11 = (PatreonEffects_NameEffectController_o *)
                UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_NameEffectController_AddComponent_NameEffectController);
      *effect = pPVar11;
      il2cpp_runtime_helper_022b4080(effect);
      pTVar9 = (TMPro_TMP_Text_o *)*effect;
      if (pTVar9 == (TMPro_TMP_Text_o *)0x0) goto label_0451af33;
      PatreonEffects_NameEffectController__AutoConfigure
                ((PatreonEffects_NameEffectController_o *)pTVar9,(MethodInfo *)0x0);
      pPVar11 = *effect;
      settings = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__SupporterShimmer((MethodInfo *)pTVar9);
      if (pPVar11 == (PatreonEffects_NameEffectController_o *)0x0) goto label_0451af33;
      PatreonEffects_NameEffectController__Apply(pPVar11,settings,(MethodInfo *)0x0);
    }
    uVar16 = CONCAT71((int7)((ulong)effect >> 8),1);
  }
  return (UnityEngine_UI_Image_o *)(uVar16 & 0xffffffff);
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ApplyImage
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage (UnityEngine_UI_Image_o* image, System_String_o* presetId, const MethodInfo* method);
// 0x451a980

bool_conflict
Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
          (UnityEngine_UI_Image_o *image,System_String_o *presetId,MethodInfo *method)

{
  System_String_o *resourcePath;
  bool_conflict bVar1;
  uint uVar2;
  uint uVar3;
  bool_conflict extraout_EAX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this;
  UnityEngine_GameObject_o *pUVar4;
  TMPro_TMP_Text_o *pTVar5;
  TMPro_TMP_FontAsset_o *pTVar6;
  PatreonEffects_NameEffectController_o *pPVar7;
  PatreonEffects_NameEffectSettings_o *settings;
  long in_RCX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  MethodInfo *method_02;
  TMPro_TMP_Text_o *id;
  TMPro_TMP_Text_o *extraout_RDX_01;
  TMPro_TMP_Text_o *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  long *plVar9;
  UnityEngine_Object_o *pUVar10;
  PatreonEffects_NameEffectController_o **effect;
  TMPro_TMP_Text_o *pTVar11;
  TMPro_TMP_Text_o *unaff_R15;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o GStack_e8;
  UnityEngine_Object_o *pUStack_c0;
  long *plStack_b8;
  TMPro_TMP_Text_o *pTStack_b0;
  MethodInfo *pMStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_90;
  long *plStack_78;
  UnityEngine_UI_Image_o *pUStack_70;
  TMPro_TMP_Text_o *pTStack_68;
  TMPro_TMP_Text_o *pTStack_60;
  float local_4c;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_48;
  
  if (g_data_057aedf7 == '\0') {
    pTStack_60 = (TMPro_TMP_Text_o *)0x451a9a6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    pTStack_60 = (TMPro_TMP_Text_o *)0x451a9b2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pTStack_60 = (TMPro_TMP_Text_o *)0x451a9be;
    il2cpp_runtime_helper_023445d0(&"aottg2_developer_team");
    g_data_057aedf7 = '\x01';
  }
  local_48.fields.Kind = 0;
  local_48.fields._20_4_ = 0;
  local_48.fields.Sprite = (System_String_o *)0x0;
  local_48.fields.Id = (System_String_o *)0x0;
  local_48.fields.Label = (System_String_o *)0x0;
  local_48.fields.ImageScale = 0.0;
  local_48.fields._36_4_ = 0;
  plVar9 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pTStack_60 = (TMPro_TMP_Text_o *)0x451a9f3;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_60 = (TMPro_TMP_Text_o *)0x451a9ff;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pTStack_60 = (TMPro_TMP_Text_o *)0x451aa14;
    bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&local_48,method_01);
    resourcePath = local_48.fields.Sprite;
    if (((char)bVar1 == '\0') || (local_48.fields.Kind != 1)) goto label_0451ab51;
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      pTStack_60 = (TMPro_TMP_Text_o *)0x451aa44;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = (MethodInfo *)0x0;
    pTStack_60 = (TMPro_TMP_Text_o *)0x451aa4e;
    pTVar11 = (TMPro_TMP_Text_o *)resourcePath;
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(resourcePath,(MethodInfo *)0x0);
    presetId = resourcePath;
    if (image != (UnityEngine_UI_Image_o *)0x0) {
      pTStack_60 = (TMPro_TMP_Text_o *)0x451aa64;
      UnityEngine_UI_Image__set_sprite(image,(UnityEngine_Sprite_o *)method_00,(MethodInfo *)0x0);
      local_4c = local_48.fields.ImageScale;
      pTStack_60 = (TMPro_TMP_Text_o *)0x451aa78;
      pTVar11 = (TMPro_TMP_Text_o *)image;
      __this = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,method_00);
      pMVar8 = method_00;
      if (__this != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
        pTStack_60 = (TMPro_TMP_Text_o *)0x451aa8f;
        Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(__this,local_4c,method_00);
        pTStack_60 = (TMPro_TMP_Text_o *)0x451aa99;
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
        unaff_R15 = *(TMPro_TMP_Text_o **)&(image->fields).m_ShouldRecalculate;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pTStack_60 = (TMPro_TMP_Text_o *)0x451aab5;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar8 = (MethodInfo *)0x0;
        pTStack_60 = (TMPro_TMP_Text_o *)0x451aac1;
        pTVar11 = unaff_R15;
        uVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        presetId = (System_String_o *)0x0;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          uVar3 = 0;
          pTStack_60 = (TMPro_TMP_Text_o *)0x451aada;
          UnityEngine_GameObject__SetActive(pUVar4,uVar2 & 0xff,(MethodInfo *)0x0);
          pTStack_60 = (TMPro_TMP_Text_o *)0x451aaf0;
          bVar1 = System_String__op_Equality(local_48.fields.Id,"aottg2_developer_team",(MethodInfo *)0x0);
          pMVar8 = extraout_RDX;
          if ((char)bVar1 != '\0') {
            pUVar10 = *(UnityEngine_Object_o **)&(image->fields).m_ShouldRecalculate;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pTStack_60 = (TMPro_TMP_Text_o *)0x451ab0d;
              il2cpp_runtime_helper_02337ed0();
            }
            pTStack_60 = (TMPro_TMP_Text_o *)0x451ab19;
            uVar3 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            pMVar8 = extraout_RDX_00;
          }
          pTStack_60 = (TMPro_TMP_Text_o *)0x451ab28;
          Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled(image,uVar3 & 0xff,pMVar8);
          pUVar10 = *(UnityEngine_Object_o **)&(image->fields).m_ShouldRecalculate;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pTStack_60 = (TMPro_TMP_Text_o *)0x451ab41;
            il2cpp_runtime_helper_02337ed0();
          }
          pTStack_60 = (TMPro_TMP_Text_o *)0x451ab4d;
          bVar1 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          return bVar1;
        }
      }
    }
  }
  else {
label_0451ab51:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pTStack_60 = (TMPro_TMP_Text_o *)0x451ab62;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar9 = (long *)0x0;
    pTStack_60 = (TMPro_TMP_Text_o *)0x451ab70;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return 0;
    }
    pMVar8 = (MethodInfo *)0x0;
    pTStack_60 = (TMPro_TMP_Text_o *)0x451ab7e;
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled(image,0,method_02);
    pTStack_60 = (TMPro_TMP_Text_o *)0x451ab86;
    pTVar11 = (TMPro_TMP_Text_o *)image;
    pTVar5 = (TMPro_TMP_Text_o *)Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,pMVar8);
    if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
      pTStack_60 = (TMPro_TMP_Text_o *)0x451ab9b;
      Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply
                ((Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)pTVar5,1.0,pMVar8);
      pTVar11 = pTVar5;
      if (image != (UnityEngine_UI_Image_o *)0x0) {
        pMVar8 = (MethodInfo *)0x0;
        pTStack_60 = (TMPro_TMP_Text_o *)0x451abaa;
        pTVar11 = (TMPro_TMP_Text_o *)image;
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          pTStack_60 = (TMPro_TMP_Text_o *)0x451abbd;
          UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
  }
  pTStack_60 = (TMPro_TMP_Text_o *)Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  uStack_90 = in_XMM1_Da;
  plStack_78 = plVar9;
  pUStack_70 = image;
  pTStack_68 = (TMPro_TMP_Text_o *)presetId;
  pTStack_60 = unaff_R15;
  if (g_data_057aedf8 == '\0') {
    pMStack_a8 = (MethodInfo *)0x451abff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedf8 = '\x01';
  }
  pUVar10 = (UnityEngine_Object_o *)pMVar8->methodPointer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pMStack_a8 = (MethodInfo *)0x451ac22;
    il2cpp_runtime_helper_02337ed0();
  }
  effect = (PatreonEffects_NameEffectController_o **)0x0;
  pMStack_a8 = (MethodInfo *)0x451ac2e;
  bVar1 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
label_0451ac75:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pMStack_a8 = (MethodInfo *)0x451ac87;
      il2cpp_runtime_helper_02337ed0();
    }
    effect = (PatreonEffects_NameEffectController_o **)0x0;
    pMStack_a8 = (MethodInfo *)0x451ac93;
    pTVar5 = pTVar11;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return bVar1;
    }
    if (pTVar11 != (TMPro_TMP_Text_o *)0x0) {
      bVar1 = (*(pTVar11->klass->vtable)._23_set_color.methodPtr)
                        ((undefined4)uStack_a0,uStack_90,pTVar11,(pTVar11->klass->vtable)._23_set_color.method
                        );
      return bVar1;
    }
  }
  else {
    pTVar5 = (TMPro_TMP_Text_o *)0x0;
    if ((PatreonEffects_NameEffectController_o *)pMVar8->methodPointer !=
        (PatreonEffects_NameEffectController_o *)0x0) {
      pMStack_a8 = (MethodInfo *)0x451ac45;
      PatreonEffects_NameEffectController__Clear
                ((PatreonEffects_NameEffectController_o *)pMVar8->methodPointer,(MethodInfo *)0x0);
      pUVar10 = (UnityEngine_Object_o *)pMVar8->methodPointer;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pMStack_a8 = (MethodInfo *)0x451ac5a;
        il2cpp_runtime_helper_02337ed0();
      }
      pMStack_a8 = (MethodInfo *)0x451ac64;
      UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
      pMVar8->methodPointer = (Il2CppMethodPointer)0x0;
      pMStack_a8 = (MethodInfo *)0x451ac75;
      il2cpp_runtime_helper_022b4080(pMVar8);
      goto label_0451ac75;
    }
  }
  pMStack_a8 = (MethodInfo *)0x451acd7;
  color.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  plStack_b8 = &TypeInfo_Object;
  method_03 = id;
  pUStack_c0 = pUVar10;
  pTStack_b0 = pTVar11;
  pMStack_a8 = pMVar8;
  if (g_data_057aedf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"Aottg2");
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aedf5 = '\x01';
    method_03 = extraout_RDX_01;
  }
  GStack_e8.fields.Kind = 0;
  GStack_e8.fields._20_4_ = 0;
  GStack_e8.fields.Sprite = (System_String_o *)0x0;
  GStack_e8.fields.Id = (System_String_o *)0x0;
  GStack_e8.fields.Label = (System_String_o *)0x0;
  GStack_e8.fields.ImageScale = 0.0;
  GStack_e8.fields._36_4_ = 0;
  color.fields.a = (float)in_XMM1_Db;
  color.fields.b = (float)in_XMM1_Da;
  Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect(pTVar5,effect,color,(MethodInfo *)method_03);
  pTVar11 = id;
  bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet((System_String_o *)id,&GStack_e8,method_04);
  if ((char)bVar1 == '\0') {
    if (in_RCX == 0) {
      in_RCX = **(long **)(g_data_057b9c00 + 0xb8);
    }
    if (pTVar5 == (TMPro_TMP_Text_o *)0x0) goto label_0451af33;
    (*(pTVar5->klass->vtable)._66_set_text.methodPtr)
              (pTVar5,in_RCX,(pTVar5->klass->vtable)._66_set_text.method);
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = 0;
    pTVar6 = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
    TMPro_TMP_Text__set_font(pTVar5,pTVar6,(MethodInfo *)0x0);
    (*(pTVar5->klass->vtable)._23_set_color.methodPtr)
              ((int)color.fields._0_8_,in_XMM1_Da,pTVar5,(pTVar5->klass->vtable)._23_set_color.method);
  }
  else {
    if (GStack_e8.fields.Kind == 1) {
      if (pTVar5 == (TMPro_TMP_Text_o *)0x0) goto label_0451af33;
      (*(pTVar5->klass->vtable)._66_set_text.methodPtr)
                (pTVar5,**(undefined8 **)(g_data_057b9c00 + 0xb8),(pTVar5->klass->vtable)._66_set_text.method);
    }
    else {
      if (pTVar5 == (TMPro_TMP_Text_o *)0x0) {
label_0451af33:
        il2cpp_runtime_helper_022b2c90();
        color_00.fields.b = 1.0;
        color_00.fields.a = 1.0;
        color_00.fields.r = 1.0;
        color_00.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  ((TMPro_TMP_Text_o *)(pTVar11->fields).m_Material,
                   (PatreonEffects_NameEffectController_o **)&(pTVar11->fields).m_Color.fields.b,color_00,
                   method_05);
        return extraout_EAX;
      }
      (*(pTVar5->klass->vtable)._66_set_text.methodPtr)
                (pTVar5,GStack_e8.fields.Label,(pTVar5->klass->vtable)._66_set_text.method);
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pTVar6 = PatreonEffects_NameFontCatalog__Load("Aottg2",(MethodInfo *)0x0);
      TMPro_TMP_Text__set_font(pTVar5,pTVar6,(MethodInfo *)0x0);
      (*(pTVar5->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,pTVar5);
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar5,(MethodInfo *)0x0);
      pTVar11 = pTVar5;
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_0451af33;
      pPVar7 = (PatreonEffects_NameEffectController_o *)
               UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_NameEffectController_AddComponent_NameEffectController);
      *effect = pPVar7;
      il2cpp_runtime_helper_022b4080(effect);
      pTVar11 = (TMPro_TMP_Text_o *)*effect;
      if (pTVar11 == (TMPro_TMP_Text_o *)0x0) goto label_0451af33;
      PatreonEffects_NameEffectController__AutoConfigure
                ((PatreonEffects_NameEffectController_o *)pTVar11,(MethodInfo *)0x0);
      pPVar7 = *effect;
      settings = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__SupporterShimmer((MethodInfo *)pTVar11);
      if (pPVar7 == (PatreonEffects_NameEffectController_o *)0x0) goto label_0451af33;
      PatreonEffects_NameEffectController__Apply(pPVar7,settings,(MethodInfo *)0x0);
    }
    bVar1 = (bool_conflict)CONCAT71((int7)((ulong)effect >> 8),1);
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ClearEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect (TMPro_TMP_Text_o* label, PatreonEffects_NameEffectController_o** effect, UnityEngine_Color_o color, const MethodInfo* method);
// 0x451abd0

void Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
               (TMPro_TMP_Text_o *label,PatreonEffects_NameEffectController_o **effect,
               UnityEngine_Color_o color,MethodInfo *method)

{
  bool_conflict bVar1;
  TMPro_TMP_FontAsset_o *pTVar2;
  UnityEngine_GameObject_o *__this;
  PatreonEffects_NameEffectController_o *pPVar3;
  PatreonEffects_NameEffectSettings_o *settings;
  long in_RCX;
  TMPro_TMP_Text_o *id;
  TMPro_TMP_Text_o *extraout_RDX;
  TMPro_TMP_Text_o *pTVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PatreonEffects_NameEffectController_o **effect_00;
  TMPro_TMP_Text_o *label_00;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar5;
  float fVar6;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o GStack_90;
  PatreonEffects_NameEffectController_o *pPStack_68;
  long *plStack_60;
  TMPro_TMP_Text_o *pTStack_58;
  PatreonEffects_NameEffectController_o **ppPStack_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  fVar5 = color.fields.b;
  fVar6 = color.fields.a;
  local_38._8_4_ = in_XMM1_Dc;
  local_38._0_8_ = color.fields._8_8_;
  local_38._12_4_ = in_XMM1_Dd;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = color.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  if (g_data_057aedf8 == '\0') {
    ppPStack_50 = (PatreonEffects_NameEffectController_o **)0x451abff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aedf8 = '\x01';
  }
  pPVar3 = *effect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    ppPStack_50 = (PatreonEffects_NameEffectController_o **)0x451ac22;
    il2cpp_runtime_helper_02337ed0();
  }
  effect_00 = (PatreonEffects_NameEffectController_o **)0x0;
  ppPStack_50 = (PatreonEffects_NameEffectController_o **)0x451ac2e;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    label_00 = (TMPro_TMP_Text_o *)0x0;
    if (*effect == (PatreonEffects_NameEffectController_o *)0x0) goto label_0451acd2;
    ppPStack_50 = (PatreonEffects_NameEffectController_o **)0x451ac45;
    PatreonEffects_NameEffectController__Clear(*effect,(MethodInfo *)0x0);
    pPVar3 = *effect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      ppPStack_50 = (PatreonEffects_NameEffectController_o **)0x451ac5a;
      il2cpp_runtime_helper_02337ed0();
    }
    ppPStack_50 = (PatreonEffects_NameEffectController_o **)0x451ac64;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pPVar3,(MethodInfo *)0x0);
    *effect = (PatreonEffects_NameEffectController_o *)0x0;
    ppPStack_50 = (PatreonEffects_NameEffectController_o **)0x451ac75;
    il2cpp_runtime_helper_022b4080(effect);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    ppPStack_50 = (PatreonEffects_NameEffectController_o **)0x451ac87;
    il2cpp_runtime_helper_02337ed0();
  }
  effect_00 = (PatreonEffects_NameEffectController_o **)0x0;
  ppPStack_50 = (PatreonEffects_NameEffectController_o **)0x451ac93;
  label_00 = label;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  if (label != (TMPro_TMP_Text_o *)0x0) {
    (*(label->klass->vtable)._23_set_color.methodPtr)
              (local_48._0_4_,local_38._0_4_,label,(label->klass->vtable)._23_set_color.method);
    return;
  }
label_0451acd2:
  ppPStack_50 = (PatreonEffects_NameEffectController_o **)0x451acd7;
  color_00.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  plStack_60 = &TypeInfo_Object;
  pTVar4 = id;
  pPStack_68 = pPVar3;
  pTStack_58 = label;
  ppPStack_50 = effect;
  if (g_data_057aedf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"Aottg2");
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057aedf5 = '\x01';
    pTVar4 = extraout_RDX;
  }
  GStack_90.fields.Kind = 0;
  GStack_90.fields._20_4_ = 0;
  GStack_90.fields.Sprite = (System_String_o *)0x0;
  GStack_90.fields.Id = (System_String_o *)0x0;
  GStack_90.fields.Label = (System_String_o *)0x0;
  GStack_90.fields.ImageScale = 0.0;
  GStack_90.fields._36_4_ = 0;
  color_00.fields.a = fVar6;
  color_00.fields.b = fVar5;
  Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect(label_00,effect_00,color_00,(MethodInfo *)pTVar4)
  ;
  pTVar4 = id;
  bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet((System_String_o *)id,&GStack_90,method_00);
  if ((char)bVar1 == '\0') {
    if (in_RCX == 0) {
      in_RCX = **(long **)(g_data_057b9c00 + 0xb8);
    }
    if (label_00 != (TMPro_TMP_Text_o *)0x0) {
      (*(label_00->klass->vtable)._66_set_text.methodPtr)
                (label_00,in_RCX,(label_00->klass->vtable)._66_set_text.method);
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pTVar2 = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
      TMPro_TMP_Text__set_font(label_00,pTVar2,(MethodInfo *)0x0);
      (*(label_00->klass->vtable)._23_set_color.methodPtr)
                ((int)color_00.fields._0_8_,fVar5,label_00,(label_00->klass->vtable)._23_set_color.method);
      return;
    }
  }
  else if (GStack_90.fields.Kind == 1) {
    if (label_00 != (TMPro_TMP_Text_o *)0x0) {
      (*(label_00->klass->vtable)._66_set_text.methodPtr)
                (label_00,**(undefined8 **)(g_data_057b9c00 + 0xb8),(label_00->klass->vtable)._66_set_text.method
                );
      return;
    }
  }
  else if (label_00 != (TMPro_TMP_Text_o *)0x0) {
    (*(label_00->klass->vtable)._66_set_text.methodPtr)
              (label_00,GStack_90.fields.Label,(label_00->klass->vtable)._66_set_text.method);
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pTVar2 = PatreonEffects_NameFontCatalog__Load("Aottg2",(MethodInfo *)0x0);
    TMPro_TMP_Text__set_font(label_00,pTVar2,(MethodInfo *)0x0);
    (*(label_00->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,label_00);
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label_00,(MethodInfo *)0x0);
    pTVar4 = label_00;
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pPVar3 = (PatreonEffects_NameEffectController_o *)
               UnityEngine_GameObject__AddComponent_object_(__this,MethodInfo_NameEffectController_AddComponent_NameEffectController);
      *effect_00 = pPVar3;
      il2cpp_runtime_helper_022b4080(effect_00);
      pTVar4 = (TMPro_TMP_Text_o *)*effect_00;
      if (pTVar4 != (TMPro_TMP_Text_o *)0x0) {
        PatreonEffects_NameEffectController__AutoConfigure
                  ((PatreonEffects_NameEffectController_o *)pTVar4,(MethodInfo *)0x0);
        pPVar3 = *effect_00;
        settings = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__SupporterShimmer((MethodInfo *)pTVar4);
        if (pPVar3 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(pPVar3,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  color_01.fields.b = 1.0;
  color_01.fields.a = 1.0;
  color_01.fields.r = 1.0;
  color_01.fields.g = 1.0;
  Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
            ((TMPro_TMP_Text_o *)(pTVar4->fields).m_Material,
             (PatreonEffects_NameEffectController_o **)&(pTVar4->fields).m_Color.fields.b,color_01,method_01);
  return;
}


