// Type: Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterSetEffectsDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___cctor (const MethodInfo* method);
// 0x58e6360

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545525 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
    Il2CppMethodInitialized_07545525 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, const MethodInfo* method);
// 0x58e63d0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__33_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__33_0 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58e63e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e6564: cmp byte ptr [rip + 0x1c5efc0], 0
// asm:   0x58e656b: je 0x58e67cd
// asm:   0x58e6571: test rbx, rbx
// asm:   0x58e67e9: jmp 0x58e6593

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__33_0
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  System_Action_GisketchActionContext__o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  
  if (Il2CppMethodInitialized_07545526 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_SelectEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_SelectFont);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&"Font");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-type");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-font");
    il2cpp_codegen_initialize_runtime_metadata(&"Effect");
    Il2CppMethodInitialized_07545526 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__SelectValue
                     (pGVar1->_hasAccess,pGVar1->_draftEnabled,pGVar1->_draftType,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Options
                     (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                      _hasAccess,(MethodInfo *)0x0);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (pSVar4,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_SelectEffect,
             (MethodInfo_4A803E0 *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__FormSelect_5269900
                       (row,"profile-character-set-effects-type","Effect",pSVar2,pGVar3,pSVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    }
    if (Il2CppMethodInitialized_0754552b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effect-preview");
      Il2CppMethodInitialized_0754552b = '\x01';
    }
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).choiceOptionRenderer = "profile-character-effect-preview";
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).choiceOptionRenderer);
    }
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(50.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).layout = pGVar7;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont;
      pGVar3 = Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options
                         (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                          _hasAccess,(MethodInfo *)0x0);
      pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pSVar4,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_SelectFont,
                 (MethodInfo_4A803E0 *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__FormSelect_5269900
                         (row,"profile-character-set-effects-font","Font",pSVar2,pGVar3,pSVar4,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0754552c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile-character-font-preview");
        Il2CppMethodInitialized_0754552c = '\x01';
      }
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).choiceOptionRenderer = "profile-character-font-preview";
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).choiceOptionRenderer);
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(50.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).layout = pGVar7;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__33_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__33_1 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* callout, const MethodInfo* method);
// 0x58e68a0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__33_1
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *callout,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545527 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"calloutText");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.TextColorHelp");
    Il2CppMethodInitialized_07545527 = '\x01';
  }
  if (callout == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (callout,"MainMenu.Profile.TextColorHelp","calloutText",(System_String_o *)0x0,(System_String_o *)0x0
             ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__33_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__33_2 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58e6910
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e699b: nop dword ptr [rax + rax]
// asm:   0x58e6a2b: mov dword ptr [rsp + 0x10], ebx
// asm:   0x58e6a2f: cmp byte ptr [rip + 0x1c5eae9], 0
// asm:   0x58e6a36: jne 0x58e6a4b
// asm:   0x58e6be0: jmp 0x58e69a0
// asm:   0x58e6c06: jmp 0x58e6a4b

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__33_2
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0_Fields GVar2;
  int iVar3;
  System_String_array *pSVar4;
  int32_t iVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_02;
  int iVar8;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0_Fields GStack_38;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0_Fields GStack_34;
  
  if (Il2CppMethodInitialized_07545528 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c__DisplayClass33_0_BuildBody_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c__DisplayClass33_0);
    il2cpp_codegen_initialize_runtime_metadata(&"-slot");
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_07545528 = '\x01';
  }
  iVar8 = 0;
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  while( true ) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar4 == (System_String_array *)0x0) break;
    if ((int)pSVar4->max_length <= iVar8) {
      return;
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c__DisplayClass33_0)
    ;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0_o *)0x0)
    break;
    (__this_00->fields).index = iVar8;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c__DisplayClass33_0_BuildBody_b__3
               ,(MethodInfo_4A81BE0 *)0x0);
    GVar2.index = (__this_00->fields).index;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    GStack_38.index = GVar2.index;
    if (Il2CppMethodInitialized_0754551f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
      Il2CppMethodInitialized_0754551f = '\x01';
    }
    pSVar6 = System_Int32__ToString(&GStack_38.index,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_52f0320("profile-character-set-effects-draft-color-",pSVar6,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_52f0320(pSVar6,"-slot",(MethodInfo *)0x0);
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (row,"clear",__this_01,pSVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    iVar3 = (__this_00->fields).index;
    if (Il2CppMethodInitialized_07545516 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      Il2CppMethodInitialized_07545516 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    iVar5 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                       _textMode,(MethodInfo *)0x0);
    if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
    (pGVar7->fields).active =
         TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled != false
         || iVar3 < iVar5 && 0 < iVar5;
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_02,(MethodInfo *)0x0);
    GStack_34.index = (__this_00->fields).index;
    if (Il2CppMethodInitialized_07545520 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.draft-color-");
      il2cpp_codegen_initialize_runtime_metadata(&".visible");
      Il2CppMethodInitialized_07545520 = '\x01';
    }
    pSVar6 = System_Int32__ToString(&GStack_34.index,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_5301f10
                       ("profile-character-set-effects.draft-color-",pSVar6,".visible",(MethodInfo *)0x0);
    if (__this_02 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) break;
    (__this_02->fields).visible = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).visible);
    (pGVar7->fields).bind = __this_02;
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields).bind);
    iVar8 = iVar8 + 1;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c__DisplayClass33_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x58e6c20

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c__DisplayClass33_0$$<BuildBody>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0___BuildBody_b__3 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* swatch, const MethodInfo* method);
// 0x58e6c30
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e6c9c: mov dword ptr [rsp + 4], ebp
// asm:   0x58e6ca0: cmp byte ptr [rip + 0x1c5e878], 0
// asm:   0x58e6ca7: jne 0x58e6cbc
// asm:   0x58e6dd5: jmp 0x58e6cbc

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0___BuildBody_b__3
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass33_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *swatch,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *value;
  undefined4 in_EAX;
  System_String_o *pSVar4;
  System_String_o *label;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this_01;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07545529 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ApplyDraftColor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_07545529 = '\x01';
  }
  iVar1 = (__this->fields).index;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  uStack_38 = CONCAT44(iVar1,(undefined4)uStack_38);
  if (Il2CppMethodInitialized_0754551f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
    Il2CppMethodInitialized_0754551f = '\x01';
  }
  pSVar4 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_52f0320("profile-character-set-effects-draft-color-",pSVar4,(MethodInfo *)0x0);
  uStack_38._0_4_ = CONCAT22((short)(__this->fields).index + 0x41,(undefined2)uStack_38);
  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556750);
  }
  label = System_Char__ToString((uint16_t *)((long)&uStack_38 + 2),(MethodInfo *)0x0);
  pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
  if (pSVar3 != (System_String_array *)0x0) {
    uVar2 = (__this->fields).index;
    if ((uint)pSVar3->max_length <= uVar2) {
      ThrowIndexOutOfRangeException();
    }
    value = pSVar3->m_Items[(int)uVar2];
    __this_00 = (System_Action_GisketchActionContext__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ApplyDraftColor,
               (MethodInfo_4A803E0 *)0x0);
    __this_01 = (Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor
              (__this_01,pSVar4,label,value,__this_00,true,true,true,false,(MethodInfo *)0x0);
    if (swatch != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (swatch,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_Title (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x58e1350

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545503 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SetEffects");
    Il2CppMethodInitialized_07545503 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("MainMenu.Profile.SetEffects",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x58e13b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545504 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/SparkleIcon");
    Il2CppMethodInitialized_07545504 = '\x01';
  }
  return "UI/Icons/Profile/SparkleIcon";
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_GuardUnsavedChanges
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_GuardUnsavedChanges (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x58e13e0

bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_GuardUnsavedChanges
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  return true;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x58e13f0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545505 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545505 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(760.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x58e14b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545506 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545506 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Open
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* targetId, System_String_o* effectPrefix, bool textEditable, const MethodInfo* method);
// 0x58e1560
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e1827: nop word ptr [rax + rax]
// asm:   0x58e18b4: jmp 0x58e1830
// asm:   0x58e19a0: jmp 0x58e1a64
// asm:   0x58e19ea: jmp 0x58e17d0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *targetId,
               System_String_o *effectPrefix,bool textEditable,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar2;
  void *pvVar3;
  System_String_array *pSVar4;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar5;
  MethodInfo *pMVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_Action_GameObject__o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  ulong uVar8;
  Il2CppClass *pIVar9;
  long lVar10;
  
  if (Il2CppMethodInitialized_07545507 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_DiscardPreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects");
    Il2CppMethodInitialized_07545507 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pGVar2->_targetId = targetId;
  Il2CppCodeGenWriteBarrier(&pGVar2->_targetId);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pGVar2->_effectPrefix = effectPrefix;
  Il2CppCodeGenWriteBarrier(&pGVar2->_effectPrefix);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pGVar2->_textEditable = textEditable;
  pGVar2->_ownerSource = context.fields.GameObject;
  Il2CppCodeGenWriteBarrier(&pGVar2->_ownerSource);
  bVar5 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_hasAccess = bVar5;
  pSVar7 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pMVar6 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    pMVar6 = extraout_RDX_00;
  }
  pMVar6 = (MethodInfo *)Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value(targetId,pSVar7,pMVar6);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pGVar2->_initialValue = (System_String_o *)pMVar6;
  Il2CppCodeGenWriteBarrier(&pGVar2->_initialValue);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pSVar7 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Font(effectPrefix,pMVar6);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pGVar2->_initialFont = pSVar7;
  Il2CppCodeGenWriteBarrier(&pGVar2->_initialFont);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pMVar6 = (MethodInfo *)pGVar2->_initialFont;
  pGVar2->_draftFont = (System_String_o *)pMVar6;
  Il2CppCodeGenWriteBarrier(&pGVar2->_draftFont);
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_hasAccess == false) {
    bVar5 = false;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    pIVar9 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    bVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled(effectPrefix,pMVar6);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    pIVar9 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog =
       (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c *)pIVar9;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar9);
    pIVar9 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
    TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled = bVar5;
  }
  else {
    *(bool *)((long)pIVar9->static_fields + 0x50) = bVar5;
  }
  if (bVar5 == false) {
    uVar1 = (pIVar9->_2).cctor_finished_or_no_cctor;
    pSVar7 = "None";
  }
  else {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar7 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType(effectPrefix,pMVar6);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    pIVar9 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar9);
    pIVar9 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
  }
  pvVar3 = pIVar9->static_fields;
  *(System_String_o **)((long)pvVar3 + 0x38) = pSVar7;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar3 + 0x38));
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pGVar2->_textMode = "Color";
  Il2CppCodeGenWriteBarrier(&pGVar2->_textMode);
  lVar10 = 0x20;
  uVar8 = 0;
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  pMVar6 = extraout_RDX_01;
  while( true ) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pMVar6 = extraout_RDX_02;
    }
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar4 == (System_String_array *)0x0) break;
    if ((long)(int)pSVar4->max_length <= (long)uVar8) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar5) {
        if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) break;
        root = UnityEngine_GameObject__GetComponentInParent_object_
                         (context.fields.GameObject,
                          (MethodInfo_353BB40 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GameObject);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_DiscardPreview,
                 (MethodInfo_4A81BE0 *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions);
      }
      Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Register
                ("profile-character-set-effects",__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
        Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility
                  (root,(MethodInfo *)__this_01);
        pIVar9 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
      }
      else {
        Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility
                  (root,(MethodInfo *)__this_01);
        pIVar9 = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog =
           (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c *)pIVar9;
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        __this = (root->fields)._State_k__BackingField;
        if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          if ((pIVar9->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(pIVar9);
          }
          bVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled
                            ((MethodInfo *)pIVar9);
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    (__this,"profile-character-set-effects.text-colors.enabled",bVar5,(MethodInfo *)0x0);
        }
        __this_00 = (root->fields)._Overlays_k__BackingField;
        if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (__this_00,"profile-character-set-effects",true,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
      pMVar6 = extraout_RDX_04;
    }
    else {
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      pMVar6 = extraout_RDX_05;
    }
    pSVar7 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor(effectPrefix,(int32_t)uVar8,pMVar6);
    if (pSVar4 == (System_String_array *)0x0) break;
    if ((uint)pSVar4->max_length <= uVar8) {
      ThrowIndexOutOfRangeException();
    }
    pSVar4->m_Items[uVar8] = pSVar7;
    Il2CppCodeGenWriteBarrier((void **)((long)pSVar4->m_Items + lVar10 + -0x20));
    uVar8 = uVar8 + 1;
    lVar10 = lVar10 + 8;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    pMVar6 = extraout_RDX_03;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58e2200
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e28c1: jmp 0x58e2bfe
// asm:   0x58e28f5: jmp 0x58e2523
// asm:   0x58e2b27: jmp 0x58e2bfe

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *previewFont;
  Il2CppObject *pIVar2;
  System_String_o *pickerId;
  System_String_o *colorsEnabledKey;
  bool colorsEnabled;
  bool bVar3;
  int32_t iVar4;
  System_Action_GisketchActionContext__o *__this_00;
  System_Action_GameObject__o *__this_01;
  MethodInfo *method_00;
  System_String_o *pSVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_StaticFields *pGVar11;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar12;
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_c *method_01;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c *method_02;
  System_String_o *previewEffectType;
  System_String_array *previewEffectColors;
  MethodInfo *in_stack_ffffffffffffff78;
  
  if (Il2CppMethodInitialized_07545508 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ApplySelectedTextColor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ImportedColoredText);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__33_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__33_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__33_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Effects");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-text-color-help");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.draft");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceEvenly");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"callout");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-select-row");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.text-color-help.visible");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-text-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.effect-colors.visible");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-effect-colors");
    Il2CppMethodInitialized_07545508 = '\x01';
  }
  method_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview__Register((MethodInfo *)method_01);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ApplySelectedTextColor
             ,(MethodInfo_4A803E0 *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            ("profile-character-set-effects-text-picker","#FFFFFF",__this_00,false,true,false,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_initialValue;
  colorsEnabled =
       Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled
                 ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  bVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textEditable;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GameObject);
  previewEffectType = (System_String_o *)0x0;
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ImportedColoredText,
             (MethodInfo_4A81BE0 *)0x0);
  colorsEnabledKey = "profile-character-set-effects.text-colors.enabled";
  pickerId = "profile-character-set-effects-text-picker";
  pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  if (pGVar12->_draftEnabled != false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    }
    previewEffectType = pGVar12->_draftType;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    if (pGVar12->_draftEnabled == false) goto label_058e28e5;
label_058e24fe:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    }
    previewEffectColors = pGVar12->DraftColors;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    if (pGVar12->_draftEnabled != false) goto label_058e24fe;
label_058e28e5:
    previewEffectColors = (System_String_array *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  previewFont = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont;
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor___ctor
            ((Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *)method_00,pSVar5,pickerId,
             colorsEnabledKey,colorsEnabled,bVar3,__this_01,previewEffectType,
             (System_Collections_Generic_IList_string__o *)previewEffectColors,previewFont,
             in_stack_ffffffffffffff78);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_058e2bfe;
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)method_00,(MethodInfo *)0x0);
  pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__EffectDialogDraftValue
                     (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                      _initialValue,method_00);
  Gisketch_Aottg2UI_Code_AottgUi__FormDraft
            (body,"profile-character-set-effects.draft",pSVar5,"Effects",(System_String_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
  }
  pSVar5 = "row";
  pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields;
  pSVar6 = pGVar11->__9__33_0;
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
      pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pGVar11->__9;
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar6,pIVar2,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__33_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields;
    pGVar11->__9__33_0 = pSVar6;
    Il2CppCodeGenWriteBarrier(&pGVar11->__9__33_0);
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar7,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,pSVar5,pSVar6,"profile-character-set-effects-select-row",pGVar8,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
  }
  pSVar5 = "callout";
  pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields;
  pSVar6 = pGVar11->__9__33_1;
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
      pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pGVar11->__9;
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar6,pIVar2,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__33_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields;
    pGVar11->__9__33_1 = pSVar6;
    Il2CppCodeGenWriteBarrier(&pGVar11->__9__33_1);
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(84.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                     (body,pSVar5,pSVar6,"profile-character-set-effects-text-color-help",pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    if (Il2CppMethodInitialized_07545515 == '\0') goto label_058e2908;
label_058e28a0:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor != 0)
    goto label_058e28b3;
label_058e292e:
    method_02 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)method_02);
  }
  else {
    if (Il2CppMethodInitialized_07545515 != '\0') goto label_058e28a0;
label_058e2908:
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_07545515 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    goto label_058e292e;
label_058e28b3:
    bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled
                      ((MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_058e2bfe;
  (pGVar9->fields).active = bVar3;
  pGVar10 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar10,(MethodInfo *)0x0);
  if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_058e2bfe;
  (pGVar10->fields).visible = "profile-character-set-effects.text-color-help.visible";
  Il2CppCodeGenWriteBarrier(&(pGVar10->fields).visible);
  (pGVar9->fields).bind = pGVar10;
  Il2CppCodeGenWriteBarrier(&(pGVar9->fields).bind);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
  }
  pSVar5 = "row";
  pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields;
  pSVar6 = pGVar11->__9__33_2;
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
      pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pGVar11->__9;
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar6,pIVar2,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__33_2,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar11 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields;
    pGVar11->__9__33_2 = pSVar6;
    Il2CppCodeGenWriteBarrier(&pGVar11->__9__33_2);
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceEvenly","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,10.0,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                     (body,pSVar5,pSVar6,"profile-character-set-effects-effect-colors",pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    if (Il2CppMethodInitialized_07545514 == '\0') goto label_058e2b3a;
label_058e2b06:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor != 0)
    goto label_058e2b13;
label_058e2b5a:
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    if (pGVar12->_draftEnabled == false) goto label_058e2b72;
label_058e2b22:
    bVar3 = true;
  }
  else {
    if (Il2CppMethodInitialized_07545514 != '\0') goto label_058e2b06;
label_058e2b3a:
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_07545514 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    goto label_058e2b5a;
label_058e2b13:
    pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    if (pGVar12->_draftEnabled != false) goto label_058e2b22;
label_058e2b72:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pGVar12 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    }
    iVar4 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops(pGVar12->_textMode,(MethodInfo *)0x0)
    ;
    bVar3 = 0 < iVar4;
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar9->fields).active = bVar3;
    pGVar10 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar10,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (pGVar10->fields).visible = "profile-character-set-effects.effect-colors.visible";
      Il2CppCodeGenWriteBarrier(&(pGVar10->fields).visible);
      (pGVar9->fields).bind = pGVar10;
      Il2CppCodeGenWriteBarrier(&(pGVar9->fields).bind);
      return;
    }
  }
label_058e2bfe:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x58e3390

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *__this_00;
  
  if (Il2CppMethodInitialized_07545509 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_Save);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_07545509 = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Cancel","overlay.close",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_Save,
             (MethodInfo_4A803E0 *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_52658f0
            (footer,"Common.Save",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SelectEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectEffect (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58e3460
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e3770: jmp 0x58e373e

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectEffect
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c *klass;
  bool bVar2;
  int32_t iVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar5;
  System_String_o **ppSVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  System_String_o *pSVar8;
  MethodInfo *key;
  System_String_o *type;
  
  if (Il2CppMethodInitialized_0754550a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_0754550a = '\x01';
  }
  ppSVar6 = &((context.fields.Node)->fields).value;
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar6 = &"Color";
  }
  type = *ppSVar6;
  bVar2 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode(type,(MethodInfo *)0x0);
  pSVar8 = type;
  if (!bVar2) {
    pSVar8 = "Color";
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pGVar4->_textMode = pSVar8;
  Il2CppCodeGenWriteBarrier(&pGVar4->_textMode);
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_hasAccess == false) {
    bVar2 = false;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar2 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode(type,(MethodInfo *)0x0);
    bVar2 = !bVar2;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    klass = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    pGVar4->_draftEnabled = bVar2;
    if (bVar2 == false) {
      type = "None";
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    }
  }
  else {
    pGVar4 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog)->static_fields;
    pGVar4->_draftEnabled = bVar2;
    if (bVar2 == false) {
      type = "None";
    }
  }
  pGVar4->_draftType = type;
  Il2CppCodeGenWriteBarrier(&pGVar4->_draftType);
  pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  if (pGVar4->_draftEnabled == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    }
    pMVar7 = (MethodInfo *)0x0;
    iVar3 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops(pGVar4->_textMode,(MethodInfo *)0x0);
    if (0 < iVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors
                (context.fields.GameObject,pMVar7);
    }
  }
  else {
    pMVar7 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
      pMVar7 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors
              (context.fields.GameObject,pGVar4->_draftType,pMVar7);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pGVar5 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  pMVar7 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pMVar7 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
    pGVar5 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(pGVar5,pMVar7);
  bVar2 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)pGVar5);
  key = (MethodInfo *)"profile-character-set-effects.text-colors.enabled";
  if (Il2CppMethodInitialized_0754551c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_0754551c = '\x01';
  }
  if (((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
      (pMVar7 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot,
      pGVar5 = UnityEngine_GameObject__GetComponentInParent_object_
                         (context.fields.GameObject,
                          (MethodInfo_353BB40 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot),
      pGVar5 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) &&
     (__this = (pGVar5->fields)._State_k__BackingField,
     __this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this,(System_String_o *)key,bVar2,(MethodInfo *)0x0);
    pMVar7 = key;
  }
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled == false) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview
              (context.fields.GameObject,pMVar7);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview
              (context.fields.GameObject,pMVar7);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft(context.fields.GameObject,pMVar7);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SelectFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectFont (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58e3ed0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e3ee6: mov rax, qword ptr [r15 + 0x10]
// asm:   0x58e3eea: test rax, rax
// asm:   0x58e3eed: jne 0x58e3f38
// asm:   0x58e404f: jmp 0x58e3f9a

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectFont
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar3;
  System_String_o *font;
  System_String_o **ppSVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754550b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_0754550b = '\x01';
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar4 = &"Normal";
  }
  else {
    ppSVar4 = &((context.fields.Node)->fields).value;
  }
  pSVar5 = *ppSVar4;
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_hasAccess;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog)->
                            static_fields + 0x51);
  }
  if (cVar1 == '\0') {
    uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog)->_2).
            cctor_finished_or_no_cctor;
    pSVar5 = "Normal";
  }
  else {
    if ((((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pSVar5 = PatreonEffects_NameFontCatalog__Normalize(pSVar5,(MethodInfo *)0x0);
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pGVar3->_draftFont = pSVar5;
  Il2CppCodeGenWriteBarrier(&pGVar3->_draftFont);
  pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_effectPrefix;
  font = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont;
  pMVar6 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    pMVar6 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(pSVar5,font,pMVar6);
  pMVar6 = (MethodInfo *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
            (context.fields.GameObject,(System_String_o *)pMVar6,method_00);
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft(context.fields.GameObject,pMVar6);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$LoadPresetColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors (UnityEngine_GameObject_o* source, System_String_o* type, const MethodInfo* method);
// 0x58e3780

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors
               (UnityEngine_GameObject_o *source,System_String_o *type,MethodInfo *method)

{
  System_String_o *value;
  undefined8 in_RAX;
  System_String_array *pSVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  ulong uVar4;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_0754550c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_0754550c = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors(type,(MethodInfo *)0x0);
  if (pSVar1 == (System_String_array *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length < 1) {
        return;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
    }
label_058e395f:
    ThrowNullReferenceException();
  }
  uVar4 = 0;
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar2 == (System_String_array *)0x0) goto label_058e395f;
    if ((long)(int)pSVar2->max_length <= (long)uVar4) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    }
    if ((uint)pSVar1->max_length <= uVar4) break;
    if (pSVar2 == (System_String_array *)0x0) goto label_058e395f;
    if ((uint)pSVar2->max_length <= uVar4) break;
    pSVar2->m_Items[uVar4] = pSVar1->m_Items[uVar4];
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + uVar4);
    uStack_38 = CONCAT44((int)uVar4,(undefined4)uStack_38);
    if (Il2CppMethodInitialized_0754551f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
      Il2CppMethodInitialized_0754551f = '\x01';
    }
    pSVar3 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_52f0320("profile-character-set-effects-draft-color-",pSVar3,(MethodInfo *)0x0);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar2 == (System_String_array *)0x0) goto label_058e395f;
    if ((uint)pSVar2->max_length <= uVar4) break;
    value = pSVar2->m_Items[uVar4];
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar3,value,true,source,(MethodInfo *)0x0);
    uVar4 = uVar4 + 1;
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$LoadGradientColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x58e3970

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *value;
  undefined8 in_RAX;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar4;
  ulong uVar5;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_0754550d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_0754550d = '\x01';
  }
  uVar5 = 0;
  do {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    pSVar2 = pGVar4->DraftColors;
    if (pSVar2 == (System_String_array *)0x0) {
label_058e3af4:
      ThrowNullReferenceException();
    }
    if ((long)(int)pSVar2->max_length <= (long)uVar5) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
      pSVar2 = pGVar4->DraftColors;
    }
    pSVar1 = pGVar4->DefaultGradientColors;
    if (pSVar1 == (System_String_array *)0x0) goto label_058e3af4;
    if ((uint)pSVar1->max_length <= uVar5) {
label_058e3af9:
      ThrowIndexOutOfRangeException();
    }
    if (pSVar2 == (System_String_array *)0x0) goto label_058e3af4;
    if ((uint)pSVar2->max_length <= uVar5) goto label_058e3af9;
    pSVar2->m_Items[uVar5] = pSVar1->m_Items[uVar5];
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + uVar5);
    uStack_38 = CONCAT44((int)uVar5,(undefined4)uStack_38);
    if (Il2CppMethodInitialized_0754551f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
      Il2CppMethodInitialized_0754551f = '\x01';
    }
    pSVar3 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_52f0320("profile-character-set-effects-draft-color-",pSVar3,(MethodInfo *)0x0);
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar2 == (System_String_array *)0x0) goto label_058e3af4;
    if ((uint)pSVar2->max_length <= uVar5) goto label_058e3af9;
    value = pSVar2->m_Items[uVar5];
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar3,value,true,source,(MethodInfo *)0x0);
    uVar5 = uVar5 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyDraftColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyDraftColor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58e42c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e4326: jmp 0x58e44c3
// asm:   0x58e44ef: jmp 0x58e44b6

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyDraftColor
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  bool bVar3;
  uint uVar4;
  undefined8 in_RAX;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *in_RSI;
  System_String_o *text;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_0754550e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"cancel");
    Il2CppMethodInitialized_0754550e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    uVar4 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex
                      (context.fields.ElementId,in_RSI);
  }
  else {
    uVar4 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex
                      (context.fields.ElementId,in_RSI);
  }
  if ((int)uVar4 < 0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((uint)pSVar2->max_length <= uVar4) goto label_058e44f1;
  text = pSVar2->m_Items[uVar4];
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_058e4436:
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                          (text,true,(System_String_o *)0x0,(MethodInfo *)0x0);
  }
  else {
    bVar3 = System_String__op_Equality
                      (((context.fields.Node)->fields).id,"cancel",(MethodInfo *)0x0);
    if (!bVar3) {
      text = ((context.fields.Node)->fields).value;
      goto label_058e4436;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    uStack_38 = CONCAT44(uVar4,(undefined4)uStack_38);
    if (Il2CppMethodInitialized_0754551f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
      Il2CppMethodInitialized_0754551f = '\x01';
    }
    pSVar5 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_52f0320("profile-character-set-effects-draft-color-",pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(pSVar5,text,true,(MethodInfo *)0x0);
  }
  if (uVar4 < (uint)pSVar2->max_length) {
    pSVar2->m_Items[uVar4] = (System_String_o *)method_00;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + uVar4);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled == false)
    {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview
                (context.fields.GameObject,method_00);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview
                (context.fields.GameObject,method_00);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft
              (context.fields.GameObject,method_00);
    return;
  }
label_058e44f1:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplySelectedTextColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplySelectedTextColor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58e4600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e4718: jmp 0x58e47a6

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplySelectedTextColor
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  MethodInfo *method_00;
  MethodInfo *in_RCX;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_0754550f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"save");
    il2cpp_codegen_initialize_runtime_metadata(&"cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-text-picker");
    Il2CppMethodInitialized_0754550f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(context.fields.GameObject,in_RSI);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_058e472c:
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    in_RCX = (MethodInfo *)0x0;
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                          ("profile-character-set-effects-text-picker","#FFFFFF",false,(MethodInfo *)0x0);
    if (context.fields.Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_058e4771;
    bVar2 = true;
  }
  else {
    method_00 = (MethodInfo *)"cancel";
    bVar2 = System_String__op_Equality
                      (((context.fields.Node)->fields).id,"cancel",(MethodInfo *)0x0);
    if (bVar2) {
      if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) goto label_058e47bc;
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__RestorePreviewColors(__this,method_00);
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection(__this,method_00);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
      goto joined_r0x058e47a4;
    }
    bVar2 = System_String__IsNullOrEmpty(((context.fields.Node)->fields).value,(MethodInfo *)0x0);
    if (bVar2) goto label_058e472c;
    method_00 = (MethodInfo *)((context.fields.Node)->fields).value;
label_058e4771:
    bVar2 = System_String__op_Equality
                      (((context.fields.Node)->fields).id,"save",(MethodInfo *)0x0);
  }
  if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
label_058e47bc:
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor
            (__this,(System_String_o *)method_00,bVar2,in_RCX);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
joined_r0x058e47a4:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft(context.fields.GameObject,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ImportedColoredText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ImportedColoredText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x58e4a80

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ImportedColoredText
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar3;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c *method_01;
  
  if (Il2CppMethodInitialized_07545510 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07545510 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pGVar1->_textMode = "Color";
  Il2CppCodeGenWriteBarrier(&pGVar1->_textMode);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pGVar1->_draftEnabled = false;
  pGVar1->_draftType = "None";
  Il2CppCodeGenWriteBarrier(&pGVar1->_draftType);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  pMVar3 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (source == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pMVar3 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (source,(MethodInfo_353BB40 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(root,pMVar3);
  pMVar3 = extraout_RDX;
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this = (root->fields)._State_k__BackingField,
     __this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    method_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    bVar2 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)method_01);
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this,"profile-character-set-effects.text-colors.enabled",bVar2,(MethodInfo *)0x0);
    pMVar3 = extraout_RDX_00;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    pMVar3 = extraout_RDX_01;
  }
  method_00 = (MethodInfo *)"Color";
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetChoiceValue(source,"Color",pMVar3);
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft(source,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x58e4db0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e4fd1: jmp 0x58e4ecd
// asm:   0x58e51e7: jmp 0x58e5157
// asm:   0x58e525b: cmp byte ptr [rip + 0x1c6032a], 0
// asm:   0x58e5262: je 0x58e5310

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  TMPro_TMP_InputField_o *pTVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar4;
  int32_t count;
  undefined8 in_RAX;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_00;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o **ppSVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar9;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar10;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar11;
  MethodInfo *in_RCX;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UnityEngine_GameObject_o *source;
  MethodInfo *in_RSI;
  Il2CppClass *klass;
  char cVar13;
  ulong uVar14;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07545511 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07545511 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(context.fields.GameObject,in_RSI)
  ;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    if (pGVar9->_hasAccess == false) goto label_058e4fc1;
label_058e4ea6:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    }
    cVar13 = pGVar9->_draftEnabled;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    if (pGVar9->_hasAccess != false) goto label_058e4ea6;
label_058e4fc1:
    cVar13 = '\0';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pMVar12 = (MethodInfo *)0x0;
  count = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode,
                     (MethodInfo *)0x0);
  if (count < 1) {
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) goto label_058e539f;
    if (Il2CppMethodInitialized_07545557 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07545557 = '\x01';
    }
    pTVar3 = (__this_00->fields)._input;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pTVar3 = (__this_00->fields)._input;
      if (pTVar3 == (TMPro_TMP_InputField_o *)0x0) goto label_058e539f;
      ppSVar7 = &(pTVar3->fields).m_Text;
    }
    else {
      ppSVar7 = &(__this_00->fields)._lastText;
    }
    pSVar5 = (System_String_array *)(__this_00->fields)._colors;
    pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                       (*ppSVar7,(System_Collections_Generic_IList_string__o *)pSVar5,method_01);
    if (cVar13 != '\0') goto label_058e536f;
label_058e4f2b:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors(count,pMVar12);
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) goto label_058e539f;
    pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
                       (__this_00,(System_Collections_Generic_IList_string__o *)pSVar5,method_00);
    if (cVar13 == '\0') goto label_058e4f2b;
label_058e536f:
    pGVar11 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar6,(MethodInfo *)pSVar5);
    if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) goto label_058e539f;
    pSVar6 = (pGVar11->fields).Text;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pSVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_targetId;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue(context.fields.GameObject,pSVar8,pSVar6,in_RCX);
  pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pSVar6 = pGVar9->_effectPrefix;
  if (cVar13 == '\0') {
    ppSVar7 = &"None";
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    }
    ppSVar7 = &pGVar9->_draftType;
  }
  pSVar8 = *ppSVar7;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect(pSVar6,cVar13 != '\0',pSVar8,in_RCX);
  pMVar12 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    pMVar12 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont
            (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_effectPrefix,
             TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont,pMVar12
            );
  uVar14 = 0;
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    if (pGVar9->DraftColors == (System_String_array *)0x0) break;
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    pMVar12 = (MethodInfo *)(ulong)uVar2;
    if ((long)(int)pGVar9->DraftColors->max_length <= (long)uVar14) {
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
        pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
      }
      pSVar6 = pGVar9->_targetId;
      pSVar8 = pGVar9->_draftFont;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont(context.fields.GameObject,pSVar6,pSVar8,pMVar12)
      ;
      source = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_ownerSource;
      if (source == (UnityEngine_GameObject_o *)0x0) {
        source = context.fields.GameObject;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      if (Il2CppMethodInitialized_0754558c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effects-draft");
        Il2CppMethodInitialized_0754558c = '\x01';
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
        klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
      }
      else {
        uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
                cctor_finished_or_no_cctor;
        klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog =
           (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c *)klass;
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      pSVar6 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectsDraftValue((MethodInfo *)klass);
      pMVar12 = (MethodInfo *)"profile-character-effects-draft";
      Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_52a3d20
                (source,"profile-character-effects-draft",pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(context.fields.GameObject,pMVar12);
      if (((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
          (pGVar10 = UnityEngine_GameObject__GetComponentInParent_object_
                               (context.fields.GameObject,
                                (MethodInfo_353BB40 *)
                                MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot),
          pGVar10 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) &&
         (__this = (pGVar10->fields)._Overlays_k__BackingField,
         __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTopForced(__this,true,(MethodInfo *)0x0);
      }
      return;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    }
    pSVar6 = pGVar9->_effectPrefix;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    else {
    }
    uStack_38 = CONCAT44((int)uVar14,(undefined4)uStack_38);
    if (Il2CppMethodInitialized_0754559c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-color-");
      Il2CppMethodInitialized_0754559c = '\x01';
    }
    pSVar8 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
    pSVar6 = System_String__Concat_5301f10(pSVar6,"-color-",pSVar8,(MethodInfo *)0x0);
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar5 == (System_String_array *)0x0) break;
    if ((uint)pSVar5->max_length <= uVar14) {
      ThrowIndexOutOfRangeException();
    }
    pSVar8 = pSVar5->m_Items[uVar14];
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
              (pSVar6,pSVar8,true,context.fields.GameObject,(MethodInfo *)0x0);
    uVar14 = uVar14 + 1;
  }
label_058e539f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DiscardPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DiscardPreview (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x58e5900

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DiscardPreview
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_String_o *prefix;
  System_String_o *font;
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545512 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_07545512 = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    in_RDX = extraout_RDX_00;
  }
  prefix = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_effectPrefix;
  font = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_initialFont;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    in_RDX = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(prefix,font,in_RDX);
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  pUVar1 = pGVar2->_ownerSource;
  method_00 = extraout_RDX_02;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    method_00 = extraout_RDX_03;
  }
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    source = pUVar1;
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
            (source,pGVar2->_initialFont,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$TextColorsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled (const MethodInfo* method);
// 0x58e2130
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e215a: jmp 0x58e21b2

bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar4;
  
  if (Il2CppMethodInitialized_07545513 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    Il2CppMethodInitialized_07545513 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    cVar1 = pGVar4->_textEditable;
  }
  else {
    pGVar4 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog)->static_fields;
    cVar1 = pGVar4->_textEditable;
  }
  if (cVar1 != '\0') {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
      cVar1 = pGVar4->_draftEnabled;
    }
    else {
      cVar1 = pGVar4->_draftEnabled;
    }
    if (cVar1 == '\0') {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
        pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
      }
      bVar3 = System_String__op_Equality(pGVar4->_textMode,"Color",(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ColorPanelVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible (const MethodInfo* method);
// 0x58e32f0

bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar4;
  
  if (Il2CppMethodInitialized_07545514 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_07545514 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    cVar1 = pGVar4->_draftEnabled;
  }
  else {
    pGVar4 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog)->static_fields;
    cVar1 = pGVar4->_draftEnabled;
  }
  if (cVar1 != '\0') {
    return true;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  }
  iVar3 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops(pGVar4->_textMode,(MethodInfo *)0x0);
  return 0 < iVar3;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$TextColorHelpVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorHelpVisible (const MethodInfo* method);
// 0x58e3290

bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorHelpVisible(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545515 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_07545515 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog =
       (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)klass);
    return bVar2;
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)klass);
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ColorVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible (int32_t index, const MethodInfo* method);
// 0x58e59d0

bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible(int32_t index,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07545516 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_07545516 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  iVar1 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode,
                     (MethodInfo *)0x0);
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled != false
         || index < iVar1 && 0 < iVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetColorVisibility
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x58e1df0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e1ebc: jmp 0x58e1f04
// asm:   0x58e1f6b: jmp 0x58e212b
// asm:   0x58e1fd1: nop word ptr cs:[rax + rax]
// asm:   0x58e20f3: jmp 0x58e1fe0
// asm:   0x58e2117: jmp 0x58e2043

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar3;
  System_String_array *pSVar4;
  bool bVar5;
  int32_t iVar6;
  undefined8 in_RAX;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar7;
  System_String_o *pSVar8;
  Il2CppClass *klass;
  int iVar9;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07545517 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.text-color-help.visible");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.effect-colors.visible");
    Il2CppMethodInitialized_07545517 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_058e212b;
  pGVar3 = (root->fields)._State_k__BackingField;
  if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    if (Il2CppMethodInitialized_07545514 == '\0') goto label_058e1ecc;
label_058e1ea0:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor != 0)
    goto label_058e1ead;
label_058e1eec:
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    cVar1 = pGVar7->_draftEnabled;
  }
  else {
    if (Il2CppMethodInitialized_07545514 != '\0') goto label_058e1ea0;
label_058e1ecc:
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_07545514 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    goto label_058e1eec;
label_058e1ead:
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    cVar1 = pGVar7->_draftEnabled;
  }
  bVar5 = true;
  if (cVar1 == '\0') {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
    }
    iVar6 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops(pGVar7->_textMode,(MethodInfo *)0x0);
    bVar5 = 0 < iVar6;
  }
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar3,"profile-character-set-effects.effect-colors.visible",bVar5,(MethodInfo *)0x0);
  pGVar3 = (root->fields)._State_k__BackingField;
  if (Il2CppMethodInitialized_07545515 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_07545515 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog =
       (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c *)klass;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)klass);
  }
  else {
    bVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)klass);
  }
  if (pGVar3 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    iVar9 = 0;
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar3,"profile-character-set-effects.text-color-help.visible",bVar5,(MethodInfo *)0x0);
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    while( true ) {
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if (pSVar4 == (System_String_array *)0x0) break;
      if ((int)pSVar4->max_length <= iVar9) {
        return;
      }
      pGVar3 = (root->fields)._State_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      else {
      }
      uStack_38 = CONCAT44(iVar9,(undefined4)uStack_38);
      if (Il2CppMethodInitialized_07545520 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.draft-color-");
        il2cpp_codegen_initialize_runtime_metadata(&".visible");
        Il2CppMethodInitialized_07545520 = '\x01';
      }
      pSVar8 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
      pSVar8 = System_String__Concat_5301f10
                         ("profile-character-set-effects.draft-color-",pSVar8,".visible",(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07545516 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
        Il2CppMethodInitialized_07545516 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      iVar6 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                        (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                         _textMode,(MethodInfo *)0x0);
      if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) break;
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                (pGVar3,pSVar8,
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled
                 != false || iVar9 < iVar6 && 0 < iVar6,(MethodInfo *)0x0);
      iVar9 = iVar9 + 1;
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
    }
  }
label_058e212b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyGradientPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x58e3c60

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool bVar1;
  int32_t count;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  System_String_array *stops;
  MethodInfo *method_00;
  MethodInfo *pMVar2;
  
  if (Il2CppMethodInitialized_07545518 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545518 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pMVar2 = (MethodInfo *)0x0;
  count = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode,
                     (MethodInfo *)0x0);
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,pMVar2);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar2 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (count < 1) {
    if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview(__this,pMVar2);
      (__this->fields)._gradientStops = (System_String_array *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops);
      return;
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    stops = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors(count,pMVar2);
    if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient
                (__this,(System_Collections_Generic_IList_string__o *)stops,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x58e3b70

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_String_array *colors;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545519 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545519 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
    ThrowNullReferenceException();
  }
  colors = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
  method_00 = (MethodInfo *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType;
  (__this->fields)._gradientStops = (System_String_array *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
            (__this,(System_String_o *)method_00,(System_Collections_Generic_IList_string__o *)colors,in_RCX);
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyFontPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview (UnityEngine_GameObject_o* source, System_String_o* font, const MethodInfo* method);
// 0x58e4160

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
               (UnityEngine_GameObject_o *source,System_String_o *font,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *pMVar2;
  
  if (Il2CppMethodInitialized_0754551a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754551a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pMVar2 = (MethodInfo *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_targetId;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont(source,(System_String_o *)pMVar2,font,in_RCX);
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,pMVar2);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar2 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont(__this,font,method_00);
    pMVar2 = (MethodInfo *)font;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(source,pMVar2);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$GradientColors
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors (int32_t count, const MethodInfo* method);
// 0x58e5430

System_String_array *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors(int32_t count,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array *pSVar2;
  ulong uVar3;
  long lVar4;
  
  if (Il2CppMethodInitialized_0754551b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754551b = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,count);
  if (0 < count) {
    if (pSVar2 == (System_String_array *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if ((pSVar2 != (System_String_array *)0x0) && ((int)pSVar2->max_length == 0)) {
label_058e551f:
        ThrowIndexOutOfRangeException();
      }
label_058e5524:
      ThrowNullReferenceException();
    }
    lVar4 = 0x20;
    uVar3 = 0;
    do {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if (pSVar1 == (System_String_array *)0x0) goto label_058e5524;
      if (((uint)pSVar1->max_length <= uVar3) || ((uint)pSVar2->max_length <= uVar3)) goto label_058e551f;
      *(undefined8 *)((long)pSVar2->m_Items + lVar4 + -0x20) =
           *(undefined8 *)((long)pSVar1->m_Items + lVar4 + -0x20);
      Il2CppCodeGenWriteBarrier((void **)((long)pSVar2->m_Items + lVar4 + -0x20));
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 8;
    } while ((uint)count != uVar3);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetState (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* key, bool value, const MethodInfo* method);
// 0x58e3b00

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetState
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *key,bool value,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754551c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_0754551c = '\x01';
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (pGVar1->fields)._State_k__BackingField,
       __this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this,key,value,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Runtime
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x58e47d0

Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  
  if (Il2CppMethodInitialized_0754551d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgCharacterTextColorEditorRuntime)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754551d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
  }
  if ((((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) ||
      (pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0),
      pUVar2 == (UnityEngine_Transform_o *)0x0)) ||
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar2,true,
                          (MethodInfo_34B1260 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgCharacterTextColorEditorRuntime
                         ), pSVar3 == (System_Object_array *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar3->max_length < 1) {
    return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
  }
  return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pSVar3->m_Items[0];
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetChoiceValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetChoiceValue (UnityEngine_GameObject_o* source, System_String_o* value, const MethodInfo* method);
// 0x58e4c20

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetChoiceValue
               (UnityEngine_GameObject_o *source,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  UnityEngine_Object_o *__this_00;
  System_String_o *a;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_0754551e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgChoiceControl);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-type");
    Il2CppMethodInitialized_0754551e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
      (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
      pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
     (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar3,true,
                          (MethodInfo_34B1260 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgChoiceControl),
     pSVar4 == (System_Object_array *)0x0)) {
label_058e4d9b:
    ThrowNullReferenceException();
  }
  if ((int)pSVar4->max_length < 1) {
    return;
  }
  uVar5 = pSVar4->max_length & 0xffffffff;
  uVar6 = 0;
  do {
    if (uVar5 <= uVar6) {
      ThrowIndexOutOfRangeException();
    }
    __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pSVar4->m_Items[uVar6];
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if ((__this == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) ||
         (__this_00 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_Object_o *)0x0)) goto label_058e4d9b;
      a = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,"profile-character-set-effects-type",(MethodInfo *)0x0);
      if (bVar2) {
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify(__this,value,(MethodInfo *)0x0);
        return;
      }
    }
    uVar6 = uVar6 + 1;
    uVar1 = (uint)pSVar4->max_length;
    uVar5 = (ulong)uVar1;
    if ((long)(int)uVar1 <= (long)uVar6) {
      return;
    }
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorId (int32_t index, const MethodInfo* method);
// 0x58e4270

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iStack_4;
  
  if (Il2CppMethodInitialized_0754551f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
    Il2CppMethodInitialized_0754551f = '\x01';
  }
  pSVar1 = System_Int32__ToString(&iStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("profile-character-set-effects-draft-color-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorVisibleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorVisibleKey (int32_t index, const MethodInfo* method);
// 0x58e5a50

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorVisibleKey(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iStack_4;
  
  if (Il2CppMethodInitialized_07545520 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.draft-color-");
    il2cpp_codegen_initialize_runtime_metadata(&".visible");
    Il2CppMethodInitialized_07545520 = '\x01';
  }
  pSVar1 = System_Int32__ToString(&iStack_4,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10("profile-character-set-effects.draft-color-",pSVar1,".visible",(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SyncDialogDraft
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x58e3d60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e3ec7: jmp 0x58e3e77

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  uint32_t uVar1;
  TMPro_TMP_InputField_o *pTVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *x;
  System_String_o **ppSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07545521 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.draft");
    Il2CppMethodInitialized_07545521 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  x = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_01 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
label_058e3ec9:
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_07545557 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07545557 = '\x01';
    }
    pTVar2 = (x->fields)._input;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pTVar2 = (x->fields)._input;
      if (pTVar2 == (TMPro_TMP_InputField_o *)0x0) goto label_058e3ec9;
      ppSVar4 = &(pTVar2->fields).m_Text;
    }
    else {
      ppSVar4 = &(x->fields)._lastText;
    }
    method_01 = (MethodInfo *)(x->fields)._colors;
    pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                       (*ppSVar4,(System_Collections_Generic_IList_string__o *)method_01,method_00);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_initialValue;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__EffectDialogDraftValue(pSVar5,method_01);
  Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_52a3d20
            (source,"profile-character-set-effects.draft",pSVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$EffectDialogDraftValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__EffectDialogDraftValue (System_String_o* text, const MethodInfo* method);
// 0x58e2ea0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e30d2: jmp 0x58e30f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__EffectDialogDraftValue
          (System_String_o *text,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_07545522 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_07545522 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    uVar2 = (g_data_075566f0->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (g_data_075566f0->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075566f0);
  }
  pSVar5 = System_Boolean__ToString
                     (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                       _draftEnabled,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this->fields)._items;
    if (pSVar6 != (System_String_array *)0x0) {
      uVar3 = (__this->fields)._size;
      if (uVar3 < (uint)pSVar6->max_length) {
        (__this->fields)._size = uVar3 + 1;
        pSVar6->m_Items[(int)uVar3] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (__this->fields)._items;
      if (pSVar6 != (System_String_array *)0x0) {
        uVar3 = (__this->fields)._size;
        if (uVar3 < (uint)pSVar6->max_length) {
          (__this->fields)._size = uVar3 + 1;
          pSVar6->m_Items[(int)uVar3] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this->fields)._items;
        if (pSVar6 != (System_String_array *)0x0) {
          uVar3 = (__this->fields)._size;
          if (uVar3 < (uint)pSVar6->max_length) {
            (__this->fields)._size = uVar3 + 1;
            pSVar6->m_Items[(int)uVar3] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this->fields)._items;
          if (pSVar6 != (System_String_array *)0x0) {
            uVar3 = (__this->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (__this->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = pSVar5;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
              pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
              pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
            }
            if (text == (System_String_o *)0x0) {
              text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
            }
            piVar1 = &(__this->fields)._version;
            MethodInfo_System_Collections_Generic_List_string_Add = pMVar4;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this->fields)._items;
            if (pSVar6 != (System_String_array *)0x0) {
              uVar3 = (__this->fields)._size;
              if (uVar3 < (uint)pSVar6->max_length) {
                (__this->fields)._size = uVar3 + 1;
                pSVar6->m_Items[(int)uVar3] = text;
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
                uVar7 = 0;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)text,
                           (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
                uVar7 = 0;
              }
              while( true ) {
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
                }
                pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                         DraftColors;
                if (pSVar6 == (System_String_array *)0x0) break;
                if ((long)(int)pSVar6->max_length <= (long)uVar7) {
                  pSVar6 = (System_String_array *)
                           System_Collections_Generic_List_object___ToArray
                                     ((System_Collections_Generic_List_object__o *)__this,
                                      (MethodInfo_395F5A0 *)
                                      MethodInfo_System_Collections_Generic_List_string_ToArray);
                  pSVar5 = System_String__Join("|",pSVar6,(MethodInfo *)0x0);
                  return pSVar5;
                }
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
                  pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                           DraftColors;
                  if (pSVar6 == (System_String_array *)0x0) break;
                }
                pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
                if ((uint)pSVar6->max_length <= uVar7) {
                  ThrowIndexOutOfRangeException();
                }
                pSVar5 = pSVar6->m_Items[uVar7];
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar6 = (__this->fields)._items;
                if (pSVar6 == (System_String_array *)0x0) break;
                uVar3 = (__this->fields)._size;
                if (uVar3 < (uint)pSVar6->max_length) {
                  (__this->fields)._size = uVar3 + 1;
                  pSVar6->m_Items[(int)uVar3] = pSVar5;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                             (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
                }
                uVar7 = uVar7 + 1;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex (System_String_o* id, const MethodInfo* method);
// 0x58e4500
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e454e: nop 
// asm:   0x58e457a: mov dword ptr [rsp + 0xc], ebx
// asm:   0x58e457e: cmp byte ptr [rip + 0x1c60f9a], 0
// asm:   0x58e4585: jne 0x58e4596
// asm:   0x58e45ce: jmp 0x58e4550
// asm:   0x58e45e2: jmp 0x58e4596

int32_t Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex
                  (System_String_o *id,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_array *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  int iVar5;
  int local_2c;
  
  if (Il2CppMethodInitialized_07545523 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_07545523 = '\x01';
  }
  iVar5 = 0;
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  while( true ) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar2 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar2->max_length <= iVar5) {
      return -1;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    local_2c = iVar5;
    if (Il2CppMethodInitialized_0754551f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
      Il2CppMethodInitialized_0754551f = '\x01';
    }
    pSVar4 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_52f0320("profile-character-set-effects-draft-color-",pSVar4,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(id,pSVar4,(MethodInfo *)0x0);
    if (bVar3) break;
    iVar5 = iVar5 + 1;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor;
  }
  return iVar5;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x58e60b0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___cctor (const MethodInfo* method);
// 0x58e60c0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07545524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"#B7F8C8FF");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"#8CEBFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"#A8F5D6FF");
    il2cpp_codegen_initialize_runtime_metadata(&"#97F0E8FF");
    Il2CppMethodInitialized_07545524 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  if (pSVar2 == (System_String_array *)0x0) {
label_058e6352:
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "#FFFFFFFF";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "#FFFFFFFF";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "#FFFFFFFF";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        if ((pSVar2->max_length & 0xfffffffc) != 0) {
          pSVar2->m_Items[3] = "#FFFFFFFF";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors = pSVar2;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                      DraftColors);
          pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
          if (pSVar2 == (System_String_array *)0x0) goto label_058e6352;
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
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
                  pGVar1->DefaultGradientColors = pSVar2;
                  Il2CppCodeGenWriteBarrier(&pGVar1->DefaultGradientColors);
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
                  pGVar1->_initialFont = "Normal";
                  Il2CppCodeGenWriteBarrier(&pGVar1->_initialFont);
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
                  pGVar1->_draftFont = "Normal";
                  Il2CppCodeGenWriteBarrier(&pGVar1->_draftFont);
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
                  pGVar1->_draftType = "None";
                  Il2CppCodeGenWriteBarrier(&pGVar1->_draftType);
                  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
                  pGVar1->_textMode = "Color";
                  Il2CppCodeGenWriteBarrier(&pGVar1->_textMode);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


