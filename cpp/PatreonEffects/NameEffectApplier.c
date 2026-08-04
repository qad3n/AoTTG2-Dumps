// Type: PatreonEffects.NameEffectApplier
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/PatreonEffects/NameEffectApplier.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.NameEffectApplier$$Awake
// il2cpp: void PatreonEffects_NameEffectApplier__Awake (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x4327880

void PatreonEffects_NameEffectApplier__Awake(PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  
  if (g_data_057ae02d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    g_data_057ae02d = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Text_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Text_GetComponent_Text);
  (__this->fields)._legacyText = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._legacyText,pUVar1);
  return;
}


// PatreonEffects.NameEffectApplier$$ApplyForPlayer
// il2cpp: void PatreonEffects_NameEffectApplier__ApplyForPlayer (PatreonEffects_NameEffectApplier_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43278d0

void PatreonEffects_NameEffectApplier__ApplyForPlayer
               (PatreonEffects_NameEffectApplier_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method
               )

{
  TMPro_TextMeshProUGUI_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  PatreonEffects_ResolvedNameEffect_o effect;
  bool_conflict bVar1;
  bool_conflict bVar2;
  TMPro_TMP_FontAsset_o *value;
  TMPro_TMP_FontAsset_o *pTVar3;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  char cVar4;
  Photon_Realtime_Player_o *player_00;
  undefined1 uStackY_d3;
  undefined1 uStackY_d2;
  undefined1 uStackY_d1;
  PatreonEffects_NameEffectApplier_o *pPStackY_d0;
  PatreonEffects_ResolvedNameEffect_Fields local_78;
  
  pTVar3 = (TMPro_TMP_FontAsset_o *)player;
  if (g_data_057ae02e == '\0') {
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x43278fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327908;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327914;
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057ae02e = '\x01';
  }
  local_78.ColorC.fields.b = 0.0;
  local_78.ColorC.fields.a = 0.0;
  local_78.ColorD.fields.r = 0.0;
  local_78.ColorD.fields.g = 0.0;
  local_78.ColorB.fields.b = 0.0;
  local_78.ColorB.fields.a = 0.0;
  local_78.ColorC.fields.r = 0.0;
  local_78.ColorC.fields.g = 0.0;
  local_78.ColorA.fields.b = 0.0;
  local_78.ColorA.fields.a = 0.0;
  local_78.ColorB.fields.r = 0.0;
  local_78.ColorB.fields.g = 0.0;
  local_78.Enabled = 0;
  local_78.Type = 0;
  local_78.ColorA.fields.r = 0.0;
  local_78.ColorA.fields.g = 0.0;
  local_78.ColorD.fields.b = 0.0;
  local_78.ColorD.fields.a = 0.0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
label_04327aa9:
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327ab1;
    PatreonEffects_NameEffectApplier__ClearEffect(__this,(MethodInfo *)pTVar3);
    return;
  }
  pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327952;
  bVar1 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)pTVar3);
  if ((char)bVar1 == '\0') goto label_04327aa9;
  pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327967;
  bVar1 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                    (player,(PatreonEffects_ResolvedNameEffect_o *)&local_78,method_00);
  method_01 = extraout_RDX;
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327983;
    il2cpp_runtime_helper_02337ed0();
    method_01 = extraout_RDX_00;
  }
  pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x432798d;
  value = PatreonEffects_NameFontCatalog__FontForPlayer(player,0,method_01);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x43279a9;
    il2cpp_runtime_helper_02337ed0();
  }
  cVar4 = '\0';
  pTVar3 = (TMPro_TMP_FontAsset_o *)0x0;
  pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x43279b7;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x43279cd;
      il2cpp_runtime_helper_02337ed0();
    }
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x43279dc;
    pTVar3 = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)pTVar3);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x43279f1;
      il2cpp_runtime_helper_02337ed0();
    }
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x43279fe;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)pTVar3,(MethodInfo *)0x0);
    cVar4 = (char)bVar2;
  }
  if (cVar4 == '\0' && (char)bVar1 == '\0') goto label_04327aa9;
  pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327a11;
  PatreonEffects_NameEffectApplier__EnsureOverlay(__this,(MethodInfo *)pTVar3);
  pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327a19;
  PatreonEffects_NameEffectApplier__SyncLegacyTextStyle(__this,(MethodInfo *)pTVar3);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327a2b;
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar3 = (TMPro_TMP_FontAsset_o *)0x0;
  pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327a37;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this_00 = (__this->fields)._tmpText;
    if (__this_00 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_04327af8;
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327a52;
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)__this_00,value,(MethodInfo *)0x0);
    pTVar3 = value;
  }
  pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327a5a;
  PatreonEffects_NameEffectApplier__SyncText(__this,(MethodInfo *)pTVar3);
  if ((char)bVar1 == '\0') {
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327acb;
    PatreonEffects_NameEffectApplier__ClearController(__this,(MethodInfo *)pTVar3);
    __this_01 = (__this->fields)._tmpOverlay;
  }
  else {
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327a9e;
    effect.fields.ColorA.fields.r = local_78.ColorA.fields.r;
    effect.fields.ColorA.fields.g = local_78.ColorA.fields.g;
    effect.fields.Enabled = local_78.Enabled;
    effect.fields.Type = local_78.Type;
    effect.fields.ColorA.fields.b = local_78.ColorA.fields.b;
    effect.fields.ColorA.fields.a = local_78.ColorA.fields.a;
    effect.fields.ColorB.fields.r = local_78.ColorB.fields.r;
    effect.fields.ColorB.fields.g = local_78.ColorB.fields.g;
    effect.fields.ColorB.fields.b = local_78.ColorB.fields.b;
    effect.fields.ColorB.fields.a = local_78.ColorB.fields.a;
    effect.fields.ColorC.fields.r = local_78.ColorC.fields.r;
    effect.fields.ColorC.fields.g = local_78.ColorC.fields.g;
    effect.fields.ColorC.fields.b = local_78.ColorC.fields.b;
    effect.fields.ColorC.fields.a = local_78.ColorC.fields.a;
    effect.fields.ColorD.fields.r = local_78.ColorD.fields.r;
    effect.fields.ColorD.fields.g = local_78.ColorD.fields.g;
    effect.fields.ColorD.fields.b = local_78.ColorD.fields.b;
    effect.fields.ColorD.fields.a = local_78.ColorD.fields.a;
    PatreonEffects_NameEffectApplier__ApplyEffect(__this,effect,(MethodInfo *)pTVar3);
    __this_01 = (__this->fields)._tmpOverlay;
  }
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pTVar3 = (TMPro_TMP_FontAsset_o *)0x1;
    pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327ae0;
    UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._legacyText;
    if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
      pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327af2;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_02,0,(MethodInfo *)0x0);
      *(undefined1 *)&(__this->fields)._styleActive = 1;
      return;
    }
  }
label_04327af8:
  player_00 = (Photon_Realtime_Player_o *)0x0;
  pPStackY_d0 = (PatreonEffects_NameEffectApplier_o *)0x4327afd;
  il2cpp_runtime_helper_022b2c90();
  if (player_00 == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  pPStackY_d0 = __this;
  if ((char)(player_00->fields).IsLocal != '\0') {
    if (g_data_057ae079 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae079 = '\x01';
    }
    uStackY_d1 = 0;
    uStackY_d2 = 0;
    uStackY_d3 = 0;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
                ((bool_conflict *)&uStackY_d1,(bool_conflict *)&uStackY_d2,(bool_conflict *)&uStackY_d3,in_RCX
                );
    }
    return;
  }
  PatreonEffects_PatreonHelper__RemotePlayerHasNameEffectAccess(player_00,(MethodInfo *)pTVar3);
  return;
}


// PatreonEffects.NameEffectApplier$$SyncText
// il2cpp: void PatreonEffects_NameEffectApplier__SyncText (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x43286f0

void PatreonEffects_NameEffectApplier__SyncText(PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  TMPro_TextMeshProUGUI_c *pTVar3;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *__this_01;
  long *plVar5;
  UnityEngine_Canvas_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_RectTransform_c *pUVar8;
  code *vtableDispatch;
  bool_conflict bVar9;
  undefined8 uVar10;
  MethodInfo *pMVar11;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  UnityEngine_UI_Text_o *pUVar12;
  bool_conflict *pbVar13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  uint type;
  
  if (g_data_057ae02f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae02f = '\x01';
  }
  pTVar2 = (__this->fields)._tmpText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pUVar12 = (__this->fields)._legacyText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pUVar12 = (__this->fields)._legacyText;
  if (pUVar12 != (UnityEngine_UI_Text_o *)0x0) {
    pTVar2 = (__this->fields)._tmpText;
    uVar10 = (*(pUVar12->klass->vtable)._74_get_text.methodPtr)();
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pTVar3 = pTVar2->klass;
      UNRECOVERED_JUMPTABLE_00 = (pTVar3->vtable)._66_set_text.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pTVar2,uVar10,(pTVar3->vtable)._66_set_text.method,pTVar3,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae032 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae032 = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&(pUVar12->fields).m_SkipLayoutUpdate;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pbVar1 = &(pUVar12->fields).m_SkipLayoutUpdate;
  pMVar11 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_04328892:
    type = (uint)((ulong)unaff_R14 >> 0x20);
    pbVar13 = (bool_conflict *)(ulong)type;
    settings = PatreonEffects_NameEffectPresets__GetPreset(type,pMVar11);
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (settings->fields).gradientA.fields.r = (float)(int)unaff_R15;
      (settings->fields).gradientA.fields.g = (float)(int)((ulong)unaff_R15 >> 0x20);
      (settings->fields).gradientA.fields.b = (float)(int)unaff_retaddr;
      (settings->fields).gradientA.fields.a = (float)(int)((ulong)unaff_retaddr >> 0x20);
      (settings->fields).gradientB.fields.r = (float)uStack0000000000000008;
      (settings->fields).gradientB.fields.g = (float)uStack000000000000000c;
      (settings->fields).gradientB.fields.b = (float)in_stack_00000010;
      (settings->fields).gradientB.fields.a = (float)in_stack_00000014;
      (settings->fields).gradientC.fields.r = (float)in_stack_00000018;
      (settings->fields).gradientC.fields.g = (float)in_stack_0000001c;
      (settings->fields).gradientC.fields.b = (float)in_stack_00000020;
      (settings->fields).gradientC.fields.a = (float)in_stack_00000024;
      (settings->fields).gradientD.fields.r = (float)in_stack_00000028;
      (settings->fields).gradientD.fields.g = (float)in_stack_0000002c;
      (settings->fields).gradientD.fields.b = (float)uStack0000000000000030;
      (settings->fields).gradientD.fields.a = (float)uStack0000000000000034;
      plVar5 = *(long **)&(pUVar12->fields).m_Color.fields.b;
      pbVar13 = (bool_conflict *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x2a8))(0x3f800000,0x3f800000);
        pbVar13 = (bool_conflict *)0x0;
        if (*(PatreonEffects_NameEffectController_o **)pbVar1 != (PatreonEffects_NameEffectController_o *)0x0)
        {
          PatreonEffects_NameEffectController__Apply
                    (*(PatreonEffects_NameEffectController_o **)pbVar1,settings,method_00);
          return;
        }
      }
    }
  }
  else {
    __this_00 = *(UnityEngine_GameObject_o **)&(pUVar12->fields).m_Color.fields;
    pbVar13 = (bool_conflict *)0x0;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pMVar11 = (MethodInfo *)UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectController);
      *(MethodInfo **)pbVar1 = pMVar11;
      pbVar13 = pbVar1;
      il2cpp_runtime_helper_022b4080();
      __this_01 = *(PatreonEffects_NameEffectController_o **)pbVar1;
      if (__this_01 != (PatreonEffects_NameEffectController_o *)0x0) {
        bVar9 = PatreonEffects_NameEffectController__FindText(__this_01,pMVar11);
        if ((char)bVar9 != '\0') {
          *(undefined1 *)&(__this_01->fields).outlineActive = 0;
          bVar9 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this_01,pMVar11);
          if ((char)bVar9 != '\0') {
            (__this_01->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
            pMVar11 = (MethodInfo *)0x0;
            il2cpp_runtime_helper_022b4080(&(__this_01->fields).runtimeMat);
            *(undefined1 *)&(__this_01->fields).initialized = 0;
          }
        }
        goto label_04328892;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae033 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae033 = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)(pbVar13 + 0xe);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar11 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pbVar1 = pbVar13 + 0xe;
    if (*(PatreonEffects_NameEffectController_o **)pbVar1 == (PatreonEffects_NameEffectController_o *)0x0)
    goto label_04328b54;
    PatreonEffects_NameEffectController__Clear(*(PatreonEffects_NameEffectController_o **)pbVar1,pMVar11);
    pUVar4 = *(UnityEngine_Object_o **)pbVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
    *(undefined8 *)pbVar1 = 0;
    il2cpp_runtime_helper_022b4080(pbVar1);
  }
  pUVar6 = *(UnityEngine_Canvas_o **)(pbVar13 + 0xc);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pUVar7 = *(UnityEngine_RectTransform_o **)(pbVar13 + 8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pUVar7 = *(UnityEngine_RectTransform_o **)(pbVar13 + 8);
      if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar6 = *(UnityEngine_Canvas_o **)(pbVar13 + 0xc);
        pUVar8 = pUVar7->klass;
        uVar10._0_4_ = pUVar8[1]._2.token;
        uVar10._4_2_ = pUVar8[1]._2.method_count;
        uVar10._6_2_ = pUVar8[1]._2.property_count;
        (**(code **)&pUVar8[1]._2.thread_static_fields_offset)(pUVar7,uVar10);
        if (pUVar6 != (UnityEngine_Canvas_o *)0x0) {
          vtableDispatch = *(code **)&pUVar6->klass[1]._2.naturalAligment;
          (*vtableDispatch)
                    (pUVar6,pUVar6->klass[1].vtable._0_Equals.methodPtr,extraout_RDX,vtableDispatch);
          return;
        }
      }
label_04328b54:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectApplier$$ClearEffect
// il2cpp: void PatreonEffects_NameEffectApplier__ClearEffect (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x4327bb0

void PatreonEffects_NameEffectApplier__ClearEffect
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  undefined8 *puVar2;
  int iVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  Settings_BoolSetting_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_ColorSetting_o *pSVar8;
  Utility_Color255_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  TMPro_TMP_Text_o *__this_02;
  long *plVar9;
  PatreonEffects_NameEffectController_o *__this_03;
  code *vtableDispatch;
  UnityEngine_Vector2_o UVar10;
  char cVar11;
  bool_conflict bVar12;
  int32_t iVar13;
  uint uVar14;
  Settings_ProfileSettings_o *pSVar15;
  MethodInfo *pMVar16;
  System_String_o *pSVar17;
  TMPro_TMP_FontAsset_o *pTVar18;
  undefined8 uVar19;
  System_Type_array *components;
  System_Type_o *pSVar20;
  long lVar21;
  System_RuntimeTypeHandle_o SVar22;
  UnityEngine_Transform_o *pUVar23;
  UnityEngine_RectTransform_o *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  TMPro_TextMeshProUGUI_o *pTVar24;
  undefined8 uVar25;
  MethodInfo *pMVar26;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 extraout_RDX;
  UnityEngine_UI_Text_o *unaff_RBX;
  MethodInfo *pMVar27;
  TMPro_TMP_FontAsset_o *player;
  PatreonEffects_NameEffectApplier_o *__this_06;
  UnityEngine_UI_Text_o *pUVar28;
  UnityEngine_Material_o *pUVar29;
  void **ppvVar30;
  long *plVar31;
  byte bVar32;
  ulong unaff_R13;
  TMPro_TMP_Text_o *__this_07;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o value;
  UnityEngine_Color_o UVar33;
  uint uStack_17c;
  Il2CppObject *pIStack_128;
  TMPro_TMP_FontAsset_o *pTStack_120;
  System_String_o *pSStack_118;
  ulong uStack_110;
  long *plStack_108;
  MethodInfo *pMStack_100;
  Settings_ProfileSettings_o *pSStack_f8;
  TMPro_TMP_FontAsset_o *pTStack_f0;
  int32_t iStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  UnityEngine_UI_Text_o *pUStack_50;
  long *plStack_48;
  
  if (g_data_057ae030 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae030 = '\x01';
  }
  PatreonEffects_NameEffectApplier__ClearController(__this,method);
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
  plVar31 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar16 = (MethodInfo *)0x0;
  bVar12 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
label_04327c1e:
    unaff_RBX = (__this->fields)._legacyText;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar16 = (MethodInfo *)0x0;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
label_04327c59:
      *(undefined1 *)&(__this->fields)._styleActive = 0;
      return;
    }
    pUVar28 = (__this->fields)._legacyText;
    if (pUVar28 != (UnityEngine_UI_Text_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar28,1,(MethodInfo *)0x0);
      goto label_04327c59;
    }
  }
  else {
    pUVar5 = (__this->fields)._tmpOverlay;
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      goto label_04327c1e;
    }
  }
  pTVar18 = (TMPro_TMP_FontAsset_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  plStack_48 = &TypeInfo_Object;
  pMVar27 = pMVar16;
  pUStack_50 = unaff_RBX;
  if (g_data_057ae059 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae059 = '\x01';
  }
  player = pTVar18;
  pSVar15 = PatreonEffects_NameEffectHelpers__GetProfile((Photon_Realtime_Player_o *)pTVar18,pMVar27);
  if (pSVar15 == (Settings_ProfileSettings_o *)0x0) {
    bVar32 = 0;
    fStack_60 = 1.0;
    fStack_5c = 1.0;
    uStack_58 = 0;
    uStack_54 = 0;
    auStack_d0 = ZEXT816(0x3f8000003f800000);
    auStack_90 = ZEXT816(0x3f8000003f800000);
    auStack_80 = ZEXT816(0x3f8000003f800000);
    plVar31 = (long *)0x0;
    auStack_a0 = ZEXT816(0x3f8000003f800000);
    auStack_b0 = ZEXT816(0x3f8000003f800000);
    auStack_c0 = ZEXT816(0x3f8000003f800000);
    fStack_70 = fStack_60;
    fStack_6c = fStack_5c;
    uStack_68 = uStack_58;
    uStack_64 = uStack_54;
label_04327dd8:
    iStack_d4 = 0;
    pMVar16->parameters = (Il2CppType **)0x0;
    (pMVar16->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
    pMVar16->klass = (Il2CppClass *)0x0;
    pMVar16->return_type = (Il2CppType *)0x0;
    pMVar16->invoker_method = (InvokerMethod)0x0;
    pMVar16->name = (char *)0x0;
    pMVar16->methodPointer = (Il2CppMethodPointer)0x0;
    pMVar16->virtualMethodPointer = (Il2CppMethodPointer)0x0;
    (pMVar16->field8_0x40).genericMethod = (void *)0x0;
    if (((pTVar18 != (TMPro_TMP_FontAsset_o *)0x0) && (pSVar15 != (Settings_ProfileSettings_o *)0x0)) &&
       ((bVar12 = PatreonEffects_PatreonHelper__HasNameEffectAccess
                            ((Photon_Realtime_Player_o *)pTVar18,pMVar27), bVar32 != 0 &&
        (((char)bVar12 != '\0' &&
         (bVar12 = PatreonEffects_NameEffectPresets__TryResolve
                             ((System_String_o *)plVar31,&iStack_d4,method_00), (char)bVar12 != '\0')))))) {
      *(undefined1 *)&pMVar16->methodPointer = 1;
      *(int32_t *)((long)&pMVar16->methodPointer + 4) = iStack_d4;
      *(undefined4 *)&pMVar16->virtualMethodPointer = auStack_80._0_4_;
      *(undefined4 *)((long)&pMVar16->virtualMethodPointer + 4) = auStack_80._4_4_;
      *(int *)&pMVar16->invoker_method = auStack_90._0_4_;
      *(int *)((long)&pMVar16->invoker_method + 4) = auStack_90._4_4_;
      *(undefined4 *)&pMVar16->name = auStack_a0._0_4_;
      *(undefined4 *)((long)&pMVar16->name + 4) = auStack_a0._4_4_;
      *(int *)&pMVar16->klass = auStack_b0._0_4_;
      *(int *)((long)&pMVar16->klass + 4) = auStack_b0._4_4_;
      *(undefined4 *)&pMVar16->return_type = auStack_d0._0_4_;
      *(undefined4 *)((long)&pMVar16->return_type + 4) = auStack_d0._4_4_;
      *(int *)&pMVar16->parameters = auStack_c0._0_4_;
      *(int *)((long)&pMVar16->parameters + 4) = auStack_c0._4_4_;
      *(float *)&pMVar16->field7_0x38 = fStack_60;
      *(float *)((long)&pMVar16->field7_0x38 + 4) = fStack_5c;
      *(float *)&pMVar16->field8_0x40 = fStack_70;
      *(float *)((long)&pMVar16->field8_0x40 + 4) = fStack_6c;
    }
    return;
  }
  pSVar6 = (pSVar15->fields).NameEffectEnabled;
  if ((((pSVar6 != (Settings_BoolSetting_o *)0x0) &&
       (pSVar7 = (pSVar15->fields).NameEffect, pSVar7 != (Settings_StringSetting_o *)0x0)) &&
      (pSVar8 = (pSVar15->fields).NameEffectColorA, pSVar8 != (Settings_ColorSetting_o *)0x0)) &&
     (player = (TMPro_TMP_FontAsset_o *)(pSVar8->fields)._value, player != (TMPro_TMP_FontAsset_o *)0x0)) {
    bVar32 = *(byte *)((long)&(pSVar6->fields).DefaultValue + 1);
    unaff_R13 = (ulong)bVar32;
    plVar31 = (long *)(pSVar7->fields)._value;
    pMVar27 = (MethodInfo *)0x0;
    UVar33 = Utility_Color255__ToColor((Utility_Color255_o *)player,(MethodInfo *)0x0);
    auStack_90._8_4_ = in_XMM1_Dc;
    auStack_90._0_8_ = UVar33.fields._8_8_;
    auStack_90._12_4_ = in_XMM1_Dd;
    pSVar8 = (pSVar15->fields).NameEffectColorB;
    if (pSVar8 != (Settings_ColorSetting_o *)0x0) {
      auStack_80._8_4_ = extraout_XMM0_Dc;
      auStack_80._0_8_ = UVar33.fields._0_8_;
      auStack_80._12_4_ = extraout_XMM0_Dd;
      player = (TMPro_TMP_FontAsset_o *)(pSVar8->fields)._value;
      if (player != (TMPro_TMP_FontAsset_o *)0x0) {
        pMVar27 = (MethodInfo *)0x0;
        UVar33 = Utility_Color255__ToColor((Utility_Color255_o *)player,(MethodInfo *)0x0);
        auStack_b0._8_4_ = in_XMM1_Dc;
        auStack_b0._0_8_ = UVar33.fields._8_8_;
        auStack_b0._12_4_ = in_XMM1_Dd;
        pSVar8 = (pSVar15->fields).NameEffectColorC;
        if (pSVar8 != (Settings_ColorSetting_o *)0x0) {
          auStack_a0._8_4_ = extraout_XMM0_Dc_00;
          auStack_a0._0_8_ = UVar33.fields._0_8_;
          auStack_a0._12_4_ = extraout_XMM0_Dd_00;
          player = (TMPro_TMP_FontAsset_o *)(pSVar8->fields)._value;
          if (player != (TMPro_TMP_FontAsset_o *)0x0) {
            pMVar27 = (MethodInfo *)0x0;
            UVar33 = Utility_Color255__ToColor((Utility_Color255_o *)player,(MethodInfo *)0x0);
            pSVar8 = (pSVar15->fields).NameEffectColorD;
            if (pSVar8 != (Settings_ColorSetting_o *)0x0) {
              auStack_d0._8_4_ = extraout_XMM0_Dc_01;
              auStack_d0._0_8_ = UVar33.fields._0_8_;
              auStack_d0._12_4_ = extraout_XMM0_Dd_01;
              auStack_c0._8_4_ = in_XMM1_Dc;
              auStack_c0._0_8_ = UVar33.fields._8_8_;
              auStack_c0._12_4_ = in_XMM1_Dd;
              __this_00 = (pSVar8->fields)._value;
              player = (TMPro_TMP_FontAsset_o *)0x0;
              if (__this_00 != (Utility_Color255_o *)0x0) {
                pMVar27 = (MethodInfo *)0x0;
                UVar33 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
                fStack_60 = UVar33.fields.r;
                fStack_5c = UVar33.fields.g;
                uStack_58 = extraout_XMM0_Dc_02;
                uStack_54 = extraout_XMM0_Dd_02;
                fStack_70 = UVar33.fields.b;
                fStack_6c = UVar33.fields.a;
                uStack_68 = in_XMM1_Dc;
                uStack_64 = in_XMM1_Dd;
                goto label_04327dd8;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  cVar11 = (char)pMVar27;
  pSStack_f8 = pSVar15;
  pTStack_f0 = pTVar18;
  if (g_data_057ae06c == '\0') {
    pMStack_100 = (MethodInfo *)0x4327ece;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    pMStack_100 = (MethodInfo *)0x4327eda;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pMStack_100 = (MethodInfo *)0x4327ee6;
    il2cpp_runtime_helper_023445d0(&"Normal");
    g_data_057ae06c = '\x01';
  }
  if (player != (TMPro_TMP_FontAsset_o *)0x0) {
    pMStack_100 = (MethodInfo *)0x4327efa;
    bVar12 = PatreonEffects_PatreonHelper__HasNameEffectAccess((Photon_Realtime_Player_o *)player,pMVar27);
    if ((char)bVar12 != '\0') {
      pTVar18 = player;
      if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
        pMStack_100 = (MethodInfo *)0x4327f57;
        il2cpp_runtime_helper_02337ed0();
        pMStack_100 = (MethodInfo *)0x4327f5f;
        pSVar15 = PatreonEffects_NameFontCatalog__Profile((Photon_Realtime_Player_o *)player,pMVar27);
        if (pSVar15 == (Settings_ProfileSettings_o *)0x0) goto label_04327f64;
label_04327f1e:
        if (cVar11 == '\0') {
          pSVar7 = (pSVar15->fields).NameFont;
        }
        else {
          pSVar7 = (pSVar15->fields).GuildFont;
        }
        if (pSVar7 == (Settings_StringSetting_o *)0x0) {
          pMStack_100 = (MethodInfo *)0x4327fab;
          il2cpp_runtime_helper_022b2c90();
          plStack_108 = &TypeInfo_NameFontCatalog;
          pTStack_120 = player;
          pSStack_118 = (System_String_o *)plVar31;
          uStack_110 = unaff_R13;
          pMStack_100 = pMVar16;
          if (g_data_057ae069 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
            il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
            il2cpp_runtime_helper_023445d0(&"Normal");
            il2cpp_runtime_helper_023445d0(&"UI/Fonts/Vegur-Regular-SDF");
            g_data_057ae069 = '\x01';
          }
          pIStack_128 = (Il2CppObject *)0x0;
          if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar16 = (MethodInfo *)
                    PatreonEffects_NameFontCatalog__Normalize((System_String_o *)pTVar18,pMVar27);
          if ((System_Collections_Generic_Dictionary_object__object__o *)
              **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8) !=
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pMVar27 = pMVar16;
            bVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                               ((System_Collections_Generic_Dictionary_object__object__o *)
                                **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8),(Il2CppObject *)pMVar16,&pIStack_128,
                                MethodInfo_Boolean_TryGetValue);
            if ((char)bVar12 != '\0') {
              return;
            }
            if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar17 = PatreonEffects_NameFontCatalog__Path((System_String_o *)pMVar16,pMVar27);
            pTVar18 = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load_object_(pSVar17,MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
            plVar31 = &TypeInfo_Object;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar12 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pTVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if (((char)bVar12 != '\0') &&
               (bVar12 = System_String__op_Inequality
                                   ((System_String_o *)pMVar16,"Normal",(MethodInfo *)0x0),
               (char)bVar12 != '\0')) {
              pTVar18 = (TMPro_TMP_FontAsset_o *)
                        UnityEngine_Resources__Load_object_("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar12 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pTVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar12 == '\0') {
              if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) != 0) goto label_0432813f;
label_0432818a:
              il2cpp_runtime_helper_02337ed0();
              __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8);
            }
            else {
              pTVar18 = TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
              if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) goto label_0432818a;
label_0432813f:
              __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                          **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8);
            }
            if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (__this_01,(Il2CppObject *)pMVar16,(Il2CppObject *)pTVar18,MethodInfo_Void_set_Item);
              return;
            }
          }
          __this_06 = (PatreonEffects_NameEffectApplier_o *)0x0;
          uVar19 = il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae031 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
            il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
            il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
            il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
            il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
            il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
            il2cpp_runtime_helper_023445d0(&"NameEffectOverlay");
            g_data_057ae031 = '\x01';
          }
          pUVar4 = (UnityEngine_Object_o *)(__this_06->fields)._tmpOverlay;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            return;
          }
          components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
          SVar22 = TypeRef_RectTransform;
          if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar20 = System_Type__GetTypeFromHandle(SVar22,(MethodInfo *)0x0);
          pMVar27 = pMVar16;
          if (components == (System_Type_array *)0x0) {
label_04328580:
            il2cpp_runtime_helper_022b2c90();
label_04328585:
            il2cpp_runtime_helper_022b2ca0();
          }
          else {
            SVar22.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar20;
            if ((pSVar20 == (System_Type_o *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pSVar20), lVar21 != 0)) {
              if ((int)components->max_length != 0) {
                components->m_Items[0] = pSVar20;
                il2cpp_runtime_helper_022b4080(components->m_Items);
                SVar22.fields.value =
                     (System_RuntimeTypeHandle_Fields)
                     System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
                if ((SVar22.fields.value != 0) &&
                   (lVar21 = il2cpp_runtime_helper_023051f0(SVar22.fields.value), lVar21 == 0)) goto label_0432858a;
                if (1 < (uint)components->max_length) {
                  components->m_Items[1] = (System_Type_o *)SVar22.fields.value;
                  il2cpp_runtime_helper_022b4080(components->m_Items + 1);
                  SVar22.fields.value =
                       (System_RuntimeTypeHandle_Fields)
                       System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
                  if ((SVar22.fields.value != 0) &&
                     (lVar21 = il2cpp_runtime_helper_023051f0(SVar22.fields.value), lVar21 == 0)) goto label_0432858a;
                  if (2 < (uint)components->max_length) {
                    pMVar27 = (MethodInfo *)&(__this_06->fields)._tmpOverlay;
                    components->m_Items[2] = (System_Type_o *)SVar22.fields.value;
                    il2cpp_runtime_helper_022b4080(components->m_Items + 2,SVar22.fields.value);
                    SVar22.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                    UnityEngine_GameObject___ctor_4dfc440
                              ((UnityEngine_GameObject_o *)SVar22.fields.value,"NameEffectOverlay",components,
                               (MethodInfo *)0x0);
                    *(System_RuntimeTypeHandle_Fields *)pMVar27 = SVar22.fields.value;
                    il2cpp_runtime_helper_022b4080(pMVar27);
                    if (*(UnityEngine_GameObject_o **)pMVar27 != (UnityEngine_GameObject_o *)0x0) {
                      SVar22.fields.value =
                           (System_RuntimeTypeHandle_Fields)
                           UnityEngine_GameObject__get_transform
                                     (*(UnityEngine_GameObject_o **)pMVar27,(MethodInfo *)0x0);
                      pUVar23 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                      if ((pUVar23 != (UnityEngine_Transform_o *)0x0) &&
                         (pUVar23 = UnityEngine_Transform__get_parent(pUVar23,(MethodInfo *)0x0),
                         SVar22.fields.value != 0)) {
                        UnityEngine_Transform__SetParent_4e09e30
                                  ((UnityEngine_Transform_o *)SVar22.fields.value,pUVar23,0,(MethodInfo *)0x0)
                        ;
                        __this_04 = (UnityEngine_RectTransform_o *)
                                    UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)__this_06,MethodInfo_RectTransform_GetComponent_RectTransform);
                        pUVar5 = (__this_06->fields)._tmpOverlay;
                        if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
                           ((__this_05 = (UnityEngine_RectTransform_o *)
                                         UnityEngine_GameObject__GetComponent_object_(pUVar5,MethodInfo_RectTransform_GetComponent_RectTransform),
                            __this_04 != (UnityEngine_RectTransform_o *)0x0 &&
                            (UVar10 = UnityEngine_RectTransform__get_anchorMin(__this_04,(MethodInfo *)0x0),
                            SVar22.fields.value =
                                 (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_05,
                            __this_05 != (UnityEngine_RectTransform_o *)0x0)))) {
                          UnityEngine_RectTransform__set_anchorMin(__this_05,UVar10,(MethodInfo *)0x0);
                          UVar10 = UnityEngine_RectTransform__get_anchorMax(__this_04,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_anchorMax(__this_05,UVar10,(MethodInfo *)0x0);
                          UVar10 = UnityEngine_RectTransform__get_pivot(__this_04,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_pivot(__this_05,UVar10,(MethodInfo *)0x0);
                          UVar10 = UnityEngine_RectTransform__get_anchoredPosition
                                             (__this_04,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_anchoredPosition(__this_05,UVar10,(MethodInfo *)0x0);
                          UVar10 = UnityEngine_RectTransform__get_sizeDelta(__this_04,(MethodInfo *)0x0);
                          UnityEngine_RectTransform__set_sizeDelta(__this_05,UVar10,(MethodInfo *)0x0);
                          value = UnityEngine_Transform__get_localScale
                                            ((UnityEngine_Transform_o *)__this_04,(MethodInfo *)0x0);
                          UnityEngine_Transform__set_localScale
                                    ((UnityEngine_Transform_o *)__this_05,value,(MethodInfo *)0x0);
                          if (*(UnityEngine_GameObject_o **)pMVar27 != (UnityEngine_GameObject_o *)0x0) {
                            pTVar24 = (TMPro_TextMeshProUGUI_o *)
                                      UnityEngine_GameObject__GetComponent_object_
                                                (*(UnityEngine_GameObject_o **)pMVar27,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                            SVar22.fields.value =
                                 (System_RuntimeTypeHandle_Fields)&(__this_06->fields)._tmpText;
                            (__this_06->fields)._tmpText = pTVar24;
                            il2cpp_runtime_helper_022b4080(SVar22.fields.value);
                            pTVar24 = (__this_06->fields)._tmpText;
                            if (pTVar24 != (TMPro_TextMeshProUGUI_o *)0x0) {
                              (*(pTVar24->klass->vtable)._25_set_raycastTarget.methodPtr)
                                        (pTVar24,0,(pTVar24->klass->vtable)._25_set_raycastTarget.method);
                              if (*(TMPro_TextMeshProUGUI_o **)SVar22.fields.value !=
                                  (TMPro_TextMeshProUGUI_o *)0x0) {
                                TMPro_TMP_Text__set_enableWordWrapping
                                          ((TMPro_TMP_Text_o *)
                                           *(TMPro_TextMeshProUGUI_o **)SVar22.fields.value,0,
                                           (MethodInfo *)0x0);
                                if (*(TMPro_TextMeshProUGUI_o **)SVar22.fields.value !=
                                    (TMPro_TextMeshProUGUI_o *)0x0) {
                                  pMVar26 = (MethodInfo *)0x0;
                                  TMPro_TMP_Text__set_overflowMode
                                            ((TMPro_TMP_Text_o *)
                                             *(TMPro_TextMeshProUGUI_o **)SVar22.fields.value,0,
                                             (MethodInfo *)0x0);
                                  PatreonEffects_NameEffectApplier__SyncLegacyTextStyle(__this_06,pMVar26);
                                  pUVar5 = (__this_06->fields)._tmpOverlay;
                                  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    goto label_04328580;
                  }
                }
              }
              goto label_04328585;
            }
          }
label_0432858a:
          lVar21 = il2cpp_runtime_helper_0231b270();
          il2cpp_runtime_helper_022b2b10();
          if (g_data_057ae034 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae034 = '\x01';
          }
          pUVar4 = *(UnityEngine_Object_o **)(lVar21 + 0x30);
          __this_07 = (TMPro_TMP_Text_o *)0x0;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            return;
          }
          pUVar4 = *(UnityEngine_Object_o **)(lVar21 + 0x20);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            return;
          }
          pUVar28 = *(UnityEngine_UI_Text_o **)(lVar21 + 0x20);
          if (pUVar28 != (UnityEngine_UI_Text_o *)0x0) {
            __this_07 = *(TMPro_TMP_Text_o **)(lVar21 + 0x30);
            iVar13 = UnityEngine_UI_Text__get_fontSize(pUVar28,(MethodInfo *)0x0);
            if (__this_07 != (TMPro_TMP_Text_o *)0x0) {
              TMPro_TMP_Text__set_fontSize(__this_07,(float)iVar13,(MethodInfo *)0x0);
              pUVar28 = *(UnityEngine_UI_Text_o **)(lVar21 + 0x20);
              if (pUVar28 != (UnityEngine_UI_Text_o *)0x0) {
                __this_07 = *(TMPro_TMP_Text_o **)(lVar21 + 0x30);
                (*(pUVar28->klass->vtable)._22_get_color.methodPtr)();
                if (__this_07 != (TMPro_TMP_Text_o *)0x0) {
                  (*(__this_07->klass->vtable)._23_set_color.methodPtr)(__this_07);
                  pUVar28 = *(UnityEngine_UI_Text_o **)(lVar21 + 0x20);
                  if (pUVar28 != (UnityEngine_UI_Text_o *)0x0) {
                    __this_07 = *(TMPro_TMP_Text_o **)(lVar21 + 0x30);
                    uVar14 = UnityEngine_UI_Text__get_alignment(pUVar28,(MethodInfo *)0x0);
                    iVar13 = 0x1002;
                    if (uVar14 < 9) {
                      iVar13 = *(int32_t *)(&g_data_00d99884 + (long)(int)uVar14 * 4);
                    }
                    if (__this_07 != (TMPro_TMP_Text_o *)0x0) {
                      TMPro_TMP_Text__set_alignment(__this_07,iVar13,(MethodInfo *)0x0);
                      pUVar28 = *(UnityEngine_UI_Text_o **)(lVar21 + 0x20);
                      if (pUVar28 != (UnityEngine_UI_Text_o *)0x0) {
                        __this_02 = *(TMPro_TMP_Text_o **)(lVar21 + 0x30);
                        uVar14 = UnityEngine_UI_Text__get_supportRichText(pUVar28,(MethodInfo *)0x0);
                        if (__this_02 != (TMPro_TMP_Text_o *)0x0) {
                          TMPro_TMP_Text__set_richText(__this_02,uVar14 & 0xff,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae02f == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae02f = '\x01';
          }
          pUVar4 = *(UnityEngine_Object_o **)&(pUVar28->fields).m_Color.fields.b;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            return;
          }
          pUVar4 = (UnityEngine_Object_o *)(pUVar28->fields).m_Material;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            return;
          }
          pUVar29 = (pUVar28->fields).m_Material;
          if (pUVar29 != (UnityEngine_Material_o *)0x0) {
            plVar9 = *(long **)&(pUVar28->fields).m_Color.fields.b;
            uVar25 = (*(code *)pUVar29->klass[3].vtable._3_ToString.method)();
            if (plVar9 != (long *)0x0) {
              lVar21 = *plVar9;
              (**(code **)(lVar21 + 0x558))
                        (plVar9,uVar25,*(undefined8 *)(lVar21 + 0x560),lVar21,*(code **)(lVar21 + 0x558));
              return;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae032 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae032 = '\x01';
          }
          pUVar4 = pUVar29[2].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ppvVar1 = &pUVar29[2].monitor;
          pMVar26 = (MethodInfo *)0x0;
          bVar12 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
label_04328892:
            uStack_17c = (uint)((ulong)__this_07 >> 0x20);
            ppvVar30 = (void **)(ulong)uStack_17c;
            settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_17c,pMVar26);
            if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
              (settings->fields).gradientA.fields.r = (float)(int)lVar21;
              (settings->fields).gradientA.fields.g = (float)(int)((ulong)lVar21 >> 0x20);
              *(System_RuntimeTypeHandle_Fields *)&(settings->fields).gradientA.fields.b = SVar22.fields.value
              ;
              *(MethodInfo **)&(settings->fields).gradientB.fields = pMVar27;
              *(PatreonEffects_NameEffectApplier_o **)&(settings->fields).gradientB.fields.b = __this_06;
              (settings->fields).gradientC.fields.r = (float)(int)uVar19;
              (settings->fields).gradientC.fields.g = (float)(int)((ulong)uVar19 >> 0x20);
              *(TMPro_TMP_FontAsset_o **)&(settings->fields).gradientC.fields.b = pTVar18;
              *(long **)&(settings->fields).gradientD.fields = plVar31;
              *(MethodInfo **)&(settings->fields).gradientD.fields.b = pMVar16;
              ppvVar30 = (void **)0x0;
              if (pUVar29[2].klass != (UnityEngine_Material_c *)0x0) {
                (**(code **)((long)((pUVar29[2].klass)->_1).image + 0x2a8))(0x3f800000,0x3f800000);
                ppvVar30 = (void **)0x0;
                if (*ppvVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
                  PatreonEffects_NameEffectController__Apply(*ppvVar1,settings,method_01);
                  return;
                }
              }
            }
          }
          else {
            pUVar5 = (UnityEngine_GameObject_o *)pUVar29[1].fields.m_CachedPtr;
            ppvVar30 = (void **)0x0;
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              pMVar26 = (MethodInfo *)UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_NameEffectController_AddComponent_NameEffectController);
              *ppvVar1 = pMVar26;
              ppvVar30 = ppvVar1;
              il2cpp_runtime_helper_022b4080();
              __this_03 = *ppvVar1;
              if (__this_03 != (PatreonEffects_NameEffectController_o *)0x0) {
                bVar12 = PatreonEffects_NameEffectController__FindText(__this_03,pMVar26);
                if ((char)bVar12 != '\0') {
                  *(undefined1 *)&(__this_03->fields).outlineActive = 0;
                  bVar12 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this_03,pMVar26);
                  if ((char)bVar12 != '\0') {
                    (__this_03->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
                    pMVar26 = (MethodInfo *)0x0;
                    il2cpp_runtime_helper_022b4080(&(__this_03->fields).runtimeMat);
                    *(undefined1 *)&(__this_03->fields).initialized = 0;
                  }
                }
                goto label_04328892;
              }
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae033 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae033 = '\x01';
          }
          pUVar4 = ppvVar30[7];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar16 = (MethodInfo *)0x0;
          bVar12 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            puVar2 = ppvVar30 + 7;
            if ((PatreonEffects_NameEffectController_o *)*puVar2 ==
                (PatreonEffects_NameEffectController_o *)0x0) goto label_04328b54;
            PatreonEffects_NameEffectController__Clear
                      ((PatreonEffects_NameEffectController_o *)*puVar2,pMVar16);
            pUVar4 = (UnityEngine_Object_o *)*puVar2;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
            *puVar2 = 0;
            il2cpp_runtime_helper_022b4080(puVar2);
          }
          pUVar4 = ppvVar30[6];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            pUVar4 = ppvVar30[4];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar12 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar12 != '\0') {
              plVar31 = ppvVar30[4];
              if (plVar31 != (long *)0x0) {
                plVar9 = ppvVar30[6];
                (**(code **)(*plVar31 + 0x298))(plVar31,*(undefined8 *)(*plVar31 + 0x2a0));
                if (plVar9 != (long *)0x0) {
                  vtableDispatch = *(code **)(*plVar9 + 0x2a8);
                  (*vtableDispatch)
                            (plVar9,*(undefined8 *)(*plVar9 + 0x2b0),extraout_RDX,vtableDispatch);
                  return;
                }
              }
label_04328b54:
              il2cpp_runtime_helper_022b2c90();
              return;
            }
          }
          return;
        }
        pSVar17 = (pSVar7->fields)._value;
        iVar3 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
      }
      else {
        pMStack_100 = (MethodInfo *)0x4327f19;
        pSVar15 = PatreonEffects_NameFontCatalog__Profile((Photon_Realtime_Player_o *)player,pMVar27);
        if (pSVar15 != (Settings_ProfileSettings_o *)0x0) goto label_04327f1e;
label_04327f64:
        iVar3 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
        pSVar17 = "Normal";
      }
      if (iVar3 == 0) {
        pMStack_100 = (MethodInfo *)0x4327f9d;
        il2cpp_runtime_helper_02337ed0();
      }
      goto label_04327f9d;
    }
  }
  pSVar17 = "Normal";
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    pMStack_100 = (MethodInfo *)0x4327f46;
    il2cpp_runtime_helper_02337ed0();
    pSVar17 = "Normal";
  }
label_04327f9d:
  PatreonEffects_NameFontCatalog__Load(pSVar17,pMVar27);
  return;
}


// PatreonEffects.NameEffectApplier$$get_IsEffectActive
// il2cpp: bool PatreonEffects_NameEffectApplier__get_IsEffectActive (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x4328b60

bool_conflict
PatreonEffects_NameEffectApplier__get_IsEffectActive
          (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._styleActive);
}


// PatreonEffects.NameEffectApplier$$EnsureOverlay
// il2cpp: void PatreonEffects_NameEffectApplier__EnsureOverlay (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x43281b0

void PatreonEffects_NameEffectApplier__EnsureOverlay
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  undefined8 *puVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  TMPro_TMP_Text_o *__this_00;
  long *plVar5;
  PatreonEffects_NameEffectController_o *__this_01;
  long *plVar6;
  code *vtableDispatch;
  UnityEngine_Vector2_o UVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  uint uVar10;
  undefined8 in_RAX;
  System_Type_array *components;
  System_Type_o *pSVar11;
  long lVar12;
  System_RuntimeTypeHandle_o SVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  TMPro_TextMeshProUGUI_o *pTVar15;
  undefined8 uVar16;
  MethodInfo *pMVar17;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  UnityEngine_UI_Text_o *__this_04;
  UnityEngine_Material_o *pUVar18;
  void **ppvVar19;
  undefined8 unaff_R12;
  UnityEngine_GameObject_o **unaff_R14;
  UnityEngine_GameObject_o **ppUVar20;
  TMPro_TMP_Text_o *__this_05;
  UnityEngine_Vector3_o value;
  uint uStack_4c;
  
  if (g_data_057ae031 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"NameEffectOverlay");
    g_data_057ae031 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar13 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_Type__GetTypeFromHandle(SVar13,(MethodInfo *)0x0);
  ppUVar20 = unaff_R14;
  if (components == (System_Type_array *)0x0) {
label_04328580:
    il2cpp_runtime_helper_022b2c90();
label_04328585:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar13.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar11;
    if ((pSVar11 == (System_Type_o *)0x0) || (lVar12 = il2cpp_runtime_helper_023051f0(pSVar11), lVar12 != 0)) {
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar11;
        il2cpp_runtime_helper_022b4080(components->m_Items);
        SVar13.fields.value =
             (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
        if ((SVar13.fields.value != 0) && (lVar12 = il2cpp_runtime_helper_023051f0(SVar13.fields.value), lVar12 == 0))
        goto label_0432858a;
        if (1 < (uint)components->max_length) {
          components->m_Items[1] = (System_Type_o *)SVar13.fields.value;
          il2cpp_runtime_helper_022b4080(components->m_Items + 1);
          SVar13.fields.value =
               (System_RuntimeTypeHandle_Fields)System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0)
          ;
          if ((SVar13.fields.value != 0) && (lVar12 = il2cpp_runtime_helper_023051f0(SVar13.fields.value), lVar12 == 0))
          goto label_0432858a;
          if (2 < (uint)components->max_length) {
            ppUVar20 = &(__this->fields)._tmpOverlay;
            components->m_Items[2] = (System_Type_o *)SVar13.fields.value;
            il2cpp_runtime_helper_022b4080(components->m_Items + 2,SVar13.fields.value);
            SVar13.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor_4dfc440
                      ((UnityEngine_GameObject_o *)SVar13.fields.value,"NameEffectOverlay",components,
                       (MethodInfo *)0x0);
            *ppUVar20 = (UnityEngine_GameObject_o *)SVar13.fields.value;
            il2cpp_runtime_helper_022b4080(ppUVar20);
            if (*ppUVar20 != (UnityEngine_GameObject_o *)0x0) {
              SVar13.fields.value =
                   (System_RuntimeTypeHandle_Fields)
                   UnityEngine_GameObject__get_transform(*ppUVar20,(MethodInfo *)0x0);
              pUVar14 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if ((pUVar14 != (UnityEngine_Transform_o *)0x0) &&
                 (pUVar14 = UnityEngine_Transform__get_parent(pUVar14,(MethodInfo *)0x0),
                 SVar13.fields.value != 0)) {
                UnityEngine_Transform__SetParent_4e09e30
                          ((UnityEngine_Transform_o *)SVar13.fields.value,pUVar14,0,(MethodInfo *)0x0);
                __this_02 = (UnityEngine_RectTransform_o *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
                pUVar4 = (__this->fields)._tmpOverlay;
                if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
                   ((__this_03 = (UnityEngine_RectTransform_o *)
                                 UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform),
                    __this_02 != (UnityEngine_RectTransform_o *)0x0 &&
                    (UVar7 = UnityEngine_RectTransform__get_anchorMin(__this_02,(MethodInfo *)0x0),
                    SVar13.fields.value =
                         (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_03,
                    __this_03 != (UnityEngine_RectTransform_o *)0x0)))) {
                  UnityEngine_RectTransform__set_anchorMin(__this_03,UVar7,(MethodInfo *)0x0);
                  UVar7 = UnityEngine_RectTransform__get_anchorMax(__this_02,(MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_anchorMax(__this_03,UVar7,(MethodInfo *)0x0);
                  UVar7 = UnityEngine_RectTransform__get_pivot(__this_02,(MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_pivot(__this_03,UVar7,(MethodInfo *)0x0);
                  UVar7 = UnityEngine_RectTransform__get_anchoredPosition(__this_02,(MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_anchoredPosition(__this_03,UVar7,(MethodInfo *)0x0);
                  UVar7 = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_sizeDelta(__this_03,UVar7,(MethodInfo *)0x0);
                  value = UnityEngine_Transform__get_localScale
                                    ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
                  UnityEngine_Transform__set_localScale
                            ((UnityEngine_Transform_o *)__this_03,value,(MethodInfo *)0x0);
                  if (*ppUVar20 != (UnityEngine_GameObject_o *)0x0) {
                    pTVar15 = (TMPro_TextMeshProUGUI_o *)
                              UnityEngine_GameObject__GetComponent_object_(*ppUVar20,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                    SVar13.fields.value = (System_RuntimeTypeHandle_Fields)&(__this->fields)._tmpText;
                    (__this->fields)._tmpText = pTVar15;
                    il2cpp_runtime_helper_022b4080(SVar13.fields.value);
                    pTVar15 = (__this->fields)._tmpText;
                    if (pTVar15 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      (*(pTVar15->klass->vtable)._25_set_raycastTarget.methodPtr)
                                (pTVar15,0,(pTVar15->klass->vtable)._25_set_raycastTarget.method);
                      if (*(TMPro_TextMeshProUGUI_o **)SVar13.fields.value != (TMPro_TextMeshProUGUI_o *)0x0)
                      {
                        TMPro_TMP_Text__set_enableWordWrapping
                                  ((TMPro_TMP_Text_o *)*(TMPro_TextMeshProUGUI_o **)SVar13.fields.value,0,
                                   (MethodInfo *)0x0);
                        if (*(TMPro_TextMeshProUGUI_o **)SVar13.fields.value != (TMPro_TextMeshProUGUI_o *)0x0
                           ) {
                          pMVar17 = (MethodInfo *)0x0;
                          TMPro_TMP_Text__set_overflowMode
                                    ((TMPro_TMP_Text_o *)*(TMPro_TextMeshProUGUI_o **)SVar13.fields.value,0,
                                     (MethodInfo *)0x0);
                          PatreonEffects_NameEffectApplier__SyncLegacyTextStyle(__this,pMVar17);
                          pUVar4 = (__this->fields)._tmpOverlay;
                          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_04328580;
          }
        }
      }
      goto label_04328585;
    }
  }
label_0432858a:
  lVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae034 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae034 = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)(lVar12 + 0x30);
  __this_05 = (TMPro_TMP_Text_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pUVar3 = *(UnityEngine_Object_o **)(lVar12 + 0x20);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  __this_04 = *(UnityEngine_UI_Text_o **)(lVar12 + 0x20);
  if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
    __this_05 = *(TMPro_TMP_Text_o **)(lVar12 + 0x30);
    iVar9 = UnityEngine_UI_Text__get_fontSize(__this_04,(MethodInfo *)0x0);
    if (__this_05 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_fontSize(__this_05,(float)iVar9,(MethodInfo *)0x0);
      __this_04 = *(UnityEngine_UI_Text_o **)(lVar12 + 0x20);
      if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
        __this_05 = *(TMPro_TMP_Text_o **)(lVar12 + 0x30);
        (*(__this_04->klass->vtable)._22_get_color.methodPtr)();
        if (__this_05 != (TMPro_TMP_Text_o *)0x0) {
          (*(__this_05->klass->vtable)._23_set_color.methodPtr)(__this_05);
          __this_04 = *(UnityEngine_UI_Text_o **)(lVar12 + 0x20);
          if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
            __this_05 = *(TMPro_TMP_Text_o **)(lVar12 + 0x30);
            uVar10 = UnityEngine_UI_Text__get_alignment(__this_04,(MethodInfo *)0x0);
            iVar9 = 0x1002;
            if (uVar10 < 9) {
              iVar9 = *(int32_t *)(&g_data_00d99884 + (long)(int)uVar10 * 4);
            }
            if (__this_05 != (TMPro_TMP_Text_o *)0x0) {
              TMPro_TMP_Text__set_alignment(__this_05,iVar9,(MethodInfo *)0x0);
              __this_04 = *(UnityEngine_UI_Text_o **)(lVar12 + 0x20);
              if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
                __this_00 = *(TMPro_TMP_Text_o **)(lVar12 + 0x30);
                uVar10 = UnityEngine_UI_Text__get_supportRichText(__this_04,(MethodInfo *)0x0);
                if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
                  TMPro_TMP_Text__set_richText(__this_00,uVar10 & 0xff,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae02f = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)&(__this_04->fields).m_Color.fields.b;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pUVar3 = (UnityEngine_Object_o *)(__this_04->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pUVar18 = (__this_04->fields).m_Material;
  if (pUVar18 != (UnityEngine_Material_o *)0x0) {
    plVar5 = *(long **)&(__this_04->fields).m_Color.fields.b;
    uVar16 = (*(code *)pUVar18->klass[3].vtable._3_ToString.method)();
    if (plVar5 != (long *)0x0) {
      lVar12 = *plVar5;
      (**(code **)(lVar12 + 0x558))
                (plVar5,uVar16,*(undefined8 *)(lVar12 + 0x560),lVar12,*(code **)(lVar12 + 0x558));
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae032 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae032 = '\x01';
  }
  pUVar3 = pUVar18[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar1 = &pUVar18[2].monitor;
  pMVar17 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_04328892:
    uStack_4c = (uint)((ulong)__this_05 >> 0x20);
    ppvVar19 = (void **)(ulong)uStack_4c;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_4c,pMVar17);
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (settings->fields).gradientA.fields.r = (float)(int)lVar12;
      (settings->fields).gradientA.fields.g = (float)(int)((ulong)lVar12 >> 0x20);
      *(System_RuntimeTypeHandle_Fields *)&(settings->fields).gradientA.fields.b = SVar13.fields.value;
      *(UnityEngine_GameObject_o ***)&(settings->fields).gradientB.fields = ppUVar20;
      *(PatreonEffects_NameEffectApplier_o **)&(settings->fields).gradientB.fields.b = __this;
      (settings->fields).gradientC.fields.r = (float)(int)in_RAX;
      (settings->fields).gradientC.fields.g = (float)(int)((ulong)in_RAX >> 0x20);
      (settings->fields).gradientC.fields.b = (float)(int)unaff_RBX;
      (settings->fields).gradientC.fields.a = (float)(int)((ulong)unaff_RBX >> 0x20);
      (settings->fields).gradientD.fields.r = (float)(int)unaff_R12;
      (settings->fields).gradientD.fields.g = (float)(int)((ulong)unaff_R12 >> 0x20);
      *(UnityEngine_GameObject_o ***)&(settings->fields).gradientD.fields.b = unaff_R14;
      ppvVar19 = (void **)0x0;
      if (pUVar18[2].klass != (UnityEngine_Material_c *)0x0) {
        (**(code **)((long)((pUVar18[2].klass)->_1).image + 0x2a8))(0x3f800000,0x3f800000);
        ppvVar19 = (void **)0x0;
        if (*ppvVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*ppvVar1,settings,method_00);
          return;
        }
      }
    }
  }
  else {
    pUVar4 = (UnityEngine_GameObject_o *)pUVar18[1].fields.m_CachedPtr;
    ppvVar19 = (void **)0x0;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pMVar17 = (MethodInfo *)UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_NameEffectController_AddComponent_NameEffectController);
      *ppvVar1 = pMVar17;
      ppvVar19 = ppvVar1;
      il2cpp_runtime_helper_022b4080();
      __this_01 = *ppvVar1;
      if (__this_01 != (PatreonEffects_NameEffectController_o *)0x0) {
        bVar8 = PatreonEffects_NameEffectController__FindText(__this_01,pMVar17);
        if ((char)bVar8 != '\0') {
          *(undefined1 *)&(__this_01->fields).outlineActive = 0;
          bVar8 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this_01,pMVar17);
          if ((char)bVar8 != '\0') {
            (__this_01->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
            pMVar17 = (MethodInfo *)0x0;
            il2cpp_runtime_helper_022b4080(&(__this_01->fields).runtimeMat);
            *(undefined1 *)&(__this_01->fields).initialized = 0;
          }
        }
        goto label_04328892;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae033 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae033 = '\x01';
  }
  pUVar3 = ppvVar19[7];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar17 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    puVar2 = ppvVar19 + 7;
    if ((PatreonEffects_NameEffectController_o *)*puVar2 == (PatreonEffects_NameEffectController_o *)0x0)
    goto label_04328b54;
    PatreonEffects_NameEffectController__Clear((PatreonEffects_NameEffectController_o *)*puVar2,pMVar17);
    pUVar3 = (UnityEngine_Object_o *)*puVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
    *puVar2 = 0;
    il2cpp_runtime_helper_022b4080(puVar2);
  }
  pUVar3 = ppvVar19[6];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar3 = ppvVar19[4];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      plVar5 = ppvVar19[4];
      if (plVar5 != (long *)0x0) {
        plVar6 = ppvVar19[6];
        (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        if (plVar6 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar6 + 0x2a8);
          (*vtableDispatch)(plVar6,*(undefined8 *)(*plVar6 + 0x2b0),extraout_RDX,vtableDispatch)
          ;
          return;
        }
      }
label_04328b54:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectApplier$$ApplyEffect
// il2cpp: void PatreonEffects_NameEffectApplier__ApplyEffect (PatreonEffects_NameEffectApplier_o* __this, PatreonEffects_ResolvedNameEffect_o effect, const MethodInfo* method);
// 0x43287c0

void PatreonEffects_NameEffectApplier__ApplyEffect
               (PatreonEffects_NameEffectApplier_o *__this,PatreonEffects_ResolvedNameEffect_o effect,
               MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **ppPVar1;
  undefined8 *puVar2;
  PatreonEffects_NameEffectController_o *pPVar3;
  UnityEngine_GameObject_o *__this_00;
  TMPro_TextMeshProUGUI_o *pTVar4;
  UnityEngine_Object_o *pUVar5;
  long *plVar6;
  long *plVar7;
  code *vtableDispatch;
  PatreonEffects_ResolvedNameEffect_o PVar8;
  bool_conflict bVar9;
  PatreonEffects_NameEffectController_o *method_00;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_01;
  undefined8 extraout_RDX;
  MethodInfo *method_02;
  PatreonEffects_NameEffectController_o **ppPVar10;
  
  PVar8.fields = effect.fields;
  if (g_data_057ae032 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae032 = '\x01';
  }
  pPVar3 = (__this->fields)._controller;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppPVar1 = &(__this->fields)._controller;
  method_00 = (PatreonEffects_NameEffectController_o *)0x0;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_04328892:
    ppPVar10 = (PatreonEffects_NameEffectController_o **)(ulong)(uint)effect.fields.Type;
    settings = PatreonEffects_NameEffectPresets__GetPreset(effect.fields.Type,(MethodInfo *)method_00);
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (settings->fields).gradientA.fields.r = effect.fields.ColorA.fields.r;
      (settings->fields).gradientA.fields.g = effect.fields.ColorA.fields.g;
      (settings->fields).gradientA.fields.b = effect.fields.ColorA.fields.b;
      (settings->fields).gradientA.fields.a = effect.fields.ColorA.fields.a;
      (settings->fields).gradientB.fields.r = effect.fields.ColorB.fields.r;
      (settings->fields).gradientB.fields.g = effect.fields.ColorB.fields.g;
      (settings->fields).gradientB.fields.b = (float)(int)PVar8.fields.ColorB.fields._8_8_;
      (settings->fields).gradientB.fields.a = (float)(int)((ulong)PVar8.fields.ColorB.fields._8_8_ >> 0x20);
      (settings->fields).gradientC.fields.r = (float)(int)PVar8.fields.ColorC.fields._0_8_;
      (settings->fields).gradientC.fields.g = (float)(int)((ulong)PVar8.fields.ColorC.fields._0_8_ >> 0x20);
      (settings->fields).gradientC.fields.b = (float)(int)PVar8.fields.ColorC.fields._8_8_;
      (settings->fields).gradientC.fields.a = (float)(int)((ulong)PVar8.fields.ColorC.fields._8_8_ >> 0x20);
      (settings->fields).gradientD.fields.r = (float)(int)PVar8.fields.ColorD.fields._0_8_;
      (settings->fields).gradientD.fields.g = (float)(int)((ulong)PVar8.fields.ColorD.fields._0_8_ >> 0x20);
      (settings->fields).gradientD.fields.b = effect.fields.ColorD.fields.b;
      (settings->fields).gradientD.fields.a = effect.fields.ColorD.fields.a;
      pTVar4 = (__this->fields)._tmpText;
      ppPVar10 = (PatreonEffects_NameEffectController_o **)0x0;
      if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar4->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
        ppPVar10 = (PatreonEffects_NameEffectController_o **)0x0;
        if (*ppPVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*ppPVar1,settings,method_01);
          return;
        }
      }
    }
  }
  else {
    __this_00 = (__this->fields)._tmpOverlay;
    ppPVar10 = (PatreonEffects_NameEffectController_o **)0x0;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = (PatreonEffects_NameEffectController_o *)
                  UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectController);
      *ppPVar1 = method_00;
      ppPVar10 = ppPVar1;
      il2cpp_runtime_helper_022b4080();
      pPVar3 = *ppPVar1;
      if (pPVar3 != (PatreonEffects_NameEffectController_o *)0x0) {
        bVar9 = PatreonEffects_NameEffectController__FindText(pPVar3,(MethodInfo *)method_00);
        if ((char)bVar9 != '\0') {
          *(undefined1 *)&(pPVar3->fields).outlineActive = 0;
          bVar9 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(pPVar3,(MethodInfo *)method_00)
          ;
          if ((char)bVar9 != '\0') {
            (pPVar3->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
            method_00 = (PatreonEffects_NameEffectController_o *)0x0;
            il2cpp_runtime_helper_022b4080(&(pPVar3->fields).runtimeMat);
            *(undefined1 *)&(pPVar3->fields).initialized = 0;
          }
        }
        goto label_04328892;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae033 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae033 = '\x01';
  }
  pUVar5 = (UnityEngine_Object_o *)ppPVar10[7];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_02 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    puVar2 = ppPVar10 + 7;
    if ((PatreonEffects_NameEffectController_o *)*puVar2 == (PatreonEffects_NameEffectController_o *)0x0)
    goto label_04328b54;
    PatreonEffects_NameEffectController__Clear((PatreonEffects_NameEffectController_o *)*puVar2,method_02);
    pUVar5 = (UnityEngine_Object_o *)*puVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar5,(MethodInfo *)0x0);
    *puVar2 = 0;
    il2cpp_runtime_helper_022b4080(puVar2);
  }
  pUVar5 = (UnityEngine_Object_o *)ppPVar10[6];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pUVar5 = (UnityEngine_Object_o *)ppPVar10[4];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      plVar6 = (long *)ppPVar10[4];
      if (plVar6 != (long *)0x0) {
        plVar7 = (long *)ppPVar10[6];
        (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
        if (plVar7 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar7 + 0x2a8);
          (*vtableDispatch)(plVar7,*(undefined8 *)(*plVar7 + 0x2b0),extraout_RDX,vtableDispatch)
          ;
          return;
        }
      }
label_04328b54:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectApplier$$ClearController
// il2cpp: void PatreonEffects_NameEffectApplier__ClearController (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x4328a20

void PatreonEffects_NameEffectApplier__ClearController
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o **ppPVar1;
  PatreonEffects_NameEffectController_o *pPVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_UI_Text_o *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar5;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  
  if (g_data_057ae033 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae033 = '\x01';
  }
  pPVar2 = (__this->fields)._controller;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ppPVar1 = &(__this->fields)._controller;
    if (*ppPVar1 == (PatreonEffects_NameEffectController_o *)0x0) goto label_04328b54;
    PatreonEffects_NameEffectController__Clear(*ppPVar1,method_00);
    pPVar2 = *ppPVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pPVar2,(MethodInfo *)0x0);
    *ppPVar1 = (PatreonEffects_NameEffectController_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppPVar1);
  }
  pTVar3 = (__this->fields)._tmpText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar4 = (__this->fields)._legacyText;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pUVar4 = (__this->fields)._legacyText;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        pTVar3 = (__this->fields)._tmpText;
        (*(pUVar4->klass->vtable)._22_get_color.methodPtr)
                  (pUVar4,(pUVar4->klass->vtable)._22_get_color.method);
        if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
          vtableDispatch = (pTVar3->klass->vtable)._23_set_color.methodPtr;
          (*vtableDispatch)
                    (pTVar3,(pTVar3->klass->vtable)._23_set_color.method,extraout_RDX,vtableDispatch);
          return;
        }
      }
label_04328b54:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectApplier$$SyncLegacyTextStyle
// il2cpp: void PatreonEffects_NameEffectApplier__SyncLegacyTextStyle (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x43285a0

void PatreonEffects_NameEffectApplier__SyncLegacyTextStyle
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  undefined8 *puVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Object_o *pUVar4;
  long *plVar5;
  long lVar6;
  UnityEngine_GameObject_o *__this_00;
  PatreonEffects_NameEffectController_o *__this_01;
  long *plVar7;
  code *vtableDispatch;
  bool_conflict bVar8;
  int32_t iVar9;
  uint uVar10;
  undefined8 uVar11;
  MethodInfo *pMVar12;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  UnityEngine_UI_Text_o *pUVar13;
  UnityEngine_Material_o *pUVar14;
  void **ppvVar15;
  undefined8 unaff_R14;
  TMPro_TextMeshProUGUI_o *__this_02;
  undefined8 unaff_R15;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  uint uStack_24;
  
  if (g_data_057ae034 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae034 = '\x01';
  }
  pTVar3 = (__this->fields)._tmpText;
  __this_02 = (TMPro_TextMeshProUGUI_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pUVar13 = (__this->fields)._legacyText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pUVar13 = (__this->fields)._legacyText;
  if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
    __this_02 = (__this->fields)._tmpText;
    iVar9 = UnityEngine_UI_Text__get_fontSize(pUVar13,(MethodInfo *)0x0);
    if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this_02,(float)iVar9,(MethodInfo *)0x0);
      pUVar13 = (__this->fields)._legacyText;
      if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
        __this_02 = (__this->fields)._tmpText;
        (*(pUVar13->klass->vtable)._22_get_color.methodPtr)();
        if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(__this_02->klass->vtable)._23_set_color.methodPtr)(__this_02);
          pUVar13 = (__this->fields)._legacyText;
          if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
            __this_02 = (__this->fields)._tmpText;
            uVar10 = UnityEngine_UI_Text__get_alignment(pUVar13,(MethodInfo *)0x0);
            iVar9 = 0x1002;
            if (uVar10 < 9) {
              iVar9 = *(int32_t *)(&g_data_00d99884 + (long)(int)uVar10 * 4);
            }
            if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
              TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this_02,iVar9,(MethodInfo *)0x0);
              pUVar13 = (__this->fields)._legacyText;
              if (pUVar13 != (UnityEngine_UI_Text_o *)0x0) {
                pTVar3 = (__this->fields)._tmpText;
                uVar10 = UnityEngine_UI_Text__get_supportRichText(pUVar13,(MethodInfo *)0x0);
                if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar3,uVar10 & 0xff,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae02f = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&(pUVar13->fields).m_Color.fields.b;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pUVar4 = (UnityEngine_Object_o *)(pUVar13->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pUVar14 = (pUVar13->fields).m_Material;
  if (pUVar14 != (UnityEngine_Material_o *)0x0) {
    plVar5 = *(long **)&(pUVar13->fields).m_Color.fields.b;
    uVar11 = (*(code *)pUVar14->klass[3].vtable._3_ToString.method)();
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      (**(code **)(lVar6 + 0x558))
                (plVar5,uVar11,*(undefined8 *)(lVar6 + 0x560),lVar6,*(code **)(lVar6 + 0x558));
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae032 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectController_AddComponent_NameEffectController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae032 = '\x01';
  }
  pUVar4 = pUVar14[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar1 = &pUVar14[2].monitor;
  pMVar12 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_04328892:
    uStack_24 = (uint)((ulong)__this_02 >> 0x20);
    ppvVar15 = (void **)(ulong)uStack_24;
    settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_24,pMVar12);
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      *(PatreonEffects_NameEffectApplier_o **)&(settings->fields).gradientA.fields = __this;
      (settings->fields).gradientA.fields.b = (float)(int)unaff_RBX;
      (settings->fields).gradientA.fields.a = (float)(int)((ulong)unaff_RBX >> 0x20);
      (settings->fields).gradientB.fields.r = (float)(int)unaff_R14;
      (settings->fields).gradientB.fields.g = (float)(int)((ulong)unaff_R14 >> 0x20);
      (settings->fields).gradientB.fields.b = (float)(int)unaff_R15;
      (settings->fields).gradientB.fields.a = (float)(int)((ulong)unaff_R15 >> 0x20);
      (settings->fields).gradientC.fields.r = (float)unaff_retaddr;
      (settings->fields).gradientC.fields.g = (float)unaff_retaddr_00;
      (settings->fields).gradientC.fields.b = (float)in_stack_00000008;
      (settings->fields).gradientC.fields.a = (float)in_stack_0000000c;
      (settings->fields).gradientD.fields.r = (float)in_stack_00000010;
      (settings->fields).gradientD.fields.g = (float)in_stack_00000014;
      (settings->fields).gradientD.fields.b = (float)uStack0000000000000018;
      (settings->fields).gradientD.fields.a = (float)uStack000000000000001c;
      ppvVar15 = (void **)0x0;
      if (pUVar14[2].klass != (UnityEngine_Material_c *)0x0) {
        (**(code **)((long)((pUVar14[2].klass)->_1).image + 0x2a8))(0x3f800000,0x3f800000);
        ppvVar15 = (void **)0x0;
        if (*ppvVar1 != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*ppvVar1,settings,method_00);
          return;
        }
      }
    }
  }
  else {
    __this_00 = (UnityEngine_GameObject_o *)pUVar14[1].fields.m_CachedPtr;
    ppvVar15 = (void **)0x0;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pMVar12 = (MethodInfo *)UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_NameEffectController_AddComponent_NameEffectController);
      *ppvVar1 = pMVar12;
      ppvVar15 = ppvVar1;
      il2cpp_runtime_helper_022b4080();
      __this_01 = *ppvVar1;
      if (__this_01 != (PatreonEffects_NameEffectController_o *)0x0) {
        bVar8 = PatreonEffects_NameEffectController__FindText(__this_01,pMVar12);
        if ((char)bVar8 != '\0') {
          *(undefined1 *)&(__this_01->fields).outlineActive = 0;
          bVar8 = PatreonEffects_NameEffectController__RefreshOriginalMaterial(__this_01,pMVar12);
          if ((char)bVar8 != '\0') {
            (__this_01->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
            pMVar12 = (MethodInfo *)0x0;
            il2cpp_runtime_helper_022b4080(&(__this_01->fields).runtimeMat);
            *(undefined1 *)&(__this_01->fields).initialized = 0;
          }
        }
        goto label_04328892;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae033 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae033 = '\x01';
  }
  pUVar4 = ppvVar15[7];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    puVar2 = ppvVar15 + 7;
    if ((PatreonEffects_NameEffectController_o *)*puVar2 == (PatreonEffects_NameEffectController_o *)0x0)
    goto label_04328b54;
    PatreonEffects_NameEffectController__Clear((PatreonEffects_NameEffectController_o *)*puVar2,pMVar12);
    pUVar4 = (UnityEngine_Object_o *)*puVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
    *puVar2 = 0;
    il2cpp_runtime_helper_022b4080(puVar2);
  }
  pUVar4 = ppvVar15[6];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar4 = ppvVar15[4];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      plVar5 = ppvVar15[4];
      if (plVar5 != (long *)0x0) {
        plVar7 = ppvVar15[6];
        (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        if (plVar7 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar7 + 0x2a8);
          (*vtableDispatch)(plVar7,*(undefined8 *)(*plVar7 + 0x2b0),extraout_RDX,vtableDispatch)
          ;
          return;
        }
      }
label_04328b54:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
  }
  return;
}


// PatreonEffects.NameEffectApplier$$ToTmpAlignment
// il2cpp: int32_t PatreonEffects_NameEffectApplier__ToTmpAlignment (int32_t alignment, const MethodInfo* method);
// 0x43292f0

int32_t PatreonEffects_NameEffectApplier__ToTmpAlignment(int32_t alignment,MethodInfo *method)

{
  if ((uint)alignment < 9) {
    return *(int32_t *)(&g_data_00d99884 + (long)alignment * 4);
  }
  return 0x1002;
}


// PatreonEffects.NameEffectApplier$$OnDestroy
// il2cpp: void PatreonEffects_NameEffectApplier__OnDestroy (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x4329310

void PatreonEffects_NameEffectApplier__OnDestroy
               (PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057ae035 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae035 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._tmpOverlay;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// PatreonEffects.NameEffectApplier$$.ctor
// il2cpp: void PatreonEffects_NameEffectApplier___ctor (PatreonEffects_NameEffectApplier_o* __this, const MethodInfo* method);
// 0x4329390

void PatreonEffects_NameEffectApplier___ctor(PatreonEffects_NameEffectApplier_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


