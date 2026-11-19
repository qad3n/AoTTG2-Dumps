// Type: Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterStyleChoicePreview.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Register (const MethodInfo* method);
// 0x58e2c10

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Register(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_StaticFields *pGVar3;
  System_Action_GisketchChoiceOptionRenderContext__o *pSVar4;
  
  if (Il2CppMethodInitialized_0754552a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderFont);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-font-preview");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effect-preview");
    Il2CppMethodInitialized_0754552a = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields;
    cVar1 = pGVar3->_registered;
  }
  else {
    pGVar3 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview)->static_fields;
    cVar1 = pGVar3->_registered;
  }
  if (cVar1 != '\0') {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields;
  }
  pGVar3->_registered = true;
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar4,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderEffect,
             (MethodInfo_4A81BE0 *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
  }
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
            ("profile-character-effect-preview",pSVar4,(MethodInfo *)0x0);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar4,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderFont,
             (MethodInfo_4A81BE0 *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
            ("profile-character-font-preview",pSVar4,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$UseEffectRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseEffectRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x58e6800

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseEffectRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754552b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effect-preview");
    Il2CppMethodInitialized_0754552b = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  (node->fields).choiceOptionRenderer = "profile-character-effect-preview";
  Il2CppCodeGenWriteBarrier(&(node->fields).choiceOptionRenderer);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$UseFontRenderer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseFontRenderer (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x58e6850

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__UseFontRenderer
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754552c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-font-preview");
    Il2CppMethodInitialized_0754552c = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  (node->fields).choiceOptionRenderer = "profile-character-font-preview";
  Il2CppCodeGenWriteBarrier(&(node->fields).choiceOptionRenderer);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$RenderEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderEffect (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x58e6df0
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e6fe2: jmp 0x58e70c3
// asm:   0x58e7094: lea rcx, [rip + 0x19ed1e5]  ; "Aottg2"
// asm:   0x58e709b: mov rcx, qword ptr [rcx]
// asm:   0x58e709e: mov rdi, r14
// asm:   0x58e70a1: mov esi, r15d
// asm:   0x58e70a4: mov rdx, rax
// asm:   0x58e70a7: call 0x58e7ab0  ; Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect()
// asm:   0x58e70ac: jmp 0x58e6ea6
// asm:   0x58e70b6: mov rdi, r14
// asm:   0x58e70b9: call 0x58e7590  ; Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled()
// asm:   0x58e70be: jmp 0x58e6ea6

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderEffect
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  uint uVar1;
  int32_t effect;
  bool bVar2;
  uint in_EAX;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this;
  UnityEngine_Color_array *pUVar3;
  System_String_array *colors;
  System_String_o **method_00;
  MethodInfo *method_01;
  System_String_o *font;
  MethodInfo *pMVar4;
  MethodInfo *in_R8;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_0754552d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"FourColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoColorGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    Il2CppMethodInitialized_0754552d = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview(context,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(context,pMVar4);
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    bVar2 = (context->fields).Enabled;
    pMVar4 = (MethodInfo *)(ulong)bVar2;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback(context,bVar2,method_01);
    if ((context->fields).Enabled == false) {
      if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(__this,pMVar4);
        return;
      }
    }
    else {
      bVar2 = System_String__op_Equality((context->fields).Value,"Color",(MethodInfo *)0x0);
      font = "Aottg2";
      if (bVar2) {
        if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
          if (Il2CppMethodInitialized_07545536 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color_array);
            Il2CppMethodInitialized_07545536 = '\x01';
          }
          pUVar3 = (UnityEngine_Color_array *)SZArrayNew(TypeInfo_UnityEngine_Color_array,2);
          if (pUVar3 != (UnityEngine_Color_array *)0x0) {
            uVar1 = (uint)pUVar3->max_length;
            method_00 = (System_String_o **)(ulong)uVar1;
            if (uVar1 != 0) {
              pUVar3->m_Items[0].fields.r = 1.0;
              pUVar3->m_Items[0].fields.g = 1.0;
              pUVar3->m_Items[0].fields.b = 1.0;
              pUVar3->m_Items[0].fields.a = 1.0;
              if (uVar1 != 1) {
                pUVar3->m_Items[1].fields.r = 1.0;
                pUVar3->m_Items[1].fields.g = 1.0;
                pUVar3->m_Items[1].fields.b = 1.0;
                pUVar3->m_Items[1].fields.a = 1.0;
                goto label_058e703f;
              }
            }
            ThrowIndexOutOfRangeException();
          }
        }
      }
      else {
        pMVar4 = (MethodInfo *)"TwoColorGradient";
        bVar2 = System_String__op_Equality((context->fields).Value,"TwoColorGradient",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
          }
          pUVar3 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                             ((System_Collections_Generic_IList_string__o *)
                              TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields
                              ->TwoGradient,pMVar4);
          font = "Aottg2";
        }
        else {
          pMVar4 = (MethodInfo *)"FourColorGradient";
          bVar2 = System_String__op_Equality((context->fields).Value,"FourColorGradient",(MethodInfo *)0x0);
          if (!bVar2) {
            pMVar4 = (MethodInfo *)((long)&uStack_28 + 4);
            bVar2 = PatreonEffects_NameEffectPresets__TryResolve
                              ((context->fields).Value,(int32_t *)pMVar4,(MethodInfo *)0x0);
            if (bVar2) {
              effect = uStack_28._4_4_;
              pMVar4 = (MethodInfo *)0x0;
              colors = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors
                                 ((context->fields).Value,(MethodInfo *)0x0);
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
              }
              pUVar3 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                                 ((System_Collections_Generic_IList_string__o *)colors,pMVar4);
              if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
                Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureEffect
                          (__this,effect,pUVar3,"Aottg2",in_R8);
                return;
              }
            }
            else if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
              Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(__this,pMVar4);
              return;
            }
            goto label_058e70c3;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
          }
          pUVar3 = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
                             ((System_Collections_Generic_IList_string__o *)
                              TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields
                              ->FourGradient,pMVar4);
          font = "Aottg2";
        }
        "Aottg2" = font;
        if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
          method_00 = &"Aottg2";
label_058e703f:
          Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureGradient
                    (__this,pUVar3,font,(MethodInfo *)method_00);
          return;
        }
      }
    }
  }
label_058e70c3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$RenderFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderFont (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x58e7bf0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__RenderFont
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar2;
  
  if (Il2CppMethodInitialized_0754552e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754552e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview(context,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar2 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface(context,pMVar2);
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    bVar1 = (context->fields).Enabled;
    pMVar2 = (MethodInfo *)(ulong)bVar1;
    Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback(context,bVar1,method_00);
    if ((context->fields).Enabled == false) {
      if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureDisabled(__this,pMVar2);
        return;
      }
    }
    else if (__this != (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview__ConfigureFont
                (__this,(context->fields).Value,method_01);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Preview
// il2cpp: Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o* Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x58e70d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e71db: xor ebx, ebx

Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Preview
          (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *pGVar3;
  UnityEngine_GameObject_o *__this;
  
  if (Il2CppMethodInitialized_0754552f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgNameStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgNameStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754552f = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    pTVar1 = (context->fields).Label;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pTVar1 = (context->fields).Label;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                  (pTVar1,(context->fields).Text,(pTVar1->klass->vtable)._66_set_text.method);
        pTVar1 = (context->fields).Label;
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pGVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pTVar1,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_AottgNameStyleChoicePreview);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar2) {
            return pGVar3;
          }
          pTVar1 = (context->fields).Label;
          if ((pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) &&
             (__this = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0),
             __this != (UnityEngine_GameObject_o *)0x0)) {
            pGVar3 = UnityEngine_GameObject__AddComponent_object_
                               (__this,(MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_AottgNameStyleChoicePreview
                               );
            return pGVar3;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$SetFeedback
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, bool ownsColor, const MethodInfo* method);
// 0x58e74a0

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__SetFeedback
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,bool ownsColor,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  System_String_o *normal;
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_00;
  
  if (Il2CppMethodInitialized_07545530 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDropdownItemFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545530 = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) {
    x = (UnityEngine_Object_o *)(context->fields).Root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (context->fields).Root;
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_058e757e;
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            (__this,(MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDropdownItemFeedback
                            );
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) {
      normal = (context->fields).Text;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
                (__this_00,normal,normal,(bool)(ownsColor & (context->fields).Enabled),(MethodInfo *)0x0);
      return;
    }
  }
label_058e757e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$ApplyDarkSurface
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o* context, const MethodInfo* method);
// 0x58e7200
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e7367: lea r14, [rip + 0x19e9a0a]  ; "-popover"
// asm:   0x58e736e: lea r13, [rip + 0x19bd79b]  ; MethodInfo_UnityEngine_Component_GetComponent_Image
// asm:   0x58e7375: lea rbp, [rip + 0x198e0dc]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview
// asm:   0x58e737c: jmp 0x58e738d

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__ApplyDarkSurface
               (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *__this;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Transform_o *__this_01;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07545531 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"-popover");
    il2cpp_codegen_initialize_runtime_metadata(&"-options-scroll");
    Il2CppMethodInitialized_07545531 = '\x01';
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
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_058e7497;
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
label_058e740f:
          pUVar2 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_01,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
            }
            if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) break;
            (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                      (pUVar2,(UnityEngine_Color_o)
                              (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields
                              ->DarkSurface).fields,(pUVar2->klass->vtable)._23_set_color.method);
          }
        }
        else {
          pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
          if (pSVar3 == (System_String_o *)0x0) break;
          bVar1 = System_String__EndsWith(pSVar3,"-options-scroll",(MethodInfo *)0x0);
          if (bVar1) goto label_058e740f;
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
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
        }
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                    (pUVar2,(UnityEngine_Color_o)
                            (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->
                            DarkSurface).fields,(pUVar2->klass->vtable)._23_set_color.method);
          return;
        }
      }
    }
  }
label_058e7497:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Parse
// il2cpp: UnityEngine_Color_array* Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse (System_Collections_Generic_IList_string__o* colors, const MethodInfo* method);
// 0x58e7740
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e78bd: nop dword ptr [rax]

UnityEngine_Color_array *
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse
          (System_Collections_Generic_IList_string__o *colors,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  System_Collections_Generic_IList_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  uint32_t length;
  int32_t iVar5;
  VirtualInvokeData *pVVar6;
  UnityEngine_Color_array *pUVar7;
  System_String_o *htmlString;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Color_Fields local_48;
  
  if (Il2CppMethodInitialized_07545532 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_ICollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IList_string);
    Il2CppMethodInitialized_07545532 = '\x01';
  }
  if (colors == (System_Collections_Generic_IList_string__o *)0x0) {
label_058e7983:
    ThrowNullReferenceException();
  }
  pSVar2 = colors->klass;
  uVar10 = (ulong)(pSVar2->_2).interface_offsets_count;
  if (uVar10 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar9 = 0;
    do {
      if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar3->interfaceType + lVar9) ==
          TypeInfo_System_Collections_Generic_ICollection_string) {
        pVVar6 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
        goto label_058e77f1;
      }
      lVar9 = lVar9 + 0x10;
    } while (uVar10 * 0x10 != lVar9);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)colors,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058e77f1:
  length = (*pVVar6->methodPtr)((Il2CppObject *)colors,pVVar6->method);
  pUVar7 = (UnityEngine_Color_array *)SZArrayNew(TypeInfo_UnityEngine_Color_array,length);
  uVar10 = 0;
  do {
    pSVar2 = colors->klass;
    uVar8 = (ulong)(pSVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_ICollection_string__c **)((long)&pIVar3->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_ICollection_string) {
          pVVar6 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
          goto label_058e7883;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)colors,
                        (Il2CppClass *)TypeInfo_System_Collections_Generic_ICollection_string,0);
label_058e7883:
    iVar5 = (*pVVar6->methodPtr)((Il2CppObject *)colors,pVVar6->method);
    if ((long)iVar5 <= (long)uVar10) {
      return pUVar7;
    }
    pSVar2 = colors->klass;
    uVar8 = (ulong)(pSVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IList_string__c **)((long)&pIVar3->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IList_string) {
          pVVar6 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
          goto label_058e78f3;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)colors,(Il2CppClass *)TypeInfo_System_Collections_Generic_IList_string
                        ,0);
label_058e78f3:
    htmlString = (*pVVar6->methodPtr)((Il2CppObject *)colors,(int32_t)uVar10,pVVar6->method);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    bVar4 = UnityEngine_ColorUtility__TryParseHtmlString
                      (htmlString,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if (bVar4) {
      fVar11 = local_48.r;
      fVar12 = local_48.g;
      fVar13 = local_48.b;
      fVar14 = local_48.a;
    }
    else {
      fVar11 = 1.0;
      fVar12 = 1.0;
      fVar13 = fVar11;
      fVar14 = fVar12;
    }
    if (pUVar7 == (UnityEngine_Color_array *)0x0) goto label_058e7983;
    if ((uint)pUVar7->max_length <= uVar10) {
      ThrowIndexOutOfRangeException();
    }
    pUVar1 = pUVar7->m_Items + uVar10;
    (pUVar1->fields).r = fVar11;
    (pUVar1->fields).g = fVar12;
    (pUVar1->fields).b = fVar13;
    (pUVar1->fields).a = fVar14;
    uVar10 = uVar10 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Parse
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse (System_String_o* hex, const MethodInfo* method);
// 0x58e7dc0

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Parse_57e7dc0
          (System_String_o *hex,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  bool bVar2;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_Fields UStack_18;
  
  UStack_18.r = 0.0;
  UStack_18.g = 0.0;
  UStack_18.b = 0.0;
  UStack_18.a = 0.0;
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    (hex,(UnityEngine_Color_o *)&UStack_18,(MethodInfo *)0x0);
  if (bVar2) {
    UVar1.b = UStack_18.b;
    UVar1.a = UStack_18.a;
    UVar1.r = UStack_18.r;
    UVar1.g = UStack_18.g;
    return (UnityEngine_Color_o)UVar1;
  }
  UVar3.fields.b = 1.0;
  UVar3.fields.a = 1.0;
  UVar3.fields.r = 1.0;
  UVar3.fields.g = 1.0;
  return (UnityEngine_Color_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview___cctor (const MethodInfo* method);
// 0x58e7e00

void Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_StaticFields *pGVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07545533 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"#B7F8C8FF");
    il2cpp_codegen_initialize_runtime_metadata(&"#8CEBFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"#A8F5D6FF");
    il2cpp_codegen_initialize_runtime_metadata(&"#97F0E8FF");
    Il2CppMethodInitialized_07545533 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar2 == (System_String_array *)0x0) {
label_058e7fc1:
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "#B7F8C8FF";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "#8CEBFFFF";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->TwoGradient = pSVar2;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->TwoGradient
                );
      pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
      if (pSVar2 == (System_String_array *)0x0) goto label_058e7fc1;
      if ((int)pSVar2->max_length != 0) {
        pSVar2->m_Items[0] = "#B7F8C8FF";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
        if ((pSVar2->max_length & 0xfffffffe) != 0) {
          pSVar2->m_Items[1] = "#A8F5D6FF";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
          if (2 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[2] = "#97F0E8FF";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
            if ((pSVar2->max_length & 0xfffffffc) != 0) {
              pSVar2->m_Items[3] = "#8CEBFFFF";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
              pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields;
              pGVar1->FourGradient = pSVar2;
              Il2CppCodeGenWriteBarrier(&pGVar1->FourGradient);
              pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields;
              (pGVar1->DarkSurface).fields.r = 0.14;
              (pGVar1->DarkSurface).fields.g = 0.14;
              (pGVar1->DarkSurface).fields.b = 0.14;
              (pGVar1->DarkSurface).fields.a = 1.0;
              return;
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


