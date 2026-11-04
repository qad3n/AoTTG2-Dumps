// Type: Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterSetEffectsDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___cctor (const MethodInfo* method);
// 0x181e0da10

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this;
  
  if (Il2CppMethodInitialized_184344bb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
    Il2CppMethodInitialized_184344bb1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___ctor(Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__35_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__35_0 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181e0c0f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0c269: mov rcx, qword ptr [rip + 0x22b5248]  ; TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog
// asm:   0x181e0c270: mov rbx, qword ptr [rip + 0x22687f9]  ; "Color"

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__35_0
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_StaticFields *pGVar2;
  System_String_o *pSVar3;
  bool bVar4;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar5;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  int32_t local_res10 [2];
  System_Enum_o local_58;
  int32_t local_48;
  
  if (Il2CppMethodInitialized_184344bb2 == '\0') {
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
    Il2CppMethodInitialized_184344bb2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields;
  bVar4 = pGVar2->_hasAccess;
  bVar1 = pGVar2->_draftEnabled;
  pSVar3 = pGVar2->_draftType;
  if (Il2CppMethodInitialized_184344b56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    Il2CppMethodInitialized_184344b56 = '\x01';
  }
  local_res10[0] = 0;
  value = "Color";
  if (((bVar4 & bVar1) != 0) &&
     (bVar4 = PatreonEffects_NameEffectPresets__TryResolve(pSVar3,local_res10,(MethodInfo *)0x0),
     value = "Color", bVar4)) {
    local_58.klass = (System_Enum_c *)TypeInfo_PatreonEffects_NameEffectType;
    local_48 = local_res10[0];
    local_58.monitor = &g_data_ffffffffffffffff;
    value = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
  }
  pGVar5 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__Options
                     (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                      _hasAccess,(MethodInfo *)0x0);
  pDVar6 = (DG_Tweening_Core_DOSetter_Color2__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (pDVar6,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_SelectEffect,
             (MethodInfo_1387DC0 *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__FormSelect_18c8400
                       (row,"profile-character-set-effects-type","Effect",value,pGVar5,
                        (System_Action_GisketchActionContext__o *)pDVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    }
    if (Il2CppMethodInitialized_184344bb7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effect-preview");
      Il2CppMethodInitialized_184344bb7 = '\x01';
    }
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).choiceOptionRenderer = "profile-character-effect-preview";
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).choiceOptionRenderer,"profile-character-effect-preview");
    }
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(50.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).layout = pGVar9;
      Il2CppCodeGenWriteBarrier(&(pGVar7->fields).layout,pGVar9);
      pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont;
      pGVar5 = Gisketch_Aottg2UI_Game_AottgCharacterFontUi__Options
                         (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                          _hasAccess,(MethodInfo *)0x0);
      pDVar6 = (DG_Tweening_Core_DOSetter_Color2__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pDVar6,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_SelectFont,
                 (MethodInfo_1387DC0 *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__FormSelect_18c8400
                         (row,"profile-character-set-effects-font","Font",pSVar3,pGVar5,
                          (System_Action_GisketchActionContext__o *)pDVar6,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,8,(System_String_o *)0x0,
                          (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184344bb8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile-character-font-preview");
        Il2CppMethodInitialized_184344bb8 = '\x01';
      }
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).choiceOptionRenderer = "profile-character-font-preview";
        Il2CppCodeGenWriteBarrier(&(pGVar7->fields).choiceOptionRenderer,"profile-character-font-preview");
      }
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(50.0,(MethodInfo *)0x0);
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).layout = pGVar9;
        Il2CppCodeGenWriteBarrier(&(pGVar7->fields).layout,pGVar9);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__35_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__35_1 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* callout, const MethodInfo* method);
// 0x181e0c5f0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__35_1
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *callout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344bb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"calloutText");
    il2cpp_codegen_initialize_runtime_metadata(&"Highlight text above, then pick a color to tint it. You can also paste names with [ff0000] hex tags.");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.TextColorHelp");
    Il2CppMethodInitialized_184344bb3 = '\x01';
  }
  if (callout != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (callout,"Highlight text above, then pick a color to tint it. You can also paste names with [ff0000] hex tags.","calloutText",(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = "MainMenu.Profile.TextColorHelp";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey,"MainMenu.Profile.TextColorHelp");
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c$$<BuildBody>b__35_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__35_2 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181e0c690

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c___BuildBody_b__35_2
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  int iVar1;
  System_String_array *pSVar2;
  bool bVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass35_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  int iVar7;
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184344bb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c__DisplayClass35_0_BuildBody_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c__DisplayClass35_0);
    il2cpp_codegen_initialize_runtime_metadata(&"-slot");
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_184344bb4 = '\x01';
  }
  iVar7 = 0;
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar2 == (System_String_array *)0x0) break;
    if ((int)pSVar2->max_length <= iVar7) {
      return;
    }
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c__DisplayClass35_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object == (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass35_0_o *)0x0) break;
    (object->fields).index = iVar7;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c__DisplayClass35_0_BuildBody_b__3
               ,(MethodInfo *)0x0);
    iVar4 = (object->fields).index;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    local_res20[0] = iVar4;
    if (Il2CppMethodInitialized_184344bab == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
      Il2CppMethodInitialized_184344bab = '\x01';
    }
    pSVar5 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_1969e50("profile-character-set-effects-draft-color-",pSVar5,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_1969e50(pSVar5,"-slot",(MethodInfo *)0x0);
    if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (row,"clear",(System_Action_AottgUi__o *)__this_00,pSVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    iVar1 = (object->fields).index;
    if (Il2CppMethodInitialized_184344ba2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      Il2CppMethodInitialized_184344ba2 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    iVar4 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                       _textMode,(MethodInfo *)0x0);
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled == false)
    {
      if (iVar4 < 1) {
        bVar3 = false;
      }
      else {
        bVar3 = iVar1 < iVar4;
      }
    }
    else {
      bVar3 = true;
    }
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
    (pGVar6->fields).active = bVar3;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
    local_res20[0] = (object->fields).index;
    if (Il2CppMethodInitialized_184344bac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.draft-color-");
      il2cpp_codegen_initialize_runtime_metadata(&".visible");
      Il2CppMethodInitialized_184344bac = '\x01';
    }
    pSVar5 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_1969b70
                       ("profile-character-set-effects.draft-color-",pSVar5,".visible",(MethodInfo *)0x0);
    if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) break;
    (__this_01->fields).visible = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible,pSVar5);
    (pGVar6->fields).bind = __this_01;
    Il2CppCodeGenWriteBarrier(&(pGVar6->fields).bind,__this_01);
    iVar7 = iVar7 + 1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c__DisplayClass35_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass35_0___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass35_0___ctor(Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass35_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog.<>c__DisplayClass35_0$$<BuildBody>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass35_0___BuildBody_b__3 (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass35_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* swatch, const MethodInfo* method);
// 0x181e0cea0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass35_0___BuildBody_b__3
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___c__DisplayClass35_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *swatch,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *value;
  System_String_o *pSVar4;
  System_String_o *label;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker_o *__this_01;
  MethodInfo *method_00;
  uint16_t local_res8 [4];
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_184344bb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ApplyDraftColor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_184344bb5 = '\x01';
  }
  iVar1 = (__this->fields).index;
  local_res8[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  local_res10[0] = iVar1;
  if (Il2CppMethodInitialized_184344bab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
    Il2CppMethodInitialized_184344bab = '\x01';
  }
  pSVar4 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pSVar4 = System_String__Concat_1969e50("profile-character-set-effects-draft-color-",pSVar4,(MethodInfo *)0x0);
  local_res8[0] = (short)(__this->fields).index + 0x41;
  if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e48);
  }
  label = System_Char__ToString(local_res8,(System_IFormatProvider_o *)0x0,method_00);
  pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
  if (pSVar3 != (System_String_array *)0x0) {
    uVar2 = (__this->fields).index;
    if ((uint)pSVar3->max_length <= uVar2) {
      ThrowIndexOutOfRangeException();
    }
    value = pSVar3->m_Items[(int)uVar2];
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ApplyDraftColor,
               (MethodInfo_1387DC0 *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker___ctor
              (__this_01,pSVar4,label,value,(System_Action_GisketchActionContext__o *)__this_00,true,true,true
               ,false,(MethodInfo *)0x0);
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
// 0x181dfcc60

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344b8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SetEffects");
    il2cpp_codegen_initialize_runtime_metadata(&"Set Effects");
    Il2CppMethodInitialized_184344b8f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("MainMenu.Profile.SetEffects","Set Effects",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x181dfcc30

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344b90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/SparkleIcon");
    Il2CppMethodInitialized_184344b90 = '\x01';
  }
  return "UI/Icons/Profile/SparkleIcon";
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_GuardUnsavedChanges
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_GuardUnsavedChanges (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_GuardUnsavedChanges(Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, MethodInfo* method)

{
  return true;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x181dfcb30

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344b91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344b91 = '\x01';
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
// 0x181dfca40

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344b92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344b92 = '\x01';
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
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* targetId, System_String_o* label, System_String_o* effectPrefix, bool textEditable, const MethodInfo* method);
// 0x181dfabb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfaf3e: mov rbx, qword ptr [rip + 0x22a2a83]  ; "None"

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *targetId,
               System_String_o *label,System_String_o *effectPrefix,bool textEditable,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  System_String_array *pSVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  uint index;
  
  if (Il2CppMethodInitialized_184344b93 == '\0') {
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
    Il2CppMethodInitialized_184344b93 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_targetId = targetId;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_targetId,
             targetId);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_targetLabel = label;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_targetLabel,
             label);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_effectPrefix = effectPrefix;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_effectPrefix,
             effectPrefix);
  pUVar1 = (context->fields).GameObject;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textEditable = textEditable;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_ownerSource = pUVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_ownerSource,
             pUVar1);
  bVar3 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_hasAccess = bVar3;
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value(targetId,pSVar4,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_initialValue = pSVar4;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_initialValue,
             pSVar4);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_184344c23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_184344c23 = '\x01';
  }
  bVar3 = System_String__op_Equality(effectPrefix,"profile-character-name-effect",(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont((MethodInfo *)0x0);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_initialFont = pSVar4;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_initialFont,
             pSVar4);
  pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_initialFont;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont = pSVar4;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont,pSVar4
            );
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_hasAccess == false) {
    bVar3 = false;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled(effectPrefix,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled = bVar3;
  pSVar4 = "None";
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled != false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType(effectPrefix,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType = pSVar4;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType,pSVar4
            );
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode =
       "Color";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode,
             "Color");
  index = 0;
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar2 == (System_String_array *)0x0) break;
    if ((int)pSVar2->max_length <= (int)index) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar3) {
        pUVar1 = (context->fields).GameObject;
        if (pUVar1 == (UnityEngine_GameObject_o *)0x0) break;
        root = UnityEngine_GameObject__GetComponentInParent_object_
                         (pUVar1,(MethodInfo_6F53B0 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      }
      else {
        root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
      }
      __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GameObject);
      System_Action_object____ctor
                (__this_01,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_DiscardPreview,
                 (MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions);
      }
      Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Register
                ("profile-character-set-effects",(System_Action_GameObject__o *)__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(root,(MethodInfo *)0x0);
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        __this = (root->fields)._State_k__BackingField;
        if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
          }
          bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)0x0);
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    (__this,"profile-character-set-effects.text-colors.enabled",bVar3,(MethodInfo *)0x0);
        }
        __this_00 = (root->fields)._Overlays_k__BackingField;
        if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (__this_00,"profile-character-set-effects",true,(MethodInfo *)0x0);
        }
      }
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor
                       (effectPrefix,index,(MethodInfo *)0x0);
    if (pSVar2 == (System_String_array *)0x0) break;
    if ((uint)pSVar2->max_length <= index) {
      ThrowIndexOutOfRangeException();
    }
    pSVar2->m_Items[(int)index] = pSVar4;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)index,pSVar4);
    index = index + 1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181df8f30

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *value;
  Il2CppObject *pIVar1;
  System_String_o *value_00;
  System_String_o *value_01;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar5;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *component;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar10;
  System_String_o *value_02;
  System_String_array *value_03;
  
  if (Il2CppMethodInitialized_184344b94 == '\0') {
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
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__35_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__35_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__35_2);
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
    Il2CppMethodInitialized_184344b94 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  if (Il2CppMethodInitialized_184344bb6 == '\0') {
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
    Il2CppMethodInitialized_184344bb6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->_registered == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview->static_fields->_registered = true;
    pUVar5 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
    System_Action_object____ctor
              (pUVar5,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderEffect,
               (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    }
    Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
              ("profile-character-effect-preview",(System_Action_GisketchChoiceOptionRenderContext__o *)pUVar5,
               (MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Action_GisketchChoiceOptionRenderContext);
    System_Action_object____ctor
              (pUVar5,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderFont,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__Register
              ("profile-character-font-preview",(System_Action_GisketchChoiceOptionRenderContext__o *)pUVar5,
               (MethodInfo *)0x0);
  }
  __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ApplySelectedTextColor
             ,(MethodInfo_1387DC0 *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
            ("profile-character-set-effects-text-picker","#FFFFFF",(System_Action_GisketchActionContext__o *)__this_00,
             false,true,false,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_initialValue;
  bVar2 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)0x0);
  bVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textEditable;
  pUVar5 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GameObject);
  System_Action_object____ctor
            (pUVar5,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_ImportedColoredText,
             (MethodInfo *)0x0);
  value_01 = "profile-character-set-effects.text-colors.enabled";
  value_00 = "profile-character-set-effects-text-picker";
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled == false) {
    value_02 = (System_String_o *)0x0;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    value_02 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled == false) {
    value_03 = (System_String_array *)0x0;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    value_03 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  value = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont;
  component = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (component != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditor_o *)0x0) {
    (component->fields)._value = pSVar6;
    Il2CppCodeGenWriteBarrier(&(component->fields)._value,pSVar6);
    (component->fields)._pickerId = value_00;
    Il2CppCodeGenWriteBarrier(&(component->fields)._pickerId,value_00);
    (component->fields)._colorsEnabledKey = value_01;
    Il2CppCodeGenWriteBarrier(&(component->fields)._colorsEnabledKey,value_01);
    (component->fields)._colorsEnabled = bVar2;
    (component->fields)._inputEnabled = bVar3;
    (component->fields)._imported = (System_Action_GameObject__o *)pUVar5;
    Il2CppCodeGenWriteBarrier(&(component->fields)._imported,pUVar5);
    (component->fields)._previewEffectType = value_02;
    Il2CppCodeGenWriteBarrier(&(component->fields)._previewEffectType,value_02);
    (component->fields)._previewEffectColors = (System_Collections_Generic_IList_string__o *)value_03;
    Il2CppCodeGenWriteBarrier(&(component->fields)._previewEffectColors,value_03);
    (component->fields)._previewFont = value;
    Il2CppCodeGenWriteBarrier(&(component->fields)._previewFont,value);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
      pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__EffectDialogDraftValue
                         (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                          _initialValue,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__FormDraft
                (body,"profile-character-set-effects.draft",pSVar6,"Effects",(System_String_o *)0x0,
                 (MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
      }
      pSVar6 = "row";
      pUVar5 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9__35_0;
      if (pUVar5 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9;
        pUVar5 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (pUVar5,pIVar1,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__35_0,
                   (MethodInfo *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9__35_0 =
             (System_Action_AottgUi__o *)pUVar5;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9__35_0
                   ,pUVar5);
      }
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (body,pSVar6,(System_Action_AottgUi__o *)pUVar5,"profile-character-set-effects-select-row",pGVar8,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
      }
      pSVar6 = "callout";
      pUVar5 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9__35_1;
      if (pUVar5 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9;
        pUVar5 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (pUVar5,pIVar1,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__35_1,
                   (MethodInfo *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9__35_1 =
             (System_Action_AottgUi__o *)pUVar5;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9__35_1
                   ,pUVar5);
      }
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(84.0,(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (body,pSVar6,(System_Action_AottgUi__o *)pUVar5,"profile-character-set-effects-text-color-help",pGVar8,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      if (Il2CppMethodInitialized_184344ba1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
        Il2CppMethodInitialized_184344ba1 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)0x0);
      if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar9->fields).active = bVar3;
        pGVar10 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar10,(MethodInfo *)0x0);
        if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (pGVar10->fields).visible = "profile-character-set-effects.text-color-help.visible";
          Il2CppCodeGenWriteBarrier(&(pGVar10->fields).visible,"profile-character-set-effects.text-color-help.visible");
          (pGVar9->fields).bind = pGVar10;
          Il2CppCodeGenWriteBarrier(&(pGVar9->fields).bind,pGVar10);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
          }
          pSVar6 = "row";
          pUVar5 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9__35_2;
          if (pUVar5 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9;
            pUVar5 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
            System_Action_object____ctor
                      (pUVar5,pIVar1,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c_BuildBody_b__35_2,
                       (MethodInfo *)0x0);
            TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->__9__35_2 =
                 (System_Action_AottgUi__o *)pUVar5;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_c->static_fields->
                        __9__35_2,pUVar5);
          }
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row","SpaceEvenly","Center",
                              (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar7,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                             (body,pSVar6,(System_Action_AottgUi__o *)pUVar5,"profile-character-set-effects-effect-colors",pGVar8,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
          }
          if (Il2CppMethodInitialized_184344ba0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
            Il2CppMethodInitialized_184344ba0 = '\x01';
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
          }
          if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled ==
              false) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
            }
            iVar4 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                              (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                               _textMode,(MethodInfo *)0x0);
            bVar3 = 0 < iVar4;
          }
          else {
            bVar3 = true;
          }
          if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar9->fields).active = bVar3;
            pGVar10 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar10,(MethodInfo *)0x0);
            if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
              (pGVar10->fields).visible = "profile-character-set-effects.effect-colors.visible";
              Il2CppCodeGenWriteBarrier(&(pGVar10->fields).visible,"profile-character-set-effects.effect-colors.visible");
              (pGVar9->fields).bind = pGVar10;
              Il2CppCodeGenWriteBarrier(&(pGVar9->fields).bind,pGVar10);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x181df9b80

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  
  if (Il2CppMethodInitialized_184344b95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_Save);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_184344b95 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","overlay.close",(MethodInfo *)0x0);
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_Save,
               (MethodInfo_1387DC0 *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey_18c3540
              (footer,"Common.Save","Save",
               (System_Action_GisketchActionContext__o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SelectEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectEffect (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181dfb8a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfb917: mov rbx, qword ptr [rip + 0x2279152]  ; "Color"
// asm:   0x181dfbacf: mov ebx, r12d
// asm:   0x181dfbe05: mov rbx, r12

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectEffect
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  System_String_array *pSVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool bVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar7;
  uint uVar8;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar9;
  System_String_o *pSVar10;
  uint local_res8 [2];
  
  if (Il2CppMethodInitialized_184344b96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184344b96 = '\x01';
  }
  pSVar5 = "Color";
  if ((context->fields).Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar5 = (((context->fields).Node)->fields).value;
  }
  bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode(pSVar5,(MethodInfo *)0x0);
  pSVar10 = "Color";
  if (bVar3) {
    pSVar10 = pSVar5;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode = pSVar10;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode,pSVar10
            );
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_hasAccess == false) {
    bVar3 = false;
  }
  else {
    bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__IsTextColorMode(pSVar5,(MethodInfo *)0x0);
    bVar3 = !bVar3;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled = bVar3;
  pSVar10 = "None";
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled != false) {
    pSVar10 = pSVar5;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType = pSVar10;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType,
             pSVar10);
  pGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    iVar4 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                       _textMode,(MethodInfo *)0x0);
    if (iVar4 < 1) {
label_181dfbdc0:
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar3) {
        pUVar1 = (context->fields).GameObject;
        if (pUVar1 == (UnityEngine_GameObject_o *)0x0) {
label_181dfbf1a:
          ThrowNullReferenceException();
        }
        pGVar7 = UnityEngine_GameObject__GetComponentInParent_object_
                           (pUVar1,(MethodInfo_6F53B0 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(pGVar7,(MethodInfo *)0x0);
      bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)0x0);
      pSVar5 = "profile-character-set-effects.text-colors.enabled";
      pUVar1 = (context->fields).GameObject;
      if (Il2CppMethodInitialized_184344ba8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
        Il2CppMethodInitialized_184344ba8 = '\x01';
      }
      if (((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
          (pGVar7 = UnityEngine_GameObject__GetComponentInParent_object_
                              (pUVar1,(MethodInfo_6F53B0 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot),
          pGVar7 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) &&
         (__this = (pGVar7->fields)._State_k__BackingField,
         __this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this,pSVar5,bVar3,(MethodInfo *)0x0);
      }
      if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled ==
          false) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
        }
        Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview(pUVar1,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
        }
        Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview(pUVar1,(MethodInfo *)0x0);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft(pUVar1,(MethodInfo *)0x0);
      return;
    }
    pUVar1 = (context->fields).GameObject;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pGVar9 = pGVar7;
    if (Il2CppMethodInitialized_184344b99 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      Il2CppMethodInitialized_184344b99 = '\x01';
    }
    while( true ) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if (pSVar6 == (System_String_array *)0x0) goto label_181dfbf1a;
      uVar8 = (uint)pGVar9;
      if ((int)pSVar6->max_length <= (int)uVar8) goto label_181dfbdc0;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
               DefaultGradientColors;
      if (pSVar6 == (System_String_array *)0x0) goto label_181dfbf1a;
      if ((uint)pSVar6->max_length <= uVar8) break;
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if (pSVar2 == (System_String_array *)0x0) goto label_181dfbf1a;
      if ((uint)pSVar2->max_length <= uVar8) break;
      pSVar5 = pSVar6->m_Items[(int)uVar8];
      pSVar2->m_Items[(int)uVar8] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar8,pSVar5);
      local_res8[0] = uVar8;
      if (Il2CppMethodInitialized_184344bab == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
        Il2CppMethodInitialized_184344bab = '\x01';
      }
      pSVar5 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969e50("profile-character-set-effects-draft-color-",pSVar5,(MethodInfo *)0x0);
      pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if (pSVar6 == (System_String_array *)0x0) goto label_181dfbf1a;
      if ((uint)pSVar6->max_length <= uVar8) break;
      pSVar10 = pSVar6->m_Items[(int)uVar8];
      if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar5,pSVar10,true,pUVar1,(MethodInfo *)0x0);
      pGVar9 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(ulonglong)(uVar8 + 1);
    }
  }
  else {
    pUVar1 = (context->fields).GameObject;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType;
    if (Il2CppMethodInitialized_184344b98 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      Il2CppMethodInitialized_184344b98 = '\x01';
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors(pSVar5,(MethodInfo *)0x0);
    pGVar9 = pGVar7;
    while( true ) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if (pSVar2 == (System_String_array *)0x0) goto label_181dfbf1a;
      uVar8 = (uint)pGVar9;
      if ((int)pSVar2->max_length <= (int)uVar8) goto label_181dfbdc0;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      if (pSVar6 == (System_String_array *)0x0) goto label_181dfbf1a;
      if ((uint)pSVar6->max_length <= uVar8) break;
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if (pSVar2 == (System_String_array *)0x0) goto label_181dfbf1a;
      if ((uint)pSVar2->max_length <= uVar8) break;
      pSVar5 = pSVar6->m_Items[(int)uVar8];
      pSVar2->m_Items[(int)uVar8] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar8,pSVar5);
      local_res8[0] = uVar8;
      if (Il2CppMethodInitialized_184344bab == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
        Il2CppMethodInitialized_184344bab = '\x01';
      }
      pSVar5 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969e50("profile-character-set-effects-draft-color-",pSVar5,(MethodInfo *)0x0);
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if (pSVar2 == (System_String_array *)0x0) goto label_181dfbf1a;
      if ((uint)pSVar2->max_length <= uVar8) break;
      pSVar10 = pSVar2->m_Items[(int)uVar8];
      if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar5,pSVar10,true,pUVar1,(MethodInfo *)0x0);
      pGVar9 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(ulonglong)(uVar8 + 1);
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SelectFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectFont (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181dfbf30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfbf9a: mov rsi, rbx

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SelectFont
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344b97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184344b97 = '\x01';
  }
  pSVar2 = "Normal";
  if ((context->fields).Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar2 = (((context->fields).Node)->fields).value;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pSVar1 = "Normal";
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_hasAccess != false) {
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pSVar1 = PatreonEffects_NameFontCatalog__Normalize(pSVar2,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont,pSVar1
            );
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_effectPrefix;
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(pSVar2,pSVar1,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
            ((context->fields).GameObject,
             TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont,
             (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft
            ((context->fields).GameObject,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$LoadPresetColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors (UnityEngine_GameObject_o* source, System_String_o* type, const MethodInfo* method);
// 0x181dfa9f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfaa49: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadPresetColors
               (UnityEngine_GameObject_o *source,System_String_o *type,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *value;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  uint uVar4;
  uint local_res10 [2];
  
  if (Il2CppMethodInitialized_184344b98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_184344b98 = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__PresetColors(type,(MethodInfo *)0x0);
  uVar4 = 0;
  do {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar1 == (System_String_array *)0x0) {
label_181dfaba1:
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length <= (int)uVar4) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    if (pSVar2 == (System_String_array *)0x0) goto label_181dfaba1;
    if ((uint)pSVar2->max_length <= uVar4) {
label_181dfab9b:
      ThrowIndexOutOfRangeException();
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar1 == (System_String_array *)0x0) goto label_181dfaba1;
    if ((uint)pSVar1->max_length <= uVar4) goto label_181dfab9b;
    pSVar3 = pSVar2->m_Items[(int)uVar4];
    pSVar1->m_Items[(int)uVar4] = pSVar3;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items + (int)uVar4,pSVar3);
    local_res10[0] = uVar4;
    if (Il2CppMethodInitialized_184344bab == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
      Il2CppMethodInitialized_184344bab = '\x01';
    }
    pSVar3 = System_Int32__ToString((int32_t *)local_res10,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50("profile-character-set-effects-draft-color-",pSVar3,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar1 == (System_String_array *)0x0) goto label_181dfaba1;
    if ((uint)pSVar1->max_length <= uVar4) goto label_181dfab9b;
    value = pSVar1->m_Items[(int)uVar4];
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar3,value,true,source,(MethodInfo *)0x0);
    uVar4 = uVar4 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$LoadGradientColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181dfa840

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__LoadGradientColors
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array *pSVar2;
  System_String_o *value;
  System_String_o *pSVar3;
  uint uVar4;
  uint local_res18 [4];
  
  if (Il2CppMethodInitialized_184344b99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_184344b99 = '\x01';
  }
  uVar4 = 0;
  do {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar1 == (System_String_array *)0x0) {
label_181dfa9e6:
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length <= (int)uVar4) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
             DefaultGradientColors;
    if (pSVar1 == (System_String_array *)0x0) goto label_181dfa9e6;
    if ((uint)pSVar1->max_length <= uVar4) {
label_181dfa9e0:
      ThrowIndexOutOfRangeException();
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar2 == (System_String_array *)0x0) goto label_181dfa9e6;
    if ((uint)pSVar2->max_length <= uVar4) goto label_181dfa9e0;
    pSVar3 = pSVar1->m_Items[(int)uVar4];
    pSVar2->m_Items[(int)uVar4] = pSVar3;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar4,pSVar3);
    local_res18[0] = uVar4;
    if (Il2CppMethodInitialized_184344bab == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
      Il2CppMethodInitialized_184344bab = '\x01';
    }
    pSVar3 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50("profile-character-set-effects-draft-color-",pSVar3,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar1 == (System_String_array *)0x0) goto label_181dfa9e6;
    if ((uint)pSVar1->max_length <= uVar4) goto label_181dfa9e0;
    value = pSVar1->m_Items[(int)uVar4];
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue(pSVar3,value,true,source,(MethodInfo *)0x0);
    uVar4 = uVar4 + 1;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyDraftColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyDraftColor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181df85d0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyDraftColor
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  System_String_array *pSVar1;
  UnityEngine_GameObject_o *source;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  uint uVar5;
  uint local_res8 [2];
  
  if (Il2CppMethodInitialized_184344b9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"cancel");
    Il2CppMethodInitialized_184344b9a = '\x01';
  }
  pSVar4 = (context->fields).ElementId;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  if (Il2CppMethodInitialized_184344baf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_184344baf = '\x01';
  }
  uVar5 = 0;
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar1 == (System_String_array *)0x0) goto label_181df88ca;
    if ((int)pSVar1->max_length <= (int)uVar5) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    local_res8[0] = uVar5;
    if (Il2CppMethodInitialized_184344bab == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
      Il2CppMethodInitialized_184344bab = '\x01';
    }
    pSVar3 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50("profile-character-set-effects-draft-color-",pSVar3,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar4,pSVar3,(MethodInfo *)0x0);
    if (bVar2) break;
    uVar5 = uVar5 + 1;
  }
  if ((int)uVar5 < 0) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
  if (pSVar1 == (System_String_array *)0x0) {
label_181df88ca:
    ThrowNullReferenceException();
  }
  if ((uint)pSVar1->max_length <= uVar5) goto label_181df88d0;
  pSVar4 = pSVar1->m_Items[(int)uVar5];
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
  if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_181df8808:
    pSVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__Normalize
                       (pSVar4,true,(System_String_o *)0x0,(MethodInfo *)0x0);
  }
  else {
    bVar2 = System_String__op_Equality
                      ((((context->fields).Node)->fields).id,"cancel",(MethodInfo *)0x0);
    if (!bVar2) {
      if ((context->fields).Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        pSVar4 = (((context->fields).Node)->fields).value;
      }
      goto label_181df8808;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    local_res8[0] = uVar5;
    if (Il2CppMethodInitialized_184344bab == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
      Il2CppMethodInitialized_184344bab = '\x01';
    }
    pSVar3 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50("profile-character-set-effects-draft-color-",pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    pSVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(pSVar3,pSVar4,true,(MethodInfo *)0x0);
  }
  if (uVar5 < (uint)pSVar1->max_length) {
    pSVar1->m_Items[(int)uVar5] = pSVar4;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items + (int)uVar5,pSVar4);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    source = (context->fields).GameObject;
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled == false)
    {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview(source,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview(source,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft(source,(MethodInfo *)0x0);
    return;
  }
label_181df88d0:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplySelectedTextColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplySelectedTextColor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181df8c10
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df8d82: mov edi, eax
// asm:   0x181df8d84: cmp eax, r14d
// asm:   0x181df8d89: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplySelectedTextColor
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  TMPro_TMP_Text_o *pTVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  bool bVar6;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  System_String_o *pSVar7;
  int index;
  int iVar8;
  
  if (Il2CppMethodInitialized_184344b9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"save");
    il2cpp_codegen_initialize_runtime_metadata(&"cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-text-picker");
    Il2CppMethodInitialized_184344b9b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime
                     ((context->fields).GameObject,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_181df8e7d:
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    pSVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                       ("profile-character-set-effects-text-picker","#FFFFFF",false,(MethodInfo *)0x0);
  }
  else {
    bVar6 = System_String__op_Equality
                      ((((context->fields).Node)->fields).id,"cancel",(MethodInfo *)0x0);
    if (bVar6) {
      if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) goto label_181df8f21;
      if (Il2CppMethodInitialized_184344bf3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_get_Item);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_set_Item);
        Il2CppMethodInitialized_184344bf3 = '\x01';
      }
      if ((__this->fields)._hasPreview != false) {
        pSVar2 = (__this->fields)._previewColors;
        if ((pSVar2 == (System_Collections_Generic_List_string__o *)0x0) ||
           (pSVar3 = (__this->fields)._colors, pSVar3 == (System_Collections_Generic_List_string__o *)0x0))
        goto label_181df8f21;
        index = (__this->fields)._selectionStart;
        iVar8 = (pSVar2->fields)._size + index;
        iVar1 = (pSVar3->fields)._size;
        if (iVar1 <= iVar8) {
          iVar8 = iVar1;
        }
        for (; index < iVar8; index = index + 1) {
          pSVar2 = (__this->fields)._previewColors;
          if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto label_181df8f21;
          pSVar3 = (__this->fields)._colors;
          pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,
                              index - (__this->fields)._selectionStart,
                              (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
          ;
          if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_181df8f21;
          System_Collections_Generic_List_object___set_Item
                    ((System_Collections_Generic_List_object__o *)pSVar3,index,(Il2CppObject *)pSVar7,
                     (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
        }
        if (Il2CppMethodInitialized_184344beb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_184344beb = '\x01';
        }
        pTVar4 = (__this->fields)._text;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          pTVar4 = (__this->fields)._text;
          if (pTVar4 == (TMPro_TMP_Text_o *)0x0) goto label_181df8f21;
          (*(pTVar4->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                    (pTVar4,(System_Type_o *)0x0,(MethodInfo *)0x0);
        }
      }
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearSelection(__this,(MethodInfo *)0x0);
      goto label_181df8ee7;
    }
    if (((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
       (bVar6 = System_String__IsNullOrEmpty((((context->fields).Node)->fields).value,(MethodInfo *)0x0),
       bVar6)) goto label_181df8e7d;
    pGVar5 = (context->fields).Node;
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_181df8f21;
    pSVar7 = (pGVar5->fields).value;
  }
  if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar6 = true;
  }
  else {
    bVar6 = System_String__op_Equality
                      ((((context->fields).Node)->fields).id,"save",(MethodInfo *)0x0);
  }
  if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
label_181df8f21:
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyColor
            (__this,pSVar7,bVar6,(MethodInfo *)0x0);
label_181df8ee7:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft
            ((context->fields).GameObject,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ImportedColoredText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ImportedColoredText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181dfa500

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ImportedColoredText
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  System_String_o *value;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184344b9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.text-colors.enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184344b9c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode =
       "Color";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode,
             "Color");
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled = false;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType =
       "None";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType,
             "None");
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_181dfa827;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (source,(MethodInfo_6F53B0 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility(root,(MethodInfo *)0x0);
  if ((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this = (root->fields)._State_k__BackingField,
     __this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    bVar1 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this,"profile-character-set-effects.text-colors.enabled",bVar1,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  value = "Color";
  if (Il2CppMethodInitialized_184344baa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgChoiceControl);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-type");
    Il2CppMethodInitialized_184344baa = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (source != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                             ((UnityEngine_Component_o *)pUVar2,true,
                              (MethodInfo_665440 *)
                              MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgChoiceControl);
          if (pSVar3 != (System_Object_array *)0x0) {
            for (uVar4 = 0; (int)uVar4 < (int)pSVar3->max_length; uVar4 = uVar4 + 1) {
              if ((uint)pSVar3->max_length <= uVar4) {
                ThrowIndexOutOfRangeException();
              }
              __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pSVar3->m_Items[(int)uVar4];
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar1 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar1) {
                if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) goto label_181dfa827;
                __this_01 = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if (__this_01 == (UnityEngine_Object_o *)0x0) goto label_181dfa827;
                a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
                bVar1 = System_String__op_Equality(a,"profile-character-set-effects-type",(MethodInfo *)0x0);
                if (bVar1) {
                  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify
                            (__this_00,value,(MethodInfo *)0x0);
                  break;
                }
              }
            }
            goto label_181dfa804;
          }
        }
      }
    }
label_181dfa827:
    ThrowNullReferenceException();
  }
label_181dfa804:
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft(source,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181dfb260
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfb367: mov edi, r15d
// asm:   0x181dfb36a: jmp 0x181dfb38c
// asm:   0x181dfb4b0: mov rsi, qword ptr [rip + 0x22a2511]  ; "None"
// asm:   0x181dfb874: mov r14, qword ptr [rsp + 0x68]
// asm:   0x181dfb879: mov rdi, qword ptr [rsp + 0x60]
// asm:   0x181dfb87e: mov rsi, qword ptr [rsp + 0x58]
// asm:   0x181dfb883: mov r15, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  int32_t count;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this_00;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar6;
  System_String_o **targetAddress;
  uint uVar7;
  UnityEngine_GameObject_o *pUVar8;
  char cVar9;
  uint local_res8 [2];
  
  if (Il2CppMethodInitialized_184344b9d == '\0') {
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
    Il2CppMethodInitialized_184344b9d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime
                        ((context->fields).GameObject,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    uVar7 = 0;
    cVar9 = '\0';
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_hasAccess != false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      cVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    count = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                       _textMode,(MethodInfo *)0x0);
    if (count < 1) {
      if (__this_00 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0)
      goto label_181dfb88f;
      pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Serialized
                         (__this_00,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors(count,(MethodInfo *)0x0);
      if (__this_00 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0)
      goto label_181dfb88f;
      pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyGradient
                         (__this_00,(System_Collections_Generic_IList_string__o *)pSVar2,(MethodInfo *)0x0);
    }
    if (cVar9 != '\0') {
      pGVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(pSVar3,(MethodInfo *)0x0);
      if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
label_181dfb88f:
        ThrowNullReferenceException();
      }
      pSVar3 = (pGVar4->fields).Text;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_targetId;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue
              ((context->fields).GameObject,pSVar5,pSVar3,(MethodInfo *)0x0);
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_effectPrefix;
    pSVar5 = "None";
    if (cVar9 != '\0') {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    if (Il2CppMethodInitialized_184344c22 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      il2cpp_codegen_initialize_runtime_metadata(&"None");
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
      Il2CppMethodInitialized_184344c22 = '\x01';
    }
    bVar1 = System_String__op_Equality(pSVar3,"profile-character-name-effect",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectEnabled =
           cVar9 != '\0';
      pSVar3 = "None";
      if (cVar9 != '\0') {
        pSVar3 = pSVar5;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType = pSVar3;
      targetAddress =
           &TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectEnabled =
           cVar9 != '\0';
      pSVar3 = "None";
      if (cVar9 != '\0') {
        pSVar3 = pSVar5;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType = pSVar3;
      targetAddress =
           &TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType;
    }
    Il2CppCodeGenWriteBarrier(targetAddress,pSVar3);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont
              (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_effectPrefix,
               TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont,
               (MethodInfo *)0x0);
    while( true ) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if (pSVar2 == (System_String_array *)0x0) goto label_181dfb88f;
      if ((int)pSVar2->max_length <= (int)uVar7) break;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_effectPrefix;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      local_res8[0] = uVar7;
      if (Il2CppMethodInitialized_184344c28 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"-color-");
        Il2CppMethodInitialized_184344c28 = '\x01';
      }
      pSVar5 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969b70(pSVar3,"-color-",pSVar5,(MethodInfo *)0x0);
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if (pSVar2 == (System_String_array *)0x0) goto label_181dfb88f;
      if ((uint)pSVar2->max_length <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      pSVar5 = pSVar2->m_Items[(int)uVar7];
      if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
      }
      Gisketch_Aottg2UI_Code_GisketchUIColorPicker__SetValue
                (pSVar3,pSVar5,true,(context->fields).GameObject,(MethodInfo *)0x0);
      uVar7 = uVar7 + 1;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_targetId;
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
              ((context->fields).GameObject,pSVar3,pSVar5,(MethodInfo *)0x0);
    pUVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_ownerSource;
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) {
      pUVar8 = (context->fields).GameObject;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    if (Il2CppMethodInitialized_184344c18 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effects-draft");
      Il2CppMethodInitialized_184344c18 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectsDraftValue((MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_1901cb0
              (pUVar8,"profile-character-effects-draft",pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
    }
    Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh((context->fields).GameObject,(MethodInfo *)0x0);
    pUVar8 = (context->fields).GameObject;
    if (((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
        (pGVar6 = UnityEngine_GameObject__GetComponentInParent_object_
                            (pUVar8,(MethodInfo_6F53B0 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot),
        pGVar6 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) &&
       (__this = (pGVar6->fields)._Overlays_k__BackingField,
       __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTopForced(__this,true,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DiscardPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DiscardPreview (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181df9da0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DiscardPreview
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_String_o *prefix;
  System_String_o *font;
  UnityEngine_GameObject_o *pUVar1;
  
  if (Il2CppMethodInitialized_184344b9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_184344b9e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  prefix = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_effectPrefix;
  font = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_initialFont;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont(prefix,font,(MethodInfo *)0x0);
  pUVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_ownerSource;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    source = pUVar1;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
            (source,TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                    _initialFont,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$TextColorsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled (const MethodInfo* method);
// 0x181dfc680

bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344b9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    Il2CppMethodInitialized_184344b9f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textEditable != false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled == false)
    {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      bVar1 = System_String__op_Equality
                        (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                         _textMode,"Color",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ColorPanelVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible (const MethodInfo* method);
// 0x181df9c80

bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184344ba0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_184344ba0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled != false) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  iVar1 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode,
                     (MethodInfo *)0x0);
  return 0 < iVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$TextColorHelpVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorHelpVisible (const MethodInfo* method);
// 0x181dfc640

bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorHelpVisible(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344ba1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_184344ba1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ColorVisible
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible (int32_t index, const MethodInfo* method);
// 0x181df9d10

bool Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorVisible(int32_t index,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184344ba2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_184344ba2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  iVar1 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode,
                     (MethodInfo *)0x0);
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled != false) {
    return true;
  }
  if (iVar1 < 1) {
    return false;
  }
  return index < iVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetColorVisibility
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x181dfc220
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dfc48d: mov rbp, qword ptr [rsp + 0x40]
// asm:   0x181dfc492: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x181dfc497: mov rdi, qword ptr [rsp + 0x48]

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetColorVisibility
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_String_array *pSVar2;
  bool bVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  int iVar6;
  int local_res8 [2];
  
  if (Il2CppMethodInitialized_184344ba3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.text-color-help.visible");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.effect-colors.visible");
    Il2CppMethodInitialized_184344ba3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if ((root->fields)._State_k__BackingField == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    pGVar1 = (root->fields)._State_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ColorPanelVisible((MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"profile-character-set-effects.effect-colors.visible",bVar3,(MethodInfo *)0x0);
    pGVar1 = (root->fields)._State_k__BackingField;
    if (Il2CppMethodInitialized_184344ba1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      Il2CppMethodInitialized_184344ba1 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__TextColorsEnabled((MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,"profile-character-set-effects.text-color-help.visible",bVar3,(MethodInfo *)0x0);
      iVar6 = 0;
      while( true ) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
        }
        pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
        if (pSVar2 == (System_String_array *)0x0) break;
        if ((int)pSVar2->max_length <= iVar6) {
          return;
        }
        pGVar1 = (root->fields)._State_k__BackingField;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
        }
        local_res8[0] = iVar6;
        if (Il2CppMethodInitialized_184344bac == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.draft-color-");
          il2cpp_codegen_initialize_runtime_metadata(&".visible");
          Il2CppMethodInitialized_184344bac = '\x01';
        }
        pSVar5 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_1969b70
                           ("profile-character-set-effects.draft-color-",pSVar5,".visible",(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_184344ba2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
          Il2CppMethodInitialized_184344ba2 = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
        }
        iVar4 = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                          (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                           _textMode,(MethodInfo *)0x0);
        if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftEnabled ==
            false) {
          if (iVar4 < 1) {
            bVar3 = false;
          }
          else {
            bVar3 = iVar6 < iVar4;
          }
        }
        else {
          bVar3 = true;
        }
        if (pGVar1 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) break;
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar1,pSVar5,bVar3,(MethodInfo *)0x0);
        iVar6 = iVar6 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyGradientPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181df8b00

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyGradientPreview
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool bVar1;
  int32_t count;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  System_String_array *stops;
  
  if (Il2CppMethodInitialized_184344ba4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344ba4 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  count = Gisketch_Aottg2UI_Game_AottgCharacterEffectUi__GradientStops
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode,
                     (MethodInfo *)0x0);
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (count < 1) {
    if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ClearNameEffectPreview
                (__this,(MethodInfo *)0x0);
      (__this->fields)._gradientStops = (System_String_array *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops,(void *)0x0);
      return;
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    stops = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors(count,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetGradient
                (__this,(System_Collections_Generic_IList_string__o *)stops,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyEffectPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181df88e0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyEffectPreview
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_String_o *type;
  System_String_array *colors;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  
  if (Il2CppMethodInitialized_184344ba5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344ba5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      ThrowNullReferenceException();
    }
    type = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType;
    colors = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    (__this->fields)._gradientStops = (System_String_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._gradientStops,(void *)0x0);
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__StoreEffectPreview
              (__this,type,(System_Collections_Generic_IList_string__o *)colors,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__ApplyStoredEffectPreview
              (__this,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$ApplyFontPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview (UnityEngine_GameObject_o* source, System_String_o* font, const MethodInfo* method);
// 0x181df89e0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__ApplyFontPreview
               (UnityEngine_GameObject_o *source,System_String_o *font,MethodInfo *method)

{
  System_String_o *id;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  
  if (Il2CppMethodInitialized_184344ba6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344ba6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  id = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_targetId;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont(source,id,font,(MethodInfo *)0x0);
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__SetFont(__this,font,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh(source,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$GradientColors
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors (int32_t count, const MethodInfo* method);
// 0x181dfa430

System_String_array *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__GradientColors(int32_t count,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *value;
  System_String_array *pSVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (Il2CppMethodInitialized_184344ba7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184344ba7 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,count);
  uVar4 = 0;
  if (0 < count) {
    do {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
      if (pSVar1 == (System_String_array *)0x0) {
label_181dfa4ef:
        ThrowNullReferenceException();
      }
      uVar3 = (uint)uVar4;
      if ((uint)pSVar1->max_length <= uVar3) {
label_181dfa4f5:
        ThrowIndexOutOfRangeException();
      }
      if (pSVar2 == (System_String_array *)0x0) goto label_181dfa4ef;
      if ((uint)pSVar2->max_length <= uVar3) goto label_181dfa4f5;
      value = pSVar1->m_Items[uVar4];
      pSVar2->m_Items[uVar4] = value;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + uVar4,value);
      uVar4 = (ulonglong)(uVar3 + 1);
    } while ((int)(uVar3 + 1) < count);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetState (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* key, bool value, const MethodInfo* method);
// 0x181dfc4b0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetState
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *key,bool value,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ba8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_184344ba8 = '\x01';
  }
  __this = (context->fields).GameObject;
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this,(MethodInfo_6F53B0 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar1->fields)._State_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this_00,key,value,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$Runtime
// il2cpp: Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181dfb1a0

Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  
  if (Il2CppMethodInitialized_184344ba9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgCharacterTextColorEditorRuntime)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344ba9 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
  }
  if ((((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
      (pUVar3 = UnityEngine_Transform__GetRoot(pUVar3,(MethodInfo *)0x0),
      pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
     (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar3,true,
                          (MethodInfo_665440 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgCharacterTextColorEditorRuntime
                         ), pSVar4 == (System_Object_array *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = (int)pSVar4->max_length;
  if (iVar1 < 1) {
    return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0;
  }
  if (iVar1 == 0) {
    ThrowIndexOutOfRangeException();
  }
  return (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)pSVar4->m_Items[0];
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SetChoiceValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetChoiceValue (UnityEngine_GameObject_o* source, System_String_o* value, const MethodInfo* method);
// 0x181dfc0b0

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SetChoiceValue
               (UnityEngine_GameObject_o *source,System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this_00;
  System_String_o *a;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184344baa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgChoiceControl);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-type");
    Il2CppMethodInitialized_184344baa = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((((source == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) ||
        (pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0),
        pUVar2 == (UnityEngine_Transform_o *)0x0)) ||
       (pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)pUVar2,true,
                            (MethodInfo_665440 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_AottgChoiceControl),
       pSVar3 == (System_Object_array *)0x0)) {
label_181dfc211:
      ThrowNullReferenceException();
    }
    for (uVar4 = 0; (int)uVar4 < (int)pSVar3->max_length; uVar4 = uVar4 + 1) {
      if ((uint)pSVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pSVar3->m_Items[(int)uVar4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((__this == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) ||
           (__this_00 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_Object_o *)0x0)) goto label_181dfc211;
        a = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,"profile-character-set-effects-type",(MethodInfo *)0x0);
        if (bVar1) {
          Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify(__this,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorId (int32_t index, const MethodInfo* method);
// 0x181df9e80

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorId(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_res8 [8];
  
  local_res8[0] = index;
  if (Il2CppMethodInitialized_184344bab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
    Il2CppMethodInitialized_184344bab = '\x01';
  }
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("profile-character-set-effects-draft-color-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorVisibleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorVisibleKey (int32_t index, const MethodInfo* method);
// 0x181df9fc0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorVisibleKey(int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_res8 [8];
  
  local_res8[0] = index;
  if (Il2CppMethodInitialized_184344bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.draft-color-");
    il2cpp_codegen_initialize_runtime_metadata(&".visible");
    Il2CppMethodInitialized_184344bac = '\x01';
  }
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70("profile-character-set-effects.draft-color-",pSVar1,".visible",(MethodInfo *)0x0)
  ;
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$SyncDialogDraft
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181dfc530

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__SyncDialogDraft
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *__this;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344bad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects.draft");
    Il2CppMethodInitialized_184344bad = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  __this = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Runtime(source,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorEditorRuntime__Serialized(__this,(MethodInfo *)0x0)
    ;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_initialValue;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__EffectDialogDraftValue
                     (pSVar2,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_1901cb0
            (source,"profile-character-set-effects.draft",pSVar2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$EffectDialogDraftValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__EffectDialogDraftValue (System_String_o* text, const MethodInfo* method);
// 0x181dfa020

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__EffectDialogDraftValue
          (System_String_o *text,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar6;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  uint uVar7;
  
  if (Il2CppMethodInitialized_184344bae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_184344bae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
  }
  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354de8);
  }
  pSVar6 = System_Boolean__ToString
                     (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                       _draftEnabled,(MethodInfo *)0x0);
  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
label_181dfa41c:
    ThrowNullReferenceException();
  }
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar3 = (__this->fields)._items;
  if (pSVar3 == (System_String_array *)0x0) goto label_181dfa41c;
  uVar7 = (__this->fields)._size;
  if (uVar7 < (uint)pSVar3->max_length) {
    (__this->fields)._size = uVar7 + 1;
    if ((uint)pSVar3->max_length <= uVar7) goto label_181dfa422;
    pSVar3->m_Items[(int)uVar7] = pSVar6;
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar7,pSVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
               (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
  }
  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar3 = (__this->fields)._items;
  pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType;
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  if (pSVar3 == (System_String_array *)0x0) goto label_181dfa41c;
  uVar7 = (__this->fields)._size;
  if (uVar7 < (uint)pSVar3->max_length) {
    (__this->fields)._size = uVar7 + 1;
    if ((uint)pSVar3->max_length <= uVar7) goto label_181dfa422;
    pSVar3->m_Items[(int)uVar7] = pSVar6;
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar7,pSVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
               (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
  }
  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar3 = (__this->fields)._items;
  pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont;
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  if (pSVar3 == (System_String_array *)0x0) goto label_181dfa41c;
  uVar7 = (__this->fields)._size;
  if (uVar7 < (uint)pSVar3->max_length) {
    (__this->fields)._size = uVar7 + 1;
    if ((uint)pSVar3->max_length <= uVar7) goto label_181dfa422;
    pSVar3->m_Items[(int)uVar7] = pSVar6;
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar7,pSVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
               (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
  }
  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar3 = (__this->fields)._items;
  pSVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode;
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  if (pSVar3 == (System_String_array *)0x0) goto label_181dfa41c;
  uVar7 = (__this->fields)._size;
  if (uVar7 < (uint)pSVar3->max_length) {
    (__this->fields)._size = uVar7 + 1;
    if ((uint)pSVar3->max_length <= uVar7) goto label_181dfa422;
    pSVar3->m_Items[(int)uVar7] = pSVar6;
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar7,pSVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
               (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
  }
  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar3 = (__this->fields)._items;
  if (pSVar3 == (System_String_array *)0x0) goto label_181dfa41c;
  uVar7 = (__this->fields)._size;
  if (uVar7 < (uint)pSVar3->max_length) {
    (__this->fields)._size = uVar7 + 1;
    if ((uint)pSVar3->max_length <= uVar7) goto label_181dfa422;
    pSVar3->m_Items[(int)uVar7] = text;
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar7,text);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)text,
               (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
  }
  uVar7 = 0;
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar3 == (System_String_array *)0x0) goto label_181dfa41c;
    if ((int)pSVar3->max_length <= (int)uVar7) {
      value = System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_T__o *)__this,
                         (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar6 = System_String__Join("|",(System_String_array *)value,(MethodInfo *)0x0);
      return pSVar6;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar3 == (System_String_array *)0x0) goto label_181dfa41c;
    if ((uint)pSVar3->max_length <= uVar7) break;
    pSVar4 = (__this->fields)._items;
    pSVar6 = pSVar3->m_Items[(int)uVar7];
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar4 == (System_String_array *)0x0) goto label_181dfa41c;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) break;
      pSVar4->m_Items[(int)uVar2] = pSVar6;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pSVar6);
      uVar7 = uVar7 + 1;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
      uVar7 = uVar7 + 1;
    }
  }
label_181dfa422:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$DraftColorIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex (System_String_o* id, const MethodInfo* method);
// 0x181df9ed0

int32_t Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__DraftColorIndex
                  (System_String_o *id,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  int iVar4;
  int local_res18 [4];
  
  if (Il2CppMethodInitialized_184344baf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    Il2CppMethodInitialized_184344baf = '\x01';
  }
  iVar4 = 0;
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors;
    if (pSVar1 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length <= iVar4) {
      return -1;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog);
    }
    local_res18[0] = iVar4;
    if (Il2CppMethodInitialized_184344bab == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-set-effects-draft-color-");
      Il2CppMethodInitialized_184344bab = '\x01';
    }
    pSVar3 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969e50("profile-character-set-effects-draft-color-",pSVar3,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(id,pSVar3,(MethodInfo *)0x0);
    if (bVar2) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___ctor (Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___ctor(Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterSetEffectsDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___cctor (const MethodInfo* method);
// 0x181dfc740

void Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_184344bb0 == '\0') {
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
    Il2CppMethodInitialized_184344bb0 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar1 = "#FFFFFFFF";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "#FFFFFFFF";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      pSVar1 = "#FFFFFFFF";
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "#FFFFFFFF";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
        pSVar1 = "#FFFFFFFF";
        if (2 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[2] = "#FFFFFFFF";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
          pSVar1 = "#FFFFFFFF";
          if (3 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[3] = "#FFFFFFFF";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
            TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->DraftColors =
                 pSVar2;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                        DraftColors,pSVar2);
            pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
            pSVar1 = "#B7F8C8FF";
            if (pSVar2 == (System_String_array *)0x0) goto label_181dfca2c;
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = "#B7F8C8FF";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
              pSVar1 = "#A8F5D6FF";
              if (1 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[1] = "#A8F5D6FF";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                pSVar1 = "#97F0E8FF";
                if (2 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[2] = "#97F0E8FF";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
                  pSVar1 = "#8CEBFFFF";
                  if (3 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[3] = "#8CEBFFFF";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
                    TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                    DefaultGradientColors = pSVar2;
                    Il2CppCodeGenWriteBarrier
                              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields
                                ->DefaultGradientColors,pSVar2);
                    TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->
                    _initialFont = "Normal";
                    Il2CppCodeGenWriteBarrier
                              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields
                                ->_initialFont,"Normal");
                    TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftFont
                         = "Normal";
                    Il2CppCodeGenWriteBarrier
                              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields
                                ->_draftFont,"Normal");
                    TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_draftType
                         = "None";
                    Il2CppCodeGenWriteBarrier
                              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields
                                ->_draftType,"None");
                    TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields->_textMode =
                         "Color";
                    Il2CppCodeGenWriteBarrier
                              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog->static_fields
                                ->_textMode,"Color");
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
label_181dfca2c:
  ThrowNullReferenceException();
}


