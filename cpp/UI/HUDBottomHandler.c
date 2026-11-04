// Type: UI.HUDBottomHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/HUDBottomHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/HUDBottomHandler.cs
// --------------------------------

// UI.HUDBottomHandler$$SetBottomHUD
// il2cpp: void UI_HUDBottomHandler__SetBottomHUD (UI_HUDBottomHandler_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x182246530
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182246a34: mov rbx, rbp
// asm:   0x182246a37: jmp 0x182246a6c
// asm:   0x182246c48: mov rax, qword ptr [rip + 0x1e4b859]  ; TypeInfo_UnityEngine_Vector3
// asm:   0x182246c4f: mov edx, 7
// asm:   0x182246c54: mov r8d, edx
// asm:   0x182246c57: mov qword ptr [rsp + 0x20], rbp
// asm:   0x182246c5c: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x182246c63: movsd xmm0, qword ptr [rcx + 0x18]
// asm:   0x182246c68: mov rcx, rbx
// asm:   0x182246c6b: mulps xmm0, xmmword ptr [rip + 0x11f94be]
// asm:   0x182246c72: movq r9, xmm0
// asm:   0x182246c77: call 0x1822113d0  ; UI_ElementFactory__SetAnchor()
// asm:   0x182246c7c: jmp 0x182246a90
// asm:   0x182248732: xor r8d, r8d
// asm:   0x182248735: xor edx, edx
// asm:   0x182248737: call 0x182f12b80  ; UnityEngine_Behaviour__set_enabled()
// asm:   0x18224873c: jmp 0x182246a90

void UI_HUDBottomHandler__SetBottomHUD
               (UI_HUDBottomHandler_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  UnityEngine_Object_o *pUVar6;
  Characters_BaseCharacter_o *x;
  Characters_BasicTitan_o *value;
  Characters_BasicTitan_c *pCVar7;
  Characters_HumanSetup_o *pCVar8;
  Settings_InGameSet_o *pSVar9;
  Settings_InGameMiscSettings_o *pSVar10;
  Settings_BoolSetting_o *pSVar11;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  Characters_Human_o *pCVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_UI_Slider_o *pUVar18;
  UnityEngine_UI_Image_o *pUVar19;
  System_Collections_Generic_List_GameObject__o *pSVar20;
  Il2CppObject *pIVar21;
  Il2CppClass *pIVar22;
  UnityEngine_UI_Text_o *pUVar23;
  Characters_Human_o *shifter;
  Characters_Human_o *pCVar24;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184347265 == '\0') {
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
    Il2CppMethodInitialized_184347265 = '\x01';
  }
  (__this->fields)._character = character;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._character,character);
  shifter = (Characters_Human_o *)0x0;
  (__this->fields)._human = (Characters_Human_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human,(void *)0x0);
  (__this->fields)._playerTitan = (Characters_BasicTitan_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._playerTitan,(void *)0x0);
  pUVar6 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar13 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar13) {
    pUVar6 = (UnityEngine_Object_o *)(__this->fields)._hudBottom;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar6,(MethodInfo *)0x0);
  }
  x = (__this->fields)._character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar13) {
    return;
  }
  pCVar24 = (Characters_Human_o *)(__this->fields)._character;
  if (pCVar24 == (Characters_Human_o *)0x0) {
    return;
  }
  bVar13 = true;
  bVar5 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar24->klass->_2).typeHierarchyDepth < bVar5) ||
     (bVar12 = true,
     (pCVar24->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    bVar12 = false;
  }
  pCVar15 = shifter;
  if (bVar12) {
    pCVar15 = pCVar24;
  }
  pCVar24 = (Characters_Human_o *)(__this->fields)._character;
  if (pCVar15 == (Characters_Human_o *)0x0) {
    bVar5 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if (((pCVar24->klass->_2).typeHierarchyDepth < bVar5) ||
       ((pCVar24->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
      bVar13 = false;
    }
    pCVar15 = shifter;
    if (bVar13) {
      pCVar15 = pCVar24;
    }
    value = (Characters_BasicTitan_o *)(__this->fields)._character;
    pCVar7 = value->klass;
    if (pCVar15 == (Characters_Human_o *)0x0) {
      bVar5 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      if ((pCVar7->_2).typeHierarchyDepth < bVar5) {
        return;
      }
      if ((pCVar7->_2).typeHierarchy[(ulonglong)bVar5 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter)
      {
        return;
      }
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pCVar24 = (Characters_Human_o *)(__this->fields)._character;
      if ((TypeInfo_UI_ShifterHUD->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ShifterHUD);
      }
      if (pCVar24 != (Characters_Human_o *)0x0) {
        bVar5 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
        if (((pCVar24->klass->_2).typeHierarchyDepth < bVar5) ||
           (shifter = pCVar24,
           (pCVar24->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
           (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
          il2cpp_codegen_raise_invalid_cast_exception(pCVar24);
        }
      }
      pUVar17 = UI_ShifterHUD__Create(pUVar16,(Characters_BaseShifter_o *)shifter,(MethodInfo *)0x0);
      (__this->fields)._hudBottom = pUVar17;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._hudBottom,pUVar17);
      return;
    }
    bVar5 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if (((pCVar7->_2).typeHierarchyDepth < bVar5) ||
       ((pCVar7->_2).typeHierarchy[(ulonglong)bVar5 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields)._playerTitan = value;
    bVar5 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar5) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._playerTitan,value);
    pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar17 = UI_ElementFactory__InstantiateAndBind(pUVar16,"Prefabs/InGame/HUDBottomTitan",(MethodInfo *)0x0);
    (__this->fields)._hudBottom = pUVar17;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hudBottom,pUVar17);
    pUVar17 = (__this->fields)._hudBottom;
    if (((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
        (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
        pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
       (pUVar16 = UnityEngine_Transform__Find(pUVar16,"StaminaBar",(MethodInfo *)0x0),
       pUVar16 != (UnityEngine_Transform_o *)0x0)) {
      pUVar18 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Slider);
      (__this->fields)._staminaSlider = pUVar18;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._staminaSlider,pUVar18);
      pUVar18 = (__this->fields)._staminaSlider;
      if (((pUVar18 != (UnityEngine_UI_Slider_o *)0x0) &&
          (pUVar16 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
          pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"Fill Area/Fill",(MethodInfo *)0x0),
         pUVar16 != (UnityEngine_Transform_o *)0x0)) {
        pUVar19 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar16,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
        (__this->fields)._staminaFill = pUVar19;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._staminaFill,pUVar19);
        pUVar17 = (__this->fields)._hudBottom;
        if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent_object_
                    (pUVar17,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_HUDScaler);
          pUVar17 = (__this->fields)._hudBottom;
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          uVar1 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
          uVar3 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.y;
          offset.fields.y = (float)uVar3 * 10.0;
          offset.fields.x = (float)uVar1 * 10.0;
          UI_ElementFactory__SetAnchor(pUVar17,7,7,offset,(MethodInfo *)0x0);
          return;
        }
      }
    }
    goto label_18224876b;
  }
  bVar5 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar24->klass->_2).typeHierarchyDepth < bVar5) ||
     ((pCVar24->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(pCVar24);
  }
  (__this->fields)._human = pCVar24;
  bVar5 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar24->klass->_2).typeHierarchyDepth < bVar5) ||
     ((pCVar24->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(pCVar24);
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human,pCVar24);
  pCVar24 = (__this->fields)._human;
  if ((pCVar24 == (Characters_Human_o *)0x0) ||
     (pCVar8 = (pCVar24->fields).Setup, pCVar8 == (Characters_HumanSetup_o *)0x0)) goto label_182248771;
  if ((pCVar8->fields).Weapon == 3) {
    pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar17 = UI_ElementFactory__InstantiateAndBind(pUVar16,"Prefabs/InGame/HUDBottomAPG",(MethodInfo *)0x0);
    (__this->fields)._hudBottom = pUVar17;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hudBottom,pUVar17);
    pUVar17 = (__this->fields)._hudBottom;
    if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
        pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunBackground",(MethodInfo *)0x0),
       pUVar16 == (UnityEngine_Transform_o *)0x0)) {
label_182248771:
      ThrowNullReferenceException();
    }
    pUVar19 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar16,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._apgBackground = pUVar19;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._apgBackground,pUVar19);
    pUVar17 = (__this->fields)._hudBottom;
    if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
        pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunAmmoFillLeft",(MethodInfo *)0x0),
       pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
    pUVar19 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar16,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._ammoFillLeft = pUVar19;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoFillLeft,pUVar19);
    pUVar17 = (__this->fields)._hudBottom;
    if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
        pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunAmmoFillRight",(MethodInfo *)0x0),
       pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
    pUVar19 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar16,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._ammoFillRight = pUVar19;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoFillRight,pUVar19);
    pUVar17 = (__this->fields)._hudBottom;
    if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
        pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunReload",(MethodInfo *)0x0),
       pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
    pUVar19 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar16,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._apgReload = pUVar19;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._apgReload,pUVar19);
    pUVar17 = (__this->fields)._hudBottom;
    if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
        pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunShoot",(MethodInfo *)0x0),
       pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
    pUVar19 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar16,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._apgShoot = pUVar19;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._apgShoot,pUVar19);
    pUVar17 = (__this->fields)._hudBottom;
    if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
        pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunAmmoBackground",(MethodInfo *)0x0),
       pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
    pUVar19 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar16,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    (__this->fields)._apgAmmoBackground = pUVar19;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._apgAmmoBackground,pUVar19);
    pUVar17 = (__this->fields)._hudBottom;
    if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
        pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunAmmoLabelLeft",(MethodInfo *)0x0),
       pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
    pUVar23 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar16,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    (__this->fields)._ammoLabelLeft = pUVar23;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoLabelLeft,pUVar23);
    pUVar17 = (__this->fields)._hudBottom;
    if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
        pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunAmmoLabelRight",(MethodInfo *)0x0),
       pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
    pUVar23 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar16,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    (__this->fields)._ammoLabelRight = pUVar23;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoLabelRight,pUVar23);
    pUVar19 = (__this->fields)._apgReload;
    if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_182248771;
    local_18.r = (__this->fields).BackgroundVeryLowColor.fields.r;
    local_18.g = (__this->fields).BackgroundVeryLowColor.fields.g;
    local_18.b = (__this->fields).BackgroundVeryLowColor.fields.b;
    local_18.a = (__this->fields).BackgroundVeryLowColor.fields.a;
label_1822481d7:
    (*(pUVar19->klass->vtable)._23_set_color.methodPtr)
              (pUVar19,(UnityEngine_Color_o *)&local_18,(pUVar19->klass->vtable)._23_set_color.method);
  }
  else {
    pCVar24 = (__this->fields)._human;
    if ((((pCVar24->fields).Setup)->fields).Weapon == 1) {
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar17 = UI_ElementFactory__InstantiateAndBind(pUVar16,"Prefabs/InGame/HUDBottomAHSS",(MethodInfo *)0x0);
      (__this->fields)._hudBottom = pUVar17;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._hudBottom,pUVar17);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunBackgroundLeft",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ahssBackgroundLeft = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssBackgroundLeft,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunBackgroundRight",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ahssBackgroundRight = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssBackgroundRight,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunEmptyLeft",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ahssEmptyLeft = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssEmptyLeft,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunEmptyRight",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ahssEmptyRight = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssEmptyRight,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunReloadLeft",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ahssReloadLeft = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssReloadLeft,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunReloadRight",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ahssReloadRight = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssReloadRight,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunShootLeft",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ahssShootLeft = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssShootLeft,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunShootRight",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ahssShootRight = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssShootRight,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunReloadLeft",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ahssReloadLeft = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssReloadLeft,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunReloadRight",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ahssReloadRight = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ahssReloadRight,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunAmmoLabelLeft",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar23 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._ammoLabelLeft = pUVar23;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoLabelLeft,pUVar23);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GunAmmoLabelRight",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar23 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._ammoLabelRight = pUVar23;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoLabelRight,pUVar23);
      pUVar19 = (__this->fields)._ahssEmptyLeft;
      if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_182248771;
      local_18.r = (__this->fields).BackgroundVeryLowColor.fields.r;
      local_18.g = (__this->fields).BackgroundVeryLowColor.fields.g;
      local_18.b = (__this->fields).BackgroundVeryLowColor.fields.b;
      local_18.a = (__this->fields).BackgroundVeryLowColor.fields.a;
      (*(pUVar19->klass->vtable)._23_set_color.methodPtr)
                (pUVar19,(UnityEngine_Color_o *)&local_18,(pUVar19->klass->vtable)._23_set_color.method);
      pUVar19 = (__this->fields)._ahssEmptyRight;
      if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_182248771;
      local_18.r = (__this->fields).BackgroundVeryLowColor.fields.r;
      local_18.g = (__this->fields).BackgroundVeryLowColor.fields.g;
      local_18.b = (__this->fields).BackgroundVeryLowColor.fields.b;
      local_18.a = (__this->fields).BackgroundVeryLowColor.fields.a;
      (*(pUVar19->klass->vtable)._23_set_color.methodPtr)
                (pUVar19,(UnityEngine_Color_o *)&local_18,(pUVar19->klass->vtable)._23_set_color.method);
      pUVar19 = (__this->fields)._ahssReloadLeft;
      if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_182248771;
      local_18.r = (__this->fields).BackgroundVeryLowColor.fields.r;
      local_18.g = (__this->fields).BackgroundVeryLowColor.fields.g;
      local_18.b = (__this->fields).BackgroundVeryLowColor.fields.b;
      local_18.a = (__this->fields).BackgroundVeryLowColor.fields.a;
      (*(pUVar19->klass->vtable)._23_set_color.methodPtr)
                (pUVar19,(UnityEngine_Color_o *)&local_18,(pUVar19->klass->vtable)._23_set_color.method);
      pUVar19 = (__this->fields)._ahssReloadRight;
      if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_182248771;
      local_18.r = (__this->fields).BackgroundVeryLowColor.fields.r;
      local_18.g = (__this->fields).BackgroundVeryLowColor.fields.g;
      local_18.b = (__this->fields).BackgroundVeryLowColor.fields.b;
      local_18.a = (__this->fields).BackgroundVeryLowColor.fields.a;
      (*(pUVar19->klass->vtable)._23_set_color.methodPtr)
                (pUVar19,(UnityEngine_Color_o *)&local_18,(pUVar19->klass->vtable)._23_set_color.method);
      pUVar19 = (__this->fields)._ahssShootLeft;
      if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_182248771;
      local_18.r = (__this->fields).BackgroundLowColor.fields.r;
      local_18.g = (__this->fields).BackgroundLowColor.fields.g;
      local_18.b = (__this->fields).BackgroundLowColor.fields.b;
      local_18.a = (__this->fields).BackgroundLowColor.fields.a;
      (*(pUVar19->klass->vtable)._23_set_color.methodPtr)
                (pUVar19,(UnityEngine_Color_o *)&local_18,(pUVar19->klass->vtable)._23_set_color.method);
      pUVar19 = (__this->fields)._ahssShootRight;
      if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_182248771;
      local_18.r = (__this->fields).BackgroundLowColor.fields.r;
      local_18.g = (__this->fields).BackgroundLowColor.fields.g;
      local_18.b = (__this->fields).BackgroundLowColor.fields.b;
      local_18.a = (__this->fields).BackgroundLowColor.fields.a;
      goto label_1822481d7;
    }
    if ((((pCVar24->fields).Setup)->fields).Weapon == 2) {
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar17 = UI_ElementFactory__InstantiateAndBind(pUVar16,"Prefabs/InGame/HUDBottomTS",(MethodInfo *)0x0);
      (__this->fields)._hudBottom = pUVar17;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._hudBottom,pUVar17);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"TSBackground",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._tsBackground = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tsBackground,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"TSBombBackground",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._tsBombBackground = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tsBombBackground,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"AmmoFillLeft",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ammoFillLeft = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoFillLeft,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"AmmoFillRight",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._ammoFillRight = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoFillRight,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"BombFillLeft",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._bombFillLeft = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bombFillLeft,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"BombFillRight",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._bombFillRight = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bombFillRight,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"TSReload",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._tsReload = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tsReload,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"TSBombReload",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._tsBombReload = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tsBombReload,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"TSShoot",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._tsShoot = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tsShoot,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"AmmoLabelLeft",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar23 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._ammoLabelLeft = pUVar23;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoLabelLeft,pUVar23);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"AmmoLabelRight",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar23 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      (__this->fields)._ammoLabelRight = pUVar23;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ammoLabelRight,pUVar23);
      pUVar19 = (__this->fields)._tsReload;
      if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_182248771;
      local_18.r = (__this->fields).BackgroundVeryLowColor.fields.r;
      local_18.g = (__this->fields).BackgroundVeryLowColor.fields.g;
      local_18.b = (__this->fields).BackgroundVeryLowColor.fields.b;
      local_18.a = (__this->fields).BackgroundVeryLowColor.fields.a;
      (*(pUVar19->klass->vtable)._23_set_color.methodPtr)
                (pUVar19,(UnityEngine_Color_o *)&local_18,(pUVar19->klass->vtable)._23_set_color.method);
      pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar9 == (Settings_InGameSet_o *)0x0) ||
          (pSVar10 = (pSVar9->fields).Misc, pSVar10 == (Settings_InGameMiscSettings_o *)0x0)) ||
         (pSVar11 = (pSVar10->fields).ThunderspearPVP, pSVar11 == (Settings_BoolSetting_o *)0x0))
      goto label_182248771;
      if ((pSVar11->fields)._value != false) {
        pUVar19 = (__this->fields)._tsBackground;
        if ((pUVar19 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0),
           pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_182248771;
        UnityEngine_GameObject__SetActive(pUVar17,false,(MethodInfo *)0x0);
        pUVar19 = (__this->fields)._tsBombBackground;
        if ((pUVar19 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0),
           pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_182248771;
        UnityEngine_GameObject__SetActive(pUVar17,true,(MethodInfo *)0x0);
        pUVar19 = (__this->fields)._ammoFillLeft;
        if ((pUVar19 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0),
           pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_182248771;
        UnityEngine_GameObject__SetActive(pUVar17,false,(MethodInfo *)0x0);
        pUVar19 = (__this->fields)._ammoFillRight;
        if ((pUVar19 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0),
           pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_182248771;
        UnityEngine_GameObject__SetActive(pUVar17,false,(MethodInfo *)0x0);
        pUVar19 = (__this->fields)._bombFillLeft;
        if ((pUVar19 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0),
           pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_182248771;
        UnityEngine_GameObject__SetActive(pUVar17,true,(MethodInfo *)0x0);
        pUVar19 = (__this->fields)._bombFillRight;
        if ((pUVar19 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0),
           pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_182248771;
        UnityEngine_GameObject__SetActive(pUVar17,true,(MethodInfo *)0x0);
        pUVar19 = (__this->fields)._tsReload;
        if ((pUVar19 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0),
           pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_182248771;
        UnityEngine_GameObject__SetActive(pUVar17,false,(MethodInfo *)0x0);
        pUVar19 = (__this->fields)._tsShoot;
        if ((pUVar19 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0),
           pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_182248771;
        UnityEngine_GameObject__SetActive(pUVar17,false,(MethodInfo *)0x0);
        pUVar23 = (__this->fields)._ammoLabelLeft;
        if ((pUVar23 == (UnityEngine_UI_Text_o *)0x0) ||
           (pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
           pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_182248771;
        UnityEngine_GameObject__SetActive(pUVar17,false,(MethodInfo *)0x0);
        pUVar23 = (__this->fields)._ammoLabelRight;
        if ((pUVar23 == (UnityEngine_UI_Text_o *)0x0) ||
           (pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0),
           pUVar17 == (UnityEngine_GameObject_o *)0x0)) goto label_182248771;
        UnityEngine_GameObject__SetActive(pUVar17,false,(MethodInfo *)0x0);
      }
    }
    else {
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar17 = UI_ElementFactory__InstantiateAndBind(pUVar16,"Prefabs/InGame/HUDBottomBlade",(MethodInfo *)0x0);
      (__this->fields)._hudBottom = pUVar17;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._hudBottom,pUVar17);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeBackground",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._bladeBackground = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeBackground,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeReload",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._bladeReload = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeReload,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeOut",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_182248771;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._bladeOut = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeOut,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeFillLeft",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_18224876b;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._bladeFillLeft = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeFillLeft,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeFillRight",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_18224876b;
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._bladeFillRight = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeFillRight,pUVar19);
      pSVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar20,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
      (__this->fields)._bladeAmmoLeft = pSVar20;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeAmmoLeft,pSVar20);
      pSVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar20,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
      (__this->fields)._bladeAmmoRight = pSVar20;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeAmmoRight,pSVar20);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeAmmoGroupLeft",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_18224876b;
      pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
      (__this->fields)._bladeAmmoGroupLeft = pUVar17;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeAmmoGroupLeft,pUVar17);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeAmmoGroupRight",(MethodInfo *)0x0),
         pUVar16 == (UnityEngine_Transform_o *)0x0)) goto label_18224876b;
      pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
      (__this->fields)._bladeAmmoGroupRight = pUVar17;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bladeAmmoGroupRight,pUVar17);
      pUVar19 = (__this->fields)._bladeOut;
      if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_18224876b;
      local_18.r = (__this->fields).BackgroundVeryLowColor.fields.r;
      local_18.g = (__this->fields).BackgroundVeryLowColor.fields.g;
      local_18.b = (__this->fields).BackgroundVeryLowColor.fields.b;
      local_18.a = (__this->fields).BackgroundVeryLowColor.fields.a;
      (*(pUVar19->klass->vtable)._23_set_color.methodPtr)
                (pUVar19,(UnityEngine_Color_o *)&local_18,(pUVar19->klass->vtable)._23_set_color.method);
      pCVar24 = (__this->fields)._human;
      if ((pCVar24 == (Characters_Human_o *)0x0) ||
         (pCVar8 = (pCVar24->fields).Setup, pCVar8 == (Characters_HumanSetup_o *)0x0)) goto label_18224876b;
      bVar13 = Characters_HumanSetup__get_HasWeapon(pCVar8,(MethodInfo *)0x0);
      if (!bVar13) {
        pIVar21 = SZArrayNew(TypeInfo_UnityEngine_GameObject_array,7);
        pUVar19 = (__this->fields)._bladeBackground;
        if ((pUVar19 == (UnityEngine_UI_Image_o *)0x0) ||
           (pIVar22 = (Il2CppClass *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0),
           pIVar21 == (Il2CppObject *)0x0)) goto label_18224876b;
        if (*(int *)&pIVar21[1].monitor == 0) goto label_182248765;
        pIVar21[2].klass = pIVar22;
        Il2CppCodeGenWriteBarrier(&pIVar21[2].klass,pIVar22);
        pUVar19 = (__this->fields)._bladeReload;
        if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_18224876b;
        pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
        if (*(uint *)&pIVar21[1].monitor < 2) goto label_182248765;
        pIVar21[2].monitor = pUVar17;
        Il2CppCodeGenWriteBarrier(&pIVar21[2].monitor,pUVar17);
        pUVar19 = (__this->fields)._bladeOut;
        if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_18224876b;
        pIVar22 = (Il2CppClass *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
        if (*(uint *)&pIVar21[1].monitor < 3) goto label_182248765;
        pIVar21[3].klass = pIVar22;
        Il2CppCodeGenWriteBarrier(&pIVar21[3].klass,pIVar22);
        pUVar19 = (__this->fields)._bladeFillLeft;
        if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_18224876b;
        pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
        if (*(uint *)&pIVar21[1].monitor < 4) goto label_182248765;
        pIVar21[3].monitor = pUVar17;
        Il2CppCodeGenWriteBarrier(&pIVar21[3].monitor,pUVar17);
        pUVar19 = (__this->fields)._bladeFillRight;
        if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_18224876b;
        pIVar22 = (Il2CppClass *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
        if (*(uint *)&pIVar21[1].monitor < 5) goto label_182248765;
        pIVar21[4].klass = pIVar22;
        Il2CppCodeGenWriteBarrier(&pIVar21[4].klass,pIVar22);
        if (*(uint *)&pIVar21[1].monitor < 6) goto label_182248765;
        pUVar17 = (__this->fields)._bladeAmmoGroupLeft;
        pIVar21[4].monitor = pUVar17;
        Il2CppCodeGenWriteBarrier(&pIVar21[4].monitor,pUVar17);
        if (*(uint *)&pIVar21[1].monitor < 7) goto label_182248765;
        pIVar22 = (Il2CppClass *)(__this->fields)._bladeAmmoGroupRight;
        pIVar21[5].klass = pIVar22;
        Il2CppCodeGenWriteBarrier(&pIVar21[5].klass,pIVar22);
        pCVar24 = shifter;
        while (uVar14 = (uint)pCVar24, (int)uVar14 < *(int *)&pIVar21[1].monitor) {
          if (*(uint *)&pIVar21[1].monitor <= uVar14) goto label_182248765;
          if ((&pIVar21[2].klass)[(int)uVar14] == (Il2CppClass *)0x0) goto label_18224876b;
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)(&pIVar21[2].klass)[(int)uVar14],false,(MethodInfo *)0x0);
          pCVar24 = (Characters_Human_o *)(ulonglong)(uVar14 + 1);
        }
      }
    }
  }
  pUVar17 = (__this->fields)._hudBottom;
  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_
              (pUVar17,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_HUDScaler);
    pUVar17 = (__this->fields)._hudBottom;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    uVar2 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
    uVar4 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.y;
    offset_00.fields.y = (float)uVar4 * 10.0;
    offset_00.fields.x = (float)uVar2 * 10.0;
    UI_ElementFactory__SetAnchor(pUVar17,7,7,offset_00,(MethodInfo *)0x0);
    pUVar17 = (__this->fields)._hudBottom;
    if (((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
        (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
        pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
       (pUVar16 = UnityEngine_Transform__Find(pUVar16,"SpecialFill",(MethodInfo *)0x0),
       pUVar16 != (UnityEngine_Transform_o *)0x0)) {
      pUVar19 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar16,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._specialFill = pUVar19;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._specialFill,pUVar19);
      pUVar17 = (__this->fields)._hudBottom;
      if (((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
          pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
         (pUVar16 = UnityEngine_Transform__Find(pUVar16,"SpecialIconBackground",(MethodInfo *)0x0),
         pUVar16 != (UnityEngine_Transform_o *)0x0)) {
        pUVar19 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar16,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
        (__this->fields)._specialIconBackground = pUVar19;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._specialIconBackground,pUVar19);
        pUVar17 = (__this->fields)._hudBottom;
        if (((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
            pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
           (pUVar16 = UnityEngine_Transform__Find(pUVar16,"SpecialIconFill",(MethodInfo *)0x0),
           pUVar16 != (UnityEngine_Transform_o *)0x0)) {
          pUVar19 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar16,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
          (__this->fields)._specialIconFill = pUVar19;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._specialIconFill,pUVar19);
          pUVar17 = (__this->fields)._hudBottom;
          if (((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
              (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
              pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
             (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GasFillLeft",(MethodInfo *)0x0),
             pUVar16 != (UnityEngine_Transform_o *)0x0)) {
            pUVar19 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar16,
                                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
            (__this->fields)._gasFillLeft = pUVar19;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._gasFillLeft,pUVar19);
            pUVar17 = (__this->fields)._hudBottom;
            if (((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
                (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
                pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
               (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GasFillRight",(MethodInfo *)0x0),
               pUVar16 != (UnityEngine_Transform_o *)0x0)) {
              pUVar19 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar16,
                                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
              (__this->fields)._gasFillRight = pUVar19;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._gasFillRight,pUVar19);
              pUVar17 = (__this->fields)._hudBottom;
              if (((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
                  (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
                  pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
                 (pUVar16 = UnityEngine_Transform__Find(pUVar16,"GasBackground",(MethodInfo *)0x0),
                 pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                pUVar19 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar16,
                                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image)
                ;
                (__this->fields)._gasBackground = pUVar19;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._gasBackground,pUVar19);
                pCVar24 = (__this->fields)._human;
                if ((pCVar24 != (Characters_Human_o *)0x0) &&
                   (pCVar8 = (pCVar24->fields).Setup, pCVar8 != (Characters_HumanSetup_o *)0x0)) {
                  bVar13 = Characters_HumanSetup__get_HasODM(pCVar8,(MethodInfo *)0x0);
                  if (!bVar13) {
                    pIVar21 = SZArrayNew(TypeInfo_UnityEngine_GameObject_array,3);
                    pUVar19 = (__this->fields)._gasBackground;
                    if ((pUVar19 == (UnityEngine_UI_Image_o *)0x0) ||
                       (pIVar22 = (Il2CppClass *)
                                  UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0),
                       pIVar21 == (Il2CppObject *)0x0)) goto label_18224876b;
                    if (*(int *)&pIVar21[1].monitor == 0) {
label_182248765:
                      ThrowIndexOutOfRangeException();
                    }
                    pIVar21[2].klass = pIVar22;
                    Il2CppCodeGenWriteBarrier(&pIVar21[2].klass,pIVar22);
                    pUVar19 = (__this->fields)._gasFillLeft;
                    if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_18224876b;
                    pUVar17 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
                    if (*(uint *)&pIVar21[1].monitor < 2) goto label_182248765;
                    pIVar21[2].monitor = pUVar17;
                    Il2CppCodeGenWriteBarrier(&pIVar21[2].monitor,pUVar17);
                    pUVar19 = (__this->fields)._gasFillRight;
                    if (pUVar19 == (UnityEngine_UI_Image_o *)0x0) goto label_18224876b;
                    pIVar22 = (Il2CppClass *)
                              UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
                    if (*(uint *)&pIVar21[1].monitor < 3) goto label_182248765;
                    pIVar21[3].klass = pIVar22;
                    Il2CppCodeGenWriteBarrier(&pIVar21[3].klass,pIVar22);
                    while (uVar14 = (uint)shifter, (int)uVar14 < *(int *)&pIVar21[1].monitor) {
                      if (*(uint *)&pIVar21[1].monitor <= uVar14) goto label_182248765;
                      if ((&pIVar21[2].klass)[(int)uVar14] == (Il2CppClass *)0x0) goto label_18224876b;
                      UnityEngine_GameObject__SetActive
                                ((UnityEngine_GameObject_o *)(&pIVar21[2].klass)[(int)uVar14],false,
                                 (MethodInfo *)0x0);
                      shifter = (Characters_Human_o *)(ulonglong)(uVar14 + 1);
                    }
                  }
                  (__this->fields)._currentSpecialIcon = "";
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentSpecialIcon,"");
                  pUVar17 = (__this->fields)._hudBottom;
                  if (((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
                      (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
                      pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
                     (pUVar16 = UnityEngine_Transform__Find(pUVar16,"HealthBar",(MethodInfo *)0x0),
                     pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                    pUVar19 = UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar16,
                                         (MethodInfo_6651A0 *)
                                         MethodInfo_UnityEngine_Component_GetComponent_Image);
                    (__this->fields)._healthImage = pUVar19;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._healthImage,pUVar19);
                    pUVar19 = (__this->fields)._healthImage;
                    if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                      UnityEngine_Behaviour__set_enabled
                                ((UnityEngine_Behaviour_o *)pUVar19,false,(MethodInfo *)0x0);
                      pUVar17 = (__this->fields)._hudBottom;
                      if (((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
                          (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
                          pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
                         (pUVar16 = UnityEngine_Transform__Find
                                              (pUVar16,"PerkCDTimer",(MethodInfo *)0x0),
                         pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                        pUVar19 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar16,
                                             (MethodInfo_6651A0 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_Image);
                        (__this->fields)._perkCDImage = pUVar19;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._perkCDImage,pUVar19);
                        pUVar17 = (__this->fields)._hudBottom;
                        if (((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
                            (pUVar16 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
                            pUVar16 != (UnityEngine_Transform_o *)0x0)) &&
                           (pUVar16 = UnityEngine_Transform__Find
                                                (pUVar16,"PerkCDTimerBackground",(MethodInfo *)0x0),
                           pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                          pUVar19 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar16,
                                               (MethodInfo_6651A0 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_Image);
                          (__this->fields)._perkCDBackgroundImage = pUVar19;
                          Il2CppCodeGenWriteBarrier(&(__this->fields)._perkCDBackgroundImage,pUVar19);
                          pUVar19 = (__this->fields)._perkCDBackgroundImage;
                          if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                            UnityEngine_Behaviour__set_enabled
                                      ((UnityEngine_Behaviour_o *)pUVar19,false,(MethodInfo *)0x0);
                            pUVar19 = (__this->fields)._perkCDImage;
                            if (pUVar19 != (UnityEngine_UI_Image_o *)0x0) {
                              UnityEngine_Behaviour__set_enabled
                                        ((UnityEngine_Behaviour_o *)pUVar19,false,(MethodInfo *)0x0);
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
label_18224876b:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$SetBottomHUDActive
// il2cpp: void UI_HUDBottomHandler__SetBottomHUDActive (UI_HUDBottomHandler_o* __this, bool active, const MethodInfo* method);
// 0x1822464a0

void UI_HUDBottomHandler__SetBottomHUDActive(UI_HUDBottomHandler_o *__this,bool active,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347266 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347266 = '\x01';
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
  }
  return;
}


// UI.HUDBottomHandler$$SetSpecialIcon
// il2cpp: void UI_HUDBottomHandler__SetSpecialIcon (UI_HUDBottomHandler_o* __this, System_String_o* icon, const MethodInfo* method);
// 0x181bd5920

void
UI_HUDBottomHandler__SetSpecialIcon(UI_HUDBottomHandler_o* __this, System_String_o* icon, MethodInfo* method)

{
  (__this->fields)._newSpecialIcon = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newSpecialIcon,value);
  return;
}


// UI.HUDBottomHandler$$ShakeGas
// il2cpp: void UI_HUDBottomHandler__ShakeGas (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x182248780

void UI_HUDBottomHandler__ShakeGas(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_UI_Image_o *x_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347267 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347267 = '\x01';
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
      UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasBackground,(MethodInfo *)0x0);
      UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillLeft,(MethodInfo *)0x0);
      UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillRight,(MethodInfo *)0x0);
      (__this->fields)._gasAnimationTimeLeft = 0.4;
    }
  }
  return;
}


// UI.HUDBottomHandler$$Reload
// il2cpp: void UI_HUDBottomHandler__Reload (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x182245dc0

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
  
  if (Il2CppMethodInitialized_184347268 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184347268 = '\x01';
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
                                          (MethodInfo_6651A0 *)
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
                                          (MethodInfo_6651A0 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_Animator),
                     pUVar7 != (UnityEngine_Animator_o *)0x0)) {
                    UnityEngine_Animator__Update(pUVar7,0.0,(MethodInfo *)0x0);
                    (__this->fields)._reloadAnimationTimeLeft = 0.8;
                    (__this->fields)._shootAnimationTimeLeft = 0.0;
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
                                                    (MethodInfo_6651A0 *)
                                                    MethodInfo_UnityEngine_Component_GetComponent_Animator),
                               pUVar7 != (UnityEngine_Animator_o *)0x0)) {
                              UnityEngine_Animator__Update(pUVar7,0.0,(MethodInfo *)0x0);
                              pUVar1 = (__this->fields)._ahssReloadRight;
                              if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
                                 (pUVar7 = UnityEngine_Component__GetComponent_object_
                                                     ((UnityEngine_Component_o *)pUVar1,
                                                      (MethodInfo_6651A0 *)
                                                      MethodInfo_UnityEngine_Component_GetComponent_Animator),
                                 pUVar7 != (UnityEngine_Animator_o *)0x0)) {
                                UnityEngine_Animator__Update(pUVar7,0.0,(MethodInfo *)0x0);
                                (__this->fields)._reloadAnimationTimeLeft = 1.333;
                                (__this->fields)._shootAnimationTimeLeft = 0.0;
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
                                            (MethodInfo_6651A0 *)
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
                          (__this->fields)._reloadAnimationTimeLeft = 1.0;
                          (__this->fields)._shootAnimationTimeLeft = 0.0;
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
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.HUDBottomHandler$$ShootAPG
// il2cpp: void UI_HUDBottomHandler__ShootAPG (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x182248b10

void UI_HUDBottomHandler__ShootAPG(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Animator_o *__this_00;
  
  if (Il2CppMethodInitialized_184347269 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347269 = '\x01';
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
                                     (MethodInfo_6651A0 *)
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
                  (__this->fields)._shootAnimationTimeLeft = 0.5;
                  (__this->fields)._reloadAnimationTimeLeft = 0.0;
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
// 0x182248850

void UI_HUDBottomHandler__ShootAHSS(UI_HUDBottomHandler_o *__this,bool left,bool right,MethodInfo *method)

{
  Characters_Human_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Animator_o *pUVar4;
  
  if (Il2CppMethodInitialized_18434726a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434726a = '\x01';
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
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_182248b07;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssShootLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar1,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Animator),
         pUVar4 == (UnityEngine_Animator_o *)0x0)) goto label_182248b07;
      UnityEngine_Animator__Update(pUVar4,0.0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssBackgroundLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_182248b07;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssEmptyLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_182248b07;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssReloadLeft;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_182248b07;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    }
    if (right) {
      pUVar1 = (__this->fields)._ahssShootRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) {
label_182248b07:
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssShootRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar1,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Animator),
         pUVar4 == (UnityEngine_Animator_o *)0x0)) goto label_182248b07;
      UnityEngine_Animator__Update(pUVar4,0.0,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssBackgroundRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_182248b07;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssEmptyRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_182248b07;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ahssReloadRight;
      if ((pUVar1 == (UnityEngine_UI_Image_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto label_182248b07;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    }
    (__this->fields)._shootAnimationTimeLeft = 0.667;
    (__this->fields)._reloadAnimationTimeLeft = 0.0;
  }
  return;
}


// UI.HUDBottomHandler$$ShootTS
// il2cpp: void UI_HUDBottomHandler__ShootTS (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x182248cd0

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
  
  if (Il2CppMethodInitialized_18434726b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_18434726b = '\x01';
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
                                       (MethodInfo_6651A0 *)
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
                      (__this->fields)._shootAnimationTimeLeft = 1.0;
                      (__this->fields)._reloadAnimationTimeLeft = 0.0;
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
// 0x18224b3d0

void UI_HUDBottomHandler__Update(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BasicTitan_o *pCVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  Characters_BaseUseable_o *pCVar6;
  Characters_BaseUseable_c *pCVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Color_o local_28 [2];
  
  if (Il2CppMethodInitialized_18434726c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_APGWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    Il2CppMethodInitialized_18434726c = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    fVar10 = (__this->fields)._reloadAnimationTimeLeft;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._reloadAnimationTimeLeft = fVar10 - fVar9;
    fVar10 = (__this->fields)._gasAnimationTimeLeft;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._gasAnimationTimeLeft = fVar10 - fVar9;
    fVar10 = (__this->fields)._shootAnimationTimeLeft;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._shootAnimationTimeLeft = fVar10 - fVar9;
    UI_HUDBottomHandler__UpdateHumanSpecial(__this,(MethodInfo *)0x0);
    UI_HUDBottomHandler__UpdateGas(__this,(MethodInfo *)0x0);
    UI_HUDBottomHandler__UpdatePerkTimer(__this,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._human;
    if (pCVar2 == (Characters_Human_o *)0x0) goto label_18224b725;
    pCVar6 = (pCVar2->fields).Weapon;
    if (pCVar6 != (Characters_BaseUseable_o *)0x0) {
      pCVar7 = pCVar6->klass;
      bVar1 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar7->_2).typeHierarchyDepth) &&
         ((pCVar7->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BladeWeapon))
      {
        UI_HUDBottomHandler__UpdateBlade(__this,(MethodInfo *)0x0);
        return;
      }
      bVar1 = (TypeInfo_Characters_APGWeapon->_2).typeHierarchyDepth;
      pCVar7 = ((((__this->fields)._human)->fields).Weapon)->klass;
      if ((bVar1 <= (pCVar7->_2).typeHierarchyDepth) &&
         ((pCVar7->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_APGWeapon)) {
        UI_HUDBottomHandler__UpdateAPG(__this,(MethodInfo *)0x0);
        return;
      }
      bVar1 = (TypeInfo_Characters_AHSSWeapon->_2).typeHierarchyDepth;
      pCVar7 = ((((__this->fields)._human)->fields).Weapon)->klass;
      if ((bVar1 <= (pCVar7->_2).typeHierarchyDepth) &&
         ((pCVar7->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_AHSSWeapon))
      {
        UI_HUDBottomHandler__UpdateAHSS(__this,(MethodInfo *)0x0);
        return;
      }
      bVar1 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
      pCVar7 = ((((__this->fields)._human)->fields).Weapon)->klass;
      if ((bVar1 <= (pCVar7->_2).typeHierarchyDepth) &&
         ((pCVar7->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
        UI_HUDBottomHandler__UpdateTS(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pCVar3 = (__this->fields)._playerTitan;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      pCVar3 = (__this->fields)._playerTitan;
      if (pCVar3 != (Characters_BasicTitan_o *)0x0) {
        fVar10 = (pCVar3->fields).CurrentSprintStamina / (pCVar3->fields).MaxSprintStamina;
        if (fVar10 < 0.0) {
          fVar10 = 0.0;
        }
        else if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
        pUVar4 = (__this->fields)._staminaSlider;
        if (pUVar4 != (UnityEngine_UI_Slider_o *)0x0) {
          (*(pUVar4->klass->vtable)._47_set_value.methodPtr)
                    (pUVar4,fVar10,(pUVar4->klass->vtable)._47_set_value.method);
          pCVar3 = (__this->fields)._playerTitan;
          if ((pCVar3 != (Characters_BasicTitan_o *)0x0) &&
             (pUVar5 = (__this->fields)._staminaFill, pUVar5 != (UnityEngine_UI_Image_o *)0x0)) {
            if (1.0 < (pCVar3->fields).CurrentSprintStamina) {
              local_28[0].fields.r = (__this->fields).StaminaFillNormalColor.fields.r;
              local_28[0].fields.g = (__this->fields).StaminaFillNormalColor.fields.g;
              local_28[0].fields.b = (__this->fields).StaminaFillNormalColor.fields.b;
              local_28[0].fields.a = (__this->fields).StaminaFillNormalColor.fields.a;
            }
            else {
              local_28[0].fields.r = (__this->fields).StaminaFillLowColor.fields.r;
              local_28[0].fields.g = (__this->fields).StaminaFillLowColor.fields.g;
              local_28[0].fields.b = (__this->fields).StaminaFillLowColor.fields.b;
              local_28[0].fields.a = (__this->fields).StaminaFillLowColor.fields.a;
            }
            (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                      (pUVar5,local_28,(pUVar5->klass->vtable)._23_set_color.method);
            return;
          }
        }
      }
label_18224b725:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.HUDBottomHandler$$StopAnimator
// il2cpp: void UI_HUDBottomHandler__StopAnimator (UI_HUDBottomHandler_o* __this, UnityEngine_UI_Image_o* obj, const MethodInfo* method);
// 0x182248ff0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182249139: movaps xmm6, xmmword ptr [rsp + 0x20]

void UI_HUDBottomHandler__StopAnimator
               (UI_HUDBottomHandler_o *__this,UnityEngine_UI_Image_o *obj,MethodInfo *method)

{
  UnityEngine_GameObject_o *target;
  System_Collections_Generic_Dictionary_Image__Animator__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_Animator_o *__this_01;
  float fVar3;
  
  if (Il2CppMethodInitialized_18434726d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_18434726d = '\x01';
  }
  target = (__this->fields)._hudBottom;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  bVar2 = MiscExtensions__GetActive(target,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (__this->fields)._AnimationCache;
    if (__this_00 == (System_Collections_Generic_Dictionary_Image__Animator__o *)0x0) goto label_18224914e;
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)obj,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_ContainsKey);
    if (bVar2) {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._AnimationCache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18224914e;
      __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar1,(Il2CppObject *)obj,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_get_Item);
    }
    else {
      if (obj == (UnityEngine_UI_Image_o *)0x0) goto label_18224914e;
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)obj,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Animator);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._AnimationCache;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18224914e;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)obj,(Il2CppObject *)__this_01,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_Add);
    }
    if (__this_01 == (UnityEngine_Animator_o *)0x0) {
label_18224914e:
      ThrowNullReferenceException();
    }
    fVar3 = UnityEngine_Animator__get_speed(__this_01,(MethodInfo *)0x0);
    if (fVar3 != 0.0) {
      UnityEngine_Animator__Update(__this_01,0.0,(MethodInfo *)0x0);
      UnityEngine_Animator__set_speed(__this_01,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.HUDBottomHandler$$StartAnimator
// il2cpp: void UI_HUDBottomHandler__StartAnimator (UI_HUDBottomHandler_o* __this, UnityEngine_UI_Image_o* obj, const MethodInfo* method);
// 0x182248f20

void UI_HUDBottomHandler__StartAnimator
               (UI_HUDBottomHandler_o *__this,UnityEngine_UI_Image_o *obj,MethodInfo *method)

{
  UnityEngine_GameObject_o *target;
  bool bVar1;
  UnityEngine_Animator_o *__this_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_18434726e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_18434726e = '\x01';
  }
  target = (__this->fields)._hudBottom;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  bVar1 = MiscExtensions__GetActive(target,(MethodInfo *)0x0);
  if (bVar1) {
    if ((obj == (UnityEngine_UI_Image_o *)0x0) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)obj,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Animator),
       __this_00 == (UnityEngine_Animator_o *)0x0)) {
      ThrowNullReferenceException();
    }
    fVar2 = UnityEngine_Animator__get_speed(__this_00,(MethodInfo *)0x0);
    if (fVar2 == 0.0) {
      UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
      UnityEngine_Animator__set_speed(__this_00,1.0,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.HUDBottomHandler$$UpdatePerkTimer
// il2cpp: void UI_HUDBottomHandler__UpdatePerkTimer (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x18224ab10

void UI_HUDBottomHandler__UpdatePerkTimer(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  Characters_OmniDashPerk_o *pCVar3;
  UnityEngine_UI_Image_o *pUVar4;
  bool bVar5;
  Characters_VerticalDashPerk_o *pCVar6;
  float value;
  
  pCVar1 = (__this->fields)._human;
  if (((pCVar1 == (Characters_Human_o *)0x0) ||
      (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) ||
     (pCVar6 = (pCVar2->fields).VerticalDashPerk, pCVar6 == (Characters_VerticalDashPerk_o *)0x0))
  goto label_18224aced;
  bVar5 = Assets_Scripts_Characters_Human_Perks_PowerPerk__get_PerkEnabled
                    ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)pCVar6,(MethodInfo *)0x0);
  if (bVar5) {
label_18224abcc:
    pCVar1 = (__this->fields)._human;
    if (((pCVar1 == (Characters_Human_o *)0x0) ||
        (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) ||
       (pCVar3 = (pCVar2->fields).OmniDashPerk, pCVar3 == (Characters_OmniDashPerk_o *)0x0))
    goto label_18224aced;
    bVar5 = Assets_Scripts_Characters_Human_Perks_PowerPerk__get_PerkEnabled
                      ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)pCVar3,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._human;
    if (pCVar1 == (Characters_Human_o *)0x0) goto label_18224aced;
    if (bVar5) {
      pCVar2 = (pCVar1->fields).Stats;
      if (pCVar2 == (Characters_HumanStats_o *)0x0) goto label_18224aced;
      pCVar6 = (Characters_VerticalDashPerk_o *)(pCVar2->fields).OmniDashPerk;
    }
    else {
      pCVar2 = (pCVar1->fields).Stats;
      if ((pCVar2 == (Characters_HumanStats_o *)0x0) ||
         (pCVar6 = (pCVar2->fields).VerticalDashPerk, pCVar6 == (Characters_VerticalDashPerk_o *)0x0))
      goto label_18224aced;
      bVar5 = Assets_Scripts_Characters_Human_Perks_PowerPerk__get_PerkEnabled
                        ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)pCVar6,(MethodInfo *)0x0);
      if (!bVar5) goto label_18224ab8e;
      pCVar1 = (__this->fields)._human;
      if ((pCVar1 == (Characters_Human_o *)0x0) ||
         (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) goto label_18224aced;
      pCVar6 = (pCVar2->fields).VerticalDashPerk;
    }
    if (pCVar6 == (Characters_VerticalDashPerk_o *)0x0) goto label_18224aced;
    value = Assets_Scripts_Characters_Human_Perks_PowerPerk__GetPowerRatio
                      ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)pCVar6,(MethodInfo *)0x0);
    if ((0.0 < value) && (value != 1.0)) {
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
      goto label_18224aced;
    }
  }
  else {
    pCVar1 = (__this->fields)._human;
    if (((pCVar1 == (Characters_Human_o *)0x0) ||
        (pCVar2 = (pCVar1->fields).Stats, pCVar2 == (Characters_HumanStats_o *)0x0)) ||
       (pCVar3 = (pCVar2->fields).OmniDashPerk, pCVar3 == (Characters_OmniDashPerk_o *)0x0))
    goto label_18224aced;
    bVar5 = Assets_Scripts_Characters_Human_Perks_PowerPerk__get_PerkEnabled
                      ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)pCVar3,(MethodInfo *)0x0);
    if (bVar5) goto label_18224abcc;
  }
label_18224ab8e:
  pUVar4 = (__this->fields)._perkCDImage;
  if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,false,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._perkCDBackgroundImage;
    if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar4,false,(MethodInfo *)0x0);
      return;
    }
  }
label_18224aced:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdateHumanSpecial
// il2cpp: void UI_HUDBottomHandler__UpdateHumanSpecial (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x18224a740
// eh: try 0x18224a863..0x18224ab0d -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224a998: mov rdi, qword ptr [rsp + 0x60]
// asm:   0x18224a99d: mov rbx, qword ptr [rdi + 0xf8]
// asm:   0x18224a9a4: lea rcx, [rip + 0x1e84565]  ; "Error loading special icon "
// asm:   0x18224a9ab: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18224a9b0: mov rcx, rax
// asm:   0x18224a9b3: xor r8d, r8d
// asm:   0x18224a9b6: mov rdx, rbx
// asm:   0x18224a9b9: call 0x181969e50  ; System_String__Concat()
// asm:   0x18224a9be: mov rbx, rax
// asm:   0x18224a9c1: lea rcx, [rip + 0x1eb0a70]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18224a9c8: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18224a9cd: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18224a9d4: jne 0x18224a9de
// asm:   0x18224a9d6: mov rcx, rax
// asm:   0x18224a9d9: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18224a9de: xor edx, edx
// asm:   0x18224a9e0: mov rcx, rbx
// asm:   0x18224a9e3: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x18224a9e8: jmp 0x18224aa20
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

void UI_HUDBottomHandler__UpdateHumanSpecial(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  UnityEngine_UI_Image_o *pUVar2;
  System_String_o *pSVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_String_o *name;
  UnityEngine_Texture2D_o *pUVar7;
  UnityEngine_Sprite_o *value;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Texture2D_o *texture;
  float value_00;
  UnityEngine_Rect_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434726f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Specials/");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434726f = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) goto label_18224aaee;
  if ((pCVar1->fields).Special == (Characters_BaseUseable_o *)0x0) {
    pUVar2 = (__this->fields)._specialFill;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_18224aaee;
    UnityEngine_UI_Image__set_fillAmount(pUVar2,0.0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._specialIconFill;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_18224aaee;
    UnityEngine_UI_Image__set_fillAmount(pUVar2,0.0,(MethodInfo *)0x0);
  }
  else {
    value_00 = Characters_BaseUseable__GetCooldownRatio((pCVar1->fields).Special,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._specialFill;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_18224aaee;
    UnityEngine_UI_Image__set_fillAmount(pUVar2,value_00,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._specialIconFill;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_18224aaee;
    UnityEngine_UI_Image__set_fillAmount(pUVar2,value_00,(MethodInfo *)0x0);
    bVar4 = System_String__op_Inequality
                      ((__this->fields)._currentSpecialIcon,(__this->fields)._newSpecialIcon,(MethodInfo *)0x0
                      );
    if (bVar4) {
      pSVar3 = (__this->fields)._newSpecialIcon;
      (__this->fields)._currentSpecialIcon = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentSpecialIcon,pSVar3);
      bVar4 = System_String__op_Inequality
                        ((__this->fields)._currentSpecialIcon,"",(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        name = System_String__Concat_1969e50
                         ("Icons/Specials/",(__this->fields)._currentSpecialIcon,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pUVar7 = (UnityEngine_Texture2D_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(pSVar3,name,true,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Texture2D_o *)0x0) {
          ThrowNullReferenceException();
        }
        texture = (UnityEngine_Texture2D_o *)0x0;
        if (pUVar7->klass == TypeInfo_UnityEngine_Texture2D) {
          texture = pUVar7;
        }
        if (texture == (UnityEngine_Texture2D_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar7);
        }
        iVar5 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                          (texture,(texture->klass->vtable)._5_get_width.method);
        iVar6 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                          (texture,(texture->klass->vtable)._7_get_height.method);
        local_28[0].m_XMin = 0.0;
        local_28[0].m_YMin = 0.0;
        local_28[0].m_Width = (float)iVar5;
        local_28[0].m_Height = (float)iVar6;
        value = UnityEngine_Sprite__Create_2ed4530
                          (texture,(UnityEngine_Rect_o *)local_28,(UnityEngine_Vector2_o)0x3f0000003f000000,
                           (MethodInfo *)0x0);
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
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._human;
    if (pCVar1 != (Characters_Human_o *)0x0) {
      if ((pCVar1->fields).Special == (Characters_BaseUseable_o *)0x0) {
        bVar4 = false;
      }
      else {
        bVar4 = System_String__op_Inequality
                          ((__this->fields)._currentSpecialIcon,"",(MethodInfo *)0x0);
      }
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar8,bVar4,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._specialIconFill;
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
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
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar8,bVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_18224aaee:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdateGas
// il2cpp: void UI_HUDBottomHandler__UpdateGas (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x18224a480

void UI_HUDBottomHandler__UpdateGas(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Characters_HumanStats_o *pCVar2;
  UnityEngine_UI_Image_c *pUVar3;
  MethodInfo *pMVar4;
  UnityEngine_UI_Image_o *pUVar5;
  float value;
  UnityEngine_Color_Fields local_38 [3];
  
  pCVar1 = (__this->fields)._human;
  if ((pCVar1 != (Characters_Human_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Stats, pCVar2 != (Characters_HumanStats_o *)0x0)) {
    if ((pCVar2->fields).MaxGas <= 0.0) {
      value = 0.0;
    }
    else {
      pCVar2 = (((__this->fields)._human)->fields).Stats;
      value = (pCVar2->fields).CurrentGas / (pCVar2->fields).MaxGas;
    }
    pUVar5 = (__this->fields)._gasFillLeft;
    if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_UI_Image__set_fillAmount(pUVar5,value,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._gasFillRight;
      if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_fillAmount(pUVar5,value,(MethodInfo *)0x0);
        if (value <= 0.0) {
          pUVar5 = (__this->fields)._gasBackground;
          if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
            local_38[0].r = (__this->fields).BackgroundEmptyColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundEmptyColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundEmptyColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundEmptyColor.fields.a;
            goto label_18224a6c8;
          }
        }
        else {
          pUVar5 = (__this->fields)._gasFillLeft;
          if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
            pUVar3 = pUVar5->klass;
            pMVar4 = (pUVar3->vtable)._23_set_color.method;
            if (value <= 0.15) {
              local_38[0].r = (__this->fields).FillVeryLowColor.fields.r;
              local_38[0].g = (__this->fields).FillVeryLowColor.fields.g;
              local_38[0].b = (__this->fields).FillVeryLowColor.fields.b;
              local_38[0].a = (__this->fields).FillVeryLowColor.fields.a;
              (*(pUVar3->vtable)._23_set_color.methodPtr)(pUVar5,(UnityEngine_Color_o *)local_38,pMVar4);
              pUVar5 = (__this->fields)._gasFillRight;
              if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                local_38[0].r = (__this->fields).FillVeryLowColor.fields.r;
                local_38[0].g = (__this->fields).FillVeryLowColor.fields.g;
                local_38[0].b = (__this->fields).FillVeryLowColor.fields.b;
                local_38[0].a = (__this->fields).FillVeryLowColor.fields.a;
                (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                          (pUVar5,(UnityEngine_Color_o *)local_38,(pUVar5->klass->vtable)._23_set_color.method
                          );
                pUVar5 = (__this->fields)._gasBackground;
                if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                  local_38[0].r = (__this->fields).BackgroundVeryLowColor.fields.r;
                  local_38[0].g = (__this->fields).BackgroundVeryLowColor.fields.g;
                  local_38[0].b = (__this->fields).BackgroundVeryLowColor.fields.b;
                  local_38[0].a = (__this->fields).BackgroundVeryLowColor.fields.a;
                  (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                            (pUVar5,(UnityEngine_Color_o *)local_38,
                             (pUVar5->klass->vtable)._23_set_color.method);
                  UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasBackground,(MethodInfo *)0x0)
                  ;
                  UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillLeft,(MethodInfo *)0x0);
                  UI_HUDBottomHandler__StartAnimator(__this,(__this->fields)._gasFillRight,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else if (value <= 0.3) {
              local_38[0].r = (__this->fields).FillLowColor.fields.r;
              local_38[0].g = (__this->fields).FillLowColor.fields.g;
              local_38[0].b = (__this->fields).FillLowColor.fields.b;
              local_38[0].a = (__this->fields).FillLowColor.fields.a;
              (*(pUVar3->vtable)._23_set_color.methodPtr)(pUVar5,(UnityEngine_Color_o *)local_38,pMVar4);
              pUVar5 = (__this->fields)._gasFillRight;
              if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                local_38[0].r = (__this->fields).FillLowColor.fields.r;
                local_38[0].g = (__this->fields).FillLowColor.fields.g;
                local_38[0].b = (__this->fields).FillLowColor.fields.b;
                local_38[0].a = (__this->fields).FillLowColor.fields.a;
                (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                          (pUVar5,(UnityEngine_Color_o *)local_38,(pUVar5->klass->vtable)._23_set_color.method
                          );
                pUVar5 = (__this->fields)._gasBackground;
                if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                  local_38[0].r = (__this->fields).BackgroundLowColor.fields.r;
                  local_38[0].g = (__this->fields).BackgroundLowColor.fields.g;
                  local_38[0].b = (__this->fields).BackgroundLowColor.fields.b;
                  local_38[0].a = (__this->fields).BackgroundLowColor.fields.a;
                  goto label_18224a6c8;
                }
              }
            }
            else {
              local_38[0].r = (__this->fields).FillNormalColor.fields.r;
              local_38[0].g = (__this->fields).FillNormalColor.fields.g;
              local_38[0].b = (__this->fields).FillNormalColor.fields.b;
              local_38[0].a = (__this->fields).FillNormalColor.fields.a;
              (*(pUVar3->vtable)._23_set_color.methodPtr)(pUVar5,(UnityEngine_Color_o *)local_38,pMVar4);
              pUVar5 = (__this->fields)._gasFillRight;
              if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                local_38[0].r = (__this->fields).FillNormalColor.fields.r;
                local_38[0].g = (__this->fields).FillNormalColor.fields.g;
                local_38[0].b = (__this->fields).FillNormalColor.fields.b;
                local_38[0].a = (__this->fields).FillNormalColor.fields.a;
                (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                          (pUVar5,(UnityEngine_Color_o *)local_38,(pUVar5->klass->vtable)._23_set_color.method
                          );
                pUVar5 = (__this->fields)._gasBackground;
                if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                  local_38[0].r = (__this->fields).BackgroundNormalColor.fields.r;
                  local_38[0].g = (__this->fields).BackgroundNormalColor.fields.g;
                  local_38[0].b = (__this->fields).BackgroundNormalColor.fields.b;
                  local_38[0].a = (__this->fields).BackgroundNormalColor.fields.a;
label_18224a6c8:
                  (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                            (pUVar5,(UnityEngine_Color_o *)local_38,
                             (pUVar5->klass->vtable)._23_set_color.method);
                  if (0.0 < (__this->fields)._gasAnimationTimeLeft) {
                    return;
                  }
                  UI_HUDBottomHandler__StopAnimator(__this,(__this->fields)._gasBackground,(MethodInfo *)0x0);
                  UI_HUDBottomHandler__StopAnimator(__this,(__this->fields)._gasFillLeft,(MethodInfo *)0x0);
                  UI_HUDBottomHandler__StopAnimator(__this,(__this->fields)._gasFillRight,(MethodInfo *)0x0);
                  return;
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


// UI.HUDBottomHandler$$UpdateBlade
// il2cpp: void UI_HUDBottomHandler__UpdateBlade (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x182249ce0

void UI_HUDBottomHandler__UpdateBlade(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  Characters_Human_o *pCVar5;
  Characters_BaseUseable_o *pCVar6;
  UnityEngine_UI_Image_o *pUVar7;
  UnityEngine_UI_Image_c *pUVar8;
  MethodInfo *pMVar9;
  System_Collections_Generic_List_GameObject__o *pSVar10;
  UnityEngine_GameObject_array *pUVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  bool bVar28;
  UnityEngine_GameObject_o *pUVar29;
  UnityEngine_Animator_o *__this_00;
  UnityEngine_Transform_o *pUVar30;
  UnityEngine_Quaternion_o *pUVar31;
  UnityEngine_Object_o *pUVar32;
  UnityEngine_UI_Image_o *pUVar33;
  int iVar34;
  float value;
  UnityEngine_Color_o local_68;
  UnityEngine_Quaternion_Fields local_58;
  UnityEngine_Quaternion_o local_48 [3];
  
  if (Il2CppMethodInitialized_184347270 == '\0') {
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
    Il2CppMethodInitialized_184347270 = '\x01';
  }
  pCVar5 = (__this->fields)._human;
  if ((pCVar5 == (Characters_Human_o *)0x0) ||
     (pCVar6 = (pCVar5->fields).Weapon, pCVar6 == (Characters_BaseUseable_o *)0x0)) goto label_18224a471;
  bVar2 = (TypeInfo_Characters_BladeWeapon->_2).typeHierarchyDepth;
  if (((pCVar6->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pCVar6->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_Characters_BladeWeapon)) {
    il2cpp_codegen_raise_invalid_cast_exception(pCVar6);
  }
  pUVar33 = (__this->fields)._bladeFillLeft;
  value = *(float *)((longlong)&(*(uint64_t *)((char *)pCVar6 + 0x40)) + 4) / *(float *)&(*(uint64_t *)((char *)pCVar6 + 0x40));
  if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
  pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
  if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
  bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
  if (bVar28) {
    pUVar33 = (__this->fields)._bladeFillRight;
    if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
    pUVar7 = (__this->fields)._bladeFillLeft;
    UnityEngine_UI_Image__set_fillAmount(pUVar33,value,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
    UnityEngine_UI_Image__set_fillAmount(pUVar7,value,(MethodInfo *)0x0);
    pUVar33 = (__this->fields)._bladeFillLeft;
    if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
    pUVar8 = pUVar33->klass;
    pMVar9 = (pUVar8->vtable)._23_set_color.method;
    if (value <= 0.25) {
      uVar20 = (__this->fields).FillVeryLowColor.fields.r;
      uVar21 = (__this->fields).FillVeryLowColor.fields.g;
      uVar22 = (__this->fields).FillVeryLowColor.fields.b;
      uVar23 = (__this->fields).FillVeryLowColor.fields.a;
      local_68.fields.r = (float)uVar20;
      local_68.fields.g = (float)uVar21;
      local_68.fields.b = (float)uVar22;
      local_68.fields.a = (float)uVar23;
      (*(pUVar8->vtable)._23_set_color.methodPtr)(pUVar33,&local_68,pMVar9);
      pUVar33 = (__this->fields)._bladeFillRight;
      if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
      uVar24 = (__this->fields).FillVeryLowColor.fields.r;
      uVar25 = (__this->fields).FillVeryLowColor.fields.g;
      uVar26 = (__this->fields).FillVeryLowColor.fields.b;
      uVar27 = (__this->fields).FillVeryLowColor.fields.a;
      local_68.fields.r = (float)uVar24;
      local_68.fields.g = (float)uVar25;
      local_68.fields.b = (float)uVar26;
      local_68.fields.a = (float)uVar27;
      (*(pUVar33->klass->vtable)._23_set_color.methodPtr)
                (pUVar33,&local_68,(pUVar33->klass->vtable)._23_set_color.method);
      pUVar33 = (__this->fields)._bladeBackground;
      if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
      local_68.fields.r = (__this->fields).BackgroundVeryLowColor.fields.r;
      local_68.fields.g = (__this->fields).BackgroundVeryLowColor.fields.g;
      local_68.fields.b = (__this->fields).BackgroundVeryLowColor.fields.b;
      local_68.fields.a = (__this->fields).BackgroundVeryLowColor.fields.a;
    }
    else {
      uVar12 = (__this->fields).BladeFillNormalColor.fields.r;
      uVar13 = (__this->fields).BladeFillNormalColor.fields.g;
      uVar14 = (__this->fields).BladeFillNormalColor.fields.b;
      uVar15 = (__this->fields).BladeFillNormalColor.fields.a;
      local_68.fields.r = (float)uVar12;
      local_68.fields.g = (float)uVar13;
      local_68.fields.b = (float)uVar14;
      local_68.fields.a = (float)uVar15;
      (*(pUVar8->vtable)._23_set_color.methodPtr)(pUVar33,&local_68,pMVar9);
      pUVar33 = (__this->fields)._bladeFillRight;
      if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
      uVar16 = (__this->fields).BladeFillNormalColor.fields.r;
      uVar17 = (__this->fields).BladeFillNormalColor.fields.g;
      uVar18 = (__this->fields).BladeFillNormalColor.fields.b;
      uVar19 = (__this->fields).BladeFillNormalColor.fields.a;
      local_68.fields.r = (float)uVar16;
      local_68.fields.g = (float)uVar17;
      local_68.fields.b = (float)uVar18;
      local_68.fields.a = (float)uVar19;
      (*(pUVar33->klass->vtable)._23_set_color.methodPtr)
                (pUVar33,&local_68,(pUVar33->klass->vtable)._23_set_color.method);
      pUVar33 = (__this->fields)._bladeBackground;
      if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
      local_68.fields.r = (__this->fields).BackgroundNormalColor.fields.r;
      local_68.fields.g = (__this->fields).BackgroundNormalColor.fields.g;
      local_68.fields.b = (__this->fields).BackgroundNormalColor.fields.b;
      local_68.fields.a = (__this->fields).BackgroundNormalColor.fields.a;
    }
    (*(pUVar33->klass->vtable)._23_set_color.methodPtr)
              (pUVar33,&local_68,(pUVar33->klass->vtable)._23_set_color.method);
  }
  if (0.0 < value) {
label_18224a03b:
    pUVar33 = (__this->fields)._bladeBackground;
    if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
    pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
    if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
    bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
    if ((!bVar28) && ((__this->fields)._reloadAnimationTimeLeft <= 0.0)) {
      pUVar33 = (__this->fields)._bladeReload;
      if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
      pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
      if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
      UnityEngine_GameObject__SetActive(pUVar29,false,(MethodInfo *)0x0);
      if (0.0 < value) {
        pUVar33 = (__this->fields)._bladeBackground;
        if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
        pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
        if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
        UnityEngine_GameObject__SetActive(pUVar29,true,(MethodInfo *)0x0);
        pUVar33 = (__this->fields)._bladeOut;
        if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
        pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
        if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
        UnityEngine_GameObject__SetActive(pUVar29,false,(MethodInfo *)0x0);
        pUVar33 = (__this->fields)._bladeFillLeft;
        if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
        pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
        if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
        UnityEngine_GameObject__SetActive(pUVar29,true,(MethodInfo *)0x0);
        pUVar33 = (__this->fields)._bladeFillRight;
        if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
        pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
        if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
        UnityEngine_GameObject__SetActive(pUVar29,true,(MethodInfo *)0x0);
        pUVar33 = (__this->fields)._bladeFillRight;
        if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
        pUVar7 = (__this->fields)._bladeFillLeft;
        UnityEngine_UI_Image__set_fillAmount(pUVar33,value,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
        UnityEngine_UI_Image__set_fillAmount(pUVar7,value,(MethodInfo *)0x0);
      }
    }
  }
  else {
    pUVar33 = (__this->fields)._bladeOut;
    if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
    pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
    if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
    bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
    if (bVar28) goto label_18224a03b;
    pUVar33 = (__this->fields)._bladeReload;
    if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
    pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
    if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
    bVar28 = UnityEngine_GameObject__get_activeSelf(pUVar29,(MethodInfo *)0x0);
    if (bVar28) goto label_18224a03b;
    pUVar33 = (__this->fields)._bladeOut;
    if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
    pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
    if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
    UnityEngine_GameObject__SetActive(pUVar29,true,(MethodInfo *)0x0);
    pUVar33 = (__this->fields)._bladeOut;
    if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar33,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Animator);
    if (__this_00 == (UnityEngine_Animator_o *)0x0) goto label_18224a471;
    UnityEngine_Animator__Update(__this_00,0.0,(MethodInfo *)0x0);
    pUVar33 = (__this->fields)._bladeBackground;
    if (pUVar33 == (UnityEngine_UI_Image_o *)0x0) goto label_18224a471;
    pUVar29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar33,(MethodInfo *)0x0);
    if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
    UnityEngine_GameObject__SetActive(pUVar29,false,(MethodInfo *)0x0);
  }
  pSVar10 = (__this->fields)._bladeAmmoLeft;
  if (pSVar10 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    iVar3 = (pSVar10->fields)._size;
    iVar34 = (*(uint32_t *)((char *)pCVar6 + 0x4c));
    if (iVar34 < iVar3) {
      for (iVar34 = 0; iVar34 < iVar3 - (*(uint32_t *)((char *)pCVar6 + 0x4c)); iVar34 = iVar34 + 1) {
        pSVar10 = (__this->fields)._bladeAmmoLeft;
        if (pSVar10 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_18224a471;
        pUVar32 = (UnityEngine_Object_o *)
                  System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar10,0,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar32,(MethodInfo *)0x0);
        pSVar10 = (__this->fields)._bladeAmmoRight;
        if (pSVar10 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_18224a471;
        pUVar32 = (UnityEngine_Object_o *)
                  System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar10,0,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
        UnityEngine_Object__Destroy_2f1ff70(pUVar32,(MethodInfo *)0x0);
        pSVar10 = (__this->fields)._bladeAmmoLeft;
        if (pSVar10 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_18224a471;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar10,0,
                   (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_GameObject_RemoveAt);
        pSVar10 = (__this->fields)._bladeAmmoRight;
        if (pSVar10 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_18224a471;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar10,0,
                   (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_GameObject_RemoveAt);
      }
    }
    else if (iVar3 < iVar34) {
      iVar34 = 0;
      while (iVar34 < (*(uint32_t *)((char *)pCVar6 + 0x4c)) - iVar3) {
        pUVar29 = (__this->fields)._bladeAmmoGroupLeft;
        if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
        pSVar10 = (__this->fields)._bladeAmmoLeft;
        pUVar30 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
        pUVar29 = UI_ElementFactory__InstantiateAndBind(pUVar30,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
        pMVar9 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
        if (pSVar10 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_18224a471;
        piVar1 = &(pSVar10->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar11 = (pSVar10->fields)._items;
        if (pUVar11 == (UnityEngine_GameObject_array *)0x0) goto label_18224a471;
        uVar4 = (pSVar10->fields)._size;
        if (uVar4 < (uint)pUVar11->max_length) {
          (pSVar10->fields)._size = uVar4 + 1;
          if ((uint)pUVar11->max_length <= uVar4) goto label_18224a462;
          pUVar11->m_Items[(int)uVar4] = pUVar29;
          Il2CppCodeGenWriteBarrier(pUVar11->m_Items + (int)uVar4,pUVar29);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pUVar29,
                     (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
        }
        pUVar29 = (__this->fields)._bladeAmmoGroupRight;
        if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
        pUVar30 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
        pUVar29 = UI_ElementFactory__InstantiateAndBind(pUVar30,"Prefabs/InGame/HUDBladeAmmo",(MethodInfo *)0x0);
        if (pUVar29 == (UnityEngine_GameObject_o *)0x0) goto label_18224a471;
        pUVar30 = UnityEngine_GameObject__get_transform(pUVar29,(MethodInfo *)0x0);
        local_68.fields.r = 0.0;
        local_68.fields.g = 3.1415927;
        local_68.fields.b = 0.0;
        pUVar31 = UnityEngine_Quaternion__Internal_FromEulerRad
                            (local_48,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
        if (pUVar30 == (UnityEngine_Transform_o *)0x0) goto label_18224a471;
        local_58.x = (pUVar31->fields).x;
        local_58.y = (pUVar31->fields).y;
        local_58.z = (pUVar31->fields).z;
        local_58.w = (pUVar31->fields).w;
        UnityEngine_Transform__set_localRotation
                  (pUVar30,(UnityEngine_Quaternion_o *)&local_58,(MethodInfo *)0x0);
        pMVar9 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
        pSVar10 = (__this->fields)._bladeAmmoRight;
        if (pSVar10 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_18224a471;
        piVar1 = &(pSVar10->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar11 = (pSVar10->fields)._items;
        if (pUVar11 == (UnityEngine_GameObject_array *)0x0) goto label_18224a471;
        uVar4 = (pSVar10->fields)._size;
        if (uVar4 < (uint)pUVar11->max_length) {
          (pSVar10->fields)._size = uVar4 + 1;
          if ((uint)pUVar11->max_length <= uVar4) {
label_18224a462:
            ThrowIndexOutOfRangeException();
          }
          pUVar11->m_Items[(int)uVar4] = pUVar29;
          Il2CppCodeGenWriteBarrier(pUVar11->m_Items + (int)uVar4,pUVar29);
          iVar34 = iVar34 + 1;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pUVar29,
                     (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
          iVar34 = iVar34 + 1;
        }
      }
    }
    return;
  }
label_18224a471:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdateAPG
// il2cpp: void UI_HUDBottomHandler__UpdateAPG (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x1822498b0

void UI_HUDBottomHandler__UpdateAPG(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_UI_Image_c *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  bool bVar8;
  System_String_o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_Image_o *pUVar11;
  float value;
  undefined8 uVar12;
  UnityEngine_Color_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_184347271 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184347271 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if ((pCVar2 != (Characters_Human_o *)0x0) &&
     (pCVar3 = (pCVar2->fields).Weapon, pCVar3 != (Characters_BaseUseable_o *)0x0)) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
    }
    if ((int)(*(uint32_t *)((char *)pCVar3 + 0x48)) < 1) {
      if ((*(uint32_t *)((char *)pCVar3 + 0x4c)) == -1) {
        value = 1.0;
      }
      else {
        value = 0.0;
      }
    }
    else {
      value = (float)(*(uint32_t *)((char *)pCVar3 + 0x4c)) / (float)(int)(*(uint32_t *)((char *)pCVar3 + 0x48));
    }
    pUVar11 = (__this->fields)._ammoFillRight;
    if (pUVar11 != (UnityEngine_UI_Image_o *)0x0) {
      __this_00 = (__this->fields)._ammoFillLeft;
      UnityEngine_UI_Image__set_fillAmount(pUVar11,value,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_fillAmount(__this_00,value,(MethodInfo *)0x0);
        pUVar11 = (__this->fields)._apgBackground;
        if (pUVar11 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar4 = pUVar11->klass;
          pMVar5 = (pUVar4->vtable)._23_set_color.method;
          if (value <= 0.0) {
            local_48[0].r = (__this->fields).BackgroundVeryLowColor.fields.r;
            local_48[0].g = (__this->fields).BackgroundVeryLowColor.fields.g;
            local_48[0].b = (__this->fields).BackgroundVeryLowColor.fields.b;
            local_48[0].a = (__this->fields).BackgroundVeryLowColor.fields.a;
            (*(pUVar4->vtable)._23_set_color.methodPtr)(pUVar11,(UnityEngine_Color_o *)local_48,pMVar5);
            pUVar11 = (__this->fields)._apgAmmoBackground;
            if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_182249cce;
            local_48[0].r = (__this->fields).BackgroundVeryLowColor.fields.r;
            local_48[0].g = (__this->fields).BackgroundVeryLowColor.fields.g;
            local_48[0].b = (__this->fields).BackgroundVeryLowColor.fields.b;
            local_48[0].a = (__this->fields).BackgroundVeryLowColor.fields.a;
            (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                      (pUVar11,(UnityEngine_Color_o *)local_48,(pUVar11->klass->vtable)._23_set_color.method);
            pUVar11 = (__this->fields)._apgShoot;
            if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_182249cce;
            local_48[0].r = (__this->fields).BackgroundVeryLowColor.fields.r;
            local_48[0].g = (__this->fields).BackgroundVeryLowColor.fields.g;
            local_48[0].b = (__this->fields).BackgroundVeryLowColor.fields.b;
            local_48[0].a = (__this->fields).BackgroundVeryLowColor.fields.a;
          }
          else if (value <= 0.5) {
            local_48[0].r = (__this->fields).BackgroundLowColor.fields.r;
            local_48[0].g = (__this->fields).BackgroundLowColor.fields.g;
            local_48[0].b = (__this->fields).BackgroundLowColor.fields.b;
            local_48[0].a = (__this->fields).BackgroundLowColor.fields.a;
            (*(pUVar4->vtable)._23_set_color.methodPtr)(pUVar11,(UnityEngine_Color_o *)local_48,pMVar5);
            pUVar11 = (__this->fields)._apgAmmoBackground;
            if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_182249cce;
            local_48[0].r = (__this->fields).BackgroundLowColor.fields.r;
            local_48[0].g = (__this->fields).BackgroundLowColor.fields.g;
            local_48[0].b = (__this->fields).BackgroundLowColor.fields.b;
            local_48[0].a = (__this->fields).BackgroundLowColor.fields.a;
            (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                      (pUVar11,(UnityEngine_Color_o *)local_48,(pUVar11->klass->vtable)._23_set_color.method);
            pUVar11 = (__this->fields)._apgShoot;
            if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_182249cce;
            local_48[0].r = (__this->fields).BackgroundLowColor.fields.r;
            local_48[0].g = (__this->fields).BackgroundLowColor.fields.g;
            local_48[0].b = (__this->fields).BackgroundLowColor.fields.b;
            local_48[0].a = (__this->fields).BackgroundLowColor.fields.a;
          }
          else {
            local_48[0].r = (__this->fields).BackgroundNormalColor.fields.r;
            local_48[0].g = (__this->fields).BackgroundNormalColor.fields.g;
            local_48[0].b = (__this->fields).BackgroundNormalColor.fields.b;
            local_48[0].a = (__this->fields).BackgroundNormalColor.fields.a;
            (*(pUVar4->vtable)._23_set_color.methodPtr)(pUVar11,(UnityEngine_Color_o *)local_48,pMVar5);
            pUVar11 = (__this->fields)._apgAmmoBackground;
            if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_182249cce;
            local_48[0].r = (__this->fields).BackgroundNormalColor.fields.r;
            local_48[0].g = (__this->fields).BackgroundNormalColor.fields.g;
            local_48[0].b = (__this->fields).BackgroundNormalColor.fields.b;
            local_48[0].a = (__this->fields).BackgroundNormalColor.fields.a;
            (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                      (pUVar11,(UnityEngine_Color_o *)local_48,(pUVar11->klass->vtable)._23_set_color.method);
            pUVar11 = (__this->fields)._apgShoot;
            if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_182249cce;
            local_48[0].r = (__this->fields).BackgroundNormalColor.fields.r;
            local_48[0].g = (__this->fields).BackgroundNormalColor.fields.g;
            local_48[0].b = (__this->fields).BackgroundNormalColor.fields.b;
            local_48[0].a = (__this->fields).BackgroundNormalColor.fields.a;
          }
          (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                    (pUVar11,(UnityEngine_Color_o *)local_48,(pUVar11->klass->vtable)._23_set_color.method);
          pUVar6 = (__this->fields)._ammoLabelLeft;
          pUVar7 = (__this->fields)._ammoLabelRight;
          pSVar9 = System_Int32__ToString((int32_t *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4),(MethodInfo *)0x0);
          if ((pUVar7 != (UnityEngine_UI_Text_o *)0x0) &&
             ((*(pUVar7->klass->vtable)._75_set_text.methodPtr)
                        (pUVar7,pSVar9,(pUVar7->klass->vtable)._75_set_text.method),
             pUVar6 != (UnityEngine_UI_Text_o *)0x0)) {
            (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                      (pUVar6,pSVar9,(pUVar6->klass->vtable)._75_set_text.method);
            pUVar6 = (__this->fields)._ammoLabelLeft;
            if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
              if (*(int *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4) == 0) {
                uVar12._0_4_ = 1.0;
                uVar12._4_4_ = 0.0;
              }
              else {
                uVar12._0_4_ = 0.0;
                uVar12._4_4_ = 1.0;
              }
              local_48[0].b = 0.0;
              local_48[0].a = 1.0;
              local_48[0]._0_8_ = uVar12;
              (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                        (pUVar6,(UnityEngine_Color_o *)local_48,(pUVar6->klass->vtable)._23_set_color.method);
              pUVar6 = (__this->fields)._ammoLabelRight;
              if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                local_48[0].b = 0.0;
                local_48[0].a = 1.0;
                local_48[0]._0_8_ = uVar12;
                (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                          (pUVar6,(UnityEngine_Color_o *)local_48,(pUVar6->klass->vtable)._23_set_color.method
                          );
                pUVar11 = (__this->fields)._apgBackground;
                if ((pUVar11 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar10 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                   pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                  bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
                  if ((bVar8) ||
                     ((0.0 < (__this->fields)._reloadAnimationTimeLeft ||
                      (0.0 < (__this->fields)._shootAnimationTimeLeft)))) {
                    return;
                  }
                  pUVar11 = (__this->fields)._apgBackground;
                  if ((pUVar11 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar10 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                     pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar10,true,(MethodInfo *)0x0);
                    pUVar11 = (__this->fields)._apgAmmoBackground;
                    if ((pUVar11 != (UnityEngine_UI_Image_o *)0x0) &&
                       (pUVar10 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                       pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
                      pUVar11 = (__this->fields)._apgReload;
                      if ((pUVar11 != (UnityEngine_UI_Image_o *)0x0) &&
                         (pUVar10 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                         pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
                        pUVar11 = (__this->fields)._apgShoot;
                        if ((pUVar11 != (UnityEngine_UI_Image_o *)0x0) &&
                           (pUVar10 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                           pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                          UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
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
label_182249cce:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdateAHSS
// il2cpp: void UI_HUDBottomHandler__UpdateAHSS (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x182249160

void UI_HUDBottomHandler__UpdateAHSS(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *pCVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  bool bVar6;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_Image_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  UnityEngine_Color_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184347272 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AmmoWeapon);
    Il2CppMethodInitialized_184347272 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if ((pCVar2 != (Characters_Human_o *)0x0) &&
     (pCVar3 = (pCVar2->fields).Weapon, pCVar3 != (Characters_BaseUseable_o *)0x0)) {
    bVar1 = (TypeInfo_Characters_AmmoWeapon->_2).typeHierarchyDepth;
    if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_AmmoWeapon)) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
    }
    pUVar4 = (__this->fields)._ammoLabelLeft;
    pUVar5 = (__this->fields)._ammoLabelRight;
    pSVar7 = System_Int32__ToString((int32_t *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4),(MethodInfo *)0x0);
    if ((pUVar5 != (UnityEngine_UI_Text_o *)0x0) &&
       ((*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,pSVar7,(pUVar5->klass->vtable)._75_set_text.method),
       pUVar4 != (UnityEngine_UI_Text_o *)0x0)) {
      (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                (pUVar4,pSVar7,(pUVar4->klass->vtable)._75_set_text.method);
      pUVar4 = (__this->fields)._ammoLabelLeft;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        if (*(int *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4) == 0) {
          uVar14._0_4_ = 1.0;
          uVar14._4_4_ = 0.0;
        }
        else {
          uVar14._0_4_ = 0.0;
          uVar14._4_4_ = 1.0;
        }
        local_38[0].b = 0.0;
        local_38[0].a = 1.0;
        local_38[0]._0_8_ = uVar14;
        (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                  (pUVar4,(UnityEngine_Color_o *)local_38,(pUVar4->klass->vtable)._23_set_color.method);
        pUVar4 = (__this->fields)._ammoLabelRight;
        if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
          local_38[0].b = 0.0;
          local_38[0].a = 1.0;
          local_38[0]._0_8_ = uVar14;
          (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                    (pUVar4,(UnityEngine_Color_o *)local_38,(pUVar4->klass->vtable)._23_set_color.method);
          if ((*(uint32_t *)((char *)pCVar3 + 0x4c)) == 0) {
            pUVar9 = (__this->fields)._ahssEmptyLeft;
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].r = (__this->fields).BackgroundVeryLowColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundVeryLowColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundVeryLowColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundVeryLowColor.fields.a;
            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                      (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
            pUVar9 = (__this->fields)._ahssEmptyRight;
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].r = (__this->fields).BackgroundVeryLowColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundVeryLowColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundVeryLowColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundVeryLowColor.fields.a;
            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                      (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
            pUVar9 = (__this->fields)._ahssShootLeft;
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].r = (__this->fields).BackgroundVeryLowColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundVeryLowColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundVeryLowColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundVeryLowColor.fields.a;
            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                      (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
            pUVar9 = (__this->fields)._ahssShootRight;
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].r = (__this->fields).BackgroundVeryLowColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundVeryLowColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundVeryLowColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundVeryLowColor.fields.a;
          }
          else if ((*(uint32_t *)((char *)pCVar3 + 0x4c)) == 1) {
            pUVar9 = (__this->fields)._ahssEmptyLeft;
            if (*(int *)((longlong)&(*(uint64_t *)((char *)pCVar3 + 0x40)) + 4) < 1) {
              fVar10 = (__this->fields).BackgroundVeryLowColor.fields.r;
              fVar11 = (__this->fields).BackgroundVeryLowColor.fields.g;
              fVar12 = (__this->fields).BackgroundVeryLowColor.fields.b;
              fVar13 = (__this->fields).BackgroundVeryLowColor.fields.a;
            }
            else {
              fVar10 = (__this->fields).BackgroundLowColor.fields.r;
              fVar11 = (__this->fields).BackgroundLowColor.fields.g;
              fVar12 = (__this->fields).BackgroundLowColor.fields.b;
              fVar13 = (__this->fields).BackgroundLowColor.fields.a;
            }
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].g = fVar11;
            local_38[0].r = fVar10;
            local_38[0].a = fVar13;
            local_38[0].b = fVar12;
            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                      (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
            pUVar9 = (__this->fields)._ahssEmptyRight;
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].r = (__this->fields).BackgroundLowColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundLowColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundLowColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundLowColor.fields.a;
            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                      (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
            pUVar9 = (__this->fields)._ahssBackgroundLeft;
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].r = (__this->fields).BackgroundLowColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundLowColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundLowColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundLowColor.fields.a;
            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                      (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
            pUVar9 = (__this->fields)._ahssBackgroundRight;
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].r = (__this->fields).BackgroundLowColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundLowColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundLowColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundLowColor.fields.a;
            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                      (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
            pUVar9 = (__this->fields)._ahssShootLeft;
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].r = (__this->fields).BackgroundLowColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundLowColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundLowColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundLowColor.fields.a;
            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                      (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
            pUVar9 = (__this->fields)._ahssShootRight;
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].r = (__this->fields).BackgroundLowColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundLowColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundLowColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundLowColor.fields.a;
          }
          else {
            pUVar9 = (__this->fields)._ahssBackgroundLeft;
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].r = (__this->fields).BackgroundNormalColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundNormalColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundNormalColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundNormalColor.fields.a;
            (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                      (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
            pUVar9 = (__this->fields)._ahssBackgroundRight;
            if (pUVar9 == (UnityEngine_UI_Image_o *)0x0) goto label_18224989e;
            local_38[0].r = (__this->fields).BackgroundNormalColor.fields.r;
            local_38[0].g = (__this->fields).BackgroundNormalColor.fields.g;
            local_38[0].b = (__this->fields).BackgroundNormalColor.fields.b;
            local_38[0].a = (__this->fields).BackgroundNormalColor.fields.a;
          }
          (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                    (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
          pUVar9 = (__this->fields)._ahssEmptyLeft;
          if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar8 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
             pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
            bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
            if ((bVar6) && (1 < (*(uint32_t *)((char *)pCVar3 + 0x4c)))) {
              pUVar9 = (__this->fields)._ahssEmptyLeft;
              if ((pUVar9 == (UnityEngine_UI_Image_o *)0x0) ||
                 (pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                 pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_18224989e;
              UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
              pUVar9 = (__this->fields)._ahssBackgroundLeft;
              if ((pUVar9 == (UnityEngine_UI_Image_o *)0x0) ||
                 (pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                 pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_18224989e;
              UnityEngine_GameObject__SetActive(pUVar8,true,(MethodInfo *)0x0);
            }
            pUVar9 = (__this->fields)._ahssEmptyRight;
            if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar8 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
               pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
              bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
              if ((bVar6) && (0 < (*(uint32_t *)((char *)pCVar3 + 0x4c)))) {
                pUVar9 = (__this->fields)._ahssEmptyRight;
                if ((pUVar9 == (UnityEngine_UI_Image_o *)0x0) ||
                   (pUVar8 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                   pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_18224989e;
                UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
                pUVar9 = (__this->fields)._ahssBackgroundRight;
                if ((pUVar9 == (UnityEngine_UI_Image_o *)0x0) ||
                   (pUVar8 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                   pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_18224989e;
                UnityEngine_GameObject__SetActive(pUVar8,true,(MethodInfo *)0x0);
              }
              pUVar9 = (__this->fields)._ahssShootLeft;
              if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                 pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
                if ((bVar6) && ((__this->fields)._shootAnimationTimeLeft <= 0.0)) {
                  pUVar9 = (__this->fields)._ahssShootLeft;
                  if ((pUVar9 == (UnityEngine_UI_Image_o *)0x0) ||
                     (pUVar8 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_18224989e;
                  UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
                  pUVar9 = (__this->fields)._ahssEmptyLeft;
                  if ((pUVar9 == (UnityEngine_UI_Image_o *)0x0) ||
                     (pUVar8 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_18224989e;
                  UnityEngine_GameObject__SetActive(pUVar8,true,(MethodInfo *)0x0);
                }
                pUVar9 = (__this->fields)._ahssShootRight;
                if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
                   (pUVar8 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                   pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                  bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
                  if ((bVar6) && ((__this->fields)._shootAnimationTimeLeft <= 0.0)) {
                    pUVar9 = (__this->fields)._ahssShootRight;
                    if ((pUVar9 == (UnityEngine_UI_Image_o *)0x0) ||
                       (pUVar8 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                       pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_18224989e;
                    UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
                    pUVar9 = (__this->fields)._ahssEmptyRight;
                    if ((pUVar9 == (UnityEngine_UI_Image_o *)0x0) ||
                       (pUVar8 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                       pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_18224989e;
                    UnityEngine_GameObject__SetActive(pUVar8,true,(MethodInfo *)0x0);
                  }
                  pUVar9 = (__this->fields)._ahssReloadLeft;
                  if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar8 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                     pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
                    if (!bVar6) {
                      pUVar9 = (__this->fields)._ahssReloadRight;
                      if ((pUVar9 == (UnityEngine_UI_Image_o *)0x0) ||
                         (pUVar8 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                         pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_18224989e;
                      bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
                      if (!bVar6) {
                        return;
                      }
                    }
                    if (0.0 < (__this->fields)._reloadAnimationTimeLeft) {
                      return;
                    }
                    pUVar9 = (__this->fields)._ahssReloadLeft;
                    if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
                       (pUVar8 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                       pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
                      pUVar9 = (__this->fields)._ahssReloadRight;
                      if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
                         (pUVar8 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                         pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
                        pUVar9 = (__this->fields)._ahssBackgroundRight;
                        if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
                           (pUVar8 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                           pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                          UnityEngine_GameObject__SetActive
                                    (pUVar8,0 < (*(uint32_t *)((char *)pCVar3 + 0x4c)),(MethodInfo *)0x0);
                          pUVar9 = (__this->fields)._ahssBackgroundLeft;
                          if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
                             (pUVar8 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                             pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive
                                      (pUVar8,1 < (*(uint32_t *)((char *)pCVar3 + 0x4c)),(MethodInfo *)0x0);
                            pUVar9 = (__this->fields)._ahssEmptyRight;
                            if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
                               (pUVar8 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                               pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                              UnityEngine_GameObject__SetActive
                                        (pUVar8,(*(uint32_t *)((char *)pCVar3 + 0x4c)) < 1,(MethodInfo *)0x0);
                              pUVar9 = (__this->fields)._ahssEmptyLeft;
                              if ((pUVar9 != (UnityEngine_UI_Image_o *)0x0) &&
                                 (pUVar8 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
                                 pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                                UnityEngine_GameObject__SetActive
                                          (pUVar8,(*(uint32_t *)((char *)pCVar3 + 0x4c)) < 2,(MethodInfo *)0x0);
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
  }
label_18224989e:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdateTS
// il2cpp: void UI_HUDBottomHandler__UpdateTS (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x18224ade0

void UI_HUDBottomHandler__UpdateTS(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  Characters_BaseUseable_o *__this_00;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_UI_Image_c *pUVar7;
  MethodInfo *pMVar8;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_UI_Text_o *pUVar10;
  bool bVar11;
  System_String_o *pSVar12;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_Animator_o *__this_01;
  UnityEngine_UI_Image_o *pUVar14;
  float fVar15;
  undefined8 uVar16;
  UnityEngine_Color_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_184347273 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ThunderspearWeapon);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184347273 = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    __this_00 = (pCVar2->fields).Weapon;
    if (__this_00 != (Characters_BaseUseable_o *)0x0) {
      bVar1 = (TypeInfo_Characters_ThunderspearWeapon->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_ThunderspearWeapon)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if ((((pSVar3 != (Settings_InGameSet_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).Misc, pSVar4 != (Settings_InGameMiscSettings_o *)0x0)) &&
        (pSVar5 = (pSVar4->fields).ThunderspearPVP, pSVar5 != (Settings_BoolSetting_o *)0x0)) &&
       (__this_00 != (Characters_BaseUseable_o *)0x0)) {
      if ((pSVar5->fields)._value == false) {
        if ((int)(*(uint32_t *)((char *)__this_00 + 0x48)) < 1) {
          if ((*(uint32_t *)((char *)__this_00 + 0x4c)) == -1) {
            fVar15 = 1.0;
          }
          else {
            fVar15 = 0.0;
          }
        }
        else {
          fVar15 = (float)(*(uint32_t *)((char *)__this_00 + 0x4c)) / (float)(int)(*(uint32_t *)((char *)__this_00 + 0x48));
        }
        pUVar14 = (__this->fields)._ammoFillRight;
        if (pUVar14 == (UnityEngine_UI_Image_o *)0x0) goto label_18224b3c1;
        pUVar6 = (__this->fields)._ammoFillLeft;
        UnityEngine_UI_Image__set_fillAmount(pUVar14,fVar15,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto label_18224b3c1;
        UnityEngine_UI_Image__set_fillAmount(pUVar6,fVar15,(MethodInfo *)0x0);
        pUVar14 = (__this->fields)._tsBackground;
        if (pUVar14 == (UnityEngine_UI_Image_o *)0x0) goto label_18224b3c1;
        pUVar7 = pUVar14->klass;
        pMVar8 = (pUVar7->vtable)._23_set_color.method;
        if (fVar15 <= 0.0) {
          local_38[0].r = (__this->fields).BackgroundVeryLowColor.fields.r;
          local_38[0].g = (__this->fields).BackgroundVeryLowColor.fields.g;
          local_38[0].b = (__this->fields).BackgroundVeryLowColor.fields.b;
          local_38[0].a = (__this->fields).BackgroundVeryLowColor.fields.a;
          (*(pUVar7->vtable)._23_set_color.methodPtr)(pUVar14,(UnityEngine_Color_o *)local_38,pMVar8);
          pUVar14 = (__this->fields)._tsShoot;
          if (pUVar14 == (UnityEngine_UI_Image_o *)0x0) goto label_18224b3c1;
          local_38[0].r = (__this->fields).BackgroundVeryLowColor.fields.r;
          local_38[0].g = (__this->fields).BackgroundVeryLowColor.fields.g;
          local_38[0].b = (__this->fields).BackgroundVeryLowColor.fields.b;
          local_38[0].a = (__this->fields).BackgroundVeryLowColor.fields.a;
        }
        else if (fVar15 <= 0.5) {
          local_38[0].r = (__this->fields).BackgroundLowColor.fields.r;
          local_38[0].g = (__this->fields).BackgroundLowColor.fields.g;
          local_38[0].b = (__this->fields).BackgroundLowColor.fields.b;
          local_38[0].a = (__this->fields).BackgroundLowColor.fields.a;
          (*(pUVar7->vtable)._23_set_color.methodPtr)(pUVar14,(UnityEngine_Color_o *)local_38,pMVar8);
          pUVar14 = (__this->fields)._tsShoot;
          if (pUVar14 == (UnityEngine_UI_Image_o *)0x0) goto label_18224b3c1;
          local_38[0].r = (__this->fields).BackgroundLowColor.fields.r;
          local_38[0].g = (__this->fields).BackgroundLowColor.fields.g;
          local_38[0].b = (__this->fields).BackgroundLowColor.fields.b;
          local_38[0].a = (__this->fields).BackgroundLowColor.fields.a;
        }
        else {
          local_38[0].r = (__this->fields).BackgroundNormalColor.fields.r;
          local_38[0].g = (__this->fields).BackgroundNormalColor.fields.g;
          local_38[0].b = (__this->fields).BackgroundNormalColor.fields.b;
          local_38[0].a = (__this->fields).BackgroundNormalColor.fields.a;
          (*(pUVar7->vtable)._23_set_color.methodPtr)(pUVar14,(UnityEngine_Color_o *)local_38,pMVar8);
          pUVar14 = (__this->fields)._tsShoot;
          if (pUVar14 == (UnityEngine_UI_Image_o *)0x0) goto label_18224b3c1;
          local_38[0].r = (__this->fields).BackgroundNormalColor.fields.r;
          local_38[0].g = (__this->fields).BackgroundNormalColor.fields.g;
          local_38[0].b = (__this->fields).BackgroundNormalColor.fields.b;
          local_38[0].a = (__this->fields).BackgroundNormalColor.fields.a;
        }
        (*(pUVar14->klass->vtable)._23_set_color.methodPtr)
                  (pUVar14,(UnityEngine_Color_o *)local_38,(pUVar14->klass->vtable)._23_set_color.method);
        pUVar9 = (__this->fields)._ammoLabelLeft;
        pUVar10 = (__this->fields)._ammoLabelRight;
        pSVar12 = System_Int32__ToString((int32_t *)((longlong)&(*(uint64_t *)((char *)__this_00 + 0x40)) + 4),(MethodInfo *)0x0);
        if ((pUVar10 == (UnityEngine_UI_Text_o *)0x0) ||
           ((*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                      (pUVar10,pSVar12,(pUVar10->klass->vtable)._75_set_text.method),
           pUVar9 == (UnityEngine_UI_Text_o *)0x0)) goto label_18224b3c1;
        (*(pUVar9->klass->vtable)._75_set_text.methodPtr)
                  (pUVar9,pSVar12,(pUVar9->klass->vtable)._75_set_text.method);
        pUVar9 = (__this->fields)._ammoLabelLeft;
        if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto label_18224b3c1;
        if (*(int *)((longlong)&(*(uint64_t *)((char *)__this_00 + 0x40)) + 4) == 0) {
          uVar16._0_4_ = 1.0;
          uVar16._4_4_ = 0.0;
        }
        else {
          uVar16._0_4_ = 0.0;
          uVar16._4_4_ = 1.0;
        }
        local_38[0].b = 0.0;
        local_38[0].a = 1.0;
        local_38[0]._0_8_ = uVar16;
        (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                  (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
        pUVar9 = (__this->fields)._ammoLabelRight;
        if (pUVar9 == (UnityEngine_UI_Text_o *)0x0) goto label_18224b3c1;
        local_38[0].b = 0.0;
        local_38[0].a = 1.0;
        local_38[0]._0_8_ = uVar16;
        (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                  (pUVar9,(UnityEngine_Color_o *)local_38,(pUVar9->klass->vtable)._23_set_color.method);
        pUVar14 = (__this->fields)._tsBackground;
        if ((pUVar14 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar13 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_18224b3c1;
        bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar13,(MethodInfo *)0x0);
        if (bVar11) {
          return;
        }
        if (0.0 < (__this->fields)._reloadAnimationTimeLeft) {
          return;
        }
        if (0.0 < (__this->fields)._shootAnimationTimeLeft) {
          return;
        }
        pUVar14 = (__this->fields)._tsBackground;
        if ((pUVar14 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar13 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_18224b3c1;
        UnityEngine_GameObject__SetActive(pUVar13,true,(MethodInfo *)0x0);
        pUVar14 = (__this->fields)._tsReload;
        if ((pUVar14 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar13 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_18224b3c1;
        UnityEngine_GameObject__SetActive(pUVar13,false,(MethodInfo *)0x0);
        pUVar14 = (__this->fields)._tsShoot;
        if ((pUVar14 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar13 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_18224b3c1;
        UnityEngine_GameObject__SetActive(pUVar13,false,(MethodInfo *)0x0);
        pUVar14 = (__this->fields)._ammoFillLeft;
        if ((pUVar14 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar13 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_18224b3c1;
        UnityEngine_GameObject__SetActive(pUVar13,true,(MethodInfo *)0x0);
        pUVar14 = (__this->fields)._ammoFillRight;
      }
      else {
        fVar15 = Characters_BaseUseable__GetCooldownRatio(__this_00,(MethodInfo *)0x0);
        pUVar14 = (__this->fields)._bombFillRight;
        if (pUVar14 == (UnityEngine_UI_Image_o *)0x0) goto label_18224b3c1;
        pUVar6 = (__this->fields)._bombFillLeft;
        UnityEngine_UI_Image__set_fillAmount(pUVar14,fVar15,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto label_18224b3c1;
        UnityEngine_UI_Image__set_fillAmount(pUVar6,fVar15,(MethodInfo *)0x0);
        bVar11 = fVar15 < 1.0;
        if (((__this->fields)._bombInCooldown != bVar11) &&
           ((__this->fields)._bombInCooldown = bVar11, !bVar11)) {
          pUVar14 = (__this->fields)._tsBombReload;
          if ((pUVar14 == (UnityEngine_UI_Image_o *)0x0) ||
             (pUVar13 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
             pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_18224b3c1;
          bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar13,(MethodInfo *)0x0);
          if (!bVar11) {
            pUVar14 = (__this->fields)._tsBombBackground;
            if ((pUVar14 == (UnityEngine_UI_Image_o *)0x0) ||
               (pUVar13 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
               pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_18224b3c1;
            UnityEngine_GameObject__SetActive(pUVar13,false,(MethodInfo *)0x0);
            pUVar14 = (__this->fields)._tsBombReload;
            if ((pUVar14 == (UnityEngine_UI_Image_o *)0x0) ||
               (pUVar13 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
               pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_18224b3c1;
            UnityEngine_GameObject__SetActive(pUVar13,true,(MethodInfo *)0x0);
            pUVar14 = (__this->fields)._tsBombReload;
            if ((pUVar14 == (UnityEngine_UI_Image_o *)0x0) ||
               (__this_01 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar14,
                                       (MethodInfo_6651A0 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_Animator),
               __this_01 == (UnityEngine_Animator_o *)0x0)) goto label_18224b3c1;
            UnityEngine_Animator__Update(__this_01,0.0,(MethodInfo *)0x0);
            (__this->fields)._reloadAnimationTimeLeft = 0.5;
          }
        }
        pUVar14 = (__this->fields)._tsBombBackground;
        if ((pUVar14 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar13 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_18224b3c1;
        bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar13,(MethodInfo *)0x0);
        if (bVar11) {
          return;
        }
        if (0.0 < (__this->fields)._reloadAnimationTimeLeft) {
          return;
        }
        pUVar14 = (__this->fields)._tsBombReload;
        if ((pUVar14 == (UnityEngine_UI_Image_o *)0x0) ||
           (pUVar13 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_18224b3c1;
        UnityEngine_GameObject__SetActive(pUVar13,false,(MethodInfo *)0x0);
        pUVar14 = (__this->fields)._tsBombBackground;
      }
      if ((pUVar14 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar13 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
         pUVar13 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar13,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_18224b3c1:
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$UpdatePlayerTitan
// il2cpp: void UI_HUDBottomHandler__UpdatePlayerTitan (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x18224ad00

void UI_HUDBottomHandler__UpdatePlayerTitan(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_UI_Image_c *pUVar4;
  MethodInfo *pMVar5;
  float fVar6;
  UnityEngine_Color_Fields local_18;
  
  pCVar1 = (__this->fields)._playerTitan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    fVar6 = (pCVar1->fields).CurrentSprintStamina / (pCVar1->fields).MaxSprintStamina;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    pUVar2 = (__this->fields)._staminaSlider;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
      (*(pUVar2->klass->vtable)._47_set_value.methodPtr)
                (pUVar2,fVar6,(pUVar2->klass->vtable)._47_set_value.method);
      pCVar1 = (__this->fields)._playerTitan;
      if ((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
         (pUVar3 = (__this->fields)._staminaFill, pUVar3 != (UnityEngine_UI_Image_o *)0x0)) {
        pUVar4 = pUVar3->klass;
        pMVar5 = (pUVar4->vtable)._23_set_color.method;
        if ((pCVar1->fields).CurrentSprintStamina <= 1.0) {
          local_18.r = (__this->fields).StaminaFillLowColor.fields.r;
          local_18.g = (__this->fields).StaminaFillLowColor.fields.g;
          local_18.b = (__this->fields).StaminaFillLowColor.fields.b;
          local_18.a = (__this->fields).StaminaFillLowColor.fields.a;
          (*(pUVar4->vtable)._23_set_color.methodPtr)(pUVar3,(UnityEngine_Color_o *)&local_18,pMVar5);
          return;
        }
        local_18.r = (__this->fields).StaminaFillNormalColor.fields.r;
        local_18.g = (__this->fields).StaminaFillNormalColor.fields.g;
        local_18.b = (__this->fields).StaminaFillNormalColor.fields.b;
        local_18.a = (__this->fields).StaminaFillNormalColor.fields.a;
        (*(pUVar4->vtable)._23_set_color.methodPtr)(pUVar3,(UnityEngine_Color_o *)&local_18,pMVar5);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.HUDBottomHandler$$.ctor
// il2cpp: void UI_HUDBottomHandler___ctor (UI_HUDBottomHandler_o* __this, const MethodInfo* method);
// 0x18224b730

void UI_HUDBottomHandler___ctor(UI_HUDBottomHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Image__Animator__o *__this_00;
  
  if (Il2CppMethodInitialized_184347274 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_Image_Animator)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347274 = '\x01';
  }
  (__this->fields).FillLowColor.fields.r = 1.0;
  (__this->fields).FillVeryLowColor.fields.b = 0.0;
  (__this->fields).FillLowColor.fields.g = 0.5;
  (__this->fields).FillLowColor.fields.b = 0.0;
  (__this->fields).FillLowColor.fields.a = 0.5;
  (__this->fields).BackgroundLowColor.fields.r = 1.0;
  (__this->fields).BackgroundLowColor.fields.g = 0.75;
  (__this->fields).BackgroundLowColor.fields.b = 0.5;
  (__this->fields).BackgroundLowColor.fields.a = 1.0;
  (__this->fields).FillVeryLowColor.fields.r = 1.0;
  (__this->fields).FillVeryLowColor.fields.g = 0.0;
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
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentSpecialIcon,"");
  (__this->fields)._newSpecialIcon = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newSpecialIcon,"");
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Image_Animator);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Image_Animator_ctor);
  (__this->fields)._AnimationCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._AnimationCache,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


