// Type: UI.EmoteHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EmoteHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteHandler.cs
// --------------------------------

// UI.EmoteHandler$$Awake
// il2cpp: void UI_EmoteHandler__Awake (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x43bc7a0

void UI_EmoteHandler__Awake(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  UI_EmoteTextPopup_array *pUVar3;
  GameManagers_InGameManager_o *pGVar4;
  long lVar5;
  System_Collections_Generic_HashSet_int__o *pSVar6;
  UnityEngine_Component_o *pUVar7;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_01;
  void *pvVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  UI_EmoteTextPopup_c *pUVar9;
  bool_conflict bVar10;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar11;
  UnityEngine_GameObject_o *pUVar12;
  UI_EmoteTextPopup_o *pUVar13;
  UI_BasePopup_o *pUVar14;
  Characters_BaseCharacter_o *pCVar15;
  Il2CppClass *pIVar16;
  Il2CppClass *pIVar17;
  UI_EmoteHandler_o *__this_00;
  System_String_o *__this_01;
  Il2CppClass *pIVar18;
  Il2CppClass *pIVar19;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Characters_BaseCharacter_o *character;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *pIVar20;
  MethodInfo *method_03;
  Il2CppClass **ppIVar21;
  uint uVar22;
  ulong uVar23;
  MethodInfo *method_04;
  Characters_BaseCharacter_o *pCVar24;
  Il2CppClass *pIVar25;
  Il2CppClass **__this_02;
  Il2CppClass *unaff_R12;
  long *plVar26;
  long *plVar27;
  undefined8 in_XMM1_Qa;
  undefined4 uVar28;
  undefined1 auVar29 [12];
  UnityEngine_Vector3_o UVar30;
  undefined8 uStack_c8;
  Il2CppClass *pIStack_c0;
  long *plStack_b8;
  Characters_BaseCharacter_o *pCStack_b0;
  Il2CppClass *pIStack_a8;
  Characters_BaseCharacter_o *pCStack_a0;
  Il2CppClass *pIStack_98;
  Il2CppClass *pIStack_90;
  Il2CppClass *pIStack_88;
  Il2CppClass *pIStack_80;
  Il2CppClass *pIStack_78;
  undefined8 uStack_70;
  UI_EmoteHandler_o *pUStack_68;
  Il2CppClass **ppIStack_60;
  long *plStack_58;
  Il2CppClass **ppIStack_50;
  MethodInfo_24FB4C0 **ppMStack_48;
  ulong uStack_40;
  
  if (g_data_057ae3b8 == '\0') {
    uStack_40 = 0x43bc7c7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_EmoteEmojiPopup);
    uStack_40 = 0x43bc7d3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_EmoteTextPopup);
    uStack_40 = 0x43bc7df;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_WheelPopup);
    uStack_40 = 0x43bc7eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_GetComponent_BasePopup);
    uStack_40 = 0x43bc7f7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteEmojiPopup_GetComponent_EmoteEmojiPopup);
    uStack_40 = 0x43bc803;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_GetComponent_EmoteTextPopup);
    uStack_40 = 0x43bc80f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    uStack_40 = 0x43bc81b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_40 = 0x43bc827;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    uStack_40 = 0x43bc833;
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/EmoteTextPopup");
    uStack_40 = 0x43bc83f;
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/EmoteEmojiPopup");
    uStack_40 = 0x43bc84b;
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/WheelMenu");
    g_data_057ae3b8 = '\x01';
  }
  uStack_40 = 0x43bc85c;
  pSVar11 = (System_Collections_Generic_List_EmoteTextPopup__o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  uVar23 = 5;
  do {
    uStack_40 = 0x43bc8c8;
    pIVar20 = "Prefabs/InGame/EmoteTextPopup";
    pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                        ((UnityEngine_Transform_o *)pSVar11,(System_String_o *)"Prefabs/InGame/EmoteTextPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_EmoteTextPopup);
    uVar28 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_043bca9c;
    uStack_40 = 0x43bc8e3;
    pIVar20 = MethodInfo_EmoteTextPopup_GetComponent_EmoteTextPopup;
    pUVar13 = (UI_EmoteTextPopup_o *)
              UnityEngine_GameObject__GetComponent_object_(pUVar12,(MethodInfo_255A0F0 *)MethodInfo_EmoteTextPopup_GetComponent_EmoteTextPopup);
    lVar5 = MethodInfo_Void_Add;
    uVar28 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
    pSVar11 = (__this->fields)._emoteTextPopups;
    if (pSVar11 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) goto label_043bca9c;
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (pSVar11->fields)._items;
    if (pUVar3 == (UI_EmoteTextPopup_array *)0x0) goto label_043bca9c;
    uVar22 = (pSVar11->fields)._size;
    if (uVar22 < (uint)pUVar3->max_length) {
      (pSVar11->fields)._size = uVar22 + 1;
      pUVar3->m_Items[(int)uVar22] = pUVar13;
      uStack_40 = 0x43bc929;
      il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar22);
    }
    else {
      uStack_40 = 0x43bc947;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pUVar13,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    uStack_40 = 0x43bc951;
    pSVar11 = (System_Collections_Generic_List_EmoteTextPopup__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    uStack_40 = 0x43bc961;
    pIVar20 = "Prefabs/InGame/EmoteEmojiPopup";
    pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                        ((UnityEngine_Transform_o *)pSVar11,(System_String_o *)"Prefabs/InGame/EmoteEmojiPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_EmoteEmojiPopup);
    uVar28 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_043bca9c;
    uStack_40 = 0x43bc976;
    pIVar20 = MethodInfo_EmoteEmojiPopup_GetComponent_EmoteEmojiPopup;
    pUVar13 = (UI_EmoteTextPopup_o *)
              UnityEngine_GameObject__GetComponent_object_(pUVar12,(MethodInfo_255A0F0 *)MethodInfo_EmoteEmojiPopup_GetComponent_EmoteEmojiPopup);
    lVar5 = MethodInfo_Void_Add;
    uVar28 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
    pSVar11 = (__this->fields)._emoteEmojiPopups;
    if (pSVar11 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) goto label_043bca9c;
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (pSVar11->fields)._items;
    if (pUVar3 == (UI_EmoteTextPopup_array *)0x0) goto label_043bca9c;
    uVar22 = (pSVar11->fields)._size;
    if (uVar22 < (uint)pUVar3->max_length) {
      (pSVar11->fields)._size = uVar22 + 1;
      pUVar3->m_Items[(int)uVar22] = pUVar13;
      uStack_40 = 0x43bc9c0;
      il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar22);
    }
    else {
      uStack_40 = 0x43bc897;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pUVar13,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    uStack_40 = 0x43bc8a1;
    pSVar11 = (System_Collections_Generic_List_EmoteTextPopup__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    uVar28 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
    uVar22 = (int)uVar23 - 1;
    uVar23 = (ulong)uVar22;
  } while (uVar22 != 0);
  uStack_40 = 0x43bc9e3;
  pIVar20 = "Prefabs/InGame/WheelMenu";
  pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                      ((UnityEngine_Transform_o *)pSVar11,(System_String_o *)"Prefabs/InGame/WheelMenu",0,MethodInfo_GameObject_InstantiateAndSetupPanel_WheelPopup);
  if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
label_043bca9c:
    uVar22 = (uint)pSVar11;
    uStack_40 = 0x43bcaa1;
    uStack_70 = il2cpp_runtime_helper_022b2c90();
    ppMStack_48 = &MethodInfo_GameObject_InstantiateAndSetupPanel_EmoteEmojiPopup;
    ppIStack_50 = &"Prefabs/InGame/EmoteEmojiPopup";
    plStack_58 = &MethodInfo_Void_Add;
    ppIStack_60 = &MethodInfo_EmoteEmojiPopup_GetComponent_EmoteEmojiPopup;
    pIVar16 = (Il2CppClass *)(ulong)uVar22;
    pUStack_68 = __this;
    uStack_40 = uVar23;
    if (g_data_057ae3b9 == '\0') {
      pIStack_78 = (Il2CppClass *)0x43bcad6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
      pIStack_78 = (Il2CppClass *)0x43bcae2;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
      pIStack_78 = (Il2CppClass *)0x43bcaee;
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
      pIStack_78 = (Il2CppClass *)0x43bcafa;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      pIStack_78 = (Il2CppClass *)0x43bcb06;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      pIStack_78 = (Il2CppClass *)0x43bcb12;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      pIStack_78 = (Il2CppClass *)0x43bcb1e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      pIStack_78 = (Il2CppClass *)0x43bcb2a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ae3b9 = '\x01';
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      pIStack_78 = (Il2CppClass *)0x43bcb49;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar18 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_78 = (Il2CppClass *)0x43bcb70;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_78 = (Il2CppClass *)0x43bcb7c;
    pIVar25 = pIVar18;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pIVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    pCVar24 = (Characters_BaseCharacter_o *)&MethodInfo_Void_Add;
    pIVar19 = (Il2CppClass *)&TypeInfo_UIManager;
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0xc0), lVar5 != 0)) {
      if (*(char *)(lVar5 + 0x11) == '\0') {
        return;
      }
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        pIStack_78 = (Il2CppClass *)0x43bcbd9;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar18 = unaff_R12;
      pIVar25 = TypeInfo_InGameManager;
      pCVar24 = (Characters_BaseCharacter_o *)&stack0xffffffffffffffd0;
      if (unaff_R12 != (Il2CppClass *)0x0) {
        pSVar6 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x20);
        pIVar25 = (Il2CppClass *)0x0;
        if (pSVar6 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          pIStack_78 = (Il2CppClass *)0x43bcc0f;
          bVar10 = System_Collections_Generic_HashSet_int___Contains
                             (pSVar6,*(int32_t *)&(unaff_R12->_1).namespaze,MethodInfo_Boolean_Contains);
          if ((char)bVar10 != '\0') {
            return;
          }
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            pIStack_78 = (Il2CppClass *)0x43bcc2f;
            il2cpp_runtime_helper_02337ed0();
          }
          pIStack_78 = (Il2CppClass *)0x43bcc39;
          pIVar25 = pIVar16;
          pCVar15 = Utility_Util__FindCharacterByViewId(uVar22,(MethodInfo *)0x0);
          if (((pCVar15 != (Characters_BaseCharacter_o *)0x0) &&
              (lVar5 = *(long *)&(pCVar15->fields).Dead, pCVar24 = pCVar15, lVar5 != 0)) &&
             (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
            if (unaff_R12 != *(Il2CppClass **)(lVar5 + 0x80)) {
              return;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              pIStack_78 = (Il2CppClass *)0x43bcc7d;
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar7 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            pIVar25 = (Il2CppClass *)0x0;
            if (pUVar7 != (UnityEngine_Component_o *)0x0) {
              pIStack_78 = (Il2CppClass *)0x43bcca3;
              pIVar16 = (Il2CppClass *)UnityEngine_Component__GetComponent_object_(pUVar7,MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pIStack_78 = (Il2CppClass *)0x43bccb8;
                il2cpp_runtime_helper_02337ed0();
              }
              pIStack_78 = (Il2CppClass *)0x43bccc4;
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pIStack_78 = (Il2CppClass *)0x43bccde;
                il2cpp_runtime_helper_02337ed0();
              }
              method_04 = (MethodInfo *)0x0;
              pIStack_78 = (Il2CppClass *)0x43bccea;
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pIVar16,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                return;
              }
              pIStack_78 = (Il2CppClass *)0x43bccf6;
              pIVar25 = pIVar20;
              pIVar17 = (Il2CppClass *)UI_EmoteHandler__SanitizeText((System_String_o *)pIVar20,method_04);
              if (pIVar16 != (Il2CppClass *)0x0) {
                pIStack_78 = (Il2CppClass *)0x43bcd07;
                pUVar13 = UI_EmoteHandler__GetAvailablePopup
                                    ((UI_EmoteHandler_o *)pIVar25,(pIVar16->_1).byval_arg.data,method_00);
                pIStack_78 = (Il2CppClass *)0x43bcd12;
                UVar30 = UI_EmoteHandler__GetOffset((UI_EmoteHandler_o *)pIVar25,pCVar15,method_01);
                pIVar20 = (Il2CppClass *)0x0;
                pIVar19 = pIVar17;
                if (pUVar13 != (UI_EmoteTextPopup_o *)0x0) {
                  UNRECOVERED_JUMPTABLE_01 = (pUVar13->klass->vtable)._59_Load.methodPtr;
                  (*UNRECOVERED_JUMPTABLE_01)
                            (0x40400000,UVar30.fields._0_8_,CONCAT44(uVar28,UVar30.fields.z),pUVar13,pIVar17,
                             pCVar15,(pUVar13->klass->vtable)._59_Load.method,UNRECOVERED_JUMPTABLE_01);
                  return;
                }
              }
            }
          }
        }
      }
    }
    pIStack_78 = (Il2CppClass *)0x43bcd6b;
    il2cpp_runtime_helper_022b2c90();
    pIStack_78 = pIVar18;
    if (g_data_057ae3c6 == '\0') {
      pIStack_80 = (Il2CppClass *)0x43bcd89;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
      g_data_057ae3c6 = '\x01';
    }
    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
      pIStack_80 = (Il2CppClass *)0x43bcda8;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_80 = (Il2CppClass *)0x43bcdb2;
    __this_00 = (UI_EmoteHandler_o *)
                Anticheat_ChatFilter__FilterBadWords((System_String_o *)pIVar25,(MethodInfo *)0x0);
    pIVar18 = (Il2CppClass *)0x0;
    pIStack_80 = (Il2CppClass *)0x43bcdbc;
    __this_01 = Anticheat_ChatFilter__FilterSizeTag((System_String_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (System_String_o *)0x0) {
      if ((__this_01->fields)._stringLength < 0x15) {
        return;
      }
      System_String__Substring_3af8da0(__this_01,0,0x14,(MethodInfo *)0x0);
      return;
    }
    pIStack_80 = (Il2CppClass *)UI_EmoteHandler__ShowEmoteText;
    il2cpp_runtime_helper_022b2c90();
    pIStack_98 = (Il2CppClass *)0x43bcdf4;
    pIStack_90 = pIVar25;
    pIStack_88 = pIVar16;
    pIStack_80 = pIVar19;
    pIVar16 = (Il2CppClass *)
              UI_EmoteHandler__GetAvailablePopup
                        (__this_00,(__this_00->fields)._emoteTextPopups,(MethodInfo *)character);
    pIStack_98 = (Il2CppClass *)0x43bcdff;
    pCVar15 = character;
    UVar30 = UI_EmoteHandler__GetOffset(__this_00,character,method_02);
    uVar22 = (uint)__this_00;
    if (pIVar16 != (Il2CppClass *)0x0) {
      pvVar8 = (pIVar16->_1).image;
      UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar8 + 0x4e8);
      (*UNRECOVERED_JUMPTABLE_00)
                (0x40400000,UVar30.fields._0_8_,CONCAT44(uVar28,UVar30.fields.z),pIVar16,pIVar18,character,
                 *(undefined8 *)((long)pvVar8 + 0x4f0),UNRECOVERED_JUMPTABLE_00);
      return;
    }
    pIStack_98 = (Il2CppClass *)0x43bce3f;
    uStack_c8 = il2cpp_runtime_helper_022b2c90();
    plStack_b8 = &TypeInfo_Object;
    ppIVar21 = (Il2CppClass **)&uStack_c8;
    pIVar25 = (Il2CppClass *)(ulong)uVar22;
    pIStack_c0 = pIVar16;
    pCStack_b0 = pCVar24;
    pIStack_a8 = pIVar18;
    pCStack_a0 = character;
    pIStack_98 = pIVar20;
    if (g_data_057ae3ba == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ae3ba = '\x01';
    }
    plVar27 = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar20 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    plVar26 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar24 = (Characters_BaseCharacter_o *)0x0;
    pIVar16 = pIVar20;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pIVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0xc0), lVar5 != 0)) {
      if (*(char *)(lVar5 + 0x11) == '\0') {
        return;
      }
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar20 = pIStack_80;
      pIVar16 = TypeInfo_InGameManager;
      if (pIStack_80 != (Il2CppClass *)0x0) {
        pSVar6 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x20);
        pIVar16 = (Il2CppClass *)0x0;
        if (pSVar6 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar10 = System_Collections_Generic_HashSet_int___Contains
                             (pSVar6,*(int32_t *)&(pIStack_80->_1).namespaze,MethodInfo_Boolean_Contains);
          if ((char)bVar10 != '\0') {
            return;
          }
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar24 = (Characters_BaseCharacter_o *)0x0;
          pIVar16 = pIVar25;
          pIVar18 = (Il2CppClass *)Utility_Util__FindCharacterByViewId(uVar22,(MethodInfo *)0x0);
          if (((pIVar18 != (Il2CppClass *)0x0) && (pvVar8 = (pIVar18->_1).interopData, pvVar8 != (void *)0x0))
             && (lVar5 = *(long *)((long)pvVar8 + 0x20), lVar5 != 0)) {
            if (pIVar20 != *(Il2CppClass **)(lVar5 + 0x80)) {
              return;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar7 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            pIVar16 = (Il2CppClass *)0x0;
            if (pUVar7 != (UnityEngine_Component_o *)0x0) {
              pIVar19 = (Il2CppClass *)UnityEngine_Component__GetComponent_object_(pUVar7,MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pIVar18,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pCVar24 = (Characters_BaseCharacter_o *)0x0;
              pIVar16 = pIVar19;
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pIVar19,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                return;
              }
              pIVar25 = (Il2CppClass *)0x0;
              if (pIVar19 != (Il2CppClass *)0x0) {
                ppIVar21 = &pIStack_90;
                pIVar20 = pIStack_c0;
                plVar26 = plStack_b8;
                pIVar25 = pIStack_a8;
                plVar27 = (long *)pCStack_a0;
                goto UI_EmoteHandler__ShowEmoteEmoji;
              }
            }
          }
        }
      }
    }
    pIVar19 = pIVar16;
    pCVar15 = pCVar24;
    il2cpp_runtime_helper_022b2c90();
    pIVar18 = extraout_RDX;
UI_EmoteHandler__ShowEmoteEmoji:
    *(long **)((long)ppIVar21 + -8) = plVar27;
    *(Il2CppClass **)((long)ppIVar21 + -0x10) = pIVar25;
    *(Il2CppClass **)((long)ppIVar21 + -0x18) = pIVar20;
    pIVar20 = pIVar18;
    __this_02 = (Il2CppClass **)pIVar19;
    if (g_data_057ae3bb == '\0') {
      __this_02 = &TypeInfo_EmoteEmojiPopup;
      *(undefined8 *)((long)ppIVar21 + -0x20) = 0x43bd0d3;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae3bb = '\x01';
      pIVar20 = extraout_RDX_00;
    }
    pSVar11 = *(System_Collections_Generic_List_EmoteTextPopup__o **)&(pIVar19->_1).byval_arg.bits;
    *(undefined8 *)((long)ppIVar21 + -0x20) = 0x43bd0e3;
    pUVar13 = UI_EmoteHandler__GetAvailablePopup((UI_EmoteHandler_o *)__this_02,pSVar11,(MethodInfo *)pIVar20)
    ;
    *(undefined8 *)((long)ppIVar21 + -0x20) = 0x43bd0ee;
    pIVar20 = pIVar18;
    UVar30 = UI_EmoteHandler__GetOffset
                       ((UI_EmoteHandler_o *)__this_02,(Characters_BaseCharacter_o *)pIVar18,method_03);
    if (pUVar13 != (UI_EmoteTextPopup_o *)0x0) {
      bVar2 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
      if ((bVar2 <= (pUVar13->klass->_2).naturalAligment) &&
         ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_EmoteEmojiPopup)) {
        pUVar9 = pUVar13->klass;
        bVar2 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
        if ((bVar2 <= (pUVar9->_2).naturalAligment) &&
           ((pUVar9->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_EmoteEmojiPopup)) {
          UNRECOVERED_JUMPTABLE_01 = (pUVar9->vtable)._59_Load.methodPtr;
          (*UNRECOVERED_JUMPTABLE_01)
                    (0x40400000,UVar30.fields._0_8_,CONCAT44(uVar28,UVar30.fields.z),pUVar13,pCVar15,pIVar18,
                     (pUVar9->vtable)._59_Load.method,UNRECOVERED_JUMPTABLE_01);
          return;
        }
      }
      *(undefined8 *)((long)ppIVar21 + -0x20) = 0x43bd17c;
      pIVar20 = TypeInfo_EmoteEmojiPopup;
      il2cpp_runtime_helper_022b2fd0(pUVar13);
    }
    *(undefined8 *)((long)ppIVar21 + -0x20) = 0x43bd181;
    il2cpp_runtime_helper_022b2c90();
    *(Il2CppClass **)((long)ppIVar21 + -0x20) = pIVar18;
    *(Characters_BaseCharacter_o **)((long)ppIVar21 + -0x28) = pCVar15;
    *(long **)((long)ppIVar21 + -0x30) = plVar26;
    *(UI_EmoteTextPopup_o **)((long)ppIVar21 + -0x38) = pUVar13;
    if (g_data_057ae3c3 == '\0') {
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd1b3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd1bf;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd1cb;
      il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd1d7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd1e3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Item);
      g_data_057ae3c3 = '\x01';
    }
    *(undefined8 *)((long)ppIVar21 + -0x70) = 0;
    *(undefined8 *)((long)ppIVar21 + -0x68) = 0;
    *(undefined8 *)((long)ppIVar21 + -0x60) = 0;
    if (pIVar20 != (Il2CppClass *)0x0) {
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd21a;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)((long)ppIVar21 + -0x50),
                 (System_Collections_Generic_List_object__o *)pIVar20,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
      *(undefined8 *)((long)ppIVar21 + -0x60) = *(undefined8 *)((long)ppIVar21 + -0x40);
      *(undefined8 *)((long)ppIVar21 + -0x70) = *(undefined8 *)((long)ppIVar21 + -0x50);
      *(undefined8 *)((long)ppIVar21 + -0x68) = *(undefined8 *)((long)ppIVar21 + -0x48);
      while( true ) {
        *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd24c;
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o)
                            *(System_Collections_Generic_List_Enumerator_object__Fields *)
                             ((long)ppIVar21 + -0x70),(MethodInfo_321A1D0 *)((long)ppIVar21 + -0x70));
        if ((char)bVar10 == '\0') {
          *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd29d;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o)
                     *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppIVar21 + -0x70),
                     (MethodInfo_321A1C0 *)((long)ppIVar21 + -0x70));
          goto label_043bd29d;
        }
        if (*(UnityEngine_Component_o **)((long)ppIVar21 + -0x60) == (UnityEngine_Component_o *)0x0) break;
        *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd264;
        pUVar12 = UnityEngine_Component__get_gameObject
                            (*(UnityEngine_Component_o **)((long)ppIVar21 + -0x60),(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_043bd2c8;
        *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd273;
        bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd289;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o)
                     *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppIVar21 + -0x70),
                     (MethodInfo_321A1C0 *)((long)ppIVar21 + -0x70));
          return;
        }
      }
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd2c8;
      il2cpp_runtime_helper_022b2c90();
label_043bd2c8:
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd2cd;
      il2cpp_runtime_helper_022b2c90();
    }
    *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd2d2;
    auVar29 = il2cpp_runtime_helper_022b2c90();
    if (auVar29._8_4_ == 1) {
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd30a;
      plVar27 = (long *)__cxa_begin_catch(auVar29._0_8_);
      lVar5 = *plVar27;
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd312;
      __cxa_end_catch();
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd324;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o)
                 *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppIVar21 + -0x70),
                 (MethodInfo_321A1C0 *)((long)ppIVar21 + -0x70));
      if (lVar5 == 0) {
label_043bd29d:
        *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd2b1;
        System_Collections_Generic_List_object___get_Item
                  ((System_Collections_Generic_List_object__o *)pIVar20,0,MethodInfo_EmoteTextPopup_get_Item);
        return;
      }
      *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd335;
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd34e;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppIVar21 + -0x70),
               (MethodInfo_321A1C0 *)((long)ppIVar21 + -0x70));
    *(undefined8 *)((long)ppIVar21 + -0x78) = 0x43bd35b;
    _Unwind_Resume(auVar29._0_8_);
  }
  uStack_40 = 0x43bc9fe;
  pUVar14 = (UI_BasePopup_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_BasePopup_GetComponent_BasePopup);
  (__this->fields)._emoteWheelPopup = pUVar14;
  uStack_40 = 0x43bca0e;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._emoteWheelPopup,pUVar14);
  pIVar20 = TypeInfo_InGameManager;
  pGVar4 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar4 != (GameManagers_InGameManager_o *)0x0) {
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar2 <= (pGVar4->klass->_2).naturalAligment) &&
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      (__this->fields)._inGameManager = pGVar4;
      if ((bVar2 <= (pGVar4->klass->_2).naturalAligment) &&
         ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar20)) goto label_043bca82;
    }
    uStack_40 = 0x43bca7a;
    il2cpp_runtime_helper_022b2fd0(pGVar4,pIVar20);
  }
  (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
label_043bca82:
  il2cpp_runtime_helper_022b4080(&(__this->fields)._inGameManager);
  return;
}


// UI.EmoteHandler$$OnEmoteTextRPC
// il2cpp: void UI_EmoteHandler__OnEmoteTextRPC (int32_t viewId, System_String_o* text, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x43bcab0

void UI_EmoteHandler__OnEmoteTextRPC
               (int32_t viewId,System_String_o *text,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  UnityEngine_Component_o *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar5;
  System_Collections_Generic_List_EmoteTextPopup__o *popups;
  UI_EmoteTextPopup_c *pUVar6;
  bool_conflict bVar7;
  Characters_BaseCharacter_o *pCVar8;
  UI_EmoteTextPopup_o *pUVar9;
  UI_EmoteTextPopup_o *pUVar10;
  UI_EmoteTextPopup_o *pUVar11;
  UI_EmoteHandler_o *__this;
  System_String_o *__this_00;
  Il2CppClass *character;
  UI_EmoteTextPopup_o *pUVar12;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Characters_BaseCharacter_o *character_00;
  MethodInfo *method_02;
  Il2CppClass *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *pIVar13;
  MethodInfo *method_03;
  UI_EmoteTextPopup_o *pUVar14;
  UI_EmoteTextPopup_o **ppUVar15;
  MethodInfo *method_04;
  Characters_BaseCharacter_o *pCVar16;
  uint viewId_00;
  UI_EmoteTextPopup_o *pUVar17;
  Il2CppClass **__this_02;
  long *plVar18;
  Characters_BaseCharacter_o *unaff_R13;
  long *plVar19;
  undefined8 in_XMM1_Qa;
  undefined4 uVar20;
  undefined1 auVar21 [12];
  UnityEngine_Vector3_o UVar22;
  undefined8 uStack_90;
  UI_EmoteTextPopup_o *pUStack_88;
  long *plStack_80;
  Characters_BaseCharacter_o *pCStack_78;
  UI_EmoteTextPopup_o *pUStack_70;
  Characters_BaseCharacter_o *pCStack_68;
  System_String_o *pSStack_60;
  UI_EmoteTextPopup_o *pUStack_58;
  UI_EmoteTextPopup_o *pUStack_50;
  UI_EmoteTextPopup_o *pUStack_48;
  UI_EmoteTextPopup_o *pUStack_40;
  
  uVar20 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  pUVar9 = (UI_EmoteTextPopup_o *)(ulong)(uint)viewId;
  if (g_data_057ae3b9 == '\0') {
    pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcad6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
    pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcae2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcaee;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcafa;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcb06;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcb12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcb1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcb2a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae3b9 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcb49;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar14 = *(UI_EmoteTextPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcb70;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcb7c;
  pUVar17 = pUVar14;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  pUVar12 = (UI_EmoteTextPopup_o *)&TypeInfo_UIManager;
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0xc0), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x11) == '\0') {
      return;
    }
    if (*(int *)((long)&TypeInfo_InGameManager[1].klass + 4) == 0) {
      pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcbd9;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar14 = (UI_EmoteTextPopup_o *)info.fields.Sender;
    pUVar17 = TypeInfo_InGameManager;
    unaff_R13 = (Characters_BaseCharacter_o *)&info;
    if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
      pSVar3 = (TypeInfo_InGameManager->fields)._transform[1].monitor;
      pUVar17 = (UI_EmoteTextPopup_o *)0x0;
      if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcc0f;
        bVar7 = System_Collections_Generic_HashSet_int___Contains
                          (pSVar3,((info.fields.Sender)->fields).actorNumber,MethodInfo_Boolean_Contains);
        if ((char)bVar7 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcc2f;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcc39;
        pUVar17 = pUVar9;
        pCVar8 = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        if (((pCVar8 != (Characters_BaseCharacter_o *)0x0) &&
            (lVar2 = *(long *)&(pCVar8->fields).Dead, unaff_R13 = pCVar8, lVar2 != 0)) &&
           (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
          if (pUVar14 != (UI_EmoteTextPopup_o *)*(Photon_Realtime_Player_o **)(lVar2 + 0x80)) {
            return;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcc7d;
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar4 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          pUVar17 = (UI_EmoteTextPopup_o *)0x0;
          if (pUVar4 != (UnityEngine_Component_o *)0x0) {
            pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcca3;
            pUVar9 = (UI_EmoteTextPopup_o *)UnityEngine_Component__GetComponent_object_(pUVar4,MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pUStack_40 = (UI_EmoteTextPopup_o *)0x43bccb8;
              il2cpp_runtime_helper_02337ed0();
            }
            pUStack_40 = (UI_EmoteTextPopup_o *)0x43bccc4;
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pUStack_40 = (UI_EmoteTextPopup_o *)0x43bccde;
              il2cpp_runtime_helper_02337ed0();
            }
            method_04 = (MethodInfo *)0x0;
            pUStack_40 = (UI_EmoteTextPopup_o *)0x43bccea;
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              return;
            }
            pUStack_40 = (UI_EmoteTextPopup_o *)0x43bccf6;
            pUVar17 = (UI_EmoteTextPopup_o *)text;
            pUVar10 = (UI_EmoteTextPopup_o *)UI_EmoteHandler__SanitizeText(text,method_04);
            if (pUVar9 != (UI_EmoteTextPopup_o *)0x0) {
              pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcd07;
              pUVar11 = UI_EmoteHandler__GetAvailablePopup
                                  ((UI_EmoteHandler_o *)pUVar17,
                                   (System_Collections_Generic_List_EmoteTextPopup__o *)
                                   (pUVar9->fields).SinglePanel,method_00);
              pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcd12;
              UVar22 = UI_EmoteHandler__GetOffset((UI_EmoteHandler_o *)pUVar17,pCVar8,method_01);
              text = (System_String_o *)0x0;
              pUVar12 = pUVar10;
              if (pUVar11 != (UI_EmoteTextPopup_o *)0x0) {
                vtableDispatch = (pUVar11->klass->vtable)._59_Load.methodPtr;
                (*vtableDispatch)
                          (0x40400000,UVar22.fields._0_8_,CONCAT44(uVar20,UVar22.fields.z),pUVar11,pUVar10,
                           pCVar8,(pUVar11->klass->vtable)._59_Load.method,vtableDispatch);
                return;
              }
            }
          }
        }
      }
    }
  }
  pUStack_40 = (UI_EmoteTextPopup_o *)0x43bcd6b;
  il2cpp_runtime_helper_022b2c90();
  pUStack_40 = pUVar14;
  if (g_data_057ae3c6 == '\0') {
    pUStack_48 = (UI_EmoteTextPopup_o *)0x43bcd89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    g_data_057ae3c6 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    pUStack_48 = (UI_EmoteTextPopup_o *)0x43bcda8;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_48 = (UI_EmoteTextPopup_o *)0x43bcdb2;
  __this = (UI_EmoteHandler_o *)
           Anticheat_ChatFilter__FilterBadWords((System_String_o *)pUVar17,(MethodInfo *)0x0);
  pUVar14 = (UI_EmoteTextPopup_o *)0x0;
  pUStack_48 = (UI_EmoteTextPopup_o *)0x43bcdbc;
  __this_00 = Anticheat_ChatFilter__FilterSizeTag((System_String_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (System_String_o *)0x0) {
    if ((__this_00->fields)._stringLength < 0x15) {
      return;
    }
    System_String__Substring_3af8da0(__this_00,0,0x14,(MethodInfo *)0x0);
    return;
  }
  pUStack_48 = (UI_EmoteTextPopup_o *)UI_EmoteHandler__ShowEmoteText;
  il2cpp_runtime_helper_022b2c90();
  pSStack_60 = (System_String_o *)0x43bcdf4;
  pUStack_58 = pUVar17;
  pUStack_50 = pUVar9;
  pUStack_48 = pUVar12;
  pUVar9 = UI_EmoteHandler__GetAvailablePopup
                     (__this,(__this->fields)._emoteTextPopups,(MethodInfo *)character_00);
  pSStack_60 = (System_String_o *)0x43bcdff;
  pCVar8 = character_00;
  UVar22 = UI_EmoteHandler__GetOffset(__this,character_00,method_02);
  viewId_00 = (uint)__this;
  if (pUVar9 != (UI_EmoteTextPopup_o *)0x0) {
    vtableDispatch = (pUVar9->klass->vtable)._59_Load.methodPtr;
    (*vtableDispatch)
              (0x40400000,UVar22.fields._0_8_,CONCAT44(uVar20,UVar22.fields.z),pUVar9,pUVar14,character_00,
               (pUVar9->klass->vtable)._59_Load.method,vtableDispatch);
    return;
  }
  pSStack_60 = (System_String_o *)0x43bce3f;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  plStack_80 = &TypeInfo_Object;
  ppUVar15 = (UI_EmoteTextPopup_o **)&uStack_90;
  pUVar17 = (UI_EmoteTextPopup_o *)(ulong)viewId_00;
  pUStack_88 = pUVar9;
  pCStack_78 = unaff_R13;
  pUStack_70 = pUVar14;
  pCStack_68 = character_00;
  pSStack_60 = text;
  if (g_data_057ae3ba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae3ba = '\x01';
  }
  plVar19 = &TypeInfo_UIManager;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar9 = *(UI_EmoteTextPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  plVar18 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar16 = (Characters_BaseCharacter_o *)0x0;
  pUVar14 = pUVar9;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0xc0), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x11) == '\0') {
      return;
    }
    if (*(int *)((long)&TypeInfo_InGameManager[1].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar9 = pUStack_48;
    pUVar14 = TypeInfo_InGameManager;
    if (pUStack_48 != (UI_EmoteTextPopup_o *)0x0) {
      pSVar3 = (TypeInfo_InGameManager->fields)._transform[1].monitor;
      pUVar14 = (UI_EmoteTextPopup_o *)0x0;
      if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar7 = System_Collections_Generic_HashSet_int___Contains
                          (pSVar3,*(int32_t *)&(pUStack_48->fields).m_CancellationTokenSource,MethodInfo_Boolean_Contains);
        if ((char)bVar7 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pCVar16 = (Characters_BaseCharacter_o *)0x0;
        pUVar14 = pUVar17;
        character = (Il2CppClass *)Utility_Util__FindCharacterByViewId(viewId_00,(MethodInfo *)0x0);
        if (((character != (Il2CppClass *)0x0) &&
            (pvVar5 = (character->_1).interopData, pvVar5 != (void *)0x0)) &&
           (lVar2 = *(long *)((long)pvVar5 + 0x20), lVar2 != 0)) {
          if (pUVar9 != *(UI_EmoteTextPopup_o **)(lVar2 + 0x80)) {
            return;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar4 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          pUVar14 = (UI_EmoteTextPopup_o *)0x0;
          if (pUVar4 != (UnityEngine_Component_o *)0x0) {
            pUVar12 = (UI_EmoteTextPopup_o *)UnityEngine_Component__GetComponent_object_(pUVar4,MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar7 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar16 = (Characters_BaseCharacter_o *)0x0;
            pUVar14 = pUVar12;
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              return;
            }
            pUVar17 = (UI_EmoteTextPopup_o *)0x0;
            if (pUVar12 != (UI_EmoteTextPopup_o *)0x0) {
              ppUVar15 = &pUStack_58;
              pUVar9 = pUStack_88;
              plVar18 = plStack_80;
              pUVar17 = pUStack_70;
              plVar19 = (long *)pCStack_68;
              goto UI_EmoteHandler__ShowEmoteEmoji;
            }
          }
        }
      }
    }
  }
  pUVar12 = pUVar14;
  pCVar8 = pCVar16;
  il2cpp_runtime_helper_022b2c90();
  character = extraout_RDX;
UI_EmoteHandler__ShowEmoteEmoji:
  *(long **)((long)ppUVar15 + -8) = plVar19;
  *(UI_EmoteTextPopup_o **)((long)ppUVar15 + -0x10) = pUVar17;
  *(UI_EmoteTextPopup_o **)((long)ppUVar15 + -0x18) = pUVar9;
  pIVar13 = character;
  __this_02 = (Il2CppClass **)pUVar12;
  if (g_data_057ae3bb == '\0') {
    __this_02 = &TypeInfo_EmoteEmojiPopup;
    *(undefined8 *)((long)ppUVar15 + -0x20) = 0x43bd0d3;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3bb = '\x01';
    pIVar13 = extraout_RDX_00;
  }
  popups = (System_Collections_Generic_List_EmoteTextPopup__o *)(pUVar12->fields).DoublePanelLeft;
  *(undefined8 *)((long)ppUVar15 + -0x20) = 0x43bd0e3;
  pUVar9 = UI_EmoteHandler__GetAvailablePopup((UI_EmoteHandler_o *)__this_02,popups,(MethodInfo *)pIVar13);
  *(undefined8 *)((long)ppUVar15 + -0x20) = 0x43bd0ee;
  pIVar13 = character;
  UVar22 = UI_EmoteHandler__GetOffset
                     ((UI_EmoteHandler_o *)__this_02,(Characters_BaseCharacter_o *)character,method_03);
  if (pUVar9 != (UI_EmoteTextPopup_o *)0x0) {
    bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
    if ((bVar1 <= (pUVar9->klass->_2).naturalAligment) &&
       ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
      pUVar6 = pUVar9->klass;
      bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
      if ((bVar1 <= (pUVar6->_2).naturalAligment) &&
         ((pUVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
        vtableDispatch = (pUVar6->vtable)._59_Load.methodPtr;
        (*vtableDispatch)
                  (0x40400000,UVar22.fields._0_8_,CONCAT44(uVar20,UVar22.fields.z),pUVar9,pCVar8,character,
                   (pUVar6->vtable)._59_Load.method,vtableDispatch);
        return;
      }
    }
    *(undefined8 *)((long)ppUVar15 + -0x20) = 0x43bd17c;
    pIVar13 = TypeInfo_EmoteEmojiPopup;
    il2cpp_runtime_helper_022b2fd0(pUVar9);
  }
  *(undefined8 *)((long)ppUVar15 + -0x20) = 0x43bd181;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppClass **)((long)ppUVar15 + -0x20) = character;
  *(Characters_BaseCharacter_o **)((long)ppUVar15 + -0x28) = pCVar8;
  *(long **)((long)ppUVar15 + -0x30) = plVar18;
  *(UI_EmoteTextPopup_o **)((long)ppUVar15 + -0x38) = pUVar9;
  if (g_data_057ae3c3 == '\0') {
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd1b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd1bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd1cb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd1d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd1e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Item);
    g_data_057ae3c3 = '\x01';
  }
  *(undefined8 *)((long)ppUVar15 + -0x70) = 0;
  *(undefined8 *)((long)ppUVar15 + -0x68) = 0;
  *(undefined8 *)((long)ppUVar15 + -0x60) = 0;
  if (pIVar13 != (Il2CppClass *)0x0) {
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd21a;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)((long)ppUVar15 + -0x50),
               (System_Collections_Generic_List_object__o *)pIVar13,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    *(undefined8 *)((long)ppUVar15 + -0x60) = *(undefined8 *)((long)ppUVar15 + -0x40);
    *(undefined8 *)((long)ppUVar15 + -0x70) = *(undefined8 *)((long)ppUVar15 + -0x50);
    *(undefined8 *)((long)ppUVar15 + -0x68) = *(undefined8 *)((long)ppUVar15 + -0x48);
    while( true ) {
      *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd24c;
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)
                         *(System_Collections_Generic_List_Enumerator_object__Fields *)
                          ((long)ppUVar15 + -0x70),(MethodInfo_321A1D0 *)((long)ppUVar15 + -0x70));
      if ((char)bVar7 == '\0') {
        *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd29d;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppUVar15 + -0x70),
                   (MethodInfo_321A1C0 *)((long)ppUVar15 + -0x70));
        goto label_043bd29d;
      }
      if (*(UnityEngine_Component_o **)((long)ppUVar15 + -0x60) == (UnityEngine_Component_o *)0x0) break;
      *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd264;
      __this_01 = UnityEngine_Component__get_gameObject
                            (*(UnityEngine_Component_o **)((long)ppUVar15 + -0x60),(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_043bd2c8;
      *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd273;
      bVar7 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd289;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppUVar15 + -0x70),
                   (MethodInfo_321A1C0 *)((long)ppUVar15 + -0x70));
        return;
      }
    }
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd2c8;
    il2cpp_runtime_helper_022b2c90();
label_043bd2c8:
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd2cd;
    il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd2d2;
  auVar21 = il2cpp_runtime_helper_022b2c90();
  if (auVar21._8_4_ == 1) {
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd30a;
    plVar19 = (long *)__cxa_begin_catch(auVar21._0_8_);
    lVar2 = *plVar19;
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd312;
    __cxa_end_catch();
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd324;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppUVar15 + -0x70),
               (MethodInfo_321A1C0 *)((long)ppUVar15 + -0x70));
    if (lVar2 == 0) {
label_043bd29d:
      *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd2b1;
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)pIVar13,0,MethodInfo_EmoteTextPopup_get_Item);
      return;
    }
    *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd335;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd34e;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppUVar15 + -0x70),
             (MethodInfo_321A1C0 *)((long)ppUVar15 + -0x70));
  *(undefined8 *)((long)ppUVar15 + -0x78) = 0x43bd35b;
  _Unwind_Resume(auVar21._0_8_);
}


// UI.EmoteHandler$$OnEmoteEmojiRPC
// il2cpp: void UI_EmoteHandler__OnEmoteEmojiRPC (int32_t viewId, System_String_o* emoji, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x43bce40

void UI_EmoteHandler__OnEmoteEmojiRPC
               (int32_t viewId,System_String_o *emoji,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  UI_EmoteHandler_o *x;
  long lVar2;
  System_Collections_Generic_HashSet_int__o *__this;
  void *pvVar3;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_List_EmoteTextPopup__o *popups;
  UI_EmoteTextPopup_c *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar5;
  Il2CppClass *character;
  UI_EmoteHandler_o *x_00;
  UI_EmoteTextPopup_o *pUVar6;
  UnityEngine_GameObject_o *__this_01;
  long *plVar7;
  Il2CppClass *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *pIVar8;
  MethodInfo *method_00;
  UI_EmoteHandler_o *unaff_RBX;
  System_String_o *pSVar9;
  UI_EmoteHandler_o *pUVar10;
  Il2CppClass **__this_02;
  long *unaff_R12;
  UI_EmoteHandler_o *unaff_R14;
  UI_EmoteHandler_o *pUVar11;
  long *unaff_R15;
  undefined8 in_XMM1_Qa;
  undefined4 uVar12;
  undefined1 auVar13 [12];
  UnityEngine_Vector3_o UVar14;
  undefined1 auStack_38 [8];
  
  uVar12 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  pUVar11 = (UI_EmoteHandler_o *)(ulong)(uint)viewId;
  if (g_data_057ae3ba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae3ba = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UI_EmoteHandler_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_String_o *)0x0;
  pUVar10 = x;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0xc0), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x11) == '\0') {
      return;
    }
    if (*(int *)((long)&TypeInfo_InGameManager[2].fields._emoteWheelPopup + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    x = (UI_EmoteHandler_o *)info.fields.Sender;
    pUVar10 = TypeInfo_InGameManager;
    if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
      __this = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager[2].monitor + 0x20);
      x = (UI_EmoteHandler_o *)info.fields.Sender;
      pUVar10 = (UI_EmoteHandler_o *)0x0;
      if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar5 = System_Collections_Generic_HashSet_int___Contains
                          (__this,((info.fields.Sender)->fields).actorNumber,MethodInfo_Boolean_Contains);
        if ((char)bVar5 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_String_o *)0x0;
        pUVar10 = pUVar11;
        character = (Il2CppClass *)Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        x = (UI_EmoteHandler_o *)info.fields.Sender;
        if (((character != (Il2CppClass *)0x0) &&
            (pvVar3 = (character->_1).interopData, x = (UI_EmoteHandler_o *)info.fields.Sender,
            pvVar3 != (void *)0x0)) &&
           (lVar2 = *(long *)((long)pvVar3 + 0x20), x = (UI_EmoteHandler_o *)info.fields.Sender, lVar2 != 0))
        {
          if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar2 + 0x80)) {
            return;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          x = (UI_EmoteHandler_o *)info.fields.Sender;
          pUVar10 = (UI_EmoteHandler_o *)0x0;
          if (__this_00 != (UnityEngine_Component_o *)0x0) {
            x_00 = (UI_EmoteHandler_o *)UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar5 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = (System_String_o *)0x0;
            pUVar10 = x_00;
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              return;
            }
            x = (UI_EmoteHandler_o *)info.fields.Sender;
            pUVar11 = (UI_EmoteHandler_o *)0x0;
            if (x_00 != (UI_EmoteHandler_o *)0x0) goto UI_EmoteHandler__ShowEmoteEmoji;
          }
        }
      }
    }
  }
  unaff_R14 = pUVar11;
  x_00 = pUVar10;
  emoji = pSVar9;
  unaff_RBX = x;
  il2cpp_runtime_helper_022b2c90();
  character = extraout_RDX;
  register0x00000020 = (BADSPACEBASE *)auStack_38;
  unaff_R12 = &TypeInfo_Object;
  unaff_R15 = &TypeInfo_UIManager;
UI_EmoteHandler__ShowEmoteEmoji:
  *(long **)((long)register0x00000020 + -8) = unaff_R15;
  *(UI_EmoteHandler_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(UI_EmoteHandler_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  pIVar8 = character;
  __this_02 = (Il2CppClass **)x_00;
  if (g_data_057ae3bb == '\0') {
    __this_02 = &TypeInfo_EmoteEmojiPopup;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43bd0d3;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3bb = '\x01';
    pIVar8 = extraout_RDX_00;
  }
  popups = (x_00->fields)._emoteEmojiPopups;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43bd0e3;
  pUVar6 = UI_EmoteHandler__GetAvailablePopup((UI_EmoteHandler_o *)__this_02,popups,(MethodInfo *)pIVar8);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43bd0ee;
  pIVar8 = character;
  UVar14 = UI_EmoteHandler__GetOffset
                     ((UI_EmoteHandler_o *)__this_02,(Characters_BaseCharacter_o *)character,method_00);
  if (pUVar6 != (UI_EmoteTextPopup_o *)0x0) {
    bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
    if ((bVar1 <= (pUVar6->klass->_2).naturalAligment) &&
       ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
      pUVar4 = pUVar6->klass;
      bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
        vtableDispatch = (pUVar4->vtable)._59_Load.methodPtr;
        (*vtableDispatch)
                  (0x40400000,UVar14.fields._0_8_,CONCAT44(uVar12,UVar14.fields.z),pUVar6,emoji,character,
                   (pUVar4->vtable)._59_Load.method,vtableDispatch);
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43bd17c;
    pIVar8 = TypeInfo_EmoteEmojiPopup;
    il2cpp_runtime_helper_022b2fd0(pUVar6);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43bd181;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppClass **)((long)register0x00000020 + -0x20) = character;
  *(System_String_o **)((long)register0x00000020 + -0x28) = emoji;
  *(long **)((long)register0x00000020 + -0x30) = unaff_R12;
  *(UI_EmoteTextPopup_o **)((long)register0x00000020 + -0x38) = pUVar6;
  if (g_data_057ae3c3 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd1b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd1bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd1cb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd1d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd1e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Item);
    g_data_057ae3c3 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
  if (pIVar8 != (Il2CppClass *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd21a;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)((long)register0x00000020 + -0x50),
               (System_Collections_Generic_List_object__o *)pIVar8,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    *(undefined8 *)((long)register0x00000020 + -0x60) = *(undefined8 *)((long)register0x00000020 + -0x40);
    *(undefined8 *)((long)register0x00000020 + -0x70) = *(undefined8 *)((long)register0x00000020 + -0x50);
    *(undefined8 *)((long)register0x00000020 + -0x68) = *(undefined8 *)((long)register0x00000020 + -0x48);
    while( true ) {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd24c;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)
                         *(System_Collections_Generic_List_Enumerator_object__Fields *)
                          ((long)register0x00000020 + -0x70),
                         (MethodInfo_321A1D0 *)((long)register0x00000020 + -0x70));
      if ((char)bVar5 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd29d;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)
                    ((long)register0x00000020 + -0x70),
                   (MethodInfo_321A1C0 *)((long)register0x00000020 + -0x70));
        goto label_043bd29d;
      }
      if (*(UnityEngine_Component_o **)((long)register0x00000020 + -0x60) == (UnityEngine_Component_o *)0x0)
      break;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd264;
      __this_01 = UnityEngine_Component__get_gameObject
                            (*(UnityEngine_Component_o **)((long)register0x00000020 + -0x60),(MethodInfo *)0x0
                            );
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_043bd2c8;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd273;
      bVar5 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd289;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)
                    ((long)register0x00000020 + -0x70),
                   (MethodInfo_321A1C0 *)((long)register0x00000020 + -0x70));
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd2c8;
    il2cpp_runtime_helper_022b2c90();
label_043bd2c8:
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd2cd;
    il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd2d2;
  auVar13 = il2cpp_runtime_helper_022b2c90();
  if (auVar13._8_4_ == 1) {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd30a;
    plVar7 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar2 = *plVar7;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd312;
    __cxa_end_catch();
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd324;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)
                ((long)register0x00000020 + -0x70),(MethodInfo_321A1C0 *)((long)register0x00000020 + -0x70));
    if (lVar2 == 0) {
label_043bd29d:
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd2b1;
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)pIVar8,0,MethodInfo_EmoteTextPopup_get_Item);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd335;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd34e;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)register0x00000020 + -0x70),
             (MethodInfo_321A1C0 *)((long)register0x00000020 + -0x70));
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd35b;
  _Unwind_Resume(auVar13._0_8_);
}


// UI.EmoteHandler$$ShowEmoteText
// il2cpp: void UI_EmoteHandler__ShowEmoteText (UI_EmoteHandler_o* __this, System_String_o* text, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x43bcde0

void UI_EmoteHandler__ShowEmoteText
               (UI_EmoteHandler_o *__this,System_String_o *text,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long lVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  void *pvVar3;
  UnityEngine_Component_o *__this_01;
  System_Collections_Generic_List_EmoteTextPopup__o *popups;
  UI_EmoteTextPopup_c *pUVar4;
  bool_conflict bVar5;
  UI_EmoteTextPopup_o *pUVar6;
  Il2CppClass *character_00;
  UI_EmoteTextPopup_o *x;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  Il2CppClass *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *pIVar7;
  MethodInfo *method_01;
  undefined8 *puVar8;
  Characters_BaseCharacter_o *pCVar9;
  Characters_BaseCharacter_o *pCVar10;
  uint viewId;
  UI_EmoteTextPopup_o *pUVar11;
  Il2CppClass **__this_03;
  long *unaff_R12;
  long *plVar12;
  UI_EmoteTextPopup_o *pUVar13;
  UI_EmoteTextPopup_o *unaff_R15;
  undefined8 in_XMM1_Qa;
  undefined4 uVar14;
  undefined1 auVar15 [12];
  UnityEngine_Vector3_o UVar16;
  undefined8 uStack_50;
  UI_EmoteTextPopup_o *pUStack_48;
  
  uVar14 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  pUVar6 = UI_EmoteHandler__GetAvailablePopup
                     (__this,(__this->fields)._emoteTextPopups,(MethodInfo *)character);
  pCVar9 = character;
  UVar16 = UI_EmoteHandler__GetOffset(__this,character,method_00);
  viewId = (uint)__this;
  if (pUVar6 != (UI_EmoteTextPopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar6->klass->vtable)._59_Load.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (0x40400000,UVar16.fields._0_8_,CONCAT44(uVar14,UVar16.fields.z),pUVar6,text,character,
               (pUVar6->klass->vtable)._59_Load.method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  puVar8 = &uStack_50;
  pUVar13 = (UI_EmoteTextPopup_o *)(ulong)viewId;
  pUStack_48 = pUVar6;
  if (g_data_057ae3ba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae3ba = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar6 = *(UI_EmoteTextPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  plVar12 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar10 = (Characters_BaseCharacter_o *)0x0;
  pUVar11 = pUVar6;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0xc0), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x11) == '\0') {
      return;
    }
    if (*(int *)((long)&TypeInfo_InGameManager[1].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar6 = unaff_R15;
    pUVar11 = TypeInfo_InGameManager;
    if (unaff_R15 != (UI_EmoteTextPopup_o *)0x0) {
      __this_00 = (TypeInfo_InGameManager->fields)._transform[1].monitor;
      pUVar11 = (UI_EmoteTextPopup_o *)0x0;
      if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar5 = System_Collections_Generic_HashSet_int___Contains
                          (__this_00,*(int32_t *)&(unaff_R15->fields).m_CancellationTokenSource,MethodInfo_Boolean_Contains);
        if ((char)bVar5 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pCVar10 = (Characters_BaseCharacter_o *)0x0;
        pUVar11 = pUVar13;
        character_00 = (Il2CppClass *)Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        if (((character_00 != (Il2CppClass *)0x0) &&
            (pvVar3 = (character_00->_1).interopData, pvVar3 != (void *)0x0)) &&
           (lVar2 = *(long *)((long)pvVar3 + 0x20), lVar2 != 0)) {
          if (unaff_R15 != *(UI_EmoteTextPopup_o **)(lVar2 + 0x80)) {
            return;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_01 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          pUVar11 = (UI_EmoteTextPopup_o *)0x0;
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            x = (UI_EmoteTextPopup_o *)UnityEngine_Component__GetComponent_object_(__this_01,MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)character_00,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar10 = (Characters_BaseCharacter_o *)0x0;
            pUVar11 = x;
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              return;
            }
            pUVar13 = (UI_EmoteTextPopup_o *)0x0;
            if (x != (UI_EmoteTextPopup_o *)0x0) {
              puVar8 = (undefined8 *)&stack0xffffffffffffffe8;
              pUVar6 = pUStack_48;
              plVar12 = unaff_R12;
              goto UI_EmoteHandler__ShowEmoteEmoji;
            }
          }
        }
      }
    }
  }
  text = (System_String_o *)pUVar13;
  x = pUVar11;
  pCVar9 = pCVar10;
  il2cpp_runtime_helper_022b2c90();
  character_00 = extraout_RDX;
  character = (Characters_BaseCharacter_o *)&TypeInfo_UIManager;
UI_EmoteHandler__ShowEmoteEmoji:
  *(Characters_BaseCharacter_o **)((long)puVar8 + -8) = character;
  *(System_String_o **)((long)puVar8 + -0x10) = text;
  *(UI_EmoteTextPopup_o **)((long)puVar8 + -0x18) = pUVar6;
  pIVar7 = character_00;
  __this_03 = (Il2CppClass **)x;
  if (g_data_057ae3bb == '\0') {
    __this_03 = &TypeInfo_EmoteEmojiPopup;
    *(undefined8 *)((long)puVar8 + -0x20) = 0x43bd0d3;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3bb = '\x01';
    pIVar7 = extraout_RDX_00;
  }
  popups = (System_Collections_Generic_List_EmoteTextPopup__o *)(x->fields).DoublePanelLeft;
  *(undefined8 *)((long)puVar8 + -0x20) = 0x43bd0e3;
  pUVar6 = UI_EmoteHandler__GetAvailablePopup((UI_EmoteHandler_o *)__this_03,popups,(MethodInfo *)pIVar7);
  *(undefined8 *)((long)puVar8 + -0x20) = 0x43bd0ee;
  pIVar7 = character_00;
  UVar16 = UI_EmoteHandler__GetOffset
                     ((UI_EmoteHandler_o *)__this_03,(Characters_BaseCharacter_o *)character_00,method_01);
  if (pUVar6 != (UI_EmoteTextPopup_o *)0x0) {
    bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
    if ((bVar1 <= (pUVar6->klass->_2).naturalAligment) &&
       ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
      pUVar4 = pUVar6->klass;
      bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
        UNRECOVERED_JUMPTABLE_00 = (pUVar4->vtable)._59_Load.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (0x40400000,UVar16.fields._0_8_,CONCAT44(uVar14,UVar16.fields.z),pUVar6,pCVar9,character_00,
                   (pUVar4->vtable)._59_Load.method,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
    *(undefined8 *)((long)puVar8 + -0x20) = 0x43bd17c;
    pIVar7 = TypeInfo_EmoteEmojiPopup;
    il2cpp_runtime_helper_022b2fd0(pUVar6);
  }
  *(undefined8 *)((long)puVar8 + -0x20) = 0x43bd181;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppClass **)((long)puVar8 + -0x20) = character_00;
  *(Characters_BaseCharacter_o **)((long)puVar8 + -0x28) = pCVar9;
  *(long **)((long)puVar8 + -0x30) = plVar12;
  *(UI_EmoteTextPopup_o **)((long)puVar8 + -0x38) = pUVar6;
  if (g_data_057ae3c3 == '\0') {
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd1b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd1bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd1cb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd1d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd1e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Item);
    g_data_057ae3c3 = '\x01';
  }
  *(undefined8 *)((long)puVar8 + -0x70) = 0;
  *(undefined8 *)((long)puVar8 + -0x68) = 0;
  *(undefined8 *)((long)puVar8 + -0x60) = 0;
  if (pIVar7 != (Il2CppClass *)0x0) {
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd21a;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)((long)puVar8 + -0x50),
               (System_Collections_Generic_List_object__o *)pIVar7,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    *(undefined8 *)((long)puVar8 + -0x60) = *(undefined8 *)((long)puVar8 + -0x40);
    *(undefined8 *)((long)puVar8 + -0x70) = *(undefined8 *)((long)puVar8 + -0x50);
    *(undefined8 *)((long)puVar8 + -0x68) = *(undefined8 *)((long)puVar8 + -0x48);
    while( true ) {
      *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd24c;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)
                         *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar8 + -0x70),
                         (MethodInfo_321A1D0 *)((long)puVar8 + -0x70));
      if ((char)bVar5 == '\0') {
        *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd29d;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar8 + -0x70),
                   (MethodInfo_321A1C0 *)((long)puVar8 + -0x70));
        goto label_043bd29d;
      }
      if (*(UnityEngine_Component_o **)((long)puVar8 + -0x60) == (UnityEngine_Component_o *)0x0) break;
      *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd264;
      __this_02 = UnityEngine_Component__get_gameObject
                            (*(UnityEngine_Component_o **)((long)puVar8 + -0x60),(MethodInfo *)0x0);
      if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_043bd2c8;
      *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd273;
      bVar5 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd289;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar8 + -0x70),
                   (MethodInfo_321A1C0 *)((long)puVar8 + -0x70));
        return;
      }
    }
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd2c8;
    il2cpp_runtime_helper_022b2c90();
label_043bd2c8:
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd2cd;
    il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd2d2;
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd30a;
    plVar12 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar2 = *plVar12;
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd312;
    __cxa_end_catch();
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd324;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar8 + -0x70),
               (MethodInfo_321A1C0 *)((long)puVar8 + -0x70));
    if (lVar2 == 0) {
label_043bd29d:
      *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd2b1;
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)pIVar7,0,MethodInfo_EmoteTextPopup_get_Item);
      return;
    }
    *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd335;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd34e;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)puVar8 + -0x70),
             (MethodInfo_321A1C0 *)((long)puVar8 + -0x70));
  *(undefined8 *)((long)puVar8 + -0x78) = 0x43bd35b;
  _Unwind_Resume(auVar15._0_8_);
}


// UI.EmoteHandler$$ShowEmoteEmoji
// il2cpp: void UI_EmoteHandler__ShowEmoteEmoji (UI_EmoteHandler_o* __this, System_String_o* emoji, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x43bd0b0

void UI_EmoteHandler__ShowEmoteEmoji
               (UI_EmoteHandler_o *__this,System_String_o *emoji,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer vtableDispatch;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  Il2CppRGCTXData *pIVar4;
  UnityEngine_GameObject_o *__this_05;
  long *plVar5;
  Characters_BaseCharacter_o *extraout_RDX;
  Characters_BaseCharacter_o *method_00;
  MethodInfo *method_01;
  Il2CppClass *pIVar6;
  Il2CppClass **__this_06;
  undefined8 in_XMM1_Qa;
  undefined4 uVar7;
  undefined1 auVar8 [12];
  UnityEngine_Vector3_o UVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  UnityEngine_Component_o *__this_07;
  undefined1 auStack_50 [16];
  UnityEngine_Component_o *pUStack_40;
  Il2CppRGCTXData *pIStack_38;
  
  uVar7 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  method_00 = character;
  __this_06 = (Il2CppClass **)__this;
  if (g_data_057ae3bb == '\0') {
    __this_06 = &TypeInfo_EmoteEmojiPopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3bb = '\x01';
    method_00 = extraout_RDX;
  }
  pIVar4 = (Il2CppRGCTXData *)
           UI_EmoteHandler__GetAvailablePopup
                     ((UI_EmoteHandler_o *)__this_06,(__this->fields)._emoteEmojiPopups,
                      (MethodInfo *)method_00);
  pIVar6 = (Il2CppClass *)character;
  UVar9 = UI_EmoteHandler__GetOffset((UI_EmoteHandler_o *)__this_06,character,method_01);
  if (pIVar4 != (Il2CppRGCTXData *)0x0) {
    bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
    if ((bVar1 <= (pIVar4->klass->_2).naturalAligment) &&
       ((pIVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
      pIVar6 = pIVar4->klass;
      bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
      if ((bVar1 <= (pIVar6->_2).naturalAligment) &&
         ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
        vtableDispatch = pIVar6->vtable[0x3b].methodPtr;
        (*vtableDispatch)
                  (0x40400000,UVar9.fields._0_8_,CONCAT44(uVar7,UVar9.fields.z),pIVar4,emoji,character,
                   pIVar6->vtable[0x3b].method,vtableDispatch);
        return;
      }
    }
    pIVar6 = TypeInfo_EmoteEmojiPopup;
    il2cpp_runtime_helper_022b2fd0(pIVar4);
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_38 = pIVar4;
  if (g_data_057ae3c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Item);
    g_data_057ae3c3 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  __this_07 = (UnityEngine_Component_o *)0x0;
  if (pIVar6 != (Il2CppClass *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,
               (System_Collections_Generic_List_object__o *)pIVar6,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_50._0_8_;
    pIVar11 = (Il2CppType *)auStack_50._8_8_;
    __this_07 = pUStack_40;
    while( true ) {
      __this_00.fields._8_8_ = pIVar11;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
      __this_00.fields._current = (Il2CppObject *)__this_07;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff90);
      if ((char)bVar3 == '\0') {
        __this_02.fields._8_8_ = pIVar11;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
        __this_02.fields._current = (Il2CppObject *)__this_07;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
        goto label_043bd29d;
      }
      if (__this_07 == (UnityEngine_Component_o *)0x0) break;
      __this_05 = UnityEngine_Component__get_gameObject(__this_07,(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_GameObject_o *)0x0) goto label_043bd2c8;
      bVar3 = UnityEngine_GameObject__get_activeSelf(__this_05,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        __this_01.fields._8_8_ = pIVar11;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
        __this_01.fields._current = (Il2CppObject *)__this_07;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_043bd2c8:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_03.fields._current = (Il2CppObject *)__this_07;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
    if (lVar2 == 0) {
label_043bd29d:
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)pIVar6,0,MethodInfo_EmoteTextPopup_get_Item);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar11;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
  __this_04.fields._current = (Il2CppObject *)__this_07;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
  _Unwind_Resume(auVar8._0_8_);
}


// UI.EmoteHandler$$ShowVoiceEmoji
// il2cpp: void UI_EmoteHandler__ShowVoiceEmoji (UI_EmoteHandler_o* __this, System_String_o* emoji, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x43bd5c0

void UI_EmoteHandler__ShowVoiceEmoji
               (UI_EmoteHandler_o *__this,System_String_o *emoji,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  byte bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  UI_EmoteTextPopup_o *pUVar6;
  long *plVar7;
  Characters_BaseCharacter_o *extraout_RDX;
  Characters_BaseCharacter_o *method_00;
  Il2CppClass **__this_05;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *pIVar12;
  
  method_00 = character;
  __this_05 = (Il2CppClass **)__this;
  if (g_data_057ae3bc == '\0') {
    __this_05 = &TypeInfo_EmoteEmojiPopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3bc = '\x01';
    method_00 = extraout_RDX;
  }
  pUVar6 = UI_EmoteHandler__GetAvailablePopup
                     ((UI_EmoteHandler_o *)__this_05,(__this->fields)._emoteEmojiPopups,
                      (MethodInfo *)method_00);
  if (pUVar6 != (UI_EmoteTextPopup_o *)0x0) {
    bVar3 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
    if ((bVar3 <= (pUVar6->klass->_2).naturalAligment) &&
       ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_EmoteEmojiPopup)) {
      *(undefined1 *)&(pUVar6->fields).infinitePopup = 1;
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar8 = (float)uVar2;
      fVar9 = (float)((ulong)uVar2 >> 0x20);
      vtableDispatch = (pUVar6->klass->vtable)._59_Load.methodPtr;
      (*vtableDispatch)
                (0x3dcccccd,CONCAT44(fVar9 + fVar9,fVar8 + fVar8),fVar1 + fVar1,pUVar6,emoji,character,
                 (pUVar6->klass->vtable)._59_Load.method,vtableDispatch);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
    __this_05 = (Il2CppClass **)pUVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3bd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    g_data_057ae3bd = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  vtableDispatch = (Il2CppMethodPointer)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              (((UI_EmoteTextPopup_o *)__this_05)->fields).DoublePanelLeft;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc0,__this_00,
               MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = vtableDispatch;
      __this_01.fields._list = pSVar11;
      __this_01.fields._current = pIVar12;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc0);
      if ((char)bVar5 == '\0') {
        __this_02.fields._8_8_ = vtableDispatch;
        __this_02.fields._list = pSVar11;
        __this_02.fields._current = pIVar12;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
        return;
      }
      if (pIVar12 == (Il2CppObject *)0x0) break;
      *(undefined1 *)((long)&pIVar12[0xd].monitor + 4) = 0;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = vtableDispatch;
    __this_03.fields._list = pSVar11;
    __this_03.fields._current = pIVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._8_8_ = vtableDispatch;
  __this_04.fields._list = pSVar11;
  __this_04.fields._current = pIVar12;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
  _Unwind_Resume(auVar10._0_8_);
}


// UI.EmoteHandler$$StopInfinitePopup
// il2cpp: void UI_EmoteHandler__StopInfinitePopup (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x43bd6b0

void UI_EmoteHandler__StopInfinitePopup(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EmoteTextPopup__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057ae3bd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    g_data_057ae3bd = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._emoteEmojiPopups;
  if (__this_00 != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = pSVar5;
      __this_01.fields._current = pIVar7;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = pSVar5;
        __this_02.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      *(undefined1 *)((long)&pIVar7[0xd].monitor + 4) = 0;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
  _Unwind_Resume(auVar4._0_8_);
}


// UI.EmoteHandler$$GetOffset
// il2cpp: UnityEngine_Vector3_o UI_EmoteHandler__GetOffset (UI_EmoteHandler_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x43bd370

UnityEngine_Vector3_o
UI_EmoteHandler__GetOffset(UI_EmoteHandler_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t iVar4;
  bool_conflict bVar5;
  Characters_BaseCharacter_c *pCVar6;
  Characters_BaseCharacter_o *pCVar7;
  long *plVar8;
  byte bVar9;
  byte bVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Il2CppClass *pIVar11;
  Il2CppClass **__this_05;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db_00;
  float fVar14;
  undefined8 in_XMM1_Qa;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [12];
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  System_Collections_Generic_List_T__o *pSVar23;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *pIVar24;
  
  if (g_data_057ae3be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    g_data_057ae3be = '\x01';
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar6 = character->klass;
    bVar9 = (pCVar6->_2).naturalAligment;
    bVar10 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar10 <= bVar9) && ((pCVar6->_2).typeHierarchy[(ulong)bVar10 - 1] == TypeInfo_Human)) {
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      UVar19.fields.x = (float)uVar2 * 4.0;
      UVar19.fields.y = (float)((ulong)uVar2 >> 0x20) * 4.0;
      UVar19.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 4.0;
      return (UnityEngine_Vector3_o)UVar19.fields;
    }
    bVar10 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if ((bVar9 < bVar10) || ((pCVar6->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_BasicTitan)) {
      bVar10 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if ((bVar9 < bVar10) || ((pCVar6->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_BaseShifter))
      goto label_043bd436;
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
        pCVar6 = character->klass;
        bVar9 = (pCVar6->_2).naturalAligment;
        bVar10 = (TypeInfo_BaseShifter->_2).naturalAligment;
      }
      if ((bVar9 < bVar10) || ((pCVar6->_2).typeHierarchy[(ulong)bVar10 - 1] != TypeInfo_BaseShifter)) {
        pIVar11 = TypeInfo_BaseShifter;
        il2cpp_runtime_helper_022b2fd0();
        method_00 = extraout_RDX;
        __this_05 = (Il2CppClass **)character;
        if (g_data_057ae3bc == '\0') {
          __this_05 = &TypeInfo_EmoteEmojiPopup;
          il2cpp_runtime_helper_023445d0();
          g_data_057ae3bc = '\x01';
          method_00 = extraout_RDX_00;
        }
        pCVar7 = (Characters_BaseCharacter_o *)
                 UI_EmoteHandler__GetAvailablePopup
                           ((UI_EmoteHandler_o *)__this_05,
                            *(System_Collections_Generic_List_EmoteTextPopup__o **)
                             &(character->fields).FootstepsEnabled,method_00);
        if (pCVar7 != (Characters_BaseCharacter_o *)0x0) {
          bVar9 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
          if ((bVar9 <= (pCVar7->klass->_2).naturalAligment) &&
             ((pCVar7->klass->_2).typeHierarchy[(ulong)bVar9 - 1] == TypeInfo_EmoteEmojiPopup)) {
            *(undefined1 *)&(pCVar7->fields).TargetAngle = 1;
            if (g_data_057a6844 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6844 = '\x01';
            }
            uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            fVar14 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
            fVar16 = (float)uVar2;
            fVar17 = (float)((ulong)uVar2 >> 0x20);
            uVar15 = CONCAT44(fVar17 + fVar17,fVar16 + fVar16);
            vtableDispatch = (pCVar7->klass->vtable)._59_get_EmoteActions.methodPtr;
            uVar2 = (*vtableDispatch)
                              (0x3dcccccd,uVar15,(ulong)(uint)(fVar14 + fVar14),pCVar7,pIVar11,extraout_RDX,
                               (pCVar7->klass->vtable)._59_get_EmoteActions.method,vtableDispatch);
            UVar21.fields.z = (float)uVar15;
            UVar21.fields.x = (float)(int)uVar2;
            UVar21.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
            return (UnityEngine_Vector3_o)UVar21.fields;
          }
          il2cpp_runtime_helper_022b2fd0();
          __this_05 = (Il2CppClass **)pCVar7;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae3bd == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
          g_data_057ae3bd = '\x01';
        }
        fVar14 = (float)in_XMM1_Qa;
        pSVar23 = (System_Collections_Generic_List_T__o *)0x0;
        vtableDispatch = (Il2CppMethodPointer)0x0;
        pIVar24 = (Il2CppObject *)0x0;
        __this_00 = *(System_Collections_Generic_List_object__o **)
                     &(((Characters_BaseCharacter_o *)__this_05)->fields).FootstepsEnabled;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa8,__this_00,
                     MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
          while( true ) {
            __this_01.fields._8_8_ = vtableDispatch;
            __this_01.fields._list = pSVar23;
            __this_01.fields._current = pIVar24;
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
            fVar14 = (float)in_XMM1_Qa;
            if ((char)bVar5 == '\0') break;
            if (pIVar24 == (Il2CppObject *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_043bd771;
            }
            *(undefined1 *)((long)&pIVar24[0xd].monitor + 4) = 0;
          }
          __this_02.fields._8_8_ = vtableDispatch;
          __this_02.fields._list = pSVar23;
          __this_02.fields._current = pIVar24;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
          uVar12 = extraout_XMM0_Da;
          uVar13 = extraout_XMM0_Db;
label_043bd764:
          UVar22.fields.y = (float)uVar13;
          UVar22.fields.x = (float)uVar12;
          UVar22.fields.z = fVar14;
          return (UnityEngine_Vector3_o)UVar22.fields;
        }
label_043bd771:
        auVar18 = il2cpp_runtime_helper_022b2c90();
        if (auVar18._8_4_ == 1) {
          plVar8 = (long *)__cxa_begin_catch(auVar18._0_8_);
          lVar3 = *plVar8;
          __cxa_end_catch();
          __this_03.fields._8_8_ = vtableDispatch;
          __this_03.fields._list = pSVar23;
          __this_03.fields._current = pIVar24;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
          uVar12 = extraout_XMM0_Da_00;
          uVar13 = extraout_XMM0_Db_00;
          if (lVar3 == 0) goto label_043bd764;
          il2cpp_runtime_helper_022fefe0(lVar3);
        }
        __this_04.fields._8_8_ = vtableDispatch;
        __this_04.fields._list = pSVar23;
        __this_04.fields._current = pIVar24;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
        _Unwind_Resume(auVar18._0_8_);
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar16 = (float)uVar2 * 70.0;
      fVar17 = (float)((ulong)uVar2 >> 0x20) * 70.0;
      fVar14 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 70.0;
    }
    else {
      iVar4 = character[2].fields.CustomDamage;
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar14 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      fVar16 = (float)uVar2;
      fVar17 = (float)((ulong)uVar2 >> 0x20);
      if ((char)iVar4 == '\0') {
        fVar16 = fVar16 * 25.0;
        fVar17 = fVar17 * 25.0;
        fVar14 = fVar14 * 25.0;
      }
      else {
        fVar16 = fVar16 * 15.0;
        fVar17 = fVar17 * 15.0;
        fVar14 = fVar14 * 15.0;
      }
    }
    fVar1 = *(float *)((long)&character[1].fields.m_CachedPtr + 4);
    UVar20.fields.z = fVar14 * fVar1;
    UVar20.fields.x = fVar1 * fVar16;
    UVar20.fields.y = fVar1 * fVar17;
    return (UnityEngine_Vector3_o)UVar20.fields;
  }
label_043bd436:
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
}


// UI.EmoteHandler$$ToggleEmoteWheel
// il2cpp: void UI_EmoteHandler__ToggleEmoteWheel (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x43bd7f0

void UI_EmoteHandler__ToggleEmoteWheel(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_EmoteHandler__SetEmoteWheel(__this,(uint)((char)(__this->fields).IsActive == '\0'),in_RDX);
  return;
}


// UI.EmoteHandler$$SetEmoteWheel
// il2cpp: void UI_EmoteHandler__SetEmoteWheel (UI_EmoteHandler_o* __this, bool enable, const MethodInfo* method);
// 0x43bd800

void UI_EmoteHandler__SetEmoteWheel(UI_EmoteHandler_o *__this,bool_conflict enable,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  UI_BasePopup_o *pUVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined1 uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *callback;
  long *plVar7;
  MethodInfo *extraout_RDX;
  Il2CppClass **method_00;
  UI_WheelPopup_o *unaff_R14;
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  System_Collections_Generic_List_T__o *pSVar10;
  Il2CppMethodPointer pIVar11;
  Il2CppObject *pIVar12;
  
  method_00 = (Il2CppClass **)__this;
  if (g_data_057ae3bf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetEmoteWheel_b__25_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    method_00 = &TypeInfo_WheelPopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3bf = '\x01';
    method = extraout_RDX;
  }
  if ((char)enable == '\0') {
    pUVar4 = (__this->fields)._emoteWheelPopup;
    if (pUVar4 != (UI_BasePopup_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method,method);
      uVar5 = 0;
label_043bd94e:
      *(undefined1 *)&(__this->fields).IsActive = uVar5;
      return;
    }
  }
  else {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)method_00);
    if ((char)bVar6 != '\0') {
      return;
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0)) &&
       (plVar3 = *(long **)(lVar2 + 0x40), plVar3 != (long *)0x0)) {
      unaff_R14 = (UI_WheelPopup_o *)(__this->fields)._emoteWheelPopup;
      auVar9 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      options = UI_EmoteHandler__GetEmoteWheelOptions
                          (__this,(__this->fields)._currentEmoteWheelState,auVar9._8_8_);
      callback = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (unaff_R14 != (UI_WheelPopup_o *)0x0) {
        bVar1 = (TypeInfo_WheelPopup->_2).naturalAligment;
        if ((bVar1 <= (unaff_R14->klass->_2).naturalAligment) &&
           ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_WheelPopup)) {
          UI_WheelPopup__Show(unaff_R14,auVar9._0_8_,options,callback,(MethodInfo *)0x0);
          uVar5 = 1;
          goto label_043bd94e;
        }
        goto label_043bd965;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043bd965:
  il2cpp_runtime_helper_022b2fd0(unaff_R14);
  if (g_data_057ae3f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae3f7 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (plVar3 != (long *)0x0) {
    if (*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) goto label_043bdaf9;
    if (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) != TypeInfo_InGameMenu)
    goto label_043bdaf9;
    if ((System_Collections_Generic_List_object__o *)plVar3[4] !=
        (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff90,
                 (System_Collections_Generic_List_object__o *)plVar3[4],MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
      while( true ) {
        __this_00.fields._8_8_ = pIVar11;
        __this_00.fields._list = pSVar10;
        __this_00.fields._current = pIVar12;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff90);
        if ((char)bVar6 == '\0') {
          __this_02.fields._8_8_ = pIVar11;
          __this_02.fields._list = pSVar10;
          __this_02.fields._current = pIVar12;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
          goto label_043bdaba;
        }
        if (pIVar12 == (Il2CppObject *)0x0) break;
        if (*(char *)&pIVar12[9].klass != '\0') {
          __this_01.fields._8_8_ = pIVar11;
          __this_01.fields._list = pSVar10;
          __this_01.fields._current = pIVar12;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_043bdaf9:
    auVar8 = il2cpp_runtime_helper_022b2fd0(plVar3);
    if (auVar8._8_4_ != 1) break;
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar2 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._list = pSVar10;
    __this_03.fields._current = pIVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      break;
    }
label_043bdaba:
    if ((plVar3[0x13] != 0) && ((*(char *)(plVar3[0x13] + 0x40) != '\0' || (plVar3[0x14] != 0)))) {
      return;
    }
  }
  __this_04.fields._8_8_ = pIVar11;
  __this_04.fields._list = pSVar10;
  __this_04.fields._current = pIVar12;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
  _Unwind_Resume(auVar8._0_8_);
}


// UI.EmoteHandler$$NextEmoteWheel
// il2cpp: void UI_EmoteHandler__NextEmoteWheel (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x43be0d0

void UI_EmoteHandler__NextEmoteWheel(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  UI_BasePopup_o *__this_00;
  Settings_StringSetting_o *pSVar4;
  Settings_ListSetting_T__o *pSVar5;
  void *pvVar6;
  GameManagers_InGameManager_o *pGVar7;
  UnityEngine_Camera_o *__this_01;
  undefined1 auVar8 [16];
  double dVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  bool_conflict bVar10;
  uint uVar11;
  UnityEngine_GameObject_o *pUVar12;
  Settings_BaseSetting_o *pSVar13;
  System_Object_array *pSVar14;
  UI_WheelPopup_o *pUVar15;
  long lVar16;
  undefined8 *puVar17;
  System_Collections_Generic_List_object__o *__this_09;
  Il2CppObject *pIVar18;
  Il2CppRGCTXData *pIVar19;
  UnityEngine_Transform_o *pUVar20;
  long *plVar21;
  System_Object_array *in_RCX;
  Il2CppMethodPointer vtableDispatch;
  ulong extraout_RDX;
  Il2CppRGCTXData *__this_10;
  System_Object_array *unaff_RBP;
  Il2CppRGCTXData **x;
  MethodInfo *pMVar22;
  long *plVar23;
  Il2CppRGCTXData *method_00;
  _union_249689 unaff_R12;
  UnityEngine_Events_UnityAction_o *unaff_R13;
  UI_WheelPopup_o *unaff_R14;
  Photon_Pun_PhotonView_o *unaff_R15;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  float fVar29;
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar30 [8];
  float fVar35;
  undefined8 extraout_XMM1_Qa_00;
  undefined1 auVar31 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar34 [16];
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [12];
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  undefined1 auVar44 [16];
  UnityEngine_Vector3_o direction;
  System_Collections_Generic_List_Enumerator_T__c *pSVar45;
  Il2CppType *pIVar46;
  UI_EmoteTextPopup_o *pUVar47;
  undefined1 auStack_160 [16];
  UI_EmoteTextPopup_o *pUStack_150;
  Il2CppRGCTXData *pIStack_148;
  _union_249689 _Stack_140;
  UnityEngine_Events_UnityAction_o *pUStack_138;
  Il2CppRGCTXData *pIStack_130;
  Photon_Pun_PhotonView_o *pPStack_128;
  Il2CppRGCTXData *pIStack_120;
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [8];
  float fStack_100;
  float fStack_fc;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [20];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  UI_WheelPopup_o *pUStack_80;
  UI_WheelPopup_o *pUStack_78;
  Photon_Pun_PhotonView_o *pPStack_70;
  System_Object_array *pSStack_68;
  undefined4 local_58;
  undefined4 local_54;
  UI_EmoteHandler_o *pUStack_50;
  _union_249689 _Stack_48;
  UI_WheelPopup_o *pUStack_40;
  Photon_Pun_PhotonView_o *pPStack_38;
  
  if (g_data_057ae3c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_NextEmoteWheel_b__26_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
    g_data_057ae3c0 = '\x01';
  }
  __this_00 = (__this->fields)._emoteWheelPopup;
  if ((__this_00 == (UI_BasePopup_o *)0x0) ||
     (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar12 == (UnityEngine_GameObject_o *)0x0)) {
label_043be242:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
    if (((char)bVar10 == '\0') || ((char)(__this->fields).IsActive == '\0')) {
      return;
    }
    uVar11 = (__this->fields)._currentEmoteWheelState + 1;
    in_RCX = (System_Object_array *)0x0;
    if ((int)uVar11 < 3) {
      in_RCX = (System_Object_array *)(ulong)uVar11;
    }
    (__this->fields)._currentEmoteWheelState = (int32_t)in_RCX;
    lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x48), lVar16 == 0)) ||
       (plVar21 = *(long **)(lVar16 + 0x40), plVar21 == (long *)0x0)) goto label_043be242;
    unaff_R14 = (UI_WheelPopup_o *)(__this->fields)._emoteWheelPopup;
    auVar44 = (**(code **)(*plVar21 + 0x168))(plVar21,*(undefined8 *)(*plVar21 + 0x170));
    unaff_R15 = auVar44._0_8_;
    unaff_R12.genericMethod =
         UI_EmoteHandler__GetEmoteWheelOptions(__this,(__this->fields)._currentEmoteWheelState,auVar44._8_8_);
    unaff_R13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    in_RCX = (System_Object_array *)0x0;
    UnityEngine_Events_UnityAction___ctor();
    if (unaff_R14 == (UI_WheelPopup_o *)0x0) goto label_043be242;
    bVar2 = (TypeInfo_WheelPopup->_2).naturalAligment;
    in_RCX = (System_Object_array *)(ulong)bVar2;
    if ((bVar2 <= (unaff_R14->klass->_2).naturalAligment) &&
       ((unaff_R14->klass->_2).typeHierarchy[(long)((VirtualInvokeData *)in_RCX[-1].m_Items + 0x7fff) + 7] ==
        TypeInfo_WheelPopup)) {
      UI_WheelPopup__Show(unaff_R14,(System_String_o *)unaff_R15,unaff_R12.genericMethod,unaff_R13,
                          (MethodInfo *)0x0);
      return;
    }
  }
  plVar21 = (long *)unaff_R14;
  il2cpp_runtime_helper_022b2fd0();
  pUStack_50 = __this;
  _Stack_48 = unaff_R12;
  pUStack_40 = unaff_R14;
  pPStack_38 = unaff_R15;
  if (g_data_057ae3c1 == '\0') {
    pSStack_68 = (System_Object_array *)0x43be278;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    pSStack_68 = (System_Object_array *)0x43be284;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    pSStack_68 = (System_Object_array *)0x43be290;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_68 = (System_Object_array *)0x43be29c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pSStack_68 = (System_Object_array *)0x43be2a8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pSStack_68 = (System_Object_array *)0x43be2b4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_68 = (System_Object_array *)0x43be2c0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    pSStack_68 = (System_Object_array *)0x43be2cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSStack_68 = (System_Object_array *)0x43be2d8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    pSStack_68 = (System_Object_array *)0x43be2e4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_68 = (System_Object_array *)0x43be2f0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_68 = (System_Object_array *)0x43be2fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
    pSStack_68 = (System_Object_array *)0x43be308;
    il2cpp_runtime_helper_023445d0(&"EmoteEmojiRPC");
    pSStack_68 = (System_Object_array *)0x43be314;
    il2cpp_runtime_helper_023445d0(&"EmoteTextRPC");
    g_data_057ae3c1 = '\x01';
  }
  if (*(int *)&(((UI_WheelPopup_o *)plVar21)->fields)._popups != 2) {
    if (*(float *)((long)&(((UI_WheelPopup_o *)plVar21)->fields)._popups + 4) <= 0.0) {
      *(undefined4 *)((long)&(((UI_WheelPopup_o *)plVar21)->fields)._popups + 4) = 0x40400000;
      goto label_043be339;
    }
    goto label_043be762;
  }
label_043be339:
  pSVar4 = (((UI_WheelPopup_o *)plVar21)->fields)._currentCategoryPanelName;
  if ((pSVar4 == (Settings_StringSetting_o *)0x0) ||
     (pUVar20 = (((UI_WheelPopup_o *)plVar21)->fields).DoublePanelRight,
     pUVar20 == (UnityEngine_Transform_o *)0x0)) goto label_043be7e8;
  in_RCX = (System_Object_array *)pUVar20->klass;
  bVar2 = (TypeInfo_WheelPopup->_2).naturalAligment;
  if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < bVar2) ||
     (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
     *(Il2CppClass **)((long)in_RCX->m_Items + ((ulong)bVar2 - 5) * 8) != TypeInfo_WheelPopup)) {
label_043be7ed:
    pSStack_68 = (System_Object_array *)0x43be7f2;
    pSVar13 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_022b2fd0();
    pSVar14 = unaff_RBP;
    pUVar15 = unaff_R14;
label_043be7f2:
    pSStack_68 = (System_Object_array *)0x43be7fa;
    il2cpp_runtime_helper_022b2fd0(pSVar13);
label_043be7fa:
    pSStack_68 = (System_Object_array *)0x43be7ff;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    unaff_R14 = *(UI_WheelPopup_o **)&pSVar4[2].fields.MaxLength;
    uVar11 = (uint)pUVar20[7].fields.m_CachedPtr;
    unaff_RBP = (System_Object_array *)(ulong)uVar11;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pSStack_68 = (System_Object_array *)0x43be3a7;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_68 = (System_Object_array *)0x43be3b3;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto label_043be762;
    iVar3 = *(int *)&(((UI_WheelPopup_o *)plVar21)->fields)._popups;
    if (iVar3 == 2) {
      if (unaff_R14 != (UI_WheelPopup_o *)0x0) {
        pSStack_68 = (System_Object_array *)0x43be70e;
        lVar16 = (*unaff_R14->klass[1]._1.image)(unaff_R14);
        if (lVar16 != 0) {
          if ((int)uVar11 < *(int *)(lVar16 + 0x18)) {
            pSStack_68 = (System_Object_array *)0x43be72f;
            __this_09 = (System_Collections_Generic_List_object__o *)
                        (*unaff_R14->klass[1]._1.image)(unaff_R14);
            if (__this_09 == (System_Collections_Generic_List_object__o *)0x0) goto label_043be7e8;
            pSStack_68 = (System_Object_array *)0x43be74c;
            pIVar18 = System_Collections_Generic_List_object___get_Item(__this_09,uVar11,MethodInfo_String_get_Item);
            in_RCX = (System_Object_array *)unaff_R14->klass;
            pSStack_68 = (System_Object_array *)0x43be762;
            (**(code **)((long)((Il2CppType *)in_RCX->m_Items + 0x57) + 8))
                      (unaff_R14,pIVar18,((Il2CppType *)in_RCX->m_Items)[0x58].data);
          }
label_043be762:
          pUVar20 = (((UI_WheelPopup_o *)plVar21)->fields).DoublePanelRight;
joined_r0x043be769:
          if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
            pSStack_68 = (System_Object_array *)0x43be77b;
            (**(code **)&pUVar20->klass[1]._2.thread_static_fields_offset)();
            *(undefined1 *)&(((UI_WheelPopup_o *)plVar21)->fields)._currentCategoryPanel = 0;
            plVar21 = &TypeInfo_UIManager;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              pSStack_68 = (System_Object_array *)0x43be797;
              il2cpp_runtime_helper_02337ed0();
            }
            plVar23 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (plVar23 != (long *)0x0) {
              in_RCX = (System_Object_array *)(ulong)*(byte *)(TypeInfo_InGameMenu + 0x130);
              if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar23 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar23 + 200) + -8 + (long)in_RCX * 8) == TypeInfo_InGameMenu)) {
                *(undefined1 *)(plVar23 + 0x2f) = 1;
                return;
              }
              goto label_043be7ed;
            }
          }
        }
      }
label_043be7e8:
      pSStack_68 = (System_Object_array *)0x43be7ed;
      il2cpp_runtime_helper_022b2c90();
      goto label_043be7ed;
    }
    pSVar14 = unaff_RBP;
    pUVar15 = unaff_R14;
    if (iVar3 != 1) {
      if (iVar3 != 0) goto label_043be762;
      lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
      if ((lVar16 != 0) &&
         (pSVar5 = *(Settings_ListSetting_T__o **)(lVar16 + 0x20), pSVar5 != (Settings_ListSetting_T__o *)0x0)
         ) {
        pSStack_68 = (System_Object_array *)0x43be417;
        pSVar13 = Settings_ListSetting_object___GetItemAt(pSVar5,uVar11,MethodInfo_BaseSetting_GetItemAt);
        if (pSVar13 != (Settings_BaseSetting_o *)0x0) {
          in_RCX = (System_Object_array *)pSVar13->klass;
          if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_StringSetting + 0x130)) ||
             (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
             *(long *)((long)in_RCX->m_Items + ((ulong)*(byte *)(TypeInfo_StringSetting + 0x130) - 5) * 8) !=
             TypeInfo_StringSetting)) goto label_043be7f2;
          unaff_R12 = (_union_249689)pSVar13[1].monitor;
          unaff_R15 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
          pSStack_68 = (System_Object_array *)0x43be47e;
          pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
          if ((unaff_R14 != (UI_WheelPopup_o *)0x0) &&
             ((pUVar20 = (unaff_R14->fields).TopBar, unaff_RBP = pSVar14,
              pUVar20 != (UnityEngine_Transform_o *)0x0 &&
              (pvVar6 = pUVar20[1].monitor, pvVar6 != (void *)0x0)))) {
            local_54 = *(undefined4 *)((long)pvVar6 + 0x94);
            pSStack_68 = (System_Object_array *)0x43be4c3;
            pUVar15 = (UI_WheelPopup_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
            if (pSVar14 != (System_Object_array *)0x0) {
              if (pUVar15 != (UI_WheelPopup_o *)0x0) {
                pSStack_68 = (System_Object_array *)0x43be4e4;
                lVar16 = il2cpp_runtime_helper_023051f0(pUVar15);
                if (lVar16 == 0) goto label_043be7ff;
              }
              if ((int)pSVar14->max_length == 0) goto label_043be7fa;
              pSVar14->m_Items[0] = (Il2CppObject *)pUVar15;
              pSStack_68 = (System_Object_array *)0x43be507;
              il2cpp_runtime_helper_022b4080(pSVar14->m_Items);
              if (unaff_R12.genericMethod != (System_Collections_Generic_List_string__o *)0x0) {
                pSStack_68 = (System_Object_array *)0x43be51c;
                lVar16 = il2cpp_runtime_helper_023051f0(unaff_R12.genericMethod);
                if (lVar16 == 0) goto label_043be7ff;
              }
              if ((uint)pSVar14->max_length < 2) goto label_043be7fa;
              ((_union_249689 *)(pSVar14->m_Items + 1))->genericMethod = (void *)unaff_R12;
              pSStack_68 = (System_Object_array *)0x43be542;
              il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 1);
              unaff_R14 = pUVar15;
              if (unaff_R15 == (Photon_Pun_PhotonView_o *)0x0) goto label_043be7e8;
              puVar17 = &"EmoteTextRPC";
label_043be6d1:
              pSStack_68 = (System_Object_array *)0x43be6e4;
              in_RCX = pSVar14;
              Photon_Pun_PhotonView__RPC(unaff_R15,(System_String_o *)*puVar17,0,pSVar14,(MethodInfo *)0x0);
              pUVar20 = (((UI_WheelPopup_o *)plVar21)->fields).DoublePanelRight;
              unaff_RBP = pSVar14;
              unaff_R14 = pUVar15;
              goto joined_r0x043be769;
            }
          }
        }
      }
      goto label_043be7e8;
    }
    lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
    if ((lVar16 == 0) ||
       (pSVar5 = *(Settings_ListSetting_T__o **)(lVar16 + 0x28), pSVar5 == (Settings_ListSetting_T__o *)0x0))
    goto label_043be7e8;
    pSStack_68 = (System_Object_array *)0x43be596;
    pSVar13 = Settings_ListSetting_object___GetItemAt(pSVar5,uVar11,MethodInfo_BaseSetting_GetItemAt);
    if (pSVar13 == (Settings_BaseSetting_o *)0x0) goto label_043be7e8;
    in_RCX = (System_Object_array *)pSVar13->klass;
    if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_StringSetting + 0x130)) ||
       (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
       *(long *)((long)in_RCX->m_Items + ((ulong)*(byte *)(TypeInfo_StringSetting + 0x130) - 5) * 8) != TypeInfo_StringSetting))
    goto label_043be7f2;
    unaff_R12 = (_union_249689)pSVar13[1].monitor;
    unaff_R15 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
    pSStack_68 = (System_Object_array *)0x43be5fd;
    pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((unaff_R14 == (UI_WheelPopup_o *)0x0) ||
       ((pUVar20 = (unaff_R14->fields).TopBar, unaff_RBP = pSVar14, pUVar20 == (UnityEngine_Transform_o *)0x0
        || (pvVar6 = pUVar20[1].monitor, pvVar6 == (void *)0x0)))) goto label_043be7e8;
    local_58 = *(undefined4 *)((long)pvVar6 + 0x94);
    pSStack_68 = (System_Object_array *)0x43be642;
    pUVar15 = (UI_WheelPopup_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if (pSVar14 == (System_Object_array *)0x0) goto label_043be7e8;
    if (pUVar15 == (UI_WheelPopup_o *)0x0) {
label_043be66c:
      if ((int)pSVar14->max_length != 0) {
        pSVar14->m_Items[0] = (Il2CppObject *)pUVar15;
        pSStack_68 = (System_Object_array *)0x43be686;
        il2cpp_runtime_helper_022b4080(pSVar14->m_Items);
        if (unaff_R12.genericMethod != (System_Collections_Generic_List_string__o *)0x0) {
          pSStack_68 = (System_Object_array *)0x43be69b;
          lVar16 = il2cpp_runtime_helper_023051f0(unaff_R12.genericMethod);
          if (lVar16 == 0) goto label_043be7ff;
        }
        if (1 < (uint)pSVar14->max_length) {
          ((_union_249689 *)(pSVar14->m_Items + 1))->genericMethod = (void *)unaff_R12;
          pSStack_68 = (System_Object_array *)0x43be6c1;
          il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 1);
          unaff_R14 = pUVar15;
          if (unaff_R15 != (Photon_Pun_PhotonView_o *)0x0) {
            puVar17 = &"EmoteEmojiRPC";
            goto label_043be6d1;
          }
          goto label_043be7e8;
        }
      }
      goto label_043be7fa;
    }
    pSStack_68 = (System_Object_array *)0x43be663;
    lVar16 = il2cpp_runtime_helper_023051f0(pUVar15);
    if (lVar16 != 0) goto label_043be66c;
  }
label_043be7ff:
  pSStack_68 = (System_Object_array *)0x43be804;
  pIVar19 = (Il2CppRGCTXData *)il2cpp_runtime_helper_0231b270();
  __this_10 = (Il2CppRGCTXData *)0x0;
  pSStack_68 = (System_Object_array *)0x43be80e;
  il2cpp_runtime_helper_022b2b10();
  x = (Il2CppRGCTXData **)(extraout_RDX & 0xffffffff);
  plVar23 = (long *)pIVar19;
  pUStack_80 = (UI_WheelPopup_o *)plVar21;
  pUStack_78 = pUVar15;
  pPStack_70 = unaff_R15;
  pSStack_68 = pSVar14;
  if (g_data_057ae3c4 == '\0') {
    pIStack_120 = (Il2CppRGCTXData *)0x43be83a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStack_120 = (Il2CppRGCTXData *)0x43be846;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    plVar23 = &TypeInfo_SceneLoader;
    pIStack_120 = (Il2CppRGCTXData *)0x43be852;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3c4 = '\x01';
  }
  auVar44 = _auStack_108;
  if (__this_10 == (Il2CppRGCTXData *)0x0) goto label_043beee9;
  unaff_R15 = *(Photon_Pun_PhotonView_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  fVar29 = *(float *)(__this_10 + 0x18);
  if (*(char *)((long)__this_10 + 0xdc) == '\0') {
    auStack_e8._0_4_ = fVar29;
    pIStack_120 = (Il2CppRGCTXData *)0x43beb1b;
    fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar29 = (float)auStack_e8._0_4_ - fVar29;
    *(float *)(__this_10 + 0x18) = fVar29;
  }
  if ((0.0 < fVar29) && (auVar31 = ZEXT416(0), (char)x == '\0')) {
    x = (Il2CppRGCTXData **)__this_10[0x19].method;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_120 = (Il2CppRGCTXData *)0x43be8c0;
      il2cpp_runtime_helper_02337ed0();
      auVar31._8_8_ = extraout_XMM1_Qb;
      auVar31._0_8_ = extraout_XMM1_Qa;
    }
    pIStack_120 = (Il2CppRGCTXData *)0x43be8cc;
    plVar23 = (long *)x;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      auVar44 = _auStack_108;
      if (((__this_10[0x19].klass != (Il2CppClass *)0x0) &&
          (pGVar7 = ((__this_10[0x19].klass)->_1).interopData, pGVar7 != (GameManagers_InGameManager_o *)0x0))
         && (plVar23 = (long *)(pGVar7->fields).m_CachedPtr,
            (Il2CppRGCTXData *)plVar23 != (Il2CppRGCTXData *)0x0)) {
        pIStack_120 = (Il2CppRGCTXData *)0x43be905;
        UVar43 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar23,(MethodInfo *)0x0);
        auVar32._4_12_ = auVar31._4_12_;
        auVar44 = _auStack_108;
        if ((unaff_R15 != (Photon_Pun_PhotonView_o *)0x0) &&
           (pSVar14 = (unaff_R15->fields).instantiationDataField, pSVar14 != (System_Object_array *)0x0)) {
          pUVar20 = (UnityEngine_Transform_o *)pSVar14->bounds;
          plVar23 = (long *)0x0;
          if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
            fStack_c8 = UVar43.fields.x + SUB84(__this_10[0x1a],0);
            fStack_c4 = UVar43.fields.y + SUB84(__this_10[0x1a],4);
            fStack_c0 = extraout_XMM0_Dc + 0.0;
            fStack_bc = extraout_XMM0_Dd + 0.0;
            auStack_108._4_4_ = fStack_c4;
            auStack_108._0_4_ = fStack_c4;
            fStack_100 = fStack_c0;
            fStack_fc = fStack_bc;
            auVar32._0_4_ = UVar43.fields.z + *(float *)(__this_10 + 0x1b);
            pIStack_120 = (Il2CppRGCTXData *)0x43be958;
            auStack_e8._0_16_ = auVar32;
            UVar43 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
            auVar33._4_12_ = auVar32._4_12_;
            auVar33._0_4_ = UVar43.fields.z;
            auVar44._0_8_ = UVar43.fields._0_8_;
            auVar44._8_4_ = extraout_XMM0_Dc_00;
            auVar44._12_4_ = extraout_XMM0_Dd_00;
            auVar30 = (undefined1  [8])auVar33._0_8_;
            if (g_data_057a68cb == '\0') {
              pIStack_120 = (Il2CppRGCTXData *)0x43be979;
              _auStack_118 = auVar33;
              auStack_f8 = auVar44;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
              auVar44 = auStack_f8;
              auVar30 = auStack_118;
            }
            auVar36._4_4_ = auVar44._4_4_;
            auVar36._8_4_ = auVar44._8_4_;
            auVar36._12_4_ = auVar44._12_4_;
            auVar36._0_4_ = auVar36._4_4_;
            auVar37._4_12_ = auVar36._4_12_;
            auVar37._0_4_ = auVar36._4_4_ - (float)auStack_108._0_4_;
            fVar29 = SUB84(auVar30,0) - (float)auStack_e8._0_4_;
            fVar35 = auVar44._0_4_ - fStack_c8;
            x = &TypeInfo_Math;
            plVar23 = (long *)TypeInfo_Math;
            if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
              auStack_118._4_4_ = fVar35;
              auStack_118._0_4_ = fVar29;
              fStack_110 = (float)((ulong)auVar30 >> 0x20) - (float)auStack_e8._4_4_;
              fStack_10c = auVar36._4_4_ - fStack_c4;
              pIStack_120 = (Il2CppRGCTXData *)0x43be9c5;
              auStack_f8 = auVar37;
              il2cpp_runtime_helper_02337ed0();
              auVar37 = auStack_f8;
              fVar29 = (float)auStack_118._0_4_;
              fVar35 = (float)auStack_118._4_4_;
            }
            fVar29 = fVar35 * fVar35 + auVar37._0_4_ * auVar37._0_4_ + fVar29 * fVar29;
            if (fVar29 < 0.0) {
              pIStack_120 = (Il2CppRGCTXData *)0x43beb43;
              fVar29 = sqrtf(fVar29);
            }
            else {
              fVar29 = SQRT(fVar29);
            }
            if (500.0 < fVar29) {
              pIStack_120 = (Il2CppRGCTXData *)0x43beb63;
              (*__this_10->klass->vtable[0x16].methodPtr)(__this_10);
              pIStack_120 = (Il2CppRGCTXData *)0x43beb6d;
              plVar23 = (long *)__this_10;
              pUVar12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_10,(MethodInfo *)0x0);
              auVar44 = _auStack_108;
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                pIStack_120 = (Il2CppRGCTXData *)0x43beb80;
                bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
                if ((char)bVar10 == '\0') {
                  return;
                }
                pIStack_120 = (Il2CppRGCTXData *)0x43beb92;
                pUVar20 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_10,(MethodInfo *)0x0);
                plVar23 = *(long **)&(unaff_R15->fields).Group;
                auVar44 = _auStack_108;
                if ((Il2CppRGCTXData *)plVar23 != (Il2CppRGCTXData *)0x0) {
                  UVar43.fields.y = fStack_c4;
                  UVar43.fields.x = fStack_c8;
                  pIStack_120 = (Il2CppRGCTXData *)0x43bebb3;
                  UVar43.fields.z = (float)auStack_e8._0_4_;
                  UVar43 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                     ((UnityEngine_Camera_o *)plVar23,UVar43,(MethodInfo *)0x0);
                  __this_10 = (Il2CppRGCTXData *)0x0;
                  auVar44 = _auStack_108;
                  if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_position(pUVar20,UVar43,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            else {
              pSVar14 = (unaff_R15->fields).instantiationDataField;
              auVar44 = _auStack_108;
              if (pSVar14 != (System_Object_array *)0x0) {
                pUVar20 = (UnityEngine_Transform_o *)pSVar14->bounds;
                plVar23 = (long *)0x0;
                fStack_cc = fVar29;
                if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                  pIStack_120 = (Il2CppRGCTXData *)0x43bea28;
                  UVar43 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
                  auStack_118 = UVar43.fields._0_8_;
                  fStack_110 = (float)extraout_XMM0_Dc_01;
                  fStack_10c = (float)extraout_XMM0_Dd_01;
                  fVar29 = UVar43.fields.z;
                  if (g_data_057a6845 == '\0') {
                    auStack_108._0_4_ = UVar43.fields.z;
                    pIStack_120 = (Il2CppRGCTXData *)0x43bea4a;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                    g_data_057a6845 = '\x01';
                    fVar29 = (float)auStack_108._0_4_;
                  }
                  fVar35 = fStack_c8 - auStack_118._0_4_;
                  fVar25 = fStack_c4 - auStack_118._4_4_;
                  fVar40 = auStack_118._8_4_;
                  fVar41 = auStack_118._12_4_;
                  auVar38._4_12_ = auStack_e8._4_12_;
                  auVar38._0_4_ = auStack_e8._0_4_ - fVar29;
                  auStack_118._4_4_ = fVar25;
                  auStack_118._0_4_ = fVar35;
                  fStack_110 = fStack_c0 - fVar40;
                  fStack_10c = fStack_bc - fVar41;
                  plVar23 = (long *)TypeInfo_Math;
                  if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                    pIStack_120 = (Il2CppRGCTXData *)0x43bea87;
                    _auStack_108 = auVar38;
                    il2cpp_runtime_helper_02337ed0();
                    fVar35 = (float)auStack_118._0_4_;
                    fVar25 = (float)auStack_118._4_4_;
                    auVar38 = _auStack_108;
                  }
                  uVar24 = auVar38._8_4_;
                  uVar26 = auVar38._12_4_;
                  fVar29 = auVar38._0_4_ * auVar38._0_4_ + fVar25 * fVar25 + fVar35 * fVar35;
                  auVar34 = ZEXT816(0);
                  if (fVar29 < 0.0) {
                    pIStack_120 = (Il2CppRGCTXData *)0x43bebdd;
                    _auStack_108 = auVar38;
                    fVar29 = sqrtf(fVar29);
                    uVar24 = extraout_XMM0_Dc_02;
                    uVar26 = extraout_XMM0_Dd_02;
                    auVar38 = _auStack_108;
                    if (1e-05 < fVar29) goto label_043bebef;
label_043beac6:
                    if (g_data_057a65d5 == '\0') {
                      plVar23 = &TypeInfo_Vector3;
                      pIStack_120 = (Il2CppRGCTXData *)0x43beadb;
                      il2cpp_runtime_helper_023445d0();
                      auVar34._8_8_ = extraout_XMM1_Qb_00;
                      auVar34._0_8_ = extraout_XMM1_Qa_00;
                      g_data_057a65d5 = '\x01';
                    }
                    uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                    uVar24 = (undefined4)uVar1;
                    uVar26 = (undefined4)((ulong)uVar1 >> 0x20);
                    uVar27 = 0;
                    uVar28 = 0;
                    pSVar14 = (unaff_R15->fields).instantiationDataField;
                    auVar39 = ZEXT416(*(uint *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1));
                    auVar44 = _auStack_108;
                  }
                  else {
                    fVar29 = SQRT(fVar29);
                    if (fVar29 <= 1e-05) goto label_043beac6;
label_043bebef:
                    auVar39._4_12_ = auVar38._4_12_;
                    auVar39._0_4_ = auVar38._0_4_ / fVar29;
                    auVar8._4_4_ = fVar29;
                    auVar8._0_4_ = fVar29;
                    auVar8._8_4_ = uVar24;
                    auVar8._12_4_ = uVar26;
                    auVar34 = divps(_auStack_118,auVar8);
                    uVar24 = auVar34._0_4_;
                    uVar26 = auVar34._4_4_;
                    uVar27 = auVar34._8_4_;
                    uVar28 = auVar34._12_4_;
                    pSVar14 = (unaff_R15->fields).instantiationDataField;
                    auVar44 = _auStack_108;
                  }
                  _auStack_108 = auVar39;
                  if (pSVar14 != (System_Object_array *)0x0) {
                    auStack_118._4_4_ = uVar26;
                    auStack_118._0_4_ = uVar24;
                    fStack_110 = (float)uVar27;
                    fStack_10c = (float)uVar28;
                    plVar23 = (long *)0x0;
                    auVar44 = _auStack_108;
                    if ((UnityEngine_Transform_o *)pSVar14->bounds != (UnityEngine_Transform_o *)0x0) {
                      pIStack_120 = (Il2CppRGCTXData *)0x43bec2b;
                      UVar43 = UnityEngine_Transform__get_forward
                                         ((UnityEngine_Transform_o *)pSVar14->bounds,(MethodInfo *)0x0);
                      auStack_f8._4_12_ = auVar34._4_12_;
                      auStack_f8._0_4_ = UVar43.fields.z;
                      auStack_b8._4_4_ = UVar43.fields.y;
                      auStack_a8._8_4_ = extraout_XMM0_Dc_03;
                      auStack_a8._0_8_ = UVar43.fields._0_8_;
                      auStack_a8._12_4_ = extraout_XMM0_Dd_03;
                      uStack_b0 = extraout_XMM0_Dc_03;
                      uStack_ac = extraout_XMM0_Dd_03;
                      fVar29 = UVar43.fields.x;
                      if (g_data_057ac31a == '\0') {
                        auStack_b8 = (undefined1  [8])UVar43.fields._0_8_;
                        pIStack_120 = (Il2CppRGCTXData *)0x43bec52;
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                        g_data_057ac31a = '\x01';
                        fVar29 = (float)auStack_a8._0_4_;
                      }
                      auStack_b8._0_4_ = auStack_b8._4_4_;
                      fVar25 = auStack_f8._0_4_ * auStack_f8._0_4_ +
                               (float)auStack_b8._4_4_ * (float)auStack_b8._4_4_ + fVar29 * fVar29;
                      auStack_98._4_4_ = auStack_118._4_4_;
                      auStack_98._0_4_ = auStack_118._4_4_;
                      auStack_98._8_4_ = fStack_110;
                      auStack_98._12_4_ = fStack_10c;
                      fVar29 = auStack_108._0_4_;
                      fVar35 = fVar29 * fVar29 +
                               (float)auStack_118._4_4_ * (float)auStack_118._4_4_ +
                               (float)auStack_118._0_4_ * (float)auStack_118._0_4_;
                      if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                        pIStack_120 = (Il2CppRGCTXData *)0x43bed08;
                        fStack_d4 = fVar35;
                        fStack_d0 = fVar25;
                        il2cpp_runtime_helper_02337ed0();
                        fVar29 = auStack_108._0_4_;
                        fVar35 = fStack_d4 * fStack_d0;
                        if (fVar35 < 0.0) goto label_043bed25;
label_043becd3:
                        fVar35 = SQRT(fVar35);
                        method_00 = TypeInfo_Math;
                        auVar44 = auStack_f8;
                      }
                      else {
                        fVar35 = fVar35 * fVar25;
                        if (0.0 <= fVar35) goto label_043becd3;
label_043bed25:
                        pIStack_120 = (Il2CppRGCTXData *)0x43bed2a;
                        fVar35 = sqrtf(fVar35);
                        fVar29 = auStack_108._0_4_;
                        method_00 = TypeInfo_Math;
                        auVar44 = auStack_f8;
                      }
                      TypeInfo_Math = method_00;
                      auStack_f8 = auVar44;
                      if (1e-15 <= fVar35) {
                        auStack_f8._0_4_ = auVar44._0_4_;
                        fVar35 = ((float)auStack_f8._0_4_ * fVar29 +
                                 (float)auStack_98._0_4_ * (float)auStack_b8._0_4_ +
                                 (float)auStack_118._0_4_ * (float)auStack_a8._0_4_) / fVar35;
                        fVar29 = 1.0;
                        if (fVar35 <= 1.0) {
                          fVar29 = fVar35;
                        }
                        fVar29 = (float)(~-(uint)(-1.0 <= fVar35) & 0xbf800000 |
                                        (uint)fVar29 & -(uint)(-1.0 <= fVar35));
                        auStack_f8 = ZEXT416((uint)fVar29);
                        if (*(int *)((long)method_00 + 0xe4) == 0) {
                          pIStack_120 = (Il2CppRGCTXData *)0x43beda9;
                          il2cpp_runtime_helper_02337ed0();
                          fVar29 = auStack_f8._0_4_;
                          auVar44 = auStack_f8;
                        }
                        auStack_f8 = auVar44;
                        pIStack_120 = (Il2CppRGCTXData *)0x43bedba;
                        dVar9 = acos((double)fVar29,(MethodInfo *)method_00);
                        if (90.0 < (float)dVar9 * 57.29578) goto label_043bee6a;
                      }
                      plVar23 = (long *)__this_10[0x19].method;
                      auVar44 = _auStack_108;
                      if ((Il2CppRGCTXData *)plVar23 != (Il2CppRGCTXData *)0x0) {
                        pIStack_120 = (Il2CppRGCTXData *)0x43bedea;
                        bVar10 = Characters_BaseCharacter__IsMainCharacter
                                           ((Characters_BaseCharacter_o *)plVar23,(MethodInfo *)0x0);
                        if ((char)bVar10 == '\0') {
                          pSVar14 = (unaff_R15->fields).instantiationDataField;
                          auVar44 = _auStack_108;
                          if (pSVar14 != (System_Object_array *)0x0) {
                            pUVar20 = (UnityEngine_Transform_o *)pSVar14->bounds;
                            plVar23 = (long *)0x0;
                            if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                              pIStack_120 = (Il2CppRGCTXData *)0x43bee13;
                              UVar43 = UnityEngine_Transform__get_position(pUVar20,(MethodInfo *)0x0);
                              auStack_f8._8_4_ = extraout_XMM0_Dc_04;
                              auStack_f8._0_8_ = UVar43.fields._0_8_;
                              auStack_f8._12_4_ = extraout_XMM0_Dd_04;
                              auStack_b8._0_4_ = UVar43.fields.z;
                              pIStack_120 = (Il2CppRGCTXData *)0x43bee29;
                              uVar11 = UnityEngine_LayerMask__op_Implicit
                                                 ((UnityEngine_LayerMask_Fields)
                                                  *(UnityEngine_LayerMask_Fields *)(pIVar19 + 10),
                                                  (MethodInfo *)0x0);
                              x = (Il2CppRGCTXData **)(ulong)uVar11;
                              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                                pIStack_120 = (Il2CppRGCTXData *)0x43bee43;
                                il2cpp_runtime_helper_02337ed0();
                              }
                              auVar44 = auStack_f8;
                              direction.fields._0_8_ = auStack_118;
                              pIStack_120 = (Il2CppRGCTXData *)0x43bee66;
                              origin.fields.z = (float)auStack_b8._0_4_;
                              origin.fields.x = (float)auStack_f8._0_4_;
                              origin.fields.y = (float)auStack_f8._4_4_;
                              direction.fields.z = (float)auStack_108._0_4_;
                              auStack_f8 = auVar44;
                              bVar10 = UnityEngine_Physics__Raycast_4e76f20
                                                 (origin,direction,fStack_cc,uVar11,(MethodInfo *)0x0);
                              if ((char)bVar10 != '\0') goto label_043bee6a;
                              goto label_043bee8d;
                            }
                          }
                        }
                        else {
label_043bee8d:
                          __this_01 = *(UnityEngine_Camera_o **)&(unaff_R15->fields).Group;
                          plVar23 = (long *)0x0;
                          auVar44 = _auStack_108;
                          if (__this_01 != (UnityEngine_Camera_o *)0x0) {
                            position.fields.y = fStack_c4;
                            position.fields.x = fStack_c8;
                            pIStack_120 = (Il2CppRGCTXData *)0x43beea7;
                            position.fields.z = (float)auStack_e8._0_4_;
                            UVar43 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                               (__this_01,position,(MethodInfo *)0x0);
                            fStack_c8 = UVar43.fields.z;
                            auStack_e8._8_4_ = extraout_XMM0_Dc_05;
                            auStack_e8._0_8_ = UVar43.fields._0_8_;
                            auStack_e8._12_4_ = extraout_XMM0_Dd_05;
                            pIStack_120 = (Il2CppRGCTXData *)0x43beebc;
                            plVar23 = (long *)__this_10;
                            pUVar20 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_10,(MethodInfo *)0x0);
                            auVar31 = auStack_e8._0_16_;
                            auVar44 = _auStack_108;
                            if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                              pIStack_120 = (Il2CppRGCTXData *)0x43beed6;
                              value.fields.z = fStack_c8;
                              value.fields.x = (float)auStack_e8._0_4_;
                              value.fields.y = (float)auStack_e8._4_4_;
                              auStack_e8._0_16_ = auVar31;
                              UnityEngine_Transform__set_position(pUVar20,value,(MethodInfo *)0x0);
                              vtableDispatch = __this_10->klass->vtable[0x15].methodPtr;
                              pMVar22 = __this_10->klass->vtable[0x15].method;
                              goto label_043bee7b;
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
label_043beee9:
      _auStack_108 = auVar44;
      pIStack_120 = (Il2CppRGCTXData *)0x43beeee;
      il2cpp_runtime_helper_022b2c90();
      pIStack_148 = __this_10;
      _Stack_140 = unaff_R12;
      pUStack_138 = unaff_R13;
      pIStack_130 = pIVar19;
      pPStack_128 = unaff_R15;
      pIStack_120 = (Il2CppRGCTXData *)x;
      if (g_data_057ae3c5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
        il2cpp_runtime_helper_023445d0();
        g_data_057ae3c5 = '\x01';
      }
      pSVar45 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
      pIVar46 = (Il2CppType *)0x0;
      pUVar47 = (UI_EmoteTextPopup_o *)0x0;
      fVar29 = *(float *)((long)plVar23 + 0x3c);
      pMVar22 = (MethodInfo *)0x0;
      fVar35 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      *(float *)((long)plVar23 + 0x3c) = fVar29 - fVar35;
      bVar10 = UI_InGameMenu__InMenu(pMVar22);
      uVar11 = 1;
      if ((char)bVar10 == '\0') {
        plVar21 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (plVar21 != (long *)0x0) {
          in_RCX = (System_Object_array *)(ulong)*(byte *)(TypeInfo_InGameManager + 0x130);
          if ((*(byte *)(*plVar21 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
             (*(long *)(*(long *)(*plVar21 + 200) + -8 + (long)in_RCX * 8) != TypeInfo_InGameManager))
          goto label_043bf0e7;
          uVar11 = (uint)((int)plVar21[0xd] == 0);
          goto label_043beff6;
        }
      }
      else {
label_043beff6:
        if ((Photon_Pun_PhotonView_o *)((Il2CppRGCTXData *)(plVar23 + 4))->method !=
            (Photon_Pun_PhotonView_o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_160,
                     (System_Collections_Generic_List_object__o *)((Il2CppRGCTXData *)(plVar23 + 4))->method,
                     MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
          pSVar45 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_160._0_8_;
          pIVar46 = (Il2CppType *)auStack_160._8_8_;
          pUVar47 = pUStack_150;
          while (__this_02.fields._8_8_ = pIVar46,
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar45,
                __this_02.fields._current = (Il2CppObject *)pUVar47,
                bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe80),
                (char)bVar10 != '\0') {
            UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar23,pUVar47,uVar11,(MethodInfo *)in_RCX);
          }
          __this_03.fields._8_8_ = pIVar46;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
          __this_03.fields._current = (Il2CppObject *)pUVar47;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe80);
          if (((Il2CppRGCTXData *)(plVar23 + 5))->method != (MethodInfo *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_160,
                       (System_Collections_Generic_List_object__o *)((Il2CppRGCTXData *)(plVar23 + 5))->method
                       ,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
            pSVar45 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_160._0_8_;
            pIVar46 = (Il2CppType *)auStack_160._8_8_;
            pUVar47 = pUStack_150;
            while (__this_04.fields._8_8_ = pIVar46,
                  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar45,
                  __this_04.fields._current = (Il2CppObject *)pUVar47,
                  bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_04,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe80),
                  (char)bVar10 != '\0') {
              UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar23,pUVar47,uVar11,(MethodInfo *)in_RCX);
            }
            __this_05.fields._8_8_ = pIVar46;
            __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
            __this_05.fields._current = (Il2CppObject *)pUVar47;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe80);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
label_043bf0e7:
      auVar42 = il2cpp_runtime_helper_022b2fd0();
      if (auVar42._8_4_ == 1) {
        plVar21 = (long *)__cxa_begin_catch(auVar42._0_8_);
        lVar16 = *plVar21;
        __cxa_end_catch();
        __this_06.fields._8_8_ = pIVar46;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
        __this_06.fields._current = (Il2CppObject *)pUVar47;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe80);
        if (lVar16 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar16);
        __this_08.fields._8_8_ = pIVar46;
        __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
        __this_08.fields._current = (Il2CppObject *)pUVar47;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_08,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe80);
      }
      else {
        __this_07.fields._8_8_ = pIVar46;
        __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
        __this_07.fields._current = (Il2CppObject *)pUVar47;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_07,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe80);
      }
      _Unwind_Resume(auVar42._0_8_);
    }
  }
label_043bee6a:
  vtableDispatch = __this_10->klass->vtable[0x37].methodPtr;
  pMVar22 = __this_10->klass->vtable[0x37].method;
label_043bee7b:
  (*vtableDispatch)(__this_10,pMVar22);
  return;
}


// UI.EmoteHandler$$OnEmoteWheelSelect
// il2cpp: void UI_EmoteHandler__OnEmoteWheelSelect (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x43be250

void UI_EmoteHandler__OnEmoteWheelSelect(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  GameManagers_InGameManager_o *pGVar3;
  UI_BasePopup_o *pUVar4;
  Characters_BaseCharacter_o *x;
  Settings_ListSetting_T__o *pSVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  double dVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar10;
  int32_t iVar11;
  Settings_BaseSetting_o *pSVar12;
  System_Object_array *parameters;
  Il2CppObject *pIVar13;
  long lVar14;
  undefined8 *puVar15;
  System_Collections_Generic_List_object__o *__this_07;
  Il2CppRGCTXData *pIVar16;
  UnityEngine_GameObject_o *__this_08;
  UnityEngine_Transform_o *pUVar17;
  System_Object_array *in_RCX;
  Il2CppMethodPointer vtableDispatch;
  char extraout_DL;
  Il2CppRGCTXData *__this_09;
  uint inMenu;
  MethodInfo *pMVar18;
  long *plVar19;
  Il2CppRGCTXData *method_00;
  _union_249689 unaff_R12;
  Photon_Pun_PhotonView_o *__this_10;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar24;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined8 extraout_XMM1_Qa;
  float fVar29;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar28 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar32 [12];
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o direction;
  System_Collections_Generic_List_Enumerator_T__c *pSVar34;
  Il2CppType *pIVar35;
  UI_EmoteTextPopup_o *pUVar36;
  undefined1 auStack_138 [16];
  UI_EmoteTextPopup_o *pUStack_128;
  Il2CppRGCTXData *pIStack_120;
  _union_249689 _Stack_118;
  undefined1 auStack_f0 [8];
  float fStack_e8;
  float fStack_e4;
  
  if (g_data_057ae3c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
    il2cpp_runtime_helper_023445d0(&"EmoteEmojiRPC");
    il2cpp_runtime_helper_023445d0(&"EmoteTextRPC");
    g_data_057ae3c1 = '\x01';
  }
  if ((__this->fields)._currentEmoteWheelState != 2) {
    if ((__this->fields)._currentEmoteCooldown <= 0.0) {
      (__this->fields)._currentEmoteCooldown = 3.0;
      goto label_043be339;
    }
    goto label_043be762;
  }
label_043be339:
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 == (GameManagers_InGameManager_o *)0x0) ||
     (pUVar4 = (__this->fields)._emoteWheelPopup, pUVar4 == (UI_BasePopup_o *)0x0)) goto label_043be7e8;
  in_RCX = (System_Object_array *)pUVar4->klass;
  if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_WheelPopup + 0x130)) ||
     (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
     *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_WheelPopup + 0x130) * 8 + -0x28) != TypeInfo_WheelPopup)) {
label_043be7ed:
    pSVar12 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_022b2fd0();
label_043be7f2:
    il2cpp_runtime_helper_022b2fd0(pSVar12);
label_043be7fa:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    x = (pGVar3->fields).CurrentCharacter;
    iVar11 = (int32_t)pUVar4[1].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto label_043be762;
    iVar2 = (__this->fields)._currentEmoteWheelState;
    if (iVar2 == 2) {
      if ((x != (Characters_BaseCharacter_o *)0x0) &&
         (lVar14 = (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)(x), lVar14 != 0)) {
        if (iVar11 < *(int *)(lVar14 + 0x18)) {
          __this_07 = (System_Collections_Generic_List_object__o *)
                      (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)(x);
          if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto label_043be7e8;
          pIVar13 = System_Collections_Generic_List_object___get_Item(__this_07,iVar11,MethodInfo_String_get_Item);
          in_RCX = (System_Object_array *)x->klass;
          (**(code **)((long)((Il2CppType *)in_RCX->m_Items + 0x57) + 8))
                    (x,pIVar13,((Il2CppType *)in_RCX->m_Items)[0x58].data);
        }
label_043be762:
        pUVar4 = (__this->fields)._emoteWheelPopup;
joined_r0x043be769:
        if (pUVar4 != (UI_BasePopup_o *)0x0) {
          (*(pUVar4->klass->vtable)._22_Hide.methodPtr)();
          *(undefined1 *)&(__this->fields).IsActive = 0;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar19 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar19 != (long *)0x0) {
            in_RCX = (System_Object_array *)(ulong)*(byte *)(TypeInfo_InGameMenu + 0x130);
            if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar19 + 0x130)) &&
               (*(long *)(*(long *)(*plVar19 + 200) + -8 + (long)in_RCX * 8) == TypeInfo_InGameMenu)) {
              *(undefined1 *)(plVar19 + 0x2f) = 1;
              return;
            }
            goto label_043be7ed;
          }
        }
      }
label_043be7e8:
      il2cpp_runtime_helper_022b2c90();
      goto label_043be7ed;
    }
    if (iVar2 != 1) {
      if (iVar2 != 0) goto label_043be762;
      lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
      if (((lVar14 == 0) ||
          (pSVar5 = *(Settings_ListSetting_T__o **)(lVar14 + 0x20), pSVar5 == (Settings_ListSetting_T__o *)0x0
          )) || (pSVar12 = Settings_ListSetting_object___GetItemAt(pSVar5,iVar11,MethodInfo_BaseSetting_GetItemAt),
                pSVar12 == (Settings_BaseSetting_o *)0x0)) goto label_043be7e8;
      in_RCX = (System_Object_array *)pSVar12->klass;
      if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_StringSetting + 0x130)) ||
         (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
         *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_StringSetting + 0x130) * 8 + -0x28) != TypeInfo_StringSetting
         )) goto label_043be7f2;
      unaff_R12 = (_union_249689)pSVar12[1].monitor;
      __this_10 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
      if (((x == (Characters_BaseCharacter_o *)0x0) ||
          ((lVar14 = *(long *)&(x->fields).Dead, lVar14 == 0 || (*(long *)(lVar14 + 0x20) == 0)))) ||
         (pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), parameters == (System_Object_array *)0x0
         )) goto label_043be7e8;
      if ((pIVar13 != (Il2CppObject *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pIVar13), lVar14 == 0))
      goto label_043be7ff;
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar13;
        il2cpp_runtime_helper_022b4080(parameters->m_Items);
        if ((unaff_R12.genericMethod != (Il2CppObject *)0x0) &&
           (lVar14 = il2cpp_runtime_helper_023051f0(unaff_R12.genericMethod), lVar14 == 0)) goto label_043be7ff;
        if (1 < (uint)parameters->max_length) {
          ((_union_249689 *)(parameters->m_Items + 1))->genericMethod = (void *)unaff_R12;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
          if (__this_10 != (Photon_Pun_PhotonView_o *)0x0) {
            puVar15 = &"EmoteTextRPC";
            goto label_043be6d1;
          }
          goto label_043be7e8;
        }
      }
      goto label_043be7fa;
    }
    lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
    if (((lVar14 == 0) ||
        (pSVar5 = *(Settings_ListSetting_T__o **)(lVar14 + 0x28), pSVar5 == (Settings_ListSetting_T__o *)0x0))
       || (pSVar12 = Settings_ListSetting_object___GetItemAt(pSVar5,iVar11,MethodInfo_BaseSetting_GetItemAt),
          pSVar12 == (Settings_BaseSetting_o *)0x0)) goto label_043be7e8;
    in_RCX = (System_Object_array *)pSVar12->klass;
    if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_StringSetting + 0x130)) ||
       (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
       *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_StringSetting + 0x130) * 8 + -0x28) != TypeInfo_StringSetting))
    goto label_043be7f2;
    unaff_R12 = (_union_249689)pSVar12[1].monitor;
    __this_10 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (((x == (Characters_BaseCharacter_o *)0x0) ||
        ((lVar14 = *(long *)&(x->fields).Dead, lVar14 == 0 || (*(long *)(lVar14 + 0x20) == 0)))) ||
       (pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), parameters == (System_Object_array *)0x0))
    goto label_043be7e8;
    if ((pIVar13 == (Il2CppObject *)0x0) || (lVar14 = il2cpp_runtime_helper_023051f0(pIVar13), lVar14 != 0)) {
      if ((int)parameters->max_length == 0) goto label_043be7fa;
      parameters->m_Items[0] = pIVar13;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if ((unaff_R12.genericMethod != (Il2CppObject *)0x0) &&
         (lVar14 = il2cpp_runtime_helper_023051f0(unaff_R12.genericMethod), lVar14 == 0)) goto label_043be7ff;
      if ((uint)parameters->max_length < 2) goto label_043be7fa;
      ((_union_249689 *)(parameters->m_Items + 1))->genericMethod = (void *)unaff_R12;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
      if (__this_10 == (Photon_Pun_PhotonView_o *)0x0) goto label_043be7e8;
      puVar15 = &"EmoteEmojiRPC";
label_043be6d1:
      Photon_Pun_PhotonView__RPC(__this_10,(System_String_o *)*puVar15,0,parameters,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._emoteWheelPopup;
      in_RCX = parameters;
      goto joined_r0x043be769;
    }
  }
label_043be7ff:
  pIVar16 = (Il2CppRGCTXData *)il2cpp_runtime_helper_0231b270();
  __this_09 = (Il2CppRGCTXData *)0x0;
  il2cpp_runtime_helper_022b2b10();
  plVar19 = (long *)pIVar16;
  if (g_data_057ae3c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    plVar19 = &TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3c4 = '\x01';
  }
  if (__this_09 == (Il2CppRGCTXData *)0x0) goto label_043beee9;
  lVar14 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  fVar26 = *(float *)(__this_09 + 0x18);
  if (*(char *)((long)__this_09 + 0xdc) == '\0') {
    fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar26 = fVar26 - fVar29;
    *(float *)(__this_09 + 0x18) = fVar26;
  }
  if ((0.0 < fVar26) && (auVar28 = ZEXT416(0), extraout_DL == '\0')) {
    plVar19 = (long *)__this_09[0x19].method;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      auVar28._8_8_ = extraout_XMM1_Qb;
      auVar28._0_8_ = extraout_XMM1_Qa;
    }
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)plVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (((__this_09[0x19].klass != (Il2CppClass *)0x0) &&
          (pGVar3 = ((__this_09[0x19].klass)->_1).interopData, pGVar3 != (GameManagers_InGameManager_o *)0x0))
         && (plVar19 = (long *)(pGVar3->fields).m_CachedPtr,
            (Il2CppRGCTXData *)plVar19 != (Il2CppRGCTXData *)0x0)) {
        UVar33 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar19,(MethodInfo *)0x0);
        if ((lVar14 != 0) && (*(long *)(lVar14 + 0x28) != 0)) {
          pUVar17 = *(UnityEngine_Transform_o **)(*(long *)(lVar14 + 0x28) + 0x10);
          plVar19 = (long *)0x0;
          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
            position.fields.x = UVar33.fields.x + SUB84(__this_09[0x1a],0);
            position.fields.y = UVar33.fields.y + SUB84(__this_09[0x1a],4);
            position.fields.z = UVar33.fields.z + *(float *)(__this_09 + 0x1b);
            UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
            }
            fVar30 = UVar33.fields.y - position.fields.y;
            fVar26 = UVar33.fields.z - position.fields.z;
            fVar29 = UVar33.fields.x - position.fields.x;
            plVar19 = (long *)TypeInfo_Math;
            if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar26 = fVar29 * fVar29 + fVar30 * fVar30 + fVar26 * fVar26;
            if (fVar26 < 0.0) {
              fVar26 = sqrtf(fVar26);
            }
            else {
              fVar26 = SQRT(fVar26);
            }
            if (500.0 < fVar26) {
              (*__this_09->klass->vtable[0x16].methodPtr)(__this_09);
              plVar19 = (long *)__this_09;
              __this_08 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
              if (__this_08 != (UnityEngine_GameObject_o *)0x0) {
                bVar10 = UnityEngine_GameObject__get_activeSelf(__this_08,(MethodInfo *)0x0);
                if ((char)bVar10 == '\0') {
                  return;
                }
                pUVar17 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
                plVar19 = *(long **)(lVar14 + 0x20);
                if ((Il2CppRGCTXData *)plVar19 != (Il2CppRGCTXData *)0x0) {
                  UVar33 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                     ((UnityEngine_Camera_o *)plVar19,position,(MethodInfo *)0x0);
                  __this_09 = (Il2CppRGCTXData *)0x0;
                  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_position(pUVar17,UVar33,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            else if (*(long *)(lVar14 + 0x28) != 0) {
              pUVar17 = *(UnityEngine_Transform_o **)(*(long *)(lVar14 + 0x28) + 0x10);
              plVar19 = (long *)0x0;
              if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                if (g_data_057a6845 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a6845 = '\x01';
                }
                auStack_f0._0_4_ = position.fields.x - UVar33.fields.x;
                auStack_f0._4_4_ = position.fields.y - UVar33.fields.y;
                fVar29 = position.fields.z - UVar33.fields.z;
                fStack_e8 = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
                fStack_e4 = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
                plVar19 = (long *)TypeInfo_Math;
                if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uVar24 = auVar28._8_4_;
                uVar25 = auVar28._12_4_;
                fVar30 = fVar29 * fVar29 +
                         (float)auStack_f0._4_4_ * (float)auStack_f0._4_4_ +
                         (float)auStack_f0._0_4_ * (float)auStack_f0._0_4_;
                if (fVar30 < 0.0) {
                  fVar30 = sqrtf(fVar30);
                  uVar24 = extraout_XMM0_Dc_01;
                  uVar25 = extraout_XMM0_Dd_01;
                  if (1e-05 < fVar30) goto label_043bebef;
label_043beac6:
                  if (g_data_057a65d5 == '\0') {
                    plVar19 = &TypeInfo_Vector3;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a65d5 = '\x01';
                  }
                  uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  fVar30 = (float)uVar1;
                  fVar22 = (float)((ulong)uVar1 >> 0x20);
                  fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                  lVar6 = *(long *)(lVar14 + 0x28);
                }
                else {
                  fVar30 = SQRT(fVar30);
                  if (fVar30 <= 1e-05) goto label_043beac6;
label_043bebef:
                  fVar29 = fVar29 / fVar30;
                  auVar8._4_4_ = fVar30;
                  auVar8._0_4_ = fVar30;
                  auVar8._8_4_ = uVar24;
                  auVar8._12_4_ = uVar25;
                  auVar28 = divps(_auStack_f0,auVar8);
                  fVar30 = auVar28._0_4_;
                  fVar22 = auVar28._4_4_;
                  lVar6 = *(long *)(lVar14 + 0x28);
                }
                if (lVar6 != 0) {
                  plVar19 = (long *)0x0;
                  if (*(UnityEngine_Transform_o **)(lVar6 + 0x10) != (UnityEngine_Transform_o *)0x0) {
                    UVar33 = UnityEngine_Transform__get_forward
                                       (*(UnityEngine_Transform_o **)(lVar6 + 0x10),(MethodInfo *)0x0);
                    fVar27 = UVar33.fields.z;
                    fVar20 = UVar33.fields.x;
                    fVar23 = UVar33.fields.y;
                    if (g_data_057ac31a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      g_data_057ac31a = '\x01';
                    }
                    fVar31 = fVar27 * fVar27 + fVar23 * fVar23 + fVar20 * fVar20;
                    fVar21 = fVar29 * fVar29 + fVar22 * fVar22 + fVar30 * fVar30;
                    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      if (fVar21 * fVar31 < 0.0) goto label_043bed25;
label_043becd3:
                      fVar21 = SQRT(fVar21 * fVar31);
                      method_00 = TypeInfo_Math;
                    }
                    else {
                      if (0.0 <= fVar21 * fVar31) goto label_043becd3;
label_043bed25:
                      fVar21 = sqrtf(fVar21 * fVar31);
                      method_00 = TypeInfo_Math;
                    }
                    TypeInfo_Math = method_00;
                    if (1e-15 <= fVar21) {
                      fVar21 = (fVar27 * fVar29 + fVar22 * fVar23 + fVar30 * fVar20) / fVar21;
                      fVar20 = 1.0;
                      if (fVar21 <= 1.0) {
                        fVar20 = fVar21;
                      }
                      if (*(int *)((long)method_00 + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      dVar9 = acos((double)(float)(~-(uint)(-1.0 <= fVar21) & 0xbf800000 |
                                                  (uint)fVar20 & -(uint)(-1.0 <= fVar21)),
                                   (MethodInfo *)method_00);
                      if (90.0 < (float)dVar9 * 57.29578) goto label_043bee6a;
                    }
                    plVar19 = (long *)__this_09[0x19].method;
                    if ((Il2CppRGCTXData *)plVar19 != (Il2CppRGCTXData *)0x0) {
                      bVar10 = Characters_BaseCharacter__IsMainCharacter
                                         ((Characters_BaseCharacter_o *)plVar19,(MethodInfo *)0x0);
                      if ((char)bVar10 == '\0') {
                        if (*(long *)(lVar14 + 0x28) != 0) {
                          pUVar17 = *(UnityEngine_Transform_o **)(*(long *)(lVar14 + 0x28) + 0x10);
                          plVar19 = (long *)0x0;
                          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                            UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                            iVar11 = UnityEngine_LayerMask__op_Implicit
                                               ((UnityEngine_LayerMask_Fields)
                                                *(UnityEngine_LayerMask_Fields *)(pIVar16 + 10),
                                                (MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            direction.fields.z = fVar29;
                            direction.fields.x = fVar30;
                            direction.fields.y = fVar22;
                            bVar10 = UnityEngine_Physics__Raycast_4e76f20
                                               (UVar33,direction,fVar26,iVar11,(MethodInfo *)0x0);
                            if ((char)bVar10 != '\0') goto label_043bee6a;
                            goto label_043bee8d;
                          }
                        }
                      }
                      else {
label_043bee8d:
                        plVar19 = (long *)0x0;
                        if (*(UnityEngine_Camera_o **)(lVar14 + 0x20) != (UnityEngine_Camera_o *)0x0) {
                          UVar33.fields.y = position.fields.y;
                          UVar33.fields.x = position.fields.x;
                          UVar33.fields.z = position.fields.z;
                          UVar33 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                             (*(UnityEngine_Camera_o **)(lVar14 + 0x20),UVar33,
                                              (MethodInfo *)0x0);
                          plVar19 = (long *)__this_09;
                          pUVar17 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
                          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__set_position(pUVar17,UVar33,(MethodInfo *)0x0);
                            vtableDispatch = __this_09->klass->vtable[0x15].methodPtr;
                            pMVar18 = __this_09->klass->vtable[0x15].method;
                            goto label_043bee7b;
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
label_043beee9:
      il2cpp_runtime_helper_022b2c90();
      pIStack_120 = __this_09;
      _Stack_118 = unaff_R12;
      if (g_data_057ae3c5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
        il2cpp_runtime_helper_023445d0();
        g_data_057ae3c5 = '\x01';
      }
      pSVar34 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
      pIVar35 = (Il2CppType *)0x0;
      pUVar36 = (UI_EmoteTextPopup_o *)0x0;
      fVar26 = *(float *)((long)plVar19 + 0x3c);
      pMVar18 = (MethodInfo *)0x0;
      fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      *(float *)((long)plVar19 + 0x3c) = fVar26 - fVar29;
      bVar10 = UI_InGameMenu__InMenu(pMVar18);
      inMenu = 1;
      if ((char)bVar10 == '\0') {
        plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (plVar7 != (long *)0x0) {
          in_RCX = (System_Object_array *)(ulong)*(byte *)(TypeInfo_InGameManager + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
             (*(long *)(*(long *)(*plVar7 + 200) + -8 + (long)in_RCX * 8) != TypeInfo_InGameManager)) goto label_043bf0e7;
          inMenu = (uint)((int)plVar7[0xd] == 0);
          goto label_043beff6;
        }
      }
      else {
label_043beff6:
        if ((Photon_Pun_PhotonView_o *)((Il2CppRGCTXData *)(plVar19 + 4))->method !=
            (Photon_Pun_PhotonView_o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_138,
                     (System_Collections_Generic_List_object__o *)((Il2CppRGCTXData *)(plVar19 + 4))->method,
                     MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
          pSVar34 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_138._0_8_;
          pIVar35 = (Il2CppType *)auStack_138._8_8_;
          pUVar36 = pUStack_128;
          while (__this_00.fields._8_8_ = pIVar35,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar34,
                __this_00.fields._current = (Il2CppObject *)pUVar36,
                bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8),
                (char)bVar10 != '\0') {
            UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar19,pUVar36,inMenu,(MethodInfo *)in_RCX);
          }
          __this_01.fields._8_8_ = pIVar35;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
          __this_01.fields._current = (Il2CppObject *)pUVar36;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
          if (((Il2CppRGCTXData *)(plVar19 + 5))->method != (MethodInfo *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_138,
                       (System_Collections_Generic_List_object__o *)((Il2CppRGCTXData *)(plVar19 + 5))->method
                       ,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
            pSVar34 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_138._0_8_;
            pIVar35 = (Il2CppType *)auStack_138._8_8_;
            pUVar36 = pUStack_128;
            while (__this_02.fields._8_8_ = pIVar35,
                  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar34,
                  __this_02.fields._current = (Il2CppObject *)pUVar36,
                  bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8),
                  (char)bVar10 != '\0') {
              UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar19,pUVar36,inMenu,(MethodInfo *)in_RCX);
            }
            __this_03.fields._8_8_ = pIVar35;
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
            __this_03.fields._current = (Il2CppObject *)pUVar36;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
label_043bf0e7:
      auVar32 = il2cpp_runtime_helper_022b2fd0();
      if (auVar32._8_4_ == 1) {
        plVar19 = (long *)__cxa_begin_catch(auVar32._0_8_);
        lVar14 = *plVar19;
        __cxa_end_catch();
        __this_04.fields._8_8_ = pIVar35;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
        __this_04.fields._current = (Il2CppObject *)pUVar36;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
        if (lVar14 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar14);
        __this_06.fields._8_8_ = pIVar35;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
        __this_06.fields._current = (Il2CppObject *)pUVar36;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
      }
      else {
        __this_05.fields._8_8_ = pIVar35;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
        __this_05.fields._current = (Il2CppObject *)pUVar36;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
      }
      _Unwind_Resume(auVar32._0_8_);
    }
  }
label_043bee6a:
  vtableDispatch = __this_09->klass->vtable[0x37].methodPtr;
  pMVar18 = __this_09->klass->vtable[0x37].method;
label_043bee7b:
  (*vtableDispatch)(__this_09,pMVar18);
  return;
}


// UI.EmoteHandler$$GetEmoteWheelOptions
// il2cpp: System_Collections_Generic_List_string__o* UI_EmoteHandler__GetEmoteWheelOptions (UI_EmoteHandler_o* __this, int32_t state, const MethodInfo* method);
// 0x43bdb80

System_Collections_Generic_List_string__o *
UI_EmoteHandler__GetEmoteWheelOptions(UI_EmoteHandler_o *__this,int32_t state,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  System_String_array *pSVar5;
  GameManagers_InGameManager_o *pGVar6;
  Characters_BaseCharacter_o *pCVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar8;
  System_String_o *item;
  System_Collections_Generic_List_string__o *pSVar9;
  long *plVar10;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  Il2CppObject *pIVar14;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,state);
  if (g_data_057ae3c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    g_data_057ae3c2 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  pIVar14 = (Il2CppObject *)0x0;
  if (state == 1) {
    __this = (UI_EmoteHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    method_00 = MethodInfo_List_1_System_String;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) goto label_043bdf82;
    pSVar4 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18);
    method_00 = (MethodInfo *)0x0;
    if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto label_043bdf82;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar4,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
    pIVar13 = (Il2CppType *)local_38._8_8_;
    pIVar14 = local_28;
    if (__this != (UI_EmoteHandler_o *)0x0) {
      while (__this_01.fields._8_8_ = pIVar13,
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
            __this_01.fields._current = pIVar14, method_00 = MethodInfo_Boolean_MoveNext,
            bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), lVar3 = MethodInfo_Void_Add
            , (char)bVar8 != '\0') {
        if (pIVar14 == (Il2CppObject *)0x0) goto label_043bdf8f;
        method_00 = pIVar14[1].monitor;
        piVar1 = (int32_t *)((long)&(__this->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        pSVar5 = (System_String_array *)(__this->fields).m_CachedPtr;
        if (pSVar5 == (System_String_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_043bdf7d;
        }
        uVar2 = *(uint *)&(__this->fields).m_CancellationTokenSource;
        if (uVar2 < (uint)pSVar5->max_length) {
          *(uint *)&(__this->fields).m_CancellationTokenSource = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = (System_String_o *)method_00;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)method_00,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      goto label_043bdf58;
    }
label_043bdf42:
    __this_03.fields._8_8_ = pIVar13;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_03.fields._current = pIVar14;
    method_00 = MethodInfo_Boolean_MoveNext;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
    if ((char)bVar8 == '\0') {
label_043bdf58:
      __this_04.fields._8_8_ = pIVar13;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
      __this_04.fields._current = pIVar14;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      return (System_Collections_Generic_List_string__o *)__this;
    }
label_043bdf87:
    if (pIVar14 != (Il2CppObject *)0x0) goto label_043bdfa2;
label_043bdf8f:
    local_28 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (state != 0) {
      pGVar6 = (__this->fields)._inGameManager;
      if (pGVar6 != (GameManagers_InGameManager_o *)0x0) {
        pCVar7 = (pGVar6->fields).CurrentCharacter;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          pSVar9 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)pSVar9,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
          return pSVar9;
        }
        pGVar6 = (__this->fields)._inGameManager;
        if ((pGVar6 != (GameManagers_InGameManager_o *)0x0) &&
           (pCVar7 = (pGVar6->fields).CurrentCharacter, pCVar7 != (Characters_BaseCharacter_o *)0x0)) {
          pSVar9 = (System_Collections_Generic_List_string__o *)
                   (*(pCVar7->klass->vtable)._59_get_EmoteActions.methodPtr)
                             (pCVar7,(pCVar7->klass->vtable)._59_get_EmoteActions.method);
          return pSVar9;
        }
      }
label_043bdf82:
      il2cpp_runtime_helper_022b2c90();
      goto label_043bdf87;
    }
    __this = (UI_EmoteHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    method_00 = MethodInfo_List_1_System_String;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,(MethodInfo_362B8B0 *)MethodInfo_List_1_System_String);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) goto label_043bdf82;
    pSVar4 = *(System_Collections_Generic_List_object__o **)(lVar3 + 0x18);
    method_00 = (MethodInfo *)0x0;
    if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto label_043bdf82;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar4,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
    pIVar13 = (Il2CppType *)local_38._8_8_;
    pIVar14 = local_28;
    if (__this != (UI_EmoteHandler_o *)0x0) {
      while (__this_00.fields._8_8_ = pIVar13,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
            __this_00.fields._current = pIVar14, method_00 = MethodInfo_Boolean_MoveNext,
            bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), (char)bVar8 != '\0')
      {
        if (pIVar14 == (Il2CppObject *)0x0) goto label_043bdf3d;
        item = UI_EmoteHandler__SanitizeText(pIVar14[1].monitor,method_00);
        lVar3 = MethodInfo_Void_Add;
        piVar1 = (int32_t *)((long)&(__this->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        pSVar5 = (System_String_array *)(__this->fields).m_CachedPtr;
        if (pSVar5 == (System_String_array *)0x0) goto label_043bdf7d;
        uVar2 = *(uint *)&(__this->fields).m_CancellationTokenSource;
        if (uVar2 < (uint)pSVar5->max_length) {
          *(uint *)&(__this->fields).m_CancellationTokenSource = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = item;
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      goto label_043bdf58;
    }
    __this_02.fields._index = local_38._8_4_;
    __this_02.fields._version = local_38._12_4_;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
    __this_02.fields._current = local_28;
    method_00 = MethodInfo_Boolean_MoveNext;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
    pIVar13 = (Il2CppType *)local_38._8_8_;
    pIVar14 = local_28;
    if ((char)bVar8 == '\0') goto label_043bdf58;
    if (local_28 == (Il2CppObject *)0x0) {
label_043bdf3d:
      il2cpp_runtime_helper_022b2c90();
      goto label_043bdf42;
    }
  }
  UI_EmoteHandler__SanitizeText(local_28[1].monitor,method_00);
  il2cpp_runtime_helper_022b2c90();
label_043bdfa2:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar3 = *plVar10;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar13;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_05.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar3 == 0) {
      return (System_Collections_Generic_List_string__o *)__this;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_06.fields._8_8_ = pIVar13;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
  __this_06.fields._current = pIVar14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar11._0_8_);
label_043bdf7d:
  il2cpp_runtime_helper_022b2c90();
  goto label_043bdf82;
}


// UI.EmoteHandler$$GetAvailablePopup
// il2cpp: UI_EmoteTextPopup_o* UI_EmoteHandler__GetAvailablePopup (UI_EmoteHandler_o* __this, System_Collections_Generic_List_EmoteTextPopup__o* popups, const MethodInfo* method);
// 0x43bd190

UI_EmoteTextPopup_o *
UI_EmoteHandler__GetAvailablePopup
          (UI_EmoteHandler_o *__this,System_Collections_Generic_List_EmoteTextPopup__o *popups,
          MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_05;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  UI_EmoteTextPopup_o *pUVar7;
  UI_EmoteTextPopup_o *__this_06;
  undefined1 local_38 [16];
  UI_EmoteTextPopup_o *local_28;
  
  if (g_data_057ae3c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Item);
    g_data_057ae3c3 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  pUVar7 = (UI_EmoteTextPopup_o *)0x0;
  if (popups != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
               (System_Collections_Generic_List_object__o *)popups,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
    pIVar6 = (Il2CppType *)local_38._8_8_;
    while( true ) {
      __this_06 = local_28;
      __this_00.fields._8_8_ = pIVar6;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
      __this_00.fields._current = (Il2CppObject *)__this_06;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
        __this_02.fields._current = (Il2CppObject *)__this_06;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
        goto label_043bd29d;
      }
      if (__this_06 == (UI_EmoteTextPopup_o *)0x0) break;
      pUVar7 = __this_06;
      __this_05 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_GameObject_o *)0x0) goto label_043bd2c8;
      bVar2 = UnityEngine_GameObject__get_activeSelf(__this_05,(MethodInfo *)0x0);
      local_28 = pUVar7;
      if ((char)bVar2 == '\0') {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
        __this_01.fields._current = (Il2CppObject *)pUVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
        return __this_06;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pUVar7 = __this_06;
label_043bd2c8:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
    __this_03.fields._current = (Il2CppObject *)pUVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar1 == 0) {
label_043bd29d:
      pUVar7 = (UI_EmoteTextPopup_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)popups,0,MethodInfo_EmoteTextPopup_get_Item);
      return pUVar7;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
  __this_04.fields._current = (Il2CppObject *)pUVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar4._0_8_);
}


// UI.EmoteHandler$$UpdatePopup
// il2cpp: void UI_EmoteHandler__UpdatePopup (UI_EmoteHandler_o* __this, UI_EmoteTextPopup_o* popup, bool inMenu, const MethodInfo* method);
// 0x43be810

void UI_EmoteHandler__UpdatePopup
               (UI_EmoteHandler_o *__this,UI_EmoteTextPopup_o *popup,bool_conflict inMenu,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  long lVar4;
  long lVar5;
  long *plVar6;
  Photon_Pun_PhotonView_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  undefined1 auVar7 [16];
  double dVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  bool_conflict bVar9;
  int32_t layerMask;
  UnityEngine_GameObject_o *__this_09;
  UnityEngine_Transform_o *pUVar10;
  Il2CppMethodPointer vtableDispatch;
  uint inMenu_00;
  MethodInfo *pMVar11;
  long *plVar12;
  Characters_BaseCharacter_o *pCVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar18;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 extraout_XMM1_Qa;
  float fVar23;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [12];
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o direction;
  System_Collections_Generic_List_Enumerator_T__c *pSVar28;
  Il2CppType *pIVar29;
  UI_EmoteTextPopup_o *pUVar30;
  undefined1 local_100 [16];
  UI_EmoteTextPopup_o *local_f0;
  Il2CppRGCTXData *pIStack_e8;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  
  plVar12 = (long *)__this;
  if (g_data_057ae3c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    plVar12 = &TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3c4 = '\x01';
  }
  if (popup == (UI_EmoteTextPopup_o *)0x0) goto label_043beee9;
  lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  fVar20 = (popup->fields).ShowTimeLeft;
  if ((char)(popup->fields).infinitePopup == '\0') {
    fVar23 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar20 = fVar20 - fVar23;
    (popup->fields).ShowTimeLeft = fVar20;
  }
  if ((0.0 < fVar20) && (auVar22 = ZEXT416(0), (char)inMenu == '\0')) {
    plVar12 = (long *)(popup->fields).Character;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      auVar22._8_8_ = extraout_XMM1_Qb;
      auVar22._0_8_ = extraout_XMM1_Qa;
    }
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)plVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      pCVar13 = (popup->fields).Character;
      if (((pCVar13 != (Characters_BaseCharacter_o *)0x0) &&
          (lVar5 = *(long *)&(pCVar13->fields).Dead, lVar5 != 0)) &&
         (plVar12 = *(long **)(lVar5 + 0x10),
         (Characters_BaseCharacter_o *)plVar12 != (Characters_BaseCharacter_o *)0x0)) {
        UVar27 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar12,(MethodInfo *)0x0);
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
          pUVar10 = *(UnityEngine_Transform_o **)(*(long *)(lVar4 + 0x28) + 0x10);
          plVar12 = (long *)0x0;
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            uVar1 = (popup->fields).Offset.fields.x;
            uVar3 = (popup->fields).Offset.fields.y;
            position.fields.x = UVar27.fields.x + (float)uVar1;
            position.fields.y = UVar27.fields.y + (float)uVar3;
            position.fields.z = UVar27.fields.z + (popup->fields).Offset.fields.z;
            UVar27 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
            }
            fVar24 = UVar27.fields.y - position.fields.y;
            fVar20 = UVar27.fields.z - position.fields.z;
            fVar23 = UVar27.fields.x - position.fields.x;
            plVar12 = (long *)TypeInfo_Math;
            if ((TypeInfo_Math->fields)._stepPhase == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar20 = fVar23 * fVar23 + fVar24 * fVar24 + fVar20 * fVar20;
            if (fVar20 < 0.0) {
              fVar20 = sqrtf(fVar20);
            }
            else {
              fVar20 = SQRT(fVar20);
            }
            if (500.0 < fVar20) {
              (*(popup->klass->vtable)._22_Hide.methodPtr)(popup);
              plVar12 = (long *)popup;
              __this_09 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
              if (__this_09 != (UnityEngine_GameObject_o *)0x0) {
                bVar9 = UnityEngine_GameObject__get_activeSelf(__this_09,(MethodInfo *)0x0);
                if ((char)bVar9 == '\0') {
                  return;
                }
                pUVar10 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
                plVar12 = *(long **)(lVar4 + 0x20);
                if ((Characters_BaseCharacter_o *)plVar12 != (Characters_BaseCharacter_o *)0x0) {
                  UVar27 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                     ((UnityEngine_Camera_o *)plVar12,position,(MethodInfo *)0x0);
                  popup = (UI_EmoteTextPopup_o *)0x0;
                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_position(pUVar10,UVar27,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            else if (*(long *)(lVar4 + 0x28) != 0) {
              pUVar10 = *(UnityEngine_Transform_o **)(*(long *)(lVar4 + 0x28) + 0x10);
              plVar12 = (long *)0x0;
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                UVar27 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
                if (g_data_057a6845 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a6845 = '\x01';
                }
                local_b8._0_4_ = position.fields.x - UVar27.fields.x;
                local_b8._4_4_ = position.fields.y - UVar27.fields.y;
                fVar23 = position.fields.z - UVar27.fields.z;
                fStack_b0 = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
                fStack_ac = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
                plVar12 = (long *)TypeInfo_Math;
                if ((TypeInfo_Math->fields)._stepPhase == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uVar18 = auVar22._8_4_;
                uVar19 = auVar22._12_4_;
                fVar24 = fVar23 * fVar23 +
                         (float)local_b8._4_4_ * (float)local_b8._4_4_ +
                         (float)local_b8._0_4_ * (float)local_b8._0_4_;
                if (fVar24 < 0.0) {
                  fVar24 = sqrtf(fVar24);
                  uVar18 = extraout_XMM0_Dc_01;
                  uVar19 = extraout_XMM0_Dd_01;
                  if (1e-05 < fVar24) goto label_043bebef;
label_043beac6:
                  if (g_data_057a65d5 == '\0') {
                    plVar12 = &TypeInfo_Vector3;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a65d5 = '\x01';
                  }
                  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  fVar24 = (float)uVar2;
                  fVar16 = (float)((ulong)uVar2 >> 0x20);
                  fVar23 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                  lVar5 = *(long *)(lVar4 + 0x28);
                }
                else {
                  fVar24 = SQRT(fVar24);
                  if (fVar24 <= 1e-05) goto label_043beac6;
label_043bebef:
                  fVar23 = fVar23 / fVar24;
                  auVar7._4_4_ = fVar24;
                  auVar7._0_4_ = fVar24;
                  auVar7._8_4_ = uVar18;
                  auVar7._12_4_ = uVar19;
                  auVar22 = divps(_local_b8,auVar7);
                  fVar24 = auVar22._0_4_;
                  fVar16 = auVar22._4_4_;
                  lVar5 = *(long *)(lVar4 + 0x28);
                }
                if (lVar5 != 0) {
                  plVar12 = (long *)0x0;
                  if (*(UnityEngine_Transform_o **)(lVar5 + 0x10) != (UnityEngine_Transform_o *)0x0) {
                    UVar27 = UnityEngine_Transform__get_forward
                                       (*(UnityEngine_Transform_o **)(lVar5 + 0x10),(MethodInfo *)0x0);
                    fVar21 = UVar27.fields.z;
                    fVar14 = UVar27.fields.x;
                    fVar17 = UVar27.fields.y;
                    if (g_data_057ac31a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      g_data_057ac31a = '\x01';
                    }
                    fVar25 = fVar21 * fVar21 + fVar17 * fVar17 + fVar14 * fVar14;
                    fVar15 = fVar23 * fVar23 + fVar16 * fVar16 + fVar24 * fVar24;
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      if (fVar15 * fVar25 < 0.0) goto label_043bed25;
label_043becd3:
                      fVar15 = SQRT(fVar15 * fVar25);
                      pCVar13 = TypeInfo_Math;
                    }
                    else {
                      if (0.0 <= fVar15 * fVar25) goto label_043becd3;
label_043bed25:
                      fVar15 = sqrtf(fVar15 * fVar25);
                      pCVar13 = TypeInfo_Math;
                    }
                    TypeInfo_Math = pCVar13;
                    if (1e-15 <= fVar15) {
                      fVar15 = (fVar21 * fVar23 + fVar16 * fVar17 + fVar24 * fVar14) / fVar15;
                      fVar14 = 1.0;
                      if (fVar15 <= 1.0) {
                        fVar14 = fVar15;
                      }
                      if ((pCVar13->fields)._stepPhase == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      dVar8 = acos((double)(float)(~-(uint)(-1.0 <= fVar15) & 0xbf800000 |
                                                  (uint)fVar14 & -(uint)(-1.0 <= fVar15)),
                                   (MethodInfo *)pCVar13);
                      if (90.0 < (float)dVar8 * 57.29578) goto label_043bee6a;
                    }
                    plVar12 = (long *)(popup->fields).Character;
                    if ((Characters_BaseCharacter_o *)plVar12 != (Characters_BaseCharacter_o *)0x0) {
                      bVar9 = Characters_BaseCharacter__IsMainCharacter
                                        ((Characters_BaseCharacter_o *)plVar12,(MethodInfo *)0x0);
                      if ((char)bVar9 == '\0') {
                        if (*(long *)(lVar4 + 0x28) != 0) {
                          pUVar10 = *(UnityEngine_Transform_o **)(*(long *)(lVar4 + 0x28) + 0x10);
                          plVar12 = (long *)0x0;
                          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                            UVar27 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
                            layerMask = UnityEngine_LayerMask__op_Implicit
                                                  ((UnityEngine_LayerMask_o)
                                                   (__this->fields).CullMask.fields.m_Mask,(MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            direction.fields.z = fVar23;
                            direction.fields.x = fVar24;
                            direction.fields.y = fVar16;
                            bVar9 = UnityEngine_Physics__Raycast_4e76f20
                                              (UVar27,direction,fVar20,layerMask,(MethodInfo *)0x0);
                            if ((char)bVar9 != '\0') goto label_043bee6a;
                            goto label_043bee8d;
                          }
                        }
                      }
                      else {
label_043bee8d:
                        plVar12 = (long *)0x0;
                        if (*(UnityEngine_Camera_o **)(lVar4 + 0x20) != (UnityEngine_Camera_o *)0x0) {
                          UVar27.fields.y = position.fields.y;
                          UVar27.fields.x = position.fields.x;
                          UVar27.fields.z = position.fields.z;
                          UVar27 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                             (*(UnityEngine_Camera_o **)(lVar4 + 0x20),UVar27,
                                              (MethodInfo *)0x0);
                          plVar12 = (long *)popup;
                          pUVar10 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
                          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__set_position(pUVar10,UVar27,(MethodInfo *)0x0);
                            vtableDispatch = (popup->klass->vtable)._21_Show.methodPtr;
                            pMVar11 = (popup->klass->vtable)._21_Show.method;
                            goto label_043bee7b;
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
label_043beee9:
      il2cpp_runtime_helper_022b2c90();
      pIStack_e8 = (Il2CppRGCTXData *)popup;
      if (g_data_057ae3c5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
        il2cpp_runtime_helper_023445d0();
        g_data_057ae3c5 = '\x01';
      }
      pSVar28 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
      pIVar29 = (Il2CppType *)0x0;
      pUVar30 = (UI_EmoteTextPopup_o *)0x0;
      fVar20 = *(float *)&(((Characters_BaseCharacter_o *)plVar12)->fields).field_0x2c;
      pMVar11 = (MethodInfo *)0x0;
      fVar23 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      *(float *)&(((Characters_BaseCharacter_o *)plVar12)->fields).field_0x2c = fVar20 - fVar23;
      bVar9 = UI_InGameMenu__InMenu(pMVar11);
      inMenu_00 = 1;
      if ((char)bVar9 == '\0') {
        plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (plVar6 != (long *)0x0) {
          method = (MethodInfo *)(ulong)*(byte *)(TypeInfo_InGameManager + 0x130);
          if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
             (*(long *)(*(long *)(*plVar6 + 200) + -8 + (long)method * 8) != TypeInfo_InGameManager)) goto label_043bf0e7;
          inMenu_00 = (uint)((int)plVar6[0xd] == 0);
          goto label_043beff6;
        }
      }
      else {
label_043beff6:
        __this_00 = (((Characters_BaseCharacter_o *)plVar12)->fields).pvCache;
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_100,
                     (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
          pSVar28 = (System_Collections_Generic_List_Enumerator_T__c *)local_100._0_8_;
          pIVar29 = (Il2CppType *)local_100._8_8_;
          pUVar30 = local_f0;
          while (__this_02.fields._8_8_ = pIVar29,
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar28,
                __this_02.fields._current = (Il2CppObject *)pUVar30,
                bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee0),
                (char)bVar9 != '\0') {
            UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar12,pUVar30,inMenu_00,method);
          }
          __this_03.fields._8_8_ = pIVar29;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar28;
          __this_03.fields._current = (Il2CppObject *)pUVar30;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee0);
          __this_01 = *(System_Collections_Generic_List_object__o **)
                       &(((Characters_BaseCharacter_o *)plVar12)->fields).FootstepsEnabled;
          if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_100,__this_01,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
            pSVar28 = (System_Collections_Generic_List_Enumerator_T__c *)local_100._0_8_;
            pIVar29 = (Il2CppType *)local_100._8_8_;
            pUVar30 = local_f0;
            while (__this_04.fields._8_8_ = pIVar29,
                  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar28,
                  __this_04.fields._current = (Il2CppObject *)pUVar30,
                  bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_04,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee0),
                  (char)bVar9 != '\0') {
              UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar12,pUVar30,inMenu_00,method);
            }
            __this_05.fields._8_8_ = pIVar29;
            __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar28;
            __this_05.fields._current = (Il2CppObject *)pUVar30;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee0);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
label_043bf0e7:
      auVar26 = il2cpp_runtime_helper_022b2fd0();
      if (auVar26._8_4_ == 1) {
        plVar12 = (long *)__cxa_begin_catch(auVar26._0_8_);
        lVar4 = *plVar12;
        __cxa_end_catch();
        __this_06.fields._8_8_ = pIVar29;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar28;
        __this_06.fields._current = (Il2CppObject *)pUVar30;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee0);
        if (lVar4 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar4);
        __this_08.fields._8_8_ = pIVar29;
        __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar28;
        __this_08.fields._current = (Il2CppObject *)pUVar30;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_08,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee0);
      }
      else {
        __this_07.fields._8_8_ = pIVar29;
        __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar28;
        __this_07.fields._current = (Il2CppObject *)pUVar30;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_07,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee0);
      }
      _Unwind_Resume(auVar26._0_8_);
    }
  }
label_043bee6a:
  vtableDispatch = (popup->klass->vtable)._55_HideImmediate.methodPtr;
  pMVar11 = (popup->klass->vtable)._55_HideImmediate.method;
label_043bee7b:
  (*vtableDispatch)(popup,pMVar11);
  return;
}


// UI.EmoteHandler$$LateUpdate
// il2cpp: void UI_EmoteHandler__LateUpdate (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x43beef0

void UI_EmoteHandler__LateUpdate(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar4;
  long *plVar5;
  MethodInfo *in_RCX;
  uint inMenu;
  MethodInfo *method_00;
  float fVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  UI_EmoteTextPopup_o *popup;
  undefined1 auStack_48 [16];
  UI_EmoteTextPopup_o *pUStack_38;
  
  if (g_data_057ae3c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3c5 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  popup = (UI_EmoteTextPopup_o *)0x0;
  fVar1 = (__this->fields)._currentEmoteCooldown;
  method_00 = (MethodInfo *)0x0;
  fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._currentEmoteCooldown = fVar1 - fVar6;
  bVar4 = UI_InGameMenu__InMenu(method_00);
  inMenu = 1;
  if ((char)bVar4 == '\0') {
    plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar5 != (long *)0x0) {
      in_RCX = (MethodInfo *)(ulong)*(byte *)(TypeInfo_InGameManager + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + -8 + (long)in_RCX * 8) != TypeInfo_InGameManager)) goto label_043bf0e7;
      inMenu = (uint)((int)plVar5[0xd] == 0);
      goto label_043beff6;
    }
  }
  else {
label_043beff6:
    pSVar2 = (__this->fields)._emoteTextPopups;
    if (pSVar2 != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                 (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
      pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
      pIVar9 = (Il2CppType *)auStack_48._8_8_;
      popup = pUStack_38;
      while (__this_00.fields._8_8_ = pIVar9,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
            __this_00.fields._current = (Il2CppObject *)popup,
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar4 != '\0')
      {
        UI_EmoteHandler__UpdatePopup(__this,popup,inMenu,in_RCX);
      }
      __this_01.fields._8_8_ = pIVar9;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
      __this_01.fields._current = (Il2CppObject *)popup;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      pSVar2 = (__this->fields)._emoteEmojiPopups;
      if (pSVar2 != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                   (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
        while (__this_02.fields._8_8_ = auStack_48._8_8_,
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_,
              __this_02.fields._current = (Il2CppObject *)pUStack_38,
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
              (char)bVar4 != '\0') {
          UI_EmoteHandler__UpdatePopup(__this,pUStack_38,inMenu,in_RCX);
        }
        __this_03.fields._8_8_ = auStack_48._8_8_;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
        __this_03.fields._current = (Il2CppObject *)pUStack_38;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043bf0e7:
  auVar7 = il2cpp_runtime_helper_022b2fd0();
  if (auVar7._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar9;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_04.fields._current = (Il2CppObject *)popup;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
    __this_06.fields._8_8_ = pIVar9;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_06.fields._current = (Il2CppObject *)popup;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  }
  else {
    __this_05.fields._8_8_ = pIVar9;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_05.fields._current = (Il2CppObject *)popup;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  }
  _Unwind_Resume(auVar7._0_8_);
}


// UI.EmoteHandler$$SanitizeText
// il2cpp: System_String_o* UI_EmoteHandler__SanitizeText (System_String_o* value, const MethodInfo* method);
// 0x43bcd70

System_String_o * UI_EmoteHandler__SanitizeText(System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  long lVar2;
  System_Collections_Generic_HashSet_int__o *__this;
  void *pvVar3;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_List_EmoteTextPopup__o *popups;
  UI_EmoteTextPopup_c *pUVar4;
  bool_conflict bVar5;
  UI_EmoteHandler_o *__this_01;
  System_String_o *pSVar6;
  UI_EmoteTextPopup_o *pUVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  Il2CppClass *character;
  UI_EmoteTextPopup_o *x;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  UI_EmoteTextPopup_o *pUVar8;
  UnityEngine_GameObject_o *__this_02;
  Characters_BaseCharacter_o *character_00;
  MethodInfo *method_00;
  Il2CppClass *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *pIVar9;
  MethodInfo *method_01;
  System_String_o **ppSVar10;
  Characters_BaseCharacter_o *pCVar11;
  Characters_BaseCharacter_o *pCVar12;
  uint viewId;
  UI_EmoteTextPopup_o *pUVar13;
  Il2CppClass **__this_03;
  long *unaff_R12;
  long *plVar14;
  UI_EmoteTextPopup_o *pUVar15;
  UI_EmoteTextPopup_o *unaff_R15;
  long *plVar16;
  undefined8 in_XMM1_Qa;
  undefined4 uVar17;
  undefined1 auVar18 [12];
  UnityEngine_Vector3_o UVar19;
  undefined8 uStack_58;
  UI_EmoteTextPopup_o *pUStack_50;
  System_String_o *pSStack_20;
  
  uVar17 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  if (g_data_057ae3c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    g_data_057ae3c6 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (UI_EmoteHandler_o *)Anticheat_ChatFilter__FilterBadWords(value,(MethodInfo *)0x0);
  pUVar8 = (UI_EmoteTextPopup_o *)0x0;
  pSVar6 = Anticheat_ChatFilter__FilterSizeTag((System_String_o *)__this_01,(MethodInfo *)0x0);
  if (pSVar6 != (System_String_o *)0x0) {
    if ((pSVar6->fields)._stringLength < 0x15) {
      return pSVar6;
    }
    pSVar6 = System_String__Substring_3af8da0(pSVar6,0,0x14,(MethodInfo *)0x0);
    return pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_20 = value;
  pUVar7 = UI_EmoteHandler__GetAvailablePopup
                     (__this_01,(__this_01->fields)._emoteTextPopups,(MethodInfo *)character_00);
  pCVar11 = character_00;
  UVar19 = UI_EmoteHandler__GetOffset(__this_01,character_00,method_00);
  viewId = (uint)__this_01;
  if (pUVar7 != (UI_EmoteTextPopup_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (pUVar7->klass->vtable)._59_Load.methodPtr;
    pSVar6 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (0x40400000,UVar19.fields._0_8_,CONCAT44(uVar17,UVar19.fields.z),pUVar7,pUVar8,
                        character_00,(pUVar7->klass->vtable)._59_Load.method,UNRECOVERED_JUMPTABLE_00);
    return pSVar6;
  }
  uStack_58 = il2cpp_runtime_helper_022b2c90();
  ppSVar10 = (System_String_o **)&uStack_58;
  pUVar15 = (UI_EmoteTextPopup_o *)(ulong)viewId;
  pUStack_50 = pUVar7;
  if (g_data_057ae3ba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae3ba = '\x01';
  }
  plVar16 = &TypeInfo_UIManager;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = *(UI_EmoteTextPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  plVar14 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar12 = (Characters_BaseCharacter_o *)0x0;
  pUVar13 = pUVar7;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var,bVar5);
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (pSVar6 = *(System_String_o **)(lVar2 + 0xc0), pSVar6 != (System_String_o *)0x0)) {
    if (*(char *)((long)&(pSVar6->fields)._stringLength + 1) == '\0') {
      return pSVar6;
    }
    if (*(int *)((long)&TypeInfo_InGameManager[1].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar7 = unaff_R15;
    pUVar13 = TypeInfo_InGameManager;
    if (unaff_R15 != (UI_EmoteTextPopup_o *)0x0) {
      __this = (TypeInfo_InGameManager->fields)._transform[1].monitor;
      pUVar13 = (UI_EmoteTextPopup_o *)0x0;
      if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar5 = System_Collections_Generic_HashSet_int___Contains
                          (__this,*(int32_t *)&(unaff_R15->fields).m_CancellationTokenSource,MethodInfo_Boolean_Contains);
        if ((char)bVar5 != '\0') {
          return (System_String_o *)CONCAT44(extraout_var_00,bVar5);
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pCVar12 = (Characters_BaseCharacter_o *)0x0;
        pUVar13 = pUVar15;
        character = (Il2CppClass *)Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        if (((character != (Il2CppClass *)0x0) &&
            (pvVar3 = (character->_1).interopData, pvVar3 != (void *)0x0)) &&
           (pSVar6 = *(System_String_o **)((long)pvVar3 + 0x20), pSVar6 != (System_String_o *)0x0)) {
          if (unaff_R15 != pSVar6[5].monitor) {
            return pSVar6;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          pUVar13 = (UI_EmoteTextPopup_o *)0x0;
          if (__this_00 != (UnityEngine_Component_o *)0x0) {
            x = (UI_EmoteTextPopup_o *)UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar5 == '\0') {
              return (System_String_o *)CONCAT44(extraout_var_01,bVar5);
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar12 = (Characters_BaseCharacter_o *)0x0;
            pUVar13 = x;
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              return (System_String_o *)CONCAT44(extraout_var_02,bVar5);
            }
            pUVar15 = (UI_EmoteTextPopup_o *)0x0;
            if (x != (UI_EmoteTextPopup_o *)0x0) {
              ppSVar10 = &pSStack_20;
              pUVar7 = pUStack_50;
              plVar14 = unaff_R12;
              plVar16 = (long *)character_00;
              goto UI_EmoteHandler__ShowEmoteEmoji;
            }
          }
        }
      }
    }
  }
  pUVar8 = pUVar15;
  x = pUVar13;
  pCVar11 = pCVar12;
  il2cpp_runtime_helper_022b2c90();
  character = extraout_RDX;
UI_EmoteHandler__ShowEmoteEmoji:
  *(long **)((long)ppSVar10 + -8) = plVar16;
  *(UI_EmoteTextPopup_o **)((long)ppSVar10 + -0x10) = pUVar8;
  *(UI_EmoteTextPopup_o **)((long)ppSVar10 + -0x18) = pUVar7;
  pIVar9 = character;
  __this_03 = (Il2CppClass **)x;
  if (g_data_057ae3bb == '\0') {
    __this_03 = &TypeInfo_EmoteEmojiPopup;
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x43bd0d3;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3bb = '\x01';
    pIVar9 = extraout_RDX_00;
  }
  popups = (System_Collections_Generic_List_EmoteTextPopup__o *)(x->fields).DoublePanelLeft;
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x43bd0e3;
  pUVar8 = UI_EmoteHandler__GetAvailablePopup((UI_EmoteHandler_o *)__this_03,popups,(MethodInfo *)pIVar9);
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x43bd0ee;
  pIVar9 = character;
  UVar19 = UI_EmoteHandler__GetOffset
                     ((UI_EmoteHandler_o *)__this_03,(Characters_BaseCharacter_o *)character,method_01);
  if (pUVar8 != (UI_EmoteTextPopup_o *)0x0) {
    bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
    if ((bVar1 <= (pUVar8->klass->_2).naturalAligment) &&
       ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
      pUVar4 = pUVar8->klass;
      bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
        UNRECOVERED_JUMPTABLE_00 = (pUVar4->vtable)._59_Load.methodPtr;
        pSVar6 = (System_String_o *)
                 (*UNRECOVERED_JUMPTABLE_00)
                           (0x40400000,UVar19.fields._0_8_,CONCAT44(uVar17,UVar19.fields.z),pUVar8,pCVar11,
                            character,(pUVar4->vtable)._59_Load.method,UNRECOVERED_JUMPTABLE_00);
        return pSVar6;
      }
    }
    *(undefined8 *)((long)ppSVar10 + -0x20) = 0x43bd17c;
    pIVar9 = TypeInfo_EmoteEmojiPopup;
    il2cpp_runtime_helper_022b2fd0(pUVar8);
  }
  *(undefined8 *)((long)ppSVar10 + -0x20) = 0x43bd181;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppClass **)((long)ppSVar10 + -0x20) = character;
  *(Characters_BaseCharacter_o **)((long)ppSVar10 + -0x28) = pCVar11;
  *(long **)((long)ppSVar10 + -0x30) = plVar14;
  *(UI_EmoteTextPopup_o **)((long)ppSVar10 + -0x38) = pUVar8;
  if (g_data_057ae3c3 == '\0') {
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd1b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd1bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd1cb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd1d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd1e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Item);
    g_data_057ae3c3 = '\x01';
  }
  *(undefined8 *)((long)ppSVar10 + -0x70) = 0;
  *(undefined8 *)((long)ppSVar10 + -0x68) = 0;
  *(undefined8 *)((long)ppSVar10 + -0x60) = 0;
  if (pIVar9 != (Il2CppClass *)0x0) {
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd21a;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)((long)ppSVar10 + -0x50),
               (System_Collections_Generic_List_object__o *)pIVar9,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    *(undefined8 *)((long)ppSVar10 + -0x60) = *(undefined8 *)((long)ppSVar10 + -0x40);
    *(undefined8 *)((long)ppSVar10 + -0x70) = *(undefined8 *)((long)ppSVar10 + -0x50);
    *(undefined8 *)((long)ppSVar10 + -0x68) = *(undefined8 *)((long)ppSVar10 + -0x48);
    while( true ) {
      *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd24c;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)
                         *(System_Collections_Generic_List_Enumerator_object__Fields *)
                          ((long)ppSVar10 + -0x70),(MethodInfo_321A1D0 *)((long)ppSVar10 + -0x70));
      if ((char)bVar5 == '\0') {
        *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd29d;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppSVar10 + -0x70),
                   (MethodInfo_321A1C0 *)((long)ppSVar10 + -0x70));
        goto label_043bd29d;
      }
      pSVar6 = *(System_String_o **)((long)ppSVar10 + -0x60);
      if (pSVar6 == (System_String_o *)0x0) break;
      *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd264;
      __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar6,(MethodInfo *)0x0);
      if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_043bd2c8;
      *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd273;
      bVar5 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd289;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppSVar10 + -0x70),
                   (MethodInfo_321A1C0 *)((long)ppSVar10 + -0x70));
        return pSVar6;
      }
    }
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd2c8;
    il2cpp_runtime_helper_022b2c90();
label_043bd2c8:
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd2cd;
    il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd2d2;
  auVar18 = il2cpp_runtime_helper_022b2c90();
  if (auVar18._8_4_ == 1) {
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd30a;
    plVar16 = (long *)__cxa_begin_catch(auVar18._0_8_);
    lVar2 = *plVar16;
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd312;
    __cxa_end_catch();
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd324;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppSVar10 + -0x70),
               (MethodInfo_321A1C0 *)((long)ppSVar10 + -0x70));
    if (lVar2 == 0) {
label_043bd29d:
      *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd2b1;
      pSVar6 = (System_String_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pIVar9,0,MethodInfo_EmoteTextPopup_get_Item);
      return pSVar6;
    }
    *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd335;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd34e;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)ppSVar10 + -0x70),
             (MethodInfo_321A1C0 *)((long)ppSVar10 + -0x70));
  *(undefined8 *)((long)ppSVar10 + -0x78) = 0x43bd35b;
  _Unwind_Resume(auVar18._0_8_);
}


// UI.EmoteHandler$$.ctor
// il2cpp: void UI_EmoteHandler___ctor (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x43bf1d0

void UI_EmoteHandler___ctor(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  UnityEngine_Object_o *x;
  Settings_ListSetting_T__o *pSVar3;
  GameManagers_InGameManager_o *pGVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  double dVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar8;
  int32_t iVar9;
  UnityEngine_LayerMask_o UVar10;
  Settings_BaseSetting_o *pSVar11;
  System_Object_array *parameters;
  Il2CppObject *pIVar12;
  long lVar13;
  undefined8 *puVar14;
  System_Collections_Generic_List_object__o *__this_07;
  Il2CppRGCTXData *pIVar15;
  UnityEngine_GameObject_o *__this_08;
  UnityEngine_Transform_o *pUVar16;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar17;
  System_Int32_array *layers;
  Il2CppMethodPointer vtableDispatch;
  System_Object_array *in_RCX;
  char extraout_DL;
  Il2CppRGCTXData *__this_09;
  uint uVar18;
  MethodInfo *pMVar19;
  long *plVar20;
  Il2CppRGCTXData *method_00;
  long lVar21;
  MethodInfo_362B8B0 **ppMVar22;
  Photon_Pun_PhotonView_o *__this_10;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar27;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined8 extraout_XMM1_Qa;
  float fVar32;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar35 [12];
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o direction;
  System_Collections_Generic_List_Enumerator_T__c *pSVar37;
  Il2CppType *pIVar38;
  UI_EmoteTextPopup_o *pUVar39;
  undefined1 auStack_160 [16];
  UI_EmoteTextPopup_o *pUStack_150;
  Il2CppRGCTXData *pIStack_148;
  _union_249689 _Stack_140;
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  
  if (g_data_057ae3c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_EmoteTextPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_EmoteTextPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ae3c7 = '\x01';
  }
  pSVar17 = (System_Collections_Generic_List_EmoteTextPopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_EmoteTextPopup);
  ppMVar22 = &MethodInfo_List_1_UI_EmoteTextPopup;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar17,MethodInfo_List_1_UI_EmoteTextPopup);
  (__this->fields)._emoteTextPopups = pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._emoteTextPopups,pSVar17);
  pSVar17 = (System_Collections_Generic_List_EmoteTextPopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_EmoteTextPopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar17,MethodInfo_List_1_UI_EmoteTextPopup);
  (__this->fields)._emoteEmojiPopups = pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._emoteEmojiPopups,pSVar17);
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar21 = TypeInfo_PhysicsLayer;
  if (layers != (System_Int32_array *)0x0) {
    uVar18 = (uint)layers->max_length;
    if (uVar18 != 0) {
      in_RCX = *(System_Object_array **)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)&((Il2CppType *)in_RCX->m_Items)[1].field_0xc;
      if ((uVar18 != 1) && (layers->m_Items[1] = ((Il2CppType *)in_RCX->m_Items)[1].bits, 2 < uVar18)) {
        layers->m_Items[2] = *(int32_t *)&in_RCX->bounds;
        UVar10 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        (__this->fields).CullMask.fields.m_Mask = (int32_t)UVar10.fields.m_Mask;
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
    il2cpp_runtime_helper_023445d0(&"EmoteEmojiRPC");
    il2cpp_runtime_helper_023445d0(&"EmoteTextRPC");
    g_data_057ae3c1 = '\x01';
  }
  if (*(int *)(lVar21 + 0x38) != 2) {
    if (*(float *)(lVar21 + 0x3c) <= 0.0) {
      *(undefined4 *)(lVar21 + 0x3c) = 0x40400000;
      goto label_043be339;
    }
    goto label_043be762;
  }
label_043be339:
  if ((*(long *)(lVar21 + 0x48) == 0) || (plVar20 = *(long **)(lVar21 + 0x30), plVar20 == (long *)0x0))
  goto label_043be7e8;
  in_RCX = (System_Object_array *)*plVar20;
  if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_WheelPopup + 0x130)) ||
     (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
     *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_WheelPopup + 0x130) * 8 + -0x28) != TypeInfo_WheelPopup)) {
label_043be7ed:
    pSVar11 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_022b2fd0();
label_043be7f2:
    il2cpp_runtime_helper_022b2fd0(pSVar11);
label_043be7fa:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    x = *(UnityEngine_Object_o **)(*(long *)(lVar21 + 0x48) + 0x70);
    iVar9 = (int32_t)plVar20[0x17];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') goto label_043be762;
    iVar2 = *(int *)(lVar21 + 0x38);
    if (iVar2 == 2) {
      if ((x != (UnityEngine_Object_o *)0x0) && (lVar13 = (*x->klass[3]._1.fields)(x), lVar13 != 0)) {
        if (iVar9 < *(int *)(lVar13 + 0x18)) {
          __this_07 = (System_Collections_Generic_List_object__o *)(*x->klass[3]._1.fields)(x);
          if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto label_043be7e8;
          pIVar12 = System_Collections_Generic_List_object___get_Item(__this_07,iVar9,MethodInfo_String_get_Item);
          in_RCX = (System_Object_array *)x->klass;
          (**(code **)((long)((Il2CppType *)in_RCX->m_Items + 0x57) + 8))
                    (x,pIVar12,((Il2CppType *)in_RCX->m_Items)[0x58].data);
        }
label_043be762:
        plVar20 = *(long **)(lVar21 + 0x30);
joined_r0x043be769:
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x298))();
          *(undefined1 *)(lVar21 + 0x40) = 0;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar20 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar20 != (long *)0x0) {
            in_RCX = (System_Object_array *)(ulong)*(byte *)(TypeInfo_InGameMenu + 0x130);
            if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar20 + 0x130)) &&
               (*(long *)(*(long *)(*plVar20 + 200) + -8 + (long)in_RCX * 8) == TypeInfo_InGameMenu)) {
              *(undefined1 *)(plVar20 + 0x2f) = 1;
              return;
            }
            goto label_043be7ed;
          }
        }
      }
label_043be7e8:
      il2cpp_runtime_helper_022b2c90();
      goto label_043be7ed;
    }
    if (iVar2 != 1) {
      if (iVar2 != 0) goto label_043be762;
      lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
      if (((lVar13 == 0) ||
          (pSVar3 = *(Settings_ListSetting_T__o **)(lVar13 + 0x20), pSVar3 == (Settings_ListSetting_T__o *)0x0
          )) || (pSVar11 = Settings_ListSetting_object___GetItemAt(pSVar3,iVar9,MethodInfo_BaseSetting_GetItemAt),
                pSVar11 == (Settings_BaseSetting_o *)0x0)) goto label_043be7e8;
      in_RCX = (System_Object_array *)pSVar11->klass;
      if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_StringSetting + 0x130)) ||
         (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
         *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_StringSetting + 0x130) * 8 + -0x28) != TypeInfo_StringSetting
         )) goto label_043be7f2;
      ppMVar22 = pSVar11[1].monitor;
      __this_10 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
      if (((x == (UnityEngine_Object_o *)0x0) ||
          ((lVar13 = x[4].fields.m_CachedPtr, lVar13 == 0 || (*(long *)(lVar13 + 0x20) == 0)))) ||
         (pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), parameters == (System_Object_array *)0x0
         )) goto label_043be7e8;
      if ((pIVar12 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar12), lVar13 == 0))
      goto label_043be7ff;
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar12;
        il2cpp_runtime_helper_022b4080(parameters->m_Items);
        if (((Il2CppObject *)ppMVar22 != (Il2CppObject *)0x0) &&
           (lVar13 = il2cpp_runtime_helper_023051f0(ppMVar22), lVar13 == 0)) goto label_043be7ff;
        if (1 < (uint)parameters->max_length) {
          ((_union_249689 *)(parameters->m_Items + 1))->genericMethod = ppMVar22;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
          if (__this_10 != (Photon_Pun_PhotonView_o *)0x0) {
            puVar14 = &"EmoteTextRPC";
            goto label_043be6d1;
          }
          goto label_043be7e8;
        }
      }
      goto label_043be7fa;
    }
    lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
    if (((lVar13 == 0) ||
        (pSVar3 = *(Settings_ListSetting_T__o **)(lVar13 + 0x28), pSVar3 == (Settings_ListSetting_T__o *)0x0))
       || (pSVar11 = Settings_ListSetting_object___GetItemAt(pSVar3,iVar9,MethodInfo_BaseSetting_GetItemAt),
          pSVar11 == (Settings_BaseSetting_o *)0x0)) goto label_043be7e8;
    in_RCX = (System_Object_array *)pSVar11->klass;
    if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_StringSetting + 0x130)) ||
       (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
       *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_StringSetting + 0x130) * 8 + -0x28) != TypeInfo_StringSetting))
    goto label_043be7f2;
    ppMVar22 = pSVar11[1].monitor;
    __this_10 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (((x == (UnityEngine_Object_o *)0x0) ||
        ((lVar13 = x[4].fields.m_CachedPtr, lVar13 == 0 || (*(long *)(lVar13 + 0x20) == 0)))) ||
       (pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), parameters == (System_Object_array *)0x0))
    goto label_043be7e8;
    if ((pIVar12 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar12), lVar13 != 0)) {
      if ((int)parameters->max_length == 0) goto label_043be7fa;
      parameters->m_Items[0] = pIVar12;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (((Il2CppObject *)ppMVar22 != (Il2CppObject *)0x0) &&
         (lVar13 = il2cpp_runtime_helper_023051f0(ppMVar22), lVar13 == 0)) goto label_043be7ff;
      if ((uint)parameters->max_length < 2) goto label_043be7fa;
      ((_union_249689 *)(parameters->m_Items + 1))->genericMethod = ppMVar22;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
      if (__this_10 == (Photon_Pun_PhotonView_o *)0x0) goto label_043be7e8;
      puVar14 = &"EmoteEmojiRPC";
label_043be6d1:
      Photon_Pun_PhotonView__RPC(__this_10,(System_String_o *)*puVar14,0,parameters,(MethodInfo *)0x0);
      plVar20 = *(long **)(lVar21 + 0x30);
      in_RCX = parameters;
      goto joined_r0x043be769;
    }
  }
label_043be7ff:
  pIVar15 = (Il2CppRGCTXData *)il2cpp_runtime_helper_0231b270();
  __this_09 = (Il2CppRGCTXData *)0x0;
  il2cpp_runtime_helper_022b2b10();
  plVar20 = (long *)pIVar15;
  if (g_data_057ae3c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    plVar20 = &TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3c4 = '\x01';
  }
  if (__this_09 == (Il2CppRGCTXData *)0x0) goto label_043beee9;
  lVar21 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  fVar29 = *(float *)(__this_09 + 0x18);
  if (*(char *)((long)__this_09 + 0xdc) == '\0') {
    fVar32 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar29 = fVar29 - fVar32;
    *(float *)(__this_09 + 0x18) = fVar29;
  }
  if ((0.0 < fVar29) && (auVar31 = ZEXT416(0), extraout_DL == '\0')) {
    plVar20 = (long *)__this_09[0x19].method;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      auVar31._8_8_ = extraout_XMM1_Qb;
      auVar31._0_8_ = extraout_XMM1_Qa;
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)plVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      if (((__this_09[0x19].klass != (Il2CppClass *)0x0) &&
          (pGVar4 = ((__this_09[0x19].klass)->_1).interopData, pGVar4 != (GameManagers_InGameManager_o *)0x0))
         && (plVar20 = (long *)(pGVar4->fields).m_CachedPtr,
            (Il2CppRGCTXData *)plVar20 != (Il2CppRGCTXData *)0x0)) {
        UVar36 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar20,(MethodInfo *)0x0);
        if ((lVar21 != 0) && (*(long *)(lVar21 + 0x28) != 0)) {
          pUVar16 = *(UnityEngine_Transform_o **)(*(long *)(lVar21 + 0x28) + 0x10);
          plVar20 = (long *)0x0;
          if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
            position.fields.x = UVar36.fields.x + SUB84(__this_09[0x1a],0);
            position.fields.y = UVar36.fields.y + SUB84(__this_09[0x1a],4);
            position.fields.z = UVar36.fields.z + *(float *)(__this_09 + 0x1b);
            UVar36 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
            }
            fVar33 = UVar36.fields.y - position.fields.y;
            fVar29 = UVar36.fields.z - position.fields.z;
            fVar32 = UVar36.fields.x - position.fields.x;
            plVar20 = (long *)TypeInfo_Math;
            if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar29 = fVar32 * fVar32 + fVar33 * fVar33 + fVar29 * fVar29;
            if (fVar29 < 0.0) {
              fVar29 = sqrtf(fVar29);
            }
            else {
              fVar29 = SQRT(fVar29);
            }
            if (500.0 < fVar29) {
              (*__this_09->klass->vtable[0x16].methodPtr)(__this_09);
              plVar20 = (long *)__this_09;
              __this_08 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
              if (__this_08 != (UnityEngine_GameObject_o *)0x0) {
                bVar8 = UnityEngine_GameObject__get_activeSelf(__this_08,(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  return;
                }
                pUVar16 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
                plVar20 = *(long **)(lVar21 + 0x20);
                if ((Il2CppRGCTXData *)plVar20 != (Il2CppRGCTXData *)0x0) {
                  UVar36 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                     ((UnityEngine_Camera_o *)plVar20,position,(MethodInfo *)0x0);
                  __this_09 = (Il2CppRGCTXData *)0x0;
                  if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_position(pUVar16,UVar36,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            else if (*(long *)(lVar21 + 0x28) != 0) {
              pUVar16 = *(UnityEngine_Transform_o **)(*(long *)(lVar21 + 0x28) + 0x10);
              plVar20 = (long *)0x0;
              if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                UVar36 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                if (g_data_057a6845 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a6845 = '\x01';
                }
                auStack_118._0_4_ = position.fields.x - UVar36.fields.x;
                auStack_118._4_4_ = position.fields.y - UVar36.fields.y;
                fVar32 = position.fields.z - UVar36.fields.z;
                fStack_110 = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
                fStack_10c = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
                plVar20 = (long *)TypeInfo_Math;
                if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uVar27 = auVar31._8_4_;
                uVar28 = auVar31._12_4_;
                fVar33 = fVar32 * fVar32 +
                         (float)auStack_118._4_4_ * (float)auStack_118._4_4_ +
                         (float)auStack_118._0_4_ * (float)auStack_118._0_4_;
                if (fVar33 < 0.0) {
                  fVar33 = sqrtf(fVar33);
                  uVar27 = extraout_XMM0_Dc_01;
                  uVar28 = extraout_XMM0_Dd_01;
                  if (1e-05 < fVar33) goto label_043bebef;
label_043beac6:
                  if (g_data_057a65d5 == '\0') {
                    plVar20 = &TypeInfo_Vector3;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a65d5 = '\x01';
                  }
                  uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  fVar33 = (float)uVar1;
                  fVar25 = (float)((ulong)uVar1 >> 0x20);
                  fVar32 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                  lVar13 = *(long *)(lVar21 + 0x28);
                }
                else {
                  fVar33 = SQRT(fVar33);
                  if (fVar33 <= 1e-05) goto label_043beac6;
label_043bebef:
                  fVar32 = fVar32 / fVar33;
                  auVar6._4_4_ = fVar33;
                  auVar6._0_4_ = fVar33;
                  auVar6._8_4_ = uVar27;
                  auVar6._12_4_ = uVar28;
                  auVar31 = divps(_auStack_118,auVar6);
                  fVar33 = auVar31._0_4_;
                  fVar25 = auVar31._4_4_;
                  lVar13 = *(long *)(lVar21 + 0x28);
                }
                if (lVar13 != 0) {
                  plVar20 = (long *)0x0;
                  if (*(UnityEngine_Transform_o **)(lVar13 + 0x10) != (UnityEngine_Transform_o *)0x0) {
                    UVar36 = UnityEngine_Transform__get_forward
                                       (*(UnityEngine_Transform_o **)(lVar13 + 0x10),(MethodInfo *)0x0);
                    fVar30 = UVar36.fields.z;
                    fVar23 = UVar36.fields.x;
                    fVar26 = UVar36.fields.y;
                    if (g_data_057ac31a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      g_data_057ac31a = '\x01';
                    }
                    fVar34 = fVar30 * fVar30 + fVar26 * fVar26 + fVar23 * fVar23;
                    fVar24 = fVar32 * fVar32 + fVar25 * fVar25 + fVar33 * fVar33;
                    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      if (fVar24 * fVar34 < 0.0) goto label_043bed25;
label_043becd3:
                      fVar24 = SQRT(fVar24 * fVar34);
                      method_00 = TypeInfo_Math;
                    }
                    else {
                      if (0.0 <= fVar24 * fVar34) goto label_043becd3;
label_043bed25:
                      fVar24 = sqrtf(fVar24 * fVar34);
                      method_00 = TypeInfo_Math;
                    }
                    TypeInfo_Math = method_00;
                    if (1e-15 <= fVar24) {
                      fVar24 = (fVar30 * fVar32 + fVar25 * fVar26 + fVar33 * fVar23) / fVar24;
                      fVar23 = 1.0;
                      if (fVar24 <= 1.0) {
                        fVar23 = fVar24;
                      }
                      if (*(int *)((long)method_00 + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      dVar7 = acos((double)(float)(~-(uint)(-1.0 <= fVar24) & 0xbf800000 |
                                                  (uint)fVar23 & -(uint)(-1.0 <= fVar24)),
                                   (MethodInfo *)method_00);
                      if (90.0 < (float)dVar7 * 57.29578) goto label_043bee6a;
                    }
                    plVar20 = (long *)__this_09[0x19].method;
                    if ((Il2CppRGCTXData *)plVar20 != (Il2CppRGCTXData *)0x0) {
                      bVar8 = Characters_BaseCharacter__IsMainCharacter
                                        ((Characters_BaseCharacter_o *)plVar20,(MethodInfo *)0x0);
                      if ((char)bVar8 == '\0') {
                        if (*(long *)(lVar21 + 0x28) != 0) {
                          pUVar16 = *(UnityEngine_Transform_o **)(*(long *)(lVar21 + 0x28) + 0x10);
                          plVar20 = (long *)0x0;
                          if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                            UVar36 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                            iVar9 = UnityEngine_LayerMask__op_Implicit
                                              ((UnityEngine_LayerMask_Fields)
                                               *(UnityEngine_LayerMask_Fields *)(pIVar15 + 10),
                                               (MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            direction.fields.z = fVar32;
                            direction.fields.x = fVar33;
                            direction.fields.y = fVar25;
                            bVar8 = UnityEngine_Physics__Raycast_4e76f20
                                              (UVar36,direction,fVar29,iVar9,(MethodInfo *)0x0);
                            if ((char)bVar8 != '\0') goto label_043bee6a;
                            goto label_043bee8d;
                          }
                        }
                      }
                      else {
label_043bee8d:
                        plVar20 = (long *)0x0;
                        if (*(UnityEngine_Camera_o **)(lVar21 + 0x20) != (UnityEngine_Camera_o *)0x0) {
                          UVar36.fields.y = position.fields.y;
                          UVar36.fields.x = position.fields.x;
                          UVar36.fields.z = position.fields.z;
                          UVar36 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                             (*(UnityEngine_Camera_o **)(lVar21 + 0x20),UVar36,
                                              (MethodInfo *)0x0);
                          plVar20 = (long *)__this_09;
                          pUVar16 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
                          if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__set_position(pUVar16,UVar36,(MethodInfo *)0x0);
                            vtableDispatch = __this_09->klass->vtable[0x15].methodPtr;
                            pMVar19 = __this_09->klass->vtable[0x15].method;
                            goto label_043bee7b;
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
label_043beee9:
      il2cpp_runtime_helper_022b2c90();
      pIStack_148 = __this_09;
      _Stack_140 = (_union_249689)ppMVar22;
      if (g_data_057ae3c5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
        il2cpp_runtime_helper_023445d0();
        g_data_057ae3c5 = '\x01';
      }
      pSVar37 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
      pIVar38 = (Il2CppType *)0x0;
      pUVar39 = (UI_EmoteTextPopup_o *)0x0;
      fVar29 = *(float *)((long)plVar20 + 0x3c);
      pMVar19 = (MethodInfo *)0x0;
      fVar32 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      *(float *)((long)plVar20 + 0x3c) = fVar29 - fVar32;
      bVar8 = UI_InGameMenu__InMenu(pMVar19);
      uVar18 = 1;
      if ((char)bVar8 == '\0') {
        plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (plVar5 != (long *)0x0) {
          in_RCX = (System_Object_array *)(ulong)*(byte *)(TypeInfo_InGameManager + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + -8 + (long)in_RCX * 8) != TypeInfo_InGameManager)) goto label_043bf0e7;
          uVar18 = (uint)((int)plVar5[0xd] == 0);
          goto label_043beff6;
        }
      }
      else {
label_043beff6:
        if ((Photon_Pun_PhotonView_o *)((Il2CppRGCTXData *)(plVar20 + 4))->method !=
            (Photon_Pun_PhotonView_o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_160,
                     (System_Collections_Generic_List_object__o *)((Il2CppRGCTXData *)(plVar20 + 4))->method,
                     MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
          pSVar37 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_160._0_8_;
          pIVar38 = (Il2CppType *)auStack_160._8_8_;
          pUVar39 = pUStack_150;
          while (__this_00.fields._8_8_ = pIVar38,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar37,
                __this_00.fields._current = (Il2CppObject *)pUVar39,
                bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe80),
                (char)bVar8 != '\0') {
            UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar20,pUVar39,uVar18,(MethodInfo *)in_RCX);
          }
          __this_01.fields._8_8_ = pIVar38;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar37;
          __this_01.fields._current = (Il2CppObject *)pUVar39;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe80);
          if (((Il2CppRGCTXData *)(plVar20 + 5))->method != (MethodInfo *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_160,
                       (System_Collections_Generic_List_object__o *)((Il2CppRGCTXData *)(plVar20 + 5))->method
                       ,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
            pSVar37 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_160._0_8_;
            pIVar38 = (Il2CppType *)auStack_160._8_8_;
            pUVar39 = pUStack_150;
            while (__this_02.fields._8_8_ = pIVar38,
                  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar37,
                  __this_02.fields._current = (Il2CppObject *)pUVar39,
                  bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe80),
                  (char)bVar8 != '\0') {
              UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar20,pUVar39,uVar18,(MethodInfo *)in_RCX);
            }
            __this_03.fields._8_8_ = pIVar38;
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar37;
            __this_03.fields._current = (Il2CppObject *)pUVar39;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe80);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
label_043bf0e7:
      auVar35 = il2cpp_runtime_helper_022b2fd0();
      if (auVar35._8_4_ == 1) {
        plVar20 = (long *)__cxa_begin_catch(auVar35._0_8_);
        lVar21 = *plVar20;
        __cxa_end_catch();
        __this_04.fields._8_8_ = pIVar38;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar37;
        __this_04.fields._current = (Il2CppObject *)pUVar39;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe80);
        if (lVar21 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar21);
        __this_06.fields._8_8_ = pIVar38;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar37;
        __this_06.fields._current = (Il2CppObject *)pUVar39;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe80);
      }
      else {
        __this_05.fields._8_8_ = pIVar38;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar37;
        __this_05.fields._current = (Il2CppObject *)pUVar39;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe80);
      }
      _Unwind_Resume(auVar35._0_8_);
    }
  }
label_043bee6a:
  vtableDispatch = __this_09->klass->vtable[0x37].methodPtr;
  pMVar19 = __this_09->klass->vtable[0x37].method;
label_043bee7b:
  (*vtableDispatch)(__this_09,pMVar19);
  return;
}


// UI.EmoteHandler$$<SetEmoteWheel>b__25_0
// il2cpp: void UI_EmoteHandler___SetEmoteWheel_b__25_0 (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x43bf310

void UI_EmoteHandler___SetEmoteWheel_b__25_0(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  GameManagers_InGameManager_o *pGVar3;
  UI_BasePopup_o *pUVar4;
  Characters_BaseCharacter_o *x;
  Settings_ListSetting_T__o *pSVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  double dVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar10;
  int32_t iVar11;
  Settings_BaseSetting_o *pSVar12;
  System_Object_array *parameters;
  Il2CppObject *pIVar13;
  long lVar14;
  undefined8 *puVar15;
  System_Collections_Generic_List_object__o *__this_07;
  Il2CppRGCTXData *pIVar16;
  UnityEngine_GameObject_o *__this_08;
  UnityEngine_Transform_o *pUVar17;
  Il2CppMethodPointer vtableDispatch;
  System_Object_array *in_RCX;
  char extraout_DL;
  Il2CppRGCTXData *__this_09;
  uint inMenu;
  MethodInfo *pMVar18;
  long *plVar19;
  Il2CppRGCTXData *method_00;
  _union_249689 unaff_R12;
  Photon_Pun_PhotonView_o *__this_10;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar24;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined8 extraout_XMM1_Qa;
  float fVar29;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar28 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar32 [12];
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o direction;
  System_Collections_Generic_List_Enumerator_T__c *pSVar34;
  Il2CppType *pIVar35;
  UI_EmoteTextPopup_o *pUVar36;
  undefined1 auStack_138 [16];
  UI_EmoteTextPopup_o *pUStack_128;
  Il2CppRGCTXData *pIStack_120;
  _union_249689 _Stack_118;
  undefined1 auStack_f0 [8];
  float fStack_e8;
  float fStack_e4;
  
  if (g_data_057ae3c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
    il2cpp_runtime_helper_023445d0(&"EmoteEmojiRPC");
    il2cpp_runtime_helper_023445d0(&"EmoteTextRPC");
    g_data_057ae3c1 = '\x01';
  }
  if ((__this->fields)._currentEmoteWheelState != 2) {
    if ((__this->fields)._currentEmoteCooldown <= 0.0) {
      (__this->fields)._currentEmoteCooldown = 3.0;
      goto label_043be339;
    }
    goto label_043be762;
  }
label_043be339:
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 == (GameManagers_InGameManager_o *)0x0) ||
     (pUVar4 = (__this->fields)._emoteWheelPopup, pUVar4 == (UI_BasePopup_o *)0x0)) goto label_043be7e8;
  in_RCX = (System_Object_array *)pUVar4->klass;
  if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_WheelPopup + 0x130)) ||
     (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
     *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_WheelPopup + 0x130) * 8 + -0x28) != TypeInfo_WheelPopup)) {
label_043be7ed:
    pSVar12 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_022b2fd0();
label_043be7f2:
    il2cpp_runtime_helper_022b2fd0(pSVar12);
label_043be7fa:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    x = (pGVar3->fields).CurrentCharacter;
    iVar11 = (int32_t)pUVar4[1].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto label_043be762;
    iVar2 = (__this->fields)._currentEmoteWheelState;
    if (iVar2 == 2) {
      if ((x != (Characters_BaseCharacter_o *)0x0) &&
         (lVar14 = (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)(x), lVar14 != 0)) {
        if (iVar11 < *(int *)(lVar14 + 0x18)) {
          __this_07 = (System_Collections_Generic_List_object__o *)
                      (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)(x);
          if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto label_043be7e8;
          pIVar13 = System_Collections_Generic_List_object___get_Item(__this_07,iVar11,MethodInfo_String_get_Item);
          in_RCX = (System_Object_array *)x->klass;
          (**(code **)((long)((Il2CppType *)in_RCX->m_Items + 0x57) + 8))
                    (x,pIVar13,((Il2CppType *)in_RCX->m_Items)[0x58].data);
        }
label_043be762:
        pUVar4 = (__this->fields)._emoteWheelPopup;
joined_r0x043be769:
        if (pUVar4 != (UI_BasePopup_o *)0x0) {
          (*(pUVar4->klass->vtable)._22_Hide.methodPtr)();
          *(undefined1 *)&(__this->fields).IsActive = 0;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar19 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar19 != (long *)0x0) {
            in_RCX = (System_Object_array *)(ulong)*(byte *)(TypeInfo_InGameMenu + 0x130);
            if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar19 + 0x130)) &&
               (*(long *)(*(long *)(*plVar19 + 200) + -8 + (long)in_RCX * 8) == TypeInfo_InGameMenu)) {
              *(undefined1 *)(plVar19 + 0x2f) = 1;
              return;
            }
            goto label_043be7ed;
          }
        }
      }
label_043be7e8:
      il2cpp_runtime_helper_022b2c90();
      goto label_043be7ed;
    }
    if (iVar2 != 1) {
      if (iVar2 != 0) goto label_043be762;
      lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
      if (((lVar14 == 0) ||
          (pSVar5 = *(Settings_ListSetting_T__o **)(lVar14 + 0x20), pSVar5 == (Settings_ListSetting_T__o *)0x0
          )) || (pSVar12 = Settings_ListSetting_object___GetItemAt(pSVar5,iVar11,MethodInfo_BaseSetting_GetItemAt),
                pSVar12 == (Settings_BaseSetting_o *)0x0)) goto label_043be7e8;
      in_RCX = (System_Object_array *)pSVar12->klass;
      if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_StringSetting + 0x130)) ||
         (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
         *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_StringSetting + 0x130) * 8 + -0x28) != TypeInfo_StringSetting
         )) goto label_043be7f2;
      unaff_R12 = (_union_249689)pSVar12[1].monitor;
      __this_10 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
      if (((x == (Characters_BaseCharacter_o *)0x0) ||
          ((lVar14 = *(long *)&(x->fields).Dead, lVar14 == 0 || (*(long *)(lVar14 + 0x20) == 0)))) ||
         (pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), parameters == (System_Object_array *)0x0
         )) goto label_043be7e8;
      if ((pIVar13 != (Il2CppObject *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pIVar13), lVar14 == 0))
      goto label_043be7ff;
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar13;
        il2cpp_runtime_helper_022b4080(parameters->m_Items);
        if ((unaff_R12.genericMethod != (Il2CppObject *)0x0) &&
           (lVar14 = il2cpp_runtime_helper_023051f0(unaff_R12.genericMethod), lVar14 == 0)) goto label_043be7ff;
        if (1 < (uint)parameters->max_length) {
          ((_union_249689 *)(parameters->m_Items + 1))->genericMethod = (void *)unaff_R12;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
          if (__this_10 != (Photon_Pun_PhotonView_o *)0x0) {
            puVar15 = &"EmoteTextRPC";
            goto label_043be6d1;
          }
          goto label_043be7e8;
        }
      }
      goto label_043be7fa;
    }
    lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
    if (((lVar14 == 0) ||
        (pSVar5 = *(Settings_ListSetting_T__o **)(lVar14 + 0x28), pSVar5 == (Settings_ListSetting_T__o *)0x0))
       || (pSVar12 = Settings_ListSetting_object___GetItemAt(pSVar5,iVar11,MethodInfo_BaseSetting_GetItemAt),
          pSVar12 == (Settings_BaseSetting_o *)0x0)) goto label_043be7e8;
    in_RCX = (System_Object_array *)pSVar12->klass;
    if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_StringSetting + 0x130)) ||
       (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
       *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_StringSetting + 0x130) * 8 + -0x28) != TypeInfo_StringSetting))
    goto label_043be7f2;
    unaff_R12 = (_union_249689)pSVar12[1].monitor;
    __this_10 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (((x == (Characters_BaseCharacter_o *)0x0) ||
        ((lVar14 = *(long *)&(x->fields).Dead, lVar14 == 0 || (*(long *)(lVar14 + 0x20) == 0)))) ||
       (pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), parameters == (System_Object_array *)0x0))
    goto label_043be7e8;
    if ((pIVar13 == (Il2CppObject *)0x0) || (lVar14 = il2cpp_runtime_helper_023051f0(pIVar13), lVar14 != 0)) {
      if ((int)parameters->max_length == 0) goto label_043be7fa;
      parameters->m_Items[0] = pIVar13;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if ((unaff_R12.genericMethod != (Il2CppObject *)0x0) &&
         (lVar14 = il2cpp_runtime_helper_023051f0(unaff_R12.genericMethod), lVar14 == 0)) goto label_043be7ff;
      if ((uint)parameters->max_length < 2) goto label_043be7fa;
      ((_union_249689 *)(parameters->m_Items + 1))->genericMethod = (void *)unaff_R12;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
      if (__this_10 == (Photon_Pun_PhotonView_o *)0x0) goto label_043be7e8;
      puVar15 = &"EmoteEmojiRPC";
label_043be6d1:
      Photon_Pun_PhotonView__RPC(__this_10,(System_String_o *)*puVar15,0,parameters,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._emoteWheelPopup;
      in_RCX = parameters;
      goto joined_r0x043be769;
    }
  }
label_043be7ff:
  pIVar16 = (Il2CppRGCTXData *)il2cpp_runtime_helper_0231b270();
  __this_09 = (Il2CppRGCTXData *)0x0;
  il2cpp_runtime_helper_022b2b10();
  plVar19 = (long *)pIVar16;
  if (g_data_057ae3c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    plVar19 = &TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3c4 = '\x01';
  }
  if (__this_09 == (Il2CppRGCTXData *)0x0) goto label_043beee9;
  lVar14 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  fVar26 = *(float *)(__this_09 + 0x18);
  if (*(char *)((long)__this_09 + 0xdc) == '\0') {
    fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar26 = fVar26 - fVar29;
    *(float *)(__this_09 + 0x18) = fVar26;
  }
  if ((0.0 < fVar26) && (auVar28 = ZEXT416(0), extraout_DL == '\0')) {
    plVar19 = (long *)__this_09[0x19].method;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      auVar28._8_8_ = extraout_XMM1_Qb;
      auVar28._0_8_ = extraout_XMM1_Qa;
    }
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)plVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (((__this_09[0x19].klass != (Il2CppClass *)0x0) &&
          (pGVar3 = ((__this_09[0x19].klass)->_1).interopData, pGVar3 != (GameManagers_InGameManager_o *)0x0))
         && (plVar19 = (long *)(pGVar3->fields).m_CachedPtr,
            (Il2CppRGCTXData *)plVar19 != (Il2CppRGCTXData *)0x0)) {
        UVar33 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar19,(MethodInfo *)0x0);
        if ((lVar14 != 0) && (*(long *)(lVar14 + 0x28) != 0)) {
          pUVar17 = *(UnityEngine_Transform_o **)(*(long *)(lVar14 + 0x28) + 0x10);
          plVar19 = (long *)0x0;
          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
            position.fields.x = UVar33.fields.x + SUB84(__this_09[0x1a],0);
            position.fields.y = UVar33.fields.y + SUB84(__this_09[0x1a],4);
            position.fields.z = UVar33.fields.z + *(float *)(__this_09 + 0x1b);
            UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
            }
            fVar30 = UVar33.fields.y - position.fields.y;
            fVar26 = UVar33.fields.z - position.fields.z;
            fVar29 = UVar33.fields.x - position.fields.x;
            plVar19 = (long *)TypeInfo_Math;
            if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar26 = fVar29 * fVar29 + fVar30 * fVar30 + fVar26 * fVar26;
            if (fVar26 < 0.0) {
              fVar26 = sqrtf(fVar26);
            }
            else {
              fVar26 = SQRT(fVar26);
            }
            if (500.0 < fVar26) {
              (*__this_09->klass->vtable[0x16].methodPtr)(__this_09);
              plVar19 = (long *)__this_09;
              __this_08 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
              if (__this_08 != (UnityEngine_GameObject_o *)0x0) {
                bVar10 = UnityEngine_GameObject__get_activeSelf(__this_08,(MethodInfo *)0x0);
                if ((char)bVar10 == '\0') {
                  return;
                }
                pUVar17 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
                plVar19 = *(long **)(lVar14 + 0x20);
                if ((Il2CppRGCTXData *)plVar19 != (Il2CppRGCTXData *)0x0) {
                  UVar33 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                     ((UnityEngine_Camera_o *)plVar19,position,(MethodInfo *)0x0);
                  __this_09 = (Il2CppRGCTXData *)0x0;
                  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_position(pUVar17,UVar33,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            else if (*(long *)(lVar14 + 0x28) != 0) {
              pUVar17 = *(UnityEngine_Transform_o **)(*(long *)(lVar14 + 0x28) + 0x10);
              plVar19 = (long *)0x0;
              if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                if (g_data_057a6845 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a6845 = '\x01';
                }
                auStack_f0._0_4_ = position.fields.x - UVar33.fields.x;
                auStack_f0._4_4_ = position.fields.y - UVar33.fields.y;
                fVar29 = position.fields.z - UVar33.fields.z;
                fStack_e8 = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
                fStack_e4 = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
                plVar19 = (long *)TypeInfo_Math;
                if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uVar24 = auVar28._8_4_;
                uVar25 = auVar28._12_4_;
                fVar30 = fVar29 * fVar29 +
                         (float)auStack_f0._4_4_ * (float)auStack_f0._4_4_ +
                         (float)auStack_f0._0_4_ * (float)auStack_f0._0_4_;
                if (fVar30 < 0.0) {
                  fVar30 = sqrtf(fVar30);
                  uVar24 = extraout_XMM0_Dc_01;
                  uVar25 = extraout_XMM0_Dd_01;
                  if (1e-05 < fVar30) goto label_043bebef;
label_043beac6:
                  if (g_data_057a65d5 == '\0') {
                    plVar19 = &TypeInfo_Vector3;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a65d5 = '\x01';
                  }
                  uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  fVar30 = (float)uVar1;
                  fVar22 = (float)((ulong)uVar1 >> 0x20);
                  fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                  lVar6 = *(long *)(lVar14 + 0x28);
                }
                else {
                  fVar30 = SQRT(fVar30);
                  if (fVar30 <= 1e-05) goto label_043beac6;
label_043bebef:
                  fVar29 = fVar29 / fVar30;
                  auVar8._4_4_ = fVar30;
                  auVar8._0_4_ = fVar30;
                  auVar8._8_4_ = uVar24;
                  auVar8._12_4_ = uVar25;
                  auVar28 = divps(_auStack_f0,auVar8);
                  fVar30 = auVar28._0_4_;
                  fVar22 = auVar28._4_4_;
                  lVar6 = *(long *)(lVar14 + 0x28);
                }
                if (lVar6 != 0) {
                  plVar19 = (long *)0x0;
                  if (*(UnityEngine_Transform_o **)(lVar6 + 0x10) != (UnityEngine_Transform_o *)0x0) {
                    UVar33 = UnityEngine_Transform__get_forward
                                       (*(UnityEngine_Transform_o **)(lVar6 + 0x10),(MethodInfo *)0x0);
                    fVar27 = UVar33.fields.z;
                    fVar20 = UVar33.fields.x;
                    fVar23 = UVar33.fields.y;
                    if (g_data_057ac31a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      g_data_057ac31a = '\x01';
                    }
                    fVar31 = fVar27 * fVar27 + fVar23 * fVar23 + fVar20 * fVar20;
                    fVar21 = fVar29 * fVar29 + fVar22 * fVar22 + fVar30 * fVar30;
                    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      if (fVar21 * fVar31 < 0.0) goto label_043bed25;
label_043becd3:
                      fVar21 = SQRT(fVar21 * fVar31);
                      method_00 = TypeInfo_Math;
                    }
                    else {
                      if (0.0 <= fVar21 * fVar31) goto label_043becd3;
label_043bed25:
                      fVar21 = sqrtf(fVar21 * fVar31);
                      method_00 = TypeInfo_Math;
                    }
                    TypeInfo_Math = method_00;
                    if (1e-15 <= fVar21) {
                      fVar21 = (fVar27 * fVar29 + fVar22 * fVar23 + fVar30 * fVar20) / fVar21;
                      fVar20 = 1.0;
                      if (fVar21 <= 1.0) {
                        fVar20 = fVar21;
                      }
                      if (*(int *)((long)method_00 + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      dVar9 = acos((double)(float)(~-(uint)(-1.0 <= fVar21) & 0xbf800000 |
                                                  (uint)fVar20 & -(uint)(-1.0 <= fVar21)),
                                   (MethodInfo *)method_00);
                      if (90.0 < (float)dVar9 * 57.29578) goto label_043bee6a;
                    }
                    plVar19 = (long *)__this_09[0x19].method;
                    if ((Il2CppRGCTXData *)plVar19 != (Il2CppRGCTXData *)0x0) {
                      bVar10 = Characters_BaseCharacter__IsMainCharacter
                                         ((Characters_BaseCharacter_o *)plVar19,(MethodInfo *)0x0);
                      if ((char)bVar10 == '\0') {
                        if (*(long *)(lVar14 + 0x28) != 0) {
                          pUVar17 = *(UnityEngine_Transform_o **)(*(long *)(lVar14 + 0x28) + 0x10);
                          plVar19 = (long *)0x0;
                          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                            UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                            iVar11 = UnityEngine_LayerMask__op_Implicit
                                               ((UnityEngine_LayerMask_Fields)
                                                *(UnityEngine_LayerMask_Fields *)(pIVar16 + 10),
                                                (MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            direction.fields.z = fVar29;
                            direction.fields.x = fVar30;
                            direction.fields.y = fVar22;
                            bVar10 = UnityEngine_Physics__Raycast_4e76f20
                                               (UVar33,direction,fVar26,iVar11,(MethodInfo *)0x0);
                            if ((char)bVar10 != '\0') goto label_043bee6a;
                            goto label_043bee8d;
                          }
                        }
                      }
                      else {
label_043bee8d:
                        plVar19 = (long *)0x0;
                        if (*(UnityEngine_Camera_o **)(lVar14 + 0x20) != (UnityEngine_Camera_o *)0x0) {
                          UVar33.fields.y = position.fields.y;
                          UVar33.fields.x = position.fields.x;
                          UVar33.fields.z = position.fields.z;
                          UVar33 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                             (*(UnityEngine_Camera_o **)(lVar14 + 0x20),UVar33,
                                              (MethodInfo *)0x0);
                          plVar19 = (long *)__this_09;
                          pUVar17 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
                          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__set_position(pUVar17,UVar33,(MethodInfo *)0x0);
                            vtableDispatch = __this_09->klass->vtable[0x15].methodPtr;
                            pMVar18 = __this_09->klass->vtable[0x15].method;
                            goto label_043bee7b;
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
label_043beee9:
      il2cpp_runtime_helper_022b2c90();
      pIStack_120 = __this_09;
      _Stack_118 = unaff_R12;
      if (g_data_057ae3c5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
        il2cpp_runtime_helper_023445d0();
        g_data_057ae3c5 = '\x01';
      }
      pSVar34 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
      pIVar35 = (Il2CppType *)0x0;
      pUVar36 = (UI_EmoteTextPopup_o *)0x0;
      fVar26 = *(float *)((long)plVar19 + 0x3c);
      pMVar18 = (MethodInfo *)0x0;
      fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      *(float *)((long)plVar19 + 0x3c) = fVar26 - fVar29;
      bVar10 = UI_InGameMenu__InMenu(pMVar18);
      inMenu = 1;
      if ((char)bVar10 == '\0') {
        plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (plVar7 != (long *)0x0) {
          in_RCX = (System_Object_array *)(ulong)*(byte *)(TypeInfo_InGameManager + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
             (*(long *)(*(long *)(*plVar7 + 200) + -8 + (long)in_RCX * 8) != TypeInfo_InGameManager)) goto label_043bf0e7;
          inMenu = (uint)((int)plVar7[0xd] == 0);
          goto label_043beff6;
        }
      }
      else {
label_043beff6:
        if ((Photon_Pun_PhotonView_o *)((Il2CppRGCTXData *)(plVar19 + 4))->method !=
            (Photon_Pun_PhotonView_o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_138,
                     (System_Collections_Generic_List_object__o *)((Il2CppRGCTXData *)(plVar19 + 4))->method,
                     MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
          pSVar34 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_138._0_8_;
          pIVar35 = (Il2CppType *)auStack_138._8_8_;
          pUVar36 = pUStack_128;
          while (__this_00.fields._8_8_ = pIVar35,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar34,
                __this_00.fields._current = (Il2CppObject *)pUVar36,
                bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8),
                (char)bVar10 != '\0') {
            UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar19,pUVar36,inMenu,(MethodInfo *)in_RCX);
          }
          __this_01.fields._8_8_ = pIVar35;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
          __this_01.fields._current = (Il2CppObject *)pUVar36;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
          if (((Il2CppRGCTXData *)(plVar19 + 5))->method != (MethodInfo *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_138,
                       (System_Collections_Generic_List_object__o *)((Il2CppRGCTXData *)(plVar19 + 5))->method
                       ,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
            pSVar34 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_138._0_8_;
            pIVar35 = (Il2CppType *)auStack_138._8_8_;
            pUVar36 = pUStack_128;
            while (__this_02.fields._8_8_ = pIVar35,
                  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar34,
                  __this_02.fields._current = (Il2CppObject *)pUVar36,
                  bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8),
                  (char)bVar10 != '\0') {
              UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar19,pUVar36,inMenu,(MethodInfo *)in_RCX);
            }
            __this_03.fields._8_8_ = pIVar35;
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
            __this_03.fields._current = (Il2CppObject *)pUVar36;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
label_043bf0e7:
      auVar32 = il2cpp_runtime_helper_022b2fd0();
      if (auVar32._8_4_ == 1) {
        plVar19 = (long *)__cxa_begin_catch(auVar32._0_8_);
        lVar14 = *plVar19;
        __cxa_end_catch();
        __this_04.fields._8_8_ = pIVar35;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
        __this_04.fields._current = (Il2CppObject *)pUVar36;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
        if (lVar14 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar14);
        __this_06.fields._8_8_ = pIVar35;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
        __this_06.fields._current = (Il2CppObject *)pUVar36;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
      }
      else {
        __this_05.fields._8_8_ = pIVar35;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
        __this_05.fields._current = (Il2CppObject *)pUVar36;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
      }
      _Unwind_Resume(auVar32._0_8_);
    }
  }
label_043bee6a:
  vtableDispatch = __this_09->klass->vtable[0x37].methodPtr;
  pMVar18 = __this_09->klass->vtable[0x37].method;
label_043bee7b:
  (*vtableDispatch)(__this_09,pMVar18);
  return;
}


// UI.EmoteHandler$$<NextEmoteWheel>b__26_0
// il2cpp: void UI_EmoteHandler___NextEmoteWheel_b__26_0 (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x43bf320

void UI_EmoteHandler___NextEmoteWheel_b__26_0(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  GameManagers_InGameManager_o *pGVar3;
  UI_BasePopup_o *pUVar4;
  Characters_BaseCharacter_o *x;
  Settings_ListSetting_T__o *pSVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  double dVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar10;
  int32_t iVar11;
  Settings_BaseSetting_o *pSVar12;
  System_Object_array *parameters;
  Il2CppObject *pIVar13;
  long lVar14;
  undefined8 *puVar15;
  System_Collections_Generic_List_object__o *__this_07;
  Il2CppRGCTXData *pIVar16;
  UnityEngine_GameObject_o *__this_08;
  UnityEngine_Transform_o *pUVar17;
  Il2CppMethodPointer vtableDispatch;
  System_Object_array *in_RCX;
  char extraout_DL;
  Il2CppRGCTXData *__this_09;
  uint inMenu;
  MethodInfo *pMVar18;
  long *plVar19;
  Il2CppRGCTXData *method_00;
  _union_249689 unaff_R12;
  Photon_Pun_PhotonView_o *__this_10;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar24;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined8 extraout_XMM1_Qa;
  float fVar29;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar28 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar32 [12];
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o direction;
  System_Collections_Generic_List_Enumerator_T__c *pSVar34;
  Il2CppType *pIVar35;
  UI_EmoteTextPopup_o *pUVar36;
  undefined1 auStack_138 [16];
  UI_EmoteTextPopup_o *pUStack_128;
  Il2CppRGCTXData *pIStack_120;
  _union_249689 _Stack_118;
  undefined1 auStack_f0 [8];
  float fStack_e8;
  float fStack_e4;
  
  if (g_data_057ae3c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WheelPopup);
    il2cpp_runtime_helper_023445d0(&"EmoteEmojiRPC");
    il2cpp_runtime_helper_023445d0(&"EmoteTextRPC");
    g_data_057ae3c1 = '\x01';
  }
  if ((__this->fields)._currentEmoteWheelState != 2) {
    if ((__this->fields)._currentEmoteCooldown <= 0.0) {
      (__this->fields)._currentEmoteCooldown = 3.0;
      goto label_043be339;
    }
    goto label_043be762;
  }
label_043be339:
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 == (GameManagers_InGameManager_o *)0x0) ||
     (pUVar4 = (__this->fields)._emoteWheelPopup, pUVar4 == (UI_BasePopup_o *)0x0)) goto label_043be7e8;
  in_RCX = (System_Object_array *)pUVar4->klass;
  if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_WheelPopup + 0x130)) ||
     (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
     *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_WheelPopup + 0x130) * 8 + -0x28) != TypeInfo_WheelPopup)) {
label_043be7ed:
    pSVar12 = (Settings_BaseSetting_o *)il2cpp_runtime_helper_022b2fd0();
label_043be7f2:
    il2cpp_runtime_helper_022b2fd0(pSVar12);
label_043be7fa:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    x = (pGVar3->fields).CurrentCharacter;
    iVar11 = (int32_t)pUVar4[1].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto label_043be762;
    iVar2 = (__this->fields)._currentEmoteWheelState;
    if (iVar2 == 2) {
      if ((x != (Characters_BaseCharacter_o *)0x0) &&
         (lVar14 = (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)(x), lVar14 != 0)) {
        if (iVar11 < *(int *)(lVar14 + 0x18)) {
          __this_07 = (System_Collections_Generic_List_object__o *)
                      (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)(x);
          if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto label_043be7e8;
          pIVar13 = System_Collections_Generic_List_object___get_Item(__this_07,iVar11,MethodInfo_String_get_Item);
          in_RCX = (System_Object_array *)x->klass;
          (**(code **)((long)((Il2CppType *)in_RCX->m_Items + 0x57) + 8))
                    (x,pIVar13,((Il2CppType *)in_RCX->m_Items)[0x58].data);
        }
label_043be762:
        pUVar4 = (__this->fields)._emoteWheelPopup;
joined_r0x043be769:
        if (pUVar4 != (UI_BasePopup_o *)0x0) {
          (*(pUVar4->klass->vtable)._22_Hide.methodPtr)();
          *(undefined1 *)&(__this->fields).IsActive = 0;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar19 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar19 != (long *)0x0) {
            in_RCX = (System_Object_array *)(ulong)*(byte *)(TypeInfo_InGameMenu + 0x130);
            if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar19 + 0x130)) &&
               (*(long *)(*(long *)(*plVar19 + 200) + -8 + (long)in_RCX * 8) == TypeInfo_InGameMenu)) {
              *(undefined1 *)(plVar19 + 0x2f) = 1;
              return;
            }
            goto label_043be7ed;
          }
        }
      }
label_043be7e8:
      il2cpp_runtime_helper_022b2c90();
      goto label_043be7ed;
    }
    if (iVar2 != 1) {
      if (iVar2 != 0) goto label_043be762;
      lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
      if (((lVar14 == 0) ||
          (pSVar5 = *(Settings_ListSetting_T__o **)(lVar14 + 0x20), pSVar5 == (Settings_ListSetting_T__o *)0x0
          )) || (pSVar12 = Settings_ListSetting_object___GetItemAt(pSVar5,iVar11,MethodInfo_BaseSetting_GetItemAt),
                pSVar12 == (Settings_BaseSetting_o *)0x0)) goto label_043be7e8;
      in_RCX = (System_Object_array *)pSVar12->klass;
      if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_StringSetting + 0x130)) ||
         (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
         *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_StringSetting + 0x130) * 8 + -0x28) != TypeInfo_StringSetting
         )) goto label_043be7f2;
      unaff_R12 = (_union_249689)pSVar12[1].monitor;
      __this_10 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
      if (((x == (Characters_BaseCharacter_o *)0x0) ||
          ((lVar14 = *(long *)&(x->fields).Dead, lVar14 == 0 || (*(long *)(lVar14 + 0x20) == 0)))) ||
         (pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), parameters == (System_Object_array *)0x0
         )) goto label_043be7e8;
      if ((pIVar13 != (Il2CppObject *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pIVar13), lVar14 == 0))
      goto label_043be7ff;
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar13;
        il2cpp_runtime_helper_022b4080(parameters->m_Items);
        if ((unaff_R12.genericMethod != (Il2CppObject *)0x0) &&
           (lVar14 = il2cpp_runtime_helper_023051f0(unaff_R12.genericMethod), lVar14 == 0)) goto label_043be7ff;
        if (1 < (uint)parameters->max_length) {
          ((_union_249689 *)(parameters->m_Items + 1))->genericMethod = (void *)unaff_R12;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
          if (__this_10 != (Photon_Pun_PhotonView_o *)0x0) {
            puVar15 = &"EmoteTextRPC";
            goto label_043be6d1;
          }
          goto label_043be7e8;
        }
      }
      goto label_043be7fa;
    }
    lVar14 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
    if (((lVar14 == 0) ||
        (pSVar5 = *(Settings_ListSetting_T__o **)(lVar14 + 0x28), pSVar5 == (Settings_ListSetting_T__o *)0x0))
       || (pSVar12 = Settings_ListSetting_object___GetItemAt(pSVar5,iVar11,MethodInfo_BaseSetting_GetItemAt),
          pSVar12 == (Settings_BaseSetting_o *)0x0)) goto label_043be7e8;
    in_RCX = (System_Object_array *)pSVar12->klass;
    if ((*(byte *)((Il2CppType *)in_RCX->m_Items + 0x11) < *(byte *)(TypeInfo_StringSetting + 0x130)) ||
       (in_RCX = *(System_Object_array **)((long)((Il2CppType *)in_RCX->m_Items + 10) + 8),
       *(long *)((long)in_RCX->m_Items + (ulong)*(byte *)(TypeInfo_StringSetting + 0x130) * 8 + -0x28) != TypeInfo_StringSetting))
    goto label_043be7f2;
    unaff_R12 = (_union_249689)pSVar12[1].monitor;
    __this_10 = (Photon_Pun_PhotonView_o *)**(long **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (((x == (Characters_BaseCharacter_o *)0x0) ||
        ((lVar14 = *(long *)&(x->fields).Dead, lVar14 == 0 || (*(long *)(lVar14 + 0x20) == 0)))) ||
       (pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8), parameters == (System_Object_array *)0x0))
    goto label_043be7e8;
    if ((pIVar13 == (Il2CppObject *)0x0) || (lVar14 = il2cpp_runtime_helper_023051f0(pIVar13), lVar14 != 0)) {
      if ((int)parameters->max_length == 0) goto label_043be7fa;
      parameters->m_Items[0] = pIVar13;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if ((unaff_R12.genericMethod != (Il2CppObject *)0x0) &&
         (lVar14 = il2cpp_runtime_helper_023051f0(unaff_R12.genericMethod), lVar14 == 0)) goto label_043be7ff;
      if ((uint)parameters->max_length < 2) goto label_043be7fa;
      ((_union_249689 *)(parameters->m_Items + 1))->genericMethod = (void *)unaff_R12;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
      if (__this_10 == (Photon_Pun_PhotonView_o *)0x0) goto label_043be7e8;
      puVar15 = &"EmoteEmojiRPC";
label_043be6d1:
      Photon_Pun_PhotonView__RPC(__this_10,(System_String_o *)*puVar15,0,parameters,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._emoteWheelPopup;
      in_RCX = parameters;
      goto joined_r0x043be769;
    }
  }
label_043be7ff:
  pIVar16 = (Il2CppRGCTXData *)il2cpp_runtime_helper_0231b270();
  __this_09 = (Il2CppRGCTXData *)0x0;
  il2cpp_runtime_helper_022b2b10();
  plVar19 = (long *)pIVar16;
  if (g_data_057ae3c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    plVar19 = &TypeInfo_SceneLoader;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3c4 = '\x01';
  }
  if (__this_09 == (Il2CppRGCTXData *)0x0) goto label_043beee9;
  lVar14 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  fVar26 = *(float *)(__this_09 + 0x18);
  if (*(char *)((long)__this_09 + 0xdc) == '\0') {
    fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar26 = fVar26 - fVar29;
    *(float *)(__this_09 + 0x18) = fVar26;
  }
  if ((0.0 < fVar26) && (auVar28 = ZEXT416(0), extraout_DL == '\0')) {
    plVar19 = (long *)__this_09[0x19].method;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      auVar28._8_8_ = extraout_XMM1_Qb;
      auVar28._0_8_ = extraout_XMM1_Qa;
    }
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)plVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (((__this_09[0x19].klass != (Il2CppClass *)0x0) &&
          (pGVar3 = ((__this_09[0x19].klass)->_1).interopData, pGVar3 != (GameManagers_InGameManager_o *)0x0))
         && (plVar19 = (long *)(pGVar3->fields).m_CachedPtr,
            (Il2CppRGCTXData *)plVar19 != (Il2CppRGCTXData *)0x0)) {
        UVar33 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar19,(MethodInfo *)0x0);
        if ((lVar14 != 0) && (*(long *)(lVar14 + 0x28) != 0)) {
          pUVar17 = *(UnityEngine_Transform_o **)(*(long *)(lVar14 + 0x28) + 0x10);
          plVar19 = (long *)0x0;
          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
            position.fields.x = UVar33.fields.x + SUB84(__this_09[0x1a],0);
            position.fields.y = UVar33.fields.y + SUB84(__this_09[0x1a],4);
            position.fields.z = UVar33.fields.z + *(float *)(__this_09 + 0x1b);
            UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
            }
            fVar30 = UVar33.fields.y - position.fields.y;
            fVar26 = UVar33.fields.z - position.fields.z;
            fVar29 = UVar33.fields.x - position.fields.x;
            plVar19 = (long *)TypeInfo_Math;
            if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar26 = fVar29 * fVar29 + fVar30 * fVar30 + fVar26 * fVar26;
            if (fVar26 < 0.0) {
              fVar26 = sqrtf(fVar26);
            }
            else {
              fVar26 = SQRT(fVar26);
            }
            if (500.0 < fVar26) {
              (*__this_09->klass->vtable[0x16].methodPtr)(__this_09);
              plVar19 = (long *)__this_09;
              __this_08 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
              if (__this_08 != (UnityEngine_GameObject_o *)0x0) {
                bVar10 = UnityEngine_GameObject__get_activeSelf(__this_08,(MethodInfo *)0x0);
                if ((char)bVar10 == '\0') {
                  return;
                }
                pUVar17 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
                plVar19 = *(long **)(lVar14 + 0x20);
                if ((Il2CppRGCTXData *)plVar19 != (Il2CppRGCTXData *)0x0) {
                  UVar33 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                     ((UnityEngine_Camera_o *)plVar19,position,(MethodInfo *)0x0);
                  __this_09 = (Il2CppRGCTXData *)0x0;
                  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_position(pUVar17,UVar33,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            else if (*(long *)(lVar14 + 0x28) != 0) {
              pUVar17 = *(UnityEngine_Transform_o **)(*(long *)(lVar14 + 0x28) + 0x10);
              plVar19 = (long *)0x0;
              if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                if (g_data_057a6845 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  g_data_057a6845 = '\x01';
                }
                auStack_f0._0_4_ = position.fields.x - UVar33.fields.x;
                auStack_f0._4_4_ = position.fields.y - UVar33.fields.y;
                fVar29 = position.fields.z - UVar33.fields.z;
                fStack_e8 = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
                fStack_e4 = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
                plVar19 = (long *)TypeInfo_Math;
                if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uVar24 = auVar28._8_4_;
                uVar25 = auVar28._12_4_;
                fVar30 = fVar29 * fVar29 +
                         (float)auStack_f0._4_4_ * (float)auStack_f0._4_4_ +
                         (float)auStack_f0._0_4_ * (float)auStack_f0._0_4_;
                if (fVar30 < 0.0) {
                  fVar30 = sqrtf(fVar30);
                  uVar24 = extraout_XMM0_Dc_01;
                  uVar25 = extraout_XMM0_Dd_01;
                  if (1e-05 < fVar30) goto label_043bebef;
label_043beac6:
                  if (g_data_057a65d5 == '\0') {
                    plVar19 = &TypeInfo_Vector3;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a65d5 = '\x01';
                  }
                  uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  fVar30 = (float)uVar1;
                  fVar22 = (float)((ulong)uVar1 >> 0x20);
                  fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                  lVar6 = *(long *)(lVar14 + 0x28);
                }
                else {
                  fVar30 = SQRT(fVar30);
                  if (fVar30 <= 1e-05) goto label_043beac6;
label_043bebef:
                  fVar29 = fVar29 / fVar30;
                  auVar8._4_4_ = fVar30;
                  auVar8._0_4_ = fVar30;
                  auVar8._8_4_ = uVar24;
                  auVar8._12_4_ = uVar25;
                  auVar28 = divps(_auStack_f0,auVar8);
                  fVar30 = auVar28._0_4_;
                  fVar22 = auVar28._4_4_;
                  lVar6 = *(long *)(lVar14 + 0x28);
                }
                if (lVar6 != 0) {
                  plVar19 = (long *)0x0;
                  if (*(UnityEngine_Transform_o **)(lVar6 + 0x10) != (UnityEngine_Transform_o *)0x0) {
                    UVar33 = UnityEngine_Transform__get_forward
                                       (*(UnityEngine_Transform_o **)(lVar6 + 0x10),(MethodInfo *)0x0);
                    fVar27 = UVar33.fields.z;
                    fVar20 = UVar33.fields.x;
                    fVar23 = UVar33.fields.y;
                    if (g_data_057ac31a == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      g_data_057ac31a = '\x01';
                    }
                    fVar31 = fVar27 * fVar27 + fVar23 * fVar23 + fVar20 * fVar20;
                    fVar21 = fVar29 * fVar29 + fVar22 * fVar22 + fVar30 * fVar30;
                    if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      if (fVar21 * fVar31 < 0.0) goto label_043bed25;
label_043becd3:
                      fVar21 = SQRT(fVar21 * fVar31);
                      method_00 = TypeInfo_Math;
                    }
                    else {
                      if (0.0 <= fVar21 * fVar31) goto label_043becd3;
label_043bed25:
                      fVar21 = sqrtf(fVar21 * fVar31);
                      method_00 = TypeInfo_Math;
                    }
                    TypeInfo_Math = method_00;
                    if (1e-15 <= fVar21) {
                      fVar21 = (fVar27 * fVar29 + fVar22 * fVar23 + fVar30 * fVar20) / fVar21;
                      fVar20 = 1.0;
                      if (fVar21 <= 1.0) {
                        fVar20 = fVar21;
                      }
                      if (*(int *)((long)method_00 + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      dVar9 = acos((double)(float)(~-(uint)(-1.0 <= fVar21) & 0xbf800000 |
                                                  (uint)fVar20 & -(uint)(-1.0 <= fVar21)),
                                   (MethodInfo *)method_00);
                      if (90.0 < (float)dVar9 * 57.29578) goto label_043bee6a;
                    }
                    plVar19 = (long *)__this_09[0x19].method;
                    if ((Il2CppRGCTXData *)plVar19 != (Il2CppRGCTXData *)0x0) {
                      bVar10 = Characters_BaseCharacter__IsMainCharacter
                                         ((Characters_BaseCharacter_o *)plVar19,(MethodInfo *)0x0);
                      if ((char)bVar10 == '\0') {
                        if (*(long *)(lVar14 + 0x28) != 0) {
                          pUVar17 = *(UnityEngine_Transform_o **)(*(long *)(lVar14 + 0x28) + 0x10);
                          plVar19 = (long *)0x0;
                          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                            UVar33 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                            iVar11 = UnityEngine_LayerMask__op_Implicit
                                               ((UnityEngine_LayerMask_Fields)
                                                *(UnityEngine_LayerMask_Fields *)(pIVar16 + 10),
                                                (MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            direction.fields.z = fVar29;
                            direction.fields.x = fVar30;
                            direction.fields.y = fVar22;
                            bVar10 = UnityEngine_Physics__Raycast_4e76f20
                                               (UVar33,direction,fVar26,iVar11,(MethodInfo *)0x0);
                            if ((char)bVar10 != '\0') goto label_043bee6a;
                            goto label_043bee8d;
                          }
                        }
                      }
                      else {
label_043bee8d:
                        plVar19 = (long *)0x0;
                        if (*(UnityEngine_Camera_o **)(lVar14 + 0x20) != (UnityEngine_Camera_o *)0x0) {
                          UVar33.fields.y = position.fields.y;
                          UVar33.fields.x = position.fields.x;
                          UVar33.fields.z = position.fields.z;
                          UVar33 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                             (*(UnityEngine_Camera_o **)(lVar14 + 0x20),UVar33,
                                              (MethodInfo *)0x0);
                          plVar19 = (long *)__this_09;
                          pUVar17 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
                          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__set_position(pUVar17,UVar33,(MethodInfo *)0x0);
                            vtableDispatch = __this_09->klass->vtable[0x15].methodPtr;
                            pMVar18 = __this_09->klass->vtable[0x15].method;
                            goto label_043bee7b;
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
label_043beee9:
      il2cpp_runtime_helper_022b2c90();
      pIStack_120 = __this_09;
      _Stack_118 = unaff_R12;
      if (g_data_057ae3c5 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
        il2cpp_runtime_helper_023445d0();
        g_data_057ae3c5 = '\x01';
      }
      pSVar34 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
      pIVar35 = (Il2CppType *)0x0;
      pUVar36 = (UI_EmoteTextPopup_o *)0x0;
      fVar26 = *(float *)((long)plVar19 + 0x3c);
      pMVar18 = (MethodInfo *)0x0;
      fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      *(float *)((long)plVar19 + 0x3c) = fVar26 - fVar29;
      bVar10 = UI_InGameMenu__InMenu(pMVar18);
      inMenu = 1;
      if ((char)bVar10 == '\0') {
        plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (plVar7 != (long *)0x0) {
          in_RCX = (System_Object_array *)(ulong)*(byte *)(TypeInfo_InGameManager + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
             (*(long *)(*(long *)(*plVar7 + 200) + -8 + (long)in_RCX * 8) != TypeInfo_InGameManager)) goto label_043bf0e7;
          inMenu = (uint)((int)plVar7[0xd] == 0);
          goto label_043beff6;
        }
      }
      else {
label_043beff6:
        if ((Photon_Pun_PhotonView_o *)((Il2CppRGCTXData *)(plVar19 + 4))->method !=
            (Photon_Pun_PhotonView_o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_138,
                     (System_Collections_Generic_List_object__o *)((Il2CppRGCTXData *)(plVar19 + 4))->method,
                     MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
          pSVar34 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_138._0_8_;
          pIVar35 = (Il2CppType *)auStack_138._8_8_;
          pUVar36 = pUStack_128;
          while (__this_00.fields._8_8_ = pIVar35,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar34,
                __this_00.fields._current = (Il2CppObject *)pUVar36,
                bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8),
                (char)bVar10 != '\0') {
            UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar19,pUVar36,inMenu,(MethodInfo *)in_RCX);
          }
          __this_01.fields._8_8_ = pIVar35;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
          __this_01.fields._current = (Il2CppObject *)pUVar36;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
          if (((Il2CppRGCTXData *)(plVar19 + 5))->method != (MethodInfo *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_138,
                       (System_Collections_Generic_List_object__o *)((Il2CppRGCTXData *)(plVar19 + 5))->method
                       ,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
            pSVar34 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_138._0_8_;
            pIVar35 = (Il2CppType *)auStack_138._8_8_;
            pUVar36 = pUStack_128;
            while (__this_02.fields._8_8_ = pIVar35,
                  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar34,
                  __this_02.fields._current = (Il2CppObject *)pUVar36,
                  bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8),
                  (char)bVar10 != '\0') {
              UI_EmoteHandler__UpdatePopup((UI_EmoteHandler_o *)plVar19,pUVar36,inMenu,(MethodInfo *)in_RCX);
            }
            __this_03.fields._8_8_ = pIVar35;
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
            __this_03.fields._current = (Il2CppObject *)pUVar36;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
label_043bf0e7:
      auVar32 = il2cpp_runtime_helper_022b2fd0();
      if (auVar32._8_4_ == 1) {
        plVar19 = (long *)__cxa_begin_catch(auVar32._0_8_);
        lVar14 = *plVar19;
        __cxa_end_catch();
        __this_04.fields._8_8_ = pIVar35;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
        __this_04.fields._current = (Il2CppObject *)pUVar36;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
        if (lVar14 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar14);
        __this_06.fields._8_8_ = pIVar35;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
        __this_06.fields._current = (Il2CppObject *)pUVar36;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
      }
      else {
        __this_05.fields._8_8_ = pIVar35;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar34;
        __this_05.fields._current = (Il2CppObject *)pUVar36;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
      }
      _Unwind_Resume(auVar32._0_8_);
    }
  }
label_043bee6a:
  vtableDispatch = __this_09->klass->vtable[0x37].methodPtr;
  pMVar18 = __this_09->klass->vtable[0x37].method;
label_043bee7b:
  (*vtableDispatch)(__this_09,pMVar18);
  return;
}


