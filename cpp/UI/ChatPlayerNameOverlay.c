// Type: UI.ChatPlayerNameOverlay
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/ChatPlayerNameOverlay.cs
// Prior real C# source: none
// --------------------------------

// UI.ChatPlayerNameOverlay$$get_Label
// il2cpp: PatreonEffects_NameEffectLabel_o* UI_ChatPlayerNameOverlay__get_Label (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x43b8650

PatreonEffects_NameEffectLabel_o *
UI_ChatPlayerNameOverlay__get_Label(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  return (__this->fields)._label;
}


// UI.ChatPlayerNameOverlay$$Initialize
// il2cpp: void UI_ChatPlayerNameOverlay__Initialize (UI_ChatPlayerNameOverlay_o* __this, TMPro_TextMeshProUGUI_o* source, const MethodInfo* method);
// 0x43b5cf0

void UI_ChatPlayerNameOverlay__Initialize
               (UI_ChatPlayerNameOverlay_o *__this,TMPro_TextMeshProUGUI_o *source,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  Il2CppType **ppIVar3;
  MethodInfo *extraout_RDX;
  Il2CppType *extraout_RDX_00;
  Il2CppClass *pIVar4;
  MethodInfo *pMVar5;
  
  if (g_data_057ae38a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HideSourceName);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae38a = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._source = source;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._source,source,method);
  pTVar1 = (__this->fields)._source;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar1 = (__this->fields)._source;
    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
    ppIVar3 = (Il2CppType **)0x0;
    pIVar4 = (Il2CppClass *)__this;
    pMVar5 = method_00;
    System_Action_object____ctor();
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pMVar5->klass = pIVar4;
      il2cpp_runtime_helper_022b4080(&pMVar5->klass);
      pMVar5->return_type = extraout_RDX_00;
      il2cpp_runtime_helper_022b4080(&pMVar5->return_type,extraout_RDX_00);
      pMVar5->parameters = ppIVar3;
      il2cpp_runtime_helper_022b4080(&pMVar5->parameters,ppIVar3);
      return;
    }
    (*(pTVar1->klass->vtable)._78_add_OnPreRenderText.methodPtr)
              (pTVar1,method_00,(pTVar1->klass->vtable)._78_add_OnPreRenderText.method);
  }
  UI_ChatPlayerNameOverlay__BuildIfNeeded(__this,method_00);
  return;
}


// UI.ChatPlayerNameOverlay$$SetName
// il2cpp: void UI_ChatPlayerNameOverlay__SetName (UI_ChatPlayerNameOverlay_o* __this, System_String_o* name, TMPro_TMP_FontAsset_o* font, float fontSize, UnityEngine_Color_o color, UI_ChatDisplayNameRange_o range, const MethodInfo* method);
// 0x43b75b0

void UI_ChatPlayerNameOverlay__SetName
               (UI_ChatPlayerNameOverlay_o *__this,System_String_o *name,TMPro_TMP_FontAsset_o *font,
               float fontSize,UnityEngine_Color_o color,UI_ChatDisplayNameRange_o range,MethodInfo *method)

{
  Il2CppRGCTXData *pIVar1;
  undefined1 auVar2 [16];
  int32_t iVar3;
  Il2CppMethodPointer pIVar4;
  UI_ChatPanel_o *__this_00;
  PatreonEffects_NameEffectLabel_o *pPVar5;
  TMPro_TMP_Text_o *__this_01;
  UnityEngine_Vector2_o UVar6;
  Il2CppRGCTXData IVar7;
  Il2CppRGCTXData IVar8;
  uint uVar9;
  bool_conflict bVar10;
  long lVar11;
  UI_ChatDisplayNameRange_Fields UVar12;
  System_String_o *pSVar13;
  Photon_Realtime_Player_o *pPVar14;
  Photon_Realtime_Room_o *pPVar15;
  System_String_o *pSVar16;
  undefined8 uVar17;
  TMPro_TMP_FontAsset_o *extraout_RDX;
  MethodInfo *method_00;
  long *unaff_RBX;
  UI_ChatDisplayNameRange_Fields *pUVar18;
  UI_ChatDisplayNameRange_Fields *unaff_RBP;
  UI_ChatDisplayNameRange_Fields method_01;
  UI_ChatDisplayNameRange_Fields __this_02;
  UI_ChatDisplayNameRange_Fields unaff_R12;
  uint32_t *unaff_R13;
  UI_ChatDisplayNameRange_Fields unaff_R14;
  long *plVar19;
  UI_ChatDisplayNameRange_Fields unaff_R15;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar23;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 uVar24;
  undefined8 in_XMM2_Qb;
  UnityEngine_Color_o value;
  UnityEngine_Vector3_o position;
  float fVar22;
  
  uVar24 = color.fields._8_8_;
  fVar22 = color.fields.r;
  fVar23 = color.fields.g;
  do {
    __this_02 = (UI_ChatDisplayNameRange_Fields)__this;
    *(UI_ChatDisplayNameRange_Fields *)((long)register0x00000020 + -8) = unaff_R15;
    *(UI_ChatDisplayNameRange_Fields *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(uint32_t **)((long)register0x00000020 + -0x18) = unaff_R13;
    *(UI_ChatDisplayNameRange_Fields *)((long)register0x00000020 + -0x20) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x28) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = uVar24;
    *(undefined8 *)((long)register0x00000020 + -0x30) = in_XMM2_Qb;
    *(float *)((long)register0x00000020 + -0x48) = fVar22;
    *(float *)((long)register0x00000020 + -0x44) = fVar23;
    *(undefined4 *)((long)register0x00000020 + -0x40) = in_XMM1_Dc;
    *(undefined4 *)((long)register0x00000020 + -0x3c) = in_XMM1_Dd;
    *(float *)((long)register0x00000020 + -0x54) = fontSize;
    UVar12 = range.fields;
    unaff_R15 = __this_02;
    if (g_data_057ae38b == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b7605;
      method_01 = (UI_ChatDisplayNameRange_Fields)name;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae38b = '\x01';
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b7614;
      UI_ChatPlayerNameOverlay__BuildIfNeeded((UI_ChatPlayerNameOverlay_o *)__this_02,(MethodInfo *)method_01)
      ;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b75ea;
      UI_ChatPlayerNameOverlay__BuildIfNeeded((UI_ChatPlayerNameOverlay_o *)__this_02,(MethodInfo *)name);
    }
    if ((UI_ChatDisplayNameRange_Fields)name == (UI_ChatDisplayNameRange_Fields)0x0) {
      name = *(System_String_o **)*(UI_ChatDisplayNameRange_Fields **)(g_data_057b9c00 + 0xb8);
    }
    if (__this_02 != (UI_ChatDisplayNameRange_Fields)0x0) {
      unaff_R13 = (uint32_t *)((long)__this_02 + 0x48);
      *(System_String_o **)((long)__this_02 + 0x48) = name;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b764f;
      il2cpp_runtime_helper_022b4080(unaff_R13);
      *(UI_ChatDisplayNameRange_Fields *)((long)register0x00000020 + -0x50) = range.fields;
      *(UI_ChatDisplayNameRange_Fields *)((long)__this_02 + 0x38) = range.fields;
      name._0_4_ = 0;
      name._4_4_ = 0;
      unaff_R15 = (UI_ChatDisplayNameRange_Fields)((long)register0x00000020 + -0x50);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b7667;
      bVar10 = UI_ChatDisplayNameRange__get_IsValid((UI_ChatDisplayNameRange_o)unaff_R15,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        if (*(long *)unaff_R13 == 0) goto label_043b7778;
        name._1_7_ = 0;
        name._0_1_ = 0 < *(int *)(*(long *)unaff_R13 + 0x10);
      }
      *(char *)((long)__this_02 + 0x40) = (char)name;
      pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)__this_02 + 0x28);
      unaff_R15.SourceStartIndex = 0;
      unaff_R15.SourceEndIndex = 0;
      if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b769f;
        PatreonEffects_NameEffectLabel__set_fontSize
                  (pPVar5,*(float *)((long)register0x00000020 + -0x54),(MethodInfo *)0x0);
        pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)__this_02 + 0x28);
        unaff_R15.SourceStartIndex = 0;
        unaff_R15.SourceEndIndex = 0;
        if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          auVar2 = *(undefined1 (*) [16])((long)register0x00000020 + -0x38);
          fVar22 = auVar2._0_4_;
          fVar23 = auVar2._4_4_;
          in_XMM1_Dc = auVar2._8_4_;
          in_XMM1_Dd = auVar2._12_4_;
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b76be;
          value.fields.b = (float)(int)auVar2._0_8_;
          value.fields.a = (float)(int)((ulong)auVar2._0_8_ >> 0x20);
          value.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0x48);
          PatreonEffects_NameEffectLabel__set_color(pPVar5,value,(MethodInfo *)0x0);
          pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)__this_02 + 0x28);
          unaff_R15.SourceStartIndex = 0;
          unaff_R15.SourceEndIndex = 0;
          if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b76d8;
            PatreonEffects_NameEffectLabel__set_richText(pPVar5,1,(MethodInfo *)0x0);
            pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)__this_02 + 0x28);
            unaff_R15.SourceStartIndex = 0;
            unaff_R15.SourceEndIndex = 0;
            if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b76f2;
              PatreonEffects_NameEffectLabel__set_alignment(pPVar5,0x801,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b770a;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b7716;
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar10 != '\0') {
                pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)__this_02 + 0x28);
                unaff_R15.SourceStartIndex = 0;
                unaff_R15.SourceEndIndex = 0;
                if (pPVar5 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_043b7778;
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b772e;
                PatreonEffects_NameEffectLabel__SetFont(pPVar5,font,(MethodInfo *)0x0);
              }
              pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)__this_02 + 0x28);
              unaff_R15.SourceStartIndex = 0;
              unaff_R15.SourceEndIndex = 0;
              if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                pSVar13 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                pSVar16 = *(System_String_o **)((long)__this_02 + 0x48);
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b7760;
                PatreonEffects_NameEffectLabel__SetText(pPVar5,pSVar13,pSVar16,pSVar13,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b776a;
                UI_ChatPlayerNameOverlay__SetRaycastTargets
                          ((UI_ChatPlayerNameOverlay_o *)__this_02,0,method_00);
                return;
              }
            }
          }
        }
      }
    }
label_043b7778:
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43b777d;
    il2cpp_runtime_helper_022b2c90();
    *(UI_ChatDisplayNameRange_Fields *)((long)register0x00000020 + -0x60) = range.fields;
    *(TMPro_TMP_FontAsset_o **)((long)register0x00000020 + -0x68) = font;
    *(System_String_o **)((long)register0x00000020 + -0x70) = name;
    range.fields = UVar12;
    if (g_data_057ae392 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x43b77a1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x43b77ad;
      il2cpp_runtime_helper_023445d0(&"|");
      g_data_057ae392 = '\x01';
      range.fields = UVar12;
    }
    pUVar18 = *(UI_ChatDisplayNameRange_Fields **)((long)unaff_R15 + 0x28);
    plVar19 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x43b77d0;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBX._0_4_ = 0;
    unaff_RBX._4_4_ = 0;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x43b77dc;
    pSVar13 = (System_String_o *)pUVar18;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    if (*(Il2CppType **)((long)unaff_R15 + 0x28) != (Il2CppType *)0x0) {
      pUVar18 = (*(Il2CppType **)((long)unaff_R15 + 0x28))[6].data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x43b7809;
        il2cpp_runtime_helper_02337ed0(0);
      }
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x43b7815;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return;
      }
      pSVar13 = *(System_String_o **)((long)unaff_R15 + 0x48);
      unaff_RBX._0_4_ = 0;
      unaff_RBX._4_4_ = 0;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0x43b7829;
      bVar10 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return;
      }
      if (*(Il2CppType **)((long)unaff_R15 + 0x28) != (Il2CppType *)0x0) {
        __this_01 = (*(Il2CppType **)((long)unaff_R15 + 0x28))[6].data;
        pSVar13 = *(System_String_o **)((long)unaff_R15 + 0x48);
        pUVar18 = &"|";
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0x43b7852;
        unaff_RBX = (long *)"|";
        pSVar16 = System_String__Concat_3ae5ba0(pSVar13,(System_String_o *)"|",(MethodInfo *)0x0);
        plVar19 = (long *)0x0;
        if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x43b786f;
          UVar6 = TMPro_TMP_Text__GetPreferredValues_4c70170
                            (__this_01,pSVar16,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
          auVar2._8_4_ = extraout_XMM0_Dc;
          auVar2._0_4_ = UVar6.fields.x;
          auVar2._4_4_ = UVar6.fields.y;
          auVar2._12_4_ = extraout_XMM0_Dd;
          *(undefined1 (*) [16])((long)register0x00000020 + -0x80) = auVar2;
          *(undefined8 *)((long)register0x00000020 + -0x88) = 0x43b788b;
          TMPro_TMP_Text__GetPreferredValues_4c70170
                    (__this_01,(System_String_o *)"|",3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x43b78ac;
    uVar17 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x88) = uVar17;
    unaff_R14 = (UI_ChatDisplayNameRange_Fields)pSVar13[1].monitor;
    if (unaff_R14 == (UI_ChatDisplayNameRange_Fields)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0x43b78c5;
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)unaff_R14,(MethodInfo *)0x0);
      return;
    }
    *(UI_ChatDisplayNameRange_Fields **)((long)register0x00000020 + -0x88) = unaff_RBP;
    *(UI_ChatDisplayNameRange_Fields *)((long)register0x00000020 + -0x90) = unaff_R15;
    *(long **)((long)register0x00000020 + -0x98) = plVar19;
    *(UI_ChatDisplayNameRange_Fields **)((long)register0x00000020 + -0xa0) = pUVar18;
    name = (System_String_o *)unaff_RBX;
    pUVar18 = (UI_ChatDisplayNameRange_Fields *)unaff_R14;
    if (g_data_057ae37e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7365;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7371;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b737d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TMP_TextUtilities);
      pUVar18 = &"suggestion_";
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7389;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae37e = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xe8) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000020 + -200) = 0;
    *(undefined4 *)((long)register0x00000020 + -0xec) = 0;
    *(undefined4 *)((long)register0x00000020 + -0xf0) = 0;
    if ((UI_ChatDisplayNameRange_Fields)unaff_RBX == (UI_ChatDisplayNameRange_Fields)0x0) {
label_043b75a2:
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b75a7;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      unaff_R15 = *(UI_ChatDisplayNameRange_Fields *)((long)unaff_R14 + 0x10);
      uVar17 = *(undefined8 *)((long)unaff_RBX + 0x104);
      uVar20 = (undefined4)uVar17;
      uVar21 = (undefined4)((ulong)uVar17 >> 0x20);
      if (*(int *)(TypeInfo_TMP_TextUtilities + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xb8) = uVar17;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b73e8;
        il2cpp_runtime_helper_02337ed0();
        uVar20 = *(undefined4 *)((long)register0x00000020 + -0xb8);
        uVar21 = *(undefined4 *)((long)register0x00000020 + -0xb4);
      }
      fVar23 = 0.0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      name._0_4_ = 0;
      name._4_4_ = 0;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b73fc;
      position.fields.y = (float)uVar21;
      position.fields.x = (float)uVar20;
      position.fields.z = 0.0;
      fVar22 = 0.0;
      pUVar18 = (UI_ChatDisplayNameRange_Fields *)unaff_R15;
      uVar9 = TMPro_TMP_TextUtilities__FindIntersectingLink
                        ((TMPro_TMP_Text_o *)unaff_R15,position,(UnityEngine_Camera_o *)0x0,(MethodInfo *)0x0)
      ;
      if (uVar9 == 0xffffffff) {
        return;
      }
      range.fields.SourceStartIndex = 0;
      range.fields.SourceEndIndex = 0;
      if (*(InvokerMethod *)((long)unaff_R14 + 0x10) == (InvokerMethod)0x0) goto label_043b75a2;
      lVar11 = *(long *)(*(InvokerMethod *)((long)unaff_R14 + 0x10) + 0x368);
      range.fields.SourceStartIndex = 0;
      range.fields.SourceEndIndex = 0;
      if ((lVar11 == 0) ||
         (range.fields = *(UI_ChatDisplayNameRange_Fields *)(lVar11 + 0x48),
         range.fields == (UI_ChatDisplayNameRange_Fields)0x0)) goto label_043b75a2;
      if (uVar9 < *(uint *)((long)range.fields + 0x18)) {
        lVar11 = (long)(int)uVar9;
        IVar7 = ((Il2CppRGCTXData *)((long)range.fields + 0x20))[lVar11 * 5];
        IVar8 = ((Il2CppRGCTXData *)((long)range.fields + 0x20) + lVar11 * 5)[1];
        pIVar1 = (Il2CppRGCTXData *)((long)range.fields + 0x30) + lVar11 * 5;
        fVar22 = *(float *)pIVar1;
        fVar23 = *(float *)((long)pIVar1 + 4);
        in_XMM1_Dc = *(undefined4 *)(pIVar1 + 1);
        in_XMM1_Dd = *(undefined4 *)((long)pIVar1 + 0xc);
        *(Il2CppRGCTXData *)((long)register0x00000020 + -200) =
             ((Il2CppRGCTXData *)((long)range.fields + 0x40))[lVar11 * 5];
        *(float *)((long)register0x00000020 + -0xd8) = fVar22;
        *(float *)((long)register0x00000020 + -0xd4) = fVar23;
        *(undefined4 *)((long)register0x00000020 + -0xd0) = in_XMM1_Dc;
        *(undefined4 *)((long)register0x00000020 + -0xcc) = in_XMM1_Dd;
        *(Il2CppRGCTXData *)((long)register0x00000020 + -0xe8) = IVar7;
        *(Il2CppRGCTXData *)((long)register0x00000020 + -0xe0) = IVar8;
        pUVar18 = (UI_ChatDisplayNameRange_Fields *)((long)register0x00000020 + -0xe8);
        name._0_4_ = 0;
        name._4_4_ = 0;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7468;
        UVar12 = (UI_ChatDisplayNameRange_Fields)
                 TMPro_TMP_LinkInfo__GetLinkID
                           ((TMPro_TMP_LinkInfo_o)
                            *(TMPro_TMP_LinkInfo_Fields *)((long)register0x00000020 + -0xf8),
                            (MethodInfo *)pUVar18);
        if (UVar12 != (UI_ChatDisplayNameRange_Fields)0x0) {
          unaff_RBP = &"suggestion_";
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7489;
          name = (System_String_o *)"suggestion_";
          pUVar18 = (UI_ChatDisplayNameRange_Fields *)UVar12;
          bVar10 = System_String__StartsWith
                             ((System_String_o *)UVar12,(System_String_o *)"suggestion_",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            name = (System_String_o *)((long)register0x00000020 + -0xf0);
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b74f7;
            bVar10 = System_Int32__TryParse((System_String_o *)UVar12,(int32_t *)name,(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              return;
            }
            uVar9 = *(uint *)((long)register0x00000020 + -0xf0);
            unaff_RBP = (UI_ChatDisplayNameRange_Fields *)(ulong)uVar9;
            unaff_RBX = &TypeInfo_PhotonNetwork;
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b751b;
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar18._0_4_ = 0;
            pUVar18._4_4_ = 0;
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7522;
            pPVar14 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            if (pPVar14 != (Photon_Realtime_Player_o *)0x0) {
              if (uVar9 == (pPVar14->fields).actorNumber) {
                return;
              }
              if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b753d;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7544;
              pPVar15 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
              if (pPVar15 == (Photon_Realtime_Room_o *)0x0) {
                return;
              }
              if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b755a;
                il2cpp_runtime_helper_02337ed0();
              }
              pUVar18._0_4_ = 0;
              pUVar18._4_4_ = 0;
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7561;
              pPVar15 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
              if (pPVar15 != (Photon_Realtime_Room_o *)0x0) {
                name._4_4_ = 0;
                name._0_4_ = *(uint *)((long)register0x00000020 + -0xf0);
                unaff_RBP = (UI_ChatDisplayNameRange_Fields *)pPVar15->klass;
                range.fields = (UI_ChatDisplayNameRange_Fields)
                               (((Photon_Realtime_Room_c *)unaff_RBP)->vtable)._10_GetPlayer.method;
                pIVar4 = (((Photon_Realtime_Room_c *)unaff_RBP)->vtable)._10_GetPlayer.methodPtr;
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b757f;
                pPVar14 = (Photon_Realtime_Player_o *)(*pIVar4)(pPVar15,name,0);
                if (pPVar14 == (Photon_Realtime_Player_o *)0x0) {
                  return;
                }
                __this_00 = *(UI_ChatPanel_o **)((long)unaff_R14 + 0x28);
                pUVar18._0_4_ = 0;
                pUVar18._4_4_ = 0;
                if (__this_00 != (UI_ChatPanel_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7597;
                  UI_ChatPanel__EnterPMMode(__this_00,pPVar14,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            unaff_RBX = (long *)UVar12;
            if ("suggestion_" != (UI_ChatDisplayNameRange_Fields)0x0) {
              iVar3 = *(int32_t *)((long)"suggestion_" + 0x10);
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b74a7;
              pSVar13 = System_String__Substring((System_String_o *)UVar12,iVar3,(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b74b6;
              bVar10 = System_Int32__TryParse
                                 (pSVar13,(int32_t *)((long)register0x00000020 + -0xec),(MethodInfo *)0x0);
              if ((char)bVar10 != '\0') {
                iVar3 = *(int32_t *)((long)register0x00000020 + -0xec);
                if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b74da;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b74e3;
                GameManagers_ChatManager__HandleSuggestionClick(iVar3,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
        goto label_043b75a2;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b75ac;
    fontSize = (float)il2cpp_runtime_helper_022b2ca0();
    font = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xf8);
    __this = (UI_ChatPlayerNameOverlay_o *)pUVar18;
    unaff_R12 = __this_02;
  } while( true );
}


// UI.ChatPlayerNameOverlay$$SetRange
// il2cpp: void UI_ChatPlayerNameOverlay__SetRange (UI_ChatPlayerNameOverlay_o* __this, UI_ChatDisplayNameRange_o range, const MethodInfo* method);
// 0x43b6ee0

void UI_ChatPlayerNameOverlay__SetRange
               (UI_ChatPlayerNameOverlay_o *__this,UI_ChatDisplayNameRange_o range,MethodInfo *method)

{
  Il2CppRGCTXData *pIVar1;
  undefined1 auVar2 [16];
  int32_t iVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  Il2CppMethodPointer pIVar6;
  UI_ChatPanel_o *__this_00;
  PatreonEffects_NameEffectLabel_o *pPVar7;
  TMPro_TMP_Text_o *__this_01;
  UnityEngine_Vector2_o UVar8;
  Il2CppRGCTXData IVar9;
  Il2CppRGCTXData IVar10;
  UnityEngine_Vector3_o position;
  undefined1 *puVar11;
  bool_conflict bVar12;
  uint uVar13;
  UI_ChatDisplayNameRange_Fields UVar14;
  UnityEngine_GameObject_o *pUVar15;
  long lVar16;
  UI_ChatDisplayNameRange_Fields __this_02;
  System_String_o *pSVar17;
  Photon_Realtime_Player_o *pPVar18;
  Photon_Realtime_Room_o *pPVar19;
  System_String_o *pSVar20;
  undefined8 uVar21;
  Il2CppRGCTXData *in_RCX;
  Il2CppRGCTXData *pIVar22;
  TMPro_TMP_FontAsset_o *font;
  MethodInfo *method_00;
  long *textInfo;
  UI_ChatDisplayNameRange_Fields method_01;
  UI_ChatDisplayNameRange_Fields *x;
  undefined1 *puVar23;
  UI_ChatDisplayNameRange_Fields *unaff_RBP;
  UI_ChatDisplayNameRange_Fields UVar24;
  UI_ChatDisplayNameRange_Fields *method_02;
  uint32_t *unaff_R13;
  bool bVar25;
  long *__this_03;
  UI_ChatDisplayNameRange_Fields unaff_R15;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  float in_XMM1_Da;
  float in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float in_XMM2_Da;
  float in_XMM2_Db;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  UnityEngine_Rect_o UVar29;
  UnityEngine_Color_o value;
  UnityEngine_Vector3_o UVar30;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o position_04;
  MethodInfo *in_stack_ffffffffffffff08;
  float fStack_ec;
  int32_t iStack_e8;
  int32_t iStack_e4;
  Il2CppRGCTXData IStack_e0;
  float fStack_d8;
  UnityEngine_Vector3_o UStack_d0;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  UI_ChatPlayerNameOverlay_o *pUStack_38;
  UI_ChatDisplayNameRange_Fields UStack_18;
  
  UVar24 = (UI_ChatDisplayNameRange_Fields)&UStack_18;
  (__this->fields)._range.fields = range.fields;
  bVar25 = false;
  UStack_18 = range.fields;
  bVar12 = UI_ChatDisplayNameRange__get_IsValid((UI_ChatDisplayNameRange_o)&UStack_18,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
label_043b6f11:
    *(bool *)&(__this->fields)._hasRange = bVar25;
    return;
  }
  pSVar17 = (__this->fields)._nameText;
  if (pSVar17 != (System_String_o *)0x0) {
    bVar25 = 0 < (pSVar17->fields)._stringLength;
    goto label_043b6f11;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_38 = __this;
  if (g_data_057ae391 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057ae391 = '\x01';
  }
  iStack_e4 = 0;
  iStack_e8 = 0;
  fStack_ec = 0.0;
  UStack_d0.fields.z = 0.0;
  UStack_d0.fields.x = 0.0;
  UStack_d0.fields.y = 0.0;
  fStack_d8 = 0.0;
  IStack_e0.rgctxDataDummy = (void *)0x0;
  pIVar4 = *(Il2CppClass **)((long)UVar24 + 0x20);
  __this_03 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pIVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  x = *(UI_ChatDisplayNameRange_Fields **)((long)UVar24 + 0x30);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  textInfo._0_4_ = 0;
  textInfo._4_4_ = 0;
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  if (*(char *)((long)UVar24 + 0x40) == '\0') {
    return;
  }
  pIVar4 = *(Il2CppClass **)((long)UVar24 + 0x20);
  if (pIVar4 != (Il2CppClass *)0x0) {
    pvVar5 = (pIVar4->_1).image;
    in_RCX = *(Il2CppRGCTXData **)((long)pvVar5 + 0x7e0);
    textInfo._0_4_ = 0;
    textInfo._4_4_ = 0;
    (**(code **)((long)pvVar5 + 0x7d8))(pIVar4,0,0);
    if (*(Il2CppClass **)((long)UVar24 + 0x20) != (Il2CppClass *)0x0) {
      textInfo = *(long **)((*(Il2CppClass **)((long)UVar24 + 0x20))->vtable + 0x23);
      in_RCX = &IStack_e0;
      bVar12 = UI_ChatPlayerNameOverlay__TryGetSourceNameBounds
                         ((UI_ChatPlayerNameOverlay_o *)UVar24,(TMPro_TMP_TextInfo_o *)textInfo,&UStack_d0,
                          (UnityEngine_Vector3_o *)in_RCX,&fStack_ec,&iStack_e4,&iStack_e8,
                          in_stack_ffffffffffffff08);
      if ((char)bVar12 == '\0') {
        if (*(UnityEngine_Component_o **)((long)UVar24 + 0x30) != (UnityEngine_Component_o *)0x0) {
          textInfo._0_4_ = 0;
          textInfo._4_4_ = 0;
          pUVar15 = UnityEngine_Component__get_gameObject
                              (*(UnityEngine_Component_o **)((long)UVar24 + 0x30),(MethodInfo *)0x0);
          if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar15,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if (*(Il2CppClass **)((long)UVar24 + 0x20) != (Il2CppClass *)0x0) {
        textInfo._0_4_ = 0;
        textInfo._4_4_ = 0;
        UVar14 = (UI_ChatDisplayNameRange_Fields)
                 TMPro_TMP_Text__get_rectTransform
                           ((TMPro_TMP_Text_o *)*(Il2CppClass **)((long)UVar24 + 0x20),(MethodInfo *)0x0);
        if (*(UnityEngine_Transform_o **)((long)UVar24 + 0x30) != (UnityEngine_Transform_o *)0x0) {
          textInfo._0_4_ = 0;
          textInfo._4_4_ = 0;
          __this_03 = (long *)UnityEngine_Transform__get_parent
                                        (*(UnityEngine_Transform_o **)((long)UVar24 + 0x30),(MethodInfo *)0x0)
          ;
          unaff_R15 = UVar14;
          if (((UI_ChatDisplayNameRange_Fields)__this_03 != (UI_ChatDisplayNameRange_Fields)0x0) &&
             (textInfo = (long *)TypeInfo_RectTransform, (UI_ChatDisplayNameRange_Fields)*__this_03 != TypeInfo_RectTransform))
          goto label_043b7336;
          if (UVar14 != (UI_ChatDisplayNameRange_Fields)0x0) {
            position.fields.z = UStack_d0.fields.z;
            position.fields.x = UStack_d0.fields.x;
            position.fields.y = UStack_d0.fields.y;
            auStack_c0._8_8_ = 0;
            auStack_c0._0_4_ = UStack_d0.fields.x;
            auStack_c0._4_4_ = UStack_d0.fields.y;
            UVar30 = UnityEngine_Transform__TransformPoint
                               ((UnityEngine_Transform_o *)UVar14,position,(MethodInfo *)0x0);
            auStack_b0._8_4_ = extraout_XMM0_Dc;
            auStack_b0._0_8_ = UVar30.fields._0_8_;
            auStack_b0._12_4_ = extraout_XMM0_Dd;
            auStack_90._0_4_ = UVar30.fields.z;
            UVar30.fields.z = fStack_d8;
            UVar30.fields._0_8_ = IStack_e0.rgctxDataDummy;
            UVar30 = UnityEngine_Transform__TransformPoint
                               ((UnityEngine_Transform_o *)UVar14,UVar30,(MethodInfo *)0x0);
            uStack_98 = extraout_XMM0_Dc_00;
            auStack_a0 = (undefined1  [8])UVar30.fields._0_8_;
            uStack_94 = extraout_XMM0_Dd_00;
            auStack_70._0_4_ = UVar30.fields.z;
            in_XMM1_Db = 0.0;
            in_XMM1_Dc = 0;
            in_XMM1_Dd = 0;
            textInfo._0_4_ = 0;
            textInfo._4_4_ = 0;
            position_00.fields.y = fStack_ec;
            position_00.fields.x = (float)auStack_c0._0_4_;
            position_00.fields.z = 0.0;
            UVar30 = UnityEngine_Transform__TransformPoint
                               ((UnityEngine_Transform_o *)UVar14,position_00,(MethodInfo *)0x0);
            auVar2 = auStack_b0;
            in_XMM1_Da = UVar30.fields.z;
            auStack_c0._8_4_ = extraout_XMM0_Dc_01;
            auStack_c0._0_8_ = UVar30.fields._0_8_;
            auStack_c0._12_4_ = extraout_XMM0_Dd_01;
            auStack_80._0_4_ = in_XMM1_Da;
            if ((UI_ChatDisplayNameRange_Fields)__this_03 != (UI_ChatDisplayNameRange_Fields)0x0) {
              position_01.fields.z = (float)auStack_90._0_4_;
              position_01.fields.x = (float)auStack_b0._0_4_;
              position_01.fields.y = (float)auStack_b0._4_4_;
              auStack_b0 = auVar2;
              UVar30 = UnityEngine_Transform__InverseTransformPoint
                                 ((UnityEngine_Transform_o *)__this_03,position_01,(MethodInfo *)0x0);
              auVar2 = _auStack_a0;
              auStack_90._8_4_ = extraout_XMM0_Dc_02;
              auStack_90._0_8_ = UVar30.fields._0_8_;
              auStack_90._12_4_ = extraout_XMM0_Dd_02;
              position_02.fields.z = (float)auStack_70._0_4_;
              position_02.fields.x = (float)auStack_a0._0_4_;
              position_02.fields.y = (float)auStack_a0._4_4_;
              _auStack_a0 = auVar2;
              UVar30 = UnityEngine_Transform__InverseTransformPoint
                                 ((UnityEngine_Transform_o *)__this_03,position_02,(MethodInfo *)0x0);
              auVar2 = auStack_c0;
              uStack_98 = extraout_XMM0_Dc_03;
              auStack_a0 = (undefined1  [8])UVar30.fields._0_8_;
              uStack_94 = extraout_XMM0_Dd_03;
              in_XMM1_Db = 0.0;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              textInfo._0_4_ = 0;
              textInfo._4_4_ = 0;
              position_03.fields.z = (float)auStack_80._0_4_;
              position_03.fields.x = (float)auStack_c0._0_4_;
              position_03.fields.y = (float)auStack_c0._4_4_;
              auStack_c0 = auVar2;
              UVar30 = UnityEngine_Transform__InverseTransformPoint
                                 ((UnityEngine_Transform_o *)__this_03,position_03,(MethodInfo *)0x0);
              in_XMM1_Da = UVar30.fields.z;
              uStack_68 = extraout_XMM0_Dc_04;
              auStack_70 = UVar30.fields._0_8_;
              uStack_64 = extraout_XMM0_Dd_04;
              if (*(Il2CppType **)((long)UVar24 + 0x28) != (Il2CppType *)0x0) {
                auStack_b0._0_4_ = (*(Il2CppType **)((long)UVar24 + 0x28))[3].bits;
                UVar29 = UnityEngine_RectTransform__get_rect
                                   ((UnityEngine_RectTransform_o *)__this_03,(MethodInfo *)0x0);
                auStack_c0._8_4_ = in_XMM1_Dc;
                auStack_c0._0_8_ = UVar29.fields._8_8_;
                auStack_c0._12_4_ = in_XMM1_Dd;
                UVar8 = UnityEngine_RectTransform__get_pivot
                                  ((UnityEngine_RectTransform_o *)__this_03,(MethodInfo *)0x0);
                auStack_50._8_4_ = extraout_XMM0_Dc_05;
                auStack_50._0_4_ = UVar8.fields.x;
                auStack_50._4_4_ = UVar8.fields.y;
                auStack_50._12_4_ = extraout_XMM0_Dd_05;
                UVar29 = UnityEngine_RectTransform__get_rect
                                   ((UnityEngine_RectTransform_o *)__this_03,(MethodInfo *)0x0);
                in_XMM1_Da = UVar29.fields.m_Width;
                in_XMM1_Db = UVar29.fields.m_Height;
                auStack_80._8_4_ = in_XMM1_Dc;
                auStack_80._0_8_ = UVar29.fields._8_8_;
                auStack_80._12_4_ = in_XMM1_Dd;
                textInfo._0_4_ = 0;
                textInfo._4_4_ = 0;
                UVar8 = UnityEngine_RectTransform__get_pivot
                                  ((UnityEngine_RectTransform_o *)__this_03,(MethodInfo *)0x0);
                auStack_60._8_4_ = extraout_XMM0_Dc_06;
                auStack_60._0_4_ = UVar8.fields.x;
                auStack_60._4_4_ = UVar8.fields.y;
                auStack_60._12_4_ = extraout_XMM0_Dd_06;
                if (*(UnityEngine_Component_o **)((long)UVar24 + 0x30) != (UnityEngine_Component_o *)0x0) {
                  textInfo._0_4_ = 0;
                  textInfo._4_4_ = 0;
                  pUVar15 = UnityEngine_Component__get_gameObject
                                      (*(UnityEngine_Component_o **)((long)UVar24 + 0x30),(MethodInfo *)0x0);
                  if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                    textInfo._0_4_ = 1;
                    textInfo._4_4_ = 0;
                    UnityEngine_GameObject__SetActive(pUVar15,1,(MethodInfo *)0x0);
                    if (*(UnityEngine_RectTransform_o **)((long)UVar24 + 0x30) !=
                        (UnityEngine_RectTransform_o *)0x0) {
                      fVar26 = (float)auStack_b0._0_4_;
                      if ((float)auStack_b0._0_4_ <= (float)auStack_a0._4_4_ - (float)auStack_90._4_4_) {
                        fVar26 = (float)auStack_a0._4_4_ - (float)auStack_90._4_4_;
                      }
                      auStack_b0._0_4_ = fVar26;
                      in_XMM1_Db = 0.0;
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      in_XMM1_Da = (1.0 - (float)auStack_60._4_4_) * (float)auStack_80._4_4_;
                      textInfo._0_4_ = 0;
                      textInfo._4_4_ = 0;
                      UVar8.fields.y = (fVar26 * 0.5 + (float)auStack_70._4_4_) - in_XMM1_Da;
                      UVar8.fields.x =
                           (float)auStack_c0._0_4_ * (float)auStack_50._0_4_ + (float)auStack_90._0_4_;
                      in_XMM2_Da = (float)auStack_70._4_4_;
                      in_XMM2_Db = (float)auStack_70._4_4_;
                      in_XMM2_Dc = uStack_68;
                      in_XMM2_Dd = uStack_64;
                      UnityEngine_RectTransform__set_anchoredPosition
                                (*(UnityEngine_RectTransform_o **)((long)UVar24 + 0x30),UVar8,
                                 (MethodInfo *)0x0);
                      if (*(UnityEngine_RectTransform_o **)((long)UVar24 + 0x30) !=
                          (UnityEngine_RectTransform_o *)0x0) {
                        in_XMM1_Da = (float)auStack_a0._0_4_ - (float)auStack_90._0_4_;
                        fVar26 = 0.0;
                        if (0.0 <= in_XMM1_Da) {
                          fVar26 = in_XMM1_Da;
                        }
                        textInfo._0_4_ = 0;
                        textInfo._4_4_ = 0;
                        in_XMM1_Db = (float)auStack_a0._4_4_;
                        in_XMM1_Dc = uStack_98;
                        in_XMM1_Dd = uStack_94;
                        UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                  (*(UnityEngine_RectTransform_o **)((long)UVar24 + 0x30),0,fVar26,
                                   (MethodInfo *)0x0);
                        if (*(UnityEngine_RectTransform_o **)((long)UVar24 + 0x30) !=
                            (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                    (*(UnityEngine_RectTransform_o **)((long)UVar24 + 0x30),1,
                                     (float)auStack_b0._0_4_,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043b7336:
  UVar14 = (UI_ChatDisplayNameRange_Fields)__this_03;
  il2cpp_runtime_helper_022b2fd0();
  puVar11 = &stack0xffffffffffffff00;
  do {
    puVar23 = puVar11;
    *(UI_ChatDisplayNameRange_Fields **)(puVar23 + -8) = unaff_RBP;
    *(UI_ChatDisplayNameRange_Fields *)(puVar23 + -0x10) = unaff_R15;
    *(long **)(puVar23 + -0x18) = __this_03;
    *(UI_ChatDisplayNameRange_Fields **)(puVar23 + -0x20) = x;
    pIVar22 = in_RCX;
    method_01 = (UI_ChatDisplayNameRange_Fields)textInfo;
    method_02 = (UI_ChatDisplayNameRange_Fields *)UVar14;
    if (g_data_057ae37e == '\0') {
      *(undefined8 *)(puVar23 + -0x80) = 0x43b7365;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      *(undefined8 *)(puVar23 + -0x80) = 0x43b7371;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      *(undefined8 *)(puVar23 + -0x80) = 0x43b737d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TMP_TextUtilities);
      method_02 = &"suggestion_";
      *(undefined8 *)(puVar23 + -0x80) = 0x43b7389;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae37e = '\x01';
      pIVar22 = in_RCX;
    }
    *(undefined8 *)(puVar23 + -0x58) = 0;
    *(undefined8 *)(puVar23 + -0x50) = 0;
    *(undefined8 *)(puVar23 + -0x68) = 0;
    *(undefined8 *)(puVar23 + -0x60) = 0;
    *(undefined8 *)(puVar23 + -0x48) = 0;
    *(undefined4 *)(puVar23 + -0x6c) = 0;
    *(undefined4 *)(puVar23 + -0x70) = 0;
    if ((UI_ChatDisplayNameRange_Fields)textInfo == (UI_ChatDisplayNameRange_Fields)0x0) {
label_043b75a2:
      *(undefined8 *)(puVar23 + -0x80) = 0x43b75a7;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      unaff_R15 = *(UI_ChatDisplayNameRange_Fields *)((long)UVar14 + 0x10);
      uVar21 = *(undefined8 *)((long)textInfo + 0x104);
      uVar27 = (undefined4)uVar21;
      uVar28 = (undefined4)((ulong)uVar21 >> 0x20);
      if (*(int *)(TypeInfo_TMP_TextUtilities + 0xe4) == 0) {
        *(undefined8 *)(puVar23 + -0x38) = uVar21;
        *(undefined8 *)(puVar23 + -0x30) = 0;
        *(undefined8 *)(puVar23 + -0x80) = 0x43b73e8;
        il2cpp_runtime_helper_02337ed0();
        uVar27 = *(undefined4 *)(puVar23 + -0x38);
        uVar28 = *(undefined4 *)(puVar23 + -0x34);
      }
      in_XMM1_Db = 0.0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      method_01.SourceStartIndex = 0;
      method_01.SourceEndIndex = 0;
      *(undefined8 *)(puVar23 + -0x80) = 0x43b73fc;
      position_04.fields.y = (float)uVar28;
      position_04.fields.x = (float)uVar27;
      position_04.fields.z = 0.0;
      in_XMM1_Da = 0.0;
      method_02 = (UI_ChatDisplayNameRange_Fields *)unaff_R15;
      uVar13 = TMPro_TMP_TextUtilities__FindIntersectingLink
                         ((TMPro_TMP_Text_o *)unaff_R15,position_04,(UnityEngine_Camera_o *)0x0,
                          (MethodInfo *)0x0);
      if (uVar13 == 0xffffffff) {
        return;
      }
      pIVar22 = (Il2CppRGCTXData *)0x0;
      if (*(InvokerMethod *)((long)UVar14 + 0x10) == (InvokerMethod)0x0) goto label_043b75a2;
      lVar16 = *(long *)(*(InvokerMethod *)((long)UVar14 + 0x10) + 0x368);
      pIVar22 = (Il2CppRGCTXData *)0x0;
      if ((lVar16 == 0) || (pIVar22 = *(Il2CppRGCTXData **)(lVar16 + 0x48), pIVar22 == (Il2CppRGCTXData *)0x0)
         ) goto label_043b75a2;
      if (uVar13 < *(uint *)(pIVar22 + 3)) {
        lVar16 = (long)(int)uVar13;
        IVar9 = pIVar22[lVar16 * 5 + 4];
        IVar10 = (pIVar22 + lVar16 * 5 + 4)[1];
        pIVar1 = pIVar22 + lVar16 * 5 + 6;
        in_XMM1_Da = *(float *)pIVar1;
        in_XMM1_Db = *(float *)((long)pIVar1 + 4);
        in_XMM1_Dc = *(undefined4 *)(pIVar1 + 1);
        in_XMM1_Dd = *(undefined4 *)((long)pIVar1 + 0xc);
        *(Il2CppRGCTXData *)(puVar23 + -0x48) = pIVar22[lVar16 * 5 + 8];
        *(float *)(puVar23 + -0x58) = in_XMM1_Da;
        *(float *)(puVar23 + -0x54) = in_XMM1_Db;
        *(undefined4 *)(puVar23 + -0x50) = in_XMM1_Dc;
        *(undefined4 *)(puVar23 + -0x4c) = in_XMM1_Dd;
        *(Il2CppRGCTXData *)(puVar23 + -0x68) = IVar9;
        *(Il2CppRGCTXData *)(puVar23 + -0x60) = IVar10;
        method_02 = (UI_ChatDisplayNameRange_Fields *)((long)puVar23 + -0x68);
        method_01.SourceStartIndex = 0;
        method_01.SourceEndIndex = 0;
        *(undefined8 *)(puVar23 + -0x80) = 0x43b7468;
        __this_02 = (UI_ChatDisplayNameRange_Fields)
                    TMPro_TMP_LinkInfo__GetLinkID
                              ((TMPro_TMP_LinkInfo_o)*(TMPro_TMP_LinkInfo_Fields *)(puVar23 + -0x78),
                               (MethodInfo *)method_02);
        if (__this_02 != (UI_ChatDisplayNameRange_Fields)0x0) {
          unaff_RBP = &"suggestion_";
          *(undefined8 *)(puVar23 + -0x80) = 0x43b7489;
          method_01 = "suggestion_";
          method_02 = (UI_ChatDisplayNameRange_Fields *)__this_02;
          bVar12 = System_String__StartsWith
                             ((System_String_o *)__this_02,(System_String_o *)"suggestion_",(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            method_01 = (UI_ChatDisplayNameRange_Fields)((long)puVar23 + -0x70);
            *(undefined8 *)(puVar23 + -0x80) = 0x43b74f7;
            bVar12 = System_Int32__TryParse
                               ((System_String_o *)__this_02,(int32_t *)method_01,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              return;
            }
            uVar13 = *(uint *)(puVar23 + -0x70);
            unaff_RBP = (UI_ChatDisplayNameRange_Fields *)(ulong)uVar13;
            textInfo = &TypeInfo_PhotonNetwork;
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              *(undefined8 *)(puVar23 + -0x80) = 0x43b751b;
              il2cpp_runtime_helper_02337ed0();
            }
            method_02._0_4_ = 0;
            method_02._4_4_ = 0;
            *(undefined8 *)(puVar23 + -0x80) = 0x43b7522;
            pPVar18 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            if (pPVar18 != (Photon_Realtime_Player_o *)0x0) {
              if (uVar13 == (pPVar18->fields).actorNumber) {
                return;
              }
              if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                *(undefined8 *)(puVar23 + -0x80) = 0x43b753d;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)(puVar23 + -0x80) = 0x43b7544;
              pPVar19 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
              if (pPVar19 == (Photon_Realtime_Room_o *)0x0) {
                return;
              }
              if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                *(undefined8 *)(puVar23 + -0x80) = 0x43b755a;
                il2cpp_runtime_helper_02337ed0();
              }
              method_02._0_4_ = 0;
              method_02._4_4_ = 0;
              *(undefined8 *)(puVar23 + -0x80) = 0x43b7561;
              pPVar19 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
              if (pPVar19 != (Photon_Realtime_Room_o *)0x0) {
                method_01.SourceEndIndex = 0;
                method_01.SourceStartIndex = *(uint *)(puVar23 + -0x70);
                unaff_RBP = (UI_ChatDisplayNameRange_Fields *)pPVar19->klass;
                pIVar22 = (Il2CppRGCTXData *)
                          (((Photon_Realtime_Room_c *)unaff_RBP)->vtable)._10_GetPlayer.method;
                pIVar6 = (((Photon_Realtime_Room_c *)unaff_RBP)->vtable)._10_GetPlayer.methodPtr;
                *(undefined8 *)(puVar23 + -0x80) = 0x43b757f;
                pPVar18 = (Photon_Realtime_Player_o *)(*pIVar6)(pPVar19,method_01,0);
                if (pPVar18 == (Photon_Realtime_Player_o *)0x0) {
                  return;
                }
                __this_00 = *(UI_ChatPanel_o **)((long)UVar14 + 0x28);
                method_02._0_4_ = 0;
                method_02._4_4_ = 0;
                if (__this_00 != (UI_ChatPanel_o *)0x0) {
                  *(undefined8 *)(puVar23 + -0x80) = 0x43b7597;
                  UI_ChatPanel__EnterPMMode(__this_00,pPVar18,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            textInfo = (long *)__this_02;
            if ("suggestion_" != (UI_ChatDisplayNameRange_Fields)0x0) {
              iVar3 = *(int32_t *)((long)"suggestion_" + 0x10);
              *(undefined8 *)(puVar23 + -0x80) = 0x43b74a7;
              pSVar17 = System_String__Substring((System_String_o *)__this_02,iVar3,(MethodInfo *)0x0);
              *(undefined8 *)(puVar23 + -0x80) = 0x43b74b6;
              bVar12 = System_Int32__TryParse(pSVar17,(int32_t *)(puVar23 + -0x6c),(MethodInfo *)0x0);
              if ((char)bVar12 == '\0') {
                return;
              }
              iVar3 = *(int32_t *)(puVar23 + -0x6c);
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                *(undefined8 *)(puVar23 + -0x80) = 0x43b74da;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)(puVar23 + -0x80) = 0x43b74e3;
              GameManagers_ChatManager__HandleSuggestionClick(iVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_043b75a2;
      }
    }
    *(undefined8 *)(puVar23 + -0x80) = 0x43b75ac;
    uVar27 = il2cpp_runtime_helper_022b2ca0();
    *(UI_ChatDisplayNameRange_Fields *)(puVar23 + -0x80) = unaff_R15;
    *(UI_ChatDisplayNameRange_Fields *)(puVar23 + -0x88) = UVar14;
    *(uint32_t **)(puVar23 + -0x90) = unaff_R13;
    *(UI_ChatDisplayNameRange_Fields *)(puVar23 + -0x98) = UVar24;
    *(long **)(puVar23 + -0xa0) = textInfo;
    *(float *)(puVar23 + -0xb0) = in_XMM2_Da;
    *(float *)(puVar23 + -0xac) = in_XMM2_Db;
    *(undefined4 *)(puVar23 + -0xa8) = in_XMM2_Dc;
    *(undefined4 *)(puVar23 + -0xa4) = in_XMM2_Dd;
    *(float *)(puVar23 + -0xc0) = in_XMM1_Da;
    *(float *)(puVar23 + -0xbc) = in_XMM1_Db;
    *(undefined4 *)(puVar23 + -0xb8) = in_XMM1_Dc;
    *(undefined4 *)(puVar23 + -0xb4) = in_XMM1_Dd;
    *(undefined4 *)(puVar23 + -0xcc) = uVar27;
    in_RCX = pIVar22;
    unaff_R15 = (UI_ChatDisplayNameRange_Fields)method_02;
    if (g_data_057ae38b == '\0') {
      *(undefined8 *)(puVar23 + -0xd8) = 0x43b7605;
      UVar24 = method_01;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae38b = '\x01';
      *(undefined8 *)(puVar23 + -0xd8) = 0x43b7614;
      UI_ChatPlayerNameOverlay__BuildIfNeeded((UI_ChatPlayerNameOverlay_o *)method_02,(MethodInfo *)UVar24);
    }
    else {
      *(undefined8 *)(puVar23 + -0xd8) = 0x43b75ea;
      UI_ChatPlayerNameOverlay__BuildIfNeeded((UI_ChatPlayerNameOverlay_o *)method_02,(MethodInfo *)method_01)
      ;
    }
    if (method_01 == (UI_ChatDisplayNameRange_Fields)0x0) {
      method_01 = **(UI_ChatDisplayNameRange_Fields **)(g_data_057b9c00 + 0xb8);
    }
    if ((UI_ChatDisplayNameRange_Fields)method_02 != (UI_ChatDisplayNameRange_Fields)0x0) {
      unaff_R13 = (uint32_t *)((long)method_02 + 0x48);
      *(UI_ChatDisplayNameRange_Fields *)((long)method_02 + 0x48) = method_01;
      *(undefined8 *)(puVar23 + -0xd8) = 0x43b764f;
      il2cpp_runtime_helper_022b4080(unaff_R13);
      *(Il2CppRGCTXData **)(puVar23 + -200) = pIVar22;
      ((_union_13 *)((long)method_02 + 0x38))->rgctx_data = pIVar22;
      method_01.SourceStartIndex = 0;
      method_01.SourceEndIndex = 0;
      unaff_R15 = (UI_ChatDisplayNameRange_Fields)((long)puVar23 + -200);
      *(undefined8 *)(puVar23 + -0xd8) = 0x43b7667;
      bVar12 = UI_ChatDisplayNameRange__get_IsValid((UI_ChatDisplayNameRange_o)unaff_R15,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        if (*(long *)unaff_R13 == 0) goto label_043b7778;
        method_01._1_7_ = 0;
        method_01.SourceStartIndex._0_1_ = 0 < *(int *)(*(long *)unaff_R13 + 0x10);
      }
      *(char *)((long)method_02 + 0x40) = (char)method_01.SourceStartIndex;
      pPVar7 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
      unaff_R15.SourceStartIndex = 0;
      unaff_R15.SourceEndIndex = 0;
      if (pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        *(undefined8 *)(puVar23 + -0xd8) = 0x43b769f;
        PatreonEffects_NameEffectLabel__set_fontSize(pPVar7,*(float *)(puVar23 + -0xcc),(MethodInfo *)0x0);
        pPVar7 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
        unaff_R15.SourceStartIndex = 0;
        unaff_R15.SourceEndIndex = 0;
        if (pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          auVar2 = *(undefined1 (*) [16])(puVar23 + -0xb0);
          in_XMM1_Da = auVar2._0_4_;
          in_XMM1_Db = auVar2._4_4_;
          in_XMM1_Dc = auVar2._8_4_;
          in_XMM1_Dd = auVar2._12_4_;
          *(undefined8 *)(puVar23 + -0xd8) = 0x43b76be;
          value.fields.b = (float)(int)auVar2._0_8_;
          value.fields.a = (float)(int)((ulong)auVar2._0_8_ >> 0x20);
          value.fields._0_8_ = *(undefined8 *)(puVar23 + -0xc0);
          PatreonEffects_NameEffectLabel__set_color(pPVar7,value,(MethodInfo *)0x0);
          pPVar7 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
          unaff_R15.SourceStartIndex = 0;
          unaff_R15.SourceEndIndex = 0;
          if (pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) {
            *(undefined8 *)(puVar23 + -0xd8) = 0x43b76d8;
            PatreonEffects_NameEffectLabel__set_richText(pPVar7,1,(MethodInfo *)0x0);
            pPVar7 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
            unaff_R15.SourceStartIndex = 0;
            unaff_R15.SourceEndIndex = 0;
            if (pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              *(undefined8 *)(puVar23 + -0xd8) = 0x43b76f2;
              PatreonEffects_NameEffectLabel__set_alignment(pPVar7,0x801,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)(puVar23 + -0xd8) = 0x43b770a;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)(puVar23 + -0xd8) = 0x43b7716;
              bVar12 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar12 != '\0') {
                pPVar7 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
                unaff_R15.SourceStartIndex = 0;
                unaff_R15.SourceEndIndex = 0;
                if (pPVar7 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_043b7778;
                *(undefined8 *)(puVar23 + -0xd8) = 0x43b772e;
                PatreonEffects_NameEffectLabel__SetFont(pPVar7,font,(MethodInfo *)0x0);
              }
              pPVar7 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
              unaff_R15.SourceStartIndex = 0;
              unaff_R15.SourceEndIndex = 0;
              if (pPVar7 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                pSVar17 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                pSVar20 = *(System_String_o **)((long)method_02 + 0x48);
                *(undefined8 *)(puVar23 + -0xd8) = 0x43b7760;
                PatreonEffects_NameEffectLabel__SetText(pPVar7,pSVar17,pSVar20,pSVar17,(MethodInfo *)0x0);
                *(undefined8 *)(puVar23 + -0xd8) = 0x43b776a;
                UI_ChatPlayerNameOverlay__SetRaycastTargets
                          ((UI_ChatPlayerNameOverlay_o *)method_02,0,method_00);
                return;
              }
            }
          }
        }
      }
    }
label_043b7778:
    *(undefined8 *)(puVar23 + -0xd8) = 0x43b777d;
    il2cpp_runtime_helper_022b2c90();
    *(Il2CppRGCTXData **)(puVar23 + -0xd8) = pIVar22;
    *(TMPro_TMP_FontAsset_o **)(puVar23 + -0xe0) = font;
    *(UI_ChatDisplayNameRange_Fields *)(puVar23 + -0xe8) = method_01;
    if (g_data_057ae392 == '\0') {
      *(undefined8 *)(puVar23 + -0x100) = 0x43b77a1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar23 + -0x100) = 0x43b77ad;
      il2cpp_runtime_helper_023445d0(&"|");
      g_data_057ae392 = '\x01';
    }
    x = *(UI_ChatDisplayNameRange_Fields **)((long)unaff_R15 + 0x28);
    __this_03 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar23 + -0x100) = 0x43b77d0;
      il2cpp_runtime_helper_02337ed0();
    }
    textInfo._0_4_ = 0;
    textInfo._4_4_ = 0;
    *(undefined8 *)(puVar23 + -0x100) = 0x43b77dc;
    pSVar17 = (System_String_o *)x;
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    if (*(Il2CppType **)((long)unaff_R15 + 0x28) != (Il2CppType *)0x0) {
      x = (*(Il2CppType **)((long)unaff_R15 + 0x28))[6].data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar23 + -0x100) = 0x43b7809;
        il2cpp_runtime_helper_02337ed0(0);
      }
      *(undefined8 *)(puVar23 + -0x100) = 0x43b7815;
      bVar12 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        return;
      }
      pSVar17 = *(System_String_o **)((long)unaff_R15 + 0x48);
      textInfo._0_4_ = 0;
      textInfo._4_4_ = 0;
      *(undefined8 *)(puVar23 + -0x100) = 0x43b7829;
      bVar12 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        return;
      }
      if (*(Il2CppType **)((long)unaff_R15 + 0x28) != (Il2CppType *)0x0) {
        __this_01 = (*(Il2CppType **)((long)unaff_R15 + 0x28))[6].data;
        pSVar17 = *(System_String_o **)((long)unaff_R15 + 0x48);
        x = &"|";
        *(undefined8 *)(puVar23 + -0x100) = 0x43b7852;
        textInfo = (long *)"|";
        pSVar20 = System_String__Concat_3ae5ba0(pSVar17,(System_String_o *)"|",(MethodInfo *)0x0);
        __this_03._0_4_ = 0;
        __this_03._4_4_ = 0;
        if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
          *(undefined8 *)(puVar23 + -0x100) = 0x43b786f;
          UVar8 = TMPro_TMP_Text__GetPreferredValues_4c70170
                            (__this_01,pSVar20,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
          auVar2._8_4_ = extraout_XMM0_Dc_07;
          auVar2._0_4_ = UVar8.fields.x;
          auVar2._4_4_ = UVar8.fields.y;
          auVar2._12_4_ = extraout_XMM0_Dd_07;
          *(undefined1 (*) [16])(puVar23 + -0xf8) = auVar2;
          *(undefined8 *)(puVar23 + -0x100) = 0x43b788b;
          TMPro_TMP_Text__GetPreferredValues_4c70170
                    (__this_01,(System_String_o *)"|",3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
          return;
        }
      }
    }
    *(undefined8 *)(puVar23 + -0x100) = 0x43b78ac;
    uVar21 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)(puVar23 + -0x100) = uVar21;
    UVar14 = (UI_ChatDisplayNameRange_Fields)pSVar17[1].monitor;
    puVar11 = puVar23 + -0xf8;
    UVar24 = (UI_ChatDisplayNameRange_Fields)method_02;
    if (UVar14 == (UI_ChatDisplayNameRange_Fields)0x0) {
      *(undefined8 *)(puVar23 + -0x108) = 0x43b78c5;
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)UVar14,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// UI.ChatPlayerNameOverlay$$Clear
// il2cpp: void UI_ChatPlayerNameOverlay__Clear (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x43b6aa0

void UI_ChatPlayerNameOverlay__Clear(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  PatreonEffects_NameEffectLabel_o *pPVar1;
  System_String_o *prefix;
  UnityEngine_RectTransform_o *x;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_Vector2_o UVar3;
  bool_conflict bVar4;
  undefined8 in_RAX;
  UnityEngine_GameObject_o *__this_00;
  undefined8 unaff_RBX;
  MethodInfo *method_00;
  UI_ChatPanel_ChatLineView_o *__this_01;
  TMPro_TextMeshProUGUI_o *__this_02;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar5;
  float fVar6;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  UnityEngine_Events_UnityAction_o *in_stack_00000008;
  float fStack_28;
  float fStack_24;
  
  if (g_data_057ae38c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae38c = '\x01';
  }
  *(undefined1 *)&(__this->fields)._hasRange = 0;
  (__this->fields)._nameText = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._nameText);
  pPVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pPVar1 = (__this->fields)._label;
    __this_01 = (UI_ChatPanel_ChatLineView_o *)0x0;
    if (pPVar1 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_043b6bb7;
    method_00 = (MethodInfo *)0x0;
    PatreonEffects_NameEffectLabel__ClearNameEffect(pPVar1,(MethodInfo *)0x0);
    pPVar1 = (__this->fields)._label;
    __this_01 = (UI_ChatPanel_ChatLineView_o *)0x0;
    if (pPVar1 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_043b6bb7;
    prefix = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    PatreonEffects_NameEffectLabel__SetText(pPVar1,prefix,prefix,prefix,(MethodInfo *)0x0);
  }
  x = (__this->fields)._labelRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  __this_01 = (UI_ChatPanel_ChatLineView_o *)(__this->fields)._labelRect;
  if (__this_01 != (UI_ChatPanel_ChatLineView_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
      return;
    }
  }
label_043b6bb7:
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (__this_01->fields)._displayText;
  if (method_00 == (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
    fVar6 = (__this_01->fields)._styledFontSize + -8.0;
    fVar5 = 48.0;
    if (48.0 <= fVar6) {
      fVar5 = fVar6;
    }
    UVar3 = TMPro_TMP_Text__GetPreferredValues_4c70170
                      ((TMPro_TMP_Text_o *)__this_02,(System_String_o *)method_00,fVar5,0.0,(MethodInfo *)0x0)
    ;
    pTVar2 = (__this_01->fields)._displayText;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      fVar5 = *(float *)&(pTVar2->fields).m_spriteColor.fields.r;
      fVar6 = UVar3.fields.y;
      if (UVar3.fields.y <= fVar5) {
        fVar6 = fVar5;
      }
      UI_ChatPanel_ChatLineView__SetRowHeight(__this_01,fVar6,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (__this_02->fields).m_OnDirtyVertsCallback = in_stack_00000008;
  fStack_28 = (float)in_RAX;
  fStack_24 = (float)((ulong)in_RAX >> 0x20);
  (__this_02->fields).m_VertsDirty = (bool_conflict)unaff_R15;
  (__this_02->fields).m_MaterialDirty = (bool_conflict)((ulong)unaff_R15 >> 0x20);
  *(undefined4 *)&(__this_02->fields).m_OnDirtyLayoutCallback = unaff_retaddr;
  *(undefined4 *)((long)&(__this_02->fields).m_OnDirtyLayoutCallback + 4) = unaff_retaddr_00;
  *(int *)&(__this_02->fields).m_CanvasRenderer = (int)unaff_R12;
  *(int *)((long)&(__this_02->fields).m_CanvasRenderer + 4) = (int)((ulong)unaff_R12 >> 0x20);
  *(int *)&(__this_02->fields).m_Canvas = (int)unaff_R14;
  *(int *)((long)&(__this_02->fields).m_Canvas + 4) = (int)((ulong)unaff_R14 >> 0x20);
  (__this_02->fields).m_RaycastPadding.fields.z = fStack_28;
  (__this_02->fields).m_RaycastPadding.fields.w = fStack_24;
  *(int *)&(__this_02->fields).m_RectTransform = (int)unaff_RBX;
  *(int *)((long)&(__this_02->fields).m_RectTransform + 4) = (int)((ulong)unaff_RBX >> 0x20);
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).m_RaycastPadding.fields.z,0);
  *(undefined1 *)&(__this_02->fields).m_OnDirtyMaterialCallback = 1;
  *(undefined1 *)((long)&(__this_02->fields).m_OnDirtyMaterialCallback + 2) = 0;
  return;
}


// UI.ChatPlayerNameOverlay$$OnDestroy
// il2cpp: void UI_ChatPlayerNameOverlay__OnDestroy (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x43b8a00

void UI_ChatPlayerNameOverlay__OnDestroy(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  TMPro_TextMeshProUGUI_o *pTVar5;
  Il2CppMethodPointer vtableDispatch;
  TMPro_TMP_CharacterInfo_array *pTVar6;
  TMPro_TMP_MeshInfo_array *pTVar7;
  UnityEngine_Color32_array *pUVar8;
  undefined8 uVar9;
  bool_conflict bVar10;
  UI_ChatDisplayNameRange_Fields UVar11;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  uint uVar12;
  UnityEngine_Vector3_Fields *max;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float *extraout_RDX_01;
  long lVar13;
  uint uVar14;
  UI_ChatPlayerNameOverlay_o *pUVar15;
  TMPro_TMP_TextInfo_o *textInfo;
  TMPro_TMP_TextInfo_o *pTVar16;
  long *segment;
  float *baseline;
  int32_t *firstLine;
  long *unaff_R12;
  UnityEngine_Vector3_Fields *pUVar17;
  UI_ChatDisplayNameRange_Fields UVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  MethodInfo *in_stack_ffffffffffffff28;
  float fStack_c4;
  int32_t iStack_c0;
  int32_t iStack_bc;
  UnityEngine_Vector3_Fields UStack_b8;
  UnityEngine_Vector3_Fields UStack_a8;
  UI_ChatDisplayNameRange_Fields UStack_98;
  long *plStack_90;
  
  if (g_data_057ae38d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HideSourceName);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae38d = '\x01';
  }
  pTVar5 = (__this->fields)._source;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    return;
  }
  pTVar5 = (__this->fields)._source;
  UVar11 = (UI_ChatDisplayNameRange_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
  UVar18 = UVar11;
  System_Action_object____ctor();
  if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
    vtableDispatch = (pTVar5->klass->vtable)._79_remove_OnPreRenderText.methodPtr;
    (*vtableDispatch)
              (pTVar5,UVar11,(pTVar5->klass->vtable)._79_remove_OnPreRenderText.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar15 = __this;
  segment = (long *)UVar18;
  if (g_data_057ae38f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    segment = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae38f = '\x01';
  }
  uVar14 = (uint)pUVar15;
  if (__this != (UI_ChatPlayerNameOverlay_o *)0x0) {
    UVar11 = (UI_ChatDisplayNameRange_Fields)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = 0;
    segment = (long *)UVar11;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)UVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if (UVar11 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8d15;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar11,0,(MethodInfo *)0x0);
    }
    UVar11 = (UI_ChatDisplayNameRange_Fields)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = 0;
    segment = (long *)UVar11;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)UVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((char)bVar10 != '\0') {
      if (UVar11 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8d15;
      uVar14 = 0;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar11,0,(MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
      segment = (long *)UVar11;
    }
    lVar13 = *(long *)&((UnityEngine_Color_o *)((long)UVar18 + 0x28))->fields;
    if (lVar13 != 0) {
      segment = *(long **)(lVar13 + 0x58);
      uVar14 = 0;
      UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)segment,0,method_00);
      lVar13 = *(long *)&((UnityEngine_Color_o *)((long)UVar18 + 0x28))->fields;
      if (lVar13 != 0) {
        segment = *(long **)(lVar13 + 0x68);
        uVar14 = 0;
        UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)segment,0,method_01);
        lVar13 = *(long *)&((UnityEngine_Color_o *)((long)UVar18 + 0x28))->fields;
        if (lVar13 != 0) {
          segment = *(long **)(lVar13 + 0x60);
          uVar14 = 1;
          UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)segment,1,method_02);
          lVar13 = *(long *)&((UnityEngine_Color_o *)((long)UVar18 + 0x28))->fields;
          if ((lVar13 != 0) &&
             (segment = *(long **)(lVar13 + 0x60),
             (UI_ChatDisplayNameRange_Fields)segment != (UI_ChatDisplayNameRange_Fields)0x0)) {
            uVar14 = 0;
            __this_00 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)segment,(MethodInfo *)0x0);
            if (g_data_057a694c == '\0') {
              segment = &TypeInfo_Vector2;
              il2cpp_runtime_helper_023445d0();
              g_data_057a694c = '\x01';
            }
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_00,
                         (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              if (g_data_057a9c86 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a9c86 = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (__this_00,
                         (UnityEngine_Vector2_o)
                         *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0
                        );
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMin
                        (__this_00,
                         (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMax
                        (__this_00,
                         (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_043b8d15:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae390 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae390 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  textInfo = (TMPro_TMP_TextInfo_o *)0x0;
  UVar18 = (UI_ChatDisplayNameRange_Fields)segment;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)segment,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  if ((UI_ChatDisplayNameRange_Fields)segment != (UI_ChatDisplayNameRange_Fields)0x0) {
    UVar11 = (UI_ChatDisplayNameRange_Fields)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)segment,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    textInfo = (TMPro_TMP_TextInfo_o *)0x0;
    UVar18 = UVar11;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)UVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if (UVar11 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8dfb;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar11,0,(MethodInfo *)0x0);
    }
    textInfo = (TMPro_TMP_TextInfo_o *)0x0;
    UVar18 = (UI_ChatDisplayNameRange_Fields)segment;
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)segment,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,uVar14 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
label_043b8dfb:
  il2cpp_runtime_helper_022b2c90();
  iStack_bc = 0;
  iStack_c0 = 0;
  fStack_c4 = 0.0;
  UStack_a8.z = 0.0;
  UStack_a8.x = 0.0;
  UStack_a8.y = 0.0;
  UStack_b8.z = 0.0;
  UStack_b8.x = 0.0;
  UStack_b8.y = 0.0;
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) && (*(char *)((long)UVar18 + 0x40) != '\0')) {
    max = &UStack_b8;
    baseline = &fStack_c4;
    firstLine = &iStack_bc;
    pTVar16 = textInfo;
    UVar11 = UVar18;
    UStack_98 = (UI_ChatDisplayNameRange_Fields)segment;
    plStack_90 = unaff_R12;
    bVar10 = UI_ChatPlayerNameOverlay__TryGetSourceNameBounds
                       ((UI_ChatPlayerNameOverlay_o *)UVar18,textInfo,(UnityEngine_Vector3_o *)&UStack_a8,
                        (UnityEngine_Vector3_o *)max,baseline,firstLine,&iStack_c0,in_stack_ffffffffffffff28);
    if (((char)bVar10 != '\0') && (0 < (textInfo->fields).characterCount)) {
      lVar13 = 0x24;
      pUVar17 = (UnityEngine_Vector3_Fields *)0x0;
      pTVar6 = (textInfo->fields).characterInfo;
      while (pTVar6 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        max = (UnityEngine_Vector3_Fields *)(ulong)(uint)pTVar6->max_length;
        if (max <= pUVar17) goto label_043b8f83;
        if ((*(byte *)((long)&pTVar6->m_Items[0].fields.scale + lVar13) & 1) != 0) {
          uVar14 = *(uint *)((long)&pTVar6->m_Items[0].fields.textElement + lVar13 + 4);
          uVar3 = *(uint *)((long)&pTVar6->m_Items[0].fields.spriteIndex + lVar13);
          uVar12 = *(uint *)((long)pTVar6->m_Items + lVar13 + -0x20);
          pTVar16 = (TMPro_TMP_TextInfo_o *)(ulong)uVar12;
          UVar11 = (UI_ChatDisplayNameRange_Fields)((long)UVar18 + 0x38);
          bVar10 = UI_ChatDisplayNameRange__ContainsSourceIndex
                             ((UI_ChatDisplayNameRange_o)((long)UVar18 + 0x38),uVar12,(MethodInfo *)0x0);
          if ((char)bVar10 != '\0') {
            pTVar7 = (textInfo->fields).meshInfo;
            if (pTVar7 == (TMPro_TMP_MeshInfo_array *)0x0) break;
            if ((uint)pTVar7->max_length <= uVar14) goto label_043b8f83;
            max = (UnityEngine_Vector3_Fields *)((long)(int)uVar14 * 0x50);
            pUVar8 = pTVar7->m_Items[(int)uVar14].fields.colors32;
            if (pUVar8 != (UnityEngine_Color32_array *)0x0) {
              uVar14 = (uint)pUVar8->max_length;
              uVar12 = uVar3 + 3;
              max = (UnityEngine_Vector3_Fields *)(ulong)uVar12;
              if ((int)uVar12 < (int)uVar14) {
                if (uVar14 <= uVar3) {
label_043b8f83:
                  il2cpp_runtime_helper_022b2ca0();
                  return;
                }
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)uVar3 * 4 + 3) = 0;
                if ((uint)pUVar8->max_length <= uVar3 + 1) goto label_043b8f83;
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)(uVar3 + 1) * 4 + 3) = 0;
                if (((uint)pUVar8->max_length <= uVar3 + 2) ||
                   (*(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)(uVar3 + 2) * 4 + 3) =
                         0, (uint)pUVar8->max_length <= uVar12)) goto label_043b8f83;
                max = (UnityEngine_Vector3_Fields *)(long)(int)uVar12;
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)max * 4 + 3) = 0;
              }
            }
          }
        }
        pUVar17 = (UnityEngine_Vector3_Fields *)((long)&((UnityEngine_Vector3_Fields *)&pUVar17->x)->x + 1);
        lVar13 = lVar13 + 0x178;
        if ((long)(textInfo->fields).characterCount <= (long)pUVar17) {
          return;
        }
        pTVar6 = (textInfo->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
      extraout_RDX_01[0] = INFINITY;
      extraout_RDX_01[1] = INFINITY;
      extraout_RDX_01[2] = 0.0;
      max->x = -INFINITY;
      max->y = -INFINITY;
      max->z = 0.0;
      *baseline = 0.0;
      *firstLine = -1;
      *(undefined4 *)&in_stack_ffffffffffffff28->methodPointer = 0xffffffff;
      if (((pTVar16 == (TMPro_TMP_TextInfo_o *)0x0) || (*(char *)((long)UVar11 + 0x40) == '\0')) ||
         ((pTVar16->fields).characterCount < 1)) {
        return;
      }
      UVar18 = (UI_ChatDisplayNameRange_Fields)((long)UVar11 + 0x38);
      lVar13 = 0x194;
      uVar19 = 0;
      pTVar6 = (pTVar16->fields).characterInfo;
      while (pTVar6 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        if ((uint)pTVar6->max_length <= uVar19) goto label_043b9176;
        if ((*(byte *)((long)pTVar6->m_Items + lVar13 + -0x20) & 1) != 0) {
          iVar4 = *(int *)((long)pTVar6 + lVar13 + -0x130);
          fVar21 = *(float *)((long)pTVar6 + lVar13 + -0x78);
          fVar22 = *(float *)((long)pTVar6 + lVar13 + -0x6c);
          fVar1 = *(float *)((long)pTVar6->m_Items + lVar13 + -0x6c);
          fVar20 = *(float *)((long)pTVar6->m_Items + lVar13 + -0x68);
          fVar2 = *(float *)((long)pTVar6->m_Items + lVar13 + -100);
          UVar11 = UVar18;
          bVar10 = UI_ChatDisplayNameRange__ContainsSourceIndex
                             ((UI_ChatDisplayNameRange_o)UVar18,*(int32_t *)((long)pTVar6 + lVar13 + -0x170),
                              (MethodInfo *)0x0);
          if ((char)bVar10 != '\0') {
            if (*firstLine < 0) {
              *firstLine = iVar4;
              *baseline = fVar20;
            }
            *(int *)&in_stack_ffffffffffffff28->methodPointer = iVar4;
            if (iVar4 != *firstLine) {
              return;
            }
            fVar20 = *extraout_RDX_01;
            if (fVar21 <= *extraout_RDX_01) {
              fVar20 = fVar21;
            }
            fVar21 = extraout_RDX_01[1];
            if (fVar2 <= extraout_RDX_01[1]) {
              fVar21 = fVar2;
            }
            *extraout_RDX_01 = fVar20;
            extraout_RDX_01[1] = fVar21;
            fVar21 = ((UnityEngine_Vector3_Fields *)&max->x)->x;
            if (fVar21 <= fVar22) {
              fVar21 = fVar22;
            }
            fVar22 = max->y;
            if (max->y <= fVar1) {
              fVar22 = fVar1;
            }
            ((UnityEngine_Vector3_Fields *)&max->x)->x = fVar21;
            max->y = fVar22;
          }
        }
        uVar19 = uVar19 + 1;
        lVar13 = lVar13 + 0x178;
        if ((long)(pTVar16->fields).characterCount <= (long)uVar19) {
          return;
        }
        pTVar6 = (pTVar16->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
label_043b9176:
      il2cpp_runtime_helper_022b2ca0();
      uVar9 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
      (((UnityEngine_Vector4_o *)((long)UVar11 + 0x48))->fields).x = (float)(int)uVar9;
      (((UnityEngine_Vector4_o *)((long)UVar11 + 0x48))->fields).y = (float)(int)((ulong)uVar9 >> 0x20);
      il2cpp_runtime_helper_022b4080((UnityEngine_Vector4_o *)((long)UVar11 + 0x48));
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)UVar11,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.ChatPlayerNameOverlay$$BuildIfNeeded
// il2cpp: void UI_ChatPlayerNameOverlay__BuildIfNeeded (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x43b8660

void UI_ChatPlayerNameOverlay__BuildIfNeeded(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  UnityEngine_Object_o *pUVar5;
  long *plVar6;
  code *vtableDispatch;
  TMPro_TMP_CharacterInfo_array *pTVar7;
  TMPro_TMP_MeshInfo_array *pTVar8;
  UnityEngine_Color32_array *pUVar9;
  undefined8 uVar10;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar11;
  uint uVar12;
  System_Type_array *components;
  System_Type_o *pSVar13;
  long lVar14;
  UnityEngine_GameObject_o *pUVar15;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar16;
  PatreonEffects_NameEffectLabel_o *pPVar17;
  System_Object_array *pSVar18;
  UI_ChatDisplayNameRange_Fields UVar19;
  UI_ChatDisplayNameRange_Fields UVar20;
  uint uVar21;
  UnityEngine_Vector3_Fields *max;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  float *extraout_RDX_01;
  uint uVar22;
  UnityEngine_Component_o *__this_01;
  TMPro_TMP_TextInfo_o *textInfo;
  TMPro_TMP_TextInfo_o *pTVar23;
  float *baseline;
  int32_t *firstLine;
  UnityEngine_Vector3_Fields *pUVar24;
  UI_ChatDisplayNameRange_Fields UVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  MethodInfo *in_stack_fffffffffffffee8;
  float fStack_104;
  int32_t iStack_100;
  int32_t iStack_fc;
  UnityEngine_Vector3_Fields UStack_f8;
  UnityEngine_Vector3_Fields UStack_e8;
  UI_ChatDisplayNameRange_Fields UStack_d8;
  System_Type_array *pSStack_d0;
  
  if (g_data_057ae38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CanvasRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"Name Effect Overlay");
    g_data_057ae38e = '\x01';
  }
  pPVar17 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pPVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_043b8912:
    il2cpp_runtime_helper_022b2c90();
label_043b8917:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar13 == (System_Type_o *)0x0) || (lVar14 = il2cpp_runtime_helper_023051f0(pSVar13), lVar14 != 0)) {
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar13;
      il2cpp_runtime_helper_022b4080(components->m_Items);
      pSVar13 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
      if ((pSVar13 != (System_Type_o *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pSVar13), lVar14 == 0))
      goto label_043b891c;
      if (1 < (uint)components->max_length) {
        components->m_Items[1] = pSVar13;
        il2cpp_runtime_helper_022b4080(components->m_Items + 1,pSVar13);
        pUVar15 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor_4dfc440(pUVar15,"Name Effect Overlay",components,(MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_4e09e30(__this_00,parent,0,(MethodInfo *)0x0);
            pUVar16 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar15,MethodInfo_RectTransform_GetComponent_RectTransform);
            ppUVar1 = &(__this->fields)._labelRect;
            (__this->fields)._labelRect = pUVar16;
            il2cpp_runtime_helper_022b4080(ppUVar1);
            pUVar16 = (__this->fields)._labelRect;
            if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar16,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
              if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMax
                          (*ppUVar1,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_pivot
                            (*ppUVar1,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                  pPVar17 = (PatreonEffects_NameEffectLabel_o *)
                            UnityEngine_GameObject__AddComponent_object_(pUVar15,MethodInfo_NameEffectLabel_AddComponent_NameEffectLabel);
                  (__this->fields)._label = pPVar17;
                  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,pPVar17);
                  UI_ChatPlayerNameOverlay__ConfigureLayoutFreeNameLabel(__this,pUVar15,method_00);
                  UI_ChatPlayerNameOverlay__SetRaycastTargets(__this,0,method_01);
                  UnityEngine_GameObject__SetActive(pUVar15,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto label_043b8912;
      }
    }
    goto label_043b8917;
  }
label_043b891c:
  lVar14 = il2cpp_runtime_helper_0231b270();
  uVar26 = 0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae393 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Graphic_GetComponentsInChildren_Graphic);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae393 = '\x01';
  }
  pUVar5 = *(UnityEngine_Object_o **)(lVar14 + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  __this_01 = *(UnityEngine_Component_o **)(lVar14 + 0x28);
  if ((__this_01 != (UnityEngine_Component_o *)0x0) &&
     (pSVar18 = UnityEngine_Component__GetComponentsInChildren_object_(__this_01,1,MethodInfo_Graphic_GetComponentsInChildren_Graphic),
     pSVar18 != (System_Object_array *)0x0)) {
    uVar12 = (uint)pSVar18->max_length;
    if ((int)uVar12 < 1) {
      return;
    }
    uVar22 = 0;
    while (uVar22 < uVar12) {
      __this_01 = (UnityEngine_Component_o *)pSVar18->m_Items[(int)uVar22];
      if (__this_01 == (UnityEngine_Component_o *)0x0) goto label_043b89f8;
      (*(code *)__this_01->klass[1].vtable._1_Finalize.method)
                (__this_01,uVar26 & 0xff,__this_01->klass[1].vtable._2_GetHashCode.methodPtr);
      uVar22 = uVar22 + 1;
      uVar12 = (uint)pSVar18->max_length;
      if ((int)uVar12 <= (int)uVar22) {
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_043b89f8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae38d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HideSourceName);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae38d = '\x01';
  }
  pUVar5 = __this_01[1].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  plVar6 = __this_01[1].monitor;
  UVar19 = (UI_ChatDisplayNameRange_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
  UVar25 = UVar19;
  System_Action_object____ctor();
  if (plVar6 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar6 + 0x628);
    (*vtableDispatch)(plVar6,UVar19,*(undefined8 *)(*plVar6 + 0x630),vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar15 = (UnityEngine_GameObject_o *)__this_01;
  UVar19 = UVar25;
  if (g_data_057ae38f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    UVar19 = (UI_ChatDisplayNameRange_Fields)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae38f = '\x01';
  }
  uVar12 = (uint)pUVar15;
  if (__this_01 != (UnityEngine_Component_o *)0x0) {
    UVar20 = (UI_ChatDisplayNameRange_Fields)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_01,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    components = (System_Type_array *)&TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar12 = 0;
    UVar19 = UVar20;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)UVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (UVar20 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8d15;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar20,0,(MethodInfo *)0x0);
    }
    UVar20 = (UI_ChatDisplayNameRange_Fields)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_01,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar12 = 0;
    UVar19 = UVar20;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)UVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method_02 = extraout_RDX;
    if ((char)bVar11 != '\0') {
      if (UVar20 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8d15;
      uVar12 = 0;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar20,0,(MethodInfo *)0x0);
      method_02 = extraout_RDX_00;
      UVar19 = UVar20;
    }
    lVar14 = *(long *)&((UnityEngine_Color_o *)((long)UVar25 + 0x28))->fields;
    if (lVar14 != 0) {
      UVar19 = *(UI_ChatDisplayNameRange_Fields *)(lVar14 + 0x58);
      uVar12 = 0;
      UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)UVar19,0,method_02);
      lVar14 = *(long *)&((UnityEngine_Color_o *)((long)UVar25 + 0x28))->fields;
      if (lVar14 != 0) {
        UVar19 = *(UI_ChatDisplayNameRange_Fields *)(lVar14 + 0x68);
        uVar12 = 0;
        UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)UVar19,0,method_03);
        lVar14 = *(long *)&((UnityEngine_Color_o *)((long)UVar25 + 0x28))->fields;
        if (lVar14 != 0) {
          UVar19 = *(UI_ChatDisplayNameRange_Fields *)(lVar14 + 0x60);
          uVar12 = 1;
          UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)UVar19,1,method_04);
          lVar14 = *(long *)&((UnityEngine_Color_o *)((long)UVar25 + 0x28))->fields;
          if ((lVar14 != 0) &&
             (UVar19 = *(UI_ChatDisplayNameRange_Fields *)(lVar14 + 0x60),
             UVar19 != (UI_ChatDisplayNameRange_Fields)0x0)) {
            uVar12 = 0;
            pUVar16 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)UVar19,(MethodInfo *)0x0);
            if (g_data_057a694c == '\0') {
              UVar19 = (UI_ChatDisplayNameRange_Fields)&TypeInfo_Vector2;
              il2cpp_runtime_helper_023445d0();
              g_data_057a694c = '\x01';
            }
            if (pUVar16 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar16,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
                         ,(MethodInfo *)0x0);
              if (g_data_057a9c86 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a9c86 = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar16,(UnityEngine_Vector2_o)
                                 *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                         (MethodInfo *)0x0);
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMin
                        (pUVar16,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
                         ,(MethodInfo *)0x0);
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMax
                        (pUVar16,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
                         ,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_043b8d15:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae390 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae390 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  textInfo = (TMPro_TMP_TextInfo_o *)0x0;
  UVar25 = UVar19;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)UVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  if (UVar19 != (UI_ChatDisplayNameRange_Fields)0x0) {
    UVar20 = (UI_ChatDisplayNameRange_Fields)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)UVar19,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    textInfo = (TMPro_TMP_TextInfo_o *)0x0;
    UVar25 = UVar20;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)UVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (UVar20 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8dfb;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar20,0,(MethodInfo *)0x0);
    }
    textInfo = (TMPro_TMP_TextInfo_o *)0x0;
    UVar25 = UVar19;
    pUVar15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)UVar19,(MethodInfo *)0x0);
    if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar15,uVar12 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
label_043b8dfb:
  il2cpp_runtime_helper_022b2c90();
  iStack_fc = 0;
  iStack_100 = 0;
  fStack_104 = 0.0;
  UStack_e8.z = 0.0;
  UStack_e8.x = 0.0;
  UStack_e8.y = 0.0;
  UStack_f8.z = 0.0;
  UStack_f8.x = 0.0;
  UStack_f8.y = 0.0;
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) && (*(char *)((long)UVar25 + 0x40) != '\0')) {
    max = &UStack_f8;
    baseline = &fStack_104;
    firstLine = &iStack_fc;
    pTVar23 = textInfo;
    UVar20 = UVar25;
    UStack_d8 = UVar19;
    pSStack_d0 = components;
    bVar11 = UI_ChatPlayerNameOverlay__TryGetSourceNameBounds
                       ((UI_ChatPlayerNameOverlay_o *)UVar25,textInfo,(UnityEngine_Vector3_o *)&UStack_e8,
                        (UnityEngine_Vector3_o *)max,baseline,firstLine,&iStack_100,in_stack_fffffffffffffee8)
    ;
    if (((char)bVar11 != '\0') && (0 < (textInfo->fields).characterCount)) {
      lVar14 = 0x24;
      pUVar24 = (UnityEngine_Vector3_Fields *)0x0;
      pTVar7 = (textInfo->fields).characterInfo;
      while (pTVar7 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        max = (UnityEngine_Vector3_Fields *)(ulong)(uint)pTVar7->max_length;
        if (max <= pUVar24) goto label_043b8f83;
        if ((*(byte *)((long)&pTVar7->m_Items[0].fields.scale + lVar14) & 1) != 0) {
          uVar12 = *(uint *)((long)&pTVar7->m_Items[0].fields.textElement + lVar14 + 4);
          uVar22 = *(uint *)((long)&pTVar7->m_Items[0].fields.spriteIndex + lVar14);
          uVar21 = *(uint *)((long)pTVar7->m_Items + lVar14 + -0x20);
          pTVar23 = (TMPro_TMP_TextInfo_o *)(ulong)uVar21;
          UVar20 = (UI_ChatDisplayNameRange_Fields)((long)UVar25 + 0x38);
          bVar11 = UI_ChatDisplayNameRange__ContainsSourceIndex
                             ((UI_ChatDisplayNameRange_o)((long)UVar25 + 0x38),uVar21,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            pTVar8 = (textInfo->fields).meshInfo;
            if (pTVar8 == (TMPro_TMP_MeshInfo_array *)0x0) break;
            if ((uint)pTVar8->max_length <= uVar12) goto label_043b8f83;
            max = (UnityEngine_Vector3_Fields *)((long)(int)uVar12 * 0x50);
            pUVar9 = pTVar8->m_Items[(int)uVar12].fields.colors32;
            if (pUVar9 != (UnityEngine_Color32_array *)0x0) {
              uVar12 = (uint)pUVar9->max_length;
              uVar21 = uVar22 + 3;
              max = (UnityEngine_Vector3_Fields *)(ulong)uVar21;
              if ((int)uVar21 < (int)uVar12) {
                if (uVar12 <= uVar22) {
label_043b8f83:
                  il2cpp_runtime_helper_022b2ca0();
                  return;
                }
                *(undefined1 *)((long)&pUVar9->m_Items[0].fields.rgba + (long)(int)uVar22 * 4 + 3) = 0;
                if ((uint)pUVar9->max_length <= uVar22 + 1) goto label_043b8f83;
                *(undefined1 *)((long)&pUVar9->m_Items[0].fields.rgba + (long)(int)(uVar22 + 1) * 4 + 3) = 0;
                if (((uint)pUVar9->max_length <= uVar22 + 2) ||
                   (*(undefined1 *)((long)&pUVar9->m_Items[0].fields.rgba + (long)(int)(uVar22 + 2) * 4 + 3) =
                         0, (uint)pUVar9->max_length <= uVar21)) goto label_043b8f83;
                max = (UnityEngine_Vector3_Fields *)(long)(int)uVar21;
                *(undefined1 *)((long)&pUVar9->m_Items[0].fields.rgba + (long)max * 4 + 3) = 0;
              }
            }
          }
        }
        pUVar24 = (UnityEngine_Vector3_Fields *)((long)&((UnityEngine_Vector3_Fields *)&pUVar24->x)->x + 1);
        lVar14 = lVar14 + 0x178;
        if ((long)(textInfo->fields).characterCount <= (long)pUVar24) {
          return;
        }
        pTVar7 = (textInfo->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
      extraout_RDX_01[0] = INFINITY;
      extraout_RDX_01[1] = INFINITY;
      extraout_RDX_01[2] = 0.0;
      max->x = -INFINITY;
      max->y = -INFINITY;
      max->z = 0.0;
      *baseline = 0.0;
      *firstLine = -1;
      *(undefined4 *)&in_stack_fffffffffffffee8->methodPointer = 0xffffffff;
      if (((pTVar23 == (TMPro_TMP_TextInfo_o *)0x0) || (*(char *)((long)UVar20 + 0x40) == '\0')) ||
         ((pTVar23->fields).characterCount < 1)) {
        return;
      }
      UVar25 = (UI_ChatDisplayNameRange_Fields)((long)UVar20 + 0x38);
      lVar14 = 0x194;
      uVar26 = 0;
      pTVar7 = (pTVar23->fields).characterInfo;
      while (pTVar7 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        if ((uint)pTVar7->max_length <= uVar26) goto label_043b9176;
        if ((*(byte *)((long)pTVar7->m_Items + lVar14 + -0x20) & 1) != 0) {
          iVar4 = *(int *)((long)pTVar7 + lVar14 + -0x130);
          fVar28 = *(float *)((long)pTVar7 + lVar14 + -0x78);
          fVar29 = *(float *)((long)pTVar7 + lVar14 + -0x6c);
          fVar2 = *(float *)((long)pTVar7->m_Items + lVar14 + -0x6c);
          fVar27 = *(float *)((long)pTVar7->m_Items + lVar14 + -0x68);
          fVar3 = *(float *)((long)pTVar7->m_Items + lVar14 + -100);
          UVar20 = UVar25;
          bVar11 = UI_ChatDisplayNameRange__ContainsSourceIndex
                             ((UI_ChatDisplayNameRange_o)UVar25,*(int32_t *)((long)pTVar7 + lVar14 + -0x170),
                              (MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            if (*firstLine < 0) {
              *firstLine = iVar4;
              *baseline = fVar27;
            }
            *(int *)&in_stack_fffffffffffffee8->methodPointer = iVar4;
            if (iVar4 != *firstLine) {
              return;
            }
            fVar27 = *extraout_RDX_01;
            if (fVar28 <= *extraout_RDX_01) {
              fVar27 = fVar28;
            }
            fVar28 = extraout_RDX_01[1];
            if (fVar3 <= extraout_RDX_01[1]) {
              fVar28 = fVar3;
            }
            *extraout_RDX_01 = fVar27;
            extraout_RDX_01[1] = fVar28;
            fVar28 = ((UnityEngine_Vector3_Fields *)&max->x)->x;
            if (fVar28 <= fVar29) {
              fVar28 = fVar29;
            }
            fVar29 = max->y;
            if (max->y <= fVar2) {
              fVar29 = fVar2;
            }
            ((UnityEngine_Vector3_Fields *)&max->x)->x = fVar28;
            max->y = fVar29;
          }
        }
        uVar26 = uVar26 + 1;
        lVar14 = lVar14 + 0x178;
        if ((long)(pTVar23->fields).characterCount <= (long)uVar26) {
          return;
        }
        pTVar7 = (pTVar23->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
label_043b9176:
      il2cpp_runtime_helper_022b2ca0();
      uVar10 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
      (((UnityEngine_Vector4_o *)((long)UVar20 + 0x48))->fields).x = (float)(int)uVar10;
      (((UnityEngine_Vector4_o *)((long)UVar20 + 0x48))->fields).y = (float)(int)((ulong)uVar10 >> 0x20);
      il2cpp_runtime_helper_022b4080((UnityEngine_Vector4_o *)((long)UVar20 + 0x48));
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)UVar20,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.ChatPlayerNameOverlay$$ConfigureLayoutFreeNameLabel
// il2cpp: void UI_ChatPlayerNameOverlay__ConfigureLayoutFreeNameLabel (UI_ChatPlayerNameOverlay_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x43b8ad0

void UI_ChatPlayerNameOverlay__ConfigureLayoutFreeNameLabel
               (UI_ChatPlayerNameOverlay_o *__this,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  PatreonEffects_NameEffectLabel_o *pPVar5;
  TMPro_TMP_CharacterInfo_array *pTVar6;
  TMPro_TMP_MeshInfo_array *pTVar7;
  UnityEngine_Color32_array *pUVar8;
  undefined8 uVar9;
  bool_conflict bVar10;
  UI_ChatDisplayNameRange_Fields UVar11;
  UnityEngine_RectTransform_o *__this_00;
  UI_ChatDisplayNameRange_Fields UVar12;
  UnityEngine_GameObject_o *pUVar13;
  uint uVar14;
  UnityEngine_Vector3_Fields *max;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float *extraout_RDX_01;
  long lVar15;
  uint uVar16;
  TMPro_TMP_TextInfo_o *textInfo;
  TMPro_TMP_TextInfo_o *pTVar17;
  UI_ChatDisplayNameRange_Fields UVar18;
  float *baseline;
  int32_t *firstLine;
  undefined8 *unaff_R12;
  UnityEngine_Vector3_Fields *pUVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  MethodInfo *in_stack_ffffffffffffff40;
  float fStack_ac;
  int32_t iStack_a8;
  int32_t iStack_a4;
  UnityEngine_Vector3_Fields UStack_a0;
  UnityEngine_Vector3_Fields UStack_90;
  UI_ChatDisplayNameRange_Fields UStack_80;
  undefined8 *puStack_78;
  
  pUVar13 = root;
  UVar18 = (UI_ChatDisplayNameRange_Fields)__this;
  if (g_data_057ae38f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    UVar18 = (UI_ChatDisplayNameRange_Fields)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae38f = '\x01';
  }
  uVar16 = (uint)pUVar13;
  if (root != (UnityEngine_GameObject_o *)0x0) {
    UVar11 = (UI_ChatDisplayNameRange_Fields)UnityEngine_GameObject__GetComponent_object_(root,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar16 = 0;
    UVar18 = UVar11;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)UVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if (UVar11 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8d15;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar11,0,(MethodInfo *)0x0);
    }
    UVar11 = (UI_ChatDisplayNameRange_Fields)UnityEngine_GameObject__GetComponent_object_(root,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar16 = 0;
    UVar18 = UVar11;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)UVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((char)bVar10 != '\0') {
      if (UVar11 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8d15;
      uVar16 = 0;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar11,0,(MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
      UVar18 = UVar11;
    }
    pPVar5 = (__this->fields)._label;
    if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
      UVar18 = (UI_ChatDisplayNameRange_Fields)(pPVar5->fields)._prefixTmp;
      uVar16 = 0;
      UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)UVar18,0,method_00);
      pPVar5 = (__this->fields)._label;
      if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        UVar18 = (UI_ChatDisplayNameRange_Fields)(pPVar5->fields)._suffixTmp;
        uVar16 = 0;
        UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)UVar18,0,method_01);
        pPVar5 = (__this->fields)._label;
        if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          UVar18 = (UI_ChatDisplayNameRange_Fields)(pPVar5->fields)._nameTmp;
          uVar16 = 1;
          UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)UVar18,1,method_02);
          pPVar5 = (__this->fields)._label;
          if ((pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) &&
             (UVar18 = (UI_ChatDisplayNameRange_Fields)(pPVar5->fields)._nameTmp,
             UVar18 != (UI_ChatDisplayNameRange_Fields)0x0)) {
            uVar16 = 0;
            __this_00 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)UVar18,(MethodInfo *)0x0);
            if (g_data_057a694c == '\0') {
              UVar18 = (UI_ChatDisplayNameRange_Fields)&TypeInfo_Vector2;
              il2cpp_runtime_helper_023445d0();
              g_data_057a694c = '\x01';
            }
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_00,
                         (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              if (g_data_057a9c86 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a9c86 = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (__this_00,
                         (UnityEngine_Vector2_o)
                         *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0
                        );
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMin
                        (__this_00,
                         (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMax
                        (__this_00,
                         (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_043b8d15:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae390 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae390 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  textInfo = (TMPro_TMP_TextInfo_o *)0x0;
  UVar11 = UVar18;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)UVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  if (UVar18 != (UI_ChatDisplayNameRange_Fields)0x0) {
    UVar12 = (UI_ChatDisplayNameRange_Fields)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)UVar18,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    textInfo = (TMPro_TMP_TextInfo_o *)0x0;
    UVar11 = UVar12;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)UVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if (UVar12 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8dfb;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar12,0,(MethodInfo *)0x0);
    }
    textInfo = (TMPro_TMP_TextInfo_o *)0x0;
    UVar11 = UVar18;
    pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)UVar18,(MethodInfo *)0x0);
    if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar13,uVar16 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
label_043b8dfb:
  il2cpp_runtime_helper_022b2c90();
  iStack_a4 = 0;
  iStack_a8 = 0;
  fStack_ac = 0.0;
  UStack_90.z = 0.0;
  UStack_90.x = 0.0;
  UStack_90.y = 0.0;
  UStack_a0.z = 0.0;
  UStack_a0.x = 0.0;
  UStack_a0.y = 0.0;
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) && (*(char *)((long)UVar11 + 0x40) != '\0')) {
    max = &UStack_a0;
    baseline = &fStack_ac;
    firstLine = &iStack_a4;
    pTVar17 = textInfo;
    UVar12 = UVar11;
    UStack_80 = UVar18;
    puStack_78 = unaff_R12;
    bVar10 = UI_ChatPlayerNameOverlay__TryGetSourceNameBounds
                       ((UI_ChatPlayerNameOverlay_o *)UVar11,textInfo,(UnityEngine_Vector3_o *)&UStack_90,
                        (UnityEngine_Vector3_o *)max,baseline,firstLine,&iStack_a8,in_stack_ffffffffffffff40);
    if (((char)bVar10 != '\0') && (0 < (textInfo->fields).characterCount)) {
      lVar15 = 0x24;
      pUVar19 = (UnityEngine_Vector3_Fields *)0x0;
      pTVar6 = (textInfo->fields).characterInfo;
      while (pTVar6 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        max = (UnityEngine_Vector3_Fields *)(ulong)(uint)pTVar6->max_length;
        if (max <= pUVar19) goto label_043b8f83;
        if ((*(byte *)((long)&pTVar6->m_Items[0].fields.scale + lVar15) & 1) != 0) {
          uVar16 = *(uint *)((long)&pTVar6->m_Items[0].fields.textElement + lVar15 + 4);
          uVar3 = *(uint *)((long)&pTVar6->m_Items[0].fields.spriteIndex + lVar15);
          uVar14 = *(uint *)((long)pTVar6->m_Items + lVar15 + -0x20);
          pTVar17 = (TMPro_TMP_TextInfo_o *)(ulong)uVar14;
          UVar12 = (UI_ChatDisplayNameRange_Fields)((long)UVar11 + 0x38);
          bVar10 = UI_ChatDisplayNameRange__ContainsSourceIndex
                             ((UI_ChatDisplayNameRange_o)((long)UVar11 + 0x38),uVar14,(MethodInfo *)0x0);
          if ((char)bVar10 != '\0') {
            pTVar7 = (textInfo->fields).meshInfo;
            if (pTVar7 == (TMPro_TMP_MeshInfo_array *)0x0) break;
            if ((uint)pTVar7->max_length <= uVar16) goto label_043b8f83;
            max = (UnityEngine_Vector3_Fields *)((long)(int)uVar16 * 0x50);
            pUVar8 = pTVar7->m_Items[(int)uVar16].fields.colors32;
            if (pUVar8 != (UnityEngine_Color32_array *)0x0) {
              uVar16 = (uint)pUVar8->max_length;
              uVar14 = uVar3 + 3;
              max = (UnityEngine_Vector3_Fields *)(ulong)uVar14;
              if ((int)uVar14 < (int)uVar16) {
                if (uVar16 <= uVar3) {
label_043b8f83:
                  il2cpp_runtime_helper_022b2ca0();
                  return;
                }
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)uVar3 * 4 + 3) = 0;
                if ((uint)pUVar8->max_length <= uVar3 + 1) goto label_043b8f83;
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)(uVar3 + 1) * 4 + 3) = 0;
                if (((uint)pUVar8->max_length <= uVar3 + 2) ||
                   (*(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)(uVar3 + 2) * 4 + 3) =
                         0, (uint)pUVar8->max_length <= uVar14)) goto label_043b8f83;
                max = (UnityEngine_Vector3_Fields *)(long)(int)uVar14;
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)max * 4 + 3) = 0;
              }
            }
          }
        }
        pUVar19 = (UnityEngine_Vector3_Fields *)((long)&((UnityEngine_Vector3_Fields *)&pUVar19->x)->x + 1);
        lVar15 = lVar15 + 0x178;
        if ((long)(textInfo->fields).characterCount <= (long)pUVar19) {
          return;
        }
        pTVar6 = (textInfo->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
      extraout_RDX_01[0] = INFINITY;
      extraout_RDX_01[1] = INFINITY;
      extraout_RDX_01[2] = 0.0;
      max->x = -INFINITY;
      max->y = -INFINITY;
      max->z = 0.0;
      *baseline = 0.0;
      *firstLine = -1;
      *(undefined4 *)&in_stack_ffffffffffffff40->methodPointer = 0xffffffff;
      if (((pTVar17 == (TMPro_TMP_TextInfo_o *)0x0) || (*(char *)((long)UVar12 + 0x40) == '\0')) ||
         ((pTVar17->fields).characterCount < 1)) {
        return;
      }
      UVar18 = (UI_ChatDisplayNameRange_Fields)((long)UVar12 + 0x38);
      lVar15 = 0x194;
      uVar20 = 0;
      pTVar6 = (pTVar17->fields).characterInfo;
      while (pTVar6 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        if ((uint)pTVar6->max_length <= uVar20) goto label_043b9176;
        if ((*(byte *)((long)pTVar6->m_Items + lVar15 + -0x20) & 1) != 0) {
          iVar4 = *(int *)((long)pTVar6 + lVar15 + -0x130);
          fVar22 = *(float *)((long)pTVar6 + lVar15 + -0x78);
          fVar23 = *(float *)((long)pTVar6 + lVar15 + -0x6c);
          fVar1 = *(float *)((long)pTVar6->m_Items + lVar15 + -0x6c);
          fVar21 = *(float *)((long)pTVar6->m_Items + lVar15 + -0x68);
          fVar2 = *(float *)((long)pTVar6->m_Items + lVar15 + -100);
          UVar12 = UVar18;
          bVar10 = UI_ChatDisplayNameRange__ContainsSourceIndex
                             ((UI_ChatDisplayNameRange_o)UVar18,*(int32_t *)((long)pTVar6 + lVar15 + -0x170),
                              (MethodInfo *)0x0);
          if ((char)bVar10 != '\0') {
            if (*firstLine < 0) {
              *firstLine = iVar4;
              *baseline = fVar21;
            }
            *(int *)&in_stack_ffffffffffffff40->methodPointer = iVar4;
            if (iVar4 != *firstLine) {
              return;
            }
            fVar21 = *extraout_RDX_01;
            if (fVar22 <= *extraout_RDX_01) {
              fVar21 = fVar22;
            }
            fVar22 = extraout_RDX_01[1];
            if (fVar2 <= extraout_RDX_01[1]) {
              fVar22 = fVar2;
            }
            *extraout_RDX_01 = fVar21;
            extraout_RDX_01[1] = fVar22;
            fVar22 = ((UnityEngine_Vector3_Fields *)&max->x)->x;
            if (fVar22 <= fVar23) {
              fVar22 = fVar23;
            }
            fVar23 = max->y;
            if (max->y <= fVar1) {
              fVar23 = fVar1;
            }
            ((UnityEngine_Vector3_Fields *)&max->x)->x = fVar22;
            max->y = fVar23;
          }
        }
        uVar20 = uVar20 + 1;
        lVar15 = lVar15 + 0x178;
        if ((long)(pTVar17->fields).characterCount <= (long)uVar20) {
          return;
        }
        pTVar6 = (pTVar17->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
label_043b9176:
      il2cpp_runtime_helper_022b2ca0();
      uVar9 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
      (((UnityEngine_Vector4_o *)((long)UVar12 + 0x48))->fields).x = (float)(int)uVar9;
      (((UnityEngine_Vector4_o *)((long)UVar12 + 0x48))->fields).y = (float)(int)((ulong)uVar9 >> 0x20);
      il2cpp_runtime_helper_022b4080((UnityEngine_Vector4_o *)((long)UVar12 + 0x48));
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)UVar12,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.ChatPlayerNameOverlay$$DisableSegmentLayout
// il2cpp: void UI_ChatPlayerNameOverlay__DisableSegmentLayout (TMPro_TextMeshProUGUI_o* segment, bool active, const MethodInfo* method);
// 0x43b8d20

void UI_ChatPlayerNameOverlay__DisableSegmentLayout
               (TMPro_TextMeshProUGUI_o *segment,bool_conflict active,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TMPro_TMP_CharacterInfo_array *pTVar6;
  TMPro_TMP_MeshInfo_array *pTVar7;
  UnityEngine_Color32_array *pUVar8;
  undefined8 uVar9;
  bool_conflict bVar10;
  UI_ChatDisplayNameRange_Fields UVar11;
  UnityEngine_GameObject_o *__this;
  uint uVar12;
  UnityEngine_Vector3_Fields *max;
  float *extraout_RDX;
  long lVar13;
  TMPro_TMP_TextInfo_o *textInfo;
  TMPro_TMP_TextInfo_o *pTVar14;
  float *baseline;
  int32_t *firstLine;
  UnityEngine_Vector3_Fields *pUVar15;
  UI_ChatDisplayNameRange_Fields UVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  MethodInfo *in_stack_ffffffffffffff68;
  float local_84;
  int32_t local_80;
  int32_t local_7c;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  TMPro_TextMeshProUGUI_o *pTStack_58;
  
  if (g_data_057ae390 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae390 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  textInfo = (TMPro_TMP_TextInfo_o *)0x0;
  UVar16 = (UI_ChatDisplayNameRange_Fields)segment;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)segment,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  if (segment != (TMPro_TextMeshProUGUI_o *)0x0) {
    UVar11 = (UI_ChatDisplayNameRange_Fields)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)segment,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    textInfo = (TMPro_TMP_TextInfo_o *)0x0;
    UVar16 = UVar11;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)UVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if (UVar11 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8dfb;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar11,0,(MethodInfo *)0x0);
    }
    textInfo = (TMPro_TMP_TextInfo_o *)0x0;
    UVar16 = (UI_ChatDisplayNameRange_Fields)segment;
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)segment,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this,active & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
label_043b8dfb:
  il2cpp_runtime_helper_022b2c90();
  local_7c = 0;
  local_80 = 0;
  local_84 = 0.0;
  local_68.z = 0.0;
  local_68.x = 0.0;
  local_68.y = 0.0;
  local_78.z = 0.0;
  local_78.x = 0.0;
  local_78.y = 0.0;
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) && (*(char *)((long)UVar16 + 0x40) != '\0')) {
    max = &local_78;
    baseline = &local_84;
    firstLine = &local_7c;
    pTVar14 = textInfo;
    UVar11 = UVar16;
    pTStack_58 = segment;
    bVar10 = UI_ChatPlayerNameOverlay__TryGetSourceNameBounds
                       ((UI_ChatPlayerNameOverlay_o *)UVar16,textInfo,(UnityEngine_Vector3_o *)&local_68,
                        (UnityEngine_Vector3_o *)max,baseline,firstLine,&local_80,in_stack_ffffffffffffff68);
    if (((char)bVar10 != '\0') && (0 < (textInfo->fields).characterCount)) {
      lVar13 = 0x24;
      pUVar15 = (UnityEngine_Vector3_Fields *)0x0;
      pTVar6 = (textInfo->fields).characterInfo;
      while (pTVar6 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        max = (UnityEngine_Vector3_Fields *)(ulong)(uint)pTVar6->max_length;
        if (max <= pUVar15) goto label_043b8f83;
        if ((*(byte *)((long)&pTVar6->m_Items[0].fields.scale + lVar13) & 1) != 0) {
          uVar3 = *(uint *)((long)&pTVar6->m_Items[0].fields.textElement + lVar13 + 4);
          uVar4 = *(uint *)((long)&pTVar6->m_Items[0].fields.spriteIndex + lVar13);
          uVar12 = *(uint *)((long)pTVar6->m_Items + lVar13 + -0x20);
          pTVar14 = (TMPro_TMP_TextInfo_o *)(ulong)uVar12;
          UVar11 = (UI_ChatDisplayNameRange_Fields)((long)UVar16 + 0x38);
          bVar10 = UI_ChatDisplayNameRange__ContainsSourceIndex
                             ((UI_ChatDisplayNameRange_o)((long)UVar16 + 0x38),uVar12,(MethodInfo *)0x0);
          if ((char)bVar10 != '\0') {
            pTVar7 = (textInfo->fields).meshInfo;
            if (pTVar7 == (TMPro_TMP_MeshInfo_array *)0x0) break;
            if ((uint)pTVar7->max_length <= uVar3) goto label_043b8f83;
            max = (UnityEngine_Vector3_Fields *)((long)(int)uVar3 * 0x50);
            pUVar8 = pTVar7->m_Items[(int)uVar3].fields.colors32;
            if (pUVar8 != (UnityEngine_Color32_array *)0x0) {
              uVar3 = (uint)pUVar8->max_length;
              uVar12 = uVar4 + 3;
              max = (UnityEngine_Vector3_Fields *)(ulong)uVar12;
              if ((int)uVar12 < (int)uVar3) {
                if (uVar3 <= uVar4) {
label_043b8f83:
                  il2cpp_runtime_helper_022b2ca0();
                  return;
                }
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)uVar4 * 4 + 3) = 0;
                if ((uint)pUVar8->max_length <= uVar4 + 1) goto label_043b8f83;
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)(uVar4 + 1) * 4 + 3) = 0;
                if (((uint)pUVar8->max_length <= uVar4 + 2) ||
                   (*(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)(uVar4 + 2) * 4 + 3) =
                         0, (uint)pUVar8->max_length <= uVar12)) goto label_043b8f83;
                max = (UnityEngine_Vector3_Fields *)(long)(int)uVar12;
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)max * 4 + 3) = 0;
              }
            }
          }
        }
        pUVar15 = (UnityEngine_Vector3_Fields *)((long)&((UnityEngine_Vector3_Fields *)&pUVar15->x)->x + 1);
        lVar13 = lVar13 + 0x178;
        if ((long)(textInfo->fields).characterCount <= (long)pUVar15) {
          return;
        }
        pTVar6 = (textInfo->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
      extraout_RDX[0] = INFINITY;
      extraout_RDX[1] = INFINITY;
      extraout_RDX[2] = 0.0;
      max->x = -INFINITY;
      max->y = -INFINITY;
      max->z = 0.0;
      *baseline = 0.0;
      *firstLine = -1;
      *(undefined4 *)&in_stack_ffffffffffffff68->methodPointer = 0xffffffff;
      if (((pTVar14 == (TMPro_TMP_TextInfo_o *)0x0) || (*(char *)((long)UVar11 + 0x40) == '\0')) ||
         ((pTVar14->fields).characterCount < 1)) {
        return;
      }
      UVar16 = (UI_ChatDisplayNameRange_Fields)((long)UVar11 + 0x38);
      lVar13 = 0x194;
      uVar17 = 0;
      pTVar6 = (pTVar14->fields).characterInfo;
      while (pTVar6 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        if ((uint)pTVar6->max_length <= uVar17) goto label_043b9176;
        if ((*(byte *)((long)pTVar6->m_Items + lVar13 + -0x20) & 1) != 0) {
          iVar5 = *(int *)((long)pTVar6 + lVar13 + -0x130);
          fVar19 = *(float *)((long)pTVar6 + lVar13 + -0x78);
          fVar20 = *(float *)((long)pTVar6 + lVar13 + -0x6c);
          fVar1 = *(float *)((long)pTVar6->m_Items + lVar13 + -0x6c);
          fVar18 = *(float *)((long)pTVar6->m_Items + lVar13 + -0x68);
          fVar2 = *(float *)((long)pTVar6->m_Items + lVar13 + -100);
          UVar11 = UVar16;
          bVar10 = UI_ChatDisplayNameRange__ContainsSourceIndex
                             ((UI_ChatDisplayNameRange_o)UVar16,*(int32_t *)((long)pTVar6 + lVar13 + -0x170),
                              (MethodInfo *)0x0);
          if ((char)bVar10 != '\0') {
            if (*firstLine < 0) {
              *firstLine = iVar5;
              *baseline = fVar18;
            }
            *(int *)&in_stack_ffffffffffffff68->methodPointer = iVar5;
            if (iVar5 != *firstLine) {
              return;
            }
            fVar18 = *extraout_RDX;
            if (fVar19 <= *extraout_RDX) {
              fVar18 = fVar19;
            }
            fVar19 = extraout_RDX[1];
            if (fVar2 <= extraout_RDX[1]) {
              fVar19 = fVar2;
            }
            *extraout_RDX = fVar18;
            extraout_RDX[1] = fVar19;
            fVar19 = ((UnityEngine_Vector3_Fields *)&max->x)->x;
            if (fVar19 <= fVar20) {
              fVar19 = fVar20;
            }
            fVar20 = max->y;
            if (max->y <= fVar1) {
              fVar20 = fVar1;
            }
            ((UnityEngine_Vector3_Fields *)&max->x)->x = fVar19;
            max->y = fVar20;
          }
        }
        uVar17 = uVar17 + 1;
        lVar13 = lVar13 + 0x178;
        if ((long)(pTVar14->fields).characterCount <= (long)uVar17) {
          return;
        }
        pTVar6 = (pTVar14->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
label_043b9176:
      il2cpp_runtime_helper_022b2ca0();
      uVar9 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
      (((UnityEngine_Vector4_o *)((long)UVar11 + 0x48))->fields).x = (float)(int)uVar9;
      (((UnityEngine_Vector4_o *)((long)UVar11 + 0x48))->fields).y = (float)(int)((ulong)uVar9 >> 0x20);
      il2cpp_runtime_helper_022b4080((UnityEngine_Vector4_o *)((long)UVar11 + 0x48));
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)UVar11,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.ChatPlayerNameOverlay$$HideSourceName
// il2cpp: void UI_ChatPlayerNameOverlay__HideSourceName (UI_ChatPlayerNameOverlay_o* __this, TMPro_TMP_TextInfo_o* textInfo, const MethodInfo* method);
// 0x43b8e00

void UI_ChatPlayerNameOverlay__HideSourceName
               (UI_ChatPlayerNameOverlay_o *__this,TMPro_TMP_TextInfo_o *textInfo,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TMPro_TMP_CharacterInfo_array *pTVar6;
  TMPro_TMP_MeshInfo_array *pTVar7;
  UnityEngine_Color32_array *pUVar8;
  bool_conflict bVar9;
  uint uVar10;
  UnityEngine_Vector3_Fields *max;
  float *extraout_RDX;
  long lVar11;
  TMPro_TMP_TextInfo_o *pTVar12;
  UI_ChatDisplayNameRange_Fields __this_00;
  float *baseline;
  int32_t *firstLine;
  UnityEngine_Vector3_Fields *pUVar13;
  UI_ChatDisplayNameRange_Fields __this_01;
  UI_ChatDisplayNameRange_o *__this_02;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  MethodInfo *in_stack_ffffffffffffff90;
  float fStack_5c;
  int32_t iStack_58;
  int32_t iStack_54;
  UnityEngine_Vector3_Fields UStack_50;
  UnityEngine_Vector3_Fields UStack_40;
  
  iStack_54 = 0;
  iStack_58 = 0;
  fStack_5c = 0.0;
  UStack_40.z = 0.0;
  UStack_40.x = 0.0;
  UStack_40.y = 0.0;
  UStack_50.z = 0.0;
  UStack_50.x = 0.0;
  UStack_50.y = 0.0;
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) && ((char)(__this->fields)._hasRange != '\0')) {
    max = &UStack_50;
    baseline = &fStack_5c;
    firstLine = &iStack_54;
    pTVar12 = textInfo;
    __this_00 = (UI_ChatDisplayNameRange_Fields)__this;
    bVar9 = UI_ChatPlayerNameOverlay__TryGetSourceNameBounds
                      (__this,textInfo,(UnityEngine_Vector3_o *)&UStack_40,(UnityEngine_Vector3_o *)max,
                       baseline,firstLine,&iStack_58,in_stack_ffffffffffffff90);
    if (((char)bVar9 != '\0') && (0 < (textInfo->fields).characterCount)) {
      __this_02 = &(__this->fields)._range;
      lVar11 = 0x24;
      pUVar13 = (UnityEngine_Vector3_Fields *)0x0;
      pTVar6 = (textInfo->fields).characterInfo;
      while (pTVar6 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        max = (UnityEngine_Vector3_Fields *)(ulong)(uint)pTVar6->max_length;
        if (max <= pUVar13) goto label_043b8f83;
        if ((*(byte *)((long)&pTVar6->m_Items[0].fields.scale + lVar11) & 1) != 0) {
          uVar3 = *(uint *)((long)&pTVar6->m_Items[0].fields.textElement + lVar11 + 4);
          uVar4 = *(uint *)((long)&pTVar6->m_Items[0].fields.spriteIndex + lVar11);
          uVar10 = *(uint *)((long)pTVar6->m_Items + lVar11 + -0x20);
          pTVar12 = (TMPro_TMP_TextInfo_o *)(ulong)uVar10;
          __this_00 = (UI_ChatDisplayNameRange_Fields)__this_02;
          bVar9 = UI_ChatDisplayNameRange__ContainsSourceIndex
                            ((UI_ChatDisplayNameRange_o)__this_02,uVar10,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            pTVar7 = (textInfo->fields).meshInfo;
            if (pTVar7 == (TMPro_TMP_MeshInfo_array *)0x0) break;
            if ((uint)pTVar7->max_length <= uVar3) goto label_043b8f83;
            max = (UnityEngine_Vector3_Fields *)((long)(int)uVar3 * 0x50);
            pUVar8 = pTVar7->m_Items[(int)uVar3].fields.colors32;
            if (pUVar8 != (UnityEngine_Color32_array *)0x0) {
              uVar3 = (uint)pUVar8->max_length;
              uVar10 = uVar4 + 3;
              max = (UnityEngine_Vector3_Fields *)(ulong)uVar10;
              if ((int)uVar10 < (int)uVar3) {
                if (uVar3 <= uVar4) {
label_043b8f83:
                  il2cpp_runtime_helper_022b2ca0();
                  return;
                }
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)uVar4 * 4 + 3) = 0;
                if ((uint)pUVar8->max_length <= uVar4 + 1) goto label_043b8f83;
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)(uVar4 + 1) * 4 + 3) = 0;
                if (((uint)pUVar8->max_length <= uVar4 + 2) ||
                   (*(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)(int)(uVar4 + 2) * 4 + 3) =
                         0, (uint)pUVar8->max_length <= uVar10)) goto label_043b8f83;
                max = (UnityEngine_Vector3_Fields *)(long)(int)uVar10;
                *(undefined1 *)((long)&pUVar8->m_Items[0].fields.rgba + (long)max * 4 + 3) = 0;
              }
            }
          }
        }
        pUVar13 = (UnityEngine_Vector3_Fields *)((long)&((UnityEngine_Vector3_Fields *)&pUVar13->x)->x + 1);
        lVar11 = lVar11 + 0x178;
        if ((long)(textInfo->fields).characterCount <= (long)pUVar13) {
          return;
        }
        pTVar6 = (textInfo->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
      extraout_RDX[0] = INFINITY;
      extraout_RDX[1] = INFINITY;
      extraout_RDX[2] = 0.0;
      max->x = -INFINITY;
      max->y = -INFINITY;
      max->z = 0.0;
      *baseline = 0.0;
      *firstLine = -1;
      *(undefined4 *)&in_stack_ffffffffffffff90->methodPointer = 0xffffffff;
      if (((pTVar12 == (TMPro_TMP_TextInfo_o *)0x0) || (*(char *)((long)__this_00 + 0x40) == '\0')) ||
         ((pTVar12->fields).characterCount < 1)) {
        return;
      }
      __this_01 = (UI_ChatDisplayNameRange_Fields)((long)__this_00 + 0x38);
      lVar11 = 0x194;
      uVar14 = 0;
      pTVar6 = (pTVar12->fields).characterInfo;
      while (pTVar6 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        if ((uint)pTVar6->max_length <= uVar14) goto label_043b9176;
        if ((*(byte *)((long)pTVar6->m_Items + lVar11 + -0x20) & 1) != 0) {
          iVar5 = *(int *)((long)pTVar6 + lVar11 + -0x130);
          fVar16 = *(float *)((long)pTVar6 + lVar11 + -0x78);
          fVar17 = *(float *)((long)pTVar6 + lVar11 + -0x6c);
          fVar1 = *(float *)((long)pTVar6->m_Items + lVar11 + -0x6c);
          fVar15 = *(float *)((long)pTVar6->m_Items + lVar11 + -0x68);
          fVar2 = *(float *)((long)pTVar6->m_Items + lVar11 + -100);
          __this_00 = __this_01;
          bVar9 = UI_ChatDisplayNameRange__ContainsSourceIndex
                            ((UI_ChatDisplayNameRange_o)__this_01,*(int32_t *)((long)pTVar6 + lVar11 + -0x170)
                             ,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            if (*firstLine < 0) {
              *firstLine = iVar5;
              *baseline = fVar15;
            }
            *(int *)&in_stack_ffffffffffffff90->methodPointer = iVar5;
            if (iVar5 != *firstLine) {
              return;
            }
            fVar15 = *extraout_RDX;
            if (fVar16 <= *extraout_RDX) {
              fVar15 = fVar16;
            }
            fVar16 = extraout_RDX[1];
            if (fVar2 <= extraout_RDX[1]) {
              fVar16 = fVar2;
            }
            *extraout_RDX = fVar15;
            extraout_RDX[1] = fVar16;
            fVar16 = ((UnityEngine_Vector3_Fields *)&max->x)->x;
            if (fVar16 <= fVar17) {
              fVar16 = fVar17;
            }
            fVar17 = max->y;
            if (max->y <= fVar1) {
              fVar17 = fVar1;
            }
            ((UnityEngine_Vector3_Fields *)&max->x)->x = fVar16;
            max->y = fVar17;
          }
        }
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 0x178;
        if ((long)(pTVar12->fields).characterCount <= (long)uVar14) {
          return;
        }
        pTVar6 = (pTVar12->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
label_043b9176:
      il2cpp_runtime_helper_022b2ca0();
      *(System_String_o **)((long)__this_00 + 0x48) =
           (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      il2cpp_runtime_helper_022b4080((System_String_o **)((long)__this_00 + 0x48));
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.ChatPlayerNameOverlay$$SyncToSource
// il2cpp: void UI_ChatPlayerNameOverlay__SyncToSource (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x43b6f30

void UI_ChatPlayerNameOverlay__SyncToSource(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  Il2CppRGCTXData *pIVar1;
  undefined1 auVar2 [16];
  int32_t iVar3;
  TMPro_TextMeshProUGUI_o *pTVar4;
  UnityEngine_RectTransform_o *pUVar5;
  PatreonEffects_NameEffectLabel_o *pPVar6;
  Il2CppMethodPointer pIVar7;
  UI_ChatPanel_o *__this_00;
  TMPro_TMP_Text_o *__this_01;
  UnityEngine_Vector2_o UVar8;
  Il2CppRGCTXData IVar9;
  Il2CppRGCTXData IVar10;
  UnityEngine_Vector3_o position;
  undefined1 *puVar11;
  bool_conflict bVar12;
  uint uVar13;
  UI_ChatDisplayNameRange_Fields UVar14;
  UnityEngine_GameObject_o *pUVar15;
  long lVar16;
  UI_ChatDisplayNameRange_Fields __this_02;
  System_String_o *pSVar17;
  Photon_Realtime_Player_o *pPVar18;
  Photon_Realtime_Room_o *pPVar19;
  System_String_o *pSVar20;
  undefined8 uVar21;
  Il2CppRGCTXData *in_RCX;
  Il2CppRGCTXData *pIVar22;
  TMPro_TMP_FontAsset_o *font;
  MethodInfo *method_00;
  long *textInfo;
  UI_ChatDisplayNameRange_Fields method_01;
  UI_ChatDisplayNameRange_Fields *x;
  undefined1 *puVar23;
  UI_ChatDisplayNameRange_Fields *unaff_RBP;
  UI_ChatDisplayNameRange_Fields *method_02;
  uint32_t *unaff_R13;
  long *__this_03;
  UI_ChatDisplayNameRange_Fields unaff_R15;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  float in_XMM1_Da;
  float in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float in_XMM2_Da;
  float in_XMM2_Db;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  UnityEngine_Rect_o UVar27;
  UnityEngine_Color_o value;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o position_04;
  MethodInfo *in_stack_ffffffffffffff20;
  float local_d4;
  int32_t local_d0;
  int32_t local_cc;
  Il2CppRGCTXData local_c8;
  float local_c0;
  UnityEngine_Vector3_o local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if (g_data_057ae391 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057ae391 = '\x01';
  }
  local_cc = 0;
  local_d0 = 0;
  local_d4 = 0.0;
  local_b8.fields.z = 0.0;
  local_b8.fields.x = 0.0;
  local_b8.fields.y = 0.0;
  local_c0 = 0.0;
  local_c8.rgctxDataDummy = (void *)0x0;
  pTVar4 = (__this->fields)._source;
  __this_03 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  x = (UI_ChatDisplayNameRange_Fields *)(__this->fields)._labelRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  textInfo._0_4_ = 0;
  textInfo._4_4_ = 0;
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  if ((char)(__this->fields)._hasRange == '\0') {
    return;
  }
  pTVar4 = (__this->fields)._source;
  if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
    in_RCX = (Il2CppRGCTXData *)(pTVar4->klass->vtable)._106_ForceMeshUpdate.method;
    textInfo._0_4_ = 0;
    textInfo._4_4_ = 0;
    (*(pTVar4->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar4,0,0);
    pTVar4 = (__this->fields)._source;
    if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
      textInfo._0_4_ = (pTVar4->fields).m_ignoreCulling;
      textInfo._4_4_ = (pTVar4->fields).m_horizontalMapping;
      in_RCX = &local_c8;
      bVar12 = UI_ChatPlayerNameOverlay__TryGetSourceNameBounds
                         (__this,(TMPro_TMP_TextInfo_o *)textInfo,&local_b8,(UnityEngine_Vector3_o *)in_RCX,
                          &local_d4,&local_cc,&local_d0,in_stack_ffffffffffffff20);
      if ((char)bVar12 == '\0') {
        pUVar5 = (__this->fields)._labelRect;
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          textInfo._0_4_ = 0;
          textInfo._4_4_ = 0;
          pUVar15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0)
          ;
          if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar15,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pTVar4 = (__this->fields)._source;
        if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
          textInfo._0_4_ = 0;
          textInfo._4_4_ = 0;
          UVar14 = (UI_ChatDisplayNameRange_Fields)
                   TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)pTVar4,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._labelRect;
          if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
            textInfo._0_4_ = 0;
            textInfo._4_4_ = 0;
            __this_03 = (long *)UnityEngine_Transform__get_parent
                                          ((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
            unaff_R15 = UVar14;
            if (((UI_ChatDisplayNameRange_Fields)__this_03 != (UI_ChatDisplayNameRange_Fields)0x0) &&
               (textInfo = (long *)TypeInfo_RectTransform, (UI_ChatDisplayNameRange_Fields)*__this_03 != TypeInfo_RectTransform))
            goto label_043b7336;
            if (UVar14 != (UI_ChatDisplayNameRange_Fields)0x0) {
              position.fields.z = local_b8.fields.z;
              position.fields.x = local_b8.fields.x;
              position.fields.y = local_b8.fields.y;
              local_a8._8_8_ = 0;
              local_a8._0_4_ = local_b8.fields.x;
              local_a8._4_4_ = local_b8.fields.y;
              UVar28 = UnityEngine_Transform__TransformPoint
                                 ((UnityEngine_Transform_o *)UVar14,position,(MethodInfo *)0x0);
              local_98._8_4_ = extraout_XMM0_Dc;
              local_98._0_8_ = UVar28.fields._0_8_;
              local_98._12_4_ = extraout_XMM0_Dd;
              local_78._0_4_ = UVar28.fields.z;
              UVar28.fields.z = local_c0;
              UVar28.fields._0_8_ = local_c8.rgctxDataDummy;
              UVar28 = UnityEngine_Transform__TransformPoint
                                 ((UnityEngine_Transform_o *)UVar14,UVar28,(MethodInfo *)0x0);
              uStack_80 = extraout_XMM0_Dc_00;
              local_88 = (undefined1  [8])UVar28.fields._0_8_;
              uStack_7c = extraout_XMM0_Dd_00;
              local_58._0_4_ = UVar28.fields.z;
              in_XMM1_Db = 0.0;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              textInfo._0_4_ = 0;
              textInfo._4_4_ = 0;
              position_00.fields.y = local_d4;
              position_00.fields.x = (float)local_a8._0_4_;
              position_00.fields.z = 0.0;
              UVar28 = UnityEngine_Transform__TransformPoint
                                 ((UnityEngine_Transform_o *)UVar14,position_00,(MethodInfo *)0x0);
              auVar2 = local_98;
              in_XMM1_Da = UVar28.fields.z;
              local_a8._8_4_ = extraout_XMM0_Dc_01;
              local_a8._0_8_ = UVar28.fields._0_8_;
              local_a8._12_4_ = extraout_XMM0_Dd_01;
              local_68._0_4_ = in_XMM1_Da;
              if ((UI_ChatDisplayNameRange_Fields)__this_03 != (UI_ChatDisplayNameRange_Fields)0x0) {
                position_01.fields.z = (float)local_78._0_4_;
                position_01.fields.x = (float)local_98._0_4_;
                position_01.fields.y = (float)local_98._4_4_;
                local_98 = auVar2;
                UVar28 = UnityEngine_Transform__InverseTransformPoint
                                   ((UnityEngine_Transform_o *)__this_03,position_01,(MethodInfo *)0x0);
                auVar2 = _local_88;
                local_78._8_4_ = extraout_XMM0_Dc_02;
                local_78._0_8_ = UVar28.fields._0_8_;
                local_78._12_4_ = extraout_XMM0_Dd_02;
                position_02.fields.z = (float)local_58._0_4_;
                position_02.fields.x = (float)local_88._0_4_;
                position_02.fields.y = (float)local_88._4_4_;
                _local_88 = auVar2;
                UVar28 = UnityEngine_Transform__InverseTransformPoint
                                   ((UnityEngine_Transform_o *)__this_03,position_02,(MethodInfo *)0x0);
                auVar2 = local_a8;
                uStack_80 = extraout_XMM0_Dc_03;
                local_88 = (undefined1  [8])UVar28.fields._0_8_;
                uStack_7c = extraout_XMM0_Dd_03;
                in_XMM1_Db = 0.0;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                textInfo._0_4_ = 0;
                textInfo._4_4_ = 0;
                position_03.fields.z = (float)local_68._0_4_;
                position_03.fields.x = (float)local_a8._0_4_;
                position_03.fields.y = (float)local_a8._4_4_;
                local_a8 = auVar2;
                UVar28 = UnityEngine_Transform__InverseTransformPoint
                                   ((UnityEngine_Transform_o *)__this_03,position_03,(MethodInfo *)0x0);
                in_XMM1_Da = UVar28.fields.z;
                uStack_50 = extraout_XMM0_Dc_04;
                local_58 = UVar28.fields._0_8_;
                uStack_4c = extraout_XMM0_Dd_04;
                pPVar6 = (__this->fields)._label;
                if (pPVar6 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                  local_98._0_4_ = (pPVar6->fields)._fontSize;
                  UVar27 = UnityEngine_RectTransform__get_rect
                                     ((UnityEngine_RectTransform_o *)__this_03,(MethodInfo *)0x0);
                  local_a8._8_4_ = in_XMM1_Dc;
                  local_a8._0_8_ = UVar27.fields._8_8_;
                  local_a8._12_4_ = in_XMM1_Dd;
                  UVar8 = UnityEngine_RectTransform__get_pivot
                                    ((UnityEngine_RectTransform_o *)__this_03,(MethodInfo *)0x0);
                  local_38._8_4_ = extraout_XMM0_Dc_05;
                  local_38._0_4_ = UVar8.fields.x;
                  local_38._4_4_ = UVar8.fields.y;
                  local_38._12_4_ = extraout_XMM0_Dd_05;
                  UVar27 = UnityEngine_RectTransform__get_rect
                                     ((UnityEngine_RectTransform_o *)__this_03,(MethodInfo *)0x0);
                  in_XMM1_Da = UVar27.fields.m_Width;
                  in_XMM1_Db = UVar27.fields.m_Height;
                  local_68._8_4_ = in_XMM1_Dc;
                  local_68._0_8_ = UVar27.fields._8_8_;
                  local_68._12_4_ = in_XMM1_Dd;
                  textInfo._0_4_ = 0;
                  textInfo._4_4_ = 0;
                  UVar8 = UnityEngine_RectTransform__get_pivot
                                    ((UnityEngine_RectTransform_o *)__this_03,(MethodInfo *)0x0);
                  local_48._8_4_ = extraout_XMM0_Dc_06;
                  local_48._0_4_ = UVar8.fields.x;
                  local_48._4_4_ = UVar8.fields.y;
                  local_48._12_4_ = extraout_XMM0_Dd_06;
                  pUVar5 = (__this->fields)._labelRect;
                  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                    textInfo._0_4_ = 0;
                    textInfo._4_4_ = 0;
                    pUVar15 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                    if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                      textInfo._0_4_ = 1;
                      textInfo._4_4_ = 0;
                      UnityEngine_GameObject__SetActive(pUVar15,1,(MethodInfo *)0x0);
                      pUVar5 = (__this->fields)._labelRect;
                      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                        fVar24 = (float)local_98._0_4_;
                        if ((float)local_98._0_4_ <= (float)local_88._4_4_ - (float)local_78._4_4_) {
                          fVar24 = (float)local_88._4_4_ - (float)local_78._4_4_;
                        }
                        local_98._0_4_ = fVar24;
                        in_XMM1_Db = 0.0;
                        in_XMM1_Dc = 0;
                        in_XMM1_Dd = 0;
                        in_XMM1_Da = (1.0 - (float)local_48._4_4_) * (float)local_68._4_4_;
                        textInfo._0_4_ = 0;
                        textInfo._4_4_ = 0;
                        UVar8.fields.y = (fVar24 * 0.5 + (float)local_58._4_4_) - in_XMM1_Da;
                        UVar8.fields.x = (float)local_a8._0_4_ * (float)local_38._0_4_ + (float)local_78._0_4_
                        ;
                        in_XMM2_Da = (float)local_58._4_4_;
                        in_XMM2_Db = (float)local_58._4_4_;
                        in_XMM2_Dc = uStack_50;
                        in_XMM2_Dd = uStack_4c;
                        UnityEngine_RectTransform__set_anchoredPosition(pUVar5,UVar8,(MethodInfo *)0x0);
                        pUVar5 = (__this->fields)._labelRect;
                        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                          in_XMM1_Da = (float)local_88._0_4_ - (float)local_78._0_4_;
                          fVar24 = 0.0;
                          if (0.0 <= in_XMM1_Da) {
                            fVar24 = in_XMM1_Da;
                          }
                          textInfo._0_4_ = 0;
                          textInfo._4_4_ = 0;
                          in_XMM1_Db = (float)local_88._4_4_;
                          in_XMM1_Dc = uStack_80;
                          in_XMM1_Dd = uStack_7c;
                          UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                    (pUVar5,0,fVar24,(MethodInfo *)0x0);
                          pUVar5 = (__this->fields)._labelRect;
                          if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                            UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                      (pUVar5,1,(float)local_98._0_4_,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043b7336:
  UVar14 = (UI_ChatDisplayNameRange_Fields)__this_03;
  il2cpp_runtime_helper_022b2fd0();
  puVar11 = &stack0xffffffffffffff18;
  do {
    puVar23 = puVar11;
    *(UI_ChatDisplayNameRange_Fields **)(puVar23 + -8) = unaff_RBP;
    *(UI_ChatDisplayNameRange_Fields *)(puVar23 + -0x10) = unaff_R15;
    *(long **)(puVar23 + -0x18) = __this_03;
    *(UI_ChatDisplayNameRange_Fields **)(puVar23 + -0x20) = x;
    pIVar22 = in_RCX;
    method_01 = (UI_ChatDisplayNameRange_Fields)textInfo;
    method_02 = (UI_ChatDisplayNameRange_Fields *)UVar14;
    if (g_data_057ae37e == '\0') {
      *(undefined8 *)(puVar23 + -0x80) = 0x43b7365;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      *(undefined8 *)(puVar23 + -0x80) = 0x43b7371;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      *(undefined8 *)(puVar23 + -0x80) = 0x43b737d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TMP_TextUtilities);
      method_02 = &"suggestion_";
      *(undefined8 *)(puVar23 + -0x80) = 0x43b7389;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae37e = '\x01';
      pIVar22 = in_RCX;
    }
    *(undefined8 *)(puVar23 + -0x58) = 0;
    *(undefined8 *)(puVar23 + -0x50) = 0;
    *(undefined8 *)(puVar23 + -0x68) = 0;
    *(undefined8 *)(puVar23 + -0x60) = 0;
    *(undefined8 *)(puVar23 + -0x48) = 0;
    *(undefined4 *)(puVar23 + -0x6c) = 0;
    *(undefined4 *)(puVar23 + -0x70) = 0;
    if ((UI_ChatDisplayNameRange_Fields)textInfo == (UI_ChatDisplayNameRange_Fields)0x0) {
label_043b75a2:
      *(undefined8 *)(puVar23 + -0x80) = 0x43b75a7;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      unaff_R15 = *(UI_ChatDisplayNameRange_Fields *)((long)UVar14 + 0x10);
      uVar21 = *(undefined8 *)((long)textInfo + 0x104);
      uVar25 = (undefined4)uVar21;
      uVar26 = (undefined4)((ulong)uVar21 >> 0x20);
      if (*(int *)(TypeInfo_TMP_TextUtilities + 0xe4) == 0) {
        *(undefined8 *)(puVar23 + -0x38) = uVar21;
        *(undefined8 *)(puVar23 + -0x30) = 0;
        *(undefined8 *)(puVar23 + -0x80) = 0x43b73e8;
        il2cpp_runtime_helper_02337ed0();
        uVar25 = *(undefined4 *)(puVar23 + -0x38);
        uVar26 = *(undefined4 *)(puVar23 + -0x34);
      }
      in_XMM1_Db = 0.0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      method_01.SourceStartIndex = 0;
      method_01.SourceEndIndex = 0;
      *(undefined8 *)(puVar23 + -0x80) = 0x43b73fc;
      position_04.fields.y = (float)uVar26;
      position_04.fields.x = (float)uVar25;
      position_04.fields.z = 0.0;
      in_XMM1_Da = 0.0;
      method_02 = (UI_ChatDisplayNameRange_Fields *)unaff_R15;
      uVar13 = TMPro_TMP_TextUtilities__FindIntersectingLink
                         ((TMPro_TMP_Text_o *)unaff_R15,position_04,(UnityEngine_Camera_o *)0x0,
                          (MethodInfo *)0x0);
      if (uVar13 == 0xffffffff) {
        return;
      }
      pIVar22 = (Il2CppRGCTXData *)0x0;
      if (*(InvokerMethod *)((long)UVar14 + 0x10) == (InvokerMethod)0x0) goto label_043b75a2;
      lVar16 = *(long *)(*(InvokerMethod *)((long)UVar14 + 0x10) + 0x368);
      pIVar22 = (Il2CppRGCTXData *)0x0;
      if ((lVar16 == 0) || (pIVar22 = *(Il2CppRGCTXData **)(lVar16 + 0x48), pIVar22 == (Il2CppRGCTXData *)0x0)
         ) goto label_043b75a2;
      if (uVar13 < *(uint *)(pIVar22 + 3)) {
        lVar16 = (long)(int)uVar13;
        IVar9 = pIVar22[lVar16 * 5 + 4];
        IVar10 = (pIVar22 + lVar16 * 5 + 4)[1];
        pIVar1 = pIVar22 + lVar16 * 5 + 6;
        in_XMM1_Da = *(float *)pIVar1;
        in_XMM1_Db = *(float *)((long)pIVar1 + 4);
        in_XMM1_Dc = *(undefined4 *)(pIVar1 + 1);
        in_XMM1_Dd = *(undefined4 *)((long)pIVar1 + 0xc);
        *(Il2CppRGCTXData *)(puVar23 + -0x48) = pIVar22[lVar16 * 5 + 8];
        *(float *)(puVar23 + -0x58) = in_XMM1_Da;
        *(float *)(puVar23 + -0x54) = in_XMM1_Db;
        *(undefined4 *)(puVar23 + -0x50) = in_XMM1_Dc;
        *(undefined4 *)(puVar23 + -0x4c) = in_XMM1_Dd;
        *(Il2CppRGCTXData *)(puVar23 + -0x68) = IVar9;
        *(Il2CppRGCTXData *)(puVar23 + -0x60) = IVar10;
        method_02 = (UI_ChatDisplayNameRange_Fields *)((long)puVar23 + -0x68);
        method_01.SourceStartIndex = 0;
        method_01.SourceEndIndex = 0;
        *(undefined8 *)(puVar23 + -0x80) = 0x43b7468;
        __this_02 = (UI_ChatDisplayNameRange_Fields)
                    TMPro_TMP_LinkInfo__GetLinkID
                              ((TMPro_TMP_LinkInfo_o)*(TMPro_TMP_LinkInfo_Fields *)(puVar23 + -0x78),
                               (MethodInfo *)method_02);
        if (__this_02 != (UI_ChatDisplayNameRange_Fields)0x0) {
          unaff_RBP = &"suggestion_";
          *(undefined8 *)(puVar23 + -0x80) = 0x43b7489;
          method_01 = "suggestion_";
          method_02 = (UI_ChatDisplayNameRange_Fields *)__this_02;
          bVar12 = System_String__StartsWith
                             ((System_String_o *)__this_02,(System_String_o *)"suggestion_",(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            method_01 = (UI_ChatDisplayNameRange_Fields)((long)puVar23 + -0x70);
            *(undefined8 *)(puVar23 + -0x80) = 0x43b74f7;
            bVar12 = System_Int32__TryParse
                               ((System_String_o *)__this_02,(int32_t *)method_01,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              return;
            }
            uVar13 = *(uint *)(puVar23 + -0x70);
            unaff_RBP = (UI_ChatDisplayNameRange_Fields *)(ulong)uVar13;
            textInfo = &TypeInfo_PhotonNetwork;
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              *(undefined8 *)(puVar23 + -0x80) = 0x43b751b;
              il2cpp_runtime_helper_02337ed0();
            }
            method_02._0_4_ = 0;
            method_02._4_4_ = 0;
            *(undefined8 *)(puVar23 + -0x80) = 0x43b7522;
            pPVar18 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            if (pPVar18 != (Photon_Realtime_Player_o *)0x0) {
              if (uVar13 == (pPVar18->fields).actorNumber) {
                return;
              }
              if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                *(undefined8 *)(puVar23 + -0x80) = 0x43b753d;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)(puVar23 + -0x80) = 0x43b7544;
              pPVar19 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
              if (pPVar19 == (Photon_Realtime_Room_o *)0x0) {
                return;
              }
              if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                *(undefined8 *)(puVar23 + -0x80) = 0x43b755a;
                il2cpp_runtime_helper_02337ed0();
              }
              method_02._0_4_ = 0;
              method_02._4_4_ = 0;
              *(undefined8 *)(puVar23 + -0x80) = 0x43b7561;
              pPVar19 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
              if (pPVar19 != (Photon_Realtime_Room_o *)0x0) {
                method_01.SourceEndIndex = 0;
                method_01.SourceStartIndex = *(uint *)(puVar23 + -0x70);
                unaff_RBP = (UI_ChatDisplayNameRange_Fields *)pPVar19->klass;
                pIVar22 = (Il2CppRGCTXData *)
                          (((Photon_Realtime_Room_c *)unaff_RBP)->vtable)._10_GetPlayer.method;
                pIVar7 = (((Photon_Realtime_Room_c *)unaff_RBP)->vtable)._10_GetPlayer.methodPtr;
                *(undefined8 *)(puVar23 + -0x80) = 0x43b757f;
                pPVar18 = (Photon_Realtime_Player_o *)(*pIVar7)(pPVar19,method_01,0);
                if (pPVar18 == (Photon_Realtime_Player_o *)0x0) {
                  return;
                }
                __this_00 = *(UI_ChatPanel_o **)((long)UVar14 + 0x28);
                method_02._0_4_ = 0;
                method_02._4_4_ = 0;
                if (__this_00 != (UI_ChatPanel_o *)0x0) {
                  *(undefined8 *)(puVar23 + -0x80) = 0x43b7597;
                  UI_ChatPanel__EnterPMMode(__this_00,pPVar18,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            textInfo = (long *)__this_02;
            if ("suggestion_" != (UI_ChatDisplayNameRange_Fields)0x0) {
              iVar3 = *(int32_t *)((long)"suggestion_" + 0x10);
              *(undefined8 *)(puVar23 + -0x80) = 0x43b74a7;
              pSVar17 = System_String__Substring((System_String_o *)__this_02,iVar3,(MethodInfo *)0x0);
              *(undefined8 *)(puVar23 + -0x80) = 0x43b74b6;
              bVar12 = System_Int32__TryParse(pSVar17,(int32_t *)(puVar23 + -0x6c),(MethodInfo *)0x0);
              if ((char)bVar12 == '\0') {
                return;
              }
              iVar3 = *(int32_t *)(puVar23 + -0x6c);
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                *(undefined8 *)(puVar23 + -0x80) = 0x43b74da;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)(puVar23 + -0x80) = 0x43b74e3;
              GameManagers_ChatManager__HandleSuggestionClick(iVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_043b75a2;
      }
    }
    *(undefined8 *)(puVar23 + -0x80) = 0x43b75ac;
    uVar25 = il2cpp_runtime_helper_022b2ca0();
    *(UI_ChatDisplayNameRange_Fields *)(puVar23 + -0x80) = unaff_R15;
    *(UI_ChatDisplayNameRange_Fields *)(puVar23 + -0x88) = UVar14;
    *(uint32_t **)(puVar23 + -0x90) = unaff_R13;
    *(UI_ChatPlayerNameOverlay_o **)(puVar23 + -0x98) = __this;
    *(long **)(puVar23 + -0xa0) = textInfo;
    *(float *)(puVar23 + -0xb0) = in_XMM2_Da;
    *(float *)(puVar23 + -0xac) = in_XMM2_Db;
    *(undefined4 *)(puVar23 + -0xa8) = in_XMM2_Dc;
    *(undefined4 *)(puVar23 + -0xa4) = in_XMM2_Dd;
    *(float *)(puVar23 + -0xc0) = in_XMM1_Da;
    *(float *)(puVar23 + -0xbc) = in_XMM1_Db;
    *(undefined4 *)(puVar23 + -0xb8) = in_XMM1_Dc;
    *(undefined4 *)(puVar23 + -0xb4) = in_XMM1_Dd;
    *(undefined4 *)(puVar23 + -0xcc) = uVar25;
    in_RCX = pIVar22;
    unaff_R15 = (UI_ChatDisplayNameRange_Fields)method_02;
    if (g_data_057ae38b == '\0') {
      *(undefined8 *)(puVar23 + -0xd8) = 0x43b7605;
      UVar14 = method_01;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae38b = '\x01';
      *(undefined8 *)(puVar23 + -0xd8) = 0x43b7614;
      UI_ChatPlayerNameOverlay__BuildIfNeeded((UI_ChatPlayerNameOverlay_o *)method_02,(MethodInfo *)UVar14);
    }
    else {
      *(undefined8 *)(puVar23 + -0xd8) = 0x43b75ea;
      UI_ChatPlayerNameOverlay__BuildIfNeeded((UI_ChatPlayerNameOverlay_o *)method_02,(MethodInfo *)method_01)
      ;
    }
    if (method_01 == (UI_ChatDisplayNameRange_Fields)0x0) {
      method_01 = **(UI_ChatDisplayNameRange_Fields **)(g_data_057b9c00 + 0xb8);
    }
    if ((UI_ChatDisplayNameRange_Fields)method_02 != (UI_ChatDisplayNameRange_Fields)0x0) {
      unaff_R13 = (uint32_t *)((long)method_02 + 0x48);
      *(UI_ChatDisplayNameRange_Fields *)((long)method_02 + 0x48) = method_01;
      *(undefined8 *)(puVar23 + -0xd8) = 0x43b764f;
      il2cpp_runtime_helper_022b4080(unaff_R13);
      *(Il2CppRGCTXData **)(puVar23 + -200) = pIVar22;
      ((_union_13 *)((long)method_02 + 0x38))->rgctx_data = pIVar22;
      method_01.SourceStartIndex = 0;
      method_01.SourceEndIndex = 0;
      unaff_R15 = (UI_ChatDisplayNameRange_Fields)((long)puVar23 + -200);
      *(undefined8 *)(puVar23 + -0xd8) = 0x43b7667;
      bVar12 = UI_ChatDisplayNameRange__get_IsValid((UI_ChatDisplayNameRange_o)unaff_R15,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        if (*(long *)unaff_R13 == 0) goto label_043b7778;
        method_01._1_7_ = 0;
        method_01.SourceStartIndex._0_1_ = 0 < *(int *)(*(long *)unaff_R13 + 0x10);
      }
      *(char *)((long)method_02 + 0x40) = (char)method_01.SourceStartIndex;
      pPVar6 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
      unaff_R15.SourceStartIndex = 0;
      unaff_R15.SourceEndIndex = 0;
      if (pPVar6 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        *(undefined8 *)(puVar23 + -0xd8) = 0x43b769f;
        PatreonEffects_NameEffectLabel__set_fontSize(pPVar6,*(float *)(puVar23 + -0xcc),(MethodInfo *)0x0);
        pPVar6 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
        unaff_R15.SourceStartIndex = 0;
        unaff_R15.SourceEndIndex = 0;
        if (pPVar6 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          auVar2 = *(undefined1 (*) [16])(puVar23 + -0xb0);
          in_XMM1_Da = auVar2._0_4_;
          in_XMM1_Db = auVar2._4_4_;
          in_XMM1_Dc = auVar2._8_4_;
          in_XMM1_Dd = auVar2._12_4_;
          *(undefined8 *)(puVar23 + -0xd8) = 0x43b76be;
          value.fields.b = (float)(int)auVar2._0_8_;
          value.fields.a = (float)(int)((ulong)auVar2._0_8_ >> 0x20);
          value.fields._0_8_ = *(undefined8 *)(puVar23 + -0xc0);
          PatreonEffects_NameEffectLabel__set_color(pPVar6,value,(MethodInfo *)0x0);
          pPVar6 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
          unaff_R15.SourceStartIndex = 0;
          unaff_R15.SourceEndIndex = 0;
          if (pPVar6 != (PatreonEffects_NameEffectLabel_o *)0x0) {
            *(undefined8 *)(puVar23 + -0xd8) = 0x43b76d8;
            PatreonEffects_NameEffectLabel__set_richText(pPVar6,1,(MethodInfo *)0x0);
            pPVar6 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
            unaff_R15.SourceStartIndex = 0;
            unaff_R15.SourceEndIndex = 0;
            if (pPVar6 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              *(undefined8 *)(puVar23 + -0xd8) = 0x43b76f2;
              PatreonEffects_NameEffectLabel__set_alignment(pPVar6,0x801,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)(puVar23 + -0xd8) = 0x43b770a;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)(puVar23 + -0xd8) = 0x43b7716;
              bVar12 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar12 != '\0') {
                pPVar6 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
                unaff_R15.SourceStartIndex = 0;
                unaff_R15.SourceEndIndex = 0;
                if (pPVar6 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_043b7778;
                *(undefined8 *)(puVar23 + -0xd8) = 0x43b772e;
                PatreonEffects_NameEffectLabel__SetFont(pPVar6,font,(MethodInfo *)0x0);
              }
              pPVar6 = *(PatreonEffects_NameEffectLabel_o **)((long)method_02 + 0x28);
              unaff_R15.SourceStartIndex = 0;
              unaff_R15.SourceEndIndex = 0;
              if (pPVar6 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                pSVar17 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                pSVar20 = *(System_String_o **)((long)method_02 + 0x48);
                *(undefined8 *)(puVar23 + -0xd8) = 0x43b7760;
                PatreonEffects_NameEffectLabel__SetText(pPVar6,pSVar17,pSVar20,pSVar17,(MethodInfo *)0x0);
                *(undefined8 *)(puVar23 + -0xd8) = 0x43b776a;
                UI_ChatPlayerNameOverlay__SetRaycastTargets
                          ((UI_ChatPlayerNameOverlay_o *)method_02,0,method_00);
                return;
              }
            }
          }
        }
      }
    }
label_043b7778:
    *(undefined8 *)(puVar23 + -0xd8) = 0x43b777d;
    il2cpp_runtime_helper_022b2c90();
    *(Il2CppRGCTXData **)(puVar23 + -0xd8) = pIVar22;
    *(TMPro_TMP_FontAsset_o **)(puVar23 + -0xe0) = font;
    *(UI_ChatDisplayNameRange_Fields *)(puVar23 + -0xe8) = method_01;
    if (g_data_057ae392 == '\0') {
      *(undefined8 *)(puVar23 + -0x100) = 0x43b77a1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar23 + -0x100) = 0x43b77ad;
      il2cpp_runtime_helper_023445d0(&"|");
      g_data_057ae392 = '\x01';
    }
    x = *(UI_ChatDisplayNameRange_Fields **)((long)unaff_R15 + 0x28);
    __this_03 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar23 + -0x100) = 0x43b77d0;
      il2cpp_runtime_helper_02337ed0();
    }
    textInfo._0_4_ = 0;
    textInfo._4_4_ = 0;
    *(undefined8 *)(puVar23 + -0x100) = 0x43b77dc;
    pSVar17 = (System_String_o *)x;
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    if (*(Il2CppType **)((long)unaff_R15 + 0x28) != (Il2CppType *)0x0) {
      x = (*(Il2CppType **)((long)unaff_R15 + 0x28))[6].data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar23 + -0x100) = 0x43b7809;
        il2cpp_runtime_helper_02337ed0(0);
      }
      *(undefined8 *)(puVar23 + -0x100) = 0x43b7815;
      bVar12 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        return;
      }
      pSVar17 = *(System_String_o **)((long)unaff_R15 + 0x48);
      textInfo._0_4_ = 0;
      textInfo._4_4_ = 0;
      *(undefined8 *)(puVar23 + -0x100) = 0x43b7829;
      bVar12 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        return;
      }
      if (*(Il2CppType **)((long)unaff_R15 + 0x28) != (Il2CppType *)0x0) {
        __this_01 = (*(Il2CppType **)((long)unaff_R15 + 0x28))[6].data;
        pSVar17 = *(System_String_o **)((long)unaff_R15 + 0x48);
        x = &"|";
        *(undefined8 *)(puVar23 + -0x100) = 0x43b7852;
        textInfo = (long *)"|";
        pSVar20 = System_String__Concat_3ae5ba0(pSVar17,(System_String_o *)"|",(MethodInfo *)0x0);
        __this_03._0_4_ = 0;
        __this_03._4_4_ = 0;
        if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
          *(undefined8 *)(puVar23 + -0x100) = 0x43b786f;
          UVar8 = TMPro_TMP_Text__GetPreferredValues_4c70170
                            (__this_01,pSVar20,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
          auVar2._8_4_ = extraout_XMM0_Dc_07;
          auVar2._0_4_ = UVar8.fields.x;
          auVar2._4_4_ = UVar8.fields.y;
          auVar2._12_4_ = extraout_XMM0_Dd_07;
          *(undefined1 (*) [16])(puVar23 + -0xf8) = auVar2;
          *(undefined8 *)(puVar23 + -0x100) = 0x43b788b;
          TMPro_TMP_Text__GetPreferredValues_4c70170
                    (__this_01,(System_String_o *)"|",3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
          return;
        }
      }
    }
    *(undefined8 *)(puVar23 + -0x100) = 0x43b78ac;
    uVar21 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)(puVar23 + -0x100) = uVar21;
    UVar14 = (UI_ChatDisplayNameRange_Fields)pSVar17[1].monitor;
    puVar11 = puVar23 + -0xf8;
    __this = (UI_ChatPlayerNameOverlay_o *)method_02;
    if (UVar14 == (UI_ChatDisplayNameRange_Fields)0x0) {
      *(undefined8 *)(puVar23 + -0x108) = 0x43b78c5;
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)UVar14,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// UI.ChatPlayerNameOverlay$$PreferredNameWidth
// il2cpp: float UI_ChatPlayerNameOverlay__PreferredNameWidth (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x43b7780

float UI_ChatPlayerNameOverlay__PreferredNameWidth(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  Il2CppRGCTXData *pIVar1;
  undefined1 auVar2 [16];
  int32_t iVar3;
  Il2CppMethodPointer pIVar4;
  UI_ChatPanel_o *__this_00;
  PatreonEffects_NameEffectLabel_o *pPVar5;
  TMPro_TMP_Text_o *__this_01;
  UnityEngine_Vector2_o UVar6;
  Il2CppRGCTXData IVar7;
  Il2CppRGCTXData IVar8;
  uint uVar9;
  bool_conflict bVar10;
  long lVar11;
  UI_ChatDisplayNameRange_Fields __this_02;
  System_String_o *pSVar12;
  Photon_Realtime_Player_o *pPVar13;
  Photon_Realtime_Room_o *pPVar14;
  System_String_o *pSVar15;
  undefined8 uVar16;
  Il2CppRGCTXData *in_RCX;
  TMPro_TMP_FontAsset_o *font;
  MethodInfo *method_00;
  long *plVar17;
  UI_ChatDisplayNameRange_Fields unaff_RBX;
  UI_ChatDisplayNameRange_Fields *pUVar18;
  UI_ChatDisplayNameRange_Fields *unaff_RBP;
  UI_ChatDisplayNameRange_Fields UVar19;
  UI_ChatDisplayNameRange_Fields unaff_R12;
  uint32_t *unaff_R13;
  TMPro_TMP_FontAsset_o *unaff_R14;
  long *plVar20;
  Il2CppRGCTXData *unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  undefined4 uVar21;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM2_Qb;
  UnityEngine_Color_o value;
  UnityEngine_Vector3_o position;
  
  do {
    *(Il2CppRGCTXData **)((long)register0x00000020 + -8) = unaff_R15;
    *(TMPro_TMP_FontAsset_o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(UI_ChatDisplayNameRange_Fields *)((long)register0x00000020 + -0x18) = unaff_RBX;
    unaff_R15 = in_RCX;
    if (g_data_057ae392 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43b77a1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43b77ad;
      il2cpp_runtime_helper_023445d0(&"|");
      g_data_057ae392 = '\x01';
      unaff_R15 = in_RCX;
    }
    pUVar18 = *(UI_ChatDisplayNameRange_Fields **)((long)__this + 0x28);
    plVar20 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43b77d0;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar17._0_4_ = 0;
    plVar17._4_4_ = 0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43b77dc;
    pSVar12 = (System_String_o *)pUVar18;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return 0.0;
    }
    if (*(Il2CppType **)((long)__this + 0x28) != (Il2CppType *)0x0) {
      pUVar18 = (*(Il2CppType **)((long)__this + 0x28))[6].data;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43b7809;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43b7815;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return 0.0;
      }
      pSVar12 = *(System_String_o **)((long)__this + 0x48);
      plVar17._0_4_ = 0;
      plVar17._4_4_ = 0;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43b7829;
      bVar10 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return 0.0;
      }
      if (*(Il2CppType **)((long)__this + 0x28) != (Il2CppType *)0x0) {
        __this_01 = (*(Il2CppType **)((long)__this + 0x28))[6].data;
        pSVar12 = *(System_String_o **)((long)__this + 0x48);
        pUVar18 = &"|";
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43b7852;
        plVar17 = (long *)"|";
        pSVar15 = System_String__Concat_3ae5ba0(pSVar12,(System_String_o *)"|",(MethodInfo *)0x0);
        plVar20 = (long *)0x0;
        if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43b786f;
          UVar6 = TMPro_TMP_Text__GetPreferredValues_4c70170
                            (__this_01,pSVar15,3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
          auVar2._8_4_ = extraout_XMM0_Dc;
          auVar2._0_4_ = UVar6.fields.x;
          auVar2._4_4_ = UVar6.fields.y;
          auVar2._12_4_ = extraout_XMM0_Dd;
          *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = auVar2;
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43b788b;
          UVar6 = TMPro_TMP_Text__GetPreferredValues_4c70170
                            (__this_01,(System_String_o *)"|",3.4028235e+38,3.4028235e+38,
                             (MethodInfo *)0x0);
          if (0.0 < *(float *)((long)register0x00000020 + -0x28) - UVar6.fields.x) {
            return *(float *)((long)register0x00000020 + -0x28) - UVar6.fields.x;
          }
          return 0.0;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x43b78ac;
    uVar16 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar16;
    UVar19 = (UI_ChatDisplayNameRange_Fields)pSVar12[1].monitor;
    if (UVar19 == (UI_ChatDisplayNameRange_Fields)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x43b78c5;
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)UVar19,(MethodInfo *)0x0);
      return extraout_XMM0_Da_08;
    }
    *(UI_ChatDisplayNameRange_Fields **)((long)register0x00000020 + -0x30) = unaff_RBP;
    *(UI_ChatPlayerNameOverlay_o **)((long)register0x00000020 + -0x38) = __this;
    *(long **)((long)register0x00000020 + -0x40) = plVar20;
    *(UI_ChatDisplayNameRange_Fields **)((long)register0x00000020 + -0x48) = pUVar18;
    unaff_RBX = (UI_ChatDisplayNameRange_Fields)plVar17;
    pUVar18 = (UI_ChatDisplayNameRange_Fields *)UVar19;
    if (g_data_057ae37e == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b7365;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b7371;
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b737d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TMP_TextUtilities);
      pUVar18 = &"suggestion_";
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b7389;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae37e = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x94) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x98) = 0;
    if ((UI_ChatDisplayNameRange_Fields)plVar17 == (UI_ChatDisplayNameRange_Fields)0x0) {
label_043b75a2:
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b75a7;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      __this = *(UI_ChatPlayerNameOverlay_o **)((long)UVar19 + 0x10);
      uVar16 = *(undefined8 *)((long)plVar17 + 0x104);
      uVar21 = (undefined4)uVar16;
      uVar22 = (undefined4)((ulong)uVar16 >> 0x20);
      if (*(int *)(TypeInfo_TMP_TextUtilities + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = uVar16;
        *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b73e8;
        il2cpp_runtime_helper_02337ed0();
        uVar21 = *(undefined4 *)((long)register0x00000020 + -0x60);
        uVar22 = *(undefined4 *)((long)register0x00000020 + -0x5c);
      }
      in_XMM1_Db = 0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      unaff_RBX.SourceStartIndex = 0;
      unaff_RBX.SourceEndIndex = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b73fc;
      position.fields.y = (float)uVar22;
      position.fields.x = (float)uVar21;
      position.fields.z = 0.0;
      in_XMM1_Da = 0;
      pUVar18 = (UI_ChatDisplayNameRange_Fields *)__this;
      uVar9 = TMPro_TMP_TextUtilities__FindIntersectingLink
                        ((TMPro_TMP_Text_o *)__this,position,(UnityEngine_Camera_o *)0x0,(MethodInfo *)0x0);
      if (uVar9 == 0xffffffff) {
        return extraout_XMM0_Da;
      }
      unaff_R15 = (Il2CppRGCTXData *)0x0;
      if (*(InvokerMethod *)((long)UVar19 + 0x10) == (InvokerMethod)0x0) goto label_043b75a2;
      lVar11 = *(long *)(*(InvokerMethod *)((long)UVar19 + 0x10) + 0x368);
      unaff_R15 = (Il2CppRGCTXData *)0x0;
      if ((lVar11 == 0) ||
         (unaff_R15 = *(Il2CppRGCTXData **)(lVar11 + 0x48), unaff_R15 == (Il2CppRGCTXData *)0x0))
      goto label_043b75a2;
      if (uVar9 < *(uint *)(unaff_R15 + 3)) {
        lVar11 = (long)(int)uVar9;
        IVar7 = unaff_R15[lVar11 * 5 + 4];
        IVar8 = (unaff_R15 + lVar11 * 5 + 4)[1];
        pIVar1 = unaff_R15 + lVar11 * 5 + 6;
        in_XMM1_Da = *(undefined4 *)pIVar1;
        in_XMM1_Db = *(undefined4 *)((long)pIVar1 + 4);
        in_XMM1_Dc = *(undefined4 *)(pIVar1 + 1);
        in_XMM1_Dd = *(undefined4 *)((long)pIVar1 + 0xc);
        *(Il2CppRGCTXData *)((long)register0x00000020 + -0x70) = unaff_R15[lVar11 * 5 + 8];
        *(undefined4 *)((long)register0x00000020 + -0x80) = in_XMM1_Da;
        *(undefined4 *)((long)register0x00000020 + -0x7c) = in_XMM1_Db;
        *(undefined4 *)((long)register0x00000020 + -0x78) = in_XMM1_Dc;
        *(undefined4 *)((long)register0x00000020 + -0x74) = in_XMM1_Dd;
        *(Il2CppRGCTXData *)((long)register0x00000020 + -0x90) = IVar7;
        *(Il2CppRGCTXData *)((long)register0x00000020 + -0x88) = IVar8;
        pUVar18 = (UI_ChatDisplayNameRange_Fields *)((long)register0x00000020 + -0x90);
        unaff_RBX.SourceStartIndex = 0;
        unaff_RBX.SourceEndIndex = 0;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b7468;
        __this_02 = (UI_ChatDisplayNameRange_Fields)
                    TMPro_TMP_LinkInfo__GetLinkID
                              ((TMPro_TMP_LinkInfo_o)
                               *(TMPro_TMP_LinkInfo_Fields *)((long)register0x00000020 + -0xa0),
                               (MethodInfo *)pUVar18);
        if (__this_02 != (UI_ChatDisplayNameRange_Fields)0x0) {
          unaff_RBP = &"suggestion_";
          *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b7489;
          unaff_RBX = "suggestion_";
          pUVar18 = (UI_ChatDisplayNameRange_Fields *)__this_02;
          bVar10 = System_String__StartsWith
                             ((System_String_o *)__this_02,(System_String_o *)"suggestion_",(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            unaff_RBX = (UI_ChatDisplayNameRange_Fields)((long)register0x00000020 + -0x98);
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b74f7;
            bVar10 = System_Int32__TryParse
                               ((System_String_o *)__this_02,(int32_t *)unaff_RBX,(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              return extraout_XMM0_Da_02;
            }
            uVar9 = *(uint *)((long)register0x00000020 + -0x98);
            unaff_RBP = (UI_ChatDisplayNameRange_Fields *)(ulong)uVar9;
            plVar17 = &TypeInfo_PhotonNetwork;
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b751b;
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar18._0_4_ = 0;
            pUVar18._4_4_ = 0;
            *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b7522;
            pPVar13 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            if (pPVar13 != (Photon_Realtime_Player_o *)0x0) {
              if (uVar9 == (pPVar13->fields).actorNumber) {
                return extraout_XMM0_Da_03;
              }
              if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b753d;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b7544;
              pPVar14 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
              if (pPVar14 == (Photon_Realtime_Room_o *)0x0) {
                return extraout_XMM0_Da_04;
              }
              if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b755a;
                il2cpp_runtime_helper_02337ed0();
              }
              pUVar18._0_4_ = 0;
              pUVar18._4_4_ = 0;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b7561;
              pPVar14 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
              if (pPVar14 != (Photon_Realtime_Room_o *)0x0) {
                unaff_RBX.SourceEndIndex = 0;
                unaff_RBX.SourceStartIndex = *(uint *)((long)register0x00000020 + -0x98);
                unaff_RBP = (UI_ChatDisplayNameRange_Fields *)pPVar14->klass;
                unaff_R15 = (Il2CppRGCTXData *)
                            (((Photon_Realtime_Room_c *)unaff_RBP)->vtable)._10_GetPlayer.method;
                pIVar4 = (((Photon_Realtime_Room_c *)unaff_RBP)->vtable)._10_GetPlayer.methodPtr;
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b757f;
                pPVar13 = (Photon_Realtime_Player_o *)(*pIVar4)(pPVar14,unaff_RBX,0);
                if (pPVar13 == (Photon_Realtime_Player_o *)0x0) {
                  return extraout_XMM0_Da_05;
                }
                __this_00 = *(UI_ChatPanel_o **)((long)UVar19 + 0x28);
                pUVar18._0_4_ = 0;
                pUVar18._4_4_ = 0;
                if (__this_00 != (UI_ChatPanel_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b7597;
                  UI_ChatPanel__EnterPMMode(__this_00,pPVar13,(MethodInfo *)0x0);
                  return extraout_XMM0_Da_06;
                }
              }
            }
          }
          else {
            plVar17 = (long *)__this_02;
            if ("suggestion_" != (UI_ChatDisplayNameRange_Fields)0x0) {
              iVar3 = *(int32_t *)((long)"suggestion_" + 0x10);
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b74a7;
              pSVar12 = System_String__Substring((System_String_o *)__this_02,iVar3,(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b74b6;
              bVar10 = System_Int32__TryParse
                                 (pSVar12,(int32_t *)((long)register0x00000020 + -0x94),(MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                return extraout_XMM0_Da_00;
              }
              iVar3 = *(int32_t *)((long)register0x00000020 + -0x94);
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b74da;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b74e3;
              GameManagers_ChatManager__HandleSuggestionClick(iVar3,(MethodInfo *)0x0);
              return extraout_XMM0_Da_01;
            }
          }
        }
        goto label_043b75a2;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0x43b75ac;
    uVar21 = il2cpp_runtime_helper_022b2ca0();
    *(UI_ChatPlayerNameOverlay_o **)((long)register0x00000020 + -0xa8) = __this;
    *(UI_ChatDisplayNameRange_Fields *)((long)register0x00000020 + -0xb0) = UVar19;
    *(uint32_t **)((long)register0x00000020 + -0xb8) = unaff_R13;
    *(UI_ChatDisplayNameRange_Fields *)((long)register0x00000020 + -0xc0) = unaff_R12;
    *(long **)((long)register0x00000020 + -200) = plVar17;
    *(undefined8 *)((long)register0x00000020 + -0xd8) = in_XMM2_Qa;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = in_XMM2_Qb;
    *(undefined4 *)((long)register0x00000020 + -0xe8) = in_XMM1_Da;
    *(undefined4 *)((long)register0x00000020 + -0xe4) = in_XMM1_Db;
    *(undefined4 *)((long)register0x00000020 + -0xe0) = in_XMM1_Dc;
    *(undefined4 *)((long)register0x00000020 + -0xdc) = in_XMM1_Dd;
    *(undefined4 *)((long)register0x00000020 + -0xf4) = uVar21;
    in_RCX = unaff_R15;
    __this = (UI_ChatPlayerNameOverlay_o *)pUVar18;
    if (g_data_057ae38b == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7605;
      UVar19 = unaff_RBX;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae38b = '\x01';
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7614;
      UI_ChatPlayerNameOverlay__BuildIfNeeded((UI_ChatPlayerNameOverlay_o *)pUVar18,(MethodInfo *)UVar19);
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b75ea;
      UI_ChatPlayerNameOverlay__BuildIfNeeded((UI_ChatPlayerNameOverlay_o *)pUVar18,(MethodInfo *)unaff_RBX);
    }
    if (unaff_RBX == (UI_ChatDisplayNameRange_Fields)0x0) {
      unaff_RBX = **(UI_ChatDisplayNameRange_Fields **)(g_data_057b9c00 + 0xb8);
    }
    if ((UI_ChatDisplayNameRange_Fields)pUVar18 != (UI_ChatDisplayNameRange_Fields)0x0) {
      unaff_R13 = (uint32_t *)((long)pUVar18 + 0x48);
      *(UI_ChatDisplayNameRange_Fields *)((long)pUVar18 + 0x48) = unaff_RBX;
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b764f;
      il2cpp_runtime_helper_022b4080(unaff_R13);
      *(Il2CppRGCTXData **)((long)register0x00000020 + -0xf0) = unaff_R15;
      ((_union_13 *)((long)pUVar18 + 0x38))->rgctx_data = unaff_R15;
      unaff_RBX.SourceStartIndex = 0;
      unaff_RBX.SourceEndIndex = 0;
      __this = (UI_ChatPlayerNameOverlay_o *)((long)register0x00000020 + -0xf0);
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7667;
      bVar10 = UI_ChatDisplayNameRange__get_IsValid((UI_ChatDisplayNameRange_o)__this,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        if (*(long *)unaff_R13 == 0) goto label_043b7778;
        unaff_RBX._1_7_ = 0;
        unaff_RBX.SourceStartIndex._0_1_ = 0 < *(int *)(*(long *)unaff_R13 + 0x10);
      }
      *(char *)((long)pUVar18 + 0x40) = (char)unaff_RBX.SourceStartIndex;
      pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)pUVar18 + 0x28);
      __this._0_4_ = 0;
      __this._4_4_ = 0;
      if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b769f;
        PatreonEffects_NameEffectLabel__set_fontSize
                  (pPVar5,*(float *)((long)register0x00000020 + -0xf4),(MethodInfo *)0x0);
        pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)pUVar18 + 0x28);
        __this._0_4_ = 0;
        __this._4_4_ = 0;
        if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
          auVar2 = *(undefined1 (*) [16])((long)register0x00000020 + -0xd8);
          in_XMM1_Da = auVar2._0_4_;
          in_XMM1_Db = auVar2._4_4_;
          in_XMM1_Dc = auVar2._8_4_;
          in_XMM1_Dd = auVar2._12_4_;
          *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b76be;
          value.fields.b = (float)(int)auVar2._0_8_;
          value.fields.a = (float)(int)((ulong)auVar2._0_8_ >> 0x20);
          value.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0xe8);
          PatreonEffects_NameEffectLabel__set_color(pPVar5,value,(MethodInfo *)0x0);
          pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)pUVar18 + 0x28);
          __this._0_4_ = 0;
          __this._4_4_ = 0;
          if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b76d8;
            PatreonEffects_NameEffectLabel__set_richText(pPVar5,1,(MethodInfo *)0x0);
            pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)pUVar18 + 0x28);
            __this._0_4_ = 0;
            __this._4_4_ = 0;
            if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b76f2;
              PatreonEffects_NameEffectLabel__set_alignment(pPVar5,0x801,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b770a;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7716;
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar10 != '\0') {
                pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)pUVar18 + 0x28);
                __this._0_4_ = 0;
                __this._4_4_ = 0;
                if (pPVar5 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_043b7778;
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b772e;
                PatreonEffects_NameEffectLabel__SetFont(pPVar5,font,(MethodInfo *)0x0);
              }
              pPVar5 = *(PatreonEffects_NameEffectLabel_o **)((long)pUVar18 + 0x28);
              __this._0_4_ = 0;
              __this._4_4_ = 0;
              if (pPVar5 != (PatreonEffects_NameEffectLabel_o *)0x0) {
                pSVar12 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                pSVar15 = *(System_String_o **)((long)pUVar18 + 0x48);
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b7760;
                PatreonEffects_NameEffectLabel__SetText(pPVar5,pSVar12,pSVar15,pSVar12,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b776a;
                UI_ChatPlayerNameOverlay__SetRaycastTargets((UI_ChatPlayerNameOverlay_o *)pUVar18,0,method_00)
                ;
                return extraout_XMM0_Da_07;
              }
            }
          }
        }
      }
    }
label_043b7778:
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x43b777d;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xf8);
    unaff_R12 = (UI_ChatDisplayNameRange_Fields)pUVar18;
    unaff_R14 = font;
  } while( true );
}


// UI.ChatPlayerNameOverlay$$TryGetSourceNameBounds
// il2cpp: bool UI_ChatPlayerNameOverlay__TryGetSourceNameBounds (UI_ChatPlayerNameOverlay_o* __this, TMPro_TMP_TextInfo_o* textInfo, UnityEngine_Vector3_o* min, UnityEngine_Vector3_o* max, float* baseline, int32_t* firstLine, int32_t* lastLine, const MethodInfo* method);
// 0x43b8fa0

bool_conflict
UI_ChatPlayerNameOverlay__TryGetSourceNameBounds
          (UI_ChatPlayerNameOverlay_o *__this,TMPro_TMP_TextInfo_o *textInfo,UnityEngine_Vector3_o *min,
          UnityEngine_Vector3_o *max,float *baseline,int32_t *firstLine,int32_t *lastLine,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  int iVar3;
  TMPro_TMP_CharacterInfo_array *pTVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  long lVar6;
  UI_ChatDisplayNameRange_o *__this_00;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool_conflict local_64;
  
  (min->fields).x = INFINITY;
  (min->fields).y = INFINITY;
  (min->fields).z = 0.0;
  (max->fields).x = -INFINITY;
  (max->fields).y = -INFINITY;
  (max->fields).z = 0.0;
  *baseline = 0.0;
  *firstLine = -1;
  *lastLine = -1;
  if (((textInfo == (TMPro_TMP_TextInfo_o *)0x0) || ((char)(__this->fields)._hasRange == '\0')) ||
     ((textInfo->fields).characterCount < 1)) {
    return 0;
  }
  __this_00 = &(__this->fields)._range;
  lVar6 = 0x194;
  uVar7 = 0;
  local_64 = 0;
  pTVar4 = (textInfo->fields).characterInfo;
  while (pTVar4 != (TMPro_TMP_CharacterInfo_array *)0x0) {
    if ((uint)pTVar4->max_length <= uVar7) goto label_043b9176;
    if ((*(byte *)((long)pTVar4->m_Items + lVar6 + -0x20) & 1) != 0) {
      iVar3 = *(int *)((long)pTVar4 + lVar6 + -0x130);
      fVar9 = *(float *)((long)pTVar4 + lVar6 + -0x78);
      fVar10 = *(float *)((long)pTVar4 + lVar6 + -0x6c);
      fVar1 = *(float *)((long)pTVar4->m_Items + lVar6 + -0x6c);
      fVar8 = *(float *)((long)pTVar4->m_Items + lVar6 + -0x68);
      fVar2 = *(float *)((long)pTVar4->m_Items + lVar6 + -100);
      __this = (UI_ChatPlayerNameOverlay_o *)__this_00;
      bVar5 = UI_ChatDisplayNameRange__ContainsSourceIndex
                        ((UI_ChatDisplayNameRange_o)__this_00,*(int32_t *)((long)pTVar4 + lVar6 + -0x170),
                         (MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (*firstLine < 0) {
          *firstLine = iVar3;
          *baseline = fVar8;
        }
        *lastLine = iVar3;
        if (iVar3 != *firstLine) {
          return 0;
        }
        fVar8 = (min->fields).x;
        if (fVar9 <= fVar8) {
          fVar8 = fVar9;
        }
        fVar9 = (min->fields).y;
        if (fVar2 <= fVar9) {
          fVar9 = fVar2;
        }
        (min->fields).x = fVar8;
        (min->fields).y = fVar9;
        fVar9 = (max->fields).x;
        if (fVar9 <= fVar10) {
          fVar9 = fVar10;
        }
        fVar10 = (max->fields).y;
        if (fVar10 <= fVar1) {
          fVar10 = fVar1;
        }
        (max->fields).x = fVar9;
        (max->fields).y = fVar10;
        local_64 = (bool_conflict)CONCAT71((int7)((ulong)max >> 8),1);
      }
    }
    uVar7 = uVar7 + 1;
    lVar6 = lVar6 + 0x178;
    if ((long)(textInfo->fields).characterCount <= (long)uVar7) {
      return local_64;
    }
    pTVar4 = (textInfo->fields).characterInfo;
  }
  il2cpp_runtime_helper_022b2c90();
label_043b9176:
  il2cpp_runtime_helper_022b2ca0();
  (__this->fields)._nameText = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._nameText);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return extraout_EAX;
}


// UI.ChatPlayerNameOverlay$$SetRaycastTargets
// il2cpp: void UI_ChatPlayerNameOverlay__SetRaycastTargets (UI_ChatPlayerNameOverlay_o* __this, bool value, const MethodInfo* method);
// 0x43b8930

void UI_ChatPlayerNameOverlay__SetRaycastTargets
               (UI_ChatPlayerNameOverlay_o *__this,bool_conflict value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  int iVar3;
  System_String_o *pSVar4;
  Il2CppClass *vtableDispatch;
  TMPro_TMP_CharacterInfo_array *pTVar5;
  TMPro_TMP_MeshInfo_array *pTVar6;
  UnityEngine_Color32_array *pUVar7;
  undefined8 uVar8;
  bool_conflict bVar9;
  uint uVar10;
  System_Object_array *pSVar11;
  UI_ChatDisplayNameRange_Fields UVar12;
  UI_ChatDisplayNameRange_Fields UVar13;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  uint uVar14;
  UnityEngine_Vector3_Fields *max;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float *extraout_RDX_01;
  long lVar15;
  uint uVar16;
  PatreonEffects_NameEffectLabel_o *pPVar17;
  PatreonEffects_NameEffectLabel_o *pPVar18;
  TMPro_TMP_TextInfo_o *textInfo;
  TMPro_TMP_TextInfo_o *pTVar19;
  float *baseline;
  int32_t *firstLine;
  undefined8 *unaff_R12;
  UnityEngine_Vector3_Fields *pUVar20;
  UI_ChatDisplayNameRange_Fields UVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  MethodInfo *in_stack_ffffffffffffff10;
  float fStack_dc;
  int32_t iStack_d8;
  int32_t iStack_d4;
  UnityEngine_Vector3_Fields UStack_d0;
  UnityEngine_Vector3_Fields UStack_c0;
  UI_ChatDisplayNameRange_Fields UStack_b0;
  undefined8 *puStack_a8;
  
  if (g_data_057ae393 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Graphic_GetComponentsInChildren_Graphic);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae393 = '\x01';
  }
  pPVar17 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  pPVar17 = (__this->fields)._label;
  if ((pPVar17 != (PatreonEffects_NameEffectLabel_o *)0x0) &&
     (pSVar11 = UnityEngine_Component__GetComponentsInChildren_object_
                          ((UnityEngine_Component_o *)pPVar17,1,MethodInfo_Graphic_GetComponentsInChildren_Graphic),
     pSVar11 != (System_Object_array *)0x0)) {
    uVar10 = (uint)pSVar11->max_length;
    if ((int)uVar10 < 1) {
      return;
    }
    uVar16 = 0;
    while (uVar16 < uVar10) {
      pPVar17 = (PatreonEffects_NameEffectLabel_o *)pSVar11->m_Items[(int)uVar16];
      if (pPVar17 == (PatreonEffects_NameEffectLabel_o *)0x0) goto label_043b89f8;
      (*(code *)(((UnityEngine_Component_VTable *)&pPVar17->klass[1].vtable)->_1_Finalize).method)
                (pPVar17,(char)value,
                 (((UnityEngine_Component_VTable *)&pPVar17->klass[1].vtable)->_2_GetHashCode).methodPtr);
      uVar16 = uVar16 + 1;
      uVar10 = (uint)pSVar11->max_length;
      if ((int)uVar10 <= (int)uVar16) {
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_043b89f8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae38d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_TMP_TextInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_HideSourceName);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae38d = '\x01';
  }
  pSVar4 = (pPVar17->fields)._prefix;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  pSVar4 = (pPVar17->fields)._prefix;
  UVar12 = (UI_ChatDisplayNameRange_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_TMP_TextInfo);
  UVar21 = UVar12;
  System_Action_object____ctor();
  if (pSVar4 != (System_String_o *)0x0) {
    vtableDispatch = pSVar4->klass[2]._1.parent;
    (*(code *)vtableDispatch)(pSVar4,UVar12,pSVar4->klass[2]._1.generic_class,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar18 = pPVar17;
  UVar12 = UVar21;
  if (g_data_057ae38f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    UVar12 = (UI_ChatDisplayNameRange_Fields)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae38f = '\x01';
  }
  uVar10 = (uint)pPVar18;
  if (pPVar17 != (PatreonEffects_NameEffectLabel_o *)0x0) {
    UVar13 = (UI_ChatDisplayNameRange_Fields)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pPVar17,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar10 = 0;
    UVar12 = UVar13;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)UVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (UVar13 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8d15;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar13,0,(MethodInfo *)0x0);
    }
    UVar13 = (UI_ChatDisplayNameRange_Fields)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pPVar17,MethodInfo_ContentSizeFitter_GetComponent_ContentSizeFitter);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar10 = 0;
    UVar12 = UVar13;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)UVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((char)bVar9 != '\0') {
      if (UVar13 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8d15;
      uVar10 = 0;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar13,0,(MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
      UVar12 = UVar13;
    }
    lVar15 = *(long *)&((UnityEngine_Color_o *)((long)UVar21 + 0x28))->fields;
    if (lVar15 != 0) {
      UVar12 = *(UI_ChatDisplayNameRange_Fields *)(lVar15 + 0x58);
      uVar10 = 0;
      UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)UVar12,0,method_00);
      lVar15 = *(long *)&((UnityEngine_Color_o *)((long)UVar21 + 0x28))->fields;
      if (lVar15 != 0) {
        UVar12 = *(UI_ChatDisplayNameRange_Fields *)(lVar15 + 0x68);
        uVar10 = 0;
        UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)UVar12,0,method_01);
        lVar15 = *(long *)&((UnityEngine_Color_o *)((long)UVar21 + 0x28))->fields;
        if (lVar15 != 0) {
          UVar12 = *(UI_ChatDisplayNameRange_Fields *)(lVar15 + 0x60);
          uVar10 = 1;
          UI_ChatPlayerNameOverlay__DisableSegmentLayout((TMPro_TextMeshProUGUI_o *)UVar12,1,method_02);
          lVar15 = *(long *)&((UnityEngine_Color_o *)((long)UVar21 + 0x28))->fields;
          if ((lVar15 != 0) &&
             (UVar12 = *(UI_ChatDisplayNameRange_Fields *)(lVar15 + 0x60),
             UVar12 != (UI_ChatDisplayNameRange_Fields)0x0)) {
            uVar10 = 0;
            __this_00 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)UVar12,(MethodInfo *)0x0);
            if (g_data_057a694c == '\0') {
              UVar12 = (UI_ChatDisplayNameRange_Fields)&TypeInfo_Vector2;
              il2cpp_runtime_helper_023445d0();
              g_data_057a694c = '\x01';
            }
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_00,
                         (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              if (g_data_057a9c86 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a9c86 = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (__this_00,
                         (UnityEngine_Vector2_o)
                         *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0
                        );
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMin
                        (__this_00,
                         (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMax
                        (__this_00,
                         (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_043b8d15:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae390 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae390 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  textInfo = (TMPro_TMP_TextInfo_o *)0x0;
  UVar21 = UVar12;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)UVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  if (UVar12 != (UI_ChatDisplayNameRange_Fields)0x0) {
    UVar13 = (UI_ChatDisplayNameRange_Fields)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)UVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    textInfo = (TMPro_TMP_TextInfo_o *)0x0;
    UVar21 = UVar13;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)UVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (UVar13 == (UI_ChatDisplayNameRange_Fields)0x0) goto label_043b8dfb;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)UVar13,0,(MethodInfo *)0x0);
    }
    textInfo = (TMPro_TMP_TextInfo_o *)0x0;
    UVar21 = UVar12;
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)UVar12,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,uVar10 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
label_043b8dfb:
  il2cpp_runtime_helper_022b2c90();
  iStack_d4 = 0;
  iStack_d8 = 0;
  fStack_dc = 0.0;
  UStack_c0.z = 0.0;
  UStack_c0.x = 0.0;
  UStack_c0.y = 0.0;
  UStack_d0.z = 0.0;
  UStack_d0.x = 0.0;
  UStack_d0.y = 0.0;
  if ((textInfo != (TMPro_TMP_TextInfo_o *)0x0) && (*(char *)((long)UVar21 + 0x40) != '\0')) {
    max = &UStack_d0;
    baseline = &fStack_dc;
    firstLine = &iStack_d4;
    pTVar19 = textInfo;
    UVar13 = UVar21;
    UStack_b0 = UVar12;
    puStack_a8 = unaff_R12;
    bVar9 = UI_ChatPlayerNameOverlay__TryGetSourceNameBounds
                      ((UI_ChatPlayerNameOverlay_o *)UVar21,textInfo,(UnityEngine_Vector3_o *)&UStack_c0,
                       (UnityEngine_Vector3_o *)max,baseline,firstLine,&iStack_d8,in_stack_ffffffffffffff10);
    if (((char)bVar9 != '\0') && (0 < (textInfo->fields).characterCount)) {
      lVar15 = 0x24;
      pUVar20 = (UnityEngine_Vector3_Fields *)0x0;
      pTVar5 = (textInfo->fields).characterInfo;
      while (pTVar5 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        max = (UnityEngine_Vector3_Fields *)(ulong)(uint)pTVar5->max_length;
        if (max <= pUVar20) goto label_043b8f83;
        if ((*(byte *)((long)&pTVar5->m_Items[0].fields.scale + lVar15) & 1) != 0) {
          uVar10 = *(uint *)((long)&pTVar5->m_Items[0].fields.textElement + lVar15 + 4);
          uVar16 = *(uint *)((long)&pTVar5->m_Items[0].fields.spriteIndex + lVar15);
          uVar14 = *(uint *)((long)pTVar5->m_Items + lVar15 + -0x20);
          pTVar19 = (TMPro_TMP_TextInfo_o *)(ulong)uVar14;
          UVar13 = (UI_ChatDisplayNameRange_Fields)((long)UVar21 + 0x38);
          bVar9 = UI_ChatDisplayNameRange__ContainsSourceIndex
                            ((UI_ChatDisplayNameRange_o)((long)UVar21 + 0x38),uVar14,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            pTVar6 = (textInfo->fields).meshInfo;
            if (pTVar6 == (TMPro_TMP_MeshInfo_array *)0x0) break;
            if ((uint)pTVar6->max_length <= uVar10) goto label_043b8f83;
            max = (UnityEngine_Vector3_Fields *)((long)(int)uVar10 * 0x50);
            pUVar7 = pTVar6->m_Items[(int)uVar10].fields.colors32;
            if (pUVar7 != (UnityEngine_Color32_array *)0x0) {
              uVar10 = (uint)pUVar7->max_length;
              uVar14 = uVar16 + 3;
              max = (UnityEngine_Vector3_Fields *)(ulong)uVar14;
              if ((int)uVar14 < (int)uVar10) {
                if (uVar10 <= uVar16) {
label_043b8f83:
                  il2cpp_runtime_helper_022b2ca0();
                  return;
                }
                *(undefined1 *)((long)&pUVar7->m_Items[0].fields.rgba + (long)(int)uVar16 * 4 + 3) = 0;
                if ((uint)pUVar7->max_length <= uVar16 + 1) goto label_043b8f83;
                *(undefined1 *)((long)&pUVar7->m_Items[0].fields.rgba + (long)(int)(uVar16 + 1) * 4 + 3) = 0;
                if (((uint)pUVar7->max_length <= uVar16 + 2) ||
                   (*(undefined1 *)((long)&pUVar7->m_Items[0].fields.rgba + (long)(int)(uVar16 + 2) * 4 + 3) =
                         0, (uint)pUVar7->max_length <= uVar14)) goto label_043b8f83;
                max = (UnityEngine_Vector3_Fields *)(long)(int)uVar14;
                *(undefined1 *)((long)&pUVar7->m_Items[0].fields.rgba + (long)max * 4 + 3) = 0;
              }
            }
          }
        }
        pUVar20 = (UnityEngine_Vector3_Fields *)((long)&((UnityEngine_Vector3_Fields *)&pUVar20->x)->x + 1);
        lVar15 = lVar15 + 0x178;
        if ((long)(textInfo->fields).characterCount <= (long)pUVar20) {
          return;
        }
        pTVar5 = (textInfo->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
      extraout_RDX_01[0] = INFINITY;
      extraout_RDX_01[1] = INFINITY;
      extraout_RDX_01[2] = 0.0;
      max->x = -INFINITY;
      max->y = -INFINITY;
      max->z = 0.0;
      *baseline = 0.0;
      *firstLine = -1;
      *(undefined4 *)&in_stack_ffffffffffffff10->methodPointer = 0xffffffff;
      if (((pTVar19 == (TMPro_TMP_TextInfo_o *)0x0) || (*(char *)((long)UVar13 + 0x40) == '\0')) ||
         ((pTVar19->fields).characterCount < 1)) {
        return;
      }
      UVar21 = (UI_ChatDisplayNameRange_Fields)((long)UVar13 + 0x38);
      lVar15 = 0x194;
      uVar22 = 0;
      pTVar5 = (pTVar19->fields).characterInfo;
      while (pTVar5 != (TMPro_TMP_CharacterInfo_array *)0x0) {
        if ((uint)pTVar5->max_length <= uVar22) goto label_043b9176;
        if ((*(byte *)((long)pTVar5->m_Items + lVar15 + -0x20) & 1) != 0) {
          iVar3 = *(int *)((long)pTVar5 + lVar15 + -0x130);
          fVar24 = *(float *)((long)pTVar5 + lVar15 + -0x78);
          fVar25 = *(float *)((long)pTVar5 + lVar15 + -0x6c);
          fVar1 = *(float *)((long)pTVar5->m_Items + lVar15 + -0x6c);
          fVar23 = *(float *)((long)pTVar5->m_Items + lVar15 + -0x68);
          fVar2 = *(float *)((long)pTVar5->m_Items + lVar15 + -100);
          UVar13 = UVar21;
          bVar9 = UI_ChatDisplayNameRange__ContainsSourceIndex
                            ((UI_ChatDisplayNameRange_o)UVar21,*(int32_t *)((long)pTVar5 + lVar15 + -0x170),
                             (MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            if (*firstLine < 0) {
              *firstLine = iVar3;
              *baseline = fVar23;
            }
            *(int *)&in_stack_ffffffffffffff10->methodPointer = iVar3;
            if (iVar3 != *firstLine) {
              return;
            }
            fVar23 = *extraout_RDX_01;
            if (fVar24 <= *extraout_RDX_01) {
              fVar23 = fVar24;
            }
            fVar24 = extraout_RDX_01[1];
            if (fVar2 <= extraout_RDX_01[1]) {
              fVar24 = fVar2;
            }
            *extraout_RDX_01 = fVar23;
            extraout_RDX_01[1] = fVar24;
            fVar24 = ((UnityEngine_Vector3_Fields *)&max->x)->x;
            if (fVar24 <= fVar25) {
              fVar24 = fVar25;
            }
            fVar25 = max->y;
            if (max->y <= fVar1) {
              fVar25 = fVar1;
            }
            ((UnityEngine_Vector3_Fields *)&max->x)->x = fVar24;
            max->y = fVar25;
          }
        }
        uVar22 = uVar22 + 1;
        lVar15 = lVar15 + 0x178;
        if ((long)(pTVar19->fields).characterCount <= (long)uVar22) {
          return;
        }
        pTVar5 = (pTVar19->fields).characterInfo;
      }
      il2cpp_runtime_helper_022b2c90();
label_043b9176:
      il2cpp_runtime_helper_022b2ca0();
      uVar8 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
      (((UnityEngine_Vector4_o *)((long)UVar13 + 0x48))->fields).x = (float)(int)uVar8;
      (((UnityEngine_Vector4_o *)((long)UVar13 + 0x48))->fields).y = (float)(int)((ulong)uVar8 >> 0x20);
      il2cpp_runtime_helper_022b4080((UnityEngine_Vector4_o *)((long)UVar13 + 0x48));
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)UVar13,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.ChatPlayerNameOverlay$$.ctor
// il2cpp: void UI_ChatPlayerNameOverlay___ctor (UI_ChatPlayerNameOverlay_o* __this, const MethodInfo* method);
// 0x43b9180

void UI_ChatPlayerNameOverlay___ctor(UI_ChatPlayerNameOverlay_o *__this,MethodInfo *method)

{
  (__this->fields)._nameText = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._nameText);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


