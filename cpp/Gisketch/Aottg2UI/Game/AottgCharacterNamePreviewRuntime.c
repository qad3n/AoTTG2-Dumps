// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterNamePreviewRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* state, bool liveDialog, const MethodInfo* method);
// 0x58de250

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,bool liveDialog,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *__this_01;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar3;
  UnityEngine_UI_Image_o *pUVar4;
  PatreonEffects_NameEffectLabel_o *pPVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *pGVar6;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_075454f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_OnStateChanged);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Preview Name");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Preview Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Preview Guild Row");
    Il2CppMethodInitialized_075454f4 = '\x01';
  }
  (__this->fields)._state = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state);
  (__this->fields)._liveDialog = liveDialog;
  __this_00 = (__this->fields)._state;
  method_00 = extraout_RDX;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_OnStateChanged,
               (MethodInfo_4A81BE0 *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(__this_00,__this_01,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  pUVar1 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
                     (__this,"AoTTG Preview Guild Row",20.0,method_00);
  (__this->fields)._guildRow = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._guildRow);
  pGVar6 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)(__this->fields)._guildRow;
  if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar6,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
                       (pGVar6,pUVar2,20.0,method_01);
    (__this->fields)._guildBadges = pGVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._guildBadges);
    pGVar6 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)(__this->fields)._guildRow;
    if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pGVar6,(MethodInfo *)0x0);
      pUVar4 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
                         (pGVar6,pUVar2,30.0,method_02);
      (__this->fields)._guildPresetImage = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._guildPresetImage);
      pUVar1 = (__this->fields)._guildRow;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        pPVar5 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                           (__this,"AoTTG Preview Guild",20.0,pUVar2,false,in_R8);
        (__this->fields)._guild = pPVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._guild);
        pPVar5 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                           (__this,"AoTTG Preview Name",20.0,(UnityEngine_Transform_o *)0x0,true,in_R8);
        (__this->fields)._name = pPVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._name);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh(__this,(MethodInfo *)pPVar5);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x58deec0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *__this_01;
  
  if (Il2CppMethodInitialized_075454f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_OnStateChanged);
    Il2CppMethodInitialized_075454f5 = '\x01';
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_OnStateChanged,
             (MethodInfo_4A81BE0 *)0x0);
  Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x58def40

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh(__this,(MethodInfo *)key);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x58ddaa0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar2;
  PatreonEffects_NameEffectLabel_o *pPVar3;
  UnityEngine_UI_Image_o *pUVar4;
  bool bVar5;
  bool value;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  TMPro_TMP_InputField_o *x;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c **ppGVar10;
  System_String_array *ids;
  System_String_o *font;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_GameObject_o *__this_00;
  SimpleJSONFixed_JSONNode_c *method_00;
  void *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar12;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UnityEngine_GameObject_o *pUVar13;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c *pGVar14;
  void *in_R8;
  MethodInfo *in_stack_ffffffffffffffa8;
  System_String_o *local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075454f6 == '\0') {
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
    Il2CppMethodInitialized_075454f6 = '\x01';
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_058de046;
  pUVar7 = UnityEngine_Transform__get_root(pUVar7,(MethodInfo *)0x0);
  if ((__this->fields)._liveDialog == false) {
label_058ddca7:
    if ((pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar8 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar6,"name",(pSVar6->klass->vtable)._7_get_Item.method),
       pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_058de046;
    local_48 = (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
    pMVar12 = (MethodInfo *)0x0;
    local_40 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild(pSVar6,(MethodInfo *)0x0);
    local_38 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId(pSVar6,pMVar12);
    pGVar2 = (__this->fields)._guildBadges;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_058de046;
    bVar5 = false;
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo(pGVar2,pSVar6,(MethodInfo *)0x0);
    pSVar9 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                       (pSVar6,"nameFont",method_02);
    font = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                     (pSVar6,"guildFont",method_03);
  }
  else {
    x = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_
                  (pUVar7,"profile-character-name",
                   (MethodInfo_3487EB0 *)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Find_TMP_InputField);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) goto label_058ddca7;
    if ((pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar8 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar6,"name",(pSVar6->klass->vtable)._7_get_Item.method),
       pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_058de046;
    method_00 = pSVar8->klass;
    pSVar9 = (System_String_o *)
             (*(method_00->vtable)._9_get_Value.methodPtr)
                       ((Il2CppMethodPointer)pSVar8,(method_00->vtable)._9_get_Value.method,extraout_RDX,
                        (void **)method_00,in_R8);
    pSVar9 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                       (pUVar7,"profile-character-name",pSVar9,(MethodInfo *)method_00);
    pMVar12 = extraout_RDX_00;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
      pMVar12 = extraout_RDX_01;
    }
    local_48 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value("profile-character-name",pSVar9,pMVar12);
    local_40 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild(pUVar7,pSVar6,method_01);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      if (Il2CppMethodInitialized_07545588 != '\0') goto label_058ddc75;
label_058ddd65:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      Il2CppMethodInitialized_07545588 = '\x01';
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor != 0)
      goto label_058ddc85;
label_058ddd88:
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      if (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected != false)
      goto label_058ddc96;
label_058ddda8:
      ppGVar10 = &TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        ppGVar10 = &TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
      }
    }
    else {
      if (Il2CppMethodInitialized_07545588 == '\0') goto label_058ddd65;
label_058ddc75:
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0)
      goto label_058ddd88;
label_058ddc85:
      if (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected == false)
      goto label_058ddda8;
label_058ddc96:
      ppGVar10 = (Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c **)&g_data_07556758;
    }
    local_38 = (*ppGVar10)->static_fields->_selectedGuildPresetId;
    pGVar2 = (__this->fields)._guildBadges;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      if (g_data_0754558a != '\0') goto label_058dddf0;
label_058de016:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      g_data_0754558a = '\x01';
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (g_data_0754558a == '\0') goto label_058de016;
label_058dddf0:
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    ids = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
                    ((System_Collections_Generic_IEnumerable_string__o *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->SelectedBadges,
                     (MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_058de046;
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
              (pGVar2,(System_Collections_Generic_IEnumerable_string__o *)ids,(MethodInfo *)0x0);
    pGVar14 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar9 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont((MethodInfo *)pGVar14);
    pGVar14 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    font = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont((MethodInfo *)pGVar14);
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
              (pUVar11,"profile-character-name",pSVar9,(MethodInfo *)method_00);
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
              (pUVar11,"profile-character-guild",font,(MethodInfo *)&"profile-character-guild");
    bVar5 = true;
  }
  pPVar3 = (__this->fields)._name;
  pSVar8 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar6,"nameEffect",(pSVar6->klass->vtable)._7_get_Item.method);
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
            (pPVar3,local_48,bVar5,true,pSVar8,pSVar9,in_stack_ffffffffffffffa8);
  pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar6,"guildEffect",(pSVar6->klass->vtable)._7_get_Item.method);
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
            (__this,local_40,local_38,bVar5,pSVar6,font,in_stack_ffffffffffffffa8);
  pGVar2 = (__this->fields)._guildBadges;
  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
    bVar5 = (pGVar2->fields)._HasBadges_k__BackingField == false;
    pUVar11 = (__this->fields)._guildRow;
    pUVar13 = (UnityEngine_GameObject_o *)0x0;
    if (bVar5) {
      pUVar13 = pUVar11;
    }
    value = true;
    if (bVar5) {
      pPVar3 = (__this->fields)._guild;
      if ((pPVar3 == (PatreonEffects_NameEffectLabel_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pPVar3,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_058de046;
      bVar5 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if (!bVar5) {
        pUVar4 = (__this->fields)._guildPresetImage;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        value = false;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pUVar4 = (__this->fields)._guildPresetImage;
          if ((pUVar4 == (UnityEngine_UI_Image_o *)0x0) ||
             (pUVar11 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
             pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_058de046;
          value = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
        }
        pUVar11 = pUVar13;
      }
    }
    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar11,value,(MethodInfo *)0x0);
      return;
    }
  }
label_058de046:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateRow
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* id, float fontSize, const MethodInfo* method);
// 0x58de410

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
  
  if (Il2CppMethodInitialized_075454f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_075454f7 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_058de696:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_058de6a0;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
label_058de6a0:
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_00,id,components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar3,fontSize + 10.0,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
            (*(pUVar3->klass->vtable)._40_set_flexibleWidth.methodPtr)
                      (pUVar3,1.0,(pUVar3->klass->vtable)._40_set_flexibleWidth.method);
            __this_02 = UnityEngine_GameObject__AddComponent_object_
                                  (__this_00,
                                   (MethodInfo_353B6A0 *)
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
      goto label_058de696;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateBadges
// il2cpp: Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, UnityEngine_Transform_o* parent, float size, const MethodInfo* method);
// 0x58de6b0

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
  
  if (Il2CppMethodInitialized_075454f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgBadgeIconRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Preview Guild Badges");
    Il2CppMethodInitialized_075454f8 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_058de894:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_058de89e;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
label_058de89e:
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Preview Guild Badges",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
          __this_02 = UnityEngine_GameObject__AddComponent_object_
                                (__this_00,
                                 (MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_AottgBadgeIconRowRuntime);
          if (__this_02 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                      (__this_02,size,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                       (System_String_o *)0x0,true,(MethodInfo *)0x0);
            return __this_02;
          }
        }
      }
      goto label_058de894;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreatePresetImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, UnityEngine_Transform_o* parent, float height, const MethodInfo* method);
// 0x58de8b0

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
  
  if (Il2CppMethodInitialized_075454f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Preview Guild Preset Image");
    Il2CppMethodInitialized_075454f9 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_058debc9:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_058debd3;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_058debd3;
    }
    if ((components->max_length & 0xfffffffe) == 0) goto label_058debce;
    components->m_Items[1] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items + 1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_058debd3;
    }
    if (2 < (uint)components->max_length) {
      components->m_Items[2] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 2);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
label_058debd3:
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((components->max_length & 0xfffffffc) != 0) {
        components->m_Items[3] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 3);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Preview Guild Preset Image",components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
            __this_02 = UnityEngine_GameObject__GetComponent_object_
                                  (__this_00,
                                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image)
            ;
            if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
              (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_02,false,(__this_02->klass->vtable)._25_set_raycastTarget.method);
              UnityEngine_UI_Image__set_preserveAspect(__this_02,true,(MethodInfo *)0x0);
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_353B730 *)
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
        goto label_058debc9;
      }
    }
  }
label_058debce:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateLabel
// il2cpp: PatreonEffects_NameEffectLabel_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* id, float fontSize, UnityEngine_Transform_o* parent, bool flexibleWidth, const MethodInfo* method);
// 0x58debf0

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
  UnityEngine_Color_o value;
  
  if (Il2CppMethodInitialized_075454fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectLabel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_075454fa = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_058deea3:
    ThrowNullReferenceException();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_058deead;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
label_058deead:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_00,id,components,(MethodInfo *)0x0);
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
          UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_353B730 *)
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
                                   (MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectLabel);
            if (__this_02 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              PatreonEffects_NameEffectLabel__set_fontSize(__this_02,fontSize,(MethodInfo *)0x0);
              value.fields.b = 1.0;
              value.fields.a = 1.0;
              value.fields.r = 1.0;
              value.fields.g = 1.0;
              PatreonEffects_NameEffectLabel__set_color(__this_02,value,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__set_alignment(__this_02,0x1002,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__set_richText(__this_02,true,(MethodInfo *)0x0);
              return __this_02;
            }
          }
        }
      }
      goto label_058deea3;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$DialogGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild (UnityEngine_Transform_o* root, SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x58df0c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58df0eb: cmp byte ptr [rip + 0x1c664fa], 0
// asm:   0x58df0f2: je 0x58df197
// asm:   0x58df1e3: cmp byte ptr [rip + 0x1c6639e], 0
// asm:   0x58df1ea: je 0x58df221

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild
          (UnityEngine_Transform_o *root,SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_c *method_00;
  void *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  long *plVar6;
  void *in_R8;
  
  if (Il2CppMethodInitialized_075454fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&"guild");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild");
    Il2CppMethodInitialized_075454fb = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_075455ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_075455ec = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->
                            static_fields + 8);
  }
  if (cVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
  }
  if (Il2CppMethodInitialized_07545588 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    Il2CppMethodInitialized_07545588 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)
    ;
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->static_fields->_noGuildSelected;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->
                            static_fields + 8);
  }
  if (cVar1 == '\0') {
    plVar6 = (long *)&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
  }
  else {
    plVar6 = &g_data_07556758;
  }
  pSVar5 = ((Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c *)*plVar6)->static_fields->
           _selectedGuildPresetId;
  bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if (!bVar3) {
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel(pSVar5,(MethodInfo *)0x0)
    ;
    return pSVar5;
  }
  if ((info == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar4 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                         (info,"guild",(info->klass->vtable)._7_get_Item.method),
     pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0)) {
    ThrowNullReferenceException();
  }
  method_00 = pSVar4->klass;
  pSVar5 = (System_String_o *)
           (*(method_00->vtable)._9_get_Value.methodPtr)
                     ((Il2CppMethodPointer)pSVar4,(method_00->vtable)._9_get_Value.method,extraout_RDX,
                      (void **)method_00,in_R8);
  pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                     (root,"profile-character-guild",pSVar5,(MethodInfo *)method_00);
  method_01 = extraout_RDX_00;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCharacterTextField);
    method_01 = extraout_RDX_01;
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value("profile-character-guild",pSVar5,method_01);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$ApplyGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* text, System_String_o* presetId, bool liveDialog, SimpleJSONFixed_JSONNode_o* effect, System_String_o* font, const MethodInfo* method);
// 0x58dfdc0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *text,
               System_String_o *presetId,bool liveDialog,SimpleJSONFixed_JSONNode_o *effect,
               System_String_o *font,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **effect_00;
  PatreonEffects_NameEffectLabel_o *pPVar1;
  TMPro_TextMeshProUGUI_o *label;
  UnityEngine_UI_Image_o *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_String_o *name;
  MethodInfo *method_04;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar6;
  MethodInfo *method_05;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  MethodInfo *in_stack_ffffffffffffff98;
  Gisketch_Aottg2UI_Game_AottgGuildPresetDefinition_o local_58;
  
  pMVar6 = (MethodInfo *)presetId;
  if (Il2CppMethodInitialized_075454fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075454fc = '\x01';
    pMVar6 = extraout_RDX;
  }
  local_58.fields.Kind = 0;
  local_58.fields._20_4_ = 0;
  local_58.fields.Sprite = (System_String_o *)0x0;
  local_58.fields.Id = (System_String_o *)0x0;
  local_58.fields.Label = (System_String_o *)0x0;
  local_58.fields.ImageScale = 0.0;
  local_58.fields._36_4_ = 0;
  bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&local_58,pMVar6);
  if (bVar3) {
    pPVar1 = (__this->fields)._guild;
    if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      PatreonEffects_NameEffectLabel__ClearNameEffect(pPVar1,(MethodInfo *)0x0);
      pPVar1 = (__this->fields)._guild;
      if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        effect_00 = &(__this->fields)._guildPresetEffect;
        color.fields.b = 1.0;
        color.fields.a = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  ((TMPro_TMP_Text_o *)(pPVar1->fields)._nameTmp,effect_00,color,method_00);
        bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
                          ((__this->fields)._guildPresetImage,presetId,method_01);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing(__this,bVar3,method_02);
        pPVar1 = (__this->fields)._guild;
        if ((pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pPVar1,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,!bVar3,(MethodInfo *)0x0);
          if (bVar3) {
            return;
          }
          pPVar1 = (__this->fields)._guild;
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          local_58.fields.Kind = 0;
          local_58.fields._20_4_ = 0;
          local_58.fields.Sprite = (System_String_o *)0x0;
          local_58.fields.Id = (System_String_o *)0x0;
          local_58.fields.Label = (System_String_o *)0x0;
          local_58.fields.ImageScale = 0.0;
          local_58.fields._36_4_ = 0;
          bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&local_58,method_03);
          if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
            name = local_58.fields.Label;
            if (!bVar3) {
              name = presetId;
            }
            pMVar6 = (MethodInfo *)0x0;
            PatreonEffects_NameEffectLabel__SetText
                      (pPVar1,pSVar5,name,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                       (MethodInfo *)0x0);
            pPVar1 = (__this->fields)._guild;
            if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              label = (pPVar1->fields)._nameTmp;
              local_58.fields.Kind = 0;
              local_58.fields._20_4_ = 0;
              local_58.fields.Sprite = (System_String_o *)0x0;
              local_58.fields.Id = (System_String_o *)0x0;
              local_58.fields.Label = (System_String_o *)0x0;
              local_58.fields.ImageScale = 0.0;
              local_58.fields._36_4_ = 0;
              bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__TryGet(presetId,&local_58,method_04);
              pSVar5 = presetId;
              if (bVar3) {
                pSVar5 = local_58.fields.Label;
              }
              color_00.fields.b = 1.0;
              color_00.fields.a = 1.0;
              color_00.fields.r = 1.0;
              color_00.fields.g = 1.0;
              Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                        ((TMPro_TMP_Text_o *)label,effect_00,presetId,pSVar5,color_00,pMVar6);
              return;
            }
          }
        }
      }
    }
  }
  else {
    pUVar2 = (__this->fields)._guildPresetImage;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pMVar6 = extraout_RDX_00;
    if (bVar3) {
      pUVar2 = (__this->fields)._guildPresetImage;
      if ((pUVar2 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto label_058e002b;
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      pMVar6 = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing(__this,false,pMVar6);
    pPVar1 = (__this->fields)._guild;
    if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      color_01.fields.b = 1.0;
      color_01.fields.a = 1.0;
      color_01.fields.r = 1.0;
      color_01.fields.g = 1.0;
      Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                ((TMPro_TMP_Text_o *)(pPVar1->fields)._nameTmp,&(__this->fields)._guildPresetEffect,color_01,
                 method_05);
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                ((__this->fields)._guild,text,liveDialog,false,effect,font,in_stack_ffffffffffffff98);
      return;
    }
  }
label_058e002b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$SetGuildRowSpacing
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, bool imageGuild, const MethodInfo* method);
// 0x58e03d0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,bool imageGuild,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  float value;
  
  if (Il2CppMethodInitialized_075454fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075454fd = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_01 = (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._guildRow;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_058e04a9;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (__this_01 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
    if (imageGuild) {
      value = 3.5;
    }
    else {
      value = 5.0;
    }
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,value,(MethodInfo *)0x0);
    return;
  }
label_058e04a9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$PresetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x58df320

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId
          (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075454fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"guildPresetId");
    Il2CppMethodInitialized_075454fe = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                         (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar1) goto label_058df407;
      pSVar2 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                         (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
        return pSVar3;
      }
    }
    ThrowNullReferenceException();
  }
label_058df407:
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Apply
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply (PatreonEffects_NameEffectLabel_o* label, System_String_o* text, bool liveDialog, bool name, SimpleJSONFixed_JSONNode_o* effect, System_String_o* font, const MethodInfo* method);
// 0x58df880
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58df8c9: jmp 0x58dfdbb
// asm:   0x58dfa54: jmp 0x58dfc01
// asm:   0x58dfa60: jmp 0x58dfc12
// asm:   0x58dfb98: jmp 0x58dfd5e
// asm:   0x58dfb9d: lea rax, [rip + 0x1a03eac]  ; "None"
// asm:   0x58dfba4: mov rax, qword ptr [rax]
// asm:   0x58dfba7: mov dword ptr [rsp + 0xc], 0
// asm:   0x58dfbaf: test r12d, r12d
// asm:   0x58dfbb8: jmp 0x58dfd5e

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
               (PatreonEffects_NameEffectLabel_o *label,System_String_o *text,bool liveDialog,bool name,
               SimpleJSONFixed_JSONNode_o *effect,System_String_o *font,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t effect_00;
  bool bVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar4;
  UnityEngine_GameObject_o *__this;
  TMPro_TMP_FontAsset_o *font_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *name_00;
  undefined7 in_register_00000009;
  undefined7 in_register_00000011;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar7;
  System_String_o **ppSVar8;
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c *pGVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar10;
  undefined4 uVar11;
  UnityEngine_Color_o UVar12;
  UnityEngine_Color_o a;
  UnityEngine_Color_o b;
  UnityEngine_Color_o c;
  int32_t local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_98._0_4_ = (int)CONCAT71(in_register_00000009,name);
  local_88._0_4_ = (int)CONCAT71(in_register_00000011,liveDialog);
  pMVar7 = (MethodInfo *)text;
  if (Il2CppMethodInitialized_075454ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"type");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_075454ff = '\x01';
    if (text == (System_String_o *)0x0) goto label_058df92a;
label_058df8b8:
    local_9c = 0;
    pGVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(text,pMVar7);
  }
  else {
    if (text != (System_String_o *)0x0) goto label_058df8b8;
label_058df92a:
    local_9c = 0;
    pGVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                       ((System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),pMVar7);
  }
  if (((label == (PatreonEffects_NameEffectLabel_o *)0x0) ||
      (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label,(MethodInfo *)0x0),
      pGVar4 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)) ||
     (bVar2 = System_String__IsNullOrEmpty((pGVar4->fields).Text,(MethodInfo *)0x0),
     __this == (UnityEngine_GameObject_o *)0x0)) goto label_058dfdbb;
  UnityEngine_GameObject__SetActive(__this,!bVar2,(MethodInfo *)0x0);
  PatreonEffects_NameEffectLabel__ClearNameEffect(label,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  bVar3 = false;
  font_00 = PatreonEffects_NameFontCatalog__Load(font,(MethodInfo *)0x0);
  PatreonEffects_NameEffectLabel__SetFont(label,font_00,(MethodInfo *)0x0);
  uVar10 = g_data_01005870._8_4_;
  uVar11 = g_data_01005870._12_4_;
  pMVar7 = (MethodInfo *)0x0;
  UVar12.fields.b = (float)(int)g_data_01005870;
  UVar12.fields.a = (float)g_data_01005870._4_4_;
  UVar12.fields.r = (float)(int)g_data_01005870;
  UVar12.fields.g = (float)g_data_01005870._4_4_;
  PatreonEffects_NameEffectLabel__set_color(label,UVar12,(MethodInfo *)0x0);
  bVar2 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (bVar2) {
    if (local_88[0] == '\0') {
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar3 = false;
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((effect == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (pSVar5 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                               (effect,"enabled",(effect->klass->vtable)._7_get_Item.method),
           pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_058dfdbb;
        bVar3 = (*(pSVar5->klass->vtable)._39_get_AsBool.methodPtr)
                          (pSVar5,(pSVar5->klass->vtable)._39_get_AsBool.method);
      }
label_058dfad6:
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      pMVar7 = extraout_RDX;
      pSVar6 = "None";
      if (bVar2) {
        if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_058dfdbb:
          ThrowNullReferenceException();
        }
        pSVar5 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                           (effect,"type",(effect->klass->vtable)._7_get_Item.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        pMVar7 = extraout_RDX_00;
        pSVar6 = "None";
        if (bVar2) {
          pSVar5 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                             (effect,"type",(effect->klass->vtable)._7_get_Item.method);
          if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058dfdbb;
          pSVar6 = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
          pMVar7 = extraout_RDX_01;
        }
      }
      goto joined_r0x058dfbb2;
    }
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
    if (local_98[0] == '\0') {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      if (Il2CppMethodInitialized_0754558e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
        Il2CppMethodInitialized_0754558e = '\x01';
      }
      ppSVar8 = &"profile-character-guild-effect";
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
      }
      if (Il2CppMethodInitialized_0754558d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
        il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
        Il2CppMethodInitialized_0754558d = '\x01';
      }
      ppSVar8 = &"profile-character-name-effect";
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled(*ppSVar8,pMVar7);
  }
  else if (local_88[0] == '\0') goto label_058dfad6;
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor;
  if (local_98[0] == '\0') {
    pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType((MethodInfo *)pGVar9);
    pMVar7 = extraout_RDX_03;
  }
  else {
    pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog;
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType((MethodInfo *)pGVar9);
    pMVar7 = extraout_RDX_02;
  }
joined_r0x058dfbb2:
  if (bVar3 == false) {
    local_9c = 0;
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    local_9c = 0;
    bVar2 = PatreonEffects_NameEffectPresets__TryResolve(pSVar6,&local_9c,(MethodInfo *)0x0);
    pMVar7 = *(MethodInfo **)(g_data_07556758 + 0xb8);
    pSVar6 = (System_String_o *)pMVar7->methodPointer;
    if (bVar2) {
      pMVar7 = (MethodInfo *)0x0;
      PatreonEffects_NameEffectLabel__SetText
                (label,pSVar6,(pGVar4->fields).Text,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                 (MethodInfo *)0x0);
      effect_00 = local_9c;
      bVar3 = (bool)local_88[0];
      bVar2 = (bool)local_98[0];
      UVar12 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                         ((bool)local_88[0],(bool)local_98[0],effect,0,pMVar7);
      local_88._8_4_ = extraout_XMM0_Dc;
      local_88._0_8_ = UVar12.fields._0_8_;
      local_88._12_4_ = extraout_XMM0_Dd;
      local_98._8_4_ = uVar10;
      local_98._0_8_ = UVar12.fields._8_8_;
      local_98._12_4_ = uVar11;
      UVar12 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                         (bVar3,bVar2,effect,1,pMVar7);
      local_48._8_4_ = extraout_XMM0_Dc_00;
      local_48._0_8_ = UVar12.fields._0_8_;
      local_48._12_4_ = extraout_XMM0_Dd_00;
      local_58._8_4_ = uVar10;
      local_58._0_8_ = UVar12.fields._8_8_;
      local_58._12_4_ = uVar11;
      UVar12 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                         (bVar3,bVar2,effect,2,pMVar7);
      local_68._8_4_ = extraout_XMM0_Dc_01;
      local_68._0_8_ = UVar12.fields._0_8_;
      local_68._12_4_ = extraout_XMM0_Dd_01;
      local_78._8_4_ = uVar10;
      local_78._0_8_ = UVar12.fields._8_8_;
      local_78._12_4_ = uVar11;
      UVar12 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                         (bVar3,bVar2,effect,3,pMVar7);
      a.fields.b = (float)local_98._0_4_;
      a.fields.a = (float)local_98._4_4_;
      a.fields.r = (float)local_88._0_4_;
      a.fields.g = (float)local_88._4_4_;
      b.fields.b = (float)local_58._0_4_;
      b.fields.a = (float)local_58._4_4_;
      b.fields.r = (float)local_48._0_4_;
      b.fields.g = (float)local_48._4_4_;
      c.fields.b = (float)local_78._0_4_;
      c.fields.a = (float)local_78._4_4_;
      c.fields.r = (float)local_68._0_4_;
      c.fields.g = (float)local_68._4_4_;
      PatreonEffects_NameEffectLabel__SetNameEffect(label,effect_00,a,b,c,UVar12,(MethodInfo *)0x0);
      return;
    }
  }
  name_00 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText
                      ((pGVar4->fields).Text,
                       (System_Collections_Generic_IList_string__o *)(pGVar4->fields).Colors,pMVar7);
  PatreonEffects_NameEffectLabel__SetText
            (label,pSVar6,name_00,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0)
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Font
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font (SimpleJSONFixed_JSONNode_o* info, System_String_o* key, const MethodInfo* method);
// 0x58df520
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58df617: jmp 0x58df636

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
          (SimpleJSONFixed_JSONNode_o *info,System_String_o *key,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07545500 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_07545500 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_058df650:
      ThrowNullReferenceException();
    }
    pSVar3 = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,key,(info->klass->vtable)._7_get_Item.method)
    ;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar3 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                         (info,key,(info->klass->vtable)._7_get_Item.method);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058df650;
      pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      uVar1 = (TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor;
      goto joined_r0x058df634;
    }
  }
  uVar1 = (TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor;
  pSVar4 = "Normal";
joined_r0x058df634:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
  }
  pSVar4 = PatreonEffects_NameFontCatalog__Normalize(pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$ColorValue
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue (bool liveDialog, bool name, SimpleJSONFixed_JSONNode_o* effect, int32_t index, const MethodInfo* method);
// 0x58e1010
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58e120a: mov dword ptr [rsp + 0xc], r14d
// asm:   0x58e120f: cmp byte ptr [rip + 0x1c64386], 0
// asm:   0x58e1216: jne 0x58e122b
// asm:   0x58e12d1: jmp 0x58e122b

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
          (bool liveDialog,bool name,SimpleJSONFixed_JSONNode_o *effect,int32_t index,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *str2;
  System_String_o *pSVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  int32_t local_3c;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_07545501 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"colors");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-name-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-character-guild-effect");
    Il2CppMethodInitialized_07545501 = '\x01';
  }
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.0;
  if (liveDialog) {
    if (name) {
      ppSVar2 = &"profile-character-name-effect";
    }
    else {
      ppSVar2 = &"profile-character-guild-effect";
    }
    pSVar4 = *ppSVar2;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog);
    }
    local_3c = index;
    if (Il2CppMethodInitialized_0754559c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-color-");
      Il2CppMethodInitialized_0754559c = '\x01';
    }
    str2 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_5301f10(pSVar4,"-color-",str2,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    }
    pSVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                       (pSVar4,"#FFFFFFFF",true,(MethodInfo *)0x0);
label_058e1282:
  }
  else {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_058e12d6:
        ThrowNullReferenceException();
      }
      pSVar3 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                         (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar3 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                           (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
        if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058e12d6;
        pSVar3 = (*(pSVar3->klass->vtable)._5_get_Item.methodPtr)
                           (pSVar3,index,(pSVar3->klass->vtable)._5_get_Item.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar3 = (*(effect->klass->vtable)._7_get_Item.methodPtr)
                             (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
          if ((pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
             (pSVar3 = (*(pSVar3->klass->vtable)._5_get_Item.methodPtr)
                                 (pSVar3,index,(pSVar3->klass->vtable)._5_get_Item.method),
             pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_058e12d6;
          pSVar4 = (System_String_o *)
                   (**(code **)((long)pSVar3->klass + 0x1c8))
                             (pSVar3,*(undefined8 *)((long)pSVar3->klass + 0x1d0));
          goto label_058e1282;
        }
      }
    }
    pSVar4 = "#FFFFFFFF";
  }
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar4,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
  if (bVar1) {
    fVar5 = local_38.r;
    fVar6 = local_38.g;
  }
  else {
    fVar5 = (float)g_data_01005870;
    fVar6 = g_data_01005870._4_4_;
    local_38._8_8_ = g_data_01005870;
  }
  UVar7.fields.g = fVar6;
  UVar7.fields.r = fVar5;
  UVar7.fields.b = local_38.b;
  UVar7.fields.a = local_38.a;
  return (UnityEngine_Color_o)UVar7.fields;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Input
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* fallback, const MethodInfo* method);
// 0x58def50

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
          (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *fallback,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_InputField_o *x;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_07545502 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Find_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545502 = '\x01';
  }
  x = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_
                (root,id,(MethodInfo_3487EB0 *)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_Find_TMP_InputField
                );
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (TMPro_TMP_InputField_o *)0x0) {
      ThrowNullReferenceException();
    }
    ppSVar2 = &(x->fields).m_Text;
  }
  else {
    if (fallback != (System_String_o *)0x0) {
      return fallback;
    }
    ppSVar2 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  return *ppSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_3487EB0* method);
// 0x3587eb0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x3587fd0: jmp 0x3587fd4
// asm:   0x3587fd2: xor ebp, ebp
// asm:   0x3588006: jmp 0x3587ef7

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_3487EB0 *method)

{
  uint32_t uVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar6;
  
  if ((method->rgctx_data == (MethodInfo_3487EB0_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_3487EB0_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar3) && (bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), !bVar3)) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_34B1260 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_),
       pSVar4 == (System_Object_array *)0x0)) {
label_0358800b:
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = pSVar4->max_length & 0xffffffff;
      uVar6 = 0;
      do {
        if (uVar5 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar6];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (__this = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
             __this == (UnityEngine_Object_o *)0x0)) goto label_0358800b;
          a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
          if (bVar3) {
            return (Il2CppObject *)x;
          }
        }
        uVar6 = uVar6 + 1;
        uVar2 = (uint)pSVar4->max_length;
        uVar5 = (ulong)uVar2;
      } while ((long)uVar6 < (long)(int)uVar2);
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x58e1340

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


