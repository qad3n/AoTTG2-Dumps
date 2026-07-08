// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetVisual
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetVisual.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$IsPreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset (System_String_o* presetId, const MethodInfo* method);
// 0x41e9080

bool_conflict
Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset
          (System_String_o *presetId,MethodInfo *method)

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
// 0x41e9050

bool_conflict
Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsImagePreset
          (System_String_o *presetId,MethodInfo *method)

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
  return CONCAT31((int3)((uint)bVar1 >> 8),(byte)bVar1 & local_28.fields.Kind == 1);
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ApplyText
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText (TMPro_TMP_Text_o* label, PatreonEffects_NameEffectController_o** effect, System_String_o* presetId, System_String_o* fallback, UnityEngine_Color_o color, const MethodInfo* method);
// 0x41e9a90

bool_conflict
Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
          (TMPro_TMP_Text_o *label,PatreonEffects_NameEffectController_o **effect,
          System_String_o *presetId,System_String_o *fallback,UnityEngine_Color_o color,
          MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *__this;
  bool_conflict bVar1;
  TMPro_TMP_FontAsset_o *pTVar2;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *pPVar3;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float local_68;
  float local_58;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_48;
  
  method_00 = (MethodInfo *)presetId;
  if (DAT_05704f1d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&"Aottg2");
    il2cpp_init_method_metadata(&"Normal");
    DAT_05704f1d = '\x01';
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
      fallback = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    if (label == (TMPro_TMP_Text_o *)0x0) goto LAB_041e9ce3;
    (*(label->klass->vtable)._66_set_text.methodPtr)
              (label,fallback,(label->klass->vtable)._66_set_text.method);
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_init_class();
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
      if (label == (TMPro_TMP_Text_o *)0x0) goto LAB_041e9ce3;
      (*(label->klass->vtable)._66_set_text.methodPtr)
                (label,**(undefined8 **)(DAT_057110b0 + 0xb8),
                 (label->klass->vtable)._66_set_text.method);
    }
    else {
      if (label == (TMPro_TMP_Text_o *)0x0) {
LAB_041e9ce3:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*(label->klass->vtable)._66_set_text.methodPtr)
                (label,local_48.fields.Label,(label->klass->vtable)._66_set_text.method);
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pTVar2 = PatreonEffects_NameFontCatalog__Load("Aottg2",(MethodInfo *)0x0);
      TMPro_TMP_Text__set_font(label,pTVar2,(MethodInfo *)0x0);
      (*(label->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000,label);
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)label,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_041e9ce3;
      pPVar3 = (PatreonEffects_NameEffectController_o *)
               UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectCont);
      *effect = pPVar3;
      il2cpp_runtime_glue(effect);
      pPVar3 = *effect;
      if (pPVar3 == (PatreonEffects_NameEffectController_o *)0x0) goto LAB_041e9ce3;
      PatreonEffects_NameEffectController__AutoConfigure(pPVar3,(MethodInfo *)0x0);
      __this = *effect;
      settings = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__SupporterShimmer
                           ((MethodInfo *)pPVar3);
      if (__this == (PatreonEffects_NameEffectController_o *)0x0) goto LAB_041e9ce3;
      PatreonEffects_NameEffectController__Apply(__this,settings,(MethodInfo *)0x0);
    }
    bVar1 = (bool_conflict)CONCAT71((int7)((ulong)effect >> 8),1);
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$EnsureImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage (UnityEngine_Transform_o* parent, UnityEngine_UI_Image_o** image, System_String_o* name, float height, const MethodInfo* method);
// 0x41e9400

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage
          (UnityEngine_Transform_o *parent,UnityEngine_UI_Image_o **image,System_String_o *name,
          float height,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_Image_o *pUVar4;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this_01;
  undefined8 uVar5;
  MethodInfo *method_00;
  
  if (DAT_05704f1e == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    DAT_05704f1e = '\x01';
  }
  pUVar4 = *image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto LAB_041e9717;
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_041e9721;
    }
    if ((int)components->max_length == 0) {
LAB_041e971c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar2;
    il2cpp_runtime_glue(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_041e9721;
    }
    if ((uint)components->max_length < 2) goto LAB_041e971c;
    components->m_Items[1] = pSVar2;
    il2cpp_runtime_glue(components->m_Items + 1);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_041e9721;
    }
    if ((uint)components->max_length < 3) goto LAB_041e971c;
    components->m_Items[2] = pSVar2;
    il2cpp_runtime_glue(components->m_Items + 2);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) {
LAB_041e9721:
        uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar5,0);
      }
    }
    if ((uint)components->max_length < 4) goto LAB_041e971c;
    components->m_Items[3] = pSVar2;
    il2cpp_runtime_glue(components->m_Items + 3,pSVar2);
    __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this,name,components,(MethodInfo *)0x0);
    if (__this == (UnityEngine_GameObject_o *)0x0) goto LAB_041e9717;
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_041e9717;
    UnityEngine_Transform__SetParent(__this_00,parent,0,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_UI_Image_o *)
             UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_Image_GetComponent_Image);
    *image = pUVar4;
    il2cpp_runtime_glue(image,pUVar4);
    pUVar4 = *image;
    if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) goto LAB_041e9717;
    (*(pUVar4->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar4,0,(pUVar4->klass->vtable)._25_set_raycastTarget.method);
    if (*image == (UnityEngine_UI_Image_o *)0x0) goto LAB_041e9717;
    method_00 = (MethodInfo *)0x1;
    UnityEngine_UI_Image__set_preserveAspect(*image,1,(MethodInfo *)0x0);
  }
  __this_01 = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(*image,method_00);
  if (__this_01 != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
    (__this_01->fields)._baseWidth = height * 2.9;
    (__this_01->fields)._baseHeight = height;
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(__this_01,1.0,method_00);
    return *image;
  }
LAB_041e9717:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ApplyImage
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage (UnityEngine_UI_Image_o* image, System_String_o* presetId, const MethodInfo* method);
// 0x41e9730

bool_conflict
Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
          (UnityEngine_UI_Image_o *image,System_String_o *presetId,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  System_String_o *resourcePath;
  float scale;
  bool_conflict bVar2;
  uint uVar3;
  uint uVar4;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *pGVar6;
  UnityEngine_GameObject_o *pUVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_48;
  
  if (DAT_05704f1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"aottg2_developer_team");
    DAT_05704f1f = '\x01';
  }
  local_48.fields.Kind = 0;
  local_48.fields._20_4_ = 0;
  local_48.fields.Sprite = (System_String_o *)0x0;
  local_48.fields.Id = (System_String_o *)0x0;
  local_48.fields.Label = (System_String_o *)0x0;
  local_48.fields.ImageScale = 0.0;
  local_48.fields._36_4_ = 0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((((char)bVar2 == '\0') &&
      (bVar2 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&local_48,method_00),
      resourcePath = local_48.fields.Sprite, (char)bVar2 != '\0')) && (local_48.fields.Kind == 1)) {
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar5 = (MethodInfo *)
             Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(resourcePath,(MethodInfo *)0x0);
    if (image != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_sprite(image,(UnityEngine_Sprite_o *)pMVar5,(MethodInfo *)0x0);
      scale = local_48.fields.ImageScale;
      pGVar6 = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,pMVar5);
      if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(pGVar6,scale,pMVar5);
        pUVar7 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
        pUVar1 = *(UnityEngine_Object_o **)&(image->fields).m_ShouldRecalculate;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar3 = UnityEngine_Object__op_Inequality
                          (pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
          uVar4 = 0;
          UnityEngine_GameObject__SetActive(pUVar7,uVar3 & 0xff,(MethodInfo *)0x0);
          bVar2 = System_String__op_Equality(local_48.fields.Id,"aottg2_developer_team",(MethodInfo *)0x0);
          pMVar5 = extraout_RDX;
          if ((char)bVar2 != '\0') {
            pUVar1 = *(UnityEngine_Object_o **)&(image->fields).m_ShouldRecalculate;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            uVar4 = UnityEngine_Object__op_Inequality
                              (pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            pMVar5 = extraout_RDX_00;
          }
          Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled(image,uVar4 & 0xff,pMVar5)
          ;
          pUVar1 = *(UnityEngine_Object_o **)&(image->fields).m_ShouldRecalculate;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            (pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          return bVar2;
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return 0;
    }
    pMVar5 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled(image,0,method_01);
    pGVar6 = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,pMVar5);
    if (((pGVar6 != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) &&
        (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(pGVar6,1.0,pMVar5),
        image != (UnityEngine_UI_Image_o *)0x0)) &&
       (pUVar7 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)image,(MethodInfo *)0x0),
       pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ClearEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect (TMPro_TMP_Text_o* label, PatreonEffects_NameEffectController_o** effect, UnityEngine_Color_o color, const MethodInfo* method);
// 0x41e9980

void Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
               (TMPro_TMP_Text_o *label,PatreonEffects_NameEffectController_o **effect,
               UnityEngine_Color_o color,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool_conflict bVar2;
  float local_48;
  float local_38;
  
  if (DAT_05704f20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704f20 = '\x01';
  }
  pPVar1 = *effect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*effect == (PatreonEffects_NameEffectController_o *)0x0) goto LAB_041e9a82;
    PatreonEffects_NameEffectController__Clear(*effect,(MethodInfo *)0x0);
    pPVar1 = *effect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    *effect = (PatreonEffects_NameEffectController_o *)0x0;
    il2cpp_runtime_glue(effect);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (label != (TMPro_TMP_Text_o *)0x0) {
    local_48 = color.fields.r;
    local_38 = color.fields.b;
    (*(label->klass->vtable)._23_set_color.methodPtr)
              (local_48,local_38,label,(label->klass->vtable)._23_set_color.method);
    return;
  }
LAB_041e9a82:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


