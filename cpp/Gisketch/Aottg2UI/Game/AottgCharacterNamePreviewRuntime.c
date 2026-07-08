// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterNamePreviewRuntime.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* state, bool liveDialog, const MethodInfo* method);
// 0x41d1150

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,bool_conflict liveDialog,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *value;
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
  
  if (DAT_05704e42 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnStateChanged);
    il2cpp_init_method_metadata(&"AoTTG Preview Name");
    il2cpp_init_method_metadata(&"AoTTG Preview Guild");
    il2cpp_init_method_metadata(&"AoTTG Preview Guild Row");
    DAT_05704e42 = '\x01';
  }
  (__this->fields)._state = state;
  il2cpp_runtime_glue(&(__this->fields)._state,state);
  *(char *)&(__this->fields)._liveDialog = (char)liveDialog;
  __this_00 = (__this->fields)._state;
  method_00 = extraout_RDX;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
    System_Action<object>___ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__add_Changed(__this_00,value,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  pUVar1 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
                     (__this,"AoTTG Preview Guild Row",20.0,method_00);
  (__this->fields)._guildRow = pUVar1;
  il2cpp_runtime_glue(&(__this->fields)._guildRow);
  pGVar6 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)(__this->fields)._guildRow;
  if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform
                       ((UnityEngine_GameObject_o *)pGVar6,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
                       (pGVar6,pUVar2,20.0,method_01);
    (__this->fields)._guildBadges = pGVar3;
    il2cpp_runtime_glue(&(__this->fields)._guildBadges);
    pGVar6 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)(__this->fields)._guildRow
    ;
    if (pGVar6 != (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)pGVar6,(MethodInfo *)0x0);
      pUVar4 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
                         (pGVar6,pUVar2,30.0,method_02);
      (__this->fields)._guildPresetImage = pUVar4;
      il2cpp_runtime_glue(&(__this->fields)._guildPresetImage);
      pUVar1 = (__this->fields)._guildRow;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        pPVar5 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                           (__this,"AoTTG Preview Guild",20.0,pUVar2,0,in_R8);
        (__this->fields)._guild = pPVar5;
        il2cpp_runtime_glue(&(__this->fields)._guild,pPVar5);
        pPVar5 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
                           (__this,"AoTTG Preview Name",20.0,(UnityEngine_Transform_o *)0x0,1,in_R8);
        (__this->fields)._name = pPVar5;
        il2cpp_runtime_glue(&(__this->fields)._name);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
                  (__this,(MethodInfo *)pPVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x41d1db0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method
               )

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_Action_string__o *value;
  
  if (DAT_05704e43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnStateChanged);
    DAT_05704e43 = '\x01';
  }
  __this_00 = (__this->fields)._state;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
    System_Action<object>___ctor();
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x41d1e30

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method
               )

{
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x41d0a60

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Refresh
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method
               )

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar1;
  PatreonEffects_NameEffectLabel_o *pPVar2;
  UnityEngine_UI_Image_o *pUVar3;
  uint uVar4;
  bool_conflict bVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Object_o *x;
  Il2CppMethodPointer pIVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_IEnumerable_string__o *ids;
  System_String_o *font;
  UnityEngine_GameObject_o *pUVar10;
  SimpleJSONFixed_JSONNode_o *effect;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *pUVar11;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_04;
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *method_05;
  void *in_R8;
  bool bVar13;
  undefined1 auVar14 [16];
  MethodInfo *in_stack_ffffffffffffffa8;
  System_String_o *local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  method_05 = __this;
  if (DAT_05704e44 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"nameEffect");
    il2cpp_init_method_metadata(&"guildEffect");
    il2cpp_init_method_metadata(&"nameFont");
    il2cpp_init_method_metadata(&"guildFont");
    il2cpp_init_method_metadata(&"profile-character-name");
    il2cpp_init_method_metadata(&"profile-character-guild");
    method_05 = (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)&"name";
    il2cpp_init_method_metadata();
    DAT_05704e44 = '\x01';
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)method_05);
  uVar4 = 0;
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_041d0f44;
  pUVar7 = UnityEngine_Transform__get_root(pUVar7,(MethodInfo *)0x0);
  if ((char)(__this->fields)._liveDialog != '\0') {
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find<object>
                  (pUVar7,"profile-character-name",MethodInfo_TMP_InputField_Find_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    uVar4 = uVar4 & 0xff;
  }
  if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041d0f44;
  auVar14 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar6,"name",(pSVar6->klass->vtable)._7_get_Item.method);
  pIVar8 = auVar14._0_8_;
  if (pIVar8 == (Il2CppMethodPointer)0x0) goto LAB_041d0f44;
  pMVar12 = *(MethodInfo **)pIVar8;
  method_04 = (MethodInfo *)pMVar12[5].name;
  local_38 = (System_String_o *)
             (*pMVar12[5].invoker_method)
                       (pIVar8,method_04,auVar14._8_8_,&pMVar12->methodPointer,in_R8);
  if (uVar4 == 0) {
    local_40 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__DisplayGuild(pSVar6,method_04);
    local_48 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId(pSVar6,method_04);
    pGVar1 = (__this->fields)._guildBadges;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto LAB_041d0f44;
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo(pGVar1,pSVar6,method_01);
    pSVar9 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                       (pSVar6,"nameFont",method_02);
    font = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
                     (pSVar6,"guildFont",method_03);
  }
  else {
    pSVar9 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                       (pUVar7,"profile-character-name",local_38,pMVar12);
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_38 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value
                         ("profile-character-name",pSVar9,(MethodInfo *)0x0);
    local_40 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild
                         (pUVar7,pSVar6,method_00);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_05704b29 == '\0') goto LAB_041d0cfd;
LAB_041d0c49:
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) goto LAB_041d0c5d;
LAB_041d0d24:
      il2cpp_init_class();
      local_48 = (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      pGVar1 = (__this->fields)._guildBadges;
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ids = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedBadgeIds((MethodInfo *)0x0);
      pMVar12 = extraout_RDX_00;
    }
    else {
      if (DAT_05704b29 != '\0') goto LAB_041d0c49;
LAB_041d0cfd:
      il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
      DAT_05704b29 = '\x01';
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) goto LAB_041d0d24;
LAB_041d0c5d:
      local_48 = (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      pGVar1 = (__this->fields)._guildBadges;
      ids = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedBadgeIds((MethodInfo *)0x0);
      pMVar12 = extraout_RDX;
    }
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto LAB_041d0f44;
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges(pGVar1,ids,pMVar12);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar9 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    font = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont((MethodInfo *)0x0);
    pUVar10 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
              (pUVar10,"profile-character-name",pSVar9,(MethodInfo *)0x0);
    pUVar10 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
              (pUVar10,"profile-character-guild",font,(MethodInfo *)0x0);
  }
  pPVar2 = (__this->fields)._name;
  effect = (SimpleJSONFixed_JSONNode_o *)
           (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar6,"nameEffect",(pSVar6->klass->vtable)._7_get_Item.method);
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
            (pPVar2,local_38,uVar4,1,effect,pSVar9,in_stack_ffffffffffffffa8);
  pSVar6 = (SimpleJSONFixed_JSONNode_o *)
           (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar6,"guildEffect",(pSVar6->klass->vtable)._7_get_Item.method);
  Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
            (__this,local_40,local_48,uVar4,pSVar6,font,in_stack_ffffffffffffffa8);
  pGVar1 = (__this->fields)._guildBadges;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
    bVar13 = *(char *)((long)&(pGVar1->fields)._controlsActive + 1) == '\0';
    pUVar10 = (__this->fields)._guildRow;
    pUVar11 = (UnityEngine_GameObject_o *)0x0;
    if (bVar13) {
      pUVar11 = pUVar10;
    }
    uVar4 = 1;
    if (bVar13) {
      pPVar2 = (__this->fields)._guild;
      if ((pPVar2 == (PatreonEffects_NameEffectLabel_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pPVar2,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_041d0f44;
      bVar5 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pUVar3 = (__this->fields)._guildPresetImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar4 = 0;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        pUVar10 = pUVar11;
        if ((char)bVar5 != '\0') {
          pUVar3 = (__this->fields)._guildPresetImage;
          if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
             (pUVar11 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
             pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto LAB_041d0f44;
          uVar4 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
        }
      }
    }
    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar10,uVar4 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
LAB_041d0f44:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateRow
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* id, float fontSize, const MethodInfo* method);
// 0x41d1310

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateRow
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *id,
          float fontSize,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar3;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_02;
  undefined8 uVar4;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704e45 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    DAT_05704e45 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,2,method);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_041d1593:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_041d159d;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
LAB_041d159d:
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      il2cpp_runtime_glue(components->m_Items + 1,pSVar1);
      __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(__this_00,id,components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_01,parent,0,(MethodInfo *)0x0);
          pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar3 != (Il2CppObject *)0x0) {
            (*pIVar3->klass->vtable[0x26].methodPtr)
                      (fontSize + 10.0,pIVar3,pIVar3->klass->vtable[0x26].method);
            (*pIVar3->klass->vtable[0x28].methodPtr)
                      (0x3f800000,pIVar3,pIVar3->klass->vtable[0x28].method);
            __this_02 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                        UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay);
            if (__this_02 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
              UnityEngine_UI_LayoutGroup__set_childAlignment
                        ((UnityEngine_UI_LayoutGroup_o *)__this_02,4,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                        (__this_02,1,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                        (__this_02,1,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                        (__this_02,0,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                        (__this_02,0,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                        (__this_02,5.0,(MethodInfo *)0x0);
              return __this_00;
            }
          }
        }
      }
      goto LAB_041d1593;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateBadges
// il2cpp: Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, UnityEngine_Transform_o* parent, float size, const MethodInfo* method);
// 0x41d15b0

Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateBadges
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,
          UnityEngine_Transform_o *parent,float size,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this_02;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *in_R8;
  
  if (DAT_05704e46 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadge);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG Preview Guild Badges");
    DAT_05704e46 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,2,method);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_041d178e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_041d1798;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
LAB_041d1798:
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      il2cpp_runtime_glue(components->m_Items + 1,pSVar1);
      __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(__this_00,"AoTTG Preview Guild Badges",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_01,parent,0,(MethodInfo *)0x0);
          __this_02 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                      UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadge);
          if (__this_02 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                      (__this_02,size,4.0,(Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                       (System_String_o *)0x0,1,in_R8);
            return __this_02;
          }
        }
      }
      goto LAB_041d178e;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreatePresetImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, UnityEngine_Transform_o* parent, float height, const MethodInfo* method);
// 0x41d17b0

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreatePresetImage
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,
          UnityEngine_Transform_o *parent,float height,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_Image_o *__this_02;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704e47 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG Preview Guild Preset Image");
    DAT_05704e47 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,4,method);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_041d1ac3:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_041d1acd;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) goto LAB_041d1acd;
    }
    if ((uint)components->max_length < 2) goto LAB_041d1ac8;
    components->m_Items[1] = pSVar1;
    il2cpp_runtime_glue(components->m_Items + 1);
    pSVar1 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) goto LAB_041d1acd;
    }
    if (2 < (uint)components->max_length) {
      components->m_Items[2] = pSVar1;
      il2cpp_runtime_glue(components->m_Items + 2);
      pSVar1 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
        if (lVar2 == 0) {
LAB_041d1acd:
          uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar4,0);
        }
      }
      if (3 < (uint)components->max_length) {
        components->m_Items[3] = pSVar1;
        il2cpp_runtime_glue(components->m_Items + 3,pSVar1);
        __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(__this_00,"AoTTG Preview Guild Preset Image",components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(__this_01,parent,0,(MethodInfo *)0x0);
            __this_02 = (UnityEngine_UI_Image_o *)
                        UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Image_GetComponent_Image);
            if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
              (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_02,0,(__this_02->klass->vtable)._25_set_raycastTarget.method);
              UnityEngine_UI_Image__set_preserveAspect(__this_02,1,(MethodInfo *)0x0);
              pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar3 != (Il2CppObject *)0x0) {
                (*pIVar3->klass->vtable[0x24].methodPtr)
                          (height * 2.9,pIVar3,pIVar3->klass->vtable[0x24].method);
                (*pIVar3->klass->vtable[0x26].methodPtr)(height,pIVar3);
                UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
                return __this_02;
              }
            }
          }
        }
        goto LAB_041d1ac3;
      }
    }
  }
LAB_041d1ac8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateLabel
// il2cpp: PatreonEffects_NameEffectLabel_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* id, float fontSize, UnityEngine_Transform_o* parent, bool flexibleWidth, const MethodInfo* method);
// 0x41d1ae0

PatreonEffects_NameEffectLabel_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__CreateLabel
          (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,System_String_o *id,
          float fontSize,UnityEngine_Transform_o *parent,bool_conflict flexibleWidth,
          MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppObject *pIVar4;
  PatreonEffects_NameEffectLabel_o *__this_02;
  undefined8 uVar5;
  uint uVar6;
  UnityEngine_Color_o value;
  
  if (DAT_05704e48 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    DAT_05704e48 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_041d1d90:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_041d1d9a;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    il2cpp_runtime_glue(components->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((components->obj).klass)->_1).element_class);
      if (lVar3 == 0) {
LAB_041d1d9a:
        uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar5,0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      il2cpp_runtime_glue(components->m_Items + 1,pSVar2);
      __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(__this_00,id,components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        }
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(__this_01,parent,0,(MethodInfo *)0x0);
          pIVar4 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar4 != (Il2CppObject *)0x0) {
            (*pIVar4->klass->vtable[0x26].methodPtr)
                      ((ulong)(uint)(fontSize + 10.0),pIVar4,pIVar4->klass->vtable[0x26].method);
            if ((char)flexibleWidth == '\0') {
              uVar6 = 0;
            }
            else {
              uVar6 = 0x3f800000;
            }
            (*pIVar4->klass->vtable[0x28].methodPtr)
                      ((ulong)uVar6,pIVar4,pIVar4->klass->vtable[0x28].method);
            __this_02 = (PatreonEffects_NameEffectLabel_o *)
                        UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
            if (__this_02 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              PatreonEffects_NameEffectLabel__set_fontSize(__this_02,fontSize,(MethodInfo *)0x0);
              value.fields.b = 1.0;
              value.fields.a = 1.0;
              value.fields.r = 1.0;
              value.fields.g = 1.0;
              PatreonEffects_NameEffectLabel__set_color(__this_02,value,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__set_alignment(__this_02,0x1002,(MethodInfo *)0x0);
              PatreonEffects_NameEffectLabel__set_richText(__this_02,1,(MethodInfo *)0x0);
              return __this_02;
            }
          }
        }
      }
      goto LAB_041d1d90;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$DialogGuild
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild (UnityEngine_Transform_o* root, SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x41d1ef0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__DialogGuild
          (UnityEngine_Transform_o *root,SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  Il2CppMethodPointer pIVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  void *in_R8;
  undefined1 auVar5 [16];
  
  if (DAT_05704e49 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&"guild");
    il2cpp_init_method_metadata(&"profile-character-guild");
    DAT_05704e49 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704b29 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    DAT_05704b29 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar4 = (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
                       (pSVar4,(MethodInfo *)0x0);
    return pSVar4;
  }
  if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
    auVar5 = (*(info->klass->vtable)._7_get_Item.methodPtr)
                       (info,"guild",(info->klass->vtable)._7_get_Item.method);
    pIVar3 = auVar5._0_8_;
    if (pIVar3 != (Il2CppMethodPointer)0x0) {
      method_00 = *(MethodInfo **)pIVar3;
      pSVar4 = (System_String_o *)
               (*method_00[5].invoker_method)
                         (pIVar3,(MethodInfo *)method_00[5].name,auVar5._8_8_,
                          &method_00->methodPointer,in_R8);
      pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                         (root,"profile-character-guild",pSVar4,method_00);
      if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value
                         ("profile-character-guild",pSVar4,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$ApplyGuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, System_String_o* text, System_String_o* presetId, bool liveDialog, SimpleJSONFixed_JSONNode_o* effect, System_String_o* font, const MethodInfo* method);
// 0x41d27b0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ApplyGuild
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,
               System_String_o *text,System_String_o *presetId,bool_conflict liveDialog,
               SimpleJSONFixed_JSONNode_o *effect,System_String_o *font,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **effect_00;
  PatreonEffects_NameEffectLabel_o *pPVar1;
  TMPro_TextMeshProUGUI_o *label;
  UnityEngine_UI_Image_o *pUVar2;
  bool_conflict bVar3;
  uint uVar4;
  MethodInfo *in_RAX;
  UnityEngine_GameObject_o *pUVar5;
  System_String_o *name;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  
  if (DAT_05704e4a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e4a = '\x01';
  }
  bVar3 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset(presetId,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar2 = (__this->fields)._guildPresetImage;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_01 = extraout_RDX;
    if ((char)bVar3 != '\0') {
      pUVar2 = (__this->fields)._guildPresetImage;
      if ((pUVar2 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_041d29ce;
      UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      method_01 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing(__this,0,method_01);
    pPVar1 = (__this->fields)._guild;
    if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      color_01.fields.b = 1.0;
      color_01.fields.a = 1.0;
      color_01.fields.r = 1.0;
      color_01.fields.g = 1.0;
      Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                ((TMPro_TMP_Text_o *)(pPVar1->fields)._nameTmp,&(__this->fields)._guildPresetEffect,
                 color_01,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                ((__this->fields)._guild,text,liveDialog & 0xff,0,effect,font,in_RAX);
      return;
    }
  }
  else {
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
                  ((TMPro_TMP_Text_o *)(pPVar1->fields)._nameTmp,effect_00,color,(MethodInfo *)0x0);
        uVar4 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
                          ((__this->fields)._guildPresetImage,presetId,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
                  (__this,uVar4 & 0xff,method_00);
        pPVar1 = (__this->fields)._guild;
        if ((pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pPVar1,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar5,(uint)(byte)((byte)uVar4 ^ 1),(MethodInfo *)0x0);
          if ((byte)uVar4 != 0) {
            return;
          }
          pPVar1 = (__this->fields)._guild;
          pSVar6 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
          name = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label(presetId,(MethodInfo *)0x0);
          if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
            PatreonEffects_NameEffectLabel__SetText
                      (pPVar1,pSVar6,name,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                       (MethodInfo *)0x0);
            pPVar1 = (__this->fields)._guild;
            if (pPVar1 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              label = (pPVar1->fields)._nameTmp;
              pSVar6 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label
                                 (presetId,(MethodInfo *)0x0);
              color_00.fields.b = 1.0;
              color_00.fields.a = 1.0;
              color_00.fields.r = 1.0;
              color_00.fields.g = 1.0;
              Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                        ((TMPro_TMP_Text_o *)label,effect_00,presetId,pSVar6,color_00,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_041d29ce:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$SetGuildRowSpacing
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, bool imageGuild, const MethodInfo* method);
// 0x41d29e0

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,
               bool_conflict imageGuild,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  float value;
  
  if (DAT_05704e4b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e4b = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._guildRow;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_041d2ab9;
    __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 == '\0') {
    return;
  }
  if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    if ((char)imageGuild == '\0') {
      value = 5.0;
    }
    else {
      value = 3.5;
    }
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
    return;
  }
LAB_041d2ab9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$PresetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId (SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x41d2080

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__PresetId
          (SimpleJSONFixed_JSONNode_o *info,MethodInfo *method)

{
  code *vtable_dispatch;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704e4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"guildPresetId");
    DAT_05704e4c = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(info->klass->vtable)._7_get_Item.methodPtr)
                    (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') goto LAB_041d2167;
      plVar2 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                                 (info,"guildPresetId",(info->klass->vtable)._7_get_Item.method);
      if (plVar2 != (long *)0x0) {
        vtable_dispatch = *(code **)(*plVar2 + 0x1c8);
        pSVar3 = (System_String_o *)
                 (*vtable_dispatch)
                           (plVar2,*(undefined8 *)(*plVar2 + 0x1d0),vtable_dispatch);
        return pSVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041d2167:
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Apply
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply (PatreonEffects_NameEffectLabel_o* label, System_String_o* text, bool liveDialog, bool name, SimpleJSONFixed_JSONNode_o* effect, System_String_o* font, const MethodInfo* method);
// 0x41d22d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
               (PatreonEffects_NameEffectLabel_o *label,System_String_o *text,
               bool_conflict liveDialog,bool_conflict name,SimpleJSONFixed_JSONNode_o *effect,
               System_String_o *font,MethodInfo *method)

{
  undefined8 uVar1;
  int32_t effect_00;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  bool_conflict bVar10;
  uint uVar11;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar12;
  UnityEngine_GameObject_o *__this;
  TMPro_TMP_FontAsset_o *font_00;
  long *plVar13;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar14;
  System_String_o *name_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar15;
  uint uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar17;
  undefined4 uVar18;
  UnityEngine_Color_o UVar19;
  UnityEngine_Color_o a_00;
  undefined1 auVar20 [16];
  UnityEngine_Color_o b;
  UnityEngine_Color_o c;
  int32_t local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_98._0_4_ = name;
  local_88._0_4_ = liveDialog;
  pMVar15 = (MethodInfo *)text;
  if (DAT_05704e4d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"type");
    il2cpp_init_method_metadata(&"enabled");
    DAT_05704e4d = '\x01';
    if (text != (System_String_o *)0x0) goto LAB_041d2308;
LAB_041d237a:
    local_9c = 0;
    pGVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                        ((System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),pMVar15);
  }
  else {
    if (text == (System_String_o *)0x0) goto LAB_041d237a;
LAB_041d2308:
    local_9c = 0;
    pGVar12 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse(text,pMVar15);
  }
  if (((label == (PatreonEffects_NameEffectLabel_o *)0x0) ||
      (__this = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)label,(MethodInfo *)0x0),
      pGVar12 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)) ||
     (bVar10 = System_String__IsNullOrEmpty((pGVar12->fields).Text,(MethodInfo *)0x0),
     __this == (UnityEngine_GameObject_o *)0x0)) goto LAB_041d279d;
  UnityEngine_GameObject__SetActive(__this,(uint)(byte)((byte)bVar10 ^ 1),(MethodInfo *)0x0);
  PatreonEffects_NameEffectLabel__ClearNameEffect(label,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar16 = 0;
  uVar11 = 0;
  cVar9 = '\0';
  font_00 = PatreonEffects_NameFontCatalog__Load(font,(MethodInfo *)0x0);
  PatreonEffects_NameEffectLabel__SetFont(label,font_00,(MethodInfo *)0x0);
  uVar17 = DAT_00ccd980._8_4_;
  uVar18 = DAT_00ccd980._12_4_;
  uVar1 = DAT_00ccd980;
  UVar19.fields.b = (float)(int)uVar1;
  UVar19.fields.a = (float)(int)((ulong)uVar1 >> 0x20);
  UVar19.fields.r = (float)(int)uVar1;
  UVar19.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
  PatreonEffects_NameEffectLabel__set_color(label,UVar19,(MethodInfo *)0x0);
  bVar10 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (local_88[0] == '\0') goto LAB_041d2526;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) goto LAB_041d2719;
LAB_041d2490:
    uVar11 = uVar16;
joined_r0x041d2495:
    if (local_98[0] == '\0') {
                    /* WARNING: Read-only address (ram,0x00ccd980) is written */
      pSVar14 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType((MethodInfo *)0x0);
      pMVar15 = extraout_RDX_03;
    }
    else {
                    /* WARNING: Read-only address (ram,0x00ccd980) is written */
      pSVar14 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType((MethodInfo *)0x0);
      pMVar15 = extraout_RDX;
    }
    if (uVar11 != 0) {
LAB_041d2600:
      local_9c = 0;
      bVar10 = PatreonEffects_NameEffectPresets__TryResolve(pSVar14,&local_9c,(MethodInfo *)0x0);
      pSVar14 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      pMVar15 = extraout_RDX_02;
      if ((char)bVar10 != '\0') {
        pMVar15 = (MethodInfo *)0x0;
        PatreonEffects_NameEffectLabel__SetText
                  (label,pSVar14,(pGVar12->fields).Text,pSVar14,(MethodInfo *)0x0);
        effect_00 = local_9c;
        bVar3 = local_88[0];
        bVar2 = local_98[0];
        uVar16 = (uint)local_88[0];
        uVar11 = (uint)local_98[0];
        UVar19 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                           (uVar16,uVar11,effect,0,pMVar15);
        local_88._8_4_ = extraout_XMM0_Dc;
        local_88._0_8_ = UVar19.fields._0_8_;
        local_88._12_4_ = extraout_XMM0_Dd;
        local_98._8_4_ = uVar17;
        local_98._0_8_ = UVar19.fields._8_8_;
        local_98._12_4_ = uVar18;
        UVar19 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                           (uVar16,uVar11,effect,1,pMVar15);
        local_48._8_4_ = extraout_XMM0_Dc_00;
        local_48._0_8_ = UVar19.fields._0_8_;
        local_48._12_4_ = extraout_XMM0_Dd_00;
        local_58._8_4_ = uVar17;
        local_58._0_8_ = UVar19.fields._8_8_;
        local_58._12_4_ = uVar18;
        UVar19 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                           ((uint)bVar3,(uint)bVar2,effect,2,pMVar15);
        local_68._8_4_ = extraout_XMM0_Dc_01;
        local_68._0_8_ = UVar19.fields._0_8_;
        local_68._12_4_ = extraout_XMM0_Dd_01;
        local_78._8_4_ = uVar17;
        local_78._0_8_ = UVar19.fields._8_8_;
        local_78._12_4_ = uVar18;
        UVar19 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                           ((uint)bVar3,(uint)bVar2,effect,3,pMVar15);
        auVar8 = local_48;
        auVar7 = local_58;
        auVar6 = local_68;
        auVar5 = local_78;
        auVar4 = local_88;
        auVar20 = local_98;
        a_00.fields.b = (float)local_98._0_4_;
        a_00.fields.a = (float)local_98._4_4_;
        a_00.fields.r = (float)local_88._0_4_;
        a_00.fields.g = (float)local_88._4_4_;
        b.fields.b = (float)local_58._0_4_;
        b.fields.a = (float)local_58._4_4_;
        b.fields.r = (float)local_48._0_4_;
        b.fields.g = (float)local_48._4_4_;
        c.fields.b = (float)local_78._0_4_;
        c.fields.a = (float)local_78._4_4_;
        c.fields.r = (float)local_68._0_4_;
        c.fields.g = (float)local_68._4_4_;
        local_98 = auVar20;
        local_88 = auVar4;
        local_78 = auVar5;
        local_68 = auVar6;
        local_58 = auVar7;
        local_48 = auVar8;
        PatreonEffects_NameEffectLabel__SetNameEffect
                  (label,effect_00,a_00,b,c,UVar19,(MethodInfo *)0x0);
        return;
      }
      goto LAB_041d2758;
    }
  }
  else {
    if (local_88[0] != '\0') {
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        il2cpp_init_class();
        if (local_98[0] != '\0') goto LAB_041d2462;
LAB_041d26f8:
        uVar11 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectEnabled
                           ((MethodInfo *)0x0);
      }
      else {
        if (local_98[0] == '\0') goto LAB_041d26f8;
LAB_041d2462:
        uVar11 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectEnabled
                           ((MethodInfo *)0x0);
      }
      uVar11 = uVar11 & 0xff;
      uVar16 = uVar11;
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) goto LAB_041d2490;
LAB_041d2719:
      il2cpp_init_class();
      goto joined_r0x041d2495;
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    cVar9 = '\0';
    bVar10 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if ((effect == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (plVar13 = (long *)(*(effect->klass->vtable)._7_get_Item.methodPtr)
                                      (effect,"enabled",
                                       (effect->klass->vtable)._7_get_Item.method),
         plVar13 == (long *)0x0)) goto LAB_041d279d;
      cVar9 = (**(code **)(*plVar13 + 0x3a8))(plVar13);
    }
LAB_041d2526:
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar10 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pMVar15 = extraout_RDX_00;
    if ((char)bVar10 == '\0') {
LAB_041d25e6:
      pSVar14 = "None";
      if (cVar9 == '\0') goto LAB_041d2740;
      goto LAB_041d2600;
    }
    if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041d279d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(effect->klass->vtable)._7_get_Item.methodPtr)
                  (effect,"type",(effect->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar10 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pMVar15 = extraout_RDX_01;
    if ((char)bVar10 == '\0') goto LAB_041d25e6;
    plVar13 = (long *)(*(effect->klass->vtable)._7_get_Item.methodPtr)
                                (effect,"type",(effect->klass->vtable)._7_get_Item.method);
    if (plVar13 == (long *)0x0) goto LAB_041d279d;
    auVar20 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    pMVar15 = auVar20._8_8_;
    pSVar14 = auVar20._0_8_;
    if (cVar9 != '\0') goto LAB_041d2600;
  }
LAB_041d2740:
  local_9c = 0;
  pSVar14 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
LAB_041d2758:
  name_00 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText
                      ((pGVar12->fields).Text,
                       (System_Collections_Generic_IList_string__o *)(pGVar12->fields).Colors,
                       pMVar15);
  PatreonEffects_NameEffectLabel__SetText
            (label,pSVar14,name_00,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
             (MethodInfo *)0x0);
                    /* WARNING: Read-only address (ram,0x00ccd980) is written */
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Font
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font (SimpleJSONFixed_JSONNode_o* info, System_String_o* key, const MethodInfo* method);
// 0x41d2190

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Font
          (SimpleJSONFixed_JSONNode_o *info,System_String_o *key,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704e4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&"Normal");
    DAT_05704e4e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041d22c0:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(info->klass->vtable)._7_get_Item.methodPtr)
                  (info,key,(info->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      plVar3 = (long *)(*(info->klass->vtable)._7_get_Item.methodPtr)
                                 (info,key,(info->klass->vtable)._7_get_Item.method);
      if (plVar3 == (long *)0x0) goto LAB_041d22c0;
      pSVar4 = (System_String_o *)(**(code **)(*plVar3 + 0x1c8))(plVar3);
      iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
      goto joined_r0x041d22a4;
    }
  }
  iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
  pSVar4 = "Normal";
joined_r0x041d22a4:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar4 = PatreonEffects_NameFontCatalog__Normalize(pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$ColorValue
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue (bool liveDialog, bool name, SimpleJSONFixed_JSONNode_o* effect, int32_t index, const MethodInfo* method);
// 0x41d2dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UnityEngine_Color_o
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
          (bool_conflict liveDialog,bool_conflict name,SimpleJSONFixed_JSONNode_o *effect,
          int32_t index,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  long *plVar4;
  System_String_o *pSVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Color_o UVar8;
  UnityEngine_Color_Fields local_38;
  
  if (DAT_05704e4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    il2cpp_init_method_metadata(&"colors");
    il2cpp_init_method_metadata(&"profile-character-name-effect");
    il2cpp_init_method_metadata(&"profile-character-guild-effect");
    DAT_05704e4f = '\x01';
  }
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.0;
  if ((char)liveDialog == '\0') {
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(effect,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar5 = "#FFFFFFFF";
    if ((char)bVar1 != '\0') {
      if (effect == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041d302a:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar3 = (SimpleJSONFixed_JSONNode_o *)
               (*(effect->klass->vtable)._7_get_Item.methodPtr)
                         (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      pSVar5 = "#FFFFFFFF";
      if ((char)bVar1 != '\0') {
        plVar4 = (long *)(*(effect->klass->vtable)._7_get_Item.methodPtr)
                                   (effect,"colors",(effect->klass->vtable)._7_get_Item.method);
        if (plVar4 == (long *)0x0) goto LAB_041d302a;
        pSVar3 = (SimpleJSONFixed_JSONNode_o *)
                 (**(code **)(*plVar4 + 0x188))(plVar4,index,*(undefined8 *)(*plVar4 + 400));
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = SimpleJSONFixed_JSONNode__op_Inequality
                          (pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        pSVar5 = "#FFFFFFFF";
        if ((char)bVar1 != '\0') {
          plVar4 = (long *)(*(effect->klass->vtable)._7_get_Item.methodPtr)
                                     (effect,"colors",(effect->klass->vtable)._7_get_Item.method
                                     );
          if ((plVar4 == (long *)0x0) ||
             (plVar4 = (long *)(**(code **)(*plVar4 + 0x188))
                                         (plVar4,index,*(undefined8 *)(*plVar4 + 400)),
             plVar4 == (long *)0x0)) goto LAB_041d302a;
          pSVar5 = (System_String_o *)
                   (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        }
      }
    }
  }
  else {
    if ((char)name == '\0') {
      puVar2 = &"profile-character-guild-effect";
    }
    else {
      puVar2 = &"profile-character-name-effect";
    }
    pSVar5 = (System_String_o *)*puVar2;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorInputId
                       (pSVar5,index,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                       (pSVar5,"#FFFFFFFF",1,(MethodInfo *)0x0);
  }
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar5,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    fVar6 = (float)DAT_00ccd980;
    fVar7 = DAT_00ccd980._4_4_;
    local_38._8_8_ = DAT_00ccd980;
  }
  else {
    fVar6 = local_38.r;
    fVar7 = local_38.g;
  }
  UVar8.fields.g = fVar7;
  UVar8.fields.r = fVar6;
  UVar8.fields.b = local_38.b;
  UVar8.fields.a = local_38.a;
  return (UnityEngine_Color_o)UVar8.fields;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Input
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* fallback, const MethodInfo* method);
// 0x41d1e40

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
          (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *fallback,
          MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Object_Fields *pUVar2;
  
  if (DAT_05704e50 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704e50 = '\x01';
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find<object>(root,id,MethodInfo_TMP_InputField_Find_TMP_InputField);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (fallback != (System_String_o *)0x0) {
      return fallback;
    }
    pUVar2 = *(UnityEngine_Object_Fields **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar2 = &x[0x16].fields;
  }
  return (System_String_o *)pUVar2->m_CachedPtr;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_2500E10* method);
// 0x2600e10

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Find<object>
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_2500E10 *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar5;
  
  if ((method->rgctx_data == (MethodInfo_2500E10_RGCTXs *)0x0) &&
     (il2cpp_init_method_metadata(&TypeInfo_Object), method->rgctx_data == (MethodInfo_2500E10_RGCTXs *)0x0)) {
    il2cpp_glue_022c2910(method);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar3 == '\0') &&
     (bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), (char)bVar3 == '\0')) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)root,1,
                            (MethodInfo_24A5220 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_)
       , pSVar4 == (System_Object_array *)0x0)) {
LAB_02600f7c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar3 != '\0') {
            if ((x == (UnityEngine_Object_o *)0x0) ||
               (__this = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
               __this == (UnityEngine_Object_o *)0x0)) goto LAB_02600f7c;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return (Il2CppObject *)x;
            }
          }
          uVar5 = uVar5 + 1;
          uVar2 = (uint)pSVar4->max_length;
          if ((long)(int)uVar2 <= (long)uVar5) {
            return (Il2CppObject *)0x0;
          }
        } while (uVar5 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime___ctor (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o* __this, const MethodInfo* method);
// 0x41d3030

void Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *__this,MethodInfo *method
               )

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


