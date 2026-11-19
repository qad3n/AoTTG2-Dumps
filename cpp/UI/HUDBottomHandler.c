// Type: UI.HUDBottomHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/HUDBottomHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/HUDBottomHandler.cs
// --------------------------------

// UI.HUDBottomHandler$$SetBottomHUD
// il2cpp: void UI_HUDBottomHandler__SetBottomHUD (UI_HUDBottomHandler_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5d22640

void UI_HUDBottomHandler__SetBottomHUD
               (UI_HUDBottomHandler_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  Characters_BaseCharacter_o **targetAddress;
  Characters_Human_o **targetAddress_00;
  Characters_BasicTitan_o **targetAddress_01;
  UnityEngine_GameObject_o **targetAddress_02;
  UnityEngine_UI_Image_o **ppUVar1;
  UnityEngine_UI_Image_o **ppUVar2;
  UnityEngine_UI_Image_o **ppUVar3;
  UnityEngine_UI_Image_o **ppUVar4;
  UnityEngine_UI_Image_o **ppUVar5;
  UnityEngine_UI_Image_o **targetAddress_03;
  UnityEngine_UI_Image_o **targetAddress_04;
  UnityEngine_UI_Image_o **targetAddress_05;
  UnityEngine_UI_Text_o **targetAddress_06;
  UnityEngine_UI_Text_o **targetAddress_07;
  UnityEngine_GameObject_o **targetAddress_08;
  UnityEngine_GameObject_o **targetAddress_09;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  UnityEngine_Object_o *pUVar13;
  Characters_BaseCharacter_o *x;
  Characters_BasicTitan_o *pCVar14;
  Characters_BasicTitan_c *pCVar15;
  Characters_HumanSetup_o *pCVar16;
  Characters_BaseShifter_o *shifter;
  Settings_InGameSet_o *pSVar17;
  Settings_InGameMiscSettings_o *pSVar18;
  Settings_BoolSetting_o *pSVar19;
  Characters_Human_o *pCVar20;
  Characters_BasicTitan_c *pCVar21;
  bool bVar22;
  uint uVar23;
  UnityEngine_UI_Text_o *pUVar24;
  UnityEngine_UI_Slider_o *pUVar25;
  UnityEngine_UI_Image_o *pUVar26;
  UnityEngine_Transform_o *pUVar27;
  UnityEngine_GameObject_o *pUVar28;
  System_Collections_Generic_List_GameObject__o *pSVar29;
  Il2CppObject *pIVar30;
  Il2CppClass *pIVar31;
  Characters_BasicTitan_c *pCVar32;
  long lVar33;
  UnityEngine_Vector2_o offset;
  undefined8 uVar34;
  UnityEngine_Vector2_o offset_00;
  undefined8 uVar35;
  UnityEngine_Color_o UVar36;
  
  if (Il2CppMethodInitialized_07547ddb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Slider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HUDScaler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ShifterHUD);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"GunReloadRight");
    il2cpp_codegen_initialize_runtime_metadata(&"HealthBar");
    il2cpp_codegen_initialize_runtime_metadata(&"GunShoot");
    il2cpp_codegen_initialize_runtime_metadata(&"TSBombReload");
    il2cpp_codegen_initialize_runtime_metadata(&"GunEmptyLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeAmmoGroupLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"AmmoFillLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"AmmoLabelLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TSBombBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialIconFill");
    il2cpp_codegen_initialize_runtime_metadata(&"GasFillLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"GunShootRight");
    il2cpp_codegen_initialize_runtime_metadata(&"GasFillRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/HUDBottomAHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Fill Area/Fill");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeFillRight");
    il2cpp_codegen_initialize_runtime_metadata(&"GunReloadLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"TSBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"PerkCDTimer");
    il2cpp_codegen_initialize_runtime_metadata(&"BombFillRight");
    il2cpp_codegen_initialize_runtime_metadata(&"PerkCDTimerBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"GunBackgroundLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/HUDBottomTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"TSShoot");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeAmmoGroupRight");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeOut");
    il2cpp_codegen_initialize_runtime_metadata(&"GunAmmoFillRight");
    il2cpp_codegen_initialize_runtime_metadata(&"GunShootLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"GunEmptyRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/HUDBottomBlade");
    il2cpp_codegen_initialize_runtime_metadata(&"GunAmmoLabelLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"GunBackgroundRight");
    il2cpp_codegen_initialize_runtime_metadata(&"AmmoFillRight");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialFill");
    il2cpp_codegen_initialize_runtime_metadata(&"GunAmmoBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"TSReload");
    il2cpp_codegen_initialize_runtime_metadata(&"BombFillLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"AmmoLabelRight");
    il2cpp_codegen_initialize_runtime_metadata(&"StaminaBar");
    il2cpp_codegen_initialize_runtime_metadata(&"GasBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"GunBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"GunReload");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/HUDBottomAPG");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeFillLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"GunAmmoLabelRight");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeReload");
    il2cpp_codegen_initialize_runtime_metadata(&"GunAmmoFillLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialIconBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/HUDBottomTS");
    Il2CppMethodInitialized_07547ddb = '\x01';
  }
  targetAddress = &(__this->fields)._character;
  (__this->fields)._character = character;
  Il2CppCodeGenWriteBarrier(targetAddress);
  targetAddress_00 = &(__this->fields)._human;
  (__this->fields)._human = (Characters_Human_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  targetAddress_01 = &(__this->fields)._playerTitan;
  (__this->fields)._playerTitan = (Characters_BasicTitan_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress_01);
  pUVar13 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress_02 = &(__this->fields)._hudBottom;
  bVar22 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar22) {
    pUVar13 = (UnityEngine_Object_o *)*targetAddress_02;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
  }
  x = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar22 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pCVar32 = (Characters_BasicTitan_c *)TypeInfo_Characters_Human;
  pCVar21 = TypeInfo_Characters_BasicTitan;
  if ((bVar22) ||
     (pCVar14 = (Characters_BasicTitan_o *)*targetAddress, pCVar14 == (Characters_BasicTitan_o *)0x0)) {
    return;
  }
  pCVar15 = pCVar14->klass;
  bVar10 = (pCVar15->_2).typeHierarchyDepth;
  bVar11 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if ((bVar10 < bVar11) ||
     ((pCVar15->_2).typeHierarchy[(ulong)bVar11 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    bVar11 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if ((bVar10 < bVar11) ||
       ((pCVar15->_2).typeHierarchy[(ulong)bVar11 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
      bVar11 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      if (bVar10 < bVar11) {
        return;
      }
      if ((pCVar15->_2).typeHierarchy[(ulong)bVar11 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter) {
        return;
      }
      pUVar27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      shifter = (Characters_BaseShifter_o *)(__this->fields)._character;
      if ((TypeInfo_UI_ShifterHUD->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ShifterHUD);
      }
      if (shifter != (Characters_BaseShifter_o *)0x0) {
        bVar10 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
        if (((shifter->klass->_2).typeHierarchyDepth < bVar10) ||
           ((shifter->klass->_2).typeHierarchy[(ulong)bVar10 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
          il2cpp_codegen_raise_invalid_cast_exception(shifter);
        }
      }
      pUVar28 = UI_ShifterHUD__Create(pUVar27,shifter,(MethodInfo *)0x0);
      *targetAddress_02 = pUVar28;
      Il2CppCodeGenWriteBarrier(targetAddress_02);
      return;
    }
    *targetAddress_01 = pCVar14;
    pCVar32 = pCVar21;
    if ((bVar11 <= (pCVar14->klass->_2).typeHierarchyDepth) &&
       ((pCVar14->klass->_2).typeHierarchy[(ulong)bVar11 - 1] == (Il2CppClass *)pCVar21)) {
      Il2CppCodeGenWriteBarrier(targetAddress_01);
      pUVar27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar28 = UI_ElementFactory__InstantiateAndBind(pUVar27,"Prefabs/InGame/HUDBottomTitan",(MethodInfo *)0x0);
      (__this->fields)._hudBottom = pUVar28;
      Il2CppCodeGenWriteBarrier(targetAddress_02);
      pUVar28 = (__this->fields)._hudBottom;
      if ((pUVar28 != (UnityEngine_GameObject_o *)0x0) &&
         ((pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
          pUVar27 != (UnityEngine_Transform_o *)0x0 &&
          (pUVar27 = UnityEngine_Transform__Find(pUVar27,"StaminaBar",(MethodInfo *)0x0),
          pUVar27 != (UnityEngine_Transform_o *)0x0)))) {
        pUVar25 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar27,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Slider);
        (__this->fields)._staminaSlider = pUVar25;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._staminaSlider);
        pUVar25 = (__this->fields)._staminaSlider;
        if ((pUVar25 != (UnityEngine_UI_Slider_o *)0x0) &&
           ((pUVar27 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
            pUVar27 != (UnityEngine_Transform_o *)0x0 &&
            (pUVar27 = UnityEngine_Transform__Find(pUVar27,"Fill Area/Fill",(MethodInfo *)0x0),
            pUVar27 != (UnityEngine_Transform_o *)0x0)))) {
          pUVar26 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar27,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
          (__this->fields)._staminaFill = pUVar26;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._staminaFill);
          pUVar28 = (__this->fields)._hudBottom;
          if (pUVar28 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__AddComponent_object_
                      (pUVar28,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_HUDScaler)
            ;
            pUVar28 = *targetAddress_02;
            if (Il2CppMethodInitialized_0753e72c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e72c = '\x01';
            }
            uVar6 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
            uVar8 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.y;
            offset.fields.x = (float)uVar6 * 10.0;
            offset.fields.y = (float)uVar8 * 10.0;
            UI_ElementFactory__SetAnchor(pUVar28,7,7,offset,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_05d24841;
    }
label_05d2484b:
    il2cpp_codegen_raise_invalid_cast_exception(pCVar14,pCVar32);
  }
  *targetAddress_00 = (Characters_Human_o *)pCVar14;
  if (((pCVar14->klass->_2).typeHierarchyDepth < bVar11) ||
     ((pCVar14->klass->_2).typeHierarchy[(ulong)bVar11 - 1] != (Il2CppClass *)pCVar32)) goto label_05d2484b;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  if ((*targetAddress_00 == (Characters_Human_o *)0x0) ||
     (pCVar16 = ((*targetAddress_00)->fields).Setup, pCVar16 == (Characters_HumanSetup_o *)0x0))
  goto label_05d24841;
  iVar12 = (pCVar16->fields).Weapon;
  if (iVar12 == 1) {
    pUVar27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar28 = UI_ElementFactory__InstantiateAndBind(pUVar27,"Prefabs/InGame/HUDBottomAHSS",(MethodInfo *)0x0);
    (__this->fields)._hudBottom = pUVar28;
    Il2CppCodeGenWriteBarrier(targetAddress_02);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunBackgroundLeft",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._ahssBackgroundLeft = pUVar26;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssBackgroundLeft);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunBackgroundRight",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._ahssBackgroundRight = pUVar26;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssBackgroundRight);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunEmptyLeft",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._ahssEmptyLeft = pUVar26;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssEmptyLeft);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunEmptyRight",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._ahssEmptyRight = pUVar26;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssEmptyRight);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunReloadLeft",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar1 = &(__this->fields)._ahssReloadLeft;
    (__this->fields)._ahssReloadLeft = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar1);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunReloadRight",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar2 = &(__this->fields)._ahssReloadRight;
    (__this->fields)._ahssReloadRight = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar2);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunShootLeft",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._ahssShootLeft = pUVar26;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssShootLeft);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunShootRight",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._ahssShootRight = pUVar26;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssShootRight);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunReloadLeft",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    *ppUVar1 = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar1);
    if (((*targetAddress_02 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(*targetAddress_02,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunReloadRight",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    *ppUVar2 = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar2);
    if (((*targetAddress_02 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(*targetAddress_02,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunAmmoLabelLeft",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar24 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    (__this->fields)._ammoLabelLeft = pUVar24;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoLabelLeft);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunAmmoLabelRight",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar24 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    (__this->fields)._ammoLabelRight = pUVar24;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoLabelRight);
    pUVar26 = (__this->fields)._ahssEmptyLeft;
    if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
    (*(pUVar26->klass->vtable)._23_set_color.methodPtr)
              (pUVar26,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
               (pUVar26->klass->vtable)._23_set_color.method);
    pUVar26 = (__this->fields)._ahssEmptyRight;
    if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
    (*(pUVar26->klass->vtable)._23_set_color.methodPtr)
              (pUVar26,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
               (pUVar26->klass->vtable)._23_set_color.method);
    pUVar26 = (__this->fields)._ahssReloadLeft;
    if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
    (*(pUVar26->klass->vtable)._23_set_color.methodPtr)
              (pUVar26,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
               (pUVar26->klass->vtable)._23_set_color.method);
    pUVar26 = (__this->fields)._ahssReloadRight;
    if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
    (*(pUVar26->klass->vtable)._23_set_color.methodPtr)
              (pUVar26,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
               (pUVar26->klass->vtable)._23_set_color.method);
    pUVar26 = (__this->fields)._ahssShootLeft;
    if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
    (*(pUVar26->klass->vtable)._23_set_color.methodPtr)
              (pUVar26,(UnityEngine_Color_o)(__this->fields).BackgroundLowColor.fields,
               (pUVar26->klass->vtable)._23_set_color.method);
    pUVar26 = (__this->fields)._ahssShootRight;
    if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
    uVar34._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
    uVar34._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
    uVar35._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
    uVar35._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
label_05d236b6:
    UVar36.fields.b = (float)(int)uVar35;
    UVar36.fields.a = (float)(int)((ulong)uVar35 >> 0x20);
    UVar36.fields.r = (float)(int)uVar34;
    UVar36.fields.g = (float)(int)((ulong)uVar34 >> 0x20);
    (*(pUVar26->klass->vtable)._23_set_color.methodPtr)
              (pUVar26,UVar36,(pUVar26->klass->vtable)._23_set_color.method);
  }
  else if (iVar12 == 2) {
    pUVar27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar28 = UI_ElementFactory__InstantiateAndBind(pUVar27,"Prefabs/InGame/HUDBottomTS",(MethodInfo *)0x0);
    (__this->fields)._hudBottom = pUVar28;
    Il2CppCodeGenWriteBarrier(targetAddress_02);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"TSBackground",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar1 = &(__this->fields)._tsBackground;
    (__this->fields)._tsBackground = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar1);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"TSBombBackground",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar2 = &(__this->fields)._tsBombBackground;
    (__this->fields)._tsBombBackground = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar2);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"AmmoFillLeft",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar3 = &(__this->fields)._ammoFillLeft;
    (__this->fields)._ammoFillLeft = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar3);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"AmmoFillRight",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar4 = &(__this->fields)._ammoFillRight;
    (__this->fields)._ammoFillRight = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar4);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"BombFillLeft",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar5 = &(__this->fields)._bombFillLeft;
    (__this->fields)._bombFillLeft = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar5);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"BombFillRight",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    targetAddress_03 = &(__this->fields)._bombFillRight;
    (__this->fields)._bombFillRight = pUVar26;
    Il2CppCodeGenWriteBarrier(targetAddress_03);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"TSReload",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    targetAddress_04 = &(__this->fields)._tsReload;
    (__this->fields)._tsReload = pUVar26;
    Il2CppCodeGenWriteBarrier(targetAddress_04);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"TSBombReload",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._tsBombReload = pUVar26;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._tsBombReload);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"TSShoot",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    targetAddress_05 = &(__this->fields)._tsShoot;
    (__this->fields)._tsShoot = pUVar26;
    Il2CppCodeGenWriteBarrier(targetAddress_05);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"AmmoLabelLeft",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar24 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    targetAddress_06 = &(__this->fields)._ammoLabelLeft;
    (__this->fields)._ammoLabelLeft = pUVar24;
    Il2CppCodeGenWriteBarrier(targetAddress_06);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"AmmoLabelRight",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar24 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    targetAddress_07 = &(__this->fields)._ammoLabelRight;
    (__this->fields)._ammoLabelRight = pUVar24;
    Il2CppCodeGenWriteBarrier(targetAddress_07);
    pUVar26 = (__this->fields)._tsReload;
    if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
    (*(pUVar26->klass->vtable)._23_set_color.methodPtr)
              (pUVar26,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
               (pUVar26->klass->vtable)._23_set_color.method);
    pSVar17 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar17 == (Settings_InGameSet_o *)0x0) ||
        (pSVar18 = (pSVar17->fields).Misc, pSVar18 == (Settings_InGameMiscSettings_o *)0x0)) ||
       (pSVar19 = (pSVar18->fields).ThunderspearPVP, pSVar19 == (Settings_BoolSetting_o *)0x0))
    goto label_05d24841;
    if ((pSVar19->fields)._value != false) {
      pUVar26 = *ppUVar1;
      if ((pUVar26 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar28 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
         pUVar28 == (UnityEngine_GameObject_o *)0x0)) goto label_05d24841;
      UnityEngine_GameObject__SetActive(pUVar28,false,(MethodInfo *)0x0);
      pUVar26 = *ppUVar2;
      if ((pUVar26 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar28 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
         pUVar28 == (UnityEngine_GameObject_o *)0x0)) goto label_05d24841;
      UnityEngine_GameObject__SetActive(pUVar28,true,(MethodInfo *)0x0);
      pUVar26 = *ppUVar3;
      if ((pUVar26 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar28 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
         pUVar28 == (UnityEngine_GameObject_o *)0x0)) goto label_05d24841;
      UnityEngine_GameObject__SetActive(pUVar28,false,(MethodInfo *)0x0);
      pUVar26 = *ppUVar4;
      if ((pUVar26 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar28 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
         pUVar28 == (UnityEngine_GameObject_o *)0x0)) goto label_05d24841;
      UnityEngine_GameObject__SetActive(pUVar28,false,(MethodInfo *)0x0);
      pUVar26 = *ppUVar5;
      if ((pUVar26 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar28 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
         pUVar28 == (UnityEngine_GameObject_o *)0x0)) goto label_05d24841;
      UnityEngine_GameObject__SetActive(pUVar28,true,(MethodInfo *)0x0);
      pUVar26 = *targetAddress_03;
      if ((pUVar26 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar28 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
         pUVar28 == (UnityEngine_GameObject_o *)0x0)) goto label_05d24841;
      UnityEngine_GameObject__SetActive(pUVar28,true,(MethodInfo *)0x0);
      pUVar26 = *targetAddress_04;
      if ((pUVar26 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar28 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
         pUVar28 == (UnityEngine_GameObject_o *)0x0)) goto label_05d24841;
      UnityEngine_GameObject__SetActive(pUVar28,false,(MethodInfo *)0x0);
      pUVar26 = *targetAddress_05;
      if ((pUVar26 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar28 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
         pUVar28 == (UnityEngine_GameObject_o *)0x0)) goto label_05d24841;
      UnityEngine_GameObject__SetActive(pUVar28,false,(MethodInfo *)0x0);
      pUVar24 = *targetAddress_06;
      if ((pUVar24 == (UnityEngine_UI_Text_o *)0x0) ||
         (pUVar28 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar24,(MethodInfo *)0x0),
         pUVar28 == (UnityEngine_GameObject_o *)0x0)) goto label_05d24841;
      UnityEngine_GameObject__SetActive(pUVar28,false,(MethodInfo *)0x0);
      pUVar24 = *targetAddress_07;
      if ((pUVar24 == (UnityEngine_UI_Text_o *)0x0) ||
         (pUVar28 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar24,(MethodInfo *)0x0),
         pUVar28 == (UnityEngine_GameObject_o *)0x0)) goto label_05d24841;
      UnityEngine_GameObject__SetActive(pUVar28,false,(MethodInfo *)0x0);
    }
  }
  else {
    if (iVar12 == 3) {
      pUVar27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar28 = UI_ElementFactory__InstantiateAndBind(pUVar27,"Prefabs/InGame/HUDBottomAPG",(MethodInfo *)0x0);
      (__this->fields)._hudBottom = pUVar28;
      Il2CppCodeGenWriteBarrier(targetAddress_02);
      pUVar28 = (__this->fields)._hudBottom;
      if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
          pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunBackground",(MethodInfo *)0x0),
         pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
      pUVar26 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar27,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._apgBackground = pUVar26;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._apgBackground);
      pUVar28 = (__this->fields)._hudBottom;
      if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
          pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunAmmoFillLeft",(MethodInfo *)0x0),
         pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
      pUVar26 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar27,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ammoFillLeft = pUVar26;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoFillLeft);
      pUVar28 = (__this->fields)._hudBottom;
      if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
          pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunAmmoFillRight",(MethodInfo *)0x0),
         pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
      pUVar26 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar27,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ammoFillRight = pUVar26;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoFillRight);
      pUVar28 = (__this->fields)._hudBottom;
      if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
          pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunReload",(MethodInfo *)0x0),
         pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
      pUVar26 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar27,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._apgReload = pUVar26;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._apgReload);
      pUVar28 = (__this->fields)._hudBottom;
      if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
          pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunShoot",(MethodInfo *)0x0),
         pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
      pUVar26 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar27,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._apgShoot = pUVar26;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._apgShoot);
      pUVar28 = (__this->fields)._hudBottom;
      if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
          pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunAmmoBackground",(MethodInfo *)0x0),
         pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
      pUVar26 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar27,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._apgAmmoBackground = pUVar26;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._apgAmmoBackground);
      pUVar28 = (__this->fields)._hudBottom;
      if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
          pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunAmmoLabelLeft",(MethodInfo *)0x0),
         pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
      pUVar24 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar27,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._ammoLabelLeft = pUVar24;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoLabelLeft);
      pUVar28 = (__this->fields)._hudBottom;
      if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
          pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GunAmmoLabelRight",(MethodInfo *)0x0),
         pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
      pUVar24 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar27,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._ammoLabelRight = pUVar24;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoLabelRight);
      pUVar26 = (__this->fields)._apgReload;
      if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
      uVar34._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
      uVar34._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
      uVar35._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
      uVar35._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
      goto label_05d236b6;
    }
    pUVar27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar28 = UI_ElementFactory__InstantiateAndBind(pUVar27,"Prefabs/InGame/HUDBottomBlade",(MethodInfo *)0x0);
    (__this->fields)._hudBottom = pUVar28;
    Il2CppCodeGenWriteBarrier(targetAddress_02);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"BladeBackground",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar1 = &(__this->fields)._bladeBackground;
    (__this->fields)._bladeBackground = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar1);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"BladeReload",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar2 = &(__this->fields)._bladeReload;
    (__this->fields)._bladeReload = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar2);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"BladeOut",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar3 = &(__this->fields)._bladeOut;
    (__this->fields)._bladeOut = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar3);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"BladeFillLeft",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar4 = &(__this->fields)._bladeFillLeft;
    (__this->fields)._bladeFillLeft = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar4);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"BladeFillRight",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar26 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar27,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    ppUVar5 = &(__this->fields)._bladeFillRight;
    (__this->fields)._bladeFillRight = pUVar26;
    Il2CppCodeGenWriteBarrier(ppUVar5);
    pSVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar29,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    (__this->fields)._bladeAmmoLeft = pSVar29;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeAmmoLeft);
    pSVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar29,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    (__this->fields)._bladeAmmoRight = pSVar29;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeAmmoRight);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"BladeAmmoGroupLeft",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar27,(MethodInfo *)0x0);
    targetAddress_08 = &(__this->fields)._bladeAmmoGroupLeft;
    (__this->fields)._bladeAmmoGroupLeft = pUVar28;
    Il2CppCodeGenWriteBarrier(targetAddress_08);
    pUVar28 = (__this->fields)._hudBottom;
    if (((pUVar28 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
        pUVar27 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"BladeAmmoGroupRight",(MethodInfo *)0x0),
       pUVar27 == (UnityEngine_Transform_o *)0x0)) goto label_05d24841;
    pUVar28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar27,(MethodInfo *)0x0);
    targetAddress_09 = &(__this->fields)._bladeAmmoGroupRight;
    (__this->fields)._bladeAmmoGroupRight = pUVar28;
    Il2CppCodeGenWriteBarrier(targetAddress_09);
    pUVar26 = (__this->fields)._bladeOut;
    if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
    (*(pUVar26->klass->vtable)._23_set_color.methodPtr)
              (pUVar26,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
               (pUVar26->klass->vtable)._23_set_color.method);
    pCVar20 = (__this->fields)._human;
    if ((pCVar20 == (Characters_Human_o *)0x0) ||
       (pCVar16 = (pCVar20->fields).Setup, pCVar16 == (Characters_HumanSetup_o *)0x0)) goto label_05d24841;
    bVar22 = Characters_HumanSetup__get_HasWeapon(pCVar16,(MethodInfo *)0x0);
    if (!bVar22) {
      pIVar30 = SZArrayNew(TypeInfo_UnityEngine_GameObject_array,7);
      pUVar26 = *ppUVar1;
      if ((pUVar26 == (UnityEngine_UI_Image_o *)0x0) ||
         (pIVar31 = (Il2CppClass *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
         pIVar30 == (Il2CppObject *)0x0)) goto label_05d24841;
      if (*(int *)&pIVar30[1].monitor == 0) goto label_05d24846;
      pIVar30[2].klass = pIVar31;
      Il2CppCodeGenWriteBarrier(&pIVar30[2].klass);
      pUVar26 = *ppUVar2;
      if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
      pUVar28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
      if (((ulong)pIVar30[1].monitor & 0xfffffffe) == 0) goto label_05d24846;
      pIVar30[2].monitor = pUVar28;
      Il2CppCodeGenWriteBarrier(&pIVar30[2].monitor);
      pUVar26 = *ppUVar3;
      if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
      pIVar31 = (Il2CppClass *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
      if (*(uint *)&pIVar30[1].monitor < 3) goto label_05d24846;
      pIVar30[3].klass = pIVar31;
      Il2CppCodeGenWriteBarrier(&pIVar30[3].klass);
      pUVar26 = *ppUVar4;
      if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
      pUVar28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
      if (((ulong)pIVar30[1].monitor & 0xfffffffc) == 0) goto label_05d24846;
      pIVar30[3].monitor = pUVar28;
      Il2CppCodeGenWriteBarrier(&pIVar30[3].monitor);
      pUVar26 = *ppUVar5;
      if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
      pIVar31 = (Il2CppClass *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
      if (*(uint *)&pIVar30[1].monitor < 5) goto label_05d24846;
      pIVar30[4].klass = pIVar31;
      Il2CppCodeGenWriteBarrier(&pIVar30[4].klass);
      if (*(uint *)&pIVar30[1].monitor < 6) goto label_05d24846;
      pIVar30[4].monitor = *targetAddress_08;
      Il2CppCodeGenWriteBarrier(&pIVar30[4].monitor);
      if (*(uint *)&pIVar30[1].monitor < 7) goto label_05d24846;
      pIVar30[5].klass = (Il2CppClass *)*targetAddress_09;
      Il2CppCodeGenWriteBarrier(&pIVar30[5].klass);
      uVar23 = *(uint *)&pIVar30[1].monitor;
      if (0 < (int)uVar23) {
        lVar33 = 0;
        do {
          if (uVar23 <= (uint)lVar33) goto label_05d24846;
          if ((&pIVar30[2].klass)[lVar33] == (Il2CppClass *)0x0) goto label_05d24841;
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)(&pIVar30[2].klass)[lVar33],false,(MethodInfo *)0x0);
          uVar23 = *(uint *)&pIVar30[1].monitor;
          lVar33 = lVar33 + 1;
        } while ((int)lVar33 < (int)uVar23);
      }
    }
  }
  if (*targetAddress_02 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_
              (*targetAddress_02,
               (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_HUDScaler);
    pUVar28 = *targetAddress_02;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    uVar7 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
    uVar9 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.y;
    offset_00.fields.x = (float)uVar7 * 10.0;
    offset_00.fields.y = (float)uVar9 * 10.0;
    UI_ElementFactory__SetAnchor(pUVar28,7,7,offset_00,(MethodInfo *)0x0);
    if (((*targetAddress_02 != (UnityEngine_GameObject_o *)0x0) &&
        (pUVar27 = UnityEngine_GameObject__get_transform(*targetAddress_02,(MethodInfo *)0x0),
        pUVar27 != (UnityEngine_Transform_o *)0x0)) &&
       (pUVar27 = UnityEngine_Transform__Find(pUVar27,"SpecialFill",(MethodInfo *)0x0),
       pUVar27 != (UnityEngine_Transform_o *)0x0)) {
      pUVar26 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar27,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._specialFill = pUVar26;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._specialFill);
      pUVar28 = (__this->fields)._hudBottom;
      if (((pUVar28 != (UnityEngine_GameObject_o *)0x0) &&
          (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
          pUVar27 != (UnityEngine_Transform_o *)0x0)) &&
         (pUVar27 = UnityEngine_Transform__Find(pUVar27,"SpecialIconBackground",(MethodInfo *)0x0),
         pUVar27 != (UnityEngine_Transform_o *)0x0)) {
        pUVar26 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar27,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
        (__this->fields)._specialIconBackground = pUVar26;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._specialIconBackground);
        pUVar28 = (__this->fields)._hudBottom;
        if (((pUVar28 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
            pUVar27 != (UnityEngine_Transform_o *)0x0)) &&
           (pUVar27 = UnityEngine_Transform__Find(pUVar27,"SpecialIconFill",(MethodInfo *)0x0),
           pUVar27 != (UnityEngine_Transform_o *)0x0)) {
          pUVar26 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar27,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
          (__this->fields)._specialIconFill = pUVar26;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._specialIconFill);
          pUVar28 = (__this->fields)._hudBottom;
          if (((pUVar28 != (UnityEngine_GameObject_o *)0x0) &&
              (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
              pUVar27 != (UnityEngine_Transform_o *)0x0)) &&
             (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GasFillLeft",(MethodInfo *)0x0),
             pUVar27 != (UnityEngine_Transform_o *)0x0)) {
            pUVar26 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar27,
                                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
            ppUVar1 = &(__this->fields)._gasFillLeft;
            (__this->fields)._gasFillLeft = pUVar26;
            Il2CppCodeGenWriteBarrier(ppUVar1);
            pUVar28 = (__this->fields)._hudBottom;
            if (((pUVar28 != (UnityEngine_GameObject_o *)0x0) &&
                (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
                pUVar27 != (UnityEngine_Transform_o *)0x0)) &&
               (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GasFillRight",(MethodInfo *)0x0),
               pUVar27 != (UnityEngine_Transform_o *)0x0)) {
              pUVar26 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar27,
                                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
              ppUVar2 = &(__this->fields)._gasFillRight;
              (__this->fields)._gasFillRight = pUVar26;
              Il2CppCodeGenWriteBarrier(ppUVar2);
              pUVar28 = (__this->fields)._hudBottom;
              if (((pUVar28 != (UnityEngine_GameObject_o *)0x0) &&
                  (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
                  pUVar27 != (UnityEngine_Transform_o *)0x0)) &&
                 (pUVar27 = UnityEngine_Transform__Find(pUVar27,"GasBackground",(MethodInfo *)0x0),
                 pUVar27 != (UnityEngine_Transform_o *)0x0)) {
                pUVar26 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar27,
                                     (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image
                                    );
                ppUVar3 = &(__this->fields)._gasBackground;
                (__this->fields)._gasBackground = pUVar26;
                Il2CppCodeGenWriteBarrier(ppUVar3);
                pCVar20 = (__this->fields)._human;
                if ((pCVar20 != (Characters_Human_o *)0x0) &&
                   (pCVar16 = (pCVar20->fields).Setup, pCVar16 != (Characters_HumanSetup_o *)0x0)) {
                  bVar22 = Characters_HumanSetup__get_HasODM(pCVar16,(MethodInfo *)0x0);
                  if (!bVar22) {
                    pIVar30 = SZArrayNew(TypeInfo_UnityEngine_GameObject_array,3);
                    pUVar26 = *ppUVar3;
                    if ((pUVar26 == (UnityEngine_UI_Image_o *)0x0) ||
                       (pIVar31 = (Il2CppClass *)
                                  UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0),
                       pIVar30 == (Il2CppObject *)0x0)) goto label_05d24841;
                    if (*(int *)&pIVar30[1].monitor == 0) {
label_05d24846:
                      ThrowIndexOutOfRangeException();
                    }
                    pIVar30[2].klass = pIVar31;
                    Il2CppCodeGenWriteBarrier(&pIVar30[2].klass);
                    pUVar26 = *ppUVar1;
                    if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
                    pUVar28 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
                    if (((ulong)pIVar30[1].monitor & 0xfffffffe) == 0) goto label_05d24846;
                    pIVar30[2].monitor = pUVar28;
                    Il2CppCodeGenWriteBarrier(&pIVar30[2].monitor);
                    pUVar26 = *ppUVar2;
                    if (pUVar26 == (UnityEngine_UI_Image_o *)0x0) goto label_05d24841;
                    pIVar31 = (Il2CppClass *)
                              UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
                    if (*(uint *)&pIVar30[1].monitor < 3) goto label_05d24846;
                    pIVar30[3].klass = pIVar31;
                    Il2CppCodeGenWriteBarrier(&pIVar30[3].klass);
                    uVar23 = *(uint *)&pIVar30[1].monitor;
                    if (0 < (int)uVar23) {
                      lVar33 = 0;
                      do {
                        if (uVar23 <= (uint)lVar33) goto label_05d24846;
                        if ((&pIVar30[2].klass)[lVar33] == (Il2CppClass *)0x0) goto label_05d24841;
                        UnityEngine_GameObject__SetActive
                                  ((UnityEngine_GameObject_o *)(&pIVar30[2].klass)[lVar33],false,
                                   (MethodInfo *)0x0);
                        uVar23 = *(uint *)&pIVar30[1].monitor;
                        lVar33 = lVar33 + 1;
                      } while ((int)lVar33 < (int)uVar23);
                    }
                  }
                  (__this->fields)._currentSpecialIcon = "";
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentSpecialIcon);
                  pUVar28 = (__this->fields)._hudBottom;
                  if (((pUVar28 != (UnityEngine_GameObject_o *)0x0) &&
                      (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
                      pUVar27 != (UnityEngine_Transform_o *)0x0)) &&
                     (pUVar27 = UnityEngine_Transform__Find(pUVar27,"HealthBar",(MethodInfo *)0x0),
                     pUVar27 != (UnityEngine_Transform_o *)0x0)) {
                    pUVar26 = UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar27,
                                         (MethodInfo_34B0830 *)
                                         MethodInfo_UnityEngine_Component_GetComponent_Image);
                    (__this->fields)._healthImage = pUVar26;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._healthImage);
                    pUVar26 = (__this->fields)._healthImage;
                    if (pUVar26 != (UnityEngine_UI_Image_o *)0x0) {
                      UnityEngine_Behaviour__set_enabled
                                ((UnityEngine_Behaviour_o *)pUVar26,false,(MethodInfo *)0x0);
                      if (((*targetAddress_02 != (UnityEngine_GameObject_o *)0x0) &&
                          (pUVar27 = UnityEngine_GameObject__get_transform
                                               (*targetAddress_02,(MethodInfo *)0x0),
                          pUVar27 != (UnityEngine_Transform_o *)0x0)) &&
                         (pUVar27 = UnityEngine_Transform__Find
                                              (pUVar27,"PerkCDTimer",(MethodInfo *)0x0),
                         pUVar27 != (UnityEngine_Transform_o *)0x0)) {
                        pUVar26 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar27,
                                             (MethodInfo_34B0830 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_Image);
                        ppUVar1 = &(__this->fields)._perkCDImage;
                        (__this->fields)._perkCDImage = pUVar26;
                        Il2CppCodeGenWriteBarrier(ppUVar1);
                        pUVar28 = (__this->fields)._hudBottom;
                        if (((pUVar28 != (UnityEngine_GameObject_o *)0x0) &&
                            (pUVar27 = UnityEngine_GameObject__get_transform(pUVar28,(MethodInfo *)0x0),
                            pUVar27 != (UnityEngine_Transform_o *)0x0)) &&
                           (pUVar27 = UnityEngine_Transform__Find
                                                (pUVar27,"PerkCDTimerBackground",(MethodInfo *)0x0),
                           pUVar27 != (UnityEngine_Transform_o *)0x0)) {
                          pUVar26 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar27,
                                               (MethodInfo_34B0830 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_Image);
                          (__this->fields)._perkCDBackgroundImage = pUVar26;
                          Il2CppCodeGenWriteBarrier(&(__this->fields)._perkCDBackgroundImage);
                          pUVar26 = (__this->fields)._perkCDBackgroundImage;
                          if (pUVar26 != (UnityEngine_UI_Image_o *)0x0) {
                            UnityEngine_Behaviour__set_enabled
                                      ((UnityEngine_Behaviour_o *)pUVar26,false,(MethodInfo *)0x0);
                            pUVar26 = *ppUVar1;
                            if (pUVar26 != (UnityEngine_UI_Image_o *)0x0) {
                              UnityEngine_Behaviour__set_enabled
                                        ((UnityEngine_Behaviour_o *)pUVar26,false,(MethodInfo *)0x0);
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
  }
label_05d24841:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$SetBottomHUDActive
// il2cpp: void UI_HUDBottomHandler__SetBottomHUDActive (UI_HUDBottomHandler_o* __this, bool active, const MethodInfo* method);
// 0x5d24860

void UI_HUDBottomHandler__SetBottomHUDActive(UI_HUDBottomHandler_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547ddc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ddc = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._hudBottom;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,active,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.HUDBottomHandler$$SetSpecialIcon
// il2cpp: void UI_HUDBottomHandler__SetSpecialIcon (UI_HUDBottomHandler_o* __this, System_String_o* icon, const MethodInfo* method);
// 0x5d248e0

void UI_HUDBottomHandler__SetSpecialIcon
               (UI_HUDBottomHandler_o *__this,System_String_o *icon,MethodInfo *method)

{
  (__this->fields)._newSpecialIcon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newSpecialIcon);
  return;
}


// UI.HUDBottomHandler$$ShakeGas
// il2cpp: void UI_HUDBottomHandler__ShakeGas (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d24900

void UI_HUDBottomHandler__ShakeGas(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_UI_Image_o *x_00;
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (Il2CppMethodInitialized_07547ddd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ddd = '\x01';
  }
  x = (__this->fields)._human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    x_00 = (__this->fields)._gasBackground;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasBackground,method_00);
      UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillLeft,method_01);
      UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillRight,method_02);
      (__this->fields)._gasAnimationTimeLeft = 0.4;
    }
  }
  return;
}


// UI.HUDBottomHandler$$Reload
// il2cpp: void UI_HUDBottomHandler__Reload (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d24a90

void UI_HUDBottomHandler__Reload(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_Image_o *pUVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  bool bVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Animator_o *pUVar7;
  uint uVar8;
  
  if (Il2CppMethodInitialized_07547dde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547dde = '\x01';
  }
  x = (__this->fields)._human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      pUVar1 = (__this->fields)._bladeBackground;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        pUVar1 = (__this->fields)._bladeOut;
        if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._bladeBackground;
          if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar6 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._bladeFillLeft;
            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._bladeFillRight;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._bladeReload;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._bladeReload;
                  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar7 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar1,
                                          (MethodInfo_34B0830 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_Animator),
                     pUVar7 != (UnityEngine_Animator_o *)0x0)) {
                    UnityEngine_Animator__Update(pUVar7,0.0,(MethodInfo *)0x0);
                    (__this->fields)._reloadAnimationTimeLeft = 1.0;
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pUVar1 = (__this->fields)._apgBackground;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pUVar1 = (__this->fields)._apgShoot;
          if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar6 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._apgAmmoBackground;
            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._apgBackground;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._apgReload;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._apgReload;
                  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar7 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar1,
                                          (MethodInfo_34B0830 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_Animator),
                     pUVar7 != (UnityEngine_Animator_o *)0x0)) {
                    UnityEngine_Animator__Update(pUVar7,0.0,(MethodInfo *)0x0);
                    uVar8 = 0x3f4ccccd;
label_05d24fa6:
                    (__this->fields)._reloadAnimationTimeLeft = (float)(int)(ulong)uVar8;
                    (__this->fields)._shootAnimationTimeLeft = (float)(int)((ulong)uVar8 >> 0x20);
                    return;
                  }
                }
              }
            }
          }
        }
        else {
          pUVar1 = (__this->fields)._ahssBackgroundLeft;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            pUVar1 = (__this->fields)._ahssShootLeft;
            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._ahssShootRight;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._ahssEmptyLeft;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._ahssEmptyRight;
                  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar6 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields)._ahssBackgroundLeft;
                    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                       (pUVar6 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                       pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                      pUVar1 = (__this->fields)._ahssBackgroundRight;
                      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                         (pUVar6 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                        pUVar1 = (__this->fields)._ahssReloadLeft;
                        if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                           (pUVar6 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                           pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                          UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
                          pUVar1 = (__this->fields)._ahssReloadRight;
                          if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                             (pUVar6 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                             pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
                            pUVar1 = (__this->fields)._ahssReloadLeft;
                            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                               (pUVar7 = UnityEngine_Component__GetComponent_object_
                                                   ((UnityEngine_Component_o *)pUVar1,
                                                    (MethodInfo_34B0830 *)
                                                    MethodInfo_UnityEngine_Component_GetComponent_Animator),
                               pUVar7 != (UnityEngine_Animator_o *)0x0)) {
                              UnityEngine_Animator__Update(pUVar7,0.0,(MethodInfo *)0x0);
                              pUVar1 = (__this->fields)._ahssReloadRight;
                              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                                 (pUVar7 = UnityEngine_Component__GetComponent_object_
                                                     ((UnityEngine_Component_o *)pUVar1,
                                                      (MethodInfo_34B0830 *)
                                                      MethodInfo_UnityEngine_Component_GetComponent_Animator),
                                 pUVar7 != (UnityEngine_Animator_o *)0x0)) {
                                UnityEngine_Animator__Update(pUVar7,0.0,(MethodInfo *)0x0);
                                uVar8 = 0x3faa9fbe;
                                goto label_05d24fa6;
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
          else {
            pUVar1 = (__this->fields)._tsBackground;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar5) {
              return;
            }
            pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
            if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
                (pSVar3 = (pSVar2->fields).Misc, pSVar3 != (Settings_InGameMiscSettings_o *)0x0)) &&
               (pSVar4 = (pSVar3->fields).ThunderspearPVP, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
              if ((pSVar4->fields)._value != false) {
                return;
              }
              pUVar1 = (__this->fields)._tsBackground;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._tsShoot;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._tsReload;
                  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar6 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields)._tsReload;
                    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                       (pUVar7 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar1,
                                            (MethodInfo_34B0830 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Animator),
                       pUVar7 != (UnityEngine_Animator_o *)0x0)) {
                      UnityEngine_Animator__Update(pUVar7,0.0,(MethodInfo *)0x0);
                      pUVar1 = (__this->fields)._ammoFillLeft;
                      if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                         (pUVar6 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                        pUVar1 = (__this->fields)._ammoFillRight;
                        if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                           (pUVar6 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                           pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                          UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                          uVar8 = 0x3f800000;
                          goto label_05d24fa6;
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
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.HUDBottomHandler$$ShootAPG
// il2cpp: void UI_HUDBottomHandler__ShootAPG (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d25130

void UI_HUDBottomHandler__ShootAPG(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Animator_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ddf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ddf = '\x01';
  }
  x = (__this->fields)._human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (__this->fields)._apgBackground;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        pUVar1 = (__this->fields)._apgShoot;
        if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._apgShoot;
          if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
             (__this_00 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar1,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_Animator),
             __this_00 != (UnityEngine_Animator_o *)0x0)) {
            UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._apgAmmoBackground;
            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._apgBackground;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._apgReload;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar3 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                  (__this->fields)._reloadAnimationTimeLeft = 0.0;
                  (__this->fields)._shootAnimationTimeLeft = 0.5;
                  return;
                }
              }
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// UI.HUDBottomHandler$$ShootAHSS
// il2cpp: void UI_HUDBottomHandler__ShootAHSS (UI_HUDBottomHandler_o* __this, bool left, bool right, const MethodInfo* method);
// 0x5d252e0

void UI_HUDBottomHandler__ShootAHSS(UI_HUDBottomHandler_o *__this,bool left,bool right,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Animator_o *pUVar4;
  
  if (Il2CppMethodInitialized_07547de0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547de0 = '\x01';
  }
  x = (__this->fields)._human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pUVar1 = (__this->fields)._ahssBackgroundLeft;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    if (left) {
      pUVar1 = (__this->fields)._ahssShootLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2558b;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssShootLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar1,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Animator),
         pUVar4 == (UnityEngine_Animator_o *)0x0)) goto label_05d2558b;
      UnityEngine_Animator__Update(pUVar4,0.0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssBackgroundLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2558b;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssEmptyLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2558b;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssReloadLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2558b;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    }
    if (right) {
      pUVar1 = (__this->fields)._ahssShootRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) {
label_05d2558b:
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssShootRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar1,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Animator),
         pUVar4 == (UnityEngine_Animator_o *)0x0)) goto label_05d2558b;
      UnityEngine_Animator__Update(pUVar4,0.0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssBackgroundRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2558b;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssEmptyRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2558b;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssReloadRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2558b;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    }
    (__this->fields)._reloadAnimationTimeLeft = 0.0;
    (__this->fields)._shootAnimationTimeLeft = 0.667;
  }
  return;
}


// UI.HUDBottomHandler$$ShootTS
// il2cpp: void UI_HUDBottomHandler__ShootTS (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d25590

void UI_HUDBottomHandler__ShootTS(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_Image_o *pUVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  bool bVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Animator_o *__this_00;
  
  if (Il2CppMethodInitialized_07547de1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547de1 = '\x01';
  }
  x = (__this->fields)._human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      pUVar1 = (__this->fields)._tsBackground;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
            (pSVar3 = (pSVar2->fields).Misc, pSVar3 != (Settings_InGameMiscSettings_o *)0x0)) &&
           (pSVar4 = (pSVar3->fields).ThunderspearPVP, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
          if ((pSVar4->fields)._value != false) {
            return;
          }
          pUVar1 = (__this->fields)._tsShoot;
          if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar6 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._tsShoot;
            if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
               (__this_00 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar1,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_Animator),
               __this_00 != (UnityEngine_Animator_o *)0x0)) {
              UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
              pUVar1 = (__this->fields)._tsBackground;
              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                pUVar1 = (__this->fields)._tsReload;
                if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar6 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                   pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields)._ammoFillLeft;
                  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar6 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
                    pUVar1 = (__this->fields)._ammoFillRight;
                    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                       (pUVar6 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
                       pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
                      (__this->fields)._reloadAnimationTimeLeft = 0.0;
                      (__this->fields)._shootAnimationTimeLeft = 1.0;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// UI.HUDBottomHandler$$Update
// il2cpp: void UI_HUDBottomHandler__Update (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d257c0

void UI_HUDBottomHandler__Update(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  Characters_Human_o *pCVar4;
  Characters_BaseUseable_o *pCVar5;
  Characters_BaseUseable_c *pCVar6;
  Characters_BasicTitan_o *x;
  bool bVar7;
  MethodInfo *pMVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_07547de2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_APGWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    Il2CppMethodInitialized_07547de2 = '\x01';
  }
  pCVar4 = (__this->fields)._human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    fVar1 = (__this->fields)._reloadAnimationTimeLeft;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._reloadAnimationTimeLeft = fVar1 - fVar9;
    fVar1 = (__this->fields)._gasAnimationTimeLeft;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._gasAnimationTimeLeft = fVar1 - fVar9;
    fVar1 = (__this->fields)._shootAnimationTimeLeft;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._shootAnimationTimeLeft = fVar1 - fVar9;
    UI_HUDBottomHandler__UpdateHumanSpecial(__this,pMVar8);
    UI_HUDBottomHandler__UpdateGas(__this,pMVar8);
    UI_HUDBottomHandler__UpdatePerkTimer(__this,pMVar8);
    pCVar4 = (__this->fields)._human;
    if (pCVar4 == (Characters_Human_o *)0x0) {
      ThrowNullReferenceException();
    }
    pCVar5 = (pCVar4->fields).Weapon;
    if (pCVar5 != (Characters_BaseUseable_o *)0x0) {
      pCVar6 = pCVar5->klass;
      bVar2 = (pCVar6->_2).typeHierarchyDepth;
      bVar3 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
      if ((bVar3 <= bVar2) &&
         ((pCVar6->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar3)[-1].field_0x57] ==
          (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
        UI_HUDBottomHandler__UpdateBlade(__this,(MethodInfo *)(ulong)bVar3);
        return;
      }
      bVar3 = (TypeInfo_Characters_APGWeapon->_2).typeHierarchyDepth;
      if ((bVar3 <= bVar2) &&
         ((pCVar6->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar3)[-1].field_0x57] ==
          (Il2CppClass *)TypeInfo_Characters_APGWeapon)) {
        UI_HUDBottomHandler__UpdateAPG(__this,(MethodInfo *)(ulong)bVar3);
        return;
      }
      bVar3 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
      if ((bVar3 <= bVar2) &&
         ((pCVar6->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar3)[-1].field_0x57] ==
          (Il2CppClass *)TypeInfo_Characters_AHSSWeapon)) {
        UI_HUDBottomHandler__UpdateAHSS(__this,(MethodInfo *)(ulong)bVar3);
        return;
      }
      bVar3 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
      if ((bVar3 <= bVar2) &&
         ((pCVar6->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar3)[-1].field_0x57] ==
          (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
        UI_HUDBottomHandler__UpdateTS(__this,(MethodInfo *)(ulong)bVar3);
        return;
      }
    }
  }
  else {
    x = (__this->fields)._playerTitan;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar8 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      UI_HUDBottomHandler__UpdatePlayerTitan(__this,pMVar8);
      return;
    }
  }
  return;
}


// UI.HUDBottomHandler$$StopAnimator
// il2cpp: void UI_HUDBottomHandler__StopAnimator (UI_HUDBottomHandler_o* __this, UnityEngine_UI_Image_o* obj, const MethodInfo* method);
// 0x5d27f10

void UI_HUDBottomHandler__StopAnimator
               (UI_HUDBottomHandler_o *__this,UnityEngine_UI_Image_o *obj,MethodInfo *method)

{
  UnityEngine_GameObject_o *target;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_Animator_o *__this_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547de3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_07547de3 = '\x01';
  }
  target = (__this->fields)._hudBottom;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  bVar2 = MiscExtensions__GetActive(target,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._AnimationCache;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d2805e;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)obj,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_ContainsKey);
    if (bVar2) {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._AnimationCache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d2805e;
      __this_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar1,(Il2CppObject *)obj,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_get_Item);
    }
    else {
      if (obj == (UnityEngine_UI_Image_o *)0x0) goto label_05d2805e;
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)obj,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Animator);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._AnimationCache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d2805e;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)obj,(Il2CppObject *)__this_00,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_Add);
    }
    if (__this_00 == (UnityEngine_Animator_o *)0x0) {
label_05d2805e:
      ThrowNullReferenceException();
    }
    fVar3 = UnityEngine_Animator__get_speed(__this_00,(MethodInfo *)0x0);
    if ((fVar3 != 0.0) || (NAN(fVar3))) {
      UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
      UnityEngine_Animator__set_speed(__this_00,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.HUDBottomHandler$$StartAnimator
// il2cpp: void UI_HUDBottomHandler__StartAnimator (UI_HUDBottomHandler_o* __this, UnityEngine_UI_Image_o* obj, const MethodInfo* method);
// 0x5d249c0

void UI_HUDBottomHandler__StartAnimator
               (UI_HUDBottomHandler_o *__this,UnityEngine_UI_Image_o *obj,MethodInfo *method)

{
  UnityEngine_GameObject_o *target;
  bool bVar1;
  UnityEngine_Animator_o *__this_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_07547de4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_07547de4 = '\x01';
  }
  target = (__this->fields)._hudBottom;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  bVar1 = MiscExtensions__GetActive(target,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((obj == (UnityEngine_UI_Image_o *)0x0) ||
     (__this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)obj,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Animator),
     __this_00 == (UnityEngine_Animator_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar2 = UnityEngine_Animator__get_speed(__this_00,(MethodInfo *)0x0);
  if (fVar2 != 0.0) {
    return;
  }
  if (NAN(fVar2)) {
    return;
  }
  UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
  UnityEngine_Animator__set_speed(__this_00,1.0,(MethodInfo *)0x0);
  return;
}


// UI.HUDBottomHandler$$UpdatePerkTimer
// il2cpp: void UI_HUDBottomHandler__UpdatePerkTimer (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d26120
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d261fd: jmp 0x5d26301

void UI_HUDBottomHandler__UpdatePerkTimer(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *pAVar3;
  UnityEngine_UI_Image_o *pUVar4;
  bool bVar5;
  float value;
  
  pCVar1 = (__this->fields)._human;
  if (((pCVar1 == (Characters_Human_o *)0x0) ||
      (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) ||
     (pAVar3 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)(pCVar2->fields).VerticalDashPerk,
     pAVar3 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0)) goto label_05d26301;
  bVar5 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled(pAVar3,(MethodInfo *)0x0);
  if (bVar5) {
label_05d2619c:
    pCVar1 = (__this->fields)._human;
    if (((pCVar1 == (Characters_Human_o *)0x0) ||
        (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) ||
       (pAVar3 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)(pCVar2->fields).OmniDashPerk,
       pAVar3 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0)) goto label_05d26301;
    bVar5 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled(pAVar3,(MethodInfo *)0x0)
    ;
    pCVar1 = (__this->fields)._human;
    if (bVar5) {
      if ((pCVar1 == (Characters_Human_o *)0x0) ||
         (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) goto label_05d26301;
      pAVar3 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)(pCVar2->fields).OmniDashPerk;
    }
    else {
      if (((pCVar1 == (Characters_Human_o *)0x0) ||
          (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) ||
         (pAVar3 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
                   (pCVar2->fields).VerticalDashPerk,
         pAVar3 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0)) goto label_05d26301;
      bVar5 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                        (pAVar3,(MethodInfo *)0x0);
      if (!bVar5) goto label_05d262d2;
      pCVar1 = (__this->fields)._human;
      if ((pCVar1 == (Characters_Human_o *)0x0) ||
         (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) goto label_05d26301;
      pAVar3 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)(pCVar2->fields).VerticalDashPerk;
    }
    if (pAVar3 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0) goto label_05d26301;
    value = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio(pAVar3,(MethodInfo *)0x0);
    if ((0.0 < value) && ((value != 1.0 || (NAN(value))))) {
      pUVar4 = (__this->fields)._perkCDImage;
      if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,true,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._perkCDBackgroundImage;
        if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,true,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._perkCDImage;
          if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
            UnityEngine_UI_Image__set_fillAmount(pUVar4,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_05d26301;
    }
  }
  else {
    pCVar1 = (__this->fields)._human;
    if (((pCVar1 == (Characters_Human_o *)0x0) ||
        (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) ||
       (pAVar3 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)(pCVar2->fields).OmniDashPerk,
       pAVar3 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0)) goto label_05d26301;
    bVar5 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled(pAVar3,(MethodInfo *)0x0)
    ;
    if (bVar5) goto label_05d2619c;
  }
label_05d262d2:
  pUVar4 = (__this->fields)._perkCDImage;
  if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,false,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._perkCDBackgroundImage;
    if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,false,(MethodInfo *)0x0);
      return;
    }
  }
label_05d26301:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdateHumanSpecial
// il2cpp: void UI_HUDBottomHandler__UpdateHumanSpecial (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d25a30
// eh: try 0x5d25b64..0x5d25d95 -> pad 0x5d25d95 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5d25dcd..0x5d25e58 -> pad 0x5d25e58 (+1 call sites) cleanup
// eh: try 0x5d25e5b..0x5d25e60 -> pad 0x5d25e68 catch (...) [compiler noexcept guard]
// asm: 58 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d25ce2: jmp 0x5d25e32
// asm:   0x5d25d53: jmp 0x5d25e32
// asm:   0x5d25d95: jmp 0x5d25da5
// asm:   0x5d25d97: jmp 0x5d25da5
// asm:   0x5d25d99: jmp 0x5d25da5
// asm:   0x5d25d9b: jmp 0x5d25da5
// asm:   0x5d25d9d: jmp 0x5d25da5
// asm:   0x5d25d9f: jmp 0x5d25da5
// asm:   0x5d25da1: jmp 0x5d25da5
// asm:   0x5d25da3: jmp 0x5d25da5
// asm:   0x5d25da5: mov r15, rax
// asm:   0x5d25da8: cmp edx, 1
// asm:   0x5d25dab: jne 0x5d25e60
// asm:   0x5d25db1: mov rdi, r15
// asm:   0x5d25db4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d25db9: mov rbx, rax
// asm:   0x5d25dbc: lea rax, [rip + 0x1830905]
// asm:   0x5d25dc3: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5d25dc7: mov rax, qword ptr [rbx]
// asm:   0x5d25dca: mov rsi, qword ptr [rax]
// asm:   0x5d25dcd: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5d25dd2: test al, al
// asm:   0x5d25dd4: je 0x5d25e37
// asm:   0x5d25dd6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d25ddb: mov rbx, qword ptr [r14]
// asm:   0x5d25dde: lea rdi, [rip + 0x15b51b3]  ; "Error loading special icon "
// asm:   0x5d25de5: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5d25dea: mov rdi, rax
// asm:   0x5d25ded: mov rsi, rbx
// asm:   0x5d25df0: xor edx, edx
// asm:   0x5d25df2: call 0x53f0320  ; System_String__Concat()
// asm:   0x5d25df7: mov rbx, rax
// asm:   0x5d25dfa: lea rdi, [rip + 0x1551847]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5d25e01: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5d25e06: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5d25e0d: jne 0x5d25e17
// asm:   0x5d25e0f: mov rdi, rax
// asm:   0x5d25e12: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5d25e17: mov rdi, rbx
// asm:   0x5d25e1a: xor esi, esi
// asm:   0x5d25e1c: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5d25e21: mov rdi, qword ptr [r12 + 0xd0]
// asm:   0x5d25e29: test rdi, rdi
// asm:   0x5d25e2c: jne 0x5d25c9f
// asm:   0x5d25e37: mov edi, 8
// asm:   0x5d25e3c: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5d25e41: mov rcx, qword ptr [rbx]
// asm:   0x5d25e44: mov qword ptr [rax], rcx
// asm:   0x5d25e47: lea rsi, [rip + 0x11076b2]
// asm:   0x5d25e4e: mov rdi, rax
// asm:   0x5d25e51: xor edx, edx
// asm:   0x5d25e53: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5d25e58: mov r15, rax
// asm:   0x5d25e5b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d25e60: mov rdi, r15
// asm:   0x5d25e63: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d25e68: mov rdi, rax
// asm:   0x5d25e6b: call 0x2ab61e0  ; __clang_call_terminate()

void UI_HUDBottomHandler__UpdateHumanSpecial(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  Characters_Human_o *pCVar1;
  Characters_BaseUseable_o *__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  System_String_o *path;
  undefined1 auVar3 [16];
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_String_o *name;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Sprite_o *value;
  UnityEngine_GameObject_o *pUVar7;
  float value_00;
  
  if (Il2CppMethodInitialized_07547de5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Specials/");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547de5 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_05d25e32;
  __this_00 = (pCVar1->fields).Special;
  if (__this_00 == (Characters_BaseUseable_o *)0x0) {
    pUVar2 = (__this->fields)._specialFill;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_05d25e32;
    UnityEngine_UI_Image__set_fillAmount(pUVar2,0.0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._specialIconFill;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_05d25e32;
    UnityEngine_UI_Image__set_fillAmount(pUVar2,0.0,(MethodInfo *)0x0);
  }
  else {
    value_00 = Characters_BaseUseable__GetCooldownRatio(__this_00,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._specialFill;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_05d25e32;
    UnityEngine_UI_Image__set_fillAmount(pUVar2,value_00,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._specialIconFill;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_05d25e32;
    UnityEngine_UI_Image__set_fillAmount(pUVar2,value_00,(MethodInfo *)0x0);
    bVar4 = System_String__op_Inequality
                      ((__this->fields)._currentSpecialIcon,(__this->fields)._newSpecialIcon,(MethodInfo *)0x0
                      );
    if (bVar4) {
      targetAddress = &(__this->fields)._currentSpecialIcon;
      (__this->fields)._currentSpecialIcon = (__this->fields)._newSpecialIcon;
      Il2CppCodeGenWriteBarrier(targetAddress);
      bVar4 = System_String__op_Inequality
                        ((__this->fields)._currentSpecialIcon,"",(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        name = System_String__Concat_52f0320("Icons/Specials/",*targetAddress,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        texture = (UnityEngine_Texture2D_o *)
                  ApplicationManagers_ResourceManager__LoadAsset(path,name,true,false,(MethodInfo *)0x0);
        if (texture == (UnityEngine_Texture2D_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (texture->klass != TypeInfo_UnityEngine_Texture2D) {
          il2cpp_codegen_raise_invalid_cast_exception(texture,TypeInfo_UnityEngine_Texture2D);
        }
        iVar5 = (*(TypeInfo_UnityEngine_Texture2D->vtable)._5_get_width.methodPtr)
                          (texture,(TypeInfo_UnityEngine_Texture2D->vtable)._5_get_width.method);
        iVar6 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                          (texture,(texture->klass->vtable)._7_get_height.method);
        auVar3._4_4_ = (float)iVar6;
        auVar3._0_4_ = (float)iVar5;
        auVar3._8_8_ = 0;
        value = UnityEngine_Sprite__Create_68ba7d0
                          (texture,(UnityEngine_Rect_o)(auVar3 << 0x40),
                           (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._specialIconBackground;
        if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_UI_Image__set_sprite(pUVar2,value,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._specialIconFill;
        if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_UI_Image__set_sprite(pUVar2,value,(MethodInfo *)0x0);
      }
    }
  }
  pUVar2 = (__this->fields)._specialIconBackground;
  if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).Special == (Characters_BaseUseable_o *)0x0) {
        bVar4 = false;
      }
      else {
        bVar4 = System_String__op_Inequality
                          ((__this->fields)._currentSpecialIcon,"",(MethodInfo *)0x0);
      }
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar7,bVar4,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._specialIconFill;
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          pCVar1 = (__this->fields)._human;
          if (pCVar1 != (Characters_Human_o *)0x0) {
            if ((pCVar1->fields).Special == (Characters_BaseUseable_o *)0x0) {
              bVar4 = false;
            }
            else {
              bVar4 = System_String__op_Inequality
                                ((__this->fields)._currentSpecialIcon,"",(MethodInfo *)0x0)
              ;
            }
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar7,bVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_05d25e32:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdateGas
// il2cpp: void UI_HUDBottomHandler__UpdateGas (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d25e70

void UI_HUDBottomHandler__UpdateGas(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_Human_o *pCVar2;
  Characters_HumanStats_o *pCVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  UnityEngine_UI_Image_o *pUVar4;
  float value;
  undefined8 uVar5;
  undefined8 uVar6;
  UnityEngine_Color_o UVar7;
  
  pCVar2 = (__this->fields)._human;
  if ((pCVar2 != (Characters_Human_o *)0x0) &&
     (pCVar3 = (pCVar2->fields).Stats, pCVar3 != (Characters_HumanStats_o *)0x0)) {
    fVar1 = (pCVar3->fields).MaxGas;
    value = 0.0;
    if (0.0 < fVar1) {
      value = (pCVar3->fields).CurrentGas / fVar1;
    }
    pUVar4 = (__this->fields)._gasFillLeft;
    if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_fillAmount(pUVar4,value,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._gasFillRight;
      if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_fillAmount(pUVar4,value,(MethodInfo *)0x0);
        if (value <= 0.0) {
          pUVar4 = (__this->fields)._gasBackground;
          if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
            uVar5._0_4_ = (__this->fields).BackgroundEmptyColor.fields.r;
            uVar5._4_4_ = (__this->fields).BackgroundEmptyColor.fields.g;
            uVar6._0_4_ = (__this->fields).BackgroundEmptyColor.fields.b;
            uVar6._4_4_ = (__this->fields).BackgroundEmptyColor.fields.a;
label_05d25fb2:
            UVar7.fields.b = (float)(int)uVar6;
            UVar7.fields.a = (float)(int)((ulong)uVar6 >> 0x20);
            UVar7.fields.r = (float)(int)uVar5;
            UVar7.fields.g = (float)(int)((ulong)uVar5 >> 0x20);
            (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                      (pUVar4,UVar7,(pUVar4->klass->vtable)._23_set_color.method);
            if (0.0 < (__this->fields)._gasAnimationTimeLeft) {
              return;
            }
            UI_HUDBottomHandler__StopAnimator(__this,(__this->fields)._gasBackground,method_00);
            UI_HUDBottomHandler__StopAnimator(__this,(__this->fields)._gasFillLeft,method_01);
            UI_HUDBottomHandler__StopAnimator(__this,(__this->fields)._gasFillRight,method_02);
            return;
          }
        }
        else if (value <= 0.15) {
          pUVar4 = (__this->fields)._gasFillLeft;
          if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
            (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                      (pUVar4,(UnityEngine_Color_o)(__this->fields).FillVeryLowColor.fields,
                       (pUVar4->klass->vtable)._23_set_color.method);
            pUVar4 = (__this->fields)._gasFillRight;
            if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
              (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                        (pUVar4,(UnityEngine_Color_o)(__this->fields).FillVeryLowColor.fields,
                         (pUVar4->klass->vtable)._23_set_color.method);
              pUVar4 = (__this->fields)._gasBackground;
              if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                          (pUVar4,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
                           (pUVar4->klass->vtable)._23_set_color.method);
                UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasBackground,method_03);
                UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillLeft,method_04);
                UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillRight,method_05);
                return;
              }
            }
          }
        }
        else {
          pUVar4 = (__this->fields)._gasFillLeft;
          if (value <= 0.3) {
            if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
              (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                        (pUVar4,(UnityEngine_Color_o)(__this->fields).FillLowColor.fields,
                         (pUVar4->klass->vtable)._23_set_color.method);
              pUVar4 = (__this->fields)._gasFillRight;
              if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                          (pUVar4,(UnityEngine_Color_o)(__this->fields).FillLowColor.fields,
                           (pUVar4->klass->vtable)._23_set_color.method);
                pUVar4 = (__this->fields)._gasBackground;
                if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
                  uVar5._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
                  uVar5._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
                  uVar6._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
                  uVar6._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
                  goto label_05d25fb2;
                }
              }
            }
          }
          else if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
            (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                      (pUVar4,(UnityEngine_Color_o)(__this->fields).FillNormalColor.fields,
                       (pUVar4->klass->vtable)._23_set_color.method);
            pUVar4 = (__this->fields)._gasFillRight;
            if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
              (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                        (pUVar4,(UnityEngine_Color_o)(__this->fields).FillNormalColor.fields,
                         (pUVar4->klass->vtable)._23_set_color.method);
              pUVar4 = (__this->fields)._gasBackground;
              if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
                uVar5._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
                uVar5._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
                uVar6._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
                uVar6._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
                goto label_05d25fb2;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdateBlade
// il2cpp: void UI_HUDBottomHandler__UpdateBlade (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d26310
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d26902: jmp 0x5d26ac8

void UI_HUDBottomHandler__UpdateBlade(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  Characters_Human_o *pCVar5;
  Characters_BaseUseable_o *pCVar6;
  UnityEngine_UI_Image_o *pUVar7;
  System_Collections_Generic_List_GameObject__o *pSVar8;
  UnityEngine_GameObject_array *pUVar9;
  MethodInfo *pMVar10;
  bool bVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Animator_o *__this_00;
  UnityEngine_Object_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  int iVar15;
  UnityEngine_UI_Image_o *pUVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  UnityEngine_Color_o UVar20;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_Fields UStack_40;
  
  if (Il2CppMethodInitialized_07547de6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/HUDBladeAmmo");
    Il2CppMethodInitialized_07547de6 = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if ((pCVar5 == (Characters_Human_o *)0x0) ||
     (pCVar6 = (pCVar5->fields).Weapon, pCVar6 == (Characters_BaseUseable_o *)0x0)) goto label_05d26ad7;
  bVar2 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
  if (((pCVar6->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pCVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BladeWeapon))
  {
    il2cpp_codegen_raise_invalid_cast_exception(pCVar6);
  }
  pUVar16 = (__this->fields)._bladeFillLeft;
  if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26ad7;
  fVar17 = *(float *)&(*(uint64_t *)((char *)pCVar6 + 0x40)) / *(float *)((long)&(*(uint64_t *)((char *)pCVar6 + 0x38)) + 4);
  pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_05d26ad7;
  bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
  if (bVar11) {
    pUVar16 = (__this->fields)._bladeFillRight;
    if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26ad7;
    pUVar7 = (__this->fields)._bladeFillLeft;
    UnityEngine_UI_Image__set_fillAmount(pUVar16,fVar17,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26ad7;
    UnityEngine_UI_Image__set_fillAmount(pUVar7,fVar17,(MethodInfo *)0x0);
    pUVar16 = (__this->fields)._bladeFillLeft;
    if (fVar17 <= 0.25) {
      if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26ad7;
      (*(pUVar16->klass->vtable)._23_set_color.methodPtr)
                (pUVar16,(UnityEngine_Color_o)(__this->fields).FillVeryLowColor.fields,
                 (pUVar16->klass->vtable)._23_set_color.method);
      pUVar16 = (__this->fields)._bladeFillRight;
      if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26ad7;
      (*(pUVar16->klass->vtable)._23_set_color.methodPtr)
                (pUVar16,(UnityEngine_Color_o)(__this->fields).FillVeryLowColor.fields,
                 (pUVar16->klass->vtable)._23_set_color.method);
      pUVar16 = (__this->fields)._bladeBackground;
      if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26ad7;
      uVar18._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
      uVar18._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
      uVar19._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
      uVar19._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
    }
    else {
      if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26ad7;
      (*(pUVar16->klass->vtable)._23_set_color.methodPtr)
                (pUVar16,(UnityEngine_Color_o)(__this->fields).BladeFillNormalColor.fields,
                 (pUVar16->klass->vtable)._23_set_color.method);
      pUVar16 = (__this->fields)._bladeFillRight;
      if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26ad7;
      (*(pUVar16->klass->vtable)._23_set_color.methodPtr)
                (pUVar16,(UnityEngine_Color_o)(__this->fields).BladeFillNormalColor.fields,
                 (pUVar16->klass->vtable)._23_set_color.method);
      pUVar16 = (__this->fields)._bladeBackground;
      if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26ad7;
      uVar18._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
      uVar18._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
      uVar19._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
      uVar19._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
    }
    UVar20.fields.b = (float)(int)uVar19;
    UVar20.fields.a = (float)(int)((ulong)uVar19 >> 0x20);
    UVar20.fields.r = (float)(int)uVar18;
    UVar20.fields.g = (float)(int)((ulong)uVar18 >> 0x20);
    (*(pUVar16->klass->vtable)._23_set_color.methodPtr)
              (pUVar16,UVar20,(pUVar16->klass->vtable)._23_set_color.method);
  }
  if (0.0 < fVar17) {
label_05d265ec:
    pUVar16 = (__this->fields)._bladeBackground;
    if ((pUVar16 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d26ad7;
    bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
    if ((!bVar11) && ((__this->fields)._reloadAnimationTimeLeft <= 0.0)) {
      pUVar16 = (__this->fields)._bladeReload;
      if ((pUVar16 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
         pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d26ad7;
      UnityEngine_GameObject__SetActive(pUVar12,false,(MethodInfo *)0x0);
      if (0.0 < fVar17) {
        pUVar16 = (__this->fields)._bladeBackground;
        if ((pUVar16 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
           pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d26ad7;
        UnityEngine_GameObject__SetActive(pUVar12,true,(MethodInfo *)0x0);
        pUVar16 = (__this->fields)._bladeOut;
        if ((pUVar16 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
           pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d26ad7;
        UnityEngine_GameObject__SetActive(pUVar12,false,(MethodInfo *)0x0);
        pUVar16 = (__this->fields)._bladeFillLeft;
        if ((pUVar16 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
           pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d26ad7;
        UnityEngine_GameObject__SetActive(pUVar12,true,(MethodInfo *)0x0);
        pUVar16 = (__this->fields)._bladeFillRight;
        if ((pUVar16 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
           pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d26ad7;
        UnityEngine_GameObject__SetActive(pUVar12,true,(MethodInfo *)0x0);
        pUVar16 = (__this->fields)._bladeFillRight;
        if (pUVar16 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26ad7;
        pUVar7 = (__this->fields)._bladeFillLeft;
        UnityEngine_UI_Image__set_fillAmount(pUVar16,fVar17,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26ad7;
        UnityEngine_UI_Image__set_fillAmount(pUVar7,fVar17,(MethodInfo *)0x0);
      }
    }
  }
  else {
    pUVar16 = (__this->fields)._bladeOut;
    if ((pUVar16 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d26ad7;
    bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
    if (bVar11) goto label_05d265ec;
    pUVar16 = (__this->fields)._bladeReload;
    if ((pUVar16 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d26ad7;
    bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
    if (bVar11) goto label_05d265ec;
    pUVar16 = (__this->fields)._bladeOut;
    if ((pUVar16 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d26ad7;
    UnityEngine_GameObject__SetActive(pUVar12,true,(MethodInfo *)0x0);
    pUVar16 = (__this->fields)._bladeOut;
    if ((pUVar16 == (UnityEngine_UI_Image_o *)0x0) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar16,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Animator),
       __this_00 == (UnityEngine_Animator_o *)0x0)) goto label_05d26ad7;
    UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
    pUVar16 = (__this->fields)._bladeBackground;
    if ((pUVar16 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_05d26ad7;
    UnityEngine_GameObject__SetActive(pUVar12,false,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._bladeAmmoLeft;
  if (pSVar8 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    iVar3 = (pSVar8->fields)._size;
    fVar17 = (*(uint32_t *)((char *)pCVar6 + 0x48));
    if ((int)fVar17 < iVar3) {
      if (0 < iVar3 - (int)fVar17) {
        iVar15 = 0;
        do {
          pSVar8 = (__this->fields)._bladeAmmoLeft;
          if (pSVar8 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d26ad7;
          pUVar13 = (UnityEngine_Object_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar8,0,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
          pSVar8 = (__this->fields)._bladeAmmoRight;
          if (pSVar8 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d26ad7;
          pUVar13 = (UnityEngine_Object_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar8,0,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
          UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
          pSVar8 = (__this->fields)._bladeAmmoLeft;
          if (pSVar8 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d26ad7;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar8,0,
                     (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_GameObject_RemoveAt);
          pSVar8 = (__this->fields)._bladeAmmoRight;
          if (pSVar8 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d26ad7;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar8,0,
                     (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_GameObject_RemoveAt);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar3 - (int)(*(uint32_t *)((char *)pCVar6 + 0x48)));
      }
    }
    else if ((iVar3 < (int)fVar17) && (0 < (int)fVar17 - iVar3)) {
      iVar15 = 0;
      do {
        pUVar12 = (__this->fields)._bladeAmmoGroupLeft;
        if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_05d26ad7;
        pSVar8 = (__this->fields)._bladeAmmoLeft;
        pUVar14 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
        pUVar12 = UI_ElementFactory__InstantiateAndBind(pUVar14,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
        pMVar10 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
        if (pSVar8 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d26ad7;
        piVar1 = &(pSVar8->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar9 = (pSVar8->fields)._items;
        if (pUVar9 == (UnityEngine_GameObject_array *)0x0) goto label_05d26ad7;
        uVar4 = (pSVar8->fields)._size;
        if (uVar4 < (uint)pUVar9->max_length) {
          (pSVar8->fields)._size = uVar4 + 1;
          pUVar9->m_Items[(int)uVar4] = pUVar12;
          Il2CppCodeGenWriteBarrier(pUVar9->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pUVar12,
                     (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
        }
        pUVar12 = (__this->fields)._bladeAmmoGroupRight;
        if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_05d26ad7;
        pUVar14 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
        pUVar12 = UI_ElementFactory__InstantiateAndBind(pUVar14,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_05d26ad7;
        pUVar14 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
        UStack_40.x = 0.0;
        UStack_40.y = 3.1415927;
        UStack_40.z = 0.0;
        value = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Vector3_o *)&UStack_40,(MethodInfo *)0x0);
        if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_05d26ad7;
        UnityEngine_Transform__set_localRotation(pUVar14,value,(MethodInfo *)0x0);
        pMVar10 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
        pSVar8 = (__this->fields)._bladeAmmoRight;
        if (pSVar8 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d26ad7;
        piVar1 = &(pSVar8->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar9 = (pSVar8->fields)._items;
        if (pUVar9 == (UnityEngine_GameObject_array *)0x0) goto label_05d26ad7;
        uVar4 = (pSVar8->fields)._size;
        if (uVar4 < (uint)pUVar9->max_length) {
          (pSVar8->fields)._size = uVar4 + 1;
          pUVar9->m_Items[(int)uVar4] = pUVar12;
          Il2CppCodeGenWriteBarrier(pUVar9->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pUVar12,
                     (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)(*(uint32_t *)((char *)pCVar6 + 0x48)) - iVar3);
    }
    return;
  }
label_05d26ad7:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdateAPG
// il2cpp: void UI_HUDBottomHandler__UpdateAPG (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d26af0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d26e3c: jmp 0x5d26f93

void UI_HUDBottomHandler__UpdateAPG(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  Characters_BaseUseable_o *pCVar4;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  bool bVar7;
  System_String_o *pSVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_UI_Image_o *pUVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  UnityEngine_Color_o UVar14;
  UnityEngine_Color_o UVar15;
  UnityEngine_Color_o UVar16;
  UnityEngine_Color_o UVar17;
  UnityEngine_Color_o UVar18;
  
  if (Il2CppMethodInitialized_07547de7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_07547de7 = '\x01';
  }
  pCVar3 = (__this->fields)._human;
  if ((pCVar3 != (Characters_Human_o *)0x0) &&
     (pCVar4 = (pCVar3->fields).Weapon, pCVar4 != (Characters_BaseUseable_o *)0x0)) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if (((pCVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_AmmoWeapon))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar4);
    }
    iVar2 = *(int *)((long)&(*(uint64_t *)((char *)pCVar4 + 0x40)) + 4);
    fVar11 = (*(uint32_t *)((char *)pCVar4 + 0x48));
    if (iVar2 < 1) {
      if (fVar11 == -NAN) {
        fVar11 = 1.0;
      }
      else {
        fVar11 = 0.0;
      }
    }
    else {
      fVar11 = (float)(int)fVar11 / (float)iVar2;
    }
    pUVar10 = (__this->fields)._ammoFillRight;
    if (pUVar10 != (UnityEngine_UI_Image_o *)0x0) {
      __this_00 = (__this->fields)._ammoFillLeft;
      UnityEngine_UI_Image__set_fillAmount(pUVar10,fVar11,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_fillAmount(__this_00,fVar11,(MethodInfo *)0x0);
        if (fVar11 <= 0.0) {
          pUVar10 = (__this->fields)._apgBackground;
          if (pUVar10 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26f93;
          (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                    (pUVar10,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
                     (pUVar10->klass->vtable)._23_set_color.method);
          pUVar10 = (__this->fields)._apgAmmoBackground;
          if (pUVar10 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26f93;
          (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                    (pUVar10,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
                     (pUVar10->klass->vtable)._23_set_color.method);
          pUVar10 = (__this->fields)._apgShoot;
          if (pUVar10 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26f93;
          uVar12._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
          uVar12._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
          uVar13._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
          uVar13._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
        }
        else {
          pUVar10 = (__this->fields)._apgBackground;
          if (fVar11 <= 0.5) {
            if (pUVar10 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26f93;
            (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                      (pUVar10,(UnityEngine_Color_o)(__this->fields).BackgroundLowColor.fields,
                       (pUVar10->klass->vtable)._23_set_color.method);
            pUVar10 = (__this->fields)._apgAmmoBackground;
            if (pUVar10 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26f93;
            (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                      (pUVar10,(UnityEngine_Color_o)(__this->fields).BackgroundLowColor.fields,
                       (pUVar10->klass->vtable)._23_set_color.method);
            pUVar10 = (__this->fields)._apgShoot;
            if (pUVar10 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26f93;
            uVar12._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
            uVar12._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
            uVar13._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
            uVar13._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
          }
          else {
            if (pUVar10 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26f93;
            (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                      (pUVar10,(UnityEngine_Color_o)(__this->fields).BackgroundNormalColor.fields,
                       (pUVar10->klass->vtable)._23_set_color.method);
            pUVar10 = (__this->fields)._apgAmmoBackground;
            if (pUVar10 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26f93;
            (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                      (pUVar10,(UnityEngine_Color_o)(__this->fields).BackgroundNormalColor.fields,
                       (pUVar10->klass->vtable)._23_set_color.method);
            pUVar10 = (__this->fields)._apgShoot;
            if (pUVar10 == (UnityEngine_UI_Image_o *)0x0) goto label_05d26f93;
            uVar12._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
            uVar12._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
            uVar13._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
            uVar13._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
          }
        }
        UVar14.fields.b = (float)(int)uVar13;
        UVar14.fields.a = (float)(int)((ulong)uVar13 >> 0x20);
        UVar14.fields.r = (float)(int)uVar12;
        UVar14.fields.g = (float)(int)((ulong)uVar12 >> 0x20);
        (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                  (pUVar10,UVar14,(pUVar10->klass->vtable)._23_set_color.method);
        pUVar5 = (__this->fields)._ammoLabelLeft;
        pUVar6 = (__this->fields)._ammoLabelRight;
        pSVar8 = System_Int32__ToString((int32_t *)&(*(uint64_t *)((char *)pCVar4 + 0x40)),(MethodInfo *)0x0);
        if ((pUVar6 != (UnityEngine_UI_Text_o *)0x0) &&
           ((*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                      (pUVar6,pSVar8,(pUVar6->klass->vtable)._75_set_text.method),
           pUVar5 != (UnityEngine_UI_Text_o *)0x0)) {
          (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                    (pUVar5,pSVar8,(pUVar5->klass->vtable)._75_set_text.method);
          pUVar5 = (__this->fields)._ammoLabelLeft;
          if (*(int *)&(*(uint64_t *)((char *)pCVar4 + 0x40)) == 0) {
            if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) goto label_05d26f93;
            UVar17.fields.b = 0.0;
            UVar17.fields.a = 1.0;
            UVar17.fields.r = 1.0;
            UVar17.fields.g = 0.0;
            (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                      (pUVar5,UVar17,(pUVar5->klass->vtable)._23_set_color.method);
            pUVar5 = (__this->fields)._ammoLabelRight;
            if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) goto label_05d26f93;
            UVar18.fields.b = 0.0;
            UVar18.fields.a = 1.0;
            UVar18.fields.r = 1.0;
            UVar18.fields.g = 0.0;
            (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                      (pUVar5,UVar18,(pUVar5->klass->vtable)._23_set_color.method);
            pUVar10 = (__this->fields)._apgBackground;
          }
          else {
            if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) goto label_05d26f93;
            UVar15.fields.b = 0.0;
            UVar15.fields.a = 1.0;
            UVar15.fields.r = 0.0;
            UVar15.fields.g = 1.0;
            (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                      (pUVar5,UVar15,(pUVar5->klass->vtable)._23_set_color.method);
            pUVar5 = (__this->fields)._ammoLabelRight;
            if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) goto label_05d26f93;
            UVar16.fields.b = 0.0;
            UVar16.fields.a = 1.0;
            UVar16.fields.r = 0.0;
            UVar16.fields.g = 1.0;
            (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                      (pUVar5,UVar16,(pUVar5->klass->vtable)._23_set_color.method);
            pUVar10 = (__this->fields)._apgBackground;
          }
          if ((pUVar10 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
             pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
            bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
            if ((bVar7) ||
               ((0.0 < (__this->fields)._reloadAnimationTimeLeft ||
                (0.0 < (__this->fields)._shootAnimationTimeLeft)))) {
              return;
            }
            pUVar10 = (__this->fields)._apgBackground;
            if ((pUVar10 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar9 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
               pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar9,true,(MethodInfo *)0x0);
              pUVar10 = (__this->fields)._apgAmmoBackground;
              if ((pUVar10 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar9 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
                 pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
                pUVar10 = (__this->fields)._apgReload;
                if ((pUVar10 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar9 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
                   pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
                  pUVar10 = (__this->fields)._apgShoot;
                  if ((pUVar10 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar9 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
                     pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
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
label_05d26f93:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdateAHSS
// il2cpp: void UI_HUDBottomHandler__UpdateAHSS (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d26fa0

void UI_HUDBottomHandler__UpdateAHSS(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  void **__this_00;
  UnityEngine_Color_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  Characters_Human_o *pCVar7;
  Characters_BaseUseable_o *pCVar8;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_UI_Text_o *pUVar10;
  bool bVar11;
  float fVar12;
  System_String_o *pSVar13;
  UnityEngine_GameObject_o *pUVar14;
  UnityEngine_UI_Image_o *pUVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  UnityEngine_Color_o UVar18;
  UnityEngine_Color_o UVar19;
  UnityEngine_Color_o UVar20;
  UnityEngine_Color_o UVar21;
  UnityEngine_Color_o UVar22;
  UnityEngine_Color_o UVar23;
  
  if (Il2CppMethodInitialized_07547de8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_07547de8 = '\x01';
  }
  pCVar7 = (__this->fields)._human;
  if ((pCVar7 == (Characters_Human_o *)0x0) ||
     (pCVar8 = (pCVar7->fields).Weapon, pCVar8 == (Characters_BaseUseable_o *)0x0)) goto label_05d2778c;
  bVar6 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
  if (((pCVar8->klass->_2).typeHierarchyDepth < bVar6) ||
     ((pCVar8->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
    il2cpp_codegen_raise_invalid_cast_exception(pCVar8);
  }
  pUVar9 = (__this->fields)._ammoLabelLeft;
  pUVar10 = (__this->fields)._ammoLabelRight;
  __this_00 = &(*(uint64_t *)((char *)pCVar8 + 0x40));
  pSVar13 = System_Int32__ToString((int32_t *)__this_00,(MethodInfo *)0x0);
  if ((pUVar10 == (UnityEngine_UI_Text_o *)0x0) ||
     ((*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                (pUVar10,pSVar13,(pUVar10->klass->vtable)._75_set_text.method),
     pUVar9 == (UnityEngine_UI_Text_o *)0x0)) goto label_05d2778c;
  (*(pUVar9->klass->vtable)._75_set_text.methodPtr)
            (pUVar9,pSVar13,(pUVar9->klass->vtable)._75_set_text.method);
  pUVar9 = (__this->fields)._ammoLabelLeft;
  if (*(int *)__this_00 == 0) {
    if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto label_05d2778c;
    UVar20.fields.b = 0.0;
    UVar20.fields.a = 1.0;
    UVar20.fields.r = 1.0;
    UVar20.fields.g = 0.0;
    (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
              (pUVar9,UVar20,(pUVar9->klass->vtable)._23_set_color.method);
    pUVar9 = (__this->fields)._ammoLabelRight;
    if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto label_05d2778c;
    UVar21.fields.b = 0.0;
    UVar21.fields.a = 1.0;
    UVar21.fields.r = 1.0;
    UVar21.fields.g = 0.0;
    (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
              (pUVar9,UVar21,(pUVar9->klass->vtable)._23_set_color.method);
    fVar12 = (*(uint32_t *)((char *)pCVar8 + 0x48));
    if (fVar12 != 1.4013e-45) goto label_05d270ea;
label_05d27208:
    pUVar15 = (__this->fields)._ahssEmptyLeft;
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
    pUVar1 = &(__this->fields).BackgroundLowColor + (ulong)(*(int *)__this_00 < 1) * 2;
    uVar2 = (pUVar1->fields).r;
    uVar4 = (pUVar1->fields).g;
    UVar22.fields.g = (float)uVar4;
    UVar22.fields.r = (float)uVar2;
    pUVar1 = &(__this->fields).BackgroundLowColor + (ulong)(*(int *)__this_00 < 1) * 2;
    uVar3 = (pUVar1->fields).b;
    uVar5 = (pUVar1->fields).a;
    UVar22.fields.a = (float)uVar5;
    UVar22.fields.b = (float)uVar3;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,UVar22,(pUVar15->klass->vtable)._23_set_color.method);
    pUVar15 = (__this->fields)._ahssEmptyRight;
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,(UnityEngine_Color_o)(__this->fields).BackgroundLowColor.fields,
               (pUVar15->klass->vtable)._23_set_color.method);
    pUVar15 = (__this->fields)._ahssBackgroundLeft;
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,(UnityEngine_Color_o)(__this->fields).BackgroundLowColor.fields,
               (pUVar15->klass->vtable)._23_set_color.method);
    pUVar15 = (__this->fields)._ahssBackgroundRight;
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,(UnityEngine_Color_o)(__this->fields).BackgroundLowColor.fields,
               (pUVar15->klass->vtable)._23_set_color.method);
    pUVar15 = (__this->fields)._ahssShootLeft;
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,(UnityEngine_Color_o)(__this->fields).BackgroundLowColor.fields,
               (pUVar15->klass->vtable)._23_set_color.method);
    pUVar15 = (__this->fields)._ahssShootRight;
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
    uVar16._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
    uVar16._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
    uVar17._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
    uVar17._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
  }
  else {
    if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto label_05d2778c;
    UVar18.fields.b = 0.0;
    UVar18.fields.a = 1.0;
    UVar18.fields.r = 0.0;
    UVar18.fields.g = 1.0;
    (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
              (pUVar9,UVar18,(pUVar9->klass->vtable)._23_set_color.method);
    pUVar9 = (__this->fields)._ammoLabelRight;
    if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto label_05d2778c;
    UVar19.fields.b = 0.0;
    UVar19.fields.a = 1.0;
    UVar19.fields.r = 0.0;
    UVar19.fields.g = 1.0;
    (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
              (pUVar9,UVar19,(pUVar9->klass->vtable)._23_set_color.method);
    fVar12 = (*(uint32_t *)((char *)pCVar8 + 0x48));
    if (fVar12 == 1.4013e-45) goto label_05d27208;
label_05d270ea:
    if (fVar12 == 0.0) {
      pUVar15 = (__this->fields)._ahssEmptyLeft;
      if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
      (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
                (pUVar15,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
                 (pUVar15->klass->vtable)._23_set_color.method);
      pUVar15 = (__this->fields)._ahssEmptyRight;
      if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
      (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
                (pUVar15,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
                 (pUVar15->klass->vtable)._23_set_color.method);
      pUVar15 = (__this->fields)._ahssShootLeft;
      if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
      (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
                (pUVar15,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
                 (pUVar15->klass->vtable)._23_set_color.method);
      pUVar15 = (__this->fields)._ahssShootRight;
      if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
      uVar16._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
      uVar16._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
      uVar17._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
      uVar17._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
    }
    else {
      pUVar15 = (__this->fields)._ahssBackgroundLeft;
      if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
      (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
                (pUVar15,(UnityEngine_Color_o)(__this->fields).BackgroundNormalColor.fields,
                 (pUVar15->klass->vtable)._23_set_color.method);
      pUVar15 = (__this->fields)._ahssBackgroundRight;
      if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d2778c;
      uVar16._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
      uVar16._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
      uVar17._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
      uVar17._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
    }
  }
  UVar23.fields.b = (float)(int)uVar17;
  UVar23.fields.a = (float)(int)((ulong)uVar17 >> 0x20);
  UVar23.fields.r = (float)(int)uVar16;
  UVar23.fields.g = (float)(int)((ulong)uVar16 >> 0x20);
  (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
            (pUVar15,UVar23,(pUVar15->klass->vtable)._23_set_color.method);
  pUVar15 = (__this->fields)._ahssEmptyLeft;
  if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
     (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
     pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
  bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar14,(MethodInfo *)0x0);
  if ((bVar11) && (1 < (int)(*(uint32_t *)((char *)pCVar8 + 0x48)))) {
    pUVar15 = (__this->fields)._ahssEmptyLeft;
    if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
    UnityEngine_GameObject__SetActive(pUVar14,false,(MethodInfo *)0x0);
    pUVar15 = (__this->fields)._ahssBackgroundLeft;
    if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
    UnityEngine_GameObject__SetActive(pUVar14,true,(MethodInfo *)0x0);
  }
  pUVar15 = (__this->fields)._ahssEmptyRight;
  if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
     (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
     pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
  bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar14,(MethodInfo *)0x0);
  if ((bVar11) && (0 < (int)(*(uint32_t *)((char *)pCVar8 + 0x48)))) {
    pUVar15 = (__this->fields)._ahssEmptyRight;
    if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
    UnityEngine_GameObject__SetActive(pUVar14,false,(MethodInfo *)0x0);
    pUVar15 = (__this->fields)._ahssBackgroundRight;
    if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
    UnityEngine_GameObject__SetActive(pUVar14,true,(MethodInfo *)0x0);
  }
  pUVar15 = (__this->fields)._ahssShootLeft;
  if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
     (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
     pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
  bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar14,(MethodInfo *)0x0);
  if ((bVar11) && ((__this->fields)._shootAnimationTimeLeft <= 0.0)) {
    pUVar15 = (__this->fields)._ahssShootLeft;
    if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
    UnityEngine_GameObject__SetActive(pUVar14,false,(MethodInfo *)0x0);
    pUVar15 = (__this->fields)._ahssEmptyLeft;
    if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
    UnityEngine_GameObject__SetActive(pUVar14,true,(MethodInfo *)0x0);
  }
  pUVar15 = (__this->fields)._ahssShootRight;
  if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
     (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
     pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
  bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar14,(MethodInfo *)0x0);
  if ((bVar11) && ((__this->fields)._shootAnimationTimeLeft <= 0.0)) {
    pUVar15 = (__this->fields)._ahssShootRight;
    if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
    UnityEngine_GameObject__SetActive(pUVar14,false,(MethodInfo *)0x0);
    pUVar15 = (__this->fields)._ahssEmptyRight;
    if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
       (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
       pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
    UnityEngine_GameObject__SetActive(pUVar14,true,(MethodInfo *)0x0);
  }
  pUVar15 = (__this->fields)._ahssReloadLeft;
  if ((pUVar15 != (UnityEngine_UI_Image_o *)0x0) &&
     (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
     pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
    bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar14,(MethodInfo *)0x0);
    if (!bVar11) {
      pUVar15 = (__this->fields)._ahssReloadRight;
      if ((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar14 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
         pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto label_05d2778c;
      bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar14,(MethodInfo *)0x0);
      if (!bVar11) {
        return;
      }
    }
    if (0.0 < (__this->fields)._reloadAnimationTimeLeft) {
      return;
    }
    pUVar15 = (__this->fields)._ahssReloadLeft;
    if ((pUVar15 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
       pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar14,false,(MethodInfo *)0x0);
      pUVar15 = (__this->fields)._ahssReloadRight;
      if ((pUVar15 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar14 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
         pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar14,false,(MethodInfo *)0x0);
        pUVar15 = (__this->fields)._ahssBackgroundRight;
        if ((pUVar15 != (UnityEngine_UI_Image_o *)0x0) &&
           (pUVar14 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
           pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar14,0 < (int)(*(uint32_t *)((char *)pCVar8 + 0x48)),(MethodInfo *)0x0);
          pUVar15 = (__this->fields)._ahssBackgroundLeft;
          if ((pUVar15 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar14 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
             pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar14,1 < (int)(*(uint32_t *)((char *)pCVar8 + 0x48)),(MethodInfo *)0x0);
            pUVar15 = (__this->fields)._ahssEmptyRight;
            if ((pUVar15 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar14 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
               pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar14,(int)(*(uint32_t *)((char *)pCVar8 + 0x48)) < 1,(MethodInfo *)0x0);
              pUVar15 = (__this->fields)._ahssEmptyLeft;
              if ((pUVar15 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar14 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
                 pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive
                          (pUVar14,(int)(*(uint32_t *)((char *)pCVar8 + 0x48)) < 2,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_05d2778c:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdateTS
// il2cpp: void UI_HUDBottomHandler__UpdateTS (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d277a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d27a51: jmp 0x5d27e28
// asm:   0x5d27c9f: jmp 0x5d27e28

void UI_HUDBottomHandler__UpdateTS(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  Characters_BaseUseable_o *__this_00;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameMiscSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  UnityEngine_UI_Image_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_UI_Text_o *pUVar9;
  bool bVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Animator_o *__this_01;
  System_String_o *pSVar12;
  UnityEngine_UI_Image_o *pUVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  UnityEngine_Color_o UVar17;
  UnityEngine_Color_o UVar18;
  UnityEngine_Color_o UVar19;
  UnityEngine_Color_o UVar20;
  UnityEngine_Color_o UVar21;
  
  if (Il2CppMethodInitialized_07547de9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547de9 = '\x01';
  }
  pCVar3 = (__this->fields)._human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    __this_00 = (pCVar3->fields).Weapon;
    if (__this_00 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
    }
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar4 != (Settings_InGameSet_o *)0x0) &&
        (pSVar5 = (pSVar4->fields).Misc, pSVar5 != (Settings_InGameMiscSettings_o *)0x0)) &&
       (pSVar6 = (pSVar5->fields).ThunderspearPVP, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar6->fields)._value == false) {
        if (__this_00 == (Characters_BaseUseable_o *)0x0) goto label_05d27e28;
        iVar2 = *(int *)((long)&(*(uint64_t *)((char *)__this_00 + 0x40)) + 4);
        fVar14 = (*(uint32_t *)((char *)__this_00 + 0x48));
        if (iVar2 < 1) {
          if (fVar14 == -NAN) {
            fVar14 = 1.0;
          }
          else {
            fVar14 = 0.0;
          }
        }
        else {
          fVar14 = (float)(int)fVar14 / (float)iVar2;
        }
        pUVar13 = (__this->fields)._ammoFillRight;
        if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27e28;
        pUVar7 = (__this->fields)._ammoFillLeft;
        UnityEngine_UI_Image__set_fillAmount(pUVar13,fVar14,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27e28;
        UnityEngine_UI_Image__set_fillAmount(pUVar7,fVar14,(MethodInfo *)0x0);
        if (fVar14 <= 0.0) {
          pUVar13 = (__this->fields)._tsBackground;
          if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27e28;
          (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                    (pUVar13,(UnityEngine_Color_o)(__this->fields).BackgroundVeryLowColor.fields,
                     (pUVar13->klass->vtable)._23_set_color.method);
          pUVar13 = (__this->fields)._tsShoot;
          if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27e28;
          uVar15._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.r;
          uVar15._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.g;
          uVar16._0_4_ = (__this->fields).BackgroundVeryLowColor.fields.b;
          uVar16._4_4_ = (__this->fields).BackgroundVeryLowColor.fields.a;
        }
        else {
          pUVar13 = (__this->fields)._tsBackground;
          if (fVar14 <= 0.5) {
            if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27e28;
            (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                      (pUVar13,(UnityEngine_Color_o)(__this->fields).BackgroundLowColor.fields,
                       (pUVar13->klass->vtable)._23_set_color.method);
            pUVar13 = (__this->fields)._tsShoot;
            if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27e28;
            uVar15._0_4_ = (__this->fields).BackgroundLowColor.fields.r;
            uVar15._4_4_ = (__this->fields).BackgroundLowColor.fields.g;
            uVar16._0_4_ = (__this->fields).BackgroundLowColor.fields.b;
            uVar16._4_4_ = (__this->fields).BackgroundLowColor.fields.a;
          }
          else {
            if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27e28;
            (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                      (pUVar13,(UnityEngine_Color_o)(__this->fields).BackgroundNormalColor.fields,
                       (pUVar13->klass->vtable)._23_set_color.method);
            pUVar13 = (__this->fields)._tsShoot;
            if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27e28;
            uVar15._0_4_ = (__this->fields).BackgroundNormalColor.fields.r;
            uVar15._4_4_ = (__this->fields).BackgroundNormalColor.fields.g;
            uVar16._0_4_ = (__this->fields).BackgroundNormalColor.fields.b;
            uVar16._4_4_ = (__this->fields).BackgroundNormalColor.fields.a;
          }
        }
        UVar17.fields.b = (float)(int)uVar16;
        UVar17.fields.a = (float)(int)((ulong)uVar16 >> 0x20);
        UVar17.fields.r = (float)(int)uVar15;
        UVar17.fields.g = (float)(int)((ulong)uVar15 >> 0x20);
        (*(pUVar13->klass->vtable)._23_set_color.methodPtr)
                  (pUVar13,UVar17,(pUVar13->klass->vtable)._23_set_color.method);
        pUVar8 = (__this->fields)._ammoLabelLeft;
        pUVar9 = (__this->fields)._ammoLabelRight;
        pSVar12 = System_Int32__ToString((int32_t *)&(*(uint64_t *)((char *)__this_00 + 0x40)),(MethodInfo *)0x0);
        if ((pUVar9 == (UnityEngine_UI_Text_o *)0x0) ||
           ((*(pUVar9->klass->vtable)._75_set_text.methodPtr)
                      (pUVar9,pSVar12,(pUVar9->klass->vtable)._75_set_text.method),
           pUVar8 == (UnityEngine_UI_Text_o *)0x0)) goto label_05d27e28;
        (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                  (pUVar8,pSVar12,(pUVar8->klass->vtable)._75_set_text.method);
        pUVar8 = (__this->fields)._ammoLabelLeft;
        if (*(int *)&(*(uint64_t *)((char *)__this_00 + 0x40)) == 0) {
          if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_05d27e28;
          UVar20.fields.b = 0.0;
          UVar20.fields.a = 1.0;
          UVar20.fields.r = 1.0;
          UVar20.fields.g = 0.0;
          (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                    (pUVar8,UVar20,(pUVar8->klass->vtable)._23_set_color.method);
          pUVar8 = (__this->fields)._ammoLabelRight;
          if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_05d27e28;
          UVar21.fields.b = 0.0;
          UVar21.fields.a = 1.0;
          UVar21.fields.r = 1.0;
          UVar21.fields.g = 0.0;
          (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                    (pUVar8,UVar21,(pUVar8->klass->vtable)._23_set_color.method);
          pUVar13 = (__this->fields)._tsBackground;
        }
        else {
          if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_05d27e28;
          UVar18.fields.b = 0.0;
          UVar18.fields.a = 1.0;
          UVar18.fields.r = 0.0;
          UVar18.fields.g = 1.0;
          (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                    (pUVar8,UVar18,(pUVar8->klass->vtable)._23_set_color.method);
          pUVar8 = (__this->fields)._ammoLabelRight;
          if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) goto label_05d27e28;
          UVar19.fields.b = 0.0;
          UVar19.fields.a = 1.0;
          UVar19.fields.r = 0.0;
          UVar19.fields.g = 1.0;
          (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                    (pUVar8,UVar19,(pUVar8->klass->vtable)._23_set_color.method);
          pUVar13 = (__this->fields)._tsBackground;
        }
        if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
           pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05d27e28;
        bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
        if (bVar10) {
          return;
        }
        if (0.0 < (__this->fields)._reloadAnimationTimeLeft) {
          return;
        }
        if (0.0 < (__this->fields)._shootAnimationTimeLeft) {
          return;
        }
        pUVar13 = (__this->fields)._tsBackground;
        if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
           pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05d27e28;
        UnityEngine_GameObject__SetActive(pUVar11,true,(MethodInfo *)0x0);
        pUVar13 = (__this->fields)._tsReload;
        if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
           pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05d27e28;
        UnityEngine_GameObject__SetActive(pUVar11,false,(MethodInfo *)0x0);
        pUVar13 = (__this->fields)._tsShoot;
        if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
           pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05d27e28;
        UnityEngine_GameObject__SetActive(pUVar11,false,(MethodInfo *)0x0);
        pUVar13 = (__this->fields)._ammoFillLeft;
        if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
           pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05d27e28;
        UnityEngine_GameObject__SetActive(pUVar11,true,(MethodInfo *)0x0);
        pUVar13 = (__this->fields)._ammoFillRight;
      }
      else {
        if (__this_00 == (Characters_BaseUseable_o *)0x0) goto label_05d27e28;
        fVar14 = Characters_BaseUseable__GetCooldownRatio(__this_00,(MethodInfo *)0x0);
        pUVar13 = (__this->fields)._bombFillRight;
        if (pUVar13 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27e28;
        pUVar7 = (__this->fields)._bombFillLeft;
        UnityEngine_UI_Image__set_fillAmount(pUVar13,fVar14,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27e28;
        UnityEngine_UI_Image__set_fillAmount(pUVar7,fVar14,(MethodInfo *)0x0);
        if (((__this->fields)._bombInCooldown != fVar14 < 1.0) &&
           ((__this->fields)._bombInCooldown = fVar14 < 1.0, 1.0 <= fVar14)) {
          pUVar13 = (__this->fields)._tsBombReload;
          if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
             (pUVar11 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
             pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05d27e28;
          bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
          if (!bVar10) {
            pUVar13 = (__this->fields)._tsBombBackground;
            if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
               (pUVar11 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
               pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05d27e28;
            UnityEngine_GameObject__SetActive(pUVar11,false,(MethodInfo *)0x0);
            pUVar13 = (__this->fields)._tsBombReload;
            if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
               (pUVar11 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
               pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05d27e28;
            UnityEngine_GameObject__SetActive(pUVar11,true,(MethodInfo *)0x0);
            pUVar13 = (__this->fields)._tsBombReload;
            if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
               (__this_01 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar13,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_Animator),
               __this_01 == (UnityEngine_Animator_o *)0x0)) goto label_05d27e28;
            UnityEngine_Animator__Update(__this_01,0.0,(MethodInfo *)0x0);
            (__this->fields)._reloadAnimationTimeLeft = 0.5;
          }
        }
        pUVar13 = (__this->fields)._tsBombBackground;
        if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
           pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05d27e28;
        bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
        if ((bVar10) || (0.0 < (__this->fields)._reloadAnimationTimeLeft)) {
          return;
        }
        pUVar13 = (__this->fields)._tsBombReload;
        if ((pUVar13 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
           pUVar11 == (UnityEngine_GameObject_o *)0x0)) goto label_05d27e28;
        UnityEngine_GameObject__SetActive(pUVar11,false,(MethodInfo *)0x0);
        pUVar13 = (__this->fields)._tsBombBackground;
      }
      if ((pUVar13 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar11 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
         pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar11,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05d27e28:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdatePlayerTitan
// il2cpp: void UI_HUDBottomHandler__UpdatePlayerTitan (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d27e40

void UI_HUDBottomHandler__UpdatePlayerTitan(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  UnityEngine_Color_o UVar8;
  
  pCVar1 = (__this->fields)._playerTitan;
  if ((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
     (pUVar2 = (__this->fields)._staminaSlider, pUVar2 != (UnityEngine_UI_Slider_o *)0x0)) {
    fVar4 = (pCVar1->fields).CurrentSprintStamina / (pCVar1->fields).MaxSprintStamina;
    fVar6 = 1.0;
    if (fVar4 <= 1.0) {
      fVar6 = fVar4;
    }
    (*(pUVar2->klass->vtable)._47_set_value.methodPtr)
              (pUVar2,(float)(-(uint)(0.0 <= fVar4) & (uint)fVar6),
               (pUVar2->klass->vtable)._47_set_value.method);
    pCVar1 = (__this->fields)._playerTitan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      pUVar3 = (__this->fields)._staminaFill;
      if ((pCVar1->fields).CurrentSprintStamina <= 1.0) {
        if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27eff;
        uVar5._0_4_ = (__this->fields).StaminaFillLowColor.fields.r;
        uVar5._4_4_ = (__this->fields).StaminaFillLowColor.fields.g;
        uVar7._0_4_ = (__this->fields).StaminaFillLowColor.fields.b;
        uVar7._4_4_ = (__this->fields).StaminaFillLowColor.fields.a;
      }
      else {
        if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto label_05d27eff;
        uVar5._0_4_ = (__this->fields).StaminaFillNormalColor.fields.r;
        uVar5._4_4_ = (__this->fields).StaminaFillNormalColor.fields.g;
        uVar7._0_4_ = (__this->fields).StaminaFillNormalColor.fields.b;
        uVar7._4_4_ = (__this->fields).StaminaFillNormalColor.fields.a;
      }
      UVar8.fields.b = (float)(int)uVar7;
      UVar8.fields.a = (float)(int)((ulong)uVar7 >> 0x20);
      UVar8.fields.r = (float)(int)uVar5;
      UVar8.fields.g = (float)(int)((ulong)uVar5 >> 0x20);
      (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                (pUVar3,UVar8,(pUVar3->klass->vtable)._23_set_color.method);
      return;
    }
  }
label_05d27eff:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$.ctor
// il2cpp: void UI_HUDBottomHandler___ctor (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x5d28070

void UI_HUDBottomHandler___ctor(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Image__Animator__o *__this_00;
  
  if (Il2CppMethodInitialized_07547dea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_Image_Animator)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547dea = '\x01';
  }
  (__this->fields).FillLowColor.fields.r = 1.0;
  (__this->fields).FillLowColor.fields.g = 0.5;
  (__this->fields).FillLowColor.fields.b = 0.0;
  (__this->fields).FillLowColor.fields.a = 0.5;
  (__this->fields).BackgroundLowColor.fields.r = 1.0;
  (__this->fields).BackgroundLowColor.fields.g = 0.75;
  (__this->fields).BackgroundLowColor.fields.b = 0.5;
  (__this->fields).BackgroundLowColor.fields.a = 1.0;
  (__this->fields).FillVeryLowColor.fields.r = 1.0;
  (__this->fields).FillVeryLowColor.fields.g = 0.0;
  (__this->fields).FillVeryLowColor.fields.b = 0.0;
  (__this->fields).FillVeryLowColor.fields.a = 0.5;
  (__this->fields).BackgroundVeryLowColor.fields.r = 1.0;
  (__this->fields).BackgroundVeryLowColor.fields.g = 0.5;
  (__this->fields).BackgroundVeryLowColor.fields.b = 0.5;
  (__this->fields).BackgroundVeryLowColor.fields.a = 1.0;
  (__this->fields).FillNormalColor.fields.r = 1.0;
  (__this->fields).FillNormalColor.fields.g = 1.0;
  (__this->fields).FillNormalColor.fields.b = 1.0;
  (__this->fields).FillNormalColor.fields.a = 0.5;
  (__this->fields).BladeFillNormalColor.fields.r = 1.0;
  (__this->fields).BladeFillNormalColor.fields.g = 1.0;
  (__this->fields).BladeFillNormalColor.fields.b = 1.0;
  (__this->fields).BladeFillNormalColor.fields.a = 0.75;
  (__this->fields).BackgroundNormalColor.fields.r = 1.0;
  (__this->fields).BackgroundNormalColor.fields.g = 1.0;
  (__this->fields).BackgroundNormalColor.fields.b = 1.0;
  (__this->fields).BackgroundNormalColor.fields.a = 1.0;
  (__this->fields).BackgroundEmptyColor.fields.r = 1.0;
  (__this->fields).BackgroundEmptyColor.fields.g = 0.25;
  (__this->fields).BackgroundEmptyColor.fields.b = 0.25;
  (__this->fields).BackgroundEmptyColor.fields.a = 1.0;
  (__this->fields).StaminaFillNormalColor.fields.r = 0.77;
  (__this->fields).StaminaFillNormalColor.fields.g = 0.77;
  (__this->fields).StaminaFillNormalColor.fields.b = 0.77;
  (__this->fields).StaminaFillNormalColor.fields.a = 1.0;
  (__this->fields).StaminaFillLowColor.fields.r = 0.77;
  (__this->fields).StaminaFillLowColor.fields.g = 0.5;
  (__this->fields).StaminaFillLowColor.fields.b = 0.5;
  (__this->fields).StaminaFillLowColor.fields.a = 1.0;
  (__this->fields)._currentSpecialIcon = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentSpecialIcon);
  (__this->fields)._newSpecialIcon = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newSpecialIcon);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Image_Animator);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_ctor);
  (__this->fields)._AnimationCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AnimationCache);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


