// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingSliderValueDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x4463ce0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  if (g_data_057ae7aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&"Edit Setting");
    g_data_057ae7aa = '\x01';
  }
  if (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) == 0) {
    return "Edit Setting";
  }
  return *(System_String_o **)(**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x18);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x4463d40

bool_conflict
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x4463d50

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057ae7ab == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7ab = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(420.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_BodyLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x4463e20

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057ae7ac == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057ae7ac = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,10.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Open
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o* descriptor, const MethodInfo* method);
// 0x4462ae0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057ae7ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-slider-value");
    g_data_057ae7ad = '\x01';
  }
  if (((descriptor != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) &&
      ((descriptor->fields).Adapter != (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0)) &&
     ((char)(descriptor->fields).Disabled == '\0')) {
    **(undefined8 **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) = descriptor;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSettingSliderValueDialog + 0xb8),descriptor);
    if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
      pIVar1 = UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (pIVar1[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (pIVar1[8].monitor,"setting-slider-value",1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4463ee0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  Il2CppClass *pIVar13;
  Il2CppRuntimeInterfaceOffsetPair *pIVar14;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_02;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_03;
  char cVar15;
  bool_conflict bVar16;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *placeholder;
  VirtualInvokeData *pVVar18;
  MethodInfo *pMVar19;
  System_String_array *pSVar20;
  System_Globalization_CultureInfo_o *pSVar21;
  MethodInfo *pMVar22;
  MethodInfo *method_00;
  System_Action_GisketchActionContext__o *action;
  System_String_array *__this_04;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_05;
  UnityEngine_Transform_o *pUVar23;
  System_Object_array *pSVar24;
  UnityEngine_Object_o *pUVar25;
  System_String_o **ppSVar26;
  System_Action_GisketchActionContext__o *action_00;
  System_String_o *text;
  ulong uVar27;
  System_String_o *pSVar28;
  long lVar29;
  System_String_o *pSVar30;
  long *gameObject;
  MethodInfo **unaff_R13;
  float __this_06;
  float __this_07;
  float __this_08;
  float __this_09;
  undefined4 extraout_XMM0_Da;
  float __this_10;
  undefined1 auStackY_190 [8];
  undefined8 uStackY_188;
  System_String_array *pSStackY_180;
  MethodInfo *pMStackY_178;
  MethodInfo **ppMStackY_170;
  System_String_array *pSStackY_168;
  System_String_o *pSStackY_160;
  undefined4 in_stack_fffffffffffffeb0;
  undefined4 in_stack_fffffffffffffeb4;
  undefined4 in_stack_fffffffffffffeb8;
  undefined4 in_stack_fffffffffffffebc;
  undefined4 in_stack_fffffffffffffec0;
  undefined4 in_stack_fffffffffffffec4;
  undefined4 in_stack_fffffffffffffec8;
  undefined4 in_stack_fffffffffffffecc;
  System_String_Fields in_stack_fffffffffffffee0;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  undefined4 uStack_a4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_a0;
  undefined8 *puStack_98;
  
  if (g_data_057ae7ae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"setting-slider-value-range");
    il2cpp_runtime_helper_023445d0(&"setting-slider-value-input");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7ae = '\x01';
  }
  if (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) == 0) {
    pSVar20 = (System_String_array *)0x0;
  }
  else {
    pSVar20 = *(System_String_array **)(**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28);
  }
  placeholder = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
            Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar30 = (System_String_o *)0x0;
  __this_04 = "Column";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar17,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_04 = (System_String_array *)body;
    pSVar30 = "inputField";
    placeholder = Gisketch_Aottg2UI_Code_AottgUi__InputField
                            (body,"setting-slider-value-input",(System_String_o *)placeholder,1,"inputField",layout,
                             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                             (System_Action_GisketchActionContext__o *)0x0,0.2,0x20,(MethodInfo *)0x0);
    pGVar17 = layout;
    if (pSVar20 == (System_String_array *)0x0) {
      pMVar19 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      if (pSVar20 == (System_String_array *)0x0) goto label_04464158;
      pIVar13 = (pSVar20->obj).klass;
      uVar1._0_1_ = (pIVar13->_2).rank;
      uVar1._1_1_ = (pIVar13->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar14 = (pIVar13->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
            pVVar18 = pIVar13->vtable + *(int *)((long)&pIVar14->offset + lVar29);
            goto label_044640ed;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar29);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar20,TypeInfo_IAottgSettingAdapter,0);
label_044640ed:
      __this_04 = pSVar20;
      pMVar19 = (MethodInfo *)(*pVVar18->methodPtr)(pSVar20,pVVar18->method);
      pGVar17 = layout;
    }
    if (placeholder != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (placeholder->fields).value = (System_String_o *)pMVar19;
      il2cpp_runtime_helper_022b4080(&(placeholder->fields).value);
      pSVar30 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__RangeCallout
                          ((Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)pSVar20,pMVar19);
      bVar16 = System_String__IsNullOrEmpty(pSVar30,(MethodInfo *)0x0);
      if ((char)bVar16 != '\0') {
        return;
      }
      Gisketch_Aottg2UI_Code_AottgUi__Callout(body,0,pSVar30,"setting-slider-value-range",(MethodInfo *)0x0);
      return;
    }
  }
label_04464158:
  il2cpp_runtime_helper_022b2c90();
  puStack_98 = &g_data_057b9b70;
  pGStack_a0 = placeholder;
  if (g_data_057ae7b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Minimum value is ");
    il2cpp_runtime_helper_023445d0(&". Maximum value is ");
    il2cpp_runtime_helper_023445d0(&"Maximum value is ");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7b2 = '\x01';
  }
  if (__this_04 == (System_String_array *)0x0) {
    return;
  }
  pIVar13 = (__this_04->obj).klass;
  uVar2._0_1_ = (pIVar13->_2).rank;
  uVar2._1_1_ = (pIVar13->_2).minimumAlignment;
  if ((ulong)uVar2 != 0) {
    pIVar14 = (pIVar13->_1).interfaceOffsets;
    lVar29 = 0;
    do {
      if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
        pVVar18 = pIVar13->vtable + (*(int *)((long)&pIVar14->offset + lVar29) + 5);
        goto label_04464239;
      }
      lVar29 = lVar29 + 0x10;
    } while ((ulong)uVar2 << 4 != lVar29);
  }
  pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_04,TypeInfo_IAottgSettingAdapter,5);
label_04464239:
  cVar15 = (*pVVar18->methodPtr)(__this_04,pVVar18->method);
  if (cVar15 == '\0') {
    pIVar13 = (__this_04->obj).klass;
    uVar3._0_1_ = (pIVar13->_2).rank;
    uVar3._1_1_ = (pIVar13->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar14 = (pIVar13->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
          pVVar18 = pIVar13->vtable + (*(int *)((long)&pIVar14->offset + lVar29) + 6);
          goto label_044642a9;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar29);
    }
    pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_04,TypeInfo_IAottgSettingAdapter,6);
label_044642a9:
    cVar15 = (*pVVar18->methodPtr)(__this_04,pVVar18->method);
    if (cVar15 == '\0') {
      return;
    }
  }
  pIVar13 = (__this_04->obj).klass;
  uVar4._0_1_ = (pIVar13->_2).rank;
  uVar4._1_1_ = (pIVar13->_2).minimumAlignment;
  if ((ulong)uVar4 != 0) {
    pIVar14 = (pIVar13->_1).interfaceOffsets;
    lVar29 = 0;
    do {
      if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
        pVVar18 = pIVar13->vtable + (*(int *)((long)&pIVar14->offset + lVar29) + 5);
        goto label_04464320;
      }
      lVar29 = lVar29 + 0x10;
    } while ((ulong)uVar4 << 4 != lVar29);
  }
  pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_04,TypeInfo_IAottgSettingAdapter,5);
label_04464320:
  cVar15 = (*pVVar18->methodPtr)(__this_04,pVVar18->method);
  if (cVar15 == '\0') {
label_04464425:
    pIVar13 = (__this_04->obj).klass;
    uVar7._0_1_ = (pIVar13->_2).rank;
    uVar7._1_1_ = (pIVar13->_2).minimumAlignment;
    if ((ulong)uVar7 != 0) {
      pIVar14 = (pIVar13->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
          pVVar18 = pIVar13->vtable + (*(int *)((long)&pIVar14->offset + lVar29) + 5);
          goto label_04464489;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar7 << 4 != lVar29);
    }
    pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_04,TypeInfo_IAottgSettingAdapter,5);
label_04464489:
    cVar15 = (*pVVar18->methodPtr)(__this_04,pVVar18->method);
    pIVar13 = (__this_04->obj).klass;
    uVar8._0_1_ = (pIVar13->_2).rank;
    uVar8._1_1_ = (pIVar13->_2).minimumAlignment;
    if (cVar15 == '\0') {
      if (uVar8 != 0) {
        pIVar14 = (pIVar13->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
            pVVar18 = pIVar13->vtable + (*(int *)((long)&pIVar14->offset + lVar29) + 4);
            goto label_044645bc;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar8 << 4 != lVar29);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_04,TypeInfo_IAottgSettingAdapter,4);
label_044645bc:
      uStack_a4 = (*pVVar18->methodPtr)(__this_04,pVVar18->method);
      if (g_data_057ae7b3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&"0.##################");
        g_data_057ae7b3 = '\x01';
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar21 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar30 = System_Single__ToString_3ccd050
                          (__this_07,(System_String_o *)&uStack_a4,(System_IFormatProvider_o *)"0.##################",
                           (MethodInfo *)pSVar21);
      ppSVar26 = (System_String_o **)&"Maximum value is ";
    }
    else {
      if (uVar8 != 0) {
        pIVar14 = (pIVar13->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
            pVVar18 = pIVar13->vtable + (*(int *)((long)&pIVar14->offset + lVar29) + 3);
            goto label_0446452b;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar8 << 4 != lVar29);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_04,TypeInfo_IAottgSettingAdapter,3);
label_0446452b:
      uStack_a4 = (*pVVar18->methodPtr)(__this_04,pVVar18->method);
      if (g_data_057ae7b3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&"0.##################");
        g_data_057ae7b3 = '\x01';
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar21 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar30 = System_Single__ToString_3ccd050
                          (__this_06,(System_String_o *)&uStack_a4,(System_IFormatProvider_o *)"0.##################",
                           (MethodInfo *)pSVar21);
      ppSVar26 = &"Minimum value is ";
    }
    System_String__Concat_3af7150(*ppSVar26,pSVar30,".",(MethodInfo *)0x0);
    return;
  }
  pIVar13 = (__this_04->obj).klass;
  uVar5._0_1_ = (pIVar13->_2).rank;
  uVar5._1_1_ = (pIVar13->_2).minimumAlignment;
  if ((ulong)uVar5 != 0) {
    pIVar14 = (pIVar13->_1).interfaceOffsets;
    lVar29 = 0;
    do {
      if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
        pVVar18 = pIVar13->vtable + (*(int *)((long)&pIVar14->offset + lVar29) + 6);
        goto label_04464389;
      }
      lVar29 = lVar29 + 0x10;
    } while ((ulong)uVar5 << 4 != lVar29);
  }
  pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_04,TypeInfo_IAottgSettingAdapter,6);
label_04464389:
  cVar15 = (*pVVar18->methodPtr)(__this_04,pVVar18->method);
  if (cVar15 == '\0') goto label_04464425;
  pMVar19 = (MethodInfo *)&g_data_00000005;
  pSVar20 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (pSVar20 != (System_String_array *)0x0) {
    if ((int)pSVar20->max_length != 0) {
      pSVar20->m_Items[0] = "Minimum value is ";
      il2cpp_runtime_helper_022b4080();
      pIVar13 = (__this_04->obj).klass;
      uVar6._0_1_ = (pIVar13->_2).rank;
      uVar6._1_1_ = (pIVar13->_2).minimumAlignment;
      if ((ulong)uVar6 != 0) {
        pIVar14 = (pIVar13->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
            pVVar18 = pIVar13->vtable + (*(int *)((long)&pIVar14->offset + lVar29) + 3);
            goto label_04464665;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar6 << 4 != lVar29);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_04,TypeInfo_IAottgSettingAdapter,3);
label_04464665:
      uStack_a4 = (*pVVar18->methodPtr)(__this_04,pVVar18->method);
      if (g_data_057ae7b3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&"0.##################");
        g_data_057ae7b3 = '\x01';
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar21 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      unaff_R13 = &"0.##################";
      pMVar19 = "0.##################";
      pMVar22 = (MethodInfo *)
                System_Single__ToString_3ccd050
                          (__this_08,(System_String_o *)&uStack_a4,(System_IFormatProvider_o *)"0.##################",
                           (MethodInfo *)pSVar21);
      if (1 < (uint)pSVar20->max_length) {
        pSVar20->m_Items[1] = (System_String_o *)pMVar22;
        il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 1);
        pMVar19 = pMVar22;
        if (2 < (uint)pSVar20->max_length) {
          pSVar20->m_Items[2] = ". Maximum value is ";
          il2cpp_runtime_helper_022b4080();
          pIVar13 = (__this_04->obj).klass;
          uVar9._0_1_ = (pIVar13->_2).rank;
          uVar9._1_1_ = (pIVar13->_2).minimumAlignment;
          if ((ulong)uVar9 != 0) {
            pIVar14 = (pIVar13->_1).interfaceOffsets;
            lVar29 = 0;
            do {
              if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
                pVVar18 = pIVar13->vtable + (*(int *)((long)&pIVar14->offset + lVar29) + 4);
                goto label_04464775;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)uVar9 << 4 != lVar29);
          }
          pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_04,TypeInfo_IAottgSettingAdapter,4);
label_04464775:
          uStack_a4 = (*pVVar18->methodPtr)(__this_04,pVVar18->method);
          if (g_data_057ae7b3 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
            il2cpp_runtime_helper_023445d0(&"0.##################");
            g_data_057ae7b3 = '\x01';
          }
          if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar21 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pMVar19 = "0.##################";
          pMVar22 = (MethodInfo *)
                    System_Single__ToString_3ccd050
                              (__this_09,(System_String_o *)&uStack_a4,
                               (System_IFormatProvider_o *)"0.##################",(MethodInfo *)pSVar21);
          if (3 < (uint)pSVar20->max_length) {
            pSVar20->m_Items[3] = (System_String_o *)pMVar22;
            il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 3);
            pMVar19 = pMVar22;
            if (4 < (uint)pSVar20->max_length) {
              pSVar20->m_Items[4] = ".";
              il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 4);
              System_String__Concat_3af7570(pSVar20,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    body = (Gisketch_Aottg2UI_Code_AottgUi_o *)pSVar20;
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
  pMVar22 = pMVar19;
  if (g_data_057ae7af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae7af = '\x01';
  }
  if (pMVar19 != (MethodInfo *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)pMVar19,"Cancel","overlay.close",
               (MethodInfo *)0x0);
    action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x44648de;
    System_Action_GisketchActionContext____ctor();
    pSVar28 = "Save";
    action_00 = (System_Action_GisketchActionContext__o *)0x0;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar19->invoker_method;
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      __this_01 = (__this_00->fields)._actions;
      if (__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar30 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar30 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                            (__this_01,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Code_AottgUi__Button
                (__this_00,0,pSVar28,pSVar30,(System_String_o *)0x0,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,method_00);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar19->name ==
        (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      actionId = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      actionId = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar19->name,
                            (System_String_o *)pMVar19->klass,action_00,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar19,(int32_t)pSVar28,text,actionId,pSVar30,
               (System_String_o *)pGVar17,enter,(System_String_o *)method_00,
               (MethodInfo *)in_stack_fffffffffffffee0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"setting-slider-value-input");
    g_data_057ae7b0 = '\x01';
  }
  gameObject = &TypeInfo_AottgSettingSliderValueDialog;
  if (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) == 0) {
    return;
  }
  if (*(long *)(**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28) == 0) {
    return;
  }
  pSVar20 = (System_String_array *)body;
  pSVar30 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText
                      ((UnityEngine_GameObject_o *)body,pMVar22);
  if (pSVar30 == (System_String_o *)0x0) {
    if ((**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) != 0) &&
       (__this_04 = *(System_String_array **)(**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28),
       __this_04 != (System_String_array *)0x0)) {
      pIVar13 = (__this_04->obj).klass;
      uVar10._0_1_ = (pIVar13->_2).rank;
      uVar10._1_1_ = (pIVar13->_2).minimumAlignment;
      if ((ulong)uVar10 != 0) {
        pIVar14 = (pIVar13->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
            pVVar18 = pIVar13->vtable + *(int *)((long)&pIVar14->offset + lVar29);
            goto label_04464a41;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar10 << 4 != lVar29);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_04,TypeInfo_IAottgSettingAdapter,0);
label_04464a41:
      pSVar20 = __this_04;
      pSVar30 = (System_String_o *)(*pVVar18->methodPtr)();
      goto label_04464a4d;
    }
  }
  else {
label_04464a4d:
    if ((**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) != 0) &&
       (__this_04 = *(System_String_array **)(**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28),
       __this_04 != (System_String_array *)0x0)) {
      pIVar13 = (__this_04->obj).klass;
      uVar11._0_1_ = (pIVar13->_2).rank;
      uVar11._1_1_ = (pIVar13->_2).minimumAlignment;
      if ((ulong)uVar11 != 0) {
        pIVar14 = (pIVar13->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar14->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
            pVVar18 = pIVar13->vtable + (*(int *)((long)&pIVar14->offset + lVar29) + 10);
            goto label_04464ad5;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar11 << 4 != lVar29);
      }
      pVVar18 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this_04,TypeInfo_IAottgSettingAdapter,10);
label_04464ad5:
      pSVar20 = __this_04;
      (*pVVar18->methodPtr)(__this_04,pSVar30,pVVar18->method);
      unaff_R13 = (MethodInfo **)**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
      if (unaff_R13 != (MethodInfo **)0x0) {
        gameObject = (long *)unaff_R13[2];
        __this_04 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        pSVar20 = __this_04;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_04,(MethodInfo *)0x0);
        if (__this_04 != (System_String_array *)0x0) {
          __this_04->max_length = (il2cpp_array_size_t)"setting-slider-value-input";
          il2cpp_runtime_helper_022b4080(&__this_04->max_length);
          __this_04->m_Items[6] = pSVar30;
          il2cpp_runtime_helper_022b4080(__this_04->m_Items + 6,pSVar30);
          __this_03.fields.ElementId._4_4_ = in_stack_fffffffffffffeb4;
          __this_03.fields.ElementId._0_4_ = in_stack_fffffffffffffeb0;
          __this_03.fields.GameObject._0_4_ = in_stack_fffffffffffffeb8;
          __this_03.fields.GameObject._4_4_ = in_stack_fffffffffffffebc;
          __this_03.fields.Node._0_4_ = in_stack_fffffffffffffec0;
          __this_03.fields.Node._4_4_ = in_stack_fffffffffffffec4;
          __this_03.fields.InputSource = in_stack_fffffffffffffec8;
          __this_03.fields._28_4_ = in_stack_fffffffffffffecc;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                    (__this_03,(System_String_o *)&stack0xfffffffffffffed0,
                     (UnityEngine_GameObject_o *)gameObject,
                     (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)body,(MethodInfo *)__this_04);
          pMVar19 = unaff_R13[0x11];
          if (pMVar19 != (MethodInfo *)0x0) {
            (*(code *)pMVar19->name)((pMVar19->field8_0x40).genericMethod);
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar20 = (System_String_array *)body;
          bVar16 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)body,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar16 == '\0') {
            return;
          }
          if ((System_String_array *)body != (System_String_array *)0x0) {
            __this_05 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                        UnityEngine_GameObject__GetComponentInParent_object_
                                  ((UnityEngine_GameObject_o *)body,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
            if (__this_05 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              return;
            }
            __this_02 = (__this_05->fields)._Theme_k__BackingField;
            if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_02,1,(MethodInfo *)0x0)
              ;
            }
            Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_05,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  uStackY_188 = il2cpp_runtime_helper_022b2c90();
  pSStackY_180 = __this_04;
  pMStackY_178 = (MethodInfo *)gameObject;
  ppMStackY_170 = unaff_R13;
  pSStackY_168 = (System_String_array *)body;
  pSStackY_160 = pSVar30;
  if (g_data_057ae7b1 == '\0') {
    auStackY_190 = (undefined1  [8])0x4464c53;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    auStackY_190 = (undefined1  [8])0x4464c5f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    auStackY_190 = (undefined1  [8])0x4464c6b;
    il2cpp_runtime_helper_023445d0(&"setting-slider-value-input");
    g_data_057ae7b1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    auStackY_190 = (undefined1  [8])0x4464c8b;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar23 = (UnityEngine_Transform_o *)0x0;
  auStackY_190 = (undefined1  [8])0x4464c99;
  bVar16 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar16 == '\0') {
label_04464cc6:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      auStackY_190 = (undefined1  [8])0x4464cd8;
      il2cpp_runtime_helper_02337ed0();
    }
    auStackY_190 = (undefined1  [8])0x4464ce7;
    bVar16 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar16 != '\0') {
      return;
    }
    if (pUVar23 != (UnityEngine_Transform_o *)0x0) {
      auStackY_190 = (undefined1  [8])0x4464d0f;
      pSVar24 = UnityEngine_Component__GetComponentsInChildren_object_
                          ((UnityEngine_Component_o *)pUVar23,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
      if (pSVar24 != (System_Object_array *)0x0) {
        if ((int)pSVar24->max_length < 1) {
          return;
        }
        uVar27 = 0;
        if ((pSVar24->max_length & 0xffffffff) != 0) {
          do {
            pUVar25 = (UnityEngine_Object_o *)pSVar24->m_Items[uVar27];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              auStackY_190 = (undefined1  [8])0x4464d7e;
              il2cpp_runtime_helper_02337ed0();
            }
            auStackY_190 = (undefined1  [8])0x4464d8a;
            bVar16 = UnityEngine_Object__op_Inequality(pUVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar16 != '\0') {
              if (pUVar25 == (UnityEngine_Object_o *)0x0) goto label_04464ddc;
              auStackY_190 = (undefined1  [8])0x4464d9d;
              pUVar25 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0);
              if (pUVar25 == (UnityEngine_Object_o *)0x0) goto label_04464ddc;
              auStackY_190 = (undefined1  [8])0x4464dac;
              pSVar30 = UnityEngine_Object__get_name(pUVar25,(MethodInfo *)0x0);
              auStackY_190 = (undefined1  [8])0x4464dba;
              bVar16 = System_String__op_Equality(pSVar30,"setting-slider-value-input",(MethodInfo *)0x0);
              if ((char)bVar16 != '\0') {
                return;
              }
            }
            uVar27 = uVar27 + 1;
            uVar12 = (uint)pSVar24->max_length;
            if ((long)(int)uVar12 <= (long)uVar27) {
              return;
            }
          } while (uVar27 < uVar12);
        }
        goto label_04464de1;
      }
    }
  }
  else if (pSVar20 != (System_String_array *)0x0) {
    auStackY_190 = (undefined1  [8])0x4464cb0;
    pUVar23 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar20,(MethodInfo *)0x0);
    if (pUVar23 != (UnityEngine_Transform_o *)0x0) {
      auStackY_190 = (undefined1  [8])0x4464cc3;
      pUVar23 = UnityEngine_Transform__get_root(pUVar23,(MethodInfo *)0x0);
      goto label_04464cc6;
    }
  }
label_04464ddc:
  auStackY_190 = (undefined1  [8])0x4464de1;
  il2cpp_runtime_helper_022b2c90();
label_04464de1:
  auStackY_190 = (undefined1  [8])0x4464de6;
  auStackY_190._0_4_ = il2cpp_runtime_helper_022b2ca0();
  auStackY_190._4_4_ = extraout_XMM0_Da;
  if (g_data_057ae7b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&"0.##################");
    g_data_057ae7b3 = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar21 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Single__ToString_3ccd050
            (__this_10,(System_String_o *)(auStackY_190 + 4),(System_IFormatProvider_o *)"0.##################",
             (MethodInfo *)pSVar21);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x4464840

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *pGVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_02;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  MethodInfo *in_RAX;
  System_Action_GisketchActionContext__o *action;
  System_String_o *pSVar9;
  VirtualInvokeData *pVVar10;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_03;
  UnityEngine_Transform_o *pUVar11;
  System_Object_array *pSVar12;
  UnityEngine_Object_o *pUVar13;
  System_Globalization_CultureInfo_o *method_00;
  System_Action_GisketchActionContext__o *action_00;
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *unaff_RBX;
  ulong uVar14;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *x;
  long lVar15;
  System_String_o *in_R8;
  System_String_o *in_R9;
  long *gameObject;
  long unaff_R13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *unaff_R14;
  undefined4 extraout_XMM0_Da;
  float __this_04;
  undefined1 auStackY_e0 [8];
  undefined8 uStackY_d8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_d0;
  UnityEngine_GameObject_o *pUStackY_c8;
  long lStackY_c0;
  System_String_o *pSStackY_b0;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff74;
  undefined4 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff7c;
  System_String_Fields in_stack_ffffffffffffff90;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  method_01 = (MethodInfo *)footer;
  if (g_data_057ae7af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae7af = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet(footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x44648de;
    System_Action_GisketchActionContext____ctor();
    pSVar9 = "Save";
    action_00 = (System_Action_GisketchActionContext__o *)0x0;
    __this_00 = (footer->fields)._ui;
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar4 = (__this_00->fields)._actions;
      if (pGVar4 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar8 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           (pGVar4,(__this_00->fields)._ownerId,action,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Code_AottgUi__Button
                (__this_00,0,pSVar9,pSVar8,(System_String_o *)0x0,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,in_RAX);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar4 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)footer)->fields)._actions;
    if (pGVar4 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar8 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar4,(((Gisketch_Aottg2UI_Code_AottgUi_o *)footer)->fields)._ownerId,action_00,
                          (MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)footer,(int32_t)pSVar9,text,pSVar8,in_R8,in_R9,enter,
               (System_String_o *)in_RAX,(MethodInfo *)in_stack_ffffffffffffff90);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"setting-slider-value-input");
    g_data_057ae7b0 = '\x01';
  }
  gameObject = &TypeInfo_AottgSettingSliderValueDialog;
  if (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) == 0) {
    return;
  }
  if (*(long *)(**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28) == 0) {
    return;
  }
  x = unaff_R14;
  pSVar9 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText
                     ((UnityEngine_GameObject_o *)unaff_R14,method_01);
  if (pSVar9 == (System_String_o *)0x0) {
    if ((**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) != 0) &&
       (unaff_RBX = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)
                     (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28),
       unaff_RBX != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      pGVar5 = unaff_RBX->klass;
      uVar1._0_1_ = (pGVar5->_2).rank;
      uVar1._1_1_ = (pGVar5->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar6 = (pGVar5->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IAottgSettingAdapter) {
            pVVar10 = &(pGVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar15);
            goto label_04464a41;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar15);
      }
      pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IAottgSettingAdapter,0);
label_04464a41:
      x = unaff_RBX;
      pSVar9 = (System_String_o *)(*pVVar10->methodPtr)();
      goto label_04464a4d;
    }
  }
  else {
label_04464a4d:
    if ((**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) != 0) &&
       (unaff_RBX = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)
                     (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28),
       unaff_RBX != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      pGVar5 = unaff_RBX->klass;
      uVar2._0_1_ = (pGVar5->_2).rank;
      uVar2._1_1_ = (pGVar5->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar6 = (pGVar5->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar15) == TypeInfo_IAottgSettingAdapter) {
            pVVar10 = &(pGVar5->vtable)._0_Equals + (*(int *)((long)&pIVar6->offset + lVar15) + 10);
            goto label_04464ad5;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar15);
      }
      pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IAottgSettingAdapter,10);
label_04464ad5:
      x = unaff_RBX;
      (*pVVar10->methodPtr)(unaff_RBX,pSVar9,pVVar10->method);
      unaff_R13 = **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
      if (unaff_R13 != 0) {
        gameObject = *(long **)(unaff_R13 + 0x10);
        unaff_RBX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        x = unaff_RBX;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(unaff_RBX,(MethodInfo *)0x0);
        if (unaff_RBX != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (unaff_RBX->fields).id = "setting-slider-value-input";
          il2cpp_runtime_helper_022b4080(&(unaff_RBX->fields).id);
          (unaff_RBX->fields).value = pSVar9;
          il2cpp_runtime_helper_022b4080(&(unaff_RBX->fields).value,pSVar9);
          __this_02.fields.ElementId._4_4_ = in_stack_ffffffffffffff64;
          __this_02.fields.ElementId._0_4_ = in_stack_ffffffffffffff60;
          __this_02.fields.GameObject._0_4_ = in_stack_ffffffffffffff68;
          __this_02.fields.GameObject._4_4_ = in_stack_ffffffffffffff6c;
          __this_02.fields.Node._0_4_ = in_stack_ffffffffffffff70;
          __this_02.fields.Node._4_4_ = in_stack_ffffffffffffff74;
          __this_02.fields.InputSource = in_stack_ffffffffffffff78;
          __this_02.fields._28_4_ = in_stack_ffffffffffffff7c;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                    (__this_02,(System_String_o *)&stack0xffffffffffffff80,
                     (UnityEngine_GameObject_o *)gameObject,unaff_R14,(MethodInfo *)unaff_RBX);
          lVar15 = *(long *)(unaff_R13 + 0x88);
          if (lVar15 != 0) {
            (**(code **)(lVar15 + 0x18))(*(undefined8 *)(lVar15 + 0x40));
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          x = unaff_R14;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            return;
          }
          if (unaff_R14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            __this_03 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                        UnityEngine_GameObject__GetComponentInParent_object_
                                  ((UnityEngine_GameObject_o *)unaff_R14,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
            if (__this_03 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              return;
            }
            __this_01 = (__this_03->fields)._Theme_k__BackingField;
            if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,1,(MethodInfo *)0x0)
              ;
            }
            Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_03,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  uStackY_d8 = il2cpp_runtime_helper_022b2c90();
  pGStackY_d0 = unaff_RBX;
  pUStackY_c8 = (UnityEngine_GameObject_o *)gameObject;
  lStackY_c0 = unaff_R13;
  pSStackY_b0 = pSVar9;
  if (g_data_057ae7b1 == '\0') {
    auStackY_e0 = (undefined1  [8])0x4464c53;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    auStackY_e0 = (undefined1  [8])0x4464c5f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    auStackY_e0 = (undefined1  [8])0x4464c6b;
    il2cpp_runtime_helper_023445d0(&"setting-slider-value-input");
    g_data_057ae7b1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    auStackY_e0 = (undefined1  [8])0x4464c8b;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar11 = (UnityEngine_Transform_o *)0x0;
  auStackY_e0 = (undefined1  [8])0x4464c99;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_04464cc6:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      auStackY_e0 = (undefined1  [8])0x4464cd8;
      il2cpp_runtime_helper_02337ed0();
    }
    auStackY_e0 = (undefined1  [8])0x4464ce7;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      auStackY_e0 = (undefined1  [8])0x4464d0f;
      pSVar12 = UnityEngine_Component__GetComponentsInChildren_object_
                          ((UnityEngine_Component_o *)pUVar11,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
      if (pSVar12 != (System_Object_array *)0x0) {
        if ((int)pSVar12->max_length < 1) {
          return;
        }
        uVar14 = 0;
        if ((pSVar12->max_length & 0xffffffff) != 0) {
          do {
            pUVar13 = (UnityEngine_Object_o *)pSVar12->m_Items[uVar14];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              auStackY_e0 = (undefined1  [8])0x4464d7e;
              il2cpp_runtime_helper_02337ed0();
            }
            auStackY_e0 = (undefined1  [8])0x4464d8a;
            bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar7 != '\0') {
              if (pUVar13 == (UnityEngine_Object_o *)0x0) goto label_04464ddc;
              auStackY_e0 = (undefined1  [8])0x4464d9d;
              pUVar13 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
              if (pUVar13 == (UnityEngine_Object_o *)0x0) goto label_04464ddc;
              auStackY_e0 = (undefined1  [8])0x4464dac;
              pSVar9 = UnityEngine_Object__get_name(pUVar13,(MethodInfo *)0x0);
              auStackY_e0 = (undefined1  [8])0x4464dba;
              bVar7 = System_String__op_Equality(pSVar9,"setting-slider-value-input",(MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                return;
              }
            }
            uVar14 = uVar14 + 1;
            uVar3 = (uint)pSVar12->max_length;
            if ((long)(int)uVar3 <= (long)uVar14) {
              return;
            }
          } while (uVar14 < uVar3);
        }
        goto label_04464de1;
      }
    }
  }
  else if (x != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    auStackY_e0 = (undefined1  [8])0x4464cb0;
    pUVar11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      auStackY_e0 = (undefined1  [8])0x4464cc3;
      pUVar11 = UnityEngine_Transform__get_root(pUVar11,(MethodInfo *)0x0);
      goto label_04464cc6;
    }
  }
label_04464ddc:
  auStackY_e0 = (undefined1  [8])0x4464de1;
  il2cpp_runtime_helper_022b2c90();
label_04464de1:
  auStackY_e0 = (undefined1  [8])0x4464de6;
  auStackY_e0._0_4_ = il2cpp_runtime_helper_022b2ca0();
  auStackY_e0._4_4_ = extraout_XMM0_Da;
  if (g_data_057ae7b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&"0.##################");
    g_data_057ae7b3 = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Single__ToString_3ccd050
            (__this_04,(System_String_o *)(auStackY_e0 + 4),"0.##################",(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Save
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Save (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4464910

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Save
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *pGVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_00;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  VirtualInvokeData *pVVar8;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  UnityEngine_Transform_o *pUVar9;
  System_Object_array *pSVar10;
  UnityEngine_Object_o *pUVar11;
  System_Globalization_CultureInfo_o *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *unaff_RBX;
  ulong uVar12;
  MethodInfo *in_RSI;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *x;
  long lVar13;
  long *gameObject;
  long unaff_R13;
  undefined4 extraout_XMM0_Da;
  float __this_02;
  undefined1 auStackY_c8 [8];
  undefined8 uStackY_c0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStackY_b8;
  UnityEngine_GameObject_o *pUStackY_b0;
  long lStackY_a8;
  UnityEngine_GameObject_o *pUStackY_a0;
  System_String_o *pSStackY_98;
  undefined4 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff7c;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 in_stack_ffffffffffffff84;
  undefined4 in_stack_ffffffffffffff88;
  undefined4 in_stack_ffffffffffffff8c;
  undefined4 in_stack_ffffffffffffff90;
  undefined4 in_stack_ffffffffffffff94;
  System_String_o local_68;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  System_String_Fields local_38;
  undefined8 uStack_30;
  
  if (g_data_057ae7b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"setting-slider-value-input");
    g_data_057ae7b0 = '\x01';
  }
  gameObject = &TypeInfo_AottgSettingSliderValueDialog;
  if (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) == 0) {
    return;
  }
  if (*(long *)(**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28) == 0) {
    return;
  }
  x = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)context.fields.GameObject;
  pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText
                     (context.fields.GameObject,in_RSI);
  if (pSVar7 == (System_String_o *)0x0) {
    if ((**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) != 0) &&
       (unaff_RBX = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)
                     (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28),
       unaff_RBX != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      pGVar4 = unaff_RBX->klass;
      uVar1._0_1_ = (pGVar4->_2).rank;
      uVar1._1_1_ = (pGVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pGVar4->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IAottgSettingAdapter) {
            pVVar8 = &(pGVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar13);
            goto label_04464a41;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar13);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IAottgSettingAdapter,0);
label_04464a41:
      x = unaff_RBX;
      pSVar7 = (System_String_o *)(*pVVar8->methodPtr)();
      goto label_04464a4d;
    }
  }
  else {
label_04464a4d:
    if ((**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) != 0) &&
       (unaff_RBX = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)
                     (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28),
       unaff_RBX != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      pGVar4 = unaff_RBX->klass;
      uVar2._0_1_ = (pGVar4->_2).rank;
      uVar2._1_1_ = (pGVar4->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar5 = (pGVar4->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IAottgSettingAdapter) {
            pVVar8 = &(pGVar4->vtable)._0_Equals + (*(int *)((long)&pIVar5->offset + lVar13) + 10);
            goto label_04464ad5;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar13);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBX,TypeInfo_IAottgSettingAdapter,10);
label_04464ad5:
      x = unaff_RBX;
      (*pVVar8->methodPtr)(unaff_RBX,pSVar7,pVVar8->method);
      unaff_R13 = **(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
      if (unaff_R13 != 0) {
        gameObject = *(long **)(unaff_R13 + 0x10);
        unaff_RBX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        x = unaff_RBX;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(unaff_RBX,(MethodInfo *)0x0);
        if (unaff_RBX != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (unaff_RBX->fields).id = "setting-slider-value-input";
          il2cpp_runtime_helper_022b4080(&(unaff_RBX->fields).id);
          (unaff_RBX->fields).value = pSVar7;
          il2cpp_runtime_helper_022b4080(&(unaff_RBX->fields).value,pSVar7);
          local_68.fields._stringLength = 0;
          local_68.fields._firstChar = 0;
          local_68.fields._6_2_ = 0;
          uStack_50 = 0;
          local_68.klass = (System_String_c *)0x0;
          local_68.monitor = (void *)0x0;
          __this_00.fields.ElementId._4_4_ = in_stack_ffffffffffffff7c;
          __this_00.fields.ElementId._0_4_ = in_stack_ffffffffffffff78;
          __this_00.fields.GameObject._0_4_ = in_stack_ffffffffffffff80;
          __this_00.fields.GameObject._4_4_ = in_stack_ffffffffffffff84;
          __this_00.fields.Node._0_4_ = in_stack_ffffffffffffff88;
          __this_00.fields.Node._4_4_ = in_stack_ffffffffffffff8c;
          __this_00.fields.InputSource = in_stack_ffffffffffffff90;
          __this_00.fields._28_4_ = in_stack_ffffffffffffff94;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                    (__this_00,&local_68,(UnityEngine_GameObject_o *)gameObject,
                     (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)context.fields.GameObject,
                     (MethodInfo *)unaff_RBX);
          local_38 = local_68.fields;
          uStack_30 = uStack_50;
          local_48 = local_68.klass._0_4_;
          uStack_44 = local_68.klass._4_4_;
          uStack_40 = local_68.monitor._0_4_;
          uStack_3c = local_68.monitor._4_4_;
          lVar13 = *(long *)(unaff_R13 + 0x88);
          if (lVar13 != 0) {
            (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40));
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          x = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)context.fields.GameObject;
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            return;
          }
          if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
            __this_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                        UnityEngine_GameObject__GetComponentInParent_object_
                                  (context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
            if (__this_01 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              return;
            }
            __this = (__this_01->fields)._Theme_k__BackingField;
            if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this,1,(MethodInfo *)0x0);
            }
            Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  uStackY_c0 = il2cpp_runtime_helper_022b2c90();
  pUStackY_a0 = context.fields.GameObject;
  pGStackY_b8 = unaff_RBX;
  pUStackY_b0 = (UnityEngine_GameObject_o *)gameObject;
  lStackY_a8 = unaff_R13;
  pSStackY_98 = pSVar7;
  if (g_data_057ae7b1 == '\0') {
    auStackY_c8 = (undefined1  [8])0x4464c53;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    auStackY_c8 = (undefined1  [8])0x4464c5f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    auStackY_c8 = (undefined1  [8])0x4464c6b;
    il2cpp_runtime_helper_023445d0(&"setting-slider-value-input");
    g_data_057ae7b1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    auStackY_c8 = (undefined1  [8])0x4464c8b;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar9 = (UnityEngine_Transform_o *)0x0;
  auStackY_c8 = (undefined1  [8])0x4464c99;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_04464cc6:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      auStackY_c8 = (undefined1  [8])0x4464cd8;
      il2cpp_runtime_helper_02337ed0();
    }
    auStackY_c8 = (undefined1  [8])0x4464ce7;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      auStackY_c8 = (undefined1  [8])0x4464d0f;
      pSVar10 = UnityEngine_Component__GetComponentsInChildren_object_
                          ((UnityEngine_Component_o *)pUVar9,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
      if (pSVar10 != (System_Object_array *)0x0) {
        if ((int)pSVar10->max_length < 1) {
          return;
        }
        uVar12 = 0;
        if ((pSVar10->max_length & 0xffffffff) != 0) {
          do {
            pUVar11 = (UnityEngine_Object_o *)pSVar10->m_Items[uVar12];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              auStackY_c8 = (undefined1  [8])0x4464d7e;
              il2cpp_runtime_helper_02337ed0();
            }
            auStackY_c8 = (undefined1  [8])0x4464d8a;
            bVar6 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              if (pUVar11 == (UnityEngine_Object_o *)0x0) goto label_04464ddc;
              auStackY_c8 = (undefined1  [8])0x4464d9d;
              pUVar11 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
              if (pUVar11 == (UnityEngine_Object_o *)0x0) goto label_04464ddc;
              auStackY_c8 = (undefined1  [8])0x4464dac;
              pSVar7 = UnityEngine_Object__get_name(pUVar11,(MethodInfo *)0x0);
              auStackY_c8 = (undefined1  [8])0x4464dba;
              bVar6 = System_String__op_Equality(pSVar7,"setting-slider-value-input",(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                return;
              }
            }
            uVar12 = uVar12 + 1;
            uVar3 = (uint)pSVar10->max_length;
            if ((long)(int)uVar3 <= (long)uVar12) {
              return;
            }
          } while (uVar12 < uVar3);
        }
        goto label_04464de1;
      }
    }
  }
  else if (x != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    auStackY_c8 = (undefined1  [8])0x4464cb0;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      auStackY_c8 = (undefined1  [8])0x4464cc3;
      pUVar9 = UnityEngine_Transform__get_root(pUVar9,(MethodInfo *)0x0);
      goto label_04464cc6;
    }
  }
label_04464ddc:
  auStackY_c8 = (undefined1  [8])0x4464de1;
  il2cpp_runtime_helper_022b2c90();
label_04464de1:
  auStackY_c8 = (undefined1  [8])0x4464de6;
  auStackY_c8._0_4_ = il2cpp_runtime_helper_022b2ca0();
  auStackY_c8._4_4_ = extraout_XMM0_Da;
  if (g_data_057ae7b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&"0.##################");
    g_data_057ae7b3 = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  System_Single__ToString_3ccd050
            (__this_02,(System_String_o *)(auStackY_c8 + 4),"0.##################",(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$InputText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x4464c30

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  undefined4 uVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Object_array *pSVar5;
  UnityEngine_Object_o *__this;
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar6;
  ulong uVar7;
  undefined4 extraout_XMM0_Da;
  float __this_00;
  undefined8 uStack_40;
  
  if (g_data_057ae7b1 == '\0') {
    uStack_40 = 0x4464c53;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    uStack_40 = 0x4464c5f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    uStack_40 = 0x4464c6b;
    il2cpp_runtime_helper_023445d0(&"setting-slider-value-input");
    g_data_057ae7b1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_40 = 0x4464c8b;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
  uStack_40 = 0x4464c99;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
label_04464cc6:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_40 = 0x4464cd8;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_40 = 0x4464ce7;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return (System_String_o *)0x0;
    }
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      uStack_40 = 0x4464d0f;
      pSVar5 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar4,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
      if (pSVar5 != (System_Object_array *)0x0) {
        if ((int)pSVar5->max_length < 1) {
          return (System_String_o *)0x0;
        }
        uVar7 = 0;
        if ((pSVar5->max_length & 0xffffffff) != 0) {
          do {
            x = (UnityEngine_Object_o *)pSVar5->m_Items[uVar7];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              uStack_40 = 0x4464d7e;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_40 = 0x4464d8a;
            bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (x == (UnityEngine_Object_o *)0x0) goto label_04464ddc;
              uStack_40 = 0x4464d9d;
              __this = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
              if (__this == (UnityEngine_Object_o *)0x0) goto label_04464ddc;
              uStack_40 = 0x4464dac;
              pSVar6 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
              uStack_40 = 0x4464dba;
              bVar2 = System_String__op_Equality(pSVar6,"setting-slider-value-input",(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                return (System_String_o *)x[0x16].fields.m_CachedPtr;
              }
            }
            uVar7 = uVar7 + 1;
            uVar1 = (uint)pSVar5->max_length;
            if ((long)(int)uVar1 <= (long)uVar7) {
              return (System_String_o *)0x0;
            }
          } while (uVar7 < uVar1);
        }
        goto label_04464de1;
      }
    }
  }
  else if (source != (UnityEngine_GameObject_o *)0x0) {
    uStack_40 = 0x4464cb0;
    pUVar4 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      uStack_40 = 0x4464cc3;
      pUVar4 = UnityEngine_Transform__get_root(pUVar4,(MethodInfo *)0x0);
      goto label_04464cc6;
    }
  }
label_04464ddc:
  uStack_40 = 0x4464de1;
  il2cpp_runtime_helper_022b2c90();
label_04464de1:
  uStack_40 = 0x4464de6;
  uVar3 = il2cpp_runtime_helper_022b2ca0();
  uStack_40 = CONCAT44(extraout_XMM0_Da,uVar3);
  if (g_data_057ae7b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&"0.##################");
    g_data_057ae7b3 = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar6 = System_Single__ToString_3ccd050
                     (__this_00,(System_String_o *)((long)&uStack_40 + 4),"0.##################",(MethodInfo *)method_00
                     );
  return pSVar6;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$RangeCallout
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__RangeCallout (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, const MethodInfo* method);
// 0x4464160

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__RangeCallout
          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_c *pGVar12;
  Il2CppRuntimeInterfaceOffsetPair *pIVar13;
  Il2CppClass *pIVar14;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_02;
  char cVar15;
  bool_conflict bVar16;
  System_String_o *pSVar17;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar18;
  Il2CppMethodPointer *ppIVar19;
  System_String_array *pSVar20;
  System_Globalization_CultureInfo_o *pSVar21;
  MethodInfo *pMVar22;
  System_String_o *pSVar23;
  MethodInfo *method_00;
  System_Action_GisketchActionContext__o *action;
  undefined4 extraout_var;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_03;
  System_String_o *extraout_RAX;
  UnityEngine_Transform_o *pUVar24;
  System_Object_array *pSVar25;
  UnityEngine_Object_o *__this_04;
  System_String_o **ppSVar26;
  System_Action_GisketchActionContext__o *action_00;
  System_String_o *text;
  ulong uVar27;
  MethodInfo *pMVar28;
  long lVar29;
  System_String_o *in_R8;
  System_String_o *in_R9;
  long *gameObject;
  MethodInfo **unaff_R13;
  System_String_array *unaff_R14;
  float __this_05;
  float __this_06;
  float __this_07;
  float __this_08;
  undefined4 extraout_XMM0_Da;
  float __this_09;
  undefined1 auStackY_118 [8];
  undefined8 uStackY_110;
  System_String_array *pSStackY_108;
  MethodInfo *pMStackY_100;
  MethodInfo **ppMStackY_f8;
  System_String_array *pSStackY_f0;
  System_String_o *pSStackY_e8;
  undefined4 in_stack_ffffffffffffff28;
  undefined4 in_stack_ffffffffffffff2c;
  undefined4 in_stack_ffffffffffffff30;
  undefined4 in_stack_ffffffffffffff34;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  System_String_Fields in_stack_ffffffffffffff58;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  undefined4 local_2c;
  
  if (g_data_057ae7b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Minimum value is ");
    il2cpp_runtime_helper_023445d0(&". Maximum value is ");
    il2cpp_runtime_helper_023445d0(&"Maximum value is ");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7b2 = '\x01';
  }
  if (adapter == (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)0x0) {
    return (System_String_o *)0x0;
  }
  pGVar12 = adapter->klass;
  uVar1._0_1_ = (pGVar12->_2).rank;
  uVar1._1_1_ = (pGVar12->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar13 = (pGVar12->_1).interfaceOffsets;
    lVar29 = 0;
    do {
      if (*(long *)((long)&pIVar13->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
        ppIVar19 = &pGVar12->vtable[*(int *)((long)&pIVar13->offset + lVar29) + 5].methodPtr;
        goto label_04464239;
      }
      lVar29 = lVar29 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar29);
  }
  ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(adapter,TypeInfo_IAottgSettingAdapter,5);
label_04464239:
  cVar15 = (**ppIVar19)(adapter,(MethodInfo *)ppIVar19[1]);
  if (cVar15 == '\0') {
    pGVar12 = adapter->klass;
    uVar2._0_1_ = (pGVar12->_2).rank;
    uVar2._1_1_ = (pGVar12->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar13 = (pGVar12->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar13->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
          ppIVar19 = &pGVar12->vtable[*(int *)((long)&pIVar13->offset + lVar29) + 6].methodPtr;
          goto label_044642a9;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar29);
    }
    ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(adapter,TypeInfo_IAottgSettingAdapter,6);
label_044642a9:
    cVar15 = (**ppIVar19)(adapter,(MethodInfo *)ppIVar19[1]);
    if (cVar15 == '\0') {
      return (System_String_o *)0x0;
    }
  }
  pGVar12 = adapter->klass;
  uVar3._0_1_ = (pGVar12->_2).rank;
  uVar3._1_1_ = (pGVar12->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar13 = (pGVar12->_1).interfaceOffsets;
    lVar29 = 0;
    do {
      if (*(long *)((long)&pIVar13->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
        ppIVar19 = &pGVar12->vtable[*(int *)((long)&pIVar13->offset + lVar29) + 5].methodPtr;
        goto label_04464320;
      }
      lVar29 = lVar29 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar29);
  }
  ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(adapter,TypeInfo_IAottgSettingAdapter,5);
label_04464320:
  cVar15 = (**ppIVar19)(adapter,(MethodInfo *)ppIVar19[1]);
  if (cVar15 == '\0') {
label_04464425:
    pGVar12 = adapter->klass;
    uVar6._0_1_ = (pGVar12->_2).rank;
    uVar6._1_1_ = (pGVar12->_2).minimumAlignment;
    if ((ulong)uVar6 != 0) {
      pIVar13 = (pGVar12->_1).interfaceOffsets;
      lVar29 = 0;
      do {
        if (*(long *)((long)&pIVar13->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
          ppIVar19 = &pGVar12->vtable[*(int *)((long)&pIVar13->offset + lVar29) + 5].methodPtr;
          goto label_04464489;
        }
        lVar29 = lVar29 + 0x10;
      } while ((ulong)uVar6 << 4 != lVar29);
    }
    ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(adapter,TypeInfo_IAottgSettingAdapter,5);
label_04464489:
    cVar15 = (**ppIVar19)(adapter,(MethodInfo *)ppIVar19[1]);
    pGVar12 = adapter->klass;
    uVar7._0_1_ = (pGVar12->_2).rank;
    uVar7._1_1_ = (pGVar12->_2).minimumAlignment;
    if (cVar15 == '\0') {
      if (uVar7 != 0) {
        pIVar13 = (pGVar12->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar13->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
            ppIVar19 = &pGVar12->vtable[*(int *)((long)&pIVar13->offset + lVar29) + 4].methodPtr;
            goto label_044645bc;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar7 << 4 != lVar29);
      }
      ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(adapter,TypeInfo_IAottgSettingAdapter,4);
label_044645bc:
      local_2c = (**ppIVar19)(adapter,(MethodInfo *)ppIVar19[1]);
      if (g_data_057ae7b3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&"0.##################");
        g_data_057ae7b3 = '\x01';
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar21 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar23 = System_Single__ToString_3ccd050
                          (__this_06,(System_String_o *)&local_2c,(System_IFormatProvider_o *)"0.##################",
                           (MethodInfo *)pSVar21);
      ppSVar26 = (System_String_o **)&"Maximum value is ";
    }
    else {
      if (uVar7 != 0) {
        pIVar13 = (pGVar12->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar13->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
            ppIVar19 = &pGVar12->vtable[*(int *)((long)&pIVar13->offset + lVar29) + 3].methodPtr;
            goto label_0446452b;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar7 << 4 != lVar29);
      }
      ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(adapter,TypeInfo_IAottgSettingAdapter,3);
label_0446452b:
      local_2c = (**ppIVar19)(adapter,(MethodInfo *)ppIVar19[1]);
      if (g_data_057ae7b3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&"0.##################");
        g_data_057ae7b3 = '\x01';
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar21 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar23 = System_Single__ToString_3ccd050
                          (__this_05,(System_String_o *)&local_2c,(System_IFormatProvider_o *)"0.##################",
                           (MethodInfo *)pSVar21);
      ppSVar26 = &"Minimum value is ";
    }
    pSVar23 = System_String__Concat_3af7150(*ppSVar26,pSVar23,".",(MethodInfo *)0x0);
    return pSVar23;
  }
  pGVar12 = adapter->klass;
  uVar4._0_1_ = (pGVar12->_2).rank;
  uVar4._1_1_ = (pGVar12->_2).minimumAlignment;
  if ((ulong)uVar4 != 0) {
    pIVar13 = (pGVar12->_1).interfaceOffsets;
    lVar29 = 0;
    do {
      if (*(long *)((long)&pIVar13->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
        ppIVar19 = &pGVar12->vtable[*(int *)((long)&pIVar13->offset + lVar29) + 6].methodPtr;
        goto label_04464389;
      }
      lVar29 = lVar29 + 0x10;
    } while ((ulong)uVar4 << 4 != lVar29);
  }
  ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(adapter,TypeInfo_IAottgSettingAdapter,6);
label_04464389:
  cVar15 = (**ppIVar19)(adapter,(MethodInfo *)ppIVar19[1]);
  if (cVar15 == '\0') goto label_04464425;
  pMVar28 = (MethodInfo *)&g_data_00000005;
  pSVar20 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (pSVar20 != (System_String_array *)0x0) {
    if ((int)pSVar20->max_length != 0) {
      pSVar20->m_Items[0] = "Minimum value is ";
      il2cpp_runtime_helper_022b4080();
      pGVar12 = adapter->klass;
      uVar5._0_1_ = (pGVar12->_2).rank;
      uVar5._1_1_ = (pGVar12->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar13 = (pGVar12->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar13->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
            ppIVar19 = &pGVar12->vtable[*(int *)((long)&pIVar13->offset + lVar29) + 3].methodPtr;
            goto label_04464665;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar29);
      }
      ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(adapter,TypeInfo_IAottgSettingAdapter,3);
label_04464665:
      local_2c = (**ppIVar19)(adapter,(MethodInfo *)ppIVar19[1]);
      if (g_data_057ae7b3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&"0.##################");
        g_data_057ae7b3 = '\x01';
      }
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar21 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      unaff_R13 = &"0.##################";
      pMVar28 = "0.##################";
      pMVar22 = (MethodInfo *)
                System_Single__ToString_3ccd050
                          (__this_07,(System_String_o *)&local_2c,(System_IFormatProvider_o *)"0.##################",
                           (MethodInfo *)pSVar21);
      if (1 < (uint)pSVar20->max_length) {
        pSVar20->m_Items[1] = (System_String_o *)pMVar22;
        il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 1);
        pMVar28 = pMVar22;
        if (2 < (uint)pSVar20->max_length) {
          pSVar20->m_Items[2] = ". Maximum value is ";
          il2cpp_runtime_helper_022b4080();
          pGVar12 = adapter->klass;
          uVar8._0_1_ = (pGVar12->_2).rank;
          uVar8._1_1_ = (pGVar12->_2).minimumAlignment;
          if ((ulong)uVar8 != 0) {
            pIVar13 = (pGVar12->_1).interfaceOffsets;
            lVar29 = 0;
            do {
              if (*(long *)((long)&pIVar13->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
                ppIVar19 = &pGVar12->vtable[*(int *)((long)&pIVar13->offset + lVar29) + 4].methodPtr;
                goto label_04464775;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)uVar8 << 4 != lVar29);
          }
          ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(adapter,TypeInfo_IAottgSettingAdapter,4);
label_04464775:
          local_2c = (**ppIVar19)(adapter,(MethodInfo *)ppIVar19[1]);
          if (g_data_057ae7b3 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
            il2cpp_runtime_helper_023445d0(&"0.##################");
            g_data_057ae7b3 = '\x01';
          }
          if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar21 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          pMVar28 = "0.##################";
          pMVar22 = (MethodInfo *)
                    System_Single__ToString_3ccd050
                              (__this_08,(System_String_o *)&local_2c,(System_IFormatProvider_o *)"0.##################"
                               ,(MethodInfo *)pSVar21);
          if (3 < (uint)pSVar20->max_length) {
            pSVar20->m_Items[3] = (System_String_o *)pMVar22;
            il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 3);
            pMVar28 = pMVar22;
            if (4 < (uint)pSVar20->max_length) {
              pSVar20->m_Items[4] = ".";
              il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 4);
              pSVar23 = System_String__Concat_3af7570(pSVar20,(MethodInfo *)0x0);
              return pSVar23;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    unaff_R14 = pSVar20;
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
  pMVar22 = pMVar28;
  if (g_data_057ae7af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Save);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae7af = '\x01';
  }
  if (pMVar28 != (MethodInfo *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)pMVar28,"Cancel","overlay.close",
               (MethodInfo *)0x0);
    action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x44648de;
    System_Action_GisketchActionContext____ctor();
    pSVar23 = "Save";
    action_00 = (System_Action_GisketchActionContext__o *)0x0;
    __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar28->invoker_method;
    if (__this == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar28->name ==
          (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar17 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar17 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                            ((Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar28->name,
                             (System_String_o *)pMVar28->klass,action_00,(MethodInfo *)0x0);
      }
      pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Button
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar28,(int32_t)pSVar23,text,pSVar17,in_R8,
                           in_R9,enter,(System_String_o *)method_00,(MethodInfo *)in_stack_ffffffffffffff58);
      return (System_String_o *)pGVar18;
    }
    __this_00 = (__this->fields)._actions;
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar17 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar17 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                          (__this_00,(__this->fields)._ownerId,action,(MethodInfo *)0x0);
    }
    pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        (__this,0,pSVar23,pSVar17,(System_String_o *)0x0,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                         method_00);
    return (System_String_o *)pGVar18;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSettingSliderValueDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IAottgSettingAdapter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"setting-slider-value-input");
    g_data_057ae7b0 = '\x01';
  }
  gameObject = &TypeInfo_AottgSettingSliderValueDialog;
  pSVar23 = (System_String_o *)**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
  if (pSVar23 == (System_String_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if (pSVar23[1].fields == (System_String_Fields)0x0) {
    return pSVar23;
  }
  pSVar20 = unaff_R14;
  pSVar23 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__InputText
                      ((UnityEngine_GameObject_o *)unaff_R14,pMVar22);
  if (pSVar23 == (System_String_o *)0x0) {
    if ((**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) != 0) &&
       (adapter = *(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o **)
                   (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28),
       (System_String_array *)adapter != (System_String_array *)0x0)) {
      pIVar14 = (((System_String_array *)adapter)->obj).klass;
      uVar9._0_1_ = (pIVar14->_2).rank;
      uVar9._1_1_ = (pIVar14->_2).minimumAlignment;
      if ((ulong)uVar9 != 0) {
        pIVar13 = (pIVar14->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar13->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
            ppIVar19 = &pIVar14->vtable[*(int *)((long)&pIVar13->offset + lVar29)].methodPtr;
            goto label_04464a41;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar9 << 4 != lVar29);
      }
      ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(adapter,TypeInfo_IAottgSettingAdapter,0);
label_04464a41:
      pSVar20 = (System_String_array *)adapter;
      pSVar23 = (System_String_o *)(**ppIVar19)();
      goto label_04464a4d;
    }
  }
  else {
label_04464a4d:
    if ((**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) != 0) &&
       (adapter = *(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o **)
                   (**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8) + 0x28),
       (System_String_array *)adapter != (System_String_array *)0x0)) {
      pIVar14 = (((System_String_array *)adapter)->obj).klass;
      uVar10._0_1_ = (pIVar14->_2).rank;
      uVar10._1_1_ = (pIVar14->_2).minimumAlignment;
      if ((ulong)uVar10 != 0) {
        pIVar13 = (pIVar14->_1).interfaceOffsets;
        lVar29 = 0;
        do {
          if (*(long *)((long)&pIVar13->interfaceType + lVar29) == TypeInfo_IAottgSettingAdapter) {
            ppIVar19 = &pIVar14->vtable[*(int *)((long)&pIVar13->offset + lVar29) + 10].methodPtr;
            goto label_04464ad5;
          }
          lVar29 = lVar29 + 0x10;
        } while ((ulong)uVar10 << 4 != lVar29);
      }
      ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(adapter,TypeInfo_IAottgSettingAdapter,10);
label_04464ad5:
      pSVar20 = (System_String_array *)adapter;
      (**ppIVar19)(adapter,pSVar23,(MethodInfo *)ppIVar19[1]);
      unaff_R13 = (MethodInfo **)**(long **)(TypeInfo_AottgSettingSliderValueDialog + 0xb8);
      if (unaff_R13 != (MethodInfo **)0x0) {
        gameObject = (long *)unaff_R13[2];
        adapter = (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        pSVar20 = (System_String_array *)adapter;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)adapter,(MethodInfo *)0x0);
        if ((System_String_array *)adapter != (System_String_array *)0x0) {
          ((System_String_array *)adapter)->max_length = (il2cpp_array_size_t)"setting-slider-value-input";
          il2cpp_runtime_helper_022b4080(&((System_String_array *)adapter)->max_length);
          ((System_String_array *)adapter)->m_Items[6] = pSVar23;
          il2cpp_runtime_helper_022b4080(((System_String_array *)adapter)->m_Items + 6,pSVar23);
          __this_02.fields.ElementId._4_4_ = in_stack_ffffffffffffff2c;
          __this_02.fields.ElementId._0_4_ = in_stack_ffffffffffffff28;
          __this_02.fields.GameObject._0_4_ = in_stack_ffffffffffffff30;
          __this_02.fields.GameObject._4_4_ = in_stack_ffffffffffffff34;
          __this_02.fields.Node._0_4_ = in_stack_ffffffffffffff38;
          __this_02.fields.Node._4_4_ = in_stack_ffffffffffffff3c;
          __this_02.fields.InputSource = in_stack_ffffffffffffff40;
          __this_02.fields._28_4_ = in_stack_ffffffffffffff44;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                    (__this_02,(System_String_o *)&stack0xffffffffffffff48,
                     (UnityEngine_GameObject_o *)gameObject,
                     (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R14,(MethodInfo *)adapter);
          pMVar28 = unaff_R13[0x11];
          if (pMVar28 != (MethodInfo *)0x0) {
            (*(code *)pMVar28->name)((pMVar28->field8_0x40).genericMethod);
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar20 = unaff_R14;
          bVar16 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar16 == '\0') {
            return (System_String_o *)CONCAT44(extraout_var,bVar16);
          }
          if (unaff_R14 != (System_String_array *)0x0) {
            __this_03 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                        UnityEngine_GameObject__GetComponentInParent_object_
                                  ((UnityEngine_GameObject_o *)unaff_R14,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
            if (__this_03 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              __this_01 = (__this_03->fields)._Theme_k__BackingField;
              if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                          ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,1,
                           (MethodInfo *)0x0);
              }
              Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_03,(MethodInfo *)0x0);
              return extraout_RAX;
            }
            return (System_String_o *)0x0;
          }
        }
      }
    }
  }
  uStackY_110 = il2cpp_runtime_helper_022b2c90();
  pSStackY_108 = (System_String_array *)adapter;
  pMStackY_100 = (MethodInfo *)gameObject;
  ppMStackY_f8 = unaff_R13;
  pSStackY_f0 = unaff_R14;
  pSStackY_e8 = pSVar23;
  if (g_data_057ae7b1 == '\0') {
    auStackY_118 = (undefined1  [8])0x4464c53;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    auStackY_118 = (undefined1  [8])0x4464c5f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    auStackY_118 = (undefined1  [8])0x4464c6b;
    il2cpp_runtime_helper_023445d0(&"setting-slider-value-input");
    g_data_057ae7b1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    auStackY_118 = (undefined1  [8])0x4464c8b;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar24 = (UnityEngine_Transform_o *)0x0;
  auStackY_118 = (undefined1  [8])0x4464c99;
  bVar16 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar16 == '\0') {
label_04464cc6:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      auStackY_118 = (undefined1  [8])0x4464cd8;
      il2cpp_runtime_helper_02337ed0();
    }
    auStackY_118 = (undefined1  [8])0x4464ce7;
    bVar16 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar16 != '\0') {
      return (System_String_o *)0x0;
    }
    if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
      auStackY_118 = (undefined1  [8])0x4464d0f;
      pSVar25 = UnityEngine_Component__GetComponentsInChildren_object_
                          ((UnityEngine_Component_o *)pUVar24,1,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
      if (pSVar25 != (System_Object_array *)0x0) {
        if ((int)pSVar25->max_length < 1) {
          return (System_String_o *)0x0;
        }
        uVar27 = 0;
        if ((pSVar25->max_length & 0xffffffff) != 0) {
          do {
            x = (UnityEngine_Object_o *)pSVar25->m_Items[uVar27];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              auStackY_118 = (undefined1  [8])0x4464d7e;
              il2cpp_runtime_helper_02337ed0();
            }
            auStackY_118 = (undefined1  [8])0x4464d8a;
            bVar16 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar16 != '\0') {
              if (x == (UnityEngine_Object_o *)0x0) goto label_04464ddc;
              auStackY_118 = (undefined1  [8])0x4464d9d;
              __this_04 = (UnityEngine_Object_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
              if (__this_04 == (UnityEngine_Object_o *)0x0) goto label_04464ddc;
              auStackY_118 = (undefined1  [8])0x4464dac;
              pSVar23 = UnityEngine_Object__get_name(__this_04,(MethodInfo *)0x0);
              auStackY_118 = (undefined1  [8])0x4464dba;
              bVar16 = System_String__op_Equality(pSVar23,"setting-slider-value-input",(MethodInfo *)0x0);
              if ((char)bVar16 != '\0') {
                return (System_String_o *)x[0x16].fields.m_CachedPtr;
              }
            }
            uVar27 = uVar27 + 1;
            uVar11 = (uint)pSVar25->max_length;
            if ((long)(int)uVar11 <= (long)uVar27) {
              return (System_String_o *)0x0;
            }
          } while (uVar27 < uVar11);
        }
        goto label_04464de1;
      }
    }
  }
  else if (pSVar20 != (System_String_array *)0x0) {
    auStackY_118 = (undefined1  [8])0x4464cb0;
    pUVar24 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar20,(MethodInfo *)0x0);
    if (pUVar24 != (UnityEngine_Transform_o *)0x0) {
      auStackY_118 = (undefined1  [8])0x4464cc3;
      pUVar24 = UnityEngine_Transform__get_root(pUVar24,(MethodInfo *)0x0);
      goto label_04464cc6;
    }
  }
label_04464ddc:
  auStackY_118 = (undefined1  [8])0x4464de1;
  il2cpp_runtime_helper_022b2c90();
label_04464de1:
  auStackY_118 = (undefined1  [8])0x4464de6;
  auStackY_118._0_4_ = il2cpp_runtime_helper_022b2ca0();
  auStackY_118._4_4_ = extraout_XMM0_Da;
  if (g_data_057ae7b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&"0.##################");
    g_data_057ae7b3 = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar21 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar23 = System_Single__ToString_3ccd050
                      (__this_09,(System_String_o *)(auStackY_118 + 4),
                       (System_IFormatProvider_o *)"0.##################",(MethodInfo *)pSVar21);
  return pSVar23;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Format
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Format (float value, const MethodInfo* method);
// 0x4464df0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog__Format(float value,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar1;
  float __this;
  
  if (g_data_057ae7b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&"0.##################");
    g_data_057ae7b3 = '\x01';
  }
  if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar1 = System_Single__ToString_3ccd050
                     (__this,(System_String_o *)&stack0xfffffffffffffffc,"0.##################",(MethodInfo *)method_00)
  ;
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o* __this, const MethodInfo* method);
// 0x4464e60

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


