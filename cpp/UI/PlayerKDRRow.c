// Type: UI.PlayerKDRRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PlayerKDRRow.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/PlayerKDRRow.cs
// --------------------------------

// UI.PlayerKDRRow$$Setup
// il2cpp: void UI_PlayerKDRRow__Setup (UI_PlayerKDRRow_o* __this, UI_ElementStyle_o* style, Photon_Realtime_Player_o* player, UI_KDRPanel_o* panel, const MethodInfo* method);
// 0x43d7f90

void UI_PlayerKDRRow__Setup
               (UI_PlayerKDRRow_o *__this,UI_ElementStyle_o *style,Photon_Realtime_Player_o *player,
               UI_KDRPanel_o *panel,MethodInfo *method)

{
  byte bVar1;
  Photon_Realtime_Player_o *pPVar2;
  Il2CppClass *pIVar3;
  System_String_o *loadout;
  undefined4 uVar4;
  undefined4 uVar5;
  bool_conflict bVar6;
  uint uVar7;
  uint uVar8;
  int32_t iVar9;
  int32_t iVar10;
  int32_t iVar11;
  int32_t iVar12;
  System_String_array *__this_00;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_UI_Text_o *pUVar14;
  UnityEngine_UI_RawImage_o *pUVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  MethodInfo *pMVar18;
  UnityEngine_Texture_o *value;
  System_String_array *__this_01;
  void *pvVar19;
  Il2CppObject *pIVar20;
  undefined8 uVar21;
  System_String_c *method_00;
  MethodInfo *method_01;
  MethodInfo_255A0F0 **unaff_RBP;
  System_String_array *__this_02;
  undefined1 *puVar22;
  ulong uVar23;
  int32_t iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int32_t iStack_6c;
  UI_PlayerKDRRow_o *pUStack_68;
  UI_ElementStyle_o *pUStack_60;
  undefined8 *puStack_58;
  UI_KDRPanel_o *pUStack_50;
  Photon_Realtime_Player_o *pPStack_48;
  MethodInfo_255A0F0 **ppMStack_40;
  
  if (g_data_057ae463 == '\0') {
    ppMStack_40 = (MethodInfo_255A0F0 **)0x43d7fbc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    ppMStack_40 = (MethodInfo_255A0F0 **)0x43d7fc8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    ppMStack_40 = (MethodInfo_255A0F0 **)0x43d7fd4;
    il2cpp_runtime_helper_023445d0(&"Icons/Game/BladeIcon");
    g_data_057ae463 = '\x01';
  }
  ppMStack_40 = (MethodInfo_255A0F0 **)0x43d7fe5;
  __this_00 = (System_String_array *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  puVar22 = (undefined1 *)0x3;
  ppMStack_40 = (MethodInfo_255A0F0 **)0x43d8013;
  pUVar13 = UI_ElementFactory__CreateWhiteLabel
                      ((UnityEngine_Transform_o *)__this_00,style,
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
    unaff_RBP = &MethodInfo_Text_GetComponent_Text;
    ppMStack_40 = (MethodInfo_255A0F0 **)0x43d802f;
    pUVar14 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
    (__this->fields).id = pUVar14;
    ppMStack_40 = (MethodInfo_255A0F0 **)0x43d803f;
    il2cpp_runtime_helper_022b4080(&(__this->fields).id);
    ppMStack_40 = (MethodInfo_255A0F0 **)0x43d8049;
    __this_00 = (System_String_array *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    ppMStack_40 = (MethodInfo_255A0F0 **)0x43d806b;
    pUVar13 = UI_ElementFactory__CreateRawImage
                        ((UnityEngine_Transform_o *)__this_00,style,"Icons/Game/BladeIcon",24.0,24.0,(MethodInfo *)0x0);
    if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
      ppMStack_40 = (MethodInfo_255A0F0 **)0x43d8086;
      pUVar15 = (UnityEngine_UI_RawImage_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_RawImage_GetComponent_RawImage);
      (__this->fields).weapon = pUVar15;
      ppMStack_40 = (MethodInfo_255A0F0 **)0x43d8096;
      il2cpp_runtime_helper_022b4080(&(__this->fields).weapon);
      ppMStack_40 = (MethodInfo_255A0F0 **)0x43d80a0;
      __this_00 = (System_String_array *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      puVar22 = (undefined1 *)0x3;
      ppMStack_40 = (MethodInfo_255A0F0 **)0x43d80c7;
      pUVar13 = UI_ElementFactory__CreateWhiteLabel
                          ((UnityEngine_Transform_o *)__this_00,style,
                           (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
      if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
        ppMStack_40 = (MethodInfo_255A0F0 **)0x43d80dc;
        pUVar14 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
        (__this->fields).playerName = pUVar14;
        ppMStack_40 = (MethodInfo_255A0F0 **)0x43d80ec;
        il2cpp_runtime_helper_022b4080(&(__this->fields).playerName);
        ppMStack_40 = (MethodInfo_255A0F0 **)0x43d80f6;
        __this_00 = (System_String_array *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        puVar22 = &g_data_00000004;
        ppMStack_40 = (MethodInfo_255A0F0 **)0x43d811d;
        pUVar13 = UI_ElementFactory__CreateWhiteLabel
                            ((UnityEngine_Transform_o *)__this_00,style,
                             (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
          ppMStack_40 = (MethodInfo_255A0F0 **)0x43d8132;
          pUVar14 = (UnityEngine_UI_Text_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar13,MethodInfo_Text_GetComponent_Text);
          __this_00 = (System_String_array *)&(__this->fields).score;
          (__this->fields).score = pUVar14;
          ppMStack_40 = (MethodInfo_255A0F0 **)0x43d8142;
          il2cpp_runtime_helper_022b4080();
          if (player != (Photon_Realtime_Player_o *)0x0) {
            ppMStack_40 = (MethodInfo_255A0F0 **)0x43d8155;
            bVar6 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
            *(char *)((long)&(__this->fields).isSet + 1) = (char)bVar6;
            (__this->fields).isMasterClient = (player->fields).actorNumber;
            *(undefined8 *)&(__this->fields).actorNumber = **(undefined8 **)(g_data_057b9c00 + 0xb8);
            ppMStack_40 = (MethodInfo_255A0F0 **)0x43d817d;
            il2cpp_runtime_helper_022b4080(&(__this->fields).actorNumber);
            (__this->fields).status = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            ppMStack_40 = (MethodInfo_255A0F0 **)0x43d819b;
            il2cpp_runtime_helper_022b4080(&(__this->fields).status);
            (__this->fields).character = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            ppMStack_40 = (MethodInfo_255A0F0 **)0x43d81b9;
            il2cpp_runtime_helper_022b4080(&(__this->fields).character);
            (__this->fields).loadout = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            ppMStack_40 = (MethodInfo_255A0F0 **)0x43d81d7;
            il2cpp_runtime_helper_022b4080(&(__this->fields).loadout);
            *(undefined1 *)&(__this->fields).isSet = 0;
            (__this->fields).player = player;
            ppMStack_40 = (MethodInfo_255A0F0 **)0x43d81eb;
            il2cpp_runtime_helper_022b4080(&(__this->fields).player,player);
            (__this->fields)._scoreBuilder = (System_Text_StringBuilder_o *)panel;
            ppMStack_40 = (MethodInfo_255A0F0 **)0x43d8201;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._scoreBuilder);
            UI_PlayerKDRRow__UpdateRow_42d8220(__this,(MethodInfo *)panel);
            return;
          }
        }
      }
    }
  }
  ppMStack_40 = (MethodInfo_255A0F0 **)0x43d8219;
  il2cpp_runtime_helper_022b2c90();
  puStack_58 = &g_data_057b9b70;
  pUStack_68 = __this;
  pUStack_60 = style;
  pUStack_50 = panel;
  pPStack_48 = player;
  ppMStack_40 = unaff_RBP;
  if (g_data_057ae469 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057ae469 = '\x01';
  }
  iStack_8c = 0;
  pPVar2 = (Photon_Realtime_Player_o *)__this_00->m_Items[0];
  if (pPVar2 == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = PhotonExtensions__GetStringProperty
                      (pPVar2,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                       (MethodInfo *)0x0);
  _uStack_78 = PhotonExtensions__GetStringProperty
                         ((Photon_Realtime_Player_o *)__this_00->m_Items[0],
                          *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                          (MethodInfo *)0x0);
  pSVar17 = PhotonExtensions__GetStringProperty
                      ((Photon_Realtime_Player_o *)__this_00->m_Items[0],
                       *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                       (MethodInfo *)0x0);
  method_00 = (System_String_c *)0x0;
  _uStack_88 = PhotonExtensions__GetStringProperty
                         ((Photon_Realtime_Player_o *)__this_00->m_Items[0],
                          *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                          (MethodInfo *)0x0);
  __this_01 = (System_String_array *)0x0;
  if ((Photon_Realtime_Player_o *)__this_00->m_Items[0] == (Photon_Realtime_Player_o *)0x0) goto label_043d894e;
  bVar1 = *(byte *)((long)__this_00->m_Items + 0x29);
  uVar7 = Photon_Realtime_Player__get_IsMasterClient
                    ((Photon_Realtime_Player_o *)__this_00->m_Items[0],(MethodInfo *)0x0);
  __this_01 = (System_String_array *)__this_00->m_Items[0];
  if ((uint)bVar1 == (uVar7 & 0xff)) {
    if (__this_01 == (System_String_array *)0x0) goto label_043d894e;
    if ((*(int *)((long)__this_00->m_Items + 0x2c) != (int)__this_01->max_length) ||
       (*(char *)(__this_00->m_Items + 5) == '\0')) goto label_043d83b8;
  }
  else {
    if (__this_01 == (System_String_array *)0x0) goto label_043d894e;
label_043d83b8:
    _uStack_80 = pSVar16;
    bVar6 = Photon_Realtime_Player__get_IsMasterClient
                      ((Photon_Realtime_Player_o *)__this_01,(MethodInfo *)0x0);
    *(char *)((long)__this_00->m_Items + 0x29) = (char)bVar6;
    __this_01 = (System_String_array *)__this_00->m_Items[0];
    if (__this_01 == (System_String_array *)0x0) goto label_043d894e;
    uVar7 = (uint)__this_01->max_length;
    *(uint *)((long)__this_00->m_Items + 0x2c) = uVar7;
    *(undefined1 *)(__this_00->m_Items + 5) = 1;
    pSVar16 = __this_00->m_Items[1];
    uVar8 = Photon_Realtime_Player__get_IsMasterClient
                      ((Photon_Realtime_Player_o *)__this_01,(MethodInfo *)0x0);
    if (__this_00->m_Items[0] == (System_String_o *)0x0) goto label_043d894e;
    bVar1 = *(byte *)((long)&__this_00->m_Items[0][1].klass + 4);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = (System_String_array *)(ulong)uVar7;
    pMVar18 = (MethodInfo *)
              GameManagers_ChatManager__GetIDString(uVar7,uVar8 & 0xff,(uint)bVar1,(MethodInfo *)0x0);
    if (pSVar16 == (System_String_o *)0x0) goto label_043d894e;
    method_00 = pSVar16->klass;
    (*(code *)method_00[2]._1.namespaze)
              ((Il2CppMethodPointer)pSVar16,pMVar18,method_00[2]._1.byval_arg.data,(void **)method_00,puVar22)
    ;
    pSVar16 = _uStack_80;
  }
  bVar6 = System_String__op_Inequality(pSVar17,__this_00->m_Items[7],(MethodInfo *)0x0);
  if (((char)bVar6 != '\0') ||
     (bVar6 = System_String__op_Inequality(_uStack_88,__this_00->m_Items[8],(MethodInfo *)0x0),
     (char)bVar6 != '\0')) {
    __this_00->m_Items[7] = pSVar17;
    il2cpp_runtime_helper_022b4080(__this_00->m_Items + 7,pSVar17);
    loadout = _uStack_88;
    __this_00->m_Items[8] = _uStack_88;
    il2cpp_runtime_helper_022b4080(__this_00->m_Items + 8,_uStack_88);
    pUVar15 = (UnityEngine_UI_RawImage_o *)__this_00->m_Items[2];
    __this_01 = __this_00;
    value = UI_PlayerKDRRow__GetPlayerIcon
                      ((UI_PlayerKDRRow_o *)__this_00,pSVar17,loadout,(MethodInfo *)method_00);
    if (pUVar15 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043d894e;
    UnityEngine_UI_RawImage__set_texture(pUVar15,value,(MethodInfo *)0x0);
  }
  pSVar17 = __this_00->m_Items[3];
  __this_01 = (System_String_array *)0x0;
  if (pSVar17 != (System_String_o *)0x0) {
    pSVar17 = (System_String_o *)(*pSVar17->klass[2]._1.gc_desc)(pSVar17,pSVar17->klass[2]._1.name);
    bVar6 = System_String__op_Inequality(pSVar16,pSVar17,(MethodInfo *)0x0);
    pSVar17 = _uStack_78;
    if (((char)bVar6 != '\0') ||
       (bVar6 = System_String__op_Inequality(_uStack_78,__this_00->m_Items[6],(MethodInfo *)0x0),
       (char)bVar6 != '\0')) {
      __this_00->m_Items[6] = pSVar17;
      il2cpp_runtime_helper_022b4080(__this_00->m_Items + 6,pSVar17);
      __this_01 = (System_String_array *)
                  UI_PlayerKDRRow__GetPlayerStatus((UI_PlayerKDRRow_o *)__this_00,pSVar17,method_01);
      pSVar17 = __this_00->m_Items[3];
      pSVar16 = System_String__Concat_3af7150
                          ((System_String_o *)__this_01,pSVar16,": ",(MethodInfo *)0x0);
      if (pSVar17 == (System_String_o *)0x0) goto label_043d894e;
      (*(code *)pSVar17->klass[2]._1.namespaze)(pSVar17,pSVar16,pSVar17->klass[2]._1.byval_arg.data);
    }
    pPVar2 = (Photon_Realtime_Player_o *)__this_00->m_Items[0];
    pSVar16 = __this_00->m_Items[9];
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = PhotonExtensions__GetStringProperty
                        (pPVar2,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                         (MethodInfo *)0x0);
    bVar6 = System_String__op_Inequality(pSVar16,pSVar17,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pPVar2 = (Photon_Realtime_Player_o *)__this_00->m_Items[0];
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = PhotonExtensions__GetStringProperty
                          (pPVar2,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                           (MethodInfo *)0x0);
      __this_00->m_Items[9] = pSVar16;
      il2cpp_runtime_helper_022b4080(__this_00->m_Items + 9,pSVar16);
    }
    iVar9 = PhotonExtensions__GetIntProperty
                      ((Photon_Realtime_Player_o *)__this_00->m_Items[0],"Kills",0,(MethodInfo *)0x0);
    iVar10 = PhotonExtensions__GetIntProperty
                       ((Photon_Realtime_Player_o *)__this_00->m_Items[0],"Deaths",0,(MethodInfo *)0x0);
    iVar11 = PhotonExtensions__GetIntProperty
                       ((Photon_Realtime_Player_o *)__this_00->m_Items[0],"HighestDamage",0,(MethodInfo *)0x0);
    iVar12 = PhotonExtensions__GetIntProperty
                       ((Photon_Realtime_Player_o *)__this_00->m_Items[0],"TotalDamage",0,(MethodInfo *)0x0);
    _uStack_88 = (System_String_o *)CONCAT44(uStack_84,iVar12);
    if (*(int *)((long)TypeInfo_CustomLogicManager->m_Items + 0xc4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pvVar19 = TypeInfo_CustomLogicManager->m_Items[0x13]->monitor;
      __this_01 = TypeInfo_CustomLogicManager;
    }
    else {
      pvVar19 = TypeInfo_CustomLogicManager->m_Items[0x13]->monitor;
      __this_01 = TypeInfo_CustomLogicManager;
    }
    TypeInfo_CustomLogicManager = __this_01;
    if (pvVar19 != (void *)0x0) {
      if (*(int *)((long)__this_01->m_Items + 0xc4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pvVar19 = TypeInfo_CustomLogicManager->m_Items[0x13]->monitor;
        if (pvVar19 == (void *)0x0) goto label_043d894e;
      }
      bVar6 = System_String__op_Inequality
                        (*(System_String_o **)((long)pvVar19 + 0x78),
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pSVar16 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pPVar2 = (Photon_Realtime_Player_o *)__this_00->m_Items[0];
        if (*(int *)((long)TypeInfo_CustomLogicManager->m_Items + 0xc4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pvVar19 = TypeInfo_CustomLogicManager->m_Items[0x13]->monitor;
        __this_01 = TypeInfo_CustomLogicManager;
        if (pvVar19 != (void *)0x0) {
          pIVar20 = PhotonExtensions__GetCustomProperty
                              (pPVar2,*(System_String_o **)((long)pvVar19 + 0x78),(MethodInfo *)0x0);
          if (pIVar20 != (Il2CppObject *)0x0) {
            pSVar16 = (System_String_o *)
                      (*pIVar20->klass->vtable[3].methodPtr)(pIVar20,pIVar20->klass->vtable[3].method);
          }
          pSVar17 = __this_00->m_Items[4];
          __this_01 = (System_String_array *)0x0;
          if (pSVar17 != (System_String_o *)0x0) {
            pSVar17 = (System_String_o *)(*pSVar17->klass[2]._1.gc_desc)(pSVar17,pSVar17->klass[2]._1.name);
            bVar6 = System_String__op_Inequality(pSVar16,pSVar17,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              return;
            }
            pSVar17 = __this_00->m_Items[4];
            __this_01 = (System_String_array *)0x0;
            if (pSVar17 != (System_String_o *)0x0) {
              (*(code *)pSVar17->klass[2]._1.namespaze)(pSVar17,pSVar16,pSVar17->klass[2]._1.byval_arg.data);
              return;
            }
          }
        }
        goto label_043d894e;
      }
    }
    _uStack_80 = (System_String_o *)CONCAT44(uStack_7c,iVar10);
    _uStack_78 = (System_String_o *)CONCAT44(uStack_74,iVar9);
    __this_02 = (System_String_array *)__this_00->m_Items[0xd];
    __this_01 = __this_02;
    iStack_6c = iVar11;
    if (__this_02 != (System_String_array *)0x0) {
      System_Text_StringBuilder__Clear((System_Text_StringBuilder_o *)__this_02,(MethodInfo *)0x0);
      pSVar16 = __this_00->m_Items[0xc];
      __this_01 = __this_02;
      if (pSVar16 != (System_String_o *)0x0) {
        uVar23 = 0;
        uVar7 = *(uint *)&pSVar16[1].klass;
        if (0 < (int)uVar7) {
          do {
            if (uVar7 <= uVar23) goto label_043d8953;
            iStack_8c = PhotonExtensions__GetIntProperty
                                  ((Photon_Realtime_Player_o *)__this_00->m_Items[0],
                                   (&pSVar16[1].monitor)[uVar23],0,(MethodInfo *)0x0);
            __this_02 = (System_String_array *)__this_00->m_Items[0xd];
            __this_01 = (System_String_array *)&stack0xffffffffffffff74;
            pSVar16 = System_Int32__ToString
                                ((int32_t)(System_String_array *)&stack0xffffffffffffff74,(MethodInfo *)0x0);
            if (__this_02 == (System_String_array *)0x0) goto label_043d894e;
            System_Text_StringBuilder__Append_3b03f90
                      ((System_Text_StringBuilder_o *)__this_02,pSVar16,(MethodInfo *)0x0);
            pSVar16 = __this_00->m_Items[0xc];
            __this_01 = __this_02;
            if (pSVar16 == (System_String_o *)0x0) goto label_043d894e;
            if ((long)uVar23 < ((long)pSVar16[1].klass << 0x20) + -0x100000000 >> 0x20) {
              __this_02 = (System_String_array *)__this_00->m_Items[0xd];
              __this_01 = __this_02;
              if (__this_02 == (System_String_array *)0x0) goto label_043d894e;
              System_Text_StringBuilder__Append_3b03f90
                        ((System_Text_StringBuilder_o *)__this_02,"/",(MethodInfo *)0x0);
              pSVar16 = __this_00->m_Items[0xc];
            }
            uVar23 = uVar23 + 1;
            __this_01 = __this_02;
            if (pSVar16 == (System_String_o *)0x0) goto label_043d894e;
            uVar7 = *(uint *)&pSVar16[1].klass;
          } while ((long)uVar23 < (long)(int)uVar7);
        }
        __this_01 = (System_String_array *)__this_00->m_Items[0xd];
        if (__this_01 != (System_String_array *)0x0) {
          pSVar16 = __this_00->m_Items[4];
          pIVar3 = (__this_01->obj).klass;
          uVar21 = (*(((Photon_Realtime_Player_VTable *)pIVar3->vtable)->_3_ToString).methodPtr)
                             (__this_01,
                              (((Photon_Realtime_Player_VTable *)pIVar3->vtable)->_3_ToString).method);
          iVar9 = iStack_6c;
          uVar5 = uStack_78;
          uVar4 = uStack_80;
          if (pSVar16 != (System_String_o *)0x0) {
            (*(code *)pSVar16->klass[2]._1.namespaze)(pSVar16,uVar21,pSVar16->klass[2]._1.byval_arg.data);
            *(undefined4 *)(__this_00->m_Items + 10) = uVar5;
            *(undefined4 *)((long)__this_00->m_Items + 0x54) = uVar4;
            *(int32_t *)(__this_00->m_Items + 0xb) = iVar9;
            *(undefined4 *)((long)__this_00->m_Items + 0x5c) = uStack_88;
            return;
          }
        }
      }
    }
  }
label_043d894e:
  il2cpp_runtime_helper_022b2c90();
  __this_02 = __this_01;
label_043d8953:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae464 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057ae464 = '\x01';
  }
  PhotonExtensions__GetIntProperty
            ((Photon_Realtime_Player_o *)__this_02->m_Items[0],"Kills",0,(MethodInfo *)0x0);
  PhotonExtensions__GetIntProperty
            ((Photon_Realtime_Player_o *)__this_02->m_Items[0],"Deaths",0,(MethodInfo *)0x0);
  PhotonExtensions__GetIntProperty
            ((Photon_Realtime_Player_o *)__this_02->m_Items[0],"HighestDamage",0,(MethodInfo *)0x0);
  PhotonExtensions__GetIntProperty
            ((Photon_Realtime_Player_o *)__this_02->m_Items[0],"TotalDamage",0,(MethodInfo *)0x0);
  return;
}


// UI.PlayerKDRRow$$StatsChanged
// il2cpp: bool UI_PlayerKDRRow__StatsChanged (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x43d8960

bool_conflict UI_PlayerKDRRow__StatsChanged(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  uint3 uVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  bool_conflict bVar6;
  
  if (g_data_057ae464 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057ae464 = '\x01';
  }
  iVar2 = PhotonExtensions__GetIntProperty((__this->fields).player,"Kills",0,(MethodInfo *)0x0);
  iVar3 = PhotonExtensions__GetIntProperty((__this->fields).player,"Deaths",0,(MethodInfo *)0x0);
  iVar4 = PhotonExtensions__GetIntProperty((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0);
  iVar5 = PhotonExtensions__GetIntProperty((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0);
  uVar1 = (uint3)((uint)iVar5 >> 8);
  bVar6 = (bool_conflict)CONCAT71((uint7)uVar1,1);
  if (((*(int *)&(__this->fields).team == iVar2) && (*(int *)((long)&(__this->fields).team + 4) == iVar3)) &&
     ((__this->fields).kills == iVar4)) {
    bVar6 = CONCAT31(uVar1,(__this->fields).deaths != iVar5);
  }
  return bVar6;
}


// UI.PlayerKDRRow$$StatsChanged
// il2cpp: bool UI_PlayerKDRRow__StatsChanged (UI_PlayerKDRRow_o* __this, int32_t kills, int32_t deaths, int32_t maxDamage, int32_t totalDamage, const MethodInfo* method);
// 0x43d8a40

bool_conflict
UI_PlayerKDRRow__StatsChanged_42d8a40
          (UI_PlayerKDRRow_o *__this,int32_t kills,int32_t deaths,int32_t maxDamage,int32_t totalDamage,
          MethodInfo *method)

{
  undefined4 in_EAX;
  bool_conflict bVar1;
  undefined3 uVar2;
  
  uVar2 = (undefined3)((uint)in_EAX >> 8);
  bVar1 = CONCAT31(uVar2,1);
  if (((*(int *)&(__this->fields).team == kills) && (*(int *)((long)&(__this->fields).team + 4) == deaths)) &&
     ((__this->fields).kills == maxDamage)) {
    bVar1 = CONCAT31(uVar2,(__this->fields).deaths != totalDamage);
  }
  return bVar1;
}


// UI.PlayerKDRRow$$GetKillDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetKillDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x43d8a60

int32_t UI_PlayerKDRRow__GetKillDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (g_data_057ae465 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Kills");
    g_data_057ae465 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"Kills",0,(MethodInfo *)0x0);
  return iVar1 - *(int *)&(__this->fields).team;
}


// UI.PlayerKDRRow$$GetDeathDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetDeathDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x43d8aa0

int32_t UI_PlayerKDRRow__GetDeathDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (g_data_057ae466 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Deaths");
    g_data_057ae466 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"Deaths",0,(MethodInfo *)0x0);
  return iVar1 - *(int *)((long)&(__this->fields).team + 4);
}


// UI.PlayerKDRRow$$GetMaxDamageDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetMaxDamageDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x43d8ae0

int32_t UI_PlayerKDRRow__GetMaxDamageDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (g_data_057ae467 == '\0') {
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057ae467 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0);
  return iVar1 - (__this->fields).kills;
}


// UI.PlayerKDRRow$$GetTotalDamageDiff
// il2cpp: int32_t UI_PlayerKDRRow__GetTotalDamageDiff (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x43d8b20

int32_t UI_PlayerKDRRow__GetTotalDamageDiff(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  if (g_data_057ae468 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    g_data_057ae468 = '\x01';
  }
  iVar1 = PhotonExtensions__GetIntProperty((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0);
  return iVar1 - (__this->fields).deaths;
}


// UI.PlayerKDRRow$$UpdateRow
// il2cpp: void UI_PlayerKDRRow__UpdateRow (UI_PlayerKDRRow_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43cfc40

void UI_PlayerKDRRow__UpdateRow(UI_PlayerKDRRow_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  (__this->fields).player = player;
  il2cpp_runtime_helper_022b4080(&(__this->fields).player);
  UI_PlayerKDRRow__UpdateRow_42d8220(__this,(MethodInfo *)player);
  return;
}


// UI.PlayerKDRRow$$UpdateRow
// il2cpp: void UI_PlayerKDRRow__UpdateRow (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x43d8220

void UI_PlayerKDRRow__UpdateRow_42d8220(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  byte bVar2;
  Photon_Realtime_Player_o *pPVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_UI_RawImage_o *__this_00;
  Il2CppClass *pIVar5;
  System_String_o *loadout;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  bool_conflict bVar9;
  uint uVar10;
  int32_t iVar11;
  int32_t iVar12;
  int32_t iVar13;
  int32_t iVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  MethodInfo *pMVar17;
  UnityEngine_Texture_o *value;
  System_String_array *__this_01;
  void *pvVar18;
  Il2CppObject *pIVar19;
  long lVar20;
  undefined8 uVar21;
  UnityEngine_UI_Text_c *method_00;
  MethodInfo *method_01;
  System_String_array *__this_02;
  void *in_R8;
  ulong uVar22;
  int32_t local_54;
  int32_t local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int32_t local_34;
  
  if (g_data_057ae469 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057ae469 = '\x01';
  }
  local_54 = 0;
  pPVar3 = (__this->fields).player;
  if (pPVar3 == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = PhotonExtensions__GetStringProperty
                      (pPVar3,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                       (MethodInfo *)0x0);
  _local_40 = PhotonExtensions__GetStringProperty
                        ((__this->fields).player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),
                         "",(MethodInfo *)0x0);
  pSVar16 = PhotonExtensions__GetStringProperty
                      ((__this->fields).player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),
                       "",(MethodInfo *)0x0);
  method_00 = (UnityEngine_UI_Text_c *)0x0;
  _local_50 = PhotonExtensions__GetStringProperty
                        ((__this->fields).player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),
                         "",(MethodInfo *)0x0);
  pPVar3 = (__this->fields).player;
  __this_01 = (System_String_array *)0x0;
  if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto label_043d894e;
  bVar2 = *(byte *)((long)&(__this->fields).isSet + 1);
  uVar8 = Photon_Realtime_Player__get_IsMasterClient(pPVar3,(MethodInfo *)0x0);
  __this_01 = (System_String_array *)(__this->fields).player;
  if ((uint)bVar2 == (uVar8 & 0xff)) {
    if (__this_01 == (System_String_array *)0x0) goto label_043d894e;
    if (((__this->fields).isMasterClient != (int)__this_01->max_length) ||
       ((char)(__this->fields).isSet == '\0')) goto label_043d83b8;
  }
  else {
    if (__this_01 == (System_String_array *)0x0) goto label_043d894e;
label_043d83b8:
    _local_48 = pSVar15;
    bVar9 = Photon_Realtime_Player__get_IsMasterClient
                      ((Photon_Realtime_Player_o *)__this_01,(MethodInfo *)0x0);
    *(char *)((long)&(__this->fields).isSet + 1) = (char)bVar9;
    __this_01 = (System_String_array *)(__this->fields).player;
    if (__this_01 == (System_String_array *)0x0) goto label_043d894e;
    uVar8 = (uint)__this_01->max_length;
    (__this->fields).isMasterClient = uVar8;
    *(undefined1 *)&(__this->fields).isSet = 1;
    pUVar4 = (__this->fields).id;
    uVar10 = Photon_Realtime_Player__get_IsMasterClient
                       ((Photon_Realtime_Player_o *)__this_01,(MethodInfo *)0x0);
    pPVar3 = (__this->fields).player;
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto label_043d894e;
    bVar9 = (pPVar3->fields).IsLocal;
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = (System_String_array *)(ulong)uVar8;
    pMVar17 = (MethodInfo *)
              GameManagers_ChatManager__GetIDString(uVar8,uVar10 & 0xff,(uint)(byte)bVar9,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) goto label_043d894e;
    method_00 = pUVar4->klass;
    (*(method_00->vtable)._75_set_text.methodPtr)
              ((Il2CppMethodPointer)pUVar4,pMVar17,(method_00->vtable)._75_set_text.method,(void **)method_00,
               in_R8);
    pSVar15 = _local_48;
  }
  bVar9 = System_String__op_Inequality(pSVar16,(__this->fields).status,(MethodInfo *)0x0);
  if (((char)bVar9 != '\0') ||
     (bVar9 = System_String__op_Inequality(_local_50,(__this->fields).character,(MethodInfo *)0x0),
     (char)bVar9 != '\0')) {
    (__this->fields).status = pSVar16;
    il2cpp_runtime_helper_022b4080(&(__this->fields).status,pSVar16);
    loadout = _local_50;
    (__this->fields).character = _local_50;
    il2cpp_runtime_helper_022b4080(&(__this->fields).character,_local_50);
    __this_00 = (__this->fields).weapon;
    __this_01 = (System_String_array *)__this;
    value = UI_PlayerKDRRow__GetPlayerIcon(__this,pSVar16,loadout,(MethodInfo *)method_00);
    if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043d894e;
    UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields).playerName;
  __this_01 = (System_String_array *)0x0;
  if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
    pSVar16 = (System_String_o *)
              (*(pUVar4->klass->vtable)._74_get_text.methodPtr)
                        (pUVar4,(pUVar4->klass->vtable)._74_get_text.method);
    bVar9 = System_String__op_Inequality(pSVar15,pSVar16,(MethodInfo *)0x0);
    pSVar16 = _local_40;
    if (((char)bVar9 != '\0') ||
       (bVar9 = System_String__op_Inequality
                          (_local_40,*(System_String_o **)&(__this->fields).actorNumber,(MethodInfo *)0x0),
       (char)bVar9 != '\0')) {
      *(System_String_o **)&(__this->fields).actorNumber = pSVar16;
      il2cpp_runtime_helper_022b4080(&(__this->fields).actorNumber,pSVar16);
      __this_01 = (System_String_array *)UI_PlayerKDRRow__GetPlayerStatus(__this,pSVar16,method_01);
      pUVar4 = (__this->fields).playerName;
      pSVar15 = System_String__Concat_3af7150
                          ((System_String_o *)__this_01,pSVar15,": ",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) goto label_043d894e;
      (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                (pUVar4,pSVar15,(pUVar4->klass->vtable)._75_set_text.method);
    }
    pPVar3 = (__this->fields).player;
    pSVar15 = (__this->fields).loadout;
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = PhotonExtensions__GetStringProperty
                        (pPVar3,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                         (MethodInfo *)0x0);
    bVar9 = System_String__op_Inequality(pSVar15,pSVar16,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      ppSVar1 = &(__this->fields).loadout;
      pPVar3 = (__this->fields).player;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = PhotonExtensions__GetStringProperty
                          (pPVar3,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),"",
                           (MethodInfo *)0x0);
      *ppSVar1 = pSVar15;
      il2cpp_runtime_helper_022b4080(ppSVar1,pSVar15);
    }
    iVar11 = PhotonExtensions__GetIntProperty((__this->fields).player,"Kills",0,(MethodInfo *)0x0);
    iVar12 = PhotonExtensions__GetIntProperty((__this->fields).player,"Deaths",0,(MethodInfo *)0x0);
    iVar13 = PhotonExtensions__GetIntProperty((__this->fields).player,"HighestDamage",0,(MethodInfo *)0x0);
    iVar14 = PhotonExtensions__GetIntProperty((__this->fields).player,"TotalDamage",0,(MethodInfo *)0x0);
    _local_50 = (System_String_o *)CONCAT44(uStack_4c,iVar14);
    if (*(int *)((long)TypeInfo_CustomLogicManager->m_Items + 0xc4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pvVar18 = TypeInfo_CustomLogicManager->m_Items[0x13]->monitor;
      __this_01 = TypeInfo_CustomLogicManager;
    }
    else {
      pvVar18 = TypeInfo_CustomLogicManager->m_Items[0x13]->monitor;
      __this_01 = TypeInfo_CustomLogicManager;
    }
    TypeInfo_CustomLogicManager = __this_01;
    if (pvVar18 != (void *)0x0) {
      if (*(int *)((long)__this_01->m_Items + 0xc4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pvVar18 = TypeInfo_CustomLogicManager->m_Items[0x13]->monitor;
        if (pvVar18 == (void *)0x0) goto label_043d894e;
      }
      bVar9 = System_String__op_Inequality
                        (*(System_String_o **)((long)pvVar18 + 0x78),
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pPVar3 = (__this->fields).player;
        if (*(int *)((long)TypeInfo_CustomLogicManager->m_Items + 0xc4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pvVar18 = TypeInfo_CustomLogicManager->m_Items[0x13]->monitor;
        __this_01 = TypeInfo_CustomLogicManager;
        if (pvVar18 != (void *)0x0) {
          pIVar19 = PhotonExtensions__GetCustomProperty
                              (pPVar3,*(System_String_o **)((long)pvVar18 + 0x78),(MethodInfo *)0x0);
          if (pIVar19 != (Il2CppObject *)0x0) {
            pSVar15 = (System_String_o *)
                      (*pIVar19->klass->vtable[3].methodPtr)(pIVar19,pIVar19->klass->vtable[3].method);
          }
          pUVar4 = (__this->fields).score;
          __this_01 = (System_String_array *)0x0;
          if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
            pSVar16 = (System_String_o *)
                      (*(pUVar4->klass->vtable)._74_get_text.methodPtr)
                                (pUVar4,(pUVar4->klass->vtable)._74_get_text.method);
            bVar9 = System_String__op_Inequality(pSVar15,pSVar16,(MethodInfo *)0x0);
            if ((char)bVar9 == '\0') {
              return;
            }
            pUVar4 = (__this->fields).score;
            __this_01 = (System_String_array *)0x0;
            if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                        (pUVar4,pSVar15,(pUVar4->klass->vtable)._75_set_text.method);
              return;
            }
          }
        }
        goto label_043d894e;
      }
    }
    _local_48 = (System_String_o *)CONCAT44(uStack_44,iVar12);
    _local_40 = (System_String_o *)CONCAT44(uStack_3c,iVar11);
    __this_02 = (__this->fields).trackedProperties;
    __this_01 = __this_02;
    local_34 = iVar13;
    if (__this_02 != (System_String_array *)0x0) {
      System_Text_StringBuilder__Clear((System_Text_StringBuilder_o *)__this_02,(MethodInfo *)0x0);
      lVar20 = *(long *)&(__this->fields).maxDamage;
      __this_01 = __this_02;
      if (lVar20 != 0) {
        uVar22 = 0;
        uVar8 = *(uint *)(lVar20 + 0x18);
        if (0 < (int)uVar8) {
          do {
            if (uVar8 <= uVar22) goto label_043d8953;
            local_54 = PhotonExtensions__GetIntProperty
                                 ((__this->fields).player,*(System_String_o **)(lVar20 + 0x20 + uVar22 * 8),0,
                                  (MethodInfo *)0x0);
            __this_02 = (__this->fields).trackedProperties;
            __this_01 = (System_String_array *)&stack0xffffffffffffffac;
            pSVar15 = System_Int32__ToString
                                ((int32_t)(System_String_array *)&stack0xffffffffffffffac,(MethodInfo *)0x0);
            if (__this_02 == (System_String_array *)0x0) goto label_043d894e;
            System_Text_StringBuilder__Append_3b03f90
                      ((System_Text_StringBuilder_o *)__this_02,pSVar15,(MethodInfo *)0x0);
            lVar20 = *(long *)&(__this->fields).maxDamage;
            __this_01 = __this_02;
            if (lVar20 == 0) goto label_043d894e;
            if ((long)uVar22 < (*(long *)(lVar20 + 0x18) << 0x20) + -0x100000000 >> 0x20) {
              __this_02 = (__this->fields).trackedProperties;
              __this_01 = __this_02;
              if (__this_02 == (System_String_array *)0x0) goto label_043d894e;
              System_Text_StringBuilder__Append_3b03f90
                        ((System_Text_StringBuilder_o *)__this_02,"/",(MethodInfo *)0x0);
              lVar20._0_4_ = (__this->fields).maxDamage;
              lVar20._4_4_ = (__this->fields).totalDamage;
            }
            uVar22 = uVar22 + 1;
            __this_01 = __this_02;
            if (lVar20 == 0) goto label_043d894e;
            uVar8 = *(uint *)(lVar20 + 0x18);
          } while ((long)uVar22 < (long)(int)uVar8);
        }
        __this_01 = (__this->fields).trackedProperties;
        if (__this_01 != (System_String_array *)0x0) {
          pUVar4 = (__this->fields).score;
          pIVar5 = (__this_01->obj).klass;
          uVar21 = (*(((Photon_Realtime_Player_VTable *)pIVar5->vtable)->_3_ToString).methodPtr)
                             (__this_01,
                              (((Photon_Realtime_Player_VTable *)pIVar5->vtable)->_3_ToString).method);
          iVar11 = local_34;
          uVar7 = local_40;
          uVar6 = local_48;
          if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                      (pUVar4,uVar21,(pUVar4->klass->vtable)._75_set_text.method);
            *(undefined4 *)&(__this->fields).team = uVar7;
            *(undefined4 *)((long)&(__this->fields).team + 4) = uVar6;
            (__this->fields).kills = iVar11;
            (__this->fields).deaths = local_50;
            return;
          }
        }
      }
    }
  }
label_043d894e:
  il2cpp_runtime_helper_022b2c90();
  __this_02 = __this_01;
label_043d8953:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae464 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057ae464 = '\x01';
  }
  PhotonExtensions__GetIntProperty
            ((Photon_Realtime_Player_o *)__this_02->m_Items[0],"Kills",0,(MethodInfo *)0x0);
  PhotonExtensions__GetIntProperty
            ((Photon_Realtime_Player_o *)__this_02->m_Items[0],"Deaths",0,(MethodInfo *)0x0);
  PhotonExtensions__GetIntProperty
            ((Photon_Realtime_Player_o *)__this_02->m_Items[0],"HighestDamage",0,(MethodInfo *)0x0);
  PhotonExtensions__GetIntProperty
            ((Photon_Realtime_Player_o *)__this_02->m_Items[0],"TotalDamage",0,(MethodInfo *)0x0);
  return;
}


// UI.PlayerKDRRow$$GetPlayerStatus
// il2cpp: System_String_o* UI_PlayerKDRRow__GetPlayerStatus (UI_PlayerKDRRow_o* __this, System_String_o* status, const MethodInfo* method);
// 0x43d8fe0

System_String_o *
UI_PlayerKDRRow__GetPlayerStatus(UI_PlayerKDRRow_o *__this,System_String_o *status,MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  UnityEngine_MonoBehaviour_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_MonoBehaviour_c *pUVar4;
  System_Text_StringBuilder_o *pSVar5;
  System_String_o *extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_String_o *loadout;
  undefined8 *puVar6;
  UI_PlayerKDRRow_o *__this_01;
  Il2CppType *pIVar7;
  
  pSVar3 = status;
  __this_01 = __this;
  if (g_data_057ae46a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    __this_01 = (UI_PlayerKDRRow_o *)&" <color=red>*dead*</color> ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae46a = '\x01';
  }
  pSVar5 = (__this->fields)._scoreBuilder;
  if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    method_00 = in_RCX;
    if (g_data_057ae46c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Texture);
      il2cpp_runtime_helper_023445d0(&"Icons/Game/SpectatingIcon");
      il2cpp_runtime_helper_023445d0(&"Icons/Quests/Skull1Icon");
      g_data_057ae46c = '\x01';
    }
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)in_RCX,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = System_String__op_Equality
                        ((System_String_o *)in_RCX,
                         *(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar3 = (System_String_o *)UI_PlayerKDRRow__GetPlayerIcon(__this_01,pSVar3,loadout,method_00);
        return pSVar3;
      }
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      puVar6 = &"Icons/Game/SpectatingIcon";
    }
    else {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      puVar6 = &"Icons/Quests/Skull1Icon";
    }
    __this_00 = (UnityEngine_MonoBehaviour_o *)
                ApplicationManagers_ResourceManager__LoadAsset
                          (pSVar3,(System_String_o *)*puVar6,1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
      bVar1 = (TypeInfo_Texture->_2).naturalAligment;
      if (((((System_String_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
         ((((System_String_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Texture)) {
        il2cpp_runtime_helper_022b2fd0();
        if (g_data_057ae46d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
          il2cpp_runtime_helper_023445d0(&TypeInfo_string);
          il2cpp_runtime_helper_023445d0(&"Kills");
          il2cpp_runtime_helper_023445d0(&"Deaths");
          il2cpp_runtime_helper_023445d0(&"TotalDamage");
          il2cpp_runtime_helper_023445d0(&"HighestDamage");
          g_data_057ae46d = '\x01';
        }
        pIVar7 = TypeInfo_string;
        pUVar4 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
        if (pUVar4 != (UnityEngine_MonoBehaviour_c *)0x0) {
          if (*(int *)&(pUVar4->_1).namespaze != 0) {
            pIVar7 = &(pUVar4->_1).byval_arg;
            (pUVar4->_1).byval_arg.data = "Kills";
            il2cpp_runtime_helper_022b4080();
            if (1 < *(uint *)&(pUVar4->_1).namespaze) {
              pIVar7 = (Il2CppType *)&(pUVar4->_1).byval_arg.bits;
              *(undefined8 *)&(pUVar4->_1).byval_arg.bits = "Deaths";
              il2cpp_runtime_helper_022b4080();
              if (2 < *(uint *)&(pUVar4->_1).namespaze) {
                pIVar7 = &(pUVar4->_1).this_arg;
                (pUVar4->_1).this_arg.data = "HighestDamage";
                il2cpp_runtime_helper_022b4080();
                if (3 < *(uint *)&(pUVar4->_1).namespaze) {
                  *(undefined8 *)&(pUVar4->_1).this_arg.bits = "TotalDamage";
                  il2cpp_runtime_helper_022b4080(&(pUVar4->_1).this_arg.bits);
                  __this_00[4].klass = pUVar4;
                  il2cpp_runtime_helper_022b4080(__this_00 + 4);
                  pSVar5 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
                  System_Text_StringBuilder___ctor(pSVar5,(MethodInfo *)0x0);
                  __this_00[4].monitor = pSVar5;
                  il2cpp_runtime_helper_022b4080(&__this_00[4].monitor);
                  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
                  return extraout_RAX;
                }
              }
            }
          }
          il2cpp_runtime_helper_022b2ca0();
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae46e == '\0') {
          il2cpp_runtime_helper_023445d0(&"Edit Prop");
          il2cpp_runtime_helper_023445d0(&"Add Prop");
          g_data_057ae46e = '\x01';
        }
        if (*(char *)((long)(pIVar7 + 0xc) + 8) == '\0') {
          return "Edit Prop";
        }
        return "Add Prop";
      }
    }
    return (System_String_o *)__this_00;
  }
  if (*(char *)((long)&pSVar5[1].fields.m_ChunkLength + 1) != '\0') {
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_String__op_Equality
                      (status,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),(MethodInfo *)0x0);
    puVar6 = &" <color=red>*dead*</color> ";
    if ((char)bVar2 != '\0') goto label_043d90a6;
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_String__op_Equality
                      (status,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') goto label_043d90a6;
  }
  puVar6 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
label_043d90a6:
  return (System_String_o *)*puVar6;
}


// UI.PlayerKDRRow$$GetPlayerIcon
// il2cpp: UnityEngine_Texture_o* UI_PlayerKDRRow__GetPlayerIcon (UI_PlayerKDRRow_o* __this, System_String_o* character, System_String_o* loadout, const MethodInfo* method);
// 0x43d8b60

UnityEngine_Texture_o *
UI_PlayerKDRRow__GetPlayerIcon
          (UI_PlayerKDRRow_o *__this,System_String_o *character,System_String_o *loadout,MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  UnityEngine_MonoBehaviour_o *__this_00;
  UnityEngine_Texture_o *pUVar4;
  UnityEngine_MonoBehaviour_c *pUVar5;
  System_Text_StringBuilder_o *pSVar6;
  UnityEngine_Texture_o *extraout_RAX;
  MethodInfo *method_00;
  System_String_o *loadout_00;
  System_String_o *pSVar7;
  Il2CppClass *a;
  Il2CppClass *character_00;
  UI_PlayerKDRRow_o *pUVar8;
  UI_PlayerKDRRow_o *__this_01;
  Il2CppType *pIVar9;
  
  a = (Il2CppClass *)character;
  pUVar8 = __this;
  if (g_data_057ae46b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture);
    il2cpp_runtime_helper_023445d0(&"Icons/Game/ShifterIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/ThunderSpearIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/APGIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/BladeIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Specials/NoneSpecialIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/AHSSIcon");
    pUVar8 = (UI_PlayerKDRRow_o *)&"Icons/Game/TitanIcon";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae46b = '\x01';
  }
  pSVar6 = (__this->fields)._scoreBuilder;
  if (pSVar6 != (System_Text_StringBuilder_o *)0x0) {
    if ((char)pSVar6[1].fields.m_ChunkLength == '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      puVar3 = &"Icons/Specials/NoneSpecialIcon";
    }
    else {
      if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = System_String__op_Equality
                        (character,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),(MethodInfo *)0x0
                        );
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_String__op_Equality
                          (character,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                           (MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar2 = System_String__op_Equality
                            (character,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),
                             (MethodInfo *)0x0);
          if ((char)bVar2 == '\0') goto label_043d8f36;
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          puVar3 = &"Icons/Game/ShifterIcon";
        }
        else {
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          puVar3 = &"Icons/Game/TitanIcon";
        }
      }
      else {
        if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_String__op_Equality
                          (loadout,(System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),(MethodInfo *)0x0
                          );
        if ((char)bVar2 == '\0') {
          if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar2 = System_String__op_Equality
                            (loadout,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8),
                             (MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar2 = System_String__op_Equality
                              (loadout,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),
                               (MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar2 = System_String__op_Equality
                                (loadout,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),
                                 (MethodInfo *)0x0);
              if ((char)bVar2 == '\0') goto label_043d8f36;
              if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              puVar3 = &"Icons/Game/ThunderSpearIcon";
            }
            else {
              if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              puVar3 = &"Icons/Game/APGIcon";
            }
          }
          else {
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            puVar3 = &"Icons/Game/AHSSIcon";
          }
        }
        else {
label_043d8f36:
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          puVar3 = &"Icons/Game/BladeIcon";
        }
      }
    }
    pUVar8 = (UI_PlayerKDRRow_o *)
             ApplicationManagers_ResourceManager__LoadAsset
                       (pSVar7,(System_String_o *)*puVar3,1,(MethodInfo *)0x0);
    if (pUVar8 == (UI_PlayerKDRRow_o *)0x0) {
      return (UnityEngine_Texture_o *)0x0;
    }
    bVar1 = (TypeInfo_Texture->_2).naturalAligment;
    method = (MethodInfo *)(ulong)bVar1;
    if ((bVar1 <= (((UnityEngine_Texture_c *)pUVar8->klass)->_2).naturalAligment) &&
       ((((UnityEngine_Texture_c *)pUVar8->klass)->_2).typeHierarchy[(long)&method[-1].field_0x57] ==
        TypeInfo_Texture)) {
      return (UnityEngine_Texture_o *)pUVar8;
    }
    a = TypeInfo_Texture;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  character_00 = a;
  __this_01 = pUVar8;
  if (g_data_057ae46a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    __this_01 = (UI_PlayerKDRRow_o *)&" <color=red>*dead*</color> ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae46a = '\x01';
  }
  pSVar6 = (pUVar8->fields)._scoreBuilder;
  if (pSVar6 == (System_Text_StringBuilder_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    method_00 = method;
    if (g_data_057ae46c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Texture);
      il2cpp_runtime_helper_023445d0(&"Icons/Game/SpectatingIcon");
      il2cpp_runtime_helper_023445d0(&"Icons/Quests/Skull1Icon");
      g_data_057ae46c = '\x01';
    }
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)method,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = System_String__op_Equality
                        ((System_String_o *)method,
                         *(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pUVar4 = UI_PlayerKDRRow__GetPlayerIcon
                           (__this_01,(System_String_o *)character_00,loadout_00,method_00);
        return pUVar4;
      }
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      puVar3 = &"Icons/Game/SpectatingIcon";
    }
    else {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      puVar3 = &"Icons/Quests/Skull1Icon";
    }
    __this_00 = (UnityEngine_MonoBehaviour_o *)
                ApplicationManagers_ResourceManager__LoadAsset
                          (pSVar7,(System_String_o *)*puVar3,1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
      bVar1 = (TypeInfo_Texture->_2).naturalAligment;
      if (((((UnityEngine_Texture_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
         ((((UnityEngine_Texture_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Texture))
      {
        il2cpp_runtime_helper_022b2fd0();
        if (g_data_057ae46d == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
          il2cpp_runtime_helper_023445d0(&TypeInfo_string);
          il2cpp_runtime_helper_023445d0(&"Kills");
          il2cpp_runtime_helper_023445d0(&"Deaths");
          il2cpp_runtime_helper_023445d0(&"TotalDamage");
          il2cpp_runtime_helper_023445d0(&"HighestDamage");
          g_data_057ae46d = '\x01';
        }
        pIVar9 = TypeInfo_string;
        pUVar5 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
        if (pUVar5 != (UnityEngine_MonoBehaviour_c *)0x0) {
          if (*(int *)&(pUVar5->_1).namespaze != 0) {
            pIVar9 = &(pUVar5->_1).byval_arg;
            (pUVar5->_1).byval_arg.data = "Kills";
            il2cpp_runtime_helper_022b4080();
            if (1 < *(uint *)&(pUVar5->_1).namespaze) {
              pIVar9 = (Il2CppType *)&(pUVar5->_1).byval_arg.bits;
              *(undefined8 *)&(pUVar5->_1).byval_arg.bits = "Deaths";
              il2cpp_runtime_helper_022b4080();
              if (2 < *(uint *)&(pUVar5->_1).namespaze) {
                pIVar9 = &(pUVar5->_1).this_arg;
                (pUVar5->_1).this_arg.data = "HighestDamage";
                il2cpp_runtime_helper_022b4080();
                if (3 < *(uint *)&(pUVar5->_1).namespaze) {
                  *(undefined8 *)&(pUVar5->_1).this_arg.bits = "TotalDamage";
                  il2cpp_runtime_helper_022b4080(&(pUVar5->_1).this_arg.bits);
                  __this_00[4].klass = pUVar5;
                  il2cpp_runtime_helper_022b4080(__this_00 + 4);
                  pSVar6 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
                  System_Text_StringBuilder___ctor(pSVar6,(MethodInfo *)0x0);
                  __this_00[4].monitor = pSVar6;
                  il2cpp_runtime_helper_022b4080(&__this_00[4].monitor);
                  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
                  return extraout_RAX;
                }
              }
            }
          }
          il2cpp_runtime_helper_022b2ca0();
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae46e == '\0') {
          il2cpp_runtime_helper_023445d0(&"Edit Prop");
          il2cpp_runtime_helper_023445d0(&"Add Prop");
          g_data_057ae46e = '\x01';
        }
        if (*(char *)((long)(pIVar9 + 0xc) + 8) != '\0') {
          return "Add Prop";
        }
        return "Edit Prop";
      }
    }
    return (UnityEngine_Texture_o *)__this_00;
  }
  if (*(char *)((long)&pSVar6[1].fields.m_ChunkLength + 1) != '\0') {
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)a,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),
                       (MethodInfo *)0x0);
    puVar3 = &" <color=red>*dead*</color> ";
    if ((char)bVar2 != '\0') goto label_043d90a6;
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)a,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    if ((char)bVar2 != '\0') goto label_043d90a6;
  }
  puVar3 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
label_043d90a6:
  return (UnityEngine_Texture_o *)*puVar3;
}


// UI.PlayerKDRRow$$GetPlayerIconFull
// il2cpp: UnityEngine_Texture_o* UI_PlayerKDRRow__GetPlayerIconFull (UI_PlayerKDRRow_o* __this, System_String_o* character, System_String_o* loadout, System_String_o* status, const MethodInfo* method);
// 0x43d90c0

UnityEngine_Texture_o *
UI_PlayerKDRRow__GetPlayerIconFull
          (UI_PlayerKDRRow_o *__this,System_String_o *character,System_String_o *loadout,
          System_String_o *status,MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  UnityEngine_MonoBehaviour_o *__this_00;
  UnityEngine_Texture_o *pUVar4;
  UnityEngine_MonoBehaviour_c *pUVar5;
  System_Text_StringBuilder_o *__this_01;
  UnityEngine_Texture_o *extraout_RAX;
  MethodInfo *method_00;
  System_String_o *path;
  Il2CppType *pIVar6;
  
  method_00 = (MethodInfo *)status;
  if (g_data_057ae46c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture);
    il2cpp_runtime_helper_023445d0(&"Icons/Game/SpectatingIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/Skull1Icon");
    g_data_057ae46c = '\x01';
  }
  if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = System_String__op_Equality
                    (status,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_String__op_Equality
                      (status,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pUVar4 = UI_PlayerKDRRow__GetPlayerIcon(__this,character,loadout,method_00);
      return pUVar4;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    puVar3 = &"Icons/Game/SpectatingIcon";
  }
  else {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    puVar3 = &"Icons/Quests/Skull1Icon";
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (path,(System_String_o *)*puVar3,1,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_Texture->_2).naturalAligment;
    if (((((UnityEngine_Texture_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
       ((((UnityEngine_Texture_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Texture)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057ae46d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
        il2cpp_runtime_helper_023445d0(&TypeInfo_string);
        il2cpp_runtime_helper_023445d0(&"Kills");
        il2cpp_runtime_helper_023445d0(&"Deaths");
        il2cpp_runtime_helper_023445d0(&"TotalDamage");
        il2cpp_runtime_helper_023445d0(&"HighestDamage");
        g_data_057ae46d = '\x01';
      }
      pIVar6 = TypeInfo_string;
      pUVar5 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
      if (pUVar5 != (UnityEngine_MonoBehaviour_c *)0x0) {
        if (*(int *)&(pUVar5->_1).namespaze != 0) {
          pIVar6 = &(pUVar5->_1).byval_arg;
          (pUVar5->_1).byval_arg.data = "Kills";
          il2cpp_runtime_helper_022b4080();
          if (1 < *(uint *)&(pUVar5->_1).namespaze) {
            pIVar6 = (Il2CppType *)&(pUVar5->_1).byval_arg.bits;
            *(undefined8 *)&(pUVar5->_1).byval_arg.bits = "Deaths";
            il2cpp_runtime_helper_022b4080();
            if (2 < *(uint *)&(pUVar5->_1).namespaze) {
              pIVar6 = &(pUVar5->_1).this_arg;
              (pUVar5->_1).this_arg.data = "HighestDamage";
              il2cpp_runtime_helper_022b4080();
              if (3 < *(uint *)&(pUVar5->_1).namespaze) {
                *(undefined8 *)&(pUVar5->_1).this_arg.bits = "TotalDamage";
                il2cpp_runtime_helper_022b4080(&(pUVar5->_1).this_arg.bits);
                __this_00[4].klass = pUVar5;
                il2cpp_runtime_helper_022b4080(__this_00 + 4);
                __this_01 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
                System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
                __this_00[4].monitor = __this_01;
                il2cpp_runtime_helper_022b4080(&__this_00[4].monitor);
                UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
                return extraout_RAX;
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae46e == '\0') {
        il2cpp_runtime_helper_023445d0(&"Edit Prop");
        il2cpp_runtime_helper_023445d0(&"Add Prop");
        g_data_057ae46e = '\x01';
      }
      if (*(char *)((long)(pIVar6 + 0xc) + 8) == '\0') {
        return "Edit Prop";
      }
      return "Add Prop";
    }
  }
  return (UnityEngine_Texture_o *)__this_00;
}


// UI.PlayerKDRRow$$.ctor
// il2cpp: void UI_PlayerKDRRow___ctor (UI_PlayerKDRRow_o* __this, const MethodInfo* method);
// 0x43d9290

void UI_PlayerKDRRow___ctor(UI_PlayerKDRRow_o *__this,MethodInfo *method)

{
  long lVar1;
  System_String_array *__this_00;
  long lVar2;
  
  if (g_data_057ae46d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057ae46d = '\x01';
  }
  lVar2 = TypeInfo_string;
  lVar1 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      lVar2 = lVar1 + 0x20;
      *(undefined8 *)(lVar1 + 0x20) = "Kills";
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar1 + 0x18)) {
        lVar2 = lVar1 + 0x28;
        *(undefined8 *)(lVar1 + 0x28) = "Deaths";
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar1 + 0x18)) {
          lVar2 = lVar1 + 0x30;
          *(undefined8 *)(lVar1 + 0x30) = "HighestDamage";
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x38) = "TotalDamage";
            il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
            (__this->fields).maxDamage = (int)lVar1;
            (__this->fields).totalDamage = (int)((ulong)lVar1 >> 0x20);
            il2cpp_runtime_helper_022b4080(&(__this->fields).maxDamage);
            __this_00 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
            System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this_00,(MethodInfo *)0x0);
            (__this->fields).trackedProperties = __this_00;
            il2cpp_runtime_helper_022b4080(&(__this->fields).trackedProperties);
            UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae46e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Edit Prop");
    il2cpp_runtime_helper_023445d0(&"Add Prop");
    g_data_057ae46e = '\x01';
  }
  if (*(char *)(lVar2 + 200) == '\0') {
    return;
  }
  return;
}


