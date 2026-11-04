// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetChoicePreviewRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$Configure
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__Configure (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, System_String_o* value, System_String_o* text, bool enabled, const MethodInfo* method);
// 0x181e12240
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e123ef: mov rdx, rsi
// asm:   0x181e123f2: jmp 0x181e12405
// asm:   0x181e12480: mov rbp, qword ptr [rsp + 0x90]
// asm:   0x181e12488: mov r14, qword ptr [rsp + 0x98]

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__Configure
               (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this,System_String_o *value,
               System_String_o *text,bool enabled,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  TMPro_TMP_Text_o *pTVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Image_o *image;
  UnityEngine_GameObject_o *pUVar5;
  TMPro_TMP_FontAsset_o *value_00;
  System_String_o *pSVar6;
  UnityEngine_Color_Fields local_58;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_48;
  
  if (Il2CppMethodInitialized_184344c61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Guild Preset Preview");
    Il2CppMethodInitialized_184344c61 = '\x01';
  }
  if (Il2CppMethodInitialized_184344c62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c62 = '\x01';
  }
  pTVar3 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pTVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    (__this->fields)._label = pTVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._label,pTVar3);
  }
  pTVar3 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((pTVar3 != (TMPro_TMP_Text_o *)0x0) &&
     (pUVar4 = TMPro_TMP_Text__get_transform(pTVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    pUVar4 = UnityEngine_Transform__GetParent(pUVar4,(MethodInfo *)0x0);
    image = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage
                      (pUVar4,&(__this->fields)._image,"AoTTG Guild Preset Preview",31.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage(image,value,(MethodInfo *)0x0);
    if ((image != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      else {
        pSVar6 = text;
        if (text == (System_String_o *)0x0) {
          pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
      }
      (*(pTVar3->klass->vtable)._66_set_text.methodPtr)
                (pTVar3,pSVar6,(pTVar3->klass->vtable)._66_set_text.method);
      if (enabled) {
        local_48.fields.ImageScale = 0.0;
        local_48.fields._36_4_ = 0;
        local_48.fields.Id = (System_String_o *)0x0;
        local_48.fields.Label = (System_String_o *)0x0;
        local_48.fields.Kind = 0;
        local_48.fields._20_4_ = 0;
        local_48.fields.Sprite = (System_String_o *)0x0;
        bVar2 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(value,&local_48,(MethodInfo *)0x0);
        if (bVar2) {
          if (!bVar1) {
            local_58.r = 1.0;
            local_58.g = 1.0;
            local_58.b = 1.0;
            local_58.a = 1.0;
            Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                      (pTVar3,&(__this->fields)._effect,value,text,(UnityEngine_Color_o *)&local_58,
                       (MethodInfo *)0x0);
          }
        }
        else {
          local_58.r = 1.0;
          local_58.g = 1.0;
          local_58.b = 1.0;
          local_58.a = 1.0;
          Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                    (pTVar3,&(__this->fields)._effect,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
          if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
          }
          value_00 = PatreonEffects_NameFontCatalog__Load("Aottg2",(MethodInfo *)0x0);
          TMPro_TMP_Text__set_font(pTVar3,value_00,(MethodInfo *)0x0);
          local_58.r = 1.0;
          local_58.g = 1.0;
          local_58.b = 1.0;
          local_58.a = 1.0;
          (*(pTVar3->klass->vtable)._23_set_color.methodPtr)
                    (pTVar3,(UnityEngine_Color_o *)&local_58,(pTVar3->klass->vtable)._23_set_color.method);
        }
      }
      else {
        local_58.r = 0.58;
        local_58.g = 0.58;
        local_58.b = 0.58;
        local_58.a = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  (pTVar3,&(__this->fields)._effect,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_181e12564;
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_181e12564:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$get_Label
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__get_Label (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, const MethodInfo* method);
// 0x181e125a0

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__get_Label
          (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_Text_o *pTVar2;
  
  if (Il2CppMethodInitialized_184344c62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c62 = '\x01';
  }
  pTVar2 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pTVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    (__this->fields)._label = pTVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._label,pTVar2);
  }
  return (__this->fields)._label;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, const MethodInfo* method);
// 0x181e12570

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Color_Fields local_18;
  
  local_18.r = 1.0;
  local_18.g = 1.0;
  local_18.b = 1.0;
  local_18.a = 1.0;
  Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
            ((__this->fields)._label,&(__this->fields)._effect,(UnityEngine_Color_o *)&local_18,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime___ctor(Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


