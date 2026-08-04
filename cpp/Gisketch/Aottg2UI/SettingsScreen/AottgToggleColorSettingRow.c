// Type: Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgToggleColorSettingRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x4466640

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._descriptor = descriptor;
  il2cpp_runtime_helper_022b4080(&__this->fields,descriptor);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4466670

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  long *plVar2;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter;
  System_String_o *searchKeywords;
  System_String_o *icon;
  byte bVar3;
  uint uVar4;
  System_Nullable_bool__Fields buildControl;
  System_Nullable_bool__Fields SVar5;
  System_Nullable_bool__Fields build;
  System_Nullable_bool__Fields SVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  MethodInfo *method_00;
  System_Action_GisketchActionContext__o *pSVar11;
  long lVar12;
  System_Action_o *pSVar13;
  System_String_o *unaff_RBP;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *id;
  System_Nullable_bool__Fields SVar14;
  System_Nullable_bool__Fields __this_01;
  long lVar15;
  System_String_o *unaff_R15;
  long in_stack_fffffffffffffe90;
  undefined2 uStack_132;
  System_Nullable_bool__Fields SStack_130;
  System_Nullable_bool__Fields SStack_128;
  System_Nullable_bool__Fields SStack_120;
  System_Nullable_bool__Fields SStack_118;
  System_Nullable_bool__Fields SStack_110;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_108;
  System_String_o *pSStack_100;
  System_String_o *pSStack_f8;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (g_data_057ae7c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingRowFrame);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildControl);
    g_data_057ae7c8 = '\x01';
  }
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    return;
  }
  id = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar1->fields).Id;
  pSVar8 = (pGVar1->fields).Label;
  buildControl = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)__this;
  SVar6 = buildControl;
  System_Action_object____ctor();
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    unaff_RBP = (pGVar1->fields).Tooltip;
    unaff_R15 = (pGVar1->fields).SearchTitle;
    searchKeywords = (pGVar1->fields).SearchKeywords;
    icon = (pGVar1->fields).Icon;
    SVar5 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_AottgSettingRowFrame);
    SVar6 = SVar5;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
              ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *)SVar5,(System_String_o *)id,pSVar8,
               200.0,(System_Action_AottgUi__o *)buildControl,unaff_RBP,unaff_R15,searchKeywords,icon,
               (System_Nullable_float__o)0x0,in_stack_ffffffffffffffa0);
    __this_00 = id;
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)SVar5,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7c9 == '\0') {
    pSStack_f8 = (System_String_o *)0x44667c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    pSStack_f8 = (System_String_o *)0x44667d2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildControl_b__3_0);
    pSStack_f8 = (System_String_o *)0x44667de;
    il2cpp_runtime_helper_023445d0(&"clear");
    pSStack_f8 = (System_String_o *)0x44667ea;
    il2cpp_runtime_helper_023445d0(&"Center");
    pSStack_f8 = (System_String_o *)0x44667f6;
    il2cpp_runtime_helper_023445d0(&"Row");
    pSStack_f8 = (System_String_o *)0x4466802;
    il2cpp_runtime_helper_023445d0(&"-toggle-color");
    g_data_057ae7c9 = '\x01';
  }
  pSStack_f8 = (System_String_o *)0x4466818;
  build = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  pSStack_f8 = (System_String_o *)0x4466832;
  SVar5 = SVar6;
  SVar14 = build;
  System_Action_object____ctor();
  if (*(long *)((long)SVar6 + 0x10) != 0) {
    pSStack_f8 = (System_String_o *)0x4466854;
    unaff_R15 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)(*(long *)((long)SVar6 + 0x10) + 0x10),"-toggle-color",
                           (MethodInfo *)0x0);
    pSStack_f8 = (System_String_o *)0x4466866;
    SVar6 = (System_Nullable_bool__Fields)Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
    pSStack_f8 = (System_String_o *)0x4466878;
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSStack_f8 = (System_String_o *)0x4466906;
    SVar5 = "Center";
    SVar14 = "Row";
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)"Center",
                        (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,10.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)SVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pSStack_f8 = (System_String_o *)0x4466931;
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (__this_00,"clear",(System_Action_AottgUi__o *)build,unaff_R15,pGVar7,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  pSStack_f8 = (System_String_o *)0x4466942;
  il2cpp_runtime_helper_022b2c90();
  __this_01 = SVar14;
  SStack_120 = SVar6;
  SStack_118 = build;
  SStack_110 = buildControl;
  pGStack_108 = __this_00;
  pSStack_100 = unaff_R15;
  pSStack_f8 = unaff_RBP;
  if (g_data_057ae7ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Changed);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildControl_b__3_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    __this_01 = (System_Nullable_bool__Fields)&"-switch";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7ca = '\x01';
  }
  if (*(long *)((long)SVar14 + 0x10) != 0) {
    __this_01 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar14 + 0x10) + 0x10);
    pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)__this_01,"-switch",(MethodInfo *)0x0);
    if (*(long *)((long)SVar14 + 0x10) != 0) {
      plVar2 = *(long **)(*(long *)((long)SVar14 + 0x10) + 0x28);
      if (plVar2 == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        lVar12 = *plVar2;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar15) == TypeInfo_IAottgSettingAdapter) {
              puVar9 = (undefined8 *)
                       ((long)(*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar15) + 2) * 0x10 + lVar12 + 0x138);
              goto label_04466a94;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar15);
        }
        puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IAottgSettingAdapter,2);
label_04466a94:
        uVar4 = (*(code *)*puVar9)(plVar2,puVar9[1]);
      }
      SVar6 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      __this_01 = SVar6;
      System_Action_GisketchActionContext____ctor();
      if (SVar5 != (System_Nullable_bool__Fields)0x0) {
        __this_01 = SVar5;
        pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Switch
                            ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar5,pSVar8,uVar4 & 0xff,
                             (System_Action_GisketchActionContext__o *)SVar6,(MethodInfo *)0x0);
        if (*(long *)((long)SVar14 + 0x10) != 0) {
          uStack_132 = 0;
          __this_01 = (System_Nullable_bool__Fields)&uStack_132;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o)__this_01,
                     (uint)(*(char *)(*(long *)((long)SVar14 + 0x10) + 0x58) == '\0'),MethodInfo_Nullable_1_Boolean);
          if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            *(undefined2 *)((long)&(pGVar10->fields).hasIcon + 3) = uStack_132;
            SStack_130 = SVar5;
            method_00 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
            in_stack_fffffffffffffe90 = 0;
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ((System_String_o *)"Row",(System_String_o *)"Center",
                                (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,
                                0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            __this_01 = (System_Nullable_bool__Fields)&(pGVar10->fields).search;
            (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
            il2cpp_runtime_helper_022b4080(__this_01,pGVar7);
            lVar12 = *(long *)((long)SVar14 + 0x10);
            if (lVar12 != 0) {
              adapter = *(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o **)(lVar12 + 0x30);
              uVar4 = 1;
              if ((*(char *)(lVar12 + 0x58) != '\0') ||
                 (__this_01 = *(System_Nullable_bool__Fields *)(lVar12 + 0x28),
                 __this_01 == (System_Nullable_bool__Fields)0x0)) {
label_04466caf:
                pSVar8 = *(System_String_o **)(lVar12 + 0x10);
                pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
                System_Action_GisketchActionContext____ctor();
                Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_435d080
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SStack_130,adapter,uVar4,pSVar8,pSVar11,
                           method_00);
                return;
              }
              lVar12 = *(long *)__this_01;
              SStack_128 = SStack_130;
              if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
                lVar15 = 0;
                do {
                  if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar15) == TypeInfo_IAottgSettingAdapter) {
                    puVar9 = (undefined8 *)
                             ((long)(*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar15) + 2) * 0x10 + lVar12 +
                             0x138);
                    goto label_04466c89;
                  }
                  lVar15 = lVar15 + 0x10;
                } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar15);
              }
              puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(__this_01,TypeInfo_IAottgSettingAdapter,2);
label_04466c89:
              bVar3 = (*(code *)*puVar9)(__this_01,puVar9[1]);
              lVar12 = *(long *)((long)SVar14 + 0x10);
              if (lVar12 != 0) {
                uVar4 = (uint)(bVar3 ^ 1);
                SStack_130 = SStack_128;
                goto label_04466caf;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SVar6 = __this_01;
  if (g_data_057ae7cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar6 = (System_Nullable_bool__Fields)&"true";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7cb = '\x01';
  }
  lVar12 = *(long *)((long)__this_01 + 0x10);
  if (lVar12 != 0) {
    SVar6 = *(System_Nullable_bool__Fields *)(lVar12 + 0x28);
    if (SVar6 != (System_Nullable_bool__Fields)0x0) {
      if (in_stack_fffffffffffffe90 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = System_String__op_Equality
                          (*(System_String_o **)(in_stack_fffffffffffffe90 + 0x50),"true",
                           (MethodInfo *)0x0);
      }
      lVar12 = *(long *)SVar6;
      if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar15) == TypeInfo_IAottgSettingAdapter) {
            puVar9 = (undefined8 *)
                     (lVar12 + (long)(*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar15) + 8) * 0x10 + 0x138);
            goto label_04466e05;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar15);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar6,TypeInfo_IAottgSettingAdapter,8);
label_04466e05:
      (*(code *)*puVar9)(SVar6,uVar4 & 0xff,puVar9[1]);
      lVar12 = *(long *)((long)__this_01 + 0x10);
      if (lVar12 == 0) goto label_04466e78;
    }
    lVar12 = *(long *)(lVar12 + 0x88);
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
    }
    return;
  }
label_04466e78:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LoginWithEmail);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_2);
    il2cpp_runtime_helper_023445d0(&"account.login.discord");
    il2cpp_runtime_helper_023445d0(&"account.login.email");
    il2cpp_runtime_helper_023445d0(&"account.login.google");
    il2cpp_runtime_helper_023445d0(&"account.openLogin");
    g_data_057ae7cc = '\x01';
  }
  pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.openLogin",pSVar11,(MethodInfo *)0x0);
  pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.login.email",pSVar11,(MethodInfo *)0x0);
  pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.login.discord",pSVar11,(MethodInfo *)0x0);
  pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.login.google",pSVar11,(MethodInfo *)0x0);
  if (g_data_057ae7e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ForgotPassword);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GoOffline);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GoOnline);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Logout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshAccount);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterWithEmail);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetKeepSignedIn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account.openForgotPassword");
    il2cpp_runtime_helper_023445d0(&"account.openRegister");
    il2cpp_runtime_helper_023445d0(&"account.details");
    il2cpp_runtime_helper_023445d0(&"account.goOffline");
    il2cpp_runtime_helper_023445d0(&"account.goOnline");
    il2cpp_runtime_helper_023445d0(&"account.logout");
    il2cpp_runtime_helper_023445d0(&"account.keepSignedIn");
    il2cpp_runtime_helper_023445d0(&"account.forgotPassword");
    il2cpp_runtime_helper_023445d0(&"account.refresh");
    il2cpp_runtime_helper_023445d0(&"account.register.email");
    g_data_057ae7e3 = '\x01';
  }
  pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.openRegister",pSVar11,(MethodInfo *)0x0);
  pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.openForgotPassword",pSVar11,(MethodInfo *)0x0);
  pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.keepSignedIn",pSVar11,(MethodInfo *)0x0);
  pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.register.email",pSVar11,(MethodInfo *)0x0);
  pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.forgotPassword",pSVar11,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "account.details";
  pSVar11 = *(System_Action_GisketchActionContext__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar11 == (System_Action_GisketchActionContext__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    lVar12 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_GisketchActionContext__o **)(lVar12 + 8) = pSVar11;
    il2cpp_runtime_helper_022b4080(lVar12 + 8,pSVar11);
  }
  if (SVar6 != (System_Nullable_bool__Fields)0x0) {
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,pSVar8,pSVar11,(MethodInfo *)0x0);
    pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.refresh",pSVar11,(MethodInfo *)0x0)
    ;
    pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.logout",pSVar11,(MethodInfo *)0x0)
    ;
    pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.goOffline",pSVar11,(MethodInfo *)0x0)
    ;
    pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar6,"account.goOnline",pSVar11,(MethodInfo *)0x0)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAccountLoggedIn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAccountLoggedOut);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshAccountState);
    g_data_057ae7cd = '\x01';
  }
  pSVar13 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar13,(MethodInfo *)0x0);
  pSVar13 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar13,(MethodInfo *)0x0);
  pSVar13 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__add_OnAuthMethodsChanged(pSVar13,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$BuildControl
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__BuildControl (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x44667a0

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow__BuildControl
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar1;
  long *plVar2;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter;
  byte bVar3;
  uint uVar4;
  System_Nullable_bool__Fields SVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  undefined8 *puVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  MethodInfo *method_00;
  System_Action_GisketchActionContext__o *pSVar10;
  long lVar11;
  System_Action_o *pSVar12;
  System_Nullable_bool__Fields SVar13;
  System_Nullable_bool__Fields __this_00;
  long lVar14;
  System_Nullable_bool__Fields SVar15;
  long in_stack_ffffffffffffff08;
  undefined2 uStack_ba;
  System_Nullable_bool__Fields SStack_b8;
  System_Nullable_bool__Fields SStack_b0;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGStack_a8;
  System_Nullable_bool__Fields SStack_a0;
  
  if (g_data_057ae7c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildControl_b__3_0);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"-toggle-color");
    g_data_057ae7c9 = '\x01';
  }
  SVar5 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  SVar15 = (System_Nullable_bool__Fields)__this;
  SVar13 = SVar5;
  System_Action_object____ctor();
  pGVar1 = (__this->fields)._descriptor;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    pSVar6 = System_String__Concat_3ae5ba0((pGVar1->fields).Id,"-toggle-color",(MethodInfo *)0x0);
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *)
             Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
    maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    SVar15 = "Center";
    SVar13 = "Row";
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)"Center",
                        (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,10.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (control != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (control,"clear",(System_Action_AottgUi__o *)SVar5,pSVar6,pGVar7,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = SVar13;
  pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this;
  SStack_a0 = SVar5;
  if (g_data_057ae7ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Changed);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildControl_b__3_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    __this_00 = (System_Nullable_bool__Fields)&"-switch";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7ca = '\x01';
  }
  if (*(long *)((long)SVar13 + 0x10) != 0) {
    __this_00 = *(System_Nullable_bool__Fields *)(*(long *)((long)SVar13 + 0x10) + 0x10);
    pSVar6 = System_String__Concat_3ae5ba0((System_String_o *)__this_00,"-switch",(MethodInfo *)0x0);
    if (*(long *)((long)SVar13 + 0x10) != 0) {
      plVar2 = *(long **)(*(long *)((long)SVar13 + 0x10) + 0x28);
      if (plVar2 == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        lVar11 = *plVar2;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IAottgSettingAdapter) {
              puVar8 = (undefined8 *)
                       ((long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) + 2) * 0x10 + lVar11 + 0x138);
              goto label_04466a94;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14);
        }
        puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar2,TypeInfo_IAottgSettingAdapter,2);
label_04466a94:
        uVar4 = (*(code *)*puVar8)(plVar2,puVar8[1]);
      }
      SVar5 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      __this_00 = SVar5;
      System_Action_GisketchActionContext____ctor();
      if (SVar15 != (System_Nullable_bool__Fields)0x0) {
        __this_00 = SVar15;
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Switch
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar15,pSVar6,uVar4 & 0xff,
                            (System_Action_GisketchActionContext__o *)SVar5,(MethodInfo *)0x0);
        if (*(long *)((long)SVar13 + 0x10) != 0) {
          uStack_ba = 0;
          __this_00 = (System_Nullable_bool__Fields)&uStack_ba;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o)__this_00,
                     (uint)(*(char *)(*(long *)((long)SVar13 + 0x10) + 0x58) == '\0'),MethodInfo_Nullable_1_Boolean);
          if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            *(undefined2 *)((long)&(pGVar9->fields).hasIcon + 3) = uStack_ba;
            SStack_b8 = SVar15;
            method_00 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
            in_stack_ffffffffffffff08 = 0;
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ((System_String_o *)"Row",(System_String_o *)"Center",
                                (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,
                                0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            __this_00 = (System_Nullable_bool__Fields)&(pGVar9->fields).search;
            (pGVar9->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
            il2cpp_runtime_helper_022b4080(__this_00,pGVar7);
            lVar11 = *(long *)((long)SVar13 + 0x10);
            if (lVar11 != 0) {
              adapter = *(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o **)(lVar11 + 0x30);
              uVar4 = 1;
              if ((*(char *)(lVar11 + 0x58) != '\0') ||
                 (__this_00 = *(System_Nullable_bool__Fields *)(lVar11 + 0x28),
                 __this_00 == (System_Nullable_bool__Fields)0x0)) {
label_04466caf:
                pSVar6 = *(System_String_o **)(lVar11 + 0x10);
                pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
                System_Action_GisketchActionContext____ctor();
                Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_435d080
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SStack_b8,adapter,uVar4,pSVar6,pSVar10,
                           method_00);
                return;
              }
              lVar11 = *(long *)__this_00;
              SStack_b0 = SStack_b8;
              if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
                lVar14 = 0;
                do {
                  if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IAottgSettingAdapter) {
                    puVar8 = (undefined8 *)
                             ((long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) + 2) * 0x10 + lVar11 +
                             0x138);
                    goto label_04466c89;
                  }
                  lVar14 = lVar14 + 0x10;
                } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14);
              }
              puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IAottgSettingAdapter,2);
label_04466c89:
              bVar3 = (*(code *)*puVar8)(__this_00,puVar8[1]);
              lVar11 = *(long *)((long)SVar13 + 0x10);
              if (lVar11 != 0) {
                uVar4 = (uint)(bVar3 ^ 1);
                SStack_b8 = SStack_b0;
                goto label_04466caf;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SVar15 = __this_00;
  if (g_data_057ae7cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    SVar15 = (System_Nullable_bool__Fields)&"true";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7cb = '\x01';
  }
  lVar11 = *(long *)((long)__this_00 + 0x10);
  if (lVar11 != 0) {
    SVar15 = *(System_Nullable_bool__Fields *)(lVar11 + 0x28);
    if (SVar15 != (System_Nullable_bool__Fields)0x0) {
      if (in_stack_ffffffffffffff08 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = System_String__op_Equality
                          (*(System_String_o **)(in_stack_ffffffffffffff08 + 0x50),"true",
                           (MethodInfo *)0x0);
      }
      lVar11 = *(long *)SVar15;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IAottgSettingAdapter) {
            puVar8 = (undefined8 *)
                     (lVar11 + (long)(*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) + 8) * 0x10 + 0x138);
            goto label_04466e05;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar15,TypeInfo_IAottgSettingAdapter,8);
label_04466e05:
      (*(code *)*puVar8)(SVar15,uVar4 & 0xff,puVar8[1]);
      lVar11 = *(long *)((long)__this_00 + 0x10);
      if (lVar11 == 0) goto label_04466e78;
    }
    lVar11 = *(long *)(lVar11 + 0x88);
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
    }
    return;
  }
label_04466e78:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LoginWithEmail);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_2);
    il2cpp_runtime_helper_023445d0(&"account.login.discord");
    il2cpp_runtime_helper_023445d0(&"account.login.email");
    il2cpp_runtime_helper_023445d0(&"account.login.google");
    il2cpp_runtime_helper_023445d0(&"account.openLogin");
    g_data_057ae7cc = '\x01';
  }
  pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.openLogin",pSVar10,(MethodInfo *)0x0);
  pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.login.email",pSVar10,(MethodInfo *)0x0);
  pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.login.discord",pSVar10,(MethodInfo *)0x0);
  pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.login.google",pSVar10,(MethodInfo *)0x0);
  if (g_data_057ae7e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ForgotPassword);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GoOffline);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GoOnline);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Logout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshAccount);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterWithEmail);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetKeepSignedIn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account.openForgotPassword");
    il2cpp_runtime_helper_023445d0(&"account.openRegister");
    il2cpp_runtime_helper_023445d0(&"account.details");
    il2cpp_runtime_helper_023445d0(&"account.goOffline");
    il2cpp_runtime_helper_023445d0(&"account.goOnline");
    il2cpp_runtime_helper_023445d0(&"account.logout");
    il2cpp_runtime_helper_023445d0(&"account.keepSignedIn");
    il2cpp_runtime_helper_023445d0(&"account.forgotPassword");
    il2cpp_runtime_helper_023445d0(&"account.refresh");
    il2cpp_runtime_helper_023445d0(&"account.register.email");
    g_data_057ae7e3 = '\x01';
  }
  pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.openRegister",pSVar10,(MethodInfo *)0x0);
  pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.openForgotPassword",pSVar10,(MethodInfo *)0x0);
  pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.keepSignedIn",pSVar10,(MethodInfo *)0x0);
  pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.register.email",pSVar10,(MethodInfo *)0x0);
  pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.forgotPassword",pSVar10,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = "account.details";
  pSVar10 = *(System_Action_GisketchActionContext__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar10 == (System_Action_GisketchActionContext__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    lVar11 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_GisketchActionContext__o **)(lVar11 + 8) = pSVar10;
    il2cpp_runtime_helper_022b4080(lVar11 + 8,pSVar10);
  }
  if (SVar15 != (System_Nullable_bool__Fields)0x0) {
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,pSVar6,pSVar10,(MethodInfo *)0x0);
    pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.refresh",pSVar10,(MethodInfo *)0x0
              );
    pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.logout",pSVar10,(MethodInfo *)0x0
              );
    pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.goOffline",pSVar10,(MethodInfo *)0x0
              );
    pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)SVar15,"account.goOnline",pSVar10,(MethodInfo *)0x0
              );
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAccountLoggedIn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAccountLoggedOut);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshAccountState);
    g_data_057ae7cd = '\x01';
  }
  pSVar12 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar12,(MethodInfo *)0x0);
  pSVar12 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar12,(MethodInfo *)0x0);
  pSVar12 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__add_OnAuthMethodsChanged(pSVar12,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$<BuildControl>b__3_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__3_0 (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x4466950

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__3_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *pGVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  byte bVar5;
  uint uVar6;
  System_String_o *pSVar7;
  VirtualInvokeData *pVVar8;
  System_Nullable_bool__Fields action;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  undefined8 *puVar11;
  System_Action_GisketchActionContext__o *pSVar12;
  System_Action_o *pSVar13;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar14;
  System_String_o **__this_00;
  long lVar15;
  long lVar16;
  System_String_o **__this_01;
  long in_stack_ffffffffffffff80;
  undefined2 uStack_42;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_38;
  
  __this_00 = (System_String_o **)__this;
  if (g_data_057ae7ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Changed);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildControl_b__3_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    __this_00 = &"-switch";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7ca = '\x01';
  }
  pGVar14 = (__this->fields)._descriptor;
  if (pGVar14 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    __this_00 = (System_String_o **)(pGVar14->fields).Id;
    pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)__this_00,"-switch",(MethodInfo *)0x0);
    pGVar14 = (__this->fields)._descriptor;
    if (pGVar14 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
      pGVar2 = (pGVar14->fields).Adapter;
      if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
        uVar6 = 0;
      }
      else {
        pGVar3 = pGVar2->klass;
        uVar1._0_1_ = (pGVar3->_2).rank;
        uVar1._1_1_ = (pGVar3->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar4 = (pGVar3->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar15) == TypeInfo_IAottgSettingAdapter) {
              pVVar8 = pGVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar15) + 2);
              goto label_04466a94;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar15);
        }
        pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar2,TypeInfo_IAottgSettingAdapter,2);
label_04466a94:
        uVar6 = (*pVVar8->methodPtr)(pGVar2,pVVar8->method);
      }
      action = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      __this_00 = (System_String_o **)action;
      System_Action_GisketchActionContext____ctor();
      if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        __this_00 = (System_String_o **)row;
        pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Switch
                           (row,pSVar7,uVar6 & 0xff,(System_Action_GisketchActionContext__o *)action,
                            (MethodInfo *)0x0);
        pGVar14 = (__this->fields)._descriptor;
        if (pGVar14 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
          uStack_42 = 0;
          __this_00 = (System_String_o **)&uStack_42;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o)__this_00,(uint)((char)(pGVar14->fields).Disabled == '\0'),
                     MethodInfo_Nullable_1_Boolean);
          if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            *(undefined2 *)((long)&(pGVar9->fields).hasIcon + 3) = uStack_42;
            pGStack_40 = row;
            method_00 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgUi__Points(58.0,(MethodInfo *)0x0);
            in_stack_ffffffffffffff80 = 0;
            pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                ("Row","Center","Center",(System_String_o *)0x0,
                                 (System_String_o *)0x0,0.0,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                 0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
            __this_00 = (System_String_o **)&(pGVar9->fields).search;
            (pGVar9->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
            il2cpp_runtime_helper_022b4080(__this_00,pGVar10);
            pGVar14 = (__this->fields)._descriptor;
            if (pGVar14 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
              pGVar2 = (pGVar14->fields).SecondaryAdapter;
              uVar6 = 1;
              if (((char)(pGVar14->fields).Disabled != '\0') ||
                 (__this_00 = (System_String_o **)(pGVar14->fields).Adapter,
                 (System_Nullable_bool__Fields)__this_00 == (System_Nullable_bool__Fields)0x0)) {
label_04466caf:
                pSVar7 = (pGVar14->fields).Id;
                pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
                System_Action_GisketchActionContext____ctor();
                Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow__BuildPicker_435d080
                          (pGStack_40,pGVar2,uVar6,pSVar7,pSVar12,method_00);
                return;
              }
              lVar15 = (long)*__this_00;
              pGStack_38 = pGStack_40;
              if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
                lVar16 = 0;
                do {
                  if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IAottgSettingAdapter) {
                    puVar11 = (undefined8 *)
                              ((long)(*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) + 2) * 0x10 + lVar15 +
                              0x138);
                    goto label_04466c89;
                  }
                  lVar16 = lVar16 + 0x10;
                } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
              }
              puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IAottgSettingAdapter,2);
label_04466c89:
              bVar5 = (*(code *)*puVar11)(__this_00,puVar11[1]);
              pGVar14 = (__this->fields)._descriptor;
              if (pGVar14 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                uVar6 = (uint)(bVar5 ^ 1);
                pGStack_40 = pGStack_38;
                goto label_04466caf;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this_00;
  if (g_data_057ae7cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    __this_01 = &"true";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7cb = '\x01';
  }
  lVar15 = *(long *)((long)__this_00 + 0x10);
  if (lVar15 != 0) {
    __this_01 = *(System_String_o ***)(lVar15 + 0x28);
    if ((System_Nullable_bool__Fields)__this_01 != (System_Nullable_bool__Fields)0x0) {
      if (in_stack_ffffffffffffff80 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = System_String__op_Equality
                          (*(System_String_o **)(in_stack_ffffffffffffff80 + 0x50),"true",
                           (MethodInfo *)0x0);
      }
      lVar15 = (long)*__this_01;
      if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_IAottgSettingAdapter) {
            puVar11 = (undefined8 *)
                      (lVar15 + (long)(*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) + 8) * 0x10 + 0x138);
            goto label_04466e05;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(__this_01,TypeInfo_IAottgSettingAdapter,8);
label_04466e05:
      (*(code *)*puVar11)(__this_01,uVar6 & 0xff,puVar11[1]);
      lVar15 = *(long *)((long)__this_00 + 0x10);
      if (lVar15 == 0) goto label_04466e78;
    }
    lVar15 = *(long *)(lVar15 + 0x88);
    if (lVar15 != 0) {
      (**(code **)(lVar15 + 0x18))(*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x28));
    }
    return;
  }
label_04466e78:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LoginWithEmail);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_2);
    il2cpp_runtime_helper_023445d0(&"account.login.discord");
    il2cpp_runtime_helper_023445d0(&"account.login.email");
    il2cpp_runtime_helper_023445d0(&"account.login.google");
    il2cpp_runtime_helper_023445d0(&"account.openLogin");
    g_data_057ae7cc = '\x01';
  }
  pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.openLogin",pSVar12,
             (MethodInfo *)0x0);
  pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.login.email",pSVar12,
             (MethodInfo *)0x0);
  pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.login.discord",pSVar12,
             (MethodInfo *)0x0);
  pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.login.google",pSVar12,
             (MethodInfo *)0x0);
  if (g_data_057ae7e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ForgotPassword);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GoOffline);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GoOnline);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Logout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshAccount);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterWithEmail);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetKeepSignedIn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"account.openForgotPassword");
    il2cpp_runtime_helper_023445d0(&"account.openRegister");
    il2cpp_runtime_helper_023445d0(&"account.details");
    il2cpp_runtime_helper_023445d0(&"account.goOffline");
    il2cpp_runtime_helper_023445d0(&"account.goOnline");
    il2cpp_runtime_helper_023445d0(&"account.logout");
    il2cpp_runtime_helper_023445d0(&"account.keepSignedIn");
    il2cpp_runtime_helper_023445d0(&"account.forgotPassword");
    il2cpp_runtime_helper_023445d0(&"account.refresh");
    il2cpp_runtime_helper_023445d0(&"account.register.email");
    g_data_057ae7e3 = '\x01';
  }
  pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.openRegister",pSVar12,
             (MethodInfo *)0x0);
  pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.openForgotPassword",pSVar12,
             (MethodInfo *)0x0);
  pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.keepSignedIn",pSVar12,
             (MethodInfo *)0x0);
  pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.register.email",pSVar12,
             (MethodInfo *)0x0);
  pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.forgotPassword",pSVar12,
             (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = "account.details";
  pSVar12 = *(System_Action_GisketchActionContext__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar12 == (System_Action_GisketchActionContext__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    lVar15 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_GisketchActionContext__o **)(lVar15 + 8) = pSVar12;
    il2cpp_runtime_helper_022b4080(lVar15 + 8,pSVar12);
  }
  if ((System_Nullable_bool__Fields)__this_01 != (System_Nullable_bool__Fields)0x0) {
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,pSVar7,pSVar12,(MethodInfo *)0x0);
    pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.refresh",pSVar12,
               (MethodInfo *)0x0);
    pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.logout",pSVar12,
               (MethodInfo *)0x0);
    pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.goOffline",pSVar12,
               (MethodInfo *)0x0);
    pSVar12 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_01,"account.goOnline",pSVar12,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAccountLoggedIn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAccountLoggedOut);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshAccountState);
    g_data_057ae7cd = '\x01';
  }
  pSVar13 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar13,(MethodInfo *)0x0);
  pSVar13 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar13,(MethodInfo *)0x0);
  pSVar13 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__add_OnAuthMethodsChanged(pSVar13,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$<BuildControl>b__3_1
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__3_1 (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4466d10

void Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow___BuildControl_b__3_1
               (Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_Actions_GisketchController_c *pGVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_String_o *pSVar4;
  uint uVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar7;
  System_Action_GisketchActionContext__o *pSVar8;
  System_Action_o *pSVar9;
  System_String_o **__this_00;
  long lVar10;
  ulong uVar11;
  
  __this_00 = (System_String_o **)__this;
  if (g_data_057ae7cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    __this_00 = &"true";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7cb = '\x01';
  }
  pGVar7 = (__this->fields)._descriptor;
  if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
label_04466e78:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae7cc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_LoginWithEmail);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_1);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountActions_b__4_2);
      il2cpp_runtime_helper_023445d0(&"account.login.discord");
      il2cpp_runtime_helper_023445d0(&"account.login.email");
      il2cpp_runtime_helper_023445d0(&"account.login.google");
      il2cpp_runtime_helper_023445d0(&"account.openLogin");
      g_data_057ae7cc = '\x01';
    }
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.openLogin",pSVar8,
               (MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.login.email",pSVar8,
               (MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.login.discord",pSVar8,
               (MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.login.google",pSVar8,
               (MethodInfo *)0x0);
    if (g_data_057ae7e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ForgotPassword);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GoOffline);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GoOnline);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Logout);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshAccount);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterWithEmail);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetKeepSignedIn);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_1);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RegisterAccountFormActions_b__28_2);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"account.openForgotPassword");
      il2cpp_runtime_helper_023445d0(&"account.openRegister");
      il2cpp_runtime_helper_023445d0(&"account.details");
      il2cpp_runtime_helper_023445d0(&"account.goOffline");
      il2cpp_runtime_helper_023445d0(&"account.goOnline");
      il2cpp_runtime_helper_023445d0(&"account.logout");
      il2cpp_runtime_helper_023445d0(&"account.keepSignedIn");
      il2cpp_runtime_helper_023445d0(&"account.forgotPassword");
      il2cpp_runtime_helper_023445d0(&"account.refresh");
      il2cpp_runtime_helper_023445d0(&"account.register.email");
      g_data_057ae7e3 = '\x01';
    }
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.openRegister",pSVar8,
               (MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.openForgotPassword",pSVar8,
               (MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.keepSignedIn",pSVar8,
               (MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.register.email",pSVar8,
               (MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.forgotPassword",pSVar8,
               (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = "account.details";
    pSVar8 = *(System_Action_GisketchActionContext__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pSVar8 == (System_Action_GisketchActionContext__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor();
      lVar10 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_GisketchActionContext__o **)(lVar10 + 8) = pSVar8;
      il2cpp_runtime_helper_022b4080(lVar10 + 8,pSVar8);
    }
    if ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00 ==
        (Gisketch_Aottg2UI_Actions_GisketchController_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae7cd == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAccountLoggedIn);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAccountLoggedOut);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshAccountState);
        g_data_057ae7cd = '\x01';
      }
      pSVar9 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
      System_Action___ctor();
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar9,(MethodInfo *)0x0);
      pSVar9 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
      System_Action___ctor();
      ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar9,(MethodInfo *)0x0);
      pSVar9 = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
      System_Action___ctor();
      ApplicationManagers_AccountManager__add_OnAuthMethodsChanged(pSVar9,(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,pSVar4,pSVar8,(MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.refresh",pSVar8,
               (MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.logout",pSVar8,
               (MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.goOffline",pSVar8,
               (MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00,"account.goOnline",pSVar8,
               (MethodInfo *)0x0);
    return;
  }
  __this_00 = (System_String_o **)(pGVar7->fields).Adapter;
  if ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00 !=
      (Gisketch_Aottg2UI_Actions_GisketchController_o *)0x0) {
    if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar5 = System_String__op_Equality(((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0)
      ;
      uVar11 = (ulong)uVar5;
    }
    pGVar2 = ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this_00)->klass;
    uVar1._0_1_ = (pGVar2->_2).rank;
    uVar1._1_1_ = (pGVar2->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar3 = (pGVar2->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(long *)((long)&pIVar3->interfaceType + lVar10) == TypeInfo_IAottgSettingAdapter) {
          pVVar6 = &(pGVar2->vtable)._0_Equals + (*(int *)((long)&pIVar3->offset + lVar10) + 8);
          goto label_04466e05;
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar10);
    }
    pVVar6 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_00,TypeInfo_IAottgSettingAdapter,8);
label_04466e05:
    (*pVVar6->methodPtr)(__this_00,uVar11 & 0xff,pVVar6->method);
    pGVar7 = (__this->fields)._descriptor;
    if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) goto label_04466e78;
  }
  pSVar4 = (pGVar7->fields).ReadOnlyText;
  if (pSVar4 != (System_String_o *)0x0) {
    (*(code *)pSVar4[1].klass)(pSVar4[2].fields,pSVar4[1].fields);
  }
  return;
}


