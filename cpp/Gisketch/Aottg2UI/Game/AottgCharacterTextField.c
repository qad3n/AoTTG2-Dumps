// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextField
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextField.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, System_String_o* id, System_String_o* label, System_String_o* placeholder, System_String_o* value, bool enabled, System_String_o* effectPrefix, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x4511240

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *placeholder,System_String_o *value,
               bool_conflict enabled,System_String_o *effectPrefix,
               System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,label);
  (__this->fields)._placeholder = placeholder;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._placeholder,placeholder);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._value = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._value,value);
  *(char *)&(__this->fields)._enabled = (char)enabled;
  (__this->fields)._effectPrefix = effectPrefix;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._effectPrefix,effectPrefix);
  (__this->fields)._changed = changed;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._changed);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value (System_String_o* id, System_String_o* fallback, const MethodInfo* method);
// 0x45035b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value
          (System_String_o *id,System_String_o *fallback,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_String_o *value;
  code *vtableDispatch;
  bool_conflict bVar3;
  Il2CppMethodPointer pIVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *a;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long *plVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *a_00;
  void *in_R8;
  undefined1 auVar8 [16];
  System_String_o *local_20;
  
  pSVar5 = fallback;
  if (g_data_057aed90 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057aed90 = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)id,(Il2CppObject **)&local_20,MethodInfo_Boolean_TryGetValue);
    if (((char)bVar3 == '\0') && (local_20 = fallback, fallback == (System_String_o *)0x0)) {
      local_20 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    return local_20;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"guild");
    il2cpp_runtime_helper_023445d0(&"profile-character-guild");
    g_data_057aed1f = '\x01';
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) goto label_0450369b;
label_04503735:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae856 != '\0') goto label_045036a8;
label_04503747:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057ae856 = '\x01';
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) goto label_045036b8;
label_0450376a:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) goto label_04503735;
label_0450369b:
    if (g_data_057ae856 == '\0') goto label_04503747;
label_045036a8:
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) goto label_0450376a;
label_045036b8:
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  if (cVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  plVar7 = &TypeInfo_AottgEditCharacterDialog;
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aeda8 != '\0') goto label_0450379c;
label_045037d1:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057aeda8 = '\x01';
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) != 0) goto label_045037a8;
label_045037f0:
    il2cpp_runtime_helper_02337ed0();
    if (*(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8) != '\0') goto label_045037b5;
label_0450380c:
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else {
    if (g_data_057aeda8 == '\0') goto label_045037d1;
label_0450379c:
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) goto label_045037f0;
label_045037a8:
    if (*(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8) == '\0') goto label_0450380c;
label_045037b5:
    plVar7 = &g_data_057b9c00;
  }
  value = (System_String_o *)**(undefined8 **)(*plVar7 + 0xb8);
  a_00 = value;
  bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel(value,(MethodInfo *)0x0);
    return pSVar5;
  }
  if (pSVar5 != (System_String_o *)0x0) {
    auVar8 = (*(pSVar5->klass->vtable)._7_CompareTo.methodPtr)
                       (pSVar5,"guild",(pSVar5->klass->vtable)._7_CompareTo.method);
    pIVar4 = auVar8._0_8_;
    a_00 = pSVar5;
    if (pIVar4 != (Il2CppMethodPointer)0x0) {
      pMVar6 = *(MethodInfo **)pIVar4;
      pSVar5 = (System_String_o *)
               (*pMVar6[5].invoker_method)
                         (pIVar4,(MethodInfo *)pMVar6[5].name,auVar8._8_8_,&pMVar6->methodPointer,in_R8);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Input
                         ((UnityEngine_Transform_o *)__this,"profile-character-guild",pSVar5,pMVar6);
      pMVar6 = extraout_RDX;
      if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar6 = extraout_RDX_00;
      }
      pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value("profile-character-guild",pSVar5,pMVar6);
      return pSVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"guildPresetId");
    g_data_057aed22 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_045039b7:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (a_00 != (System_String_o *)0x0) {
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(a_00->klass->vtable)._7_CompareTo.methodPtr)
                  (a_00,"guildPresetId",(a_00->klass->vtable)._7_CompareTo.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto label_045039b7;
    plVar7 = (long *)(*(a_00->klass->vtable)._7_CompareTo.methodPtr)
                               (a_00,"guildPresetId",(a_00->klass->vtable)._7_CompareTo.method);
    if (plVar7 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar7 + 0x1c8);
      pSVar5 = (System_String_o *)
               (*vtableDispatch)(plVar7,*(undefined8 *)(*plVar7 + 0x1d0),vtableDispatch);
      return pSVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeda8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    g_data_057aeda8 = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8) + 8);
  }
  if (cVar1 == '\0') {
    plVar7 = &TypeInfo_AottgEditCharacterDialog;
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else {
    plVar7 = &g_data_057b9c00;
  }
  return (System_String_o *)**(undefined8 **)(*plVar7 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue (UnityEngine_GameObject_o* source, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x4508e40

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue
               (UnityEngine_GameObject_o *source,System_String_o *id,System_String_o *value,MethodInfo *method
               )

{
  long lVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  char cVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  pSVar5 = id;
  if (g_data_057aed91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed91 = '\x01';
    if (value != (System_String_o *)0x0) goto label_04508e60;
label_04508eb8:
    cVar4 = (char)pSVar5;
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) != 0) goto label_04508e74;
label_04508ee4:
    il2cpp_runtime_helper_02337ed0();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    pSVar5 = (System_String_o *)0x0;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04508f89;
  }
  else {
    if (value == (System_String_o *)0x0) goto label_04508eb8;
label_04508e60:
    cVar4 = (char)pSVar5;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) goto label_04508ee4;
label_04508e74:
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar5 = (System_String_o *)0x0;
      goto label_04508f89;
    }
  }
  method_00 = MethodInfo_Void_set_Item;
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this,(Il2CppObject *)id,(Il2CppObject *)value,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  cVar4 = '\0';
  pSVar5 = (System_String_o *)source;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (source != (UnityEngine_GameObject_o *)0x0) {
      cVar4 = '\0';
      pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
      pSVar5 = (System_String_o *)source;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
        goto label_04508f60;
      }
    }
label_04508f89:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aedb4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
      il2cpp_runtime_helper_023445d0(&"None");
      il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
      g_data_057aedb4 = '\x01';
    }
    bVar2 = System_String__op_Equality(pSVar5,"profile-character-name-effect",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_AottgEditCharacterDialog);
      lVar7 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      lVar1 = TypeInfo_AottgEditCharacterDialog;
    }
    else {
      lVar7 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      lVar1 = TypeInfo_AottgEditCharacterDialog;
    }
    TypeInfo_AottgEditCharacterDialog = lVar1;
    if ((char)bVar2 == '\0') {
      *(char *)(lVar7 + 10) = cVar4;
      uVar8 = extraout_RDX;
      if (cVar4 == '\0') {
        uVar8 = "None";
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar1);
        lVar7 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      }
      puVar6 = (undefined8 *)(lVar7 + 0x18);
    }
    else {
      *(char *)(lVar7 + 9) = cVar4;
      uVar8 = extraout_RDX;
      if (cVar4 == '\0') {
        uVar8 = "None";
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar1);
        lVar7 = *(long *)(TypeInfo_AottgEditCharacterDialog + 0xb8);
      }
      puVar6 = (undefined8 *)(lVar7 + 0x10);
    }
    *puVar6 = uVar8;
    il2cpp_runtime_helper_022b4080(puVar6,uVar8);
    return;
  }
label_04508f60:
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText(pUVar3,id,value,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont (UnityEngine_GameObject_o* source, System_String_o* id, System_String_o* font, const MethodInfo* method);
// 0x4503d70

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
               (UnityEngine_GameObject_o *source,System_String_o *id,System_String_o *font,MethodInfo *method)

{
  bool_conflict *effect;
  int iVar1;
  TMPro_TMP_Text_o *label;
  undefined8 uVar2;
  int32_t effect_00;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  bool_conflict bVar9;
  uint uVar10;
  uint uVar11;
  UnityEngine_Transform_o *__this;
  TMPro_TMP_InputField_o *pTVar12;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *pGVar13;
  TMPro_TMP_FontAsset_o *font_00;
  long *plVar14;
  SimpleJSONFixed_JSONNode_o *a;
  UnityEngine_GameObject_o *pUVar15;
  System_String_o *pSVar16;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  System_Object_array *pSVar17;
  UnityEngine_Object_o *pUVar18;
  TMPro_TMP_InputField_o *a_00;
  System_String_o *pSVar19;
  long lVar20;
  undefined4 extraout_EDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar21;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_01;
  System_String_o **ppSVar22;
  ulong uVar23;
  byte bVar24;
  byte bVar25;
  PatreonEffects_NameEffectLabel_o *__this_01;
  PatreonEffects_NameEffectLabel_o *pPVar26;
  PatreonEffects_NameEffectLabel_o *pPVar27;
  PatreonEffects_NameEffectLabel_o *__this_02;
  PatreonEffects_NameEffectLabel_o *in_R8;
  PatreonEffects_NameEffectLabel_o *pPVar28;
  System_String_o *in_R9;
  float value;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  UnityEngine_Color_o UVar32;
  UnityEngine_Color_o a_01;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o b;
  UnityEngine_Color_o c;
  int32_t iStack_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_58;
  UnityEngine_GameObject_o *pUStack_50;
  
  uVar11 = (uint)method;
  if (g_data_057aed92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed92 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar12 = (TMPro_TMP_InputField_o *)0x0;
  __this_01 = (PatreonEffects_NameEffectLabel_o *)0x0;
  pPVar27 = (PatreonEffects_NameEffectLabel_o *)source;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_04503df4:
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aed9a == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aed9a = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    a_00 = pTVar12;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    if ((pTVar12 != (TMPro_TMP_InputField_o *)0x0) &&
       (pSVar17 = UnityEngine_Component__GetComponentsInChildren_object_
                            ((UnityEngine_Component_o *)pTVar12,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField), a_00 = pTVar12,
       pSVar17 != (System_Object_array *)0x0)) {
      if ((int)pSVar17->max_length < 1) {
        return;
      }
      uVar23 = 0;
      if ((pSVar17->max_length & 0xffffffff) != 0) {
        do {
          pTVar12 = (TMPro_TMP_InputField_o *)pSVar17->m_Items[uVar23];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          a_00 = pTVar12;
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            if ((pTVar12 == (TMPro_TMP_InputField_o *)0x0) ||
               (a_00 = pTVar12,
               pUVar18 = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pTVar12,(MethodInfo *)0x0),
               pUVar18 == (UnityEngine_Object_o *)0x0)) goto label_045116c8;
            a_00 = (TMPro_TMP_InputField_o *)UnityEngine_Object__get_name(pUVar18,(MethodInfo *)0x0);
            bVar9 = System_String__op_Equality((System_String_o *)a_00,id,(MethodInfo *)0x0);
            if ((char)bVar9 != '\0') {
              if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              PatreonEffects_NameFontCatalog__Apply_422f820(pTVar12,font,(MethodInfo *)0x0);
              a_00 = pTVar12;
            }
          }
          uVar23 = uVar23 + 1;
          uVar11 = (uint)pSVar17->max_length;
          if ((long)(int)uVar11 <= (long)uVar23) {
            return;
          }
        } while (uVar23 < uVar11);
      }
      il2cpp_runtime_helper_022b2ca0();
    }
label_045116c8:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aed93 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      g_data_057aed93 = '\x01';
    }
    if (a_00 == (TMPro_TMP_InputField_o *)0x0) {
      a_00 = (TMPro_TMP_InputField_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar19 = MiscExtensions__StripRichText((System_String_o *)a_00,(MethodInfo *)0x0);
    MiscExtensions__StripHex(pSVar19,(MethodInfo *)0x0);
    return;
  }
  if (source != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = (PatreonEffects_NameEffectLabel_o *)0x0;
    pPVar27 = (PatreonEffects_NameEffectLabel_o *)source;
    __this = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      pTVar12 = (TMPro_TMP_InputField_o *)UnityEngine_Transform__get_root(__this,(MethodInfo *)0x0);
      goto label_04503df4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_58 = 0;
  auStack_c0._0_4_ = uVar11;
  auStack_b0._0_4_ = extraout_EDX;
  pPVar26 = __this_01;
  pPVar28 = in_R8;
  pSVar19 = in_R9;
  pUStack_50 = source;
  if (g_data_057aed23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"type");
    il2cpp_runtime_helper_023445d0(&"enabled");
    g_data_057aed23 = '\x01';
    if (__this_01 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_04503eda;
label_04503e68:
    iStack_c4 = 0;
    pGVar13 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                        ((System_String_o *)__this_01,(MethodInfo *)pPVar26);
  }
  else {
    if (__this_01 != (PatreonEffects_NameEffectLabel_o *)0x0) goto label_04503e68;
label_04503eda:
    iStack_c4 = 0;
    __this_01 = (PatreonEffects_NameEffectLabel_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pGVar13 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Parse
                        ((System_String_o *)__this_01,(MethodInfo *)pPVar26);
  }
  if (pPVar27 != (PatreonEffects_NameEffectLabel_o *)0x0) {
    pPVar26 = (PatreonEffects_NameEffectLabel_o *)0x0;
    __this_01 = pPVar27;
    pUVar15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar27,(MethodInfo *)0x0);
    if (pGVar13 != (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0) {
      __this_01 = (PatreonEffects_NameEffectLabel_o *)(pGVar13->fields).Text;
      pPVar26 = (PatreonEffects_NameEffectLabel_o *)0x0;
      bVar9 = System_String__IsNullOrEmpty((System_String_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar15,(uint)(byte)((byte)bVar9 ^ 1),(MethodInfo *)0x0);
        PatreonEffects_NameEffectLabel__ClearNameEffect(pPVar27,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        cVar8 = '\0';
        uVar10 = 0;
        font_00 = PatreonEffects_NameFontCatalog__Load(in_R9,(MethodInfo *)0x0);
        PatreonEffects_NameEffectLabel__SetFont(pPVar27,font_00,(MethodInfo *)0x0);
        uVar29 = g_data_00d19fc0._8_4_;
        uVar30 = g_data_00d19fc0._12_4_;
        pMVar21 = (MethodInfo *)0x0;
        uVar2 = g_data_00d19fc0;
        UVar32.fields.b = (float)(int)uVar2;
        UVar32.fields.a = (float)(int)((ulong)uVar2 >> 0x20);
        UVar32.fields.r = (float)(int)uVar2;
        UVar32.fields.g = (float)(int)((ulong)uVar2 >> 0x20);
        PatreonEffects_NameEffectLabel__set_color(pPVar27,UVar32,(MethodInfo *)0x0);
        bVar9 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          if (auStack_b0[0] == '\0') goto label_045040c4;
          if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) != 0) goto label_0450402d;
label_045042fd:
          pMVar21 = TypeInfo_AottgEditCharacterDialog;
          il2cpp_runtime_helper_02337ed0();
joined_r0x04504032:
          if (auStack_c0[0] == '\0') {
            pSVar19 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType(pMVar21);
            pMVar21 = extraout_RDX_03;
          }
          else {
            pSVar19 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType(pMVar21);
            pMVar21 = extraout_RDX;
          }
          if (uVar10 != 0) {
label_045041a2:
            iStack_c4 = 0;
            bVar9 = PatreonEffects_NameEffectPresets__TryResolve(pSVar19,&iStack_c4,(MethodInfo *)0x0);
            pSVar19 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            pMVar21 = extraout_RDX_02;
            if ((char)bVar9 != '\0') {
              pMVar21 = (MethodInfo *)0x0;
              PatreonEffects_NameEffectLabel__SetText
                        (pPVar27,pSVar19,(pGVar13->fields).Text,pSVar19,(MethodInfo *)0x0);
              effect_00 = iStack_c4;
              bVar24 = auStack_b0[0];
              bVar25 = auStack_c0[0];
              uVar10 = (uint)auStack_b0[0];
              uVar11 = (uint)auStack_c0[0];
              UVar32 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                                 (uVar10,uVar11,(SimpleJSONFixed_JSONNode_o *)in_R8,0,pMVar21);
              auStack_b0._8_4_ = extraout_XMM0_Dc;
              auStack_b0._0_8_ = UVar32.fields._0_8_;
              auStack_b0._12_4_ = extraout_XMM0_Dd;
              auStack_c0._8_4_ = uVar29;
              auStack_c0._0_8_ = UVar32.fields._8_8_;
              auStack_c0._12_4_ = uVar30;
              UVar32 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                                 (uVar10,uVar11,(SimpleJSONFixed_JSONNode_o *)in_R8,1,pMVar21);
              auStack_70._8_4_ = extraout_XMM0_Dc_00;
              auStack_70._0_8_ = UVar32.fields._0_8_;
              auStack_70._12_4_ = extraout_XMM0_Dd_00;
              auStack_80._8_4_ = uVar29;
              auStack_80._0_8_ = UVar32.fields._8_8_;
              auStack_80._12_4_ = uVar30;
              UVar32 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                                 ((uint)bVar24,(uint)bVar25,(SimpleJSONFixed_JSONNode_o *)in_R8,2,pMVar21);
              auStack_90._8_4_ = extraout_XMM0_Dc_01;
              auStack_90._0_8_ = UVar32.fields._0_8_;
              auStack_90._12_4_ = extraout_XMM0_Dd_01;
              auStack_a0._8_4_ = uVar29;
              auStack_a0._0_8_ = UVar32.fields._8_8_;
              auStack_a0._12_4_ = uVar30;
              UVar32 = Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__ColorValue
                                 ((uint)bVar24,(uint)bVar25,(SimpleJSONFixed_JSONNode_o *)in_R8,3,pMVar21);
              auVar7 = auStack_70;
              auVar6 = auStack_80;
              auVar5 = auStack_90;
              auVar4 = auStack_a0;
              auVar3 = auStack_b0;
              auVar31 = auStack_c0;
              a_01.fields.b = (float)auStack_c0._0_4_;
              a_01.fields.a = (float)auStack_c0._4_4_;
              a_01.fields.r = (float)auStack_b0._0_4_;
              a_01.fields.g = (float)auStack_b0._4_4_;
              b.fields.b = (float)auStack_80._0_4_;
              b.fields.a = (float)auStack_80._4_4_;
              b.fields.r = (float)auStack_70._0_4_;
              b.fields.g = (float)auStack_70._4_4_;
              c.fields.b = (float)auStack_a0._0_4_;
              c.fields.a = (float)auStack_a0._4_4_;
              c.fields.r = (float)auStack_90._0_4_;
              c.fields.g = (float)auStack_90._4_4_;
              auStack_c0 = auVar31;
              auStack_b0 = auVar3;
              auStack_a0 = auVar4;
              auStack_90 = auVar5;
              auStack_80 = auVar6;
              auStack_70 = auVar7;
              PatreonEffects_NameEffectLabel__SetNameEffect
                        (pPVar27,effect_00,a_01,b,c,UVar32,(MethodInfo *)0x0);
              return;
            }
            goto label_0450433b;
          }
        }
        else {
          if (auStack_b0[0] != '\0') {
            if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              if (auStack_c0[0] == '\0') goto label_0450429a;
label_04503fc7:
              if (g_data_057aedab == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
                il2cpp_runtime_helper_023445d0(&"profile-character-name-effect");
                g_data_057aedab = '\x01';
              }
              ppSVar22 = (System_String_o **)&"profile-character-name-effect";
              iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
            }
            else {
              if (auStack_c0[0] != '\0') goto label_04503fc7;
label_0450429a:
              if (g_data_057aedac == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
                il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
                g_data_057aedac = '\x01';
              }
              ppSVar22 = &"profile-character-guild-effect";
              iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
            }
            if (iVar1 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar10 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled(*ppSVar22,pMVar21);
            uVar10 = uVar10 & 0xff;
            if (*(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4) == 0) goto label_045042fd;
label_0450402d:
            pMVar21 = TypeInfo_AottgEditCharacterDialog;
            goto joined_r0x04504032;
          }
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          cVar8 = '\0';
          pPVar26 = (PatreonEffects_NameEffectLabel_o *)0x0;
          __this_01 = in_R8;
          bVar9 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)in_R8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            if ((in_R8 == (PatreonEffects_NameEffectLabel_o *)0x0) ||
               (pPVar26 = "enabled", __this_01 = in_R8,
               plVar14 = (long *)(*(((System_String_c *)in_R8->klass)->vtable)._7_CompareTo.methodPtr)
                                           (in_R8,"enabled",
                                            (((System_String_c *)in_R8->klass)->vtable)._7_CompareTo.method),
               plVar14 == (long *)0x0)) goto label_04504380;
            lVar20 = *plVar14;
            cVar8 = (**(code **)(lVar20 + 0x3a8))(plVar14);
            uVar11 = (uint)lVar20;
          }
label_045040c4:
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pPVar26 = (PatreonEffects_NameEffectLabel_o *)0x0;
          __this_01 = in_R8;
          bVar9 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)in_R8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          pMVar21 = extraout_RDX_00;
          if ((char)bVar9 == '\0') {
label_04504187:
            pSVar19 = "None";
            if (cVar8 == '\0') goto label_04504323;
            goto label_045041a2;
          }
          if (in_R8 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_04504380;
          a = (SimpleJSONFixed_JSONNode_o *)
              (*(((System_String_c *)in_R8->klass)->vtable)._7_CompareTo.methodPtr)
                        (in_R8,"type",(((System_String_c *)in_R8->klass)->vtable)._7_CompareTo.method);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar9 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          pMVar21 = extraout_RDX_01;
          if ((char)bVar9 == '\0') goto label_04504187;
          pPVar26 = "type";
          __this_01 = in_R8;
          plVar14 = (long *)(*(((System_String_c *)in_R8->klass)->vtable)._7_CompareTo.methodPtr)
                                      (in_R8,"type",
                                       (((System_String_c *)in_R8->klass)->vtable)._7_CompareTo.method);
          if (plVar14 == (long *)0x0) goto label_04504380;
          auVar31 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
          pMVar21 = auVar31._8_8_;
          pSVar19 = auVar31._0_8_;
          if (cVar8 != '\0') goto label_045041a2;
        }
label_04504323:
        iStack_c4 = 0;
        pSVar19 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_0450433b:
        pSVar16 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__RichText
                            ((pGVar13->fields).Text,
                             (System_Collections_Generic_IList_string__o *)(pGVar13->fields).Colors,pMVar21);
        PatreonEffects_NameEffectLabel__SetText
                  (pPVar27,pSVar19,pSVar16,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
label_04504380:
  auVar31 = il2cpp_runtime_helper_022b2c90();
  pPVar27 = auVar31._8_8_;
  pMVar21 = auVar31._0_8_;
  if (g_data_057aed20 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed20 = '\x01';
  }
  bVar25 = 0;
  bVar9 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset
                    ((System_String_o *)pPVar27,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pUVar18 = *(UnityEngine_Object_o **)&(__this_01->fields)._color.fields.a;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar25 = 0;
    bVar9 = UnityEngine_Object__op_Inequality(pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method_01 = extraout_RDX_04;
    if ((char)bVar9 == '\0') {
label_0450455b:
      bVar25 = 0;
      __this_02 = __this_01;
      Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
                ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_01,0,method_01);
      lVar20 = *(long *)&(__this_01->fields)._fontSize;
      if (lVar20 != 0) {
        color_01.fields.b = 1.0;
        color_01.fields.a = 1.0;
        color_01.fields.r = 1.0;
        color_01.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  (*(TMPro_TMP_Text_o **)(lVar20 + 0x60),
                   (PatreonEffects_NameEffectController_o **)&(__this_01->fields)._richText,color_01,
                   (MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__Apply
                  (*(PatreonEffects_NameEffectLabel_o **)&(__this_01->fields)._fontSize,
                   (System_String_o *)pPVar26,uVar11 & 0xff,0,(SimpleJSONFixed_JSONNode_o *)pPVar28,pSVar19,
                   pMVar21);
        return;
      }
    }
    else {
      __this_02 = *(PatreonEffects_NameEffectLabel_o **)&(__this_01->fields)._color.fields.a;
      if (__this_02 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        bVar25 = 0;
        pUVar15 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar15,0,(MethodInfo *)0x0);
          method_01 = extraout_RDX_05;
          goto label_0450455b;
        }
      }
    }
  }
  else {
    __this_02 = *(PatreonEffects_NameEffectLabel_o **)&(__this_01->fields)._fontSize;
    if (__this_02 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      bVar25 = 0;
      PatreonEffects_NameEffectLabel__ClearNameEffect(__this_02,(MethodInfo *)0x0);
      lVar20 = *(long *)&(__this_01->fields)._fontSize;
      if (lVar20 != 0) {
        effect = &(__this_01->fields)._richText;
        color.fields.b = 1.0;
        color.fields.a = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                  (*(TMPro_TMP_Text_o **)(lVar20 + 0x60),(PatreonEffects_NameEffectController_o **)effect,
                   color,(MethodInfo *)0x0);
        uVar11 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
                           (*(UnityEngine_UI_Image_o **)&(__this_01->fields)._color.fields.a,
                            (System_String_o *)pPVar27,(MethodInfo *)0x0);
        bVar24 = (byte)uVar11;
        bVar25 = bVar24;
        Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime__SetGuildRowSpacing
                  ((Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_o *)__this_01,uVar11 & 0xff,
                   method_00);
        __this_02 = *(PatreonEffects_NameEffectLabel_o **)&(__this_01->fields)._fontSize;
        if (__this_02 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          bVar25 = 0;
          pUVar15 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar15,(uint)(bVar24 ^ 1),(MethodInfo *)0x0);
            if (bVar24 != 0) {
              return;
            }
            pPVar26 = *(PatreonEffects_NameEffectLabel_o **)&(__this_01->fields)._fontSize;
            pSVar19 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            bVar25 = 0;
            __this_02 = pPVar27;
            pSVar16 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label
                                ((System_String_o *)pPVar27,(MethodInfo *)0x0);
            if (pPVar26 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              PatreonEffects_NameEffectLabel__SetText
                        (pPVar26,pSVar19,pSVar16,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                         (MethodInfo *)0x0);
              bVar25 = (byte)pSVar19;
              lVar20 = *(long *)&(__this_01->fields)._fontSize;
              __this_02 = pPVar26;
              if (lVar20 != 0) {
                label = *(TMPro_TMP_Text_o **)(lVar20 + 0x60);
                pSVar19 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label
                                    ((System_String_o *)pPVar27,(MethodInfo *)0x0);
                color_00.fields.b = 1.0;
                color_00.fields.a = 1.0;
                color_00.fields.r = 1.0;
                color_00.fields.g = 1.0;
                Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                          (label,(PatreonEffects_NameEffectController_o **)effect,(System_String_o *)pPVar27,
                           pSVar19,color_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed21 = '\x01';
  }
  pSVar19 = (__this_02->fields)._name;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
  pMVar21 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pSVar19 = (__this_02->fields)._name;
    if (pSVar19 == (System_String_o *)0x0) goto label_04504699;
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pSVar19,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup)
    ;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar21 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    if (bVar25 == 0) {
      value = 5.0;
    }
    else {
      value = 3.5;
    }
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_00,value,(MethodInfo *)0x0);
    return;
  }
label_04504699:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_runtime_helper_023445d0(&"profile-character-guild-effect");
    g_data_057aedac = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgEditCharacterDialog[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",pMVar21);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__EffectEnabled("profile-character-guild-effect",pMVar21);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$VisibleText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__VisibleText (System_String_o* value, const MethodInfo* method);
// 0x45116d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__VisibleText(System_String_o *value,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (g_data_057aed93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057aed93 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = MiscExtensions__StripRichText(value,(MethodInfo *)0x0);
  pSVar2 = MiscExtensions__StripHex(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__Build (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4511760

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool_conflict bVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  uint uVar5;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *in_stack_ffffffffffffff98;
  
  pGVar6 = ui;
  if (g_data_057aed94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-field");
    g_data_057aed94 = '\x01';
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) goto label_0451181d;
label_04511793:
    uVar5 = (uint)pGVar6;
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    }
    else {
label_04511838:
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)(__this->fields)._id,(Il2CppObject *)(__this->fields)._value,
                 MethodInfo_Void_set_Item);
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pSVar4 = System_String__Concat_3ae5ba0((__this->fields)._id,"-field",(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      in_stack_ffffffffffffff98 = (System_String_o *)0x0;
      uVar5 = 0;
      pGVar6 = "Column";
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,5.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pSVar3 = "default";
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (ui,"default",build,pSVar4,layout,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        uVar5 = (uint)pSVar3;
        pGVar6 = ui;
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          *(char *)((long)&(pGVar2->fields).hasIcon + 2) = (char)(__this->fields)._enabled;
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) != 0) goto label_04511793;
label_0451181d:
    uVar5 = (uint)pGVar6;
    il2cpp_runtime_helper_02337ed0();
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_AottgCharacterTextField + 0xb8);
    pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04511838;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed95 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = (System_String_o *)0x0;
  pSVar4 = in_stack_ffffffffffffff98;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)in_stack_ffffffffffffff98,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (in_stack_ffffffffffffff98 == (System_String_o *)0x0) goto label_04511aa1;
    pSVar3 = (System_String_o *)
             UnityEngine_GameObject__GetComponentInParent_object_
                       ((UnityEngine_GameObject_o *)in_stack_ffffffffffffff98,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = pSVar3;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (pSVar3 == (System_String_o *)0x0) {
label_04511aa1:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aed98 == '\0') {
        il2cpp_runtime_helper_023445d0(&".enabled");
        g_data_057aed98 = '\x01';
      }
      System_String__Concat_3ae5ba0(pSVar4,".enabled",(MethodInfo *)0x0);
      return;
    }
    __this_00 = pSVar3[4].monitor;
    if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aed98 == '\0') {
        il2cpp_runtime_helper_023445d0(&".enabled");
        g_data_057aed98 = '\x01';
      }
      pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)pGVar6,".enabled",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIState__GetBool(__this_00,pSVar4,uVar5 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$IsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextField__IsEnabled (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, bool fallback, const MethodInfo* method);
// 0x4511970

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextField__IsEnabled
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
          bool_conflict fallback,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  bool_conflict bVar1;
  System_String_o *x;
  System_String_o *pSVar2;
  
  if (g_data_057aed95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed95 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (System_String_o *)0x0;
  pSVar2 = (System_String_o *)context.fields.GameObject;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto label_04511aa1;
    x = (System_String_o *)
        UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = x;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (x == (System_String_o *)0x0) {
label_04511aa1:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aed98 == '\0') {
        il2cpp_runtime_helper_023445d0(&".enabled");
        g_data_057aed98 = '\x01';
      }
      pSVar2 = System_String__Concat_3ae5ba0(pSVar2,".enabled",(MethodInfo *)0x0);
      return (bool_conflict)pSVar2;
    }
    __this = x[4].monitor;
    if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aed98 == '\0') {
        il2cpp_runtime_helper_023445d0(&".enabled");
        g_data_057aed98 = '\x01';
      }
      pSVar2 = System_String__Concat_3ae5ba0(id,".enabled",(MethodInfo *)0x0);
      bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        (__this,pSVar2,fallback & 0xff,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFromInput
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x4511af0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
               System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar3;
  TMPro_TMP_InputField_o *__this;
  float *pfVar4;
  TMPro_TMP_InputField_o *pTVar5;
  System_String_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  System_Object_array *pSVar8;
  UnityEngine_Object_o *__this_00;
  System_String_o *b;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  uint extraout_EDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *str0;
  TMPro_TMP_InputField_o *text;
  MethodInfo *in_R9;
  ulong uVar10;
  undefined1 local_41;
  Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *local_40;
  System_String_o *local_38;
  
  if (g_data_057aed96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed96 = '\x01';
  }
  pTVar5 = (TMPro_TMP_InputField_o *)context.fields.GameObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (TMPro_TMP_InputField_o *)0x0;
  text = pTVar5;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_04511b97:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (MethodInfo *)0x0;
    text = __this;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pfVar4 = *(float **)(g_data_057b9c00 + 0xb8);
    }
    else {
      if (__this == (TMPro_TMP_InputField_o *)0x0) goto label_04511d33;
      pfVar4 = &(__this->fields).m_SelectionColor.fields.a;
    }
    pSVar6 = *(System_String_o **)pfVar4;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pTVar5 = (TMPro_TMP_InputField_o *)
             Gisketch_Aottg2UI_Game_AottgCharacterTextField__CleanInput(pSVar6,method_01);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    text = __this;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (__this == (TMPro_TMP_InputField_o *)0x0) goto label_04511d33;
      bVar3 = System_String__op_Inequality
                        (*(System_String_o **)&(__this->fields).m_SelectionColor.fields.a,
                         (System_String_o *)pTVar5,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        TMPro_TMP_InputField__SetTextWithoutNotify(__this,(System_String_o *)pTVar5,(MethodInfo *)0x0);
      }
    }
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8)
    ;
    local_40 = (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0;
    local_38 = (System_String_o *)0x0;
    local_41 = 0;
    if (pTVar5 == (TMPro_TMP_InputField_o *)0x0) {
      pTVar5 = (TMPro_TMP_InputField_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    text = pTVar5;
    bVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__TryImport_440c820
                      ((System_String_o *)pTVar5,
                       (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0,&local_40,
                       &local_38,(bool_conflict *)&local_41,in_R9);
    if ((char)bVar3 != '\0') {
      if (local_40 == (Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec_Document_o *)0x0)
      goto label_04511d33;
      text = (TMPro_TMP_InputField_o *)(local_40->fields).Text;
      pTVar5 = (TMPro_TMP_InputField_o *)
               Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__Serialize
                         ((System_String_o *)text,
                          (System_Collections_Generic_IList_string__o *)(local_40->fields).Colors,method_00);
    }
    if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar9,(Il2CppObject *)id,(Il2CppObject *)pTVar5,MethodInfo_Void_set_Item);
      if (changed != (System_Action_GisketchActionContext__o *)0x0) {
        (*(code *)(changed->fields).invoke_impl)((changed->fields).method_code,(changed->fields).method);
      }
      return;
    }
  }
  else if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
    __this = (TMPro_TMP_InputField_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pTVar5,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    goto label_04511b97;
  }
label_04511d33:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057aed97 = '\x01';
    if (text != (TMPro_TMP_InputField_o *)0x0) goto label_04511d52;
label_04511dcd:
    text = (TMPro_TMP_InputField_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    if (text == (TMPro_TMP_InputField_o *)0x0) goto label_04511dcd;
label_04511d52:
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str0 = (System_String_o *)0x0;
  pSVar6 = MiscExtensions__StripRichText((System_String_o *)text,(MethodInfo *)0x0);
  if (pSVar6 != (System_String_o *)0x0) {
    System_String__Replace_3af9030
              (pSVar6,"\n",(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed9b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_GetComponentsInChildren_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"-field");
    g_data_057aed9b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_04511eac:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    if ((pUVar7 != (UnityEngine_Transform_o *)0x0) &&
       (pSVar8 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)pUVar7,1,MethodInfo_Transform_GetComponentsInChildren_Transform),
       pSVar8 != (System_Object_array *)0x0)) {
      if ((int)pSVar8->max_length < 1) {
        return;
      }
      uVar10 = 0;
      if ((pSVar8->max_length & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_Object_o *)pSVar8->m_Items[uVar10];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if ((x == (UnityEngine_Object_o *)0x0) ||
               (__this_00 = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
               __this_00 == (UnityEngine_Object_o *)0x0)) goto label_04511ff2;
            pSVar6 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
            b = System_String__Concat_3ae5ba0(str0,"-field",(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar6,b,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              __this_01 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
              if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_04511ff2;
              UnityEngine_GameObject__SetActive(__this_01,extraout_EDX & 0xff,(MethodInfo *)0x0);
            }
          }
          uVar10 = uVar10 + 1;
          uVar2 = (uint)pSVar8->max_length;
          if ((long)(int)uVar2 <= (long)uVar10) {
            return;
          }
        } while (uVar10 < uVar2);
      }
      goto label_04511ff7;
    }
  }
  else if ((text != (TMPro_TMP_InputField_o *)0x0) &&
          (pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)text,(MethodInfo *)0x0),
          pUVar7 != (UnityEngine_Transform_o *)0x0)) {
    pUVar7 = UnityEngine_Transform__get_root(pUVar7,(MethodInfo *)0x0);
    goto label_04511eac;
  }
label_04511ff2:
  il2cpp_runtime_helper_022b2c90();
label_04511ff7:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aed9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057aed9c = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18)
  ;
  pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(pSVar9,comparer,MethodInfo_Dictionary_2_System_String_System_String);
  **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8) = pSVar9;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterTextField + 0xb8),pSVar9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$CleanInput
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__CleanInput (System_String_o* value, const MethodInfo* method);
// 0x4511d40

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__CleanInput(System_String_o *value,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  undefined4 extraout_var;
  System_Object_array *pSVar6;
  UnityEngine_Object_o *__this;
  System_String_o *b;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  uint extraout_EDX;
  System_String_o *str0;
  ulong uVar7;
  
  if (g_data_057aed97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057aed97 = '\x01';
    if (value != (System_String_o *)0x0) goto label_04511d52;
label_04511dcd:
    value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    if (value == (System_String_o *)0x0) goto label_04511dcd;
label_04511d52:
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str0 = (System_String_o *)0x0;
  pSVar4 = MiscExtensions__StripRichText(value,(MethodInfo *)0x0);
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar4 = System_String__Replace_3af9030
                       (pSVar4,"\n",(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                        (MethodInfo *)0x0);
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed9b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_GetComponentsInChildren_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"-field");
    g_data_057aed9b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_Transform_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_04511eac:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return (System_String_o *)CONCAT44(extraout_var,bVar3);
    }
    if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
       (pSVar6 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)pUVar5,1,MethodInfo_Transform_GetComponentsInChildren_Transform),
       pSVar6 != (System_Object_array *)0x0)) {
      pSVar4 = (System_String_o *)pSVar6->max_length;
      if ((int)pSVar4 < 1) {
        return pSVar4;
      }
      uVar7 = 0;
      if (((ulong)pSVar4 & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_Object_o *)pSVar6->m_Items[uVar7];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if ((x == (UnityEngine_Object_o *)0x0) ||
               (__this = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0)
               , __this == (UnityEngine_Object_o *)0x0)) goto label_04511ff2;
            pSVar4 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            b = System_String__Concat_3ae5ba0(str0,"-field",(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar4,b,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              __this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
              if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_04511ff2;
              UnityEngine_GameObject__SetActive(__this_00,extraout_EDX & 0xff,(MethodInfo *)0x0);
            }
          }
          uVar7 = uVar7 + 1;
          uVar2 = (uint)pSVar6->max_length;
          if ((long)(int)uVar2 <= (long)uVar7) {
            return (System_String_o *)(ulong)uVar2;
          }
        } while (uVar7 < uVar2);
      }
      goto label_04511ff7;
    }
  }
  else if ((value != (System_String_o *)0x0) &&
          (pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value,(MethodInfo *)0x0)
          , pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_root(pUVar5,(MethodInfo *)0x0);
    goto label_04511eac;
  }
label_04511ff2:
  il2cpp_runtime_helper_022b2c90();
label_04511ff7:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aed9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057aed9c = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18)
  ;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_01,comparer,MethodInfo_Dictionary_2_System_String_System_String);
  **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8) = __this_01;
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterTextField + 0xb8),__this_01);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$EnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__EnabledKey (System_String_o* id, const MethodInfo* method);
// 0x4511ab0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__EnabledKey(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057aed98 == '\0') {
    il2cpp_runtime_helper_023445d0(&".enabled");
    g_data_057aed98 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(id,".enabled",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetInputText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x4511310

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  System_Object_array *pSVar3;
  TMPro_TMP_InputField_o *pTVar4;
  UnityEngine_Object_o *pUVar5;
  TMPro_TMP_InputField_o *pTVar6;
  int iVar7;
  System_String_o *id_00;
  ulong uVar8;
  ulong uVar9;
  System_String_o *pSVar10;
  
  if (g_data_057aed99 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed99 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_String_o *)0x0;
  pTVar4 = (TMPro_TMP_InputField_o *)root;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (root != (UnityEngine_Transform_o *)0x0) {
    pSVar10 = (System_String_o *)0x1;
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)root,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    pTVar4 = (TMPro_TMP_InputField_o *)root;
    if (pSVar3 != (System_Object_array *)0x0) {
      iVar7 = (int)pSVar3->max_length;
      uVar9 = pSVar3->max_length & 0xffffffff;
      if (value == (System_String_o *)0x0) {
        if (iVar7 < 1) {
          return;
        }
        uVar8 = 0;
        if (uVar9 != 0) {
          do {
            pTVar6 = (TMPro_TMP_InputField_o *)pSVar3->m_Items[uVar8];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (System_String_o *)0x0;
            pTVar4 = pTVar6;
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (pTVar6 == (TMPro_TMP_InputField_o *)0x0) goto label_04511544;
              pSVar10 = (System_String_o *)0x0;
              pTVar4 = pTVar6;
              pUVar5 = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar6,(MethodInfo *)0x0);
              if (pUVar5 == (UnityEngine_Object_o *)0x0) goto label_04511544;
              pTVar4 = (TMPro_TMP_InputField_o *)UnityEngine_Object__get_name(pUVar5,(MethodInfo *)0x0);
              pSVar10 = id;
              bVar2 = System_String__op_Equality((System_String_o *)pTVar4,id,(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                TMPro_TMP_InputField__SetTextWithoutNotify
                          (pTVar6,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0)
                ;
                pSVar10 = (System_String_o *)0x0;
                TMPro_TMP_InputField__ForceLabelUpdate(pTVar6,(MethodInfo *)0x0);
                pTVar4 = pTVar6;
              }
            }
            uVar8 = uVar8 + 1;
            uVar1 = (uint)pSVar3->max_length;
            if ((long)(int)uVar1 <= (long)uVar8) {
              return;
            }
          } while (uVar8 < uVar1);
        }
      }
      else {
        if (iVar7 < 1) {
          return;
        }
        uVar8 = 0;
        if (uVar9 != 0) {
          do {
            pTVar6 = (TMPro_TMP_InputField_o *)pSVar3->m_Items[uVar8];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = (System_String_o *)0x0;
            pTVar4 = pTVar6;
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (pTVar6 == (TMPro_TMP_InputField_o *)0x0) goto label_04511544;
              pSVar10 = (System_String_o *)0x0;
              pTVar4 = pTVar6;
              pUVar5 = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pTVar6,(MethodInfo *)0x0);
              if (pUVar5 == (UnityEngine_Object_o *)0x0) goto label_04511544;
              pTVar4 = (TMPro_TMP_InputField_o *)UnityEngine_Object__get_name(pUVar5,(MethodInfo *)0x0);
              pSVar10 = id;
              bVar2 = System_String__op_Equality((System_String_o *)pTVar4,id,(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                TMPro_TMP_InputField__SetTextWithoutNotify(pTVar6,value,(MethodInfo *)0x0);
                pSVar10 = (System_String_o *)0x0;
                TMPro_TMP_InputField__ForceLabelUpdate(pTVar6,(MethodInfo *)0x0);
                pTVar4 = pTVar6;
              }
            }
            uVar8 = uVar8 + 1;
            uVar1 = (uint)pSVar3->max_length;
            if ((long)(int)uVar1 <= (long)uVar8) {
              return;
            }
          } while (uVar8 < uVar1);
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
label_04511544:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed9a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed9a = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar6 = pTVar4;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if ((pTVar4 != (TMPro_TMP_InputField_o *)0x0) &&
     (pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pTVar4,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField), pTVar6 = pTVar4,
     pSVar3 != (System_Object_array *)0x0)) {
    if ((int)pSVar3->max_length < 1) {
      return;
    }
    uVar9 = 0;
    if ((pSVar3->max_length & 0xffffffff) != 0) {
      do {
        pTVar4 = (TMPro_TMP_InputField_o *)pSVar3->m_Items[uVar9];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pTVar6 = pTVar4;
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if ((pTVar4 == (TMPro_TMP_InputField_o *)0x0) ||
             (pTVar6 = pTVar4,
             pUVar5 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar4,(MethodInfo *)0x0),
             pUVar5 == (UnityEngine_Object_o *)0x0)) goto label_045116c8;
          pTVar6 = (TMPro_TMP_InputField_o *)UnityEngine_Object__get_name(pUVar5,(MethodInfo *)0x0);
          bVar2 = System_String__op_Equality((System_String_o *)pTVar6,pSVar10,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            PatreonEffects_NameFontCatalog__Apply_422f820(pTVar4,id_00,(MethodInfo *)0x0);
            pTVar6 = pTVar4;
          }
        }
        uVar9 = uVar9 + 1;
        uVar1 = (uint)pSVar3->max_length;
        if ((long)(int)uVar1 <= (long)uVar9) {
          return;
        }
      } while (uVar9 < uVar1);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_045116c8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057aed93 = '\x01';
  }
  if (pTVar6 == (TMPro_TMP_InputField_o *)0x0) {
    pTVar6 = (TMPro_TMP_InputField_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    iVar7 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar7 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar7 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = MiscExtensions__StripRichText((System_String_o *)pTVar6,(MethodInfo *)0x0);
  MiscExtensions__StripHex(pSVar10,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetInputFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputFont (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* font, const MethodInfo* method);
// 0x4511550

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputFont
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *font,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  TMPro_TMP_InputField_o *a;
  System_String_o *text;
  ulong uVar5;
  TMPro_TMP_InputField_o *input;
  
  if (g_data_057aed9a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aed9a = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (TMPro_TMP_InputField_o *)root;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if ((root != (UnityEngine_Transform_o *)0x0) &&
     (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)root,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField), a = (TMPro_TMP_InputField_o *)root,
     pSVar4 != (System_Object_array *)0x0)) {
    if ((int)pSVar4->max_length < 1) {
      return;
    }
    uVar5 = 0;
    if ((pSVar4->max_length & 0xffffffff) != 0) {
      do {
        input = (TMPro_TMP_InputField_o *)pSVar4->m_Items[uVar5];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        a = input;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if ((input == (TMPro_TMP_InputField_o *)0x0) ||
             (a = input,
             __this = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)input,(MethodInfo *)0x0),
             __this == (UnityEngine_Object_o *)0x0)) goto label_045116c8;
          a = (TMPro_TMP_InputField_o *)UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality((System_String_o *)a,id,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            PatreonEffects_NameFontCatalog__Apply_422f820(input,font,(MethodInfo *)0x0);
            a = input;
          }
        }
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar4->max_length;
        if ((long)(int)uVar1 <= (long)uVar5) {
          return;
        }
      } while (uVar5 < uVar1);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_045116c8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aed93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057aed93 = '\x01';
  }
  if (a == (TMPro_TMP_InputField_o *)0x0) {
    a = (TMPro_TMP_InputField_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    iVar2 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  text = MiscExtensions__StripRichText((System_String_o *)a,(MethodInfo *)0x0);
  MiscExtensions__StripHex(text,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFieldVisible
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible (UnityEngine_GameObject_o* source, System_String_o* id, bool visible, const MethodInfo* method);
// 0x4511e10

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible
               (UnityEngine_GameObject_o *source,System_String_o *id,bool_conflict visible,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Object_array *pSVar5;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  System_String_o *b;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  ulong uVar6;
  
  if (g_data_057aed9b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_GetComponentsInChildren_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"-field");
    g_data_057aed9b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_04511eac:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
       (pSVar5 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)pUVar4,1,MethodInfo_Transform_GetComponentsInChildren_Transform),
       pSVar5 != (System_Object_array *)0x0)) {
      if ((int)pSVar5->max_length < 1) {
        return;
      }
      uVar6 = 0;
      if ((pSVar5->max_length & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_Object_o *)pSVar5->m_Items[uVar6];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if ((x == (UnityEngine_Object_o *)0x0) ||
               (__this = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0)
               , __this == (UnityEngine_Object_o *)0x0)) goto label_04511ff2;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            b = System_String__Concat_3ae5ba0(id,"-field",(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              __this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
              if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_04511ff2;
              UnityEngine_GameObject__SetActive(__this_00,visible & 0xff,(MethodInfo *)0x0);
            }
          }
          uVar6 = uVar6 + 1;
          uVar1 = (uint)pSVar5->max_length;
          if ((long)(int)uVar1 <= (long)uVar6) {
            return;
          }
        } while (uVar6 < uVar1);
      }
      goto label_04511ff7;
    }
  }
  else if ((source != (UnityEngine_GameObject_o *)0x0) &&
          (pUVar4 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
          pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    pUVar4 = UnityEngine_Transform__get_root(pUVar4,(MethodInfo *)0x0);
    goto label_04511eac;
  }
label_04511ff2:
  il2cpp_runtime_helper_022b2c90();
label_04511ff7:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aed9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057aed9c = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18)
  ;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_01,comparer,MethodInfo_Dictionary_2_System_String_System_String);
  **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8) = __this_01;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterTextField + 0xb8),__this_01);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___cctor (const MethodInfo* method);
// 0x4512000

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057aed9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057aed9c = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18)
  ;
  __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this,comparer,MethodInfo_Dictionary_2_System_String_System_String);
  **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCharacterTextField + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_0 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x4512140

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_0
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  System_String_o *placeholder;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_Nullable_bool__Fields change;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_Action_GisketchActionContext__o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  System_Nullable_bool__Fields __this_00;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *pGVar6;
  System_Nullable_bool__Fields __this_01;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 uStack_a0;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *local_98;
  
  __this_00 = (System_Nullable_bool__Fields)field;
  pGVar6 = __this;
  if (g_data_057aed9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__15_1);
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"accountInputLabel");
    il2cpp_runtime_helper_023445d0(&"-row");
    pGVar6 = (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *)&"row";
    il2cpp_runtime_helper_023445d0();
    g_data_057aed9d = '\x01';
  }
  if (field != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (field,(__this->fields)._label,"accountInputLabel",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar1 = System_String__Concat_3ae5ba0((__this->fields)._id,"-row",(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,10.0,pGVar2,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (field,"row",build,pSVar1,pGVar3,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
               ,(MethodInfo *)0x0);
    return;
  }
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  local_98 = __this;
  if (g_data_057aed9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__15_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__15_3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"characterTextInput");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/SparkleIcon");
    il2cpp_runtime_helper_023445d0(&"-set-effects");
    il2cpp_runtime_helper_023445d0();
    g_data_057aed9e = '\x01';
  }
  pSVar1 = (pGVar6->fields)._id;
  placeholder = (pGVar6->fields)._placeholder;
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar2,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  change = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  __this_01 = change;
  System_Action_GisketchActionContext____ctor();
  if ((__this_00 != (System_Nullable_bool__Fields)0x0) &&
     (__this_01 = __this_00,
     pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,pSVar1,placeholder,0,"characterTextInput",
                         pGVar3,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (System_Action_GisketchActionContext__o *)change,0.2,0x200,(MethodInfo *)0x0),
     pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar4->fields).value = (pGVar6->fields)._value;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).value);
    uStack_a0 = uStack_a0 & 0xffffffffffff;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)((long)&uStack_a0 + 6),(uint)(byte)(pGVar6->fields)._enabled,
               MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)&(pGVar4->fields).hasIcon + 3) = uStack_a0._6_2_;
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
    __this_01 = (System_Nullable_bool__Fields)(pGVar6->fields)._id;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aed98 == '\0') {
      il2cpp_runtime_helper_023445d0(&".enabled");
      g_data_057aed98 = '\x01';
    }
    pSVar1 = System_String__Concat_3ae5ba0((System_String_o *)__this_01,".enabled",(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar3->fields).alignSelf = pSVar1;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignSelf,pSVar1);
      (pGVar4->fields).contentLayout = pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar3);
      pSVar5 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor();
      pSVar1 = System_String__Concat_3ae5ba0((pGVar6->fields)._id,"-set-effects",(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,0,"Set Effects",pSVar5,pSVar1,
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          "UI/Icons/Profile/SparkleIcon",(MethodInfo *)0x0);
      uStack_a0._0_6_ = (uint6)(uint)uStack_a0;
      __this_01 = (System_Nullable_bool__Fields)((long)&uStack_a0 + 4);
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o)__this_01,(uint)(byte)(pGVar6->fields)._enabled,MethodInfo_Nullable_1_Boolean);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        *(undefined2 *)((long)&(pGVar4->fields).hasIcon + 3) = uStack_a0._4_2_;
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
        __this_01 = (System_Nullable_bool__Fields)(pGVar6->fields)._id;
        if (g_data_057aed98 == '\0') {
          il2cpp_runtime_helper_023445d0(&".enabled");
          g_data_057aed98 = '\x01';
        }
        pSVar1 = System_String__Concat_3ae5ba0((System_String_o *)__this_01,".enabled",(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar3->fields).alignSelf = pSVar1;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).alignSelf,pSVar1);
          (pGVar4->fields).contentLayout = pGVar3;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar3);
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(160.0,(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
          il2cpp_runtime_helper_022b4080(&(pGVar4->fields).search,pGVar3);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  if (g_data_057aed9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    g_data_057aed9f = '\x01';
    method_00 = extraout_RDX_00;
  }
  pSVar1 = *(System_String_o **)((long)__this_01 + 0x10);
  pSVar5 = *(System_Action_GisketchActionContext__o **)((long)__this_01 + 0x40);
  pGVar6 = local_98;
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_01;
  }
  context.fields.GameObject = (UnityEngine_GameObject_o *)unaff_R12;
  context.fields.ElementId = (System_String_o *)pGVar6;
  context.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R13;
  context.fields._24_8_ = field;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput(context,pSVar1,pSVar5,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_1 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x45122f0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_1
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *row
               ,MethodInfo *method)

{
  System_String_o *placeholder;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  ulong in_RAX;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_Nullable_bool__Fields change;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *pSVar4;
  System_Action_GisketchActionContext__o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  undefined8 unaff_RBX;
  System_Nullable_bool__Fields __this_00;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057aed9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__15_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__15_3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"characterTextInput");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/SparkleIcon");
    il2cpp_runtime_helper_023445d0(&"-set-effects");
    il2cpp_runtime_helper_023445d0();
    g_data_057aed9e = '\x01';
  }
  pSVar4 = (__this->fields)._id;
  placeholder = (__this->fields)._placeholder;
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar1,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  change = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  __this_00 = change;
  System_Action_GisketchActionContext____ctor();
  if ((row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (__this_00 = (System_Nullable_bool__Fields)row,
     pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                        (row,pSVar4,placeholder,0,"characterTextInput",pGVar2,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (System_Action_GisketchActionContext__o *)change,0.2,0x200,(MethodInfo *)0x0),
     pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar3->fields).value = (__this->fields)._value;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).value);
    uStack_38 = uStack_38 & 0xffffffffffff;
    System_Nullable_bool____ctor
              ((System_Nullable_bool__o)((long)&uStack_38 + 6),(uint)(byte)(__this->fields)._enabled,
               MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)&(pGVar3->fields).hasIcon + 3) = uStack_38._6_2_;
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    __this_00 = (System_Nullable_bool__Fields)(__this->fields)._id;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057aed98 == '\0') {
      il2cpp_runtime_helper_023445d0(&".enabled");
      g_data_057aed98 = '\x01';
    }
    pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)__this_00,".enabled",(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar2->fields).alignSelf = pSVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).alignSelf,pSVar4);
      (pGVar3->fields).contentLayout = pGVar2;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar2);
      pSVar5 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor();
      pSVar4 = System_String__Concat_3ae5ba0((__this->fields)._id,"-set-effects",(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button_3a5fd20
                         (row,0,"Set Effects",pSVar5,pSVar4,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"UI/Icons/Profile/SparkleIcon",
                          (MethodInfo *)0x0);
      uStack_38._0_6_ = (uint6)(uint)uStack_38;
      __this_00 = (System_Nullable_bool__Fields)((long)&uStack_38 + 4);
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o)__this_00,(uint)(byte)(__this->fields)._enabled,MethodInfo_Nullable_1_Boolean);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        *(undefined2 *)((long)&(pGVar3->fields).hasIcon + 3) = uStack_38._4_2_;
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
        __this_00 = (System_Nullable_bool__Fields)(__this->fields)._id;
        if (g_data_057aed98 == '\0') {
          il2cpp_runtime_helper_023445d0(&".enabled");
          g_data_057aed98 = '\x01';
        }
        pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)__this_00,".enabled",(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar2->fields).alignSelf = pSVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).alignSelf,pSVar4);
          (pGVar3->fields).contentLayout = pGVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar2);
          pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(160.0,(MethodInfo *)0x0);
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar2);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  if (g_data_057aed9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    g_data_057aed9f = '\x01';
    method_00 = extraout_RDX_00;
  }
  pSVar4 = *(System_String_o **)((long)__this_00 + 0x10);
  pSVar5 = *(System_Action_GisketchActionContext__o **)((long)__this_00 + 0x40);
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_01;
  }
  context.fields.GameObject = (UnityEngine_GameObject_o *)unaff_R12;
  context.fields.ElementId = (System_String_o *)unaff_RBX;
  context.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R13;
  context.fields._24_8_ = unaff_R14;
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput(context,pSVar4,pSVar5,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_2 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4512790

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_2
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *id;
  System_Action_GisketchActionContext__o *changed;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (g_data_057aed9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    g_data_057aed9f = '\x01';
    in_RDX = extraout_RDX;
  }
  id = (__this->fields)._id;
  changed = (__this->fields)._changed;
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput(context,id,changed,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_3 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4512820

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_3
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *id;
  System_String_o *label;
  System_String_o *effectPrefix;
  bool_conflict bVar1;
  uint uVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *in_R8;
  
  if (g_data_057aeda0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCharacterTextField);
    g_data_057aeda0 = '\x01';
    in_RDX = extraout_RDX;
  }
  id = (__this->fields)._id;
  label = (__this->fields)._label;
  effectPrefix = (__this->fields)._effectPrefix;
  bVar1 = (__this->fields)._enabled;
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  uVar2 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__IsEnabled(context,id,(uint)(byte)bVar1,in_RDX);
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open
            (context,id,label,effectPrefix,uVar2 & 0xff,in_R8);
  return;
}


