// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetChoicePreviewRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$Configure
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__Configure (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, System_String_o* value, System_String_o* text, bool enabled, const MethodInfo* method);
// 0x58f7230
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f73c2: add r14, 0x30
// asm:   0x58f73c6: movaps xmm0, xmmword ptr [rip - 0x48f1b5d]
// asm:   0x58f73cd: mov rdi, rbx
// asm:   0x58f73d0: mov rsi, r14
// asm:   0x58f73d3: mov rdx, r12
// asm:   0x58f73d6: movaps xmm1, xmm0
// asm:   0x58f73d9: call 0x58e04f0  ; Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText()
// asm:   0x58f73de: jmp 0x58f72bd
// asm:   0x58f745e: lea rax, [rip + 0x19dce1b]  ; "Aottg2"
// asm:   0x58f7465: mov rsi, qword ptr [rax]
// asm:   0x58f7468: mov rdi, rbx
// asm:   0x58f746b: xor edx, edx
// asm:   0x58f746d: call 0x59c80e0  ; PatreonEffects_NameFontCatalog__Apply()
// asm:   0x58f7472: mov rax, qword ptr [rbx]
// asm:   0x58f7475: mov rsi, qword ptr [rax + 0x2b0]
// asm:   0x58f747c: movaps xmm0, xmmword ptr [rip - 0x48f1c13]
// asm:   0x58f7483: mov rdi, rbx
// asm:   0x58f7486: movaps xmm1, xmm0
// asm:   0x58f7489: call qword ptr [rax + 0x2a8]  ; vtable slot 23
// asm:   0x58f748f: jmp 0x58f72bd

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__Configure
               (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this,System_String_o *value,
               System_String_o *text,bool enabled,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  TMPro_TMP_Text_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Image_o *image;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_String_o *pSVar5;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o UVar6;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_58;
  
  method_03 = (MethodInfo *)value;
  if (Il2CppMethodInitialized_075455d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Aottg2");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Guild Preset Preview");
    Il2CppMethodInitialized_075455d4 = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__get_Label(__this,method_03);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((__this_00 != (TMPro_TMP_Text_o *)0x0) &&
     (pUVar3 = TMPro_TMP_Text__get_transform(__this_00,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
    image = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage
                      (pUVar3,&(__this->fields)._image,"AoTTG Guild Preset Preview",31.0,
                       (MethodInfo *)&"AoTTG Guild Preset Preview");
    Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage(image,value,method_00);
    if ((image != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if ((bVar1) || (pSVar5 = text, text == (System_String_o *)0x0)) {
        pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      (*(__this_00->klass->vtable)._66_set_text.methodPtr)
                (__this_00,pSVar5,(__this_00->klass->vtable)._66_set_text.method);
      if (enabled) {
        local_58.fields.Kind = 0;
        local_58.fields._20_4_ = 0;
        local_58.fields.Sprite = (System_String_o *)0x0;
        local_58.fields.Id = (System_String_o *)0x0;
        local_58.fields.Label = (System_String_o *)0x0;
        local_58.fields.ImageScale = 0.0;
        local_58.fields._36_4_ = 0;
        bVar2 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(value,&local_58,method_01);
        if (!bVar2) {
          color_01.fields.b = 1.0;
          color_01.fields.a = 1.0;
          color_01.fields.r = 1.0;
          color_01.fields.g = 1.0;
          Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                    (__this_00,&(__this->fields)._effect,color_01,method_02);
          if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
          }
          PatreonEffects_NameFontCatalog__Apply(__this_00,"Aottg2",(MethodInfo *)0x0);
          UVar6.fields.b = 1.0;
          UVar6.fields.a = 1.0;
          UVar6.fields.r = 1.0;
          UVar6.fields.g = 1.0;
          (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                    (__this_00,UVar6,(__this_00->klass->vtable)._23_set_color.method);
          return;
        }
        if (bVar1) {
          return;
        }
        color.fields.b = 1.0;
        color.fields.a = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                  (__this_00,&(__this->fields)._effect,value,text,color,method);
        return;
      }
      color_00.fields.b = 0.58;
      color_00.fields.a = 1.0;
      color_00.fields.r = 0.58;
      color_00.fields.g = 0.58;
      Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                (__this_00,&(__this->fields)._effect,color_00,method_01);
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$get_Label
// il2cpp: TMPro_TMP_Text_o* Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__get_Label (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, const MethodInfo* method);
// 0x58f74e0

TMPro_TMP_Text_o *
Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__get_Label
          (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this,MethodInfo *method)

{
  TMPro_TMP_Text_o **targetAddress;
  bool bVar1;
  TMPro_TMP_Text_o *pTVar2;
  
  if (Il2CppMethodInitialized_075455d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075455d5 = '\x01';
  }
  pTVar2 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._label;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pTVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_TMP_Text);
    (__this->fields)._label = pTVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  return *targetAddress;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, const MethodInfo* method);
// 0x58f78b0

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  UnityEngine_Color_o color;
  
  color.fields.b = 1.0;
  color.fields.a = 1.0;
  color.fields.r = 1.0;
  color.fields.g = 1.0;
  Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
            ((__this->fields)._label,&(__this->fields)._effect,color,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreviewRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o* __this, const MethodInfo* method);
// 0x58f78d0

void Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreviewRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


