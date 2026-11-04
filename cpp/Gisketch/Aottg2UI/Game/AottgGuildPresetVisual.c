// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetVisual
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetVisual.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$IsPreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset (System_String_o* presetId, const MethodInfo* method);
// 0x181e14260

bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset(System_String_o *presetId,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_38;
  
  local_38.fields.Id = (System_String_o *)0x0;
  local_38.fields.Label = (System_String_o *)0x0;
  local_38.fields.ImageScale = 0.0;
  local_38.fields._36_4_ = 0;
  local_38.fields.Kind = 0;
  local_38.fields._20_4_ = 0;
  local_38.fields.Sprite = (System_String_o *)0x0;
  bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&local_38,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$IsImagePreset
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsImagePreset (System_String_o* presetId, const MethodInfo* method);
// 0x181e14220

bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsImagePreset
               (System_String_o *presetId,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_38;
  
  local_38.fields.Id = (System_String_o *)0x0;
  local_38.fields.Label = (System_String_o *)0x0;
  local_38.fields.ImageScale = 0.0;
  local_38.fields._36_4_ = 0;
  local_38.fields.Kind = 0;
  local_38.fields._20_4_ = 0;
  local_38.fields.Sprite = (System_String_o *)0x0;
  bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&local_38,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  return local_38.fields.Kind == 1;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ApplyText
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText (TMPro_TMP_Text_o* label, PatreonEffects_NameEffectController_o** effect, System_String_o* presetId, System_String_o* fallback, UnityEngine_Color_o color, const MethodInfo* method);
// 0x181e13a90

bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
               (TMPro_TMP_Text_o *label,PatreonEffects_NameEffectController_o **effect,
               System_String_o *presetId,System_String_o *fallback,UnityEngine_Color_o *color,
               MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_FontAsset_o *pTVar2;
  UnityEngine_GameObject_o *__this;
  PatreonEffects_NameEffectController_o *pPVar3;
  PatreonEffects_NameEffectSettings_o *__this_00;
  UnityEngine_Color_Fields local_68;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_58;
  
  if (Il2CppMethodInitialized_184344c63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184344c63 = '\x01';
  }
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.Label = (System_String_o *)0x0;
  local_58.fields.Kind = 0;
  local_58.fields._20_4_ = 0;
  local_58.fields.Sprite = (System_String_o *)0x0;
  local_58.fields.ImageScale = 0.0;
  local_58.fields._36_4_ = 0;
  local_68.r = (color->fields).r;
  local_68.g = (color->fields).g;
  local_68.b = (color->fields).b;
  local_68.a = (color->fields).a;
  Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
            (label,effect,(UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&local_58,(MethodInfo *)0x0);
  if (bVar1) {
    if (label != (TMPro_TMP_Text_o *)0x0) {
      if (local_58.fields.Kind == 1) {
        (*(label->klass->vtable)._66_set_text.methodPtr)
                  (label,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                   (label->klass->vtable)._66_set_text.method);
        return true;
      }
      (*(label->klass->vtable)._66_set_text.methodPtr)
                (label,local_58.fields.Label,(label->klass->vtable)._66_set_text.method);
      if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
      }
      pTVar2 = PatreonEffects_NameFontCatalog__Load("Aottg2",(MethodInfo *)0x0);
      TMPro_TMP_Text__set_font(label,pTVar2,(MethodInfo *)0x0);
      local_68.r = 1.0;
      local_68.g = 1.0;
      local_68.b = 1.0;
      local_68.a = 1.0;
      (*(label->klass->vtable)._23_set_color.methodPtr)
                (label,(UnityEngine_Color_o *)&local_68,(label->klass->vtable)._23_set_color.method);
      __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        pPVar3 = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
        *effect = pPVar3;
        Il2CppCodeGenWriteBarrier(effect,pPVar3);
        if (*effect != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__AutoConfigure(*effect,(MethodInfo *)0x0);
          pPVar3 = *effect;
          if (Il2CppMethodInitialized_184344c5b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectSettings);
            Il2CppMethodInitialized_184344c5b = '\x01';
          }
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_NameEffectSettings);
          PatreonEffects_NameEffectSettings___ctor(__this_00,(MethodInfo *)0x0);
          if (__this_00 != (PatreonEffects_NameEffectSettings_o *)0x0) {
            (__this_00->fields).effectMode = 2;
            (__this_00->fields).gradientA.fields.r = 0.84;
            (__this_00->fields).gradientA.fields.g = 0.2;
            (__this_00->fields).gradientA.fields.b = 0.9;
            (__this_00->fields).gradientA.fields.a = 1.0;
            (__this_00->fields).gradientB.fields.r = 0.96;
            (__this_00->fields).gradientB.fields.g = 0.5;
            (__this_00->fields).gradientB.fields.b = 1.0;
            (__this_00->fields).gradientB.fields.a = 1.0;
            (__this_00->fields).gradientC.fields.r = 1.0;
            (__this_00->fields).gradientC.fields.g = 0.6;
            (__this_00->fields).gradientC.fields.b = 1.0;
            (__this_00->fields).gradientC.fields.a = 1.0;
            (__this_00->fields).gradientD.fields.r = 0.84;
            (__this_00->fields).gradientD.fields.g = 0.2;
            (__this_00->fields).gradientD.fields.b = 0.9;
            (__this_00->fields).gradientD.fields.a = 1.0;
            (__this_00->fields).gradientSpeed = 0.16;
            (__this_00->fields).glow = 0.82;
            (__this_00->fields).scanlineStrength = 0.24;
            (__this_00->fields).scanlineSpeed = 0.16;
            (__this_00->fields).flickerStrength = 0.0;
            (__this_00->fields).softness = 0.9;
            if (pPVar3 != (PatreonEffects_NameEffectController_o *)0x0) {
              PatreonEffects_NameEffectController__Apply(pPVar3,__this_00,(MethodInfo *)0x0);
              return true;
            }
          }
        }
      }
    }
  }
  else {
    if (fallback == (System_String_o *)0x0) {
      fallback = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if (label != (TMPro_TMP_Text_o *)0x0) {
      (*(label->klass->vtable)._66_set_text.methodPtr)
                (label,fallback,(label->klass->vtable)._66_set_text.method);
      if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
      }
      pTVar2 = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
      TMPro_TMP_Text__set_font(label,pTVar2,(MethodInfo *)0x0);
      local_68.r = (color->fields).r;
      local_68.g = (color->fields).g;
      local_68.b = (color->fields).b;
      local_68.a = (color->fields).a;
      (*(label->klass->vtable)._23_set_color.methodPtr)
                (label,(UnityEngine_Color_o *)&local_68,(label->klass->vtable)._23_set_color.method);
      return false;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$EnsureImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage (UnityEngine_Transform_o* parent, UnityEngine_UI_Image_o** image, System_String_o* name, float height, const MethodInfo* method);
// 0x181e13ed0

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage
          (UnityEngine_Transform_o *parent,UnityEngine_UI_Image_o **image,System_String_o *name,float height,
          MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_Image_o *pUVar4;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *__this_01;
  
  if (Il2CppMethodInitialized_184344c64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_184344c64 = '\x01';
  }
  pUVar4 = *image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_181e141c6;
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
label_181e1420c:
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((uint)components->max_length < 2) goto label_181e1420c;
    components->m_Items[1] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((uint)components->max_length < 3) goto label_181e1420c;
    components->m_Items[2] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((uint)components->max_length < 4) goto label_181e1420c;
    components->m_Items[3] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items + 3,pSVar2);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,name,components,(MethodInfo *)0x0);
    if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181e141c6;
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_181e141c6;
    UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    *image = pUVar4;
    Il2CppCodeGenWriteBarrier(image,pUVar4);
    pUVar4 = *image;
    if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) goto label_181e141c6;
    (*(pUVar4->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar4,false,(pUVar4->klass->vtable)._25_set_raycastTarget.method);
    if (*image == (UnityEngine_UI_Image_o *)0x0) goto label_181e141c6;
    UnityEngine_UI_Image__set_preserveAspect(*image,true,(MethodInfo *)0x0);
  }
  __this_01 = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(*image,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
    (__this_01->fields)._baseHeight = height;
    (__this_01->fields)._baseWidth = height * 2.9;
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(__this_01,1.0,(MethodInfo *)0x0);
    return *image;
  }
label_181e141c6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ApplyImage
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage (UnityEngine_UI_Image_o* image, System_String_o* presetId, const MethodInfo* method);
// 0x181e13810

bool Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
               (UnityEngine_UI_Image_o *image,System_String_o *presetId,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  System_String_o *resourcePath;
  float scale;
  bool bVar2;
  UnityEngine_Sprite_o *value;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *pGVar3;
  UnityEngine_GameObject_o *pUVar4;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_48;
  
  if (Il2CppMethodInitialized_184344c65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"aottg2_developer_team");
    Il2CppMethodInitialized_184344c65 = '\x01';
  }
  local_48.fields.Id = (System_String_o *)0x0;
  local_48.fields.Label = (System_String_o *)0x0;
  local_48.fields.ImageScale = 0.0;
  local_48.fields._36_4_ = 0;
  local_48.fields.Kind = 0;
  local_48.fields._20_4_ = 0;
  local_48.fields.Sprite = (System_String_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((bVar2) ||
      (bVar2 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&local_48,(MethodInfo *)0x0),
      resourcePath = local_48.fields.Sprite, !bVar2)) || (local_48.fields.Kind != 1)) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled(image,false,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,(MethodInfo *)0x0);
    if (((pGVar3 != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) &&
        (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(pGVar3,1.0,(MethodInfo *)0x0),
        image != (UnityEngine_UI_Image_o *)0x0)) &&
       (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      return false;
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(resourcePath,(MethodInfo *)0x0);
    if (image != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_sprite(image,value,(MethodInfo *)0x0);
      scale = local_48.fields.ImageScale;
      pGVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Runtime(image,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgGuildPresetImageLayout__Apply(pGVar3,scale,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
        pUVar1 = (UnityEngine_Object_o *)(image->fields).m_Sprite;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar4,bVar2,(MethodInfo *)0x0);
          bVar2 = System_String__op_Equality(local_48.fields.Id,"aottg2_developer_team",(MethodInfo *)0x0);
          if (bVar2) {
            pUVar1 = (UnityEngine_Object_o *)(image->fields).m_Sprite;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          }
          else {
            bVar2 = false;
          }
          Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled(image,bVar2,(MethodInfo *)0x0);
          pUVar1 = (UnityEngine_Object_o *)(image->fields).m_Sprite;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          return bVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ClearEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect (TMPro_TMP_Text_o* label, PatreonEffects_NameEffectController_o** effect, UnityEngine_Color_o color, const MethodInfo* method);
// 0x181e13dd0

void Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
               (TMPro_TMP_Text_o *label,PatreonEffects_NameEffectController_o **effect,
               UnityEngine_Color_o *color,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool bVar2;
  UnityEngine_Color_o local_38;
  
  if (Il2CppMethodInitialized_184344c66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c66 = '\x01';
  }
  pPVar1 = *effect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (*effect == (PatreonEffects_NameEffectController_o *)0x0) goto label_181e13ec2;
    PatreonEffects_NameEffectController__Clear(*effect,(MethodInfo *)0x0);
    pPVar1 = *effect;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    *effect = (PatreonEffects_NameEffectController_o *)0x0;
    Il2CppCodeGenWriteBarrier(effect,(void *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (label == (TMPro_TMP_Text_o *)0x0) {
label_181e13ec2:
      ThrowNullReferenceException();
    }
    local_38.fields.r = (color->fields).r;
    local_38.fields.g = (color->fields).g;
    local_38.fields.b = (color->fields).b;
    local_38.fields.a = (color->fields).a;
    (*(label->klass->vtable)._23_set_color.methodPtr)
              (label,&local_38,(label->klass->vtable)._23_set_color.method);
  }
  return;
}


