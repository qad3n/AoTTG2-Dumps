// Type: Controllers.HumanPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/HumanPlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/HumanPlayerController.cs
// --------------------------------

// Controllers.HumanPlayerController$$Awake
// il2cpp: void Controllers_HumanPlayerController__Awake (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x4297580

void Controllers_HumanPlayerController__Awake(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  Il2CppObject *pIVar4;
  Characters_AnimationHandler_o *__this_00;
  UnityEngine_Camera_o *pUVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  code *pcVar9;
  System_String_c *pSVar10;
  Characters_BaseUseable_o *__this_01;
  Il2CppMethodPointer pIVar11;
  UnityEngine_Transform_o *pUVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  char cVar19;
  bool_conflict bVar20;
  int32_t iVar21;
  uint uVar22;
  Characters_Human_o *method_00;
  undefined8 uVar23;
  System_String_Fields SVar24;
  System_String_o *pSVar25;
  System_String_o *str0;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  System_String_Fields unaff_RBX;
  undefined1 *puVar29;
  undefined8 unaff_RBP;
  System_String_Fields *pSVar30;
  undefined4 *puVar31;
  System_String_Fields SVar32;
  long *plVar33;
  System_String_o **ppSVar34;
  long *__this_02;
  MethodInfo_30D4480 **unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulong unaff_R15;
  float fVar35;
  float fVar36;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar37;
  undefined4 extraout_XMM0_Dc;
  undefined8 extraout_XMM0_Qb;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar38 [16];
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 extraout_var [12];
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar42 [16];
  undefined8 extraout_XMM0_Qb_08;
  undefined1 extraout_var_01 [12];
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 extraout_var_02 [12];
  undefined1 auVar46 [16];
  undefined8 extraout_XMM0_Qb_12;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined4 uVar59;
  UnityEngine_Quaternion_o UVar60;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o UVar61;
  UnityEngine_Vector3_Fields UVar62;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o origin_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_11;
  
  puVar29 = &stack0xfffffffffffffff8;
  if (g_data_057add01 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057add01 = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,method);
  method_00 = (Characters_Human_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Human_GetComponent_Human);
  SVar32 = (System_String_Fields)&(__this->fields)._human;
  (__this->fields)._human = method_00;
  il2cpp_runtime_helper_022b4080();
  lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar26 == 0) {
    uVar23 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = (System_String_Fields)__this;
  }
  else {
    method_00 = *(Characters_Human_o **)(lVar26 + 0x28);
    (__this->fields)._humanInput = (Settings_HumanInputSettings_o *)method_00;
    uVar23 = il2cpp_runtime_helper_022b4080(&(__this->fields)._humanInput);
    puVar29 = (undefined1 *)register0x00000020;
    SVar32 = (System_String_Fields)__this;
  }
  *(ulong *)(puVar29 + -8) = unaff_R15;
  *(undefined8 *)(puVar29 + -0x10) = unaff_R14;
  *(MethodInfo_30D4480 ***)(puVar29 + -0x18) = unaff_R12;
  *(System_String_Fields *)(puVar29 + -0x20) = unaff_RBX;
  *(undefined8 *)(puVar29 + -0x28) = uVar23;
  plVar33 = (long *)SVar32;
  if (g_data_057add02 == '\0') {
    *(undefined8 *)(puVar29 + -0x30) = 0x4297630;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)(puVar29 + -0x30) = 0x429763c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)(puVar29 + -0x30) = 0x4297648;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Characters_HumanDashDirection_Settings_Keyb);
    *(undefined8 *)(puVar29 + -0x30) = 0x4297654;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Characters_HumanDashDirection_System_Single);
    *(undefined8 *)(puVar29 + -0x30) = 0x4297660;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_HumanDashDirection_KeybindSetting);
    *(undefined8 *)(puVar29 + -0x30) = 0x429766c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_HumanDashDirection_float);
    plVar33 = &TypeInfo_SettingsManager;
    *(undefined8 *)(puVar29 + -0x30) = 0x4297678;
    il2cpp_runtime_helper_023445d0();
    g_data_057add02 = '\x01';
  }
  lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar26 != 0) {
    unaff_R15 = *(ulong *)(lVar26 + 0x20);
    *(undefined8 *)(puVar29 + -0x30) = 0x42976b0;
    unaff_RBX = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_HumanDashDirection_KeybindSetting);
    *(undefined8 *)(puVar29 + -0x30) = 0x42976c5;
    method_00 = MethodInfo_Dictionary_2_Characters_HumanDashDirection_Settings_Keyb;
    plVar33 = (long *)unaff_RBX;
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)unaff_RBX,
               (MethodInfo_30D3800 *)MethodInfo_Dictionary_2_Characters_HumanDashDirection_Settings_Keyb);
    if ((unaff_R15 != 0) && (unaff_RBX != (System_String_Fields)0x0)) {
      pIVar4 = *(Il2CppObject **)(unaff_R15 + 0x20);
      unaff_R12 = &MethodInfo_Void_Add;
      *(undefined8 *)(puVar29 + -0x30) = 0x42976f3;
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)unaff_RBX,1,pIVar4,MethodInfo_Void_Add);
      pIVar4 = *(Il2CppObject **)(unaff_R15 + 0x28);
      *(undefined8 *)(puVar29 + -0x30) = 0x4297708;
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)unaff_RBX,2,pIVar4,MethodInfo_Void_Add);
      pIVar4 = *(Il2CppObject **)(unaff_R15 + 0x30);
      *(undefined8 *)(puVar29 + -0x30) = 0x429771d;
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)unaff_RBX,3,pIVar4,MethodInfo_Void_Add);
      pIVar4 = *(Il2CppObject **)(unaff_R15 + 0x38);
      *(undefined8 *)(puVar29 + -0x30) = 0x4297732;
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)unaff_RBX,4,pIVar4,MethodInfo_Void_Add);
      *(System_String_Fields *)((long)SVar32 + 0x78) = unaff_RBX;
      *(undefined8 *)(puVar29 + -0x30) = 0x4297742;
      il2cpp_runtime_helper_022b4080((System_String_o **)((long)SVar32 + 0x78),unaff_RBX);
      *(undefined8 *)(puVar29 + -0x30) = 0x4297751;
      SVar24 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_HumanDashDirection_float);
      *(undefined8 *)(puVar29 + -0x30) = 0x4297766;
      method_00 = MethodInfo_Dictionary_2_Characters_HumanDashDirection_System_Single;
      plVar33 = (long *)SVar24;
      System_Collections_Generic_Dictionary_Int32Enum__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)SVar24,
                 (MethodInfo_30D7140 *)MethodInfo_Dictionary_2_Characters_HumanDashDirection_System_Single);
      unaff_RBX._stringLength = 0;
      unaff_RBX._firstChar = 0;
      unaff_RBX._6_2_ = 0;
      if (SVar24 != (System_String_Fields)0x0) {
        *(undefined8 *)(puVar29 + -0x30) = 0x429778e;
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)SVar24,1,-1.0,MethodInfo_Void_Add);
        *(undefined8 *)(puVar29 + -0x30) = 0x42977a6;
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)SVar24,2,-1.0,MethodInfo_Void_Add);
        *(undefined8 *)(puVar29 + -0x30) = 0x42977be;
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)SVar24,3,-1.0,MethodInfo_Void_Add);
        *(undefined8 *)(puVar29 + -0x30) = 0x42977d6;
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)SVar24,4,-1.0,MethodInfo_Void_Add);
        *(System_String_Fields *)((long)SVar32 + 0x80) = SVar24;
        il2cpp_runtime_helper_022b4080((System_String_o **)((long)SVar32 + 0x80),SVar24);
        return;
      }
    }
  }
  *(undefined8 *)(puVar29 + -0x30) = 0x42977fc;
  uVar23 = il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar29 + -0x30) = uVar23;
  if (*(System_String_o **)((long)plVar33 + 0x58) != (System_String_o *)0x0) {
    if (*(char *)&(*(System_String_o **)((long)plVar33 + 0x58))[0xd].monitor == '\0') {
      return;
    }
    Controllers_BasePlayerController__Update
              ((Controllers_BasePlayerController_o *)plVar33,(MethodInfo *)method_00);
    return;
  }
  *(code **)(puVar29 + -0x38) = Controllers_HumanPlayerController__UpdateMovementInput;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)(puVar29 + -0x38) = unaff_RBP;
  *(ulong *)(puVar29 + -0x40) = unaff_R15;
  *(System_String_Fields *)(puVar29 + -0x48) = SVar32;
  *(System_String_Fields *)(puVar29 + -0x50) = unaff_RBX;
  pSVar30 = (System_String_Fields *)((ulong)method_00 & 0xffffffff);
  __this_02 = plVar33;
  if (g_data_057add03 == '\0') {
    *(undefined8 *)(puVar29 + -0x80) = 0x4297844;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownStrikeSpecial);
    *(undefined8 *)(puVar29 + -0x80) = 0x4297850;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    *(undefined8 *)(puVar29 + -0x80) = 0x429785c;
    il2cpp_runtime_helper_023445d0(&"jump");
    ppSVar34 = &"dash";
    *(undefined8 *)(puVar29 + -0x80) = 0x4297868;
    il2cpp_runtime_helper_023445d0();
    g_data_057add03 = '\x01';
    __this_02 = (long *)ppSVar34;
  }
  if ((char)pSVar30 == '\0') {
    pSVar30 = *(System_String_Fields **)((long)plVar33 + 0x58);
    if ((System_String_Fields)pSVar30 != (System_String_Fields)0x0) {
      if ((*(char *)((long)pSVar30 + 0x68) != '\0') || (*(int *)((long)pSVar30 + 0x158) == 0xf))
      goto label_04297890;
      if ((*(System_String_o **)((long)plVar33 + 0x70) != (System_String_o *)0x0) &&
         (__this_02 = (*(System_String_o **)((long)plVar33 + 0x70))[5].monitor,
         (Settings_KeybindSetting_o *)__this_02 != (Settings_KeybindSetting_o *)0x0)) {
        *(undefined8 *)(puVar29 + -0x80) = 0x42978db;
        bVar20 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
        if ((char)bVar20 == '\0') {
label_042978f8:
          if ((*(System_String_o **)((long)plVar33 + 0x70) != (System_String_o *)0x0) &&
             (__this_02 = (*(System_String_o **)((long)plVar33 + 0x70))[6].monitor,
             (System_String_Fields)__this_02 != (System_String_Fields)0x0)) {
            SVar24._stringLength = 0;
            SVar24._firstChar = 0;
            SVar24._6_2_ = 0;
            SVar32._stringLength = 0;
            SVar32._firstChar = 0;
            SVar32._6_2_ = 0;
            *(undefined8 *)(puVar29 + -0x80) = 0x4297921;
            bVar20 = Settings_KeybindSetting__GetKey
                               ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
            if ((char)bVar20 != '\0') {
              if (*(System_String_o **)((long)plVar33 + 0x58) == (System_String_o *)0x0) goto label_04297e5b;
              SVar24._1_7_ = 0;
              SVar24._stringLength._0_1_ =
                   (*(System_String_o **)((long)plVar33 + 0x58))[0xb].fields._stringLength == 0;
            }
label_0429793d:
            SVar32 = SVar24;
            *(char *)((long)pSVar30 + 0x21c) = (char)SVar32._stringLength;
            pSVar25 = *(System_String_o **)((long)plVar33 + 0x58);
            if (pSVar25 != (System_String_o *)0x0) {
              if (pSVar25[0xb].fields._stringLength != 1) {
                iVar3 = *(int *)&pSVar25[0xe].monitor;
                if (*(char *)((long)&pSVar25[8].klass + 4) == '\0') {
                  if (iVar3 == 8) {
                    return;
                  }
                  if (iVar3 == 9) {
                    if (pSVar25[10].monitor == (long *)0x0) {
                      return;
                    }
                    lVar26 = *(long *)pSVar25[10].monitor;
                    bVar2 = (byte)TypeInfo_DownStrikeSpecial[0xc].fields._stringLength;
                    if ((*(byte *)(lVar26 + 0x130) < bVar2) ||
                       (pSVar30 = *(System_String_Fields **)(lVar26 + 200),
                       ((System_String_o **)((long)pSVar30 + -8))[bVar2] != TypeInfo_DownStrikeSpecial)) {
                      if (*(byte *)(lVar26 + 0x130) < *(byte *)(TypeInfo_StockSpecial + 0x130)) {
                        return;
                      }
                      if (*(long *)(*(long *)(lVar26 + 200) + -8 + (ulong)*(byte *)(TypeInfo_StockSpecial + 0x130) * 8)
                          != TypeInfo_StockSpecial) {
                        return;
                      }
                    }
                  }
                  __this_02 = pSVar25[7].monitor;
                  if ((System_String_Fields)__this_02 != (System_String_Fields)0x0) {
                    *(undefined8 *)(puVar29 + -0x80) = 0x4297d15;
                    bVar20 = Characters_AnimationHandler__IsPlaying
                                       ((Characters_AnimationHandler_o *)__this_02,"dash",
                                        (MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      return;
                    }
                    if (*(System_String_o **)((long)plVar33 + 0x58) != (System_String_o *)0x0) {
                      __this_00 = (*(System_String_o **)((long)plVar33 + 0x58))[7].monitor;
                      __this_02._0_4_ = 0;
                      __this_02._4_2_ = 0;
                      __this_02._6_2_ = 0;
                      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
                        *(undefined8 *)(puVar29 + -0x80) = 0x4297d4b;
                        bVar20 = Characters_AnimationHandler__IsPlaying
                                           (__this_00,"jump",(MethodInfo *)0x0);
                        if ((char)bVar20 != '\0') {
                          return;
                        }
                        __this_02 = *(long **)((long)plVar33 + 0x58);
                        if ((System_String_Fields)__this_02 != (System_String_Fields)0x0) {
                          *(undefined8 *)(puVar29 + -0x80) = 0x4297d67;
                          bVar20 = Characters_Human__IsFiringThunderspear
                                             ((Characters_Human_o *)__this_02,(MethodInfo *)0x0);
                          if ((char)bVar20 != '\0') {
                            return;
                          }
                          goto label_0429795e;
                        }
                      }
                    }
                  }
                  goto label_04297e5b;
                }
                if (iVar3 != 0) {
                  return;
                }
              }
label_0429795e:
              if ((*(System_String_o **)((long)plVar33 + 0x20) != (System_String_o *)0x0) &&
                 (__this_02 = *(long **)&(*(System_String_o **)((long)plVar33 + 0x20))[3].fields,
                 (System_String_Fields)__this_02 != (System_String_Fields)0x0)) {
                *(undefined8 *)(puVar29 + -0x80) = 0x4297981;
                bVar20 = Settings_KeybindSetting__GetKeyDown
                                   ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
                if ((char)bVar20 != '\0') {
                  *(byte *)((long)plVar33 + 0x48) = *(byte *)((long)plVar33 + 0x48) ^ 1;
                }
                if ((*(System_String_o **)((long)plVar33 + 0x20) != (System_String_o *)0x0) &&
                   (__this_02 = (*(System_String_o **)((long)plVar33 + 0x20))[1].monitor,
                   (System_String_Fields)__this_02 != (System_String_Fields)0x0)) {
                  *(undefined8 *)(puVar29 + -0x80) = 0x42979ac;
                  bVar20 = Settings_KeybindSetting__GetKey
                                     ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
                  SVar32._stringLength = 1;
                  SVar32._firstChar = 0;
                  SVar32._6_2_ = 0;
                  if ((char)bVar20 == '\0') {
                    if ((*(System_String_o **)((long)plVar33 + 0x20) == (System_String_o *)0x0) ||
                       (__this_02 = *(long **)&(*(System_String_o **)((long)plVar33 + 0x20))[1].fields,
                       (System_String_Fields)__this_02 == (System_String_Fields)0x0)) goto label_04297e5b;
                    *(undefined8 *)(puVar29 + -0x80) = 0x42979d9;
                    uVar22 = Settings_KeybindSetting__GetKey
                                       ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
                    SVar32._stringLength = -(uVar22 & 0xff);
                    SVar32._4_4_ = 0;
                  }
                  if ((*(System_String_o **)((long)plVar33 + 0x20) != (System_String_o *)0x0) &&
                     (__this_02 = (long *)(*(System_String_o **)((long)plVar33 + 0x20))[2].klass,
                     (System_String_Fields)__this_02 != (System_String_Fields)0x0)) {
                    *(undefined8 *)(puVar29 + -0x80) = 0x4297a03;
                    bVar20 = Settings_KeybindSetting__GetKey
                                       ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
                    uVar28 = 0xffffffff;
                    if ((char)bVar20 == '\0') {
                      if ((*(System_String_o **)((long)plVar33 + 0x20) == (System_String_o *)0x0) ||
                         (__this_02 = (*(System_String_o **)((long)plVar33 + 0x20))[2].monitor,
                         (System_String_Fields)__this_02 == (System_String_Fields)0x0)) goto label_04297e5b;
                      *(undefined8 *)(puVar29 + -0x80) = 0x4297a57;
                      uVar22 = Settings_KeybindSetting__GetKey
                                         ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
                      uVar28 = (ulong)(uVar22 & 0xff);
                      if ((SVar32._stringLength != 0) || ((char)uVar22 != '\0')) goto label_04297a0c;
                      cVar19 = *(char *)((long)plVar33 + 0x48);
                      uVar28 = 0;
                    }
                    else {
label_04297a0c:
                      *(undefined1 *)((long)plVar33 + 0x48) = 0;
                      cVar19 = '\0';
                    }
                    unaff_R15 = 0;
                    if (cVar19 == '\0') {
                      unaff_R15 = uVar28;
                    }
                    pSVar30._0_4_ = 1;
                    pSVar30._4_2_ = 0;
                    pSVar30._6_2_ = 0;
                    if (cVar19 == '\0') {
                      pSVar30 = (System_String_Fields *)SVar32;
                    }
                    SVar32 = *(System_String_Fields *)((long)plVar33 + 0x38);
                    if ((int)pSVar30 == 0 && (int)unaff_R15 == 0) {
                      if (SVar32 != (System_String_Fields)0x0) {
                        *(undefined1 *)((long)SVar32 + 0xcc) = 0;
                        if (*(System_String_o **)((long)plVar33 + 0x58) != (System_String_o *)0x0) {
                          *(undefined4 *)&(*(System_String_o **)((long)plVar33 + 0x58))[0x16].monitor = 0;
                          return;
                        }
                      }
                    }
                    else {
                      if (g_data_057adcc8 == '\0') {
                        __this_02 = &TypeInfo_SceneLoader;
                        *(undefined8 *)(puVar29 + -0x80) = 0x4297a9e;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057adcc8 = '\x01';
                      }
                      lVar26 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                      if ((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x28), lVar26 != 0)) {
                        pUVar12 = *(UnityEngine_Transform_o **)(lVar26 + 0x10);
                        __this_02._0_4_ = 0;
                        __this_02._4_2_ = 0;
                        __this_02._6_2_ = 0;
                        if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                          *(undefined8 *)(puVar29 + -0x80) = 0x4297ae4;
                          UVar60 = UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
                          *(undefined8 *)(puVar29 + -0x80) = 0x4297aeb;
                          UVar61 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar60,(MethodInfo *)0x0);
                          euler.fields.x = UVar61.fields.x * 57.29578;
                          euler.fields.y = UVar61.fields.y * 57.29578;
                          euler.fields.z = UVar61.fields.z * 57.29578;
                          __this_02._0_4_ = 0;
                          __this_02._4_2_ = 0;
                          __this_02._6_2_ = 0;
                          *(undefined8 *)(puVar29 + -0x80) = 0x4297b01;
                          UVar61 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
                          fVar36 = (float)(int)pSVar30;
                          *(long *)(puVar29 + -0x68) = UVar61.fields._0_8_;
                          *(undefined8 *)(puVar29 + -0x60) = extraout_XMM0_Qb;
                          fVar35 = (float)(int)unaff_R15;
                          *(float *)(puVar29 + -0x70) = fVar36;
                          *(float *)(puVar29 + -0x6c) = fVar35;
                          *(undefined8 *)(puVar29 + -0x80) = 0x4297b26;
                          fVar35 = atan2f(fVar36,fVar35);
                          if (SVar32 != (System_String_Fields)0x0) {
                            *(float *)((long)SVar32 + 200) =
                                 fVar35 * -57.29578 + *(float *)(puVar29 + -100) + 90.0;
                            if (*(System_String_o **)((long)plVar33 + 0x38) != (System_String_o *)0x0) {
                              *(undefined1 *)
                               ((long)&(*(System_String_o **)((long)plVar33 + 0x38))[8].monitor + 4) = 1;
                              if (g_data_057a6841 == '\0') {
                                *(undefined8 *)(puVar29 + -0x80) = 0x4297b7e;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                g_data_057a6841 = '\x01';
                              }
                              pSVar30 = &TypeInfo_Math;
                              __this_02 = (long *)TypeInfo_Math;
                              if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                                *(undefined8 *)(puVar29 + -0x80) = 0x4297b9e;
                                il2cpp_runtime_helper_02337ed0();
                              }
                              fVar35 = *(float *)(puVar29 + -0x70) * *(float *)(puVar29 + -0x70) +
                                       *(float *)(puVar29 + -0x6c) * *(float *)(puVar29 + -0x6c) + 0.0;
                              *(float *)(puVar29 + -0x70) = fVar35;
                              if (fVar35 < 0.0) {
                                *(undefined8 *)(puVar29 + -0x80) = 0x4297c10;
                                fVar35 = sqrtf(fVar35);
                                if (fVar35 <= 0.95) goto label_04297c37;
label_04297c1d:
                                fVar36 = 1.0;
                                pSVar25 = *(System_String_o **)((long)plVar33 + 0x58);
                              }
                              else {
                                if (0.95 < SQRT(fVar35)) goto label_04297c1d;
label_04297c37:
                                if (g_data_057a6841 == '\0') {
                                  *(undefined8 *)(puVar29 + -0x80) = 0x4297d80;
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                  g_data_057a6841 = '\x01';
                                  if (*(int *)((long)TypeInfo_Math + 0xe4) != 0) goto label_04297c55;
label_04297d98:
                                  *(undefined8 *)(puVar29 + -0x80) = 0x4297d9d;
                                  __this_02 = (long *)TypeInfo_Math;
                                  il2cpp_runtime_helper_02337ed0();
                                  fVar35 = *(float *)(puVar29 + -0x70);
                                  if (0.0 <= fVar35) goto label_04297c67;
label_04297daf:
                                  *(undefined8 *)(puVar29 + -0x80) = 0x4297db4;
                                  fVar35 = sqrtf(fVar35);
                                }
                                else {
                                  if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) goto label_04297d98;
label_04297c55:
                                  fVar35 = *(float *)(puVar29 + -0x70);
                                  __this_02 = (long *)TypeInfo_Math;
                                  if (fVar35 < 0.0) goto label_04297daf;
label_04297c67:
                                  fVar35 = SQRT(fVar35);
                                }
                                fVar36 = 0.0;
                                if (0.25 <= fVar35) {
                                  if (g_data_057a6841 == '\0') {
                                    *(undefined8 *)(puVar29 + -0x80) = 0x4297dd5;
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                    g_data_057a6841 = '\x01';
                                  }
                                  __this_02 = (long *)TypeInfo_Math;
                                  if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                                    *(undefined8 *)(puVar29 + -0x80) = 0x4297dee;
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  fVar36 = *(float *)(puVar29 + -0x70);
                                  if (fVar36 < 0.0) {
                                    *(undefined8 *)(puVar29 + -0x80) = 0x4297e16;
                                    fVar36 = sqrtf(fVar36);
                                    goto label_04297e19;
                                  }
                                  fVar36 = SQRT(fVar36);
                                  pSVar25 = *(System_String_o **)((long)plVar33 + 0x58);
                                }
                                else {
label_04297e19:
                                  pSVar25 = *(System_String_o **)((long)plVar33 + 0x58);
                                }
                              }
                              if (pSVar25 != (System_String_o *)0x0) {
                                if ((((*(char *)((long)&pSVar25[0x16].monitor + 4) != '\0') &&
                                     (pSVar25[0xb].fields._stringLength == 0)) &&
                                    (*(int *)&pSVar25[0xe].monitor == 0)) &&
                                   (*(char *)((long)&pSVar25[8].klass + 4) != '\0')) {
                                  fVar36 = fVar36 * 0.25;
                                }
                                *(float *)&pSVar25[0x16].monitor = fVar36;
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
        else if (*(System_String_o **)((long)plVar33 + 0x58) != (System_String_o *)0x0) {
          SVar32._stringLength._0_1_ = 1;
          SVar24 = SVar32;
          if ((*(System_String_o **)((long)plVar33 + 0x58))[0xb].fields._stringLength != 1) goto label_042978f8;
          goto label_0429793d;
        }
      }
    }
  }
  else {
label_04297890:
    if (*(char *)((long)plVar33 + 0x48) != '\0') {
      return;
    }
    if (*(System_String_o **)((long)plVar33 + 0x58) != (System_String_o *)0x0) {
      *(undefined1 *)((long)&(*(System_String_o **)((long)plVar33 + 0x58))[8].monitor + 4) = 0;
      return;
    }
  }
label_04297e5b:
  *(code **)(puVar29 + -0x80) = Controllers_HumanPlayerController__UpdateUI;
  il2cpp_runtime_helper_022b2c90();
  *(System_String_Fields **)(puVar29 + -0x80) = pSVar30;
  *(ulong *)(puVar29 + -0x88) = unaff_R15;
  *(System_String_Fields *)(puVar29 + -0x90) = SVar32;
  *(undefined8 *)(puVar29 + -0x98) = unaff_R13;
  *(MethodInfo_30D4480 ***)(puVar29 + -0xa0) = unaff_R12;
  *(long **)(puVar29 + -0xa8) = plVar33;
  if (g_data_057add04 == '\0') {
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297e8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297e99;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297ea5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297eb1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297ebd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297ec9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297ed5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297ee1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297eed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297ef9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f05;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f1d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f29;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f35;
    il2cpp_runtime_helper_023445d0(&"\n");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f41;
    il2cpp_runtime_helper_023445d0(&"<color=#FF0000>");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f4d;
    il2cpp_runtime_helper_023445d0(&"F2");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f59;
    il2cpp_runtime_helper_023445d0(&"Blade");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f65;
    il2cpp_runtime_helper_023445d0(&"K");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f71;
    il2cpp_runtime_helper_023445d0(&"DamageMultiplier");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f7d;
    il2cpp_runtime_helper_023445d0(&"<color=#008000>READY</color>");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f89;
    il2cpp_runtime_helper_023445d0(&"APG");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297f95;
    il2cpp_runtime_helper_023445d0(&" | ");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297fa1;
    il2cpp_runtime_helper_023445d0(&"F1");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297fad;
    il2cpp_runtime_helper_023445d0(&"</color>");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297fb9;
    il2cpp_runtime_helper_023445d0(&"AHSS");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297fc5;
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297fd1;
    il2cpp_runtime_helper_023445d0(&"???");
    *(undefined8 *)(puVar29 + -0x2b8) = 0x4297fdd;
    il2cpp_runtime_helper_023445d0(&" u/s");
    g_data_057add04 = '\x01';
  }
  *(undefined8 *)(puVar29 + -0xc4) = 0;
  *(undefined8 *)(puVar29 + -0xbc) = 0;
  *(undefined8 *)(puVar29 + -0xd0) = 0;
  *(undefined8 *)(puVar29 + -200) = 0;
  *(undefined8 *)(puVar29 + -0xe0) = 0;
  *(undefined8 *)(puVar29 + -0xd8) = 0;
  *(undefined4 *)(puVar29 + -0x294) = 0;
  *(undefined4 *)(puVar29 + -0x234) = 0;
  *(undefined4 *)(puVar29 + -0x254) = 0;
  *(undefined4 *)(puVar29 + -0x238) = 0;
  *(undefined8 *)(puVar29 + -0x1e0) = 0;
  *(undefined8 *)(puVar29 + -0x1d8) = 0;
  *(undefined8 *)(puVar29 + -0x1d0) = 0;
  *(undefined8 *)(puVar29 + -0x200) = 0;
  *(undefined8 *)(puVar29 + -0x1f8) = 0;
  *(undefined8 *)(puVar29 + -0x1f0) = 0;
  *(undefined8 *)(puVar29 + -0x160) = 0;
  *(undefined8 *)(puVar29 + -0x158) = 0;
  *(undefined8 *)(puVar29 + -0x150) = 0;
  *(undefined8 *)(puVar29 + -0x180) = 0;
  *(undefined8 *)(puVar29 + -0x178) = 0;
  *(undefined8 *)(puVar29 + -0x170) = 0;
  lVar26 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar26 != 0) {
    pUVar5 = *(UnityEngine_Camera_o **)(lVar26 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      *(undefined8 *)(puVar29 + -0x2b8) = 0x42980ab;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar29 + -0x2b8) = 0x42980b2;
    UVar61 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Camera_o *)0x0) {
      *(undefined8 *)(puVar29 + -0x2b8) = 0x42980cd;
      UnityEngine_Camera__ScreenPointToRay_4db37e0
                ((UnityEngine_Ray_o *)(puVar29 + -0xf8),pUVar5,UVar61,(MethodInfo *)0x0);
      pSVar25 = "???";
      *(undefined8 *)(puVar29 + -400) = *(undefined8 *)(puVar29 + -0xe8);
      *(undefined8 *)(puVar29 + -0x1a0) = *(undefined8 *)(puVar29 + -0xf8);
      *(undefined8 *)(puVar29 + -0x198) = *(undefined8 *)(puVar29 + -0xf0);
      pSVar6 = *(System_String_array **)((long)__this_02 + 0x58);
      if (pSVar6 != (System_String_array *)0x0) {
        str0 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)((long)pSVar6->m_Items + 0xfc) == 1) {
          *(undefined8 *)(puVar29 + -0x1f0) = *(undefined8 *)(puVar29 + -400);
          *(undefined8 *)(puVar29 + -0x200) = *(undefined8 *)(puVar29 + -0x1a0);
          *(undefined8 *)(puVar29 + -0x1f8) = *(undefined8 *)(puVar29 + -0x198);
          pSVar7 = pSVar6->m_Items[0x2b];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar29 + -0x2b8) = 0x4298168;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar29 + -0x2b8) = 0x4298174;
          bVar20 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pSVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar20 == '\0') {
            *(undefined8 *)(puVar29 + -0x1d0) = *(undefined8 *)(puVar29 + -0x1f0);
            *(undefined8 *)(puVar29 + -0x1e0) = *(undefined8 *)(puVar29 + -0x200);
            *(undefined8 *)(puVar29 + -0x1d8) = *(undefined8 *)(puVar29 + -0x1f8);
            if (*(System_String_array **)((long)__this_02 + 0x58) != (System_String_array *)0x0) {
              pSVar7 = (*(System_String_array **)((long)__this_02 + 0x58))->m_Items[10];
              goto joined_r0x04298280;
            }
          }
          else {
            *(undefined8 *)(puVar29 + -0x150) = *(undefined8 *)(puVar29 + -0x1f0);
            *(undefined8 *)(puVar29 + -0x160) = *(undefined8 *)(puVar29 + -0x200);
            *(undefined8 *)(puVar29 + -0x158) = *(undefined8 *)(puVar29 + -0x1f8);
            if ((*(System_String_array **)((long)__this_02 + 0x58) != (System_String_array *)0x0) &&
               (pSVar7 = (*(System_String_array **)((long)__this_02 + 0x58))->m_Items[0x2b],
               pSVar7 != (System_String_o *)0x0)) {
              if (g_data_057a6841 == '\0') {
                *(undefined8 *)(puVar29 + -0x2b8) = 0x42981ce;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6841 = '\x01';
              }
              fVar37 = (float)pSVar7[0x10].fields._stringLength;
              fVar35 = *(float *)&pSVar7[0x10].fields._firstChar;
              fVar36 = *(float *)&pSVar7[0x11].klass;
              if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                *(float *)(puVar29 + -0x280) = fVar35;
                *(undefined1 (*) [16])(puVar29 + -0x270) = ZEXT416((uint)fVar36);
                *(float *)(puVar29 + -0x290) = fVar37;
                *(undefined8 *)(puVar29 + -0x2b8) = 0x4298216;
                il2cpp_runtime_helper_02337ed0();
                fVar37 = *(float *)(puVar29 + -0x290);
                fVar36 = SUB164(*(undefined1 (*) [16])(puVar29 + -0x270),0);
                fVar35 = *(float *)(puVar29 + -0x280);
              }
              puVar31 = (undefined4 *)(puVar29 + -0x160);
              fVar35 = fVar36 * fVar36 + fVar35 * fVar35 + fVar37 * fVar37;
              if (0.0 <= fVar35) goto label_04298371;
label_0429824f:
              *(undefined8 *)(puVar29 + -0x2b8) = 0x4298254;
              fVar35 = sqrtf(fVar35);
              goto label_04298375;
            }
          }
        }
        else {
          *(undefined8 *)(puVar29 + -0x1d0) = *(undefined8 *)(puVar29 + -400);
          *(undefined8 *)(puVar29 + -0x1e0) = *(undefined8 *)(puVar29 + -0x1a0);
          *(undefined8 *)(puVar29 + -0x1d8) = *(undefined8 *)(puVar29 + -0x198);
          pSVar7 = pSVar6->m_Items[10];
joined_r0x04298280:
          if ((pSVar7 != (System_String_o *)0x0) &&
             (pSVar10 = pSVar7[1].klass, pSVar10 != (System_String_c *)0x0)) {
            *(undefined8 *)(puVar29 + -0x2b8) = 0x42982d5;
            UVar61 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)pSVar10,(MethodInfo *)0x0)
            ;
            fVar35 = UVar61.fields.z;
            auVar57._8_4_ = extraout_XMM0_Dc;
            auVar57._0_8_ = UVar61.fields._0_8_;
            auVar57._12_4_ = extraout_XMM0_Dd;
            if (g_data_057a6841 == '\0') {
              *(float *)(puVar29 + -0x280) = fVar35;
              *(undefined1 (*) [16])(puVar29 + -0x290) = auVar57;
              *(undefined8 *)(puVar29 + -0x2b8) = 0x42982f8;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              auVar57 = *(undefined1 (*) [16])(puVar29 + -0x290);
              fVar35 = *(float *)(puVar29 + -0x280);
              g_data_057a6841 = '\x01';
            }
            auVar38._4_4_ = auVar57._4_4_;
            auVar38._0_4_ = auVar38._4_4_;
            auVar38._8_4_ = auVar57._8_4_;
            auVar38._12_4_ = auVar57._12_4_;
            if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
              *(float *)(puVar29 + -0x280) = fVar35;
              *(undefined1 (*) [16])(puVar29 + -0x270) = auVar38;
              *(undefined1 (*) [16])(puVar29 + -0x290) = auVar57;
              *(undefined8 *)(puVar29 + -0x2b8) = 0x4298339;
              il2cpp_runtime_helper_02337ed0();
              auVar57 = *(undefined1 (*) [16])(puVar29 + -0x290);
              auVar38 = *(undefined1 (*) [16])(puVar29 + -0x270);
              fVar35 = *(float *)(puVar29 + -0x280);
            }
            puVar31 = (undefined4 *)(puVar29 + -0x1e0);
            fVar35 = auVar38._0_4_ * auVar38._0_4_ + auVar57._0_4_ * auVar57._0_4_ + fVar35 * fVar35;
            if (fVar35 < 0.0) goto label_0429824f;
label_04298371:
            fVar35 = SQRT(fVar35);
label_04298375:
            *(undefined8 *)(puVar29 + -0x170) = *(undefined8 *)(puVar31 + 4);
            uVar47 = *puVar31;
            fVar36 = (float)puVar31[1];
            uVar49 = puVar31[2];
            uVar50 = puVar31[3];
            *(undefined4 *)(puVar29 + -0x180) = uVar47;
            *(float *)(puVar29 + -0x17c) = fVar36;
            *(undefined4 *)(puVar29 + -0x178) = uVar49;
            *(undefined4 *)(puVar29 + -0x174) = uVar50;
            *(float *)(puVar29 + -0x294) = fVar35;
            if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0x2b8) = 0x42983ac;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar23 = *(undefined8 *)(TypeInfo_HumanPlayerController + 0xb8);
            *(undefined8 *)(puVar29 + -0x2b8) = 0x42983be;
            iVar21 = UnityEngine_LayerMask__get_value
                               ((UnityEngine_LayerMask_Fields)(int32_t)uVar23,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
              *(undefined8 *)(puVar29 + -0x2b8) = 0x42983d8;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar29 + -0x2a0) = *(undefined8 *)(puVar29 + -0x170);
            *(undefined8 *)(puVar29 + -0x2b0) = *(undefined8 *)(puVar29 + -0x180);
            *(undefined8 *)(puVar29 + -0x2a8) = *(undefined8 *)(puVar29 + -0x178);
            *(undefined4 *)(puVar29 + -0x280) = 0x447a0000;
            *(undefined8 *)(puVar29 + -0x2b8) = 0x4298410;
            bVar20 = UnityEngine_Physics__Raycast_4e78080
                               ((UnityEngine_Ray_o)*(UnityEngine_Ray_Fields *)(puVar29 + -0x2b0),
                                (UnityEngine_RaycastHit_o *)(puVar29 + -0xe0),1000.0,iVar21,(MethodInfo *)0x0)
            ;
            if ((char)bVar20 == '\0') {
label_04298558:
              lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if ((lVar26 != 0) && (*(long *)(lVar26 + 0x88) != 0)) {
                if (*(char *)(*(long *)(lVar26 + 0x88) + 0x11) != '\0') {
                  *(undefined8 *)(puVar29 + -0x2b8) = 0x429859a;
                  str0 = System_String__Concat_3ae5ba0(str0,pSVar25,(MethodInfo *)0x0);
                  lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  if (lVar26 == 0) goto label_042993fa;
                }
                if (*(long *)(lVar26 + 0x98) != 0) {
                  iVar3 = *(int *)(*(long *)(lVar26 + 0x98) + 0x14);
                  if (iVar3 == 2) {
                    pSVar25 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                    *(undefined8 *)(puVar29 + -0x2b8) = 0x429866a;
                    bVar20 = System_String__op_Inequality(str0,pSVar25,(MethodInfo *)0x0);
                    if ((char)bVar20 != '\0') {
                      *(undefined8 *)(puVar29 + -0x2b8) = 0x4298682;
                      str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                    }
                    fVar35 = *(float *)(puVar29 + -0x294);
                    *(float *)(puVar29 + -0x254) = fVar35;
                    if (*(System_String_array **)((long)__this_02 + 0x58) != (System_String_array *)0x0) {
                      pSVar25 = (*(System_String_array **)((long)__this_02 + 0x58))->m_Items[0x1c];
                      if (pSVar25 == (System_String_o *)0x0) goto label_0429892b;
                      pSVar10 = pSVar25->klass;
                      bVar2 = (pSVar10->_2).naturalAligment;
                      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                      if ((bVar2 < bVar1) || ((pSVar10->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BladeWeapon))
                      {
                        bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
                        if ((bVar2 < bVar1) || ((pSVar10->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_AHSSWeapon)
                           ) {
                          bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
                          if ((bVar2 < bVar1) ||
                             ((pSVar10->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_APGWeapon)) {
                            bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            if ((bVar2 < bVar1) ||
                               ((pSVar10->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_ThunderspearWeapon)) {
label_0429892b:
                              if (fVar35 <= 10.0) {
                                fVar35 = 10.0;
                              }
                              *(float *)(puVar29 + -0x294) = fVar35 / 100.0;
                              *(undefined8 *)(puVar29 + -0x2b8) = 0x4298958;
                              pSVar25 = System_Single__ToString_3cccfe0
                                                  (fVar35 / 100.0,(System_String_o *)(puVar29 + -0x294),
                                                   "F1");
                              *(undefined8 *)(puVar29 + -0x2b8) = 0x429896f;
                              str0 = System_String__Concat_3af7150
                                               (str0,pSVar25,"K",(MethodInfo *)0x0);
                              if (*(System_String_array **)((long)__this_02 + 0x58) !=
                                  (System_String_array *)0x0) {
                                pSVar25 = (*(System_String_array **)((long)__this_02 + 0x58))->m_Items[0x1b];
                                if (pSVar25 != (System_String_o *)0x0) {
                                  pSVar10 = pSVar25->klass;
                                  bVar2 = (TypeInfo_AHSSTwinShot->_2).naturalAligment;
                                  if ((bVar2 <= (pSVar10->_2).naturalAligment) &&
                                     ((pSVar10->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_AHSSTwinShot)) {
                                    fVar35 = (float)(int)*(float *)(puVar29 + -0x254);
                                    if (fVar35 <= 10.0) {
                                      fVar35 = 10.0;
                                    }
                                    *(float *)(puVar29 + -0x254) = fVar35 / 100.0;
                                    *(undefined8 *)(puVar29 + -0x2b8) = 0x42989e8;
                                    pSVar25 = System_Single__ToString_3cccfe0
                                                        (fVar35 / 100.0,(System_String_o *)(puVar29 + -0x254),
                                                         "F1");
                                    *(undefined8 *)(puVar29 + -0x2b8) = 0x4298a03;
                                    str0 = System_String__Concat_3af7470
                                                     (str0," | ",pSVar25,"K",(MethodInfo *)0x0
                                                     );
                                  }
                                }
                                goto label_04298a10;
                              }
                            }
                            else {
                              lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                              if (((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x58), lVar26 != 0)) &&
                                 (lVar26 = *(long *)(lVar26 + 0x48), lVar26 != 0)) {
                                if (*(char *)(lVar26 + 0x11) != '\0') goto label_0429892b;
                                iVar3 = *(int *)(TypeInfo_CharacterData + 0xe4);
                                *(float *)(puVar29 + -0x290) = fVar35;
                                if (iVar3 == 0) {
                                  *(undefined8 *)(puVar29 + -0x2b8) = 0x42987b8;
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar33 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                                if (plVar33 != (long *)0x0) {
                                  puVar27 = &"Thunderspear";
                                  goto label_042988bf;
                                }
                              }
                            }
                          }
                          else {
                            iVar3 = *(int *)(TypeInfo_CharacterData + 0xe4);
                            *(float *)(puVar29 + -0x290) = fVar35;
                            if (iVar3 == 0) {
                              *(undefined8 *)(puVar29 + -0x2b8) = 0x429889f;
                              il2cpp_runtime_helper_02337ed0();
                            }
                            plVar33 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                            if (plVar33 != (long *)0x0) {
                              puVar27 = &"APG";
                              goto label_042988bf;
                            }
                          }
                        }
                        else {
                          iVar3 = *(int *)(TypeInfo_CharacterData + 0xe4);
                          *(float *)(puVar29 + -0x290) = fVar35;
                          if (iVar3 == 0) {
                            *(undefined8 *)(puVar29 + -0x2b8) = 0x429885f;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          plVar33 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                          if (plVar33 != (long *)0x0) {
                            puVar27 = &"AHSS";
label_042988bf:
                            uVar23 = *puVar27;
                            uVar8 = *(undefined8 *)(*plVar33 + 0x1b0);
                            pcVar9 = *(code **)(*plVar33 + 0x1a8);
                            *(undefined8 *)(puVar29 + -0x2b8) = 0x42988d2;
                            plVar33 = (long *)(*pcVar9)(plVar33,uVar23,uVar8);
                            goto joined_r0x042988d5;
                          }
                        }
                      }
                      else {
                        iVar3 = *(int *)(TypeInfo_CharacterData + 0xe4);
                        *(float *)(puVar29 + -0x290) = fVar35;
                        if (iVar3 == 0) {
                          *(undefined8 *)(puVar29 + -0x2b8) = 0x4298800;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        plVar33 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                        if (plVar33 != (long *)0x0) {
                          uVar23 = *(undefined8 *)(*plVar33 + 0x1b0);
                          pcVar9 = *(code **)(*plVar33 + 0x1a8);
                          *(undefined8 *)(puVar29 + -0x2b8) = 0x4298830;
                          plVar33 = (long *)(*pcVar9)(plVar33,"Blade",uVar23);
joined_r0x042988d5:
                          if (plVar33 != (long *)0x0) {
                            uVar23 = *(undefined8 *)(*plVar33 + 0x1b0);
                            pcVar9 = *(code **)(*plVar33 + 0x1a8);
                            *(undefined8 *)(puVar29 + -0x2b8) = 0x42988f8;
                            plVar33 = (long *)(*pcVar9)(plVar33,"DamageMultiplier",uVar23);
                            if (plVar33 != (long *)0x0) {
                              uVar23 = *(undefined8 *)(*plVar33 + 0x390);
                              pcVar9 = *(code **)(*plVar33 + 0x388);
                              *(undefined8 *)(puVar29 + -0x2b8) = 0x4298914;
                              fVar35 = (float)(*pcVar9)(plVar33,uVar23);
                              fVar35 = (float)(int)(fVar35 * *(float *)(puVar29 + -0x290));
                              *(float *)(puVar29 + -0x294) = fVar35;
                              goto label_0429892b;
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (iVar3 == 1) {
                      pSVar25 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                      *(undefined8 *)(puVar29 + -0x2b8) = 0x42985f8;
                      bVar20 = System_String__op_Inequality(str0,pSVar25,(MethodInfo *)0x0);
                      fVar35 = extraout_XMM0_Da;
                      if ((char)bVar20 != '\0') {
                        *(undefined8 *)(puVar29 + -0x2b8) = 0x4298610;
                        str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                        fVar35 = extraout_XMM0_Da_00;
                      }
                      *(undefined8 *)(puVar29 + -0x2b8) = 0x4298629;
                      pSVar25 = System_Single__ToString_3cccfe0
                                          (fVar35,(System_String_o *)(puVar29 + -0x294),"F1");
                      *(undefined8 *)(puVar29 + -0x2b8) = 0x4298640;
                      str0 = System_String__Concat_3af7150(str0,pSVar25," u/s",(MethodInfo *)0x0);
                    }
label_04298a10:
                    lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                    if ((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x48), lVar26 != 0)) {
                      if (*(char *)(lVar26 + 0x11) != '\0') {
                        lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                        if (((lVar26 == 0) || (lVar26 = *(long *)(lVar26 + 0x58), lVar26 == 0)) ||
                           (lVar26 = *(long *)(lVar26 + 0x48), lVar26 == 0)) goto label_042993fa;
                        if (*(char *)(lVar26 + 0x11) != '\0') {
                          if (*(System_String_array **)((long)__this_02 + 0x58) == (System_String_array *)0x0)
                          goto label_042993fa;
                          pSVar25 = (*(System_String_array **)((long)__this_02 + 0x58))->m_Items[0x1c];
                          if (pSVar25 != (System_String_o *)0x0) {
                            pSVar10 = pSVar25->klass;
                            bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            if ((bVar2 <= (pSVar10->_2).naturalAligment) &&
                               ((pSVar10->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_ThunderspearWeapon)) {
                              pSVar25 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                              *(undefined8 *)(puVar29 + -0x2b8) = 0x4298ae1;
                              bVar20 = System_String__op_Inequality(str0,pSVar25,(MethodInfo *)0x0);
                              if ((char)bVar20 != '\0') {
                                *(undefined8 *)(puVar29 + -0x2b8) = 0x4298af9;
                                str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                              }
                              if ((*(System_String_array **)((long)__this_02 + 0x58) ==
                                   (System_String_array *)0x0) ||
                                 (__this_01 = (Characters_BaseUseable_o *)
                                              (*(System_String_array **)((long)__this_02 + 0x58))->m_Items
                                              [0x1c], __this_01 == (Characters_BaseUseable_o *)0x0))
                              goto label_042993fa;
                              bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                              if (((__this_01->klass->_2).naturalAligment < bVar2) ||
                                 ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_ThunderspearWeapon))
                              goto label_042993ff;
                              *(undefined8 *)(puVar29 + -0x2b8) = 0x4298b4b;
                              fVar35 = Characters_BaseUseable__GetCooldownLeft(__this_01,(MethodInfo *)0x0);
                              *(float *)(puVar29 + -0x238) = fVar35;
                              uVar47 = 0;
                              fVar36 = 0.0;
                              uVar49 = 0;
                              uVar50 = 0;
                              if (fVar35 <= 0.0) {
                                *(undefined8 *)(puVar29 + -0x2b8) = 0x4298ba7;
                                str0 = System_String__Concat_3ae5ba0(str0,"<color=#008000>READY</color>",(MethodInfo *)0x0);
                              }
                              else {
                                *(undefined8 *)(puVar29 + -0x2b8) = 0x4298b6f;
                                pSVar25 = System_Single__ToString_3cccfe0
                                                    (fVar35,(System_String_o *)(puVar29 + -0x238),"F2"
                                                    );
                                *(undefined8 *)(puVar29 + -0x2b8) = 0x4298b91;
                                str0 = System_String__Concat_3af7470
                                                 (str0,"<color=#FF0000>",pSVar25,"</color>",(MethodInfo *)0x0);
                              }
                            }
                          }
                        }
                      }
                      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                        *(undefined8 *)(puVar29 + -0x2b8) = 0x4298bbc;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)(puVar29 + -0x2b8) = 0x4298bc6;
                      UI_CursorManager__SetCrosshairText(str0,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                        *(undefined8 *)(puVar29 + -0x2b8) = 0x4298bd8;
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined8 *)(puVar29 + -0x2b8) = 0x4298bf2;
                      UI_CursorManager__SetCrosshairColor
                                ((uint)(*(float *)(puVar29 + -0x280) <= 120.0),(MethodInfo *)0x0);
                      lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                      if ((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0xa8), lVar26 != 0)) {
                        if (*(char *)(lVar26 + 0x11) == '\0') {
                          return;
                        }
                        if (*(System_String_array **)((long)__this_02 + 0x58) != (System_String_array *)0x0) {
                          pIVar11 = (((*(System_String_array **)((long)__this_02 + 0x58))->obj).klass)->vtable
                                    [0x42].methodPtr;
                          *(undefined8 *)(puVar29 + -0x2b8) = 0x4298c41;
                          uVar23 = (*pIVar11)();
                          lVar26 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                          if ((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x28), lVar26 != 0)) {
                            *(undefined4 *)(puVar29 + -0x290) = uVar47;
                            *(float *)(puVar29 + -0x28c) = fVar36;
                            *(undefined4 *)(puVar29 + -0x288) = uVar49;
                            *(undefined4 *)(puVar29 + -0x284) = uVar50;
                            *(undefined8 *)(puVar29 + -0x280) = uVar23;
                            *(undefined8 *)(puVar29 + -0x278) = extraout_XMM0_Qb_01;
                            pUVar12 = *(UnityEngine_Transform_o **)(lVar26 + 0x10);
                            if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                              *(undefined8 *)(puVar29 + -0x2b8) = 0x4298c87;
                              UVar61 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
                              fVar48 = UVar61.fields.z;
                              fVar35 = UVar61.fields.x;
                              fVar37 = UVar61.fields.y;
                              uVar47 = extraout_XMM0_Dc_01;
                              uVar59 = extraout_XMM0_Dd_01;
                              if (g_data_057a68cb == '\0') {
                                *(float *)(puVar29 + -0x270) = fVar48;
                                *(float *)(puVar29 + -0x26c) = fVar36;
                                *(undefined4 *)(puVar29 + -0x268) = uVar49;
                                *(undefined4 *)(puVar29 + -0x264) = uVar50;
                                auVar15._8_4_ = extraout_XMM0_Dc_01;
                                auVar15._0_8_ = UVar61.fields._0_8_;
                                auVar15._12_4_ = extraout_XMM0_Dd_01;
                                *(undefined1 (*) [16])(puVar29 + -0x250) = auVar15;
                                *(undefined8 *)(puVar29 + -0x2b8) = 0x4298ca9;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                fVar35 = *(float *)(puVar29 + -0x250);
                                fVar37 = *(float *)(puVar29 + -0x24c);
                                uVar47 = *(undefined4 *)(puVar29 + -0x248);
                                uVar59 = *(undefined4 *)(puVar29 + -0x244);
                                fVar48 = *(float *)(puVar29 + -0x270);
                                fVar36 = *(float *)(puVar29 + -0x26c);
                                g_data_057a68cb = '\x01';
                              }
                              fVar58 = fVar37 - *(float *)(puVar29 + -0x27c);
                              fVar48 = fVar48 - *(float *)(puVar29 + -0x290);
                              fVar35 = fVar35 - *(float *)(puVar29 + -0x280);
                              fVar36 = fVar36 - *(float *)(puVar29 + -0x28c);
                              fVar51 = fVar37 - *(float *)(puVar29 + -0x27c);
                              if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                                *(float *)(puVar29 + -0x270) = fVar48;
                                *(float *)(puVar29 + -0x26c) = fVar35;
                                *(float *)(puVar29 + -0x268) = fVar36;
                                *(float *)(puVar29 + -0x264) = fVar51;
                                *(float *)(puVar29 + -0x250) = fVar58;
                                *(float *)(puVar29 + -0x24c) = fVar37;
                                *(undefined4 *)(puVar29 + -0x248) = uVar47;
                                *(undefined4 *)(puVar29 + -0x244) = uVar59;
                                *(undefined8 *)(puVar29 + -0x2b8) = 0x4298cff;
                                il2cpp_runtime_helper_02337ed0();
                                fVar58 = *(float *)(puVar29 + -0x250);
                                fVar48 = *(float *)(puVar29 + -0x270);
                                fVar35 = *(float *)(puVar29 + -0x26c);
                                fVar36 = *(float *)(puVar29 + -0x268);
                                fVar51 = *(float *)(puVar29 + -0x264);
                              }
                              fVar35 = fVar35 * fVar35;
                              fVar36 = fVar36 * fVar36;
                              fVar51 = fVar51 * fVar51;
                              fVar37 = fVar35 + fVar58 * fVar58 + fVar48 * fVar48;
                              if (fVar37 < 0.0) {
                                *(undefined8 *)(puVar29 + -0x2b8) = 0x4298d32;
                                fVar37 = sqrtf(fVar37);
                                fVar35 = extraout_XMM0_Db;
                                fVar36 = extraout_XMM0_Dc_02;
                                fVar51 = extraout_XMM0_Dd_02;
                              }
                              else {
                                fVar37 = SQRT(fVar37);
                              }
                              if ((*(System_String_array **)((long)__this_02 + 0x58) !=
                                   (System_String_array *)0x0) &&
                                 (pSVar25 = (*(System_String_array **)((long)__this_02 + 0x58))->m_Items[10],
                                 pSVar25 != (System_String_o *)0x0)) {
                                *(float *)(puVar29 + -0x230) = fVar37;
                                *(float *)(puVar29 + -0x22c) = fVar35;
                                *(float *)(puVar29 + -0x228) = fVar36;
                                *(float *)(puVar29 + -0x224) = fVar51;
                                SVar32 = pSVar25->fields;
                                if (SVar32 != (System_String_Fields)0x0) {
                                  *(undefined8 *)(puVar29 + -0x2b8) = 0x4298d79;
                                  UVar61 = UnityEngine_Transform__get_right
                                                     ((UnityEngine_Transform_o *)SVar32,(MethodInfo *)0x0);
                                  if ((*(System_String_array **)((long)__this_02 + 0x58) !=
                                       (System_String_array *)0x0) &&
                                     (pSVar25 = (*(System_String_array **)((long)__this_02 + 0x58))->m_Items
                                                [10], pSVar25 != (System_String_o *)0x0)) {
                                    *(long *)(puVar29 + -0x250) = UVar61.fields._0_8_;
                                    *(undefined8 *)(puVar29 + -0x248) = extraout_XMM0_Qb_02;
                                    *(float *)(puVar29 + -0x270) = UVar61.fields.z;
                                    SVar32 = pSVar25->fields;
                                    if (SVar32 != (System_String_Fields)0x0) {
                                      *(undefined8 *)(puVar29 + -0x2b8) = 0x4298db2;
                                      UVar61 = UnityEngine_Transform__get_right
                                                         ((UnityEngine_Transform_o *)SVar32,(MethodInfo *)0x0)
                                      ;
                                      lVar26 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                      if (lVar26 != 0) {
                                        *(long *)(puVar29 + -0x1b0) = UVar61.fields._0_8_;
                                        *(undefined8 *)(puVar29 + -0x1a8) = extraout_XMM0_Qb_03;
                                        *(float *)(puVar29 + -0x23c) = UVar61.fields.z;
                                        pUVar5 = *(UnityEngine_Camera_o **)(lVar26 + 0x20);
                                        if (pUVar5 != (UnityEngine_Camera_o *)0x0) {
                                          fVar35 = *(float *)(puVar29 + -0x228);
                                          fVar36 = *(float *)(puVar29 + -0x224);
                                          fVar58 = *(float *)(puVar29 + -0x230) *
                                                   *(float *)(&g_data_00d1d698 + (ulong)(50.0 < fVar37) * 4);
                                          *(float *)(puVar29 + -0x1c0) = fVar58;
                                          *(float *)(puVar29 + -0x1bc) = fVar58;
                                          *(float *)(puVar29 + -0x1b8) = fVar35;
                                          *(float *)(puVar29 + -0x1b4) = fVar36;
                                          fVar37 = *(float *)(puVar29 + -0x250);
                                          fVar48 = *(float *)(puVar29 + -0x24c);
                                          *(float *)(puVar29 + -0x230) = fVar58;
                                          *(undefined4 *)(puVar29 + -0x22c) =
                                               *(undefined4 *)(puVar29 + -0x22c);
                                          *(float *)(puVar29 + -0x228) = fVar35;
                                          *(float *)(puVar29 + -0x224) = fVar36;
                                          UVar61.fields.z =
                                               *(float *)(puVar29 + -0x290) -
                                               *(float *)(puVar29 + -0x270) * fVar58;
                                          *(undefined1 (*) [16])(puVar29 + -0x270) =
                                               CONCAT412(*(float *)(puVar29 + -0x274) -
                                                         *(float *)(puVar29 + -0x244) * fVar36,
                                                         CONCAT48(*(float *)(puVar29 + -0x278) -
                                                                  *(float *)(puVar29 + -0x248) * fVar35,
                                                                  CONCAT44(*(float *)(puVar29 + -0x27c) -
                                                                           fVar48 * fVar58,
                                                                           *(float *)(puVar29 + -0x280) -
                                                                           fVar37 * fVar58)));
                                          *(float *)(puVar29 + -0x250) = UVar61.fields.z;
                                          *(undefined4 *)(puVar29 + -0x24c) =
                                               *(undefined4 *)(puVar29 + -0x28c);
                                          *(undefined4 *)(puVar29 + -0x248) =
                                               *(undefined4 *)(puVar29 + -0x288);
                                          *(undefined4 *)(puVar29 + -0x244) =
                                               *(undefined4 *)(puVar29 + -0x284);
                                          *(undefined8 *)(puVar29 + -0x2b8) = 0x4298e47;
                                          UVar61.fields.x = *(float *)(puVar29 + -0x280) - fVar37 * fVar58;
                                          UVar61.fields.y = *(float *)(puVar29 + -0x27c) - fVar48 * fVar58;
                                          UVar61 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                                             (pUVar5,UVar61,(MethodInfo *)0x0);
                                          *(long *)(puVar29 + -0x210) = UVar61.fields._0_8_;
                                          *(undefined8 *)(puVar29 + -0x208) = extraout_XMM0_Qb_04;
                                          if (g_data_057add05 == '\0') {
                                            *(undefined8 *)(puVar29 + -0x2b8) = 0x4298e64;
                                            il2cpp_runtime_helper_023445d0(UVar61.fields._0_8_,UVar61.fields.z,
                                                               &TypeInfo_CursorManager);
                                            g_data_057add05 = '\x01';
                                          }
                                          if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                            *(undefined8 *)(puVar29 + -0x2b8) = 0x4298e8d;
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          *(undefined8 *)(puVar29 + -0x2b8) = 0x4298e94;
                                          UVar61 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0)
                                          ;
                                          *(undefined8 *)(puVar29 + -0x2b8) = 0x4298eb7;
                                          fVar35 = atan2f(*(float *)(puVar29 + -0x20c) - UVar61.fields.y,
                                                          *(float *)(puVar29 + -0x210) - UVar61.fields.x);
                                          uVar47 = extraout_var._4_4_;
                                          uVar49 = extraout_var._8_4_;
                                          *(undefined8 *)(puVar29 + -0x2b8) = 0x4298ed4;
                                          auVar16._4_8_ = 0;
                                          auVar16._0_4_ = fVar35 * 57.29578 * 0.017453292;
                                          UVar60 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                             ((UnityEngine_Vector3_o)(auVar16 << 0x40),
                                                              (MethodInfo *)0x0);
                                          if ((*(System_String_array **)((long)__this_02 + 0x58) !=
                                               (System_String_array *)0x0) &&
                                             (pSVar25 = (*(System_String_array **)((long)__this_02 + 0x58))->
                                                        m_Items[10], pSVar25 != (System_String_o *)0x0)) {
                                            auVar13._8_4_ = uVar47;
                                            auVar13._0_8_ = UVar60.fields._8_8_;
                                            auVar13._12_4_ = uVar49;
                                            *(undefined1 (*) [16])(puVar29 + -0x120) = auVar13;
                                            *(long *)(puVar29 + -0x110) = UVar60.fields._0_8_;
                                            *(undefined8 *)(puVar29 + -0x108) = extraout_XMM0_Qb_05;
                                            SVar32 = pSVar25->fields;
                                            if (SVar32 != (System_String_Fields)0x0) {
                                              *(undefined8 *)(puVar29 + -0x2b8) = 0x4298f12;
                                              UVar61 = UnityEngine_Transform__get_position
                                                                 ((UnityEngine_Transform_o *)SVar32,
                                                                  (MethodInfo *)0x0);
                                              if ((*(System_String_array **)((long)__this_02 + 0x58) !=
                                                   (System_String_array *)0x0) &&
                                                 (pSVar25 = (*(System_String_array **)((long)__this_02 + 0x58)
                                                            )->m_Items[10], pSVar25 != (System_String_o *)0x0)
                                                 ) {
                                                *(float *)(puVar29 + -0x214) = UVar61.fields.z;
                                                *(long *)(puVar29 + -0x130) = UVar61.fields._0_8_;
                                                *(undefined8 *)(puVar29 + -0x128) = extraout_XMM0_Qb_06;
                                                SVar32 = pSVar25->fields;
                                                if (SVar32 != (System_String_Fields)0x0) {
                                                  *(undefined8 *)(puVar29 + -0x2b8) = 0x4298f51;
                                                  UVar61 = UnityEngine_Transform__get_position
                                                                     ((UnityEngine_Transform_o *)SVar32,
                                                                      (MethodInfo *)0x0);
                                                  fVar35 = UVar61.fields.z;
                                                  auVar39._0_8_ = UVar61.fields._0_8_;
                                                  auVar39._8_8_ = extraout_XMM0_Qb_07;
                                                  if (g_data_057a6845 == '\0') {
                                                    *(float *)(puVar29 + -0x218) = fVar35;
                                                    *(undefined1 (*) [16])(puVar29 + -0x140) = auVar39;
                                                    *(undefined8 *)(puVar29 + -0x2b8) = 0x4298f77;
                                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                    auVar39 = *(undefined1 (*) [16])(puVar29 + -0x140);
                                                    fVar35 = *(float *)(puVar29 + -0x218);
                                                    g_data_057a6845 = '\x01';
                                                  }
                                                  auVar54._0_4_ = *(float *)(puVar29 + -0x270) - auVar39._0_4_
                                                  ;
                                                  auVar54._4_4_ = *(float *)(puVar29 + -0x26c) - auVar39._4_4_
                                                  ;
                                                  auVar54._8_4_ = *(float *)(puVar29 + -0x268) - auVar39._8_4_
                                                  ;
                                                  auVar54._12_4_ =
                                                       *(float *)(puVar29 + -0x264) - auVar39._12_4_;
                                                  uVar47 = *(undefined4 *)(puVar29 + -0x24c);
                                                  uVar49 = *(undefined4 *)(puVar29 + -0x248);
                                                  uVar50 = *(undefined4 *)(puVar29 + -0x244);
                                                  fVar35 = *(float *)(puVar29 + -0x250) - fVar35;
                                                  if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                                                    *(undefined1 (*) [16])(puVar29 + -0x270) = auVar54;
                                                    *(float *)(puVar29 + -0x250) = fVar35;
                                                    *(undefined4 *)(puVar29 + -0x24c) = uVar47;
                                                    *(undefined4 *)(puVar29 + -0x248) = uVar49;
                                                    *(undefined4 *)(puVar29 + -0x244) = uVar50;
                                                    *(undefined8 *)(puVar29 + -0x2b8) = 0x4298fbc;
                                                    il2cpp_runtime_helper_02337ed0();
                                                    fVar35 = *(float *)(puVar29 + -0x250);
                                                    uVar47 = *(undefined4 *)(puVar29 + -0x24c);
                                                    uVar49 = *(undefined4 *)(puVar29 + -0x248);
                                                    uVar50 = *(undefined4 *)(puVar29 + -0x244);
                                                    auVar54 = *(undefined1 (*) [16])(puVar29 + -0x270);
                                                  }
                                                  auVar40._4_4_ = uVar47;
                                                  auVar40._0_4_ = fVar35;
                                                  auVar40._8_4_ = uVar49;
                                                  auVar40._12_4_ = uVar50;
                                                  auVar41._4_12_ = auVar40._4_12_;
                                                  fVar36 = fVar35 * fVar35 +
                                                           auVar54._4_4_ * auVar54._4_4_ +
                                                           auVar54._0_4_ * auVar54._0_4_;
                                                  if (fVar36 < 0.0) {
                                                    *(undefined1 (*) [16])(puVar29 + -0x270) = auVar54;
                                                    *(float *)(puVar29 + -0x250) = fVar35;
                                                    *(undefined4 *)(puVar29 + -0x24c) = uVar47;
                                                    *(undefined4 *)(puVar29 + -0x248) = uVar49;
                                                    *(undefined4 *)(puVar29 + -0x244) = uVar50;
                                                    *(undefined8 *)(puVar29 + -0x2b8) = 0x429903e;
                                                    auVar41._0_4_ = sqrtf(fVar36);
                                                    auVar41._4_12_ = extraout_var_00;
                                                    fVar35 = *(float *)(puVar29 + -0x250);
                                                    uVar47 = *(undefined4 *)(puVar29 + -0x24c);
                                                    uVar49 = *(undefined4 *)(puVar29 + -0x248);
                                                    uVar50 = *(undefined4 *)(puVar29 + -0x244);
                                                    auVar54 = *(undefined1 (*) [16])(puVar29 + -0x270);
                                                    if (auVar41._0_4_ <= 1e-05) goto label_04298ff7;
label_04299051:
                                                    auVar42._0_4_ = auVar41._0_4_;
                                                    fVar35 = fVar35 / auVar42._0_4_;
                                                    auVar42._8_4_ = auVar41._8_4_;
                                                    auVar42._12_4_ = auVar41._12_4_;
                                                    auVar42._4_4_ = auVar42._0_4_;
                                                    auVar55 = divps(auVar54,auVar42);
                                                  }
                                                  else {
                                                    auVar41._0_4_ = SQRT(fVar36);
                                                    if (1e-05 < auVar41._0_4_) goto label_04299051;
label_04298ff7:
                                                    if (g_data_057a65d5 == '\0') {
                                                      *(undefined8 *)(puVar29 + -0x2b8) = 0x429900c;
                                                      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                      g_data_057a65d5 = '\x01';
                                                    }
                                                    auVar55._8_8_ = 0;
                                                    auVar55._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
                                                    fVar35 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
                                                    uVar47 = 0;
                                                    uVar49 = 0;
                                                    uVar50 = 0;
                                                  }
                                                  *(float *)(puVar29 + -0x250) = fVar35;
                                                  *(undefined4 *)(puVar29 + -0x24c) = uVar47;
                                                  *(undefined4 *)(puVar29 + -0x248) = uVar49;
                                                  *(undefined4 *)(puVar29 + -0x244) = uVar50;
                                                  *(undefined1 (*) [16])(puVar29 + -0x270) = auVar55;
                                                  if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
                                                    *(undefined8 *)(puVar29 + -0x2b8) = 0x4299077;
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  uVar23 = *(undefined8 *)(TypeInfo_HumanPlayerController + 0xb8);
                                                  *(undefined8 *)(puVar29 + -0x2b8) = 0x4299088;
                                                  iVar21 = UnityEngine_LayerMask__get_value
                                                                     ((UnityEngine_LayerMask_Fields)
                                                                      (int32_t)uVar23,(MethodInfo *)0x0);
                                                  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                                                    *(undefined8 *)(puVar29 + -0x2b8) = 0x42990a2;
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  *(undefined8 *)(puVar29 + -0x2b8) = 0x42990ce;
                                                  origin.fields.z = *(float *)(puVar29 + -0x214);
                                                  origin.fields._0_8_ = *(undefined8 *)(puVar29 + -0x130);
                                                  direction.fields.z = *(float *)(puVar29 + -0x250);
                                                  direction.fields._0_8_ = *(undefined8 *)(puVar29 + -0x270);
                                                  uVar22 = UnityEngine_Physics__Raycast_4e76f20
                                                                     (origin,direction,120.0,iVar21,
                                                                      (MethodInfo *)0x0);
                                                  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                                    *(undefined8 *)(puVar29 + -0x2b8) = 0x42990e8;
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  *(undefined8 *)(puVar29 + -0x2b8) = 0x4299112;
                                                  position.fields.z = 0.0;
                                                  position.fields._0_8_ = *(ulong *)(puVar29 + -0x210);
                                                  UVar60.fields._8_8_ = *(undefined8 *)(puVar29 + -0x120);
                                                  UVar60.fields._0_8_ = *(undefined8 *)(puVar29 + -0x110);
                                                  UI_CursorManager__SetHookArrow
                                                            (1,position,UVar60,uVar22 & 0xff,(MethodInfo *)0x0
                                                            );
                                                  lVar26 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                                  if (lVar26 != 0) {
                                                    pUVar5 = *(UnityEngine_Camera_o **)(lVar26 + 0x20);
                                                    fVar35 = *(float *)(puVar29 + -0x280);
                                                    if (pUVar5 != (UnityEngine_Camera_o *)0x0) {
                                                      position_00.fields.z =
                                                           *(float *)(puVar29 + -0x290) +
                                                           *(float *)(puVar29 + -0x230) *
                                                           *(float *)(puVar29 + -0x23c);
                                                      *(undefined1 (*) [16])(puVar29 + -0x280) =
                                                           CONCAT412(*(float *)(puVar29 + -0x274) +
                                                                     *(float *)(puVar29 + -0x1b4) *
                                                                     *(float *)(puVar29 + -0x1a4),
                                                                     CONCAT48(*(float *)(puVar29 + -0x278) +
                                                                              *(float *)(puVar29 + -0x1b8) *
                                                                              *(float *)(puVar29 + -0x1a8),
                                                                              CONCAT44(*(float *)(puVar29 +
                                                                                                 -0x27c) +
                                                                                       *(float *)(puVar29 +
                                                                                                 -0x1bc) *
                                                                                       *(float *)(puVar29 +
                                                                                                 -0x1ac),
                                                                                       fVar35 + *(float *)(
                                                       puVar29 + -0x1c0) * *(float *)(puVar29 + -0x1b0))));
                                                      *(float *)(puVar29 + -0x290) = position_00.fields.z;
                                                      *(undefined4 *)(puVar29 + -0x28c) =
                                                           *(undefined4 *)(puVar29 + -0x28c);
                                                      *(undefined4 *)(puVar29 + -0x288) =
                                                           *(undefined4 *)(puVar29 + -0x288);
                                                      *(undefined4 *)(puVar29 + -0x284) =
                                                           *(undefined4 *)(puVar29 + -0x284);
                                                      *(undefined8 *)(puVar29 + -0x2b8) = 0x4299181;
                                                      position_00.fields.x =
                                                           fVar35 + *(float *)(puVar29 + -0x1c0) *
                                                                    *(float *)(puVar29 + -0x1b0);
                                                      position_00.fields.y =
                                                           *(float *)(puVar29 + -0x27c) +
                                                           *(float *)(puVar29 + -0x1bc) *
                                                           *(float *)(puVar29 + -0x1ac);
                                                      UVar61 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                                                         (pUVar5,position_00,(MethodInfo *)0x0
                                                                         );
                                                      *(long *)(puVar29 + -0x270) = UVar61.fields._0_8_;
                                                      *(undefined8 *)(puVar29 + -0x268) = extraout_XMM0_Qb_08;
                                                      if (g_data_057add05 == '\0') {
                                                        *(undefined8 *)(puVar29 + -0x2b8) = 0x429919b;
                                                        il2cpp_runtime_helper_023445d0(UVar61.fields._0_8_,UVar61.fields.z
                                                                           ,&TypeInfo_CursorManager);
                                                        g_data_057add05 = '\x01';
                                                      }
                                                      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                                        *(undefined8 *)(puVar29 + -0x2b8) = 0x42991b3;
                                                        il2cpp_runtime_helper_02337ed0();
                                                      }
                                                      *(undefined8 *)(puVar29 + -0x2b8) = 0x42991ba;
                                                      UVar61 = UI_CursorManager__GetInGameMousePosition
                                                                         ((MethodInfo *)0x0);
                                                      *(undefined8 *)(puVar29 + -0x2b8) = 0x42991da;
                                                      fVar35 = atan2f(*(float *)(puVar29 + -0x26c) -
                                                                      UVar61.fields.y,
                                                                      *(float *)(puVar29 + -0x270) -
                                                                      UVar61.fields.x);
                                                      uVar47 = extraout_var_01._4_4_;
                                                      uVar49 = extraout_var_01._8_4_;
                                                      *(undefined8 *)(puVar29 + -0x2b8) = 0x42991f7;
                                                      auVar17._4_8_ = 0;
                                                      auVar17._0_4_ = fVar35 * 57.29578 * 0.017453292;
                                                      UVar60 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                         ((UnityEngine_Vector3_o)
                                                                          (auVar17 << 0x40),(MethodInfo *)0x0)
                                                      ;
                                                      if ((*(System_String_array **)((long)__this_02 + 0x58)
                                                           != (System_String_array *)0x0) &&
                                                         (pSVar25 = (*(System_String_array **)
                                                                      ((long)__this_02 + 0x58))->m_Items[10],
                                                         pSVar25 != (System_String_o *)0x0)) {
                                                        auVar14._8_4_ = uVar47;
                                                        auVar14._0_8_ = UVar60.fields._8_8_;
                                                        auVar14._12_4_ = uVar49;
                                                        *(undefined1 (*) [16])(puVar29 + -0x230) = auVar14;
                                                        *(long *)(puVar29 + -0x250) = UVar60.fields._0_8_;
                                                        *(undefined8 *)(puVar29 + -0x248) =
                                                             extraout_XMM0_Qb_09;
                                                        SVar32 = pSVar25->fields;
                                                        if (SVar32 != (System_String_Fields)0x0) {
                                                          *(undefined8 *)(puVar29 + -0x2b8) = 0x4299232;
                                                          UVar61 = UnityEngine_Transform__get_position
                                                                             ((UnityEngine_Transform_o *)
                                                                              SVar32,(MethodInfo *)0x0);
                                                          if ((*(System_String_array **)
                                                                ((long)__this_02 + 0x58) !=
                                                               (System_String_array *)0x0) &&
                                                             (pSVar25 = (*(System_String_array **)
                                                                          ((long)__this_02 + 0x58))->m_Items
                                                                        [10],
                                                             pSVar25 != (System_String_o *)0x0)) {
                                                            *(float *)(puVar29 + -0x23c) = UVar61.fields.z;
                                                            *(long *)(puVar29 + -0x210) = UVar61.fields._0_8_;
                                                            *(undefined8 *)(puVar29 + -0x208) =
                                                                 extraout_XMM0_Qb_10;
                                                            SVar32 = pSVar25->fields;
                                                            if (SVar32 != (System_String_Fields)0x0) {
                                                              *(undefined8 *)(puVar29 + -0x2b8) = 0x429926e;
                                                              UVar61 = UnityEngine_Transform__get_position
                                                                                 ((UnityEngine_Transform_o *)
                                                                                  SVar32,(MethodInfo *)0x0);
                                                              fVar35 = UVar61.fields.z;
                                                              auVar43._0_8_ = UVar61.fields._0_8_;
                                                              auVar43._8_8_ = extraout_XMM0_Qb_11;
                                                              if (g_data_057a6845 == '\0') {
                                                                *(float *)(puVar29 + -0x1b0) = fVar35;
                                                                *(undefined1 (*) [16])(puVar29 + -0x1c0) =
                                                                     auVar43;
                                                                *(undefined8 *)(puVar29 + -0x2b8) = 0x4299294;
                                                                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                                auVar43 = *(undefined1 (*) [16])
                                                                           (puVar29 + -0x1c0);
                                                                fVar35 = *(float *)(puVar29 + -0x1b0);
                                                                g_data_057a6845 = '\x01';
                                                              }
                                                              auVar56._0_4_ =
                                                                   *(float *)(puVar29 + -0x280) -
                                                                   auVar43._0_4_;
                                                              auVar56._4_4_ =
                                                                   *(float *)(puVar29 + -0x27c) -
                                                                   auVar43._4_4_;
                                                              auVar56._8_4_ =
                                                                   *(float *)(puVar29 + -0x278) -
                                                                   auVar43._8_4_;
                                                              auVar56._12_4_ =
                                                                   *(float *)(puVar29 + -0x274) -
                                                                   auVar43._12_4_;
                                                              uVar47 = *(undefined4 *)(puVar29 + -0x28c);
                                                              uVar49 = *(undefined4 *)(puVar29 + -0x288);
                                                              uVar50 = *(undefined4 *)(puVar29 + -0x284);
                                                              fVar35 = *(float *)(puVar29 + -0x290) - fVar35;
                                                              if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                                                                *(undefined1 (*) [16])(puVar29 + -0x280) =
                                                                     auVar56;
                                                                *(float *)(puVar29 + -0x290) = fVar35;
                                                                *(undefined4 *)(puVar29 + -0x28c) = uVar47;
                                                                *(undefined4 *)(puVar29 + -0x288) = uVar49;
                                                                *(undefined4 *)(puVar29 + -0x284) = uVar50;
                                                                *(undefined8 *)(puVar29 + -0x2b8) = 0x42992d9;
                                                                il2cpp_runtime_helper_02337ed0();
                                                                fVar35 = *(float *)(puVar29 + -0x290);
                                                                uVar47 = *(undefined4 *)(puVar29 + -0x28c);
                                                                uVar49 = *(undefined4 *)(puVar29 + -0x288);
                                                                uVar50 = *(undefined4 *)(puVar29 + -0x284);
                                                                auVar56 = *(undefined1 (*) [16])
                                                                           (puVar29 + -0x280);
                                                              }
                                                              auVar44._4_4_ = uVar47;
                                                              auVar44._0_4_ = fVar35;
                                                              auVar44._8_4_ = uVar49;
                                                              auVar44._12_4_ = uVar50;
                                                              auVar45._4_12_ = auVar44._4_12_;
                                                              fVar36 = fVar35 * fVar35 +
                                                                       auVar56._4_4_ * auVar56._4_4_ +
                                                                       auVar56._0_4_ * auVar56._0_4_;
                                                              if (fVar36 < 0.0) {
                                                                *(undefined1 (*) [16])(puVar29 + -0x280) =
                                                                     auVar56;
                                                                *(float *)(puVar29 + -0x290) = fVar35;
                                                                *(undefined4 *)(puVar29 + -0x28c) = uVar47;
                                                                *(undefined4 *)(puVar29 + -0x288) = uVar49;
                                                                *(undefined4 *)(puVar29 + -0x284) = uVar50;
                                                                *(undefined8 *)(puVar29 + -0x2b8) = 0x4299365;
                                                                auVar45._0_4_ = sqrtf(fVar36);
                                                                auVar45._4_12_ = extraout_var_02;
                                                                fVar35 = *(float *)(puVar29 + -0x290);
                                                                uVar47 = *(undefined4 *)(puVar29 + -0x28c);
                                                                uVar49 = *(undefined4 *)(puVar29 + -0x288);
                                                                uVar50 = *(undefined4 *)(puVar29 + -0x284);
                                                                auVar56 = *(undefined1 (*) [16])
                                                                           (puVar29 + -0x280);
                                                                fVar36 = auVar45._0_4_;
                                                              }
                                                              else {
                                                                auVar45._0_4_ = SQRT(fVar36);
                                                                fVar36 = auVar45._0_4_;
                                                              }
                                                              if (1e-05 < fVar36) {
                                                                auVar46._0_4_ = auVar45._0_4_;
                                                                *(float *)(puVar29 + -0x290) =
                                                                     fVar35 / auVar46._0_4_;
                                                                *(undefined4 *)(puVar29 + -0x28c) = uVar47;
                                                                *(undefined4 *)(puVar29 + -0x288) = uVar49;
                                                                *(undefined4 *)(puVar29 + -0x284) = uVar50;
                                                                auVar46._8_4_ = auVar45._8_4_;
                                                                auVar46._12_4_ = auVar45._12_4_;
                                                                auVar46._4_4_ = auVar46._0_4_;
                                                                auVar57 = divps(auVar56,auVar46);
                                                                *(undefined1 (*) [16])(puVar29 + -0x280) =
                                                                     auVar57;
                                                              }
                                                              else {
                                                                if (g_data_057a65d5 == '\0') {
                                                                  *(undefined8 *)(puVar29 + -0x2b8) =
                                                                       0x4299329;
                                                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                                  g_data_057a65d5 = '\x01';
                                                                }
                                                                puVar27 = *(undefined8 **)
                                                                           (TypeInfo_Vector3 + 0xb8);
                                                                *(undefined8 *)(puVar29 + -0x280) = *puVar27;
                                                                *(undefined8 *)(puVar29 + -0x278) = 0;
                                                                *(undefined1 (*) [16])(puVar29 + -0x290) =
                                                                     ZEXT416(*(uint *)(puVar27 + 1));
                                                              }
                                                              uVar23 = *(undefined8 *)(TypeInfo_HumanPlayerController + 0xb8);
                                                              *(undefined8 *)(puVar29 + -0x2b8) = 0x429939e;
                                                              iVar21 = UnityEngine_LayerMask__get_value
                                                                                 ((
                                                       UnityEngine_LayerMask_Fields)(int32_t)uVar23,
                                                       (MethodInfo *)0x0);
                                                       *(undefined8 *)(puVar29 + -0x2b8) = 0x42993c7;
                                                       origin_00.fields.z = *(float *)(puVar29 + -0x23c);
                                                       origin_00.fields._0_8_ =
                                                            *(undefined8 *)(puVar29 + -0x210);
                                                       direction_00.fields.z = *(float *)(puVar29 + -0x290);
                                                       direction_00.fields._0_8_ =
                                                            *(undefined8 *)(puVar29 + -0x280);
                                                       uVar22 = UnityEngine_Physics__Raycast_4e76f20
                                                                          (origin_00,direction_00,120.0,iVar21
                                                                           ,(MethodInfo *)0x0);
                                                       *(undefined8 *)(puVar29 + -0x2b8) = 0x42993e8;
                                                       position_01.fields.z = 0.0;
                                                       position_01.fields._0_8_ = *(ulong *)(puVar29 + -0x270)
                                                       ;
                                                       rotation.fields._8_8_ =
                                                            *(undefined8 *)(puVar29 + -0x230);
                                                       rotation.fields._0_8_ =
                                                            *(undefined8 *)(puVar29 + -0x250);
                                                       UI_CursorManager__SetHookArrow
                                                                 (0,position_01,rotation,uVar22 & 0xff,
                                                                  (MethodInfo *)0x0);
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
              *(undefined8 *)(puVar29 + -0x2b8) = 0x4298427;
              UVar61 = UnityEngine_RaycastHit__get_point
                                 ((UnityEngine_RaycastHit_o)
                                  *(UnityEngine_RaycastHit_Fields *)(puVar29 + -0x2b0),
                                  (MethodInfo *)(puVar29 + -0xe0));
              if ((*(System_String_array **)((long)__this_02 + 0x58) != (System_String_array *)0x0) &&
                 (pSVar25 = (*(System_String_array **)((long)__this_02 + 0x58))->m_Items[10],
                 pSVar25 != (System_String_o *)0x0)) {
                *(long *)(puVar29 + -0x280) = UVar61.fields._0_8_;
                *(undefined8 *)(puVar29 + -0x278) = extraout_XMM0_Qb_00;
                *(float *)(puVar29 + -0x290) = UVar61.fields.z;
                SVar32 = pSVar25->fields;
                if (SVar32 != (System_String_Fields)0x0) {
                  *(undefined8 *)(puVar29 + -0x2b8) = 0x4298460;
                  UVar62 = (UnityEngine_Vector3_Fields)
                           UnityEngine_Transform__get_position
                                     ((UnityEngine_Transform_o *)SVar32,(MethodInfo *)0x0);
                  fVar35 = *(float *)(puVar29 + -0x280);
                  uVar47 = *(undefined4 *)(puVar29 + -0x27c);
                  uVar49 = *(undefined4 *)(puVar29 + -0x278);
                  uVar50 = *(undefined4 *)(puVar29 + -0x274);
                  auVar52._4_4_ = uVar47;
                  auVar52._0_4_ = uVar47;
                  auVar52._8_4_ = uVar49;
                  auVar52._12_4_ = uVar50;
                  fVar36 = UVar62.y;
                  if (g_data_057a6841 == '\0') {
                    *(undefined1 (*) [16])(puVar29 + -0x270) = auVar52;
                    *(float *)(puVar29 + -0x250) = UVar62.z;
                    *(long *)(puVar29 + -0x230) = UVar62._0_8_;
                    *(undefined4 *)(puVar29 + -0x228) = extraout_XMM0_Dc_00;
                    *(undefined4 *)(puVar29 + -0x224) = extraout_XMM0_Dd_00;
                    *(float *)(puVar29 + -0x210) = fVar36;
                    *(float *)(puVar29 + -0x20c) = fVar36;
                    *(undefined4 *)(puVar29 + -0x208) = extraout_XMM0_Dc_00;
                    *(undefined4 *)(puVar29 + -0x204) = extraout_XMM0_Dd_00;
                    *(undefined8 *)(puVar29 + -0x2b8) = 0x42984a3;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                    fVar36 = *(float *)(puVar29 + -0x210);
                    UVar62.z = *(float *)(puVar29 + -0x250);
                    UVar62._0_8_ = *(undefined8 *)(puVar29 + -0x230);
                    auVar52 = *(undefined1 (*) [16])(puVar29 + -0x270);
                    fVar35 = *(float *)(puVar29 + -0x280);
                    uVar47 = *(undefined4 *)(puVar29 + -0x27c);
                    uVar49 = *(undefined4 *)(puVar29 + -0x278);
                    uVar50 = *(undefined4 *)(puVar29 + -0x274);
                    g_data_057a6841 = '\x01';
                  }
                  fVar35 = fVar35 - UVar62.x;
                  auVar53._4_12_ = auVar52._4_12_;
                  auVar53._0_4_ = auVar52._0_4_ - fVar36;
                  fVar36 = *(float *)(puVar29 + -0x290) - UVar62.z;
                  if (*(int *)((long)TypeInfo_Math + 0xe4) == 0) {
                    *(float *)(puVar29 + -0x290) = fVar36;
                    *(float *)(puVar29 + -0x280) = fVar35;
                    *(undefined4 *)(puVar29 + -0x27c) = uVar47;
                    *(undefined4 *)(puVar29 + -0x278) = uVar49;
                    *(undefined4 *)(puVar29 + -0x274) = uVar50;
                    *(undefined1 (*) [16])(puVar29 + -0x270) = auVar53;
                    *(undefined8 *)(puVar29 + -0x2b8) = 0x4298504;
                    il2cpp_runtime_helper_02337ed0();
                    auVar53 = *(undefined1 (*) [16])(puVar29 + -0x270);
                    fVar35 = *(float *)(puVar29 + -0x280);
                    fVar36 = *(float *)(puVar29 + -0x290);
                  }
                  fVar35 = fVar36 * fVar36 + auVar53._0_4_ * auVar53._0_4_ + fVar35 * fVar35;
                  uVar47 = 0;
                  fVar36 = 0.0;
                  uVar49 = 0;
                  uVar50 = 0;
                  if (fVar35 < 0.0) {
                    *(undefined8 *)(puVar29 + -0x2b8) = 0x429853b;
                    fVar35 = sqrtf(fVar35);
                  }
                  else {
                    fVar35 = SQRT(fVar35);
                  }
                  *(float *)(puVar29 + -0x280) = fVar35;
                  *(int *)(puVar29 + -0x234) = (int)fVar35;
                  *(undefined8 *)(puVar29 + -0x2b8) = 0x4298555;
                  pSVar25 = System_Int32__ToString((int32_t)(puVar29 + -0x234),(MethodInfo *)0x0);
                  goto label_04298558;
                }
              }
            }
          }
        }
      }
    }
  }
label_042993fa:
  *(undefined8 *)(puVar29 + -0x2b8) = 0x42993ff;
  il2cpp_runtime_helper_022b2c90();
label_042993ff:
  *(undefined8 *)(puVar29 + -0x2b8) = 0x4299404;
  uVar23 = il2cpp_runtime_helper_022b2fd0();
  *(undefined8 *)(puVar29 + -0x2c8) = uVar23;
  *(undefined8 *)(puVar29 + -0x2c0) = extraout_XMM0_Qb_12;
  if (g_data_057add05 == '\0') {
    *(undefined8 *)(puVar29 + -0x2d0) = 0x429942d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057add05 = '\x01';
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    *(undefined8 *)(puVar29 + -0x2d0) = 0x429944c;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar29 + -0x2d0) = 0x4299453;
  UVar61 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  *(undefined8 *)(puVar29 + -0x2d0) = 0x4299472;
  fVar35 = atan2f(*(float *)(puVar29 + -0x2c4) - UVar61.fields.y,
                  *(float *)(puVar29 + -0x2c8) - UVar61.fields.x);
  auVar18._4_8_ = 0;
  auVar18._0_4_ = fVar35 * 57.29578 * 0.017453292;
  UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o)(auVar18 << 0x40),(MethodInfo *)0x0);
  return;
}


// Controllers.HumanPlayerController$$SetupDash
// il2cpp: void Controllers_HumanPlayerController__SetupDash (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x4297610

void Controllers_HumanPlayerController__SetupDash
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  System_String_array *pSVar3;
  Characters_AnimationHandler_o *__this_00;
  UnityEngine_Camera_o *pUVar4;
  System_String_o *pSVar5;
  System_String_Fields SVar6;
  System_String_c *pSVar7;
  Characters_BaseUseable_o *__this_01;
  UnityEngine_Transform_o *pUVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_Vector3_Fields UVar12;
  UnityEngine_Vector3_Fields UVar13;
  UnityEngine_Vector3_Fields UVar14;
  UnityEngine_Vector3_Fields UVar15;
  UnityEngine_Vector3_Fields UVar16;
  UnityEngine_Vector3_Fields UVar17;
  UnityEngine_Vector3_Fields UVar18;
  UnityEngine_Vector3_Fields UVar19;
  UnityEngine_Vector3_Fields UVar20;
  UnityEngine_Vector3_Fields UVar21;
  UnityEngine_Vector3_Fields UVar22;
  UnityEngine_Vector3_Fields UVar23;
  UnityEngine_Vector3_Fields UVar24;
  UnityEngine_Vector3_Fields UVar25;
  UnityEngine_Vector3_Fields UVar26;
  UnityEngine_Vector3_Fields UVar27;
  UnityEngine_Vector3_Fields UVar28;
  UnityEngine_Vector3_Fields UVar29;
  UnityEngine_Vector3_Fields UVar30;
  UnityEngine_Vector3_Fields UVar31;
  UnityEngine_Vector3_Fields UVar32;
  UnityEngine_Vector3_Fields UVar33;
  UnityEngine_Vector3_Fields UVar34;
  UnityEngine_Vector3_Fields UVar35;
  UnityEngine_Vector3_Fields UVar36;
  UnityEngine_Vector3_Fields UVar37;
  UnityEngine_Vector3_Fields UVar38;
  UnityEngine_Vector3_Fields UVar39;
  UnityEngine_Vector3_Fields UVar40;
  UnityEngine_Vector3_Fields UVar41;
  UnityEngine_Vector3_Fields UVar42;
  UnityEngine_Vector3_Fields UVar43;
  UnityEngine_Vector3_Fields UVar44;
  UnityEngine_Vector3_Fields UVar45;
  UnityEngine_Vector3_Fields UVar46;
  UnityEngine_Vector3_Fields UVar47;
  UnityEngine_Vector3_Fields UVar48;
  UnityEngine_Vector3_Fields UVar49;
  UnityEngine_Vector3_Fields UVar50;
  UnityEngine_Vector3_Fields UVar51;
  UnityEngine_Vector3_Fields UVar52;
  UnityEngine_Vector3_Fields UVar53;
  UnityEngine_Vector3_Fields UVar54;
  UnityEngine_Vector3_Fields UVar55;
  UnityEngine_Vector3_Fields UVar56;
  UnityEngine_Vector3_Fields UVar57;
  UnityEngine_Vector3_Fields UVar58;
  UnityEngine_Vector3_Fields UVar59;
  UnityEngine_Vector3_Fields UVar60;
  UnityEngine_Vector3_Fields UVar61;
  UnityEngine_Vector3_Fields UVar62;
  UnityEngine_Vector3_Fields UVar63;
  UnityEngine_Vector3_Fields UVar64;
  UnityEngine_Vector3_Fields UVar65;
  UnityEngine_Vector3_Fields UVar66;
  UnityEngine_Vector3_Fields UVar67;
  UnityEngine_Vector3_Fields UVar68;
  UnityEngine_Vector3_Fields UVar69;
  UnityEngine_Vector3_Fields UVar70;
  UnityEngine_Vector3_Fields UVar71;
  UnityEngine_Vector3_Fields UVar72;
  UnityEngine_Vector3_Fields UVar73;
  UnityEngine_Vector3_Fields UVar74;
  UnityEngine_Vector3_Fields UVar75;
  UnityEngine_Vector3_Fields UVar76;
  UnityEngine_Vector3_Fields UVar77;
  char cVar78;
  uint uVar79;
  bool_conflict bVar80;
  int32_t iVar81;
  uint uVar82;
  _union_13 _Var83;
  System_String_o *pSVar84;
  System_String_o *str0;
  long lVar85;
  undefined8 *puVar86;
  int iVar87;
  float *pfVar88;
  long *plVar89;
  System_String_o **ppSVar90;
  long *__this_03;
  MethodInfo_30D4480 **unaff_R12;
  int iVar91;
  bool bVar92;
  float fVar93;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar94;
  undefined8 uVar95;
  float extraout_XMM0_Db;
  int32_t extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  int32_t extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 extraout_var [12];
  undefined4 uVar103;
  undefined4 uVar104;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar98 [16];
  undefined1 extraout_var_01 [12];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 extraout_var_02 [12];
  undefined1 auVar102 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined1 auVar110 [12];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  UnityEngine_Quaternion_o UVar114;
  UnityEngine_Vector3_o UVar115;
  UnityEngine_Vector3_Fields UVar116;
  UnityEngine_Vector3_Fields UVar117;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o UVar118;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  float fStackY_2c8;
  float fStackY_2c4;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined4 in_stack_fffffffffffffd68;
  float in_stack_fffffffffffffd70;
  float in_stack_fffffffffffffd74;
  float fVar121;
  int32_t in_stack_fffffffffffffd78;
  undefined8 uStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_254;
  undefined1 auStack_250 [8];
  undefined8 uStack_248;
  float fStack_23c;
  float fStack_238;
  int iStack_234;
  undefined1 auStack_230 [8];
  float fStack_228;
  float fStack_224;
  float fStack_218;
  float fStack_214;
  undefined8 uStack_210;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 auStack_1c0 [8];
  float fStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  UnityEngine_Vector3_Fields aUStack_1a0 [2];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  UnityEngine_Ray_o UStack_f8;
  Il2CppMethodPointer pIStack_e0;
  Il2CppMethodPointer pIStack_d8;
  InvokerMethod pIStack_d0;
  uint32_t uStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 uStack_bc;
  _union_13 _Stack_a8;
  _union_14 _Stack_a0;
  float fStack_64;
  undefined8 extraout_XMM0_Qb_04;
  
  plVar89 = (long *)__this;
  if (g_data_057add02 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Characters_HumanDashDirection_Settings_Keyb);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Characters_HumanDashDirection_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_HumanDashDirection_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_HumanDashDirection_float);
    plVar89 = &TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add02 = '\x01';
  }
  lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar85 != 0) {
    lVar85 = *(long *)(lVar85 + 0x20);
    _Var83.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_HumanDashDirection_KeybindSetting);
    method = MethodInfo_Dictionary_2_Characters_HumanDashDirection_Settings_Keyb;
    plVar89 = (long *)_Var83.rgctx_data;
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)_Var83.rgctx_data,
               (MethodInfo_30D3800 *)MethodInfo_Dictionary_2_Characters_HumanDashDirection_Settings_Keyb);
    if ((lVar85 != 0) && (_Var83.rgctx_data != (Il2CppRGCTXData *)0x0)) {
      unaff_R12 = &MethodInfo_Void_Add;
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)_Var83.rgctx_data,1,
                 *(Il2CppObject **)(lVar85 + 0x20),MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)_Var83.rgctx_data,2,
                 *(Il2CppObject **)(lVar85 + 0x28),MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)_Var83.rgctx_data,3,
                 *(Il2CppObject **)(lVar85 + 0x30),MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)_Var83.rgctx_data,4,
                 *(Il2CppObject **)(lVar85 + 0x38),MethodInfo_Void_Add);
      (__this->fields)._dashKeys =
           (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)_Var83;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._dashKeys,_Var83.rgctx_data);
      _Var83.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_HumanDashDirection_float);
      method = MethodInfo_Dictionary_2_Characters_HumanDashDirection_System_Single;
      plVar89 = (long *)_Var83.rgctx_data;
      System_Collections_Generic_Dictionary_Int32Enum__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)_Var83.rgctx_data,
                 (MethodInfo_30D7140 *)MethodInfo_Dictionary_2_Characters_HumanDashDirection_System_Single);
      if (_Var83.rgctx_data != (Il2CppRGCTXData *)0x0) {
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)_Var83.rgctx_data,1,-1.0,
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)_Var83.rgctx_data,2,-1.0,
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)_Var83.rgctx_data,3,-1.0,
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)_Var83.rgctx_data,4,-1.0,
                   MethodInfo_Void_Add);
        (__this->fields)._dashTimes =
             (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)_Var83;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._dashTimes,_Var83.rgctx_data);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (((Il2CppRGCTXData *)(plVar89 + 0xb))->klass != (Il2CppClass *)0x0) {
    if (*(char *)&((Il2CppRGCTXData *)(plVar89 + 0xb))->klass->vtable[0].method == '\0') {
      return;
    }
    Controllers_BasePlayerController__Update((Controllers_BasePlayerController_o *)plVar89,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = plVar89;
  if (g_data_057add03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownStrikeSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    il2cpp_runtime_helper_023445d0(&"jump");
    ppSVar90 = &"dash";
    il2cpp_runtime_helper_023445d0();
    g_data_057add03 = '\x01';
    __this_03 = (long *)ppSVar90;
  }
  if ((char)method == '\0') {
    pSVar3 = (System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass;
    if (pSVar3 != (System_String_array *)0x0) {
      if ((*(char *)(pSVar3->m_Items + 9) != '\0') || (*(int *)(pSVar3->m_Items + 0x27) == 0xf))
      goto label_04297890;
      if ((((Il2CppRGCTXData *)(plVar89 + 0xe))->klass != (Il2CppClass *)0x0) &&
         (__this_03 = (((Il2CppRGCTXData *)(plVar89 + 0xe))->klass->_1).fields,
         (Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0)) {
        bVar80 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
        if ((char)bVar80 == '\0') {
label_042978f8:
          if ((((Il2CppRGCTXData *)(plVar89 + 0xe))->klass != (Il2CppClass *)0x0) &&
             (__this_03 = (((Il2CppRGCTXData *)(plVar89 + 0xe))->klass->_1).methods,
             (Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0)) {
            bVar92 = false;
            bVar80 = Settings_KeybindSetting__GetKey
                               ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
            if ((char)bVar80 != '\0') {
              if ((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass ==
                  (System_String_array *)0x0) goto label_04297e5b;
              bVar92 = *(int *)(((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass)->m_Items
                               + 0x1f) == 0;
            }
label_0429793d:
            *(bool *)((long)pSVar3->m_Items + 0x1fc) = bVar92;
            pSVar3 = (System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass;
            if (pSVar3 != (System_String_array *)0x0) {
              if (*(int *)(pSVar3->m_Items + 0x1f) != 1) {
                iVar91 = *(int *)(pSVar3->m_Items + 0x27);
                if (*(char *)((long)pSVar3->m_Items + 0xa4) == '\0') {
                  if (iVar91 == 8) {
                    return;
                  }
                  if (iVar91 == 9) {
                    if (pSVar3->m_Items[0x1b] == (System_String_o *)0x0) {
                      return;
                    }
                    pSVar7 = pSVar3->m_Items[0x1b]->klass;
                    bVar2 = (pSVar7->_2).naturalAligment;
                    bVar1 = (TypeInfo_DownStrikeSpecial->_2).naturalAligment;
                    if ((bVar2 < bVar1) || ((pSVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DownStrikeSpecial)) {
                      bVar1 = (TypeInfo_StockSpecial->_2).naturalAligment;
                      if (bVar2 < bVar1) {
                        return;
                      }
                      if ((pSVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StockSpecial) {
                        return;
                      }
                    }
                  }
                  __this_03 = (long *)((_union_13 *)(pSVar3->m_Items + 0x12))->rgctx_data;
                  if ((Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0) {
                    bVar80 = Characters_AnimationHandler__IsPlaying
                                       ((Characters_AnimationHandler_o *)__this_03,"dash",
                                        (MethodInfo *)0x0);
                    if ((char)bVar80 != '\0') {
                      return;
                    }
                    if ((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass !=
                        (System_String_array *)0x0) {
                      __this_00 = (Characters_AnimationHandler_o *)
                                  ((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass)->
                                  m_Items[0x12];
                      __this_03 = (long *)0x0;
                      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
                        bVar80 = Characters_AnimationHandler__IsPlaying
                                           (__this_00,"jump",(MethodInfo *)0x0);
                        if ((char)bVar80 != '\0') {
                          return;
                        }
                        __this_03 = (long *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass;
                        if ((Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0) {
                          bVar80 = Characters_Human__IsFiringThunderspear
                                             ((Characters_Human_o *)__this_03,(MethodInfo *)0x0);
                          if ((char)bVar80 != '\0') {
                            return;
                          }
                          goto label_0429795e;
                        }
                      }
                    }
                  }
                  goto label_04297e5b;
                }
                if (iVar91 != 0) {
                  return;
                }
              }
label_0429795e:
              if ((((Il2CppRGCTXData *)(plVar89 + 4))->klass != (Il2CppClass *)0x0) &&
                 (__this_03 = (long *)(((Il2CppRGCTXData *)(plVar89 + 4))->klass->_1).parent,
                 (Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0)) {
                bVar80 = Settings_KeybindSetting__GetKeyDown
                                   ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
                if ((char)bVar80 != '\0') {
                  *(byte *)(plVar89 + 9) = *(byte *)(plVar89 + 9) ^ 1;
                }
                if ((((Il2CppRGCTXData *)(plVar89 + 4))->method != (MethodInfo *)0x0) &&
                   (__this_03 = (long *)((Il2CppRGCTXData *)(plVar89 + 4))->method->klass,
                   (Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0)) {
                  bVar80 = Settings_KeybindSetting__GetKey
                                     ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
                  iVar91 = 1;
                  if ((char)bVar80 == '\0') {
                    if ((((Il2CppRGCTXData *)(plVar89 + 4))->method == (MethodInfo *)0x0) ||
                       (__this_03 = (long *)((Il2CppRGCTXData *)(plVar89 + 4))->method->return_type,
                       (Il2CppRGCTXData *)__this_03 == (Il2CppRGCTXData *)0x0)) goto label_04297e5b;
                    uVar82 = Settings_KeybindSetting__GetKey
                                       ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
                    iVar91 = -(uVar82 & 0xff);
                  }
                  if ((((Il2CppRGCTXData *)(plVar89 + 4))->method != (MethodInfo *)0x0) &&
                     (__this_03 = (long *)((Il2CppRGCTXData *)(plVar89 + 4))->method->parameters,
                     (Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0)) {
                    bVar80 = Settings_KeybindSetting__GetKey
                                       ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
                    uVar82 = 0xffffffff;
                    if ((char)bVar80 == '\0') {
                      if ((((Il2CppRGCTXData *)(plVar89 + 4))->klass == (Il2CppClass *)0x0) ||
                         (__this_03 = *(long **)&(((Il2CppRGCTXData *)(plVar89 + 4))->klass->_1).this_arg.bits
                         , (Il2CppRGCTXData *)__this_03 == (Il2CppRGCTXData *)0x0)) goto label_04297e5b;
                      uVar79 = Settings_KeybindSetting__GetKey
                                         ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
                      uVar82 = uVar79 & 0xff;
                      if ((iVar91 != 0) || ((char)uVar79 != '\0')) goto label_04297a0c;
                      cVar78 = *(char *)(plVar89 + 9);
                      uVar82 = 0;
                    }
                    else {
label_04297a0c:
                      *(undefined1 *)(plVar89 + 9) = 0;
                      cVar78 = '\0';
                    }
                    uVar79 = 0;
                    if (cVar78 == '\0') {
                      uVar79 = uVar82;
                    }
                    iVar87 = 1;
                    if (cVar78 == '\0') {
                      iVar87 = iVar91;
                    }
                    pSVar3 = (System_String_array *)((Il2CppRGCTXData *)(plVar89 + 7))->klass;
                    if (iVar87 == 0 && uVar79 == 0) {
                      if (pSVar3 != (System_String_array *)0x0) {
                        *(undefined1 *)((long)pSVar3->m_Items + 0xac) = 0;
                        if ((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass !=
                            (System_String_array *)0x0) {
                          *(undefined4 *)
                           (((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass)->m_Items +
                           0x3f) = 0;
                          return;
                        }
                      }
                    }
                    else {
                      if (g_data_057adcc8 == '\0') {
                        __this_03 = &TypeInfo_SceneLoader;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057adcc8 = '\x01';
                      }
                      lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                      if ((lVar85 != 0) && (lVar85 = *(long *)(lVar85 + 0x28), lVar85 != 0)) {
                        pUVar8 = *(UnityEngine_Transform_o **)(lVar85 + 0x10);
                        __this_03 = (long *)0x0;
                        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                          UVar114 = UnityEngine_Transform__get_rotation(pUVar8,(MethodInfo *)0x0);
                          UVar115 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar114,(MethodInfo *)0x0);
                          UVar118.fields.x = UVar115.fields.x * 57.29578;
                          UVar118.fields.y = UVar115.fields.y * 57.29578;
                          UVar118.fields.z = UVar115.fields.z * 57.29578;
                          __this_03 = (long *)0x0;
                          UVar115 = UnityEngine_Quaternion__Internal_MakePositive(UVar118,(MethodInfo *)0x0);
                          fVar106 = (float)iVar87;
                          fVar93 = (float)(int)uVar79;
                          position_01.fields.z = atan2f(fVar106,fVar93);
                          if (pSVar3 != (System_String_array *)0x0) {
                            fStack_64 = UVar115.fields.y;
                            *(float *)(pSVar3->m_Items + 0x15) =
                                 position_01.fields.z * -57.29578 + fStack_64 + 90.0;
                            if ((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 7))->klass !=
                                (System_String_array *)0x0) {
                              *(undefined1 *)
                               ((long)((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 7))->klass)->
                                      m_Items + 0xac) = 1;
                              if (g_data_057a6841 == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                g_data_057a6841 = '\x01';
                              }
                              __this_03 = (long *)TypeInfo_Math;
                              if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              position_01.fields.z = fVar106 * fVar106 + fVar93 * fVar93 + 0.0;
                              if (position_01.fields.z < 0.0) {
                                fVar93 = sqrtf(position_01.fields.z);
                                if (fVar93 <= 0.95) goto label_04297c37;
label_04297c1d:
                                fVar106 = 1.0;
                                pSVar3 = (System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass;
                              }
                              else {
                                if (0.95 < SQRT(position_01.fields.z)) goto label_04297c1d;
label_04297c37:
                                if (g_data_057a6841 == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                  g_data_057a6841 = '\x01';
                                  if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) != 0) goto label_04297c55;
label_04297d98:
                                  __this_03 = (long *)TypeInfo_Math;
                                  il2cpp_runtime_helper_02337ed0();
                                  if (0.0 <= position_01.fields.z) goto label_04297c67;
label_04297daf:
                                  fVar93 = sqrtf(position_01.fields.z);
                                }
                                else {
                                  if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) goto label_04297d98;
label_04297c55:
                                  __this_03 = (long *)TypeInfo_Math;
                                  if (position_01.fields.z < 0.0) goto label_04297daf;
label_04297c67:
                                  fVar93 = SQRT(position_01.fields.z);
                                }
                                fVar106 = 0.0;
                                if (0.25 <= fVar93) {
                                  if (g_data_057a6841 == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                    g_data_057a6841 = '\x01';
                                  }
                                  __this_03 = (long *)TypeInfo_Math;
                                  if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  if (position_01.fields.z < 0.0) {
                                    fVar106 = sqrtf(position_01.fields.z);
                                    goto label_04297e19;
                                  }
                                  fVar106 = SQRT(position_01.fields.z);
                                  pSVar3 = (System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass;
                                }
                                else {
label_04297e19:
                                  pSVar3 = (System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass;
                                }
                              }
                              if (pSVar3 != (System_String_array *)0x0) {
                                if ((((*(char *)((long)pSVar3->m_Items + 0x1fc) != '\0') &&
                                     (*(int *)(pSVar3->m_Items + 0x1f) == 0)) &&
                                    (*(int *)(pSVar3->m_Items + 0x27) == 0)) &&
                                   (*(char *)((long)pSVar3->m_Items + 0xa4) != '\0')) {
                                  fVar106 = fVar106 * 0.25;
                                }
                                *(float *)(pSVar3->m_Items + 0x3f) = fVar106;
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
        else if ((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass !=
                 (System_String_array *)0x0) {
          bVar92 = true;
          if (*(int *)(((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass)->m_Items + 0x1f)
              != 1) goto label_042978f8;
          goto label_0429793d;
        }
      }
    }
  }
  else {
label_04297890:
    if (*(char *)(plVar89 + 9) != '\0') {
      return;
    }
    if ((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass != (System_String_array *)0x0) {
      *(undefined1 *)
       ((long)((System_String_array *)((Il2CppRGCTXData *)(plVar89 + 0xb))->klass)->m_Items + 0xac) = 0;
      return;
    }
  }
label_04297e5b:
  il2cpp_runtime_helper_022b2c90();
  _Stack_a8 = (_union_13)plVar89;
  _Stack_a0 = (_union_14)unaff_R12;
  if (g_data_057add04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"<color=#FF0000>");
    il2cpp_runtime_helper_023445d0(&"F2");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"K");
    il2cpp_runtime_helper_023445d0(&"DamageMultiplier");
    il2cpp_runtime_helper_023445d0(&"<color=#008000>READY</color>");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&" | ");
    il2cpp_runtime_helper_023445d0(&"F1");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    il2cpp_runtime_helper_023445d0(&"???");
    il2cpp_runtime_helper_023445d0(&" u/s");
    g_data_057add04 = '\x01';
  }
  UVar44.z = fStack_214;
  UVar44.x = (float)(undefined4)uStack_130;
  UVar44.y = (float)uStack_130._4_4_;
  UVar12.z = fStack_23c;
  UVar12.x = (float)uStack_1b0;
  UVar12.y = uStack_1b0._4_4_;
  fStack_c0 = 0.0;
  uStack_bc = 0;
  pIStack_d0 = (InvokerMethod)0x0;
  uStack_c8 = 0;
  fStack_c4 = 0.0;
  pIStack_e0 = (Il2CppMethodPointer)0x0;
  pIStack_d8 = (Il2CppMethodPointer)0x0;
  iStack_234 = 0;
  fStack_254 = 0.0;
  fStack_238 = 0.0;
  auStack_1e0._0_4_ = 0.0;
  auStack_1e0._4_4_ = 0.0;
  auStack_1e0._8_4_ = 0.0;
  auStack_1e0._12_4_ = 0.0;
  uStack_1d0._0_4_ = 0.0;
  uStack_1d0._4_4_ = 0.0;
  auStack_200._0_4_ = 0.0;
  auStack_200._4_4_ = 0.0;
  auStack_200._8_4_ = 0.0;
  auStack_200._12_4_ = 0.0;
  uStack_1f0._0_4_ = 0.0;
  uStack_1f0._4_4_ = 0.0;
  auStack_160._0_4_ = 0.0;
  auStack_160._4_4_ = 0.0;
  auStack_160._8_4_ = 0.0;
  auStack_160._12_4_ = 0.0;
  uStack_150._0_4_ = 0.0;
  uStack_150._4_4_ = 0.0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar85 != 0) {
    pUVar4 = *(UnityEngine_Camera_o **)(lVar85 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar115 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    UVar44.z = fStack_214;
    UVar44.x = (float)(undefined4)uStack_130;
    UVar44.y = (float)uStack_130._4_4_;
    UVar12.z = fStack_23c;
    UVar12.x = (float)uStack_1b0;
    UVar12.y = uStack_1b0._4_4_;
    if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_f8,pUVar4,UVar115,(MethodInfo *)0x0);
      pSVar84 = "???";
      UVar77.z = fStack_214;
      UVar77.x = (float)(undefined4)uStack_130;
      UVar77.y = (float)uStack_130._4_4_;
      UVar44.z = fStack_214;
      UVar44.x = (float)(undefined4)uStack_130;
      UVar44.y = (float)uStack_130._4_4_;
      UVar117.z = fStack_23c;
      UVar117.x = (float)uStack_1b0;
      UVar117.y = uStack_1b0._4_4_;
      UVar12.z = fStack_23c;
      UVar12.x = (float)uStack_1b0;
      UVar12.y = uStack_1b0._4_4_;
      aUStack_1a0[1].y = UStack_f8.fields.m_Direction.fields.y;
      aUStack_1a0[1].z = UStack_f8.fields.m_Direction.fields.z;
      aUStack_1a0[0].x = UStack_f8.fields.m_Origin.fields.x;
      aUStack_1a0[0].y = UStack_f8.fields.m_Origin.fields.y;
      aUStack_1a0[0].z = UStack_f8.fields.m_Origin.fields.z;
      aUStack_1a0[1].x = UStack_f8.fields.m_Direction.fields.x;
      pSVar3 = (System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass;
      if (pSVar3 != (System_String_array *)0x0) {
        str0 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)((long)pSVar3->m_Items + 0xfc) == 1) {
          uStack_1f0._0_4_ = UStack_f8.fields.m_Direction.fields.y;
          uStack_1f0._4_4_ = UStack_f8.fields.m_Direction.fields.z;
          auStack_200._0_4_ = UStack_f8.fields.m_Origin.fields.x;
          auStack_200._4_4_ = UStack_f8.fields.m_Origin.fields.y;
          auStack_200._8_4_ = UStack_f8.fields.m_Origin.fields.z;
          auStack_200._12_4_ = UStack_f8.fields.m_Direction.fields.x;
          pSVar5 = pSVar3->m_Items[0x2b];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar80 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          UVar76.z = fStack_214;
          UVar76.x = (float)(undefined4)uStack_130;
          UVar76.y = (float)uStack_130._4_4_;
          UVar44.z = fStack_214;
          UVar44.x = (float)(undefined4)uStack_130;
          UVar44.y = (float)uStack_130._4_4_;
          UVar46.z = fStack_214;
          UVar46.x = (float)(undefined4)uStack_130;
          UVar46.y = (float)uStack_130._4_4_;
          UVar45.z = fStack_214;
          UVar45.x = (float)(undefined4)uStack_130;
          UVar45.y = (float)uStack_130._4_4_;
          UVar43.z = fStack_23c;
          UVar43.x = (float)uStack_1b0;
          UVar43.y = uStack_1b0._4_4_;
          UVar12.z = fStack_23c;
          UVar12.x = (float)uStack_1b0;
          UVar12.y = uStack_1b0._4_4_;
          UVar14.z = fStack_23c;
          UVar14.x = (float)uStack_1b0;
          UVar14.y = uStack_1b0._4_4_;
          UVar13.z = fStack_23c;
          UVar13.x = (float)uStack_1b0;
          UVar13.y = uStack_1b0._4_4_;
          if ((char)bVar80 == '\0') {
            uStack_1d0._0_4_ = (float)uStack_1f0;
            uStack_1d0._4_4_ = uStack_1f0._4_4_;
            auStack_1e0._0_8_ = auStack_200._0_8_;
            auStack_1e0._8_8_ = auStack_200._8_8_;
            if ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                (System_String_array *)0x0) {
              pSVar5 = ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[10];
              uStack_1d0 = uStack_1f0;
              UVar12 = UVar43;
              UVar44 = UVar76;
              goto joined_r0x04298280;
            }
          }
          else {
            uStack_150._0_4_ = (float)uStack_1f0;
            uStack_150._4_4_ = uStack_1f0._4_4_;
            auStack_160._0_8_ = auStack_200._0_8_;
            auStack_160._8_8_ = auStack_200._8_8_;
            UVar12 = UVar13;
            UVar44 = UVar45;
            if (((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                 (System_String_array *)0x0) &&
               (pSVar5 = ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[0x2b]
               , UVar12 = UVar14, UVar44 = UVar46, pSVar5 != (System_String_o *)0x0)) {
              if (g_data_057a6841 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6841 = '\x01';
              }
              fVar106 = (float)pSVar5[0x10].fields._stringLength;
              position_01.fields.z = *(float *)&pSVar5[0x10].fields._firstChar;
              fVar93 = *(float *)&pSVar5[0x11].klass;
              if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                in_stack_fffffffffffffd70 = fVar106;
              }
              pfVar88 = (float *)auStack_160;
              position_01.fields.z =
                   fVar93 * fVar93 + position_01.fields.z * position_01.fields.z + fVar106 * fVar106;
              if (0.0 <= position_01.fields.z) goto label_04298371;
label_0429824f:
              position_01.fields.z = sqrtf(position_01.fields.z);
label_04298375:
              uStack_170 = *(undefined8 *)(pfVar88 + 4);
              fVar93 = *pfVar88;
              fVar106 = pfVar88[1];
              uStack_180 = *(undefined8 *)pfVar88;
              fVar107 = pfVar88[2];
              fVar108 = pfVar88[3];
              uStack_178 = *(undefined8 *)(pfVar88 + 2);
              if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar81 = UnityEngine_LayerMask__get_value
                                 ((UnityEngine_LayerMask_Fields)(int32_t)*(undefined8 *)(TypeInfo_HumanPlayerController + 0xb8),
                                  (MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uStack_280._0_4_ = 1000.0;
              ray.fields.m_Origin.fields.z = (float)(undefined4)uStack_178;
              ray.fields.m_Direction.fields.x = (float)uStack_178._4_4_;
              ray.fields.m_Origin.fields.x = (float)(undefined4)uStack_180;
              ray.fields.m_Origin.fields.y = (float)uStack_180._4_4_;
              ray.fields.m_Direction.fields.y = (float)(undefined4)uStack_170;
              ray.fields.m_Direction.fields.z = (float)uStack_170._4_4_;
              uVar95 = uStack_180;
              uVar119 = uStack_178;
              uVar120 = uStack_170;
              bVar80 = UnityEngine_Physics__Raycast_4e78080
                                 (ray,(UnityEngine_RaycastHit_o *)&pIStack_e0,1000.0,iVar81,(MethodInfo *)0x0)
              ;
              if ((char)bVar80 != '\0') {
                __this_02.fields.m_Point.fields.z = (float)(int)uVar119;
                __this_02.fields.m_Normal.fields.x = (float)(int)((ulong)uVar119 >> 0x20);
                __this_02.fields.m_Point.fields.x = (float)(int)uVar95;
                __this_02.fields.m_Point.fields.y = (float)(int)((ulong)uVar95 >> 0x20);
                __this_02.fields.m_Normal.fields.y = (float)(int)uVar120;
                __this_02.fields.m_Normal.fields.z = (float)(int)((ulong)uVar120 >> 0x20);
                __this_02.fields.m_FaceID = in_stack_fffffffffffffd68;
                __this_02.fields.m_Distance = position_01.fields.z;
                __this_02.fields.m_UV.fields.x = in_stack_fffffffffffffd70;
                __this_02.fields.m_UV.fields.y = in_stack_fffffffffffffd74;
                __this_02.fields.m_Collider = in_stack_fffffffffffffd78;
                UVar115 = UnityEngine_RaycastHit__get_point(__this_02,(MethodInfo *)&pIStack_e0);
                UVar48.z = fStack_214;
                UVar48.x = (float)(undefined4)uStack_130;
                UVar48.y = (float)uStack_130._4_4_;
                UVar47.z = fStack_214;
                UVar47.x = (float)(undefined4)uStack_130;
                UVar47.y = (float)uStack_130._4_4_;
                UVar44.z = fStack_214;
                UVar44.x = (float)(undefined4)uStack_130;
                UVar44.y = (float)uStack_130._4_4_;
                UVar16.z = fStack_23c;
                UVar16.x = (float)uStack_1b0;
                UVar16.y = uStack_1b0._4_4_;
                UVar15.z = fStack_23c;
                UVar15.x = (float)uStack_1b0;
                UVar15.y = uStack_1b0._4_4_;
                UVar12.z = fStack_23c;
                UVar12.x = (float)uStack_1b0;
                UVar12.y = uStack_1b0._4_4_;
                fVar93 = UVar115.fields.z;
                if ((((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass ==
                      (System_String_array *)0x0) ||
                    (pSVar84 = ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items
                               [10], UVar12 = UVar15, UVar44 = UVar47, pSVar84 == (System_String_o *)0x0)) ||
                   (SVar6 = pSVar84->fields, UVar12 = UVar16, UVar44 = UVar48,
                   SVar6 == (System_String_Fields)0x0)) goto label_042993fa;
                UVar116 = (UnityEngine_Vector3_Fields)
                          UnityEngine_Transform__get_position
                                    ((UnityEngine_Transform_o *)SVar6,(MethodInfo *)0x0);
                uStack_280._0_4_ = UVar115.fields.x;
                uStack_280._4_4_ = UVar115.fields.y;
                fVar106 = UVar116.y;
                if (g_data_057a6841 == '\0') {
                  auStack_250._0_4_ = UVar116.z;
                  fStack_228 = (float)extraout_XMM0_Dc_00;
                  auStack_230 = (undefined1  [8])UVar116._0_8_;
                  fStack_224 = (float)extraout_XMM0_Dd;
                  uStack_210 = CONCAT44(fVar106,fVar106);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  auVar113 = _auStack_230;
                  UVar116.z = (float)auStack_250._0_4_;
                  UVar116.x = (float)auStack_230._0_4_;
                  UVar116.y = (float)auStack_230._4_4_;
                  g_data_057a6841 = '\x01';
                  fVar106 = (float)uStack_210;
                  _auStack_230 = auVar113;
                }
                uStack_280._0_4_ = (float)uStack_280 - UVar116.x;
                fVar93 = fVar93 - UVar116.z;
                if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uStack_280._0_4_ =
                     fVar93 * fVar93 +
                     (uStack_280._4_4_ - fVar106) * (uStack_280._4_4_ - fVar106) +
                     (float)uStack_280 * (float)uStack_280;
                fVar93 = 0.0;
                fVar106 = 0.0;
                fVar107 = 0.0;
                fVar108 = 0.0;
                if ((float)uStack_280 < 0.0) {
                  uStack_280._0_4_ = sqrtf((float)uStack_280);
                }
                else {
                  uStack_280._0_4_ = SQRT((float)uStack_280);
                }
                iStack_234 = (int)(float)uStack_280;
                pSVar84 = System_Int32__ToString((int32_t)&iStack_234,(MethodInfo *)0x0);
              }
              UVar49.z = fStack_214;
              UVar49.x = (float)(undefined4)uStack_130;
              UVar49.y = (float)uStack_130._4_4_;
              UVar44.z = fStack_214;
              UVar44.x = (float)(undefined4)uStack_130;
              UVar44.y = (float)uStack_130._4_4_;
              UVar17.z = fStack_23c;
              UVar17.x = (float)uStack_1b0;
              UVar17.y = uStack_1b0._4_4_;
              UVar12.z = fStack_23c;
              UVar12.x = (float)uStack_1b0;
              UVar12.y = uStack_1b0._4_4_;
              lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if ((lVar85 != 0) && (UVar12 = UVar17, UVar44 = UVar49, *(long *)(lVar85 + 0x88) != 0)) {
                if (*(char *)(*(long *)(lVar85 + 0x88) + 0x11) != '\0') {
                  str0 = System_String__Concat_3ae5ba0(str0,pSVar84,(MethodInfo *)0x0);
                  UVar44.z = fStack_214;
                  UVar44.x = (float)(undefined4)uStack_130;
                  UVar44.y = (float)uStack_130._4_4_;
                  UVar12.z = fStack_23c;
                  UVar12.x = (float)uStack_1b0;
                  UVar12.y = uStack_1b0._4_4_;
                  lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  if (lVar85 == 0) goto label_042993fa;
                }
                UVar44.z = fStack_214;
                UVar44.x = (float)(undefined4)uStack_130;
                UVar44.y = (float)uStack_130._4_4_;
                UVar12.z = fStack_23c;
                UVar12.x = (float)uStack_1b0;
                UVar12.y = uStack_1b0._4_4_;
                if (*(long *)(lVar85 + 0x98) != 0) {
                  iVar91 = *(int *)(*(long *)(lVar85 + 0x98) + 0x14);
                  if (iVar91 == 2) {
                    bVar80 = System_String__op_Inequality
                                       (str0,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                        (MethodInfo *)0x0);
                    if ((char)bVar80 != '\0') {
                      str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                    }
                    UVar75.z = fStack_214;
                    UVar75.x = (float)(undefined4)uStack_130;
                    UVar75.y = (float)uStack_130._4_4_;
                    UVar74.z = fStack_214;
                    UVar74.x = (float)(undefined4)uStack_130;
                    UVar74.y = (float)uStack_130._4_4_;
                    UVar73.z = fStack_214;
                    UVar73.x = (float)(undefined4)uStack_130;
                    UVar73.y = (float)uStack_130._4_4_;
                    UVar44.z = fStack_214;
                    UVar44.x = (float)(undefined4)uStack_130;
                    UVar44.y = (float)uStack_130._4_4_;
                    UVar42.z = fStack_23c;
                    UVar42.x = (float)uStack_1b0;
                    UVar42.y = uStack_1b0._4_4_;
                    UVar41.z = fStack_23c;
                    UVar41.x = (float)uStack_1b0;
                    UVar41.y = uStack_1b0._4_4_;
                    UVar40.z = fStack_23c;
                    UVar40.x = (float)uStack_1b0;
                    UVar40.y = uStack_1b0._4_4_;
                    UVar12.z = fStack_23c;
                    UVar12.x = (float)uStack_1b0;
                    UVar12.y = uStack_1b0._4_4_;
                    fStack_254 = position_01.fields.z;
                    if ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                        (System_String_array *)0x0) {
                      pSVar84 = ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->
                                m_Items[0x1c];
                      if (pSVar84 == (System_String_o *)0x0) goto label_0429892b;
                      pSVar7 = pSVar84->klass;
                      bVar2 = (pSVar7->_2).naturalAligment;
                      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                      if ((bVar2 < bVar1) || ((pSVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BladeWeapon)) {
                        bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
                        if ((bVar2 < bVar1) || ((pSVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_AHSSWeapon))
                        {
                          bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
                          if ((bVar2 < bVar1) ||
                             ((pSVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_APGWeapon)) {
                            bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            if ((bVar2 < bVar1) ||
                               ((pSVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_ThunderspearWeapon)) {
label_0429892b:
                              if (position_01.fields.z <= 10.0) {
                                position_01.fields.z = 10.0;
                              }
                              pSVar84 = System_Single__ToString_3cccfe0
                                                  (position_01.fields.z / 100.0,
                                                   (System_String_o *)&stack0xfffffffffffffd6c,"F1");
                              str0 = System_String__Concat_3af7150
                                               (str0,pSVar84,"K",(MethodInfo *)0x0);
                              UVar44.z = fStack_214;
                              UVar44.x = (float)(undefined4)uStack_130;
                              UVar44.y = (float)uStack_130._4_4_;
                              UVar12.z = fStack_23c;
                              UVar12.x = (float)uStack_1b0;
                              UVar12.y = uStack_1b0._4_4_;
                              if ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                  (System_String_array *)0x0) {
                                pSVar84 = ((System_String_array *)
                                          ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[0x1b];
                                if (pSVar84 != (System_String_o *)0x0) {
                                  pSVar7 = pSVar84->klass;
                                  bVar2 = (TypeInfo_AHSSTwinShot->_2).naturalAligment;
                                  if ((bVar2 <= (pSVar7->_2).naturalAligment) &&
                                     ((pSVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_AHSSTwinShot)) {
                                    fStack_254 = (float)(int)fStack_254;
                                    if (fStack_254 <= 10.0) {
                                      fStack_254 = 10.0;
                                    }
                                    fStack_254 = fStack_254 / 100.0;
                                    pSVar84 = System_Single__ToString_3cccfe0
                                                        (fStack_254,(System_String_o *)&fStack_254,
                                                         "F1");
                                    str0 = System_String__Concat_3af7470
                                                     (str0," | ",pSVar84,"K",(MethodInfo *)0x0
                                                     );
                                  }
                                }
                                goto label_04298a10;
                              }
                            }
                            else {
                              lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                              UVar12 = UVar40;
                              UVar44 = UVar73;
                              if (((lVar85 != 0) &&
                                  (lVar85 = *(long *)(lVar85 + 0x58), UVar12 = UVar41, UVar44 = UVar74,
                                  lVar85 != 0)) &&
                                 (lVar85 = *(long *)(lVar85 + 0x48), UVar12 = UVar42, UVar44 = UVar75,
                                 lVar85 != 0)) {
                                if (*(char *)(lVar85 + 0x11) != '\0') goto label_0429892b;
                                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                UVar44.z = fStack_214;
                                UVar44.x = (float)(undefined4)uStack_130;
                                UVar44.y = (float)uStack_130._4_4_;
                                UVar12.z = fStack_23c;
                                UVar12.x = (float)uStack_1b0;
                                UVar12.y = uStack_1b0._4_4_;
                                plVar89 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                                if (plVar89 != (long *)0x0) {
                                  puVar86 = &"Thunderspear";
                                  goto label_042988bf;
                                }
                              }
                            }
                          }
                          else {
                            if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            UVar44.z = fStack_214;
                            UVar44.x = (float)(undefined4)uStack_130;
                            UVar44.y = (float)uStack_130._4_4_;
                            UVar12.z = fStack_23c;
                            UVar12.x = (float)uStack_1b0;
                            UVar12.y = uStack_1b0._4_4_;
                            plVar89 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                            if (plVar89 != (long *)0x0) {
                              puVar86 = &"APG";
                              goto label_042988bf;
                            }
                          }
                        }
                        else {
                          if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          UVar44.z = fStack_214;
                          UVar44.x = (float)(undefined4)uStack_130;
                          UVar44.y = (float)uStack_130._4_4_;
                          UVar12.z = fStack_23c;
                          UVar12.x = (float)uStack_1b0;
                          UVar12.y = uStack_1b0._4_4_;
                          plVar89 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                          if (plVar89 != (long *)0x0) {
                            puVar86 = &"AHSS";
label_042988bf:
                            plVar89 = (long *)(**(code **)(*plVar89 + 0x1a8))
                                                        (plVar89,*puVar86,*(undefined8 *)(*plVar89 + 0x1b0));
                            UVar44.z = fStack_214;
                            UVar44.x = (float)(undefined4)uStack_130;
                            UVar44.y = (float)uStack_130._4_4_;
                            UVar12.z = fStack_23c;
                            UVar12.x = (float)uStack_1b0;
                            UVar12.y = uStack_1b0._4_4_;
                            goto joined_r0x042988d5;
                          }
                        }
                      }
                      else {
                        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        UVar44.z = fStack_214;
                        UVar44.x = (float)(undefined4)uStack_130;
                        UVar44.y = (float)uStack_130._4_4_;
                        UVar12.z = fStack_23c;
                        UVar12.x = (float)uStack_1b0;
                        UVar12.y = uStack_1b0._4_4_;
                        plVar89 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                        if (plVar89 != (long *)0x0) {
                          plVar89 = (long *)(**(code **)(*plVar89 + 0x1a8))
                                                      (plVar89,"Blade",*(undefined8 *)(*plVar89 + 0x1b0))
                          ;
                          UVar44.z = fStack_214;
                          UVar44.x = (float)(undefined4)uStack_130;
                          UVar44.y = (float)uStack_130._4_4_;
                          UVar12.z = fStack_23c;
                          UVar12.x = (float)uStack_1b0;
                          UVar12.y = uStack_1b0._4_4_;
joined_r0x042988d5:
                          if (plVar89 != (long *)0x0) {
                            plVar89 = (long *)(**(code **)(*plVar89 + 0x1a8))
                                                        (plVar89,"DamageMultiplier",
                                                         *(undefined8 *)(*plVar89 + 0x1b0));
                            UVar44.z = fStack_214;
                            UVar44.x = (float)(undefined4)uStack_130;
                            UVar44.y = (float)uStack_130._4_4_;
                            UVar12.z = fStack_23c;
                            UVar12.x = (float)uStack_1b0;
                            UVar12.y = uStack_1b0._4_4_;
                            if (plVar89 != (long *)0x0) {
                              fVar109 = (float)(**(code **)(*plVar89 + 0x388))
                                                         (plVar89,*(undefined8 *)(*plVar89 + 0x390));
                              position_01.fields.z = (float)(int)(fVar109 * position_01.fields.z);
                              goto label_0429892b;
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (iVar91 == 1) {
                      bVar80 = System_String__op_Inequality
                                         (str0,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                          (MethodInfo *)0x0);
                      position_01.fields.z = extraout_XMM0_Da;
                      if ((char)bVar80 != '\0') {
                        str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                        position_01.fields.z = extraout_XMM0_Da_00;
                      }
                      pSVar84 = System_Single__ToString_3cccfe0
                                          (position_01.fields.z,(System_String_o *)&stack0xfffffffffffffd6c,
                                           "F1");
                      str0 = System_String__Concat_3af7150(str0,pSVar84," u/s",(MethodInfo *)0x0);
                    }
label_04298a10:
                    UVar54.z = fStack_214;
                    UVar54.x = (float)(undefined4)uStack_130;
                    UVar54.y = (float)uStack_130._4_4_;
                    UVar53.z = fStack_214;
                    UVar53.x = (float)(undefined4)uStack_130;
                    UVar53.y = (float)uStack_130._4_4_;
                    UVar52.z = fStack_214;
                    UVar52.x = (float)(undefined4)uStack_130;
                    UVar52.y = (float)uStack_130._4_4_;
                    UVar51.z = fStack_214;
                    UVar51.x = (float)(undefined4)uStack_130;
                    UVar51.y = (float)uStack_130._4_4_;
                    UVar50.z = fStack_214;
                    UVar50.x = (float)(undefined4)uStack_130;
                    UVar50.y = (float)uStack_130._4_4_;
                    UVar44.z = fStack_214;
                    UVar44.x = (float)(undefined4)uStack_130;
                    UVar44.y = (float)uStack_130._4_4_;
                    UVar22.z = fStack_23c;
                    UVar22.x = (float)uStack_1b0;
                    UVar22.y = uStack_1b0._4_4_;
                    UVar21.z = fStack_23c;
                    UVar21.x = (float)uStack_1b0;
                    UVar21.y = uStack_1b0._4_4_;
                    UVar20.z = fStack_23c;
                    UVar20.x = (float)uStack_1b0;
                    UVar20.y = uStack_1b0._4_4_;
                    UVar19.z = fStack_23c;
                    UVar19.x = (float)uStack_1b0;
                    UVar19.y = uStack_1b0._4_4_;
                    UVar18.z = fStack_23c;
                    UVar18.x = (float)uStack_1b0;
                    UVar18.y = uStack_1b0._4_4_;
                    UVar12.z = fStack_23c;
                    UVar12.x = (float)uStack_1b0;
                    UVar12.y = uStack_1b0._4_4_;
                    lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                    if ((lVar85 != 0) &&
                       (lVar85 = *(long *)(lVar85 + 0x48), UVar12 = UVar18, UVar44 = UVar50, lVar85 != 0)) {
                      if (*(char *)(lVar85 + 0x11) != '\0') {
                        lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                        UVar12 = UVar19;
                        UVar44 = UVar51;
                        if (((lVar85 == 0) ||
                            (lVar85 = *(long *)(lVar85 + 0x58), UVar12 = UVar20, UVar44 = UVar52, lVar85 == 0)
                            ) || (lVar85 = *(long *)(lVar85 + 0x48), UVar12 = UVar21, UVar44 = UVar53,
                                 lVar85 == 0)) goto label_042993fa;
                        if (*(char *)(lVar85 + 0x11) != '\0') {
                          UVar12 = UVar22;
                          UVar44 = UVar54;
                          if ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass ==
                              (System_String_array *)0x0) goto label_042993fa;
                          pSVar84 = ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->
                                    m_Items[0x1c];
                          if (pSVar84 != (System_String_o *)0x0) {
                            pSVar7 = pSVar84->klass;
                            bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            if ((bVar2 <= (pSVar7->_2).naturalAligment) &&
                               ((pSVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_ThunderspearWeapon)) {
                              bVar80 = System_String__op_Inequality
                                                 (str0,(System_String_o *)
                                                       **(undefined8 **)(g_data_057b9c00 + 0xb8),
                                                  (MethodInfo *)0x0);
                              if ((char)bVar80 != '\0') {
                                str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                              }
                              UVar55.z = fStack_214;
                              UVar55.x = (float)(undefined4)uStack_130;
                              UVar55.y = (float)uStack_130._4_4_;
                              UVar44.z = fStack_214;
                              UVar44.x = (float)(undefined4)uStack_130;
                              UVar44.y = (float)uStack_130._4_4_;
                              UVar23.z = fStack_23c;
                              UVar23.x = (float)uStack_1b0;
                              UVar23.y = uStack_1b0._4_4_;
                              UVar12.z = fStack_23c;
                              UVar12.x = (float)uStack_1b0;
                              UVar12.y = uStack_1b0._4_4_;
                              if (((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass ==
                                   (System_String_array *)0x0) ||
                                 (__this_01 = (Characters_BaseUseable_o *)
                                              ((System_String_array *)
                                              ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[0x1c],
                                 UVar12 = UVar23, UVar44 = UVar55,
                                 __this_01 == (Characters_BaseUseable_o *)0x0)) goto label_042993fa;
                              bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                              if (((__this_01->klass->_2).naturalAligment < bVar2) ||
                                 ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_ThunderspearWeapon))
                              goto label_042993ff;
                              fStack_238 = Characters_BaseUseable__GetCooldownLeft
                                                     (__this_01,(MethodInfo *)0x0);
                              fVar93 = 0.0;
                              fVar106 = 0.0;
                              fVar107 = 0.0;
                              fVar108 = 0.0;
                              if (fStack_238 <= 0.0) {
                                str0 = System_String__Concat_3ae5ba0(str0,"<color=#008000>READY</color>",(MethodInfo *)0x0);
                              }
                              else {
                                pSVar84 = System_Single__ToString_3cccfe0
                                                    (fStack_238,(System_String_o *)&fStack_238,"F2");
                                str0 = System_String__Concat_3af7470
                                                 (str0,"<color=#FF0000>",pSVar84,"</color>",(MethodInfo *)0x0);
                              }
                            }
                          }
                        }
                      }
                      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UI_CursorManager__SetCrosshairText(str0,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UI_CursorManager__SetCrosshairColor
                                ((uint)((float)uStack_280 <= 120.0),(MethodInfo *)0x0);
                      UVar57.z = fStack_214;
                      UVar57.x = (float)(undefined4)uStack_130;
                      UVar57.y = (float)uStack_130._4_4_;
                      UVar56.z = fStack_214;
                      UVar56.x = (float)(undefined4)uStack_130;
                      UVar56.y = (float)uStack_130._4_4_;
                      UVar44.z = fStack_214;
                      UVar44.x = (float)(undefined4)uStack_130;
                      UVar44.y = (float)uStack_130._4_4_;
                      UVar25.z = fStack_23c;
                      UVar25.x = (float)uStack_1b0;
                      UVar25.y = uStack_1b0._4_4_;
                      UVar24.z = fStack_23c;
                      UVar24.x = (float)uStack_1b0;
                      UVar24.y = uStack_1b0._4_4_;
                      UVar12.z = fStack_23c;
                      UVar12.x = (float)uStack_1b0;
                      UVar12.y = uStack_1b0._4_4_;
                      lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                      if ((lVar85 != 0) &&
                         (lVar85 = *(long *)(lVar85 + 0xa8), UVar12 = UVar24, UVar44 = UVar56, lVar85 != 0)) {
                        if (*(char *)(lVar85 + 0x11) == '\0') {
                          return;
                        }
                        UVar12 = UVar25;
                        UVar44 = UVar57;
                        if ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->method !=
                            (System_String_array *)0x0) {
                          uVar95 = (*((((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->method)
                                      ->obj).klass)->vtable[0x42].methodPtr)();
                          UVar59.z = fStack_214;
                          UVar59.x = (float)(undefined4)uStack_130;
                          UVar59.y = (float)uStack_130._4_4_;
                          UVar58.z = fStack_214;
                          UVar58.x = (float)(undefined4)uStack_130;
                          UVar58.y = (float)uStack_130._4_4_;
                          UVar44.z = fStack_214;
                          UVar44.x = (float)(undefined4)uStack_130;
                          UVar44.y = (float)uStack_130._4_4_;
                          UVar27.z = fStack_23c;
                          UVar27.x = (float)uStack_1b0;
                          UVar27.y = uStack_1b0._4_4_;
                          UVar26.z = fStack_23c;
                          UVar26.x = (float)uStack_1b0;
                          UVar26.y = uStack_1b0._4_4_;
                          UVar12.z = fStack_23c;
                          UVar12.x = (float)uStack_1b0;
                          UVar12.y = uStack_1b0._4_4_;
                          lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                          if (((lVar85 != 0) &&
                              (lVar85 = *(long *)(lVar85 + 0x28), UVar12 = UVar26, UVar44 = UVar58,
                              lVar85 != 0)) &&
                             (pUVar8 = *(UnityEngine_Transform_o **)(lVar85 + 0x10), UVar12 = UVar27,
                             UVar44 = UVar59, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                            fVar121 = fVar106;
                            UVar115 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
                            position_01.fields.z = UVar115.fields.x;
                            fVar109 = UVar115.fields.y;
                            uVar103 = extraout_XMM0_Dc_01;
                            iVar81 = extraout_XMM0_Dd_00;
                            if (g_data_057a68cb == '\0') {
                              uStack_248._0_4_ = (float)extraout_XMM0_Dc_01;
                              auStack_250 = (undefined1  [8])UVar115.fields._0_8_;
                              uStack_248._4_4_ = (float)extraout_XMM0_Dd_00;
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                              g_data_057a68cb = '\x01';
                              position_01.fields.z = (float)auStack_250._0_4_;
                              fVar109 = (float)auStack_250._4_4_;
                              uVar103 = (float)uStack_248;
                              iVar81 = (int32_t)uStack_248._4_4_;
                            }
                            uStack_280._0_4_ = (float)uVar95;
                            uStack_280._4_4_ = (float)((ulong)uVar95 >> 0x20);
                            fVar105 = UVar115.fields.z - fVar93;
                            fVar106 = fVar106 - fVar121;
                            fVar94 = fVar109 - uStack_280._4_4_;
                            if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                              auStack_250._4_4_ = fVar109;
                              auStack_250._0_4_ = fVar109 - uStack_280._4_4_;
                              uStack_248._0_4_ = (float)uVar103;
                              uStack_248._4_4_ = (float)iVar81;
                              il2cpp_runtime_helper_02337ed0();
                              fVar94 = (float)auStack_250._0_4_;
                            }
                            position_01.fields.z =
                                 (position_01.fields.z - (float)uStack_280) *
                                 (position_01.fields.z - (float)uStack_280);
                            fVar106 = fVar106 * fVar106;
                            fVar109 = (fVar109 - uStack_280._4_4_) * (fVar109 - uStack_280._4_4_);
                            fVar94 = position_01.fields.z + fVar94 * fVar94 + fVar105 * fVar105;
                            if (fVar94 < 0.0) {
                              fVar94 = sqrtf(fVar94);
                              position_01.fields.z = extraout_XMM0_Db;
                              fVar106 = extraout_XMM0_Dc_02;
                              fVar109 = extraout_XMM0_Dd_01;
                            }
                            else {
                              fVar94 = SQRT(fVar94);
                            }
                            UVar61.z = fStack_214;
                            UVar61.x = (float)(undefined4)uStack_130;
                            UVar61.y = (float)uStack_130._4_4_;
                            UVar60.z = fStack_214;
                            UVar60.x = (float)(undefined4)uStack_130;
                            UVar60.y = (float)uStack_130._4_4_;
                            UVar44.z = fStack_214;
                            UVar44.x = (float)(undefined4)uStack_130;
                            UVar44.y = (float)uStack_130._4_4_;
                            UVar29.z = fStack_23c;
                            UVar29.x = (float)uStack_1b0;
                            UVar29.y = uStack_1b0._4_4_;
                            UVar28.z = fStack_23c;
                            UVar28.x = (float)uStack_1b0;
                            UVar28.y = uStack_1b0._4_4_;
                            UVar12.z = fStack_23c;
                            UVar12.x = (float)uStack_1b0;
                            UVar12.y = uStack_1b0._4_4_;
                            if (((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                 (System_String_array *)0x0) &&
                               (pSVar84 = ((System_String_array *)
                                          ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[10],
                               UVar12 = UVar28, UVar44 = UVar60, pSVar84 != (System_String_o *)0x0)) {
                              auStack_230._4_4_ = position_01.fields.z;
                              auStack_230._0_4_ = fVar94;
                              fStack_228 = fVar106;
                              fStack_224 = fVar109;
                              SVar6 = pSVar84->fields;
                              UVar12 = UVar29;
                              UVar44 = UVar61;
                              if (SVar6 != (System_String_Fields)0x0) {
                                UVar115 = UnityEngine_Transform__get_right
                                                    ((UnityEngine_Transform_o *)SVar6,(MethodInfo *)0x0);
                                UVar63.z = fStack_214;
                                UVar63.x = (float)(undefined4)uStack_130;
                                UVar63.y = (float)uStack_130._4_4_;
                                UVar62.z = fStack_214;
                                UVar62.x = (float)(undefined4)uStack_130;
                                UVar62.y = (float)uStack_130._4_4_;
                                UVar44.z = fStack_214;
                                UVar44.x = (float)(undefined4)uStack_130;
                                UVar44.y = (float)uStack_130._4_4_;
                                UVar31.z = fStack_23c;
                                UVar31.x = (float)uStack_1b0;
                                UVar31.y = uStack_1b0._4_4_;
                                UVar30.z = fStack_23c;
                                UVar30.x = (float)uStack_1b0;
                                UVar30.y = uStack_1b0._4_4_;
                                UVar12.z = fStack_23c;
                                UVar12.x = (float)uStack_1b0;
                                UVar12.y = uStack_1b0._4_4_;
                                if (((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                     (System_String_array *)0x0) &&
                                   (pSVar84 = ((System_String_array *)
                                              ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[10],
                                   UVar12 = UVar30, UVar44 = UVar62, pSVar84 != (System_String_o *)0x0)) {
                                  uStack_248 = extraout_XMM0_Qb_00;
                                  auStack_250 = (undefined1  [8])UVar115.fields._0_8_;
                                  SVar6 = pSVar84->fields;
                                  UVar12 = UVar31;
                                  UVar44 = UVar63;
                                  if (SVar6 != (System_String_Fields)0x0) {
                                    UVar117 = (UnityEngine_Vector3_Fields)
                                              UnityEngine_Transform__get_right
                                                        ((UnityEngine_Transform_o *)SVar6,(MethodInfo *)0x0);
                                    UVar64.z = fStack_214;
                                    UVar64.x = (float)(undefined4)uStack_130;
                                    UVar64.y = (float)uStack_130._4_4_;
                                    UVar44.z = fStack_214;
                                    UVar44.x = (float)(undefined4)uStack_130;
                                    UVar44.y = (float)uStack_130._4_4_;
                                    UVar12.z = fStack_23c;
                                    UVar12.x = (float)uStack_1b0;
                                    UVar12.y = uStack_1b0._4_4_;
                                    fStack_23c = UVar117.z;
                                    uStack_1b0 = UVar117._0_8_;
                                    lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                    if (lVar85 != 0) {
                                      pUVar4 = *(UnityEngine_Camera_o **)(lVar85 + 0x20);
                                      fStack_278 = (float)extraout_XMM0_Qb;
                                      fStack_274 = (float)((ulong)extraout_XMM0_Qb >> 0x20);
                                      UVar12 = UVar117;
                                      UVar44 = UVar64;
                                      if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
                                        auStack_1c0._4_4_ =
                                             (float)auStack_230._0_4_ *
                                             *(float *)(&g_data_00d1d698 + (ulong)(50.0 < fVar94) * 4);
                                        auStack_1c0._0_4_ = auStack_1c0._4_4_;
                                        fStack_1b8 = fStack_228;
                                        fStack_1b4 = fStack_224;
                                        position_01.fields.z = (float)uStack_248 * fStack_228;
                                        fVar106 = uStack_248._4_4_ * fStack_224;
                                        auStack_230._0_4_ = auStack_1c0._4_4_;
                                        position.fields.x =
                                             (float)uStack_280 -
                                             (float)auStack_250._0_4_ * (float)auStack_1c0._4_4_;
                                        position.fields.y =
                                             uStack_280._4_4_ -
                                             (float)auStack_250._4_4_ * (float)auStack_1c0._4_4_;
                                        position.fields.z =
                                             fVar93 - UVar115.fields.z * (float)auStack_1c0._4_4_;
                                        auStack_250._4_4_ = fVar121;
                                        auStack_250._0_4_ = position.fields.z;
                                        uStack_248._0_4_ = fVar107;
                                        uStack_248._4_4_ = fVar108;
                                        uStack_1a8 = extraout_XMM0_Qb_01;
                                        UVar115 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                                            (pUVar4,position,(MethodInfo *)0x0);
                                        uStack_210 = UVar115.fields._0_8_;
                                        if (g_data_057add05 == '\0') {
                                          il2cpp_runtime_helper_023445d0(uStack_210,UVar115.fields.z,&TypeInfo_CursorManager);
                                          g_data_057add05 = '\x01';
                                        }
                                        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        UVar115 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                                        fVar109 = atan2f(uStack_210._4_4_ - UVar115.fields.y,
                                                         (float)uStack_210 - UVar115.fields.x);
                                        uVar103 = extraout_var._4_4_;
                                        uVar104 = extraout_var._8_4_;
                                        auVar9._4_8_ = 0;
                                        auVar9._0_4_ = fVar109 * 57.29578 * 0.017453292;
                                        UVar114 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                            ((UnityEngine_Vector3_o)(auVar9 << 0x40),
                                                             (MethodInfo *)0x0);
                                        UVar66.z = fStack_214;
                                        UVar66.x = (float)(undefined4)uStack_130;
                                        UVar66.y = (float)uStack_130._4_4_;
                                        UVar65.z = fStack_214;
                                        UVar65.x = (float)(undefined4)uStack_130;
                                        UVar65.y = (float)uStack_130._4_4_;
                                        UVar44.z = fStack_214;
                                        UVar44.x = (float)(undefined4)uStack_130;
                                        UVar44.y = (float)uStack_130._4_4_;
                                        UVar33.z = fStack_23c;
                                        UVar33.x = (float)uStack_1b0;
                                        UVar33.y = uStack_1b0._4_4_;
                                        UVar32.z = fStack_23c;
                                        UVar32.x = (float)uStack_1b0;
                                        UVar32.y = uStack_1b0._4_4_;
                                        UVar12.z = fStack_23c;
                                        UVar12.x = (float)uStack_1b0;
                                        UVar12.y = uStack_1b0._4_4_;
                                        if (((System_String_array *)
                                             ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                             (System_String_array *)0x0) &&
                                           (pSVar84 = ((System_String_array *)
                                                      ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items
                                                      [10], UVar12 = UVar32, UVar44 = UVar65,
                                           pSVar84 != (System_String_o *)0x0)) {
                                          auStack_120._8_4_ = uVar103;
                                          auStack_120._0_8_ = UVar114.fields._8_8_;
                                          auStack_120._12_4_ = uVar104;
                                          SVar6 = pSVar84->fields;
                                          uStack_110 = UVar114.fields._0_8_;
                                          UVar12 = UVar33;
                                          UVar44 = UVar66;
                                          if (SVar6 != (System_String_Fields)0x0) {
                                            UVar117 = (UnityEngine_Vector3_Fields)
                                                      UnityEngine_Transform__get_position
                                                                ((UnityEngine_Transform_o *)SVar6,
                                                                 (MethodInfo *)0x0);
                                            UVar67.z = fStack_214;
                                            UVar67.x = (float)(undefined4)uStack_130;
                                            UVar67.y = (float)uStack_130._4_4_;
                                            UVar44.z = fStack_214;
                                            UVar44.x = (float)(undefined4)uStack_130;
                                            UVar44.y = (float)uStack_130._4_4_;
                                            UVar35.z = fStack_23c;
                                            UVar35.x = (float)uStack_1b0;
                                            UVar35.y = uStack_1b0._4_4_;
                                            UVar34.z = fStack_23c;
                                            UVar34.x = (float)uStack_1b0;
                                            UVar34.y = uStack_1b0._4_4_;
                                            UVar12.z = fStack_23c;
                                            UVar12.x = (float)uStack_1b0;
                                            UVar12.y = uStack_1b0._4_4_;
                                            fStack_214 = UVar117.z;
                                            uStack_130 = UVar117._0_8_;
                                            if ((((System_String_array *)
                                                  ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                                  (System_String_array *)0x0) &&
                                                (pSVar84 = ((System_String_array *)
                                                           ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->
                                                           m_Items[10], UVar12 = UVar34, UVar44 = UVar67,
                                                pSVar84 != (System_String_o *)0x0)) &&
                                               (SVar6 = pSVar84->fields, UVar12 = UVar35, UVar44 = UVar117,
                                               SVar6 != (System_String_Fields)0x0)) {
                                              UVar115 = UnityEngine_Transform__get_position
                                                                  ((UnityEngine_Transform_o *)SVar6,
                                                                   (MethodInfo *)0x0);
                                              auVar113._0_8_ = UVar115.fields._0_8_;
                                              auVar113._8_8_ = extraout_XMM0_Qb_02;
                                              fVar109 = UVar115.fields.z;
                                              if (g_data_057a6845 == '\0') {
                                                fStack_218 = UVar115.fields.z;
                                                auStack_140 = auVar113;
                                                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                g_data_057a6845 = '\x01';
                                                auVar113 = auStack_140;
                                                fVar109 = fStack_218;
                                              }
                                              auVar111._0_4_ = position.fields.x - auVar113._0_4_;
                                              auVar111._4_4_ = position.fields.y - auVar113._4_4_;
                                              auVar111._8_4_ =
                                                   (fStack_278 - position_01.fields.z) - auVar113._8_4_;
                                              auVar111._12_4_ = (fStack_274 - fVar106) - auVar113._12_4_;
                                              position_01.fields.z = (float)auStack_250._0_4_ - fVar109;
                                              if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                                                auStack_250._0_4_ = (float)auStack_250._0_4_ - fVar109;
                                                il2cpp_runtime_helper_02337ed0();
                                                position_01.fields.z = (float)auStack_250._0_4_;
                                              }
                                              auVar96._4_4_ = auStack_250._4_4_;
                                              auVar96._0_4_ = position_01.fields.z;
                                              auVar96._8_4_ = (float)uStack_248;
                                              auVar96._12_4_ = uStack_248._4_4_;
                                              auVar97._4_12_ = auVar96._4_12_;
                                              fVar106 = position_01.fields.z * position_01.fields.z +
                                                        auVar111._4_4_ * auVar111._4_4_ +
                                                        auVar111._0_4_ * auVar111._0_4_;
                                              if (fVar106 < 0.0) {
                                                auStack_250._0_4_ = position_01.fields.z;
                                                auVar97._0_4_ = sqrtf(fVar106);
                                                auVar97._4_12_ = extraout_var_00;
                                                position_01.fields.z = (float)auStack_250._0_4_;
                                                if (auVar97._0_4_ <= 1e-05) goto label_04298ff7;
label_04299051:
                                                auVar98._0_4_ = auVar97._0_4_;
                                                auStack_250._0_4_ = position_01.fields.z / auVar98._0_4_;
                                                auVar98._8_4_ = auVar97._8_4_;
                                                auVar98._12_4_ = auVar97._12_4_;
                                                auVar98._4_4_ = auVar98._0_4_;
                                                auVar113 = divps(auVar111,auVar98);
                                                uVar95 = auVar113._0_8_;
                                              }
                                              else {
                                                auVar97._0_4_ = SQRT(fVar106);
                                                if (1e-05 < auVar97._0_4_) goto label_04299051;
label_04298ff7:
                                                if (g_data_057a65d5 == '\0') {
                                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                  g_data_057a65d5 = '\x01';
                                                }
                                                uVar95 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                                                auStack_250._0_4_ =
                                                     *(undefined4 *)
                                                      (*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                                                auStack_250._4_4_ = 0;
                                                uStack_248._0_4_ = 0.0;
                                                uStack_248._4_4_ = 0.0;
                                              }
                                              if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              iVar81 = UnityEngine_LayerMask__get_value
                                                                 ((UnityEngine_LayerMask_Fields)
                                                                  (int32_t)*(undefined8 *)
                                                                            (TypeInfo_HumanPlayerController + 0xb8),
                                                                  (MethodInfo *)0x0);
                                              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              UVar115.fields.z = fStack_214;
                                              UVar115.fields.x = (float)(undefined4)uStack_130;
                                              UVar115.fields.y = (float)uStack_130._4_4_;
                                              direction.fields.z = (float)auStack_250._0_4_;
                                              direction.fields.x = (float)(int)uVar95;
                                              direction.fields.y = (float)(int)((ulong)uVar95 >> 0x20);
                                              uVar82 = UnityEngine_Physics__Raycast_4e76f20
                                                                 (UVar115,direction,120.0,iVar81,
                                                                  (MethodInfo *)0x0);
                                              if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              auVar113 = auStack_120;
                                              position_00.fields.z = 0.0;
                                              position_00.fields.x = (float)uStack_210;
                                              position_00.fields.y = uStack_210._4_4_;
                                              UVar114.fields.z = (float)auStack_120._0_4_;
                                              UVar114.fields.w = (float)auStack_120._4_4_;
                                              UVar114.fields.x = (float)(undefined4)uStack_110;
                                              UVar114.fields.y = (float)uStack_110._4_4_;
                                              auStack_120 = auVar113;
                                              UI_CursorManager__SetHookArrow
                                                        (1,position_00,UVar114,uVar82 & 0xff,(MethodInfo *)0x0
                                                        );
                                              UVar68.z = fStack_214;
                                              UVar68.x = (float)(undefined4)uStack_130;
                                              UVar68.y = (float)uStack_130._4_4_;
                                              UVar44.z = fStack_214;
                                              UVar44.x = (float)(undefined4)uStack_130;
                                              UVar44.y = (float)uStack_130._4_4_;
                                              UVar36.z = fStack_23c;
                                              UVar36.x = (float)uStack_1b0;
                                              UVar36.y = uStack_1b0._4_4_;
                                              UVar12.z = fStack_23c;
                                              UVar12.x = (float)uStack_1b0;
                                              UVar12.y = uStack_1b0._4_4_;
                                              lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                              if (lVar85 != 0) {
                                                pUVar4 = *(UnityEngine_Camera_o **)(lVar85 + 0x20);
                                                UVar12 = UVar36;
                                                UVar44 = UVar68;
                                                if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
                                                  fVar106 = fStack_1b8 * (float)uStack_1a8;
                                                  fVar109 = fStack_1b4 * uStack_1a8._4_4_;
                                                  position_01.fields.x =
                                                       (float)uStack_280 +
                                                       (float)auStack_1c0._0_4_ * (float)uStack_1b0;
                                                  position_01.fields.y =
                                                       uStack_280._4_4_ +
                                                       (float)auStack_1c0._4_4_ * uStack_1b0._4_4_;
                                                  position_01.fields.z =
                                                       fVar93 + (float)auStack_230._0_4_ * fStack_23c;
                                                  UVar115 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                                                      (pUVar4,position_01,(MethodInfo *)0x0);
                                                  position_02.fields._0_8_ = UVar115.fields._0_8_;
                                                  if (g_data_057add05 == '\0') {
                                                    il2cpp_runtime_helper_023445d0(position_02.fields._0_8_,
                                                                       UVar115.fields.z,&TypeInfo_CursorManager);
                                                    g_data_057add05 = '\x01';
                                                  }
                                                  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  UVar118 = UI_CursorManager__GetInGameMousePosition
                                                                      ((MethodInfo *)0x0);
                                                  fStack_270 = UVar115.fields.x;
                                                  fStack_26c = UVar115.fields.y;
                                                  fVar93 = atan2f(fStack_26c - UVar118.fields.y,
                                                                  fStack_270 - UVar118.fields.x);
                                                  uVar103 = extraout_var_01._4_4_;
                                                  uVar104 = extraout_var_01._8_4_;
                                                  auVar10._4_8_ = 0;
                                                  auVar10._0_4_ = fVar93 * 57.29578 * 0.017453292;
                                                  UVar114 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                      ((UnityEngine_Vector3_o)
                                                                       (auVar10 << 0x40),(MethodInfo *)0x0);
                                                  UVar70.z = fStack_214;
                                                  UVar70.x = (float)(undefined4)uStack_130;
                                                  UVar70.y = (float)uStack_130._4_4_;
                                                  UVar69.z = fStack_214;
                                                  UVar69.x = (float)(undefined4)uStack_130;
                                                  UVar69.y = (float)uStack_130._4_4_;
                                                  UVar44.z = fStack_214;
                                                  UVar44.x = (float)(undefined4)uStack_130;
                                                  UVar44.y = (float)uStack_130._4_4_;
                                                  UVar38.z = fStack_23c;
                                                  UVar38.x = (float)uStack_1b0;
                                                  UVar38.y = uStack_1b0._4_4_;
                                                  UVar37.z = fStack_23c;
                                                  UVar37.x = (float)uStack_1b0;
                                                  UVar37.y = uStack_1b0._4_4_;
                                                  UVar12.z = fStack_23c;
                                                  UVar12.x = (float)uStack_1b0;
                                                  UVar12.y = uStack_1b0._4_4_;
                                                  if (((System_String_array *)
                                                       ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                                       (System_String_array *)0x0) &&
                                                     (pSVar84 = ((System_String_array *)
                                                                ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)
                                                                ->m_Items[10], UVar12 = UVar37,
                                                     UVar44 = UVar69, pSVar84 != (System_String_o *)0x0)) {
                                                    fStack_228 = (float)uVar103;
                                                    auStack_230 = (undefined1  [8])UVar114.fields._8_8_;
                                                    fStack_224 = (float)uVar104;
                                                    uStack_248 = extraout_XMM0_Qb_03;
                                                    auStack_250 = (undefined1  [8])UVar114.fields._0_8_;
                                                    SVar6 = pSVar84->fields;
                                                    UVar12 = UVar38;
                                                    UVar44 = UVar70;
                                                    if (SVar6 != (System_String_Fields)0x0) {
                                                      UVar115 = UnityEngine_Transform__get_position
                                                                          ((UnityEngine_Transform_o *)SVar6,
                                                                           (MethodInfo *)0x0);
                                                      UVar72.z = fStack_214;
                                                      UVar72.x = (float)(undefined4)uStack_130;
                                                      UVar72.y = (float)uStack_130._4_4_;
                                                      UVar71.z = fStack_214;
                                                      UVar71.x = (float)(undefined4)uStack_130;
                                                      UVar71.y = (float)uStack_130._4_4_;
                                                      UVar44.z = fStack_214;
                                                      UVar44.x = (float)(undefined4)uStack_130;
                                                      UVar44.y = (float)uStack_130._4_4_;
                                                      UVar39.z = fStack_23c;
                                                      UVar39.x = (float)uStack_1b0;
                                                      UVar39.y = uStack_1b0._4_4_;
                                                      UVar12.z = fStack_23c;
                                                      UVar12.x = (float)uStack_1b0;
                                                      UVar12.y = uStack_1b0._4_4_;
                                                      fStack_23c = UVar115.fields.z;
                                                      if (((System_String_array *)
                                                           ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                                           (System_String_array *)0x0) &&
                                                         (pSVar84 = ((System_String_array *)
                                                                    ((Il2CppRGCTXData *)(__this_03 + 0xb))->
                                                                    klass)->m_Items[10], UVar12 = UVar39,
                                                         UVar44 = UVar71, pSVar84 != (System_String_o *)0x0))
                                                      {
                                                        UVar12.z = fStack_23c;
                                                        UVar12.x = (float)uStack_1b0;
                                                        UVar12.y = uStack_1b0._4_4_;
                                                        SVar6 = pSVar84->fields;
                                                        uStack_210 = UVar115.fields._0_8_;
                                                        UVar44 = UVar72;
                                                        if (SVar6 != (System_String_Fields)0x0) {
                                                          UVar115 = UnityEngine_Transform__get_position
                                                                              ((UnityEngine_Transform_o *)
                                                                               SVar6,(MethodInfo *)0x0);
                                                          auVar99._0_8_ = UVar115.fields._0_8_;
                                                          auVar99._8_8_ = extraout_XMM0_Qb_04;
                                                          fVar93 = UVar115.fields.z;
                                                          if (g_data_057a6845 == '\0') {
                                                            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,
                                                                                  UVar115.fields.z);
                                                            _auStack_1c0 = auVar99;
                                                            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                            g_data_057a6845 = '\x01';
                                                            auVar99 = _auStack_1c0;
                                                            fVar93 = (float)uStack_1b0;
                                                          }
                                                          auVar112._0_4_ =
                                                               position_01.fields.x - auVar99._0_4_;
                                                          auVar112._4_4_ =
                                                               position_01.fields.y - auVar99._4_4_;
                                                          auVar112._8_4_ =
                                                               (fStack_278 + fVar106) - auVar99._8_4_;
                                                          auVar112._12_4_ =
                                                               (fStack_274 + fVar109) - auVar99._12_4_;
                                                          position_01.fields.z = position_01.fields.z - fVar93
                                                          ;
                                                          if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4)
                                                              == 0) {
                                                            il2cpp_runtime_helper_02337ed0();
                                                          }
                                                          auVar100._4_4_ = fVar121;
                                                          auVar100._0_4_ = position_01.fields.z;
                                                          auVar100._8_4_ = fVar107;
                                                          auVar100._12_4_ = fVar108;
                                                          auVar101._4_12_ = auVar100._4_12_;
                                                          fVar93 = position_01.fields.z * position_01.fields.z
                                                                   + auVar112._4_4_ * auVar112._4_4_ +
                                                                     auVar112._0_4_ * auVar112._0_4_;
                                                          if (fVar93 < 0.0) {
                                                            auVar101._0_4_ = sqrtf(fVar93);
                                                            auVar101._4_12_ = extraout_var_02;
                                                            fVar93 = auVar101._0_4_;
                                                          }
                                                          else {
                                                            auVar101._0_4_ = SQRT(fVar93);
                                                            fVar93 = auVar101._0_4_;
                                                          }
                                                          if (1e-05 < fVar93) {
                                                            auVar102._0_4_ = auVar101._0_4_;
                                                            position_01.fields.z =
                                                                 position_01.fields.z / auVar102._0_4_;
                                                            auVar102._8_4_ = auVar101._8_4_;
                                                            auVar102._12_4_ = auVar101._12_4_;
                                                            auVar102._4_4_ = auVar102._0_4_;
                                                            auVar113 = divps(auVar112,auVar102);
                                                            uStack_280 = auVar113._0_8_;
                                                          }
                                                          else {
                                                            if (g_data_057a65d5 == '\0') {
                                                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                              g_data_057a65d5 = '\x01';
                                                            }
                                                            uStack_280 = **(undefined8 **)
                                                                           (TypeInfo_Vector3 + 0xb8);
                                                            position_01.fields.z =
                                                                 *(float *)(*(undefined8 **)
                                                                             (TypeInfo_Vector3 + 0xb8) + 1);
                                                          }
                                                          iVar81 = UnityEngine_LayerMask__get_value
                                                                             ((UnityEngine_LayerMask_Fields)
                                                                              (int32_t)*(undefined8 *)
                                                                                        (TypeInfo_HumanPlayerController + 0xb8),
                                                                              (MethodInfo *)0x0);
                                                          origin.fields.z = fStack_23c;
                                                          origin.fields.x = (float)uStack_210;
                                                          origin.fields.y = uStack_210._4_4_;
                                                          direction_00.fields.z = position_01.fields.z;
                                                          direction_00.fields.x = (float)uStack_280;
                                                          direction_00.fields.y = uStack_280._4_4_;
                                                          uVar82 = UnityEngine_Physics__Raycast_4e76f20
                                                                             (origin,direction_00,120.0,iVar81
                                                                              ,(MethodInfo *)0x0);
                                                          auVar111 = _auStack_230;
                                                          auVar113 = _auStack_250;
                                                          position_02.fields.z = 0.0;
                                                          rotation.fields.z = (float)auStack_230._0_4_;
                                                          rotation.fields.w = (float)auStack_230._4_4_;
                                                          rotation.fields.x = (float)auStack_250._0_4_;
                                                          rotation.fields.y = (float)auStack_250._4_4_;
                                                          _auStack_250 = auVar113;
                                                          _auStack_230 = auVar111;
                                                          UI_CursorManager__SetHookArrow
                                                                    (0,position_02,rotation,uVar82 & 0xff,
                                                                     (MethodInfo *)0x0);
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
          pSVar5 = pSVar3->m_Items[10];
          aUStack_1a0[1]._4_8_ = UStack_f8.fields.m_Direction.fields._4_8_;
          aUStack_1a0[0]._0_8_ = UStack_f8.fields.m_Origin.fields._0_8_;
          aUStack_1a0._8_8_ = UStack_f8.fields._8_8_;
          uStack_1d0 = UStack_f8.fields.m_Direction.fields._4_8_;
          auStack_1e0._0_8_ = UStack_f8.fields.m_Origin.fields._0_8_;
          auStack_1e0._8_8_ = UStack_f8.fields._8_8_;
          UVar12 = UVar117;
          UVar44 = UVar77;
joined_r0x04298280:
          if (pSVar5 != (System_String_o *)0x0) {
            UVar44.z = fStack_214;
            UVar44.x = (float)(int)uStack_130;
            UVar44.y = (float)(int)((ulong)uStack_130 >> 0x20);
            UVar12.z = fStack_23c;
            UVar12.x = (float)(int)uStack_1b0;
            UVar12.y = (float)(int)((ulong)uStack_1b0 >> 0x20);
            if (pSVar5[1].klass != (System_String_c *)0x0) {
              UVar115 = UnityEngine_Rigidbody__get_velocity
                                  ((UnityEngine_Rigidbody_o *)pSVar5[1].klass,(MethodInfo *)0x0);
              auVar110._8_4_ = extraout_XMM0_Dc;
              auVar110._0_8_ = UVar115.fields._0_8_;
              if (g_data_057a6841 == '\0') {
                in_stack_fffffffffffffd70 = UVar115.fields.x;
                in_stack_fffffffffffffd74 = UVar115.fields.y;
                in_stack_fffffffffffffd78 = extraout_XMM0_Dc;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                auVar110._4_4_ = in_stack_fffffffffffffd74;
                auVar110._0_4_ = in_stack_fffffffffffffd70;
                auVar110._8_4_ = in_stack_fffffffffffffd78;
                g_data_057a6841 = '\x01';
              }
              iVar81 = auVar110._8_4_;
              position_01.fields.z = auVar110._4_4_;
              if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                in_stack_fffffffffffffd70 = auVar110._0_4_;
                in_stack_fffffffffffffd74 = position_01.fields.z;
                il2cpp_runtime_helper_02337ed0();
                auVar110._4_4_ = in_stack_fffffffffffffd74;
                auVar110._0_4_ = in_stack_fffffffffffffd70;
                auVar110._8_4_ = iVar81;
                in_stack_fffffffffffffd78 = iVar81;
              }
              pfVar88 = (float *)auStack_1e0;
              position_01.fields.z =
                   position_01.fields.z * position_01.fields.z + auVar110._0_4_ * auVar110._0_4_ +
                   UVar115.fields.z * UVar115.fields.z;
              if (position_01.fields.z < 0.0) goto label_0429824f;
label_04298371:
              position_01.fields.z = SQRT(position_01.fields.z);
              goto label_04298375;
            }
          }
        }
      }
    }
  }
label_042993fa:
  fStack_214 = UVar44.z;
  uStack_130 = UVar44._0_8_;
  fStack_23c = UVar12.z;
  uStack_1b0 = UVar12._0_8_;
  il2cpp_runtime_helper_022b2c90();
label_042993ff:
  uVar95 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057add05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057add05 = '\x01';
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar115 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  fStackY_2c8 = (float)uVar95;
  fStackY_2c4 = (float)((ulong)uVar95 >> 0x20);
  position_01.fields.z = atan2f(fStackY_2c4 - UVar115.fields.y,fStackY_2c8 - UVar115.fields.x);
  auVar11._4_8_ = 0;
  auVar11._0_4_ = position_01.fields.z * 57.29578 * 0.017453292;
  UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o)(auVar11 << 0x40),(MethodInfo *)0x0);
  return;
}


// Controllers.HumanPlayerController$$Update
// il2cpp: void Controllers_HumanPlayerController__Update (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x4297800

void Controllers_HumanPlayerController__Update(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_Human_o *pCVar3;
  System_String_array *pSVar4;
  Characters_AnimationHandler_o *__this_00;
  UnityEngine_Camera_o *pUVar5;
  System_String_o *pSVar6;
  System_String_Fields SVar7;
  System_String_c *pSVar8;
  Characters_BaseUseable_o *__this_01;
  UnityEngine_Transform_o *pUVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_Vector3_Fields UVar13;
  UnityEngine_Vector3_Fields UVar14;
  UnityEngine_Vector3_Fields UVar15;
  UnityEngine_Vector3_Fields UVar16;
  UnityEngine_Vector3_Fields UVar17;
  UnityEngine_Vector3_Fields UVar18;
  UnityEngine_Vector3_Fields UVar19;
  UnityEngine_Vector3_Fields UVar20;
  UnityEngine_Vector3_Fields UVar21;
  UnityEngine_Vector3_Fields UVar22;
  UnityEngine_Vector3_Fields UVar23;
  UnityEngine_Vector3_Fields UVar24;
  UnityEngine_Vector3_Fields UVar25;
  UnityEngine_Vector3_Fields UVar26;
  UnityEngine_Vector3_Fields UVar27;
  UnityEngine_Vector3_Fields UVar28;
  UnityEngine_Vector3_Fields UVar29;
  UnityEngine_Vector3_Fields UVar30;
  UnityEngine_Vector3_Fields UVar31;
  UnityEngine_Vector3_Fields UVar32;
  UnityEngine_Vector3_Fields UVar33;
  UnityEngine_Vector3_Fields UVar34;
  UnityEngine_Vector3_Fields UVar35;
  UnityEngine_Vector3_Fields UVar36;
  UnityEngine_Vector3_Fields UVar37;
  UnityEngine_Vector3_Fields UVar38;
  UnityEngine_Vector3_Fields UVar39;
  UnityEngine_Vector3_Fields UVar40;
  UnityEngine_Vector3_Fields UVar41;
  UnityEngine_Vector3_Fields UVar42;
  UnityEngine_Vector3_Fields UVar43;
  UnityEngine_Vector3_Fields UVar44;
  UnityEngine_Vector3_Fields UVar45;
  UnityEngine_Vector3_Fields UVar46;
  UnityEngine_Vector3_Fields UVar47;
  UnityEngine_Vector3_Fields UVar48;
  UnityEngine_Vector3_Fields UVar49;
  UnityEngine_Vector3_Fields UVar50;
  UnityEngine_Vector3_Fields UVar51;
  UnityEngine_Vector3_Fields UVar52;
  UnityEngine_Vector3_Fields UVar53;
  UnityEngine_Vector3_Fields UVar54;
  UnityEngine_Vector3_Fields UVar55;
  UnityEngine_Vector3_Fields UVar56;
  UnityEngine_Vector3_Fields UVar57;
  UnityEngine_Vector3_Fields UVar58;
  UnityEngine_Vector3_Fields UVar59;
  UnityEngine_Vector3_Fields UVar60;
  UnityEngine_Vector3_Fields UVar61;
  UnityEngine_Vector3_Fields UVar62;
  UnityEngine_Vector3_Fields UVar63;
  UnityEngine_Vector3_Fields UVar64;
  UnityEngine_Vector3_Fields UVar65;
  UnityEngine_Vector3_Fields UVar66;
  UnityEngine_Vector3_Fields UVar67;
  UnityEngine_Vector3_Fields UVar68;
  UnityEngine_Vector3_Fields UVar69;
  UnityEngine_Vector3_Fields UVar70;
  UnityEngine_Vector3_Fields UVar71;
  UnityEngine_Vector3_Fields UVar72;
  UnityEngine_Vector3_Fields UVar73;
  UnityEngine_Vector3_Fields UVar74;
  UnityEngine_Vector3_Fields UVar75;
  UnityEngine_Vector3_Fields UVar76;
  UnityEngine_Vector3_Fields UVar77;
  UnityEngine_Vector3_Fields UVar78;
  char cVar79;
  uint uVar80;
  bool_conflict bVar81;
  int32_t iVar82;
  uint uVar83;
  System_String_o *pSVar84;
  System_String_o *str0;
  long lVar85;
  undefined8 *puVar86;
  long *plVar87;
  int iVar88;
  float *pfVar89;
  System_String_o **ppSVar90;
  long *__this_03;
  int iVar91;
  bool bVar92;
  float fVar93;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar94;
  undefined8 uVar95;
  float extraout_XMM0_Db;
  int32_t extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  int32_t extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 extraout_var [12];
  undefined4 uVar103;
  undefined4 uVar104;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar98 [16];
  undefined1 extraout_var_01 [12];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 extraout_var_02 [12];
  undefined1 auVar102 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined1 auVar110 [12];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  UnityEngine_Quaternion_o UVar114;
  UnityEngine_Vector3_o UVar115;
  UnityEngine_Vector3_Fields UVar116;
  UnityEngine_Vector3_Fields UVar117;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o UVar118;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  float fStackY_2a0;
  float fStackY_29c;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined4 in_stack_fffffffffffffd90;
  float in_stack_fffffffffffffd98;
  float in_stack_fffffffffffffd9c;
  float fVar121;
  int32_t in_stack_fffffffffffffda0;
  undefined8 uStack_258;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_22c;
  undefined1 auStack_228 [8];
  undefined8 uStack_220;
  float fStack_214;
  float fStack_210;
  int iStack_20c;
  undefined1 auStack_208 [8];
  float fStack_200;
  float fStack_1fc;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [16];
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined1 auStack_198 [8];
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  UnityEngine_Vector3_Fields aUStack_178 [2];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  UnityEngine_Ray_o UStack_d0;
  Il2CppMethodPointer pIStack_b8;
  Il2CppMethodPointer pIStack_b0;
  InvokerMethod pIStack_a8;
  uint32_t uStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined8 uStack_94;
  _union_13 _Stack_80;
  float fStack_3c;
  undefined8 extraout_XMM0_Qb_04;
  
  pCVar3 = (__this->fields)._human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    if ((char)(pCVar3->fields).AllowHorse == '\0') {
      return;
    }
    Controllers_BasePlayerController__Update((Controllers_BasePlayerController_o *)__this,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (long *)__this;
  if (g_data_057add03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownStrikeSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    il2cpp_runtime_helper_023445d0(&"jump");
    ppSVar90 = &"dash";
    il2cpp_runtime_helper_023445d0();
    g_data_057add03 = '\x01';
    __this_03 = (long *)ppSVar90;
  }
  if ((char)method == '\0') {
    pSVar4 = (System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass;
    if (pSVar4 != (System_String_array *)0x0) {
      if ((*(char *)(pSVar4->m_Items + 9) != '\0') || (*(int *)(pSVar4->m_Items + 0x27) == 0xf))
      goto label_04297890;
      if ((((Il2CppRGCTXData *)((long)__this + 0x70))->klass != (Il2CppClass *)0x0) &&
         (__this_03 = (((Il2CppRGCTXData *)((long)__this + 0x70))->klass->_1).fields,
         (Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0)) {
        bVar81 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
        if ((char)bVar81 == '\0') {
label_042978f8:
          if ((((Il2CppRGCTXData *)((long)__this + 0x70))->klass != (Il2CppClass *)0x0) &&
             (__this_03 = (((Il2CppRGCTXData *)((long)__this + 0x70))->klass->_1).methods,
             (Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0)) {
            bVar92 = false;
            bVar81 = Settings_KeybindSetting__GetKey
                               ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
            if ((char)bVar81 != '\0') {
              if ((System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass ==
                  (System_String_array *)0x0) goto label_04297e5b;
              bVar92 = *(int *)(((System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass)->
                                m_Items + 0x1f) == 0;
            }
label_0429793d:
            *(bool *)((long)pSVar4->m_Items + 0x1fc) = bVar92;
            pSVar4 = (System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass;
            if (pSVar4 != (System_String_array *)0x0) {
              if (*(int *)(pSVar4->m_Items + 0x1f) != 1) {
                iVar91 = *(int *)(pSVar4->m_Items + 0x27);
                if (*(char *)((long)pSVar4->m_Items + 0xa4) == '\0') {
                  if (iVar91 == 8) {
                    return;
                  }
                  if (iVar91 == 9) {
                    if (pSVar4->m_Items[0x1b] == (System_String_o *)0x0) {
                      return;
                    }
                    pSVar8 = pSVar4->m_Items[0x1b]->klass;
                    bVar2 = (pSVar8->_2).naturalAligment;
                    bVar1 = (TypeInfo_DownStrikeSpecial->_2).naturalAligment;
                    if ((bVar2 < bVar1) || ((pSVar8->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DownStrikeSpecial)) {
                      bVar1 = (TypeInfo_StockSpecial->_2).naturalAligment;
                      if (bVar2 < bVar1) {
                        return;
                      }
                      if ((pSVar8->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StockSpecial) {
                        return;
                      }
                    }
                  }
                  __this_03 = (long *)((_union_13 *)(pSVar4->m_Items + 0x12))->rgctx_data;
                  if ((Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0) {
                    bVar81 = Characters_AnimationHandler__IsPlaying
                                       ((Characters_AnimationHandler_o *)__this_03,"dash",
                                        (MethodInfo *)0x0);
                    if ((char)bVar81 != '\0') {
                      return;
                    }
                    if ((System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass !=
                        (System_String_array *)0x0) {
                      __this_00 = (Characters_AnimationHandler_o *)
                                  ((System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass)->
                                  m_Items[0x12];
                      __this_03 = (long *)0x0;
                      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
                        bVar81 = Characters_AnimationHandler__IsPlaying
                                           (__this_00,"jump",(MethodInfo *)0x0);
                        if ((char)bVar81 != '\0') {
                          return;
                        }
                        __this_03 = (long *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass;
                        if ((Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0) {
                          bVar81 = Characters_Human__IsFiringThunderspear
                                             ((Characters_Human_o *)__this_03,(MethodInfo *)0x0);
                          if ((char)bVar81 != '\0') {
                            return;
                          }
                          goto label_0429795e;
                        }
                      }
                    }
                  }
                  goto label_04297e5b;
                }
                if (iVar91 != 0) {
                  return;
                }
              }
label_0429795e:
              if ((((Il2CppRGCTXData *)((long)__this + 0x20))->klass != (Il2CppClass *)0x0) &&
                 (__this_03 = (long *)(((Il2CppRGCTXData *)((long)__this + 0x20))->klass->_1).parent,
                 (Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0)) {
                bVar81 = Settings_KeybindSetting__GetKeyDown
                                   ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
                if ((char)bVar81 != '\0') {
                  *(byte *)((long)__this + 0x48) = *(byte *)((long)__this + 0x48) ^ 1;
                }
                if ((((Il2CppRGCTXData *)((long)__this + 0x20))->method != (MethodInfo *)0x0) &&
                   (__this_03 = (long *)((Il2CppRGCTXData *)((long)__this + 0x20))->method->klass,
                   (Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0)) {
                  bVar81 = Settings_KeybindSetting__GetKey
                                     ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
                  iVar91 = 1;
                  if ((char)bVar81 == '\0') {
                    if ((((Il2CppRGCTXData *)((long)__this + 0x20))->method == (MethodInfo *)0x0) ||
                       (__this_03 = (long *)((Il2CppRGCTXData *)((long)__this + 0x20))->method->return_type,
                       (Il2CppRGCTXData *)__this_03 == (Il2CppRGCTXData *)0x0)) goto label_04297e5b;
                    uVar83 = Settings_KeybindSetting__GetKey
                                       ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
                    iVar91 = -(uVar83 & 0xff);
                  }
                  if ((((Il2CppRGCTXData *)((long)__this + 0x20))->method != (MethodInfo *)0x0) &&
                     (__this_03 = (long *)((Il2CppRGCTXData *)((long)__this + 0x20))->method->parameters,
                     (Il2CppRGCTXData *)__this_03 != (Il2CppRGCTXData *)0x0)) {
                    bVar81 = Settings_KeybindSetting__GetKey
                                       ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
                    uVar83 = 0xffffffff;
                    if ((char)bVar81 == '\0') {
                      if ((((Il2CppRGCTXData *)((long)__this + 0x20))->klass == (Il2CppClass *)0x0) ||
                         (__this_03 = *(long **)&(((Il2CppRGCTXData *)((long)__this + 0x20))->klass->_1).
                                                 this_arg.bits,
                         (Il2CppRGCTXData *)__this_03 == (Il2CppRGCTXData *)0x0)) goto label_04297e5b;
                      uVar80 = Settings_KeybindSetting__GetKey
                                         ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
                      uVar83 = uVar80 & 0xff;
                      if ((iVar91 != 0) || ((char)uVar80 != '\0')) goto label_04297a0c;
                      cVar79 = *(char *)((long)__this + 0x48);
                      uVar83 = 0;
                    }
                    else {
label_04297a0c:
                      *(undefined1 *)((long)__this + 0x48) = 0;
                      cVar79 = '\0';
                    }
                    uVar80 = 0;
                    if (cVar79 == '\0') {
                      uVar80 = uVar83;
                    }
                    iVar88 = 1;
                    if (cVar79 == '\0') {
                      iVar88 = iVar91;
                    }
                    pSVar4 = (System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x38))->klass;
                    if (iVar88 == 0 && uVar80 == 0) {
                      if (pSVar4 != (System_String_array *)0x0) {
                        *(undefined1 *)((long)pSVar4->m_Items + 0xac) = 0;
                        if ((System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass !=
                            (System_String_array *)0x0) {
                          *(undefined4 *)
                           (((System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass)->
                            m_Items + 0x3f) = 0;
                          return;
                        }
                      }
                    }
                    else {
                      if (g_data_057adcc8 == '\0') {
                        __this_03 = &TypeInfo_SceneLoader;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057adcc8 = '\x01';
                      }
                      lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                      if ((lVar85 != 0) && (lVar85 = *(long *)(lVar85 + 0x28), lVar85 != 0)) {
                        pUVar9 = *(UnityEngine_Transform_o **)(lVar85 + 0x10);
                        __this_03 = (long *)0x0;
                        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                          UVar114 = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
                          UVar115 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar114,(MethodInfo *)0x0);
                          UVar118.fields.x = UVar115.fields.x * 57.29578;
                          UVar118.fields.y = UVar115.fields.y * 57.29578;
                          UVar118.fields.z = UVar115.fields.z * 57.29578;
                          __this_03 = (long *)0x0;
                          UVar115 = UnityEngine_Quaternion__Internal_MakePositive(UVar118,(MethodInfo *)0x0);
                          fVar106 = (float)iVar88;
                          fVar93 = (float)(int)uVar80;
                          position_01.fields.z = atan2f(fVar106,fVar93);
                          if (pSVar4 != (System_String_array *)0x0) {
                            fStack_3c = UVar115.fields.y;
                            *(float *)(pSVar4->m_Items + 0x15) =
                                 position_01.fields.z * -57.29578 + fStack_3c + 90.0;
                            if ((System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x38))->klass !=
                                (System_String_array *)0x0) {
                              *(undefined1 *)
                               ((long)((System_String_array *)
                                      ((Il2CppRGCTXData *)((long)__this + 0x38))->klass)->m_Items + 0xac) = 1;
                              if (g_data_057a6841 == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                g_data_057a6841 = '\x01';
                              }
                              __this_03 = (long *)TypeInfo_Math;
                              if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              position_01.fields.z = fVar106 * fVar106 + fVar93 * fVar93 + 0.0;
                              if (position_01.fields.z < 0.0) {
                                fVar93 = sqrtf(position_01.fields.z);
                                if (fVar93 <= 0.95) goto label_04297c37;
label_04297c1d:
                                fVar106 = 1.0;
                                pSVar4 = (System_String_array *)
                                         ((Il2CppRGCTXData *)((long)__this + 0x58))->klass;
                              }
                              else {
                                if (0.95 < SQRT(position_01.fields.z)) goto label_04297c1d;
label_04297c37:
                                if (g_data_057a6841 == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                  g_data_057a6841 = '\x01';
                                  if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) != 0) goto label_04297c55;
label_04297d98:
                                  __this_03 = (long *)TypeInfo_Math;
                                  il2cpp_runtime_helper_02337ed0();
                                  if (0.0 <= position_01.fields.z) goto label_04297c67;
label_04297daf:
                                  fVar93 = sqrtf(position_01.fields.z);
                                }
                                else {
                                  if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) goto label_04297d98;
label_04297c55:
                                  __this_03 = (long *)TypeInfo_Math;
                                  if (position_01.fields.z < 0.0) goto label_04297daf;
label_04297c67:
                                  fVar93 = SQRT(position_01.fields.z);
                                }
                                fVar106 = 0.0;
                                if (0.25 <= fVar93) {
                                  if (g_data_057a6841 == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                    g_data_057a6841 = '\x01';
                                  }
                                  __this_03 = (long *)TypeInfo_Math;
                                  if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  if (position_01.fields.z < 0.0) {
                                    fVar106 = sqrtf(position_01.fields.z);
                                    goto label_04297e19;
                                  }
                                  fVar106 = SQRT(position_01.fields.z);
                                  pSVar4 = (System_String_array *)
                                           ((Il2CppRGCTXData *)((long)__this + 0x58))->klass;
                                }
                                else {
label_04297e19:
                                  pSVar4 = (System_String_array *)
                                           ((Il2CppRGCTXData *)((long)__this + 0x58))->klass;
                                }
                              }
                              if (pSVar4 != (System_String_array *)0x0) {
                                if ((((*(char *)((long)pSVar4->m_Items + 0x1fc) != '\0') &&
                                     (*(int *)(pSVar4->m_Items + 0x1f) == 0)) &&
                                    (*(int *)(pSVar4->m_Items + 0x27) == 0)) &&
                                   (*(char *)((long)pSVar4->m_Items + 0xa4) != '\0')) {
                                  fVar106 = fVar106 * 0.25;
                                }
                                *(float *)(pSVar4->m_Items + 0x3f) = fVar106;
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
        else if ((System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass !=
                 (System_String_array *)0x0) {
          bVar92 = true;
          if (*(int *)(((System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass)->m_Items +
                      0x1f) != 1) goto label_042978f8;
          goto label_0429793d;
        }
      }
    }
  }
  else {
label_04297890:
    if (*(char *)((long)__this + 0x48) != '\0') {
      return;
    }
    if ((System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass != (System_String_array *)0x0
       ) {
      *(undefined1 *)
       ((long)((System_String_array *)((Il2CppRGCTXData *)((long)__this + 0x58))->klass)->m_Items + 0xac) = 0;
      return;
    }
  }
label_04297e5b:
  il2cpp_runtime_helper_022b2c90();
  _Stack_80 = (_union_13)__this;
  if (g_data_057add04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"<color=#FF0000>");
    il2cpp_runtime_helper_023445d0(&"F2");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"K");
    il2cpp_runtime_helper_023445d0(&"DamageMultiplier");
    il2cpp_runtime_helper_023445d0(&"<color=#008000>READY</color>");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&" | ");
    il2cpp_runtime_helper_023445d0(&"F1");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    il2cpp_runtime_helper_023445d0(&"???");
    il2cpp_runtime_helper_023445d0(&" u/s");
    g_data_057add04 = '\x01';
  }
  UVar45.z = fStack_1ec;
  UVar45.x = (float)(undefined4)uStack_108;
  UVar45.y = (float)uStack_108._4_4_;
  UVar13.z = fStack_214;
  UVar13.x = (float)uStack_188;
  UVar13.y = uStack_188._4_4_;
  fStack_98 = 0.0;
  uStack_94 = 0;
  pIStack_a8 = (InvokerMethod)0x0;
  uStack_a0 = 0;
  fStack_9c = 0.0;
  pIStack_b8 = (Il2CppMethodPointer)0x0;
  pIStack_b0 = (Il2CppMethodPointer)0x0;
  iStack_20c = 0;
  fStack_22c = 0.0;
  fStack_210 = 0.0;
  auStack_1b8._0_4_ = 0.0;
  auStack_1b8._4_4_ = 0.0;
  auStack_1b8._8_4_ = 0.0;
  auStack_1b8._12_4_ = 0.0;
  uStack_1a8._0_4_ = 0.0;
  uStack_1a8._4_4_ = 0.0;
  auStack_1d8._0_4_ = 0.0;
  auStack_1d8._4_4_ = 0.0;
  auStack_1d8._8_4_ = 0.0;
  auStack_1d8._12_4_ = 0.0;
  uStack_1c8._0_4_ = 0.0;
  uStack_1c8._4_4_ = 0.0;
  auStack_138._0_4_ = 0.0;
  auStack_138._4_4_ = 0.0;
  auStack_138._8_4_ = 0.0;
  auStack_138._12_4_ = 0.0;
  uStack_128._0_4_ = 0.0;
  uStack_128._4_4_ = 0.0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar85 != 0) {
    pUVar5 = *(UnityEngine_Camera_o **)(lVar85 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar115 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    UVar45.z = fStack_1ec;
    UVar45.x = (float)(undefined4)uStack_108;
    UVar45.y = (float)uStack_108._4_4_;
    UVar13.z = fStack_214;
    UVar13.x = (float)uStack_188;
    UVar13.y = uStack_188._4_4_;
    if (pUVar5 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_d0,pUVar5,UVar115,(MethodInfo *)0x0);
      pSVar84 = "???";
      UVar78.z = fStack_1ec;
      UVar78.x = (float)(undefined4)uStack_108;
      UVar78.y = (float)uStack_108._4_4_;
      UVar45.z = fStack_1ec;
      UVar45.x = (float)(undefined4)uStack_108;
      UVar45.y = (float)uStack_108._4_4_;
      UVar117.z = fStack_214;
      UVar117.x = (float)uStack_188;
      UVar117.y = uStack_188._4_4_;
      UVar13.z = fStack_214;
      UVar13.x = (float)uStack_188;
      UVar13.y = uStack_188._4_4_;
      aUStack_178[1].y = UStack_d0.fields.m_Direction.fields.y;
      aUStack_178[1].z = UStack_d0.fields.m_Direction.fields.z;
      aUStack_178[0].x = UStack_d0.fields.m_Origin.fields.x;
      aUStack_178[0].y = UStack_d0.fields.m_Origin.fields.y;
      aUStack_178[0].z = UStack_d0.fields.m_Origin.fields.z;
      aUStack_178[1].x = UStack_d0.fields.m_Direction.fields.x;
      pSVar4 = (System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass;
      if (pSVar4 != (System_String_array *)0x0) {
        str0 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)((long)pSVar4->m_Items + 0xfc) == 1) {
          uStack_1c8._0_4_ = UStack_d0.fields.m_Direction.fields.y;
          uStack_1c8._4_4_ = UStack_d0.fields.m_Direction.fields.z;
          auStack_1d8._0_4_ = UStack_d0.fields.m_Origin.fields.x;
          auStack_1d8._4_4_ = UStack_d0.fields.m_Origin.fields.y;
          auStack_1d8._8_4_ = UStack_d0.fields.m_Origin.fields.z;
          auStack_1d8._12_4_ = UStack_d0.fields.m_Direction.fields.x;
          pSVar6 = pSVar4->m_Items[0x2b];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar81 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          UVar77.z = fStack_1ec;
          UVar77.x = (float)(undefined4)uStack_108;
          UVar77.y = (float)uStack_108._4_4_;
          UVar45.z = fStack_1ec;
          UVar45.x = (float)(undefined4)uStack_108;
          UVar45.y = (float)uStack_108._4_4_;
          UVar47.z = fStack_1ec;
          UVar47.x = (float)(undefined4)uStack_108;
          UVar47.y = (float)uStack_108._4_4_;
          UVar46.z = fStack_1ec;
          UVar46.x = (float)(undefined4)uStack_108;
          UVar46.y = (float)uStack_108._4_4_;
          UVar44.z = fStack_214;
          UVar44.x = (float)uStack_188;
          UVar44.y = uStack_188._4_4_;
          UVar13.z = fStack_214;
          UVar13.x = (float)uStack_188;
          UVar13.y = uStack_188._4_4_;
          UVar15.z = fStack_214;
          UVar15.x = (float)uStack_188;
          UVar15.y = uStack_188._4_4_;
          UVar14.z = fStack_214;
          UVar14.x = (float)uStack_188;
          UVar14.y = uStack_188._4_4_;
          if ((char)bVar81 == '\0') {
            uStack_1a8._0_4_ = (float)uStack_1c8;
            uStack_1a8._4_4_ = uStack_1c8._4_4_;
            auStack_1b8._0_8_ = auStack_1d8._0_8_;
            auStack_1b8._8_8_ = auStack_1d8._8_8_;
            if ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                (System_String_array *)0x0) {
              pSVar6 = ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[10];
              uStack_1a8 = uStack_1c8;
              UVar13 = UVar44;
              UVar45 = UVar77;
              goto joined_r0x04298280;
            }
          }
          else {
            uStack_128._0_4_ = (float)uStack_1c8;
            uStack_128._4_4_ = uStack_1c8._4_4_;
            auStack_138._0_8_ = auStack_1d8._0_8_;
            auStack_138._8_8_ = auStack_1d8._8_8_;
            UVar13 = UVar14;
            UVar45 = UVar46;
            if (((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                 (System_String_array *)0x0) &&
               (pSVar6 = ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[0x2b]
               , UVar13 = UVar15, UVar45 = UVar47, pSVar6 != (System_String_o *)0x0)) {
              if (g_data_057a6841 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6841 = '\x01';
              }
              fVar106 = (float)pSVar6[0x10].fields._stringLength;
              position_01.fields.z = *(float *)&pSVar6[0x10].fields._firstChar;
              fVar93 = *(float *)&pSVar6[0x11].klass;
              if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                in_stack_fffffffffffffd98 = fVar106;
              }
              pfVar89 = (float *)auStack_138;
              position_01.fields.z =
                   fVar93 * fVar93 + position_01.fields.z * position_01.fields.z + fVar106 * fVar106;
              if (0.0 <= position_01.fields.z) goto label_04298371;
label_0429824f:
              position_01.fields.z = sqrtf(position_01.fields.z);
label_04298375:
              uStack_148 = *(undefined8 *)(pfVar89 + 4);
              fVar93 = *pfVar89;
              fVar106 = pfVar89[1];
              uStack_158 = *(undefined8 *)pfVar89;
              fVar107 = pfVar89[2];
              fVar108 = pfVar89[3];
              uStack_150 = *(undefined8 *)(pfVar89 + 2);
              if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar82 = UnityEngine_LayerMask__get_value
                                 ((UnityEngine_LayerMask_Fields)(int32_t)*(undefined8 *)(TypeInfo_HumanPlayerController + 0xb8),
                                  (MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uStack_258._0_4_ = 1000.0;
              ray.fields.m_Origin.fields.z = (float)(undefined4)uStack_150;
              ray.fields.m_Direction.fields.x = (float)uStack_150._4_4_;
              ray.fields.m_Origin.fields.x = (float)(undefined4)uStack_158;
              ray.fields.m_Origin.fields.y = (float)uStack_158._4_4_;
              ray.fields.m_Direction.fields.y = (float)(undefined4)uStack_148;
              ray.fields.m_Direction.fields.z = (float)uStack_148._4_4_;
              uVar95 = uStack_158;
              uVar119 = uStack_150;
              uVar120 = uStack_148;
              bVar81 = UnityEngine_Physics__Raycast_4e78080
                                 (ray,(UnityEngine_RaycastHit_o *)&pIStack_b8,1000.0,iVar82,(MethodInfo *)0x0)
              ;
              if ((char)bVar81 != '\0') {
                __this_02.fields.m_Point.fields.z = (float)(int)uVar119;
                __this_02.fields.m_Normal.fields.x = (float)(int)((ulong)uVar119 >> 0x20);
                __this_02.fields.m_Point.fields.x = (float)(int)uVar95;
                __this_02.fields.m_Point.fields.y = (float)(int)((ulong)uVar95 >> 0x20);
                __this_02.fields.m_Normal.fields.y = (float)(int)uVar120;
                __this_02.fields.m_Normal.fields.z = (float)(int)((ulong)uVar120 >> 0x20);
                __this_02.fields.m_FaceID = in_stack_fffffffffffffd90;
                __this_02.fields.m_Distance = position_01.fields.z;
                __this_02.fields.m_UV.fields.x = in_stack_fffffffffffffd98;
                __this_02.fields.m_UV.fields.y = in_stack_fffffffffffffd9c;
                __this_02.fields.m_Collider = in_stack_fffffffffffffda0;
                UVar115 = UnityEngine_RaycastHit__get_point(__this_02,(MethodInfo *)&pIStack_b8);
                UVar49.z = fStack_1ec;
                UVar49.x = (float)(undefined4)uStack_108;
                UVar49.y = (float)uStack_108._4_4_;
                UVar48.z = fStack_1ec;
                UVar48.x = (float)(undefined4)uStack_108;
                UVar48.y = (float)uStack_108._4_4_;
                UVar45.z = fStack_1ec;
                UVar45.x = (float)(undefined4)uStack_108;
                UVar45.y = (float)uStack_108._4_4_;
                UVar17.z = fStack_214;
                UVar17.x = (float)uStack_188;
                UVar17.y = uStack_188._4_4_;
                UVar16.z = fStack_214;
                UVar16.x = (float)uStack_188;
                UVar16.y = uStack_188._4_4_;
                UVar13.z = fStack_214;
                UVar13.x = (float)uStack_188;
                UVar13.y = uStack_188._4_4_;
                fVar93 = UVar115.fields.z;
                if ((((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass ==
                      (System_String_array *)0x0) ||
                    (pSVar84 = ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items
                               [10], UVar13 = UVar16, UVar45 = UVar48, pSVar84 == (System_String_o *)0x0)) ||
                   (SVar7 = pSVar84->fields, UVar13 = UVar17, UVar45 = UVar49,
                   SVar7 == (System_String_Fields)0x0)) goto label_042993fa;
                UVar116 = (UnityEngine_Vector3_Fields)
                          UnityEngine_Transform__get_position
                                    ((UnityEngine_Transform_o *)SVar7,(MethodInfo *)0x0);
                uStack_258._0_4_ = UVar115.fields.x;
                uStack_258._4_4_ = UVar115.fields.y;
                fVar106 = UVar116.y;
                if (g_data_057a6841 == '\0') {
                  auStack_228._0_4_ = UVar116.z;
                  fStack_200 = (float)extraout_XMM0_Dc_00;
                  auStack_208 = (undefined1  [8])UVar116._0_8_;
                  fStack_1fc = (float)extraout_XMM0_Dd;
                  uStack_1e8 = CONCAT44(fVar106,fVar106);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  auVar113 = _auStack_208;
                  UVar116.z = (float)auStack_228._0_4_;
                  UVar116.x = (float)auStack_208._0_4_;
                  UVar116.y = (float)auStack_208._4_4_;
                  g_data_057a6841 = '\x01';
                  fVar106 = (float)uStack_1e8;
                  _auStack_208 = auVar113;
                }
                uStack_258._0_4_ = (float)uStack_258 - UVar116.x;
                fVar93 = fVar93 - UVar116.z;
                if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uStack_258._0_4_ =
                     fVar93 * fVar93 +
                     (uStack_258._4_4_ - fVar106) * (uStack_258._4_4_ - fVar106) +
                     (float)uStack_258 * (float)uStack_258;
                fVar93 = 0.0;
                fVar106 = 0.0;
                fVar107 = 0.0;
                fVar108 = 0.0;
                if ((float)uStack_258 < 0.0) {
                  uStack_258._0_4_ = sqrtf((float)uStack_258);
                }
                else {
                  uStack_258._0_4_ = SQRT((float)uStack_258);
                }
                iStack_20c = (int)(float)uStack_258;
                pSVar84 = System_Int32__ToString((int32_t)&iStack_20c,(MethodInfo *)0x0);
              }
              UVar50.z = fStack_1ec;
              UVar50.x = (float)(undefined4)uStack_108;
              UVar50.y = (float)uStack_108._4_4_;
              UVar45.z = fStack_1ec;
              UVar45.x = (float)(undefined4)uStack_108;
              UVar45.y = (float)uStack_108._4_4_;
              UVar18.z = fStack_214;
              UVar18.x = (float)uStack_188;
              UVar18.y = uStack_188._4_4_;
              UVar13.z = fStack_214;
              UVar13.x = (float)uStack_188;
              UVar13.y = uStack_188._4_4_;
              lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if ((lVar85 != 0) && (UVar13 = UVar18, UVar45 = UVar50, *(long *)(lVar85 + 0x88) != 0)) {
                if (*(char *)(*(long *)(lVar85 + 0x88) + 0x11) != '\0') {
                  str0 = System_String__Concat_3ae5ba0(str0,pSVar84,(MethodInfo *)0x0);
                  UVar45.z = fStack_1ec;
                  UVar45.x = (float)(undefined4)uStack_108;
                  UVar45.y = (float)uStack_108._4_4_;
                  UVar13.z = fStack_214;
                  UVar13.x = (float)uStack_188;
                  UVar13.y = uStack_188._4_4_;
                  lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  if (lVar85 == 0) goto label_042993fa;
                }
                UVar45.z = fStack_1ec;
                UVar45.x = (float)(undefined4)uStack_108;
                UVar45.y = (float)uStack_108._4_4_;
                UVar13.z = fStack_214;
                UVar13.x = (float)uStack_188;
                UVar13.y = uStack_188._4_4_;
                if (*(long *)(lVar85 + 0x98) != 0) {
                  iVar91 = *(int *)(*(long *)(lVar85 + 0x98) + 0x14);
                  if (iVar91 == 2) {
                    bVar81 = System_String__op_Inequality
                                       (str0,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                        (MethodInfo *)0x0);
                    if ((char)bVar81 != '\0') {
                      str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                    }
                    UVar76.z = fStack_1ec;
                    UVar76.x = (float)(undefined4)uStack_108;
                    UVar76.y = (float)uStack_108._4_4_;
                    UVar75.z = fStack_1ec;
                    UVar75.x = (float)(undefined4)uStack_108;
                    UVar75.y = (float)uStack_108._4_4_;
                    UVar74.z = fStack_1ec;
                    UVar74.x = (float)(undefined4)uStack_108;
                    UVar74.y = (float)uStack_108._4_4_;
                    UVar45.z = fStack_1ec;
                    UVar45.x = (float)(undefined4)uStack_108;
                    UVar45.y = (float)uStack_108._4_4_;
                    UVar43.z = fStack_214;
                    UVar43.x = (float)uStack_188;
                    UVar43.y = uStack_188._4_4_;
                    UVar42.z = fStack_214;
                    UVar42.x = (float)uStack_188;
                    UVar42.y = uStack_188._4_4_;
                    UVar41.z = fStack_214;
                    UVar41.x = (float)uStack_188;
                    UVar41.y = uStack_188._4_4_;
                    UVar13.z = fStack_214;
                    UVar13.x = (float)uStack_188;
                    UVar13.y = uStack_188._4_4_;
                    fStack_22c = position_01.fields.z;
                    if ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                        (System_String_array *)0x0) {
                      pSVar84 = ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->
                                m_Items[0x1c];
                      if (pSVar84 == (System_String_o *)0x0) goto label_0429892b;
                      pSVar8 = pSVar84->klass;
                      bVar2 = (pSVar8->_2).naturalAligment;
                      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                      if ((bVar2 < bVar1) || ((pSVar8->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BladeWeapon)) {
                        bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
                        if ((bVar2 < bVar1) || ((pSVar8->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_AHSSWeapon))
                        {
                          bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
                          if ((bVar2 < bVar1) ||
                             ((pSVar8->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_APGWeapon)) {
                            bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            if ((bVar2 < bVar1) ||
                               ((pSVar8->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_ThunderspearWeapon)) {
label_0429892b:
                              if (position_01.fields.z <= 10.0) {
                                position_01.fields.z = 10.0;
                              }
                              pSVar84 = System_Single__ToString_3cccfe0
                                                  (position_01.fields.z / 100.0,
                                                   (System_String_o *)&stack0xfffffffffffffd94,"F1");
                              str0 = System_String__Concat_3af7150
                                               (str0,pSVar84,"K",(MethodInfo *)0x0);
                              UVar45.z = fStack_1ec;
                              UVar45.x = (float)(undefined4)uStack_108;
                              UVar45.y = (float)uStack_108._4_4_;
                              UVar13.z = fStack_214;
                              UVar13.x = (float)uStack_188;
                              UVar13.y = uStack_188._4_4_;
                              if ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                  (System_String_array *)0x0) {
                                pSVar84 = ((System_String_array *)
                                          ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[0x1b];
                                if (pSVar84 != (System_String_o *)0x0) {
                                  pSVar8 = pSVar84->klass;
                                  bVar2 = (TypeInfo_AHSSTwinShot->_2).naturalAligment;
                                  if ((bVar2 <= (pSVar8->_2).naturalAligment) &&
                                     ((pSVar8->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_AHSSTwinShot)) {
                                    fStack_22c = (float)(int)fStack_22c;
                                    if (fStack_22c <= 10.0) {
                                      fStack_22c = 10.0;
                                    }
                                    fStack_22c = fStack_22c / 100.0;
                                    pSVar84 = System_Single__ToString_3cccfe0
                                                        (fStack_22c,(System_String_o *)&fStack_22c,
                                                         "F1");
                                    str0 = System_String__Concat_3af7470
                                                     (str0," | ",pSVar84,"K",(MethodInfo *)0x0
                                                     );
                                  }
                                }
                                goto label_04298a10;
                              }
                            }
                            else {
                              lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                              UVar13 = UVar41;
                              UVar45 = UVar74;
                              if (((lVar85 != 0) &&
                                  (lVar85 = *(long *)(lVar85 + 0x58), UVar13 = UVar42, UVar45 = UVar75,
                                  lVar85 != 0)) &&
                                 (lVar85 = *(long *)(lVar85 + 0x48), UVar13 = UVar43, UVar45 = UVar76,
                                 lVar85 != 0)) {
                                if (*(char *)(lVar85 + 0x11) != '\0') goto label_0429892b;
                                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                UVar45.z = fStack_1ec;
                                UVar45.x = (float)(undefined4)uStack_108;
                                UVar45.y = (float)uStack_108._4_4_;
                                UVar13.z = fStack_214;
                                UVar13.x = (float)uStack_188;
                                UVar13.y = uStack_188._4_4_;
                                plVar87 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                                if (plVar87 != (long *)0x0) {
                                  puVar86 = &"Thunderspear";
                                  goto label_042988bf;
                                }
                              }
                            }
                          }
                          else {
                            if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            UVar45.z = fStack_1ec;
                            UVar45.x = (float)(undefined4)uStack_108;
                            UVar45.y = (float)uStack_108._4_4_;
                            UVar13.z = fStack_214;
                            UVar13.x = (float)uStack_188;
                            UVar13.y = uStack_188._4_4_;
                            plVar87 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                            if (plVar87 != (long *)0x0) {
                              puVar86 = &"APG";
                              goto label_042988bf;
                            }
                          }
                        }
                        else {
                          if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          UVar45.z = fStack_1ec;
                          UVar45.x = (float)(undefined4)uStack_108;
                          UVar45.y = (float)uStack_108._4_4_;
                          UVar13.z = fStack_214;
                          UVar13.x = (float)uStack_188;
                          UVar13.y = uStack_188._4_4_;
                          plVar87 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                          if (plVar87 != (long *)0x0) {
                            puVar86 = &"AHSS";
label_042988bf:
                            plVar87 = (long *)(**(code **)(*plVar87 + 0x1a8))
                                                        (plVar87,*puVar86,*(undefined8 *)(*plVar87 + 0x1b0));
                            UVar45.z = fStack_1ec;
                            UVar45.x = (float)(undefined4)uStack_108;
                            UVar45.y = (float)uStack_108._4_4_;
                            UVar13.z = fStack_214;
                            UVar13.x = (float)uStack_188;
                            UVar13.y = uStack_188._4_4_;
                            goto joined_r0x042988d5;
                          }
                        }
                      }
                      else {
                        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        UVar45.z = fStack_1ec;
                        UVar45.x = (float)(undefined4)uStack_108;
                        UVar45.y = (float)uStack_108._4_4_;
                        UVar13.z = fStack_214;
                        UVar13.x = (float)uStack_188;
                        UVar13.y = uStack_188._4_4_;
                        plVar87 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                        if (plVar87 != (long *)0x0) {
                          plVar87 = (long *)(**(code **)(*plVar87 + 0x1a8))
                                                      (plVar87,"Blade",*(undefined8 *)(*plVar87 + 0x1b0))
                          ;
                          UVar45.z = fStack_1ec;
                          UVar45.x = (float)(undefined4)uStack_108;
                          UVar45.y = (float)uStack_108._4_4_;
                          UVar13.z = fStack_214;
                          UVar13.x = (float)uStack_188;
                          UVar13.y = uStack_188._4_4_;
joined_r0x042988d5:
                          if (plVar87 != (long *)0x0) {
                            plVar87 = (long *)(**(code **)(*plVar87 + 0x1a8))
                                                        (plVar87,"DamageMultiplier",
                                                         *(undefined8 *)(*plVar87 + 0x1b0));
                            UVar45.z = fStack_1ec;
                            UVar45.x = (float)(undefined4)uStack_108;
                            UVar45.y = (float)uStack_108._4_4_;
                            UVar13.z = fStack_214;
                            UVar13.x = (float)uStack_188;
                            UVar13.y = uStack_188._4_4_;
                            if (plVar87 != (long *)0x0) {
                              fVar109 = (float)(**(code **)(*plVar87 + 0x388))
                                                         (plVar87,*(undefined8 *)(*plVar87 + 0x390));
                              position_01.fields.z = (float)(int)(fVar109 * position_01.fields.z);
                              goto label_0429892b;
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (iVar91 == 1) {
                      bVar81 = System_String__op_Inequality
                                         (str0,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                          (MethodInfo *)0x0);
                      position_01.fields.z = extraout_XMM0_Da;
                      if ((char)bVar81 != '\0') {
                        str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                        position_01.fields.z = extraout_XMM0_Da_00;
                      }
                      pSVar84 = System_Single__ToString_3cccfe0
                                          (position_01.fields.z,(System_String_o *)&stack0xfffffffffffffd94,
                                           "F1");
                      str0 = System_String__Concat_3af7150(str0,pSVar84," u/s",(MethodInfo *)0x0);
                    }
label_04298a10:
                    UVar55.z = fStack_1ec;
                    UVar55.x = (float)(undefined4)uStack_108;
                    UVar55.y = (float)uStack_108._4_4_;
                    UVar54.z = fStack_1ec;
                    UVar54.x = (float)(undefined4)uStack_108;
                    UVar54.y = (float)uStack_108._4_4_;
                    UVar53.z = fStack_1ec;
                    UVar53.x = (float)(undefined4)uStack_108;
                    UVar53.y = (float)uStack_108._4_4_;
                    UVar52.z = fStack_1ec;
                    UVar52.x = (float)(undefined4)uStack_108;
                    UVar52.y = (float)uStack_108._4_4_;
                    UVar51.z = fStack_1ec;
                    UVar51.x = (float)(undefined4)uStack_108;
                    UVar51.y = (float)uStack_108._4_4_;
                    UVar45.z = fStack_1ec;
                    UVar45.x = (float)(undefined4)uStack_108;
                    UVar45.y = (float)uStack_108._4_4_;
                    UVar23.z = fStack_214;
                    UVar23.x = (float)uStack_188;
                    UVar23.y = uStack_188._4_4_;
                    UVar22.z = fStack_214;
                    UVar22.x = (float)uStack_188;
                    UVar22.y = uStack_188._4_4_;
                    UVar21.z = fStack_214;
                    UVar21.x = (float)uStack_188;
                    UVar21.y = uStack_188._4_4_;
                    UVar20.z = fStack_214;
                    UVar20.x = (float)uStack_188;
                    UVar20.y = uStack_188._4_4_;
                    UVar19.z = fStack_214;
                    UVar19.x = (float)uStack_188;
                    UVar19.y = uStack_188._4_4_;
                    UVar13.z = fStack_214;
                    UVar13.x = (float)uStack_188;
                    UVar13.y = uStack_188._4_4_;
                    lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                    if ((lVar85 != 0) &&
                       (lVar85 = *(long *)(lVar85 + 0x48), UVar13 = UVar19, UVar45 = UVar51, lVar85 != 0)) {
                      if (*(char *)(lVar85 + 0x11) != '\0') {
                        lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                        UVar13 = UVar20;
                        UVar45 = UVar52;
                        if (((lVar85 == 0) ||
                            (lVar85 = *(long *)(lVar85 + 0x58), UVar13 = UVar21, UVar45 = UVar53, lVar85 == 0)
                            ) || (lVar85 = *(long *)(lVar85 + 0x48), UVar13 = UVar22, UVar45 = UVar54,
                                 lVar85 == 0)) goto label_042993fa;
                        if (*(char *)(lVar85 + 0x11) != '\0') {
                          UVar13 = UVar23;
                          UVar45 = UVar55;
                          if ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass ==
                              (System_String_array *)0x0) goto label_042993fa;
                          pSVar84 = ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->
                                    m_Items[0x1c];
                          if (pSVar84 != (System_String_o *)0x0) {
                            pSVar8 = pSVar84->klass;
                            bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            if ((bVar2 <= (pSVar8->_2).naturalAligment) &&
                               ((pSVar8->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_ThunderspearWeapon)) {
                              bVar81 = System_String__op_Inequality
                                                 (str0,(System_String_o *)
                                                       **(undefined8 **)(g_data_057b9c00 + 0xb8),
                                                  (MethodInfo *)0x0);
                              if ((char)bVar81 != '\0') {
                                str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                              }
                              UVar56.z = fStack_1ec;
                              UVar56.x = (float)(undefined4)uStack_108;
                              UVar56.y = (float)uStack_108._4_4_;
                              UVar45.z = fStack_1ec;
                              UVar45.x = (float)(undefined4)uStack_108;
                              UVar45.y = (float)uStack_108._4_4_;
                              UVar24.z = fStack_214;
                              UVar24.x = (float)uStack_188;
                              UVar24.y = uStack_188._4_4_;
                              UVar13.z = fStack_214;
                              UVar13.x = (float)uStack_188;
                              UVar13.y = uStack_188._4_4_;
                              if (((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass ==
                                   (System_String_array *)0x0) ||
                                 (__this_01 = (Characters_BaseUseable_o *)
                                              ((System_String_array *)
                                              ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[0x1c],
                                 UVar13 = UVar24, UVar45 = UVar56,
                                 __this_01 == (Characters_BaseUseable_o *)0x0)) goto label_042993fa;
                              bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                              if (((__this_01->klass->_2).naturalAligment < bVar2) ||
                                 ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_ThunderspearWeapon))
                              goto label_042993ff;
                              fStack_210 = Characters_BaseUseable__GetCooldownLeft
                                                     (__this_01,(MethodInfo *)0x0);
                              fVar93 = 0.0;
                              fVar106 = 0.0;
                              fVar107 = 0.0;
                              fVar108 = 0.0;
                              if (fStack_210 <= 0.0) {
                                str0 = System_String__Concat_3ae5ba0(str0,"<color=#008000>READY</color>",(MethodInfo *)0x0);
                              }
                              else {
                                pSVar84 = System_Single__ToString_3cccfe0
                                                    (fStack_210,(System_String_o *)&fStack_210,"F2");
                                str0 = System_String__Concat_3af7470
                                                 (str0,"<color=#FF0000>",pSVar84,"</color>",(MethodInfo *)0x0);
                              }
                            }
                          }
                        }
                      }
                      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UI_CursorManager__SetCrosshairText(str0,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UI_CursorManager__SetCrosshairColor
                                ((uint)((float)uStack_258 <= 120.0),(MethodInfo *)0x0);
                      UVar58.z = fStack_1ec;
                      UVar58.x = (float)(undefined4)uStack_108;
                      UVar58.y = (float)uStack_108._4_4_;
                      UVar57.z = fStack_1ec;
                      UVar57.x = (float)(undefined4)uStack_108;
                      UVar57.y = (float)uStack_108._4_4_;
                      UVar45.z = fStack_1ec;
                      UVar45.x = (float)(undefined4)uStack_108;
                      UVar45.y = (float)uStack_108._4_4_;
                      UVar26.z = fStack_214;
                      UVar26.x = (float)uStack_188;
                      UVar26.y = uStack_188._4_4_;
                      UVar25.z = fStack_214;
                      UVar25.x = (float)uStack_188;
                      UVar25.y = uStack_188._4_4_;
                      UVar13.z = fStack_214;
                      UVar13.x = (float)uStack_188;
                      UVar13.y = uStack_188._4_4_;
                      lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                      if ((lVar85 != 0) &&
                         (lVar85 = *(long *)(lVar85 + 0xa8), UVar13 = UVar25, UVar45 = UVar57, lVar85 != 0)) {
                        if (*(char *)(lVar85 + 0x11) == '\0') {
                          return;
                        }
                        UVar13 = UVar26;
                        UVar45 = UVar58;
                        if ((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->method !=
                            (System_String_array *)0x0) {
                          uVar95 = (*((((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->method)
                                      ->obj).klass)->vtable[0x42].methodPtr)();
                          UVar60.z = fStack_1ec;
                          UVar60.x = (float)(undefined4)uStack_108;
                          UVar60.y = (float)uStack_108._4_4_;
                          UVar59.z = fStack_1ec;
                          UVar59.x = (float)(undefined4)uStack_108;
                          UVar59.y = (float)uStack_108._4_4_;
                          UVar45.z = fStack_1ec;
                          UVar45.x = (float)(undefined4)uStack_108;
                          UVar45.y = (float)uStack_108._4_4_;
                          UVar28.z = fStack_214;
                          UVar28.x = (float)uStack_188;
                          UVar28.y = uStack_188._4_4_;
                          UVar27.z = fStack_214;
                          UVar27.x = (float)uStack_188;
                          UVar27.y = uStack_188._4_4_;
                          UVar13.z = fStack_214;
                          UVar13.x = (float)uStack_188;
                          UVar13.y = uStack_188._4_4_;
                          lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                          if (((lVar85 != 0) &&
                              (lVar85 = *(long *)(lVar85 + 0x28), UVar13 = UVar27, UVar45 = UVar59,
                              lVar85 != 0)) &&
                             (pUVar9 = *(UnityEngine_Transform_o **)(lVar85 + 0x10), UVar13 = UVar28,
                             UVar45 = UVar60, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                            fVar121 = fVar106;
                            UVar115 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
                            position_01.fields.z = UVar115.fields.x;
                            fVar109 = UVar115.fields.y;
                            uVar103 = extraout_XMM0_Dc_01;
                            iVar82 = extraout_XMM0_Dd_00;
                            if (g_data_057a68cb == '\0') {
                              uStack_220._0_4_ = (float)extraout_XMM0_Dc_01;
                              auStack_228 = (undefined1  [8])UVar115.fields._0_8_;
                              uStack_220._4_4_ = (float)extraout_XMM0_Dd_00;
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                              g_data_057a68cb = '\x01';
                              position_01.fields.z = (float)auStack_228._0_4_;
                              fVar109 = (float)auStack_228._4_4_;
                              uVar103 = (float)uStack_220;
                              iVar82 = (int32_t)uStack_220._4_4_;
                            }
                            uStack_258._0_4_ = (float)uVar95;
                            uStack_258._4_4_ = (float)((ulong)uVar95 >> 0x20);
                            fVar105 = UVar115.fields.z - fVar93;
                            fVar106 = fVar106 - fVar121;
                            fVar94 = fVar109 - uStack_258._4_4_;
                            if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                              auStack_228._4_4_ = fVar109;
                              auStack_228._0_4_ = fVar109 - uStack_258._4_4_;
                              uStack_220._0_4_ = (float)uVar103;
                              uStack_220._4_4_ = (float)iVar82;
                              il2cpp_runtime_helper_02337ed0();
                              fVar94 = (float)auStack_228._0_4_;
                            }
                            position_01.fields.z =
                                 (position_01.fields.z - (float)uStack_258) *
                                 (position_01.fields.z - (float)uStack_258);
                            fVar106 = fVar106 * fVar106;
                            fVar109 = (fVar109 - uStack_258._4_4_) * (fVar109 - uStack_258._4_4_);
                            fVar94 = position_01.fields.z + fVar94 * fVar94 + fVar105 * fVar105;
                            if (fVar94 < 0.0) {
                              fVar94 = sqrtf(fVar94);
                              position_01.fields.z = extraout_XMM0_Db;
                              fVar106 = extraout_XMM0_Dc_02;
                              fVar109 = extraout_XMM0_Dd_01;
                            }
                            else {
                              fVar94 = SQRT(fVar94);
                            }
                            UVar62.z = fStack_1ec;
                            UVar62.x = (float)(undefined4)uStack_108;
                            UVar62.y = (float)uStack_108._4_4_;
                            UVar61.z = fStack_1ec;
                            UVar61.x = (float)(undefined4)uStack_108;
                            UVar61.y = (float)uStack_108._4_4_;
                            UVar45.z = fStack_1ec;
                            UVar45.x = (float)(undefined4)uStack_108;
                            UVar45.y = (float)uStack_108._4_4_;
                            UVar30.z = fStack_214;
                            UVar30.x = (float)uStack_188;
                            UVar30.y = uStack_188._4_4_;
                            UVar29.z = fStack_214;
                            UVar29.x = (float)uStack_188;
                            UVar29.y = uStack_188._4_4_;
                            UVar13.z = fStack_214;
                            UVar13.x = (float)uStack_188;
                            UVar13.y = uStack_188._4_4_;
                            if (((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                 (System_String_array *)0x0) &&
                               (pSVar84 = ((System_String_array *)
                                          ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[10],
                               UVar13 = UVar29, UVar45 = UVar61, pSVar84 != (System_String_o *)0x0)) {
                              auStack_208._4_4_ = position_01.fields.z;
                              auStack_208._0_4_ = fVar94;
                              fStack_200 = fVar106;
                              fStack_1fc = fVar109;
                              SVar7 = pSVar84->fields;
                              UVar13 = UVar30;
                              UVar45 = UVar62;
                              if (SVar7 != (System_String_Fields)0x0) {
                                UVar115 = UnityEngine_Transform__get_right
                                                    ((UnityEngine_Transform_o *)SVar7,(MethodInfo *)0x0);
                                UVar64.z = fStack_1ec;
                                UVar64.x = (float)(undefined4)uStack_108;
                                UVar64.y = (float)uStack_108._4_4_;
                                UVar63.z = fStack_1ec;
                                UVar63.x = (float)(undefined4)uStack_108;
                                UVar63.y = (float)uStack_108._4_4_;
                                UVar45.z = fStack_1ec;
                                UVar45.x = (float)(undefined4)uStack_108;
                                UVar45.y = (float)uStack_108._4_4_;
                                UVar32.z = fStack_214;
                                UVar32.x = (float)uStack_188;
                                UVar32.y = uStack_188._4_4_;
                                UVar31.z = fStack_214;
                                UVar31.x = (float)uStack_188;
                                UVar31.y = uStack_188._4_4_;
                                UVar13.z = fStack_214;
                                UVar13.x = (float)uStack_188;
                                UVar13.y = uStack_188._4_4_;
                                if (((System_String_array *)((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                     (System_String_array *)0x0) &&
                                   (pSVar84 = ((System_String_array *)
                                              ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items[10],
                                   UVar13 = UVar31, UVar45 = UVar63, pSVar84 != (System_String_o *)0x0)) {
                                  uStack_220 = extraout_XMM0_Qb_00;
                                  auStack_228 = (undefined1  [8])UVar115.fields._0_8_;
                                  SVar7 = pSVar84->fields;
                                  UVar13 = UVar32;
                                  UVar45 = UVar64;
                                  if (SVar7 != (System_String_Fields)0x0) {
                                    UVar117 = (UnityEngine_Vector3_Fields)
                                              UnityEngine_Transform__get_right
                                                        ((UnityEngine_Transform_o *)SVar7,(MethodInfo *)0x0);
                                    UVar65.z = fStack_1ec;
                                    UVar65.x = (float)(undefined4)uStack_108;
                                    UVar65.y = (float)uStack_108._4_4_;
                                    UVar45.z = fStack_1ec;
                                    UVar45.x = (float)(undefined4)uStack_108;
                                    UVar45.y = (float)uStack_108._4_4_;
                                    UVar13.z = fStack_214;
                                    UVar13.x = (float)uStack_188;
                                    UVar13.y = uStack_188._4_4_;
                                    fStack_214 = UVar117.z;
                                    uStack_188 = UVar117._0_8_;
                                    lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                    if (lVar85 != 0) {
                                      pUVar5 = *(UnityEngine_Camera_o **)(lVar85 + 0x20);
                                      fStack_250 = (float)extraout_XMM0_Qb;
                                      fStack_24c = (float)((ulong)extraout_XMM0_Qb >> 0x20);
                                      UVar13 = UVar117;
                                      UVar45 = UVar65;
                                      if (pUVar5 != (UnityEngine_Camera_o *)0x0) {
                                        auStack_198._4_4_ =
                                             (float)auStack_208._0_4_ *
                                             *(float *)(&g_data_00d1d698 + (ulong)(50.0 < fVar94) * 4);
                                        auStack_198._0_4_ = auStack_198._4_4_;
                                        fStack_190 = fStack_200;
                                        fStack_18c = fStack_1fc;
                                        position_01.fields.z = (float)uStack_220 * fStack_200;
                                        fVar106 = uStack_220._4_4_ * fStack_1fc;
                                        auStack_208._0_4_ = auStack_198._4_4_;
                                        position.fields.x =
                                             (float)uStack_258 -
                                             (float)auStack_228._0_4_ * (float)auStack_198._4_4_;
                                        position.fields.y =
                                             uStack_258._4_4_ -
                                             (float)auStack_228._4_4_ * (float)auStack_198._4_4_;
                                        position.fields.z =
                                             fVar93 - UVar115.fields.z * (float)auStack_198._4_4_;
                                        auStack_228._4_4_ = fVar121;
                                        auStack_228._0_4_ = position.fields.z;
                                        uStack_220._0_4_ = fVar107;
                                        uStack_220._4_4_ = fVar108;
                                        uStack_180 = extraout_XMM0_Qb_01;
                                        UVar115 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                                            (pUVar5,position,(MethodInfo *)0x0);
                                        uStack_1e8 = UVar115.fields._0_8_;
                                        if (g_data_057add05 == '\0') {
                                          il2cpp_runtime_helper_023445d0(uStack_1e8,UVar115.fields.z,&TypeInfo_CursorManager);
                                          g_data_057add05 = '\x01';
                                        }
                                        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        UVar115 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                                        fVar109 = atan2f(uStack_1e8._4_4_ - UVar115.fields.y,
                                                         (float)uStack_1e8 - UVar115.fields.x);
                                        uVar103 = extraout_var._4_4_;
                                        uVar104 = extraout_var._8_4_;
                                        auVar10._4_8_ = 0;
                                        auVar10._0_4_ = fVar109 * 57.29578 * 0.017453292;
                                        UVar114 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                            ((UnityEngine_Vector3_o)(auVar10 << 0x40),
                                                             (MethodInfo *)0x0);
                                        UVar67.z = fStack_1ec;
                                        UVar67.x = (float)(undefined4)uStack_108;
                                        UVar67.y = (float)uStack_108._4_4_;
                                        UVar66.z = fStack_1ec;
                                        UVar66.x = (float)(undefined4)uStack_108;
                                        UVar66.y = (float)uStack_108._4_4_;
                                        UVar45.z = fStack_1ec;
                                        UVar45.x = (float)(undefined4)uStack_108;
                                        UVar45.y = (float)uStack_108._4_4_;
                                        UVar34.z = fStack_214;
                                        UVar34.x = (float)uStack_188;
                                        UVar34.y = uStack_188._4_4_;
                                        UVar33.z = fStack_214;
                                        UVar33.x = (float)uStack_188;
                                        UVar33.y = uStack_188._4_4_;
                                        UVar13.z = fStack_214;
                                        UVar13.x = (float)uStack_188;
                                        UVar13.y = uStack_188._4_4_;
                                        if (((System_String_array *)
                                             ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                             (System_String_array *)0x0) &&
                                           (pSVar84 = ((System_String_array *)
                                                      ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->m_Items
                                                      [10], UVar13 = UVar33, UVar45 = UVar66,
                                           pSVar84 != (System_String_o *)0x0)) {
                                          auStack_f8._8_4_ = uVar103;
                                          auStack_f8._0_8_ = UVar114.fields._8_8_;
                                          auStack_f8._12_4_ = uVar104;
                                          SVar7 = pSVar84->fields;
                                          uStack_e8 = UVar114.fields._0_8_;
                                          UVar13 = UVar34;
                                          UVar45 = UVar67;
                                          if (SVar7 != (System_String_Fields)0x0) {
                                            UVar117 = (UnityEngine_Vector3_Fields)
                                                      UnityEngine_Transform__get_position
                                                                ((UnityEngine_Transform_o *)SVar7,
                                                                 (MethodInfo *)0x0);
                                            UVar68.z = fStack_1ec;
                                            UVar68.x = (float)(undefined4)uStack_108;
                                            UVar68.y = (float)uStack_108._4_4_;
                                            UVar45.z = fStack_1ec;
                                            UVar45.x = (float)(undefined4)uStack_108;
                                            UVar45.y = (float)uStack_108._4_4_;
                                            UVar36.z = fStack_214;
                                            UVar36.x = (float)uStack_188;
                                            UVar36.y = uStack_188._4_4_;
                                            UVar35.z = fStack_214;
                                            UVar35.x = (float)uStack_188;
                                            UVar35.y = uStack_188._4_4_;
                                            UVar13.z = fStack_214;
                                            UVar13.x = (float)uStack_188;
                                            UVar13.y = uStack_188._4_4_;
                                            fStack_1ec = UVar117.z;
                                            uStack_108 = UVar117._0_8_;
                                            if ((((System_String_array *)
                                                  ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                                  (System_String_array *)0x0) &&
                                                (pSVar84 = ((System_String_array *)
                                                           ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)->
                                                           m_Items[10], UVar13 = UVar35, UVar45 = UVar68,
                                                pSVar84 != (System_String_o *)0x0)) &&
                                               (SVar7 = pSVar84->fields, UVar13 = UVar36, UVar45 = UVar117,
                                               SVar7 != (System_String_Fields)0x0)) {
                                              UVar115 = UnityEngine_Transform__get_position
                                                                  ((UnityEngine_Transform_o *)SVar7,
                                                                   (MethodInfo *)0x0);
                                              auVar113._0_8_ = UVar115.fields._0_8_;
                                              auVar113._8_8_ = extraout_XMM0_Qb_02;
                                              fVar109 = UVar115.fields.z;
                                              if (g_data_057a6845 == '\0') {
                                                fStack_1f0 = UVar115.fields.z;
                                                auStack_118 = auVar113;
                                                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                g_data_057a6845 = '\x01';
                                                auVar113 = auStack_118;
                                                fVar109 = fStack_1f0;
                                              }
                                              auVar111._0_4_ = position.fields.x - auVar113._0_4_;
                                              auVar111._4_4_ = position.fields.y - auVar113._4_4_;
                                              auVar111._8_4_ =
                                                   (fStack_250 - position_01.fields.z) - auVar113._8_4_;
                                              auVar111._12_4_ = (fStack_24c - fVar106) - auVar113._12_4_;
                                              position_01.fields.z = (float)auStack_228._0_4_ - fVar109;
                                              if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                                                auStack_228._0_4_ = (float)auStack_228._0_4_ - fVar109;
                                                il2cpp_runtime_helper_02337ed0();
                                                position_01.fields.z = (float)auStack_228._0_4_;
                                              }
                                              auVar96._4_4_ = auStack_228._4_4_;
                                              auVar96._0_4_ = position_01.fields.z;
                                              auVar96._8_4_ = (float)uStack_220;
                                              auVar96._12_4_ = uStack_220._4_4_;
                                              auVar97._4_12_ = auVar96._4_12_;
                                              fVar106 = position_01.fields.z * position_01.fields.z +
                                                        auVar111._4_4_ * auVar111._4_4_ +
                                                        auVar111._0_4_ * auVar111._0_4_;
                                              if (fVar106 < 0.0) {
                                                auStack_228._0_4_ = position_01.fields.z;
                                                auVar97._0_4_ = sqrtf(fVar106);
                                                auVar97._4_12_ = extraout_var_00;
                                                position_01.fields.z = (float)auStack_228._0_4_;
                                                if (auVar97._0_4_ <= 1e-05) goto label_04298ff7;
label_04299051:
                                                auVar98._0_4_ = auVar97._0_4_;
                                                auStack_228._0_4_ = position_01.fields.z / auVar98._0_4_;
                                                auVar98._8_4_ = auVar97._8_4_;
                                                auVar98._12_4_ = auVar97._12_4_;
                                                auVar98._4_4_ = auVar98._0_4_;
                                                auVar113 = divps(auVar111,auVar98);
                                                uVar95 = auVar113._0_8_;
                                              }
                                              else {
                                                auVar97._0_4_ = SQRT(fVar106);
                                                if (1e-05 < auVar97._0_4_) goto label_04299051;
label_04298ff7:
                                                if (g_data_057a65d5 == '\0') {
                                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                  g_data_057a65d5 = '\x01';
                                                }
                                                uVar95 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                                                auStack_228._0_4_ =
                                                     *(undefined4 *)
                                                      (*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                                                auStack_228._4_4_ = 0;
                                                uStack_220._0_4_ = 0.0;
                                                uStack_220._4_4_ = 0.0;
                                              }
                                              if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              iVar82 = UnityEngine_LayerMask__get_value
                                                                 ((UnityEngine_LayerMask_Fields)
                                                                  (int32_t)*(undefined8 *)
                                                                            (TypeInfo_HumanPlayerController + 0xb8),
                                                                  (MethodInfo *)0x0);
                                              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              UVar115.fields.z = fStack_1ec;
                                              UVar115.fields.x = (float)(undefined4)uStack_108;
                                              UVar115.fields.y = (float)uStack_108._4_4_;
                                              direction.fields.z = (float)auStack_228._0_4_;
                                              direction.fields.x = (float)(int)uVar95;
                                              direction.fields.y = (float)(int)((ulong)uVar95 >> 0x20);
                                              uVar83 = UnityEngine_Physics__Raycast_4e76f20
                                                                 (UVar115,direction,120.0,iVar82,
                                                                  (MethodInfo *)0x0);
                                              if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              auVar113 = auStack_f8;
                                              position_00.fields.z = 0.0;
                                              position_00.fields.x = (float)uStack_1e8;
                                              position_00.fields.y = uStack_1e8._4_4_;
                                              UVar114.fields.z = (float)auStack_f8._0_4_;
                                              UVar114.fields.w = (float)auStack_f8._4_4_;
                                              UVar114.fields.x = (float)(undefined4)uStack_e8;
                                              UVar114.fields.y = (float)uStack_e8._4_4_;
                                              auStack_f8 = auVar113;
                                              UI_CursorManager__SetHookArrow
                                                        (1,position_00,UVar114,uVar83 & 0xff,(MethodInfo *)0x0
                                                        );
                                              UVar69.z = fStack_1ec;
                                              UVar69.x = (float)(undefined4)uStack_108;
                                              UVar69.y = (float)uStack_108._4_4_;
                                              UVar45.z = fStack_1ec;
                                              UVar45.x = (float)(undefined4)uStack_108;
                                              UVar45.y = (float)uStack_108._4_4_;
                                              UVar37.z = fStack_214;
                                              UVar37.x = (float)uStack_188;
                                              UVar37.y = uStack_188._4_4_;
                                              UVar13.z = fStack_214;
                                              UVar13.x = (float)uStack_188;
                                              UVar13.y = uStack_188._4_4_;
                                              lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                              if (lVar85 != 0) {
                                                pUVar5 = *(UnityEngine_Camera_o **)(lVar85 + 0x20);
                                                UVar13 = UVar37;
                                                UVar45 = UVar69;
                                                if (pUVar5 != (UnityEngine_Camera_o *)0x0) {
                                                  fVar106 = fStack_190 * (float)uStack_180;
                                                  fVar109 = fStack_18c * uStack_180._4_4_;
                                                  position_01.fields.x =
                                                       (float)uStack_258 +
                                                       (float)auStack_198._0_4_ * (float)uStack_188;
                                                  position_01.fields.y =
                                                       uStack_258._4_4_ +
                                                       (float)auStack_198._4_4_ * uStack_188._4_4_;
                                                  position_01.fields.z =
                                                       fVar93 + (float)auStack_208._0_4_ * fStack_214;
                                                  UVar115 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                                                      (pUVar5,position_01,(MethodInfo *)0x0);
                                                  position_02.fields._0_8_ = UVar115.fields._0_8_;
                                                  if (g_data_057add05 == '\0') {
                                                    il2cpp_runtime_helper_023445d0(position_02.fields._0_8_,
                                                                       UVar115.fields.z,&TypeInfo_CursorManager);
                                                    g_data_057add05 = '\x01';
                                                  }
                                                  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  UVar118 = UI_CursorManager__GetInGameMousePosition
                                                                      ((MethodInfo *)0x0);
                                                  fStack_248 = UVar115.fields.x;
                                                  fStack_244 = UVar115.fields.y;
                                                  fVar93 = atan2f(fStack_244 - UVar118.fields.y,
                                                                  fStack_248 - UVar118.fields.x);
                                                  uVar103 = extraout_var_01._4_4_;
                                                  uVar104 = extraout_var_01._8_4_;
                                                  auVar11._4_8_ = 0;
                                                  auVar11._0_4_ = fVar93 * 57.29578 * 0.017453292;
                                                  UVar114 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                      ((UnityEngine_Vector3_o)
                                                                       (auVar11 << 0x40),(MethodInfo *)0x0);
                                                  UVar71.z = fStack_1ec;
                                                  UVar71.x = (float)(undefined4)uStack_108;
                                                  UVar71.y = (float)uStack_108._4_4_;
                                                  UVar70.z = fStack_1ec;
                                                  UVar70.x = (float)(undefined4)uStack_108;
                                                  UVar70.y = (float)uStack_108._4_4_;
                                                  UVar45.z = fStack_1ec;
                                                  UVar45.x = (float)(undefined4)uStack_108;
                                                  UVar45.y = (float)uStack_108._4_4_;
                                                  UVar39.z = fStack_214;
                                                  UVar39.x = (float)uStack_188;
                                                  UVar39.y = uStack_188._4_4_;
                                                  UVar38.z = fStack_214;
                                                  UVar38.x = (float)uStack_188;
                                                  UVar38.y = uStack_188._4_4_;
                                                  UVar13.z = fStack_214;
                                                  UVar13.x = (float)uStack_188;
                                                  UVar13.y = uStack_188._4_4_;
                                                  if (((System_String_array *)
                                                       ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                                       (System_String_array *)0x0) &&
                                                     (pSVar84 = ((System_String_array *)
                                                                ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass)
                                                                ->m_Items[10], UVar13 = UVar38,
                                                     UVar45 = UVar70, pSVar84 != (System_String_o *)0x0)) {
                                                    fStack_200 = (float)uVar103;
                                                    auStack_208 = (undefined1  [8])UVar114.fields._8_8_;
                                                    fStack_1fc = (float)uVar104;
                                                    uStack_220 = extraout_XMM0_Qb_03;
                                                    auStack_228 = (undefined1  [8])UVar114.fields._0_8_;
                                                    SVar7 = pSVar84->fields;
                                                    UVar13 = UVar39;
                                                    UVar45 = UVar71;
                                                    if (SVar7 != (System_String_Fields)0x0) {
                                                      UVar115 = UnityEngine_Transform__get_position
                                                                          ((UnityEngine_Transform_o *)SVar7,
                                                                           (MethodInfo *)0x0);
                                                      UVar73.z = fStack_1ec;
                                                      UVar73.x = (float)(undefined4)uStack_108;
                                                      UVar73.y = (float)uStack_108._4_4_;
                                                      UVar72.z = fStack_1ec;
                                                      UVar72.x = (float)(undefined4)uStack_108;
                                                      UVar72.y = (float)uStack_108._4_4_;
                                                      UVar45.z = fStack_1ec;
                                                      UVar45.x = (float)(undefined4)uStack_108;
                                                      UVar45.y = (float)uStack_108._4_4_;
                                                      UVar40.z = fStack_214;
                                                      UVar40.x = (float)uStack_188;
                                                      UVar40.y = uStack_188._4_4_;
                                                      UVar13.z = fStack_214;
                                                      UVar13.x = (float)uStack_188;
                                                      UVar13.y = uStack_188._4_4_;
                                                      fStack_214 = UVar115.fields.z;
                                                      if (((System_String_array *)
                                                           ((Il2CppRGCTXData *)(__this_03 + 0xb))->klass !=
                                                           (System_String_array *)0x0) &&
                                                         (pSVar84 = ((System_String_array *)
                                                                    ((Il2CppRGCTXData *)(__this_03 + 0xb))->
                                                                    klass)->m_Items[10], UVar13 = UVar40,
                                                         UVar45 = UVar72, pSVar84 != (System_String_o *)0x0))
                                                      {
                                                        UVar13.z = fStack_214;
                                                        UVar13.x = (float)uStack_188;
                                                        UVar13.y = uStack_188._4_4_;
                                                        SVar7 = pSVar84->fields;
                                                        uStack_1e8 = UVar115.fields._0_8_;
                                                        UVar45 = UVar73;
                                                        if (SVar7 != (System_String_Fields)0x0) {
                                                          UVar115 = UnityEngine_Transform__get_position
                                                                              ((UnityEngine_Transform_o *)
                                                                               SVar7,(MethodInfo *)0x0);
                                                          auVar99._0_8_ = UVar115.fields._0_8_;
                                                          auVar99._8_8_ = extraout_XMM0_Qb_04;
                                                          fVar93 = UVar115.fields.z;
                                                          if (g_data_057a6845 == '\0') {
                                                            uStack_188 = CONCAT44(uStack_188._4_4_,
                                                                                  UVar115.fields.z);
                                                            _auStack_198 = auVar99;
                                                            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                            g_data_057a6845 = '\x01';
                                                            auVar99 = _auStack_198;
                                                            fVar93 = (float)uStack_188;
                                                          }
                                                          auVar112._0_4_ =
                                                               position_01.fields.x - auVar99._0_4_;
                                                          auVar112._4_4_ =
                                                               position_01.fields.y - auVar99._4_4_;
                                                          auVar112._8_4_ =
                                                               (fStack_250 + fVar106) - auVar99._8_4_;
                                                          auVar112._12_4_ =
                                                               (fStack_24c + fVar109) - auVar99._12_4_;
                                                          position_01.fields.z = position_01.fields.z - fVar93
                                                          ;
                                                          if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4)
                                                              == 0) {
                                                            il2cpp_runtime_helper_02337ed0();
                                                          }
                                                          auVar100._4_4_ = fVar121;
                                                          auVar100._0_4_ = position_01.fields.z;
                                                          auVar100._8_4_ = fVar107;
                                                          auVar100._12_4_ = fVar108;
                                                          auVar101._4_12_ = auVar100._4_12_;
                                                          fVar93 = position_01.fields.z * position_01.fields.z
                                                                   + auVar112._4_4_ * auVar112._4_4_ +
                                                                     auVar112._0_4_ * auVar112._0_4_;
                                                          if (fVar93 < 0.0) {
                                                            auVar101._0_4_ = sqrtf(fVar93);
                                                            auVar101._4_12_ = extraout_var_02;
                                                            fVar93 = auVar101._0_4_;
                                                          }
                                                          else {
                                                            auVar101._0_4_ = SQRT(fVar93);
                                                            fVar93 = auVar101._0_4_;
                                                          }
                                                          if (1e-05 < fVar93) {
                                                            auVar102._0_4_ = auVar101._0_4_;
                                                            position_01.fields.z =
                                                                 position_01.fields.z / auVar102._0_4_;
                                                            auVar102._8_4_ = auVar101._8_4_;
                                                            auVar102._12_4_ = auVar101._12_4_;
                                                            auVar102._4_4_ = auVar102._0_4_;
                                                            auVar113 = divps(auVar112,auVar102);
                                                            uStack_258 = auVar113._0_8_;
                                                          }
                                                          else {
                                                            if (g_data_057a65d5 == '\0') {
                                                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                              g_data_057a65d5 = '\x01';
                                                            }
                                                            uStack_258 = **(undefined8 **)
                                                                           (TypeInfo_Vector3 + 0xb8);
                                                            position_01.fields.z =
                                                                 *(float *)(*(undefined8 **)
                                                                             (TypeInfo_Vector3 + 0xb8) + 1);
                                                          }
                                                          iVar82 = UnityEngine_LayerMask__get_value
                                                                             ((UnityEngine_LayerMask_Fields)
                                                                              (int32_t)*(undefined8 *)
                                                                                        (TypeInfo_HumanPlayerController + 0xb8),
                                                                              (MethodInfo *)0x0);
                                                          origin.fields.z = fStack_214;
                                                          origin.fields.x = (float)uStack_1e8;
                                                          origin.fields.y = uStack_1e8._4_4_;
                                                          direction_00.fields.z = position_01.fields.z;
                                                          direction_00.fields.x = (float)uStack_258;
                                                          direction_00.fields.y = uStack_258._4_4_;
                                                          uVar83 = UnityEngine_Physics__Raycast_4e76f20
                                                                             (origin,direction_00,120.0,iVar82
                                                                              ,(MethodInfo *)0x0);
                                                          auVar111 = _auStack_208;
                                                          auVar113 = _auStack_228;
                                                          position_02.fields.z = 0.0;
                                                          rotation.fields.z = (float)auStack_208._0_4_;
                                                          rotation.fields.w = (float)auStack_208._4_4_;
                                                          rotation.fields.x = (float)auStack_228._0_4_;
                                                          rotation.fields.y = (float)auStack_228._4_4_;
                                                          _auStack_228 = auVar113;
                                                          _auStack_208 = auVar111;
                                                          UI_CursorManager__SetHookArrow
                                                                    (0,position_02,rotation,uVar83 & 0xff,
                                                                     (MethodInfo *)0x0);
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
          pSVar6 = pSVar4->m_Items[10];
          aUStack_178[1]._4_8_ = UStack_d0.fields.m_Direction.fields._4_8_;
          aUStack_178[0]._0_8_ = UStack_d0.fields.m_Origin.fields._0_8_;
          aUStack_178._8_8_ = UStack_d0.fields._8_8_;
          uStack_1a8 = UStack_d0.fields.m_Direction.fields._4_8_;
          auStack_1b8._0_8_ = UStack_d0.fields.m_Origin.fields._0_8_;
          auStack_1b8._8_8_ = UStack_d0.fields._8_8_;
          UVar13 = UVar117;
          UVar45 = UVar78;
joined_r0x04298280:
          if (pSVar6 != (System_String_o *)0x0) {
            UVar45.z = fStack_1ec;
            UVar45.x = (float)(int)uStack_108;
            UVar45.y = (float)(int)((ulong)uStack_108 >> 0x20);
            UVar13.z = fStack_214;
            UVar13.x = (float)(int)uStack_188;
            UVar13.y = (float)(int)((ulong)uStack_188 >> 0x20);
            if (pSVar6[1].klass != (System_String_c *)0x0) {
              UVar115 = UnityEngine_Rigidbody__get_velocity
                                  ((UnityEngine_Rigidbody_o *)pSVar6[1].klass,(MethodInfo *)0x0);
              auVar110._8_4_ = extraout_XMM0_Dc;
              auVar110._0_8_ = UVar115.fields._0_8_;
              if (g_data_057a6841 == '\0') {
                in_stack_fffffffffffffd98 = UVar115.fields.x;
                in_stack_fffffffffffffd9c = UVar115.fields.y;
                in_stack_fffffffffffffda0 = extraout_XMM0_Dc;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                auVar110._4_4_ = in_stack_fffffffffffffd9c;
                auVar110._0_4_ = in_stack_fffffffffffffd98;
                auVar110._8_4_ = in_stack_fffffffffffffda0;
                g_data_057a6841 = '\x01';
              }
              iVar82 = auVar110._8_4_;
              position_01.fields.z = auVar110._4_4_;
              if (*(int *)((long)TypeInfo_Math.rgctx_data + 0xe4) == 0) {
                in_stack_fffffffffffffd98 = auVar110._0_4_;
                in_stack_fffffffffffffd9c = position_01.fields.z;
                il2cpp_runtime_helper_02337ed0();
                auVar110._4_4_ = in_stack_fffffffffffffd9c;
                auVar110._0_4_ = in_stack_fffffffffffffd98;
                auVar110._8_4_ = iVar82;
                in_stack_fffffffffffffda0 = iVar82;
              }
              pfVar89 = (float *)auStack_1b8;
              position_01.fields.z =
                   position_01.fields.z * position_01.fields.z + auVar110._0_4_ * auVar110._0_4_ +
                   UVar115.fields.z * UVar115.fields.z;
              if (position_01.fields.z < 0.0) goto label_0429824f;
label_04298371:
              position_01.fields.z = SQRT(position_01.fields.z);
              goto label_04298375;
            }
          }
        }
      }
    }
  }
label_042993fa:
  fStack_1ec = UVar45.z;
  uStack_108 = UVar45._0_8_;
  fStack_214 = UVar13.z;
  uStack_188 = UVar13._0_8_;
  il2cpp_runtime_helper_022b2c90();
label_042993ff:
  uVar95 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057add05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057add05 = '\x01';
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar115 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  fStackY_2a0 = (float)uVar95;
  fStackY_29c = (float)((ulong)uVar95 >> 0x20);
  position_01.fields.z = atan2f(fStackY_29c - UVar115.fields.y,fStackY_2a0 - UVar115.fields.x);
  auVar12._4_8_ = 0;
  auVar12._0_4_ = position_01.fields.z * 57.29578 * 0.017453292;
  UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o)(auVar12 << 0x40),(MethodInfo *)0x0);
  return;
}


// Controllers.HumanPlayerController$$UpdateMovementInput
// il2cpp: void Controllers_HumanPlayerController__UpdateMovementInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x4297820

void Controllers_HumanPlayerController__UpdateMovementInput
               (Controllers_HumanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  bool_conflict *pbVar1;
  byte bVar2;
  byte bVar3;
  Characters_Human_o *pCVar4;
  Settings_HumanInputSettings_o *pSVar5;
  Characters_Human_o *pCVar6;
  Settings_GeneralInputSettings_o *pSVar7;
  Characters_BaseCharacter_o *pCVar8;
  System_Action_Hashtable__o *pSVar9;
  System_Action_Hashtable__c *pSVar10;
  Characters_AnimationHandler_o *__this_00;
  UnityEngine_Camera_o *pUVar11;
  System_String_Fields SVar12;
  UnityEngine_Transform_o *pUVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_Vector3_Fields UVar17;
  UnityEngine_Vector3_Fields UVar18;
  UnityEngine_Vector3_Fields UVar19;
  UnityEngine_Vector3_Fields UVar20;
  UnityEngine_Vector3_Fields UVar21;
  UnityEngine_Vector3_Fields UVar22;
  UnityEngine_Vector3_Fields UVar23;
  UnityEngine_Vector3_Fields UVar24;
  UnityEngine_Vector3_Fields UVar25;
  UnityEngine_Vector3_Fields UVar26;
  UnityEngine_Vector3_Fields UVar27;
  UnityEngine_Vector3_Fields UVar28;
  UnityEngine_Vector3_Fields UVar29;
  UnityEngine_Vector3_Fields UVar30;
  UnityEngine_Vector3_Fields UVar31;
  UnityEngine_Vector3_Fields UVar32;
  UnityEngine_Vector3_Fields UVar33;
  UnityEngine_Vector3_Fields UVar34;
  UnityEngine_Vector3_Fields UVar35;
  UnityEngine_Vector3_Fields UVar36;
  UnityEngine_Vector3_Fields UVar37;
  UnityEngine_Vector3_Fields UVar38;
  UnityEngine_Vector3_Fields UVar39;
  UnityEngine_Vector3_Fields UVar40;
  UnityEngine_Vector3_Fields UVar41;
  UnityEngine_Vector3_Fields UVar42;
  UnityEngine_Vector3_Fields UVar43;
  UnityEngine_Vector3_Fields UVar44;
  UnityEngine_Vector3_Fields UVar45;
  UnityEngine_Vector3_Fields UVar46;
  UnityEngine_Vector3_Fields UVar47;
  UnityEngine_Vector3_Fields UVar48;
  UnityEngine_Vector3_Fields UVar49;
  UnityEngine_Vector3_Fields UVar50;
  UnityEngine_Vector3_Fields UVar51;
  UnityEngine_Vector3_Fields UVar52;
  UnityEngine_Vector3_Fields UVar53;
  UnityEngine_Vector3_Fields UVar54;
  UnityEngine_Vector3_Fields UVar55;
  UnityEngine_Vector3_Fields UVar56;
  UnityEngine_Vector3_Fields UVar57;
  UnityEngine_Vector3_Fields UVar58;
  UnityEngine_Vector3_Fields UVar59;
  UnityEngine_Vector3_Fields UVar60;
  UnityEngine_Vector3_Fields UVar61;
  UnityEngine_Vector3_Fields UVar62;
  UnityEngine_Vector3_Fields UVar63;
  UnityEngine_Vector3_Fields UVar64;
  UnityEngine_Vector3_Fields UVar65;
  UnityEngine_Vector3_Fields UVar66;
  UnityEngine_Vector3_Fields UVar67;
  UnityEngine_Vector3_Fields UVar68;
  UnityEngine_Vector3_Fields UVar69;
  UnityEngine_Vector3_Fields UVar70;
  UnityEngine_Vector3_Fields UVar71;
  UnityEngine_Vector3_Fields UVar72;
  UnityEngine_Vector3_Fields UVar73;
  UnityEngine_Vector3_Fields UVar74;
  UnityEngine_Vector3_Fields UVar75;
  UnityEngine_Vector3_Fields UVar76;
  UnityEngine_Vector3_Fields UVar77;
  UnityEngine_Vector3_Fields UVar78;
  UnityEngine_Vector3_Fields UVar79;
  UnityEngine_Vector3_Fields UVar80;
  UnityEngine_Vector3_Fields UVar81;
  UnityEngine_Vector3_Fields UVar82;
  char cVar83;
  uint uVar84;
  bool_conflict bVar85;
  int32_t iVar86;
  uint uVar87;
  System_String_o *str1;
  System_String_o *str0;
  long lVar88;
  System_String_o *pSVar89;
  undefined8 *puVar90;
  long *plVar91;
  int iVar92;
  float *pfVar93;
  Characters_Human_o *__this_02;
  int iVar94;
  bool bVar95;
  float fVar96;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar97;
  undefined8 uVar98;
  float extraout_XMM0_Db;
  int32_t extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  int32_t extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 extraout_var [12];
  undefined4 uVar106;
  undefined4 uVar107;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar101 [16];
  undefined1 extraout_var_01 [12];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 extraout_var_02 [12];
  undefined1 auVar105 [16];
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar113 [12];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  UnityEngine_Quaternion_o UVar117;
  UnityEngine_Vector3_o UVar118;
  UnityEngine_Vector3_Fields UVar119;
  UnityEngine_Vector3_Fields UVar120;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o UVar121;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  float fStackY_298;
  float fStackY_294;
  undefined8 uVar122;
  undefined8 uVar123;
  undefined4 in_stack_fffffffffffffd98;
  float in_stack_fffffffffffffda0;
  float in_stack_fffffffffffffda4;
  float fVar124;
  int32_t in_stack_fffffffffffffda8;
  undefined8 uStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_224;
  undefined1 auStack_220 [8];
  undefined8 uStack_218;
  float fStack_20c;
  float fStack_208;
  int iStack_204;
  undefined1 auStack_200 [8];
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  undefined1 auStack_190 [8];
  float fStack_188;
  float fStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  UnityEngine_Vector3_Fields aUStack_170 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  UnityEngine_Ray_o UStack_c8;
  Il2CppMethodPointer pIStack_b0;
  Il2CppMethodPointer pIStack_a8;
  InvokerMethod pIStack_a0;
  uint32_t uStack_98;
  float fStack_94;
  float fStack_90;
  undefined8 uStack_8c;
  _union_13 _Stack_78;
  float fStack_34;
  undefined8 extraout_XMM0_Qb_04;
  
  __this_02 = (Characters_Human_o *)__this;
  if (g_data_057add03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DownStrikeSpecial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    il2cpp_runtime_helper_023445d0(&"jump");
    __this_02 = (Characters_Human_o *)&"dash";
    il2cpp_runtime_helper_023445d0();
    g_data_057add03 = '\x01';
  }
  if ((char)inMenu == '\0') {
    pCVar4 = (__this->fields)._human;
    if (pCVar4 != (Characters_Human_o *)0x0) {
      if ((*(char *)&(pCVar4->fields).FeedVictimName != '\0') || ((pCVar4->fields).FinishSetup == 0xf))
      goto label_04297890;
      pSVar5 = (__this->fields)._humanInput;
      if ((pSVar5 != (Settings_HumanInputSettings_o *)0x0) &&
         (__this_02 = (Characters_Human_o *)(pSVar5->fields).HorseWalk, __this_02 != (Characters_Human_o *)0x0
         )) {
        bVar85 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
        if ((char)bVar85 == '\0') {
label_042978f8:
          pSVar5 = (__this->fields)._humanInput;
          if ((pSVar5 != (Settings_HumanInputSettings_o *)0x0) &&
             (__this_02 = (Characters_Human_o *)(pSVar5->fields).Walk, __this_02 != (Characters_Human_o *)0x0)
             ) {
            bVar95 = false;
            bVar85 = Settings_KeybindSetting__GetKey
                               ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
            if ((char)bVar85 != '\0') {
              pCVar6 = (__this->fields)._human;
              if (pCVar6 == (Characters_Human_o *)0x0) goto label_04297e5b;
              bVar95 = *(int *)&(pCVar6->fields).Weapon == 0;
            }
label_0429793d:
            *(bool *)&(pCVar4->fields).IsRefillable = bVar95;
            pCVar4 = (__this->fields)._human;
            if (pCVar4 != (Characters_Human_o *)0x0) {
              if (*(int *)&(pCVar4->fields).Weapon != 1) {
                iVar94 = (pCVar4->fields).FinishSetup;
                if (*(char *)((long)&(pCVar4->fields).Animation + 4) == '\0') {
                  if (iVar94 == 8) {
                    return;
                  }
                  if (iVar94 == 9) {
                    pSVar9 = (pCVar4->fields).OnPlayerPropertiesChanged;
                    if (pSVar9 == (System_Action_Hashtable__o *)0x0) {
                      return;
                    }
                    pSVar10 = pSVar9->klass;
                    bVar3 = (pSVar10->_2).naturalAligment;
                    bVar2 = (TypeInfo_DownStrikeSpecial->_2).naturalAligment;
                    if ((bVar3 < bVar2) || ((pSVar10->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DownStrikeSpecial)) {
                      bVar2 = (TypeInfo_StockSpecial->_2).naturalAligment;
                      if (bVar3 < bVar2) {
                        return;
                      }
                      if ((pSVar10->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StockSpecial) {
                        return;
                      }
                    }
                  }
                  __this_02 = *(Characters_Human_o **)&(pCVar4->fields)._cameraFPS;
                  if (__this_02 != (Characters_Human_o *)0x0) {
                    bVar85 = Characters_AnimationHandler__IsPlaying
                                       ((Characters_AnimationHandler_o *)__this_02,"dash",
                                        (MethodInfo *)0x0);
                    if ((char)bVar85 != '\0') {
                      return;
                    }
                    pCVar4 = (__this->fields)._human;
                    if (pCVar4 != (Characters_Human_o *)0x0) {
                      __this_00 = *(Characters_AnimationHandler_o **)&(pCVar4->fields)._cameraFPS;
                      __this_02 = (Characters_Human_o *)0x0;
                      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
                        bVar85 = Characters_AnimationHandler__IsPlaying
                                           (__this_00,"jump",(MethodInfo *)0x0);
                        if ((char)bVar85 != '\0') {
                          return;
                        }
                        __this_02 = (__this->fields)._human;
                        if (__this_02 != (Characters_Human_o *)0x0) {
                          bVar85 = Characters_Human__IsFiringThunderspear(__this_02,(MethodInfo *)0x0);
                          if ((char)bVar85 != '\0') {
                            return;
                          }
                          goto label_0429795e;
                        }
                      }
                    }
                  }
                  goto label_04297e5b;
                }
                if (iVar94 != 0) {
                  return;
                }
              }
label_0429795e:
              pSVar7 = (__this->fields)._generalInput;
              if ((pSVar7 != (Settings_GeneralInputSettings_o *)0x0) &&
                 (__this_02 = (Characters_Human_o *)(pSVar7->fields).Autorun,
                 __this_02 != (Characters_Human_o *)0x0)) {
                bVar85 = Settings_KeybindSetting__GetKeyDown
                                   ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
                if ((char)bVar85 != '\0') {
                  pbVar1 = &(__this->fields)._autorun;
                  *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
                }
                pSVar7 = (__this->fields)._generalInput;
                if ((pSVar7 != (Settings_GeneralInputSettings_o *)0x0) &&
                   (__this_02 = (Characters_Human_o *)(pSVar7->fields).Forward,
                   __this_02 != (Characters_Human_o *)0x0)) {
                  bVar85 = Settings_KeybindSetting__GetKey
                                     ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
                  iVar94 = 1;
                  if ((char)bVar85 == '\0') {
                    pSVar7 = (__this->fields)._generalInput;
                    if ((pSVar7 == (Settings_GeneralInputSettings_o *)0x0) ||
                       (__this_02 = (Characters_Human_o *)(pSVar7->fields).Back,
                       __this_02 == (Characters_Human_o *)0x0)) goto label_04297e5b;
                    uVar87 = Settings_KeybindSetting__GetKey
                                       ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
                    iVar94 = -(uVar87 & 0xff);
                  }
                  pSVar7 = (__this->fields)._generalInput;
                  if ((pSVar7 != (Settings_GeneralInputSettings_o *)0x0) &&
                     (__this_02 = (Characters_Human_o *)(pSVar7->fields).Left,
                     __this_02 != (Characters_Human_o *)0x0)) {
                    bVar85 = Settings_KeybindSetting__GetKey
                                       ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
                    uVar87 = 0xffffffff;
                    if ((char)bVar85 == '\0') {
                      pSVar7 = (__this->fields)._generalInput;
                      if ((pSVar7 == (Settings_GeneralInputSettings_o *)0x0) ||
                         (__this_02 = (Characters_Human_o *)(pSVar7->fields).Right,
                         __this_02 == (Characters_Human_o *)0x0)) goto label_04297e5b;
                      uVar84 = Settings_KeybindSetting__GetKey
                                         ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
                      uVar87 = uVar84 & 0xff;
                      if ((iVar94 != 0) || ((char)uVar84 != '\0')) goto label_04297a0c;
                      cVar83 = (char)(__this->fields)._autorun;
                      uVar87 = 0;
                    }
                    else {
label_04297a0c:
                      *(undefined1 *)&(__this->fields)._autorun = 0;
                      cVar83 = '\0';
                    }
                    uVar84 = 0;
                    if (cVar83 == '\0') {
                      uVar84 = uVar87;
                    }
                    iVar92 = 1;
                    if (cVar83 == '\0') {
                      iVar92 = iVar94;
                    }
                    pCVar8 = (__this->fields)._character;
                    if (iVar92 == 0 && uVar84 == 0) {
                      if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
                        *(undefined1 *)((long)&(pCVar8->fields).Detection + 4) = 0;
                        pCVar4 = (__this->fields)._human;
                        if (pCVar4 != (Characters_Human_o *)0x0) {
                          (pCVar4->fields).IsAttackableState = 0;
                          return;
                        }
                      }
                    }
                    else {
                      if (g_data_057adcc8 == '\0') {
                        __this_02 = (Characters_Human_o *)&TypeInfo_SceneLoader;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057adcc8 = '\x01';
                      }
                      lVar88 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                      if ((lVar88 != 0) && (lVar88 = *(long *)(lVar88 + 0x28), lVar88 != 0)) {
                        pUVar13 = *(UnityEngine_Transform_o **)(lVar88 + 0x10);
                        __this_02 = (Characters_Human_o *)0x0;
                        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                          UVar117 = UnityEngine_Transform__get_rotation(pUVar13,(MethodInfo *)0x0);
                          UVar118 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar117,(MethodInfo *)0x0);
                          UVar121.fields.x = UVar118.fields.x * 57.29578;
                          UVar121.fields.y = UVar118.fields.y * 57.29578;
                          UVar121.fields.z = UVar118.fields.z * 57.29578;
                          __this_02 = (Characters_Human_o *)0x0;
                          UVar118 = UnityEngine_Quaternion__Internal_MakePositive(UVar121,(MethodInfo *)0x0);
                          fVar109 = (float)iVar92;
                          fVar96 = (float)(int)uVar84;
                          position_01.fields.z = atan2f(fVar109,fVar96);
                          if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
                            fStack_34 = UVar118.fields.y;
                            *(float *)&(pCVar8->fields).Detection =
                                 position_01.fields.z * -57.29578 + fStack_34 + 90.0;
                            pCVar8 = (__this->fields)._character;
                            if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
                              *(undefined1 *)((long)&(pCVar8->fields).Detection + 4) = 1;
                              if (g_data_057a6841 == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                g_data_057a6841 = '\x01';
                              }
                              __this_02 = TypeInfo_Math;
                              if ((TypeInfo_Math->fields)._stepPhase == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              position_01.fields.z = fVar109 * fVar109 + fVar96 * fVar96 + 0.0;
                              if (position_01.fields.z < 0.0) {
                                fVar96 = sqrtf(position_01.fields.z);
                                if (fVar96 <= 0.95) goto label_04297c37;
label_04297c1d:
                                fVar109 = 1.0;
                                pCVar4 = (__this->fields)._human;
                              }
                              else {
                                if (0.95 < SQRT(position_01.fields.z)) goto label_04297c1d;
label_04297c37:
                                if (g_data_057a6841 == '\0') {
                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                  g_data_057a6841 = '\x01';
                                  if ((TypeInfo_Math->fields)._stepPhase != 0) goto label_04297c55;
label_04297d98:
                                  __this_02 = TypeInfo_Math;
                                  il2cpp_runtime_helper_02337ed0();
                                  if (0.0 <= position_01.fields.z) goto label_04297c67;
label_04297daf:
                                  fVar96 = sqrtf(position_01.fields.z);
                                }
                                else {
                                  if ((TypeInfo_Math->fields)._stepPhase == 0) goto label_04297d98;
label_04297c55:
                                  __this_02 = TypeInfo_Math;
                                  if (position_01.fields.z < 0.0) goto label_04297daf;
label_04297c67:
                                  fVar96 = SQRT(position_01.fields.z);
                                }
                                fVar109 = 0.0;
                                if (0.25 <= fVar96) {
                                  if (g_data_057a6841 == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                    g_data_057a6841 = '\x01';
                                  }
                                  __this_02 = TypeInfo_Math;
                                  if ((TypeInfo_Math->fields)._stepPhase == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  if (position_01.fields.z < 0.0) {
                                    fVar109 = sqrtf(position_01.fields.z);
                                    goto label_04297e19;
                                  }
                                  fVar109 = SQRT(position_01.fields.z);
                                  pCVar4 = (__this->fields)._human;
                                }
                                else {
label_04297e19:
                                  pCVar4 = (__this->fields)._human;
                                }
                              }
                              if (pCVar4 != (Characters_Human_o *)0x0) {
                                if (((((char)(pCVar4->fields).IsRefillable != '\0') &&
                                     (*(int *)&(pCVar4->fields).Weapon == 0)) &&
                                    ((pCVar4->fields).FinishSetup == 0)) &&
                                   (*(char *)((long)&(pCVar4->fields).Animation + 4) != '\0')) {
                                  fVar109 = fVar109 * 0.25;
                                }
                                (pCVar4->fields).IsAttackableState = (bool_conflict)fVar109;
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
        else {
          pCVar6 = (__this->fields)._human;
          if (pCVar6 != (Characters_Human_o *)0x0) {
            bVar95 = true;
            if (*(int *)&(pCVar6->fields).Weapon != 1) goto label_042978f8;
            goto label_0429793d;
          }
        }
      }
    }
  }
  else {
label_04297890:
    if ((char)(__this->fields)._autorun != '\0') {
      return;
    }
    pCVar4 = (__this->fields)._human;
    if (pCVar4 != (Characters_Human_o *)0x0) {
      *(undefined1 *)((long)&(pCVar4->fields).Detection + 4) = 0;
      return;
    }
  }
label_04297e5b:
  il2cpp_runtime_helper_022b2c90();
  _Stack_78 = (_union_13)__this;
  if (g_data_057add04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"<color=#FF0000>");
    il2cpp_runtime_helper_023445d0(&"F2");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"K");
    il2cpp_runtime_helper_023445d0(&"DamageMultiplier");
    il2cpp_runtime_helper_023445d0(&"<color=#008000>READY</color>");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&" | ");
    il2cpp_runtime_helper_023445d0(&"F1");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    il2cpp_runtime_helper_023445d0(&"???");
    il2cpp_runtime_helper_023445d0(&" u/s");
    g_data_057add04 = '\x01';
  }
  UVar49.z = fStack_1e4;
  UVar49.x = (float)(undefined4)uStack_100;
  UVar49.y = (float)uStack_100._4_4_;
  UVar17.z = fStack_20c;
  UVar17.x = (float)uStack_180;
  UVar17.y = uStack_180._4_4_;
  fStack_90 = 0.0;
  uStack_8c = 0;
  pIStack_a0 = (InvokerMethod)0x0;
  uStack_98 = 0;
  fStack_94 = 0.0;
  pIStack_b0 = (Il2CppMethodPointer)0x0;
  pIStack_a8 = (Il2CppMethodPointer)0x0;
  iStack_204 = 0;
  fStack_224 = 0.0;
  fStack_208 = 0.0;
  auStack_1b0._0_4_ = 0.0;
  auStack_1b0._4_4_ = 0.0;
  auStack_1b0._8_4_ = 0.0;
  auStack_1b0._12_4_ = 0.0;
  uStack_1a0._0_4_ = 0.0;
  uStack_1a0._4_4_ = 0.0;
  auStack_1d0._0_4_ = 0.0;
  auStack_1d0._4_4_ = 0.0;
  auStack_1d0._8_4_ = 0.0;
  auStack_1d0._12_4_ = 0.0;
  uStack_1c0._0_4_ = 0.0;
  uStack_1c0._4_4_ = 0.0;
  auStack_130._0_4_ = 0.0;
  auStack_130._4_4_ = 0.0;
  auStack_130._8_4_ = 0.0;
  auStack_130._12_4_ = 0.0;
  uStack_120._0_4_ = 0.0;
  uStack_120._4_4_ = 0.0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  lVar88 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar88 != 0) {
    pUVar11 = *(UnityEngine_Camera_o **)(lVar88 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar118 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    UVar49.z = fStack_1e4;
    UVar49.x = (float)(undefined4)uStack_100;
    UVar49.y = (float)uStack_100._4_4_;
    UVar17.z = fStack_20c;
    UVar17.x = (float)uStack_180;
    UVar17.y = uStack_180._4_4_;
    if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_c8,pUVar11,UVar118,(MethodInfo *)0x0);
      str1 = "???";
      UVar82.z = fStack_1e4;
      UVar82.x = (float)(undefined4)uStack_100;
      UVar82.y = (float)uStack_100._4_4_;
      UVar49.z = fStack_1e4;
      UVar49.x = (float)(undefined4)uStack_100;
      UVar49.y = (float)uStack_100._4_4_;
      UVar120.z = fStack_20c;
      UVar120.x = (float)uStack_180;
      UVar120.y = uStack_180._4_4_;
      UVar17.z = fStack_20c;
      UVar17.x = (float)uStack_180;
      UVar17.y = uStack_180._4_4_;
      aUStack_170[1].y = UStack_c8.fields.m_Direction.fields.y;
      aUStack_170[1].z = UStack_c8.fields.m_Direction.fields.z;
      aUStack_170[0].x = UStack_c8.fields.m_Origin.fields.x;
      aUStack_170[0].y = UStack_c8.fields.m_Origin.fields.y;
      aUStack_170[0].z = UStack_c8.fields.m_Origin.fields.z;
      aUStack_170[1].x = UStack_c8.fields.m_Direction.fields.x;
      pSVar89 = (__this_02->fields).Guild;
      if (pSVar89 != (System_String_o *)0x0) {
        str0 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)&pSVar89[0xb].fields._firstChar == 1) {
          uStack_1c0._0_4_ = UStack_c8.fields.m_Direction.fields.y;
          uStack_1c0._4_4_ = UStack_c8.fields.m_Direction.fields.z;
          auStack_1d0._0_4_ = UStack_c8.fields.m_Origin.fields.x;
          auStack_1d0._4_4_ = UStack_c8.fields.m_Origin.fields.y;
          auStack_1d0._8_4_ = UStack_c8.fields.m_Origin.fields.z;
          auStack_1d0._12_4_ = UStack_c8.fields.m_Direction.fields.x;
          SVar12 = pSVar89[0xf].fields;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar85 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)SVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          UVar81.z = fStack_1e4;
          UVar81.x = (float)(undefined4)uStack_100;
          UVar81.y = (float)uStack_100._4_4_;
          UVar49.z = fStack_1e4;
          UVar49.x = (float)(undefined4)uStack_100;
          UVar49.y = (float)uStack_100._4_4_;
          UVar51.z = fStack_1e4;
          UVar51.x = (float)(undefined4)uStack_100;
          UVar51.y = (float)uStack_100._4_4_;
          UVar50.z = fStack_1e4;
          UVar50.x = (float)(undefined4)uStack_100;
          UVar50.y = (float)uStack_100._4_4_;
          UVar48.z = fStack_20c;
          UVar48.x = (float)uStack_180;
          UVar48.y = uStack_180._4_4_;
          UVar17.z = fStack_20c;
          UVar17.x = (float)uStack_180;
          UVar17.y = uStack_180._4_4_;
          UVar19.z = fStack_20c;
          UVar19.x = (float)uStack_180;
          UVar19.y = uStack_180._4_4_;
          UVar18.z = fStack_20c;
          UVar18.x = (float)uStack_180;
          UVar18.y = uStack_180._4_4_;
          if ((char)bVar85 == '\0') {
            uStack_1a0._0_4_ = (float)uStack_1c0;
            uStack_1a0._4_4_ = uStack_1c0._4_4_;
            auStack_1b0._0_8_ = auStack_1d0._0_8_;
            auStack_1b0._8_8_ = auStack_1d0._8_8_;
            pSVar89 = (__this_02->fields).Guild;
            if (pSVar89 != (System_String_o *)0x0) {
              SVar12 = pSVar89[4].fields;
              uStack_1a0 = uStack_1c0;
              UVar17 = UVar48;
              UVar49 = UVar81;
              goto joined_r0x04298280;
            }
          }
          else {
            uStack_120._0_4_ = (float)uStack_1c0;
            uStack_120._4_4_ = uStack_1c0._4_4_;
            auStack_130._0_8_ = auStack_1d0._0_8_;
            auStack_130._8_8_ = auStack_1d0._8_8_;
            pSVar89 = (__this_02->fields).Guild;
            UVar17 = UVar18;
            UVar49 = UVar50;
            if ((pSVar89 != (System_String_o *)0x0) &&
               (SVar12 = pSVar89[0xf].fields, UVar17 = UVar19, UVar49 = UVar51,
               SVar12 != (System_String_Fields)0x0)) {
              if (g_data_057a6841 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6841 = '\x01';
              }
              fVar109 = *(float *)((long)SVar12 + 400);
              position_01.fields.z = *(float *)((long)SVar12 + 0x194);
              fVar96 = *(float *)((long)SVar12 + 0x198);
              if ((TypeInfo_Math->fields)._stepPhase == 0) {
                il2cpp_runtime_helper_02337ed0();
                in_stack_fffffffffffffda0 = fVar109;
              }
              pfVar93 = (float *)auStack_130;
              position_01.fields.z =
                   fVar96 * fVar96 + position_01.fields.z * position_01.fields.z + fVar109 * fVar109;
              if (0.0 <= position_01.fields.z) goto label_04298371;
label_0429824f:
              position_01.fields.z = sqrtf(position_01.fields.z);
label_04298375:
              uStack_140 = *(undefined8 *)(pfVar93 + 4);
              fVar96 = *pfVar93;
              fVar109 = pfVar93[1];
              uStack_150 = *(undefined8 *)pfVar93;
              fVar110 = pfVar93[2];
              fVar111 = pfVar93[3];
              uStack_148 = *(undefined8 *)(pfVar93 + 2);
              if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar86 = UnityEngine_LayerMask__get_value
                                 ((UnityEngine_LayerMask_Fields)(int32_t)*(undefined8 *)(TypeInfo_HumanPlayerController + 0xb8),
                                  (MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uStack_250._0_4_ = 1000.0;
              ray.fields.m_Origin.fields.z = (float)(undefined4)uStack_148;
              ray.fields.m_Direction.fields.x = (float)uStack_148._4_4_;
              ray.fields.m_Origin.fields.x = (float)(undefined4)uStack_150;
              ray.fields.m_Origin.fields.y = (float)uStack_150._4_4_;
              ray.fields.m_Direction.fields.y = (float)(undefined4)uStack_140;
              ray.fields.m_Direction.fields.z = (float)uStack_140._4_4_;
              uVar98 = uStack_150;
              uVar122 = uStack_148;
              uVar123 = uStack_140;
              bVar85 = UnityEngine_Physics__Raycast_4e78080
                                 (ray,(UnityEngine_RaycastHit_o *)&pIStack_b0,1000.0,iVar86,(MethodInfo *)0x0)
              ;
              if ((char)bVar85 != '\0') {
                __this_01.fields.m_Point.fields.z = (float)(int)uVar122;
                __this_01.fields.m_Normal.fields.x = (float)(int)((ulong)uVar122 >> 0x20);
                __this_01.fields.m_Point.fields.x = (float)(int)uVar98;
                __this_01.fields.m_Point.fields.y = (float)(int)((ulong)uVar98 >> 0x20);
                __this_01.fields.m_Normal.fields.y = (float)(int)uVar123;
                __this_01.fields.m_Normal.fields.z = (float)(int)((ulong)uVar123 >> 0x20);
                __this_01.fields.m_FaceID = in_stack_fffffffffffffd98;
                __this_01.fields.m_Distance = position_01.fields.z;
                __this_01.fields.m_UV.fields.x = in_stack_fffffffffffffda0;
                __this_01.fields.m_UV.fields.y = in_stack_fffffffffffffda4;
                __this_01.fields.m_Collider = in_stack_fffffffffffffda8;
                UVar118 = UnityEngine_RaycastHit__get_point(__this_01,(MethodInfo *)&pIStack_b0);
                UVar53.z = fStack_1e4;
                UVar53.x = (float)(undefined4)uStack_100;
                UVar53.y = (float)uStack_100._4_4_;
                UVar52.z = fStack_1e4;
                UVar52.x = (float)(undefined4)uStack_100;
                UVar52.y = (float)uStack_100._4_4_;
                UVar49.z = fStack_1e4;
                UVar49.x = (float)(undefined4)uStack_100;
                UVar49.y = (float)uStack_100._4_4_;
                UVar21.z = fStack_20c;
                UVar21.x = (float)uStack_180;
                UVar21.y = uStack_180._4_4_;
                UVar20.z = fStack_20c;
                UVar20.x = (float)uStack_180;
                UVar20.y = uStack_180._4_4_;
                UVar17.z = fStack_20c;
                UVar17.x = (float)uStack_180;
                UVar17.y = uStack_180._4_4_;
                fVar96 = UVar118.fields.z;
                pSVar89 = (__this_02->fields).Guild;
                if (((pSVar89 == (System_String_o *)0x0) ||
                    (SVar12 = pSVar89[4].fields, UVar17 = UVar20, UVar49 = UVar52,
                    SVar12 == (System_String_Fields)0x0)) ||
                   (pUVar13 = *(UnityEngine_Transform_o **)((long)SVar12 + 0x10), UVar17 = UVar21,
                   UVar49 = UVar53, pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_042993fa;
                UVar119 = (UnityEngine_Vector3_Fields)
                          UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
                uStack_250._0_4_ = UVar118.fields.x;
                uStack_250._4_4_ = UVar118.fields.y;
                fVar109 = UVar119.y;
                if (g_data_057a6841 == '\0') {
                  auStack_220._0_4_ = UVar119.z;
                  fStack_1f8 = (float)extraout_XMM0_Dc_00;
                  auStack_200 = (undefined1  [8])UVar119._0_8_;
                  fStack_1f4 = (float)extraout_XMM0_Dd;
                  uStack_1e0 = CONCAT44(fVar109,fVar109);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  auVar116 = _auStack_200;
                  UVar119.z = (float)auStack_220._0_4_;
                  UVar119.x = (float)auStack_200._0_4_;
                  UVar119.y = (float)auStack_200._4_4_;
                  g_data_057a6841 = '\x01';
                  fVar109 = (float)uStack_1e0;
                  _auStack_200 = auVar116;
                }
                uStack_250._0_4_ = (float)uStack_250 - UVar119.x;
                fVar96 = fVar96 - UVar119.z;
                if ((TypeInfo_Math->fields)._stepPhase == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uStack_250._0_4_ =
                     fVar96 * fVar96 +
                     (uStack_250._4_4_ - fVar109) * (uStack_250._4_4_ - fVar109) +
                     (float)uStack_250 * (float)uStack_250;
                fVar96 = 0.0;
                fVar109 = 0.0;
                fVar110 = 0.0;
                fVar111 = 0.0;
                if ((float)uStack_250 < 0.0) {
                  uStack_250._0_4_ = sqrtf((float)uStack_250);
                }
                else {
                  uStack_250._0_4_ = SQRT((float)uStack_250);
                }
                iStack_204 = (int)(float)uStack_250;
                str1 = System_Int32__ToString((int32_t)&iStack_204,(MethodInfo *)0x0);
              }
              UVar54.z = fStack_1e4;
              UVar54.x = (float)(undefined4)uStack_100;
              UVar54.y = (float)uStack_100._4_4_;
              UVar49.z = fStack_1e4;
              UVar49.x = (float)(undefined4)uStack_100;
              UVar49.y = (float)uStack_100._4_4_;
              UVar22.z = fStack_20c;
              UVar22.x = (float)uStack_180;
              UVar22.y = uStack_180._4_4_;
              UVar17.z = fStack_20c;
              UVar17.x = (float)uStack_180;
              UVar17.y = uStack_180._4_4_;
              lVar88 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if ((lVar88 != 0) && (UVar17 = UVar22, UVar49 = UVar54, *(long *)(lVar88 + 0x88) != 0)) {
                if (*(char *)(*(long *)(lVar88 + 0x88) + 0x11) != '\0') {
                  str0 = System_String__Concat_3ae5ba0(str0,str1,(MethodInfo *)0x0);
                  UVar49.z = fStack_1e4;
                  UVar49.x = (float)(undefined4)uStack_100;
                  UVar49.y = (float)uStack_100._4_4_;
                  UVar17.z = fStack_20c;
                  UVar17.x = (float)uStack_180;
                  UVar17.y = uStack_180._4_4_;
                  lVar88 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  if (lVar88 == 0) goto label_042993fa;
                }
                UVar49.z = fStack_1e4;
                UVar49.x = (float)(undefined4)uStack_100;
                UVar49.y = (float)uStack_100._4_4_;
                UVar17.z = fStack_20c;
                UVar17.x = (float)uStack_180;
                UVar17.y = uStack_180._4_4_;
                if (*(long *)(lVar88 + 0x98) != 0) {
                  iVar94 = *(int *)(*(long *)(lVar88 + 0x98) + 0x14);
                  if (iVar94 == 2) {
                    bVar85 = System_String__op_Inequality
                                       (str0,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                        (MethodInfo *)0x0);
                    if ((char)bVar85 != '\0') {
                      str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                    }
                    UVar80.z = fStack_1e4;
                    UVar80.x = (float)(undefined4)uStack_100;
                    UVar80.y = (float)uStack_100._4_4_;
                    UVar79.z = fStack_1e4;
                    UVar79.x = (float)(undefined4)uStack_100;
                    UVar79.y = (float)uStack_100._4_4_;
                    UVar78.z = fStack_1e4;
                    UVar78.x = (float)(undefined4)uStack_100;
                    UVar78.y = (float)uStack_100._4_4_;
                    UVar49.z = fStack_1e4;
                    UVar49.x = (float)(undefined4)uStack_100;
                    UVar49.y = (float)uStack_100._4_4_;
                    UVar47.z = fStack_20c;
                    UVar47.x = (float)uStack_180;
                    UVar47.y = uStack_180._4_4_;
                    UVar46.z = fStack_20c;
                    UVar46.x = (float)uStack_180;
                    UVar46.y = uStack_180._4_4_;
                    UVar45.z = fStack_20c;
                    UVar45.x = (float)uStack_180;
                    UVar45.y = uStack_180._4_4_;
                    UVar17.z = fStack_20c;
                    UVar17.x = (float)uStack_180;
                    UVar17.y = uStack_180._4_4_;
                    pSVar89 = (__this_02->fields).Guild;
                    fStack_224 = position_01.fields.z;
                    if (pSVar89 != (System_String_o *)0x0) {
                      SVar12 = pSVar89[10].fields;
                      if (SVar12 == (System_String_Fields)0x0) goto label_0429892b;
                      lVar88 = *(long *)SVar12;
                      bVar3 = *(byte *)(lVar88 + 0x130);
                      if ((bVar3 < *(byte *)(TypeInfo_BladeWeapon + 0x130)) ||
                         (*(long *)(*(long *)(lVar88 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BladeWeapon + 0x130) * 8)
                          != TypeInfo_BladeWeapon)) {
                        if ((bVar3 < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
                           (*(long *)(*(long *)(lVar88 + 200) + -8 +
                                     (ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130) * 8) != TypeInfo_AHSSWeapon)) {
                          if ((bVar3 < *(byte *)(TypeInfo_APGWeapon + 0x130)) ||
                             (*(long *)(*(long *)(lVar88 + 200) + -8 +
                                       (ulong)*(byte *)(TypeInfo_APGWeapon + 0x130) * 8) != TypeInfo_APGWeapon)) {
                            if ((bVar3 < *(byte *)(TypeInfo_ThunderspearWeapon + 0x130)) ||
                               (*(long *)(*(long *)(lVar88 + 200) + -8 +
                                         (ulong)*(byte *)(TypeInfo_ThunderspearWeapon + 0x130) * 8) != TypeInfo_ThunderspearWeapon)) {
label_0429892b:
                              if (position_01.fields.z <= 10.0) {
                                position_01.fields.z = 10.0;
                              }
                              pSVar89 = System_Single__ToString_3cccfe0
                                                  (position_01.fields.z / 100.0,
                                                   (System_String_o *)&stack0xfffffffffffffd9c,"F1");
                              str0 = System_String__Concat_3af7150
                                               (str0,pSVar89,"K",(MethodInfo *)0x0);
                              UVar49.z = fStack_1e4;
                              UVar49.x = (float)(undefined4)uStack_100;
                              UVar49.y = (float)uStack_100._4_4_;
                              UVar17.z = fStack_20c;
                              UVar17.x = (float)uStack_180;
                              UVar17.y = uStack_180._4_4_;
                              pSVar89 = (__this_02->fields).Guild;
                              if (pSVar89 != (System_String_o *)0x0) {
                                plVar91 = pSVar89[10].monitor;
                                if (plVar91 != (long *)0x0) {
                                  lVar88 = *plVar91;
                                  if ((*(byte *)(TypeInfo_AHSSTwinShot + 0x130) <= *(byte *)(lVar88 + 0x130)) &&
                                     (*(long *)(*(long *)(lVar88 + 200) + -8 +
                                               (ulong)*(byte *)(TypeInfo_AHSSTwinShot + 0x130) * 8) == TypeInfo_AHSSTwinShot)) {
                                    fStack_224 = (float)(int)fStack_224;
                                    if (fStack_224 <= 10.0) {
                                      fStack_224 = 10.0;
                                    }
                                    fStack_224 = fStack_224 / 100.0;
                                    pSVar89 = System_Single__ToString_3cccfe0
                                                        (fStack_224,(System_String_o *)&fStack_224,
                                                         "F1");
                                    str0 = System_String__Concat_3af7470
                                                     (str0," | ",pSVar89,"K",(MethodInfo *)0x0
                                                     );
                                  }
                                }
                                goto label_04298a10;
                              }
                            }
                            else {
                              lVar88 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                              UVar17 = UVar45;
                              UVar49 = UVar78;
                              if (((lVar88 != 0) &&
                                  (lVar88 = *(long *)(lVar88 + 0x58), UVar17 = UVar46, UVar49 = UVar79,
                                  lVar88 != 0)) &&
                                 (lVar88 = *(long *)(lVar88 + 0x48), UVar17 = UVar47, UVar49 = UVar80,
                                 lVar88 != 0)) {
                                if (*(char *)(lVar88 + 0x11) != '\0') goto label_0429892b;
                                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                UVar49.z = fStack_1e4;
                                UVar49.x = (float)(undefined4)uStack_100;
                                UVar49.y = (float)uStack_100._4_4_;
                                UVar17.z = fStack_20c;
                                UVar17.x = (float)uStack_180;
                                UVar17.y = uStack_180._4_4_;
                                plVar91 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                                if (plVar91 != (long *)0x0) {
                                  puVar90 = &"Thunderspear";
                                  goto label_042988bf;
                                }
                              }
                            }
                          }
                          else {
                            if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            UVar49.z = fStack_1e4;
                            UVar49.x = (float)(undefined4)uStack_100;
                            UVar49.y = (float)uStack_100._4_4_;
                            UVar17.z = fStack_20c;
                            UVar17.x = (float)uStack_180;
                            UVar17.y = uStack_180._4_4_;
                            plVar91 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                            if (plVar91 != (long *)0x0) {
                              puVar90 = &"APG";
                              goto label_042988bf;
                            }
                          }
                        }
                        else {
                          if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          UVar49.z = fStack_1e4;
                          UVar49.x = (float)(undefined4)uStack_100;
                          UVar49.y = (float)uStack_100._4_4_;
                          UVar17.z = fStack_20c;
                          UVar17.x = (float)uStack_180;
                          UVar17.y = uStack_180._4_4_;
                          plVar91 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                          if (plVar91 != (long *)0x0) {
                            puVar90 = &"AHSS";
label_042988bf:
                            plVar91 = (long *)(**(code **)(*plVar91 + 0x1a8))
                                                        (plVar91,*puVar90,*(undefined8 *)(*plVar91 + 0x1b0));
                            UVar49.z = fStack_1e4;
                            UVar49.x = (float)(undefined4)uStack_100;
                            UVar49.y = (float)uStack_100._4_4_;
                            UVar17.z = fStack_20c;
                            UVar17.x = (float)uStack_180;
                            UVar17.y = uStack_180._4_4_;
                            goto joined_r0x042988d5;
                          }
                        }
                      }
                      else {
                        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        UVar49.z = fStack_1e4;
                        UVar49.x = (float)(undefined4)uStack_100;
                        UVar49.y = (float)uStack_100._4_4_;
                        UVar17.z = fStack_20c;
                        UVar17.x = (float)uStack_180;
                        UVar17.y = uStack_180._4_4_;
                        plVar91 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                        if (plVar91 != (long *)0x0) {
                          plVar91 = (long *)(**(code **)(*plVar91 + 0x1a8))
                                                      (plVar91,"Blade",*(undefined8 *)(*plVar91 + 0x1b0))
                          ;
                          UVar49.z = fStack_1e4;
                          UVar49.x = (float)(undefined4)uStack_100;
                          UVar49.y = (float)uStack_100._4_4_;
                          UVar17.z = fStack_20c;
                          UVar17.x = (float)uStack_180;
                          UVar17.y = uStack_180._4_4_;
joined_r0x042988d5:
                          if (plVar91 != (long *)0x0) {
                            plVar91 = (long *)(**(code **)(*plVar91 + 0x1a8))
                                                        (plVar91,"DamageMultiplier",
                                                         *(undefined8 *)(*plVar91 + 0x1b0));
                            UVar49.z = fStack_1e4;
                            UVar49.x = (float)(undefined4)uStack_100;
                            UVar49.y = (float)uStack_100._4_4_;
                            UVar17.z = fStack_20c;
                            UVar17.x = (float)uStack_180;
                            UVar17.y = uStack_180._4_4_;
                            if (plVar91 != (long *)0x0) {
                              fVar112 = (float)(**(code **)(*plVar91 + 0x388))
                                                         (plVar91,*(undefined8 *)(*plVar91 + 0x390));
                              position_01.fields.z = (float)(int)(fVar112 * position_01.fields.z);
                              goto label_0429892b;
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (iVar94 == 1) {
                      bVar85 = System_String__op_Inequality
                                         (str0,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                          (MethodInfo *)0x0);
                      position_01.fields.z = extraout_XMM0_Da;
                      if ((char)bVar85 != '\0') {
                        str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                        position_01.fields.z = extraout_XMM0_Da_00;
                      }
                      pSVar89 = System_Single__ToString_3cccfe0
                                          (position_01.fields.z,(System_String_o *)&stack0xfffffffffffffd9c,
                                           "F1");
                      str0 = System_String__Concat_3af7150(str0,pSVar89," u/s",(MethodInfo *)0x0);
                    }
label_04298a10:
                    UVar59.z = fStack_1e4;
                    UVar59.x = (float)(undefined4)uStack_100;
                    UVar59.y = (float)uStack_100._4_4_;
                    UVar58.z = fStack_1e4;
                    UVar58.x = (float)(undefined4)uStack_100;
                    UVar58.y = (float)uStack_100._4_4_;
                    UVar57.z = fStack_1e4;
                    UVar57.x = (float)(undefined4)uStack_100;
                    UVar57.y = (float)uStack_100._4_4_;
                    UVar56.z = fStack_1e4;
                    UVar56.x = (float)(undefined4)uStack_100;
                    UVar56.y = (float)uStack_100._4_4_;
                    UVar55.z = fStack_1e4;
                    UVar55.x = (float)(undefined4)uStack_100;
                    UVar55.y = (float)uStack_100._4_4_;
                    UVar49.z = fStack_1e4;
                    UVar49.x = (float)(undefined4)uStack_100;
                    UVar49.y = (float)uStack_100._4_4_;
                    UVar27.z = fStack_20c;
                    UVar27.x = (float)uStack_180;
                    UVar27.y = uStack_180._4_4_;
                    UVar26.z = fStack_20c;
                    UVar26.x = (float)uStack_180;
                    UVar26.y = uStack_180._4_4_;
                    UVar25.z = fStack_20c;
                    UVar25.x = (float)uStack_180;
                    UVar25.y = uStack_180._4_4_;
                    UVar24.z = fStack_20c;
                    UVar24.x = (float)uStack_180;
                    UVar24.y = uStack_180._4_4_;
                    UVar23.z = fStack_20c;
                    UVar23.x = (float)uStack_180;
                    UVar23.y = uStack_180._4_4_;
                    UVar17.z = fStack_20c;
                    UVar17.x = (float)uStack_180;
                    UVar17.y = uStack_180._4_4_;
                    lVar88 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                    if ((lVar88 != 0) &&
                       (lVar88 = *(long *)(lVar88 + 0x48), UVar17 = UVar23, UVar49 = UVar55, lVar88 != 0)) {
                      if (*(char *)(lVar88 + 0x11) != '\0') {
                        lVar88 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                        UVar17 = UVar24;
                        UVar49 = UVar56;
                        if (((lVar88 == 0) ||
                            (lVar88 = *(long *)(lVar88 + 0x58), UVar17 = UVar25, UVar49 = UVar57, lVar88 == 0)
                            ) || (lVar88 = *(long *)(lVar88 + 0x48), UVar17 = UVar26, UVar49 = UVar58,
                                 lVar88 == 0)) goto label_042993fa;
                        if (*(char *)(lVar88 + 0x11) != '\0') {
                          pSVar89 = (__this_02->fields).Guild;
                          UVar17 = UVar27;
                          UVar49 = UVar59;
                          if (pSVar89 == (System_String_o *)0x0) goto label_042993fa;
                          SVar12 = pSVar89[10].fields;
                          if (SVar12 != (System_String_Fields)0x0) {
                            lVar88 = *(long *)SVar12;
                            if ((*(byte *)(TypeInfo_ThunderspearWeapon + 0x130) <= *(byte *)(lVar88 + 0x130)) &&
                               (*(long *)(*(long *)(lVar88 + 200) + -8 +
                                         (ulong)*(byte *)(TypeInfo_ThunderspearWeapon + 0x130) * 8) == TypeInfo_ThunderspearWeapon)) {
                              bVar85 = System_String__op_Inequality
                                                 (str0,(System_String_o *)
                                                       **(undefined8 **)(g_data_057b9c00 + 0xb8),
                                                  (MethodInfo *)0x0);
                              if ((char)bVar85 != '\0') {
                                str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                              }
                              UVar60.z = fStack_1e4;
                              UVar60.x = (float)(undefined4)uStack_100;
                              UVar60.y = (float)uStack_100._4_4_;
                              UVar49.z = fStack_1e4;
                              UVar49.x = (float)(undefined4)uStack_100;
                              UVar49.y = (float)uStack_100._4_4_;
                              UVar28.z = fStack_20c;
                              UVar28.x = (float)uStack_180;
                              UVar28.y = uStack_180._4_4_;
                              UVar17.z = fStack_20c;
                              UVar17.x = (float)uStack_180;
                              UVar17.y = uStack_180._4_4_;
                              pSVar89 = (__this_02->fields).Guild;
                              if ((pSVar89 == (System_String_o *)0x0) ||
                                 (SVar12 = pSVar89[10].fields, UVar17 = UVar28, UVar49 = UVar60,
                                 SVar12 == (System_String_Fields)0x0)) goto label_042993fa;
                              if ((*(byte *)(*(long *)SVar12 + 0x130) < *(byte *)(TypeInfo_ThunderspearWeapon + 0x130)) ||
                                 (*(long *)(*(long *)(*(long *)SVar12 + 200) + -8 +
                                           (ulong)*(byte *)(TypeInfo_ThunderspearWeapon + 0x130) * 8) != TypeInfo_ThunderspearWeapon))
                              goto label_042993ff;
                              fStack_208 = Characters_BaseUseable__GetCooldownLeft
                                                     ((Characters_BaseUseable_o *)SVar12,(MethodInfo *)0x0);
                              fVar96 = 0.0;
                              fVar109 = 0.0;
                              fVar110 = 0.0;
                              fVar111 = 0.0;
                              if (fStack_208 <= 0.0) {
                                str0 = System_String__Concat_3ae5ba0(str0,"<color=#008000>READY</color>",(MethodInfo *)0x0);
                              }
                              else {
                                pSVar89 = System_Single__ToString_3cccfe0
                                                    (fStack_208,(System_String_o *)&fStack_208,"F2");
                                str0 = System_String__Concat_3af7470
                                                 (str0,"<color=#FF0000>",pSVar89,"</color>",(MethodInfo *)0x0);
                              }
                            }
                          }
                        }
                      }
                      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UI_CursorManager__SetCrosshairText(str0,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UI_CursorManager__SetCrosshairColor
                                ((uint)((float)uStack_250 <= 120.0),(MethodInfo *)0x0);
                      UVar62.z = fStack_1e4;
                      UVar62.x = (float)(undefined4)uStack_100;
                      UVar62.y = (float)uStack_100._4_4_;
                      UVar61.z = fStack_1e4;
                      UVar61.x = (float)(undefined4)uStack_100;
                      UVar61.y = (float)uStack_100._4_4_;
                      UVar49.z = fStack_1e4;
                      UVar49.x = (float)(undefined4)uStack_100;
                      UVar49.y = (float)uStack_100._4_4_;
                      UVar30.z = fStack_20c;
                      UVar30.x = (float)uStack_180;
                      UVar30.y = uStack_180._4_4_;
                      UVar29.z = fStack_20c;
                      UVar29.x = (float)uStack_180;
                      UVar29.y = uStack_180._4_4_;
                      UVar17.z = fStack_20c;
                      UVar17.x = (float)uStack_180;
                      UVar17.y = uStack_180._4_4_;
                      lVar88 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                      if ((lVar88 != 0) &&
                         (lVar88 = *(long *)(lVar88 + 0xa8), UVar17 = UVar29, UVar49 = UVar61, lVar88 != 0)) {
                        if (*(char *)(lVar88 + 0x11) == '\0') {
                          return;
                        }
                        pSVar89 = (__this_02->fields).Guild;
                        UVar17 = UVar30;
                        UVar49 = UVar62;
                        if (pSVar89 != (System_String_o *)0x0) {
                          uVar98 = (*(code *)pSVar89->klass[1].vtable._19_System_IConvertible_ToUInt64.method)
                                             ();
                          UVar64.z = fStack_1e4;
                          UVar64.x = (float)(undefined4)uStack_100;
                          UVar64.y = (float)uStack_100._4_4_;
                          UVar63.z = fStack_1e4;
                          UVar63.x = (float)(undefined4)uStack_100;
                          UVar63.y = (float)uStack_100._4_4_;
                          UVar49.z = fStack_1e4;
                          UVar49.x = (float)(undefined4)uStack_100;
                          UVar49.y = (float)uStack_100._4_4_;
                          UVar32.z = fStack_20c;
                          UVar32.x = (float)uStack_180;
                          UVar32.y = uStack_180._4_4_;
                          UVar31.z = fStack_20c;
                          UVar31.x = (float)uStack_180;
                          UVar31.y = uStack_180._4_4_;
                          UVar17.z = fStack_20c;
                          UVar17.x = (float)uStack_180;
                          UVar17.y = uStack_180._4_4_;
                          lVar88 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                          if (((lVar88 != 0) &&
                              (lVar88 = *(long *)(lVar88 + 0x28), UVar17 = UVar31, UVar49 = UVar63,
                              lVar88 != 0)) &&
                             (pUVar13 = *(UnityEngine_Transform_o **)(lVar88 + 0x10), UVar17 = UVar32,
                             UVar49 = UVar64, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
                            fVar124 = fVar109;
                            UVar118 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
                            position_01.fields.z = UVar118.fields.x;
                            fVar112 = UVar118.fields.y;
                            uVar106 = extraout_XMM0_Dc_01;
                            iVar86 = extraout_XMM0_Dd_00;
                            if (g_data_057a68cb == '\0') {
                              uStack_218._0_4_ = (float)extraout_XMM0_Dc_01;
                              auStack_220 = (undefined1  [8])UVar118.fields._0_8_;
                              uStack_218._4_4_ = (float)extraout_XMM0_Dd_00;
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                              g_data_057a68cb = '\x01';
                              position_01.fields.z = (float)auStack_220._0_4_;
                              fVar112 = (float)auStack_220._4_4_;
                              uVar106 = (float)uStack_218;
                              iVar86 = (int32_t)uStack_218._4_4_;
                            }
                            uStack_250._0_4_ = (float)uVar98;
                            uStack_250._4_4_ = (float)((ulong)uVar98 >> 0x20);
                            fVar108 = UVar118.fields.z - fVar96;
                            fVar109 = fVar109 - fVar124;
                            fVar97 = fVar112 - uStack_250._4_4_;
                            if ((TypeInfo_Math->fields)._stepPhase == 0) {
                              auStack_220._4_4_ = fVar112;
                              auStack_220._0_4_ = fVar112 - uStack_250._4_4_;
                              uStack_218._0_4_ = (float)uVar106;
                              uStack_218._4_4_ = (float)iVar86;
                              il2cpp_runtime_helper_02337ed0();
                              fVar97 = (float)auStack_220._0_4_;
                            }
                            position_01.fields.z =
                                 (position_01.fields.z - (float)uStack_250) *
                                 (position_01.fields.z - (float)uStack_250);
                            fVar109 = fVar109 * fVar109;
                            fVar112 = (fVar112 - uStack_250._4_4_) * (fVar112 - uStack_250._4_4_);
                            fVar97 = position_01.fields.z + fVar97 * fVar97 + fVar108 * fVar108;
                            if (fVar97 < 0.0) {
                              fVar97 = sqrtf(fVar97);
                              position_01.fields.z = extraout_XMM0_Db;
                              fVar109 = extraout_XMM0_Dc_02;
                              fVar112 = extraout_XMM0_Dd_01;
                            }
                            else {
                              fVar97 = SQRT(fVar97);
                            }
                            UVar66.z = fStack_1e4;
                            UVar66.x = (float)(undefined4)uStack_100;
                            UVar66.y = (float)uStack_100._4_4_;
                            UVar65.z = fStack_1e4;
                            UVar65.x = (float)(undefined4)uStack_100;
                            UVar65.y = (float)uStack_100._4_4_;
                            UVar49.z = fStack_1e4;
                            UVar49.x = (float)(undefined4)uStack_100;
                            UVar49.y = (float)uStack_100._4_4_;
                            UVar34.z = fStack_20c;
                            UVar34.x = (float)uStack_180;
                            UVar34.y = uStack_180._4_4_;
                            UVar33.z = fStack_20c;
                            UVar33.x = (float)uStack_180;
                            UVar33.y = uStack_180._4_4_;
                            UVar17.z = fStack_20c;
                            UVar17.x = (float)uStack_180;
                            UVar17.y = uStack_180._4_4_;
                            pSVar89 = (__this_02->fields).Guild;
                            if ((pSVar89 != (System_String_o *)0x0) &&
                               (SVar12 = pSVar89[4].fields, UVar17 = UVar33, UVar49 = UVar65,
                               SVar12 != (System_String_Fields)0x0)) {
                              auStack_200._4_4_ = position_01.fields.z;
                              auStack_200._0_4_ = fVar97;
                              fStack_1f8 = fVar109;
                              fStack_1f4 = fVar112;
                              pUVar13 = *(UnityEngine_Transform_o **)((long)SVar12 + 0x10);
                              UVar17 = UVar34;
                              UVar49 = UVar66;
                              if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                                UVar118 = UnityEngine_Transform__get_right(pUVar13,(MethodInfo *)0x0);
                                UVar68.z = fStack_1e4;
                                UVar68.x = (float)(undefined4)uStack_100;
                                UVar68.y = (float)uStack_100._4_4_;
                                UVar67.z = fStack_1e4;
                                UVar67.x = (float)(undefined4)uStack_100;
                                UVar67.y = (float)uStack_100._4_4_;
                                UVar49.z = fStack_1e4;
                                UVar49.x = (float)(undefined4)uStack_100;
                                UVar49.y = (float)uStack_100._4_4_;
                                UVar36.z = fStack_20c;
                                UVar36.x = (float)uStack_180;
                                UVar36.y = uStack_180._4_4_;
                                UVar35.z = fStack_20c;
                                UVar35.x = (float)uStack_180;
                                UVar35.y = uStack_180._4_4_;
                                UVar17.z = fStack_20c;
                                UVar17.x = (float)uStack_180;
                                UVar17.y = uStack_180._4_4_;
                                pSVar89 = (__this_02->fields).Guild;
                                if ((pSVar89 != (System_String_o *)0x0) &&
                                   (SVar12 = pSVar89[4].fields, UVar17 = UVar35, UVar49 = UVar67,
                                   SVar12 != (System_String_Fields)0x0)) {
                                  uStack_218 = extraout_XMM0_Qb_00;
                                  auStack_220 = (undefined1  [8])UVar118.fields._0_8_;
                                  pUVar13 = *(UnityEngine_Transform_o **)((long)SVar12 + 0x10);
                                  UVar17 = UVar36;
                                  UVar49 = UVar68;
                                  if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                                    UVar120 = (UnityEngine_Vector3_Fields)
                                              UnityEngine_Transform__get_right(pUVar13,(MethodInfo *)0x0);
                                    UVar69.z = fStack_1e4;
                                    UVar69.x = (float)(undefined4)uStack_100;
                                    UVar69.y = (float)uStack_100._4_4_;
                                    UVar49.z = fStack_1e4;
                                    UVar49.x = (float)(undefined4)uStack_100;
                                    UVar49.y = (float)uStack_100._4_4_;
                                    UVar17.z = fStack_20c;
                                    UVar17.x = (float)uStack_180;
                                    UVar17.y = uStack_180._4_4_;
                                    fStack_20c = UVar120.z;
                                    uStack_180 = UVar120._0_8_;
                                    lVar88 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                    if (lVar88 != 0) {
                                      pUVar11 = *(UnityEngine_Camera_o **)(lVar88 + 0x20);
                                      fStack_248 = (float)extraout_XMM0_Qb;
                                      fStack_244 = (float)((ulong)extraout_XMM0_Qb >> 0x20);
                                      UVar17 = UVar120;
                                      UVar49 = UVar69;
                                      if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
                                        auStack_190._4_4_ =
                                             (float)auStack_200._0_4_ *
                                             *(float *)(&g_data_00d1d698 + (ulong)(50.0 < fVar97) * 4);
                                        auStack_190._0_4_ = auStack_190._4_4_;
                                        fStack_188 = fStack_1f8;
                                        fStack_184 = fStack_1f4;
                                        position_01.fields.z = (float)uStack_218 * fStack_1f8;
                                        fVar109 = uStack_218._4_4_ * fStack_1f4;
                                        auStack_200._0_4_ = auStack_190._4_4_;
                                        position.fields.x =
                                             (float)uStack_250 -
                                             (float)auStack_220._0_4_ * (float)auStack_190._4_4_;
                                        position.fields.y =
                                             uStack_250._4_4_ -
                                             (float)auStack_220._4_4_ * (float)auStack_190._4_4_;
                                        position.fields.z =
                                             fVar96 - UVar118.fields.z * (float)auStack_190._4_4_;
                                        auStack_220._4_4_ = fVar124;
                                        auStack_220._0_4_ = position.fields.z;
                                        uStack_218._0_4_ = fVar110;
                                        uStack_218._4_4_ = fVar111;
                                        uStack_178 = extraout_XMM0_Qb_01;
                                        UVar118 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                                            (pUVar11,position,(MethodInfo *)0x0);
                                        uStack_1e0 = UVar118.fields._0_8_;
                                        if (g_data_057add05 == '\0') {
                                          il2cpp_runtime_helper_023445d0(uStack_1e0,UVar118.fields.z,&TypeInfo_CursorManager);
                                          g_data_057add05 = '\x01';
                                        }
                                        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        UVar118 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                                        fVar112 = atan2f(uStack_1e0._4_4_ - UVar118.fields.y,
                                                         (float)uStack_1e0 - UVar118.fields.x);
                                        uVar106 = extraout_var._4_4_;
                                        uVar107 = extraout_var._8_4_;
                                        auVar14._4_8_ = 0;
                                        auVar14._0_4_ = fVar112 * 57.29578 * 0.017453292;
                                        UVar117 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                            ((UnityEngine_Vector3_o)(auVar14 << 0x40),
                                                             (MethodInfo *)0x0);
                                        UVar71.z = fStack_1e4;
                                        UVar71.x = (float)(undefined4)uStack_100;
                                        UVar71.y = (float)uStack_100._4_4_;
                                        UVar70.z = fStack_1e4;
                                        UVar70.x = (float)(undefined4)uStack_100;
                                        UVar70.y = (float)uStack_100._4_4_;
                                        UVar49.z = fStack_1e4;
                                        UVar49.x = (float)(undefined4)uStack_100;
                                        UVar49.y = (float)uStack_100._4_4_;
                                        UVar38.z = fStack_20c;
                                        UVar38.x = (float)uStack_180;
                                        UVar38.y = uStack_180._4_4_;
                                        UVar37.z = fStack_20c;
                                        UVar37.x = (float)uStack_180;
                                        UVar37.y = uStack_180._4_4_;
                                        UVar17.z = fStack_20c;
                                        UVar17.x = (float)uStack_180;
                                        UVar17.y = uStack_180._4_4_;
                                        pSVar89 = (__this_02->fields).Guild;
                                        if ((pSVar89 != (System_String_o *)0x0) &&
                                           (SVar12 = pSVar89[4].fields, UVar17 = UVar37, UVar49 = UVar70,
                                           SVar12 != (System_String_Fields)0x0)) {
                                          auStack_f0._8_4_ = uVar106;
                                          auStack_f0._0_8_ = UVar117.fields._8_8_;
                                          auStack_f0._12_4_ = uVar107;
                                          pUVar13 = *(UnityEngine_Transform_o **)((long)SVar12 + 0x10);
                                          uStack_e0 = UVar117.fields._0_8_;
                                          UVar17 = UVar38;
                                          UVar49 = UVar71;
                                          if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                                            UVar120 = (UnityEngine_Vector3_Fields)
                                                      UnityEngine_Transform__get_position
                                                                (pUVar13,(MethodInfo *)0x0);
                                            UVar72.z = fStack_1e4;
                                            UVar72.x = (float)(undefined4)uStack_100;
                                            UVar72.y = (float)uStack_100._4_4_;
                                            UVar49.z = fStack_1e4;
                                            UVar49.x = (float)(undefined4)uStack_100;
                                            UVar49.y = (float)uStack_100._4_4_;
                                            UVar40.z = fStack_20c;
                                            UVar40.x = (float)uStack_180;
                                            UVar40.y = uStack_180._4_4_;
                                            UVar39.z = fStack_20c;
                                            UVar39.x = (float)uStack_180;
                                            UVar39.y = uStack_180._4_4_;
                                            UVar17.z = fStack_20c;
                                            UVar17.x = (float)uStack_180;
                                            UVar17.y = uStack_180._4_4_;
                                            fStack_1e4 = UVar120.z;
                                            uStack_100 = UVar120._0_8_;
                                            pSVar89 = (__this_02->fields).Guild;
                                            if (((pSVar89 != (System_String_o *)0x0) &&
                                                (SVar12 = pSVar89[4].fields, UVar17 = UVar39, UVar49 = UVar72,
                                                SVar12 != (System_String_Fields)0x0)) &&
                                               (pUVar13 = *(UnityEngine_Transform_o **)((long)SVar12 + 0x10),
                                               UVar17 = UVar40, UVar49 = UVar120,
                                               pUVar13 != (UnityEngine_Transform_o *)0x0)) {
                                              UVar118 = UnityEngine_Transform__get_position
                                                                  (pUVar13,(MethodInfo *)0x0);
                                              auVar116._0_8_ = UVar118.fields._0_8_;
                                              auVar116._8_8_ = extraout_XMM0_Qb_02;
                                              fVar112 = UVar118.fields.z;
                                              if (g_data_057a6845 == '\0') {
                                                fStack_1e8 = UVar118.fields.z;
                                                auStack_110 = auVar116;
                                                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                g_data_057a6845 = '\x01';
                                                auVar116 = auStack_110;
                                                fVar112 = fStack_1e8;
                                              }
                                              auVar114._0_4_ = position.fields.x - auVar116._0_4_;
                                              auVar114._4_4_ = position.fields.y - auVar116._4_4_;
                                              auVar114._8_4_ =
                                                   (fStack_248 - position_01.fields.z) - auVar116._8_4_;
                                              auVar114._12_4_ = (fStack_244 - fVar109) - auVar116._12_4_;
                                              position_01.fields.z = (float)auStack_220._0_4_ - fVar112;
                                              if ((TypeInfo_Math->fields)._stepPhase == 0) {
                                                auStack_220._0_4_ = (float)auStack_220._0_4_ - fVar112;
                                                il2cpp_runtime_helper_02337ed0();
                                                position_01.fields.z = (float)auStack_220._0_4_;
                                              }
                                              auVar99._4_4_ = auStack_220._4_4_;
                                              auVar99._0_4_ = position_01.fields.z;
                                              auVar99._8_4_ = (float)uStack_218;
                                              auVar99._12_4_ = uStack_218._4_4_;
                                              auVar100._4_12_ = auVar99._4_12_;
                                              fVar109 = position_01.fields.z * position_01.fields.z +
                                                        auVar114._4_4_ * auVar114._4_4_ +
                                                        auVar114._0_4_ * auVar114._0_4_;
                                              if (fVar109 < 0.0) {
                                                auStack_220._0_4_ = position_01.fields.z;
                                                auVar100._0_4_ = sqrtf(fVar109);
                                                auVar100._4_12_ = extraout_var_00;
                                                position_01.fields.z = (float)auStack_220._0_4_;
                                                if (auVar100._0_4_ <= 1e-05) goto label_04298ff7;
label_04299051:
                                                auVar101._0_4_ = auVar100._0_4_;
                                                auStack_220._0_4_ = position_01.fields.z / auVar101._0_4_;
                                                auVar101._8_4_ = auVar100._8_4_;
                                                auVar101._12_4_ = auVar100._12_4_;
                                                auVar101._4_4_ = auVar101._0_4_;
                                                auVar116 = divps(auVar114,auVar101);
                                                uVar98 = auVar116._0_8_;
                                              }
                                              else {
                                                auVar100._0_4_ = SQRT(fVar109);
                                                if (1e-05 < auVar100._0_4_) goto label_04299051;
label_04298ff7:
                                                if (g_data_057a65d5 == '\0') {
                                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                  g_data_057a65d5 = '\x01';
                                                }
                                                uVar98 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                                                auStack_220._0_4_ =
                                                     *(undefined4 *)
                                                      (*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                                                auStack_220._4_4_ = 0;
                                                uStack_218._0_4_ = 0.0;
                                                uStack_218._4_4_ = 0.0;
                                              }
                                              if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              iVar86 = UnityEngine_LayerMask__get_value
                                                                 ((UnityEngine_LayerMask_Fields)
                                                                  (int32_t)*(undefined8 *)
                                                                            (TypeInfo_HumanPlayerController + 0xb8),
                                                                  (MethodInfo *)0x0);
                                              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              UVar118.fields.z = fStack_1e4;
                                              UVar118.fields.x = (float)(undefined4)uStack_100;
                                              UVar118.fields.y = (float)uStack_100._4_4_;
                                              direction.fields.z = (float)auStack_220._0_4_;
                                              direction.fields.x = (float)(int)uVar98;
                                              direction.fields.y = (float)(int)((ulong)uVar98 >> 0x20);
                                              uVar87 = UnityEngine_Physics__Raycast_4e76f20
                                                                 (UVar118,direction,120.0,iVar86,
                                                                  (MethodInfo *)0x0);
                                              if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              auVar116 = auStack_f0;
                                              position_00.fields.z = 0.0;
                                              position_00.fields.x = (float)uStack_1e0;
                                              position_00.fields.y = uStack_1e0._4_4_;
                                              UVar117.fields.z = (float)auStack_f0._0_4_;
                                              UVar117.fields.w = (float)auStack_f0._4_4_;
                                              UVar117.fields.x = (float)(undefined4)uStack_e0;
                                              UVar117.fields.y = (float)uStack_e0._4_4_;
                                              auStack_f0 = auVar116;
                                              UI_CursorManager__SetHookArrow
                                                        (1,position_00,UVar117,uVar87 & 0xff,(MethodInfo *)0x0
                                                        );
                                              UVar73.z = fStack_1e4;
                                              UVar73.x = (float)(undefined4)uStack_100;
                                              UVar73.y = (float)uStack_100._4_4_;
                                              UVar49.z = fStack_1e4;
                                              UVar49.x = (float)(undefined4)uStack_100;
                                              UVar49.y = (float)uStack_100._4_4_;
                                              UVar41.z = fStack_20c;
                                              UVar41.x = (float)uStack_180;
                                              UVar41.y = uStack_180._4_4_;
                                              UVar17.z = fStack_20c;
                                              UVar17.x = (float)uStack_180;
                                              UVar17.y = uStack_180._4_4_;
                                              lVar88 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                              if (lVar88 != 0) {
                                                pUVar11 = *(UnityEngine_Camera_o **)(lVar88 + 0x20);
                                                UVar17 = UVar41;
                                                UVar49 = UVar73;
                                                if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
                                                  fVar109 = fStack_188 * (float)uStack_178;
                                                  fVar112 = fStack_184 * uStack_178._4_4_;
                                                  position_01.fields.x =
                                                       (float)uStack_250 +
                                                       (float)auStack_190._0_4_ * (float)uStack_180;
                                                  position_01.fields.y =
                                                       uStack_250._4_4_ +
                                                       (float)auStack_190._4_4_ * uStack_180._4_4_;
                                                  position_01.fields.z =
                                                       fVar96 + (float)auStack_200._0_4_ * fStack_20c;
                                                  UVar118 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                                                      (pUVar11,position_01,(MethodInfo *)0x0);
                                                  position_02.fields._0_8_ = UVar118.fields._0_8_;
                                                  if (g_data_057add05 == '\0') {
                                                    il2cpp_runtime_helper_023445d0(position_02.fields._0_8_,
                                                                       UVar118.fields.z,&TypeInfo_CursorManager);
                                                    g_data_057add05 = '\x01';
                                                  }
                                                  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  UVar121 = UI_CursorManager__GetInGameMousePosition
                                                                      ((MethodInfo *)0x0);
                                                  fStack_240 = UVar118.fields.x;
                                                  fStack_23c = UVar118.fields.y;
                                                  fVar96 = atan2f(fStack_23c - UVar121.fields.y,
                                                                  fStack_240 - UVar121.fields.x);
                                                  uVar106 = extraout_var_01._4_4_;
                                                  uVar107 = extraout_var_01._8_4_;
                                                  auVar15._4_8_ = 0;
                                                  auVar15._0_4_ = fVar96 * 57.29578 * 0.017453292;
                                                  UVar117 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                      ((UnityEngine_Vector3_o)
                                                                       (auVar15 << 0x40),(MethodInfo *)0x0);
                                                  UVar75.z = fStack_1e4;
                                                  UVar75.x = (float)(undefined4)uStack_100;
                                                  UVar75.y = (float)uStack_100._4_4_;
                                                  UVar74.z = fStack_1e4;
                                                  UVar74.x = (float)(undefined4)uStack_100;
                                                  UVar74.y = (float)uStack_100._4_4_;
                                                  UVar49.z = fStack_1e4;
                                                  UVar49.x = (float)(undefined4)uStack_100;
                                                  UVar49.y = (float)uStack_100._4_4_;
                                                  UVar43.z = fStack_20c;
                                                  UVar43.x = (float)uStack_180;
                                                  UVar43.y = uStack_180._4_4_;
                                                  UVar42.z = fStack_20c;
                                                  UVar42.x = (float)uStack_180;
                                                  UVar42.y = uStack_180._4_4_;
                                                  UVar17.z = fStack_20c;
                                                  UVar17.x = (float)uStack_180;
                                                  UVar17.y = uStack_180._4_4_;
                                                  pSVar89 = (__this_02->fields).Guild;
                                                  if ((pSVar89 != (System_String_o *)0x0) &&
                                                     (SVar12 = pSVar89[4].fields, UVar17 = UVar42,
                                                     UVar49 = UVar74, SVar12 != (System_String_Fields)0x0)) {
                                                    fStack_1f8 = (float)uVar106;
                                                    auStack_200 = (undefined1  [8])UVar117.fields._8_8_;
                                                    fStack_1f4 = (float)uVar107;
                                                    uStack_218 = extraout_XMM0_Qb_03;
                                                    auStack_220 = (undefined1  [8])UVar117.fields._0_8_;
                                                    pUVar13 = *(UnityEngine_Transform_o **)
                                                               ((long)SVar12 + 0x10);
                                                    UVar17 = UVar43;
                                                    UVar49 = UVar75;
                                                    if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                                                      UVar118 = UnityEngine_Transform__get_position
                                                                          (pUVar13,(MethodInfo *)0x0);
                                                      UVar77.z = fStack_1e4;
                                                      UVar77.x = (float)(undefined4)uStack_100;
                                                      UVar77.y = (float)uStack_100._4_4_;
                                                      UVar76.z = fStack_1e4;
                                                      UVar76.x = (float)(undefined4)uStack_100;
                                                      UVar76.y = (float)uStack_100._4_4_;
                                                      UVar49.z = fStack_1e4;
                                                      UVar49.x = (float)(undefined4)uStack_100;
                                                      UVar49.y = (float)uStack_100._4_4_;
                                                      UVar44.z = fStack_20c;
                                                      UVar44.x = (float)uStack_180;
                                                      UVar44.y = uStack_180._4_4_;
                                                      UVar17.z = fStack_20c;
                                                      UVar17.x = (float)uStack_180;
                                                      UVar17.y = uStack_180._4_4_;
                                                      fStack_20c = UVar118.fields.z;
                                                      pSVar89 = (__this_02->fields).Guild;
                                                      if ((pSVar89 != (System_String_o *)0x0) &&
                                                         (SVar12 = pSVar89[4].fields, UVar17 = UVar44,
                                                         UVar49 = UVar76, SVar12 != (System_String_Fields)0x0)
                                                         ) {
                                                        UVar17.z = fStack_20c;
                                                        UVar17.x = (float)uStack_180;
                                                        UVar17.y = uStack_180._4_4_;
                                                        pUVar13 = *(UnityEngine_Transform_o **)
                                                                   ((long)SVar12 + 0x10);
                                                        uStack_1e0 = UVar118.fields._0_8_;
                                                        UVar49 = UVar77;
                                                        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                                                          UVar118 = UnityEngine_Transform__get_position
                                                                              (pUVar13,(MethodInfo *)0x0);
                                                          auVar102._0_8_ = UVar118.fields._0_8_;
                                                          auVar102._8_8_ = extraout_XMM0_Qb_04;
                                                          fVar96 = UVar118.fields.z;
                                                          if (g_data_057a6845 == '\0') {
                                                            uStack_180 = CONCAT44(uStack_180._4_4_,
                                                                                  UVar118.fields.z);
                                                            _auStack_190 = auVar102;
                                                            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                            g_data_057a6845 = '\x01';
                                                            auVar102 = _auStack_190;
                                                            fVar96 = (float)uStack_180;
                                                          }
                                                          auVar115._0_4_ =
                                                               position_01.fields.x - auVar102._0_4_;
                                                          auVar115._4_4_ =
                                                               position_01.fields.y - auVar102._4_4_;
                                                          auVar115._8_4_ =
                                                               (fStack_248 + fVar109) - auVar102._8_4_;
                                                          auVar115._12_4_ =
                                                               (fStack_244 + fVar112) - auVar102._12_4_;
                                                          position_01.fields.z = position_01.fields.z - fVar96
                                                          ;
                                                          if ((TypeInfo_Math->fields)._stepPhase == 0) {
                                                            il2cpp_runtime_helper_02337ed0();
                                                          }
                                                          auVar103._4_4_ = fVar124;
                                                          auVar103._0_4_ = position_01.fields.z;
                                                          auVar103._8_4_ = fVar110;
                                                          auVar103._12_4_ = fVar111;
                                                          auVar104._4_12_ = auVar103._4_12_;
                                                          fVar96 = position_01.fields.z * position_01.fields.z
                                                                   + auVar115._4_4_ * auVar115._4_4_ +
                                                                     auVar115._0_4_ * auVar115._0_4_;
                                                          if (fVar96 < 0.0) {
                                                            auVar104._0_4_ = sqrtf(fVar96);
                                                            auVar104._4_12_ = extraout_var_02;
                                                            fVar96 = auVar104._0_4_;
                                                          }
                                                          else {
                                                            auVar104._0_4_ = SQRT(fVar96);
                                                            fVar96 = auVar104._0_4_;
                                                          }
                                                          if (1e-05 < fVar96) {
                                                            auVar105._0_4_ = auVar104._0_4_;
                                                            position_01.fields.z =
                                                                 position_01.fields.z / auVar105._0_4_;
                                                            auVar105._8_4_ = auVar104._8_4_;
                                                            auVar105._12_4_ = auVar104._12_4_;
                                                            auVar105._4_4_ = auVar105._0_4_;
                                                            auVar116 = divps(auVar115,auVar105);
                                                            uStack_250 = auVar116._0_8_;
                                                          }
                                                          else {
                                                            if (g_data_057a65d5 == '\0') {
                                                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                              g_data_057a65d5 = '\x01';
                                                            }
                                                            uStack_250 = **(undefined8 **)
                                                                           (TypeInfo_Vector3 + 0xb8);
                                                            position_01.fields.z =
                                                                 *(float *)(*(undefined8 **)
                                                                             (TypeInfo_Vector3 + 0xb8) + 1);
                                                          }
                                                          iVar86 = UnityEngine_LayerMask__get_value
                                                                             ((UnityEngine_LayerMask_Fields)
                                                                              (int32_t)*(undefined8 *)
                                                                                        (TypeInfo_HumanPlayerController + 0xb8),
                                                                              (MethodInfo *)0x0);
                                                          origin.fields.z = fStack_20c;
                                                          origin.fields.x = (float)uStack_1e0;
                                                          origin.fields.y = uStack_1e0._4_4_;
                                                          direction_00.fields.z = position_01.fields.z;
                                                          direction_00.fields.x = (float)uStack_250;
                                                          direction_00.fields.y = uStack_250._4_4_;
                                                          uVar87 = UnityEngine_Physics__Raycast_4e76f20
                                                                             (origin,direction_00,120.0,iVar86
                                                                              ,(MethodInfo *)0x0);
                                                          auVar114 = _auStack_200;
                                                          auVar116 = _auStack_220;
                                                          position_02.fields.z = 0.0;
                                                          rotation.fields.z = (float)auStack_200._0_4_;
                                                          rotation.fields.w = (float)auStack_200._4_4_;
                                                          rotation.fields.x = (float)auStack_220._0_4_;
                                                          rotation.fields.y = (float)auStack_220._4_4_;
                                                          _auStack_220 = auVar116;
                                                          _auStack_200 = auVar114;
                                                          UI_CursorManager__SetHookArrow
                                                                    (0,position_02,rotation,uVar87 & 0xff,
                                                                     (MethodInfo *)0x0);
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
          SVar12 = pSVar89[4].fields;
          aUStack_170[1]._4_8_ = UStack_c8.fields.m_Direction.fields._4_8_;
          aUStack_170[0]._0_8_ = UStack_c8.fields.m_Origin.fields._0_8_;
          aUStack_170._8_8_ = UStack_c8.fields._8_8_;
          uStack_1a0 = UStack_c8.fields.m_Direction.fields._4_8_;
          auStack_1b0._0_8_ = UStack_c8.fields.m_Origin.fields._0_8_;
          auStack_1b0._8_8_ = UStack_c8.fields._8_8_;
          UVar17 = UVar120;
          UVar49 = UVar82;
joined_r0x04298280:
          if (SVar12 != (System_String_Fields)0x0) {
            UVar49.z = fStack_1e4;
            UVar49.x = (float)(int)uStack_100;
            UVar49.y = (float)(int)((ulong)uStack_100 >> 0x20);
            UVar17.z = fStack_20c;
            UVar17.x = (float)(int)uStack_180;
            UVar17.y = (float)(int)((ulong)uStack_180 >> 0x20);
            if (*(UnityEngine_Rigidbody_o **)((long)SVar12 + 0x18) != (UnityEngine_Rigidbody_o *)0x0) {
              UVar118 = UnityEngine_Rigidbody__get_velocity
                                  (*(UnityEngine_Rigidbody_o **)((long)SVar12 + 0x18),(MethodInfo *)0x0);
              auVar113._8_4_ = extraout_XMM0_Dc;
              auVar113._0_8_ = UVar118.fields._0_8_;
              if (g_data_057a6841 == '\0') {
                in_stack_fffffffffffffda0 = UVar118.fields.x;
                in_stack_fffffffffffffda4 = UVar118.fields.y;
                in_stack_fffffffffffffda8 = extraout_XMM0_Dc;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                auVar113._4_4_ = in_stack_fffffffffffffda4;
                auVar113._0_4_ = in_stack_fffffffffffffda0;
                auVar113._8_4_ = in_stack_fffffffffffffda8;
                g_data_057a6841 = '\x01';
              }
              iVar86 = auVar113._8_4_;
              position_01.fields.z = auVar113._4_4_;
              if ((TypeInfo_Math->fields)._stepPhase == 0) {
                in_stack_fffffffffffffda0 = auVar113._0_4_;
                in_stack_fffffffffffffda4 = position_01.fields.z;
                il2cpp_runtime_helper_02337ed0();
                auVar113._4_4_ = in_stack_fffffffffffffda4;
                auVar113._0_4_ = in_stack_fffffffffffffda0;
                auVar113._8_4_ = iVar86;
                in_stack_fffffffffffffda8 = iVar86;
              }
              pfVar93 = (float *)auStack_1b0;
              position_01.fields.z =
                   position_01.fields.z * position_01.fields.z + auVar113._0_4_ * auVar113._0_4_ +
                   UVar118.fields.z * UVar118.fields.z;
              if (position_01.fields.z < 0.0) goto label_0429824f;
label_04298371:
              position_01.fields.z = SQRT(position_01.fields.z);
              goto label_04298375;
            }
          }
        }
      }
    }
  }
label_042993fa:
  fStack_1e4 = UVar49.z;
  uStack_100 = UVar49._0_8_;
  fStack_20c = UVar17.z;
  uStack_180 = UVar17._0_8_;
  il2cpp_runtime_helper_022b2c90();
label_042993ff:
  uVar98 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057add05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057add05 = '\x01';
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar118 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  fStackY_298 = (float)uVar98;
  fStackY_294 = (float)((ulong)uVar98 >> 0x20);
  position_01.fields.z = atan2f(fStackY_294 - UVar118.fields.y,fStackY_298 - UVar118.fields.x);
  auVar16._4_8_ = 0;
  auVar16._0_4_ = position_01.fields.z * 57.29578 * 0.017453292;
  UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o)(auVar16 << 0x40),(MethodInfo *)0x0);
  return;
}


// Controllers.HumanPlayerController$$UpdateUI
// il2cpp: void Controllers_HumanPlayerController__UpdateUI (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x4297e60

void Controllers_HumanPlayerController__UpdateUI
               (Controllers_HumanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  UnityEngine_Camera_o *pUVar4;
  Characters_Human_o *pCVar5;
  System_String_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  System_Action_Hashtable__o *pSVar8;
  System_Action_Hashtable__c *pSVar9;
  System_Object_array *pSVar10;
  Il2CppClass *pIVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_Vector3_Fields UVar15;
  UnityEngine_Vector3_Fields UVar16;
  UnityEngine_Vector3_Fields UVar17;
  UnityEngine_Vector3_Fields UVar18;
  UnityEngine_Vector3_Fields UVar19;
  UnityEngine_Vector3_Fields UVar20;
  UnityEngine_Vector3_Fields UVar21;
  UnityEngine_Vector3_Fields UVar22;
  UnityEngine_Vector3_Fields UVar23;
  UnityEngine_Vector3_Fields UVar24;
  UnityEngine_Vector3_Fields UVar25;
  UnityEngine_Vector3_Fields UVar26;
  UnityEngine_Vector3_Fields UVar27;
  UnityEngine_Vector3_Fields UVar28;
  UnityEngine_Vector3_Fields UVar29;
  UnityEngine_Vector3_Fields UVar30;
  UnityEngine_Vector3_Fields UVar31;
  UnityEngine_Vector3_Fields UVar32;
  UnityEngine_Vector3_Fields UVar33;
  UnityEngine_Vector3_Fields UVar34;
  UnityEngine_Vector3_Fields UVar35;
  UnityEngine_Vector3_Fields UVar36;
  UnityEngine_Vector3_Fields UVar37;
  UnityEngine_Vector3_Fields UVar38;
  UnityEngine_Vector3_Fields UVar39;
  UnityEngine_Vector3_Fields UVar40;
  UnityEngine_Vector3_Fields UVar41;
  UnityEngine_Vector3_Fields UVar42;
  UnityEngine_Vector3_Fields UVar43;
  UnityEngine_Vector3_Fields UVar44;
  UnityEngine_Vector3_Fields UVar45;
  UnityEngine_Vector3_Fields UVar46;
  UnityEngine_Vector3_Fields UVar47;
  UnityEngine_Vector3_Fields UVar48;
  UnityEngine_Vector3_Fields UVar49;
  UnityEngine_Vector3_Fields UVar50;
  UnityEngine_Vector3_Fields UVar51;
  UnityEngine_Vector3_Fields UVar52;
  UnityEngine_Vector3_Fields UVar53;
  UnityEngine_Vector3_Fields UVar54;
  UnityEngine_Vector3_Fields UVar55;
  UnityEngine_Vector3_Fields UVar56;
  UnityEngine_Vector3_Fields UVar57;
  UnityEngine_Vector3_Fields UVar58;
  UnityEngine_Vector3_Fields UVar59;
  UnityEngine_Vector3_Fields UVar60;
  UnityEngine_Vector3_Fields UVar61;
  UnityEngine_Vector3_Fields UVar62;
  UnityEngine_Vector3_Fields UVar63;
  UnityEngine_Vector3_Fields UVar64;
  UnityEngine_Vector3_Fields UVar65;
  UnityEngine_Vector3_Fields UVar66;
  UnityEngine_Vector3_Fields UVar67;
  UnityEngine_Vector3_Fields UVar68;
  UnityEngine_Vector3_Fields UVar69;
  UnityEngine_Vector3_Fields UVar70;
  UnityEngine_Vector3_Fields UVar71;
  UnityEngine_Vector3_Fields UVar72;
  UnityEngine_Vector3_Fields UVar73;
  UnityEngine_Vector3_Fields UVar74;
  UnityEngine_Vector3_Fields UVar75;
  UnityEngine_Vector3_Fields UVar76;
  UnityEngine_Vector3_Fields UVar77;
  UnityEngine_Vector3_Fields UVar78;
  UnityEngine_Vector3_Fields UVar79;
  UnityEngine_Vector3_Fields UVar80;
  bool_conflict bVar81;
  int32_t iVar82;
  uint uVar83;
  System_String_o *pSVar84;
  System_String_o *str0;
  long lVar85;
  undefined8 *puVar86;
  long *plVar87;
  float *pfVar88;
  undefined4 in_register_00000034;
  float fVar89;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar90;
  undefined8 uVar91;
  float extraout_XMM0_Db;
  int32_t extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  int32_t extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 extraout_var [12];
  undefined4 uVar99;
  undefined4 uVar100;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar94 [16];
  undefined1 extraout_var_01 [12];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 extraout_var_02 [12];
  undefined1 auVar98 [16];
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar106 [12];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  UnityEngine_Quaternion_o UVar110;
  UnityEngine_Vector3_o UVar111;
  UnityEngine_Vector3_Fields UVar112;
  UnityEngine_Vector3_Fields UVar113;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o UVar114;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  float fStackY_250;
  float fStackY_24c;
  undefined8 uVar115;
  undefined8 uVar116;
  undefined4 in_stack_fffffffffffffde0;
  float in_stack_fffffffffffffde8;
  float in_stack_fffffffffffffdec;
  float fVar117;
  int32_t in_stack_fffffffffffffdf0;
  undefined8 uStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1dc;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  float fStack_1c4;
  float fStack_1c0;
  int iStack_1bc;
  undefined1 auStack_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  undefined1 auStack_188 [16];
  undefined8 uStack_178;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined1 auStack_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  UnityEngine_Vector3_Fields aUStack_128 [2];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  UnityEngine_Ray_o UStack_80;
  Il2CppMethodPointer pIStack_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod pIStack_58;
  uint32_t uStack_50;
  float fStack_4c;
  float fStack_48;
  undefined8 uStack_44;
  undefined8 extraout_XMM0_Qb_04;
  
  if (g_data_057add04 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot,CONCAT44(in_register_00000034,inMenu));
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"<color=#FF0000>");
    il2cpp_runtime_helper_023445d0(&"F2");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"K");
    il2cpp_runtime_helper_023445d0(&"DamageMultiplier");
    il2cpp_runtime_helper_023445d0(&"<color=#008000>READY</color>");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&" | ");
    il2cpp_runtime_helper_023445d0(&"F1");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    il2cpp_runtime_helper_023445d0(&"???");
    il2cpp_runtime_helper_023445d0(&" u/s");
    g_data_057add04 = '\x01';
  }
  UVar47.z = fStack_19c;
  UVar47.x = (float)(undefined4)uStack_b8;
  UVar47.y = (float)uStack_b8._4_4_;
  UVar15.z = fStack_1c4;
  UVar15.x = (float)uStack_138;
  UVar15.y = uStack_138._4_4_;
  fStack_48 = 0.0;
  uStack_44 = 0;
  pIStack_58 = (InvokerMethod)0x0;
  uStack_50 = 0;
  fStack_4c = 0.0;
  pIStack_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  iStack_1bc = 0;
  fStack_1dc = 0.0;
  fStack_1c0 = 0.0;
  auStack_168._0_4_ = 0.0;
  auStack_168._4_4_ = 0.0;
  auStack_168._8_4_ = 0.0;
  auStack_168._12_4_ = 0.0;
  uStack_158._0_4_ = 0.0;
  uStack_158._4_4_ = 0.0;
  auStack_188._0_4_ = 0.0;
  auStack_188._4_4_ = 0.0;
  auStack_188._8_4_ = 0.0;
  auStack_188._12_4_ = 0.0;
  uStack_178._0_4_ = 0.0;
  uStack_178._4_4_ = 0.0;
  auStack_e8._0_4_ = 0.0;
  auStack_e8._4_4_ = 0.0;
  auStack_e8._8_4_ = 0.0;
  auStack_e8._12_4_ = 0.0;
  uStack_d8._0_4_ = 0.0;
  uStack_d8._4_4_ = 0.0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar85 != 0) {
    pUVar4 = *(UnityEngine_Camera_o **)(lVar85 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar111 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    UVar47.z = fStack_19c;
    UVar47.x = (float)(undefined4)uStack_b8;
    UVar47.y = (float)uStack_b8._4_4_;
    UVar15.z = fStack_1c4;
    UVar15.x = (float)uStack_138;
    UVar15.y = uStack_138._4_4_;
    if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_4db37e0(&UStack_80,pUVar4,UVar111,(MethodInfo *)0x0);
      pSVar84 = "???";
      UVar80.z = fStack_19c;
      UVar80.x = (float)(undefined4)uStack_b8;
      UVar80.y = (float)uStack_b8._4_4_;
      UVar47.z = fStack_19c;
      UVar47.x = (float)(undefined4)uStack_b8;
      UVar47.y = (float)uStack_b8._4_4_;
      UVar113.z = fStack_1c4;
      UVar113.x = (float)uStack_138;
      UVar113.y = uStack_138._4_4_;
      UVar15.z = fStack_1c4;
      UVar15.x = (float)uStack_138;
      UVar15.y = uStack_138._4_4_;
      aUStack_128[1].y = UStack_80.fields.m_Direction.fields.y;
      aUStack_128[1].z = UStack_80.fields.m_Direction.fields.z;
      aUStack_128[0].x = UStack_80.fields.m_Origin.fields.x;
      aUStack_128[0].y = UStack_80.fields.m_Origin.fields.y;
      aUStack_128[0].z = UStack_80.fields.m_Origin.fields.z;
      aUStack_128[1].x = UStack_80.fields.m_Direction.fields.x;
      pCVar5 = (__this->fields)._human;
      if (pCVar5 != (Characters_Human_o *)0x0) {
        str0 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)((long)&(pCVar5->fields).Weapon + 4) == 1) {
          uStack_178._0_4_ = UStack_80.fields.m_Direction.fields.y;
          uStack_178._4_4_ = UStack_80.fields.m_Direction.fields.z;
          auStack_188._0_4_ = UStack_80.fields.m_Origin.fields.x;
          auStack_188._4_4_ = UStack_80.fields.m_Origin.fields.y;
          auStack_188._8_4_ = UStack_80.fields.m_Origin.fields.z;
          auStack_188._12_4_ = UStack_80.fields.m_Direction.fields.x;
          pSVar6 = (pCVar5->fields).CurrentSpecial;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar81 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          UVar79.z = fStack_19c;
          UVar79.x = (float)(undefined4)uStack_b8;
          UVar79.y = (float)uStack_b8._4_4_;
          UVar47.z = fStack_19c;
          UVar47.x = (float)(undefined4)uStack_b8;
          UVar47.y = (float)uStack_b8._4_4_;
          UVar49.z = fStack_19c;
          UVar49.x = (float)(undefined4)uStack_b8;
          UVar49.y = (float)uStack_b8._4_4_;
          UVar48.z = fStack_19c;
          UVar48.x = (float)(undefined4)uStack_b8;
          UVar48.y = (float)uStack_b8._4_4_;
          UVar46.z = fStack_1c4;
          UVar46.x = (float)uStack_138;
          UVar46.y = uStack_138._4_4_;
          UVar15.z = fStack_1c4;
          UVar15.x = (float)uStack_138;
          UVar15.y = uStack_138._4_4_;
          UVar17.z = fStack_1c4;
          UVar17.x = (float)uStack_138;
          UVar17.y = uStack_138._4_4_;
          UVar16.z = fStack_1c4;
          UVar16.x = (float)uStack_138;
          UVar16.y = uStack_138._4_4_;
          if ((char)bVar81 == '\0') {
            uStack_158._0_4_ = (float)uStack_178;
            uStack_158._4_4_ = uStack_178._4_4_;
            auStack_168._0_8_ = auStack_188._0_8_;
            auStack_168._8_8_ = auStack_188._8_8_;
            pCVar5 = (__this->fields)._human;
            if (pCVar5 != (Characters_Human_o *)0x0) {
              lVar85._0_4_ = (pCVar5->fields).Dead;
              lVar85._4_4_ = (pCVar5->fields).CustomDamageEnabled;
              uStack_158 = uStack_178;
              UVar15 = UVar46;
              UVar47 = UVar79;
              goto joined_r0x04298280;
            }
          }
          else {
            uStack_d8._0_4_ = (float)uStack_178;
            uStack_d8._4_4_ = uStack_178._4_4_;
            auStack_e8._0_8_ = auStack_188._0_8_;
            auStack_e8._8_8_ = auStack_188._8_8_;
            pCVar5 = (__this->fields)._human;
            UVar15 = UVar16;
            UVar47 = UVar48;
            if ((pCVar5 != (Characters_Human_o *)0x0) &&
               (pSVar6 = (pCVar5->fields).CurrentSpecial, UVar15 = UVar17, UVar47 = UVar49,
               pSVar6 != (System_String_o *)0x0)) {
              if (g_data_057a6841 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6841 = '\x01';
              }
              fVar102 = (float)pSVar6[0x10].fields._stringLength;
              position_00.fields.z = *(float *)&pSVar6[0x10].fields._firstChar;
              fVar89 = *(float *)&pSVar6[0x11].klass;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                in_stack_fffffffffffffde8 = fVar102;
              }
              pfVar88 = (float *)auStack_e8;
              position_00.fields.z =
                   fVar89 * fVar89 + position_00.fields.z * position_00.fields.z + fVar102 * fVar102;
              if (position_00.fields.z < 0.0) goto label_0429824f;
label_04298371:
              position_00.fields.z = SQRT(position_00.fields.z);
label_04298375:
              uStack_f8 = *(undefined8 *)(pfVar88 + 4);
              fVar89 = *pfVar88;
              fVar102 = pfVar88[1];
              uStack_108 = *(undefined8 *)pfVar88;
              fVar103 = pfVar88[2];
              fVar104 = pfVar88[3];
              uStack_100 = *(undefined8 *)(pfVar88 + 2);
              if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar82 = UnityEngine_LayerMask__get_value
                                 ((UnityEngine_LayerMask_Fields)(int32_t)*(undefined8 *)(TypeInfo_HumanPlayerController + 0xb8),
                                  (MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uStack_208._0_4_ = 1000.0;
              ray.fields.m_Origin.fields.z = (float)(undefined4)uStack_100;
              ray.fields.m_Direction.fields.x = (float)uStack_100._4_4_;
              ray.fields.m_Origin.fields.x = (float)(undefined4)uStack_108;
              ray.fields.m_Origin.fields.y = (float)uStack_108._4_4_;
              ray.fields.m_Direction.fields.y = (float)(undefined4)uStack_f8;
              ray.fields.m_Direction.fields.z = (float)uStack_f8._4_4_;
              uVar91 = uStack_108;
              uVar115 = uStack_100;
              uVar116 = uStack_f8;
              bVar81 = UnityEngine_Physics__Raycast_4e78080
                                 (ray,(UnityEngine_RaycastHit_o *)&pIStack_68,1000.0,iVar82,(MethodInfo *)0x0)
              ;
              if ((char)bVar81 != '\0') {
                __this_00.fields.m_Point.fields.z = (float)(int)uVar115;
                __this_00.fields.m_Normal.fields.x = (float)(int)((ulong)uVar115 >> 0x20);
                __this_00.fields.m_Point.fields.x = (float)(int)uVar91;
                __this_00.fields.m_Point.fields.y = (float)(int)((ulong)uVar91 >> 0x20);
                __this_00.fields.m_Normal.fields.y = (float)(int)uVar116;
                __this_00.fields.m_Normal.fields.z = (float)(int)((ulong)uVar116 >> 0x20);
                __this_00.fields.m_FaceID = in_stack_fffffffffffffde0;
                __this_00.fields.m_Distance = position_00.fields.z;
                __this_00.fields.m_UV.fields.x = in_stack_fffffffffffffde8;
                __this_00.fields.m_UV.fields.y = in_stack_fffffffffffffdec;
                __this_00.fields.m_Collider = in_stack_fffffffffffffdf0;
                UVar111 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)&pIStack_68);
                UVar51.z = fStack_19c;
                UVar51.x = (float)(undefined4)uStack_b8;
                UVar51.y = (float)uStack_b8._4_4_;
                UVar50.z = fStack_19c;
                UVar50.x = (float)(undefined4)uStack_b8;
                UVar50.y = (float)uStack_b8._4_4_;
                UVar47.z = fStack_19c;
                UVar47.x = (float)(undefined4)uStack_b8;
                UVar47.y = (float)uStack_b8._4_4_;
                UVar19.z = fStack_1c4;
                UVar19.x = (float)uStack_138;
                UVar19.y = uStack_138._4_4_;
                UVar18.z = fStack_1c4;
                UVar18.x = (float)uStack_138;
                UVar18.y = uStack_138._4_4_;
                UVar15.z = fStack_1c4;
                UVar15.x = (float)uStack_138;
                UVar15.y = uStack_138._4_4_;
                fVar89 = UVar111.fields.z;
                pCVar5 = (__this->fields)._human;
                if (((pCVar5 == (Characters_Human_o *)0x0) ||
                    (lVar85 = *(long *)&(pCVar5->fields).Dead, UVar15 = UVar18, UVar47 = UVar50, lVar85 == 0))
                   || (pUVar7 = *(UnityEngine_Transform_o **)(lVar85 + 0x10), UVar15 = UVar19, UVar47 = UVar51
                      , pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_042993fa;
                UVar112 = (UnityEngine_Vector3_Fields)
                          UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
                uStack_208._0_4_ = UVar111.fields.x;
                uStack_208._4_4_ = UVar111.fields.y;
                fVar102 = UVar112.y;
                if (g_data_057a6841 == '\0') {
                  auStack_1d8._0_4_ = UVar112.z;
                  fStack_1b0 = (float)extraout_XMM0_Dc_00;
                  auStack_1b8 = (undefined1  [8])UVar112._0_8_;
                  fStack_1ac = (float)extraout_XMM0_Dd;
                  uStack_198 = CONCAT44(fVar102,fVar102);
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  auVar109 = _auStack_1b8;
                  UVar112.z = (float)auStack_1d8._0_4_;
                  UVar112.x = (float)auStack_1b8._0_4_;
                  UVar112.y = (float)auStack_1b8._4_4_;
                  g_data_057a6841 = '\x01';
                  fVar102 = (float)uStack_198;
                  _auStack_1b8 = auVar109;
                }
                uStack_208._0_4_ = (float)uStack_208 - UVar112.x;
                fVar89 = fVar89 - UVar112.z;
                if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uStack_208._0_4_ =
                     fVar89 * fVar89 +
                     (uStack_208._4_4_ - fVar102) * (uStack_208._4_4_ - fVar102) +
                     (float)uStack_208 * (float)uStack_208;
                fVar89 = 0.0;
                fVar102 = 0.0;
                fVar103 = 0.0;
                fVar104 = 0.0;
                if ((float)uStack_208 < 0.0) {
                  uStack_208._0_4_ = sqrtf((float)uStack_208);
                }
                else {
                  uStack_208._0_4_ = SQRT((float)uStack_208);
                }
                iStack_1bc = (int)(float)uStack_208;
                pSVar84 = System_Int32__ToString((int32_t)&iStack_1bc,(MethodInfo *)0x0);
              }
              UVar52.z = fStack_19c;
              UVar52.x = (float)(undefined4)uStack_b8;
              UVar52.y = (float)uStack_b8._4_4_;
              UVar47.z = fStack_19c;
              UVar47.x = (float)(undefined4)uStack_b8;
              UVar47.y = (float)uStack_b8._4_4_;
              UVar20.z = fStack_1c4;
              UVar20.x = (float)uStack_138;
              UVar20.y = uStack_138._4_4_;
              UVar15.z = fStack_1c4;
              UVar15.x = (float)uStack_138;
              UVar15.y = uStack_138._4_4_;
              lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if ((lVar85 != 0) && (UVar15 = UVar20, UVar47 = UVar52, *(long *)(lVar85 + 0x88) != 0)) {
                if (*(char *)(*(long *)(lVar85 + 0x88) + 0x11) != '\0') {
                  str0 = System_String__Concat_3ae5ba0(str0,pSVar84,(MethodInfo *)0x0);
                  UVar47.z = fStack_19c;
                  UVar47.x = (float)(undefined4)uStack_b8;
                  UVar47.y = (float)uStack_b8._4_4_;
                  UVar15.z = fStack_1c4;
                  UVar15.x = (float)uStack_138;
                  UVar15.y = uStack_138._4_4_;
                  lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                  if (lVar85 == 0) goto label_042993fa;
                }
                UVar47.z = fStack_19c;
                UVar47.x = (float)(undefined4)uStack_b8;
                UVar47.y = (float)uStack_b8._4_4_;
                UVar15.z = fStack_1c4;
                UVar15.x = (float)uStack_138;
                UVar15.y = uStack_138._4_4_;
                if (*(long *)(lVar85 + 0x98) != 0) {
                  iVar3 = *(int *)(*(long *)(lVar85 + 0x98) + 0x14);
                  if (iVar3 == 2) {
                    bVar81 = System_String__op_Inequality
                                       (str0,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                        (MethodInfo *)0x0);
                    if ((char)bVar81 != '\0') {
                      str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                    }
                    UVar78.z = fStack_19c;
                    UVar78.x = (float)(undefined4)uStack_b8;
                    UVar78.y = (float)uStack_b8._4_4_;
                    UVar77.z = fStack_19c;
                    UVar77.x = (float)(undefined4)uStack_b8;
                    UVar77.y = (float)uStack_b8._4_4_;
                    UVar76.z = fStack_19c;
                    UVar76.x = (float)(undefined4)uStack_b8;
                    UVar76.y = (float)uStack_b8._4_4_;
                    UVar47.z = fStack_19c;
                    UVar47.x = (float)(undefined4)uStack_b8;
                    UVar47.y = (float)uStack_b8._4_4_;
                    UVar45.z = fStack_1c4;
                    UVar45.x = (float)uStack_138;
                    UVar45.y = uStack_138._4_4_;
                    UVar44.z = fStack_1c4;
                    UVar44.x = (float)uStack_138;
                    UVar44.y = uStack_138._4_4_;
                    UVar43.z = fStack_1c4;
                    UVar43.x = (float)uStack_138;
                    UVar43.y = uStack_138._4_4_;
                    UVar15.z = fStack_1c4;
                    UVar15.x = (float)uStack_138;
                    UVar15.y = uStack_138._4_4_;
                    pCVar5 = (__this->fields)._human;
                    fStack_1dc = position_00.fields.z;
                    if (pCVar5 != (Characters_Human_o *)0x0) {
                      pSVar10 = (pCVar5->fields).crossfadeCache;
                      if (pSVar10 == (System_Object_array *)0x0) goto label_0429892b;
                      pIVar11 = (pSVar10->obj).klass;
                      bVar2 = (pIVar11->_2).naturalAligment;
                      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
                      if ((bVar2 < bVar1) || ((pIVar11->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BladeWeapon))
                      {
                        bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
                        if ((bVar2 < bVar1) || ((pIVar11->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_AHSSWeapon)
                           ) {
                          bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
                          if ((bVar2 < bVar1) ||
                             ((pIVar11->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_APGWeapon)) {
                            bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            if ((bVar2 < bVar1) ||
                               ((pIVar11->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_ThunderspearWeapon)) {
label_0429892b:
                              if (position_00.fields.z <= 10.0) {
                                position_00.fields.z = 10.0;
                              }
                              pSVar84 = System_Single__ToString_3cccfe0
                                                  (position_00.fields.z / 100.0,
                                                   (System_String_o *)&stack0xfffffffffffffde4,"F1");
                              str0 = System_String__Concat_3af7150
                                               (str0,pSVar84,"K",(MethodInfo *)0x0);
                              UVar47.z = fStack_19c;
                              UVar47.x = (float)(undefined4)uStack_b8;
                              UVar47.y = (float)uStack_b8._4_4_;
                              UVar15.z = fStack_1c4;
                              UVar15.x = (float)uStack_138;
                              UVar15.y = uStack_138._4_4_;
                              pCVar5 = (__this->fields)._human;
                              if (pCVar5 != (Characters_Human_o *)0x0) {
                                pSVar8 = (pCVar5->fields).OnPlayerPropertiesChanged;
                                if (pSVar8 != (System_Action_Hashtable__o *)0x0) {
                                  pSVar9 = pSVar8->klass;
                                  bVar2 = (TypeInfo_AHSSTwinShot->_2).naturalAligment;
                                  if ((bVar2 <= (pSVar9->_2).naturalAligment) &&
                                     ((pSVar9->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_AHSSTwinShot)) {
                                    fStack_1dc = (float)(int)fStack_1dc;
                                    if (fStack_1dc <= 10.0) {
                                      fStack_1dc = 10.0;
                                    }
                                    fStack_1dc = fStack_1dc / 100.0;
                                    pSVar84 = System_Single__ToString_3cccfe0
                                                        (fStack_1dc,(System_String_o *)&fStack_1dc,
                                                         "F1");
                                    str0 = System_String__Concat_3af7470
                                                     (str0," | ",pSVar84,"K",(MethodInfo *)0x0
                                                     );
                                  }
                                }
                                goto label_04298a10;
                              }
                            }
                            else {
                              lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                              UVar15 = UVar43;
                              UVar47 = UVar76;
                              if (((lVar85 != 0) &&
                                  (lVar85 = *(long *)(lVar85 + 0x58), UVar15 = UVar44, UVar47 = UVar77,
                                  lVar85 != 0)) &&
                                 (lVar85 = *(long *)(lVar85 + 0x48), UVar15 = UVar45, UVar47 = UVar78,
                                 lVar85 != 0)) {
                                if (*(char *)(lVar85 + 0x11) != '\0') goto label_0429892b;
                                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                UVar47.z = fStack_19c;
                                UVar47.x = (float)(undefined4)uStack_b8;
                                UVar47.y = (float)uStack_b8._4_4_;
                                UVar15.z = fStack_1c4;
                                UVar15.x = (float)uStack_138;
                                UVar15.y = uStack_138._4_4_;
                                plVar87 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                                if (plVar87 != (long *)0x0) {
                                  puVar86 = &"Thunderspear";
                                  goto label_042988bf;
                                }
                              }
                            }
                          }
                          else {
                            if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            UVar47.z = fStack_19c;
                            UVar47.x = (float)(undefined4)uStack_b8;
                            UVar47.y = (float)uStack_b8._4_4_;
                            UVar15.z = fStack_1c4;
                            UVar15.x = (float)uStack_138;
                            UVar15.y = uStack_138._4_4_;
                            plVar87 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                            if (plVar87 != (long *)0x0) {
                              puVar86 = &"APG";
                              goto label_042988bf;
                            }
                          }
                        }
                        else {
                          if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          UVar47.z = fStack_19c;
                          UVar47.x = (float)(undefined4)uStack_b8;
                          UVar47.y = (float)uStack_b8._4_4_;
                          UVar15.z = fStack_1c4;
                          UVar15.x = (float)uStack_138;
                          UVar15.y = uStack_138._4_4_;
                          plVar87 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                          if (plVar87 != (long *)0x0) {
                            puVar86 = &"AHSS";
label_042988bf:
                            plVar87 = (long *)(**(code **)(*plVar87 + 0x1a8))
                                                        (plVar87,*puVar86,*(undefined8 *)(*plVar87 + 0x1b0));
                            UVar47.z = fStack_19c;
                            UVar47.x = (float)(undefined4)uStack_b8;
                            UVar47.y = (float)uStack_b8._4_4_;
                            UVar15.z = fStack_1c4;
                            UVar15.x = (float)uStack_138;
                            UVar15.y = uStack_138._4_4_;
                            goto joined_r0x042988d5;
                          }
                        }
                      }
                      else {
                        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        UVar47.z = fStack_19c;
                        UVar47.x = (float)(undefined4)uStack_b8;
                        UVar47.y = (float)uStack_b8._4_4_;
                        UVar15.z = fStack_1c4;
                        UVar15.x = (float)uStack_138;
                        UVar15.y = uStack_138._4_4_;
                        plVar87 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                        if (plVar87 != (long *)0x0) {
                          plVar87 = (long *)(**(code **)(*plVar87 + 0x1a8))
                                                      (plVar87,"Blade",*(undefined8 *)(*plVar87 + 0x1b0))
                          ;
                          UVar47.z = fStack_19c;
                          UVar47.x = (float)(undefined4)uStack_b8;
                          UVar47.y = (float)uStack_b8._4_4_;
                          UVar15.z = fStack_1c4;
                          UVar15.x = (float)uStack_138;
                          UVar15.y = uStack_138._4_4_;
joined_r0x042988d5:
                          if (plVar87 != (long *)0x0) {
                            plVar87 = (long *)(**(code **)(*plVar87 + 0x1a8))
                                                        (plVar87,"DamageMultiplier",
                                                         *(undefined8 *)(*plVar87 + 0x1b0));
                            UVar47.z = fStack_19c;
                            UVar47.x = (float)(undefined4)uStack_b8;
                            UVar47.y = (float)uStack_b8._4_4_;
                            UVar15.z = fStack_1c4;
                            UVar15.x = (float)uStack_138;
                            UVar15.y = uStack_138._4_4_;
                            if (plVar87 != (long *)0x0) {
                              fVar105 = (float)(**(code **)(*plVar87 + 0x388))
                                                         (plVar87,*(undefined8 *)(*plVar87 + 0x390));
                              position_00.fields.z = (float)(int)(fVar105 * position_00.fields.z);
                              goto label_0429892b;
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (iVar3 == 1) {
                      bVar81 = System_String__op_Inequality
                                         (str0,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                          (MethodInfo *)0x0);
                      position_00.fields.z = extraout_XMM0_Da;
                      if ((char)bVar81 != '\0') {
                        str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                        position_00.fields.z = extraout_XMM0_Da_00;
                      }
                      pSVar84 = System_Single__ToString_3cccfe0
                                          (position_00.fields.z,(System_String_o *)&stack0xfffffffffffffde4,
                                           "F1");
                      str0 = System_String__Concat_3af7150(str0,pSVar84," u/s",(MethodInfo *)0x0);
                    }
label_04298a10:
                    UVar57.z = fStack_19c;
                    UVar57.x = (float)(undefined4)uStack_b8;
                    UVar57.y = (float)uStack_b8._4_4_;
                    UVar56.z = fStack_19c;
                    UVar56.x = (float)(undefined4)uStack_b8;
                    UVar56.y = (float)uStack_b8._4_4_;
                    UVar55.z = fStack_19c;
                    UVar55.x = (float)(undefined4)uStack_b8;
                    UVar55.y = (float)uStack_b8._4_4_;
                    UVar54.z = fStack_19c;
                    UVar54.x = (float)(undefined4)uStack_b8;
                    UVar54.y = (float)uStack_b8._4_4_;
                    UVar53.z = fStack_19c;
                    UVar53.x = (float)(undefined4)uStack_b8;
                    UVar53.y = (float)uStack_b8._4_4_;
                    UVar47.z = fStack_19c;
                    UVar47.x = (float)(undefined4)uStack_b8;
                    UVar47.y = (float)uStack_b8._4_4_;
                    UVar25.z = fStack_1c4;
                    UVar25.x = (float)uStack_138;
                    UVar25.y = uStack_138._4_4_;
                    UVar24.z = fStack_1c4;
                    UVar24.x = (float)uStack_138;
                    UVar24.y = uStack_138._4_4_;
                    UVar23.z = fStack_1c4;
                    UVar23.x = (float)uStack_138;
                    UVar23.y = uStack_138._4_4_;
                    UVar22.z = fStack_1c4;
                    UVar22.x = (float)uStack_138;
                    UVar22.y = uStack_138._4_4_;
                    UVar21.z = fStack_1c4;
                    UVar21.x = (float)uStack_138;
                    UVar21.y = uStack_138._4_4_;
                    UVar15.z = fStack_1c4;
                    UVar15.x = (float)uStack_138;
                    UVar15.y = uStack_138._4_4_;
                    lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                    if ((lVar85 != 0) &&
                       (lVar85 = *(long *)(lVar85 + 0x48), UVar15 = UVar21, UVar47 = UVar53, lVar85 != 0)) {
                      if (*(char *)(lVar85 + 0x11) != '\0') {
                        lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                        UVar15 = UVar22;
                        UVar47 = UVar54;
                        if (((lVar85 == 0) ||
                            (lVar85 = *(long *)(lVar85 + 0x58), UVar15 = UVar23, UVar47 = UVar55, lVar85 == 0)
                            ) || (lVar85 = *(long *)(lVar85 + 0x48), UVar15 = UVar24, UVar47 = UVar56,
                                 lVar85 == 0)) goto label_042993fa;
                        if (*(char *)(lVar85 + 0x11) != '\0') {
                          pCVar5 = (__this->fields)._human;
                          UVar15 = UVar25;
                          UVar47 = UVar57;
                          if (pCVar5 == (Characters_Human_o *)0x0) goto label_042993fa;
                          pSVar10 = (pCVar5->fields).crossfadeCache;
                          if (pSVar10 != (System_Object_array *)0x0) {
                            pIVar11 = (pSVar10->obj).klass;
                            bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                            if ((bVar2 <= (pIVar11->_2).naturalAligment) &&
                               ((pIVar11->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_ThunderspearWeapon)) {
                              bVar81 = System_String__op_Inequality
                                                 (str0,(System_String_o *)
                                                       **(undefined8 **)(g_data_057b9c00 + 0xb8),
                                                  (MethodInfo *)0x0);
                              if ((char)bVar81 != '\0') {
                                str0 = System_String__Concat_3ae5ba0(str0,"\n",(MethodInfo *)0x0);
                              }
                              UVar58.z = fStack_19c;
                              UVar58.x = (float)(undefined4)uStack_b8;
                              UVar58.y = (float)uStack_b8._4_4_;
                              UVar47.z = fStack_19c;
                              UVar47.x = (float)(undefined4)uStack_b8;
                              UVar47.y = (float)uStack_b8._4_4_;
                              UVar26.z = fStack_1c4;
                              UVar26.x = (float)uStack_138;
                              UVar26.y = uStack_138._4_4_;
                              UVar15.z = fStack_1c4;
                              UVar15.x = (float)uStack_138;
                              UVar15.y = uStack_138._4_4_;
                              pCVar5 = (__this->fields)._human;
                              if ((pCVar5 == (Characters_Human_o *)0x0) ||
                                 (pSVar10 = (pCVar5->fields).crossfadeCache, UVar15 = UVar26, UVar47 = UVar58,
                                 pSVar10 == (System_Object_array *)0x0)) goto label_042993fa;
                              pIVar11 = (pSVar10->obj).klass;
                              bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
                              if (((pIVar11->_2).naturalAligment < bVar2) ||
                                 ((pIVar11->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_ThunderspearWeapon))
                              goto label_042993ff;
                              fStack_1c0 = Characters_BaseUseable__GetCooldownLeft
                                                     ((Characters_BaseUseable_o *)pSVar10,(MethodInfo *)0x0);
                              fVar89 = 0.0;
                              fVar102 = 0.0;
                              fVar103 = 0.0;
                              fVar104 = 0.0;
                              if (fStack_1c0 <= 0.0) {
                                str0 = System_String__Concat_3ae5ba0(str0,"<color=#008000>READY</color>",(MethodInfo *)0x0);
                              }
                              else {
                                pSVar84 = System_Single__ToString_3cccfe0
                                                    (fStack_1c0,(System_String_o *)&fStack_1c0,"F2");
                                str0 = System_String__Concat_3af7470
                                                 (str0,"<color=#FF0000>",pSVar84,"</color>",(MethodInfo *)0x0);
                              }
                            }
                          }
                        }
                      }
                      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UI_CursorManager__SetCrosshairText(str0,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UI_CursorManager__SetCrosshairColor
                                ((uint)((float)uStack_208 <= 120.0),(MethodInfo *)0x0);
                      UVar60.z = fStack_19c;
                      UVar60.x = (float)(undefined4)uStack_b8;
                      UVar60.y = (float)uStack_b8._4_4_;
                      UVar59.z = fStack_19c;
                      UVar59.x = (float)(undefined4)uStack_b8;
                      UVar59.y = (float)uStack_b8._4_4_;
                      UVar47.z = fStack_19c;
                      UVar47.x = (float)(undefined4)uStack_b8;
                      UVar47.y = (float)uStack_b8._4_4_;
                      UVar28.z = fStack_1c4;
                      UVar28.x = (float)uStack_138;
                      UVar28.y = uStack_138._4_4_;
                      UVar27.z = fStack_1c4;
                      UVar27.x = (float)uStack_138;
                      UVar27.y = uStack_138._4_4_;
                      UVar15.z = fStack_1c4;
                      UVar15.x = (float)uStack_138;
                      UVar15.y = uStack_138._4_4_;
                      lVar85 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                      if ((lVar85 != 0) &&
                         (lVar85 = *(long *)(lVar85 + 0xa8), UVar15 = UVar27, UVar47 = UVar59, lVar85 != 0)) {
                        if (*(char *)(lVar85 + 0x11) == '\0') {
                          return;
                        }
                        pCVar5 = (__this->fields)._human;
                        UVar15 = UVar28;
                        UVar47 = UVar60;
                        if (pCVar5 != (Characters_Human_o *)0x0) {
                          uVar91 = (*(pCVar5->klass->vtable)._66_GetAimPoint.methodPtr)();
                          UVar62.z = fStack_19c;
                          UVar62.x = (float)(undefined4)uStack_b8;
                          UVar62.y = (float)uStack_b8._4_4_;
                          UVar61.z = fStack_19c;
                          UVar61.x = (float)(undefined4)uStack_b8;
                          UVar61.y = (float)uStack_b8._4_4_;
                          UVar47.z = fStack_19c;
                          UVar47.x = (float)(undefined4)uStack_b8;
                          UVar47.y = (float)uStack_b8._4_4_;
                          UVar30.z = fStack_1c4;
                          UVar30.x = (float)uStack_138;
                          UVar30.y = uStack_138._4_4_;
                          UVar29.z = fStack_1c4;
                          UVar29.x = (float)uStack_138;
                          UVar29.y = uStack_138._4_4_;
                          UVar15.z = fStack_1c4;
                          UVar15.x = (float)uStack_138;
                          UVar15.y = uStack_138._4_4_;
                          lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                          if (((lVar85 != 0) &&
                              (lVar85 = *(long *)(lVar85 + 0x28), UVar15 = UVar29, UVar47 = UVar61,
                              lVar85 != 0)) &&
                             (pUVar7 = *(UnityEngine_Transform_o **)(lVar85 + 0x10), UVar15 = UVar30,
                             UVar47 = UVar62, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                            fVar117 = fVar102;
                            UVar111 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
                            position_00.fields.z = UVar111.fields.x;
                            fVar105 = UVar111.fields.y;
                            uVar99 = extraout_XMM0_Dc_01;
                            iVar82 = extraout_XMM0_Dd_00;
                            if (g_data_057a68cb == '\0') {
                              uStack_1d0._0_4_ = (float)extraout_XMM0_Dc_01;
                              auStack_1d8 = (undefined1  [8])UVar111.fields._0_8_;
                              uStack_1d0._4_4_ = (float)extraout_XMM0_Dd_00;
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                              g_data_057a68cb = '\x01';
                              position_00.fields.z = (float)auStack_1d8._0_4_;
                              fVar105 = (float)auStack_1d8._4_4_;
                              uVar99 = (float)uStack_1d0;
                              iVar82 = (int32_t)uStack_1d0._4_4_;
                            }
                            uStack_208._0_4_ = (float)uVar91;
                            uStack_208._4_4_ = (float)((ulong)uVar91 >> 0x20);
                            fVar101 = UVar111.fields.z - fVar89;
                            fVar102 = fVar102 - fVar117;
                            fVar90 = fVar105 - uStack_208._4_4_;
                            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                              auStack_1d8._4_4_ = fVar105;
                              auStack_1d8._0_4_ = fVar105 - uStack_208._4_4_;
                              uStack_1d0._0_4_ = (float)uVar99;
                              uStack_1d0._4_4_ = (float)iVar82;
                              il2cpp_runtime_helper_02337ed0();
                              fVar90 = (float)auStack_1d8._0_4_;
                            }
                            position_00.fields.z =
                                 (position_00.fields.z - (float)uStack_208) *
                                 (position_00.fields.z - (float)uStack_208);
                            fVar102 = fVar102 * fVar102;
                            fVar105 = (fVar105 - uStack_208._4_4_) * (fVar105 - uStack_208._4_4_);
                            fVar90 = position_00.fields.z + fVar90 * fVar90 + fVar101 * fVar101;
                            if (fVar90 < 0.0) {
                              fVar90 = sqrtf(fVar90);
                              position_00.fields.z = extraout_XMM0_Db;
                              fVar102 = extraout_XMM0_Dc_02;
                              fVar105 = extraout_XMM0_Dd_01;
                            }
                            else {
                              fVar90 = SQRT(fVar90);
                            }
                            UVar64.z = fStack_19c;
                            UVar64.x = (float)(undefined4)uStack_b8;
                            UVar64.y = (float)uStack_b8._4_4_;
                            UVar63.z = fStack_19c;
                            UVar63.x = (float)(undefined4)uStack_b8;
                            UVar63.y = (float)uStack_b8._4_4_;
                            UVar47.z = fStack_19c;
                            UVar47.x = (float)(undefined4)uStack_b8;
                            UVar47.y = (float)uStack_b8._4_4_;
                            UVar32.z = fStack_1c4;
                            UVar32.x = (float)uStack_138;
                            UVar32.y = uStack_138._4_4_;
                            UVar31.z = fStack_1c4;
                            UVar31.x = (float)uStack_138;
                            UVar31.y = uStack_138._4_4_;
                            UVar15.z = fStack_1c4;
                            UVar15.x = (float)uStack_138;
                            UVar15.y = uStack_138._4_4_;
                            pCVar5 = (__this->fields)._human;
                            if ((pCVar5 != (Characters_Human_o *)0x0) &&
                               (lVar85 = *(long *)&(pCVar5->fields).Dead, UVar15 = UVar31, UVar47 = UVar63,
                               lVar85 != 0)) {
                              auStack_1b8._4_4_ = position_00.fields.z;
                              auStack_1b8._0_4_ = fVar90;
                              fStack_1b0 = fVar102;
                              fStack_1ac = fVar105;
                              pUVar7 = *(UnityEngine_Transform_o **)(lVar85 + 0x10);
                              UVar15 = UVar32;
                              UVar47 = UVar64;
                              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                UVar111 = UnityEngine_Transform__get_right(pUVar7,(MethodInfo *)0x0);
                                UVar66.z = fStack_19c;
                                UVar66.x = (float)(undefined4)uStack_b8;
                                UVar66.y = (float)uStack_b8._4_4_;
                                UVar65.z = fStack_19c;
                                UVar65.x = (float)(undefined4)uStack_b8;
                                UVar65.y = (float)uStack_b8._4_4_;
                                UVar47.z = fStack_19c;
                                UVar47.x = (float)(undefined4)uStack_b8;
                                UVar47.y = (float)uStack_b8._4_4_;
                                UVar34.z = fStack_1c4;
                                UVar34.x = (float)uStack_138;
                                UVar34.y = uStack_138._4_4_;
                                UVar33.z = fStack_1c4;
                                UVar33.x = (float)uStack_138;
                                UVar33.y = uStack_138._4_4_;
                                UVar15.z = fStack_1c4;
                                UVar15.x = (float)uStack_138;
                                UVar15.y = uStack_138._4_4_;
                                pCVar5 = (__this->fields)._human;
                                if ((pCVar5 != (Characters_Human_o *)0x0) &&
                                   (lVar85 = *(long *)&(pCVar5->fields).Dead, UVar15 = UVar33, UVar47 = UVar65
                                   , lVar85 != 0)) {
                                  uStack_1d0 = extraout_XMM0_Qb_00;
                                  auStack_1d8 = (undefined1  [8])UVar111.fields._0_8_;
                                  pUVar7 = *(UnityEngine_Transform_o **)(lVar85 + 0x10);
                                  UVar15 = UVar34;
                                  UVar47 = UVar66;
                                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                    UVar113 = (UnityEngine_Vector3_Fields)
                                              UnityEngine_Transform__get_right(pUVar7,(MethodInfo *)0x0);
                                    UVar67.z = fStack_19c;
                                    UVar67.x = (float)(undefined4)uStack_b8;
                                    UVar67.y = (float)uStack_b8._4_4_;
                                    UVar47.z = fStack_19c;
                                    UVar47.x = (float)(undefined4)uStack_b8;
                                    UVar47.y = (float)uStack_b8._4_4_;
                                    UVar15.z = fStack_1c4;
                                    UVar15.x = (float)uStack_138;
                                    UVar15.y = uStack_138._4_4_;
                                    fStack_1c4 = UVar113.z;
                                    uStack_138 = UVar113._0_8_;
                                    lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                    if (lVar85 != 0) {
                                      pUVar4 = *(UnityEngine_Camera_o **)(lVar85 + 0x20);
                                      fStack_200 = (float)extraout_XMM0_Qb;
                                      fStack_1fc = (float)((ulong)extraout_XMM0_Qb >> 0x20);
                                      UVar15 = UVar113;
                                      UVar47 = UVar67;
                                      if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
                                        auStack_148._4_4_ =
                                             (float)auStack_1b8._0_4_ *
                                             *(float *)(&g_data_00d1d698 + (ulong)(50.0 < fVar90) * 4);
                                        auStack_148._0_4_ = auStack_148._4_4_;
                                        fStack_140 = fStack_1b0;
                                        fStack_13c = fStack_1ac;
                                        position_00.fields.z = (float)uStack_1d0 * fStack_1b0;
                                        fVar102 = uStack_1d0._4_4_ * fStack_1ac;
                                        auStack_1b8._0_4_ = auStack_148._4_4_;
                                        UVar114.fields.x =
                                             (float)uStack_208 -
                                             (float)auStack_1d8._0_4_ * (float)auStack_148._4_4_;
                                        UVar114.fields.y =
                                             uStack_208._4_4_ -
                                             (float)auStack_1d8._4_4_ * (float)auStack_148._4_4_;
                                        UVar114.fields.z =
                                             fVar89 - UVar111.fields.z * (float)auStack_148._4_4_;
                                        auStack_1d8._4_4_ = fVar117;
                                        auStack_1d8._0_4_ = UVar114.fields.z;
                                        uStack_1d0._0_4_ = fVar103;
                                        uStack_1d0._4_4_ = fVar104;
                                        uStack_130 = extraout_XMM0_Qb_01;
                                        UVar111 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                                            (pUVar4,UVar114,(MethodInfo *)0x0);
                                        uStack_198 = UVar111.fields._0_8_;
                                        if (g_data_057add05 == '\0') {
                                          il2cpp_runtime_helper_023445d0(uStack_198,UVar111.fields.z,&TypeInfo_CursorManager);
                                          g_data_057add05 = '\x01';
                                        }
                                        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        UVar111 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
                                        fVar105 = atan2f(uStack_198._4_4_ - UVar111.fields.y,
                                                         (float)uStack_198 - UVar111.fields.x);
                                        uVar99 = extraout_var._4_4_;
                                        uVar100 = extraout_var._8_4_;
                                        auVar12._4_8_ = 0;
                                        auVar12._0_4_ = fVar105 * 57.29578 * 0.017453292;
                                        UVar110 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                            ((UnityEngine_Vector3_o)(auVar12 << 0x40),
                                                             (MethodInfo *)0x0);
                                        UVar69.z = fStack_19c;
                                        UVar69.x = (float)(undefined4)uStack_b8;
                                        UVar69.y = (float)uStack_b8._4_4_;
                                        UVar68.z = fStack_19c;
                                        UVar68.x = (float)(undefined4)uStack_b8;
                                        UVar68.y = (float)uStack_b8._4_4_;
                                        UVar47.z = fStack_19c;
                                        UVar47.x = (float)(undefined4)uStack_b8;
                                        UVar47.y = (float)uStack_b8._4_4_;
                                        UVar36.z = fStack_1c4;
                                        UVar36.x = (float)uStack_138;
                                        UVar36.y = uStack_138._4_4_;
                                        UVar35.z = fStack_1c4;
                                        UVar35.x = (float)uStack_138;
                                        UVar35.y = uStack_138._4_4_;
                                        UVar15.z = fStack_1c4;
                                        UVar15.x = (float)uStack_138;
                                        UVar15.y = uStack_138._4_4_;
                                        pCVar5 = (__this->fields)._human;
                                        if ((pCVar5 != (Characters_Human_o *)0x0) &&
                                           (lVar85 = *(long *)&(pCVar5->fields).Dead, UVar15 = UVar35,
                                           UVar47 = UVar68, lVar85 != 0)) {
                                          auStack_a8._8_4_ = uVar99;
                                          auStack_a8._0_8_ = UVar110.fields._8_8_;
                                          auStack_a8._12_4_ = uVar100;
                                          pUVar7 = *(UnityEngine_Transform_o **)(lVar85 + 0x10);
                                          uStack_98 = UVar110.fields._0_8_;
                                          UVar15 = UVar36;
                                          UVar47 = UVar69;
                                          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                            UVar113 = (UnityEngine_Vector3_Fields)
                                                      UnityEngine_Transform__get_position
                                                                (pUVar7,(MethodInfo *)0x0);
                                            UVar70.z = fStack_19c;
                                            UVar70.x = (float)(undefined4)uStack_b8;
                                            UVar70.y = (float)uStack_b8._4_4_;
                                            UVar47.z = fStack_19c;
                                            UVar47.x = (float)(undefined4)uStack_b8;
                                            UVar47.y = (float)uStack_b8._4_4_;
                                            UVar38.z = fStack_1c4;
                                            UVar38.x = (float)uStack_138;
                                            UVar38.y = uStack_138._4_4_;
                                            UVar37.z = fStack_1c4;
                                            UVar37.x = (float)uStack_138;
                                            UVar37.y = uStack_138._4_4_;
                                            UVar15.z = fStack_1c4;
                                            UVar15.x = (float)uStack_138;
                                            UVar15.y = uStack_138._4_4_;
                                            fStack_19c = UVar113.z;
                                            uStack_b8 = UVar113._0_8_;
                                            pCVar5 = (__this->fields)._human;
                                            if (((pCVar5 != (Characters_Human_o *)0x0) &&
                                                (lVar85 = *(long *)&(pCVar5->fields).Dead, UVar15 = UVar37,
                                                UVar47 = UVar70, lVar85 != 0)) &&
                                               (pUVar7 = *(UnityEngine_Transform_o **)(lVar85 + 0x10),
                                               UVar15 = UVar38, UVar47 = UVar113,
                                               pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                                              UVar111 = UnityEngine_Transform__get_position
                                                                  (pUVar7,(MethodInfo *)0x0);
                                              auVar109._0_8_ = UVar111.fields._0_8_;
                                              auVar109._8_8_ = extraout_XMM0_Qb_02;
                                              fVar105 = UVar111.fields.z;
                                              if (g_data_057a6845 == '\0') {
                                                fStack_1a0 = UVar111.fields.z;
                                                auStack_c8 = auVar109;
                                                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                g_data_057a6845 = '\x01';
                                                auVar109 = auStack_c8;
                                                fVar105 = fStack_1a0;
                                              }
                                              auVar107._0_4_ = UVar114.fields.x - auVar109._0_4_;
                                              auVar107._4_4_ = UVar114.fields.y - auVar109._4_4_;
                                              auVar107._8_4_ =
                                                   (fStack_200 - position_00.fields.z) - auVar109._8_4_;
                                              auVar107._12_4_ = (fStack_1fc - fVar102) - auVar109._12_4_;
                                              position_00.fields.z = (float)auStack_1d8._0_4_ - fVar105;
                                              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                                                auStack_1d8._0_4_ = (float)auStack_1d8._0_4_ - fVar105;
                                                il2cpp_runtime_helper_02337ed0();
                                                position_00.fields.z = (float)auStack_1d8._0_4_;
                                              }
                                              auVar92._4_4_ = auStack_1d8._4_4_;
                                              auVar92._0_4_ = position_00.fields.z;
                                              auVar92._8_4_ = (float)uStack_1d0;
                                              auVar92._12_4_ = uStack_1d0._4_4_;
                                              auVar93._4_12_ = auVar92._4_12_;
                                              fVar102 = position_00.fields.z * position_00.fields.z +
                                                        auVar107._4_4_ * auVar107._4_4_ +
                                                        auVar107._0_4_ * auVar107._0_4_;
                                              if (fVar102 < 0.0) {
                                                auStack_1d8._0_4_ = position_00.fields.z;
                                                auVar93._0_4_ = sqrtf(fVar102);
                                                auVar93._4_12_ = extraout_var_00;
                                                position_00.fields.z = (float)auStack_1d8._0_4_;
                                                if (1e-05 < auVar93._0_4_) goto label_04299051;
label_04298ff7:
                                                if (g_data_057a65d5 == '\0') {
                                                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                  g_data_057a65d5 = '\x01';
                                                }
                                                uVar91 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                                                auStack_1d8._0_4_ =
                                                     *(undefined4 *)
                                                      (*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                                                auStack_1d8._4_4_ = 0;
                                                uStack_1d0._0_4_ = 0.0;
                                                uStack_1d0._4_4_ = 0.0;
                                              }
                                              else {
                                                auVar93._0_4_ = SQRT(fVar102);
                                                if (auVar93._0_4_ <= 1e-05) goto label_04298ff7;
label_04299051:
                                                auVar94._0_4_ = auVar93._0_4_;
                                                auStack_1d8._0_4_ = position_00.fields.z / auVar94._0_4_;
                                                auVar94._8_4_ = auVar93._8_4_;
                                                auVar94._12_4_ = auVar93._12_4_;
                                                auVar94._4_4_ = auVar94._0_4_;
                                                auVar109 = divps(auVar107,auVar94);
                                                uVar91 = auVar109._0_8_;
                                              }
                                              if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              iVar82 = UnityEngine_LayerMask__get_value
                                                                 ((UnityEngine_LayerMask_Fields)
                                                                  (int32_t)*(undefined8 *)
                                                                            (TypeInfo_HumanPlayerController + 0xb8),
                                                                  (MethodInfo *)0x0);
                                              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              UVar111.fields.z = fStack_19c;
                                              UVar111.fields.x = (float)(undefined4)uStack_b8;
                                              UVar111.fields.y = (float)uStack_b8._4_4_;
                                              direction.fields.z = (float)auStack_1d8._0_4_;
                                              direction.fields.x = (float)(int)uVar91;
                                              direction.fields.y = (float)(int)((ulong)uVar91 >> 0x20);
                                              uVar83 = UnityEngine_Physics__Raycast_4e76f20
                                                                 (UVar111,direction,120.0,iVar82,
                                                                  (MethodInfo *)0x0);
                                              if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              auVar109 = auStack_a8;
                                              position.fields.z = 0.0;
                                              position.fields.x = (float)uStack_198;
                                              position.fields.y = uStack_198._4_4_;
                                              UVar110.fields.z = (float)auStack_a8._0_4_;
                                              UVar110.fields.w = (float)auStack_a8._4_4_;
                                              UVar110.fields.x = (float)(undefined4)uStack_98;
                                              UVar110.fields.y = (float)uStack_98._4_4_;
                                              auStack_a8 = auVar109;
                                              UI_CursorManager__SetHookArrow
                                                        (1,position,UVar110,uVar83 & 0xff,(MethodInfo *)0x0);
                                              UVar71.z = fStack_19c;
                                              UVar71.x = (float)(undefined4)uStack_b8;
                                              UVar71.y = (float)uStack_b8._4_4_;
                                              UVar47.z = fStack_19c;
                                              UVar47.x = (float)(undefined4)uStack_b8;
                                              UVar47.y = (float)uStack_b8._4_4_;
                                              UVar39.z = fStack_1c4;
                                              UVar39.x = (float)uStack_138;
                                              UVar39.y = uStack_138._4_4_;
                                              UVar15.z = fStack_1c4;
                                              UVar15.x = (float)uStack_138;
                                              UVar15.y = uStack_138._4_4_;
                                              lVar85 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                              if (lVar85 != 0) {
                                                pUVar4 = *(UnityEngine_Camera_o **)(lVar85 + 0x20);
                                                UVar15 = UVar39;
                                                UVar47 = UVar71;
                                                if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
                                                  fVar102 = fStack_140 * (float)uStack_130;
                                                  fVar105 = fStack_13c * uStack_130._4_4_;
                                                  position_00.fields.x =
                                                       (float)uStack_208 +
                                                       (float)auStack_148._0_4_ * (float)uStack_138;
                                                  position_00.fields.y =
                                                       uStack_208._4_4_ +
                                                       (float)auStack_148._4_4_ * uStack_138._4_4_;
                                                  position_00.fields.z =
                                                       fVar89 + (float)auStack_1b8._0_4_ * fStack_1c4;
                                                  UVar111 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                                                                      (pUVar4,position_00,(MethodInfo *)0x0);
                                                  position_01.fields._0_8_ = UVar111.fields._0_8_;
                                                  if (g_data_057add05 == '\0') {
                                                    il2cpp_runtime_helper_023445d0(position_01.fields._0_8_,
                                                                       UVar111.fields.z,&TypeInfo_CursorManager);
                                                    g_data_057add05 = '\x01';
                                                  }
                                                  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                                                    il2cpp_runtime_helper_02337ed0();
                                                  }
                                                  UVar114 = UI_CursorManager__GetInGameMousePosition
                                                                      ((MethodInfo *)0x0);
                                                  fStack_1f8 = UVar111.fields.x;
                                                  fStack_1f4 = UVar111.fields.y;
                                                  fVar89 = atan2f(fStack_1f4 - UVar114.fields.y,
                                                                  fStack_1f8 - UVar114.fields.x);
                                                  uVar99 = extraout_var_01._4_4_;
                                                  uVar100 = extraout_var_01._8_4_;
                                                  auVar13._4_8_ = 0;
                                                  auVar13._0_4_ = fVar89 * 57.29578 * 0.017453292;
                                                  UVar110 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                      ((UnityEngine_Vector3_o)
                                                                       (auVar13 << 0x40),(MethodInfo *)0x0);
                                                  UVar73.z = fStack_19c;
                                                  UVar73.x = (float)(undefined4)uStack_b8;
                                                  UVar73.y = (float)uStack_b8._4_4_;
                                                  UVar72.z = fStack_19c;
                                                  UVar72.x = (float)(undefined4)uStack_b8;
                                                  UVar72.y = (float)uStack_b8._4_4_;
                                                  UVar47.z = fStack_19c;
                                                  UVar47.x = (float)(undefined4)uStack_b8;
                                                  UVar47.y = (float)uStack_b8._4_4_;
                                                  UVar41.z = fStack_1c4;
                                                  UVar41.x = (float)uStack_138;
                                                  UVar41.y = uStack_138._4_4_;
                                                  UVar40.z = fStack_1c4;
                                                  UVar40.x = (float)uStack_138;
                                                  UVar40.y = uStack_138._4_4_;
                                                  UVar15.z = fStack_1c4;
                                                  UVar15.x = (float)uStack_138;
                                                  UVar15.y = uStack_138._4_4_;
                                                  pCVar5 = (__this->fields)._human;
                                                  if ((pCVar5 != (Characters_Human_o *)0x0) &&
                                                     (lVar85 = *(long *)&(pCVar5->fields).Dead,
                                                     UVar15 = UVar40, UVar47 = UVar72, lVar85 != 0)) {
                                                    fStack_1b0 = (float)uVar99;
                                                    auStack_1b8 = (undefined1  [8])UVar110.fields._8_8_;
                                                    fStack_1ac = (float)uVar100;
                                                    uStack_1d0 = extraout_XMM0_Qb_03;
                                                    auStack_1d8 = (undefined1  [8])UVar110.fields._0_8_;
                                                    pUVar7 = *(UnityEngine_Transform_o **)(lVar85 + 0x10);
                                                    UVar15 = UVar41;
                                                    UVar47 = UVar73;
                                                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                      UVar111 = UnityEngine_Transform__get_position
                                                                          (pUVar7,(MethodInfo *)0x0);
                                                      UVar75.z = fStack_19c;
                                                      UVar75.x = (float)(undefined4)uStack_b8;
                                                      UVar75.y = (float)uStack_b8._4_4_;
                                                      UVar74.z = fStack_19c;
                                                      UVar74.x = (float)(undefined4)uStack_b8;
                                                      UVar74.y = (float)uStack_b8._4_4_;
                                                      UVar47.z = fStack_19c;
                                                      UVar47.x = (float)(undefined4)uStack_b8;
                                                      UVar47.y = (float)uStack_b8._4_4_;
                                                      UVar42.z = fStack_1c4;
                                                      UVar42.x = (float)uStack_138;
                                                      UVar42.y = uStack_138._4_4_;
                                                      UVar15.z = fStack_1c4;
                                                      UVar15.x = (float)uStack_138;
                                                      UVar15.y = uStack_138._4_4_;
                                                      fStack_1c4 = UVar111.fields.z;
                                                      pCVar5 = (__this->fields)._human;
                                                      if ((pCVar5 != (Characters_Human_o *)0x0) &&
                                                         (lVar85 = *(long *)&(pCVar5->fields).Dead,
                                                         UVar15 = UVar42, UVar47 = UVar74, lVar85 != 0)) {
                                                        UVar15.z = fStack_1c4;
                                                        UVar15.x = (float)uStack_138;
                                                        UVar15.y = uStack_138._4_4_;
                                                        pUVar7 = *(UnityEngine_Transform_o **)(lVar85 + 0x10);
                                                        uStack_198 = UVar111.fields._0_8_;
                                                        UVar47 = UVar75;
                                                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                          UVar111 = UnityEngine_Transform__get_position
                                                                              (pUVar7,(MethodInfo *)0x0);
                                                          auVar95._0_8_ = UVar111.fields._0_8_;
                                                          auVar95._8_8_ = extraout_XMM0_Qb_04;
                                                          fVar89 = UVar111.fields.z;
                                                          if (g_data_057a6845 == '\0') {
                                                            uStack_138 = CONCAT44(uStack_138._4_4_,
                                                                                  UVar111.fields.z);
                                                            _auStack_148 = auVar95;
                                                            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                                                            g_data_057a6845 = '\x01';
                                                            auVar95 = _auStack_148;
                                                            fVar89 = (float)uStack_138;
                                                          }
                                                          auVar108._0_4_ =
                                                               position_00.fields.x - auVar95._0_4_;
                                                          auVar108._4_4_ =
                                                               position_00.fields.y - auVar95._4_4_;
                                                          auVar108._8_4_ =
                                                               (fStack_200 + fVar102) - auVar95._8_4_;
                                                          auVar108._12_4_ =
                                                               (fStack_1fc + fVar105) - auVar95._12_4_;
                                                          position_00.fields.z = position_00.fields.z - fVar89
                                                          ;
                                                          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                                                            il2cpp_runtime_helper_02337ed0();
                                                          }
                                                          auVar96._4_4_ = fVar117;
                                                          auVar96._0_4_ = position_00.fields.z;
                                                          auVar96._8_4_ = fVar103;
                                                          auVar96._12_4_ = fVar104;
                                                          auVar97._4_12_ = auVar96._4_12_;
                                                          fVar89 = position_00.fields.z * position_00.fields.z
                                                                   + auVar108._4_4_ * auVar108._4_4_ +
                                                                     auVar108._0_4_ * auVar108._0_4_;
                                                          if (fVar89 < 0.0) {
                                                            auVar97._0_4_ = sqrtf(fVar89);
                                                            auVar97._4_12_ = extraout_var_02;
                                                            fVar89 = auVar97._0_4_;
                                                          }
                                                          else {
                                                            auVar97._0_4_ = SQRT(fVar89);
                                                            fVar89 = auVar97._0_4_;
                                                          }
                                                          if (fVar89 <= 1e-05) {
                                                            if (g_data_057a65d5 == '\0') {
                                                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                              g_data_057a65d5 = '\x01';
                                                            }
                                                            uStack_208 = **(undefined8 **)
                                                                           (TypeInfo_Vector3 + 0xb8);
                                                            position_00.fields.z =
                                                                 *(float *)(*(undefined8 **)
                                                                             (TypeInfo_Vector3 + 0xb8) + 1);
                                                          }
                                                          else {
                                                            auVar98._0_4_ = auVar97._0_4_;
                                                            position_00.fields.z =
                                                                 position_00.fields.z / auVar98._0_4_;
                                                            auVar98._8_4_ = auVar97._8_4_;
                                                            auVar98._12_4_ = auVar97._12_4_;
                                                            auVar98._4_4_ = auVar98._0_4_;
                                                            auVar109 = divps(auVar108,auVar98);
                                                            uStack_208 = auVar109._0_8_;
                                                          }
                                                          iVar82 = UnityEngine_LayerMask__get_value
                                                                             ((UnityEngine_LayerMask_Fields)
                                                                              (int32_t)*(undefined8 *)
                                                                                        (TypeInfo_HumanPlayerController + 0xb8),
                                                                              (MethodInfo *)0x0);
                                                          origin.fields.z = fStack_1c4;
                                                          origin.fields.x = (float)uStack_198;
                                                          origin.fields.y = uStack_198._4_4_;
                                                          direction_00.fields.z = position_00.fields.z;
                                                          direction_00.fields.x = (float)uStack_208;
                                                          direction_00.fields.y = uStack_208._4_4_;
                                                          uVar83 = UnityEngine_Physics__Raycast_4e76f20
                                                                             (origin,direction_00,120.0,iVar82
                                                                              ,(MethodInfo *)0x0);
                                                          auVar107 = _auStack_1b8;
                                                          auVar109 = _auStack_1d8;
                                                          position_01.fields.z = 0.0;
                                                          rotation.fields.z = (float)auStack_1b8._0_4_;
                                                          rotation.fields.w = (float)auStack_1b8._4_4_;
                                                          rotation.fields.x = (float)auStack_1d8._0_4_;
                                                          rotation.fields.y = (float)auStack_1d8._4_4_;
                                                          _auStack_1d8 = auVar109;
                                                          _auStack_1b8 = auVar107;
                                                          UI_CursorManager__SetHookArrow
                                                                    (0,position_01,rotation,uVar83 & 0xff,
                                                                     (MethodInfo *)0x0);
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
          lVar85._0_4_ = (pCVar5->fields).Dead;
          lVar85._4_4_ = (pCVar5->fields).CustomDamageEnabled;
          aUStack_128[1]._4_8_ = UStack_80.fields.m_Direction.fields._4_8_;
          aUStack_128[0]._0_8_ = UStack_80.fields.m_Origin.fields._0_8_;
          aUStack_128._8_8_ = UStack_80.fields._8_8_;
          uStack_158 = UStack_80.fields.m_Direction.fields._4_8_;
          auStack_168._0_8_ = UStack_80.fields.m_Origin.fields._0_8_;
          auStack_168._8_8_ = UStack_80.fields._8_8_;
          UVar15 = UVar113;
          UVar47 = UVar80;
joined_r0x04298280:
          if (lVar85 != 0) {
            UVar47.z = fStack_19c;
            UVar47.x = (float)(int)uStack_b8;
            UVar47.y = (float)(int)((ulong)uStack_b8 >> 0x20);
            UVar15.z = fStack_1c4;
            UVar15.x = (float)(int)uStack_138;
            UVar15.y = (float)(int)((ulong)uStack_138 >> 0x20);
            if (*(UnityEngine_Rigidbody_o **)(lVar85 + 0x18) != (UnityEngine_Rigidbody_o *)0x0) {
              UVar111 = UnityEngine_Rigidbody__get_velocity
                                  (*(UnityEngine_Rigidbody_o **)(lVar85 + 0x18),(MethodInfo *)0x0);
              auVar106._8_4_ = extraout_XMM0_Dc;
              auVar106._0_8_ = UVar111.fields._0_8_;
              if (g_data_057a6841 == '\0') {
                in_stack_fffffffffffffde8 = UVar111.fields.x;
                in_stack_fffffffffffffdec = UVar111.fields.y;
                in_stack_fffffffffffffdf0 = extraout_XMM0_Dc;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                auVar106._4_4_ = in_stack_fffffffffffffdec;
                auVar106._0_4_ = in_stack_fffffffffffffde8;
                auVar106._8_4_ = in_stack_fffffffffffffdf0;
                g_data_057a6841 = '\x01';
              }
              iVar82 = auVar106._8_4_;
              position_00.fields.z = auVar106._4_4_;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                in_stack_fffffffffffffde8 = auVar106._0_4_;
                in_stack_fffffffffffffdec = position_00.fields.z;
                il2cpp_runtime_helper_02337ed0();
                auVar106._4_4_ = in_stack_fffffffffffffdec;
                auVar106._0_4_ = in_stack_fffffffffffffde8;
                auVar106._8_4_ = iVar82;
                in_stack_fffffffffffffdf0 = iVar82;
              }
              pfVar88 = (float *)auStack_168;
              position_00.fields.z =
                   position_00.fields.z * position_00.fields.z + auVar106._0_4_ * auVar106._0_4_ +
                   UVar111.fields.z * UVar111.fields.z;
              if (0.0 <= position_00.fields.z) goto label_04298371;
label_0429824f:
              position_00.fields.z = sqrtf(position_00.fields.z);
              goto label_04298375;
            }
          }
        }
      }
    }
  }
label_042993fa:
  fStack_19c = UVar47.z;
  uStack_b8 = UVar47._0_8_;
  fStack_1c4 = UVar15.z;
  uStack_138 = UVar15._0_8_;
  il2cpp_runtime_helper_022b2c90();
label_042993ff:
  uVar91 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057add05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057add05 = '\x01';
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar111 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  fStackY_250 = (float)uVar91;
  fStackY_24c = (float)((ulong)uVar91 >> 0x20);
  position_00.fields.z = atan2f(fStackY_24c - UVar111.fields.y,fStackY_250 - UVar111.fields.x);
  auVar14._4_8_ = 0;
  auVar14._0_4_ = position_00.fields.z * 57.29578 * 0.017453292;
  UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o)(auVar14 << 0x40),(MethodInfo *)0x0);
  return;
}


// Controllers.HumanPlayerController$$GetHookArrowRotation
// il2cpp: UnityEngine_Quaternion_o Controllers_HumanPlayerController__GetHookArrowRotation (Controllers_HumanPlayerController_o* __this, bool left, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x4299410

UnityEngine_Quaternion_o
Controllers_HumanPlayerController__GetHookArrowRotation
          (Controllers_HumanPlayerController_o *__this,bool_conflict left,UnityEngine_Vector3_o position,
          MethodInfo *method)

{
  undefined1 auVar1 [12];
  float fVar2;
  UnityEngine_Quaternion_Fields UVar3;
  UnityEngine_Vector3_o UVar4;
  float fStack_14;
  
  if (g_data_057add05 == '\0') {
    il2cpp_runtime_helper_023445d0(position.fields.x,position.fields.z,&TypeInfo_CursorManager);
    g_data_057add05 = '\x01';
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar4 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  fStack_14 = position.fields.y;
  fVar2 = atan2f(fStack_14 - UVar4.fields.y,position.fields.x - UVar4.fields.x);
  auVar1._4_8_ = 0;
  auVar1._0_4_ = fVar2 * 57.29578 * 0.017453292;
  UVar3 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad
                    ((UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar3;
}


// Controllers.HumanPlayerController$$UpdateHookInput
// il2cpp: void Controllers_HumanPlayerController__UpdateHookInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x42994a0

void Controllers_HumanPlayerController__UpdateHookInput
               (Controllers_HumanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Action_Hashtable__o *pSVar3;
  System_Action_Hashtable__c *pSVar4;
  UnityEngine_Transform_c *pUVar5;
  Il2CppClass *__this_00;
  UI_RoleSpritePickPopup_c *pUVar6;
  undefined8 uVar7;
  UnityEngine_Transform_o *pUVar8;
  Settings_KeybindSetting_o *pSVar9;
  UI_ImportPopup_o *pUVar10;
  _union_249689 _Var11;
  long lVar12;
  code *vtableDispatch;
  Photon_Pun_PhotonView_o *__this_01;
  System_Collections_Generic_List_object__o *pSVar13;
  undefined3 uVar14;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_List_Enumerator_object__o __this_11;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  bool_conflict bVar18;
  uint uVar19;
  Settings_HumanInputSettings_o *pSVar20;
  Characters_Human_o *pCVar21;
  UI_RoleSpritePickPopup_o *pUVar22;
  UI_MessagePopup_o *pUVar23;
  System_Object_array *parameters;
  long lVar24;
  long *plVar25;
  byte bVar26;
  uint uVar27;
  Il2CppClass *in_RCX;
  undefined7 uVar28;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  _union_249689 _Var29;
  _union_249689 unaff_RBP;
  _union_249689 _Var30;
  _union_249689 _Var31;
  ulong uVar32;
  _union_249689 _Var33;
  System_String_o *pSVar34;
  _union_249689 _Var35;
  _union_249689 _Var36;
  _union_249689 _Var37;
  long *plVar38;
  Il2CppClass **__this_12;
  Il2CppClass **ppIVar39;
  System_String_o **__this_13;
  char in_R10B;
  byte bVar40;
  ulong unaff_R12;
  byte bVar41;
  ulong unaff_R13;
  char cVar42;
  _union_249689 unaff_R15;
  bool bVar43;
  float fVar44;
  float fVar45;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qa_10;
  undefined8 uVar46;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 extraout_XMM1_Qb_07;
  undefined8 extraout_XMM1_Qb_08;
  undefined8 extraout_XMM1_Qb_09;
  undefined8 extraout_XMM1_Qb_10;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  UnityEngine_Vector3_o UVar55;
  undefined1 auVar56 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar57;
  Il2CppType *pIVar58;
  Settings_InputKey_o *__this_14;
  Settings_InputKey_o *pSVar59;
  undefined1 auStack_168 [16];
  Settings_InputKey_o *pSStack_158;
  Il2CppRGCTXData *pIStack_150;
  _union_249689 _Stack_148;
  _union_249689 _Stack_140;
  _union_249689 _Stack_138;
  ulong uStack_130;
  _union_249689 _Stack_128;
  undefined1 auStack_120 [8];
  float fStack_118;
  float fStack_114;
  undefined1 auStack_110 [8];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  _union_249689 _Stack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  _union_249689 _Stack_c0;
  _union_249689 _Stack_b8;
  _union_249689 _Stack_b0;
  _union_249689 _Stack_a8;
  _union_249689 _Stack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  uint local_7c;
  uint local_78;
  uint local_74;
  _union_249689 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 auVar47 [16];
  
  _Var29._4_4_ = 0;
  _Var29._0_4_ = inMenu;
  __this_12 = (Il2CppClass **)__this;
  uVar19 = inMenu;
  if (g_data_057add06 == '\0') {
    _Stack_a0 = (_union_249689)0x42994c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    plVar38 = &TypeInfo_Util;
    _Stack_a0 = (_union_249689)0x42994d4;
    il2cpp_runtime_helper_023445d0();
    g_data_057add06 = '\x01';
    __this_12 = (Il2CppClass **)plVar38;
  }
  if ((char)inMenu != '\0') {
    return;
  }
  pCVar21 = (__this->fields)._human;
  _Var31 = (_union_249689)__this;
  if (pCVar21 != (Characters_Human_o *)0x0) {
    local_78 = 0;
    uVar27 = (pCVar21->fields).FinishSetup | 8;
    in_RCX = (Il2CppClass *)(ulong)uVar27;
    if (uVar27 == 0xf) {
label_0429950a:
      pSVar20 = (__this->fields)._humanInput;
      if (pSVar20 != (Settings_HumanInputSettings_o *)0x0) {
label_04299517:
        __this_12 = (Il2CppClass **)(pSVar20->fields).HookBoth;
        if ((Characters_Human_o *)__this_12 != (Characters_Human_o *)0x0) {
          uVar19 = 0;
          _Stack_a0 = (_union_249689)0x429952d;
          uVar27 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)__this_12,0,(MethodInfo *)0x0)
          ;
          unaff_R13 = (ulong)uVar27;
          pSVar20 = (__this->fields)._humanInput;
          if ((pSVar20 != (Settings_HumanInputSettings_o *)0x0) &&
             (__this_12 = (Il2CppClass **)(pSVar20->fields).HookLeft,
             (Characters_Human_o *)__this_12 != (Characters_Human_o *)0x0)) {
            uVar19 = 0;
            _Stack_a0 = (_union_249689)0x4299553;
            uVar16 = Settings_KeybindSetting__GetKey
                               ((Settings_KeybindSetting_o *)__this_12,0,(MethodInfo *)0x0);
            unaff_R12 = (ulong)uVar16;
            pSVar20 = (__this->fields)._humanInput;
            if ((pSVar20 != (Settings_HumanInputSettings_o *)0x0) &&
               (__this_12 = (Il2CppClass **)(pSVar20->fields).HookRight,
               (Characters_Human_o *)__this_12 != (Characters_Human_o *)0x0)) {
              uVar19 = 0;
              _Stack_a0 = (_union_249689)0x4299579;
              uVar17 = Settings_KeybindSetting__GetKey
                                 ((Settings_KeybindSetting_o *)__this_12,0,(MethodInfo *)0x0);
              unaff_RBP._4_4_ = 0;
              unaff_RBP._0_4_ = uVar17;
              pCVar21 = (__this->fields)._human;
              if ((pCVar21 != (Characters_Human_o *)0x0) &&
                 (__this_12 = (Il2CppClass **)(pCVar21->fields).HumanCache,
                 (Characters_Human_o *)__this_12 != (Characters_Human_o *)0x0)) {
                _Stack_a0 = (_union_249689)0x429959f;
                bVar18 = Characters_HookUseable__HasHook
                                   ((Characters_HookUseable_o *)__this_12,(MethodInfo *)0x0);
                uVar32 = 1;
                uVar19 = 1;
                if ((char)bVar18 == '\0') {
                  pCVar21 = (__this->fields)._human;
                  if ((pCVar21 == (Characters_Human_o *)0x0) ||
                     (__this_12 = (Il2CppClass **)(pCVar21->fields).Special,
                     (Characters_Human_o *)__this_12 == (Characters_Human_o *)0x0)) goto label_04299a52;
                  _Stack_a0 = (_union_249689)0x42995cc;
                  uVar19 = Characters_HookUseable__HasHook
                                     ((Characters_HookUseable_o *)__this_12,(MethodInfo *)0x0);
                  uVar32 = (ulong)(uVar19 & 0xff);
                }
                uVar19 = (uint)uVar32;
                pCVar21 = (__this->fields)._human;
                if (pCVar21 != (Characters_Human_o *)0x0) {
                  bVar43 = *(char *)((long)&(pCVar21->fields)._lastMountedPosition.fields.x + 2) == '\0';
                  if ((byte)uVar27 == 0 && !bVar43) {
                    *(undefined1 *)((long)&(pCVar21->fields)._lastMountedPosition.fields.x + 2) = 0;
                    uVar27 = 0;
                  }
                  else {
                    uVar27 = CONCAT31((int3)(uVar27 >> 8),(byte)uVar27 & bVar43);
                  }
                  unaff_R13 = (ulong)uVar27;
                  bVar43 = *(char *)&(pCVar21->fields)._lastMountedPosition.fields.x == '\0';
                  if ((byte)uVar16 == 0 && !bVar43) {
                    *(undefined1 *)&(pCVar21->fields)._lastMountedPosition.fields.x = 0;
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = CONCAT31((int3)(uVar16 >> 8),(byte)uVar16 & bVar43);
                  }
                  unaff_R12 = (ulong)uVar16;
                  bVar43 = *(char *)((long)&(pCVar21->fields)._lastMountedPosition.fields.x + 1) == '\0';
                  in_RCX = (Il2CppClass *)CONCAT71((int7)((ulong)in_RCX >> 8),bVar43);
                  if ((byte)uVar17 == 0 && !bVar43) {
                    *(undefined1 *)((long)&(pCVar21->fields)._lastMountedPosition.fields.x + 1) = 0;
                    unaff_RBP.genericMethod = (Characters_Human_o *)0x0;
                    _Var29 = (_union_249689)(pCVar21->fields).HumanCache;
                  }
                  else {
                    unaff_RBP._0_1_ = (byte)uVar17 & bVar43;
                    unaff_RBP._1_3_ = (int3)(uVar17 >> 8);
                    unaff_RBP._4_4_ = 0;
                    _Var29 = (_union_249689)(pCVar21->fields).HumanCache;
                  }
                  if (_Var29.genericMethod != (Characters_Human_o *)0x0) {
                    bVar40 = (byte)uVar16;
                    bVar41 = (byte)uVar27;
                    *(byte *)((long)_Var29.genericMethod + 0x48) = (bVar40 ^ 1) & bVar41;
                    in_RCX = (Il2CppClass *)(pCVar21->fields).Special;
                    if (in_RCX != (Il2CppClass *)0x0) {
                      local_7c = unaff_RBP._0_4_;
                      bVar26 = unaff_RBP._0_1_;
                      unaff_RBP.genericMethod = (Characters_Human_o *)0x0;
                      *(byte *)&(in_RCX->_1).castClass = (bVar26 ^ 1) & bVar41;
                      uVar14 = (undefined3)(uVar27 >> 8);
                      _Var37 = _Var29;
                      _Var30.genericMethod = (Characters_Human_o *)0x0;
                      local_74 = uVar19;
                      unaff_R15.genericMethod = (Characters_Human_o *)0x0;
                      if (local_78 != 0) {
                        unaff_R15 = _Var29;
                        if (g_data_057add0c == '\0') {
                          __this_12 = &TypeInfo_Spin3Special;
                          _Stack_a0 = (_union_249689)0x42996b4;
                          il2cpp_runtime_helper_023445d0();
                          uVar19 = (uint)uVar32;
                          g_data_057add0c = '\x01';
                          pCVar21 = (__this->fields)._human;
                          if (pCVar21 == (Characters_Human_o *)0x0) goto label_04299a52;
                        }
                        if (((pCVar21->fields).FinishSetup == 9) &&
                           (pSVar3 = (pCVar21->fields).OnPlayerPropertiesChanged,
                           pSVar3 != (System_Action_Hashtable__o *)0x0)) {
                          pSVar4 = pSVar3->klass;
                          bVar26 = (TypeInfo_Spin3Special->_2).naturalAligment;
                          uVar32 = (ulong)bVar26;
                          if ((bVar26 <= (pSVar4->_2).naturalAligment) &&
                             (in_RCX = TypeInfo_Spin3Special, (pSVar4->_2).typeHierarchy[uVar32 - 1] == TypeInfo_Spin3Special))
                          goto label_042997d0;
                        }
                        uVar19 = (uint)uVar32;
                        bVar26 = bVar41 ^ 1 | bVar40;
                        in_RCX = (Il2CppClass *)(ulong)CONCAT31(uVar14,bVar26);
                        _Var37.genericMethod = (Characters_Human_o *)0x0;
                        if (bVar40 == 0) {
                          _Var37 = _Var29;
                        }
                        if (bVar26 == 0) {
                          __this_12 = (Il2CppClass **)(pCVar21->fields).HumanCache;
                          _Var31 = _Var37;
                          local_70 = (_union_249689)__this;
                          if ((Characters_Human_o *)__this_12 == (Characters_Human_o *)0x0) goto label_04299a52;
                          uVar19 = 0;
                          _Stack_a0 = (_union_249689)0x42997ae;
                          bVar18 = Characters_HookUseable__IsHooked
                                             ((Characters_HookUseable_o *)__this_12,(MethodInfo *)0x0);
                          in_RCX = (Il2CppClass *)(ulong)(local_74 ^ 1);
                          unaff_RBP = (_union_249689)0x1;
                          __this = (Controllers_HumanPlayerController_o *)local_70;
                          if ((char)bVar18 == '\0') {
                            unaff_RBP._4_4_ = 0;
                            unaff_RBP._0_4_ = local_74 ^ 1;
                          }
                        }
                        else {
                          unaff_RBP.genericMethod = (void *)(unaff_R12 & 0xff);
                          _Var37 = _Var29;
                        }
                        _Var29 = _Var37;
                        _Var30 = unaff_RBP;
                        _Var31 = (_union_249689)__this;
                        local_70 = (_union_249689)__this;
                        if (_Var37.genericMethod == (Characters_Human_o *)0x0) goto label_04299a52;
                      }
label_042997d0:
                      _Stack_a0 = (_union_249689)0x42997e5;
                      _Var33 = _Var30;
                      __this_12 = (Il2CppClass **)_Var37;
                      (**(code **)(*(long *)_Var37.genericMethod + 0x1f8))
                                (_Var37.genericMethod,_Var30.genericMethod,
                                 *(undefined8 *)(*(long *)_Var37.genericMethod + 0x200));
                      uVar19 = _Var33._0_4_;
                      pUVar22 = *(UI_RoleSpritePickPopup_o **)((long)__this + 0x58);
                      _Var29 = _Var37;
                      unaff_RBP = _Var30;
                      _Var31 = (_union_249689)__this;
                      if (pUVar22 != (UI_RoleSpritePickPopup_o *)0x0) {
                        in_RCX = (Il2CppClass *)0x0;
                        _Var29 = (_union_249689)pUVar22[1].fields._currentCategoryPanelName;
                        if (local_78 == 0) {
                          unaff_RBP._4_4_ = 0;
                          unaff_RBP._0_4_ = local_7c;
joined_r0x04299a4c:
                          uVar19 = _Var33._0_4_;
                        }
                        else {
                          if (g_data_057add0c == '\0') {
                            __this_12 = &TypeInfo_Spin3Special;
                            _Stack_a0 = (_union_249689)0x4299824;
                            il2cpp_runtime_helper_023445d0();
                            uVar19 = _Var33._0_4_;
                            g_data_057add0c = '\x01';
                            pUVar22 = *(UI_RoleSpritePickPopup_o **)((long)__this + 0x58);
                            unaff_RBP = _Var29;
                            if (pUVar22 == (UI_RoleSpritePickPopup_o *)0x0) goto label_04299a52;
                          }
                          if ((pUVar22[1].fields.IsActive == 9) &&
                             (pUVar8 = pUVar22[1].fields.DoublePanelRight,
                             pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                            pUVar5 = pUVar8->klass;
                            bVar26 = (TypeInfo_Spin3Special->_2).naturalAligment;
                            _Var33._1_7_ = 0;
                            _Var33._0_1_ = bVar26;
                            if ((bVar26 <= (pUVar5->_2).naturalAligment) &&
                               ((pUVar5->_2).typeHierarchy[(long)((long)_Var33.genericMethod + -1)] ==
                                TypeInfo_Spin3Special)) {
                              in_RCX = (Il2CppClass *)0x0;
                              unaff_RBP._4_4_ = 0;
                              unaff_RBP._0_4_ = local_7c;
                              goto joined_r0x04299a4c;
                            }
                          }
                          uVar19 = _Var33._0_4_;
                          in_RCX = (Il2CppClass *)(ulong)local_7c;
                          unaff_R15.genericMethod = (Characters_Human_o *)0x0;
                          if ((char)local_7c == '\0') {
                            unaff_R15 = _Var29;
                          }
                          unaff_RBP._4_4_ = 0;
                          unaff_RBP._0_4_ = local_7c;
                          if (bVar41 != 1 || (char)local_7c != '\0') goto joined_r0x04299a4c;
                          __this_12 = (Il2CppClass **)pUVar22[1].fields._currentCategoryPanelName;
                          if ((Characters_Human_o *)__this_12 == (Characters_Human_o *)0x0) goto label_04299a52;
                          uVar19 = 0;
                          _Stack_a0 = (_union_249689)0x42998b2;
                          bVar18 = Characters_HookUseable__IsHooked
                                             ((Characters_HookUseable_o *)__this_12,(MethodInfo *)0x0);
                          in_RCX = (Il2CppClass *)
                                   CONCAT71((int7)((ulong)in_RCX >> 8),local_74 == 0 | (byte)bVar18);
                          _Var29 = unaff_R15;
                        }
                        if (_Var29.genericMethod != (Characters_Human_o *)0x0) {
                          uVar19 = (uint)((ulong)in_RCX & 0xff);
                          _Stack_a0 = (_union_249689)0x42998ec;
                          __this_12 = (Il2CppClass **)_Var29;
                          (**(code **)(*(long *)_Var29.genericMethod + 0x1f8))
                                    (_Var29.genericMethod,(ulong)in_RCX & 0xff,
                                     *(undefined8 *)(*(long *)_Var29.genericMethod + 0x200));
                          if ((*(UI_RoleSpritePickPopup_o **)((long)__this + 0x58) !=
                               (UI_RoleSpritePickPopup_o *)0x0) &&
                             (pUVar8 = (*(UI_RoleSpritePickPopup_o **)((long)__this + 0x58))[1].fields.TopBar,
                             pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                            bVar40 = bVar40 | unaff_RBP._0_1_;
                            unaff_R12 = (ulong)CONCAT31((int3)(uVar16 >> 8),bVar40);
                            bVar41 = bVar41 | bVar40;
                            unaff_R13 = (ulong)CONCAT31(uVar14,bVar41);
                            if (bVar41 != 1) {
                              return;
                            }
                            if (0.0 < *(float *)&pUVar8[1].fields.m_CachedPtr) {
                              return;
                            }
                            if ((*(Il2CppObject **)((long)__this + 0x70) != (Il2CppObject *)0x0) &&
                               (__this_12 = ((_union_249689 *)(*(Il2CppObject **)((long)__this + 0x70) + 3))->
                                            genericMethod,
                               (Characters_Human_o *)__this_12 != (Characters_Human_o *)0x0)) {
                              uVar19 = 0;
                              _Stack_a0 = (_union_249689)0x4299949;
                              bVar18 = Settings_KeybindSetting__GetKeyDown
                                                 ((Settings_KeybindSetting_o *)__this_12,0,(MethodInfo *)0x0);
                              if ((char)bVar18 == '\0') {
                                if ((*(Il2CppObject **)((long)__this + 0x70) != (Il2CppObject *)0x0) &&
                                   (__this_12 = (*(Il2CppObject **)((long)__this + 0x70))[3].monitor,
                                   (Characters_Human_o *)__this_12 != (Characters_Human_o *)0x0)) {
                                  uVar19 = 0;
                                  _Stack_a0 = (_union_249689)0x4299970;
                                  bVar18 = Settings_KeybindSetting__GetKeyDown
                                                     ((Settings_KeybindSetting_o *)__this_12,0,
                                                      (MethodInfo *)0x0);
                                  if ((char)bVar18 != '\0') goto label_0429999f;
                                  if (*(Il2CppObject **)((long)__this + 0x70) != (Il2CppObject *)0x0) {
                                    __this_00 = (*(Il2CppObject **)((long)__this + 0x70))[4].klass;
                                    __this_12 = (Il2CppClass **)0x0;
                                    if (__this_00 != (Il2CppClass *)0x0) {
                                      _Stack_a0 = (_union_249689)0x4299997;
                                      bVar18 = Settings_KeybindSetting__GetKeyDown
                                                         ((Settings_KeybindSetting_o *)__this_00,0,
                                                          (MethodInfo *)0x0);
                                      if ((char)bVar18 == '\0') {
                                        return;
                                      }
                                      goto label_0429999f;
                                    }
                                  }
                                }
                              }
                              else {
label_0429999f:
                                pUVar22 = *(UI_RoleSpritePickPopup_o **)((long)__this + 0x58);
                                if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
                                  _Stack_a0 = (_union_249689)0x42999bc;
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                unaff_RBP = (_union_249689)
                                            ((_union_249689 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100))->
                                            genericMethod;
                                if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                                  _Stack_a0 = (_union_249689)0x42999e6;
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                __this_12 = (Il2CppClass **)&local_48;
                                uVar19 = 0;
                                _Stack_a0 = (_union_249689)0x42999f2;
                                Utility_Util__CreateLocalPhotonInfo
                                          ((Photon_Pun_PhotonMessageInfo_o *)__this_12,(MethodInfo *)0x0);
                                local_58 = local_38;
                                local_68 = local_48;
                                uVar46 = local_68;
                                uStack_60 = uStack_40;
                                uVar15 = uStack_60;
                                _Var29.genericMethod = (Characters_Human_o *)0x0;
                                if (pUVar22 != (UI_RoleSpritePickPopup_o *)0x0) {
                                  pUVar6 = pUVar22->klass;
                                  uVar7._0_4_ = pUVar6[1]._2.token;
                                  uVar7._4_2_ = pUVar6[1]._2.method_count;
                                  uVar7._6_2_ = pUVar6[1]._2.property_count;
                                  local_88 = local_38;
                                  local_68._0_4_ = (undefined4)local_48;
                                  local_68._4_4_ = (undefined4)((ulong)local_48 >> 0x20);
                                  uStack_60._0_4_ = (undefined4)uStack_40;
                                  uStack_60._4_4_ = (undefined4)((ulong)uStack_40 >> 0x20);
                                  local_98 = (undefined4)local_68;
                                  uStack_94 = local_68._4_4_;
                                  uStack_90 = (undefined4)uStack_60;
                                  uStack_8c = uStack_60._4_4_;
                                  _Stack_a0 = (_union_249689)0x4299a34;
                                  local_68 = uVar46;
                                  uStack_60 = uVar15;
                                  (**(code **)&pUVar6[1]._2.thread_static_fields_offset)
                                            (pUVar22,unaff_RBP.genericMethod,uVar7);
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
    else {
      in_RCX = (Il2CppClass *)(pCVar21->fields).Horse;
      if (in_RCX != (Il2CppClass *)0x0) {
        if (((float)(in_RCX->_1).byval_arg.bits <= 0.0) ||
           ((*(int *)&(pCVar21->fields).Weapon == 2 &&
            (*(char *)&(pCVar21->fields)._mountedVelocity.fields.x == '\0')))) goto label_0429950a;
        local_78 = *(byte *)&(pCVar21->fields).FeedVictimName ^ 1;
        pSVar20 = (__this->fields)._humanInput;
        if (pSVar20 == (Settings_HumanInputSettings_o *)0x0) goto label_04299a52;
        goto label_04299517;
      }
    }
  }
label_04299a52:
  _Stack_a0 = (_union_249689)0x4299a57;
  il2cpp_runtime_helper_022b2c90();
  ppIVar39 = __this_12;
  _Stack_a0 = _Var29;
  if (g_data_057add0c == '\0') {
    ppIVar39 = &TypeInfo_Spin3Special;
    _Stack_a8 = (_union_249689)0x4299a79;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0c = '\x01';
  }
  pUVar22 = *(UI_RoleSpritePickPopup_o **)((long)__this_12 + 0x58);
  if (pUVar22 != (UI_RoleSpritePickPopup_o *)0x0) {
    if (((pUVar22[1].fields.IsActive == 9) &&
        (pUVar8 = pUVar22[1].fields.DoublePanelRight, pUVar8 != (UnityEngine_Transform_o *)0x0)) &&
       ((TypeInfo_Spin3Special->_2).naturalAligment <= (pUVar8->klass->_2).naturalAligment)) {
      return;
    }
    return;
  }
  _Stack_a8 = (_union_249689)0x4299ad4;
  il2cpp_runtime_helper_022b2c90();
  __this_13 = (System_String_o **)ppIVar39;
  _Stack_a8 = (_union_249689)__this_12;
  if (g_data_057add07 == '\0') {
    _Stack_b0 = (_union_249689)0x4299af9;
    il2cpp_runtime_helper_023445d0(&"test");
    __this_13 = &"Thunderspear";
    _Stack_b0 = (_union_249689)0x4299b05;
    il2cpp_runtime_helper_023445d0();
    g_data_057add07 = '\x01';
  }
  if ((*(Photon_Pun_PhotonView_o **)((long)ppIVar39 + 0x70) != (Photon_Pun_PhotonView_o *)0x0) &&
     (__this_13 = (System_String_o **)
                  ((*(Photon_Pun_PhotonView_o **)((long)ppIVar39 + 0x70))->fields).lastOnSerializeDataSent,
     (Characters_Human_o *)__this_13 != (Characters_Human_o *)0x0)) {
    uVar19 = 0;
    _Stack_b0 = (_union_249689)0x4299b2f;
    bVar18 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)__this_13,0,(MethodInfo *)0x0);
    if ((char)bVar18 == '\0') {
label_04299b7b:
      if (*(Il2CppObject **)((long)ppIVar39 + 0x70) != (Il2CppObject *)0x0) {
        pSVar9 = (*(Il2CppObject **)((long)ppIVar39 + 0x70))[3].monitor;
        __this_13 = (System_String_o **)0x0;
        if (pSVar9 != (Settings_KeybindSetting_o *)0x0) {
          uVar19 = 0;
          _Stack_b0 = (_union_249689)0x4299b96;
          bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar9,0,(MethodInfo *)0x0);
          if ((char)bVar18 == '\0') {
            return;
          }
          __this_13 = (System_String_o **)0x0;
          if (*(UI_InGameMenu_o **)((long)ppIVar39 + 0x30) != (UI_InGameMenu_o *)0x0) {
            in_RCX = (Il2CppClass *)0xbb8;
            _Stack_b0 = (_union_249689)0x4299bc7;
            pSVar34 = "test";
            UI_InGameMenu__ShowKillFeed
                      (*(UI_InGameMenu_o **)((long)ppIVar39 + 0x30),"test","test",3000,
                       "Thunderspear",(MethodInfo *)0x0);
            uVar19 = (uint)pSVar34;
            __this_13 = (System_String_o **)0x0;
            if (*(UI_InGameMenu_o **)((long)ppIVar39 + 0x30) != (UI_InGameMenu_o *)0x0) {
              UI_InGameMenu__ShowKillScore
                        (*(UI_InGameMenu_o **)((long)ppIVar39 + 0x30),3000,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else {
      __this_13 = (System_String_o **)0x0;
      if (*(UI_InGameMenu_o **)((long)ppIVar39 + 0x30) != (UI_InGameMenu_o *)0x0) {
        in_RCX = (Il2CppClass *)&g_data_00000064;
        _Stack_b0 = (_union_249689)0x4299b64;
        pSVar34 = "test";
        UI_InGameMenu__ShowKillFeed
                  (*(UI_InGameMenu_o **)((long)ppIVar39 + 0x30),"test","test",100,"Thunderspear",
                   (MethodInfo *)0x0);
        uVar19 = (uint)pSVar34;
        __this_13 = ((_union_249689 *)((long)ppIVar39 + 0x30))->genericMethod;
        if ((Characters_Human_o *)__this_13 != (Characters_Human_o *)0x0) {
          uVar19 = 100;
          in_RCX = (Il2CppClass *)0x0;
          _Stack_b0 = (_union_249689)0x4299b7b;
          UI_InGameMenu__ShowKillScore((UI_InGameMenu_o *)__this_13,100,0,(MethodInfo *)0x0);
          goto label_04299b7b;
        }
      }
    }
  }
  _Stack_b0 = (_union_249689)0x4299be6;
  il2cpp_runtime_helper_022b2c90();
  auVar47._8_8_ = extraout_XMM1_Qb;
  auVar47._0_8_ = extraout_XMM1_Qa;
  uVar32 = (ulong)uVar19;
  method_00 = extraout_RDX;
  _Stack_d8 = (_union_249689)ppIVar39;
  uStack_d0 = unaff_R12;
  uStack_c8 = unaff_R13;
  _Stack_c0 = _Var31;
  _Stack_b8 = unaff_R15;
  _Stack_b0 = unaff_RBP;
  if (g_data_057add08 == '\0') {
    _Stack_128 = (_union_249689)0x4299c1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot);
    _Stack_128 = (_union_249689)0x4299c29;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    _Stack_128 = (_union_249689)0x4299c35;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
    _Stack_128 = (_union_249689)0x4299c41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseHoldAttackSpecial);
    _Stack_128 = (_union_249689)0x4299c4d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EscapeSpecial);
    _Stack_128 = (_union_249689)0x4299c59;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    _Stack_128 = (_union_249689)0x4299c65;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    _Stack_128 = (_union_249689)0x4299c71;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    _Stack_128 = (_union_249689)0x4299c7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    _Stack_128 = (_union_249689)0x4299c89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    _Stack_128 = (_union_249689)0x4299c95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterTransformSpecial);
    _Stack_128 = (_union_249689)0x4299ca1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    _Stack_128 = (_union_249689)0x4299cad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    _Stack_128 = (_union_249689)0x4299cb9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    _Stack_128 = (_union_249689)0x4299cc5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    _Stack_128 = (_union_249689)0x4299cd1;
    il2cpp_runtime_helper_023445d0(&"UncarryRPC");
    auVar47._8_8_ = extraout_XMM1_Qb_00;
    auVar47._0_8_ = extraout_XMM1_Qa_00;
    g_data_057add08 = '\x01';
    method_00 = extraout_RDX_00;
  }
  cVar42 = (char)uVar19;
  _Var31.genericMethod = (void *)(uVar32 & 0xff);
  _Stack_128 = (_union_249689)0x4299ce6;
  bVar18 = _Var31._0_4_;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this_13,bVar18,method_00);
  _Stack_128 = (_union_249689)0x4299cf0;
  Controllers_HumanPlayerController__UpdateHookInput
            ((Controllers_HumanPlayerController_o *)__this_13,bVar18,method_01);
  _Var30.genericMethod = (Characters_Human_o *)0x0;
  _Stack_128 = (_union_249689)0x4299cfd;
  Controllers_HumanPlayerController__UpdateReelInput
            ((Controllers_HumanPlayerController_o *)__this_13,0,method_02);
  _Stack_128 = (_union_249689)0x4299d07;
  _Var37.genericMethod = _Var31.genericMethod;
  _Var29 = (_union_249689)__this_13;
  Controllers_HumanPlayerController__UpdateDashInput
            ((Controllers_HumanPlayerController_o *)__this_13,bVar18,method_03);
  pUVar22 = *(UI_RoleSpritePickPopup_o **)((long)__this_13 + 0x58);
  if (pUVar22 != (UI_RoleSpritePickPopup_o *)0x0) {
    _Var33.genericMethod = (void *)((long)__this_13 + 0x58);
    ppIVar39 = _Var33.genericMethod;
    if (*(char *)((long)&pUVar22[2].fields.MaskBackground + 6) != '\0') {
      _Var29 = (_union_249689)((_union_249689 *)((long)__this_13 + 0x88))->genericMethod;
      if (_Var29.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
      uVar19 = pUVar22[1].fields.IsActive;
      _Var37._4_4_ = 0;
      _Var37._0_4_ = uVar19;
      _Stack_128 = (_union_249689)0x4299d46;
      bVar18 = System_Collections_Generic_HashSet_Int32Enum___Contains
                         (_Var29.genericMethod,uVar19,MethodInfo_Boolean_Contains);
      if (((char)bVar18 == '\0') && (cVar42 == '\0')) {
        if (*(long *)_Var33.genericMethod == 0) goto label_0429a1cb;
        _Var30._0_4_ = *(byte *)(*(long *)_Var33.genericMethod + 0x68) ^ 1;
        _Var30._4_4_ = 0;
      }
    }
    lVar24 = TypeInfo_ThunderspearWeapon;
    pUVar10 = *(UI_ImportPopup_o **)((long)__this_13 + 0x70);
    if ((pUVar10 != (UI_ImportPopup_o *)0x0) &&
       (in_RCX = *(Il2CppClass **)_Var33.genericMethod, in_RCX != (Il2CppClass *)0x0)) {
      _Var11 = (_union_249689)(pUVar10->fields).SinglePanel;
      _Var35 = (_union_249689)(pUVar10->fields).DoublePanelLeft;
      auStack_120 = (undefined1  [8])_Var35.genericMethod;
      _Var29 = (_union_249689)*(_union_249689 *)&(in_RCX->_2).element_size;
      _Var36 = _Var11;
      if (_Var29.genericMethod == (Characters_Human_o *)0x0) {
label_04299dc4:
        _Var35 = _Var37;
        *(undefined1 *)&in_RCX->vtable[0x1a].methodPtr = 0;
        _Var37 = _Var35;
        if (_Var30._0_4_ != 0) goto label_04299dd7;
label_0429a1a8:
        _Var30.genericMethod = _Var33.genericMethod;
        if (_Var29.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        _Var37.genericMethod = (Characters_Human_o *)0x0;
        _Stack_128 = (_union_249689)0x429a1bf;
        (**(code **)(*(long *)_Var29.genericMethod + 0x1f8))
                  (_Var29.genericMethod,0,*(undefined8 *)(*(long *)_Var29.genericMethod + 0x200));
        auVar47._8_8_ = extraout_XMM1_Qb_05;
        auVar47._0_8_ = extraout_XMM1_Qa_05;
        goto label_0429a1bf;
      }
      _Var37._1_7_ = 0;
      _Var37._0_1_ = *(byte *)(TypeInfo_ThunderspearWeapon + 0x130);
      if ((*(byte *)(*(long *)_Var29.genericMethod + 0x130) < *(byte *)(TypeInfo_ThunderspearWeapon + 0x130)) ||
         (*(long *)(*(long *)(*(long *)_Var29.genericMethod + 200) + -8 + (long)_Var37.genericMethod * 8) !=
          TypeInfo_ThunderspearWeapon)) goto label_04299dc4;
      lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if (((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x28), lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0xc0), lVar12 == 0)) goto label_0429a1cb;
      if (*(char *)(lVar12 + 0x11) != '\0') {
        _Var36 = _Var35;
        auStack_120 = (undefined1  [8])_Var11;
      }
      *(undefined1 *)&in_RCX->vtable[0x1a].methodPtr = 0;
      _Var37 = _Var35;
      if (_Var30._0_4_ == 0) goto label_0429a1a8;
label_04299dd7:
      _Var37 = _Var35;
      if (_Var29.genericMethod == (Characters_Human_o *)0x0) {
label_04299e13:
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          _Stack_128 = (_union_249689)0x4299e2b;
          il2cpp_runtime_helper_02337ed0();
          auVar47._8_8_ = extraout_XMM1_Qb_01;
          auVar47._0_8_ = extraout_XMM1_Qa_01;
        }
        plVar38 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        ppIVar39 = (Il2CppClass **)&TypeInfo_UIManager;
        _Var29.genericMethod = (Characters_Human_o *)0x0;
        _Var30.genericMethod = _Var33.genericMethod;
        if (plVar38 == (long *)0x0) goto label_0429a1cb;
        in_RCX = (Il2CppClass *)(ulong)*(byte *)(TypeInfo_InGameMenu + 0x130);
        if ((*(byte *)(*plVar38 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar38 + 200) + -8 + (long)in_RCX * 8) != TypeInfo_InGameMenu)) {
          _Stack_128 = (_union_249689)0x429a87a;
          il2cpp_runtime_helper_022b2fd0();
          pIStack_150 = (Il2CppRGCTXData *)&TypeInfo_UIManager;
          _Stack_148 = _Var36;
          _Stack_140 = (_union_249689)__this_13;
          _Stack_138.genericMethod = _Var33.genericMethod;
          uStack_130 = uVar32;
          _Stack_128 = _Var31;
          if (g_data_057add0a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
            il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
            il2cpp_runtime_helper_023445d0();
            g_data_057add0a = '\x01';
          }
          pSVar57 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
          pIVar58 = (Il2CppType *)0x0;
          __this_14 = (Settings_InputKey_o *)0x0;
          fVar44 = *(float *)(plVar38 + 0xc);
          fVar45 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          *(float *)(plVar38 + 0xc) = fVar44 - fVar45;
          if (fVar44 - fVar45 <= 0.0) {
            if (plVar38[0xb] == 0) goto label_0429acc4;
            *(undefined4 *)(plVar38[0xb] + 0x210) = 0;
          }
          if ((plVar38[0xe] != 0) &&
             (pSVar9 = *(Settings_KeybindSetting_o **)(plVar38[0xe] + 0x50),
             pSVar9 != (Settings_KeybindSetting_o *)0x0)) {
            bVar18 = Settings_KeybindSetting__GetKey(pSVar9,0,(MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              fVar44 = *(float *)((long)plVar38 + 100);
              fVar45 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              *(float *)((long)plVar38 + 100) = fVar44 - fVar45;
              if (((plVar38[0xe] != 0) && (lVar24 = *(long *)(plVar38[0xe] + 0x50), lVar24 != 0)) &&
                 (pSVar13 = *(System_Collections_Generic_List_object__o **)(lVar24 + 0x10),
                 pSVar13 != (System_Collections_Generic_List_object__o *)0x0)) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_168,pSVar13,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator
                          );
                bVar43 = false;
                pSVar57 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_168._0_8_;
                pIVar58 = (Il2CppType *)auStack_168._8_8_;
                __this_14 = pSStack_158;
                while (__this_02.fields._8_8_ = pIVar58,
                      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar57,
                      __this_02.fields._current = (Il2CppObject *)__this_14,
                      bVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe78),
                      (char)bVar18 != '\0') {
                  if (__this_14 == (Settings_InputKey_o *)0x0) goto label_0429acba;
                  bVar18 = Settings_InputKey__IsWheel(__this_14,(MethodInfo *)0x0);
                  if ((char)bVar18 != '\0') {
                    bVar43 = true;
                  }
                }
                __this_03.fields._8_8_ = pIVar58;
                __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar57;
                __this_03.fields._current = (Il2CppObject *)__this_14;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe78);
                if (((plVar38[0xe] != 0) && (lVar24 = *(long *)(plVar38[0xe] + 0x50), lVar24 != 0)) &&
                   (pSVar13 = *(System_Collections_Generic_List_object__o **)(lVar24 + 0x10),
                   pSVar13 != (System_Collections_Generic_List_object__o *)0x0)) {
                  System_Collections_Generic_List_object___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_168,pSVar13,
                             MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
                  pSVar57 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_168._0_8_;
                  pIVar58 = (Il2CppType *)auStack_168._8_8_;
                  pSVar59 = pSStack_158;
                  __this_14 = pSStack_158;
                  if (!bVar43) {
label_0429ab54:
                    __this_05.fields._8_8_ = pIVar58;
                    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar57;
                    __this_05.fields._current = (Il2CppObject *)__this_14;
                    bVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       (__this_05,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe78);
                    if ((char)bVar18 != '\0') {
                      if (__this_14 == (Settings_InputKey_o *)0x0) goto label_0429acbf;
                      bVar18 = Settings_InputKey__IsWheel(__this_14,(MethodInfo *)0x0);
                      if ((char)bVar18 != '\0') goto code_r0x0429ab7d;
                      lVar24 = plVar38[0xb];
                      if (lVar24 == 0) goto label_0429acd8;
                      goto label_0429ab4d;
                    }
                    goto label_0429ab95;
                  }
label_0429aad4:
                  __this_04.fields._8_8_ = pIVar58;
                  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar57;
                  __this_04.fields._current = (Il2CppObject *)pSVar59;
                  bVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_04,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe78);
                  __this_14 = pSVar59;
                  if ((char)bVar18 != '\0') {
                    if (pSVar59 == (Settings_InputKey_o *)0x0) goto label_0429acbf;
                    bVar18 = Settings_InputKey__IsWheel(pSVar59,(MethodInfo *)0x0);
                    if ((char)bVar18 == '\0') goto label_0429ab10;
                    pSVar59 = __this_14;
                    if (0.0 < *(float *)((long)plVar38 + 100)) goto label_0429aad4;
                    lVar24 = plVar38[0xb];
                    if (lVar24 != 0) goto label_0429aacd;
label_0429ab90:
                    il2cpp_runtime_helper_022b2c90();
                  }
label_0429ab95:
                  __this_06.fields._8_8_ = pIVar58;
                  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar57;
                  __this_06.fields._current = (Il2CppObject *)__this_14;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_06,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe78);
                  goto label_0429aba7;
                }
              }
            }
            else {
              lVar24 = plVar38[0xb];
              if (lVar24 != 0) {
                if (*(char *)(lVar24 + 0x2f2) == '\0') {
                  *(undefined4 *)(lVar24 + 0x20c) = 0xbf800000;
                }
                *(int *)((long)plVar38 + 100) = (int)plVar38[0xd];
                lVar24 = plVar38[0xe];
                goto joined_r0x0429a991;
              }
            }
          }
label_0429acc4:
          il2cpp_runtime_helper_022b2c90();
label_0429acc9:
          il2cpp_runtime_helper_022b2c90();
label_0429acce:
          il2cpp_runtime_helper_022b2c90();
label_0429acd3:
          il2cpp_runtime_helper_022b2c90();
label_0429acd8:
          auVar56 = il2cpp_runtime_helper_022b2c90();
          if (auVar56._8_4_ == 1) {
            plVar25 = (long *)__cxa_begin_catch(auVar56._0_8_);
            lVar24 = *plVar25;
            __cxa_end_catch();
            __this_09.fields._8_8_ = pIVar58;
            __this_09.fields._list = (System_Collections_Generic_List_T__o *)pSVar57;
            __this_09.fields._current = (Il2CppObject *)__this_14;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_09,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe78);
            if (lVar24 == 0) {
label_0429aba7:
              lVar24 = plVar38[0xe];
joined_r0x0429a991:
              if (((lVar24 != 0) && (*(long *)(lVar24 + 0x58) != 0)) &&
                 (pSVar13 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar24 + 0x58) + 0x10),
                 pSVar13 != (System_Collections_Generic_List_object__o *)0x0)) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_168,pSVar13,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator
                          );
                pSVar57 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_168._0_8_;
                pIVar58 = (Il2CppType *)auStack_168._8_8_;
                __this_14 = pSStack_158;
label_0429ac10:
                pSVar59 = __this_14;
                __this_07.fields._8_8_ = pIVar58;
                __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar57;
                __this_07.fields._current = (Il2CppObject *)pSVar59;
                bVar18 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_07,(MethodInfo_321A1D0 *)&stack0xfffffffffffffe78);
                if ((char)bVar18 == '\0') {
                  __this_08.fields._8_8_ = pIVar58;
                  __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar57;
                  __this_08.fields._current = (Il2CppObject *)pSVar59;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_08,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe78);
                  return;
                }
                if (pSVar59 != (Settings_InputKey_o *)0x0) goto code_r0x0429ac2e;
                il2cpp_runtime_helper_022b2c90();
                __this_14 = pSVar59;
                goto label_0429acb5;
              }
              goto label_0429acc4;
            }
            il2cpp_runtime_helper_022fefe0(lVar24);
            __this_11.fields._8_8_ = pIVar58;
            __this_11.fields._list = (System_Collections_Generic_List_T__o *)pSVar57;
            __this_11.fields._current = (Il2CppObject *)__this_14;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_11,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe78);
          }
          else {
            __this_10.fields._8_8_ = pIVar58;
            __this_10.fields._list = (System_Collections_Generic_List_T__o *)pSVar57;
            __this_10.fields._current = (Il2CppObject *)__this_14;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_10,(MethodInfo_321A1C0 *)&stack0xfffffffffffffe78);
          }
          _Unwind_Resume(auVar56._0_8_);
        }
        _Var31 = (_union_249689)((_union_249689 *)(plVar38 + 0x19))->genericMethod;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          _Stack_128 = (_union_249689)0x4299e96;
          il2cpp_runtime_helper_02337ed0();
          auVar47._8_8_ = extraout_XMM1_Qb_02;
          auVar47._0_8_ = extraout_XMM1_Qa_02;
        }
        _Var37.genericMethod = (Characters_Human_o *)0x0;
        _Stack_128 = (_union_249689)0x4299ea2;
        _Var29 = _Var31;
        bVar18 = UnityEngine_Object__op_Inequality
                           (_Var31.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar18 == '\0') {
label_04299efc:
          ppIVar39 = _Var33.genericMethod;
          if ((*(long *)_Var33.genericMethod != 0) &&
             (_Var29 = (_union_249689)
                       ((_union_249689 *)(*(long *)_Var33.genericMethod + 0x100))->genericMethod,
             _Var29.genericMethod != (Characters_Human_o *)0x0)) {
            if ((*(byte *)(*(long *)_Var29.genericMethod + 0x130) < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
               (in_RCX = *(Il2CppClass **)(*(long *)_Var29.genericMethod + 200),
               *(long *)((long)in_RCX + (ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130) * 8 + -8) != TypeInfo_AHSSWeapon)) {
              _Stack_128 = (_union_249689)0x4299f59;
              (**(code **)(*(long *)_Var29.genericMethod + 0x1e8))
                        (_Var29.genericMethod,_Var36.genericMethod,
                         *(undefined8 *)(*(long *)_Var29.genericMethod + 0x1f0));
              auVar47._8_8_ = extraout_XMM1_Qb_03;
              auVar47._0_8_ = extraout_XMM1_Qa_03;
              in_RCX = *(Il2CppClass **)_Var33.genericMethod;
              _Var37 = _Var36;
              goto joined_r0x0429a3de;
            }
            if (_Var36.genericMethod != (Characters_Human_o *)0x0) {
              _Var37 = (_union_249689)0x143;
              _Stack_128 = (_union_249689)0x429a26f;
              _Var29 = _Var36;
              bVar18 = Settings_KeybindSetting__Contains_4101260(_Var36.genericMethod,0x143,(MethodInfo *)0x0)
              ;
              if ((char)bVar18 == '\0') {
label_0429a289:
                _Var37.genericMethod = (Characters_Human_o *)0x0;
                _Stack_128 = (_union_249689)0x429a295;
                _Var29 = _Var36;
                bVar18 = Settings_KeybindSetting__GetKeyUp(_Var36.genericMethod,0,(MethodInfo *)0x0);
                in_RCX = *(Il2CppClass **)_Var33.genericMethod;
                if ((in_RCX != (Il2CppClass *)0x0) &&
                   (_Var29 = (_union_249689)*(_union_249689 *)&(in_RCX->_2).element_size,
                   _Var29.genericMethod != (Characters_Human_o *)0x0)) {
                  in_RCX = *(Il2CppClass **)(*(long *)_Var29.genericMethod + 0x1f8);
                  if ((char)bVar18 == '\0') {
                    _Stack_128 = (_union_249689)0x429a322;
                    (*(code *)in_RCX)(_Var29.genericMethod,0,
                                      *(undefined8 *)(*(long *)_Var29.genericMethod + 0x200));
                    auVar47._8_8_ = extraout_XMM1_Qb_09;
                    auVar47._0_8_ = extraout_XMM1_Qa_09;
                    goto label_0429a322;
                  }
                  _Var37 = (_union_249689)0x1;
                  _Stack_128 = (_union_249689)0x429a2cd;
                  (*(code *)in_RCX)();
                  auVar47._8_8_ = extraout_XMM1_Qb_07;
                  auVar47._0_8_ = extraout_XMM1_Qa_07;
                  pUVar23 = *(UI_MessagePopup_o **)((long)__this_13 + 0x30);
                  if (pUVar23 != (UI_MessagePopup_o *)0x0) goto label_0429a2da;
                }
              }
              else {
                pUVar23 = *(UI_MessagePopup_o **)((long)__this_13 + 0x30);
                if (pUVar23 != (UI_MessagePopup_o *)0x0) {
                  if (*(char *)&pUVar23[2].monitor == '\0') goto label_0429a289;
label_0429a2da:
                  *(undefined1 *)&pUVar23[2].monitor = 0;
label_0429a322:
                  ppIVar39 = *(Il2CppClass ***)_Var33.genericMethod;
                  _Var37.genericMethod = (Characters_Human_o *)0x0;
                  _Stack_128 = (_union_249689)0x429a331;
                  bVar18 = Settings_KeybindSetting__GetKey(_Var36.genericMethod,0,(MethodInfo *)0x0);
                  uVar28 = (undefined7)((ulong)in_RCX >> 8);
                  in_RCX = (Il2CppClass *)CONCAT71(uVar28,1);
                  _Var29 = _Var36;
                  if ((char)bVar18 == '\0') {
                    if ((*(long *)_Var33.genericMethod == 0) ||
                       (lVar24 = *(long *)(*(long *)_Var33.genericMethod + 0x100), lVar24 == 0))
                    goto label_0429a1cb;
                    in_RCX = (Il2CppClass *)CONCAT71(uVar28,*(undefined1 *)(lVar24 + 0x1c));
                  }
                  if ((Characters_Human_o *)ppIVar39 != (Characters_Human_o *)0x0) {
                    *(char *)((long)ppIVar39 + 0x2d8) = (char)in_RCX;
                    in_RCX = *(Il2CppClass **)_Var33.genericMethod;
                    goto joined_r0x0429a3de;
                  }
                }
              }
            }
          }
        }
        else {
          ppIVar39 = _Var33.genericMethod;
          if (_Var31.genericMethod != (Characters_Human_o *)0x0) {
            _Var37.genericMethod = (Characters_Human_o *)0x0;
            _Stack_128 = (_union_249689)0x4299eb9;
            _Var29 = _Var31;
            bVar18 = UI_ChatPanel__IsPointerOverChatUI(_Var31.genericMethod,(MethodInfo *)0x0);
            if ((char)bVar18 == '\0') goto label_04299efc;
            if (*(long *)_Var33.genericMethod != 0) {
              plVar38 = *(long **)(*(long *)_Var33.genericMethod + 0x100);
              _Var29.genericMethod = (Characters_Human_o *)0x0;
              if (plVar38 != (long *)0x0) {
                vtableDispatch = *(code **)(*plVar38 + 0x1f8);
                (*vtableDispatch)(plVar38,0,*(undefined8 *)(*plVar38 + 0x200),vtableDispatch);
                return;
              }
            }
          }
        }
      }
      else {
        bVar40 = *(byte *)(*(long *)_Var29.genericMethod + 0x130);
        in_RCX = (Il2CppClass *)CONCAT71(0x55767,bVar40);
        _Var31._1_7_ = 0;
        _Var31._0_1_ = *(byte *)((long)TypeInfo_AmmoWeapon.genericMethod + 0x130);
        _Var37 = TypeInfo_AmmoWeapon;
        if (((bVar40 < *(byte *)((long)TypeInfo_AmmoWeapon.genericMethod + 0x130)) ||
            (lVar12 = *(long *)(*(long *)_Var29.genericMethod + 200),
            *(void **)(lVar12 + -8 + (long)_Var31.genericMethod * 8) != TypeInfo_AmmoWeapon.genericMethod)) ||
           (*(int *)((long)_Var29.genericMethod + 0x48) != 0)) goto label_04299e13;
        bVar41 = *(byte *)(lVar24 + 0x130);
        _Var37._1_7_ = 0;
        _Var37._0_1_ = bVar41;
        if ((bVar41 <= bVar40) && (*(long *)(lVar12 + -8 + (long)_Var37.genericMethod * 8) == lVar24)) {
          _Var37.genericMethod = (Characters_Human_o *)0x0;
          _Stack_128 = (_union_249689)0x429a393;
          bVar18 = Characters_ThunderspearWeapon__HasActiveProjectile(_Var29.genericMethod,(MethodInfo *)0x0);
          if ((char)bVar18 != '\0') goto label_04299e13;
        }
        _Var30.genericMethod = _Var33.genericMethod;
        if (_Var36.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        _Var37.genericMethod = (Characters_Human_o *)0x0;
        _Stack_128 = (_union_249689)0x429a3b0;
        bVar18 = Settings_KeybindSetting__GetKeyDown(_Var36.genericMethod,0,(MethodInfo *)0x0);
        _Var29 = _Var36;
        if ((char)bVar18 == '\0') {
label_0429a1bf:
          in_RCX = *(Il2CppClass **)_Var33.genericMethod;
        }
        else {
          _Var29.genericMethod = *(void **)_Var33.genericMethod;
          if (_Var29.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
          if (*(bool_conflict *)((long)_Var29.genericMethod + 0x158) != 0) goto label_0429a1bf;
          _Var37.genericMethod = (Characters_Human_o *)0x0;
          _Stack_128 = (_union_249689)0x429a3d8;
          Characters_Human__Reload(_Var29.genericMethod,(MethodInfo *)0x0);
          in_RCX = *(Il2CppClass **)_Var33.genericMethod;
        }
joined_r0x0429a3de:
        ppIVar39 = _Var33.genericMethod;
        _Var30.genericMethod = _Var33.genericMethod;
        if (in_RCX != (Il2CppClass *)0x0) {
          _Var31 = (_union_249689)*(_union_249689 *)&(in_RCX->_2).instance_size;
          if (_Var31.genericMethod == (Characters_Human_o *)0x0) goto joined_r0x0429a313;
          in_R10B = *(char *)((long)&in_RCX->vtable[0xb].methodPtr + 6);
          uVar19 = 0;
          if (in_R10B != '\0') {
            lVar24 = *(long *)_Var31.genericMethod;
            if (((((*(byte *)(TypeInfo_EscapeSpecial + 0x130) <= *(byte *)(lVar24 + 0x130)) &&
                  (*(long *)(*(long *)(lVar24 + 200) + -8 + (ulong)*(byte *)(TypeInfo_EscapeSpecial + 0x130) * 8) ==
                   TypeInfo_EscapeSpecial)) ||
                 ((*(byte *)(TypeInfo_ShifterTransformSpecial + 0x130) <= *(byte *)(lVar24 + 0x130) &&
                  (*(long *)(*(long *)(lVar24 + 200) + -8 + (ulong)*(byte *)(TypeInfo_ShifterTransformSpecial + 0x130) * 8) ==
                   TypeInfo_ShifterTransformSpecial)))) || (uVar19 = 0, *(int *)&in_RCX->vtable[2].methodPtr != 7)) &&
               (iVar1._0_2_ = (in_RCX->_2).method_count, iVar1._2_2_ = (in_RCX->_2).property_count, uVar19 = 0
               , iVar1 != 1)) {
              iVar1 = *(int *)&in_RCX->vtable[2].methodPtr;
              uVar19 = 0;
              if ((((iVar1 != 1) && (uVar19 = 0, iVar1 != 8)) && (uVar19 = 0, iVar1 != 9)) &&
                 (uVar19 = 0, cVar42 == '\0')) {
                uVar19 = *(byte *)&(in_RCX->_1).typeMetadataHandle ^ 1;
              }
            }
          }
          bVar40 = *(byte *)(*(long *)_Var31.genericMethod + 0x130);
          if (bVar40 < *(byte *)(TypeInfo_BaseHoldAttackSpecial + 0x130)) goto joined_r0x0429a068;
          _Var29 = (_union_249689)((_union_249689 *)(*(long *)_Var31.genericMethod + 200))->genericMethod;
          if (*(long *)((long)_Var29.genericMethod + (ulong)*(byte *)(TypeInfo_BaseHoldAttackSpecial + 0x130) * 8 + -8) ==
              TypeInfo_BaseHoldAttackSpecial) goto label_0429a1d0;
          goto joined_r0x0429a068;
        }
      }
    }
  }
label_0429a1cb:
  do {
    uVar19 = _Var37._0_4_;
    bVar40 = (byte)ppIVar39;
    _Stack_128 = (_union_249689)0x429a1d0;
    il2cpp_runtime_helper_022b2c90();
    _Var33 = _Var30;
label_0429a1d0:
    if ((in_R10B == '\0') || (iVar1 = *(int *)&in_RCX->vtable[2].methodPtr, iVar1 == 7)) {
joined_r0x0429a068:
      if (uVar19 != 0) goto label_0429a06e;
label_0429a233:
      _Var37.genericMethod = (Characters_Human_o *)0x0;
      _Stack_128 = (_union_249689)0x429a249;
      (**(code **)(*(long *)_Var31.genericMethod + 0x1f8))
                (_Var31.genericMethod,0,*(undefined8 *)(*(long *)_Var31.genericMethod + 0x200));
      auVar47._8_8_ = extraout_XMM1_Qb_06;
      auVar47._0_8_ = extraout_XMM1_Qa_06;
    }
    else {
      if (iVar1 == 8) {
label_0429a224:
        if (uVar19 == 0) goto label_0429a233;
      }
      else {
        if (iVar1 == 1) {
          if (bVar40 < *(byte *)(TypeInfo_StockSpecial + 0x130)) goto label_0429a224;
          if (*(long *)((long)_Var29.genericMethod + (ulong)*(byte *)(TypeInfo_StockSpecial + 0x130) * 8 + -8) !=
              TypeInfo_StockSpecial) goto joined_r0x0429a068;
        }
        iVar2._0_2_ = (in_RCX->_2).method_count;
        iVar2._2_2_ = (in_RCX->_2).property_count;
        if ((iVar2 == 1) || (cVar42 != '\0')) goto joined_r0x0429a068;
        if (uVar19 == 0 && *(char *)&(in_RCX->_1).typeMetadataHandle == '\x01') goto label_0429a233;
      }
label_0429a06e:
      lVar24 = *(long *)_Var31.genericMethod;
      bVar40 = (TypeInfo_AHSSTwinShot->_2).naturalAligment;
      in_RCX = TypeInfo_AHSSTwinShot;
      if ((*(byte *)(lVar24 + 0x130) < bVar40) ||
         (_Var37 = (_union_249689)((_union_249689 *)(lVar24 + 200))->genericMethod,
         *(Il2CppClass **)((long)_Var37.genericMethod + (ulong)bVar40 * 8 + -8) != TypeInfo_AHSSTwinShot)) {
        _Stack_128 = (_union_249689)0x429a0b1;
        _Var37 = (_union_249689)auStack_120;
        (**(code **)(lVar24 + 0x1e8))(_Var31.genericMethod,auStack_120,*(undefined8 *)(lVar24 + 0x1f0));
        auVar47._8_8_ = extraout_XMM1_Qb_04;
        auVar47._0_8_ = extraout_XMM1_Qa_04;
      }
      else {
        ppIVar39 = (Il2CppClass **)_Var33;
        _Var29.genericMethod = (Characters_Human_o *)0x0;
        _Var30 = _Var33;
        if (auStack_120 == (undefined1  [8])0x0) goto label_0429a1cb;
        _Stack_128 = (_union_249689)0x429a2f9;
        uVar19 = Settings_KeybindSetting__GetKeyUp
                           ((Settings_KeybindSetting_o *)auStack_120,0,(MethodInfo *)0x0);
        in_RCX = *(Il2CppClass **)_Var31.genericMethod;
        _Var37._0_4_ = uVar19 & 0xff;
        _Var37._4_4_ = 0;
        _Stack_128 = (_union_249689)0x429a310;
        (*in_RCX->vtable[0xc].methodPtr)(_Var31.genericMethod,_Var37.genericMethod,in_RCX->vtable[0xc].method)
        ;
        auVar47._8_8_ = extraout_XMM1_Qb_08;
        auVar47._0_8_ = extraout_XMM1_Qa_08;
      }
    }
joined_r0x0429a313:
    if (cVar42 != '\0') {
      return;
    }
    _Var29.genericMethod = *_Var33.genericMethod;
    ppIVar39 = (Il2CppClass **)_Var33;
    _Var30 = _Var33;
  } while (_Var29.genericMethod == (Characters_Human_o *)0x0);
  if (*(char *)((long)_Var29.genericMethod + 0x68) != '\0') {
    return;
  }
  if (*(bool_conflict *)((long)_Var29.genericMethod + 0x158) == 0xf) {
    return;
  }
  if (*(int *)((long)_Var29.genericMethod + 0x118) == 1) {
    if ((*(UI_ImportPopup_o **)((long)__this_13 + 0x70) != (UI_ImportPopup_o *)0x0) &&
       (_Var29 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_13 + 0x70))->fields)._topButtons,
       _Var29.genericMethod != (Characters_Human_o *)0x0)) {
      _Var37.genericMethod = (Characters_Human_o *)0x0;
      _Stack_128 = (_union_249689)0x429a40c;
      bVar18 = Settings_KeybindSetting__GetKeyDown(_Var29.genericMethod,0,(MethodInfo *)0x0);
      if ((char)bVar18 == '\0') {
label_0429a429:
        if ((*(UI_ImportPopup_o **)((long)__this_13 + 0x70) == (UI_ImportPopup_o *)0x0) ||
           (_Var29 = (_union_249689)
                     ((*(UI_ImportPopup_o **)((long)__this_13 + 0x70))->fields)._staticTransforms,
           _Var29.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
        _Var37.genericMethod = (Characters_Human_o *)0x0;
        _Stack_128 = (_union_249689)0x429a44f;
        bVar18 = Settings_KeybindSetting__GetKeyDown(_Var29.genericMethod,0,(MethodInfo *)0x0);
        if ((char)bVar18 == '\0') goto label_0429a6a6;
        if ((*(long *)_Var33.genericMethod == 0) ||
           (_Var29 = (_union_249689)((_union_249689 *)(*(long *)_Var33.genericMethod + 0x120))->genericMethod,
           _Var29.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
        _Var37.genericMethod = (Characters_Human_o *)0x0;
        _Stack_128 = (_union_249689)0x429a47a;
        Characters_Horse__Jump(_Var29.genericMethod,(MethodInfo *)0x0);
        lVar24 = *(long *)_Var33.genericMethod;
      }
      else {
        _Var29.genericMethod = *_Var33.genericMethod;
        if (_Var29.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        if (*(bool_conflict *)((long)_Var29.genericMethod + 0x158) != 0) goto label_0429a429;
        _Var37.genericMethod = (Characters_Human_o *)0x0;
        _Stack_128 = (_union_249689)0x429a6a6;
        Characters_Human__Unmount(_Var29.genericMethod,0,(MethodInfo *)0x0);
label_0429a6a6:
        lVar24 = *(long *)_Var33.genericMethod;
      }
      if (lVar24 != 0) {
        if (*(int *)(lVar24 + 0x158) != 0) {
          return;
        }
        if (*(char *)(lVar24 + 0x1ee) == '\0') {
          return;
        }
        if (*(UI_ImportPopup_o **)((long)__this_13 + 0x70) != (UI_ImportPopup_o *)0x0) {
          pSVar9 = (Settings_KeybindSetting_o *)
                   ((*(UI_ImportPopup_o **)((long)__this_13 + 0x70))->fields).TopBar;
          _Var29.genericMethod = (Characters_Human_o *)0x0;
          if (pSVar9 != (Settings_KeybindSetting_o *)0x0) {
            _Var37.genericMethod = (Characters_Human_o *)0x0;
            _Stack_128 = (_union_249689)0x429a6f6;
            bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar9,0,(MethodInfo *)0x0);
            if ((char)bVar18 == '\0') {
              return;
            }
            _Var29.genericMethod = (Characters_Human_o *)0x0;
            if (*(Characters_Human_o **)_Var33.genericMethod != (Characters_Human_o *)0x0) {
              Characters_Human__Reload(*(Characters_Human_o **)_Var33.genericMethod,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    goto label_0429a1cb;
  }
  if (*(int *)((long)_Var29.genericMethod + 0x118) != 0) {
    return;
  }
  _Var37.genericMethod = (Characters_Human_o *)0x0;
  _Stack_128 = (_union_249689)0x429a0fb;
  bVar18 = Characters_Human__CanJump(_Var29.genericMethod,(MethodInfo *)0x0);
  if ((char)bVar18 != '\0') {
    if ((*(UI_ImportPopup_o **)((long)__this_13 + 0x70) == (UI_ImportPopup_o *)0x0) ||
       (_Var29 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_13 + 0x70))->fields).BottomBar,
       _Var29.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
    _Var37.genericMethod = (Characters_Human_o *)0x0;
    _Stack_128 = (_union_249689)0x429a126;
    bVar18 = Settings_KeybindSetting__GetKeyDown(_Var29.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar18 != '\0') {
      _Var29.genericMethod = *_Var33.genericMethod;
      if (_Var29.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
      _Var37.genericMethod = (Characters_Human_o *)0x0;
      _Stack_128 = (_union_249689)0x429a141;
      Characters_Human__Jump(_Var29.genericMethod,(MethodInfo *)0x0);
      lVar24 = *(long *)_Var33.genericMethod;
      goto joined_r0x0429a592;
    }
    if ((*(UI_ImportPopup_o **)((long)__this_13 + 0x70) == (UI_ImportPopup_o *)0x0) ||
       (_Var29 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_13 + 0x70))->fields)._topButtons,
       _Var29.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
    _Var37.genericMethod = (Characters_Human_o *)0x0;
    _Stack_128 = (_union_249689)0x429a4e1;
    bVar18 = Settings_KeybindSetting__GetKeyDown(_Var29.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar18 != '\0') {
      if (*(long *)_Var33.genericMethod == 0) goto label_0429a1cb;
      _Var31 = (_union_249689)((_union_249689 *)(*(long *)_Var33.genericMethod + 0x120))->genericMethod;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        _Stack_128 = (_union_249689)0x429a510;
        il2cpp_runtime_helper_02337ed0();
        auVar47._8_8_ = extraout_XMM1_Qb_10;
        auVar47._0_8_ = extraout_XMM1_Qa_10;
      }
      _Var37.genericMethod = (Characters_Human_o *)0x0;
      _Stack_128 = (_union_249689)0x429a51c;
      _Var29 = _Var31;
      bVar18 = UnityEngine_Object__op_Inequality
                         (_Var31.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        lVar24 = *(long *)_Var33.genericMethod;
        if (lVar24 == 0) goto label_0429a1cb;
        if (*(int *)(lVar24 + 0x118) == 0) {
          if (((*(long *)(lVar24 + 0x120) == 0) ||
              (lVar24 = *(long *)(*(long *)(lVar24 + 0x120) + 0x70), lVar24 == 0)) ||
             (_Var29 = (_union_249689)((_union_249689 *)(lVar24 + 0x10))->genericMethod,
             _Var29.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
          _Var37.genericMethod = (Characters_Human_o *)0x0;
          _Stack_128 = (_union_249689)0x429a74c;
          UVar55 = UnityEngine_Transform__get_position(_Var29.genericMethod,(MethodInfo *)0x0);
          auVar48._4_12_ = auVar47._4_12_;
          auVar48._0_4_ = UVar55.fields.z;
          if ((*(long *)_Var33.genericMethod == 0) ||
             (lVar24 = *(long *)(*(long *)_Var33.genericMethod + 0x70), lVar24 == 0)) goto label_0429a1cb;
          uStack_108 = extraout_XMM0_Dc;
          auStack_110 = UVar55.fields._0_8_;
          uStack_104 = extraout_XMM0_Dd;
          pUVar8 = *(UnityEngine_Transform_o **)(lVar24 + 0x10);
          _Var29.genericMethod = (Characters_Human_o *)0x0;
          _auStack_120 = auVar48;
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_0429a1cb;
          _Var37.genericMethod = (Characters_Human_o *)0x0;
          _Stack_128 = (_union_249689)0x429a782;
          UVar55 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
          auVar49._4_12_ = auVar48._4_12_;
          auVar49._0_4_ = UVar55.fields.z;
          fVar44 = UVar55.fields.x;
          fVar45 = UVar55.fields.y;
          uVar46 = auVar49._0_8_;
          if (g_data_057a68cb == '\0') {
            auStack_100._8_4_ = extraout_XMM0_Dc_00;
            auStack_100._0_8_ = UVar55.fields._0_8_;
            auStack_100._12_4_ = extraout_XMM0_Dd_00;
            _Stack_128 = (_union_249689)0x429a7a1;
            auStack_f0 = auVar49;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
            fVar44 = (float)auStack_100._0_4_;
            fVar45 = (float)auStack_100._4_4_;
            uVar46 = auStack_f0._0_8_;
          }
          auVar50._4_4_ = auStack_110._4_4_;
          auVar50._0_4_ = auStack_110._4_4_;
          auVar50._8_4_ = uStack_108;
          auVar50._12_4_ = uStack_104;
          auVar51._4_12_ = auVar50._4_12_;
          auVar51._0_4_ = (float)auStack_110._4_4_ - fVar45;
          fVar52 = (float)auStack_120._0_4_ - (float)uVar46;
          fVar54 = (float)auStack_120._4_4_ - (float)((ulong)uVar46 >> 0x20);
          _Var29 = TypeInfo_Math;
          fVar53 = (float)auStack_110._0_4_ - fVar44;
          if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
            auStack_120._4_4_ = (float)auStack_110._0_4_ - fVar44;
            auStack_120._0_4_ = fVar52;
            fStack_118 = fVar54;
            fStack_114 = (float)auStack_110._4_4_ - fVar45;
            _Stack_128 = (_union_249689)0x429a7f1;
            _auStack_110 = auVar51;
            il2cpp_runtime_helper_02337ed0();
            auVar51 = _auStack_110;
            fVar52 = (float)auStack_120._0_4_;
            fVar53 = (float)auStack_120._4_4_;
          }
          fVar44 = fVar53 * fVar53 + auVar51._0_4_ * auVar51._0_4_ + fVar52 * fVar52;
          if (fVar44 < 0.0) {
            _Stack_128 = (_union_249689)0x429a833;
            fVar44 = sqrtf(fVar44);
          }
          else {
            fVar44 = SQRT(fVar44);
          }
          if (fVar44 < 15.0) {
            _Var29.genericMethod = *_Var33.genericMethod;
            if (_Var29.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
            if (*(char *)((long)_Var29.genericMethod + 0xcc) == '\0') {
              _Var37.genericMethod = (Characters_Human_o *)0x0;
              _Stack_128 = (_union_249689)0x429a864;
              Characters_Human__MountHorse(_Var29.genericMethod,(MethodInfo *)0x0);
              lVar24 = *(long *)_Var33.genericMethod;
              goto joined_r0x0429a592;
            }
          }
        }
      }
    }
    if ((*(UI_ImportPopup_o **)((long)__this_13 + 0x70) == (UI_ImportPopup_o *)0x0) ||
       (_Var29 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_13 + 0x70))->fields).Parent,
       _Var29.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
    _Var37.genericMethod = (Characters_Human_o *)0x0;
    _Stack_128 = (_union_249689)0x429a55c;
    bVar18 = Settings_KeybindSetting__GetKeyDown(_Var29.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar18 != '\0') {
      _Var29.genericMethod = *_Var33.genericMethod;
      if (_Var29.genericMethod != (Characters_Human_o *)0x0) {
        fVar44 = *(float *)((long)_Var29.genericMethod + 200);
        if (*(char *)((long)_Var29.genericMethod + 0xcc) != '\0') {
          fVar44 = fVar44 + 180.0;
        }
        _Var37.genericMethod = (Characters_Human_o *)0x0;
        _Stack_128 = (_union_249689)0x429a58c;
        Characters_Human__Dodge(_Var29.genericMethod,fVar44,(MethodInfo *)0x0);
        goto label_0429a58c;
      }
      goto label_0429a1cb;
    }
  }
label_0429a58c:
  lVar24 = *(long *)_Var33.genericMethod;
joined_r0x0429a592:
  if (lVar24 != 0) {
    if (*(int *)(lVar24 + 0x158) == 0) {
      if ((*(UI_ImportPopup_o **)((long)__this_13 + 0x70) == (UI_ImportPopup_o *)0x0) ||
         (_Var29 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_13 + 0x70))->fields).TopBar,
         _Var29.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
      _Var37.genericMethod = (Characters_Human_o *)0x0;
      _Stack_128 = (_union_249689)0x429a5c4;
      bVar18 = Settings_KeybindSetting__GetKeyDown(_Var29.genericMethod,0,(MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        _Var29.genericMethod = *_Var33.genericMethod;
        if (_Var29.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        _Var37.genericMethod = (Characters_Human_o *)0x0;
        _Stack_128 = (_union_249689)0x429a5db;
        Characters_Human__Reload(_Var29.genericMethod,(MethodInfo *)0x0);
      }
    }
    if (*(long *)_Var33.genericMethod != 0) {
      if (*(int *)(*(long *)_Var33.genericMethod + 0x11c) != 1) {
        return;
      }
      if ((*(UI_ImportPopup_o **)((long)__this_13 + 0x70) != (UI_ImportPopup_o *)0x0) &&
         (_Var29 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_13 + 0x70))->fields)._topButtons,
         _Var29.genericMethod != (Characters_Human_o *)0x0)) {
        _Var37.genericMethod = (Characters_Human_o *)0x0;
        _Stack_128 = (_union_249689)0x429a617;
        bVar18 = Settings_KeybindSetting__GetKeyDown(_Var29.genericMethod,0,(MethodInfo *)0x0);
        if ((char)bVar18 == '\0') {
          return;
        }
        if ((*(long *)_Var33.genericMethod != 0) &&
           (lVar24 = *(long *)(*(long *)_Var33.genericMethod + 0x70), lVar24 != 0)) {
          __this_01 = *(Photon_Pun_PhotonView_o **)(lVar24 + 0x20);
          _Var37.genericMethod = (Characters_Human_o *)0x0;
          _Stack_128 = (_union_249689)0x429a64d;
          _Var29 = TypeInfo_object;
          parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
          ppIVar39 = (Il2CppClass **)(Characters_Human_o *)0x0;
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_01,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  goto label_0429a1cb;
code_r0x0429ab7d:
  if (*(float *)((long)plVar38 + 100) <= 0.0) {
    lVar24 = plVar38[0xb];
    if (lVar24 == 0) goto label_0429ab90;
label_0429ab4d:
    *(undefined1 *)(lVar24 + 0x2f2) = 0;
  }
  goto label_0429ab54;
label_0429ab10:
  bVar18 = Settings_InputKey__GetKeyUp(pSVar59,(MethodInfo *)0x0);
  pSVar59 = __this_14;
  if ((char)bVar18 != '\0') {
    lVar24 = plVar38[0xb];
    if (lVar24 == 0) goto label_0429acd8;
label_0429aacd:
    *(undefined1 *)(lVar24 + 0x2f2) = 0;
    pSVar59 = __this_14;
  }
  goto label_0429aad4;
code_r0x0429ac2e:
  __this_14 = pSVar59;
  bVar18 = Settings_InputKey__GetKey(pSVar59,(MethodInfo *)0x0);
  if ((char)bVar18 == '\0') goto label_0429ac10;
  if (plVar38[0xb] != 0) {
    *(undefined4 *)(plVar38[0xb] + 0x210) = 0x3f800000;
    bVar18 = Settings_InputKey__IsWheel(pSVar59,(MethodInfo *)0x0);
    if ((char)bVar18 == '\0') goto label_0429ac10;
    lVar24 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (lVar24 == 0) goto label_0429acc9;
    lVar24 = *(long *)(lVar24 + 0x28);
    if (lVar24 == 0) goto label_0429acce;
    lVar24 = *(long *)(lVar24 + 0xb8);
    if (lVar24 != 0) {
      *(undefined4 *)(plVar38 + 0xc) = *(undefined4 *)(lVar24 + 0x14);
      goto label_0429ac10;
    }
    goto label_0429acd3;
  }
label_0429acb5:
  il2cpp_runtime_helper_022b2c90();
label_0429acba:
  il2cpp_runtime_helper_022b2c90();
label_0429acbf:
  il2cpp_runtime_helper_022b2c90();
  goto label_0429acc4;
}


// Controllers.HumanPlayerController$$TestScore
// il2cpp: void Controllers_HumanPlayerController__TestScore (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x4299ae0

void Controllers_HumanPlayerController__TestScore
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_HumanInputSettings_o *pSVar3;
  UI_InGameMenu_o *pUVar4;
  Settings_KeybindSetting_o *pSVar5;
  UI_RoleSpritePickPopup_o *pUVar6;
  UI_ImportPopup_o *pUVar7;
  _union_249689 _Var8;
  long lVar9;
  System_Collections_Generic_List_BasePopup__o *pSVar10;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Transform_o *pUVar11;
  Photon_Pun_PhotonView_o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar12;
  System_Collections_Generic_List_object__o *pSVar13;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  bool bVar14;
  bool_conflict bVar15;
  uint uVar16;
  UI_MessagePopup_o *pUVar17;
  System_Object_array *parameters;
  long lVar18;
  long *plVar19;
  UI_RoleSpritePickPopup_o *in_RCX;
  undefined7 uVar20;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  byte bVar21;
  _union_249689 __this_11;
  System_String_o *pSVar22;
  _union_249689 _Var23;
  _union_249689 _Var24;
  _union_249689 _Var25;
  System_String_o **__this_12;
  _union_249689 _Var26;
  long *plVar27;
  char in_R10B;
  _union_249689 *p_Var28;
  _union_249689 *p_Var29;
  char cVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qa_10;
  undefined8 uVar34;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 extraout_XMM1_Qb_07;
  undefined8 extraout_XMM1_Qb_08;
  undefined8 extraout_XMM1_Qb_09;
  undefined8 extraout_XMM1_Qb_10;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  UnityEngine_Vector3_o UVar43;
  undefined1 auVar44 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar45;
  Il2CppType *pIVar46;
  Settings_InputKey_o *__this_13;
  Settings_InputKey_o *pSVar47;
  undefined1 auStack_c8 [16];
  Settings_InputKey_o *pSStack_b8;
  Il2CppRGCTXData *pIStack_b0;
  _union_249689 _Stack_a8;
  _union_249689 _Stack_a0;
  _union_249689 *p_Stack_98;
  ulong uStack_90;
  _union_249689 _Stack_88;
  undefined1 local_80 [8];
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [8];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  Controllers_HumanPlayerController_o *pCStack_38;
  undefined1 auVar35 [16];
  
  uVar16 = (uint)method;
  __this_12 = (System_String_o **)__this;
  if (g_data_057add07 == '\0') {
    il2cpp_runtime_helper_023445d0(&"test");
    __this_12 = &"Thunderspear";
    il2cpp_runtime_helper_023445d0();
    g_data_057add07 = '\x01';
  }
  pSVar3 = (__this->fields)._humanInput;
  if ((pSVar3 != (Settings_HumanInputSettings_o *)0x0) &&
     (__this_12 = (System_String_o **)(pSVar3->fields).HookLeft,
     (Characters_Human_o *)__this_12 != (Characters_Human_o *)0x0)) {
    uVar16 = 0;
    bVar15 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)__this_12,0,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
label_04299b7b:
      pSVar3 = (__this->fields)._humanInput;
      if (pSVar3 != (Settings_HumanInputSettings_o *)0x0) {
        pSVar5 = (pSVar3->fields).HookRight;
        __this_12 = (System_String_o **)0x0;
        if (pSVar5 != (Settings_KeybindSetting_o *)0x0) {
          uVar16 = 0;
          bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar5,0,(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            return;
          }
          pUVar4 = (__this->fields)._inGameMenu;
          __this_12 = (System_String_o **)0x0;
          if (pUVar4 != (UI_InGameMenu_o *)0x0) {
            in_RCX = (UI_RoleSpritePickPopup_o *)0xbb8;
            pSVar22 = "test";
            UI_InGameMenu__ShowKillFeed(pUVar4,"test","test",3000,"Thunderspear",(MethodInfo *)0x0);
            uVar16 = (uint)pSVar22;
            pUVar4 = (__this->fields)._inGameMenu;
            __this_12 = (System_String_o **)0x0;
            if (pUVar4 != (UI_InGameMenu_o *)0x0) {
              UI_InGameMenu__ShowKillScore(pUVar4,3000,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else {
      pUVar4 = (__this->fields)._inGameMenu;
      __this_12 = (System_String_o **)0x0;
      if (pUVar4 != (UI_InGameMenu_o *)0x0) {
        in_RCX = (UI_RoleSpritePickPopup_o *)&g_data_00000064;
        pSVar22 = "test";
        UI_InGameMenu__ShowKillFeed(pUVar4,"test","test",100,"Thunderspear",(MethodInfo *)0x0);
        uVar16 = (uint)pSVar22;
        __this_12 = (System_String_o **)(__this->fields)._inGameMenu;
        if ((Characters_Human_o *)__this_12 != (Characters_Human_o *)0x0) {
          uVar16 = 100;
          in_RCX = (UI_RoleSpritePickPopup_o *)0x0;
          UI_InGameMenu__ShowKillScore((UI_InGameMenu_o *)__this_12,100,0,(MethodInfo *)0x0);
          goto label_04299b7b;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  auVar35._8_8_ = extraout_XMM1_Qb;
  auVar35._0_8_ = extraout_XMM1_Qa;
  uVar31 = (ulong)uVar16;
  method_00 = extraout_RDX;
  pCStack_38 = __this;
  if (g_data_057add08 == '\0') {
    _Stack_88 = (_union_249689)0x4299c1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot);
    _Stack_88 = (_union_249689)0x4299c29;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    _Stack_88 = (_union_249689)0x4299c35;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
    _Stack_88 = (_union_249689)0x4299c41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseHoldAttackSpecial);
    _Stack_88 = (_union_249689)0x4299c4d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EscapeSpecial);
    _Stack_88 = (_union_249689)0x4299c59;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    _Stack_88 = (_union_249689)0x4299c65;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    _Stack_88 = (_union_249689)0x4299c71;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    _Stack_88 = (_union_249689)0x4299c7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    _Stack_88 = (_union_249689)0x4299c89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    _Stack_88 = (_union_249689)0x4299c95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterTransformSpecial);
    _Stack_88 = (_union_249689)0x4299ca1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    _Stack_88 = (_union_249689)0x4299cad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    _Stack_88 = (_union_249689)0x4299cb9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    _Stack_88 = (_union_249689)0x4299cc5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    _Stack_88 = (_union_249689)0x4299cd1;
    il2cpp_runtime_helper_023445d0(&"UncarryRPC");
    auVar35._8_8_ = extraout_XMM1_Qb_00;
    auVar35._0_8_ = extraout_XMM1_Qa_00;
    g_data_057add08 = '\x01';
    method_00 = extraout_RDX_00;
  }
  cVar30 = (char)uVar16;
  __this_11.genericMethod = (void *)(uVar31 & 0xff);
  _Stack_88 = (_union_249689)0x4299ce6;
  bVar15 = __this_11._0_4_;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this_12,bVar15,method_00);
  _Stack_88 = (_union_249689)0x4299cf0;
  Controllers_HumanPlayerController__UpdateHookInput
            ((Controllers_HumanPlayerController_o *)__this_12,bVar15,method_01);
  p_Var28 = (_union_249689 *)0x0;
  _Stack_88 = (_union_249689)0x4299cfd;
  Controllers_HumanPlayerController__UpdateReelInput
            ((Controllers_HumanPlayerController_o *)__this_12,0,method_02);
  _Stack_88 = (_union_249689)0x4299d07;
  _Var25.genericMethod = __this_11.genericMethod;
  _Var26 = (_union_249689)__this_12;
  Controllers_HumanPlayerController__UpdateDashInput
            ((Controllers_HumanPlayerController_o *)__this_12,bVar15,method_03);
  pUVar6 = *(UI_RoleSpritePickPopup_o **)((long)__this_12 + 0x58);
  if (pUVar6 != (UI_RoleSpritePickPopup_o *)0x0) {
    p_Var29 = (_union_249689 *)((long)__this_12 + 0x58);
    __this = (Controllers_HumanPlayerController_o *)p_Var29;
    if (*(char *)((long)&pUVar6[2].fields.MaskBackground + 6) != '\0') {
      _Var26 = (_union_249689)((_union_249689 *)((long)__this_12 + 0x88))->genericMethod;
      if (_Var26.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
      uVar16 = pUVar6[1].fields.IsActive;
      _Var25._4_4_ = 0;
      _Var25._0_4_ = uVar16;
      _Stack_88 = (_union_249689)0x4299d46;
      bVar15 = System_Collections_Generic_HashSet_Int32Enum___Contains
                         (_Var26.genericMethod,uVar16,MethodInfo_Boolean_Contains);
      if (((char)bVar15 == '\0') && (cVar30 == '\0')) {
        if (p_Var29->genericMethod == (UI_RoleSpritePickPopup_o *)0x0) goto label_0429a1cb;
        p_Var28 = (_union_249689 *)(ulong)(*(byte *)&(p_Var29->genericMethod->fields).BottomBar ^ 1);
      }
    }
    lVar18 = TypeInfo_ThunderspearWeapon;
    pUVar7 = *(UI_ImportPopup_o **)((long)__this_12 + 0x70);
    if ((pUVar7 != (UI_ImportPopup_o *)0x0) &&
       (in_RCX = p_Var29->genericMethod, in_RCX != (UI_RoleSpritePickPopup_o *)0x0)) {
      _Var8 = (_union_249689)(pUVar7->fields).SinglePanel;
      _Var23 = (_union_249689)(pUVar7->fields).DoublePanelLeft;
      local_80 = (undefined1  [8])_Var23.genericMethod;
      _Var26 = (_union_249689)in_RCX[1].fields._popups;
      _Var24 = _Var8;
      if (_Var26.genericMethod == (Characters_Human_o *)0x0) {
label_04299dc4:
        _Var23 = _Var25;
        *(undefined1 *)&in_RCX[3].fields._currentAnimationValue = 0;
        _Var25 = _Var23;
        if ((int)p_Var28 != 0) goto label_04299dd7;
label_0429a1a8:
        p_Var28 = p_Var29;
        if (_Var26.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        _Var25.genericMethod = (Characters_Human_o *)0x0;
        _Stack_88 = (_union_249689)0x429a1bf;
        (**(code **)(*(long *)_Var26.genericMethod + 0x1f8))
                  (_Var26.genericMethod,0,*(undefined8 *)(*(long *)_Var26.genericMethod + 0x200));
        auVar35._8_8_ = extraout_XMM1_Qb_05;
        auVar35._0_8_ = extraout_XMM1_Qa_05;
        goto label_0429a1bf;
      }
      _Var25._1_7_ = 0;
      _Var25._0_1_ = *(byte *)(TypeInfo_ThunderspearWeapon + 0x130);
      if ((*(byte *)(*(long *)_Var26.genericMethod + 0x130) < *(byte *)(TypeInfo_ThunderspearWeapon + 0x130)) ||
         (*(long *)(*(long *)(*(long *)_Var26.genericMethod + 200) + -8 + (long)_Var25.genericMethod * 8) !=
          TypeInfo_ThunderspearWeapon)) goto label_04299dc4;
      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x28), lVar9 == 0)) ||
         (lVar9 = *(long *)(lVar9 + 0xc0), lVar9 == 0)) goto label_0429a1cb;
      if (*(char *)(lVar9 + 0x11) != '\0') {
        _Var24 = _Var23;
        local_80 = (undefined1  [8])_Var8;
      }
      *(undefined1 *)&in_RCX[3].fields._currentAnimationValue = 0;
      _Var25 = _Var23;
      if ((int)p_Var28 == 0) goto label_0429a1a8;
label_04299dd7:
      _Var25 = _Var23;
      if (_Var26.genericMethod == (Characters_Human_o *)0x0) {
label_04299e13:
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          _Stack_88 = (_union_249689)0x4299e2b;
          il2cpp_runtime_helper_02337ed0();
          auVar35._8_8_ = extraout_XMM1_Qb_01;
          auVar35._0_8_ = extraout_XMM1_Qa_01;
        }
        plVar27 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        __this = (Controllers_HumanPlayerController_o *)&TypeInfo_UIManager;
        _Var26.genericMethod = (Characters_Human_o *)0x0;
        p_Var28 = p_Var29;
        if (plVar27 == (long *)0x0) goto label_0429a1cb;
        in_RCX = (UI_RoleSpritePickPopup_o *)(ulong)*(byte *)(TypeInfo_InGameMenu + 0x130);
        if ((*(byte *)(*plVar27 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar27 + 200) + -8 + (long)in_RCX * 8) != TypeInfo_InGameMenu)) {
          _Stack_88 = (_union_249689)0x429a87a;
          il2cpp_runtime_helper_022b2fd0();
          pIStack_b0 = (Il2CppRGCTXData *)&TypeInfo_UIManager;
          _Stack_a8 = _Var24;
          _Stack_a0 = (_union_249689)__this_12;
          p_Stack_98 = p_Var29;
          uStack_90 = uVar31;
          _Stack_88 = __this_11;
          if (g_data_057add0a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
            il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
            il2cpp_runtime_helper_023445d0();
            g_data_057add0a = '\x01';
          }
          pSVar45 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
          pIVar46 = (Il2CppType *)0x0;
          __this_13 = (Settings_InputKey_o *)0x0;
          fVar32 = *(float *)(plVar27 + 0xc);
          fVar33 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          *(float *)(plVar27 + 0xc) = fVar32 - fVar33;
          if (fVar32 - fVar33 <= 0.0) {
            if (plVar27[0xb] == 0) goto label_0429acc4;
            *(undefined4 *)(plVar27[0xb] + 0x210) = 0;
          }
          if ((plVar27[0xe] != 0) &&
             (pSVar5 = *(Settings_KeybindSetting_o **)(plVar27[0xe] + 0x50),
             pSVar5 != (Settings_KeybindSetting_o *)0x0)) {
            bVar15 = Settings_KeybindSetting__GetKey(pSVar5,0,(MethodInfo *)0x0);
            if ((char)bVar15 == '\0') {
              fVar32 = *(float *)((long)plVar27 + 100);
              fVar33 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              *(float *)((long)plVar27 + 100) = fVar32 - fVar33;
              if (((plVar27[0xe] != 0) && (lVar18 = *(long *)(plVar27[0xe] + 0x50), lVar18 != 0)) &&
                 (pSVar13 = *(System_Collections_Generic_List_object__o **)(lVar18 + 0x10),
                 pSVar13 != (System_Collections_Generic_List_object__o *)0x0)) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c8,pSVar13,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator)
                ;
                bVar14 = false;
                pSVar45 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c8._0_8_;
                pIVar46 = (Il2CppType *)auStack_c8._8_8_;
                __this_13 = pSStack_b8;
                while (__this_01.fields._8_8_ = pIVar46,
                      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar45,
                      __this_01.fields._current = (Il2CppObject *)__this_13,
                      bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18),
                      (char)bVar15 != '\0') {
                  if (__this_13 == (Settings_InputKey_o *)0x0) goto label_0429acba;
                  bVar15 = Settings_InputKey__IsWheel(__this_13,(MethodInfo *)0x0);
                  if ((char)bVar15 != '\0') {
                    bVar14 = true;
                  }
                }
                __this_02.fields._8_8_ = pIVar46;
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
                __this_02.fields._current = (Il2CppObject *)__this_13;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
                if (((plVar27[0xe] != 0) && (lVar18 = *(long *)(plVar27[0xe] + 0x50), lVar18 != 0)) &&
                   (pSVar13 = *(System_Collections_Generic_List_object__o **)(lVar18 + 0x10),
                   pSVar13 != (System_Collections_Generic_List_object__o *)0x0)) {
                  System_Collections_Generic_List_object___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c8,pSVar13,
                             MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
                  pSVar45 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c8._0_8_;
                  pIVar46 = (Il2CppType *)auStack_c8._8_8_;
                  pSVar47 = pSStack_b8;
                  __this_13 = pSStack_b8;
                  if (!bVar14) {
label_0429ab54:
                    __this_04.fields._8_8_ = pIVar46;
                    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
                    __this_04.fields._current = (Il2CppObject *)__this_13;
                    bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
                    if ((char)bVar15 != '\0') {
                      if (__this_13 == (Settings_InputKey_o *)0x0) goto label_0429acbf;
                      bVar15 = Settings_InputKey__IsWheel(__this_13,(MethodInfo *)0x0);
                      if ((char)bVar15 != '\0') goto code_r0x0429ab7d;
                      lVar18 = plVar27[0xb];
                      if (lVar18 == 0) goto label_0429acd8;
                      goto label_0429ab4d;
                    }
                    goto label_0429ab95;
                  }
label_0429aad4:
                  __this_03.fields._8_8_ = pIVar46;
                  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
                  __this_03.fields._current = (Il2CppObject *)pSVar47;
                  bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
                  __this_13 = pSVar47;
                  if ((char)bVar15 != '\0') {
                    if (pSVar47 == (Settings_InputKey_o *)0x0) goto label_0429acbf;
                    bVar15 = Settings_InputKey__IsWheel(pSVar47,(MethodInfo *)0x0);
                    if ((char)bVar15 == '\0') goto label_0429ab10;
                    pSVar47 = __this_13;
                    if (0.0 < *(float *)((long)plVar27 + 100)) goto label_0429aad4;
                    lVar18 = plVar27[0xb];
                    if (lVar18 != 0) goto label_0429aacd;
label_0429ab90:
                    il2cpp_runtime_helper_022b2c90();
                  }
label_0429ab95:
                  __this_05.fields._8_8_ = pIVar46;
                  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
                  __this_05.fields._current = (Il2CppObject *)__this_13;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
                  goto label_0429aba7;
                }
              }
            }
            else {
              lVar18 = plVar27[0xb];
              if (lVar18 != 0) {
                if (*(char *)(lVar18 + 0x2f2) == '\0') {
                  *(undefined4 *)(lVar18 + 0x20c) = 0xbf800000;
                }
                *(int *)((long)plVar27 + 100) = (int)plVar27[0xd];
                lVar18 = plVar27[0xe];
                goto joined_r0x0429a991;
              }
            }
          }
label_0429acc4:
          il2cpp_runtime_helper_022b2c90();
label_0429acc9:
          il2cpp_runtime_helper_022b2c90();
label_0429acce:
          il2cpp_runtime_helper_022b2c90();
label_0429acd3:
          il2cpp_runtime_helper_022b2c90();
label_0429acd8:
          auVar44 = il2cpp_runtime_helper_022b2c90();
          if (auVar44._8_4_ == 1) {
            plVar19 = (long *)__cxa_begin_catch(auVar44._0_8_);
            lVar18 = *plVar19;
            __cxa_end_catch();
            __this_08.fields._8_8_ = pIVar46;
            __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
            __this_08.fields._current = (Il2CppObject *)__this_13;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
            if (lVar18 == 0) {
label_0429aba7:
              lVar18 = plVar27[0xe];
joined_r0x0429a991:
              if (((lVar18 != 0) && (*(long *)(lVar18 + 0x58) != 0)) &&
                 (pSVar13 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar18 + 0x58) + 0x10),
                 pSVar13 != (System_Collections_Generic_List_object__o *)0x0)) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c8,pSVar13,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator)
                ;
                pSVar45 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c8._0_8_;
                pIVar46 = (Il2CppType *)auStack_c8._8_8_;
                __this_13 = pSStack_b8;
label_0429ac10:
                pSVar47 = __this_13;
                __this_06.fields._8_8_ = pIVar46;
                __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
                __this_06.fields._current = (Il2CppObject *)pSVar47;
                bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_06,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
                if ((char)bVar15 == '\0') {
                  __this_07.fields._8_8_ = pIVar46;
                  __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
                  __this_07.fields._current = (Il2CppObject *)pSVar47;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
                  return;
                }
                if (pSVar47 != (Settings_InputKey_o *)0x0) goto code_r0x0429ac2e;
                il2cpp_runtime_helper_022b2c90();
                __this_13 = pSVar47;
                goto label_0429acb5;
              }
              goto label_0429acc4;
            }
            il2cpp_runtime_helper_022fefe0(lVar18);
            __this_10.fields._8_8_ = pIVar46;
            __this_10.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
            __this_10.fields._current = (Il2CppObject *)__this_13;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_10,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
          }
          else {
            __this_09.fields._8_8_ = pIVar46;
            __this_09.fields._list = (System_Collections_Generic_List_T__o *)pSVar45;
            __this_09.fields._current = (Il2CppObject *)__this_13;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
          }
          _Unwind_Resume(auVar44._0_8_);
        }
        __this_11 = (_union_249689)((_union_249689 *)(plVar27 + 0x19))->genericMethod;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          _Stack_88 = (_union_249689)0x4299e96;
          il2cpp_runtime_helper_02337ed0();
          auVar35._8_8_ = extraout_XMM1_Qb_02;
          auVar35._0_8_ = extraout_XMM1_Qa_02;
        }
        _Var25.genericMethod = (Characters_Human_o *)0x0;
        _Stack_88 = (_union_249689)0x4299ea2;
        _Var26 = __this_11;
        bVar15 = UnityEngine_Object__op_Inequality
                           (__this_11.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
label_04299efc:
          __this = (Controllers_HumanPlayerController_o *)p_Var29;
          if ((p_Var29->genericMethod != (UI_RoleSpritePickPopup_o *)0x0) &&
             (_Var26 = (_union_249689)p_Var29->genericMethod[1].fields._popups,
             _Var26.genericMethod != (Characters_Human_o *)0x0)) {
            if ((*(byte *)(*(long *)_Var26.genericMethod + 0x130) < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
               (in_RCX = *(UI_RoleSpritePickPopup_o **)(*(long *)_Var26.genericMethod + 200),
               *(long *)((long)in_RCX + (ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130) * 8 + -8) != TypeInfo_AHSSWeapon)) {
              _Stack_88 = (_union_249689)0x4299f59;
              (**(code **)(*(long *)_Var26.genericMethod + 0x1e8))
                        (_Var26.genericMethod,_Var24.genericMethod,
                         *(undefined8 *)(*(long *)_Var26.genericMethod + 0x1f0));
              auVar35._8_8_ = extraout_XMM1_Qb_03;
              auVar35._0_8_ = extraout_XMM1_Qa_03;
              in_RCX = p_Var29->genericMethod;
              _Var25 = _Var24;
              goto joined_r0x0429a3de;
            }
            if (_Var24.genericMethod != (Characters_Human_o *)0x0) {
              _Var25 = (_union_249689)0x143;
              _Stack_88 = (_union_249689)0x429a26f;
              _Var26 = _Var24;
              bVar15 = Settings_KeybindSetting__Contains_4101260(_Var24.genericMethod,0x143,(MethodInfo *)0x0)
              ;
              if ((char)bVar15 == '\0') {
label_0429a289:
                _Var25.genericMethod = (Characters_Human_o *)0x0;
                _Stack_88 = (_union_249689)0x429a295;
                _Var26 = _Var24;
                bVar15 = Settings_KeybindSetting__GetKeyUp(_Var24.genericMethod,0,(MethodInfo *)0x0);
                in_RCX = p_Var29->genericMethod;
                if ((in_RCX != (UI_RoleSpritePickPopup_o *)0x0) &&
                   (_Var26 = (_union_249689)in_RCX[1].fields._popups,
                   _Var26.genericMethod != (Characters_Human_o *)0x0)) {
                  in_RCX = *(UI_RoleSpritePickPopup_o **)(*(long *)_Var26.genericMethod + 0x1f8);
                  if ((char)bVar15 == '\0') {
                    _Stack_88 = (_union_249689)0x429a322;
                    (*(code *)in_RCX)(_Var26.genericMethod,0,
                                      *(undefined8 *)(*(long *)_Var26.genericMethod + 0x200));
                    auVar35._8_8_ = extraout_XMM1_Qb_09;
                    auVar35._0_8_ = extraout_XMM1_Qa_09;
                    goto label_0429a322;
                  }
                  _Var25 = (_union_249689)0x1;
                  _Stack_88 = (_union_249689)0x429a2cd;
                  (*(code *)in_RCX)();
                  auVar35._8_8_ = extraout_XMM1_Qb_07;
                  auVar35._0_8_ = extraout_XMM1_Qa_07;
                  pUVar17 = *(UI_MessagePopup_o **)((long)__this_12 + 0x30);
                  if (pUVar17 != (UI_MessagePopup_o *)0x0) goto label_0429a2da;
                }
              }
              else {
                pUVar17 = *(UI_MessagePopup_o **)((long)__this_12 + 0x30);
                if (pUVar17 != (UI_MessagePopup_o *)0x0) {
                  if (*(char *)&pUVar17[2].monitor == '\0') goto label_0429a289;
label_0429a2da:
                  *(undefined1 *)&pUVar17[2].monitor = 0;
label_0429a322:
                  __this = p_Var29->genericMethod;
                  _Var25.genericMethod = (Characters_Human_o *)0x0;
                  _Stack_88 = (_union_249689)0x429a331;
                  bVar15 = Settings_KeybindSetting__GetKey(_Var24.genericMethod,0,(MethodInfo *)0x0);
                  uVar20 = (undefined7)((ulong)in_RCX >> 8);
                  in_RCX = (UI_RoleSpritePickPopup_o *)CONCAT71(uVar20,1);
                  _Var26 = _Var24;
                  if ((char)bVar15 == '\0') {
                    if ((p_Var29->genericMethod == (UI_RoleSpritePickPopup_o *)0x0) ||
                       (pSVar10 = p_Var29->genericMethod[1].fields._popups,
                       pSVar10 == (System_Collections_Generic_List_BasePopup__o *)0x0)) goto label_0429a1cb;
                    in_RCX = (UI_RoleSpritePickPopup_o *)CONCAT71(uVar20,(char)(pSVar10->fields)._version);
                  }
                  if ((_union_249689 *)__this != (_union_249689 *)0x0) {
                    *(char *)((long)__this + 0x2d8) = (char)in_RCX;
                    in_RCX = p_Var29->genericMethod;
                    goto joined_r0x0429a3de;
                  }
                }
              }
            }
          }
        }
        else {
          __this = (Controllers_HumanPlayerController_o *)p_Var29;
          if (__this_11.genericMethod != (Characters_Human_o *)0x0) {
            _Var25.genericMethod = (Characters_Human_o *)0x0;
            _Stack_88 = (_union_249689)0x4299eb9;
            _Var26 = __this_11;
            bVar15 = UI_ChatPanel__IsPointerOverChatUI(__this_11.genericMethod,(MethodInfo *)0x0);
            if ((char)bVar15 == '\0') goto label_04299efc;
            if (p_Var29->genericMethod != (UI_RoleSpritePickPopup_o *)0x0) {
              pSVar10 = p_Var29->genericMethod[1].fields._popups;
              _Var26.genericMethod = (Characters_Human_o *)0x0;
              if (pSVar10 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                vtableDispatch = (pSVar10->klass->vtable)._12_unknown.methodPtr;
                (*vtableDispatch)
                          (pSVar10,0,(pSVar10->klass->vtable)._12_unknown.method,vtableDispatch);
                return;
              }
            }
          }
        }
      }
      else {
        bVar21 = *(byte *)(*(long *)_Var26.genericMethod + 0x130);
        in_RCX = (UI_RoleSpritePickPopup_o *)CONCAT71(0x55767,bVar21);
        __this_11._1_7_ = 0;
        __this_11._0_1_ = *(byte *)((long)TypeInfo_AmmoWeapon.genericMethod + 0x130);
        _Var25 = TypeInfo_AmmoWeapon;
        if (((bVar21 < *(byte *)((long)TypeInfo_AmmoWeapon.genericMethod + 0x130)) ||
            (lVar9 = *(long *)(*(long *)_Var26.genericMethod + 200),
            *(void **)(lVar9 + -8 + (long)__this_11.genericMethod * 8) != TypeInfo_AmmoWeapon.genericMethod)) ||
           (*(int *)((long)_Var26.genericMethod + 0x48) != 0)) goto label_04299e13;
        bVar1 = *(byte *)(lVar18 + 0x130);
        _Var25._1_7_ = 0;
        _Var25._0_1_ = bVar1;
        if ((bVar1 <= bVar21) && (*(long *)(lVar9 + -8 + (long)_Var25.genericMethod * 8) == lVar18)) {
          _Var25.genericMethod = (Characters_Human_o *)0x0;
          _Stack_88 = (_union_249689)0x429a393;
          bVar15 = Characters_ThunderspearWeapon__HasActiveProjectile(_Var26.genericMethod,(MethodInfo *)0x0);
          if ((char)bVar15 != '\0') goto label_04299e13;
        }
        p_Var28 = p_Var29;
        if (_Var24.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        _Var25.genericMethod = (Characters_Human_o *)0x0;
        _Stack_88 = (_union_249689)0x429a3b0;
        bVar15 = Settings_KeybindSetting__GetKeyDown(_Var24.genericMethod,0,(MethodInfo *)0x0);
        _Var26 = _Var24;
        if ((char)bVar15 == '\0') {
label_0429a1bf:
          in_RCX = p_Var29->genericMethod;
        }
        else {
          _Var26.genericMethod = p_Var29->genericMethod;
          if (_Var26.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
          if (*(bool_conflict *)((long)_Var26.genericMethod + 0x158) != 0) goto label_0429a1bf;
          _Var25.genericMethod = (Characters_Human_o *)0x0;
          _Stack_88 = (_union_249689)0x429a3d8;
          Characters_Human__Reload(_Var26.genericMethod,(MethodInfo *)0x0);
          in_RCX = p_Var29->genericMethod;
        }
joined_r0x0429a3de:
        __this = (Controllers_HumanPlayerController_o *)p_Var29;
        p_Var28 = p_Var29;
        if (in_RCX != (UI_RoleSpritePickPopup_o *)0x0) {
          __this_11 = (_union_249689)in_RCX[1].fields.DoublePanelRight;
          if (__this_11.genericMethod == (Characters_Human_o *)0x0) goto joined_r0x0429a313;
          in_R10B = *(char *)((long)&in_RCX[2].fields.MaskBackground + 6);
          uVar16 = 0;
          if (in_R10B != '\0') {
            lVar18 = *(long *)__this_11.genericMethod;
            if (((((*(byte *)(TypeInfo_EscapeSpecial + 0x130) <= *(byte *)(lVar18 + 0x130)) &&
                  (*(long *)(*(long *)(lVar18 + 200) + -8 + (ulong)*(byte *)(TypeInfo_EscapeSpecial + 0x130) * 8) ==
                   TypeInfo_EscapeSpecial)) ||
                 ((*(byte *)(TypeInfo_ShifterTransformSpecial + 0x130) <= *(byte *)(lVar18 + 0x130) &&
                  (*(long *)(*(long *)(lVar18 + 200) + -8 + (ulong)*(byte *)(TypeInfo_ShifterTransformSpecial + 0x130) * 8) ==
                   TypeInfo_ShifterTransformSpecial)))) || (uVar16 = 0, in_RCX[1].fields.IsActive != 7)) &&
               (uVar16 = 0, *(int *)((long)&in_RCX[1].fields._categoryPanelTypes + 4) != 1)) {
              iVar2 = in_RCX[1].fields.IsActive;
              uVar16 = 0;
              if ((((iVar2 != 1) && (uVar16 = 0, iVar2 != 8)) && (uVar16 = 0, iVar2 != 9)) &&
                 (uVar16 = 0, cVar30 == '\0')) {
                uVar16 = *(byte *)&(in_RCX->fields).BottomBar ^ 1;
              }
            }
          }
          bVar21 = *(byte *)(*(long *)__this_11.genericMethod + 0x130);
          if (bVar21 < *(byte *)(TypeInfo_BaseHoldAttackSpecial + 0x130)) goto joined_r0x0429a068;
          _Var26 = (_union_249689)((_union_249689 *)(*(long *)__this_11.genericMethod + 200))->genericMethod;
          if (*(long *)((long)_Var26.genericMethod + (ulong)*(byte *)(TypeInfo_BaseHoldAttackSpecial + 0x130) * 8 + -8) ==
              TypeInfo_BaseHoldAttackSpecial) goto label_0429a1d0;
          goto joined_r0x0429a068;
        }
      }
    }
  }
label_0429a1cb:
  do {
    uVar16 = _Var25._0_4_;
    bVar21 = (byte)__this;
    _Stack_88 = (_union_249689)0x429a1d0;
    il2cpp_runtime_helper_022b2c90();
    p_Var29 = p_Var28;
label_0429a1d0:
    if ((in_R10B == '\0') || (iVar2 = in_RCX[1].fields.IsActive, iVar2 == 7)) {
joined_r0x0429a068:
      if (uVar16 != 0) goto label_0429a06e;
label_0429a233:
      _Var25.genericMethod = (Characters_Human_o *)0x0;
      _Stack_88 = (_union_249689)0x429a249;
      (**(code **)(*(long *)__this_11.genericMethod + 0x1f8))
                (__this_11.genericMethod,0,*(undefined8 *)(*(long *)__this_11.genericMethod + 0x200));
      auVar35._8_8_ = extraout_XMM1_Qb_06;
      auVar35._0_8_ = extraout_XMM1_Qa_06;
    }
    else {
      if (iVar2 == 8) {
label_0429a224:
        if (uVar16 == 0) goto label_0429a233;
      }
      else {
        if (iVar2 == 1) {
          if (bVar21 < *(byte *)(TypeInfo_StockSpecial + 0x130)) goto label_0429a224;
          if (*(long *)((long)_Var26.genericMethod + (ulong)*(byte *)(TypeInfo_StockSpecial + 0x130) * 8 + -8) !=
              TypeInfo_StockSpecial) goto joined_r0x0429a068;
        }
        if ((*(int *)((long)&in_RCX[1].fields._categoryPanelTypes + 4) == 1) || (cVar30 != '\0'))
        goto joined_r0x0429a068;
        if (uVar16 == 0 && *(char *)&(in_RCX->fields).BottomBar == '\x01') goto label_0429a233;
      }
label_0429a06e:
      lVar18 = *(long *)__this_11.genericMethod;
      bVar21 = *(byte *)&TypeInfo_AHSSTwinShot[1].fields.BottomBar;
      in_RCX = TypeInfo_AHSSTwinShot;
      if ((*(byte *)(lVar18 + 0x130) < bVar21) ||
         (_Var25 = (_union_249689)((_union_249689 *)(lVar18 + 200))->genericMethod,
         *(UI_RoleSpritePickPopup_o **)((long)_Var25.genericMethod + (ulong)bVar21 * 8 + -8) != TypeInfo_AHSSTwinShot))
      {
        _Stack_88 = (_union_249689)0x429a0b1;
        _Var25 = (_union_249689)local_80;
        (**(code **)(lVar18 + 0x1e8))(__this_11.genericMethod,local_80,*(undefined8 *)(lVar18 + 0x1f0));
        auVar35._8_8_ = extraout_XMM1_Qb_04;
        auVar35._0_8_ = extraout_XMM1_Qa_04;
      }
      else {
        __this = (Controllers_HumanPlayerController_o *)p_Var29;
        _Var26.genericMethod = (Characters_Human_o *)0x0;
        p_Var28 = p_Var29;
        if (local_80 == (undefined1  [8])0x0) goto label_0429a1cb;
        _Stack_88 = (_union_249689)0x429a2f9;
        uVar16 = Settings_KeybindSetting__GetKeyUp((Settings_KeybindSetting_o *)local_80,0,(MethodInfo *)0x0);
        in_RCX = *(UI_RoleSpritePickPopup_o **)__this_11.genericMethod;
        _Var25._0_4_ = uVar16 & 0xff;
        _Var25._4_4_ = 0;
        _Stack_88 = (_union_249689)0x429a310;
        (*(code *)in_RCX[2].fields.BottomBar)
                  (__this_11.genericMethod,_Var25.genericMethod,in_RCX[2].fields.TopBar);
        auVar35._8_8_ = extraout_XMM1_Qb_08;
        auVar35._0_8_ = extraout_XMM1_Qa_08;
      }
    }
joined_r0x0429a313:
    if (cVar30 != '\0') {
      return;
    }
    _Var26 = (_union_249689)p_Var29->genericMethod;
    __this = (Controllers_HumanPlayerController_o *)p_Var29;
    p_Var28 = p_Var29;
  } while (_Var26.genericMethod == (Characters_Human_o *)0x0);
  if (*(char *)((long)_Var26.genericMethod + 0x68) != '\0') {
    return;
  }
  if (*(bool_conflict *)((long)_Var26.genericMethod + 0x158) == 0xf) {
    return;
  }
  if (*(int *)((long)_Var26.genericMethod + 0x118) == 1) {
    if ((*(UI_ImportPopup_o **)((long)__this_12 + 0x70) != (UI_ImportPopup_o *)0x0) &&
       (_Var26 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_12 + 0x70))->fields)._topButtons,
       _Var26.genericMethod != (Characters_Human_o *)0x0)) {
      _Var25.genericMethod = (Characters_Human_o *)0x0;
      _Stack_88 = (_union_249689)0x429a40c;
      bVar15 = Settings_KeybindSetting__GetKeyDown(_Var26.genericMethod,0,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
label_0429a429:
        if ((*(UI_ImportPopup_o **)((long)__this_12 + 0x70) == (UI_ImportPopup_o *)0x0) ||
           (_Var26 = (_union_249689)
                     ((*(UI_ImportPopup_o **)((long)__this_12 + 0x70))->fields)._staticTransforms,
           _Var26.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
        _Var25.genericMethod = (Characters_Human_o *)0x0;
        _Stack_88 = (_union_249689)0x429a44f;
        bVar15 = Settings_KeybindSetting__GetKeyDown(_Var26.genericMethod,0,(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') goto label_0429a6a6;
        if ((p_Var29->genericMethod == (UI_RoleSpritePickPopup_o *)0x0) ||
           (_Var26 = (_union_249689)p_Var29->genericMethod[1].fields.MaskBackground,
           _Var26.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
        _Var25.genericMethod = (Characters_Human_o *)0x0;
        _Stack_88 = (_union_249689)0x429a47a;
        Characters_Horse__Jump(_Var26.genericMethod,(MethodInfo *)0x0);
        pUVar6 = p_Var29->genericMethod;
      }
      else {
        _Var26 = (_union_249689)p_Var29->genericMethod;
        if (_Var26.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        if (*(bool_conflict *)((long)_Var26.genericMethod + 0x158) != 0) goto label_0429a429;
        _Var25.genericMethod = (Characters_Human_o *)0x0;
        _Stack_88 = (_union_249689)0x429a6a6;
        Characters_Human__Unmount(_Var26.genericMethod,0,(MethodInfo *)0x0);
label_0429a6a6:
        pUVar6 = p_Var29->genericMethod;
      }
      if (pUVar6 != (UI_RoleSpritePickPopup_o *)0x0) {
        if (pUVar6[1].fields.IsActive != 0) {
          return;
        }
        if (*(char *)((long)&pUVar6[2].fields.MaskBackground + 6) == '\0') {
          return;
        }
        if (*(UI_ImportPopup_o **)((long)__this_12 + 0x70) != (UI_ImportPopup_o *)0x0) {
          pSVar5 = (Settings_KeybindSetting_o *)
                   ((*(UI_ImportPopup_o **)((long)__this_12 + 0x70))->fields).TopBar;
          _Var26.genericMethod = (Characters_Human_o *)0x0;
          if (pSVar5 != (Settings_KeybindSetting_o *)0x0) {
            _Var25.genericMethod = (Characters_Human_o *)0x0;
            _Stack_88 = (_union_249689)0x429a6f6;
            bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar5,0,(MethodInfo *)0x0);
            if ((char)bVar15 == '\0') {
              return;
            }
            _Var26.genericMethod = (Characters_Human_o *)0x0;
            if (p_Var29->genericMethod != (Characters_Human_o *)0x0) {
              Characters_Human__Reload(p_Var29->genericMethod,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    goto label_0429a1cb;
  }
  if (*(int *)((long)_Var26.genericMethod + 0x118) != 0) {
    return;
  }
  _Var25.genericMethod = (Characters_Human_o *)0x0;
  _Stack_88 = (_union_249689)0x429a0fb;
  bVar15 = Characters_Human__CanJump(_Var26.genericMethod,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if ((*(UI_ImportPopup_o **)((long)__this_12 + 0x70) == (UI_ImportPopup_o *)0x0) ||
       (_Var26 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_12 + 0x70))->fields).BottomBar,
       _Var26.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
    _Var25.genericMethod = (Characters_Human_o *)0x0;
    _Stack_88 = (_union_249689)0x429a126;
    bVar15 = Settings_KeybindSetting__GetKeyDown(_Var26.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      _Var26 = (_union_249689)p_Var29->genericMethod;
      if (_Var26.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
      _Var25.genericMethod = (Characters_Human_o *)0x0;
      _Stack_88 = (_union_249689)0x429a141;
      Characters_Human__Jump(_Var26.genericMethod,(MethodInfo *)0x0);
      pUVar6 = p_Var29->genericMethod;
      goto joined_r0x0429a592;
    }
    if ((*(UI_ImportPopup_o **)((long)__this_12 + 0x70) == (UI_ImportPopup_o *)0x0) ||
       (_Var26 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_12 + 0x70))->fields)._topButtons,
       _Var26.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
    _Var25.genericMethod = (Characters_Human_o *)0x0;
    _Stack_88 = (_union_249689)0x429a4e1;
    bVar15 = Settings_KeybindSetting__GetKeyDown(_Var26.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if (p_Var29->genericMethod == (UI_RoleSpritePickPopup_o *)0x0) goto label_0429a1cb;
      __this_11 = (_union_249689)p_Var29->genericMethod[1].fields.MaskBackground;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        _Stack_88 = (_union_249689)0x429a510;
        il2cpp_runtime_helper_02337ed0();
        auVar35._8_8_ = extraout_XMM1_Qb_10;
        auVar35._0_8_ = extraout_XMM1_Qa_10;
      }
      _Var25.genericMethod = (Characters_Human_o *)0x0;
      _Stack_88 = (_union_249689)0x429a51c;
      _Var26 = __this_11;
      bVar15 = UnityEngine_Object__op_Inequality
                         (__this_11.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        pUVar6 = p_Var29->genericMethod;
        if (pUVar6 == (UI_RoleSpritePickPopup_o *)0x0) goto label_0429a1cb;
        if (*(int *)&pUVar6[1].fields._categoryPanelTypes == 0) {
          pUVar12 = pUVar6[1].fields.MaskBackground;
          if (((pUVar12 == (UnityEngine_UI_RawImage_o *)0x0) ||
              (lVar18 = *(long *)&(pUVar12->fields).m_VertsDirty, lVar18 == 0)) ||
             (_Var26 = (_union_249689)((_union_249689 *)(lVar18 + 0x10))->genericMethod,
             _Var26.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
          _Var25.genericMethod = (Characters_Human_o *)0x0;
          _Stack_88 = (_union_249689)0x429a74c;
          UVar43 = UnityEngine_Transform__get_position(_Var26.genericMethod,(MethodInfo *)0x0);
          auVar36._4_12_ = auVar35._4_12_;
          auVar36._0_4_ = UVar43.fields.z;
          if ((p_Var29->genericMethod == (UI_RoleSpritePickPopup_o *)0x0) ||
             (pUVar11 = (p_Var29->genericMethod->fields).TopBar, pUVar11 == (UnityEngine_Transform_o *)0x0))
          goto label_0429a1cb;
          uStack_68 = extraout_XMM0_Dc;
          local_70 = UVar43.fields._0_8_;
          uStack_64 = extraout_XMM0_Dd;
          pUVar11 = (UnityEngine_Transform_o *)(pUVar11->fields).m_CachedPtr;
          _Var26.genericMethod = (Characters_Human_o *)0x0;
          _local_80 = auVar36;
          if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0429a1cb;
          _Var25.genericMethod = (Characters_Human_o *)0x0;
          _Stack_88 = (_union_249689)0x429a782;
          UVar43 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
          auVar37._4_12_ = auVar36._4_12_;
          auVar37._0_4_ = UVar43.fields.z;
          fVar32 = UVar43.fields.x;
          fVar33 = UVar43.fields.y;
          uVar34 = auVar37._0_8_;
          if (g_data_057a68cb == '\0') {
            local_60._8_4_ = extraout_XMM0_Dc_00;
            local_60._0_8_ = UVar43.fields._0_8_;
            local_60._12_4_ = extraout_XMM0_Dd_00;
            _Stack_88 = (_union_249689)0x429a7a1;
            local_50 = auVar37;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
            fVar32 = (float)local_60._0_4_;
            fVar33 = (float)local_60._4_4_;
            uVar34 = local_50._0_8_;
          }
          auVar38._4_4_ = local_70._4_4_;
          auVar38._0_4_ = local_70._4_4_;
          auVar38._8_4_ = uStack_68;
          auVar38._12_4_ = uStack_64;
          auVar39._4_12_ = auVar38._4_12_;
          auVar39._0_4_ = (float)local_70._4_4_ - fVar33;
          fVar40 = (float)local_80._0_4_ - (float)uVar34;
          fVar42 = (float)local_80._4_4_ - (float)((ulong)uVar34 >> 0x20);
          _Var26 = TypeInfo_Math;
          fVar41 = (float)local_70._0_4_ - fVar32;
          if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
            local_80._4_4_ = (float)local_70._0_4_ - fVar32;
            local_80._0_4_ = fVar40;
            fStack_78 = fVar42;
            fStack_74 = (float)local_70._4_4_ - fVar33;
            _Stack_88 = (_union_249689)0x429a7f1;
            _local_70 = auVar39;
            il2cpp_runtime_helper_02337ed0();
            auVar39 = _local_70;
            fVar40 = (float)local_80._0_4_;
            fVar41 = (float)local_80._4_4_;
          }
          fVar32 = fVar41 * fVar41 + auVar39._0_4_ * auVar39._0_4_ + fVar40 * fVar40;
          if (fVar32 < 0.0) {
            _Stack_88 = (_union_249689)0x429a833;
            fVar32 = sqrtf(fVar32);
          }
          else {
            fVar32 = SQRT(fVar32);
          }
          if (fVar32 < 15.0) {
            _Var26 = (_union_249689)p_Var29->genericMethod;
            if (_Var26.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
            if (*(char *)((long)_Var26.genericMethod + 0xcc) == '\0') {
              _Var25.genericMethod = (Characters_Human_o *)0x0;
              _Stack_88 = (_union_249689)0x429a864;
              Characters_Human__MountHorse(_Var26.genericMethod,(MethodInfo *)0x0);
              pUVar6 = p_Var29->genericMethod;
              goto joined_r0x0429a592;
            }
          }
        }
      }
    }
    if ((*(UI_ImportPopup_o **)((long)__this_12 + 0x70) == (UI_ImportPopup_o *)0x0) ||
       (_Var26 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_12 + 0x70))->fields).Parent,
       _Var26.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
    _Var25.genericMethod = (Characters_Human_o *)0x0;
    _Stack_88 = (_union_249689)0x429a55c;
    bVar15 = Settings_KeybindSetting__GetKeyDown(_Var26.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto label_0429a58c;
    _Var26 = (_union_249689)p_Var29->genericMethod;
    if (_Var26.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
    fVar32 = *(float *)((long)_Var26.genericMethod + 200);
    if (*(char *)((long)_Var26.genericMethod + 0xcc) != '\0') {
      fVar32 = fVar32 + 180.0;
    }
    _Var25.genericMethod = (Characters_Human_o *)0x0;
    _Stack_88 = (_union_249689)0x429a58c;
    Characters_Human__Dodge(_Var26.genericMethod,fVar32,(MethodInfo *)0x0);
  }
label_0429a58c:
  pUVar6 = p_Var29->genericMethod;
joined_r0x0429a592:
  if (pUVar6 != (UI_RoleSpritePickPopup_o *)0x0) {
    if (pUVar6[1].fields.IsActive == 0) {
      if ((*(UI_ImportPopup_o **)((long)__this_12 + 0x70) == (UI_ImportPopup_o *)0x0) ||
         (_Var26 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_12 + 0x70))->fields).TopBar,
         _Var26.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
      _Var25.genericMethod = (Characters_Human_o *)0x0;
      _Stack_88 = (_union_249689)0x429a5c4;
      bVar15 = Settings_KeybindSetting__GetKeyDown(_Var26.genericMethod,0,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        _Var26 = (_union_249689)p_Var29->genericMethod;
        if (_Var26.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        _Var25.genericMethod = (Characters_Human_o *)0x0;
        _Stack_88 = (_union_249689)0x429a5db;
        Characters_Human__Reload(_Var26.genericMethod,(MethodInfo *)0x0);
      }
    }
    if (p_Var29->genericMethod != (UI_RoleSpritePickPopup_o *)0x0) {
      if (*(int *)((long)&p_Var29->genericMethod[1].fields._categoryPanelTypes + 4) != 1) {
        return;
      }
      if ((*(UI_ImportPopup_o **)((long)__this_12 + 0x70) != (UI_ImportPopup_o *)0x0) &&
         (_Var26 = (_union_249689)((*(UI_ImportPopup_o **)((long)__this_12 + 0x70))->fields)._topButtons,
         _Var26.genericMethod != (Characters_Human_o *)0x0)) {
        _Var25.genericMethod = (Characters_Human_o *)0x0;
        _Stack_88 = (_union_249689)0x429a617;
        bVar15 = Settings_KeybindSetting__GetKeyDown(_Var26.genericMethod,0,(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          return;
        }
        if ((p_Var29->genericMethod != (UI_RoleSpritePickPopup_o *)0x0) &&
           (pUVar11 = (p_Var29->genericMethod->fields).TopBar, pUVar11 != (UnityEngine_Transform_o *)0x0)) {
          __this_00 = pUVar11[1].monitor;
          _Var25.genericMethod = (Characters_Human_o *)0x0;
          _Stack_88 = (_union_249689)0x429a64d;
          _Var26 = TypeInfo_object;
          parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
          __this = (Controllers_HumanPlayerController_o *)(_union_249689 *)0x0;
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  goto label_0429a1cb;
code_r0x0429ab7d:
  if (*(float *)((long)plVar27 + 100) <= 0.0) {
    lVar18 = plVar27[0xb];
    if (lVar18 == 0) goto label_0429ab90;
label_0429ab4d:
    *(undefined1 *)(lVar18 + 0x2f2) = 0;
  }
  goto label_0429ab54;
label_0429ab10:
  bVar15 = Settings_InputKey__GetKeyUp(pSVar47,(MethodInfo *)0x0);
  pSVar47 = __this_13;
  if ((char)bVar15 != '\0') {
    lVar18 = plVar27[0xb];
    if (lVar18 == 0) goto label_0429acd8;
label_0429aacd:
    *(undefined1 *)(lVar18 + 0x2f2) = 0;
    pSVar47 = __this_13;
  }
  goto label_0429aad4;
code_r0x0429ac2e:
  __this_13 = pSVar47;
  bVar15 = Settings_InputKey__GetKey(pSVar47,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') goto label_0429ac10;
  if (plVar27[0xb] != 0) {
    *(undefined4 *)(plVar27[0xb] + 0x210) = 0x3f800000;
    bVar15 = Settings_InputKey__IsWheel(pSVar47,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto label_0429ac10;
    lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (lVar18 == 0) goto label_0429acc9;
    lVar18 = *(long *)(lVar18 + 0x28);
    if (lVar18 == 0) goto label_0429acce;
    lVar18 = *(long *)(lVar18 + 0xb8);
    if (lVar18 != 0) {
      *(undefined4 *)(plVar27 + 0xc) = *(undefined4 *)(lVar18 + 0x14);
      goto label_0429ac10;
    }
    goto label_0429acd3;
  }
label_0429acb5:
  il2cpp_runtime_helper_022b2c90();
label_0429acba:
  il2cpp_runtime_helper_022b2c90();
label_0429acbf:
  il2cpp_runtime_helper_022b2c90();
  goto label_0429acc4;
}


// Controllers.HumanPlayerController$$UpdateActionInput
// il2cpp: void Controllers_HumanPlayerController__UpdateActionInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x4299bf0

void Controllers_HumanPlayerController__UpdateActionInput
               (Controllers_HumanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  Settings_HumanInputSettings_o *pSVar4;
  _union_249689 _Var5;
  long lVar6;
  Il2CppClass *pIVar7;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar8;
  Photon_Pun_PhotonView_o *__this_00;
  Settings_KeybindSetting_o *pSVar9;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_List_object__o *pSVar10;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_List_Enumerator_object__o __this_11;
  bool bVar11;
  bool_conflict bVar12;
  uint uVar13;
  UI_InGameMenu_o *pUVar14;
  System_Object_array *pSVar15;
  long lVar16;
  long *plVar17;
  Characters_Human_o *in_RCX;
  undefined7 uVar18;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  byte bVar19;
  _union_249689 *unaff_RBX;
  _union_249689 __this_12;
  _union_249689 _Var20;
  _union_249689 _Var21;
  _union_249689 _Var22;
  _union_249689 _Var23;
  long *plVar24;
  char in_R10B;
  _union_249689 *p_Var25;
  _union_249689 *p_Var26;
  char cVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 uVar31;
  undefined8 extraout_XMM1_Qa;
  undefined1 in_XMM1 [16];
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 extraout_XMM1_Qb_07;
  undefined8 extraout_XMM1_Qb_08;
  undefined8 extraout_XMM1_Qb_09;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  UnityEngine_Vector3_o UVar39;
  undefined1 auVar40 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar41;
  Il2CppType *pIVar42;
  Settings_InputKey_o *__this_13;
  Settings_InputKey_o *pSVar43;
  undefined1 auStack_c0 [16];
  Settings_InputKey_o *pSStack_b0;
  Il2CppRGCTXData *pIStack_a8;
  _union_249689 _Stack_a0;
  Controllers_HumanPlayerController_o *pCStack_98;
  Characters_Human_o **ppCStack_90;
  ulong uStack_88;
  _union_249689 _Stack_80;
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  uVar28 = (ulong)(uint)inMenu;
  if (g_data_057add08 == '\0') {
    _Stack_80 = (_union_249689)0x4299c1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot);
    _Stack_80 = (_union_249689)0x4299c29;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    _Stack_80 = (_union_249689)0x4299c35;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
    _Stack_80 = (_union_249689)0x4299c41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseHoldAttackSpecial);
    _Stack_80 = (_union_249689)0x4299c4d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EscapeSpecial);
    _Stack_80 = (_union_249689)0x4299c59;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    _Stack_80 = (_union_249689)0x4299c65;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    _Stack_80 = (_union_249689)0x4299c71;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    _Stack_80 = (_union_249689)0x4299c7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    _Stack_80 = (_union_249689)0x4299c89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    _Stack_80 = (_union_249689)0x4299c95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterTransformSpecial);
    _Stack_80 = (_union_249689)0x4299ca1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    _Stack_80 = (_union_249689)0x4299cad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    _Stack_80 = (_union_249689)0x4299cb9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    _Stack_80 = (_union_249689)0x4299cc5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    _Stack_80 = (_union_249689)0x4299cd1;
    il2cpp_runtime_helper_023445d0(&"UncarryRPC");
    in_XMM1._8_8_ = extraout_XMM1_Qb;
    in_XMM1._0_8_ = extraout_XMM1_Qa;
    g_data_057add08 = '\x01';
    method = extraout_RDX;
  }
  cVar27 = (char)inMenu;
  __this_12.genericMethod = (void *)(uVar28 & 0xff);
  _Stack_80 = (_union_249689)0x4299ce6;
  bVar12 = __this_12._0_4_;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,bVar12,method);
  _Stack_80 = (_union_249689)0x4299cf0;
  Controllers_HumanPlayerController__UpdateHookInput(__this,bVar12,method_00);
  p_Var25 = (_union_249689 *)0x0;
  _Stack_80 = (_union_249689)0x4299cfd;
  Controllers_HumanPlayerController__UpdateReelInput(__this,0,method_01);
  _Stack_80 = (_union_249689)0x4299d07;
  _Var22.genericMethod = __this_12.genericMethod;
  _Var23 = (_union_249689)__this;
  Controllers_HumanPlayerController__UpdateDashInput(__this,bVar12,method_02);
  pCVar3 = (__this->fields)._human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    p_Var26 = (_union_249689 *)&(__this->fields)._human;
    unaff_RBX = p_Var26;
    if (*(char *)((long)&(pCVar3->fields)._mountedVelocity.fields.x + 2) != '\0') {
      _Var23 = (_union_249689)(__this->fields)._illegalWeaponStates;
      if (_Var23.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
      uVar13 = (pCVar3->fields).FinishSetup;
      _Var22._4_4_ = 0;
      _Var22._0_4_ = uVar13;
      _Stack_80 = (_union_249689)0x4299d46;
      bVar12 = System_Collections_Generic_HashSet_Int32Enum___Contains
                         (_Var23.genericMethod,uVar13,MethodInfo_Boolean_Contains);
      if (((char)bVar12 == '\0') && (cVar27 == '\0')) {
        if (p_Var26->genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        p_Var25 = (_union_249689 *)(ulong)(*(byte *)&(p_Var26->genericMethod->fields).FeedVictimName ^ 1);
      }
    }
    lVar16 = TypeInfo_ThunderspearWeapon;
    pSVar4 = (__this->fields)._humanInput;
    if ((pSVar4 != (Settings_HumanInputSettings_o *)0x0) &&
       (in_RCX = p_Var26->genericMethod, in_RCX != (Characters_Human_o *)0x0)) {
      _Var5 = (_union_249689)(pSVar4->fields).AttackDefault;
      _Var20 = (_union_249689)(pSVar4->fields).AttackSpecial;
      auStack_78 = (undefined1  [8])_Var20.genericMethod;
      _Var23 = (_union_249689)(in_RCX->fields).crossfadeCache;
      _Var21 = _Var5;
      if (_Var23.genericMethod == (Characters_Human_o *)0x0) {
label_04299dc4:
        _Var20 = _Var22;
        *(undefined1 *)&(in_RCX->fields)._currentVelocity.fields.z = 0;
        _Var22 = _Var20;
        if ((int)p_Var25 != 0) goto label_04299dd7;
label_0429a1a8:
        p_Var25 = p_Var26;
        if (_Var23.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        _Var22.genericMethod = (Characters_Human_o *)0x0;
        _Stack_80 = (_union_249689)0x429a1bf;
        (**(code **)(*(long *)_Var23.genericMethod + 0x1f8))
                  (_Var23.genericMethod,0,*(undefined8 *)(*(long *)_Var23.genericMethod + 0x200));
        in_XMM1._8_8_ = extraout_XMM1_Qb_04;
        in_XMM1._0_8_ = extraout_XMM1_Qa_04;
        goto label_0429a1bf;
      }
      _Var22._1_7_ = 0;
      _Var22._0_1_ = *(byte *)(TypeInfo_ThunderspearWeapon + 0x130);
      if ((*(byte *)(*(long *)_Var23.genericMethod + 0x130) < *(byte *)(TypeInfo_ThunderspearWeapon + 0x130)) ||
         (*(long *)(*(long *)(*(long *)_Var23.genericMethod + 200) + -8 + (long)_Var22.genericMethod * 8) !=
          TypeInfo_ThunderspearWeapon)) goto label_04299dc4;
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0xc0), lVar6 == 0)) goto label_0429a1cb;
      if (*(char *)(lVar6 + 0x11) != '\0') {
        _Var21 = _Var20;
        auStack_78 = (undefined1  [8])_Var5;
      }
      *(undefined1 *)&(in_RCX->fields)._currentVelocity.fields.z = 0;
      _Var22 = _Var20;
      if ((int)p_Var25 == 0) goto label_0429a1a8;
label_04299dd7:
      _Var22 = _Var20;
      if (_Var23.genericMethod == (Characters_Human_o *)0x0) {
label_04299e13:
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          _Stack_80 = (_union_249689)0x4299e2b;
          il2cpp_runtime_helper_02337ed0();
          in_XMM1._8_8_ = extraout_XMM1_Qb_00;
          in_XMM1._0_8_ = extraout_XMM1_Qa_00;
        }
        plVar24 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        unaff_RBX = (_union_249689 *)&TypeInfo_UIManager;
        _Var23.genericMethod = (Characters_Human_o *)0x0;
        p_Var25 = p_Var26;
        if (plVar24 == (long *)0x0) goto label_0429a1cb;
        in_RCX = (Characters_Human_o *)(ulong)*(byte *)(TypeInfo_InGameMenu + 0x130);
        if ((*(byte *)(*plVar24 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar24 + 200) + -8 + (long)in_RCX * 8) != TypeInfo_InGameMenu)) {
          _Stack_80 = (_union_249689)0x429a87a;
          il2cpp_runtime_helper_022b2fd0();
          pIStack_a8 = (Il2CppRGCTXData *)&TypeInfo_UIManager;
          _Stack_a0 = _Var21;
          pCStack_98 = __this;
          ppCStack_90 = (Characters_Human_o **)p_Var26;
          uStack_88 = uVar28;
          _Stack_80 = __this_12;
          if (g_data_057add0a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
            il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
            il2cpp_runtime_helper_023445d0();
            g_data_057add0a = '\x01';
          }
          pSVar41 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
          pIVar42 = (Il2CppType *)0x0;
          __this_13 = (Settings_InputKey_o *)0x0;
          fVar29 = *(float *)(plVar24 + 0xc);
          fVar30 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          *(float *)(plVar24 + 0xc) = fVar29 - fVar30;
          if (fVar29 - fVar30 <= 0.0) {
            if (plVar24[0xb] == 0) goto label_0429acc4;
            *(undefined4 *)(plVar24[0xb] + 0x210) = 0;
          }
          if ((plVar24[0xe] != 0) &&
             (pSVar9 = *(Settings_KeybindSetting_o **)(plVar24[0xe] + 0x50),
             pSVar9 != (Settings_KeybindSetting_o *)0x0)) {
            bVar12 = Settings_KeybindSetting__GetKey(pSVar9,0,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              fVar29 = *(float *)((long)plVar24 + 100);
              fVar30 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              *(float *)((long)plVar24 + 100) = fVar29 - fVar30;
              if (((plVar24[0xe] != 0) && (lVar16 = *(long *)(plVar24[0xe] + 0x50), lVar16 != 0)) &&
                 (pSVar10 = *(System_Collections_Generic_List_object__o **)(lVar16 + 0x10),
                 pSVar10 != (System_Collections_Generic_List_object__o *)0x0)) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,pSVar10,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator)
                ;
                bVar11 = false;
                pSVar41 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
                pIVar42 = (Il2CppType *)auStack_c0._8_8_;
                __this_13 = pSStack_b0;
                while (__this_02.fields._8_8_ = pIVar42,
                      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar41,
                      __this_02.fields._current = (Il2CppObject *)__this_13,
                      bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20),
                      (char)bVar12 != '\0') {
                  if (__this_13 == (Settings_InputKey_o *)0x0) goto label_0429acba;
                  bVar12 = Settings_InputKey__IsWheel(__this_13,(MethodInfo *)0x0);
                  if ((char)bVar12 != '\0') {
                    bVar11 = true;
                  }
                }
                __this_03.fields._8_8_ = pIVar42;
                __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar41;
                __this_03.fields._current = (Il2CppObject *)__this_13;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
                if (((plVar24[0xe] != 0) && (lVar16 = *(long *)(plVar24[0xe] + 0x50), lVar16 != 0)) &&
                   (pSVar10 = *(System_Collections_Generic_List_object__o **)(lVar16 + 0x10),
                   pSVar10 != (System_Collections_Generic_List_object__o *)0x0)) {
                  System_Collections_Generic_List_object___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,pSVar10,
                             MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
                  pSVar41 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
                  pIVar42 = (Il2CppType *)auStack_c0._8_8_;
                  pSVar43 = pSStack_b0;
                  __this_13 = pSStack_b0;
                  if (!bVar11) {
label_0429ab54:
                    __this_05.fields._8_8_ = pIVar42;
                    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar41;
                    __this_05.fields._current = (Il2CppObject *)__this_13;
                    bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20);
                    if ((char)bVar12 != '\0') {
                      if (__this_13 == (Settings_InputKey_o *)0x0) goto label_0429acbf;
                      bVar12 = Settings_InputKey__IsWheel(__this_13,(MethodInfo *)0x0);
                      if ((char)bVar12 != '\0') goto code_r0x0429ab7d;
                      lVar16 = plVar24[0xb];
                      if (lVar16 == 0) goto label_0429acd8;
                      goto label_0429ab4d;
                    }
                    goto label_0429ab95;
                  }
label_0429aad4:
                  __this_04.fields._8_8_ = pIVar42;
                  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar41;
                  __this_04.fields._current = (Il2CppObject *)pSVar43;
                  bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20);
                  __this_13 = pSVar43;
                  if ((char)bVar12 != '\0') {
                    if (pSVar43 == (Settings_InputKey_o *)0x0) goto label_0429acbf;
                    bVar12 = Settings_InputKey__IsWheel(pSVar43,(MethodInfo *)0x0);
                    if ((char)bVar12 == '\0') goto label_0429ab10;
                    pSVar43 = __this_13;
                    if (0.0 < *(float *)((long)plVar24 + 100)) goto label_0429aad4;
                    lVar16 = plVar24[0xb];
                    if (lVar16 != 0) goto label_0429aacd;
label_0429ab90:
                    il2cpp_runtime_helper_022b2c90();
                  }
label_0429ab95:
                  __this_06.fields._8_8_ = pIVar42;
                  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar41;
                  __this_06.fields._current = (Il2CppObject *)__this_13;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
                  goto label_0429aba7;
                }
              }
            }
            else {
              lVar16 = plVar24[0xb];
              if (lVar16 != 0) {
                if (*(char *)(lVar16 + 0x2f2) == '\0') {
                  *(undefined4 *)(lVar16 + 0x20c) = 0xbf800000;
                }
                *(int *)((long)plVar24 + 100) = (int)plVar24[0xd];
                lVar16 = plVar24[0xe];
                goto joined_r0x0429a991;
              }
            }
          }
label_0429acc4:
          il2cpp_runtime_helper_022b2c90();
label_0429acc9:
          il2cpp_runtime_helper_022b2c90();
label_0429acce:
          il2cpp_runtime_helper_022b2c90();
label_0429acd3:
          il2cpp_runtime_helper_022b2c90();
label_0429acd8:
          auVar40 = il2cpp_runtime_helper_022b2c90();
          if (auVar40._8_4_ == 1) {
            plVar17 = (long *)__cxa_begin_catch(auVar40._0_8_);
            lVar16 = *plVar17;
            __cxa_end_catch();
            __this_09.fields._8_8_ = pIVar42;
            __this_09.fields._list = (System_Collections_Generic_List_T__o *)pSVar41;
            __this_09.fields._current = (Il2CppObject *)__this_13;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
            if (lVar16 == 0) {
label_0429aba7:
              lVar16 = plVar24[0xe];
joined_r0x0429a991:
              if (((lVar16 != 0) && (*(long *)(lVar16 + 0x58) != 0)) &&
                 (pSVar10 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar16 + 0x58) + 0x10),
                 pSVar10 != (System_Collections_Generic_List_object__o *)0x0)) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,pSVar10,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator)
                ;
                pSVar41 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
                pIVar42 = (Il2CppType *)auStack_c0._8_8_;
                __this_13 = pSStack_b0;
label_0429ac10:
                pSVar43 = __this_13;
                __this_07.fields._8_8_ = pIVar42;
                __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar41;
                __this_07.fields._current = (Il2CppObject *)pSVar43;
                bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_07,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20);
                if ((char)bVar12 == '\0') {
                  __this_08.fields._8_8_ = pIVar42;
                  __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar41;
                  __this_08.fields._current = (Il2CppObject *)pSVar43;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
                  return;
                }
                if (pSVar43 != (Settings_InputKey_o *)0x0) goto code_r0x0429ac2e;
                il2cpp_runtime_helper_022b2c90();
                __this_13 = pSVar43;
                goto label_0429acb5;
              }
              goto label_0429acc4;
            }
            il2cpp_runtime_helper_022fefe0(lVar16);
            __this_11.fields._8_8_ = pIVar42;
            __this_11.fields._list = (System_Collections_Generic_List_T__o *)pSVar41;
            __this_11.fields._current = (Il2CppObject *)__this_13;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_11,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
          }
          else {
            __this_10.fields._8_8_ = pIVar42;
            __this_10.fields._list = (System_Collections_Generic_List_T__o *)pSVar41;
            __this_10.fields._current = (Il2CppObject *)__this_13;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_10,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
          }
          _Unwind_Resume(auVar40._0_8_);
        }
        __this_12 = (_union_249689)((_union_249689 *)(plVar24 + 0x19))->genericMethod;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          _Stack_80 = (_union_249689)0x4299e96;
          il2cpp_runtime_helper_02337ed0();
          in_XMM1._8_8_ = extraout_XMM1_Qb_01;
          in_XMM1._0_8_ = extraout_XMM1_Qa_01;
        }
        _Var22.genericMethod = (Characters_Human_o *)0x0;
        _Stack_80 = (_union_249689)0x4299ea2;
        _Var23 = __this_12;
        bVar12 = UnityEngine_Object__op_Inequality
                           (__this_12.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
label_04299efc:
          unaff_RBX = p_Var26;
          if ((p_Var26->genericMethod != (Characters_Human_o *)0x0) &&
             (_Var23 = (_union_249689)(p_Var26->genericMethod->fields).crossfadeCache,
             _Var23.genericMethod != (Characters_Human_o *)0x0)) {
            if ((*(byte *)(*(long *)_Var23.genericMethod + 0x130) < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
               (in_RCX = *(Characters_Human_o **)(*(long *)_Var23.genericMethod + 200),
               *(long *)((long)in_RCX + (ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130) * 8 + -8) != TypeInfo_AHSSWeapon)) {
              _Stack_80 = (_union_249689)0x4299f59;
              (**(code **)(*(long *)_Var23.genericMethod + 0x1e8))
                        (_Var23.genericMethod,_Var21.genericMethod,
                         *(undefined8 *)(*(long *)_Var23.genericMethod + 0x1f0));
              in_XMM1._8_8_ = extraout_XMM1_Qb_02;
              in_XMM1._0_8_ = extraout_XMM1_Qa_02;
              in_RCX = p_Var26->genericMethod;
              _Var22 = _Var21;
              goto joined_r0x0429a3de;
            }
            if (_Var21.genericMethod != (Characters_Human_o *)0x0) {
              _Var22 = (_union_249689)0x143;
              _Stack_80 = (_union_249689)0x429a26f;
              _Var23 = _Var21;
              bVar12 = Settings_KeybindSetting__Contains_4101260(_Var21.genericMethod,0x143,(MethodInfo *)0x0)
              ;
              if ((char)bVar12 == '\0') {
label_0429a289:
                _Var22.genericMethod = (Characters_Human_o *)0x0;
                _Stack_80 = (_union_249689)0x429a295;
                _Var23 = _Var21;
                bVar12 = Settings_KeybindSetting__GetKeyUp(_Var21.genericMethod,0,(MethodInfo *)0x0);
                in_RCX = p_Var26->genericMethod;
                if ((in_RCX != (Characters_Human_o *)0x0) &&
                   (_Var23 = (_union_249689)(in_RCX->fields).crossfadeCache,
                   _Var23.genericMethod != (Characters_Human_o *)0x0)) {
                  in_RCX = *(Characters_Human_o **)(*(long *)_Var23.genericMethod + 0x1f8);
                  if ((char)bVar12 == '\0') {
                    _Stack_80 = (_union_249689)0x429a322;
                    (*(code *)in_RCX)(_Var23.genericMethod,0,
                                      *(undefined8 *)(*(long *)_Var23.genericMethod + 0x200));
                    in_XMM1._8_8_ = extraout_XMM1_Qb_08;
                    in_XMM1._0_8_ = extraout_XMM1_Qa_08;
                    goto label_0429a322;
                  }
                  _Var22 = (_union_249689)0x1;
                  _Stack_80 = (_union_249689)0x429a2cd;
                  (*(code *)in_RCX)();
                  in_XMM1._8_8_ = extraout_XMM1_Qb_06;
                  in_XMM1._0_8_ = extraout_XMM1_Qa_06;
                  pUVar14 = (__this->fields)._inGameMenu;
                  if (pUVar14 != (UI_InGameMenu_o *)0x0) goto label_0429a2da;
                }
              }
              else {
                pUVar14 = (__this->fields)._inGameMenu;
                if (pUVar14 != (UI_InGameMenu_o *)0x0) {
                  if ((char)(pUVar14->fields).SkipAHSSInput == '\0') goto label_0429a289;
label_0429a2da:
                  *(undefined1 *)&(pUVar14->fields).SkipAHSSInput = 0;
label_0429a322:
                  unaff_RBX = (_union_249689 *)p_Var26->genericMethod;
                  _Var22.genericMethod = (Characters_Human_o *)0x0;
                  _Stack_80 = (_union_249689)0x429a331;
                  bVar12 = Settings_KeybindSetting__GetKey(_Var21.genericMethod,0,(MethodInfo *)0x0);
                  uVar18 = (undefined7)((ulong)in_RCX >> 8);
                  in_RCX = (Characters_Human_o *)CONCAT71(uVar18,1);
                  _Var23 = _Var21;
                  if ((char)bVar12 == '\0') {
                    if ((p_Var26->genericMethod == (Characters_Human_o *)0x0) ||
                       (pSVar15 = (p_Var26->genericMethod->fields).crossfadeCache,
                       pSVar15 == (System_Object_array *)0x0)) goto label_0429a1cb;
                    in_RCX = (Characters_Human_o *)
                             CONCAT71(uVar18,*(undefined1 *)((long)&pSVar15->max_length + 4));
                  }
                  if (unaff_RBX != (_union_249689 *)0x0) {
                    *(char *)(unaff_RBX + 0x5b) = (char)in_RCX;
                    in_RCX = p_Var26->genericMethod;
                    goto joined_r0x0429a3de;
                  }
                }
              }
            }
          }
        }
        else {
          unaff_RBX = p_Var26;
          if (__this_12.genericMethod != (Characters_Human_o *)0x0) {
            _Var22.genericMethod = (Characters_Human_o *)0x0;
            _Stack_80 = (_union_249689)0x4299eb9;
            _Var23 = __this_12;
            bVar12 = UI_ChatPanel__IsPointerOverChatUI(__this_12.genericMethod,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') goto label_04299efc;
            if (p_Var26->genericMethod != (Characters_Human_o *)0x0) {
              pSVar15 = (p_Var26->genericMethod->fields).crossfadeCache;
              _Var23.genericMethod = (Characters_Human_o *)0x0;
              if (pSVar15 != (System_Object_array *)0x0) {
                pIVar7 = (pSVar15->obj).klass;
                vtableDispatch = pIVar7->vtable[0xc].methodPtr;
                (*vtableDispatch)(pSVar15,0,pIVar7->vtable[0xc].method,vtableDispatch);
                return;
              }
            }
          }
        }
      }
      else {
        bVar19 = *(byte *)(*(long *)_Var23.genericMethod + 0x130);
        in_RCX = (Characters_Human_o *)CONCAT71(0x55767,bVar19);
        __this_12._1_7_ = 0;
        __this_12._0_1_ = *(byte *)((long)TypeInfo_AmmoWeapon.genericMethod + 0x130);
        _Var22 = TypeInfo_AmmoWeapon;
        if (((bVar19 < *(byte *)((long)TypeInfo_AmmoWeapon.genericMethod + 0x130)) ||
            (lVar6 = *(long *)(*(long *)_Var23.genericMethod + 200),
            *(void **)(lVar6 + -8 + (long)__this_12.genericMethod * 8) != TypeInfo_AmmoWeapon.genericMethod)) ||
           (*(int *)((long)_Var23.genericMethod + 0x48) != 0)) goto label_04299e13;
        bVar1 = *(byte *)(lVar16 + 0x130);
        _Var22._1_7_ = 0;
        _Var22._0_1_ = bVar1;
        if ((bVar1 <= bVar19) && (*(long *)(lVar6 + -8 + (long)_Var22.genericMethod * 8) == lVar16)) {
          _Var22.genericMethod = (Characters_Human_o *)0x0;
          _Stack_80 = (_union_249689)0x429a393;
          bVar12 = Characters_ThunderspearWeapon__HasActiveProjectile(_Var23.genericMethod,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') goto label_04299e13;
        }
        p_Var25 = p_Var26;
        if (_Var21.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        _Var22.genericMethod = (Characters_Human_o *)0x0;
        _Stack_80 = (_union_249689)0x429a3b0;
        bVar12 = Settings_KeybindSetting__GetKeyDown(_Var21.genericMethod,0,(MethodInfo *)0x0);
        _Var23 = _Var21;
        if ((char)bVar12 == '\0') {
label_0429a1bf:
          in_RCX = p_Var26->genericMethod;
        }
        else {
          _Var23.genericMethod = p_Var26->genericMethod;
          if (_Var23.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
          if (*(bool_conflict *)((long)_Var23.genericMethod + 0x158) != 0) goto label_0429a1bf;
          _Var22.genericMethod = (Characters_Human_o *)0x0;
          _Stack_80 = (_union_249689)0x429a3d8;
          Characters_Human__Reload(_Var23.genericMethod,(MethodInfo *)0x0);
          in_RCX = p_Var26->genericMethod;
        }
joined_r0x0429a3de:
        unaff_RBX = p_Var26;
        p_Var25 = p_Var26;
        if (in_RCX != (Characters_Human_o *)0x0) {
          __this_12 = (_union_249689)(in_RCX->fields).OnPlayerPropertiesChanged;
          if (__this_12.genericMethod == (Characters_Human_o *)0x0) goto joined_r0x0429a313;
          in_R10B = *(char *)((long)&(in_RCX->fields)._mountedVelocity.fields.x + 2);
          uVar13 = 0;
          if (in_R10B != '\0') {
            lVar16 = *(long *)__this_12.genericMethod;
            if (((((*(byte *)(TypeInfo_EscapeSpecial + 0x130) <= *(byte *)(lVar16 + 0x130)) &&
                  (*(long *)(*(long *)(lVar16 + 200) + -8 + (ulong)*(byte *)(TypeInfo_EscapeSpecial + 0x130) * 8) ==
                   TypeInfo_EscapeSpecial)) ||
                 ((*(byte *)(TypeInfo_ShifterTransformSpecial + 0x130) <= *(byte *)(lVar16 + 0x130) &&
                  (*(long *)(*(long *)(lVar16 + 200) + -8 + (ulong)*(byte *)(TypeInfo_ShifterTransformSpecial + 0x130) * 8) ==
                   TypeInfo_ShifterTransformSpecial)))) || (uVar13 = 0, (in_RCX->fields).FinishSetup != 7)) &&
               (uVar13 = 0, *(int *)((long)&(in_RCX->fields).Weapon + 4) != 1)) {
              iVar2 = (in_RCX->fields).FinishSetup;
              uVar13 = 0;
              if ((((iVar2 != 1) && (uVar13 = 0, iVar2 != 8)) && (uVar13 = 0, iVar2 != 9)) &&
                 (uVar13 = 0, cVar27 == '\0')) {
                uVar13 = *(byte *)&(in_RCX->fields).FeedVictimName ^ 1;
              }
            }
          }
          bVar19 = *(byte *)(*(long *)__this_12.genericMethod + 0x130);
          if (bVar19 < *(byte *)(TypeInfo_BaseHoldAttackSpecial + 0x130)) goto joined_r0x0429a068;
          _Var23 = (_union_249689)((_union_249689 *)(*(long *)__this_12.genericMethod + 200))->genericMethod;
          if (*(long *)((long)_Var23.genericMethod + (ulong)*(byte *)(TypeInfo_BaseHoldAttackSpecial + 0x130) * 8 + -8) ==
              TypeInfo_BaseHoldAttackSpecial) goto label_0429a1d0;
          goto joined_r0x0429a068;
        }
      }
    }
  }
label_0429a1cb:
  do {
    uVar13 = _Var22._0_4_;
    bVar19 = (byte)unaff_RBX;
    _Stack_80 = (_union_249689)0x429a1d0;
    il2cpp_runtime_helper_022b2c90();
    p_Var26 = p_Var25;
label_0429a1d0:
    if ((in_R10B == '\0') || (iVar2 = (in_RCX->fields).FinishSetup, iVar2 == 7)) {
joined_r0x0429a068:
      if (uVar13 != 0) goto label_0429a06e;
label_0429a233:
      _Var22.genericMethod = (Characters_Human_o *)0x0;
      _Stack_80 = (_union_249689)0x429a249;
      (**(code **)(*(long *)__this_12.genericMethod + 0x1f8))
                (__this_12.genericMethod,0,*(undefined8 *)(*(long *)__this_12.genericMethod + 0x200));
      in_XMM1._8_8_ = extraout_XMM1_Qb_05;
      in_XMM1._0_8_ = extraout_XMM1_Qa_05;
    }
    else {
      if (iVar2 == 8) {
label_0429a224:
        if (uVar13 == 0) goto label_0429a233;
      }
      else {
        if (iVar2 == 1) {
          if (bVar19 < *(byte *)(TypeInfo_StockSpecial + 0x130)) goto label_0429a224;
          if (*(long *)((long)_Var23.genericMethod + (ulong)*(byte *)(TypeInfo_StockSpecial + 0x130) * 8 + -8) !=
              TypeInfo_StockSpecial) goto joined_r0x0429a068;
        }
        if ((*(int *)((long)&(in_RCX->fields).Weapon + 4) == 1) || (cVar27 != '\0')) goto joined_r0x0429a068;
        if (uVar13 == 0 && *(char *)&(in_RCX->fields).FeedVictimName == '\x01') goto label_0429a233;
      }
label_0429a06e:
      lVar16 = *(long *)__this_12.genericMethod;
      bVar19 = (byte)(TypeInfo_AHSSTwinShot->fields).MountState;
      in_RCX = TypeInfo_AHSSTwinShot;
      if ((*(byte *)(lVar16 + 0x130) < bVar19) ||
         (_Var22 = (_union_249689)((_union_249689 *)(lVar16 + 200))->genericMethod,
         *(Characters_Human_o **)((long)_Var22.genericMethod + (ulong)bVar19 * 8 + -8) != TypeInfo_AHSSTwinShot)) {
        _Stack_80 = (_union_249689)0x429a0b1;
        _Var22 = (_union_249689)auStack_78;
        (**(code **)(lVar16 + 0x1e8))(__this_12.genericMethod,auStack_78,*(undefined8 *)(lVar16 + 0x1f0));
        in_XMM1._8_8_ = extraout_XMM1_Qb_03;
        in_XMM1._0_8_ = extraout_XMM1_Qa_03;
      }
      else {
        unaff_RBX = p_Var26;
        _Var23.genericMethod = (Characters_Human_o *)0x0;
        p_Var25 = p_Var26;
        if (auStack_78 == (undefined1  [8])0x0) goto label_0429a1cb;
        _Stack_80 = (_union_249689)0x429a2f9;
        uVar13 = Settings_KeybindSetting__GetKeyUp
                           ((Settings_KeybindSetting_o *)auStack_78,0,(MethodInfo *)0x0);
        in_RCX = *(Characters_Human_o **)__this_12.genericMethod;
        uVar31._0_4_ = (in_RCX->fields).CancelHookBothKey;
        uVar31._4_4_ = (in_RCX->fields).CanDodge;
        _Var22._0_4_ = uVar13 & 0xff;
        _Var22._4_4_ = 0;
        _Stack_80 = (_union_249689)0x429a310;
        (**(code **)&(in_RCX->fields).CancelHookLeftKey)(__this_12.genericMethod,_Var22.genericMethod,uVar31);
        in_XMM1._8_8_ = extraout_XMM1_Qb_07;
        in_XMM1._0_8_ = extraout_XMM1_Qa_07;
      }
    }
joined_r0x0429a313:
    if (cVar27 != '\0') {
      return;
    }
    _Var23 = (_union_249689)p_Var26->genericMethod;
    unaff_RBX = p_Var26;
    p_Var25 = p_Var26;
  } while (_Var23.genericMethod == (Characters_Human_o *)0x0);
  if (*(char *)((long)_Var23.genericMethod + 0x68) != '\0') {
    return;
  }
  if (*(bool_conflict *)((long)_Var23.genericMethod + 0x158) == 0xf) {
    return;
  }
  if (*(int *)((long)_Var23.genericMethod + 0x118) == 1) {
    pSVar4 = (__this->fields)._humanInput;
    if ((pSVar4 != (Settings_HumanInputSettings_o *)0x0) &&
       (_Var23 = (_union_249689)(pSVar4->fields).HorseMount, _Var23.genericMethod != (Characters_Human_o *)0x0
       )) {
      _Var22.genericMethod = (Characters_Human_o *)0x0;
      _Stack_80 = (_union_249689)0x429a40c;
      bVar12 = Settings_KeybindSetting__GetKeyDown(_Var23.genericMethod,0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
label_0429a429:
        pSVar4 = (__this->fields)._humanInput;
        if ((pSVar4 == (Settings_HumanInputSettings_o *)0x0) ||
           (_Var23 = (_union_249689)(pSVar4->fields).HorseJump,
           _Var23.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
        _Var22.genericMethod = (Characters_Human_o *)0x0;
        _Stack_80 = (_union_249689)0x429a44f;
        bVar12 = Settings_KeybindSetting__GetKeyDown(_Var23.genericMethod,0,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') goto label_0429a6a6;
        if ((p_Var26->genericMethod == (void *)0x0) ||
           (_Var23 = (_union_249689)((_union_249689 *)((long)p_Var26->genericMethod + 0x120))->genericMethod,
           _Var23.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
        _Var22.genericMethod = (Characters_Human_o *)0x0;
        _Stack_80 = (_union_249689)0x429a47a;
        Characters_Horse__Jump(_Var23.genericMethod,(MethodInfo *)0x0);
        pvVar8 = p_Var26->genericMethod;
      }
      else {
        _Var23 = (_union_249689)p_Var26->genericMethod;
        if (_Var23.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        if (*(bool_conflict *)((long)_Var23.genericMethod + 0x158) != 0) goto label_0429a429;
        _Var22.genericMethod = (Characters_Human_o *)0x0;
        _Stack_80 = (_union_249689)0x429a6a6;
        Characters_Human__Unmount(_Var23.genericMethod,0,(MethodInfo *)0x0);
label_0429a6a6:
        pvVar8 = p_Var26->genericMethod;
      }
      if (pvVar8 != (void *)0x0) {
        if (*(int *)((long)pvVar8 + 0x158) != 0) {
          return;
        }
        if (*(char *)((long)pvVar8 + 0x1ee) == '\0') {
          return;
        }
        pSVar4 = (__this->fields)._humanInput;
        if (pSVar4 != (Settings_HumanInputSettings_o *)0x0) {
          pSVar9 = (pSVar4->fields).Reload;
          _Var23.genericMethod = (Characters_Human_o *)0x0;
          if (pSVar9 != (Settings_KeybindSetting_o *)0x0) {
            _Var22.genericMethod = (Characters_Human_o *)0x0;
            _Stack_80 = (_union_249689)0x429a6f6;
            bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar9,0,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              return;
            }
            _Var23.genericMethod = (Characters_Human_o *)0x0;
            if (p_Var26->genericMethod != (Characters_Human_o *)0x0) {
              Characters_Human__Reload(p_Var26->genericMethod,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    goto label_0429a1cb;
  }
  if (*(int *)((long)_Var23.genericMethod + 0x118) != 0) {
    return;
  }
  _Var22.genericMethod = (Characters_Human_o *)0x0;
  _Stack_80 = (_union_249689)0x429a0fb;
  bVar12 = Characters_Human__CanJump(_Var23.genericMethod,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    pSVar4 = (__this->fields)._humanInput;
    if ((pSVar4 == (Settings_HumanInputSettings_o *)0x0) ||
       (_Var23 = (_union_249689)(pSVar4->fields).Jump, _Var23.genericMethod == (Characters_Human_o *)0x0))
    goto label_0429a1cb;
    _Var22.genericMethod = (Characters_Human_o *)0x0;
    _Stack_80 = (_union_249689)0x429a126;
    bVar12 = Settings_KeybindSetting__GetKeyDown(_Var23.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      _Var23 = (_union_249689)p_Var26->genericMethod;
      if (_Var23.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
      _Var22.genericMethod = (Characters_Human_o *)0x0;
      _Stack_80 = (_union_249689)0x429a141;
      Characters_Human__Jump(_Var23.genericMethod,(MethodInfo *)0x0);
      pvVar8 = p_Var26->genericMethod;
      goto joined_r0x0429a592;
    }
    pSVar4 = (__this->fields)._humanInput;
    if ((pSVar4 == (Settings_HumanInputSettings_o *)0x0) ||
       (_Var23 = (_union_249689)(pSVar4->fields).HorseMount, _Var23.genericMethod == (Characters_Human_o *)0x0
       )) goto label_0429a1cb;
    _Var22.genericMethod = (Characters_Human_o *)0x0;
    _Stack_80 = (_union_249689)0x429a4e1;
    bVar12 = Settings_KeybindSetting__GetKeyDown(_Var23.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (p_Var26->genericMethod == (void *)0x0) goto label_0429a1cb;
      __this_12 = (_union_249689)((_union_249689 *)((long)p_Var26->genericMethod + 0x120))->genericMethod;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        _Stack_80 = (_union_249689)0x429a510;
        il2cpp_runtime_helper_02337ed0();
        in_XMM1._8_8_ = extraout_XMM1_Qb_09;
        in_XMM1._0_8_ = extraout_XMM1_Qa_09;
      }
      _Var22.genericMethod = (Characters_Human_o *)0x0;
      _Stack_80 = (_union_249689)0x429a51c;
      _Var23 = __this_12;
      bVar12 = UnityEngine_Object__op_Inequality
                         (__this_12.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        pvVar8 = p_Var26->genericMethod;
        if (pvVar8 == (void *)0x0) goto label_0429a1cb;
        if (*(int *)((long)pvVar8 + 0x118) == 0) {
          if (((*(long *)((long)pvVar8 + 0x120) == 0) ||
              (lVar16 = *(long *)(*(long *)((long)pvVar8 + 0x120) + 0x70), lVar16 == 0)) ||
             (_Var23 = (_union_249689)((_union_249689 *)(lVar16 + 0x10))->genericMethod,
             _Var23.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
          _Var22.genericMethod = (Characters_Human_o *)0x0;
          _Stack_80 = (_union_249689)0x429a74c;
          UVar39 = UnityEngine_Transform__get_position(_Var23.genericMethod,(MethodInfo *)0x0);
          auVar32._4_12_ = in_XMM1._4_12_;
          auVar32._0_4_ = UVar39.fields.z;
          if ((p_Var26->genericMethod == (void *)0x0) ||
             (lVar16 = *(long *)((long)p_Var26->genericMethod + 0x70), lVar16 == 0)) goto label_0429a1cb;
          uStack_60 = extraout_XMM0_Dc;
          auStack_68 = UVar39.fields._0_8_;
          uStack_5c = extraout_XMM0_Dd;
          __this_01 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
          _Var23.genericMethod = (Characters_Human_o *)0x0;
          _auStack_78 = auVar32;
          if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_0429a1cb;
          _Var22.genericMethod = (Characters_Human_o *)0x0;
          _Stack_80 = (_union_249689)0x429a782;
          UVar39 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
          auVar33._4_12_ = auVar32._4_12_;
          auVar33._0_4_ = UVar39.fields.z;
          fVar29 = UVar39.fields.x;
          fVar30 = UVar39.fields.y;
          uVar31 = auVar33._0_8_;
          if (g_data_057a68cb == '\0') {
            auStack_58._8_4_ = extraout_XMM0_Dc_00;
            auStack_58._0_8_ = UVar39.fields._0_8_;
            auStack_58._12_4_ = extraout_XMM0_Dd_00;
            _Stack_80 = (_union_249689)0x429a7a1;
            auStack_48 = auVar33;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
            fVar29 = (float)auStack_58._0_4_;
            fVar30 = (float)auStack_58._4_4_;
            uVar31 = auStack_48._0_8_;
          }
          auVar34._4_4_ = auStack_68._4_4_;
          auVar34._0_4_ = auStack_68._4_4_;
          auVar34._8_4_ = uStack_60;
          auVar34._12_4_ = uStack_5c;
          auVar35._4_12_ = auVar34._4_12_;
          auVar35._0_4_ = (float)auStack_68._4_4_ - fVar30;
          fVar36 = (float)auStack_78._0_4_ - (float)uVar31;
          fVar38 = (float)auStack_78._4_4_ - (float)((ulong)uVar31 >> 0x20);
          _Var23 = TypeInfo_Math;
          fVar37 = (float)auStack_68._0_4_ - fVar29;
          if (*(int *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
            auStack_78._4_4_ = (float)auStack_68._0_4_ - fVar29;
            auStack_78._0_4_ = fVar36;
            fStack_70 = fVar38;
            fStack_6c = (float)auStack_68._4_4_ - fVar30;
            _Stack_80 = (_union_249689)0x429a7f1;
            _auStack_68 = auVar35;
            il2cpp_runtime_helper_02337ed0();
            auVar35 = _auStack_68;
            fVar36 = (float)auStack_78._0_4_;
            fVar37 = (float)auStack_78._4_4_;
          }
          fVar29 = fVar37 * fVar37 + auVar35._0_4_ * auVar35._0_4_ + fVar36 * fVar36;
          if (fVar29 < 0.0) {
            _Stack_80 = (_union_249689)0x429a833;
            fVar29 = sqrtf(fVar29);
          }
          else {
            fVar29 = SQRT(fVar29);
          }
          if (fVar29 < 15.0) {
            _Var23 = (_union_249689)p_Var26->genericMethod;
            if (_Var23.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
            if (*(char *)((long)_Var23.genericMethod + 0xcc) == '\0') {
              _Var22.genericMethod = (Characters_Human_o *)0x0;
              _Stack_80 = (_union_249689)0x429a864;
              Characters_Human__MountHorse(_Var23.genericMethod,(MethodInfo *)0x0);
              pvVar8 = p_Var26->genericMethod;
              goto joined_r0x0429a592;
            }
          }
        }
      }
    }
    pSVar4 = (__this->fields)._humanInput;
    if ((pSVar4 == (Settings_HumanInputSettings_o *)0x0) ||
       (_Var23 = (_union_249689)(pSVar4->fields).Dodge, _Var23.genericMethod == (Characters_Human_o *)0x0))
    goto label_0429a1cb;
    _Var22.genericMethod = (Characters_Human_o *)0x0;
    _Stack_80 = (_union_249689)0x429a55c;
    bVar12 = Settings_KeybindSetting__GetKeyDown(_Var23.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') goto label_0429a58c;
    _Var23 = (_union_249689)p_Var26->genericMethod;
    if (_Var23.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
    fVar29 = *(float *)((long)_Var23.genericMethod + 200);
    if (*(char *)((long)_Var23.genericMethod + 0xcc) != '\0') {
      fVar29 = fVar29 + 180.0;
    }
    _Var22.genericMethod = (Characters_Human_o *)0x0;
    _Stack_80 = (_union_249689)0x429a58c;
    Characters_Human__Dodge(_Var23.genericMethod,fVar29,(MethodInfo *)0x0);
  }
label_0429a58c:
  pvVar8 = p_Var26->genericMethod;
joined_r0x0429a592:
  if (pvVar8 != (void *)0x0) {
    if (*(int *)((long)pvVar8 + 0x158) == 0) {
      pSVar4 = (__this->fields)._humanInput;
      if ((pSVar4 == (Settings_HumanInputSettings_o *)0x0) ||
         (_Var23 = (_union_249689)(pSVar4->fields).Reload, _Var23.genericMethod == (Characters_Human_o *)0x0))
      goto label_0429a1cb;
      _Var22.genericMethod = (Characters_Human_o *)0x0;
      _Stack_80 = (_union_249689)0x429a5c4;
      bVar12 = Settings_KeybindSetting__GetKeyDown(_Var23.genericMethod,0,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        _Var23 = (_union_249689)p_Var26->genericMethod;
        if (_Var23.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        _Var22.genericMethod = (Characters_Human_o *)0x0;
        _Stack_80 = (_union_249689)0x429a5db;
        Characters_Human__Reload(_Var23.genericMethod,(MethodInfo *)0x0);
      }
    }
    if (p_Var26->genericMethod != (void *)0x0) {
      if (*(int *)((long)p_Var26->genericMethod + 0x11c) != 1) {
        return;
      }
      pSVar4 = (__this->fields)._humanInput;
      if ((pSVar4 != (Settings_HumanInputSettings_o *)0x0) &&
         (_Var23 = (_union_249689)(pSVar4->fields).HorseMount,
         _Var23.genericMethod != (Characters_Human_o *)0x0)) {
        _Var22.genericMethod = (Characters_Human_o *)0x0;
        _Stack_80 = (_union_249689)0x429a617;
        bVar12 = Settings_KeybindSetting__GetKeyDown(_Var23.genericMethod,0,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
          return;
        }
        if ((p_Var26->genericMethod != (void *)0x0) &&
           (lVar16 = *(long *)((long)p_Var26->genericMethod + 0x70), lVar16 != 0)) {
          __this_00 = *(Photon_Pun_PhotonView_o **)(lVar16 + 0x20);
          _Var22.genericMethod = (Characters_Human_o *)0x0;
          _Stack_80 = (_union_249689)0x429a64d;
          _Var23 = TypeInfo_object;
          pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
          unaff_RBX = (_union_249689 *)0x0;
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"UncarryRPC",0,pSVar15,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  goto label_0429a1cb;
code_r0x0429ab7d:
  if (*(float *)((long)plVar24 + 100) <= 0.0) {
    lVar16 = plVar24[0xb];
    if (lVar16 == 0) goto label_0429ab90;
label_0429ab4d:
    *(undefined1 *)(lVar16 + 0x2f2) = 0;
  }
  goto label_0429ab54;
label_0429ab10:
  bVar12 = Settings_InputKey__GetKeyUp(pSVar43,(MethodInfo *)0x0);
  pSVar43 = __this_13;
  if ((char)bVar12 != '\0') {
    lVar16 = plVar24[0xb];
    if (lVar16 == 0) goto label_0429acd8;
label_0429aacd:
    *(undefined1 *)(lVar16 + 0x2f2) = 0;
    pSVar43 = __this_13;
  }
  goto label_0429aad4;
code_r0x0429ac2e:
  __this_13 = pSVar43;
  bVar12 = Settings_InputKey__GetKey(pSVar43,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') goto label_0429ac10;
  if (plVar24[0xb] != 0) {
    *(undefined4 *)(plVar24[0xb] + 0x210) = 0x3f800000;
    bVar12 = Settings_InputKey__IsWheel(pSVar43,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') goto label_0429ac10;
    lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (lVar16 == 0) goto label_0429acc9;
    lVar16 = *(long *)(lVar16 + 0x28);
    if (lVar16 == 0) goto label_0429acce;
    lVar16 = *(long *)(lVar16 + 0xb8);
    if (lVar16 != 0) {
      *(undefined4 *)(plVar24 + 0xc) = *(undefined4 *)(lVar16 + 0x14);
      goto label_0429ac10;
    }
    goto label_0429acd3;
  }
label_0429acb5:
  il2cpp_runtime_helper_022b2c90();
label_0429acba:
  il2cpp_runtime_helper_022b2c90();
label_0429acbf:
  il2cpp_runtime_helper_022b2c90();
  goto label_0429acc4;
}


// Controllers.HumanPlayerController$$ToggleUI
// il2cpp: void Controllers_HumanPlayerController__ToggleUI (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x429c130

void Controllers_HumanPlayerController__ToggleUI
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Transform_o *pUVar3;
  Settings_KeybindSetting_o *pSVar4;
  code *pcVar5;
  bool_conflict bVar6;
  UnityEngine_LayerMask_o UVar7;
  Controllers_ErenShifterPlayerController_o *x;
  UnityEngine_Behaviour_o *__this_00;
  Controllers_ErenShifterPlayerController_o *__this_01;
  Settings_GeneralInputSettings_o *method_00;
  System_Int32_array *layers;
  undefined4 uVar8;
  MethodInfo_255A0F0 *pMVar9;
  Controllers_ErenShifterPlayerController_o *__this_02;
  UnityEngine_Quaternion_o UVar10;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o euler_02;
  
  if (g_data_057add09 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"DefaultMenu(Clone)");
    g_data_057add09 = '\x01';
  }
  x = (Controllers_ErenShifterPlayerController_o *)
      UnityEngine_GameObject__Find("DefaultMenu(Clone)",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar8 = 0;
  __this_02 = x;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  if (x != (Controllers_ErenShifterPlayerController_o *)0x0) {
    __this_00 = (UnityEngine_Behaviour_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x,MethodInfo_Canvas_GetComponent_Canvas);
    pMVar9 = MethodInfo_Canvas_GetComponent_Canvas;
    __this_01 = (Controllers_ErenShifterPlayerController_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x,MethodInfo_Canvas_GetComponent_Canvas);
    uVar8 = SUB84(pMVar9,0);
    __this_02 = x;
    if (__this_01 != (Controllers_ErenShifterPlayerController_o *)0x0) {
      uVar8 = 0;
      bVar6 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this_01,(MethodInfo *)0x0);
      __this_02 = __this_01;
      if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled(__this_00,(uint)(byte)((byte)bVar6 ^ 1),(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  switch(uVar8) {
  case 1:
    if (g_data_057adcc8 == '\0') {
      __this_02 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_SceneLoader;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcc8 = '\x01';
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
      __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar10 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
        UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar10,(MethodInfo *)0x0);
        euler.fields.x = UVar11.fields.x * 57.29578;
        euler.fields.y = UVar11.fields.y * 57.29578;
        euler.fields.z = UVar11.fields.z * 57.29578;
        UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        atan2f(1.0,0.0);
        return;
      }
    }
    break;
  case 2:
    if (g_data_057adcc8 == '\0') {
      __this_02 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_SceneLoader;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcc8 = '\x01';
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
      __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar10 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
        UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar10,(MethodInfo *)0x0);
        euler_01.fields.x = UVar11.fields.x * 57.29578;
        euler_01.fields.y = UVar11.fields.y * 57.29578;
        euler_01.fields.z = UVar11.fields.z * 57.29578;
        UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
        atan2f(-1.0,0.0);
        return;
      }
    }
    break;
  case 3:
    if (g_data_057adcc8 == '\0') {
      __this_02 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_SceneLoader;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcc8 = '\x01';
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
      __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar10 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
        UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar10,(MethodInfo *)0x0);
        euler_00.fields.x = UVar11.fields.x * 57.29578;
        euler_00.fields.y = UVar11.fields.y * 57.29578;
        euler_00.fields.z = UVar11.fields.z * 57.29578;
        UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
        atan2f(0.0,-1.0);
        return;
      }
    }
    break;
  case 4:
    if (g_data_057adcc8 == '\0') {
      __this_02 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_SceneLoader;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcc8 = '\x01';
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
      __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar10 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
        UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar10,(MethodInfo *)0x0);
        euler_02.fields.x = UVar11.fields.x * 57.29578;
        euler_02.fields.y = UVar11.fields.y * 57.29578;
        euler_02.fields.z = UVar11.fields.z * 57.29578;
        UnityEngine_Quaternion__Internal_MakePositive(euler_02,(MethodInfo *)0x0);
        atan2f(0.0,1.0);
        return;
      }
    }
    break;
  default:
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add0d == '\0') {
    __this_02 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0d = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x30);
    __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add0e == '\0') {
    __this_02 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0e = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x38);
    __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add0f == '\0') {
    __this_02 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0f = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x68);
    __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add10 == '\0') {
    __this_02 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add10 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x30);
    __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add11 == '\0') {
    __this_02 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add11 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x38);
    __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add12 == '\0') {
    __this_02 = (Controllers_ErenShifterPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add12 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x40);
    __this_02 = (Controllers_ErenShifterPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_HumanState);
    g_data_057add13 = '\x01';
  }
  *(undefined4 *)&__this_02[1].klass = 0x3e4ccccd;
  method_00 = (Settings_GeneralInputSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)method_00,MethodInfo_HashSet_1_Characters_HumanState);
  if (method_00 == (Settings_GeneralInputSettings_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057add14 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
      il2cpp_runtime_helper_023445d0(&TypeInfo_int);
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
      g_data_057add14 = '\x01';
    }
    layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (layers != (System_Int32_array *)0x0) {
      uVar1 = (uint)layers->max_length;
      if (uVar1 != 0) {
        lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
        layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
        if ((((uVar1 != 1) && (layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14), 2 < uVar1)) &&
            (layers->m_Items[2] = *(int32_t *)(lVar2 + 0x38), uVar1 != 3)) &&
           (layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30), 4 < uVar1)) {
          layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
          UVar7 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanPlayerController + 0xb8))->m_Mask = (int32_t)UVar7.fields.m_Mask;
          return;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,7,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,10,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,8,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,4,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,9,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,0xf,MethodInfo_Boolean_Add);
  __this_02[1].fields._generalInput = method_00;
  il2cpp_runtime_helper_022b4080(&__this_02[1].fields._generalInput);
  Controllers_BasePlayerController___ctor(__this_02,(MethodInfo *)method_00);
  return;
}


// Controllers.HumanPlayerController$$UpdateReelInput
// il2cpp: void Controllers_HumanPlayerController__UpdateReelInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x429a880

void Controllers_HumanPlayerController__UpdateReelInput
               (Controllers_HumanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  System_Collections_Generic_List_InputKey__o *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool bVar5;
  bool_conflict bVar6;
  Characters_Human_o *pCVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  Settings_InputKey_o *__this_10;
  Settings_InputKey_o *pSVar14;
  undefined1 local_48 [16];
  Settings_InputKey_o *local_38;
  
  if (g_data_057add0a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0();
    g_data_057add0a = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  __this_10 = (Settings_InputKey_o *)0x0;
  fVar10 = (__this->fields)._reelOutScrollTimeLeft;
  fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar10 = fVar10 - fVar9;
  (__this->fields)._reelOutScrollTimeLeft = fVar10;
  if (fVar10 <= 0.0) {
    pCVar7 = (__this->fields)._human;
    if (pCVar7 == (Characters_Human_o *)0x0) goto label_0429acc4;
    (pCVar7->fields).CanMountedAttack = 0;
  }
  pSVar1 = (__this->fields)._humanInput;
  if ((pSVar1 != (Settings_HumanInputSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ReelIn, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
    bVar6 = Settings_KeybindSetting__GetKey(pSVar2,0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      fVar10 = (__this->fields)._reelInScrollCooldownLeft;
      fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      (__this->fields)._reelInScrollCooldownLeft = fVar10 - fVar9;
      pSVar1 = (__this->fields)._humanInput;
      if (((pSVar1 != (Settings_HumanInputSettings_o *)0x0) &&
          (pSVar2 = (pSVar1->fields).ReelIn, pSVar2 != (Settings_KeybindSetting_o *)0x0)) &&
         (pSVar3 = (pSVar2->fields).InputKeys, pSVar3 != (System_Collections_Generic_List_InputKey__o *)0x0))
      {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
        bVar5 = false;
        pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
        pIVar13 = (Il2CppType *)local_48._8_8_;
        __this_10 = local_38;
        while (__this_00.fields._8_8_ = pIVar13,
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
              __this_00.fields._current = (Il2CppObject *)__this_10,
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
              (char)bVar6 != '\0') {
          if (__this_10 == (Settings_InputKey_o *)0x0) goto label_0429acba;
          bVar6 = Settings_InputKey__IsWheel(__this_10,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            bVar5 = true;
          }
        }
        __this_01.fields._8_8_ = pIVar13;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
        __this_01.fields._current = (Il2CppObject *)__this_10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        pSVar1 = (__this->fields)._humanInput;
        if (((pSVar1 != (Settings_HumanInputSettings_o *)0x0) &&
            (pSVar2 = (pSVar1->fields).ReelIn, pSVar2 != (Settings_KeybindSetting_o *)0x0)) &&
           (pSVar3 = (pSVar2->fields).InputKeys, pSVar3 != (System_Collections_Generic_List_InputKey__o *)0x0)
           ) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                     (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
          pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
          pIVar13 = (Il2CppType *)local_48._8_8_;
          pSVar14 = local_38;
          __this_10 = local_38;
          if (!bVar5) {
label_0429ab54:
            __this_03.fields._8_8_ = pIVar13;
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
            __this_03.fields._current = (Il2CppObject *)__this_10;
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
            if ((char)bVar6 != '\0') {
              if (__this_10 == (Settings_InputKey_o *)0x0) goto label_0429acbf;
              bVar6 = Settings_InputKey__IsWheel(__this_10,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') goto code_r0x0429ab7d;
              pCVar7 = (__this->fields)._human;
              if (pCVar7 == (Characters_Human_o *)0x0) goto label_0429acd8;
              goto label_0429ab4d;
            }
            goto label_0429ab95;
          }
label_0429aad4:
          __this_02.fields._8_8_ = pIVar13;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
          __this_02.fields._current = (Il2CppObject *)pSVar14;
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
          __this_10 = pSVar14;
          if ((char)bVar6 != '\0') {
            if (pSVar14 == (Settings_InputKey_o *)0x0) goto label_0429acbf;
            bVar6 = Settings_InputKey__IsWheel(pSVar14,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') goto label_0429ab10;
            pSVar14 = __this_10;
            if (0.0 < (__this->fields)._reelInScrollCooldownLeft) goto label_0429aad4;
            pCVar7 = (__this->fields)._human;
            if (pCVar7 != (Characters_Human_o *)0x0) goto label_0429aacd;
label_0429ab90:
            il2cpp_runtime_helper_022b2c90();
          }
label_0429ab95:
          __this_04.fields._8_8_ = pIVar13;
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
          __this_04.fields._current = (Il2CppObject *)__this_10;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          goto label_0429aba7;
        }
      }
    }
    else {
      pCVar7 = (__this->fields)._human;
      if (pCVar7 != (Characters_Human_o *)0x0) {
        if (*(char *)((long)&(pCVar7->fields).LastGoodHeadAngle.fields.x + 2) == '\0') {
          (pCVar7->fields).InvincibleTimeLeft = -1.0;
        }
        (__this->fields)._reelInScrollCooldownLeft = (__this->fields)._reelInScrollCooldown;
        pSVar1 = (__this->fields)._humanInput;
        goto joined_r0x0429a991;
      }
    }
  }
label_0429acc4:
  il2cpp_runtime_helper_022b2c90();
label_0429acc9:
  il2cpp_runtime_helper_022b2c90();
label_0429acce:
  il2cpp_runtime_helper_022b2c90();
label_0429acd3:
  il2cpp_runtime_helper_022b2c90();
label_0429acd8:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pIVar13;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_07.fields._current = (Il2CppObject *)__this_10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar4 == 0) {
label_0429aba7:
      pSVar1 = (__this->fields)._humanInput;
joined_r0x0429a991:
      if (((pSVar1 != (Settings_HumanInputSettings_o *)0x0) &&
          (pSVar2 = (pSVar1->fields).ReelOut, pSVar2 != (Settings_KeybindSetting_o *)0x0)) &&
         (pSVar3 = (pSVar2->fields).InputKeys, pSVar3 != (System_Collections_Generic_List_InputKey__o *)0x0))
      {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
        pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
        pIVar13 = (Il2CppType *)local_48._8_8_;
        __this_10 = local_38;
label_0429ac10:
        pSVar14 = __this_10;
        __this_05.fields._8_8_ = pIVar13;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
        __this_05.fields._current = (Il2CppObject *)pSVar14;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        if ((char)bVar6 == '\0') {
          __this_06.fields._8_8_ = pIVar13;
          __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
          __this_06.fields._current = (Il2CppObject *)pSVar14;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
          return;
        }
        if (pSVar14 != (Settings_InputKey_o *)0x0) goto code_r0x0429ac2e;
        il2cpp_runtime_helper_022b2c90();
        __this_10 = pSVar14;
        goto label_0429acb5;
      }
      goto label_0429acc4;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
    __this_09.fields._8_8_ = pIVar13;
    __this_09.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_09.fields._current = (Il2CppObject *)__this_10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  }
  else {
    __this_08.fields._8_8_ = pIVar13;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_08.fields._current = (Il2CppObject *)__this_10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  }
  _Unwind_Resume(auVar11._0_8_);
code_r0x0429ab7d:
  if ((__this->fields)._reelInScrollCooldownLeft <= 0.0) {
    pCVar7 = (__this->fields)._human;
    if (pCVar7 == (Characters_Human_o *)0x0) goto label_0429ab90;
label_0429ab4d:
    *(undefined1 *)((long)&(pCVar7->fields).LastGoodHeadAngle.fields.x + 2) = 0;
  }
  goto label_0429ab54;
label_0429ab10:
  bVar6 = Settings_InputKey__GetKeyUp(pSVar14,(MethodInfo *)0x0);
  pSVar14 = __this_10;
  if ((char)bVar6 != '\0') {
    pCVar7 = (__this->fields)._human;
    if (pCVar7 == (Characters_Human_o *)0x0) goto label_0429acd8;
label_0429aacd:
    *(undefined1 *)((long)&(pCVar7->fields).LastGoodHeadAngle.fields.x + 2) = 0;
    pSVar14 = __this_10;
  }
  goto label_0429aad4;
code_r0x0429ac2e:
  __this_10 = pSVar14;
  bVar6 = Settings_InputKey__GetKey(pSVar14,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') goto label_0429ac10;
  pCVar7 = (__this->fields)._human;
  if (pCVar7 != (Characters_Human_o *)0x0) {
    (pCVar7->fields).CanMountedAttack = 0x3f800000;
    bVar6 = Settings_InputKey__IsWheel(pSVar14,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto label_0429ac10;
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (lVar4 == 0) goto label_0429acc9;
    lVar4 = *(long *)(lVar4 + 0x28);
    if (lVar4 == 0) goto label_0429acce;
    lVar4 = *(long *)(lVar4 + 0xb8);
    if (lVar4 != 0) {
      (__this->fields)._reelOutScrollTimeLeft = *(float *)(lVar4 + 0x14);
      goto label_0429ac10;
    }
    goto label_0429acd3;
  }
label_0429acb5:
  il2cpp_runtime_helper_022b2c90();
label_0429acba:
  il2cpp_runtime_helper_022b2c90();
label_0429acbf:
  il2cpp_runtime_helper_022b2c90();
  goto label_0429acc4;
}


// Controllers.HumanPlayerController$$UpdateDashInput
// il2cpp: void Controllers_HumanPlayerController__UpdateDashInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x429aef0

void Controllers_HumanPlayerController__UpdateDashInput
               (Controllers_HumanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  float *pfVar1;
  undefined8 uVar2;
  int iVar3;
  Characters_Human_o *pCVar4;
  Settings_HumanInputSettings_o *pSVar5;
  System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *pSVar6;
  Characters_Horse_o *pCVar7;
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *pAVar8;
  long lVar9;
  UnityEngine_Camera_o *__this_00;
  System_String_o *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  System_Collections_Generic_Dictionary_HumanDashDirection__float__o *pSVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_07;
  undefined1 auVar17 [16];
  System_Nullable_Vector3__o percentPower;
  System_Nullable_Vector3__o percentPower_00;
  undefined1 auVar18 [16];
  char cVar19;
  bool_conflict bVar20;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar21;
  Settings_KeybindSetting_o *pSVar22;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar23;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  long *plVar24;
  uint uVar25;
  float fVar26;
  float fVar29;
  float fVar27;
  uint uVar30;
  float fVar28;
  undefined4 uVar31;
  uint extraout_XMM0_Dc;
  uint uVar32;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  uint extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 uVar33;
  uint extraout_XMM0_Dd;
  uint uVar34;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar35 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o direction;
  undefined1 auVar43 [12];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o direction_00;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o direction_01;
  System_Nullable_Vector3__o __this_08;
  System_Nullable_Vector3__o __this_09;
  float in_stack_ffffffffffffff28;
  float in_stack_ffffffffffffff2c;
  float in_stack_ffffffffffffff30;
  float in_stack_ffffffffffffff34;
  float in_stack_ffffffffffffff38;
  float in_stack_ffffffffffffff3c;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [20];
  float fStack_84;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  undefined1 local_58 [8];
  uint uStack_50;
  uint uStack_4c;
  undefined1 local_48 [24];
  
  if (g_data_057add0b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeybindSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Characters_HumanD);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanDashDirection_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057add0b = '\x01';
  }
  local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  local_68 = (InvokerMethod)0x0;
  pCVar4 = (__this->fields)._human;
  if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
  if (*(char *)((long)&(pCVar4->fields).Animation + 4) != '\0') {
    return;
  }
  iVar3 = (pCVar4->fields).FinishSetup;
  if (iVar3 == 3) {
    return;
  }
  if (iVar3 == 7) {
    return;
  }
  if (*(int *)&(pCVar4->fields).Weapon != 0) {
    return;
  }
  if (*(int *)((long)&(pCVar4->fields).Weapon + 4) == 1) {
    return;
  }
  if (iVar3 == 8) {
    return;
  }
  if (iVar3 == 0xf) {
    return;
  }
  if (iVar3 == 10) {
    return;
  }
  if ((char)inMenu != '\0') {
    return;
  }
  if (*(char *)&(pCVar4->fields).FeedVictimName != '\0') {
    return;
  }
  pSVar5 = (__this->fields)._humanInput;
  if (pSVar5 == (Settings_HumanInputSettings_o *)0x0) goto label_0429bec9;
  pSVar22 = (pSVar5->fields).Dash;
  if (pSVar22 == (Settings_KeybindSetting_o *)0x0) goto label_0429bec9;
  bVar20 = Settings_KeybindSetting__GetKeyDown(pSVar22,0,(MethodInfo *)0x0);
  pMVar23 = extraout_RDX;
  fVar26 = 0.0;
  if ((char)bVar20 == '\0') goto label_0429bc51;
  pSVar6 = (__this->fields)._dashKeys;
  if (pSVar6 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0)
  goto label_0429bec9;
  pSVar21 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Keys
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Characters_HumanD);
  if (pSVar21 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_0429bec9;
  System_Collections_Generic_Dictionary_KeyCollection_Int32Enum__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_98,
             pSVar21,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  local_68 = (InvokerMethod)CONCAT44(fStack_84,local_98._16_4_);
  pIStack_70 = (Il2CppMethodPointer)CONCAT44(local_98._12_4_,local_98._8_4_);
  local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_98._0_8_;
  do {
    __this_01.fields._dictionary._4_4_ = in_stack_ffffffffffffff2c;
    __this_01.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
    __this_01.fields._index = (int32_t)in_stack_ffffffffffffff30;
    __this_01.fields._version = (int32_t)in_stack_ffffffffffffff34;
    __this_01.fields._currentKey._0_4_ = in_stack_ffffffffffffff38;
    __this_01.fields._currentKey._4_4_ = in_stack_ffffffffffffff3c;
    bVar20 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Int32Enum__object___MoveNext
                       (__this_01,(MethodInfo_3249770 *)&local_78);
    if ((char)bVar20 == '\0') {
      __this_03.fields._dictionary._4_4_ = in_stack_ffffffffffffff2c;
      __this_03.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
      __this_03.fields._index = (int32_t)in_stack_ffffffffffffff30;
      __this_03.fields._version = (int32_t)in_stack_ffffffffffffff34;
      __this_03.fields._currentKey._0_4_ = in_stack_ffffffffffffff38;
      __this_03.fields._currentKey._4_4_ = in_stack_ffffffffffffff3c;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Int32Enum__object___Dispose
                (__this_03,(MethodInfo_3249760 *)&local_78);
      goto label_0429b134;
    }
    pSVar6 = (__this->fields)._dashKeys;
    if (pSVar6 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0)
    goto label_0429beec;
    fVar26 = local_68._0_4_;
    pSVar22 = (Settings_KeybindSetting_o *)
              System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
                         (int32_t)local_68._0_4_,MethodInfo_KeybindSetting_get_Item);
    if (pSVar22 == (Settings_KeybindSetting_o *)0x0) goto label_0429bef1;
    bVar20 = Settings_KeybindSetting__GetKey(pSVar22,0,(MethodInfo *)0x0);
  } while ((char)bVar20 == '\0');
  __this_02.fields._dictionary._4_4_ = in_stack_ffffffffffffff2c;
  __this_02.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
  __this_02.fields._index = (int32_t)in_stack_ffffffffffffff30;
  __this_02.fields._version = (int32_t)in_stack_ffffffffffffff34;
  __this_02.fields._currentKey._0_4_ = in_stack_ffffffffffffff38;
  __this_02.fields._currentKey._4_4_ = in_stack_ffffffffffffff3c;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Int32Enum__object___Dispose
            (__this_02,(MethodInfo_3249760 *)&local_78);
  pMVar23 = extraout_RDX_00;
  if (fVar26 != 0.0) goto label_0429bc51;
label_0429b134:
  pCVar4 = (__this->fields)._human;
  if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
  pCVar7 = (pCVar4->fields).Horse;
  if (pCVar7 == (Characters_Horse_o *)0x0) goto label_0429bec9;
  plVar24 = *(long **)&(pCVar7->fields).HasExplicitNameTag;
  if (plVar24 == (long *)0x0) goto label_0429bec9;
  cVar19 = (**(code **)(*plVar24 + 0x238))();
  if (cVar19 != '\0') {
    pCVar4 = (__this->fields)._human;
    if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
    pCVar7 = (pCVar4->fields).Horse;
    if (pCVar7 == (Characters_Horse_o *)0x0) goto label_0429bec9;
    pAVar8 = *(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o **)
              &(pCVar7->fields).HasExplicitNameTag;
    if (pAVar8 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0) goto label_0429bec9;
    bVar20 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                       (pAVar8,(MethodInfo *)0x0);
    if ((char)bVar20 != '\0') {
      lVar9 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (lVar9 == 0) goto label_0429bec9;
      __this_00 = *(UnityEngine_Camera_o **)(lVar9 + 0x20);
      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar42 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Camera_o *)0x0) goto label_0429bec9;
      UnityEngine_Camera__ScreenPointToRay_4db37e0
                ((UnityEngine_Ray_o *)local_98,__this_00,UVar42,(MethodInfo *)0x0);
      auVar40._4_4_ = local_98._16_4_;
      auVar40._0_4_ = local_98._12_4_;
      auVar40._8_8_ = 0;
      in_stack_ffffffffffffff30 = 0.0;
      in_stack_ffffffffffffff34 = 0.0;
      in_stack_ffffffffffffff28 = (float)local_98._12_4_;
      in_stack_ffffffffffffff2c = (float)local_98._16_4_;
      in_stack_ffffffffffffff38 = fStack_84;
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        auVar40._4_4_ = in_stack_ffffffffffffff2c;
        auVar40._0_4_ = in_stack_ffffffffffffff28;
        auVar40._8_4_ = in_stack_ffffffffffffff30;
        auVar40._12_4_ = in_stack_ffffffffffffff34;
        g_data_057a6845 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_Math[2].fields._inGameMenu + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        auVar40._4_4_ = in_stack_ffffffffffffff2c;
        auVar40._0_4_ = in_stack_ffffffffffffff28;
        auVar40._8_4_ = in_stack_ffffffffffffff30;
        auVar40._12_4_ = in_stack_ffffffffffffff34;
      }
      uVar31 = 0;
      uVar33 = 0;
      fVar26 = in_stack_ffffffffffffff38 * in_stack_ffffffffffffff38 +
               auVar40._4_4_ * auVar40._4_4_ + auVar40._0_4_ * auVar40._0_4_;
      auVar35 = ZEXT816(0);
      if (fVar26 < 0.0) {
        fVar26 = sqrtf(fVar26);
        auVar40._4_4_ = in_stack_ffffffffffffff2c;
        auVar40._0_4_ = in_stack_ffffffffffffff28;
        auVar40._8_4_ = in_stack_ffffffffffffff30;
        auVar40._12_4_ = in_stack_ffffffffffffff34;
        uVar31 = extraout_XMM0_Dc_00;
        uVar33 = extraout_XMM0_Dd_00;
        if (fVar26 <= 1e-05) goto label_0429b539;
label_0429b51f:
        fVar29 = in_stack_ffffffffffffff38 / fVar26;
        auVar14._4_4_ = fVar26;
        auVar14._0_4_ = fVar26;
        auVar14._8_4_ = uVar31;
        auVar14._12_4_ = uVar33;
        auVar37 = divps(auVar40,auVar14);
        pCVar4 = (__this->fields)._human;
      }
      else {
        fVar26 = SQRT(fVar26);
        if (1e-05 < fVar26) goto label_0429b51f;
label_0429b539:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          auVar35._8_8_ = extraout_XMM1_Qb;
          auVar35._0_8_ = extraout_XMM1_Qa;
          g_data_057a65d5 = '\x01';
        }
        auVar37._8_8_ = 0;
        auVar37._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
        fVar29 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
        pCVar4 = (__this->fields)._human;
      }
      if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
      lVar9 = *(long *)&(pCVar4->fields).Dead;
      if (lVar9 == 0) goto label_0429bec9;
      in_stack_ffffffffffffff28 = auVar37._0_4_;
      in_stack_ffffffffffffff2c = auVar37._4_4_;
      in_stack_ffffffffffffff30 = auVar37._8_4_;
      in_stack_ffffffffffffff34 = auVar37._12_4_;
      pUVar11 = *(UnityEngine_Transform_o **)(lVar9 + 0x10);
      in_stack_ffffffffffffff38 = fVar29;
      if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0429bec9;
      UVar42 = UnityEngine_Transform__get_right(pUVar11,(MethodInfo *)0x0);
      auVar36._4_12_ = auVar35._4_12_;
      auVar36._0_4_ = UVar42.fields.z;
      fVar26 = UVar42.fields.x;
      fVar28 = UVar42.fields.y;
      if (g_data_057ac7d7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
        auVar36 = ZEXT416((uint)auVar36._0_4_);
        g_data_057ac7d7 = '\x01';
      }
      fVar27 = auVar36._0_4_;
      fVar41 = fVar27 * fVar27 + fVar28 * fVar28 + fVar26 * fVar26;
      local_b8._4_4_ = in_stack_ffffffffffffff2c;
      local_b8._0_4_ = in_stack_ffffffffffffff28;
      local_b8._8_4_ = in_stack_ffffffffffffff30;
      local_b8._12_4_ = in_stack_ffffffffffffff34;
      if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar41) {
        fVar38 = fVar29 * fVar27 + fVar28 * in_stack_ffffffffffffff2c + in_stack_ffffffffffffff28 * fVar26;
        auVar39._0_4_ = fVar38 * fVar26;
        auVar39._4_4_ = fVar38 * fVar28;
        auVar39._8_4_ = extraout_XMM0_Dc_01 * 0.0;
        auVar39._12_4_ = extraout_XMM0_Dd_01 * 0.0;
        auVar16._4_4_ = fVar41;
        auVar16._0_4_ = fVar41;
        auVar16._8_4_ = auVar36._8_4_;
        auVar16._12_4_ = auVar36._12_4_;
        auVar40 = divps(auVar39,auVar16);
        local_b8._0_4_ = in_stack_ffffffffffffff28 - auVar40._0_4_;
        local_b8._4_4_ = in_stack_ffffffffffffff2c - auVar40._4_4_;
        local_b8._8_4_ = in_stack_ffffffffffffff30 - auVar40._8_4_;
        local_b8._12_4_ = in_stack_ffffffffffffff34 - auVar40._12_4_;
        fVar26 = fVar29 - (fVar27 * fVar38) / fVar41;
        if (g_data_057a6845 != '\0') goto label_0429b638;
label_0429b6e9:
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
        iVar3 = *(int *)((long)&TypeInfo_Math[2].fields._inGameMenu + 4);
      }
      else {
        fVar26 = fVar29;
        if (g_data_057a6845 == '\0') goto label_0429b6e9;
label_0429b638:
        iVar3 = *(int *)((long)&TypeInfo_Math[2].fields._inGameMenu + 4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar31 = 0;
      uVar33 = 0;
      fVar26 = fVar26 * fVar26 + local_b8._4_4_ * local_b8._4_4_ + local_b8._0_4_ * local_b8._0_4_;
      if (fVar26 < 0.0) {
        fVar26 = sqrtf(fVar26);
        uVar31 = extraout_XMM0_Dc_02;
        uVar33 = extraout_XMM0_Dd_02;
        if (fVar26 <= 1e-05) goto label_0429b75f;
label_0429b745:
        auVar13._4_4_ = fVar26;
        auVar13._0_4_ = fVar26;
        auVar13._8_4_ = uVar31;
        auVar13._12_4_ = uVar33;
        divps(local_b8,auVar13);
        pCVar4 = (__this->fields)._human;
        in_stack_ffffffffffffff38 = fVar29;
      }
      else {
        fVar26 = SQRT(fVar26);
        if (1e-05 < fVar26) goto label_0429b745;
label_0429b75f:
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        pCVar4 = (__this->fields)._human;
        in_stack_ffffffffffffff38 = fVar29;
      }
      if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
      lVar9 = *(long *)&(pCVar4->fields).Dead;
      if (lVar9 == 0) goto label_0429bec9;
      pUVar11 = *(UnityEngine_Transform_o **)(lVar9 + 0x10);
      if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0429bec9;
      UVar42 = UnityEngine_Transform__get_forward(pUVar11,(MethodInfo *)0x0);
      pCVar4 = (__this->fields)._human;
      if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
      lVar9 = *(long *)&(pCVar4->fields).Dead;
      if (lVar9 == 0) goto label_0429bec9;
      local_48._0_4_ = UVar42.fields.z;
      uStack_50 = extraout_XMM0_Dc_03;
      local_58 = UVar42.fields._0_8_;
      uStack_4c = extraout_XMM0_Dd_03;
      pUVar11 = *(UnityEngine_Transform_o **)(lVar9 + 0x10);
      if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0429bec9;
      pMVar23 = (MethodInfo *)0x0;
      UnityEngine_Transform__get_right(pUVar11,(MethodInfo *)0x0);
      plVar24 = (long *)0x0;
      fVar26 = (float)il2cpp_runtime_helper_040f57f0(local_58._0_4_);
      fVar26 = fVar26 / 90.0;
      auVar43 = ZEXT812(0x3f800000);
      if (fVar26 <= 1.0) {
        auVar43._4_8_ = 0;
        auVar43._0_4_ = fVar26;
      }
      fVar26 = (float)(-(uint)(0.0 <= fVar26) & auVar43._0_4_);
      local_48._4_4_ = 0;
      local_48._0_4_ = fVar26;
      local_48._8_4_ = extraout_XMM0_Dc_04 & auVar43._8_4_;
      local_48._12_4_ = 0;
      if (g_data_057a6932 == '\0') {
        plVar24 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
        fVar26 = (float)local_48._0_4_;
      }
      pfVar1 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
      fVar29 = *pfVar1;
      local_b8._0_8_ = *(undefined8 *)pfVar1;
      uVar30 = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
      fVar28 = fVar29;
      if (0.0 < fVar26) {
        pCVar4 = (__this->fields)._human;
        if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
        pCVar7 = (pCVar4->fields).Horse;
        if (pCVar7 == (Characters_Horse_o *)0x0) goto label_0429bec9;
        plVar24 = *(long **)&(pCVar7->fields).HasExplicitNameTag;
        if ((Controllers_BasePlayerController_o *)plVar24 == (Controllers_BasePlayerController_o *)0x0)
        goto label_0429bec9;
        pMVar23 = (MethodInfo *)0x0;
        local_b8._4_4_ =
             Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio
                       ((Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)plVar24,(MethodInfo *)0x0
                       );
        local_b8._0_4_ = fVar29;
      }
      UVar42.fields.y = in_stack_ffffffffffffff2c;
      UVar42.fields.x = in_stack_ffffffffffffff28;
      pCVar4 = (__this->fields)._human;
      UVar42.fields.z = in_stack_ffffffffffffff38;
      fVar26 = Controllers_BasePlayerController__GetTargetAngle_418b0d0
                         ((Controllers_BasePlayerController_o *)plVar24,UVar42,pMVar23);
      local_58._0_4_ = fVar26;
      local_98._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_98._8_4_ = 0.0;
      local_98._12_4_ = 0.0;
      value.fields.y = 0.0;
      value.fields.x = (float)uVar30;
      value.fields.z = fVar28;
      __this_08.fields.value.fields.y = (float)(int)local_b8._0_8_;
      __this_08.fields.value.fields.z = (float)(int)((ulong)local_b8._0_8_ >> 0x20);
      __this_08.fields._0_8_ = local_98;
      System_Nullable_Vector3____ctor(__this_08,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
      if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
      percentPower.fields.value.fields.y = (float)local_98._8_4_;
      percentPower.fields.hasValue = local_98._0_4_;
      percentPower.fields.value.fields.x = (float)local_98._4_4_;
      percentPower.fields.value.fields.z = (float)local_98._12_4_;
      direction_00.fields.y = in_stack_ffffffffffffff2c;
      direction_00.fields.x = in_stack_ffffffffffffff28;
      direction_00.fields.z = in_stack_ffffffffffffff38;
      bVar20 = Characters_Human__DashVertical
                         (pCVar4,(float)local_58._0_4_,direction_00,percentPower,(MethodInfo *)0x0);
      pMVar23 = extraout_RDX_04;
      fVar26 = 0.0;
      if ((char)bVar20 != '\0') {
        pCVar4 = (__this->fields)._human;
        if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
        pCVar7 = (pCVar4->fields).Horse;
        if (pCVar7 == (Characters_Horse_o *)0x0) goto label_0429bec9;
        plVar24 = *(long **)&(pCVar7->fields).HasExplicitNameTag;
        if (plVar24 == (long *)0x0) goto label_0429bec9;
        (**(code **)(*plVar24 + 600))(local_48._0_4_,plVar24,*(undefined8 *)(*plVar24 + 0x260));
        pMVar23 = extraout_RDX_05;
        fVar26 = 0.0;
      }
      goto label_0429bc51;
    }
  }
  pCVar4 = (__this->fields)._human;
  if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
  pCVar7 = (pCVar4->fields).Horse;
  if (pCVar7 == (Characters_Horse_o *)0x0) goto label_0429bec9;
  pSVar10 = (pCVar7->fields).VisibleName;
  if (pSVar10 == (System_String_o *)0x0) goto label_0429bec9;
  cVar19 = (*(pSVar10->klass->vtable)._16_System_IConvertible_ToInt32.methodPtr)();
  fVar26 = 0.0;
  pMVar23 = extraout_RDX_01;
  if (cVar19 != '\0') {
    pCVar4 = (__this->fields)._human;
    if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
    pCVar7 = (pCVar4->fields).Horse;
    if (pCVar7 == (Characters_Horse_o *)0x0) goto label_0429bec9;
    pAVar8 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)(pCVar7->fields).VisibleName;
    if (pAVar8 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0) goto label_0429bec9;
    fVar26 = 0.0;
    bVar20 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                       (pAVar8,(MethodInfo *)0x0);
    pMVar23 = extraout_RDX_02;
    if ((char)bVar20 != '\0') {
      pCVar4 = (__this->fields)._human;
      if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
      pCVar7 = (pCVar4->fields).Horse;
      if (pCVar7 == (Characters_Horse_o *)0x0) goto label_0429bec9;
      pAVar8 = *(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o **)
                &(pCVar7->fields).HasExplicitNameTag;
      if (pAVar8 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0) goto label_0429bec9;
      fVar26 = 0.0;
      bVar20 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                         (pAVar8,(MethodInfo *)0x0);
      pMVar23 = extraout_RDX_03;
      if ((char)bVar20 == '\0') {
        lVar9 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (lVar9 == 0) goto label_0429bec9;
        lVar9 = *(long *)(lVar9 + 0x28);
        if (lVar9 == 0) goto label_0429bec9;
        pUVar11 = *(UnityEngine_Transform_o **)(lVar9 + 0x10);
        if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_0429bec9;
        rotation = UnityEngine_Transform__get_rotation(pUVar11,(MethodInfo *)0x0);
        UVar42 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
        euler.fields.x = UVar42.fields.x * 57.29578;
        euler.fields.y = UVar42.fields.y * 57.29578;
        euler.fields.z = UVar42.fields.z * 57.29578;
        UVar42 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        in_stack_ffffffffffffff38 = UVar42.fields.x;
        in_stack_ffffffffffffff3c = UVar42.fields.y;
        lVar9 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (lVar9 == 0) goto label_0429bec9;
        pMVar23 = *(MethodInfo **)(lVar9 + 0x20);
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UVar42 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
        if (pMVar23 == (MethodInfo *)0x0) goto label_0429bec9;
        fVar27 = 360.0;
        uVar30 = 0;
        uVar32 = 0;
        uVar34 = 0;
        local_a8._0_4_ =
             (float)(~-(uint)(in_stack_ffffffffffffff38 < 0.0) & (uint)in_stack_ffffffffffffff38 |
                    (uint)(in_stack_ffffffffffffff38 + 360.0) & -(uint)(in_stack_ffffffffffffff38 < 0.0));
        local_a8._4_4_ = in_stack_ffffffffffffff3c;
        uStack_a0._0_4_ = extraout_XMM0_Dc;
        uStack_a0._4_4_ = extraout_XMM0_Dd;
        UnityEngine_Camera__ScreenPointToRay_4db37e0
                  ((UnityEngine_Ray_o *)local_98,(UnityEngine_Camera_o *)pMVar23,UVar42,(MethodInfo *)0x0);
        fVar26 = fStack_84;
        fVar29 = (float)local_98._12_4_;
        fVar28 = (float)local_98._16_4_;
        if (g_data_057a6845 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6845 = '\x01';
        }
        uVar25 = -(uint)((float)local_a8 < fVar27);
        register0x00001244 = local_a8._4_12_;
        local_58._0_4_ = (float)local_a8 + -360.0;
        plVar24 = (long *)TypeInfo_Math;
        if (*(int *)((long)&TypeInfo_Math[2].fields._inGameMenu + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        local_a8 = CONCAT44(uVar30 & (uint)in_stack_ffffffffffffff3c,uVar25 & (uint)(float)local_a8);
        uStack_a0._0_4_ = uVar32 & extraout_XMM0_Dc;
        uStack_a0._4_4_ = uVar34 & extraout_XMM0_Dd;
        uVar25 = ~uVar25 & local_58._0_4_;
        uVar30 = ~uVar30 & local_58._4_4_;
        uVar32 = ~uVar32 & uStack_50;
        uVar34 = ~uVar34 & uStack_4c;
        uVar31 = 0;
        uVar33 = 0;
        fVar27 = fVar26 * fVar26 + fVar28 * fVar28 + fVar29 * fVar29;
        if (fVar27 < 0.0) {
          fVar27 = sqrtf(fVar27);
          uVar31 = extraout_XMM0_Dc_05;
          uVar33 = extraout_XMM0_Dd_04;
        }
        else {
          fVar27 = SQRT(fVar27);
        }
        local_a8 = CONCAT44(uVar30,uVar25) | local_a8;
        uStack_a0 = CONCAT44(uVar34,uVar32) | uStack_a0;
        in_stack_ffffffffffffff28 = (float)local_a8;
        in_stack_ffffffffffffff2c = (float)(local_a8 >> 0x20);
        in_stack_ffffffffffffff30 = (float)uStack_a0;
        in_stack_ffffffffffffff34 = (float)(uStack_a0 >> 0x20);
        if (fVar27 <= 1e-05) {
          if (g_data_057a65d5 == '\0') {
            plVar24 = &TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a65d5 = '\x01';
          }
          uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          in_stack_ffffffffffffff38 = (float)uVar2;
          in_stack_ffffffffffffff3c = (float)((ulong)uVar2 >> 0x20);
          fVar26 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        else {
          fVar26 = fVar26 / fVar27;
          auVar17._4_4_ = fVar28;
          auVar17._0_4_ = fVar29;
          auVar17._8_8_ = 0;
          auVar15._4_4_ = fVar27;
          auVar15._0_4_ = fVar27;
          auVar15._8_4_ = uVar31;
          auVar15._12_4_ = uVar33;
          auVar40 = divps(auVar17,auVar15);
          in_stack_ffffffffffffff38 = auVar40._0_4_;
          in_stack_ffffffffffffff3c = auVar40._4_4_;
        }
        if (g_data_057a6932 == '\0') {
          plVar24 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6932 = '\x01';
        }
        local_a8 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        local_48._0_4_ = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        fVar29 = 0.0;
        auVar18._12_4_ = 0;
        auVar18._0_12_ = stack0xffffffffffffffac;
        _local_58 = auVar18 << 0x20;
        if ((in_stack_ffffffffffffff28 <= 0.0) || (180.0 <= in_stack_ffffffffffffff28)) {
          pCVar4 = (__this->fields)._human;
          if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
          pCVar7 = (pCVar4->fields).Horse;
          if (pCVar7 == (Characters_Horse_o *)0x0) goto label_0429bec9;
          plVar24 = *(long **)&(pCVar7->fields).HasExplicitNameTag;
          if ((Controllers_BasePlayerController_o *)plVar24 == (Controllers_BasePlayerController_o *)0x0)
          goto label_0429bec9;
          pMVar23 = (MethodInfo *)0x0;
          fVar28 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio
                             ((Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)plVar24,
                              (MethodInfo *)0x0);
          local_58._0_4_ = 0x3f800000;
          local_a8 = CONCAT44(fVar28,(float)local_a8);
        }
        pCVar4 = (__this->fields)._human;
        direction.fields.y = in_stack_ffffffffffffff3c;
        direction.fields.x = in_stack_ffffffffffffff38;
        direction.fields.z = fVar26;
        in_stack_ffffffffffffff38 =
             Controllers_BasePlayerController__GetTargetAngle_418b0d0
                       ((Controllers_BasePlayerController_o *)plVar24,direction,pMVar23);
        if ((in_stack_ffffffffffffff28 <= 0.0) || (180.0 <= in_stack_ffffffffffffff28)) {
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          in_stack_ffffffffffffff28 = (float)uVar2;
          in_stack_ffffffffffffff2c = (float)((ulong)uVar2 >> 0x20);
          fVar28 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
        }
        else {
          if (g_data_057ac31b == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057ac31b = '\x01';
          }
          uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
          in_stack_ffffffffffffff28 = (float)uVar2;
          in_stack_ffffffffffffff2c = (float)((ulong)uVar2 >> 0x20);
          fVar28 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
        }
        in_stack_ffffffffffffff34 = 0.0;
        in_stack_ffffffffffffff30 = 0.0;
        local_98._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_98._8_4_ = 0.0;
        local_98._12_4_ = 0.0;
        value_00.fields.y = 0.0;
        value_00.fields.x = (float)local_48._0_4_;
        value_00.fields.z = fVar29;
        __this_09.fields.value.fields.y = (float)(int)local_a8;
        __this_09.fields.value.fields.z = (float)(int)(local_a8 >> 0x20);
        __this_09.fields._0_8_ = local_98;
        System_Nullable_Vector3____ctor(__this_09,value_00,MethodInfo_Nullable_1_UnityEngine_Vector3);
        if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
        percentPower_00.fields.value.fields.y = (float)local_98._8_4_;
        percentPower_00.fields.hasValue = local_98._0_4_;
        percentPower_00.fields.value.fields.x = (float)local_98._4_4_;
        percentPower_00.fields.value.fields.z = (float)local_98._12_4_;
        fVar26 = 0.0;
        direction_01.fields.y = in_stack_ffffffffffffff2c;
        direction_01.fields.x = in_stack_ffffffffffffff28;
        direction_01.fields.z = fVar28;
        bVar20 = Characters_Human__DashVertical
                           (pCVar4,in_stack_ffffffffffffff38,direction_01,percentPower_00,(MethodInfo *)0x0);
        pMVar23 = extraout_RDX_06;
        if ((char)bVar20 != '\0') {
          pCVar4 = (__this->fields)._human;
          if (pCVar4 == (Characters_Human_o *)0x0) goto label_0429bec9;
          pCVar7 = (pCVar4->fields).Horse;
          if (pCVar7 == (Characters_Horse_o *)0x0) goto label_0429bec9;
          pSVar10 = (pCVar7->fields).VisibleName;
          if (pSVar10 == (System_String_o *)0x0) goto label_0429bec9;
          (*(pSVar10->klass->vtable)._18_System_IConvertible_ToInt64.methodPtr)
                    (local_58._0_4_,pSVar10,(pSVar10->klass->vtable)._18_System_IConvertible_ToInt64.method);
          fVar26 = 0.0;
          pMVar23 = extraout_RDX_07;
        }
      }
    }
  }
label_0429bc51:
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar9 == 0) goto label_0429bec9;
  lVar9 = *(long *)(lVar9 + 0x28);
  if (lVar9 == 0) goto label_0429bec9;
  lVar9 = *(long *)(lVar9 + 0xa0);
  if (lVar9 == 0) goto label_0429bec9;
  if (*(char *)(lVar9 + 0x11) != '\0') {
    pSVar6 = (__this->fields)._dashKeys;
    if (pSVar6 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0)
    goto label_0429bec9;
    pSVar21 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Keys
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Characters_HumanD);
    if (pSVar21 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
    goto label_0429bec9;
    System_Collections_Generic_Dictionary_KeyCollection_Int32Enum__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_98,
               pSVar21,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    local_68 = (InvokerMethod)CONCAT44(fStack_84,local_98._16_4_);
    pIStack_70 = (Il2CppMethodPointer)CONCAT44(local_98._12_4_,local_98._8_4_);
    local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_98._0_8_;
    in_stack_ffffffffffffff38 = fVar26;
    while (__this_04.fields._dictionary._4_4_ = in_stack_ffffffffffffff2c,
          __this_04.fields._dictionary._0_4_ = in_stack_ffffffffffffff28,
          __this_04.fields._index = (int32_t)in_stack_ffffffffffffff30,
          __this_04.fields._version = (int32_t)in_stack_ffffffffffffff34,
          __this_04.fields._currentKey._0_4_ = in_stack_ffffffffffffff38,
          __this_04.fields._currentKey._4_4_ = in_stack_ffffffffffffff3c,
          bVar20 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Int32Enum__object___MoveNext
                             (__this_04,(MethodInfo_3249770 *)&local_78), (char)bVar20 != '\0') {
      pSVar12 = (__this->fields)._dashTimes;
      if (pSVar12 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
      goto label_0429bece;
      fVar26 = local_68._0_4_;
      fVar29 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,
                          (int32_t)local_68._0_4_,MethodInfo_Single_get_Item);
      if (0.0 <= fVar29) {
        pSVar12 = (__this->fields)._dashTimes;
        if (pSVar12 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
        goto label_0429bedd;
        in_stack_ffffffffffffff28 =
             System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,(int32_t)fVar26,
                        MethodInfo_Single_get_Item);
        fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_Int32Enum__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,(int32_t)fVar26,
                   in_stack_ffffffffffffff28 + fVar29,MethodInfo_Void_set_Item);
        pSVar12 = (__this->fields)._dashTimes;
        if (pSVar12 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
        goto label_0429bee7;
        fVar29 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,(int32_t)fVar26,
                            MethodInfo_Single_get_Item);
        if (0.2 < fVar29) {
          pSVar12 = (__this->fields)._dashTimes;
          if (pSVar12 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
          goto label_0429befb;
          System_Collections_Generic_Dictionary_Int32Enum__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,(int32_t)fVar26,-1.0,
                     MethodInfo_Void_set_Item);
        }
      }
      pSVar6 = (__this->fields)._dashKeys;
      if (pSVar6 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0)
      goto label_0429bed3;
      pSVar22 = (Settings_KeybindSetting_o *)
                System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,(int32_t)fVar26,
                           MethodInfo_KeybindSetting_get_Item);
      if (pSVar22 == (Settings_KeybindSetting_o *)0x0) goto label_0429bed8;
      bVar20 = Settings_KeybindSetting__GetKeyDown(pSVar22,0,(MethodInfo *)0x0);
      if ((char)bVar20 != '\0') {
        pSVar12 = (__this->fields)._dashTimes;
        if (pSVar12 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
        goto label_0429bee2;
        fVar29 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,(int32_t)fVar26,
                            MethodInfo_Single_get_Item);
        pSVar12 = (__this->fields)._dashTimes;
        if ((fVar29 != -1.0) || (NAN(fVar29))) {
          if (pSVar12 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
          goto label_0429bf00;
          fVar29 = System_Collections_Generic_Dictionary_Int32Enum__float___get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,(int32_t)fVar26
                              ,MethodInfo_Single_get_Item);
          if (0.0 < fVar29) {
            in_stack_ffffffffffffff38 = fVar26;
          }
        }
        else {
          if (pSVar12 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
          goto label_0429bef6;
          System_Collections_Generic_Dictionary_Int32Enum__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,(int32_t)fVar26,0.0,
                     MethodInfo_Void_set_Item);
        }
      }
    }
    __this_05.fields._dictionary._4_4_ = in_stack_ffffffffffffff2c;
    __this_05.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
    __this_05.fields._index = (int32_t)in_stack_ffffffffffffff30;
    __this_05.fields._version = (int32_t)in_stack_ffffffffffffff34;
    __this_05.fields._currentKey._0_4_ = in_stack_ffffffffffffff38;
    __this_05.fields._currentKey._4_4_ = in_stack_ffffffffffffff3c;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Int32Enum__object___Dispose
              (__this_05,(MethodInfo_3249760 *)&local_78);
    pMVar23 = extraout_RDX_08;
    fVar26 = in_stack_ffffffffffffff38;
  }
  do {
    if (fVar26 == 0.0) {
      return;
    }
    pCVar4 = (__this->fields)._human;
    fVar26 = Controllers_HumanPlayerController__GetDashAngle(__this,(int32_t)fVar26,pMVar23);
    if (pCVar4 != (Characters_Human_o *)0x0) {
      Characters_Human__Dash(pCVar4,fVar26,(MethodInfo *)0x0);
      return;
    }
label_0429bec9:
    il2cpp_runtime_helper_022b2c90();
label_0429bece:
    il2cpp_runtime_helper_022b2c90();
label_0429bed3:
    il2cpp_runtime_helper_022b2c90();
label_0429bed8:
    il2cpp_runtime_helper_022b2c90();
label_0429bedd:
    il2cpp_runtime_helper_022b2c90();
label_0429bee2:
    il2cpp_runtime_helper_022b2c90();
label_0429bee7:
    il2cpp_runtime_helper_022b2c90();
label_0429beec:
    il2cpp_runtime_helper_022b2c90();
label_0429bef1:
    il2cpp_runtime_helper_022b2c90();
label_0429bef6:
    il2cpp_runtime_helper_022b2c90();
label_0429befb:
    il2cpp_runtime_helper_022b2c90();
label_0429bf00:
    auVar43 = il2cpp_runtime_helper_022b2c90();
    if (auVar43._8_4_ != 1) goto label_0429c0f4;
    plVar24 = (long *)__cxa_begin_catch(auVar43._0_8_);
    lVar9 = *plVar24;
    __cxa_end_catch();
    __this_06.fields._dictionary._4_4_ = in_stack_ffffffffffffff2c;
    __this_06.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
    __this_06.fields._index = (int32_t)in_stack_ffffffffffffff30;
    __this_06.fields._version = (int32_t)in_stack_ffffffffffffff34;
    __this_06.fields._currentKey._0_4_ = in_stack_ffffffffffffff38;
    __this_06.fields._currentKey._4_4_ = in_stack_ffffffffffffff3c;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Int32Enum__object___Dispose
              (__this_06,(MethodInfo_3249760 *)&local_78);
    pMVar23 = extraout_RDX_09;
    fVar26 = in_stack_ffffffffffffff38;
  } while (lVar9 == 0);
  il2cpp_runtime_helper_022fefe0(lVar9);
label_0429c0f4:
  __this_07.fields._dictionary._4_4_ = in_stack_ffffffffffffff2c;
  __this_07.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
  __this_07.fields._index = (int32_t)in_stack_ffffffffffffff30;
  __this_07.fields._version = (int32_t)in_stack_ffffffffffffff34;
  __this_07.fields._currentKey._0_4_ = in_stack_ffffffffffffff38;
  __this_07.fields._currentKey._4_4_ = in_stack_ffffffffffffff3c;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_Int32Enum__object___Dispose
            (__this_07,(MethodInfo_3249760 *)&local_78);
  _Unwind_Resume(auVar43._0_8_);
}


// Controllers.HumanPlayerController$$GetDashAngle
// il2cpp: float Controllers_HumanPlayerController__GetDashAngle (Controllers_HumanPlayerController_o* __this, int32_t direction, const MethodInfo* method);
// 0x429c200

float Controllers_HumanPlayerController__GetDashAngle
                (Controllers_HumanPlayerController_o *__this,int32_t direction,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Transform_o *pUVar3;
  Settings_KeybindSetting_o *pSVar4;
  code *pcVar5;
  UnityEngine_LayerMask_o UVar6;
  MethodInfo *method_00;
  System_Int32_array *layers;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float fVar7;
  UnityEngine_Quaternion_o UVar8;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o euler_02;
  
  switch(direction) {
  case 1:
    if (g_data_057adcc8 == '\0') {
      __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SceneLoader;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcc8 = '\x01';
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
      __this = (Controllers_HumanPlayerController_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar8 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
        UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar8,(MethodInfo *)0x0);
        euler.fields.x = UVar9.fields.x * 57.29578;
        euler.fields.y = UVar9.fields.y * 57.29578;
        euler.fields.z = UVar9.fields.z * 57.29578;
        UVar9 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        atan2f(1.0,0.0);
        return UVar9.fields.y + 90.0 + -90.0;
      }
    }
    break;
  case 2:
    if (g_data_057adcc8 == '\0') {
      __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SceneLoader;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcc8 = '\x01';
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
      __this = (Controllers_HumanPlayerController_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar8 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
        UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar8,(MethodInfo *)0x0);
        euler_01.fields.x = UVar9.fields.x * 57.29578;
        euler_01.fields.y = UVar9.fields.y * 57.29578;
        euler_01.fields.z = UVar9.fields.z * 57.29578;
        UVar9 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
        atan2f(-1.0,0.0);
        return UVar9.fields.y + 90.0 + 90.0;
      }
    }
    break;
  case 3:
    if (g_data_057adcc8 == '\0') {
      __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SceneLoader;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcc8 = '\x01';
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
      __this = (Controllers_HumanPlayerController_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar8 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
        UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar8,(MethodInfo *)0x0);
        euler_00.fields.x = UVar9.fields.x * 57.29578;
        euler_00.fields.y = UVar9.fields.y * 57.29578;
        euler_00.fields.z = UVar9.fields.z * 57.29578;
        UVar9 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
        atan2f(0.0,-1.0);
        return UVar9.fields.y + 90.0 + -180.0;
      }
    }
    break;
  case 4:
    if (g_data_057adcc8 == '\0') {
      __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SceneLoader;
      il2cpp_runtime_helper_023445d0();
      g_data_057adcc8 = '\x01';
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
      __this = (Controllers_HumanPlayerController_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar8 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
        UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar8,(MethodInfo *)0x0);
        euler_02.fields.x = UVar9.fields.x * 57.29578;
        euler_02.fields.y = UVar9.fields.y * 57.29578;
        euler_02.fields.z = UVar9.fields.z * 57.29578;
        UVar9 = UnityEngine_Quaternion__Internal_MakePositive(euler_02,(MethodInfo *)0x0);
        atan2f(0.0,1.0);
        return UVar9.fields.y + 90.0;
      }
    }
    break;
  default:
    return 0.0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add0d == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0d = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x30);
    __this = (Controllers_HumanPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return extraout_XMM0_Da;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add0e == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0e = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x38);
    __this = (Controllers_HumanPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return extraout_XMM0_Da_00;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add0f == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0f = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x68);
    __this = (Controllers_HumanPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return extraout_XMM0_Da_01;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add10 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add10 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x30);
    __this = (Controllers_HumanPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return extraout_XMM0_Da_02;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add11 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add11 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x38);
    __this = (Controllers_HumanPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return extraout_XMM0_Da_03;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add12 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add12 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    pSVar4 = *(Settings_KeybindSetting_o **)(lVar2 + 0x40);
    __this = (Controllers_HumanPlayerController_o *)0x0;
    if (pSVar4 != (Settings_KeybindSetting_o *)0x0) {
      Settings_KeybindSetting__GetKey(pSVar4,0,(MethodInfo *)0x0);
      return extraout_XMM0_Da_04;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_HumanState);
    g_data_057add13 = '\x01';
  }
  (__this->fields)._reelInScrollCooldown = 0.2;
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)method_00,MethodInfo_HashSet_1_Characters_HumanState);
  if (method_00 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057add14 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
      il2cpp_runtime_helper_023445d0(&TypeInfo_int);
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
      g_data_057add14 = '\x01';
    }
    layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (layers != (System_Int32_array *)0x0) {
      uVar1 = (uint)layers->max_length;
      if (uVar1 != 0) {
        lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
        layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
        if ((((uVar1 != 1) && (layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14), 2 < uVar1)) &&
            (layers->m_Items[2] = *(int32_t *)(lVar2 + 0x38), uVar1 != 3)) &&
           (layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30), 4 < uVar1)) {
          layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
          UVar6 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanPlayerController + 0xb8))->m_Mask = (int32_t)UVar6.fields.m_Mask;
          return extraout_XMM0_Da_06;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    il2cpp_runtime_helper_022b2c90();
    pcVar5 = (code *)swi(3);
    fVar7 = (float)(*pcVar5)();
    return fVar7;
  }
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,7,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,10,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,8,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,4,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,9,MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_Int32Enum___Add
            ((System_Collections_Generic_HashSet_T__o *)method_00,0xf,MethodInfo_Boolean_Add);
  (__this->fields)._illegalWeaponStates = (System_Collections_Generic_HashSet_HumanState__o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._illegalWeaponStates);
  Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this,method_00);
  return extraout_XMM0_Da_05;
}


// Controllers.HumanPlayerController$$IsSpin3Special
// il2cpp: bool Controllers_HumanPlayerController__IsSpin3Special (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x4299a60

bool_conflict
Controllers_HumanPlayerController__IsSpin3Special
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Characters_Human_o *pCVar3;
  System_Action_Hashtable__o *pSVar4;
  System_Action_Hashtable__c *pSVar5;
  System_Collections_Generic_List_InputKey__o *pSVar6;
  UI_InGameMenu_o *pUVar7;
  Settings_InputKey_array *__this_00;
  UI_RoleSpritePickPopup_o *pUVar8;
  UI_ImportPopup_o *pUVar9;
  _union_249689 _Var10;
  long lVar11;
  code *vtableDispatch;
  Photon_Pun_PhotonView_o *__this_01;
  Settings_KeybindSetting_o *pSVar12;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_List_object__o *pSVar13;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_List_Enumerator_object__o __this_11;
  System_Collections_Generic_List_Enumerator_object__o __this_12;
  bool bVar14;
  bool_conflict bVar15;
  bool_conflict extraout_EAX;
  uint uVar16;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  ulong uVar17;
  UI_MessagePopup_o *pUVar18;
  ulong extraout_RAX;
  System_Object_array *parameters;
  long lVar19;
  long *plVar20;
  code *in_RCX;
  undefined7 uVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  byte bVar22;
  _union_249689 __this_13;
  System_String_o *pSVar23;
  _union_249689 _Var24;
  _union_249689 _Var25;
  _union_249689 _Var26;
  _union_249689 _Var27;
  _union_249689 __this_14;
  _union_249689 _Var28;
  long *plVar29;
  code in_R10B;
  _union_249689 _Var30;
  _union_249689 _Var31;
  char cVar32;
  float fVar33;
  float fVar34;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qa_10;
  undefined8 uVar35;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 extraout_XMM1_Qb_07;
  undefined8 extraout_XMM1_Qb_08;
  undefined8 extraout_XMM1_Qb_09;
  undefined8 extraout_XMM1_Qb_10;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  UnityEngine_Vector3_o UVar44;
  undefined1 auVar45 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar46;
  Il2CppType *pIVar47;
  Settings_InputKey_o *__this_15;
  Settings_InputKey_o *pSVar48;
  undefined1 auStack_d0 [16];
  Settings_InputKey_o *pSStack_c0;
  Il2CppRGCTXData *pIStack_b8;
  _union_249689 _Stack_b0;
  _union_249689 _Stack_a8;
  _union_249689 _Stack_a0;
  ulong uStack_98;
  _union_249689 _Stack_90;
  undefined1 auStack_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  _union_249689 _Stack_40;
  undefined1 auVar36 [16];
  
  uVar16 = (uint)method;
  _Var27 = (_union_249689)__this;
  if (g_data_057add0c == '\0') {
    _Var27.genericMethod = &TypeInfo_Spin3Special;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0c = '\x01';
  }
  pCVar3 = (__this->fields)._human;
  if (pCVar3 != (Characters_Human_o *)0x0) {
    if (((pCVar3->fields).FinishSetup == 9) &&
       (pSVar4 = (pCVar3->fields).OnPlayerPropertiesChanged, pSVar4 != (System_Action_Hashtable__o *)0x0)) {
      pSVar5 = pSVar4->klass;
      bVar22 = (TypeInfo_Spin3Special->_2).naturalAligment;
      if (bVar22 <= (pSVar5->_2).naturalAligment) {
        return (bool_conflict)
               CONCAT71((int7)((ulong)TypeInfo_Spin3Special >> 8),
                        (pSVar5->_2).typeHierarchy[(ulong)bVar22 - 1] == TypeInfo_Spin3Special);
      }
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_14 = _Var27;
  if (g_data_057add07 == '\0') {
    il2cpp_runtime_helper_023445d0(&"test");
    __this_14.genericMethod = &"Thunderspear";
    il2cpp_runtime_helper_023445d0();
    g_data_057add07 = '\x01';
  }
  pSVar6 = ((Settings_KeybindSetting_Fields *)((long)_Var27.genericMethod + 0x70))->InputKeys;
  if ((pSVar6 != (System_Collections_Generic_List_InputKey__o *)0x0) &&
     (__this_14 = (_union_249689)pSVar6[1].monitor, __this_14.genericMethod != (Characters_Human_o *)0x0)) {
    uVar16 = 0;
    bVar15 = Settings_KeybindSetting__GetKeyDown(__this_14.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
label_04299b7b:
      pSVar6 = ((Settings_KeybindSetting_Fields *)((long)_Var27.genericMethod + 0x70))->InputKeys;
      if (pSVar6 != (System_Collections_Generic_List_InputKey__o *)0x0) {
        __this_00 = pSVar6[1].fields._items;
        __this_14.genericMethod = (Characters_Human_o *)0x0;
        if (__this_00 != (Settings_InputKey_array *)0x0) {
          uVar16 = 0;
          bVar15 = Settings_KeybindSetting__GetKeyDown
                             ((Settings_KeybindSetting_o *)__this_00,0,(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            return bVar15;
          }
          pUVar7 = (UI_InGameMenu_o *)
                   ((Settings_KeybindSetting_Fields *)((long)_Var27.genericMethod + 0x30))->InputKeys;
          __this_14.genericMethod = (Characters_Human_o *)0x0;
          if (pUVar7 != (UI_InGameMenu_o *)0x0) {
            in_RCX = (code *)0xbb8;
            pSVar23 = "test";
            UI_InGameMenu__ShowKillFeed(pUVar7,"test","test",3000,"Thunderspear",(MethodInfo *)0x0);
            uVar16 = (uint)pSVar23;
            pUVar7 = (UI_InGameMenu_o *)
                     ((Settings_KeybindSetting_Fields *)((long)_Var27.genericMethod + 0x30))->InputKeys;
            __this_14.genericMethod = (Characters_Human_o *)0x0;
            if (pUVar7 != (UI_InGameMenu_o *)0x0) {
              UI_InGameMenu__ShowKillScore(pUVar7,3000,0,(MethodInfo *)0x0);
              return extraout_EAX;
            }
          }
        }
      }
    }
    else {
      pUVar7 = (UI_InGameMenu_o *)
               ((Settings_KeybindSetting_Fields *)((long)_Var27.genericMethod + 0x30))->InputKeys;
      __this_14.genericMethod = (Characters_Human_o *)0x0;
      if (pUVar7 != (UI_InGameMenu_o *)0x0) {
        in_RCX = (code *)&g_data_00000064;
        pSVar23 = "test";
        UI_InGameMenu__ShowKillFeed(pUVar7,"test","test",100,"Thunderspear",(MethodInfo *)0x0);
        uVar16 = (uint)pSVar23;
        __this_14 = (_union_249689)((_union_249689 *)((long)_Var27.genericMethod + 0x30))->genericMethod;
        if (__this_14.genericMethod != (Characters_Human_o *)0x0) {
          uVar16 = 100;
          in_RCX = (code *)0x0;
          UI_InGameMenu__ShowKillScore(__this_14.genericMethod,100,0,(MethodInfo *)0x0);
          goto label_04299b7b;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  auVar36._8_8_ = extraout_XMM1_Qb;
  auVar36._0_8_ = extraout_XMM1_Qa;
  uVar17 = (ulong)uVar16;
  method_00 = extraout_RDX;
  _Stack_40 = _Var27;
  if (g_data_057add08 == '\0') {
    _Stack_90 = (_union_249689)0x4299c1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSTwinShot);
    _Stack_90 = (_union_249689)0x4299c29;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    _Stack_90 = (_union_249689)0x4299c35;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AmmoWeapon);
    _Stack_90 = (_union_249689)0x4299c41;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseHoldAttackSpecial);
    _Stack_90 = (_union_249689)0x4299c4d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EscapeSpecial);
    _Stack_90 = (_union_249689)0x4299c59;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    _Stack_90 = (_union_249689)0x4299c65;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    _Stack_90 = (_union_249689)0x4299c71;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    _Stack_90 = (_union_249689)0x4299c7d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    _Stack_90 = (_union_249689)0x4299c89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    _Stack_90 = (_union_249689)0x4299c95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterTransformSpecial);
    _Stack_90 = (_union_249689)0x4299ca1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StockSpecial);
    _Stack_90 = (_union_249689)0x4299cad;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    _Stack_90 = (_union_249689)0x4299cb9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    _Stack_90 = (_union_249689)0x4299cc5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    _Stack_90 = (_union_249689)0x4299cd1;
    il2cpp_runtime_helper_023445d0(&"UncarryRPC");
    auVar36._8_8_ = extraout_XMM1_Qb_00;
    auVar36._0_8_ = extraout_XMM1_Qa_00;
    g_data_057add08 = '\x01';
    method_00 = extraout_RDX_00;
  }
  cVar32 = (char)uVar16;
  __this_13.genericMethod = (void *)(uVar17 & 0xff);
  _Stack_90 = (_union_249689)0x4299ce6;
  bVar15 = __this_13._0_4_;
  Controllers_BasePlayerController__UpdateActionInput(__this_14.genericMethod,bVar15,method_00);
  _Stack_90 = (_union_249689)0x4299cf0;
  Controllers_HumanPlayerController__UpdateHookInput(__this_14.genericMethod,bVar15,method_01);
  _Var30.genericMethod = (Characters_Human_o *)0x0;
  _Stack_90 = (_union_249689)0x4299cfd;
  Controllers_HumanPlayerController__UpdateReelInput(__this_14.genericMethod,0,method_02);
  _Stack_90 = (_union_249689)0x4299d07;
  _Var26.genericMethod = __this_13.genericMethod;
  _Var28 = __this_14;
  Controllers_HumanPlayerController__UpdateDashInput(__this_14.genericMethod,bVar15,method_03);
  pUVar8 = *(UI_RoleSpritePickPopup_o **)((long)__this_14.genericMethod + 0x58);
  if (pUVar8 != (UI_RoleSpritePickPopup_o *)0x0) {
    _Var31.genericMethod = __this_14.genericMethod + 0x58;
    _Var27.genericMethod = _Var31.genericMethod;
    if (*(char *)((long)&pUVar8[2].fields.MaskBackground + 6) != '\0') {
      _Var28 = (_union_249689)((_union_249689 *)((long)__this_14.genericMethod + 0x88))->genericMethod;
      if (_Var28.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
      uVar16 = pUVar8[1].fields.IsActive;
      _Var26._4_4_ = 0;
      _Var26._0_4_ = uVar16;
      _Stack_90 = (_union_249689)0x4299d46;
      bVar15 = System_Collections_Generic_HashSet_Int32Enum___Contains
                         (_Var28.genericMethod,uVar16,MethodInfo_Boolean_Contains);
      if (((char)bVar15 == '\0') && (cVar32 == '\0')) {
        if (*(long *)_Var31.genericMethod == 0) goto label_0429a1cb;
        _Var30._0_4_ = *(byte *)(*(long *)_Var31.genericMethod + 0x68) ^ 1;
        _Var30._4_4_ = 0;
      }
    }
    lVar19 = TypeInfo_ThunderspearWeapon;
    pUVar9 = *(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70);
    if ((pUVar9 != (UI_ImportPopup_o *)0x0) &&
       (in_RCX = *(code **)_Var31.genericMethod, in_RCX != (code *)0x0)) {
      _Var10 = (_union_249689)(pUVar9->fields).SinglePanel;
      _Var24 = (_union_249689)(pUVar9->fields).DoublePanelLeft;
      auStack_88 = (undefined1  [8])_Var24.genericMethod;
      _Var28 = (_union_249689)*(_union_249689 *)(in_RCX + 0x100);
      _Var25 = _Var10;
      if (_Var28.genericMethod == (Characters_Human_o *)0x0) {
label_04299dc4:
        _Var24 = _Var26;
        in_RCX[0x2d8] = (code)0x0;
        _Var26 = _Var24;
        if (_Var30._0_4_ != 0) goto label_04299dd7;
label_0429a1a8:
        _Var30.genericMethod = _Var31.genericMethod;
        if (_Var28.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        _Var26.genericMethod = (Characters_Human_o *)0x0;
        _Stack_90 = (_union_249689)0x429a1bf;
        uVar17 = (**(code **)(*(long *)_Var28.genericMethod + 0x1f8))
                           (_Var28.genericMethod,0,*(undefined8 *)(*(long *)_Var28.genericMethod + 0x200));
        auVar36._8_8_ = extraout_XMM1_Qb_05;
        auVar36._0_8_ = extraout_XMM1_Qa_05;
        goto label_0429a1bf;
      }
      _Var26._1_7_ = 0;
      _Var26._0_1_ = *(byte *)(TypeInfo_ThunderspearWeapon + 0x130);
      if ((*(byte *)(*(long *)_Var28.genericMethod + 0x130) < *(byte *)(TypeInfo_ThunderspearWeapon + 0x130)) ||
         (*(long *)(*(long *)(*(long *)_Var28.genericMethod + 200) + -8 + (long)_Var26.genericMethod * 8) !=
          TypeInfo_ThunderspearWeapon)) goto label_04299dc4;
      lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if (((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x28), lVar11 == 0)) ||
         (lVar11 = *(long *)(lVar11 + 0xc0), lVar11 == 0)) goto label_0429a1cb;
      if (*(char *)(lVar11 + 0x11) != '\0') {
        _Var25 = _Var24;
        auStack_88 = (undefined1  [8])_Var10;
      }
      in_RCX[0x2d8] = (code)0x0;
      _Var26 = _Var24;
      if (_Var30._0_4_ == 0) goto label_0429a1a8;
label_04299dd7:
      _Var26 = _Var24;
      if (_Var28.genericMethod == (Characters_Human_o *)0x0) {
label_04299e13:
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          _Stack_90 = (_union_249689)0x4299e2b;
          il2cpp_runtime_helper_02337ed0();
          auVar36._8_8_ = extraout_XMM1_Qb_01;
          auVar36._0_8_ = extraout_XMM1_Qa_01;
        }
        plVar29 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        _Var27.genericMethod = &TypeInfo_UIManager;
        _Var28.genericMethod = (Characters_Human_o *)0x0;
        _Var30.genericMethod = _Var31.genericMethod;
        if (plVar29 == (long *)0x0) goto label_0429a1cb;
        in_RCX = (code *)(ulong)*(byte *)(TypeInfo_InGameMenu + 0x130);
        if ((*(byte *)(*plVar29 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar29 + 200) + -8 + (long)in_RCX * 8) != TypeInfo_InGameMenu)) {
          _Stack_90 = (_union_249689)0x429a87a;
          il2cpp_runtime_helper_022b2fd0();
          pIStack_b8 = (Il2CppRGCTXData *)&TypeInfo_UIManager;
          _Stack_b0 = _Var25;
          _Stack_a8 = __this_14;
          _Stack_a0.genericMethod = _Var31.genericMethod;
          uStack_98 = uVar17;
          _Stack_90 = __this_13;
          if (g_data_057add0a == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
            il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
            il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
            il2cpp_runtime_helper_023445d0();
            g_data_057add0a = '\x01';
          }
          pSVar46 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
          pIVar47 = (Il2CppType *)0x0;
          __this_15 = (Settings_InputKey_o *)0x0;
          fVar33 = *(float *)(plVar29 + 0xc);
          fVar34 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          *(float *)(plVar29 + 0xc) = fVar33 - fVar34;
          if (fVar33 - fVar34 <= 0.0) {
            if (plVar29[0xb] == 0) goto label_0429acc4;
            *(undefined4 *)(plVar29[0xb] + 0x210) = 0;
          }
          if ((plVar29[0xe] != 0) &&
             (pSVar12 = *(Settings_KeybindSetting_o **)(plVar29[0xe] + 0x50),
             pSVar12 != (Settings_KeybindSetting_o *)0x0)) {
            bVar15 = Settings_KeybindSetting__GetKey(pSVar12,0,(MethodInfo *)0x0);
            if ((char)bVar15 == '\0') {
              fVar33 = *(float *)((long)plVar29 + 100);
              fVar34 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              *(float *)((long)plVar29 + 100) = fVar33 - fVar34;
              if (((plVar29[0xe] != 0) && (lVar19 = *(long *)(plVar29[0xe] + 0x50), lVar19 != 0)) &&
                 (pSVar13 = *(System_Collections_Generic_List_object__o **)(lVar19 + 0x10),
                 pSVar13 != (System_Collections_Generic_List_object__o *)0x0)) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d0,pSVar13,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator)
                ;
                bVar14 = false;
                pSVar46 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d0._0_8_;
                pIVar47 = (Il2CppType *)auStack_d0._8_8_;
                __this_15 = pSStack_c0;
                while (__this_03.fields._8_8_ = pIVar47,
                      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar46,
                      __this_03.fields._current = (Il2CppObject *)__this_15,
                      bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10),
                      (char)bVar15 != '\0') {
                  if (__this_15 == (Settings_InputKey_o *)0x0) goto label_0429acba;
                  bVar15 = Settings_InputKey__IsWheel(__this_15,(MethodInfo *)0x0);
                  if ((char)bVar15 != '\0') {
                    bVar14 = true;
                  }
                }
                __this_04.fields._8_8_ = pIVar47;
                __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar46;
                __this_04.fields._current = (Il2CppObject *)__this_15;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
                if (((plVar29[0xe] != 0) && (lVar19 = *(long *)(plVar29[0xe] + 0x50), lVar19 != 0)) &&
                   (pSVar13 = *(System_Collections_Generic_List_object__o **)(lVar19 + 0x10),
                   pSVar13 != (System_Collections_Generic_List_object__o *)0x0)) {
                  System_Collections_Generic_List_object___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d0,pSVar13,
                             MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
                  pSVar46 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d0._0_8_;
                  pIVar47 = (Il2CppType *)auStack_d0._8_8_;
                  pSVar48 = pSStack_c0;
                  __this_15 = pSStack_c0;
                  if (!bVar14) {
label_0429ab54:
                    __this_06.fields._8_8_ = pIVar47;
                    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar46;
                    __this_06.fields._current = (Il2CppObject *)__this_15;
                    bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       (__this_06,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10);
                    if ((char)bVar15 != '\0') {
                      if (__this_15 == (Settings_InputKey_o *)0x0) goto label_0429acbf;
                      bVar15 = Settings_InputKey__IsWheel(__this_15,(MethodInfo *)0x0);
                      if ((char)bVar15 != '\0') goto code_r0x0429ab7d;
                      lVar19 = plVar29[0xb];
                      if (lVar19 == 0) goto label_0429acd8;
                      goto label_0429ab4d;
                    }
                    goto label_0429ab95;
                  }
label_0429aad4:
                  __this_05.fields._8_8_ = pIVar47;
                  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar46;
                  __this_05.fields._current = (Il2CppObject *)pSVar48;
                  bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10);
                  __this_15 = pSVar48;
                  if ((char)bVar15 != '\0') {
                    if (pSVar48 == (Settings_InputKey_o *)0x0) goto label_0429acbf;
                    bVar15 = Settings_InputKey__IsWheel(pSVar48,(MethodInfo *)0x0);
                    if ((char)bVar15 == '\0') goto label_0429ab10;
                    pSVar48 = __this_15;
                    if (0.0 < *(float *)((long)plVar29 + 100)) goto label_0429aad4;
                    lVar19 = plVar29[0xb];
                    if (lVar19 != 0) goto label_0429aacd;
label_0429ab90:
                    il2cpp_runtime_helper_022b2c90();
                  }
label_0429ab95:
                  __this_07.fields._8_8_ = pIVar47;
                  __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar46;
                  __this_07.fields._current = (Il2CppObject *)__this_15;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
                  goto label_0429aba7;
                }
              }
            }
            else {
              lVar19 = plVar29[0xb];
              if (lVar19 != 0) {
                if (*(char *)(lVar19 + 0x2f2) == '\0') {
                  *(undefined4 *)(lVar19 + 0x20c) = 0xbf800000;
                }
                *(int *)((long)plVar29 + 100) = (int)plVar29[0xd];
                lVar19 = plVar29[0xe];
                goto joined_r0x0429a991;
              }
            }
          }
label_0429acc4:
          il2cpp_runtime_helper_022b2c90();
label_0429acc9:
          il2cpp_runtime_helper_022b2c90();
label_0429acce:
          il2cpp_runtime_helper_022b2c90();
label_0429acd3:
          il2cpp_runtime_helper_022b2c90();
label_0429acd8:
          auVar45 = il2cpp_runtime_helper_022b2c90();
          if (auVar45._8_4_ == 1) {
            plVar20 = (long *)__cxa_begin_catch(auVar45._0_8_);
            lVar19 = *plVar20;
            __cxa_end_catch();
            __this_10.fields._8_8_ = pIVar47;
            __this_10.fields._list = (System_Collections_Generic_List_T__o *)pSVar46;
            __this_10.fields._current = (Il2CppObject *)__this_15;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_10,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
            if (lVar19 == 0) {
label_0429aba7:
              lVar19 = plVar29[0xe];
joined_r0x0429a991:
              if (((lVar19 != 0) && (*(long *)(lVar19 + 0x58) != 0)) &&
                 (pSVar13 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar19 + 0x58) + 0x10),
                 pSVar13 != (System_Collections_Generic_List_object__o *)0x0)) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d0,pSVar13,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator)
                ;
                pSVar46 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d0._0_8_;
                pIVar47 = (Il2CppType *)auStack_d0._8_8_;
                __this_15 = pSStack_c0;
label_0429ac10:
                pSVar48 = __this_15;
                __this_08.fields._8_8_ = pIVar47;
                __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar46;
                __this_08.fields._current = (Il2CppObject *)pSVar48;
                bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_08,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10);
                if ((char)bVar15 == '\0') {
                  __this_09.fields._8_8_ = pIVar47;
                  __this_09.fields._list = (System_Collections_Generic_List_T__o *)pSVar46;
                  __this_09.fields._current = (Il2CppObject *)pSVar48;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
                  return extraout_EAX_02;
                }
                if (pSVar48 != (Settings_InputKey_o *)0x0) goto code_r0x0429ac2e;
                il2cpp_runtime_helper_022b2c90();
                __this_15 = pSVar48;
                goto label_0429acb5;
              }
              goto label_0429acc4;
            }
            il2cpp_runtime_helper_022fefe0(lVar19);
            __this_12.fields._8_8_ = pIVar47;
            __this_12.fields._list = (System_Collections_Generic_List_T__o *)pSVar46;
            __this_12.fields._current = (Il2CppObject *)__this_15;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_12,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
          }
          else {
            __this_11.fields._8_8_ = pIVar47;
            __this_11.fields._list = (System_Collections_Generic_List_T__o *)pSVar46;
            __this_11.fields._current = (Il2CppObject *)__this_15;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_11,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
          }
          _Unwind_Resume(auVar45._0_8_);
        }
        __this_13 = (_union_249689)((_union_249689 *)(plVar29 + 0x19))->genericMethod;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          _Stack_90 = (_union_249689)0x4299e96;
          il2cpp_runtime_helper_02337ed0();
          auVar36._8_8_ = extraout_XMM1_Qb_02;
          auVar36._0_8_ = extraout_XMM1_Qa_02;
        }
        _Var26.genericMethod = (Characters_Human_o *)0x0;
        _Stack_90 = (_union_249689)0x4299ea2;
        _Var28 = __this_13;
        bVar15 = UnityEngine_Object__op_Inequality
                           (__this_13.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
label_04299efc:
          _Var27.genericMethod = _Var31.genericMethod;
          if ((*(long *)_Var31.genericMethod != 0) &&
             (_Var28 = (_union_249689)
                       ((_union_249689 *)(*(long *)_Var31.genericMethod + 0x100))->genericMethod,
             _Var28.genericMethod != (Characters_Human_o *)0x0)) {
            if ((*(byte *)(*(long *)_Var28.genericMethod + 0x130) < *(byte *)(TypeInfo_AHSSWeapon + 0x130)) ||
               (in_RCX = *(code **)(*(long *)_Var28.genericMethod + 200),
               *(long *)(in_RCX + (ulong)*(byte *)(TypeInfo_AHSSWeapon + 0x130) * 8 + -8) != TypeInfo_AHSSWeapon)) {
              _Stack_90 = (_union_249689)0x4299f59;
              uVar17 = (**(code **)(*(long *)_Var28.genericMethod + 0x1e8))
                                 (_Var28.genericMethod,_Var25.genericMethod,
                                  *(undefined8 *)(*(long *)_Var28.genericMethod + 0x1f0));
              auVar36._8_8_ = extraout_XMM1_Qb_03;
              auVar36._0_8_ = extraout_XMM1_Qa_03;
              in_RCX = *(code **)_Var31.genericMethod;
              _Var26 = _Var25;
              goto joined_r0x0429a3de;
            }
            if (_Var25.genericMethod != (Characters_Human_o *)0x0) {
              _Var26 = (_union_249689)0x143;
              _Stack_90 = (_union_249689)0x429a26f;
              _Var28 = _Var25;
              bVar15 = Settings_KeybindSetting__Contains_4101260(_Var25.genericMethod,0x143,(MethodInfo *)0x0)
              ;
              if ((char)bVar15 == '\0') {
label_0429a289:
                _Var26.genericMethod = (Characters_Human_o *)0x0;
                _Stack_90 = (_union_249689)0x429a295;
                _Var28 = _Var25;
                bVar15 = Settings_KeybindSetting__GetKeyUp(_Var25.genericMethod,0,(MethodInfo *)0x0);
                in_RCX = *(code **)_Var31.genericMethod;
                if ((in_RCX != (code *)0x0) &&
                   (_Var28 = (_union_249689)*(_union_249689 *)(in_RCX + 0x100),
                   _Var28.genericMethod != (Characters_Human_o *)0x0)) {
                  in_RCX = *(code **)(*(long *)_Var28.genericMethod + 0x1f8);
                  if ((char)bVar15 == '\0') {
                    _Stack_90 = (_union_249689)0x429a322;
                    (*in_RCX)(_Var28.genericMethod,0,*(undefined8 *)(*(long *)_Var28.genericMethod + 0x200));
                    auVar36._8_8_ = extraout_XMM1_Qb_09;
                    auVar36._0_8_ = extraout_XMM1_Qa_09;
                    goto label_0429a322;
                  }
                  _Var26 = (_union_249689)0x1;
                  _Stack_90 = (_union_249689)0x429a2cd;
                  (*in_RCX)();
                  auVar36._8_8_ = extraout_XMM1_Qb_07;
                  auVar36._0_8_ = extraout_XMM1_Qa_07;
                  pUVar18 = *(UI_MessagePopup_o **)((long)__this_14.genericMethod + 0x30);
                  if (pUVar18 != (UI_MessagePopup_o *)0x0) goto label_0429a2da;
                }
              }
              else {
                pUVar18 = *(UI_MessagePopup_o **)((long)__this_14.genericMethod + 0x30);
                if (pUVar18 != (UI_MessagePopup_o *)0x0) {
                  if (*(char *)&pUVar18[2].monitor == '\0') goto label_0429a289;
label_0429a2da:
                  *(undefined1 *)&pUVar18[2].monitor = 0;
label_0429a322:
                  _Var27.genericMethod = *_Var31.genericMethod;
                  _Var26.genericMethod = (Characters_Human_o *)0x0;
                  _Stack_90 = (_union_249689)0x429a331;
                  uVar16 = Settings_KeybindSetting__GetKey(_Var25.genericMethod,0,(MethodInfo *)0x0);
                  uVar17 = (ulong)uVar16;
                  uVar21 = (undefined7)((ulong)in_RCX >> 8);
                  in_RCX = (code *)CONCAT71(uVar21,1);
                  _Var28 = _Var25;
                  if ((char)uVar16 == '\0') {
                    if ((*(long *)_Var31.genericMethod == 0) ||
                       (uVar17 = *(ulong *)(*(long *)_Var31.genericMethod + 0x100), uVar17 == 0))
                    goto label_0429a1cb;
                    in_RCX = (code *)CONCAT71(uVar21,*(undefined1 *)(uVar17 + 0x1c));
                  }
                  if (_Var27.genericMethod != (Characters_Human_o *)0x0) {
                    *(char *)((long)_Var27.genericMethod + 0x2d8) = (char)in_RCX;
                    in_RCX = *(code **)_Var31.genericMethod;
                    goto joined_r0x0429a3de;
                  }
                }
              }
            }
          }
        }
        else {
          _Var27.genericMethod = _Var31.genericMethod;
          if (__this_13.genericMethod != (Characters_Human_o *)0x0) {
            _Var26.genericMethod = (Characters_Human_o *)0x0;
            _Stack_90 = (_union_249689)0x4299eb9;
            _Var28 = __this_13;
            bVar15 = UI_ChatPanel__IsPointerOverChatUI(__this_13.genericMethod,(MethodInfo *)0x0);
            if ((char)bVar15 == '\0') goto label_04299efc;
            if (*(long *)_Var31.genericMethod != 0) {
              plVar29 = *(long **)(*(long *)_Var31.genericMethod + 0x100);
              _Var28.genericMethod = (Characters_Human_o *)0x0;
              if (plVar29 != (long *)0x0) {
                vtableDispatch = *(code **)(*plVar29 + 0x1f8);
                bVar15 = (*vtableDispatch)
                                   (plVar29,0,*(undefined8 *)(*plVar29 + 0x200),vtableDispatch);
                return bVar15;
              }
            }
          }
        }
      }
      else {
        bVar22 = *(byte *)(*(long *)_Var28.genericMethod + 0x130);
        in_RCX = (code *)CONCAT71(0x55767,bVar22);
        __this_13._1_7_ = 0;
        __this_13._0_1_ = *(byte *)((long)TypeInfo_AmmoWeapon.genericMethod + 0x130);
        _Var26 = TypeInfo_AmmoWeapon;
        if (((bVar22 < *(byte *)((long)TypeInfo_AmmoWeapon.genericMethod + 0x130)) ||
            (lVar11 = *(long *)(*(long *)_Var28.genericMethod + 200),
            *(Characters_Human_o **)(lVar11 + -8 + (long)__this_13.genericMethod * 8) !=
            TypeInfo_AmmoWeapon.genericMethod)) || (*(int *)((long)_Var28.genericMethod + 0x48) != 0))
        goto label_04299e13;
        bVar1 = *(byte *)(lVar19 + 0x130);
        _Var26._1_7_ = 0;
        _Var26._0_1_ = bVar1;
        if ((bVar1 <= bVar22) && (*(long *)(lVar11 + -8 + (long)_Var26.genericMethod * 8) == lVar19)) {
          _Var26.genericMethod = (Characters_Human_o *)0x0;
          _Stack_90 = (_union_249689)0x429a393;
          bVar15 = Characters_ThunderspearWeapon__HasActiveProjectile(_Var28.genericMethod,(MethodInfo *)0x0);
          if ((char)bVar15 != '\0') goto label_04299e13;
        }
        _Var30.genericMethod = _Var31.genericMethod;
        if (_Var25.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
        _Var26.genericMethod = (Characters_Human_o *)0x0;
        _Stack_90 = (_union_249689)0x429a3b0;
        uVar16 = Settings_KeybindSetting__GetKeyDown(_Var25.genericMethod,0,(MethodInfo *)0x0);
        uVar17 = (ulong)uVar16;
        _Var28 = _Var25;
        if ((char)uVar16 == '\0') {
label_0429a1bf:
          in_RCX = *(code **)_Var31.genericMethod;
        }
        else {
          _Var28.genericMethod = *_Var31.genericMethod;
          if (_Var28.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
          if (*(bool_conflict *)((long)_Var28.genericMethod + 0x158) != 0) goto label_0429a1bf;
          _Var26.genericMethod = (Characters_Human_o *)0x0;
          _Stack_90 = (_union_249689)0x429a3d8;
          Characters_Human__Reload(_Var28.genericMethod,(MethodInfo *)0x0);
          in_RCX = *(code **)_Var31.genericMethod;
          uVar17 = extraout_RAX;
        }
joined_r0x0429a3de:
        _Var27.genericMethod = _Var31.genericMethod;
        _Var30.genericMethod = _Var31.genericMethod;
        if (in_RCX != (code *)0x0) {
          __this_13 = (_union_249689)*(_union_249689 *)(in_RCX + 0xf8);
          if (__this_13.genericMethod == (Characters_Human_o *)0x0) goto joined_r0x0429a313;
          in_R10B = in_RCX[0x1ee];
          uVar16 = 0;
          if (in_R10B != (code)0x0) {
            lVar19 = *(long *)__this_13.genericMethod;
            if (((((*(byte *)(TypeInfo_EscapeSpecial + 0x130) <= *(byte *)(lVar19 + 0x130)) &&
                  (*(long *)(*(long *)(lVar19 + 200) + -8 + (ulong)*(byte *)(TypeInfo_EscapeSpecial + 0x130) * 8) ==
                   TypeInfo_EscapeSpecial)) ||
                 ((*(byte *)(TypeInfo_ShifterTransformSpecial + 0x130) <= *(byte *)(lVar19 + 0x130) &&
                  (*(long *)(*(long *)(lVar19 + 200) + -8 + (ulong)*(byte *)(TypeInfo_ShifterTransformSpecial + 0x130) * 8) ==
                   TypeInfo_ShifterTransformSpecial)))) || (uVar16 = 0, *(int *)(in_RCX + 0x158) != 7)) &&
               (uVar16 = 0, *(int *)(in_RCX + 0x11c) != 1)) {
              iVar2 = *(int *)(in_RCX + 0x158);
              uVar16 = 0;
              if ((((iVar2 != 1) && (uVar16 = 0, iVar2 != 8)) && (uVar16 = 0, iVar2 != 9)) &&
                 (uVar16 = 0, cVar32 == '\0')) {
                uVar16 = (byte)in_RCX[0x68] ^ 1;
              }
            }
          }
          bVar22 = *(byte *)(*(long *)__this_13.genericMethod + 0x130);
          if (bVar22 < *(byte *)(TypeInfo_BaseHoldAttackSpecial + 0x130)) goto joined_r0x0429a068;
          _Var28 = (_union_249689)((_union_249689 *)(*(long *)__this_13.genericMethod + 200))->genericMethod;
          if (*(long *)((long)_Var28.genericMethod + (ulong)*(byte *)(TypeInfo_BaseHoldAttackSpecial + 0x130) * 8 + -8) ==
              TypeInfo_BaseHoldAttackSpecial) goto label_0429a1d0;
          goto joined_r0x0429a068;
        }
      }
    }
  }
label_0429a1cb:
  do {
    uVar16 = _Var26._0_4_;
    bVar22 = _Var27._0_1_;
    _Stack_90 = (_union_249689)0x429a1d0;
    il2cpp_runtime_helper_022b2c90();
    _Var31 = _Var30;
label_0429a1d0:
    if ((in_R10B == (code)0x0) || (iVar2 = *(int *)(in_RCX + 0x158), iVar2 == 7)) {
joined_r0x0429a068:
      if (uVar16 != 0) goto label_0429a06e;
label_0429a233:
      _Var26.genericMethod = (Characters_Human_o *)0x0;
      _Stack_90 = (_union_249689)0x429a249;
      uVar17 = (**(code **)(*(long *)__this_13.genericMethod + 0x1f8))
                         (__this_13.genericMethod,0,*(undefined8 *)(*(long *)__this_13.genericMethod + 0x200))
      ;
      auVar36._8_8_ = extraout_XMM1_Qb_06;
      auVar36._0_8_ = extraout_XMM1_Qa_06;
    }
    else {
      if (iVar2 == 8) {
label_0429a224:
        if (uVar16 == 0) goto label_0429a233;
      }
      else {
        if (iVar2 == 1) {
          if (bVar22 < *(byte *)(TypeInfo_StockSpecial + 0x130)) goto label_0429a224;
          if (*(long *)((long)_Var28.genericMethod + (ulong)*(byte *)(TypeInfo_StockSpecial + 0x130) * 8 + -8) !=
              TypeInfo_StockSpecial) goto joined_r0x0429a068;
        }
        if ((*(int *)(in_RCX + 0x11c) == 1) || (cVar32 != '\0')) goto joined_r0x0429a068;
        if (uVar16 == 0 && in_RCX[0x68] == (code)0x1) goto label_0429a233;
      }
label_0429a06e:
      lVar19 = *(long *)__this_13.genericMethod;
      in_RCX = TypeInfo_AHSSTwinShot;
      if (((byte)*(code *)(lVar19 + 0x130) < (byte)TypeInfo_AHSSTwinShot[0x130]) ||
         (_Var26 = (_union_249689)((_union_249689 *)(lVar19 + 200))->genericMethod,
         *(code **)((long)_Var26.genericMethod + (ulong)(byte)TypeInfo_AHSSTwinShot[0x130] * 8 + -8) != TypeInfo_AHSSTwinShot))
      {
        _Stack_90 = (_union_249689)0x429a0b1;
        _Var26 = (_union_249689)auStack_88;
        uVar17 = (**(code **)(lVar19 + 0x1e8))
                           (__this_13.genericMethod,auStack_88,*(undefined8 *)(lVar19 + 0x1f0));
        auVar36._8_8_ = extraout_XMM1_Qb_04;
        auVar36._0_8_ = extraout_XMM1_Qa_04;
      }
      else {
        _Var27 = _Var31;
        _Var28.genericMethod = (Characters_Human_o *)0x0;
        _Var30 = _Var31;
        if (auStack_88 == (undefined1  [8])0x0) goto label_0429a1cb;
        _Stack_90 = (_union_249689)0x429a2f9;
        uVar16 = Settings_KeybindSetting__GetKeyUp
                           ((Settings_KeybindSetting_o *)auStack_88,0,(MethodInfo *)0x0);
        in_RCX = *(code **)__this_13.genericMethod;
        _Var26._0_4_ = uVar16 & 0xff;
        _Var26._4_4_ = 0;
        _Stack_90 = (_union_249689)0x429a310;
        uVar17 = (**(code **)(in_RCX + 0x1f8))
                           (__this_13.genericMethod,_Var26.genericMethod,*(undefined8 *)(in_RCX + 0x200));
        auVar36._8_8_ = extraout_XMM1_Qb_08;
        auVar36._0_8_ = extraout_XMM1_Qa_08;
      }
    }
joined_r0x0429a313:
    if (cVar32 != '\0') goto label_0429a6bb;
    _Var28.genericMethod = *_Var31.genericMethod;
    _Var27 = _Var31;
    _Var30 = _Var31;
  } while (_Var28.genericMethod == (Characters_Human_o *)0x0);
  if ((*(char *)((long)_Var28.genericMethod + 0x68) != '\0') ||
     (*(bool_conflict *)((long)_Var28.genericMethod + 0x158) == 0xf)) goto label_0429a6bb;
  uVar16 = *(uint *)((long)_Var28.genericMethod + 0x118);
  uVar17 = (ulong)uVar16;
  if (uVar16 == 1) {
    if ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70) == (UI_ImportPopup_o *)0x0) ||
       (_Var28 = (_union_249689)
                 ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70))->fields)._topButtons,
       _Var28.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
    _Var26.genericMethod = (Characters_Human_o *)0x0;
    _Stack_90 = (_union_249689)0x429a40c;
    bVar15 = Settings_KeybindSetting__GetKeyDown(_Var28.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
label_0429a429:
      if ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70) == (UI_ImportPopup_o *)0x0) ||
         (_Var28 = (_union_249689)
                   ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70))->fields)._staticTransforms,
         _Var28.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
      _Var26.genericMethod = (Characters_Human_o *)0x0;
      _Stack_90 = (_union_249689)0x429a44f;
      bVar15 = Settings_KeybindSetting__GetKeyDown(_Var28.genericMethod,0,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') goto label_0429a6a6;
      if ((*(long *)_Var31.genericMethod == 0) ||
         (_Var28 = (_union_249689)((_union_249689 *)(*(long *)_Var31.genericMethod + 0x120))->genericMethod,
         _Var28.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
      _Var26.genericMethod = (Characters_Human_o *)0x0;
      _Stack_90 = (_union_249689)0x429a47a;
      Characters_Horse__Jump(_Var28.genericMethod,(MethodInfo *)0x0);
      uVar17 = *(ulong *)_Var31.genericMethod;
    }
    else {
      _Var28.genericMethod = *_Var31.genericMethod;
      if (_Var28.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
      if (*(bool_conflict *)((long)_Var28.genericMethod + 0x158) != 0) goto label_0429a429;
      _Var26.genericMethod = (Characters_Human_o *)0x0;
      _Stack_90 = (_union_249689)0x429a6a6;
      Characters_Human__Unmount(_Var28.genericMethod,0,(MethodInfo *)0x0);
label_0429a6a6:
      uVar17 = *(ulong *)_Var31.genericMethod;
    }
    if (uVar17 == 0) goto label_0429a1cb;
    if ((*(int *)(uVar17 + 0x158) == 0) && (*(char *)(uVar17 + 0x1ee) != '\0')) {
      if (*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70) != (UI_ImportPopup_o *)0x0) {
        pSVar12 = (Settings_KeybindSetting_o *)
                  ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70))->fields).TopBar;
        _Var28.genericMethod = (Characters_Human_o *)0x0;
        if (pSVar12 != (Settings_KeybindSetting_o *)0x0) {
          _Var26.genericMethod = (Characters_Human_o *)0x0;
          _Stack_90 = (_union_249689)0x429a6f6;
          uVar16 = Settings_KeybindSetting__GetKeyDown(pSVar12,0,(MethodInfo *)0x0);
          uVar17 = (ulong)uVar16;
          if ((char)uVar16 == '\0') goto label_0429a6bb;
          _Var28.genericMethod = (Characters_Human_o *)0x0;
          if (*(Characters_Human_o **)_Var31.genericMethod != (Characters_Human_o *)0x0) {
            Characters_Human__Reload(*(Characters_Human_o **)_Var31.genericMethod,(MethodInfo *)0x0);
            return extraout_EAX_01;
          }
        }
      }
      goto label_0429a1cb;
    }
    goto label_0429a6bb;
  }
  if (uVar16 != 0) goto label_0429a6bb;
  _Var26.genericMethod = (Characters_Human_o *)0x0;
  _Stack_90 = (_union_249689)0x429a0fb;
  bVar15 = Characters_Human__CanJump(_Var28.genericMethod,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
label_0429a58c:
    lVar19 = *(long *)_Var31.genericMethod;
  }
  else {
    if ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70) == (UI_ImportPopup_o *)0x0) ||
       (_Var28 = (_union_249689)
                 ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70))->fields).BottomBar,
       _Var28.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
    _Var26.genericMethod = (Characters_Human_o *)0x0;
    _Stack_90 = (_union_249689)0x429a126;
    bVar15 = Settings_KeybindSetting__GetKeyDown(_Var28.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      if ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70) == (UI_ImportPopup_o *)0x0) ||
         (_Var28 = (_union_249689)
                   ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70))->fields)._topButtons,
         _Var28.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
      _Var26.genericMethod = (Characters_Human_o *)0x0;
      _Stack_90 = (_union_249689)0x429a4e1;
      bVar15 = Settings_KeybindSetting__GetKeyDown(_Var28.genericMethod,0,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        if (*(long *)_Var31.genericMethod == 0) goto label_0429a1cb;
        __this_13 = (_union_249689)((_union_249689 *)(*(long *)_Var31.genericMethod + 0x120))->genericMethod;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          _Stack_90 = (_union_249689)0x429a510;
          il2cpp_runtime_helper_02337ed0();
          auVar36._8_8_ = extraout_XMM1_Qb_10;
          auVar36._0_8_ = extraout_XMM1_Qa_10;
        }
        _Var26.genericMethod = (Characters_Human_o *)0x0;
        _Stack_90 = (_union_249689)0x429a51c;
        _Var28 = __this_13;
        bVar15 = UnityEngine_Object__op_Inequality
                           (__this_13.genericMethod,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          lVar19 = *(long *)_Var31.genericMethod;
          if (lVar19 == 0) goto label_0429a1cb;
          if (*(int *)(lVar19 + 0x118) == 0) {
            if (((*(long *)(lVar19 + 0x120) == 0) ||
                (lVar19 = *(long *)(*(long *)(lVar19 + 0x120) + 0x70), lVar19 == 0)) ||
               (_Var28 = (_union_249689)((_union_249689 *)(lVar19 + 0x10))->genericMethod,
               _Var28.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
            _Var26.genericMethod = (Characters_Human_o *)0x0;
            _Stack_90 = (_union_249689)0x429a74c;
            UVar44 = UnityEngine_Transform__get_position(_Var28.genericMethod,(MethodInfo *)0x0);
            auVar37._4_12_ = auVar36._4_12_;
            auVar37._0_4_ = UVar44.fields.z;
            if ((*(long *)_Var31.genericMethod == 0) ||
               (lVar19 = *(long *)(*(long *)_Var31.genericMethod + 0x70), lVar19 == 0)) goto label_0429a1cb;
            uStack_70 = extraout_XMM0_Dc;
            auStack_78 = UVar44.fields._0_8_;
            uStack_6c = extraout_XMM0_Dd;
            __this_02 = *(UnityEngine_Transform_o **)(lVar19 + 0x10);
            _Var28.genericMethod = (Characters_Human_o *)0x0;
            _auStack_88 = auVar37;
            if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_0429a1cb;
            _Var26.genericMethod = (Characters_Human_o *)0x0;
            _Stack_90 = (_union_249689)0x429a782;
            UVar44 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
            auVar38._4_12_ = auVar37._4_12_;
            auVar38._0_4_ = UVar44.fields.z;
            fVar33 = UVar44.fields.x;
            fVar34 = UVar44.fields.y;
            uVar35 = auVar38._0_8_;
            if (g_data_057a68cb == '\0') {
              auStack_68._8_4_ = extraout_XMM0_Dc_00;
              auStack_68._0_8_ = UVar44.fields._0_8_;
              auStack_68._12_4_ = extraout_XMM0_Dd_00;
              _Stack_90 = (_union_249689)0x429a7a1;
              auStack_58 = auVar38;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
              fVar33 = (float)auStack_68._0_4_;
              fVar34 = (float)auStack_68._4_4_;
              uVar35 = auStack_58._0_8_;
            }
            auVar39._4_4_ = auStack_78._4_4_;
            auVar39._0_4_ = auStack_78._4_4_;
            auVar39._8_4_ = uStack_70;
            auVar39._12_4_ = uStack_6c;
            auVar40._4_12_ = auVar39._4_12_;
            auVar40._0_4_ = (float)auStack_78._4_4_ - fVar34;
            fVar41 = (float)auStack_88._0_4_ - (float)uVar35;
            fVar43 = (float)auStack_88._4_4_ - (float)((ulong)uVar35 >> 0x20);
            _Var28 = TypeInfo_Math;
            fVar42 = (float)auStack_78._0_4_ - fVar33;
            if (*(int32_t *)((long)TypeInfo_Math.genericMethod + 0xe4) == 0) {
              auStack_88._4_4_ = (float)auStack_78._0_4_ - fVar33;
              auStack_88._0_4_ = fVar41;
              fStack_80 = fVar43;
              fStack_7c = (float)auStack_78._4_4_ - fVar34;
              _Stack_90 = (_union_249689)0x429a7f1;
              _auStack_78 = auVar40;
              il2cpp_runtime_helper_02337ed0();
              auVar40 = _auStack_78;
              fVar41 = (float)auStack_88._0_4_;
              fVar42 = (float)auStack_88._4_4_;
            }
            fVar33 = fVar42 * fVar42 + auVar40._0_4_ * auVar40._0_4_ + fVar41 * fVar41;
            if (fVar33 < 0.0) {
              _Stack_90 = (_union_249689)0x429a833;
              fVar33 = sqrtf(fVar33);
            }
            else {
              fVar33 = SQRT(fVar33);
            }
            if (fVar33 < 15.0) {
              _Var28.genericMethod = *_Var31.genericMethod;
              if (_Var28.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
              if (*(char *)((long)_Var28.genericMethod + 0xcc) == '\0') {
                _Var26.genericMethod = (Characters_Human_o *)0x0;
                _Stack_90 = (_union_249689)0x429a864;
                Characters_Human__MountHorse(_Var28.genericMethod,(MethodInfo *)0x0);
                lVar19 = *(long *)_Var31.genericMethod;
                goto joined_r0x0429a592;
              }
            }
          }
        }
      }
      if ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70) == (UI_ImportPopup_o *)0x0) ||
         (_Var28 = (_union_249689)
                   ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70))->fields).Parent,
         _Var28.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
      _Var26.genericMethod = (Characters_Human_o *)0x0;
      _Stack_90 = (_union_249689)0x429a55c;
      bVar15 = Settings_KeybindSetting__GetKeyDown(_Var28.genericMethod,0,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        _Var28.genericMethod = *_Var31.genericMethod;
        if (_Var28.genericMethod != (Characters_Human_o *)0x0) {
          fVar33 = *(float *)((long)_Var28.genericMethod + 200);
          if (*(char *)((long)_Var28.genericMethod + 0xcc) != '\0') {
            fVar33 = fVar33 + 180.0;
          }
          _Var26.genericMethod = (Characters_Human_o *)0x0;
          _Stack_90 = (_union_249689)0x429a58c;
          Characters_Human__Dodge(_Var28.genericMethod,fVar33,(MethodInfo *)0x0);
          goto label_0429a58c;
        }
        goto label_0429a1cb;
      }
      goto label_0429a58c;
    }
    _Var28.genericMethod = *_Var31.genericMethod;
    if (_Var28.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
    _Var26.genericMethod = (Characters_Human_o *)0x0;
    _Stack_90 = (_union_249689)0x429a141;
    Characters_Human__Jump(_Var28.genericMethod,(MethodInfo *)0x0);
    lVar19 = *(long *)_Var31.genericMethod;
  }
joined_r0x0429a592:
  if (lVar19 == 0) goto label_0429a1cb;
  if (*(int *)(lVar19 + 0x158) == 0) {
    if ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70) == (UI_ImportPopup_o *)0x0) ||
       (_Var28 = (_union_249689)
                 ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70))->fields).TopBar,
       _Var28.genericMethod == (Characters_Human_o *)0x0)) goto label_0429a1cb;
    _Var26.genericMethod = (Characters_Human_o *)0x0;
    _Stack_90 = (_union_249689)0x429a5c4;
    bVar15 = Settings_KeybindSetting__GetKeyDown(_Var28.genericMethod,0,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      _Var28.genericMethod = *_Var31.genericMethod;
      if (_Var28.genericMethod == (Characters_Human_o *)0x0) goto label_0429a1cb;
      _Var26.genericMethod = (Characters_Human_o *)0x0;
      _Stack_90 = (_union_249689)0x429a5db;
      Characters_Human__Reload(_Var28.genericMethod,(MethodInfo *)0x0);
    }
  }
  uVar17 = *(ulong *)_Var31.genericMethod;
  if (uVar17 == 0) goto label_0429a1cb;
  if (*(int *)(uVar17 + 0x11c) == 1) {
    if ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70) != (UI_ImportPopup_o *)0x0) &&
       (_Var28 = (_union_249689)
                 ((*(UI_ImportPopup_o **)((long)__this_14.genericMethod + 0x70))->fields)._topButtons,
       _Var28.genericMethod != (Characters_Human_o *)0x0)) {
      _Var26.genericMethod = (Characters_Human_o *)0x0;
      _Stack_90 = (_union_249689)0x429a617;
      uVar16 = Settings_KeybindSetting__GetKeyDown(_Var28.genericMethod,0,(MethodInfo *)0x0);
      uVar17 = (ulong)uVar16;
      if ((char)uVar16 == '\0') goto label_0429a6bb;
      if ((*(long *)_Var31.genericMethod != 0) &&
         (lVar19 = *(long *)(*(long *)_Var31.genericMethod + 0x70), lVar19 != 0)) {
        __this_01 = *(Photon_Pun_PhotonView_o **)(lVar19 + 0x20);
        _Var26.genericMethod = (Characters_Human_o *)0x0;
        _Stack_90 = (_union_249689)0x429a64d;
        _Var28 = TypeInfo_object;
        parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
        _Var27.genericMethod = (Characters_Human_o *)0x0;
        if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_01,"UncarryRPC",0,parameters,(MethodInfo *)0x0);
          return extraout_EAX_00;
        }
      }
    }
    goto label_0429a1cb;
  }
label_0429a6bb:
  return (bool_conflict)uVar17;
code_r0x0429ab7d:
  if (*(float *)((long)plVar29 + 100) <= 0.0) {
    lVar19 = plVar29[0xb];
    if (lVar19 == 0) goto label_0429ab90;
label_0429ab4d:
    *(undefined1 *)(lVar19 + 0x2f2) = 0;
  }
  goto label_0429ab54;
label_0429ab10:
  bVar15 = Settings_InputKey__GetKeyUp(pSVar48,(MethodInfo *)0x0);
  pSVar48 = __this_15;
  if ((char)bVar15 != '\0') {
    lVar19 = plVar29[0xb];
    if (lVar19 == 0) goto label_0429acd8;
label_0429aacd:
    *(undefined1 *)(lVar19 + 0x2f2) = 0;
    pSVar48 = __this_15;
  }
  goto label_0429aad4;
code_r0x0429ac2e:
  __this_15 = pSVar48;
  bVar15 = Settings_InputKey__GetKey(pSVar48,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') goto label_0429ac10;
  if (plVar29[0xb] != 0) {
    *(undefined4 *)(plVar29[0xb] + 0x210) = 0x3f800000;
    bVar15 = Settings_InputKey__IsWheel(pSVar48,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto label_0429ac10;
    lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (lVar19 == 0) goto label_0429acc9;
    lVar19 = *(long *)(lVar19 + 0x28);
    if (lVar19 == 0) goto label_0429acce;
    lVar19 = *(long *)(lVar19 + 0xb8);
    if (lVar19 != 0) {
      *(undefined4 *)(plVar29 + 0xc) = *(undefined4 *)(lVar19 + 0x14);
      goto label_0429ac10;
    }
    goto label_0429acd3;
  }
label_0429acb5:
  il2cpp_runtime_helper_022b2c90();
label_0429acba:
  il2cpp_runtime_helper_022b2c90();
label_0429acbf:
  il2cpp_runtime_helper_022b2c90();
  goto label_0429acc4;
}


// Controllers.HumanPlayerController$$MovingLeft
// il2cpp: bool Controllers_HumanPlayerController__MovingLeft (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x429c4c0

bool_conflict
Controllers_HumanPlayerController__MovingLeft(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Settings_KeybindSetting_o *pSVar3;
  code *pcVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  UnityEngine_LayerMask_o UVar6;
  MethodInfo *method_00;
  System_Int32_array *layers;
  
  if (g_data_057add0d == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0d = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x30),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add0e == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0e = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x38),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add0f == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0f = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x68),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add10 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add10 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x30),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add11 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add11 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x38),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add12 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add12 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x40),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_HumanState);
    g_data_057add13 = '\x01';
  }
  (__this->fields)._reelInScrollCooldown = 0.2;
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)method_00,MethodInfo_HashSet_1_Characters_HumanState);
  if (method_00 != (MethodInfo *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,0xf,MethodInfo_Boolean_Add);
    (__this->fields)._illegalWeaponStates = (System_Collections_Generic_HashSet_HumanState__o *)method_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._illegalWeaponStates);
    Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this,method_00);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057add14 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x38);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30);
            if (4 < uVar1) {
              layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
              UVar6 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanPlayerController + 0xb8))->m_Mask = (int32_t)UVar6.fields.m_Mask
              ;
              return (bool_conflict)UVar6.fields.m_Mask;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


// Controllers.HumanPlayerController$$MovingRight
// il2cpp: bool Controllers_HumanPlayerController__MovingRight (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x429c520

bool_conflict
Controllers_HumanPlayerController__MovingRight(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Settings_KeybindSetting_o *pSVar3;
  code *pcVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  UnityEngine_LayerMask_o UVar6;
  MethodInfo *method_00;
  System_Int32_array *layers;
  
  if (g_data_057add0e == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0e = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x38),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add0f == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0f = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x68),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add10 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add10 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x30),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add11 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add11 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x38),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add12 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add12 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x40),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_HumanState);
    g_data_057add13 = '\x01';
  }
  (__this->fields)._reelInScrollCooldown = 0.2;
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)method_00,MethodInfo_HashSet_1_Characters_HumanState);
  if (method_00 != (MethodInfo *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,0xf,MethodInfo_Boolean_Add);
    (__this->fields)._illegalWeaponStates = (System_Collections_Generic_HashSet_HumanState__o *)method_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._illegalWeaponStates);
    Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this,method_00);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057add14 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x38);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30);
            if (4 < uVar1) {
              layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
              UVar6 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanPlayerController + 0xb8))->m_Mask = (int32_t)UVar6.fields.m_Mask
              ;
              return (bool_conflict)UVar6.fields.m_Mask;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


// Controllers.HumanPlayerController$$UsingGas
// il2cpp: bool Controllers_HumanPlayerController__UsingGas (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x429c580

bool_conflict
Controllers_HumanPlayerController__UsingGas(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Settings_KeybindSetting_o *pSVar3;
  code *pcVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  UnityEngine_LayerMask_o UVar6;
  MethodInfo *method_00;
  System_Int32_array *layers;
  
  if (g_data_057add0f == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add0f = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x68),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add10 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add10 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x30),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add11 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add11 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x38),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add12 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add12 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x40),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_HumanState);
    g_data_057add13 = '\x01';
  }
  (__this->fields)._reelInScrollCooldown = 0.2;
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)method_00,MethodInfo_HashSet_1_Characters_HumanState);
  if (method_00 != (MethodInfo *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,0xf,MethodInfo_Boolean_Add);
    (__this->fields)._illegalWeaponStates = (System_Collections_Generic_HashSet_HumanState__o *)method_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._illegalWeaponStates);
    Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this,method_00);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057add14 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x38);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30);
            if (4 < uVar1) {
              layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
              UVar6 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanPlayerController + 0xb8))->m_Mask = (int32_t)UVar6.fields.m_Mask
              ;
              return (bool_conflict)UVar6.fields.m_Mask;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


// Controllers.HumanPlayerController$$HookingLeft
// il2cpp: bool Controllers_HumanPlayerController__HookingLeft (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x429c5e0

bool_conflict
Controllers_HumanPlayerController__HookingLeft(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Settings_KeybindSetting_o *pSVar3;
  code *pcVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  UnityEngine_LayerMask_o UVar6;
  MethodInfo *method_00;
  System_Int32_array *layers;
  
  if (g_data_057add10 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add10 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x30),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add11 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add11 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x38),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add12 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add12 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x40),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_HumanState);
    g_data_057add13 = '\x01';
  }
  (__this->fields)._reelInScrollCooldown = 0.2;
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)method_00,MethodInfo_HashSet_1_Characters_HumanState);
  if (method_00 != (MethodInfo *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,0xf,MethodInfo_Boolean_Add);
    (__this->fields)._illegalWeaponStates = (System_Collections_Generic_HashSet_HumanState__o *)method_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._illegalWeaponStates);
    Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this,method_00);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057add14 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x38);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30);
            if (4 < uVar1) {
              layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
              UVar6 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanPlayerController + 0xb8))->m_Mask = (int32_t)UVar6.fields.m_Mask
              ;
              return (bool_conflict)UVar6.fields.m_Mask;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


// Controllers.HumanPlayerController$$HookingRight
// il2cpp: bool Controllers_HumanPlayerController__HookingRight (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x429c640

bool_conflict
Controllers_HumanPlayerController__HookingRight
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Settings_KeybindSetting_o *pSVar3;
  code *pcVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  UnityEngine_LayerMask_o UVar6;
  MethodInfo *method_00;
  System_Int32_array *layers;
  
  if (g_data_057add11 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add11 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x38),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add12 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add12 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (pSVar3 = *(Settings_KeybindSetting_o **)(lVar2 + 0x40),
     __this = (Controllers_HumanPlayerController_o *)0x0, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar5 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_HumanState);
    g_data_057add13 = '\x01';
  }
  (__this->fields)._reelInScrollCooldown = 0.2;
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)method_00,MethodInfo_HashSet_1_Characters_HumanState);
  if (method_00 != (MethodInfo *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,0xf,MethodInfo_Boolean_Add);
    (__this->fields)._illegalWeaponStates = (System_Collections_Generic_HashSet_HumanState__o *)method_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._illegalWeaponStates);
    Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this,method_00);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057add14 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x38);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30);
            if (4 < uVar1) {
              layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
              UVar6 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanPlayerController + 0xb8))->m_Mask = (int32_t)UVar6.fields.m_Mask
              ;
              return (bool_conflict)UVar6.fields.m_Mask;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


// Controllers.HumanPlayerController$$HookingBoth
// il2cpp: bool Controllers_HumanPlayerController__HookingBoth (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x429c6a0

bool_conflict
Controllers_HumanPlayerController__HookingBoth(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Settings_KeybindSetting_o *__this_00;
  code *pcVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  UnityEngine_LayerMask_o UVar5;
  MethodInfo *method_00;
  System_Int32_array *layers;
  
  if (g_data_057add12 == '\0') {
    __this = (Controllers_HumanPlayerController_o *)&TypeInfo_SettingsManager;
    il2cpp_runtime_helper_023445d0();
    g_data_057add12 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (__this_00 = *(Settings_KeybindSetting_o **)(lVar2 + 0x40),
     __this = (Controllers_HumanPlayerController_o *)0x0, __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar4 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_HumanState);
    g_data_057add13 = '\x01';
  }
  (__this->fields)._reelInScrollCooldown = 0.2;
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)method_00,MethodInfo_HashSet_1_Characters_HumanState);
  if (method_00 != (MethodInfo *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,0xf,MethodInfo_Boolean_Add);
    (__this->fields)._illegalWeaponStates = (System_Collections_Generic_HashSet_HumanState__o *)method_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._illegalWeaponStates);
    Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this,method_00);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057add14 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x38);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30);
            if (4 < uVar1) {
              layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
              UVar5 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanPlayerController + 0xb8))->m_Mask = (int32_t)UVar5.fields.m_Mask
              ;
              return (bool_conflict)UVar5.fields.m_Mask;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


// Controllers.HumanPlayerController$$.ctor
// il2cpp: void Controllers_HumanPlayerController___ctor (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x429c700

void Controllers_HumanPlayerController___ctor(Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  UnityEngine_LayerMask_o UVar4;
  MethodInfo *method_00;
  System_Int32_array *layers;
  
  if (g_data_057add13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_HumanState);
    g_data_057add13 = '\x01';
  }
  (__this->fields)._reelInScrollCooldown = 0.2;
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_HumanState);
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)method_00,MethodInfo_HashSet_1_Characters_HumanState);
  if (method_00 != (MethodInfo *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,0xf,MethodInfo_Boolean_Add);
    (__this->fields)._illegalWeaponStates = (System_Collections_Generic_HashSet_HumanState__o *)method_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._illegalWeaponStates);
    Controllers_BasePlayerController___ctor((Controllers_ErenShifterPlayerController_o *)__this,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057add14 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x38);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30);
            if (4 < uVar1) {
              layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
              UVar4 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanPlayerController + 0xb8))->m_Mask = (int32_t)UVar4.fields.m_Mask
              ;
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


// Controllers.HumanPlayerController$$.cctor
// il2cpp: void Controllers_HumanPlayerController___cctor (const MethodInfo* method);
// 0x429c800

void Controllers_HumanPlayerController___cctor(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  UnityEngine_LayerMask_o UVar4;
  System_Int32_array *layers;
  
  if (g_data_057add14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanPlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057add14 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x14);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x38);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x30);
            if (4 < uVar1) {
              layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
              UVar4 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanPlayerController + 0xb8))->m_Mask = (int32_t)UVar4.fields.m_Mask
              ;
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


