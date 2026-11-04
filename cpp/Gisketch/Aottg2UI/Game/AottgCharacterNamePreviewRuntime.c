// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterNamePreviewRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* state, bool liveDialog, const MethodInfo* method);
// 0x181df7df0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,bool liveDialog,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *value;
  UnityEngine_UI_Image_o *value_00;
  PatreonEffects_NameEffectLabel_o *pPVar3;
  
  if (Il2CppMethodInitialized_184344b80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_OnStateChanged);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Preview Name");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Preview Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Preview Guild Row");
    Il2CppMethodInitialized_184344b80 = '\x01';
  }
  (__this->fields)._state = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state,state);
  (__this->fields)._liveDialog = liveDialog;
  if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_00 = (__this->fields)._state;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_OnStateChanged,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
              (__this_00,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
  }
  pUVar1 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
                     (__this,"AoTTG Preview Guild Row",20.0,(MethodInfo *)0x0);
  (__this->fields)._guildRow = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._guildRow,pUVar1);
  pUVar1 = (__this->fields)._guildRow;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
                      (__this,pUVar2,20.0,(MethodInfo *)0x0);
    (__this->fields)._guildBadges = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._guildBadges,value);
    pUVar1 = (__this->fields)._guildRow;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      value_00 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
                           (__this,pUVar2,30.0,(MethodInfo *)0x0);
      (__this->fields)._guildPresetImage = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._guildPresetImage,value_00);
      pUVar1 = (__this->fields)._guildRow;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        pPVar3 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                           (__this,"AoTTG Preview Guild",20.0,pUVar2,false,(MethodInfo *)0x0);
        (__this->fields)._guild = pPVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._guild,pPVar3);
        pPVar3 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                           (__this,"AoTTG Preview Name",20.0,(UnityEngine_Transform_o *)0x0,true,
                            (MethodInfo *)0x0);
        (__this->fields)._name = pPVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._name,pPVar3);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x181df7380

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  
  if (Il2CppMethodInitialized_184344b81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_OnStateChanged);
    Il2CppMethodInitialized_184344b81 = '\x01';
  }
  if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_00 = (__this->fields)._state;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_OnStateChanged,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed
              (__this_00,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x181df7410

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x181df7530

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  PatreonEffects_NameEffectLabel_o *pPVar2;
  UnityEngine_UI_Image_o *pUVar3;
  bool bVar4;
  bool bVar5;
  SimpleJSONFixed_JSONNode_o *info;
  UnityEngine_Transform_o *pUVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *presetId;
  TMPro_TMP_InputField_o *x;
  System_String_array *ids;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  System_Collections_Generic_IEnumerable_string__o *ids_00;
  System_String_o *font;
  System_String_o *font_00;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar11;
  System_String_o *local_res18;
  
  if (Il2CppMethodInitialized_184344b82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Find_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"nameEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"guildEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"nameFont");
    il2cpp_codegen_initialize_runtime_metadata(&"guildFont");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild");
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    Il2CppMethodInitialized_184344b82 = '\x01';
  }
  info = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_181df7cf4;
  pUVar6 = UnityEngine_Transform__GetRoot(pUVar6,(MethodInfo *)0x0);
  if ((__this->fields)._liveDialog == false) {
    bVar5 = false;
label_181df762a:
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df7cf4;
    pSVar7 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"name");
    if (pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df7cf4;
    pSVar1 = pSVar7->klass;
    local_res18 = (System_String_o *)
                  (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                            (pSVar7,(UnityEngine_GameObject_o *)
                                    (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
    pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild(info,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344b8a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      il2cpp_codegen_initialize_runtime_metadata(&"guildPresetId");
      Il2CppMethodInitialized_184344b8a = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pSVar7 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildPresetId");
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar4) goto label_181df7bbd;
      pSVar7 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildPresetId");
      if (pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df7cf4;
      pSVar1 = pSVar7->klass;
      presetId = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar7,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
    }
    else {
label_181df7bbd:
      presetId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pGVar11 = (__this->fields)._guildBadges;
    if (bVar5 != false) goto label_181df79a4;
    if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_181df7cf4;
    if (Il2CppMethodInitialized_184344b45 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      il2cpp_codegen_initialize_runtime_metadata(&"badges");
      Il2CppMethodInitialized_184344b45 = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pSVar7 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"badges");
    }
    else {
      pSVar7 = (System_Xml_Schema_XmlSchema_o *)0x0;
    }
    ids_00 = Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds
                       ((SimpleJSONFixed_JSONNode_o *)pSVar7,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges(pGVar11,ids_00,(MethodInfo *)0x0);
    font = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                     (info,"nameFont",(MethodInfo *)0x0);
    font_00 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                        (info,"guildFont",(MethodInfo *)0x0);
  }
  else {
    x = Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_
                  (pUVar6,"profile-character-name",
                   (MethodInfo_68B2C0 *)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Find_TMP_InputField);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) goto label_181df762a;
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df7cf4;
    pSVar7 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"name");
    if (pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df7cf4;
    pSVar1 = pSVar7->klass;
    pSVar8 = (System_String_o *)
             (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar7,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                        (MethodInfo *)pSVar1);
    pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                       (pUVar6,"profile-character-name",pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    }
    local_res18 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value
                            ("profile-character-name",pSVar8,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344b87 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      il2cpp_codegen_initialize_runtime_metadata(&"guild");
      il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild");
      Il2CppMethodInitialized_184344b87 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    if (Il2CppMethodInitialized_184344c3c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      Il2CppMethodInitialized_184344c3c = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected == false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      pSVar8 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedGuildPresetId((MethodInfo *)0x0);
      bVar4 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
      if (bVar4) {
        pSVar7 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guild");
        if (pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df7cf4;
        pSVar1 = pSVar7->klass;
        pSVar8 = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar7,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                           (pUVar6,"profile-character-guild",pSVar8,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
        }
        pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value
                           ("profile-character-guild",pSVar8,(MethodInfo *)0x0);
      }
      else {
        pSVar8 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
                           (pSVar8,(MethodInfo *)0x0);
      }
    }
    else {
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    presetId = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedGuildPresetId((MethodInfo *)0x0);
    pGVar11 = (__this->fields)._guildBadges;
label_181df79a4:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    if (Il2CppMethodInitialized_184344c16 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      Il2CppMethodInitialized_184344c16 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    ids = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                    ((System_Collections_Generic_IEnumerable_string__o *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges,
                     (MethodInfo *)0x0);
    if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_181df7cf4;
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
              (pGVar11,(System_Collections_Generic_IEnumerable_string__o *)ids,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    font = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont((MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    font_00 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont((MethodInfo *)0x0);
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
              (pUVar9,"profile-character-name",font,(MethodInfo *)0x0);
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
              (pUVar9,"profile-character-guild",font_00,(MethodInfo *)0x0);
  }
  pPVar2 = (__this->fields)._name;
  pSVar7 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"nameEffect");
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
            (pPVar2,local_res18,bVar5,true,(SimpleJSONFixed_JSONNode_o *)pSVar7,font,(MethodInfo *)0x0);
  pSVar7 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildEffect");
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
            (__this,pSVar8,presetId,bVar5,(SimpleJSONFixed_JSONNode_o *)pSVar7,font_00,(MethodInfo *)0x0);
  pGVar11 = (__this->fields)._guildBadges;
  if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_181df7cf4;
  pUVar9 = (__this->fields)._guildRow;
  if ((pGVar11->fields)._HasBadges_k__BackingField == false) {
    pPVar2 = (__this->fields)._guild;
    if (pPVar2 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_181df7cf4;
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar2,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_181df7cf4;
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
    if (bVar5) goto label_181df7cb8;
    pUVar3 = (__this->fields)._guildPresetImage;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (__this->fields)._guildPresetImage;
      if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto label_181df7cf4;
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_181df7cf4;
      bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
    }
    else {
      bVar5 = false;
    }
  }
  else {
label_181df7cb8:
    bVar5 = true;
  }
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar9,bVar5,(MethodInfo *)0x0);
    return;
  }
label_181df7cf4:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateRow
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* id, float fontSize, const MethodInfo* method);
// 0x181df6d30

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *id,
          float fontSize,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_02;
  
  if (Il2CppMethodInitialized_184344b83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_184344b83 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_181df6f91:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this_00,id,components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar3,fontSize + 10.0,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
            (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                      (pUVar3,1.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
            __this_02 = UnityEngine_GameObject__AddComponent_object_
                                  (__this_00,
                                   (MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
            if (__this_02 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
              UnityEngine_UI_LayoutGroup__set_childAlignment
                        ((UnityEngine_UI_LayoutGroup_o *)__this_02,4,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,(MethodInfo *)0x0)
              ;
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,(MethodInfo *)0x0)
              ;
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0
                        );
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0
                        );
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,5.0,(MethodInfo *)0x0);
              return __this_00;
            }
          }
        }
      }
      goto label_181df6f91;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateBadges
// il2cpp: Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, UnityEngine_Transform_o* parent, float size, const MethodInfo* method);
// 0x181df64f0

Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,UnityEngine_Transform_o *parent,
          float size,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this_02;
  
  if (Il2CppMethodInitialized_184344b84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgBadgeIconRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Preview Guild Badges");
    Il2CppMethodInitialized_184344b84 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_181df66c6:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this_00,"AoTTG Preview Guild Badges",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
          __this_02 = UnityEngine_GameObject__AddComponent_object_
                                (__this_00,
                                 (MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_AottgBadgeIconRowRuntime);
          if (__this_02 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                      (__this_02,size,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                       (System_String_o *)0x0,true,(MethodInfo *)0x0);
            return __this_02;
          }
        }
      }
      goto label_181df66c6;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreatePresetImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, UnityEngine_Transform_o* parent, float height, const MethodInfo* method);
// 0x181df69f0

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,UnityEngine_Transform_o *parent,
          float height,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  
  if (Il2CppMethodInitialized_184344b85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Preview Guild Preset Image");
    Il2CppMethodInitialized_184344b85 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_181df6cda:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar1);
        pSVar1 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
        if (pSVar1 != (System_Type_o *)0x0) {
          pIVar2 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
          if (pIVar2 == (Il2CppObject *)0x0) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
        }
        if (3 < (uint)components->max_length) {
          components->m_Items[3] = pSVar1;
          Il2CppCodeGenWriteBarrier(components->m_Items + 3,pSVar1);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_2f1abe0(__this_00,"AoTTG Preview Guild Preset Image",components,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
              __this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (__this_00,
                                     (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image
                                    );
              if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
                (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (__this_02,false,(__this_02->klass->vtable)._25_set_raycastTarget.method);
                UnityEngine_UI_Image__set_preserveAspect(__this_02,true,(MethodInfo *)0x0);
                pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_00,
                                    (MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                            (pUVar3,height * 2.9,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
                  (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                            (pUVar3,height,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
                  UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
                  return __this_02;
                }
              }
            }
          }
          goto label_181df6cda;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateLabel
// il2cpp: PatreonEffects_NameEffectLabel_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* id, float fontSize, UnityEngine_Transform_o* parent, bool flexibleWidth, const MethodInfo* method);
// 0x181df6700

PatreonEffects_NameEffectLabel_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *id,
          float fontSize,UnityEngine_Transform_o *parent,bool flexibleWidth,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  PatreonEffects_NameEffectLabel_o *__this_02;
  float fVar5;
  UnityEngine_Color_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184344b86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectLabel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_184344b86 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_181df69b8:
    ThrowNullReferenceException();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar2);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this_00,id,components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        }
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar4,fontSize + 10.0,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
            if (flexibleWidth) {
              fVar5 = 1.0;
            }
            else {
              fVar5 = 0.0;
            }
            (*(pUVar4->klass->vtable)._40_set_flexibleWidth.methodPtr)
                      (pUVar4,fVar5,(pUVar4->klass->vtable)._40_set_flexibleWidth.method);
            __this_02 = UnityEngine_GameObject__AddComponent_object_
                                  (__this_00,
                                   (MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectLabel);
            if (__this_02 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              PatreonEffects_NameEffectLabel__set_fontSize(__this_02,fontSize,(MethodInfo *)0x0);
              local_38[0].r = 1.0;
              local_38[0].g = 1.0;
              local_38[0].b = 1.0;
              local_38[0].a = 1.0;
              PatreonEffects_NameEffectLabel__set_color
                        (__this_02,(UnityEngine_Color_o *)local_38,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__set_alignment(__this_02,0x1002,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__set_richText(__this_02,true,(MethodInfo *)0x0);
              return __this_02;
            }
          }
        }
      }
      goto label_181df69b8;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$DialogGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild (UnityEngine_Transform_o* root, SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x181df6fc0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild
          (UnityEngine_Transform_o *root,SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344b87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"guild");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild");
    Il2CppMethodInitialized_184344b87 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_184344c3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_184344c3c = '\x01';
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
    pSVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedGuildPresetId((MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (bVar2) {
      if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar4 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guild");
        if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
          pSVar1 = pSVar4->klass;
          pSVar3 = (System_String_o *)
                   (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                             (pSVar4,(UnityEngine_GameObject_o *)
                                     (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
          pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                             (root,"profile-character-guild",pSVar3,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
          }
          pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value
                             ("profile-character-guild",pSVar3,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
      ThrowNullReferenceException();
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel(pSVar3,(MethodInfo *)0x0)
    ;
    return pSVar3;
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$ApplyGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* text, System_String_o* presetId, bool liveDialog, SimpleJSONFixed_JSONNode_o* effect, System_String_o* font, const MethodInfo* method);
// 0x181df5ac0
// asm: 15 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df5cd5: movdqa xmm0, xmmword ptr [rip + 0x1563bf3]
// asm:   0x181df5cdd: xor edx, edx
// asm:   0x181df5cdf: mov rbx, qword ptr [rbx + 0x60]
// asm:   0x181df5ce3: mov rcx, rsi
// asm:   0x181df5ce6: movaps xmmword ptr [rsp + 0x40], xmm0
// asm:   0x181df5ceb: call 0x181e11f30  ; Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label()
// asm:   0x181df5cf0: mov r9, rax
// asm:   0x181df5cf3: mov qword ptr [rsp + 0x28], 0
// asm:   0x181df5cfc: lea rax, [rsp + 0x40]
// asm:   0x181df5d01: mov r8, rsi
// asm:   0x181df5d04: lea rdx, [rdi + 0x50]
// asm:   0x181df5d08: mov qword ptr [rsp + 0x20], rax
// asm:   0x181df5d0d: mov rcx, rbx
// asm:   0x181df5d10: call 0x181e13a90  ; Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText()
// asm:   0x181df5d15: jmp 0x181df5bd4

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *text,
               System_String_o *presetId,bool liveDialog,SimpleJSONFixed_JSONNode_o *effect,
               System_String_o *font,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  PatreonEffects_NameEffectLabel_o *pPVar2;
  TMPro_TextMeshProUGUI_o *label;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_String_o *name;
  System_String_o *pSVar5;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_184344b88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b88 = '\x01';
  }
  bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset(presetId,(MethodInfo *)0x0);
  if (bVar3) {
    pPVar2 = (__this->fields)._guild;
    if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      PatreonEffects_NameEffectLabel__ClearNameEffect(pPVar2,(MethodInfo *)0x0);
      pPVar2 = (__this->fields)._guild;
      if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        local_38.r = 1.0;
        local_38.g = 1.0;
        local_38.b = 1.0;
        local_38.a = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  ((TMPro_TMP_Text_o *)(pPVar2->fields)._nameTmp,&(__this->fields)._guildPresetEffect,
                   (UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
        bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
                          ((__this->fields)._guildPresetImage,presetId,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
                  (__this,bVar3,(MethodInfo *)0x0);
        pPVar2 = (__this->fields)._guild;
        if ((pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pPVar2,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,!bVar3,(MethodInfo *)0x0);
          if (bVar3) {
            return;
          }
          pPVar2 = (__this->fields)._guild;
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
          name = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label(presetId,(MethodInfo *)0x0);
          if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
            PatreonEffects_NameEffectLabel__SetText
                      (pPVar2,pSVar5,name,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                       (MethodInfo *)0x0);
            pPVar2 = (__this->fields)._guild;
            if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              label = (pPVar2->fields)._nameTmp;
              local_38.r = 1.0;
              local_38.g = 1.0;
              local_38.b = 1.0;
              local_38.a = 1.0;
              pSVar5 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label(presetId,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                        ((TMPro_TMP_Text_o *)label,&(__this->fields)._guildPresetEffect,presetId,pSVar5,
                         (UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    pUVar1 = (__this->fields)._guildPresetImage;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields)._guildPresetImage;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto label_181df5d1a;
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
              (__this,false,(MethodInfo *)0x0);
    pPVar2 = (__this->fields)._guild;
    if (pPVar2 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      local_38.r = 1.0;
      local_38.g = 1.0;
      local_38.b = 1.0;
      local_38.a = 1.0;
      Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                ((TMPro_TMP_Text_o *)(pPVar2->fields)._nameTmp,&(__this->fields)._guildPresetEffect,
                 (UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                ((__this->fields)._guild,text,liveDialog,false,effect,font,(MethodInfo *)0x0);
      return;
    }
  }
label_181df5d1a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$SetGuildRowSpacing
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, bool imageGuild, const MethodInfo* method);
// 0x181df7d00

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,bool imageGuild,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  float value;
  
  if (Il2CppMethodInitialized_184344b89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b89 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._guildRow;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_181df7de0;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
  }
  else {
    __this_01 = (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (imageGuild) {
      value = 3.5;
    }
    else {
      value = 5.0;
    }
    if (__this_01 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
label_181df7de0:
      ThrowNullReferenceException();
    }
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$PresetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x181df7420

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId
          (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344b8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"guildPresetId");
    Il2CppMethodInitialized_184344b8a = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildPresetId");
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar2) goto label_181df7509;
      pSVar3 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"guildPresetId");
      if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar1 = pSVar3->klass;
        pSVar4 = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar3,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        return pSVar4;
      }
    }
    ThrowNullReferenceException();
  }
label_181df7509:
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Apply
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply (PatreonEffects_NameEffectLabel_o* label, System_String_o* text, bool liveDialog, bool name, SimpleJSONFixed_JSONNode_o* effect, System_String_o* font, const MethodInfo* method);
// 0x181df5d20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df5f1c: mov ebx, r13d
// asm:   0x181df6050: mov rax, qword ptr [rip + 0x22a7971]  ; "None"

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
               (PatreonEffects_NameEffectLabel_o *label,System_String_o *text,bool liveDialog,bool name,
               SimpleJSONFixed_JSONNode_o *effect,System_String_o *font,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int32_t effect_00;
  bool bVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar12;
  UnityEngine_GameObject_o *__this;
  TMPro_TMP_FontAsset_o *font_00;
  System_Xml_Schema_XmlSchema_o *pSVar13;
  System_String_o *pSVar14;
  UnityEngine_Color_o *pUVar15;
  System_String_o *prefix;
  int32_t local_res8 [2];
  UnityEngine_Color_Fields local_98;
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_Fields local_78;
  UnityEngine_Color_Fields local_68 [4];
  
  if (Il2CppMethodInitialized_184344b8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"type");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_184344b8b = '\x01';
  }
  cVar9 = false;
  local_res8[0] = 0;
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pGVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(text,(MethodInfo *)0x0);
  if (((label == (PatreonEffects_NameEffectLabel_o *)0x0) ||
      (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label,(MethodInfo *)0x0),
      pGVar12 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)) ||
     (bVar8 = System_String__IsNullOrEmpty((pGVar12->fields).Text,(MethodInfo *)0x0),
     __this == (UnityEngine_GameObject_o *)0x0)) goto label_181df621c;
  UnityEngine_GameObject__SetActive(__this,!bVar8,(MethodInfo *)0x0);
  PatreonEffects_NameEffectLabel__ClearNameEffect(label,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  font_00 = PatreonEffects_NameFontCatalog__Load(font,(MethodInfo *)0x0);
  PatreonEffects_NameEffectLabel__SetFont(label,font_00,(MethodInfo *)0x0);
  local_98.r = 1.0;
  local_98.g = 1.0;
  local_98.b = 1.0;
  local_98.a = 1.0;
  PatreonEffects_NameEffectLabel__set_color(label,(UnityEngine_Color_o *)&local_98,(MethodInfo *)0x0);
  bVar8 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (bVar8) {
    if (liveDialog) {
      if (!name) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        }
        cVar9 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectEnabled((MethodInfo *)0x0);
        goto label_181df5ed1;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      cVar9 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectEnabled((MethodInfo *)0x0);
label_181df6032:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      pSVar14 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType((MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      cVar10 = cVar9;
      if (bVar8) {
        if ((effect == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (pSVar13 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                                (effect,(MethodInfo *)"enabled"),
           pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_181df621c;
        cVar10 = (*(code *)((Il2CppClass *)pSVar13->klass)->vtable[39].methodPtr)(pSVar13);
      }
label_181df5f1f:
      cVar9 = cVar10;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      pSVar14 = "None";
      if (bVar8) {
        if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181df621c:
          ThrowNullReferenceException();
        }
        pSVar13 = (*(effect->klass->vtable)._7_get_Item.methodPtr)(effect,(MethodInfo *)"type")
        ;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pSVar13,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        pSVar14 = "None";
        if (bVar8) {
          pSVar13 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                              (effect,(MethodInfo *)"type");
          if (pSVar13 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df621c;
          pSVar1 = pSVar13->klass;
          pSVar14 = (System_String_o *)
                    (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                              (pSVar13,(UnityEngine_GameObject_o *)
                                       (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1)
          ;
        }
      }
    }
  }
  else {
    cVar10 = '\0';
    if (!liveDialog) goto label_181df5f1f;
    if (name) goto label_181df6032;
label_181df5ed1:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar14 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType((MethodInfo *)0x0);
  }
  local_res8[0] = 0;
  if (cVar9 == '\0') {
    pSVar14 = (pGVar12->fields).Text;
    prefix = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    bVar11 = PatreonEffects_NameEffectPresets__TryResolve(pSVar14,local_res8,(MethodInfo *)0x0);
    pSVar14 = (pGVar12->fields).Text;
    prefix = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    bVar8 = true;
    if (bVar11) goto label_181df60bf;
  }
  bVar8 = false;
  pSVar14 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText
                      (pSVar14,(System_Collections_Generic_IList_string__o *)(pGVar12->fields).Colors,
                       (MethodInfo *)0x0);
label_181df60bf:
  PatreonEffects_NameEffectLabel__SetText
            (label,prefix,pSVar14,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0
            );
  effect_00 = local_res8[0];
  if (bVar8) {
    pUVar15 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                        ((UnityEngine_Color_o *)local_68,liveDialog,name,effect,0,(MethodInfo *)0x0);
    uVar2._0_4_ = (pUVar15->fields).r;
    uVar2._4_4_ = (pUVar15->fields).g;
    uVar3._0_4_ = (pUVar15->fields).b;
    uVar3._4_4_ = (pUVar15->fields).a;
    pUVar15 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                        ((UnityEngine_Color_o *)local_68,liveDialog,name,effect,1,(MethodInfo *)0x0);
    uVar4._0_4_ = (pUVar15->fields).r;
    uVar4._4_4_ = (pUVar15->fields).g;
    uVar5._0_4_ = (pUVar15->fields).b;
    uVar5._4_4_ = (pUVar15->fields).a;
    pUVar15 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                        ((UnityEngine_Color_o *)local_68,liveDialog,name,effect,2,(MethodInfo *)0x0);
    uVar6._0_4_ = (pUVar15->fields).r;
    uVar6._4_4_ = (pUVar15->fields).g;
    uVar7._0_4_ = (pUVar15->fields).b;
    uVar7._4_4_ = (pUVar15->fields).a;
    pUVar15 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                        ((UnityEngine_Color_o *)local_68,liveDialog,name,effect,3,(MethodInfo *)0x0);
    local_98.r = (pUVar15->fields).r;
    local_98.g = (pUVar15->fields).g;
    local_98.b = (pUVar15->fields).b;
    local_98.a = (pUVar15->fields).a;
    local_88._0_8_ = uVar6;
    local_88._8_8_ = uVar7;
    local_78._0_8_ = uVar4;
    local_78._8_8_ = uVar5;
    local_68[0]._0_8_ = uVar2;
    local_68[0]._8_8_ = uVar3;
    PatreonEffects_NameEffectLabel__SetNameEffect
              (label,effect_00,(UnityEngine_Color_o *)local_68,(UnityEngine_Color_o *)&local_78,
               (UnityEngine_Color_o *)&local_88,(UnityEngine_Color_o *)&local_98,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Font
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font (SimpleJSONFixed_JSONNode_o* info, System_String_o* key, const MethodInfo* method);
// 0x181df7170
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df7264: mov rbx, qword ptr [rip + 0x22a69fd]  ; "Normal"

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
          (SimpleJSONFixed_JSONNode_o *info,System_String_o *key,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184344b8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_184344b8c = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar4 = "Normal";
  if (bVar2) {
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181df7294:
      ThrowNullReferenceException();
    }
    pSVar3 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)key);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar4 = "Normal";
    if (bVar2) {
      pSVar3 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)key);
      if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df7294;
      pSVar1 = pSVar3->klass;
      pSVar4 = (System_String_o *)
               (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar3,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar1);
    }
  }
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar4 = PatreonEffects_NameFontCatalog__Normalize(pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$ColorValue
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue (bool liveDialog, bool name, SimpleJSONFixed_JSONNode_o* effect, int32_t index, const MethodInfo* method);
// 0x181df6230
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df6493: mov rax, qword ptr [rip + 0x22b4256]  ; "#FFFFFFFF"

UnityEngine_Color_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
          (UnityEngine_Color_o *__return_storage_ptr__,bool liveDialog,bool name,
          SimpleJSONFixed_JSONNode_o *effect,int32_t index,MethodInfo *method)

{
  bool bVar1;
  System_String_o *str2;
  System_String_o *pSVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *a;
  longlong *plVar4;
  int32_t local_res10 [6];
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_184344b8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"colors");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    Il2CppMethodInitialized_184344b8d = '\x01';
  }
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.0;
  if (liveDialog) {
    pSVar2 = "profile-character-guild-effect";
    if (name) {
      pSVar2 = "profile-character-name-effect";
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    local_res10[0] = index;
    if (Il2CppMethodInitialized_184344c28 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-color-");
      Il2CppMethodInitialized_184344c28 = '\x01';
    }
    str2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969b70(pSVar2,"-color-",str2,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    pSVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                       (pSVar2,"#FFFFFFFF",true,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar2 = "#FFFFFFFF";
    if (bVar1) {
      if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181df64e6:
        ThrowNullReferenceException();
      }
      pSVar3 = (*(effect->klass->vtable)._7_get_Item.methodPtr)(effect,(MethodInfo *)"colors");
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      pSVar2 = "#FFFFFFFF";
      if (bVar1) {
        pSVar3 = (*(effect->klass->vtable)._7_get_Item.methodPtr)(effect,(MethodInfo *)"colors");
        if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_181df64e6;
        a = (SimpleJSONFixed_JSONNode_o *)
            (*(pSVar3->klass->vtable)._5_OnRemove.methodPtr)
                      (pSVar3,(System_Type_o *)(ulonglong)(uint)index,
                       (pSVar3->klass->vtable)._5_OnRemove.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        pSVar2 = "#FFFFFFFF";
        if (bVar1) {
          pSVar3 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                             (effect,(MethodInfo *)"colors");
          if ((pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) ||
             (plVar4 = (longlong *)
                       (*(pSVar3->klass->vtable)._5_OnRemove.methodPtr)
                                 (pSVar3,(System_Type_o *)(ulonglong)(uint)index,
                                  (pSVar3->klass->vtable)._5_OnRemove.method), plVar4 == (longlong *)0x0))
          goto label_181df64e6;
          pSVar2 = (System_String_o *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        }
      }
    }
  }
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar2,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
  if (!bVar1) {
    (__return_storage_ptr__->fields).r = 1.0;
    (__return_storage_ptr__->fields).g = 1.0;
    (__return_storage_ptr__->fields).b = 1.0;
    (__return_storage_ptr__->fields).a = 1.0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->fields).r = local_38.r;
  (__return_storage_ptr__->fields).g = local_38.g;
  (__return_storage_ptr__->fields).b = local_38.b;
  (__return_storage_ptr__->fields).a = local_38.a;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Input
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* fallback, const MethodInfo* method);
// 0x181df72a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
          (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_InputField_o *x;
  
  if (Il2CppMethodInitialized_184344b8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Find_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b8e = '\x01';
  }
  x = Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_
                (root,id,(MethodInfo_68B2C0 *)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Find_TMP_InputField
                );
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x != (TMPro_TMP_InputField_o *)0x0) {
      return (x->fields).m_Text;
    }
    ThrowNullReferenceException();
  }
  if (fallback != (System_String_o *)0x0) {
    return fallback;
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_68B2C0* method);
// 0x18068b2c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18068b3d8: mov rax, rdi
// asm:   0x18068b3db: jmp 0x18068b3df

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_(UnityEngine_Transform_o* root, System_String_o* id, MethodInfo_68B2C0* method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  uint uVar3;
  
  if ((method->rgctx_data == (MethodInfo_68B2C0_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_68B2C0_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) && (bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), !bVar1)) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_665440 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_),
       pSVar2 == (System_Object_array *)0x0)) {
label_18068b3fa:
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar2->m_Items[(int)uVar3];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) goto label_18068b3fa;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
        if (bVar1) {
          return (Il2CppObject *)x;
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime___ctor(Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


