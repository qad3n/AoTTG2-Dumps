// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetChoicePreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register (const MethodInfo* method);
// 0x181e128c0

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register(MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  
  if (Il2CppMethodInitialized_184344c5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview_Render);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-preset-preview");
    Il2CppMethodInitialized_184344c5c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->static_fields->_registered == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->static_fields->_registered = true;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
    System_Action_object____ctor
              (__this,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview_Render,
               (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    }
    Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
              ("profile-character-guild-preset-preview",(System_Action_GisketchChoiceOptionRenderContext__o *)__this,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$UseRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__UseRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x181e12c70

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__UseRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344c5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-preset-preview");
    Il2CppMethodInitialized_184344c5d = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (node->fields).choiceOptionRenderer = "profile-character-guild-preset-preview";
    Il2CppCodeGenWriteBarrier(&(node->fields).choiceOptionRenderer,"profile-character-guild-preset-preview");
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$Render
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Render (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x181e129c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e12b0d: jmp 0x181e12b13
// asm:   0x181e12b9e: mov rdx, rsi
// asm:   0x181e12ba1: mov r8, rsi

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Render
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this;
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this_00;
  UnityEngine_GameObject_o *pUVar4;
  System_String_o *id;
  System_String_o *normal;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_38;
  
  if (Il2CppMethodInitialized_184344c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgGuildPresetChoicePreviewRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetChoicePreviewRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDropdownItemFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c5e = '\x01';
  }
  if (context == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    return;
  }
  pTVar1 = (context->fields).Label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface(context,(MethodInfo *)0x0);
  local_38.fields.ImageScale = 0.0;
  local_38.fields._36_4_ = 0;
  local_38.fields.Id = (System_String_o *)0x0;
  local_38.fields.Label = (System_String_o *)0x0;
  local_38.fields.Kind = 0;
  local_38.fields._20_4_ = 0;
  local_38.fields.Sprite = (System_String_o *)0x0;
  bVar2 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet
                    ((context->fields).Value,&local_38,(MethodInfo *)0x0);
  if (bVar2) {
    bVar2 = local_38.fields.Kind == 1;
  }
  else {
    bVar2 = false;
  }
  local_38.fields.Id = (System_String_o *)0x0;
  local_38.fields.Label = (System_String_o *)0x0;
  local_38.fields.ImageScale = 0.0;
  local_38.fields._36_4_ = 0;
  local_38.fields.Kind = 0;
  local_38.fields._20_4_ = 0;
  local_38.fields.Sprite = (System_String_o *)0x0;
  bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet
                    ((context->fields).Value,&local_38,(MethodInfo *)0x0);
  if (bVar3) {
    id = (context->fields).Value;
    local_38.fields.ImageScale = 0.0;
    local_38.fields._36_4_ = 0;
    local_38.fields.Id = (System_String_o *)0x0;
    local_38.fields.Label = (System_String_o *)0x0;
    local_38.fields.Kind = 0;
    local_38.fields._20_4_ = 0;
    local_38.fields.Sprite = (System_String_o *)0x0;
    bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(id,&local_38,(MethodInfo *)0x0);
    if (bVar3) {
      id = local_38.fields.Label;
    }
  }
  else {
    id = (context->fields).Text;
  }
  x = (UnityEngine_Object_o *)(context->fields).Root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = (context->fields).Root;
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_181e12c66;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (pUVar4,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDropdownItemFeedback);
  }
  else {
    __this = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    normal = id;
    if (bVar2) {
      normal = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if (__this == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) goto label_181e12c66;
    Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
              (__this,normal,normal,(context->fields).Enabled,(MethodInfo *)0x0);
  }
  pTVar1 = (context->fields).Label;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pTVar1,
                           (MethodInfo_6651A0 *)
                           MethodInfo_UnityEngine_Component_GetComponent_AottgGuildPresetChoicePreviewRuntime)
    ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (context->fields).Label;
      if ((pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto label_181e12c66;
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar4,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetChoicePreviewRuntime
                            );
    }
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__Configure
                (__this_00,(context->fields).Value,id,(context->fields).Enabled,(MethodInfo *)0x0);
      return;
    }
  }
label_181e12c66:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$ApplyDarkSurface
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x181e12630
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e126ee: nop 

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview_StaticFields *pGVar1;
  TMPro_TextMeshProUGUI_o *__this_00;
  bool bVar2;
  UnityEngine_Transform_o *__this_01;
  System_String_o *pSVar3;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184344c5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-popover");
    il2cpp_codegen_initialize_runtime_metadata(&"-options-scroll");
    Il2CppMethodInitialized_184344c5f = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    if ((context->fields).ClosedValue == false) {
      x = (UnityEngine_Object_o *)(context->fields).Root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        __this = (context->fields).Root;
        if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181e128ac;
        __this_01 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      }
      else {
        __this_01 = (UnityEngine_Transform_o *)0x0;
      }
      while( true ) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        if ((__this_01 == (UnityEngine_Transform_o *)0x0) ||
           (pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0),
           pSVar3 == (System_String_o *)0x0)) break;
        bVar2 = System_String__EndsWith(pSVar3,"-popover",(MethodInfo *)0x0);
        if (bVar2) {
label_181e12779:
          pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_01,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
            }
            if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) break;
            pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->static_fields;
            local_18.r = (pGVar1->DarkSurface).fields.r;
            local_18.g = (pGVar1->DarkSurface).fields.g;
            local_18.b = (pGVar1->DarkSurface).fields.b;
            local_18.a = (pGVar1->DarkSurface).fields.a;
            (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                      (pUVar4,(UnityEngine_Color_o *)&local_18,(pUVar4->klass->vtable)._23_set_color.method);
          }
        }
        else {
          pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
          if (pSVar3 == (System_String_o *)0x0) break;
          bVar2 = System_String__EndsWith(pSVar3,"-options-scroll",(MethodInfo *)0x0);
          if (bVar2) goto label_181e12779;
        }
        __this_01 = UnityEngine_Transform__GetParent(__this_01,(MethodInfo *)0x0);
      }
    }
    else {
      __this_00 = (context->fields).Label;
      if (__this_00 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pUVar4 = UnityEngine_Component__GetComponentInParent_object__664f20
                           ((UnityEngine_Component_o *)__this_00,
                            (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Image);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
          }
          if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) goto label_181e128ac;
          pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->static_fields;
          local_18.r = (pGVar1->DarkSurface).fields.r;
          local_18.g = (pGVar1->DarkSurface).fields.g;
          local_18.b = (pGVar1->DarkSurface).fields.b;
          local_18.a = (pGVar1->DarkSurface).fields.a;
          (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                    (pUVar4,(UnityEngine_Color_o *)&local_18,(pUVar4->klass->vtable)._23_set_color.method);
        }
        return;
      }
    }
  }
label_181e128ac:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview___cctor (const MethodInfo* method);
// 0x181e12cd0

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_184344c60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    Il2CppMethodInitialized_184344c60 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->static_fields;
  (pGVar1->DarkSurface).fields.r = 0.14;
  (pGVar1->DarkSurface).fields.g = 0.14;
  (pGVar1->DarkSurface).fields.b = 0.14;
  (pGVar1->DarkSurface).fields.a = 1.0;
  return;
}


