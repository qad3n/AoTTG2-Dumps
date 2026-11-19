// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetChoicePreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register (const MethodInfo* method);
// 0x58f1940

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview_StaticFields *pGVar3;
  System_Action_GisketchChoiceOptionRenderContext__o *__this;
  
  if (Il2CppMethodInitialized_075455cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview_Render);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-preset-preview");
    Il2CppMethodInitialized_075455cf = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->static_fields;
    cVar1 = pGVar3->_registered;
  }
  else {
    pGVar3 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)->static_fields;
    cVar1 = pGVar3->_registered;
  }
  if (cVar1 != '\0') {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->static_fields;
  }
  pGVar3->_registered = true;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
  System_Action_object____ctor
            ((System_Action_object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview_Render,
             (MethodInfo_4A81BE0 *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
  }
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
            ("profile-character-guild-preset-preview",__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$UseRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__UseRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x58f3630

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__UseRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075455d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-preset-preview");
    Il2CppMethodInitialized_075455d0 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  (node->fields).choiceOptionRenderer = "profile-character-guild-preset-preview";
  Il2CppCodeGenWriteBarrier(&(node->fields).choiceOptionRenderer);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$Render
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Render (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x58f6cd0

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
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o *normal;
  MethodInfo *method_03;
  MethodInfo *in_R8;
  System_String_o *id;
  bool bVar5;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o GStack_58;
  
  if (Il2CppMethodInitialized_075455d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgGuildPresetChoicePreviewRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetChoicePreviewRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDropdownItemFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075455d1 = '\x01';
  }
  if (context == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    return;
  }
  pTVar1 = (context->fields).Label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_03 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface(context,method_03);
  GStack_58.fields.Kind = 0;
  GStack_58.fields._20_4_ = 0;
  GStack_58.fields.Sprite = (System_String_o *)0x0;
  GStack_58.fields.Id = (System_String_o *)0x0;
  GStack_58.fields.Label = (System_String_o *)0x0;
  GStack_58.fields.ImageScale = 0.0;
  GStack_58.fields._36_4_ = 0;
  bVar2 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet((context->fields).Value,&GStack_58,method_00)
  ;
  bVar5 = GStack_58.fields.Kind == 1;
  GStack_58.fields.Kind = 0;
  GStack_58.fields._20_4_ = 0;
  GStack_58.fields.Sprite = (System_String_o *)0x0;
  GStack_58.fields.Id = (System_String_o *)0x0;
  GStack_58.fields.Label = (System_String_o *)0x0;
  GStack_58.fields.ImageScale = 0.0;
  GStack_58.fields._36_4_ = 0;
  bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet((context->fields).Value,&GStack_58,method_01)
  ;
  if (bVar3) {
    id = (context->fields).Value;
    GStack_58.fields.Kind = 0;
    GStack_58.fields._20_4_ = 0;
    GStack_58.fields.Sprite = (System_String_o *)0x0;
    GStack_58.fields.Id = (System_String_o *)0x0;
    GStack_58.fields.Label = (System_String_o *)0x0;
    GStack_58.fields.ImageScale = 0.0;
    GStack_58.fields._36_4_ = 0;
    bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(id,&GStack_58,method_02);
    if (bVar3) {
      id = GStack_58.fields.Label;
    }
  }
  else {
    id = (context->fields).Text;
  }
  x = (UnityEngine_Object_o *)(context->fields).Root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = (context->fields).Root;
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_058f6f4f;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (pUVar4,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDropdownItemFeedback);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    normal = id;
    if (bVar2 && bVar5) {
      normal = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    if (__this == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) goto label_058f6f4f;
    in_R8 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
              (__this,normal,normal,(context->fields).Enabled,(MethodInfo *)0x0);
  }
  pTVar1 = (context->fields).Label;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pTVar1,
                           (MethodInfo_34B0830 *)
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
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto label_058f6f4f;
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar4,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetChoicePreviewRuntime
                            );
    }
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__Configure
                (__this_00,(context->fields).Value,id,(context->fields).Enabled,in_R8);
      return;
    }
  }
label_058f6f4f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$ApplyDarkSurface
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x58f6f60
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f70c6: lea r14, [rip + 0x19d9cab]  ; "-popover"
// asm:   0x58f70cd: lea r13, [rip + 0x19ada3c]  ; MethodInfo_UnityEngine_Component_GetComponent_Image
// asm:   0x58f70d4: lea rbp, [rip + 0x197e4dd]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview
// asm:   0x58f70db: jmp 0x58f70ed

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__ApplyDarkSurface
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *__this;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Transform_o *__this_01;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075455d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-popover");
    il2cpp_codegen_initialize_runtime_metadata(&"-options-scroll");
    Il2CppMethodInitialized_075455d2 = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    if ((context->fields).ClosedValue == false) {
      x = (UnityEngine_Object_o *)(context->fields).Root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      __this_01 = (UnityEngine_Transform_o *)0x0;
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        __this_00 = (context->fields).Root;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_058f71f6;
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      }
      while( true ) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if ((__this_01 == (UnityEngine_Transform_o *)0x0) ||
           (pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0),
           pSVar3 == (System_String_o *)0x0)) break;
        bVar1 = System_String__EndsWith(pSVar3,"-popover",(MethodInfo *)0x0);
        if (bVar1) {
label_058f716f:
          pUVar2 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_01,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
            }
            if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) break;
            (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                      (pUVar2,(UnityEngine_Color_o)
                              (TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->static_fields->
                              DarkSurface).fields,(pUVar2->klass->vtable)._23_set_color.method);
          }
        }
        else {
          pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
          if (pSVar3 == (System_String_o *)0x0) break;
          bVar1 = System_String__EndsWith(pSVar3,"-options-scroll",(MethodInfo *)0x0);
          if (bVar1) goto label_058f716f;
        }
        __this_01 = UnityEngine_Transform__get_parent(__this_01,(MethodInfo *)0x0);
      }
    }
    else {
      __this = (context->fields).Label;
      if (__this != (TMPro_TextMeshProUGUI_o *)0x0) {
        pUVar2 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Image)
        ;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
        }
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                    (pUVar2,(UnityEngine_Color_o)
                            (TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->static_fields->
                            DarkSurface).fields,(pUVar2->klass->vtable)._23_set_color.method);
          return;
        }
      }
    }
  }
label_058f71f6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview___cctor (const MethodInfo* method);
// 0x58f74a0

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_075455d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    Il2CppMethodInitialized_075455d3 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->static_fields;
  (pGVar1->DarkSurface).fields.r = 0.14;
  (pGVar1->DarkSurface).fields.g = 0.14;
  (pGVar1->DarkSurface).fields.b = 0.14;
  (pGVar1->DarkSurface).fields.a = 1.0;
  return;
}


