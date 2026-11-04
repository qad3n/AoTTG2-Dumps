// Type: Gisketch.Aottg2UI.Game.AottgEditCharacterDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEditCharacterDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___cctor (const MethodInfo* method);
// 0x181e0da80

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this;
  
  if (Il2CppMethodInitialized_184344c37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
    Il2CppMethodInitialized_184344c37 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___ctor(Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$<BuildBody>b__41_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___BuildBody_b__41_2 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x181e0c980

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___BuildBody_b__41_2
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344c38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.save.character");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.save.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_184344c38 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
              (footer,3,"Common.Cancel","Cancel","overlay.close",
               (System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (footer,0,"Common.Save","Save","profile.save.character",
                        (System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).enabled = "profile.save.idle";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled,"profile.save.idle");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$<PresetGuild>b__61_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___PresetGuild_b__61_0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* group, const MethodInfo* method);
// 0x181e0cb80
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0cc98: mov rbx, qword ptr [rip + 0x2286d79]  ; "Custom"
// asm:   0x181e0cc9f: jmp 0x181e0ccd3
// asm:   0x181e0cccc: mov rbx, qword ptr [rip + 0x226d93d]  ; "__none"

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c___PresetGuild_b__61_0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *group,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *options;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184344c39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_SelectPresetGuild);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"Guild Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-preset-guild");
    Il2CppMethodInitialized_184344c39 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_184344c2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"__none");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    Il2CppMethodInitialized_184344c2d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  value_00 = "__none";
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    bVar1 = System_String__IsNullOrEmpty
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->
                       _selectedGuildPresetId,(MethodInfo *)0x0);
    value_00 = "Custom";
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      value_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->
                 _selectedGuildPresetId;
    }
  }
  options = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions((MethodInfo *)0x0);
  __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_SelectPresetGuild,
             (MethodInfo_1387DC0 *)0x0);
  if (group != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__FormSelect_18c8400
                     (group,"profile-character-preset-guild","Guild Preset",value_00,options,
                      (System_Action_GisketchActionContext__o *)__this_00,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,6,(System_String_o *)0x0,
                      (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
    }
    Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__UseRenderer(node,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344c31 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Center");
      il2cpp_codegen_initialize_runtime_metadata(&"Row");
      Il2CppMethodInitialized_184344c31 = '\x01';
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Row",(System_String_o *)0x0,"Center",
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(node->fields).layout,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass41_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0___ctor(Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass41_0$$<BuildBody>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0___BuildBody_b__0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x181e0d060

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0___BuildBody_b__0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *pGVar1;
  Il2CppObject *object;
  System_String_o *pSVar2;
  System_String_o *icon;
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  
  if (Il2CppMethodInitialized_184344c3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c_BuildBody_b__41_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass41_0_BuildBody_b__1)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-edit-character-form-body");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogFooter");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogBody");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-edit-character-form-footer");
    Il2CppMethodInitialized_184344c3a = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *)0x0) {
    pSVar2 = (*(pGVar1->klass->vtable)._4_get_Title.methodPtr)
                       (pGVar1,(pGVar1->klass->vtable)._4_get_Title.method);
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *)0x0) {
      icon = (*(pGVar1->klass->vtable)._5_get_TitleIcon.methodPtr)
                       (pGVar1,(pGVar1->klass->vtable)._5_get_TitleIcon.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader);
      Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
                (__this_00,pSVar2,0,icon,(System_String_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
        pSVar2 = "dialogBody";
        pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
        if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
          pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (pUVar3,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass41_0_BuildBody_b__1
                     ,(MethodInfo *)0x0);
          (__this->fields).__9__1 = (System_Action_AottgUi__o *)pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,pUVar3);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,1.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        contentLayout =
             Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                  (panel,pSVar2,(System_Action_AottgUi__o *)pUVar3,"profile-edit-character-form-body",pGVar5,contentLayout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
        }
        pSVar2 = "dialogFooter";
        pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9__41_2;
        if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
          }
          object = (Il2CppObject *)
                   TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9;
          pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (pUVar3,object,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c_BuildBody_b__41_2,
                     (MethodInfo *)0x0);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9__41_2 =
               (System_Action_AottgUi__o *)pUVar3;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9__41_2,
                     pUVar3);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row","FlexEnd","Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (panel,pSVar2,(System_Action_AottgUi__o *)pUVar3,"profile-edit-character-form-footer",pGVar5,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass41_0$$<BuildBody>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0___BuildBody_b__1 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* form, const MethodInfo* method);
// 0x181e0d590

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0___BuildBody_b__1
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *form,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Xml_Schema_XmlSchema_c *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  bool bVar9;
  System_Xml_Schema_XmlSchema_o *pSVar10;
  System_String_o *pSVar11;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar12;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *pGVar13;
  
  if (Il2CppMethodInitialized_184344c3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_RefreshPreview);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"Character Name");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.GuildPlaceholder");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"Guild tag");
    il2cpp_codegen_initialize_runtime_metadata(&"guild");
    il2cpp_codegen_initialize_runtime_metadata(&"Character name");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.CharacterNamePlaceholder");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.CharacterName");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild");
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    Il2CppMethodInitialized_184344c3b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  bVar9 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__CustomGuildSelected((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout(form,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).info;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar10 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)"name");
    if (pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar2 = pSVar10->klass;
      pSVar11 = (System_String_o *)
                (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                          (pSVar10,(UnityEngine_GameObject_o *)
                                   (pSVar2->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar2);
      pDVar12 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pDVar12,(Il2CppObject *)0x0,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_RefreshPreview,
                 (MethodInfo_1387DC0 *)0x0);
      pGVar13 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
      pSVar8 = "Character name";
      pSVar7 = "Character Name";
      pSVar6 = "MainMenu.Profile.CharacterNamePlaceholder";
      pSVar5 = "MainMenu.Profile.CharacterName";
      pSVar4 = "profile-character-name-effect";
      pSVar3 = "profile-character-name";
      Gisketch_Aottg2UI_Code_AottgComponent___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar13,(MethodInfo *)0x0);
      (pGVar13->fields)._id = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._id,pSVar3);
      (pGVar13->fields)._label = pSVar7;
      Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._label,pSVar7);
      (pGVar13->fields)._labelKey = pSVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._labelKey,pSVar5);
      (pGVar13->fields)._placeholder = pSVar8;
      Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._placeholder,pSVar8);
      (pGVar13->fields)._placeholderKey = pSVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._placeholderKey,pSVar6);
      if (pSVar11 == (System_String_o *)0x0) {
        pSVar11 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      if (pGVar13 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
        (pGVar13->fields)._value = pSVar11;
        Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._value,pSVar11);
        (pGVar13->fields)._enabled = true;
        (pGVar13->fields)._effectPrefix = pSVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._effectPrefix,pSVar4);
        (pGVar13->fields)._changed = (System_Action_GisketchActionContext__o *)pDVar12;
        Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._changed,pDVar12);
        if (form != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Component
                    (form,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar13,(MethodInfo *)0x0);
          pSVar1 = (__this->fields).info;
          if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar10 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar1,(MethodInfo *)"guild");
            if (pSVar10 != (System_Xml_Schema_XmlSchema_o *)0x0) {
              pSVar2 = pSVar10->klass;
              pSVar11 = (System_String_o *)
                        (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                                  (pSVar10,(UnityEngine_GameObject_o *)
                                           (pSVar2->vtable)._9_SetUnhandledAttributes.method,
                                   (MethodInfo *)pSVar2);
              pDVar12 = (DG_Tweening_Core_DOSetter_Color2__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext)
              ;
              System_Action_GisketchActionContext____ctor
                        (pDVar12,(Il2CppObject *)0x0,
                         (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_RefreshPreview,
                         (MethodInfo_1387DC0 *)0x0);
              pGVar13 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
              pSVar8 = "MainMenu.Profile.GuildPlaceholder";
              pSVar7 = "profile-character-guild-effect";
              pSVar6 = "profile-character-guild";
              pSVar5 = "Guild tag";
              pSVar4 = "Guild";
              pSVar3 = "Common.Guild";
              Gisketch_Aottg2UI_Code_AottgComponent___ctor
                        ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar13,(MethodInfo *)0x0);
              (pGVar13->fields)._id = pSVar6;
              Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._id,pSVar6);
              (pGVar13->fields)._label = pSVar4;
              Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._label,pSVar4);
              (pGVar13->fields)._labelKey = pSVar3;
              Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._labelKey,pSVar3);
              (pGVar13->fields)._placeholder = pSVar5;
              Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._placeholder,pSVar5);
              (pGVar13->fields)._placeholderKey = pSVar8;
              Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._placeholderKey,pSVar8);
              if (pSVar11 == (System_String_o *)0x0) {
                pSVar11 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
              }
              if (pGVar13 != (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)0x0) {
                (pGVar13->fields)._value = pSVar11;
                Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._value,pSVar11);
                (pGVar13->fields)._enabled = bVar9;
                (pGVar13->fields)._effectPrefix = pSVar7;
                Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._effectPrefix,pSVar7);
                (pGVar13->fields)._changed = (System_Action_GisketchActionContext__o *)pDVar12;
                Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._changed,pDVar12);
                Gisketch_Aottg2UI_Code_AottgUi__Component
                          (form,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar13,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild(form,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges(form,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass62_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0___ctor(Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass62_0$$<Badges>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0___Badges_b__0 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* group, const MethodInfo* method);
// 0x181e269d0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0___Badges_b__0
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *group,MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344c3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass62_0_Badges_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badges");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.NoneAvailable");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"None available");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"accountInputLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    Il2CppMethodInitialized_184344c3d = '\x01';
  }
  if (group != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (group,"MainMenu.Profile.Badges","Badges","accountInputLabel",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    style = "row";
    pSVar1 = (__this->fields).badges;
    if (pSVar1 != (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
      if ((pSVar1->fields)._size == 0) {
        Gisketch_Aottg2UI_Code_AottgUi__TextKey
                  (group,"MainMenu.Profile.NoneAvailable","None available","accountInputLabel",
                   (System_String_o *)0x0,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      }
      else {
        __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
        if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
          __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (__this_00,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass62_0_Badges_b__1
                     ,(MethodInfo *)0x0);
          (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
        }
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,"Wrap",14.0,width,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (group,style,(System_Action_AottgUi__o *)__this_00,"profile-character-badges",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass62_0$$<Badges>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0___Badges_b__1 (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181e26c90
// eh: try 0x181e26df1..0x181e270cb -> pad 0x18333c5f0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e27073: mov rdx, qword ptr [rip + 0x224cf9e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose
// asm:   0x181e2707a: mov rcx, qword ptr [rsp + 0xd0]
// asm:   0x181e27082: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e27087: mov rcx, qword ptr [rsp + 0xc8]
// asm:   0x181e2708f: test rcx, rcx
// asm:   0x181e27092: jne 0x181e270cb
// asm:   0x181e270cb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c5f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c5f5: push rbp
// asm:   0x18333c5f6: sub rsp, 0xc0
// asm:   0x18333c5fd: mov rbp, rdx
// asm:   0x18333c600: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18333c607: mov rcx, qword ptr [rax]
// asm:   0x18333c60a: mov qword ptr [rbp + 0xc8], rcx
// asm:   0x18333c611: movabs rax, 0
// asm:   0x18333c61b: add rsp, 0xc0
// asm:   0x18333c622: pop rbp
// asm:   0x18333c623: ret 

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0___Badges_b__1
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *__this_00;
  System_String_o *text;
  System_Collections_Generic_HashSet_object__o *__this_01;
  Il2CppObject *item;
  System_String_o *icon;
  uint8_t value;
  bool bVar1;
  DG_Tweening_Core_DOSetter_Color2__o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  System_String_o *pSVar3;
  System_Nullable_bool__Fields local_res8 [4];
  Gisketch_Aottg2UI_Code_AottgUi_o *local_res10;
  System_String_o *local_res20;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  System_String_o *pSStack_b8;
  System_String_o *local_b0;
  undefined8 uStack_a8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_String_o *pSStack_88;
  System_String_o *local_80;
  undefined8 uStack_78;
  
  local_res10 = row;
  if (Il2CppMethodInitialized_184344c3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_ToggleBadge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"This feature is only available for supporters.");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badge-");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    Il2CppMethodInitialized_184344c3e = '\x01';
  }
  local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d0.fields._index = 0;
  local_d0.fields._version = 0;
  local_d0.fields._current = (Il2CppObject *)0x0;
  pSStack_b8 = (System_String_o *)0x0;
  local_b0 = (System_String_o *)0x0;
  uStack_a8 = 0;
  __this_00 = (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)
              (__this->fields).badges;
  if (__this_00 == (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)0x0
     ) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___GetEnumerator
            (&local_a0,__this_00,
             (MethodInfo_942C50 *)
             MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_GetEnumerator);
  local_d0.fields._list = local_a0.fields._list;
  local_d0.fields._index = local_a0.fields._index;
  local_d0.fields._version = local_a0.fields._version;
  local_d0.fields._current = local_a0.fields._current;
  pSStack_b8 = pSStack_88;
  local_b0 = local_80;
  uStack_a8 = uStack_78;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_VisualTreeAsset_AssetEntry___MoveNext
                      (&local_d0,
                       (MethodInfo_1529610 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_MoveNext
                      );
    icon = local_b0;
    pSVar3 = pSStack_b8;
    item = local_d0.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_d0,
                 MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose);
      return;
    }
    value = (uint8_t)uStack_a8;
    local_res20 = System_String__Concat_1969e50
                            ("profile-character-badge-",(System_String_o *)local_d0.fields._current,
                             (MethodInfo *)0x0);
    text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    if (value == '\0') {
      bVar1 = false;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      __this_01 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = System_Collections_Generic_HashSet_object___Contains
                        (__this_01,item,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    }
    __this_02 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_02,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_ToggleBadge,
               (MethodInfo_1387DC0 *)0x0);
    if (value == '\0') {
      pSVar3 = "This feature is only available for supporters.";
    }
    if (local_res10 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Checkbox
                       (local_res10,local_res20,text,bVar1,(System_Action_GisketchActionContext__o *)__this_02
                        ,icon,pSVar3,(MethodInfo *)0x0);
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,value,MethodInfo_System_Nullable_bool_ctor);
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pGVar2->fields).enabled.fields = local_res8[0];
    pSVar3 = "MainMenu.Profile.SupporterOnlyFeature";
    if (value != '\0') {
      pSVar3 = (System_String_o *)0x0;
    }
    (pGVar2->fields).tooltipKey = pSVar3;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).tooltipKey,pSVar3);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
    value_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
    (pGVar2->fields).layout = value_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,value_00);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_Title (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x181e0a3f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344c0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.EditCharacter");
    il2cpp_codegen_initialize_runtime_metadata(&"Edit Character");
    Il2CppMethodInitialized_184344c0d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("MainMenu.Profile.EditCharacter","Edit Character",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x181e0a3c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344c0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/edit");
    Il2CppMethodInitialized_184344c0e = '\x01';
  }
  return "material-icons/edit";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootStyle (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x181e0a390

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344c0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_184344c0f = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyStyle (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x181e0a260

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyStyle
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344c10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_184344c10 = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyScrollable(Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_GuardUnsavedChanges
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_GuardUnsavedChanges (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_GuardUnsavedChanges(Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, MethodInfo* method)

{
  return true;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x181e0a290

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344c11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344c11 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(1084.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x181e0a170

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344c12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184344c12 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,24.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildHeader (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildHeader(Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e06780
// eh: try 0x181e06925..0x181e06bb1 -> pad 0x18333c5f0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e06b74: xor edx, edx
// asm:   0x181e06b76: lea rcx, [rsp + 0xe8]
// asm:   0x181e06b7e: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e06b83: mov rcx, qword ptr [rsp + 0xc8]
// asm:   0x181e06b8b: test rcx, rcx
// asm:   0x181e06b8e: jne 0x181e06bb1
// asm:   0x181e06bb1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c5f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c5f5: push rbp
// asm:   0x18333c5f6: sub rsp, 0xc0
// asm:   0x18333c5fd: mov rbp, rdx
// asm:   0x18333c600: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18333c607: mov rcx, qword ptr [rax]
// asm:   0x18333c60a: mov qword ptr [rbp + 0xc8], rcx
// asm:   0x18333c611: movabs rax, 0
// asm:   0x18333c61b: add rsp, 0xc0
// asm:   0x18333c622: pop rbp
// asm:   0x18333c623: ret 

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *value;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0_o *object;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_o *component;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_80;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_60 [2];
  
  if (Il2CppMethodInitialized_184344c13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass41_0_BuildBody_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass41_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Effects");
    il2cpp_codegen_initialize_runtime_metadata(&"Badges");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"start");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-edit-character-form");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badges-draft");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-dialog-name-preview");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewDialog");
    il2cpp_codegen_initialize_runtime_metadata(&"Dialog.EditCharacter.BuildBody");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effects-draft");
    Il2CppMethodInitialized_184344c13 = '\x01';
  }
  local_60[0].fields._area = (System_String_o *)0x0;
  local_60[0].fields._detail = (System_String_o *)0x0;
  local_60[0].fields._startMs._0_4_ = 0;
  local_60[0].fields._startMs._4_2_ = 0;
  local_60[0].fields._startMs._6_2_ = 0;
  local_60[0].fields._enabled = false;
  local_60[0].fields._hotLoop = false;
  local_60[0].fields._26_6_ = 0;
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass41_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass41_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar1 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_80,"Dialog.EditCharacter.BuildBody","start",(MethodInfo *)0x0);
  local_60[0].fields._area = (pGVar1->fields)._area;
  local_60[0].fields._detail = (pGVar1->fields)._detail;
  local_60[0].fields._startMs = (pGVar1->fields)._startMs;
  local_60[0].fields._enabled = (pGVar1->fields)._enabled;
  local_60[0].fields._hotLoop = (pGVar1->fields)._hotLoop;
  local_60[0].fields._26_6_ = *(undefined6 *)&(pGVar1->fields).field_0x1a;
  local_80.fields._area = (System_String_o *)0x0;
  local_80.fields._detail = (System_String_o *)local_60;
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)0x0);
  (object->fields).info = pSVar2;
  Il2CppCodeGenWriteBarrier(&(object->fields).info,pSVar2);
  pSVar2 = (object->fields).info;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection(pSVar2,(MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BadgesDraftValue((MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__FormDraft
              (body,"profile-character-badges-draft",pSVar3,"Badges",(System_String_o *)0x0,
               (MethodInfo *)0x0);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectsDraftValue((MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__FormDraft
              (body,"profile-character-effects-draft",pSVar3,"Effects",(System_String_o *)0x0,
               (MethodInfo *)0x0);
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass41_0_BuildBody_b__0,
               (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(640.0,(MethodInfo *)0x0);
    minHeight = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minHeight,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelEnterMotion((MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,"profilePreviewDialog",(System_Action_AottgUi__o *)__this_00,"profile-edit-character-form"
                        ,layout,pGVar4,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelExitMotion((MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).exit = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).exit,pGVar4);
      component = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel);
      value = "Center";
      pSVar3 = "profile-character-dialog-name-preview";
      Gisketch_Aottg2UI_Code_AottgComponent___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component,(MethodInfo *)0x0);
      (component->fields)._id = pSVar3;
      Il2CppCodeGenWriteBarrier(&(component->fields)._id,pSVar3);
      (component->fields)._width = 420.0;
      (component->fields)._liveDialog = true;
      (component->fields)._alignSelf = value;
      Il2CppCodeGenWriteBarrier(&(component->fields)._alignSelf,value);
      (component->fields)._fullWidth = false;
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(local_60,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BuildFooter(Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedGuildPresetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedGuildPresetId (const MethodInfo* method);
// 0x181e098b0

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedGuildPresetId(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344c14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_184344c14 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected != false) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NoGuildSelected
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NoGuildSelected (const MethodInfo* method);
// 0x181e08960

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NoGuildSelected(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344c15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_184344c15 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedBadgeIds
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedBadgeIds (const MethodInfo* method);
// 0x181e09850

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedBadgeIds(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_184344c16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_184344c16 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                     ((System_Collections_Generic_IEnumerable_string__o *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges,
                      (MethodInfo *)0x0);
  return (System_Collections_Generic_IEnumerable_string__o *)pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectsDraftValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectsDraftValue (const MethodInfo* method);
// 0x181e07200

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectsDraftValue(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_string__o *parts;
  System_String_o *pSVar5;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  bool local_res10 [24];
  
  if (Il2CppMethodInitialized_184344c17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    Il2CppMethodInitialized_184344c17 = '\x01';
  }
  local_res10[0] = false;
  parts = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)parts,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_184344c19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_184344c19 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  local_res10[0] =
       Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-name-effect",(MethodInfo *)0x0)
  ;
  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354de8);
  }
  pSVar5 = System_Boolean__ToString(local_res10,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (parts != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(parts->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (parts->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e07633;
    uVar2 = (parts->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (parts->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e07639;
      pSVar3->m_Items[(int)uVar2] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType((MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (parts->fields)._items;
    piVar1 = &(parts->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e07633;
    uVar2 = (parts->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (parts->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e07639;
      pSVar3->m_Items[(int)uVar2] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont((MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (parts->fields)._items;
    piVar1 = &(parts->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e07633;
    uVar2 = (parts->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (parts->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e07639;
      pSVar3->m_Items[(int)uVar2] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__AddEffectColors
              (parts,"profile-character-name-effect",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344c1a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
      Il2CppMethodInitialized_184344c1a = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    local_res10[0] =
         Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled
                   ("profile-character-guild-effect",(MethodInfo *)0x0);
    pSVar5 = System_Boolean__ToString(local_res10,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (parts->fields)._items;
    piVar1 = &(parts->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e07633;
    uVar2 = (parts->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (parts->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e07639;
      pSVar3->m_Items[(int)uVar2] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType((MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (parts->fields)._items;
    piVar1 = &(parts->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 == (System_String_array *)0x0) goto label_181e07633;
    uVar2 = (parts->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (parts->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181e07639;
      pSVar3->m_Items[(int)uVar2] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont((MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar3 = (parts->fields)._items;
    piVar1 = &(parts->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (parts->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (parts->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
label_181e07639:
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)pSVar5,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__AddEffectColors
                (parts,"profile-character-guild-effect",(MethodInfo *)0x0);
      value = System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_T__o *)parts,
                         (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar5 = System_String__Join("|",(System_String_array *)value,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
label_181e07633:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SyncEffectsDraft
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SyncEffectsDraft (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181e09d40

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SyncEffectsDraft
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184344c18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-effects-draft");
    Il2CppMethodInitialized_184344c18 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  value = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectsDraftValue((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_1901cb0
            (source,"profile-character-effects-draft",value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameEffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectEnabled (const MethodInfo* method);
// 0x181e08780

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectEnabled(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344c19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_184344c19 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled
                    ("profile-character-name-effect",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildEffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectEnabled (const MethodInfo* method);
// 0x181e076d0

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectEnabled(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344c1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    Il2CppMethodInitialized_184344c1a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled
                    ("profile-character-guild-effect",(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameEffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType (const MethodInfo* method);
// 0x181e087e0

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344c1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184344c1b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_184344c19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_184344c19 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled
                    ("profile-character-name-effect",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType;
  }
  return "None";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildEffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType (const MethodInfo* method);
// 0x181e07730

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344c1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184344c1c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_184344c1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    Il2CppMethodInitialized_184344c1a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled
                    ("profile-character-guild-effect",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType;
  }
  return "None";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont (const MethodInfo* method);
// 0x181e088b0

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344c1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184344c1d = '\x01';
  }
  bVar1 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameFont;
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pSVar2 = PatreonEffects_NameFontCatalog__Normalize(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return "Normal";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildFont
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont (const MethodInfo* method);
// 0x181e07800

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344c1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184344c1e = '\x01';
  }
  bVar1 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildFont;
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pSVar2 = PatreonEffects_NameFontCatalog__Normalize(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return "Normal";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled (System_String_o* prefix, const MethodInfo* method);
// 0x181e06fd0

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled
               (System_String_o *prefix,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  char cVar2;
  
  if (Il2CppMethodInitialized_184344c1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_184344c1f = '\x01';
  }
  bVar1 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      cVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectEnabled;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      cVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectEnabled;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    value = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType(prefix,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344b57 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"None");
      Il2CppMethodInitialized_184344b57 = '\x01';
    }
    if (cVar2 != '\0') {
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__op_Inequality(value,"None",(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectType
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType (System_String_o* prefix, const MethodInfo* method);
// 0x181e070f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectType(System_String_o *prefix,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t local_res8 [8];
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_184344c20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_184344c20 = '\x01';
  }
  local_res8[0] = 0;
  bVar1 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType;
  }
  bVar1 = PatreonEffects_NameEffectPresets__TryResolve(pSVar2,local_res8,(MethodInfo *)0x0);
  if (bVar1) {
    local_28.klass = (System_Enum_c *)TypeInfo_PatreonEffects_NameEffectType;
    local_18 = local_res8[0];
    local_28.monitor = &g_data_ffffffffffffffff;
    pSVar2 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    return pSVar2;
  }
  return "None";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectColor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor (System_String_o* prefix, int32_t index, const MethodInfo* method);
// 0x181e06ef0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor
          (System_String_o *prefix,int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_184344c21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    Il2CppMethodInitialized_184344c21 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  local_res10[0] = index;
  if (Il2CppMethodInitialized_184344c28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-color-");
    Il2CppMethodInitialized_184344c28 = '\x01';
  }
  pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70(prefix,"-color-",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  pSVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                     (pSVar1,"#FFFFFFFF",true,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetEffect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect (System_String_o* prefix, bool enabled, System_String_o* type, const MethodInfo* method);
// 0x181e09a20

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetEffect
               (System_String_o *prefix,bool enabled,System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  System_String_o **targetAddress;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184344c22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_184344c22 = '\x01';
  }
  bVar1 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectEnabled = enabled;
    value = "None";
    if (enabled) {
      value = type;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType = value;
    targetAddress = &TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectEnabled = enabled;
    value = "None";
    if (enabled) {
      value = type;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType = value;
    targetAddress = &TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType
    ;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$Font
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Font (System_String_o* prefix, const MethodInfo* method);
// 0x181e07640

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Font(System_String_o *prefix,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344c23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_184344c23 = '\x01';
  }
  bVar1 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont((MethodInfo *)0x0);
    return pSVar2;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont((MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont (System_String_o* prefix, System_String_o* font, const MethodInfo* method);
// 0x181e09b80

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetFont
               (System_String_o *prefix,System_String_o *font,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344c24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    Il2CppMethodInitialized_184344c24 = '\x01';
  }
  bVar1 = System_String__op_Equality(prefix,"profile-character-name-effect",(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pSVar2 = PatreonEffects_NameFontCatalog__Normalize(font,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildFont = pSVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildFont,pSVar2);
    return;
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar2 = PatreonEffects_NameFontCatalog__Normalize(font,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameFont = pSVar2;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameFont,pSVar2);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$RefreshPreview
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RefreshPreview (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e092c0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RefreshPreview
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344c25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
    Il2CppMethodInitialized_184344c25 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh((context->fields).GameObject,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e09060

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuild
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344c26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c_PresetGuild_b__61_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-preset-guild-group");
    Il2CppMethodInitialized_184344c26 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview);
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview__Register((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9__61_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c_PresetGuild_b__61_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9__61_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c->static_fields->__9__61_0,__this);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,(System_Action_AottgUi__o *)__this,"profile-character-preset-guild-group",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$Badges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e06440
// eh: try 0x181e06574..0x181e0676e -> pad 0x18333c5f0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e06734: xor edx, edx
// asm:   0x181e06736: lea rcx, [rsp + 0xe8]
// asm:   0x181e0673e: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e06743: mov rcx, qword ptr [rsp + 0xc8]
// asm:   0x181e0674b: test rcx, rcx
// asm:   0x181e0674e: jne 0x181e0676e
// asm:   0x181e0676e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c5f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c5f5: push rbp
// asm:   0x18333c5f6: sub rsp, 0xc0
// asm:   0x18333c5fd: mov rbp, rdx
// asm:   0x18333c600: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18333c607: mov rcx, qword ptr [rax]
// asm:   0x18333c60a: mov qword ptr [rbp + 0xc8], rcx
// asm:   0x18333c611: movabs rax, 0
// asm:   0x18333c61b: add rsp, 0xc0
// asm:   0x18333c622: pop rbp
// asm:   0x18333c623: ret 

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__Badges
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar1;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0_o *object;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar2;
  System_String_o *pSVar3;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t local_res18 [4];
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_70;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (Il2CppMethodInitialized_184344c27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass62_0_Badges_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass62_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"count=");
    il2cpp_codegen_initialize_runtime_metadata(&"load");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badges-group");
    il2cpp_codegen_initialize_runtime_metadata(&"Dialog.EditCharacter.Badges");
    Il2CppMethodInitialized_184344c27 = '\x01';
  }
  local_50.fields._area = (System_String_o *)0x0;
  local_50.fields._detail = (System_String_o *)0x0;
  local_50.fields._startMs._0_4_ = 0;
  local_50.fields._startMs._4_2_ = 0;
  local_50.fields._startMs._6_2_ = 0;
  local_50.fields._enabled = false;
  local_50.fields._hotLoop = false;
  local_50.fields._26_6_ = 0;
  local_res18[0] = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar1 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_70,"Dialog.EditCharacter.Badges","load",(MethodInfo *)0x0);
  local_50.fields._area = (pGVar1->fields)._area;
  local_50.fields._detail = (pGVar1->fields)._detail;
  local_50.fields._startMs = (pGVar1->fields)._startMs;
  local_50.fields._enabled = (pGVar1->fields)._enabled;
  local_50.fields._hotLoop = (pGVar1->fields)._hotLoop;
  local_50.fields._26_6_ = *(undefined6 *)&(pGVar1->fields).field_0x1a;
  local_70.fields._area = (System_String_o *)0x0;
  local_70.fields._detail = (System_String_o *)&local_50;
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass62_0);
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges((MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c__DisplayClass62_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).badges = pSVar2;
  Il2CppCodeGenWriteBarrier(&(object->fields).badges,pSVar2);
  pSVar2 = (object->fields).badges;
  if (pSVar2 == (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
    ThrowNullReferenceException();
  }
  local_res18[0] = (pSVar2->fields)._size;
  pSVar3 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_1969e50("count=",pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Dialog.EditCharacter.Badges",pSVar3,(MethodInfo *)0x0);
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass62_0_Badges_b__0,
             (MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,"default",(System_Action_AottgUi__o *)__this,"profile-character-badges-group",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_50,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ColorInputId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorInputId (System_String_o* prefix, int32_t index, const MethodInfo* method);
// 0x181e06cc0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorInputId
          (System_String_o *prefix,int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  local_res10[0] = index;
  if (Il2CppMethodInitialized_184344c28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-color-");
    Il2CppMethodInitialized_184344c28 = '\x01';
  }
  pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70(prefix,"-color-",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$InitializeSelection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x181e078b0
// eh: try 0x181e07b0e..0x181e08778 -> pad 0x183315b20 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e07d84: mov esi, r15d
// asm:   0x181e07d87: jmp 0x181e07de7
// asm:   0x181e07e58: mov esi, r15d
// asm:   0x181e07e5b: jmp 0x181e07ebb
// asm:   0x181e07ff7: mov rsi, qword ptr [rip + 0x22959ca]  ; "None"
// asm:   0x181e08150: mov rsi, qword ptr [rip + 0x2295871]  ; "None"
// asm:   0x181e0821a: mov rsi, qword ptr [rip + 0x2295a47]  ; "Normal"
// asm:   0x181e08306: mov rsi, qword ptr [rip + 0x229595b]  ; "Normal"
// asm:   0x181e084ef: nop 
// asm:   0x181e085e4: mov r8, qword ptr [rsp + 0x58]
// asm:   0x181e085e9: cmp qword ptr [r8], 0
// asm:   0x181e085ed: je 0x181e08600
// asm:   0x181e085ef: xor ecx, ecx
// asm:   0x181e085f1: mov r8, qword ptr [r8]
// asm:   0x181e085f4: mov rdx, qword ptr [rip + 0x2290d05]  ; TypeInfo_System_IDisposable
// asm:   0x181e085fb: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e08600: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e08605: test rcx, rcx
// asm:   0x181e08608: jne 0x181e08745
// asm:   0x181e0860e: xor r15d, r15d
// asm:   0x181e08611: mov rdi, qword ptr [rsp + 0x48]
// asm:   0x181e086d3: xor edx, edx
// asm:   0x181e086d5: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181e086da: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e086df: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e086e4: test rcx, rcx
// asm:   0x181e086e7: jne 0x181e08778
// asm:   0x181e08745: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e08778: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 
// asm:   0x183320d40: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320d45: push rbp
// asm:   0x183320d46: sub rsp, 0x30
// asm:   0x183320d4a: mov rbp, rdx
// asm:   0x183320d4d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183320d51: mov rcx, qword ptr [rax]
// asm:   0x183320d54: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183320d58: movabs rax, 0
// asm:   0x183320d62: add rsp, 0x30
// asm:   0x183320d66: pop rbp
// asm:   0x183320d67: ret 

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__InitializeSelection
               (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  ushort uVar1;
  System_Xml_Schema_XmlSchema_c *pSVar2;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_string__o *pSVar5;
  System_String_c *__this_01;
  bool bVar6;
  char cVar7;
  char cVar8;
  int32_t iVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar11;
  System_Xml_Schema_XmlSchema_o *pSVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  SimpleJSONFixed_JSONArray_o *pSVar13;
  Il2CppObject *pIVar14;
  void *pvVar15;
  VirtualInvokeData *pVVar16;
  ushort uVar17;
  bool local_res8 [16];
  int32_t local_res18 [2];
  System_String_c *local_res20;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (Il2CppMethodInitialized_184344c29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"nameEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"guildEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"badges=");
    il2cpp_codegen_initialize_runtime_metadata(&"nameFont");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"guild");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"guildFont");
    il2cpp_codegen_initialize_runtime_metadata(&" presetGuild=");
    il2cpp_codegen_initialize_runtime_metadata(&"badges");
    il2cpp_codegen_initialize_runtime_metadata(&"info=");
    il2cpp_codegen_initialize_runtime_metadata(&"guildPresetId");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"type");
    il2cpp_codegen_initialize_runtime_metadata(&"Dialog.EditCharacter.InitializeSelection");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_184344c29 = '\x01';
  }
  local_48.fields._area = (System_String_o *)0x0;
  local_48.fields._detail = (System_String_o *)0x0;
  local_48.fields._startMs = 0;
  local_48.fields._enabled = false;
  local_48.fields._hotLoop = false;
  local_48.fields._26_6_ = 0;
  local_res8[0] = false;
  local_res20 = (System_String_c *)0x0;
  cVar8 = '\0';
  local_res18[0] = 0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  local_res8[0] = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354de8);
  }
  pSVar10 = System_Boolean__ToString(local_res8,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_1969e50("info=",pSVar10,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar11 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                      (&local_68,"Dialog.EditCharacter.InitializeSelection",pSVar10,(MethodInfo *)0x0);
  local_48.fields._area = (pGVar11->fields)._area;
  local_48.fields._detail = (pGVar11->fields)._detail;
  local_48.fields._startMs = (pGVar11->fields)._startMs;
  local_48.fields._enabled = (pGVar11->fields)._enabled;
  local_48.fields._hotLoop = (pGVar11->fields)._hotLoop;
  local_48.fields._26_6_ = *(undefined6 *)&(pGVar11->fields).field_0x1a;
  if (info == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildPresetId");
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildPresetId");
    if (pSVar12 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = pSVar12->klass;
    pSVar10 = (System_String_o *)
              (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                        (pSVar12,(UnityEngine_GameObject_o *)(pSVar2->vtable)._9_SetUnhandledAttributes.method
                         ,(MethodInfo *)pSVar2);
  }
  else {
    pSVar10 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId = pSVar10;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId,
             pSVar10);
  bVar6 = System_String__IsNullOrEmpty
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->
                     _selectedGuildPresetId,(MethodInfo *)0x0);
  if (bVar6) {
    pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guild");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guild");
      if (pSVar12 == (System_Xml_Schema_XmlSchema_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = pSVar12->klass;
      pSVar10 = (System_String_o *)
                (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                          (pSVar12,(UnityEngine_GameObject_o *)
                                   (pSVar2->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar2);
    }
    else {
      pSVar10 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    }
    if (Il2CppMethodInitialized_184344bff == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
      Il2CppMethodInitialized_184344bff = '\x01';
    }
    if (pSVar10 == (System_String_o *)0x0) {
      pSVar10 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar10 = MiscExtensions__StripRichText(pSVar10,(MethodInfo *)0x0);
    pSVar10 = MiscExtensions__StripHex(pSVar10,(MethodInfo *)0x0);
    bVar6 = System_String__IsNullOrWhiteSpace(pSVar10,(MethodInfo *)0x0);
  }
  else {
    bVar6 = false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected = bVar6;
  pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"nameEffect");
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  cVar7 = cVar8;
  if (bVar6) {
    pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"nameEffect");
    if (pSVar12 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (*(pSVar12->klass->vtable)._7_get_IdAttribute.methodPtr)
                        (pSVar12,(MethodInfo *)"enabled");
    if (pSVar10 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    cVar7 = (*(code *)((Il2CppClass *)pSVar10->klass)->vtable[39].methodPtr)(pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[39].method);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectEnabled = cVar7 != '\0';
  pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildEffect");
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildEffect");
    if (pSVar12 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (*(pSVar12->klass->vtable)._7_get_IdAttribute.methodPtr)
                        (pSVar12,(MethodInfo *)"enabled");
    if (pSVar10 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    cVar8 = (*(code *)((Il2CppClass *)pSVar10->klass)->vtable[39].methodPtr)(pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[39].method);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectEnabled = cVar8 != '\0'
  ;
  pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"nameEffect");
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar10 = "None";
  if (bVar6) {
    pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"nameEffect");
    if (pSVar12 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (*(pSVar12->klass->vtable)._7_get_IdAttribute.methodPtr)
                        (pSVar12,(MethodInfo *)"type");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar10 = "None";
    if (bVar6) {
      pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"nameEffect");
      if (pSVar12 == (System_Xml_Schema_XmlSchema_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar10 = (*(pSVar12->klass->vtable)._7_get_IdAttribute.methodPtr)
                          (pSVar12,(MethodInfo *)"type");
      if (pSVar10 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar9 = (*(pSVar10->klass->vtable)._9_GetTypeCode.methodPtr)
                        (pSVar10,(pSVar10->klass->vtable)._9_GetTypeCode.method);
      pSVar10 = (System_String_o *)CONCAT44(extraout_var,iVar9);
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType = pSVar10;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType,pSVar10
            );
  pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildEffect");
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar10 = "None";
  if (bVar6) {
    pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildEffect");
    if (pSVar12 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (*(pSVar12->klass->vtable)._7_get_IdAttribute.methodPtr)
                        (pSVar12,(MethodInfo *)"type");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar10 = "None";
    if (bVar6) {
      pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildEffect");
      if (pSVar12 == (System_Xml_Schema_XmlSchema_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar10 = (*(pSVar12->klass->vtable)._7_get_IdAttribute.methodPtr)
                          (pSVar12,(MethodInfo *)"type");
      if (pSVar10 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar9 = (*(pSVar10->klass->vtable)._9_GetTypeCode.methodPtr)
                        (pSVar10,(pSVar10->klass->vtable)._9_GetTypeCode.method);
      pSVar10 = (System_String_o *)CONCAT44(extraout_var_00,iVar9);
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType = pSVar10;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType,
             pSVar10);
  pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"nameFont");
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar10 = "Normal";
  if (bVar6) {
    pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"nameFont");
    if (pSVar12 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = pSVar12->klass;
    pSVar10 = (System_String_o *)
              (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                        (pSVar12,(UnityEngine_GameObject_o *)(pSVar2->vtable)._9_SetUnhandledAttributes.method
                         ,(MethodInfo *)pSVar2);
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar10 = PatreonEffects_NameFontCatalog__Normalize(pSVar10,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameFont = pSVar10;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameFont,pSVar10);
  pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildFont");
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar10 = "Normal";
  if (bVar6) {
    pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildFont");
    if (pSVar12 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = pSVar12->klass;
    pSVar10 = (System_String_o *)
              (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                        (pSVar12,(UnityEngine_GameObject_o *)(pSVar2->vtable)._9_SetUnhandledAttributes.method
                         ,(MethodInfo *)pSVar2);
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar10 = PatreonEffects_NameFontCatalog__Normalize(pSVar10,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildFont = pSVar10;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildFont,pSVar10);
  pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"nameEffect");
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
            ("profile-character-name-effect",(SimpleJSONFixed_JSONNode_o *)pSVar12,(MethodInfo *)0x0);
  pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildEffect");
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
            ("profile-character-guild-effect",(SimpleJSONFixed_JSONNode_o *)pSVar12,(MethodInfo *)0x0);
  __this = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
  if (__this == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
            (__this,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
  pSVar12 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"badges");
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_48,(MethodInfo *)0x0);
  }
  else {
    pSVar13 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges
                        ((SimpleJSONFixed_JSONNode_o *)pSVar12,(MethodInfo *)0x0);
    if (pSVar13 == (SimpleJSONFixed_JSONArray_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar14 = (Il2CppObject *)
              (*(pSVar13->klass->vtable)._27_get_Children.methodPtr)
                        (pSVar13,(pSVar13->klass->vtable)._27_get_Children.method);
    if (pIVar14 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    local_res20 = InterfaceInvoker0_Invoke
                            (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar14
                            );
    local_68.fields._area = (System_String_o *)0x0;
    local_68.fields._detail = (System_String_o *)&local_res20;
    while( true ) {
      if (local_res20 == (System_String_c *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar15 = InterfaceInvoker0_Invoke
                          (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,
                           (Il2CppObject *)local_res20);
      __this_01 = local_res20;
      if ((char)pvVar15 == '\0') break;
      if (local_res20 == (System_String_c *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = (local_res20->_1).image;
      uVar1 = (pIVar3->_2).interface_offsets_count;
      uVar17 = 0;
      if (uVar1 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        do {
          if (pIVar4[uVar17].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
            pVVar16 = (VirtualInvokeData *)&pIVar3->vtable[pIVar4[uVar17].offset].methodPtr;
            goto label_181e08516;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar1);
      }
      pVVar16 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)local_res20,
                           (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0);
label_181e08516:
      pIVar14 = (*pVVar16->methodPtr)((Il2CppObject *)__this_01,pVVar16->method);
      if (pIVar14 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar10 = (System_String_o *)(*pIVar14->klass->vtable[9].methodPtr)(pIVar14);
      bVar6 = System_String__IsNullOrWhiteSpace(pSVar10,(MethodInfo *)0x0);
      if (!bVar6) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        }
        __this_00 = (System_Collections_Generic_HashSet_object__o *)
                    TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
        pIVar14 = (Il2CppObject *)
                  (*pIVar14->klass->vtable[9].methodPtr)(pIVar14,pIVar14->klass->vtable[9].method);
        if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  (__this_00,pIVar14,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
    }
    if (local_res20 != (System_String_c *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_res20);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
    if (pSVar5 == (System_Collections_Generic_HashSet_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    local_res18[0] = (pSVar5->fields)._count;
    pSVar10 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
    pSVar10 = System_String__Concat_1969590
                        ("badges=",pSVar10," presetGuild=",
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->
                         _selectedGuildPresetId,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Dialog.EditCharacter.InitializeSelection",pSVar10,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_48,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectPresetGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectPresetGuild (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e09550

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectPresetGuild
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  System_String_o **ppSVar5;
  
  if (Il2CppMethodInitialized_184344c2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"__none");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild");
    Il2CppMethodInitialized_184344c2a = '\x01';
  }
  if ((context->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  else {
    ppSVar5 = &(((context->fields).Node)->fields).value;
  }
  pSVar3 = *ppSVar5;
  bVar2 = System_String__op_Equality(pSVar3,"__none",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  pGVar1 = (context->fields).Node;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected = bVar2;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    if (Il2CppMethodInitialized_184344c2f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"__none");
      il2cpp_codegen_initialize_runtime_metadata(&"Custom");
      Il2CppMethodInitialized_184344c2f = '\x01';
    }
    bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__op_Equality(pSVar3,"__none",(MethodInfo *)0x0);
      if (!bVar2) {
        bVar2 = System_String__op_Equality(pSVar3,"Custom",(MethodInfo *)0x0);
        if (!bVar2) goto label_181e0968e;
      }
    }
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
label_181e0968e:
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId = pSVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId,
             pSVar3);
  if (Il2CppMethodInitialized_184344c30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_184344c30 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    bVar2 = System_String__IsNullOrEmpty
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->
                       _selectedGuildPresetId,(MethodInfo *)0x0);
  }
  else {
    bVar2 = false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible
            ((context->fields).GameObject,"profile-character-guild",bVar2,(MethodInfo *)0x0);
  pSVar3 = "profile-character-guild";
  __this_00 = (context->fields).GameObject;
  if (Il2CppMethodInitialized_184344c04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&".enabled");
    Il2CppMethodInitialized_184344c04 = '\x01';
  }
  pSVar3 = System_String__Concat_1969e50(pSVar3,".enabled",(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184344c2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_184344c2c = '\x01';
  }
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pGVar4 = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this_00,
                        (MethodInfo_6F53B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar4 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (pGVar4->fields)._State_k__BackingField,
       __this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this,pSVar3,bVar2,(MethodInfo *)0x0);
    }
  }
  if (Il2CppMethodInitialized_184344c25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
    Il2CppMethodInitialized_184344c25 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
  }
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh((context->fields).GameObject,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ToggleBadge
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ToggleBadge (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e09db0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e09fd3: mov rdi, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ToggleBadge
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344c2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badge-");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-badges-draft");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184344c2b = '\x01';
  }
  if (((context->fields).Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (bVar3 = System_String__IsNullOrEmpty((((context->fields).Node)->fields).id,(MethodInfo *)0x0), !bVar3))
  {
    pGVar1 = (context->fields).Node;
    if ((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
       (pSVar4 = (pGVar1->fields).id, pSVar4 == (System_String_o *)0x0)) {
label_181e09fde:
      ThrowNullReferenceException();
    }
    bVar3 = System_String__StartsWith(pSVar4,"profile-character-badge-",(MethodInfo *)0x0);
    if (bVar3) {
      pGVar1 = (context->fields).Node;
      if (((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
          ("profile-character-badge-" == (System_String_o *)0x0)) ||
         (pSVar4 = (pGVar1->fields).id, pSVar4 == (System_String_o *)0x0)) goto label_181e09fde;
      pSVar4 = System_String__Substring
                         (pSVar4,("profile-character-badge-"->fields)._stringLength,(MethodInfo *)0x0);
    }
    else {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if (!bVar3) {
      pGVar1 = (context->fields).Node;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_181e09fde;
      bVar3 = System_String__op_Equality((pGVar1->fields).value,"true",(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        }
        pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_181e09fde;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar2,(Il2CppObject *)pSVar4,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        }
        pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges;
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_181e09fde;
        System_Collections_Generic_HashSet_object___Remove
                  (pSVar2,(Il2CppObject *)pSVar4,
                   (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      pSVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BadgesDraftValue((MethodInfo *)0x0);
      Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_1901cb0
                ((context->fields).GameObject,"profile-character-badges-draft",pSVar4,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184344c25 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview)
        ;
        Il2CppMethodInitialized_184344c25 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview);
      }
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreview__Refresh
                ((context->fields).GameObject,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetState (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* key, bool value, const MethodInfo* method);
// 0x181e09cc0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SetState
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *key,bool value,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344c2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_184344c2c = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedPresetGuildValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedPresetGuildValue (const MethodInfo* method);
// 0x181e09940

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedPresetGuildValue(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344c2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"__none");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    Il2CppMethodInitialized_184344c2d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    bVar1 = System_String__IsNullOrEmpty
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->
                       _selectedGuildPresetId,(MethodInfo *)0x0);
    if (bVar1) {
      return "Custom";
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    return TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_selectedGuildPresetId;
  }
  return "__none";
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuildOptions
// il2cpp: Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions (const MethodInfo* method);
// 0x181e08a40
// eh: try 0x181e08bfc..0x181e09050 -> pad 0x18333c670 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e08f31: mov rdx, qword ptr [rip + 0x226b0e0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose
// asm:   0x181e08f38: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181e08f3d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e08f42: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181e08f47: test rcx, rcx
// asm:   0x181e08f4a: jne 0x181e09027
// asm:   0x181e08f50: mov rdi, qword ptr [rsp + 0x28]
// asm:   0x181e08f55: mov r14, qword ptr [rsp + 0x118]
// asm:   0x181e08fe1: xor edx, edx
// asm:   0x181e08fe3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e08fe8: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e08fed: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e08ff2: test rcx, rcx
// asm:   0x181e08ff5: jne 0x181e09050
// asm:   0x181e08ff7: mov rbx, qword ptr [rsp + 0x110]
// asm:   0x181e09027: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e09050: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c640: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c645: push rbp
// asm:   0x18333c646: sub rsp, 0x20
// asm:   0x18333c64a: mov rbp, rdx
// asm:   0x18333c64d: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x18333c654: mov rcx, qword ptr [rax]
// asm:   0x18333c657: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333c65b: movabs rax, 0
// asm:   0x18333c665: add rsp, 0x20
// asm:   0x18333c669: pop rbp
// asm:   0x18333c66a: ret 
// asm:   0x18333c670: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c675: push rbp
// asm:   0x18333c676: sub rsp, 0x20
// asm:   0x18333c67a: mov rbp, rdx
// asm:   0x18333c67d: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x18333c684: mov rcx, qword ptr [rax]
// asm:   0x18333c687: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333c68b: movabs rax, 0
// asm:   0x18333c695: add rsp, 0x20
// asm:   0x18333c699: pop rbp
// asm:   0x18333c69a: ret 

Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildOptions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  MethodInfo *pMVar4;
  System_String_Fields value;
  bool bVar5;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar6;
  System_Collections_Generic_List_GisketchChoiceOptionDefinition__o *__this;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *__this_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar9;
  int32_t local_res10 [2];
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *local_res18;
  System_Collections_Generic_List_GisketchChoiceOptionDefinition__o *local_res20;
  System_String_o local_c8;
  System_String_o *pSStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  
  if (Il2CppMethodInitialized_184344c2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"__none");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.CustomGuild");
    il2cpp_codegen_initialize_runtime_metadata(&"This feature is only available for supporters.");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"count=");
    il2cpp_codegen_initialize_runtime_metadata(&"load");
    il2cpp_codegen_initialize_runtime_metadata(&"Dialog.EditCharacter.PresetGuildOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SupporterOnlyFeature");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.None");
    Il2CppMethodInitialized_184344c2e = '\x01';
  }
  local_68.fields._area = (System_String_o *)0x0;
  local_68.fields._detail = (System_String_o *)0x0;
  local_68.fields._startMs = 0;
  local_68.fields._enabled = false;
  local_68.fields._hotLoop = false;
  local_68.fields._26_6_ = 0;
  local_c8.klass = (System_String_c *)0x0;
  local_c8.monitor = (void *)0x0;
  local_c8.fields._stringLength = 0;
  local_c8.fields._firstChar = 0;
  local_c8.fields._6_2_ = 0;
  pSStack_b0 = (System_String_o *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_res10[0] = 0;
  local_res18 = (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                 *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar6 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_98,
                      "Dialog.EditCharacter.PresetGuildOptions","load",(MethodInfo *)0x0);
  local_68.fields._area = (pGVar6->fields)._area;
  local_68.fields._detail = (pGVar6->fields)._detail;
  local_68.fields._startMs = (pGVar6->fields)._startMs;
  local_68.fields._enabled = (pGVar6->fields)._enabled;
  local_68.fields._hotLoop = (pGVar6->fields)._hotLoop;
  local_68.fields._26_6_ = *(undefined6 *)&(pGVar6->fields).field_0x1a;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition);
  local_res20 = __this;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_ctor);
  pGVar7 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar7->fields).value = "__none";
  Il2CppCodeGenWriteBarrier(&(pGVar7->fields).value,"__none");
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar8 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("Common.None","None",(MethodInfo *)0x0);
  (pGVar7->fields).text = pSVar8;
  Il2CppCodeGenWriteBarrier(&(pGVar7->fields).text,pSVar8);
  (pGVar7->fields).textKey = "Common.None";
  Il2CppCodeGenWriteBarrier(&(pGVar7->fields).textKey,"Common.None");
  pMVar4 = MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_Add;
  if (__this == (System_Collections_Generic_List_GisketchChoiceOptionDefinition__o *)0x0) {
    ThrowNullReferenceException();
  }
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pGVar3 = (__this->fields)._items;
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar2 = (__this->fields)._size;
  if (uVar2 < (uint)pGVar3->max_length) {
    (__this->fields)._size = uVar2 + 1;
    if ((uint)pGVar3->max_length <= uVar2) {
      ThrowIndexOutOfRangeException();
    }
    pGVar3->m_Items[(int)uVar2] = pGVar7;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2,pGVar7);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar7,
               (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
  }
  pGVar7 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
    (pGVar7->fields).value = "Custom";
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields).value,"Custom");
    pSVar8 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                       ("MainMenu.Profile.CustomGuild","Custom",(MethodInfo *)0x0);
    (pGVar7->fields).text = pSVar8;
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields).text,pSVar8);
    (pGVar7->fields).textKey = "MainMenu.Profile.CustomGuild";
    Il2CppCodeGenWriteBarrier(&(pGVar7->fields).textKey,"MainMenu.Profile.CustomGuild");
    pMVar4 = MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar3 = (__this->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pGVar3->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pGVar3->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      pGVar3->m_Items[(int)uVar2] = pGVar7;
      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2,pGVar7);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pGVar7,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    __this_00 = (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)
                Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisiblePresetGuilds((MethodInfo *)0x0);
    if (__this_00 !=
        (System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState__o *)0x0) {
      System_Collections_Generic_List_MultiColumnCollectionHeader_ViewState_ColumnState___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_98,__this_00,
                 (MethodInfo_942C50 *)
                 MethodInfo_System_Collections_Generic_List_AottgProfileEntitlementOption_GetEnumerator);
      local_c8.klass = (System_String_c *)local_98._0_8_;
      local_c8.monitor = (void *)local_98._8_8_;
      local_c8.fields._stringLength = local_98._16_4_;
      local_c8.fields._firstChar = local_98._20_2_;
      local_c8.fields._6_2_ = local_98._22_2_;
      pSStack_b0 = (System_String_o *)local_98._24_8_;
      local_a8 = local_78;
      uStack_a0 = uStack_70;
      local_98._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_98._8_8_ = &local_c8;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_VisualTreeAsset_AssetEntry___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)&local_c8,
                           (MethodInfo_1529610 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_MoveNext
                          );
        pSVar8 = pSStack_b0;
        value = local_c8.fields;
        if (!bVar5) {
          System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c8,
                     MethodInfo_System_Collections_Generic_List_Enumerator_AottgProfileEntitlementOption_Dispose
                    );
          pUVar9 = System_Collections_Generic_List_object___ToArray
                             ((System_Collections_Generic_List_T__o *)__this,
                              (MethodInfo_929FE0 *)
                              MethodInfo_System_Collections_Generic_List_GisketchChoiceOptionDefinition_ToArray
                             );
          if (pUVar9 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                         *)0x0) {
            local_res10[0] = (int32_t)pUVar9->max_length;
            pSVar8 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
            pSVar8 = System_String__Concat_1969e50("count=",pSVar8,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
            }
            Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                      ("Dialog.EditCharacter.PresetGuildOptions",pSVar8,(MethodInfo *)0x0);
            local_res18 = pUVar9;
            Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_68,(MethodInfo *)0x0);
            return (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)pUVar9;
          }
          ThrowNullReferenceException();
        }
        bVar5 = uStack_a0._0_1_;
        pGVar7 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition);
        Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor(pGVar7,(MethodInfo *)0x0);
        if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) break;
        (pGVar7->fields).value = (System_String_o *)value;
        Il2CppCodeGenWriteBarrier(&(pGVar7->fields).value,(void *)value);
        (pGVar7->fields).text = pSVar8;
        Il2CppCodeGenWriteBarrier(&(pGVar7->fields).text,pSVar8);
        (pGVar7->fields).enabled = bVar5;
        pSVar8 = "This feature is only available for supporters.";
        if (bVar5 != false) {
          pSVar8 = (System_String_o *)0x0;
        }
        (pGVar7->fields).tooltip = pSVar8;
        Il2CppCodeGenWriteBarrier(&(pGVar7->fields).tooltip,pSVar8);
        pSVar8 = "MainMenu.Profile.SupporterOnlyFeature";
        if (bVar5 != false) {
          pSVar8 = (System_String_o *)0x0;
        }
        (pGVar7->fields).tooltipKey = pSVar8;
        Il2CppCodeGenWriteBarrier(&(pGVar7->fields).tooltipKey,pSVar8);
        il2cpp_runtime_helper_180012890(__this,pGVar7);
      }
      ThrowNullReferenceException();
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuildId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildId (System_String_o* value, const MethodInfo* method);
// 0x181e089b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__PresetGuildId(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344c2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"__none");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    Il2CppMethodInitialized_184344c2f = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(value,"__none",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__op_Equality(value,"Custom",(MethodInfo *)0x0);
      if (!bVar1) {
        return value;
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$CustomGuildSelected
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__CustomGuildSelected (const MethodInfo* method);
// 0x181e06e70

bool Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__CustomGuildSelected(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344c30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_184344c30 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected != false) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  bVar1 = System_String__IsNullOrEmpty
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->
                     _selectedGuildPresetId,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ChoiceRowLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout (const MethodInfo* method);
// 0x181e06bc0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ChoiceRowLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344c31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184344c31 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BadgesDraftValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BadgesDraftValue (const MethodInfo* method);
// 0x181e06330

System_String_o * Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__BadgesDraftValue(MethodInfo *method)

{
  System_String_array *collection;
  System_Collections_Generic_List_string__o *__this;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344c32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_184344c32 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_184344c16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_184344c16 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  collection = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                         ((System_Collections_Generic_IEnumerable_string__o *)
                          TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->
                          SelectedBadges,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor_94fb10
            ((System_Collections_Generic_List_object__o *)__this,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    value = System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_T__o *)__this,
                       (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    pSVar1 = System_String__Join("|",(System_String_array *)value,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$AddEffectColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__AddEffectColors (System_Collections_Generic_List_string__o* parts, System_String_o* prefix, const MethodInfo* method);
// 0x181e06240
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0627f: nop 

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__AddEffectColors
               (System_Collections_Generic_List_string__o *parts,System_String_o *prefix,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_String_o *item;
  int index;
  
  if (Il2CppMethodInitialized_184344c33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    Il2CppMethodInitialized_184344c33 = '\x01';
  }
  index = 0;
  while( true ) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    item = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectColor(prefix,index,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (parts == (System_Collections_Generic_List_string__o *)0x0) break;
    piVar1 = &(parts->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (parts->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) break;
    uVar2 = (parts->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (parts->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      pSVar3->m_Items[(int)uVar2] = item;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)parts,(Il2CppObject *)item,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    index = index + 1;
    if (3 < index) {
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$RegisterEffectColors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors (System_String_o* prefix, SimpleJSONFixed_JSONNode_o* effect, const MethodInfo* method);
// 0x181e09310
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e09441: mov rbx, r12
// asm:   0x181e094e4: mov rbx, qword ptr [rip + 0x22a1205]  ; "#FFFFFFFF"

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__RegisterEffectColors
               (System_String_o *prefix,SimpleJSONFixed_JSONNode_o *effect,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Xml_Schema_XmlSchema_o *a;
  System_Xml_Schema_XmlSchema_o *a_00;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  System_String_o *value;
  int iVar5;
  int local_res20 [2];
  
  if (Il2CppMethodInitialized_184344c34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_184344c34 = '\x01';
  }
  pSVar4 = (System_Xml_Schema_XmlSchema_o *)0x0;
  do {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    iVar5 = (int)pSVar4;
    local_res20[0] = iVar5;
    if (Il2CppMethodInitialized_184344c28 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-color-");
      Il2CppMethodInitialized_184344c28 = '\x01';
    }
    pSVar3 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969b70(prefix,"-color-",pSVar3,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344c35 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
      il2cpp_codegen_initialize_runtime_metadata(&"colors");
      Il2CppMethodInitialized_184344c35 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    a = (System_Xml_Schema_XmlSchema_o *)0x0;
    if (bVar2) {
      if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e09542;
      a = (*(effect->klass->vtable)._7_get_Item.methodPtr)(effect,(MethodInfo *)"colors");
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    value = "#FFFFFFFF";
    if (bVar2) {
      if (a == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_181e09542:
        ThrowNullReferenceException();
      }
      a_00 = (*(a->klass->vtable)._5_OnRemove.methodPtr)(a,(MethodInfo *)pSVar4);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      value = "#FFFFFFFF";
      if (bVar2) {
        pSVar4 = (*(a->klass->vtable)._5_OnRemove.methodPtr)(a,(MethodInfo *)pSVar4);
        if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181e09542;
        pSVar1 = pSVar4->klass;
        value = (System_String_o *)
                (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                          (pSVar4,(UnityEngine_GameObject_o *)
                                  (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Register
              (pSVar3,value,(System_Action_GisketchActionContext__o *)0x0,true,false,false,(MethodInfo *)0x0);
    pSVar4 = (System_Xml_Schema_XmlSchema_o *)(ulonglong)(iVar5 + 1U);
    if (3 < (int)(iVar5 + 1U)) {
      return;
    }
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ColorValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue (SimpleJSONFixed_JSONNode_o* effect, int32_t index, const MethodInfo* method);
// 0x181e06d10

System_String_o *
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorValue
          (SimpleJSONFixed_JSONNode_o *effect,int32_t index,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_Xml_Schema_XmlSchema_o *a;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344c35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"colors");
    Il2CppMethodInitialized_184344c35 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e06e68;
    pSVar3 = (*(effect->klass->vtable)._7_get_Item.methodPtr)(effect,(MethodInfo *)"colors");
  }
  else {
    pSVar3 = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return "#FFFFFFFF";
  }
  if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
    a = (*(pSVar3->klass->vtable)._5_OnRemove.methodPtr)(pSVar3,(MethodInfo *)(ulonglong)(uint)index);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return "#FFFFFFFF";
    }
    pSVar3 = (*(pSVar3->klass->vtable)._5_OnRemove.methodPtr)(pSVar3,(MethodInfo *)(ulonglong)(uint)index);
    if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar1 = pSVar3->klass;
      pSVar4 = (System_String_o *)
               (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar3,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar1);
      return pSVar4;
    }
  }
label_181e06e68:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___ctor (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___ctor(Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___cctor (const MethodInfo* method);
// 0x181e09ff0

void Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184344c36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184344c36 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType =
       "None";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameEffectType,
             "None");
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType =
       "None";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildEffectType,
             "None");
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameFont = "Normal";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_nameFont,
             "Normal");
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildFont = "Normal";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_guildFont,
             "Normal");
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges,__this);
  return;
}


