// Type: Controllers.HumanPlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers/HumanPlayerController.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Controllers/HumanPlayerController.cs  [CHANGED since prior version]
// --------------------------------

// Controllers.HumanPlayerController$$Awake
// il2cpp: void Controllers_HumanPlayerController__Awake (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f8afe0

void Controllers_HumanPlayerController__Awake
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  long lVar1;
  Characters_Human_o *pCVar2;
  System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *__this_00;
  System_Collections_Generic_Dictionary_HumanDashDirection__float__o *__this_01;
  
  if (DAT_05703f93 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703f93 = '\x01';
  }
  Controllers_BasePlayerController__Awake((Controllers_BasePlayerController_o *)__this,method);
  pCVar2 = (Characters_Human_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Human_GetComponent_Human);
  (__this->fields)._human = pCVar2;
  il2cpp_runtime_glue(&(__this->fields)._human,pCVar2);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar1 != 0) {
    (__this->fields)._humanInput = *(Settings_HumanInputSettings_o **)(lVar1 + 0x28);
    il2cpp_runtime_glue(&(__this->fields)._humanInput);
    if (DAT_05703f94 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Add);
      il2cpp_init_method_metadata(&MethodInfo_Void_Add);
      il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Characters_HumanDashDirection_Setti);
      il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Characters_HumanDashDirection_Syste);
      il2cpp_init_method_metadata(&TypeInfo_Dictionary_HumanDashDirection__KeybindSetting);
      il2cpp_init_method_metadata(&TypeInfo_Dictionary_HumanDashDirection__float);
      il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
      DAT_05703f94 = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x20);
      __this_00 = (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)
                  il2cpp_runtime_glue(TypeInfo_Dictionary_HumanDashDirection__KeybindSetting);
      System_Collections_Generic_Dictionary<Int32Enum__object>___ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_Characters_HumanDashDirection_Setti);
      if ((lVar1 != 0) &&
         (__this_00 !=
          (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0)) {
        System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,1,
                   *(Il2CppObject **)(lVar1 + 0x20),MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,2,
                   *(Il2CppObject **)(lVar1 + 0x28),MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,3,
                   *(Il2CppObject **)(lVar1 + 0x30),MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,4,
                   *(Il2CppObject **)(lVar1 + 0x38),MethodInfo_Void_Add);
        (__this->fields)._dashKeys = __this_00;
        il2cpp_runtime_glue(&(__this->fields)._dashKeys,__this_00);
        __this_01 = (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)
                    il2cpp_runtime_glue(TypeInfo_Dictionary_HumanDashDirection__float);
        System_Collections_Generic_Dictionary<Int32Enum__float>___ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_Characters_HumanDashDirection_Syste);
        if (__this_01 != (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
        {
          System_Collections_Generic_Dictionary<Int32Enum__float>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,1,-1.0,
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary<Int32Enum__float>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,2,-1.0,
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary<Int32Enum__float>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,3,-1.0,
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary<Int32Enum__float>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,4,-1.0,
                     MethodInfo_Void_Add);
          (__this->fields)._dashTimes = __this_01;
          il2cpp_runtime_glue(&(__this->fields)._dashTimes,__this_01);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$SetupDash
// il2cpp: void Controllers_HumanPlayerController__SetupDash (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f8b070

void Controllers_HumanPlayerController__SetupDash
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *__this_00;
  System_Collections_Generic_Dictionary_HumanDashDirection__float__o *__this_01;
  
  if (DAT_05703f94 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Characters_HumanDashDirection_Setti);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Characters_HumanDashDirection_Syste);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_HumanDashDirection__KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_HumanDashDirection__float);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703f94 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x20);
    __this_00 = (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_HumanDashDirection__KeybindSetting);
    System_Collections_Generic_Dictionary<Int32Enum__object>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_Characters_HumanDashDirection_Setti);
    if ((lVar1 != 0) &&
       (__this_00 !=
        (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)0x0)) {
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,1,
                 *(Il2CppObject **)(lVar1 + 0x20),MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,2,
                 *(Il2CppObject **)(lVar1 + 0x28),MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,3,
                 *(Il2CppObject **)(lVar1 + 0x30),MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,4,
                 *(Il2CppObject **)(lVar1 + 0x38),MethodInfo_Void_Add);
      (__this->fields)._dashKeys = __this_00;
      il2cpp_runtime_glue(&(__this->fields)._dashKeys,__this_00);
      __this_01 = (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)
                  il2cpp_runtime_glue(TypeInfo_Dictionary_HumanDashDirection__float);
      System_Collections_Generic_Dictionary<Int32Enum__float>___ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_Characters_HumanDashDirection_Syste);
      if (__this_01 != (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
        System_Collections_Generic_Dictionary<Int32Enum__float>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,1,-1.0,
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary<Int32Enum__float>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,2,-1.0,
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary<Int32Enum__float>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,3,-1.0,
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary<Int32Enum__float>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,4,-1.0,
                   MethodInfo_Void_Add);
        (__this->fields)._dashTimes = __this_01;
        il2cpp_runtime_glue(&(__this->fields)._dashTimes,__this_01);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$Update
// il2cpp: void Controllers_HumanPlayerController__Update (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f8b260

void Controllers_HumanPlayerController__Update
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  
  pCVar1 = (__this->fields)._human;
  if (pCVar1 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((char)(pCVar1->fields).AllowHorse != '\0') {
    Controllers_BasePlayerController__Update((Controllers_BasePlayerController_o *)__this,method);
    return;
  }
  return;
}


// Controllers.HumanPlayerController$$UpdateMovementInput
// il2cpp: void Controllers_HumanPlayerController__UpdateMovementInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f8b280

/* WARNING: Type propagation algorithm not settling */

void Controllers_HumanPlayerController__UpdateMovementInput
               (Controllers_HumanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  bool_conflict *pbVar1;
  byte bVar2;
  byte bVar3;
  Characters_Human_o *pCVar4;
  Settings_HumanInputSettings_o *pSVar5;
  Settings_KeybindSetting_o *pSVar6;
  Characters_Human_o *pCVar7;
  Settings_GeneralInputSettings_o *pSVar8;
  Characters_BaseCharacter_o *pCVar9;
  long lVar10;
  UnityEngine_Transform_o *__this_00;
  System_Action_Hashtable__o *pSVar11;
  System_Action_Hashtable__c *pSVar12;
  Characters_AnimationHandler_o *pCVar13;
  char cVar14;
  bool_conflict bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  float fStack_34;
  
  if (DAT_05703f95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DownStrikeSpecial);
    il2cpp_init_method_metadata(&TypeInfo_StockSpecial);
    il2cpp_init_method_metadata(&"jump");
    il2cpp_init_method_metadata(&"dash");
    DAT_05703f95 = '\x01';
  }
  if ((char)inMenu != '\0') {
LAB_03f8b2f0:
    if ((char)(__this->fields)._autorun != '\0') {
      return;
    }
    pCVar4 = (__this->fields)._human;
    if (pCVar4 != (Characters_Human_o *)0x0) {
      *(undefined1 *)((long)&(pCVar4->fields).Detection + 4) = 0;
      return;
    }
    goto LAB_03f8b8bb;
  }
  pCVar4 = (__this->fields)._human;
  if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03f8b8bb;
  if ((*(char *)&(pCVar4->fields).FeedVictimName != '\0') || ((pCVar4->fields).FinishSetup == 0xf))
  goto LAB_03f8b2f0;
  pSVar5 = (__this->fields)._humanInput;
  if ((pSVar5 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar6 = (pSVar5->fields).HorseWalk, pSVar6 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f8b8bb;
  bVar15 = Settings_KeybindSetting__GetKey(pSVar6,0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
LAB_03f8b358:
    pSVar5 = (__this->fields)._humanInput;
    if ((pSVar5 == (Settings_HumanInputSettings_o *)0x0) ||
       (pSVar6 = (pSVar5->fields).Walk, pSVar6 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_03f8b8bb;
    bVar20 = false;
    bVar15 = Settings_KeybindSetting__GetKey(pSVar6,0,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      pCVar7 = (__this->fields)._human;
      if (pCVar7 == (Characters_Human_o *)0x0) goto LAB_03f8b8bb;
      bVar20 = *(int *)&(pCVar7->fields).Weapon == 0;
    }
  }
  else {
    pCVar7 = (__this->fields)._human;
    if (pCVar7 == (Characters_Human_o *)0x0) goto LAB_03f8b8bb;
    bVar20 = true;
    if (*(int *)&(pCVar7->fields).Weapon != 1) goto LAB_03f8b358;
  }
  *(bool *)&(pCVar4->fields).IsRefillable = bVar20;
  pCVar4 = (__this->fields)._human;
  if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03f8b8bb;
  if (*(int *)&(pCVar4->fields).Weapon != 1) {
    iVar19 = (pCVar4->fields).FinishSetup;
    if (*(char *)((long)&(pCVar4->fields).Animation + 4) == '\0') {
      if (iVar19 == 8) {
        return;
      }
      if (iVar19 == 9) {
        pSVar11 = (pCVar4->fields).OnPlayerPropertiesChanged;
        if (pSVar11 == (System_Action_Hashtable__o *)0x0) {
          return;
        }
        pSVar12 = pSVar11->klass;
        bVar2 = (pSVar12->_2).naturalAligment;
        bVar3 = (TypeInfo_DownStrikeSpecial->_2).naturalAligment;
        if ((bVar2 < bVar3) || ((pSVar12->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_DownStrikeSpecial)) {
          bVar3 = (TypeInfo_StockSpecial->_2).naturalAligment;
          if (bVar2 < bVar3) {
            return;
          }
          if ((pSVar12->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_StockSpecial) {
            return;
          }
        }
      }
      pCVar13 = *(Characters_AnimationHandler_o **)&(pCVar4->fields)._cameraFPS;
      if (pCVar13 == (Characters_AnimationHandler_o *)0x0) goto LAB_03f8b8bb;
      bVar15 = Characters_AnimationHandler__IsPlaying(pCVar13,"dash",(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        return;
      }
      pCVar4 = (__this->fields)._human;
      if ((pCVar4 == (Characters_Human_o *)0x0) ||
         (pCVar13 = *(Characters_AnimationHandler_o **)&(pCVar4->fields)._cameraFPS,
         pCVar13 == (Characters_AnimationHandler_o *)0x0)) goto LAB_03f8b8bb;
      bVar15 = Characters_AnimationHandler__IsPlaying(pCVar13,"jump",(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        return;
      }
      pCVar4 = (__this->fields)._human;
      if (pCVar4 == (Characters_Human_o *)0x0) goto LAB_03f8b8bb;
      bVar15 = Characters_Human__IsFiringThunderspear(pCVar4,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        return;
      }
    }
    else if (iVar19 != 0) {
      return;
    }
  }
  pSVar8 = (__this->fields)._generalInput;
  if ((pSVar8 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar6 = (pSVar8->fields).Autorun, pSVar6 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f8b8bb;
  bVar15 = Settings_KeybindSetting__GetKeyDown(pSVar6,0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pbVar1 = &(__this->fields)._autorun;
    *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
  }
  pSVar8 = (__this->fields)._generalInput;
  if ((pSVar8 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar6 = (pSVar8->fields).Forward, pSVar6 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f8b8bb;
  bVar15 = Settings_KeybindSetting__GetKey(pSVar6,0,(MethodInfo *)0x0);
  iVar19 = 1;
  if ((char)bVar15 == '\0') {
    pSVar8 = (__this->fields)._generalInput;
    if ((pSVar8 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar6 = (pSVar8->fields).Back, pSVar6 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_03f8b8bb;
    uVar16 = Settings_KeybindSetting__GetKey(pSVar6,0,(MethodInfo *)0x0);
    iVar19 = -(uVar16 & 0xff);
  }
  pSVar8 = (__this->fields)._generalInput;
  if ((pSVar8 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar6 = (pSVar8->fields).Left, pSVar6 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f8b8bb;
  bVar15 = Settings_KeybindSetting__GetKey(pSVar6,0,(MethodInfo *)0x0);
  uVar16 = 0xffffffff;
  if ((char)bVar15 == '\0') {
    pSVar8 = (__this->fields)._generalInput;
    if ((pSVar8 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar6 = (pSVar8->fields).Right, pSVar6 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_03f8b8bb;
    uVar17 = Settings_KeybindSetting__GetKey(pSVar6,0,(MethodInfo *)0x0);
    uVar16 = uVar17 & 0xff;
    if ((iVar19 != 0) || ((char)uVar17 != '\0')) goto LAB_03f8b46c;
    cVar14 = (char)(__this->fields)._autorun;
    uVar16 = 0;
  }
  else {
LAB_03f8b46c:
    *(undefined1 *)&(__this->fields)._autorun = 0;
    cVar14 = '\0';
  }
  uVar17 = 0;
  if (cVar14 == '\0') {
    uVar17 = uVar16;
  }
  iVar18 = 1;
  if (cVar14 == '\0') {
    iVar18 = iVar19;
  }
  pCVar9 = (__this->fields)._character;
  if (iVar18 == 0 && uVar17 == 0) {
    if (pCVar9 != (Characters_BaseCharacter_o *)0x0) {
      *(undefined1 *)((long)&(pCVar9->fields).Detection + 4) = 0;
      pCVar4 = (__this->fields)._human;
      if (pCVar4 != (Characters_Human_o *)0x0) {
        (pCVar4->fields).IsAttackableState = 0;
        return;
      }
    }
    goto LAB_03f8b8bb;
  }
  if (DAT_05703f5a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05703f5a = '\x01';
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x28), lVar10 == 0)) ||
     (__this_00 = *(UnityEngine_Transform_o **)(lVar10 + 0x10),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f8b8bb;
  rotation = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
  UVar24 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
  euler.fields.x = UVar24.fields.x * 57.29578;
  euler.fields.y = UVar24.fields.y * 57.29578;
  euler.fields.z = UVar24.fields.z * 57.29578;
  UVar24 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  fVar23 = (float)iVar18;
  fVar22 = (float)(int)uVar17;
  fVar21 = atan2f(fVar23,fVar22);
  if (pCVar9 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f8b8bb;
  fStack_34 = UVar24.fields.y;
  *(float *)&(pCVar9->fields).Detection = fVar21 * -57.29578 + fStack_34 + 90.0;
  pCVar9 = (__this->fields)._character;
  if (pCVar9 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f8b8bb;
  *(undefined1 *)((long)&(pCVar9->fields).Detection + 4) = 1;
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar21 = fVar23 * fVar23 + fVar22 * fVar22 + 0.0;
  if (fVar21 < 0.0) {
    fVar22 = sqrtf(fVar21);
    if (0.95 < fVar22) goto LAB_03f8b67d;
LAB_03f8b697:
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto LAB_03f8b7f8;
LAB_03f8b6b5:
      if (0.0 <= fVar21) goto LAB_03f8b6c7;
LAB_03f8b80f:
      fVar23 = sqrtf(fVar21);
    }
    else {
      if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto LAB_03f8b6b5;
LAB_03f8b7f8:
      il2cpp_init_class();
      if (fVar21 < 0.0) goto LAB_03f8b80f;
LAB_03f8b6c7:
      fVar23 = SQRT(fVar21);
    }
    fVar22 = 0.0;
    if (0.25 <= fVar23) {
      if (DAT_056fde1c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (0.0 <= fVar21) {
        fVar22 = SQRT(fVar21);
        pCVar4 = (__this->fields)._human;
        goto joined_r0x03f8b68c;
      }
      fVar22 = sqrtf(fVar21);
    }
    pCVar4 = (__this->fields)._human;
  }
  else {
    if (SQRT(fVar21) <= 0.95) goto LAB_03f8b697;
LAB_03f8b67d:
    fVar22 = 1.0;
    pCVar4 = (__this->fields)._human;
  }
joined_r0x03f8b68c:
  if (pCVar4 != (Characters_Human_o *)0x0) {
    if ((((char)(pCVar4->fields).IsRefillable != '\0') && (*(int *)&(pCVar4->fields).Weapon == 0))
       && (((pCVar4->fields).FinishSetup == 0 &&
           (*(char *)((long)&(pCVar4->fields).Animation + 4) != '\0')))) {
      fVar22 = fVar22 * 0.25;
    }
    (pCVar4->fields).IsAttackableState = (bool_conflict)fVar22;
    return;
  }
LAB_03f8b8bb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$UpdateUI
// il2cpp: void Controllers_HumanPlayerController__UpdateUI (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f8b8c0

/* WARNING: Type propagation algorithm not settling */

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
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_00;
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
  UnityEngine_Vector3_Fields UVar79;
  bool_conflict bVar80;
  int32_t iVar81;
  uint uVar82;
  System_String_o *pSVar83;
  System_String_o *str0;
  long lVar84;
  undefined8 *puVar85;
  long *plVar86;
  float *pfVar87;
  undefined4 in_register_00000034;
  float fVar88;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar89;
  undefined8 uVar90;
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
  undefined4 uVar98;
  undefined4 uVar99;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar93 [16];
  undefined1 extraout_var_01 [12];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 extraout_var_02 [12];
  undefined1 auVar97 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar105 [12];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  UnityEngine_Vector3_o UVar109;
  UnityEngine_Vector3_Fields UVar110;
  UnityEngine_Vector3_Fields UVar111;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o UVar112;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Quaternion_o UVar113;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  UnityEngine_Quaternion_o rotation;
  undefined8 uVar114;
  undefined8 uVar115;
  undefined4 in_stack_fffffffffffffde0;
  float in_stack_fffffffffffffde8;
  float in_stack_fffffffffffffdec;
  float fVar116;
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
  
  if (DAT_05703f96 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AHSSTwinShot,CONCAT44(in_register_00000034,inMenu));
    il2cpp_init_method_metadata(&TypeInfo_AHSSWeapon);
    il2cpp_init_method_metadata(&TypeInfo_APGWeapon);
    il2cpp_init_method_metadata(&TypeInfo_BladeWeapon);
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_HumanPlayerController);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearWeapon);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"<color=#FF0000>");
    il2cpp_init_method_metadata(&"F2");
    il2cpp_init_method_metadata(&"Blade");
    il2cpp_init_method_metadata(&"K");
    il2cpp_init_method_metadata(&"DamageMultiplier");
    il2cpp_init_method_metadata(&"<color=#008000>READY</color>");
    il2cpp_init_method_metadata(&"APG");
    il2cpp_init_method_metadata(&" | ");
    il2cpp_init_method_metadata(&"F1");
    il2cpp_init_method_metadata(&"</color>");
    il2cpp_init_method_metadata(&"AHSS");
    il2cpp_init_method_metadata(&"Thunderspear");
    il2cpp_init_method_metadata(&"???");
    il2cpp_init_method_metadata(&" u/s");
    DAT_05703f96 = '\x01';
  }
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
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
  lVar84 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar84 == 0) goto LAB_03f8ce5a;
  pUVar4 = *(UnityEngine_Camera_o **)(lVar84 + 0x20);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar109 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  if (pUVar4 == (UnityEngine_Camera_o *)0x0) goto LAB_03f8ce5a;
  UnityEngine_Camera__ScreenPointToRay(&UStack_80,pUVar4,UVar109,(MethodInfo *)0x0);
  pSVar83 = "???";
  UVar79.z = fStack_19c;
  UVar79.x = (float)(undefined4)uStack_b8;
  UVar79.y = (float)uStack_b8._4_4_;
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar111.z = fStack_1c4;
  UVar111.x = (float)uStack_138;
  UVar111.y = uStack_138._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  aUStack_128[1].y = UStack_80.fields.m_Direction.fields.y;
  aUStack_128[1].z = UStack_80.fields.m_Direction.fields.z;
  aUStack_128[0].x = UStack_80.fields.m_Origin.fields.x;
  aUStack_128[0].y = UStack_80.fields.m_Origin.fields.y;
  aUStack_128[0].z = UStack_80.fields.m_Origin.fields.z;
  aUStack_128[1].x = UStack_80.fields.m_Direction.fields.x;
  pCVar5 = (__this->fields)._human;
  if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03f8ce5a;
  str0 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  if (*(int *)((long)&(pCVar5->fields).Weapon + 4) == 1) {
    uStack_178._0_4_ = UStack_80.fields.m_Direction.fields.y;
    uStack_178._4_4_ = UStack_80.fields.m_Direction.fields.z;
    auStack_188._0_4_ = UStack_80.fields.m_Origin.fields.x;
    auStack_188._4_4_ = UStack_80.fields.m_Origin.fields.y;
    auStack_188._8_4_ = UStack_80.fields.m_Origin.fields.z;
    auStack_188._12_4_ = UStack_80.fields.m_Direction.fields.x;
    pSVar6 = (pCVar5->fields).CurrentSpecial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar80 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                       );
    UVar78.z = fStack_19c;
    UVar78.x = (float)(undefined4)uStack_b8;
    UVar78.y = (float)uStack_b8._4_4_;
    UVar46.z = fStack_19c;
    UVar46.x = (float)(undefined4)uStack_b8;
    UVar46.y = (float)uStack_b8._4_4_;
    UVar48.z = fStack_19c;
    UVar48.x = (float)(undefined4)uStack_b8;
    UVar48.y = (float)uStack_b8._4_4_;
    UVar47.z = fStack_19c;
    UVar47.x = (float)(undefined4)uStack_b8;
    UVar47.y = (float)uStack_b8._4_4_;
    UVar45.z = fStack_1c4;
    UVar45.x = (float)uStack_138;
    UVar45.y = uStack_138._4_4_;
    UVar14.z = fStack_1c4;
    UVar14.x = (float)uStack_138;
    UVar14.y = uStack_138._4_4_;
    UVar16.z = fStack_1c4;
    UVar16.x = (float)uStack_138;
    UVar16.y = uStack_138._4_4_;
    UVar15.z = fStack_1c4;
    UVar15.x = (float)uStack_138;
    UVar15.y = uStack_138._4_4_;
    if ((char)bVar80 == '\0') {
      uStack_158._0_4_ = (float)uStack_178;
      uStack_158._4_4_ = uStack_178._4_4_;
      auStack_168._0_8_ = auStack_188._0_8_;
      auStack_168._8_8_ = auStack_188._8_8_;
      pCVar5 = (__this->fields)._human;
      if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03f8ce5a;
      lVar84._0_4_ = (pCVar5->fields).Dead;
      lVar84._4_4_ = (pCVar5->fields).CustomDamageEnabled;
      uStack_158 = uStack_178;
      UVar14 = UVar45;
      UVar46 = UVar78;
      goto joined_r0x03f8bce0;
    }
    uStack_d8._0_4_ = (float)uStack_178;
    uStack_d8._4_4_ = uStack_178._4_4_;
    auStack_e8._0_8_ = auStack_188._0_8_;
    auStack_e8._8_8_ = auStack_188._8_8_;
    pCVar5 = (__this->fields)._human;
    UVar14 = UVar15;
    UVar46 = UVar47;
    if ((pCVar5 == (Characters_Human_o *)0x0) ||
       (pSVar6 = (pCVar5->fields).CurrentSpecial, UVar14 = UVar16, UVar46 = UVar48,
       pSVar6 == (System_String_o *)0x0)) goto LAB_03f8ce5a;
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    fVar101 = (float)pSVar6[0x10].fields._stringLength;
    position_00.fields.z = *(float *)&pSVar6[0x10].fields._firstChar;
    fVar88 = *(float *)&pSVar6[0x11].klass;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
      in_stack_fffffffffffffde8 = fVar101;
    }
    pfVar87 = (float *)auStack_e8;
    position_00.fields.z =
         fVar88 * fVar88 + position_00.fields.z * position_00.fields.z + fVar101 * fVar101;
    if (position_00.fields.z < 0.0) goto LAB_03f8bcaf;
LAB_03f8bdd1:
    position_00.fields.z = SQRT(position_00.fields.z);
  }
  else {
    lVar84._0_4_ = (pCVar5->fields).Dead;
    lVar84._4_4_ = (pCVar5->fields).CustomDamageEnabled;
    aUStack_128[1]._4_8_ = UStack_80.fields.m_Direction.fields._4_8_;
    aUStack_128[0]._0_8_ = UStack_80.fields.m_Origin.fields._0_8_;
    aUStack_128._8_8_ = UStack_80.fields._8_8_;
    uStack_158 = UStack_80.fields.m_Direction.fields._4_8_;
    auStack_168._0_8_ = UStack_80.fields.m_Origin.fields._0_8_;
    auStack_168._8_8_ = UStack_80.fields._8_8_;
    UVar14 = UVar111;
    UVar46 = UVar79;
joined_r0x03f8bce0:
    if (lVar84 == 0) goto LAB_03f8ce5a;
    UVar46.z = fStack_19c;
    UVar46.x = (float)(int)uStack_b8;
    UVar46.y = (float)(int)((ulong)uStack_b8 >> 0x20);
    UVar14.z = fStack_1c4;
    UVar14.x = (float)(int)uStack_138;
    UVar14.y = (float)(int)((ulong)uStack_138 >> 0x20);
    if (*(UnityEngine_Rigidbody_o **)(lVar84 + 0x18) == (UnityEngine_Rigidbody_o *)0x0)
    goto LAB_03f8ce5a;
    UVar109 = UnityEngine_Rigidbody__get_velocity
                        (*(UnityEngine_Rigidbody_o **)(lVar84 + 0x18),(MethodInfo *)0x0);
    auVar105._8_4_ = extraout_XMM0_Dc;
    auVar105._0_8_ = UVar109.fields._0_8_;
    if (DAT_056fde1c == '\0') {
      in_stack_fffffffffffffde8 = UVar109.fields.x;
      in_stack_fffffffffffffdec = UVar109.fields.y;
      in_stack_fffffffffffffdf0 = extraout_XMM0_Dc;
      il2cpp_init_method_metadata(&TypeInfo_Math);
      auVar105._4_4_ = in_stack_fffffffffffffdec;
      auVar105._0_4_ = in_stack_fffffffffffffde8;
      auVar105._8_4_ = in_stack_fffffffffffffdf0;
      DAT_056fde1c = '\x01';
    }
    iVar81 = auVar105._8_4_;
    position_00.fields.z = auVar105._4_4_;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      in_stack_fffffffffffffde8 = auVar105._0_4_;
      in_stack_fffffffffffffdec = position_00.fields.z;
      il2cpp_init_class();
      auVar105._4_4_ = in_stack_fffffffffffffdec;
      auVar105._0_4_ = in_stack_fffffffffffffde8;
      auVar105._8_4_ = iVar81;
      in_stack_fffffffffffffdf0 = iVar81;
    }
    pfVar87 = (float *)auStack_168;
    position_00.fields.z =
         position_00.fields.z * position_00.fields.z + auVar105._0_4_ * auVar105._0_4_ +
         UVar109.fields.z * UVar109.fields.z;
    if (0.0 <= position_00.fields.z) goto LAB_03f8bdd1;
LAB_03f8bcaf:
    position_00.fields.z = sqrtf(position_00.fields.z);
  }
  uStack_f8 = *(undefined8 *)(pfVar87 + 4);
  fVar88 = *pfVar87;
  fVar101 = pfVar87[1];
  uStack_108 = *(undefined8 *)pfVar87;
  fVar102 = pfVar87[2];
  fVar103 = pfVar87[3];
  uStack_100 = *(undefined8 *)(pfVar87 + 2);
  if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar81 = UnityEngine_LayerMask__get_value
                     ((UnityEngine_LayerMask_Fields)(int32_t)*(undefined8 *)(TypeInfo_HumanPlayerController + 0xb8),
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uStack_208._0_4_ = 1000.0;
  ray.fields.m_Origin.fields.z = (float)(undefined4)uStack_100;
  ray.fields.m_Direction.fields.x = (float)uStack_100._4_4_;
  ray.fields.m_Origin.fields.x = (float)(undefined4)uStack_108;
  ray.fields.m_Origin.fields.y = (float)uStack_108._4_4_;
  ray.fields.m_Direction.fields.y = (float)(undefined4)uStack_f8;
  ray.fields.m_Direction.fields.z = (float)uStack_f8._4_4_;
  uVar90 = uStack_108;
  uVar114 = uStack_100;
  uVar115 = uStack_f8;
  bVar80 = UnityEngine_Physics__Raycast
                     (ray,(UnityEngine_RaycastHit_o *)&pIStack_68,1000.0,iVar81,(MethodInfo *)0x0);
  if ((char)bVar80 != '\0') {
    __this_00.fields.m_Point.fields.z = (float)(int)uVar114;
    __this_00.fields.m_Normal.fields.x = (float)(int)((ulong)uVar114 >> 0x20);
    __this_00.fields.m_Point.fields.x = (float)(int)uVar90;
    __this_00.fields.m_Point.fields.y = (float)(int)((ulong)uVar90 >> 0x20);
    __this_00.fields.m_Normal.fields.y = (float)(int)uVar115;
    __this_00.fields.m_Normal.fields.z = (float)(int)((ulong)uVar115 >> 0x20);
    __this_00.fields.m_FaceID = in_stack_fffffffffffffde0;
    __this_00.fields.m_Distance = position_00.fields.z;
    __this_00.fields.m_UV.fields.x = in_stack_fffffffffffffde8;
    __this_00.fields.m_UV.fields.y = in_stack_fffffffffffffdec;
    __this_00.fields.m_Collider = in_stack_fffffffffffffdf0;
    UVar109 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)&pIStack_68);
    UVar50.z = fStack_19c;
    UVar50.x = (float)(undefined4)uStack_b8;
    UVar50.y = (float)uStack_b8._4_4_;
    UVar49.z = fStack_19c;
    UVar49.x = (float)(undefined4)uStack_b8;
    UVar49.y = (float)uStack_b8._4_4_;
    UVar46.z = fStack_19c;
    UVar46.x = (float)(undefined4)uStack_b8;
    UVar46.y = (float)uStack_b8._4_4_;
    UVar18.z = fStack_1c4;
    UVar18.x = (float)uStack_138;
    UVar18.y = uStack_138._4_4_;
    UVar17.z = fStack_1c4;
    UVar17.x = (float)uStack_138;
    UVar17.y = uStack_138._4_4_;
    UVar14.z = fStack_1c4;
    UVar14.x = (float)uStack_138;
    UVar14.y = uStack_138._4_4_;
    fVar88 = UVar109.fields.z;
    pCVar5 = (__this->fields)._human;
    if (((pCVar5 == (Characters_Human_o *)0x0) ||
        (lVar84 = *(long *)&(pCVar5->fields).Dead, UVar14 = UVar17, UVar46 = UVar49, lVar84 == 0))
       || (pUVar7 = *(UnityEngine_Transform_o **)(lVar84 + 0x10), UVar14 = UVar18, UVar46 = UVar50,
          pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f8ce5a;
    UVar110 = (UnityEngine_Vector3_Fields)
              UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    uStack_208._0_4_ = UVar109.fields.x;
    uStack_208._4_4_ = UVar109.fields.y;
    fVar101 = UVar110.y;
    if (DAT_056fde1c == '\0') {
      auStack_1d8._0_4_ = UVar110.z;
      fStack_1b0 = (float)extraout_XMM0_Dc_00;
      auStack_1b8 = (undefined1  [8])UVar110._0_8_;
      fStack_1ac = (float)extraout_XMM0_Dd;
      uStack_198 = CONCAT44(fVar101,fVar101);
      il2cpp_init_method_metadata(&TypeInfo_Math);
      auVar108 = _auStack_1b8;
      UVar110.z = (float)auStack_1d8._0_4_;
      UVar110.x = (float)auStack_1b8._0_4_;
      UVar110.y = (float)auStack_1b8._4_4_;
      DAT_056fde1c = '\x01';
      fVar101 = (float)uStack_198;
      _auStack_1b8 = auVar108;
    }
    uStack_208._0_4_ = (float)uStack_208 - UVar110.x;
    fVar88 = fVar88 - UVar110.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uStack_208._0_4_ =
         fVar88 * fVar88 +
         (uStack_208._4_4_ - fVar101) * (uStack_208._4_4_ - fVar101) +
         (float)uStack_208 * (float)uStack_208;
    fVar88 = 0.0;
    fVar101 = 0.0;
    fVar102 = 0.0;
    fVar103 = 0.0;
    if ((float)uStack_208 < 0.0) {
      uStack_208._0_4_ = sqrtf((float)uStack_208);
    }
    else {
      uStack_208._0_4_ = SQRT((float)uStack_208);
    }
    iStack_1bc = (int)(float)uStack_208;
    pSVar83 = System_Int32__ToString((int32_t)&iStack_1bc,(MethodInfo *)0x0);
  }
  UVar51.z = fStack_19c;
  UVar51.x = (float)(undefined4)uStack_b8;
  UVar51.y = (float)uStack_b8._4_4_;
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar19.z = fStack_1c4;
  UVar19.x = (float)uStack_138;
  UVar19.y = uStack_138._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  lVar84 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar84 == 0) || (UVar14 = UVar19, UVar46 = UVar51, *(long *)(lVar84 + 0x88) == 0))
  goto LAB_03f8ce5a;
  if (*(char *)(*(long *)(lVar84 + 0x88) + 0x11) != '\0') {
    str0 = System_String__Concat(str0,pSVar83,(MethodInfo *)0x0);
    UVar46.z = fStack_19c;
    UVar46.x = (float)(undefined4)uStack_b8;
    UVar46.y = (float)uStack_b8._4_4_;
    UVar14.z = fStack_1c4;
    UVar14.x = (float)uStack_138;
    UVar14.y = uStack_138._4_4_;
    lVar84 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if (lVar84 == 0) goto LAB_03f8ce5a;
  }
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  if (*(long *)(lVar84 + 0x98) == 0) goto LAB_03f8ce5a;
  iVar3 = *(int *)(*(long *)(lVar84 + 0x98) + 0x14);
  if (iVar3 == 2) {
    bVar80 = System_String__op_Inequality
                       (str0,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                        (MethodInfo *)0x0);
    if ((char)bVar80 != '\0') {
      str0 = System_String__Concat(str0,"\n",(MethodInfo *)0x0);
    }
    UVar77.z = fStack_19c;
    UVar77.x = (float)(undefined4)uStack_b8;
    UVar77.y = (float)uStack_b8._4_4_;
    UVar76.z = fStack_19c;
    UVar76.x = (float)(undefined4)uStack_b8;
    UVar76.y = (float)uStack_b8._4_4_;
    UVar75.z = fStack_19c;
    UVar75.x = (float)(undefined4)uStack_b8;
    UVar75.y = (float)uStack_b8._4_4_;
    UVar46.z = fStack_19c;
    UVar46.x = (float)(undefined4)uStack_b8;
    UVar46.y = (float)uStack_b8._4_4_;
    UVar44.z = fStack_1c4;
    UVar44.x = (float)uStack_138;
    UVar44.y = uStack_138._4_4_;
    UVar43.z = fStack_1c4;
    UVar43.x = (float)uStack_138;
    UVar43.y = uStack_138._4_4_;
    UVar42.z = fStack_1c4;
    UVar42.x = (float)uStack_138;
    UVar42.y = uStack_138._4_4_;
    UVar14.z = fStack_1c4;
    UVar14.x = (float)uStack_138;
    UVar14.y = uStack_138._4_4_;
    pCVar5 = (__this->fields)._human;
    fStack_1dc = position_00.fields.z;
    if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03f8ce5a;
    pSVar10 = (pCVar5->fields).crossfadeCache;
    if (pSVar10 == (System_Object_array *)0x0) goto LAB_03f8c38b;
    pIVar11 = (pSVar10->obj).klass;
    bVar2 = (pIVar11->_2).naturalAligment;
    bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
    if ((bVar2 < bVar1) || ((pIVar11->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BladeWeapon)) {
      bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
      if ((bVar1 <= bVar2) && ((pIVar11->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AHSSWeapon)) {
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UVar46.z = fStack_19c;
        UVar46.x = (float)(undefined4)uStack_b8;
        UVar46.y = (float)uStack_b8._4_4_;
        UVar14.z = fStack_1c4;
        UVar14.x = (float)uStack_138;
        UVar14.y = uStack_138._4_4_;
        plVar86 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
        if (plVar86 == (long *)0x0) goto LAB_03f8ce5a;
        puVar85 = &"AHSS";
LAB_03f8c31f:
        plVar86 = (long *)(**(code **)(*plVar86 + 0x1a8))
                                    (plVar86,*puVar85,*(undefined8 *)(*plVar86 + 0x1b0));
        UVar46.z = fStack_19c;
        UVar46.x = (float)(undefined4)uStack_b8;
        UVar46.y = (float)uStack_b8._4_4_;
        UVar14.z = fStack_1c4;
        UVar14.x = (float)uStack_138;
        UVar14.y = uStack_138._4_4_;
        goto joined_r0x03f8c335;
      }
      bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
      if ((bVar1 <= bVar2) && ((pIVar11->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_APGWeapon)) {
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UVar46.z = fStack_19c;
        UVar46.x = (float)(undefined4)uStack_b8;
        UVar46.y = (float)uStack_b8._4_4_;
        UVar14.z = fStack_1c4;
        UVar14.x = (float)uStack_138;
        UVar14.y = uStack_138._4_4_;
        plVar86 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
        if (plVar86 == (long *)0x0) goto LAB_03f8ce5a;
        puVar85 = &"APG";
        goto LAB_03f8c31f;
      }
      bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
      if ((bVar1 <= bVar2) && ((pIVar11->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ThunderspearWeapon)) {
        lVar84 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        UVar14 = UVar42;
        UVar46 = UVar75;
        if ((lVar84 == 0) ||
           ((lVar84 = *(long *)(lVar84 + 0x58), UVar14 = UVar43, UVar46 = UVar76, lVar84 == 0 ||
            (lVar84 = *(long *)(lVar84 + 0x48), UVar14 = UVar44, UVar46 = UVar77, lVar84 == 0))))
        goto LAB_03f8ce5a;
        if (*(char *)(lVar84 + 0x11) == '\0') {
          if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UVar46.z = fStack_19c;
          UVar46.x = (float)(undefined4)uStack_b8;
          UVar46.y = (float)uStack_b8._4_4_;
          UVar14.z = fStack_1c4;
          UVar14.x = (float)uStack_138;
          UVar14.y = uStack_138._4_4_;
          plVar86 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
          if (plVar86 == (long *)0x0) goto LAB_03f8ce5a;
          puVar85 = &"Thunderspear";
          goto LAB_03f8c31f;
        }
      }
    }
    else {
      if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UVar46.z = fStack_19c;
      UVar46.x = (float)(undefined4)uStack_b8;
      UVar46.y = (float)uStack_b8._4_4_;
      UVar14.z = fStack_1c4;
      UVar14.x = (float)uStack_138;
      UVar14.y = uStack_138._4_4_;
      plVar86 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
      if (plVar86 == (long *)0x0) goto LAB_03f8ce5a;
      plVar86 = (long *)(**(code **)(*plVar86 + 0x1a8))
                                  (plVar86,"Blade",*(undefined8 *)(*plVar86 + 0x1b0));
      UVar46.z = fStack_19c;
      UVar46.x = (float)(undefined4)uStack_b8;
      UVar46.y = (float)uStack_b8._4_4_;
      UVar14.z = fStack_1c4;
      UVar14.x = (float)uStack_138;
      UVar14.y = uStack_138._4_4_;
joined_r0x03f8c335:
      if (plVar86 == (long *)0x0) goto LAB_03f8ce5a;
      plVar86 = (long *)(**(code **)(*plVar86 + 0x1a8))
                                  (plVar86,"DamageMultiplier",*(undefined8 *)(*plVar86 + 0x1b0));
      UVar46.z = fStack_19c;
      UVar46.x = (float)(undefined4)uStack_b8;
      UVar46.y = (float)uStack_b8._4_4_;
      UVar14.z = fStack_1c4;
      UVar14.x = (float)uStack_138;
      UVar14.y = uStack_138._4_4_;
      if (plVar86 == (long *)0x0) goto LAB_03f8ce5a;
      fVar104 = (float)(**(code **)(*plVar86 + 0x388))(plVar86,*(undefined8 *)(*plVar86 + 0x390));
      position_00.fields.z = (float)(int)(fVar104 * position_00.fields.z);
    }
LAB_03f8c38b:
    if (position_00.fields.z <= 10.0) {
      position_00.fields.z = 10.0;
    }
    pSVar83 = System_Single__ToString
                        (position_00.fields.z / 100.0,(System_String_o *)&stack0xfffffffffffffde4,
                         "F1");
    str0 = System_String__Concat(str0,pSVar83,"K",(MethodInfo *)0x0);
    UVar46.z = fStack_19c;
    UVar46.x = (float)(undefined4)uStack_b8;
    UVar46.y = (float)uStack_b8._4_4_;
    UVar14.z = fStack_1c4;
    UVar14.x = (float)uStack_138;
    UVar14.y = uStack_138._4_4_;
    pCVar5 = (__this->fields)._human;
    if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03f8ce5a;
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
        pSVar83 = System_Single__ToString(fStack_1dc,(System_String_o *)&fStack_1dc,"F1");
        str0 = System_String__Concat(str0," | ",pSVar83,"K",(MethodInfo *)0x0);
      }
    }
  }
  else if (iVar3 == 1) {
    bVar80 = System_String__op_Inequality
                       (str0,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                        (MethodInfo *)0x0);
    position_00.fields.z = extraout_XMM0_Da;
    if ((char)bVar80 != '\0') {
      str0 = System_String__Concat(str0,"\n",(MethodInfo *)0x0);
      position_00.fields.z = extraout_XMM0_Da_00;
    }
    pSVar83 = System_Single__ToString
                        (position_00.fields.z,(System_String_o *)&stack0xfffffffffffffde4,
                         "F1");
    str0 = System_String__Concat(str0,pSVar83," u/s",(MethodInfo *)0x0);
  }
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
  UVar52.z = fStack_19c;
  UVar52.x = (float)(undefined4)uStack_b8;
  UVar52.y = (float)uStack_b8._4_4_;
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
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
  UVar20.z = fStack_1c4;
  UVar20.x = (float)uStack_138;
  UVar20.y = uStack_138._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  lVar84 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
  if ((lVar84 == 0) ||
     (lVar84 = *(long *)(lVar84 + 0x48), UVar14 = UVar20, UVar46 = UVar52, lVar84 == 0))
  goto LAB_03f8ce5a;
  if (*(char *)(lVar84 + 0x11) != '\0') {
    lVar84 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    UVar14 = UVar21;
    UVar46 = UVar53;
    if (((lVar84 == 0) ||
        (lVar84 = *(long *)(lVar84 + 0x58), UVar14 = UVar22, UVar46 = UVar54, lVar84 == 0)) ||
       (lVar84 = *(long *)(lVar84 + 0x48), UVar14 = UVar23, UVar46 = UVar55, lVar84 == 0))
    goto LAB_03f8ce5a;
    if (*(char *)(lVar84 + 0x11) != '\0') {
      pCVar5 = (__this->fields)._human;
      UVar14 = UVar24;
      UVar46 = UVar56;
      if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03f8ce5a;
      pSVar10 = (pCVar5->fields).crossfadeCache;
      if (pSVar10 != (System_Object_array *)0x0) {
        pIVar11 = (pSVar10->obj).klass;
        bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
        if ((bVar2 <= (pIVar11->_2).naturalAligment) &&
           ((pIVar11->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_ThunderspearWeapon)) {
          bVar80 = System_String__op_Inequality
                             (str0,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                              (MethodInfo *)0x0);
          if ((char)bVar80 != '\0') {
            str0 = System_String__Concat(str0,"\n",(MethodInfo *)0x0);
          }
          UVar57.z = fStack_19c;
          UVar57.x = (float)(undefined4)uStack_b8;
          UVar57.y = (float)uStack_b8._4_4_;
          UVar46.z = fStack_19c;
          UVar46.x = (float)(undefined4)uStack_b8;
          UVar46.y = (float)uStack_b8._4_4_;
          UVar25.z = fStack_1c4;
          UVar25.x = (float)uStack_138;
          UVar25.y = uStack_138._4_4_;
          UVar14.z = fStack_1c4;
          UVar14.x = (float)uStack_138;
          UVar14.y = uStack_138._4_4_;
          pCVar5 = (__this->fields)._human;
          if ((pCVar5 == (Characters_Human_o *)0x0) ||
             (pSVar10 = (pCVar5->fields).crossfadeCache, UVar14 = UVar25, UVar46 = UVar57,
             pSVar10 == (System_Object_array *)0x0)) goto LAB_03f8ce5a;
          pIVar11 = (pSVar10->obj).klass;
          bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
          if (((pIVar11->_2).naturalAligment < bVar2) ||
             ((pIVar11->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_ThunderspearWeapon)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          fStack_1c0 = Characters_BaseUseable__GetCooldownLeft
                                 ((Characters_BaseUseable_o *)pSVar10,(MethodInfo *)0x0);
          fVar88 = 0.0;
          fVar101 = 0.0;
          fVar102 = 0.0;
          fVar103 = 0.0;
          if (fStack_1c0 <= 0.0) {
            str0 = System_String__Concat(str0,"<color=#008000>READY</color>",(MethodInfo *)0x0);
          }
          else {
            pSVar83 = System_Single__ToString
                                (fStack_1c0,(System_String_o *)&fStack_1c0,"F2");
            str0 = System_String__Concat(str0,"<color=#FF0000>",pSVar83,"</color>",(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UI_CursorManager__SetCrosshairText(str0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UI_CursorManager__SetCrosshairColor((uint)((float)uStack_208 <= 120.0),(MethodInfo *)0x0);
  UVar59.z = fStack_19c;
  UVar59.x = (float)(undefined4)uStack_b8;
  UVar59.y = (float)uStack_b8._4_4_;
  UVar58.z = fStack_19c;
  UVar58.x = (float)(undefined4)uStack_b8;
  UVar58.y = (float)uStack_b8._4_4_;
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar27.z = fStack_1c4;
  UVar27.x = (float)uStack_138;
  UVar27.y = uStack_138._4_4_;
  UVar26.z = fStack_1c4;
  UVar26.x = (float)uStack_138;
  UVar26.y = uStack_138._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  lVar84 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar84 == 0) ||
     (lVar84 = *(long *)(lVar84 + 0xa8), UVar14 = UVar26, UVar46 = UVar58, lVar84 == 0))
  goto LAB_03f8ce5a;
  if (*(char *)(lVar84 + 0x11) == '\0') {
    return;
  }
  pCVar5 = (__this->fields)._human;
  UVar14 = UVar27;
  UVar46 = UVar59;
  if (pCVar5 == (Characters_Human_o *)0x0) goto LAB_03f8ce5a;
  uVar90 = (*(pCVar5->klass->vtable)._66_GetAimPoint.methodPtr)();
  UVar61.z = fStack_19c;
  UVar61.x = (float)(undefined4)uStack_b8;
  UVar61.y = (float)uStack_b8._4_4_;
  UVar60.z = fStack_19c;
  UVar60.x = (float)(undefined4)uStack_b8;
  UVar60.y = (float)uStack_b8._4_4_;
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar29.z = fStack_1c4;
  UVar29.x = (float)uStack_138;
  UVar29.y = uStack_138._4_4_;
  UVar28.z = fStack_1c4;
  UVar28.x = (float)uStack_138;
  UVar28.y = uStack_138._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  lVar84 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar84 == 0) ||
      (lVar84 = *(long *)(lVar84 + 0x28), UVar14 = UVar28, UVar46 = UVar60, lVar84 == 0)) ||
     (pUVar7 = *(UnityEngine_Transform_o **)(lVar84 + 0x10), UVar14 = UVar29, UVar46 = UVar61,
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f8ce5a;
  fVar116 = fVar101;
  UVar109 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  position_00.fields.z = UVar109.fields.x;
  fVar104 = UVar109.fields.y;
  uVar98 = extraout_XMM0_Dc_01;
  iVar81 = extraout_XMM0_Dd_00;
  if (DAT_056fdea6 == '\0') {
    uStack_1d0._0_4_ = (float)extraout_XMM0_Dc_01;
    auStack_1d8 = (undefined1  [8])UVar109.fields._0_8_;
    uStack_1d0._4_4_ = (float)extraout_XMM0_Dd_00;
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdea6 = '\x01';
    position_00.fields.z = (float)auStack_1d8._0_4_;
    fVar104 = (float)auStack_1d8._4_4_;
    uVar98 = (float)uStack_1d0;
    iVar81 = (int32_t)uStack_1d0._4_4_;
  }
  uStack_208._0_4_ = (float)uVar90;
  uStack_208._4_4_ = (float)((ulong)uVar90 >> 0x20);
  fVar100 = UVar109.fields.z - fVar88;
  fVar101 = fVar101 - fVar116;
  fVar89 = fVar104 - uStack_208._4_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    auStack_1d8._4_4_ = fVar104;
    auStack_1d8._0_4_ = fVar104 - uStack_208._4_4_;
    uStack_1d0._0_4_ = (float)uVar98;
    uStack_1d0._4_4_ = (float)iVar81;
    il2cpp_init_class();
    fVar89 = (float)auStack_1d8._0_4_;
  }
  position_00.fields.z =
       (position_00.fields.z - (float)uStack_208) * (position_00.fields.z - (float)uStack_208);
  fVar101 = fVar101 * fVar101;
  fVar104 = (fVar104 - uStack_208._4_4_) * (fVar104 - uStack_208._4_4_);
  fVar89 = position_00.fields.z + fVar89 * fVar89 + fVar100 * fVar100;
  if (fVar89 < 0.0) {
    fVar89 = sqrtf(fVar89);
    position_00.fields.z = extraout_XMM0_Db;
    fVar101 = extraout_XMM0_Dc_02;
    fVar104 = extraout_XMM0_Dd_01;
  }
  else {
    fVar89 = SQRT(fVar89);
  }
  UVar63.z = fStack_19c;
  UVar63.x = (float)(undefined4)uStack_b8;
  UVar63.y = (float)uStack_b8._4_4_;
  UVar62.z = fStack_19c;
  UVar62.x = (float)(undefined4)uStack_b8;
  UVar62.y = (float)uStack_b8._4_4_;
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar31.z = fStack_1c4;
  UVar31.x = (float)uStack_138;
  UVar31.y = uStack_138._4_4_;
  UVar30.z = fStack_1c4;
  UVar30.x = (float)uStack_138;
  UVar30.y = uStack_138._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  pCVar5 = (__this->fields)._human;
  if ((pCVar5 == (Characters_Human_o *)0x0) ||
     (lVar84 = *(long *)&(pCVar5->fields).Dead, UVar14 = UVar30, UVar46 = UVar62, lVar84 == 0))
  goto LAB_03f8ce5a;
  auStack_1b8._4_4_ = position_00.fields.z;
  auStack_1b8._0_4_ = fVar89;
  fStack_1b0 = fVar101;
  fStack_1ac = fVar104;
  pUVar7 = *(UnityEngine_Transform_o **)(lVar84 + 0x10);
  UVar14 = UVar31;
  UVar46 = UVar63;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_03f8ce5a;
  UVar109 = UnityEngine_Transform__get_right(pUVar7,(MethodInfo *)0x0);
  UVar65.z = fStack_19c;
  UVar65.x = (float)(undefined4)uStack_b8;
  UVar65.y = (float)uStack_b8._4_4_;
  UVar64.z = fStack_19c;
  UVar64.x = (float)(undefined4)uStack_b8;
  UVar64.y = (float)uStack_b8._4_4_;
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar33.z = fStack_1c4;
  UVar33.x = (float)uStack_138;
  UVar33.y = uStack_138._4_4_;
  UVar32.z = fStack_1c4;
  UVar32.x = (float)uStack_138;
  UVar32.y = uStack_138._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  pCVar5 = (__this->fields)._human;
  if ((pCVar5 == (Characters_Human_o *)0x0) ||
     (lVar84 = *(long *)&(pCVar5->fields).Dead, UVar14 = UVar32, UVar46 = UVar64, lVar84 == 0))
  goto LAB_03f8ce5a;
  uStack_1d0 = extraout_XMM0_Qb_00;
  auStack_1d8 = (undefined1  [8])UVar109.fields._0_8_;
  pUVar7 = *(UnityEngine_Transform_o **)(lVar84 + 0x10);
  UVar14 = UVar33;
  UVar46 = UVar65;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_03f8ce5a;
  UVar111 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_right(pUVar7,(MethodInfo *)0x0);
  UVar66.z = fStack_19c;
  UVar66.x = (float)(undefined4)uStack_b8;
  UVar66.y = (float)uStack_b8._4_4_;
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  fStack_1c4 = UVar111.z;
  uStack_138 = UVar111._0_8_;
  lVar84 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar84 == 0) goto LAB_03f8ce5a;
  pUVar4 = *(UnityEngine_Camera_o **)(lVar84 + 0x20);
  fStack_200 = (float)extraout_XMM0_Qb;
  fStack_1fc = (float)((ulong)extraout_XMM0_Qb >> 0x20);
  UVar14 = UVar111;
  UVar46 = UVar66;
  if (pUVar4 == (UnityEngine_Camera_o *)0x0) goto LAB_03f8ce5a;
  auStack_148._4_4_ =
       (float)auStack_1b8._0_4_ * *(float *)(&DAT_00cd1000 + (ulong)(50.0 < fVar89) * 4);
  auStack_148._0_4_ = auStack_148._4_4_;
  fStack_140 = fStack_1b0;
  fStack_13c = fStack_1ac;
  position_00.fields.z = (float)uStack_1d0 * fStack_1b0;
  fVar101 = uStack_1d0._4_4_ * fStack_1ac;
  auStack_1b8._0_4_ = auStack_148._4_4_;
  UVar112.fields.x = (float)uStack_208 - (float)auStack_1d8._0_4_ * (float)auStack_148._4_4_;
  UVar112.fields.y = uStack_208._4_4_ - (float)auStack_1d8._4_4_ * (float)auStack_148._4_4_;
  UVar112.fields.z = fVar88 - UVar109.fields.z * (float)auStack_148._4_4_;
  auStack_1d8._4_4_ = fVar116;
  auStack_1d8._0_4_ = UVar112.fields.z;
  uStack_1d0._0_4_ = fVar102;
  uStack_1d0._4_4_ = fVar103;
  uStack_130 = extraout_XMM0_Qb_01;
  UVar109 = UnityEngine_Camera__WorldToScreenPoint(pUVar4,UVar112,(MethodInfo *)0x0);
  uStack_198 = UVar109.fields._0_8_;
  if (DAT_05703f97 == '\0') {
    il2cpp_init_method_metadata(uStack_198,UVar109.fields.z,&TypeInfo_CursorManager);
    DAT_05703f97 = '\x01';
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar109 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  fVar104 = atan2f(uStack_198._4_4_ - UVar109.fields.y,(float)uStack_198 - UVar109.fields.x);
  uVar98 = extraout_var._4_4_;
  uVar99 = extraout_var._8_4_;
  auVar12._4_8_ = 0;
  auVar12._0_4_ = fVar104 * 57.29578 * 0.017453292;
  UVar113 = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o)(auVar12 << 0x40),(MethodInfo *)0x0);
  UVar68.z = fStack_19c;
  UVar68.x = (float)(undefined4)uStack_b8;
  UVar68.y = (float)uStack_b8._4_4_;
  UVar67.z = fStack_19c;
  UVar67.x = (float)(undefined4)uStack_b8;
  UVar67.y = (float)uStack_b8._4_4_;
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar35.z = fStack_1c4;
  UVar35.x = (float)uStack_138;
  UVar35.y = uStack_138._4_4_;
  UVar34.z = fStack_1c4;
  UVar34.x = (float)uStack_138;
  UVar34.y = uStack_138._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  pCVar5 = (__this->fields)._human;
  if ((pCVar5 == (Characters_Human_o *)0x0) ||
     (lVar84 = *(long *)&(pCVar5->fields).Dead, UVar14 = UVar34, UVar46 = UVar67, lVar84 == 0))
  goto LAB_03f8ce5a;
  auStack_a8._8_4_ = uVar98;
  auStack_a8._0_8_ = UVar113.fields._8_8_;
  auStack_a8._12_4_ = uVar99;
  pUVar7 = *(UnityEngine_Transform_o **)(lVar84 + 0x10);
  uStack_98 = UVar113.fields._0_8_;
  UVar14 = UVar35;
  UVar46 = UVar68;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_03f8ce5a;
  UVar111 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  UVar69.z = fStack_19c;
  UVar69.x = (float)(undefined4)uStack_b8;
  UVar69.y = (float)uStack_b8._4_4_;
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar37.z = fStack_1c4;
  UVar37.x = (float)uStack_138;
  UVar37.y = uStack_138._4_4_;
  UVar36.z = fStack_1c4;
  UVar36.x = (float)uStack_138;
  UVar36.y = uStack_138._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  fStack_19c = UVar111.z;
  uStack_b8 = UVar111._0_8_;
  pCVar5 = (__this->fields)._human;
  if (((pCVar5 == (Characters_Human_o *)0x0) ||
      (lVar84 = *(long *)&(pCVar5->fields).Dead, UVar14 = UVar36, UVar46 = UVar69, lVar84 == 0)) ||
     (pUVar7 = *(UnityEngine_Transform_o **)(lVar84 + 0x10), UVar14 = UVar37, UVar46 = UVar111,
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f8ce5a;
  UVar109 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  auVar108._0_8_ = UVar109.fields._0_8_;
  auVar108._8_8_ = extraout_XMM0_Qb_02;
  fVar104 = UVar109.fields.z;
  if (DAT_056fde20 == '\0') {
    fStack_1a0 = UVar109.fields.z;
    auStack_c8 = auVar108;
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    auVar108 = auStack_c8;
    fVar104 = fStack_1a0;
  }
  auVar106._0_4_ = UVar112.fields.x - auVar108._0_4_;
  auVar106._4_4_ = UVar112.fields.y - auVar108._4_4_;
  auVar106._8_4_ = (fStack_200 - position_00.fields.z) - auVar108._8_4_;
  auVar106._12_4_ = (fStack_1fc - fVar101) - auVar108._12_4_;
  position_00.fields.z = (float)auStack_1d8._0_4_ - fVar104;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    auStack_1d8._0_4_ = (float)auStack_1d8._0_4_ - fVar104;
    il2cpp_init_class();
    position_00.fields.z = (float)auStack_1d8._0_4_;
  }
  auVar91._4_4_ = auStack_1d8._4_4_;
  auVar91._0_4_ = position_00.fields.z;
  auVar91._8_4_ = (float)uStack_1d0;
  auVar91._12_4_ = uStack_1d0._4_4_;
  auVar92._4_12_ = auVar91._4_12_;
  fVar101 = position_00.fields.z * position_00.fields.z +
            auVar106._4_4_ * auVar106._4_4_ + auVar106._0_4_ * auVar106._0_4_;
  if (fVar101 < 0.0) {
    auStack_1d8._0_4_ = position_00.fields.z;
    auVar92._0_4_ = sqrtf(fVar101);
    auVar92._4_12_ = extraout_var_00;
    position_00.fields.z = (float)auStack_1d8._0_4_;
    if (1e-05 < auVar92._0_4_) goto LAB_03f8cab1;
LAB_03f8ca57:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar90 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    auStack_1d8._0_4_ = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    auStack_1d8._4_4_ = 0;
    uStack_1d0._0_4_ = 0.0;
    uStack_1d0._4_4_ = 0.0;
  }
  else {
    auVar92._0_4_ = SQRT(fVar101);
    if (auVar92._0_4_ <= 1e-05) goto LAB_03f8ca57;
LAB_03f8cab1:
    auVar93._0_4_ = auVar92._0_4_;
    auStack_1d8._0_4_ = position_00.fields.z / auVar93._0_4_;
    auVar93._8_4_ = auVar92._8_4_;
    auVar93._12_4_ = auVar92._12_4_;
    auVar93._4_4_ = auVar93._0_4_;
    auVar108 = divps(auVar106,auVar93);
    uVar90 = auVar108._0_8_;
  }
  if (*(int *)(TypeInfo_HumanPlayerController + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar81 = UnityEngine_LayerMask__get_value
                     ((UnityEngine_LayerMask_Fields)(int32_t)*(undefined8 *)(TypeInfo_HumanPlayerController + 0xb8),
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar109.fields.z = fStack_19c;
  UVar109.fields.x = (float)(undefined4)uStack_b8;
  UVar109.fields.y = (float)uStack_b8._4_4_;
  direction.fields.z = (float)auStack_1d8._0_4_;
  direction.fields.x = (float)(int)uVar90;
  direction.fields.y = (float)(int)((ulong)uVar90 >> 0x20);
  uVar82 = UnityEngine_Physics__Raycast(UVar109,direction,120.0,iVar81,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  auVar108 = auStack_a8;
  position.fields.z = 0.0;
  position.fields.x = (float)uStack_198;
  position.fields.y = uStack_198._4_4_;
  UVar113.fields.z = (float)auStack_a8._0_4_;
  UVar113.fields.w = (float)auStack_a8._4_4_;
  UVar113.fields.x = (float)(undefined4)uStack_98;
  UVar113.fields.y = (float)uStack_98._4_4_;
  auStack_a8 = auVar108;
  UI_CursorManager__SetHookArrow(1,position,UVar113,uVar82 & 0xff,(MethodInfo *)0x0);
  UVar70.z = fStack_19c;
  UVar70.x = (float)(undefined4)uStack_b8;
  UVar70.y = (float)uStack_b8._4_4_;
  UVar46.z = fStack_19c;
  UVar46.x = (float)(undefined4)uStack_b8;
  UVar46.y = (float)uStack_b8._4_4_;
  UVar38.z = fStack_1c4;
  UVar38.x = (float)uStack_138;
  UVar38.y = uStack_138._4_4_;
  UVar14.z = fStack_1c4;
  UVar14.x = (float)uStack_138;
  UVar14.y = uStack_138._4_4_;
  lVar84 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar84 != 0) {
    pUVar4 = *(UnityEngine_Camera_o **)(lVar84 + 0x20);
    UVar14 = UVar38;
    UVar46 = UVar70;
    if (pUVar4 != (UnityEngine_Camera_o *)0x0) {
      fVar101 = fStack_140 * (float)uStack_130;
      fVar104 = fStack_13c * uStack_130._4_4_;
      position_00.fields.x = (float)uStack_208 + (float)auStack_148._0_4_ * (float)uStack_138;
      position_00.fields.y = uStack_208._4_4_ + (float)auStack_148._4_4_ * uStack_138._4_4_;
      position_00.fields.z = fVar88 + (float)auStack_1b8._0_4_ * fStack_1c4;
      UVar109 = UnityEngine_Camera__WorldToScreenPoint(pUVar4,position_00,(MethodInfo *)0x0);
      position_01.fields._0_8_ = UVar109.fields._0_8_;
      if (DAT_05703f97 == '\0') {
        il2cpp_init_method_metadata(position_01.fields._0_8_,UVar109.fields.z,&TypeInfo_CursorManager);
        DAT_05703f97 = '\x01';
      }
      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UVar112 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
      fStack_1f8 = UVar109.fields.x;
      fStack_1f4 = UVar109.fields.y;
      fVar88 = atan2f(fStack_1f4 - UVar112.fields.y,fStack_1f8 - UVar112.fields.x);
      uVar98 = extraout_var_01._4_4_;
      uVar99 = extraout_var_01._8_4_;
      auVar13._4_8_ = 0;
      auVar13._0_4_ = fVar88 * 57.29578 * 0.017453292;
      UVar113 = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Vector3_o)(auVar13 << 0x40),(MethodInfo *)0x0);
      UVar72.z = fStack_19c;
      UVar72.x = (float)(undefined4)uStack_b8;
      UVar72.y = (float)uStack_b8._4_4_;
      UVar71.z = fStack_19c;
      UVar71.x = (float)(undefined4)uStack_b8;
      UVar71.y = (float)uStack_b8._4_4_;
      UVar46.z = fStack_19c;
      UVar46.x = (float)(undefined4)uStack_b8;
      UVar46.y = (float)uStack_b8._4_4_;
      UVar40.z = fStack_1c4;
      UVar40.x = (float)uStack_138;
      UVar40.y = uStack_138._4_4_;
      UVar39.z = fStack_1c4;
      UVar39.x = (float)uStack_138;
      UVar39.y = uStack_138._4_4_;
      UVar14.z = fStack_1c4;
      UVar14.x = (float)uStack_138;
      UVar14.y = uStack_138._4_4_;
      pCVar5 = (__this->fields)._human;
      if ((pCVar5 != (Characters_Human_o *)0x0) &&
         (lVar84 = *(long *)&(pCVar5->fields).Dead, UVar14 = UVar39, UVar46 = UVar71, lVar84 != 0))
      {
        fStack_1b0 = (float)uVar98;
        auStack_1b8 = (undefined1  [8])UVar113.fields._8_8_;
        fStack_1ac = (float)uVar99;
        uStack_1d0 = extraout_XMM0_Qb_03;
        auStack_1d8 = (undefined1  [8])UVar113.fields._0_8_;
        pUVar7 = *(UnityEngine_Transform_o **)(lVar84 + 0x10);
        UVar14 = UVar40;
        UVar46 = UVar72;
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          UVar109 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          UVar74.z = fStack_19c;
          UVar74.x = (float)(undefined4)uStack_b8;
          UVar74.y = (float)uStack_b8._4_4_;
          UVar73.z = fStack_19c;
          UVar73.x = (float)(undefined4)uStack_b8;
          UVar73.y = (float)uStack_b8._4_4_;
          UVar46.z = fStack_19c;
          UVar46.x = (float)(undefined4)uStack_b8;
          UVar46.y = (float)uStack_b8._4_4_;
          UVar41.z = fStack_1c4;
          UVar41.x = (float)uStack_138;
          UVar41.y = uStack_138._4_4_;
          UVar14.z = fStack_1c4;
          UVar14.x = (float)uStack_138;
          UVar14.y = uStack_138._4_4_;
          fStack_1c4 = UVar109.fields.z;
          pCVar5 = (__this->fields)._human;
          if ((pCVar5 != (Characters_Human_o *)0x0) &&
             (lVar84 = *(long *)&(pCVar5->fields).Dead, UVar14 = UVar41, UVar46 = UVar73,
             lVar84 != 0)) {
            UVar14.z = fStack_1c4;
            UVar14.x = (float)uStack_138;
            UVar14.y = uStack_138._4_4_;
            pUVar7 = *(UnityEngine_Transform_o **)(lVar84 + 0x10);
            uStack_198 = UVar109.fields._0_8_;
            UVar46 = UVar74;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              UVar109 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
              auVar94._0_8_ = UVar109.fields._0_8_;
              auVar94._8_8_ = extraout_XMM0_Qb_04;
              fVar88 = UVar109.fields.z;
              if (DAT_056fde20 == '\0') {
                uStack_138 = CONCAT44(uStack_138._4_4_,UVar109.fields.z);
                _auStack_148 = auVar94;
                il2cpp_init_method_metadata(&TypeInfo_Math);
                DAT_056fde20 = '\x01';
                auVar94 = _auStack_148;
                fVar88 = (float)uStack_138;
              }
              auVar107._0_4_ = position_00.fields.x - auVar94._0_4_;
              auVar107._4_4_ = position_00.fields.y - auVar94._4_4_;
              auVar107._8_4_ = (fStack_200 + fVar101) - auVar94._8_4_;
              auVar107._12_4_ = (fStack_1fc + fVar104) - auVar94._12_4_;
              position_00.fields.z = position_00.fields.z - fVar88;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                il2cpp_init_class();
              }
              auVar95._4_4_ = fVar116;
              auVar95._0_4_ = position_00.fields.z;
              auVar95._8_4_ = fVar102;
              auVar95._12_4_ = fVar103;
              auVar96._4_12_ = auVar95._4_12_;
              fVar88 = position_00.fields.z * position_00.fields.z +
                       auVar107._4_4_ * auVar107._4_4_ + auVar107._0_4_ * auVar107._0_4_;
              if (fVar88 < 0.0) {
                auVar96._0_4_ = sqrtf(fVar88);
                auVar96._4_12_ = extraout_var_02;
                fVar88 = auVar96._0_4_;
              }
              else {
                auVar96._0_4_ = SQRT(fVar88);
                fVar88 = auVar96._0_4_;
              }
              if (fVar88 <= 1e-05) {
                if (DAT_056fdd15 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector3);
                  DAT_056fdd15 = '\x01';
                }
                uStack_208 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                position_00.fields.z = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
              }
              else {
                auVar97._0_4_ = auVar96._0_4_;
                position_00.fields.z = position_00.fields.z / auVar97._0_4_;
                auVar97._8_4_ = auVar96._8_4_;
                auVar97._12_4_ = auVar96._12_4_;
                auVar97._4_4_ = auVar97._0_4_;
                auVar108 = divps(auVar107,auVar97);
                uStack_208 = auVar108._0_8_;
              }
              iVar81 = UnityEngine_LayerMask__get_value
                                 ((UnityEngine_LayerMask_Fields)
                                  (int32_t)*(undefined8 *)(TypeInfo_HumanPlayerController + 0xb8),(MethodInfo *)0x0);
              origin.fields.z = fStack_1c4;
              origin.fields.x = (float)uStack_198;
              origin.fields.y = uStack_198._4_4_;
              direction_00.fields.z = position_00.fields.z;
              direction_00.fields.x = (float)uStack_208;
              direction_00.fields.y = uStack_208._4_4_;
              uVar82 = UnityEngine_Physics__Raycast
                                 (origin,direction_00,120.0,iVar81,(MethodInfo *)0x0);
              auVar106 = _auStack_1b8;
              auVar108 = _auStack_1d8;
              position_01.fields.z = 0.0;
              rotation.fields.z = (float)auStack_1b8._0_4_;
              rotation.fields.w = (float)auStack_1b8._4_4_;
              rotation.fields.x = (float)auStack_1d8._0_4_;
              rotation.fields.y = (float)auStack_1d8._4_4_;
              _auStack_1d8 = auVar108;
              _auStack_1b8 = auVar106;
              UI_CursorManager__SetHookArrow(0,position_01,rotation,uVar82 & 0xff,(MethodInfo *)0x0)
              ;
              return;
            }
          }
        }
      }
    }
  }
LAB_03f8ce5a:
  fStack_19c = UVar46.z;
  uStack_b8 = UVar46._0_8_;
  fStack_1c4 = UVar14.z;
  uStack_138 = UVar14._0_8_;
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$GetHookArrowRotation
// il2cpp: UnityEngine_Quaternion_o Controllers_HumanPlayerController__GetHookArrowRotation (Controllers_HumanPlayerController_o* __this, bool left, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x3f8ce70

UnityEngine_Quaternion_o
Controllers_HumanPlayerController__GetHookArrowRotation
          (Controllers_HumanPlayerController_o *__this,bool_conflict left,
          UnityEngine_Vector3_o position,MethodInfo *method)

{
  undefined1 auVar1 [12];
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Quaternion_Fields UVar4;
  float fStack_14;
  
  if (DAT_05703f97 == '\0') {
    il2cpp_init_method_metadata(position.fields.x,position.fields.z,&TypeInfo_CursorManager);
    DAT_05703f97 = '\x01';
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar3 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  fStack_14 = position.fields.y;
  fVar2 = atan2f(fStack_14 - UVar3.fields.y,position.fields.x - UVar3.fields.x);
  auVar1._4_8_ = 0;
  auVar1._0_4_ = fVar2 * 57.29578 * 0.017453292;
  UVar4 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad
                    ((UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar4;
}


// Controllers.HumanPlayerController$$UpdateHookInput
// il2cpp: void Controllers_HumanPlayerController__UpdateHookInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f8cf00

void Controllers_HumanPlayerController__UpdateHookInput
               (Controllers_HumanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  Characters_HookUseable_o *pCVar3;
  Characters_BaseUseable_o *pCVar4;
  System_Action_Hashtable__o *pSVar5;
  System_Action_Hashtable__c *pSVar6;
  Characters_Horse_o *pCVar7;
  undefined8 uVar8;
  Characters_HumanComponentCache_o *pCVar9;
  Characters_BaseUseable_o *pCVar10;
  byte bVar11;
  bool_conflict bVar12;
  bool_conflict bVar13;
  bool_conflict bVar14;
  bool_conflict bVar15;
  uint uVar16;
  Characters_Human_o *pCVar17;
  byte bVar18;
  Characters_HumanComponentCache_o *pCVar19;
  byte bVar20;
  uint uVar21;
  byte bVar22;
  byte bVar23;
  bool bVar24;
  Photon_Pun_PhotonMessageInfo_o local_48;
  
  if (DAT_05703f98 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSounds);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05703f98 = '\x01';
  }
  if ((char)inMenu != '\0') {
    return;
  }
  pCVar17 = (__this->fields)._human;
  if (pCVar17 == (Characters_Human_o *)0x0) goto LAB_03f8d4b2;
  bVar11 = 0;
  if (((pCVar17->fields).FinishSetup | 8U) == 0xf) {
LAB_03f8cf6a:
    pSVar1 = (__this->fields)._humanInput;
  }
  else {
    pCVar7 = (pCVar17->fields).Horse;
    if (pCVar7 == (Characters_Horse_o *)0x0) goto LAB_03f8d4b2;
    if (((float)(pCVar7->fields).FootstepsEnabled <= 0.0) ||
       ((*(int *)&(pCVar17->fields).Weapon == 2 &&
        (*(char *)&(pCVar17->fields)._mountedVelocity.fields.x == '\0')))) goto LAB_03f8cf6a;
    bVar11 = *(byte *)&(pCVar17->fields).FeedVictimName ^ 1;
    pSVar1 = (__this->fields)._humanInput;
  }
  if ((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).HookBoth, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f8d4b2;
  bVar12 = Settings_KeybindSetting__GetKey(pSVar2,0,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._humanInput;
  if ((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).HookLeft, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f8d4b2;
  bVar13 = Settings_KeybindSetting__GetKey(pSVar2,0,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._humanInput;
  if ((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).HookRight, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f8d4b2;
  bVar14 = Settings_KeybindSetting__GetKey(pSVar2,0,(MethodInfo *)0x0);
  pCVar17 = (__this->fields)._human;
  if ((pCVar17 == (Characters_Human_o *)0x0) ||
     (pCVar19 = (pCVar17->fields).HumanCache, pCVar19 == (Characters_HumanComponentCache_o *)0x0))
  goto LAB_03f8d4b2;
  bVar15 = Characters_HookUseable__HasHook((Characters_HookUseable_o *)pCVar19,(MethodInfo *)0x0);
  uVar16 = 1;
  if ((char)bVar15 == '\0') {
    pCVar17 = (__this->fields)._human;
    if ((pCVar17 == (Characters_Human_o *)0x0) ||
       (pCVar3 = (Characters_HookUseable_o *)(pCVar17->fields).Special,
       pCVar3 == (Characters_HookUseable_o *)0x0)) goto LAB_03f8d4b2;
    uVar16 = Characters_HookUseable__HasHook(pCVar3,(MethodInfo *)0x0);
    uVar16 = uVar16 & 0xff;
  }
  pCVar17 = (__this->fields)._human;
  if (pCVar17 == (Characters_Human_o *)0x0) goto LAB_03f8d4b2;
  bVar24 = *(char *)((long)&(pCVar17->fields)._lastMountedPosition.fields.x + 2) == '\0';
  if ((byte)bVar12 == 0 && !bVar24) {
    *(undefined1 *)((long)&(pCVar17->fields)._lastMountedPosition.fields.x + 2) = 0;
    bVar23 = 0;
  }
  else {
    bVar23 = (byte)bVar12 & bVar24;
  }
  bVar24 = *(char *)&(pCVar17->fields)._lastMountedPosition.fields.x == '\0';
  if ((byte)bVar13 == 0 && !bVar24) {
    *(undefined1 *)&(pCVar17->fields)._lastMountedPosition.fields.x = 0;
    bVar22 = 0;
  }
  else {
    bVar22 = (byte)bVar13 & bVar24;
  }
  bVar24 = *(char *)((long)&(pCVar17->fields)._lastMountedPosition.fields.x + 1) == '\0';
  if ((byte)bVar14 == 0 && !bVar24) {
    *(undefined1 *)((long)&(pCVar17->fields)._lastMountedPosition.fields.x + 1) = 0;
    bVar20 = 0;
    pCVar19 = (pCVar17->fields).HumanCache;
  }
  else {
    bVar20 = (byte)bVar14 & bVar24;
    pCVar19 = (pCVar17->fields).HumanCache;
  }
  if (pCVar19 == (Characters_HumanComponentCache_o *)0x0) goto LAB_03f8d4b2;
  *(byte *)&(pCVar19->fields).Head = (bVar22 ^ 1) & bVar23;
  pCVar4 = (pCVar17->fields).Special;
  if (pCVar4 == (Characters_BaseUseable_o *)0x0) goto LAB_03f8d4b2;
  *(byte *)&pCVar4[1].fields.Cooldown = (bVar20 ^ 1) & bVar23;
  uVar21 = 0;
  if (bVar11 != 0) {
    if (DAT_05703f9e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Spin3Special);
      DAT_05703f9e = '\x01';
      pCVar17 = (__this->fields)._human;
      if (pCVar17 == (Characters_Human_o *)0x0) goto LAB_03f8d4b2;
    }
    if (((pCVar17->fields).FinishSetup == 9) &&
       (pSVar5 = (pCVar17->fields).OnPlayerPropertiesChanged,
       pSVar5 != (System_Action_Hashtable__o *)0x0)) {
      pSVar6 = pSVar5->klass;
      bVar18 = (TypeInfo_Spin3Special->_2).naturalAligment;
      if ((bVar18 <= (pSVar6->_2).naturalAligment) &&
         (uVar21 = 0, (pSVar6->_2).typeHierarchy[(ulong)bVar18 - 1] == TypeInfo_Spin3Special))
      goto LAB_03f8d230;
    }
    pCVar9 = (Characters_HumanComponentCache_o *)0x0;
    if (bVar22 == 0) {
      pCVar9 = pCVar19;
    }
    if (bVar23 == 1 && bVar22 == 0) {
      pCVar19 = (pCVar17->fields).HumanCache;
      if (pCVar19 == (Characters_HumanComponentCache_o *)0x0) goto LAB_03f8d4b2;
      bVar12 = Characters_HookUseable__IsHooked
                         ((Characters_HookUseable_o *)pCVar19,(MethodInfo *)0x0);
      uVar21 = 1;
      pCVar19 = pCVar9;
      if ((char)bVar12 == '\0') {
        uVar21 = uVar16 ^ 1;
      }
    }
    else {
      uVar21 = (uint)bVar22;
    }
    if (pCVar19 == (Characters_HumanComponentCache_o *)0x0) goto LAB_03f8d4b2;
  }
LAB_03f8d230:
  (*pCVar19->klass[1]._1.fields)(pCVar19,uVar21,pCVar19->klass[1]._1.events);
  pCVar17 = (__this->fields)._human;
  if (pCVar17 == (Characters_Human_o *)0x0) goto LAB_03f8d4b2;
  bVar18 = 0;
  pCVar4 = (pCVar17->fields).Special;
  if (bVar11 != 0) {
    if (DAT_05703f9e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Spin3Special);
      DAT_05703f9e = '\x01';
      pCVar17 = (__this->fields)._human;
      if (pCVar17 == (Characters_Human_o *)0x0) goto LAB_03f8d4b2;
    }
    if (((pCVar17->fields).FinishSetup == 9) &&
       (pSVar5 = (pCVar17->fields).OnPlayerPropertiesChanged,
       pSVar5 != (System_Action_Hashtable__o *)0x0)) {
      pSVar6 = pSVar5->klass;
      bVar11 = (TypeInfo_Spin3Special->_2).naturalAligment;
      if ((bVar11 <= (pSVar6->_2).naturalAligment) &&
         ((pSVar6->_2).typeHierarchy[(ulong)bVar11 - 1] == TypeInfo_Spin3Special)) {
        bVar18 = 0;
        goto joined_r0x03f8d322;
      }
    }
    pCVar10 = (Characters_BaseUseable_o *)0x0;
    if (bVar20 == 0) {
      pCVar10 = pCVar4;
    }
    bVar18 = bVar20;
    if (bVar23 == 1 && bVar20 == 0) {
      pCVar3 = (Characters_HookUseable_o *)(pCVar17->fields).Special;
      if (pCVar3 == (Characters_HookUseable_o *)0x0) goto LAB_03f8d4b2;
      bVar12 = Characters_HookUseable__IsHooked(pCVar3,(MethodInfo *)0x0);
      bVar18 = uVar16 == 0 | (byte)bVar12;
      pCVar4 = pCVar10;
    }
  }
joined_r0x03f8d322:
  if (pCVar4 != (Characters_BaseUseable_o *)0x0) {
    (*(pCVar4->klass->vtable)._12_SetInput.methodPtr)
              (pCVar4,(ulong)bVar18,(pCVar4->klass->vtable)._12_SetInput.method);
    pCVar17 = (__this->fields)._human;
    if ((pCVar17 != (Characters_Human_o *)0x0) &&
       (pCVar7 = (pCVar17->fields).Horse, pCVar7 != (Characters_Horse_o *)0x0)) {
      if (((byte)(bVar23 | bVar22 | bVar20) != 1) ||
         (0.0 < (float)(pCVar7->fields).FootstepsEnabled)) {
        return;
      }
      pSVar1 = (__this->fields)._humanInput;
      if ((pSVar1 != (Settings_HumanInputSettings_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).HookLeft, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
        bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
          pSVar1 = (__this->fields)._humanInput;
          if ((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
             (pSVar2 = (pSVar1->fields).HookRight, pSVar2 == (Settings_KeybindSetting_o *)0x0))
          goto LAB_03f8d4b2;
          bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            pSVar1 = (__this->fields)._humanInput;
            if ((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
               (pSVar2 = (pSVar1->fields).HookBoth, pSVar2 == (Settings_KeybindSetting_o *)0x0))
            goto LAB_03f8d4b2;
            bVar12 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
              return;
            }
          }
        }
        pCVar17 = (__this->fields)._human;
        if (*(int *)(TypeInfo_HumanSounds + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar8 = *(undefined8 *)(*(long *)(TypeInfo_HumanSounds + 0xb8) + 0x100);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Utility_Util__CreateLocalPhotonInfo(&local_48,(MethodInfo *)0x0);
        if (pCVar17 != (Characters_Human_o *)0x0) {
          (*(pCVar17->klass->vtable)._76_PlaySoundRPC.methodPtr)
                    (pCVar17,uVar8,(pCVar17->klass->vtable)._76_PlaySoundRPC.method);
          return;
        }
      }
    }
  }
LAB_03f8d4b2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$TestScore
// il2cpp: void Controllers_HumanPlayerController__TestScore (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f8d540

void Controllers_HumanPlayerController__TestScore
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  Settings_HumanInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  UI_InGameMenu_o *pUVar3;
  bool_conflict bVar4;
  
  if (DAT_05703f99 == '\0') {
    il2cpp_init_method_metadata(&"test");
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_05703f99 = '\x01';
  }
  pSVar1 = (__this->fields)._humanInput;
  if ((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).HookLeft, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f8d641;
  bVar4 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto LAB_03f8d641;
    UI_InGameMenu__ShowKillFeed(pUVar3,"test","test",100,"Thunderspear",(MethodInfo *)0x0)
    ;
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto LAB_03f8d641;
    UI_InGameMenu__ShowKillScore(pUVar3,100,0,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields)._humanInput;
  if ((pSVar1 != (Settings_HumanInputSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).HookRight, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
    bVar4 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 != (UI_InGameMenu_o *)0x0) {
      UI_InGameMenu__ShowKillFeed
                (pUVar3,"test","test",3000,"Thunderspear",(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 != (UI_InGameMenu_o *)0x0) {
        UI_InGameMenu__ShowKillScore(pUVar3,3000,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03f8d641:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$UpdateActionInput
// il2cpp: void Controllers_HumanPlayerController__UpdateActionInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f8d650

void Controllers_HumanPlayerController__UpdateActionInput
               (Controllers_HumanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  Characters_Human_o **ppCVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  Characters_Human_o *pCVar6;
  System_Collections_Generic_HashSet_HumanState__o *__this_00;
  Settings_HumanInputSettings_o *pSVar7;
  Settings_KeybindSetting_o *pSVar8;
  Il2CppClass *pIVar9;
  Il2CppClass **ppIVar10;
  long *plVar11;
  UI_ChatPanel_o *__this_01;
  Il2CppClass *pIVar12;
  Il2CppMethodPointer vtable_dispatch;
  System_Action_Hashtable__o *pSVar13;
  System_Action_Hashtable__c *pSVar14;
  Characters_Horse_o *__this_02;
  Characters_HookUseable_o *pCVar15;
  long lVar16;
  Photon_Pun_PhotonView_o *__this_03;
  UnityEngine_Transform_o *pUVar17;
  bool_conflict bVar18;
  UI_InGameMenu_o *pUVar19;
  System_Object_array *pSVar20;
  undefined1 uVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  uint uVar22;
  Settings_KeybindSetting_o *pSVar23;
  byte bVar24;
  char cVar25;
  float fVar26;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o UVar28;
  Settings_KeybindSetting_o *pSStack_78;
  float fStack_68;
  float fStack_64;
  
  if (DAT_05703f9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AHSSTwinShot);
    il2cpp_init_method_metadata(&TypeInfo_AHSSWeapon);
    il2cpp_init_method_metadata(&TypeInfo_AmmoWeapon);
    il2cpp_init_method_metadata(&TypeInfo_BaseHoldAttackSpecial);
    il2cpp_init_method_metadata(&TypeInfo_EscapeSpecial);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_ShifterTransformSpecial);
    il2cpp_init_method_metadata(&TypeInfo_StockSpecial);
    il2cpp_init_method_metadata(&TypeInfo_ThunderspearWeapon);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"UncarryRPC");
    DAT_05703f9a = '\x01';
    method = extraout_RDX;
  }
  uVar22 = inMenu & 0xff;
  Controllers_BasePlayerController__UpdateActionInput
            ((Controllers_BasePlayerController_o *)__this,uVar22,method);
  Controllers_HumanPlayerController__UpdateHookInput(__this,uVar22,method_00);
  Controllers_HumanPlayerController__UpdateReelInput(__this,0,method_01);
  Controllers_HumanPlayerController__UpdateDashInput(__this,uVar22,method_02);
  pCVar6 = (__this->fields)._human;
  if (pCVar6 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
  ppCVar1 = &(__this->fields)._human;
  cVar25 = (char)inMenu;
  bVar24 = 0;
  if (*(char *)((long)&(pCVar6->fields)._mountedVelocity.fields.x + 2) != '\0') {
    __this_00 = (__this->fields)._illegalWeaponStates;
    if (__this_00 == (System_Collections_Generic_HashSet_HumanState__o *)0x0) goto LAB_03f8dc2b;
    bVar18 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                       ((System_Collections_Generic_HashSet_T__o *)__this_00,
                        (pCVar6->fields).FinishSetup,MethodInfo_Boolean_Contains);
    bVar24 = 0;
    if (((char)bVar18 == '\0') && (cVar25 == '\0')) {
      if (*ppCVar1 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
      bVar24 = *(byte *)&((*ppCVar1)->fields).FeedVictimName ^ 1;
    }
  }
  pIVar12 = TypeInfo_ThunderspearWeapon;
  pSVar7 = (__this->fields)._humanInput;
  if ((pSVar7 == (Settings_HumanInputSettings_o *)0x0) ||
     (pCVar6 = *ppCVar1, pCVar6 == (Characters_Human_o *)0x0)) goto LAB_03f8dc2b;
  pSVar8 = (pSVar7->fields).AttackDefault;
  pSStack_78 = (pSVar7->fields).AttackSpecial;
  pSVar20 = (pCVar6->fields).crossfadeCache;
  pSVar23 = pSVar8;
  if (pSVar20 == (System_Object_array *)0x0) {
LAB_03f8d824:
    *(undefined1 *)&(pCVar6->fields)._currentVelocity.fields.z = 0;
    if (bVar24 != 0) goto LAB_03f8d837;
LAB_03f8dc08:
    if (pSVar20 == (System_Object_array *)0x0) goto LAB_03f8dc2b;
    pIVar12 = (pSVar20->obj).klass;
    (*(((Characters_ThunderspearWeapon_VTable *)pIVar12->vtable)->_12_SetInput).methodPtr)
              (pSVar20,0,
               (((Characters_ThunderspearWeapon_VTable *)pIVar12->vtable)->_12_SetInput).method);
    goto LAB_03f8dc1f;
  }
  pIVar9 = (pSVar20->obj).klass;
  bVar2 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
  if (((pIVar9->_2).naturalAligment < bVar2) ||
     ((pIVar9->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_ThunderspearWeapon)) goto LAB_03f8d824;
  lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x28), lVar16 == 0)) ||
     (lVar16 = *(long *)(lVar16 + 0xc0), lVar16 == 0)) goto LAB_03f8dc2b;
  if (*(char *)(lVar16 + 0x11) != '\0') {
    pSVar23 = pSStack_78;
    pSStack_78 = pSVar8;
  }
  *(undefined1 *)&(pCVar6->fields)._currentVelocity.fields.z = 0;
  if (bVar24 == 0) goto LAB_03f8dc08;
LAB_03f8d837:
  if (pSVar20 == (System_Object_array *)0x0) {
LAB_03f8d873:
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar11 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar11 == (long *)0x0) goto LAB_03f8dc2b;
    if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar11 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
        TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_01 = (UI_ChatPanel_o *)plVar11[0x19];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar18 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar18 != '\0') {
      if (__this_01 == (UI_ChatPanel_o *)0x0) goto LAB_03f8dc2b;
      bVar18 = UI_ChatPanel__IsPointerOverChatUI(__this_01,(MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        if ((*ppCVar1 != (Characters_Human_o *)0x0) &&
           (pSVar20 = ((*ppCVar1)->fields).crossfadeCache, pSVar20 != (System_Object_array *)0x0)) {
          pIVar12 = (pSVar20->obj).klass;
          vtable_dispatch = pIVar12->vtable[0xc].methodPtr;
          (*vtable_dispatch)(pSVar20,0,pIVar12->vtable[0xc].method,vtable_dispatch);
          return;
        }
        goto LAB_03f8dc2b;
      }
    }
    if ((*ppCVar1 == (Characters_Human_o *)0x0) ||
       (pSVar20 = ((*ppCVar1)->fields).crossfadeCache, pSVar20 == (System_Object_array *)0x0))
    goto LAB_03f8dc2b;
    pIVar12 = (pSVar20->obj).klass;
    bVar24 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
    if (((pIVar12->_2).naturalAligment < bVar24) ||
       ((pIVar12->_2).typeHierarchy[(ulong)bVar24 - 1] != TypeInfo_AHSSWeapon)) {
      pIVar12 = (pSVar20->obj).klass;
      (*pIVar12->vtable[0xb].methodPtr)(pSVar20,pSVar23,pIVar12->vtable[0xb].method);
      pCVar6 = *ppCVar1;
    }
    else {
      if (pSVar23 == (Settings_KeybindSetting_o *)0x0) goto LAB_03f8dc2b;
      bVar18 = Settings_KeybindSetting__Contains(pSVar23,0x143,(MethodInfo *)0x0);
      if ((char)bVar18 == '\0') {
LAB_03f8dce9:
        bVar18 = Settings_KeybindSetting__GetKeyUp(pSVar23,0,(MethodInfo *)0x0);
        if ((*ppCVar1 == (Characters_Human_o *)0x0) ||
           (pSVar20 = ((*ppCVar1)->fields).crossfadeCache, pSVar20 == (System_Object_array *)0x0))
        goto LAB_03f8dc2b;
        pIVar12 = (pSVar20->obj).klass;
        vtable_dispatch = pIVar12->vtable[0xc].methodPtr;
        if ((char)bVar18 != '\0') {
          (*vtable_dispatch)();
          pUVar19 = (__this->fields)._inGameMenu;
          if (pUVar19 == (UI_InGameMenu_o *)0x0) goto LAB_03f8dc2b;
          goto LAB_03f8dd3a;
        }
        (*vtable_dispatch)(pSVar20,0,pIVar12->vtable[0xc].method);
      }
      else {
        pUVar19 = (__this->fields)._inGameMenu;
        if (pUVar19 == (UI_InGameMenu_o *)0x0) goto LAB_03f8dc2b;
        if ((char)(pUVar19->fields).SkipAHSSInput == '\0') goto LAB_03f8dce9;
LAB_03f8dd3a:
        *(undefined1 *)&(pUVar19->fields).SkipAHSSInput = 0;
      }
      pCVar6 = *ppCVar1;
      bVar18 = Settings_KeybindSetting__GetKey(pSVar23,0,(MethodInfo *)0x0);
      uVar21 = 1;
      if ((char)bVar18 == '\0') {
        if ((*ppCVar1 == (Characters_Human_o *)0x0) ||
           (pSVar20 = ((*ppCVar1)->fields).crossfadeCache, pSVar20 == (System_Object_array *)0x0))
        goto LAB_03f8dc2b;
        uVar21 = *(undefined1 *)((long)&pSVar20->max_length + 4);
      }
      if (pCVar6 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
      *(undefined1 *)&(pCVar6->fields)._currentVelocity.fields.z = uVar21;
      pCVar6 = *ppCVar1;
    }
  }
  else {
    pIVar9 = (pSVar20->obj).klass;
    bVar24 = (pIVar9->_2).naturalAligment;
    bVar2 = (TypeInfo_AmmoWeapon->_2).naturalAligment;
    if ((((bVar24 < bVar2) ||
         (ppIVar10 = (pIVar9->_2).typeHierarchy, ppIVar10[(ulong)bVar2 - 1] != TypeInfo_AmmoWeapon)) ||
        (*(int *)(pSVar20->m_Items + 5) != 0)) ||
       (((bVar2 = (pIVar12->_2).naturalAligment, bVar2 <= bVar24 &&
         (ppIVar10[(ulong)bVar2 - 1] == pIVar12)) &&
        (bVar18 = Characters_ThunderspearWeapon__HasActiveProjectile
                            ((Characters_ThunderspearWeapon_o *)pSVar20,(MethodInfo *)0x0),
        (char)bVar18 != '\0')))) goto LAB_03f8d873;
    if (pSVar23 == (Settings_KeybindSetting_o *)0x0) goto LAB_03f8dc2b;
    bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar23,0,(MethodInfo *)0x0);
    if ((char)bVar18 == '\0') {
LAB_03f8dc1f:
      pCVar6 = *ppCVar1;
    }
    else {
      pCVar6 = *ppCVar1;
      if (pCVar6 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
      if ((pCVar6->fields).FinishSetup != 0) goto LAB_03f8dc1f;
      Characters_Human__Reload(pCVar6,(MethodInfo *)0x0);
      pCVar6 = *ppCVar1;
    }
  }
  if (pCVar6 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
  pSVar13 = (pCVar6->fields).OnPlayerPropertiesChanged;
  if (pSVar13 != (System_Action_Hashtable__o *)0x0) {
    cVar3 = *(char *)((long)&(pCVar6->fields)._mountedVelocity.fields.x + 2);
    bVar24 = 0;
    if (cVar3 != '\0') {
      pSVar14 = pSVar13->klass;
      bVar24 = (pSVar14->_2).naturalAligment;
      bVar2 = (TypeInfo_EscapeSpecial->_2).naturalAligment;
      if (((((bVar2 <= bVar24) && ((pSVar14->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_EscapeSpecial))
           || ((bVar2 = (TypeInfo_ShifterTransformSpecial->_2).naturalAligment, bVar2 <= bVar24 &&
               ((pSVar14->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_ShifterTransformSpecial)))) ||
          (bVar24 = 0, (pCVar6->fields).FinishSetup != 7)) &&
         (bVar24 = 0, *(int *)((long)&(pCVar6->fields).Weapon + 4) != 1)) {
        iVar5 = (pCVar6->fields).FinishSetup;
        bVar24 = 0;
        if ((((iVar5 != 1) && (bVar24 = 0, iVar5 != 8)) && (bVar24 = 0, iVar5 != 9)) &&
           (bVar24 = 0, cVar25 == '\0')) {
          bVar24 = *(byte *)&(pCVar6->fields).FeedVictimName ^ 1;
        }
      }
    }
    bVar2 = (pSVar13->klass->_2).naturalAligment;
    bVar4 = (TypeInfo_BaseHoldAttackSpecial->_2).naturalAligment;
    if ((((bVar2 < bVar4) ||
         (ppIVar10 = (pSVar13->klass->_2).typeHierarchy, ppIVar10[(ulong)bVar4 - 1] != TypeInfo_BaseHoldAttackSpecial)
         ) || ((cVar3 == '\0' ||
               ((iVar5 = (pCVar6->fields).FinishSetup, iVar5 == 7 || (iVar5 == 8)))))) ||
       (((iVar5 == 1 &&
         ((bVar4 = (TypeInfo_StockSpecial->_2).naturalAligment, bVar2 < bVar4 ||
          (ppIVar10[(ulong)bVar4 - 1] != TypeInfo_StockSpecial)))) ||
        ((*(int *)((long)&(pCVar6->fields).Weapon + 4) == 1 || (cVar25 != '\0')))))) {
      if (bVar24 != 0) goto LAB_03f8dace;
    }
    else if (bVar24 != 0 || *(char *)&(pCVar6->fields).FeedVictimName != '\x01') {
LAB_03f8dace:
      pSVar14 = pSVar13->klass;
      bVar24 = (TypeInfo_AHSSTwinShot->_2).naturalAligment;
      if (((pSVar14->_2).naturalAligment < bVar24) ||
         ((pSVar14->_2).typeHierarchy[(ulong)bVar24 - 1] != TypeInfo_AHSSTwinShot)) {
        (*(pSVar14->vtable)._11_RemoveImpl.methodPtr)
                  (pSVar13,pSStack_78,(pSVar14->vtable)._11_RemoveImpl.method);
      }
      else {
        if (pSStack_78 == (Settings_KeybindSetting_o *)0x0) goto LAB_03f8dc2b;
        uVar22 = Settings_KeybindSetting__GetKeyUp(pSStack_78,0,(MethodInfo *)0x0);
        (*(pSVar13->klass->vtable)._12_Invoke.methodPtr)
                  (pSVar13,(ulong)(uVar22 & 0xff),(pSVar13->klass->vtable)._12_Invoke.method);
      }
      goto joined_r0x03f8db14;
    }
    (*(pSVar13->klass->vtable)._12_Invoke.methodPtr)
              (pSVar13,0,(pSVar13->klass->vtable)._12_Invoke.method);
  }
joined_r0x03f8db14:
  if (cVar25 != '\0') {
    return;
  }
  pCVar6 = *ppCVar1;
  if (pCVar6 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
  if (*(char *)&(pCVar6->fields).FeedVictimName != '\0') {
    return;
  }
  if ((pCVar6->fields).FinishSetup == 0xf) {
    return;
  }
  iVar5 = *(int *)&(pCVar6->fields).Weapon;
  if (iVar5 == 1) {
    pSVar7 = (__this->fields)._humanInput;
    if ((pSVar7 == (Settings_HumanInputSettings_o *)0x0) ||
       (pSVar8 = (pSVar7->fields).HorseMount, pSVar8 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_03f8dc2b;
    bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
    if ((char)bVar18 == '\0') {
LAB_03f8de89:
      pSVar7 = (__this->fields)._humanInput;
      if ((pSVar7 == (Settings_HumanInputSettings_o *)0x0) ||
         (pSVar8 = (pSVar7->fields).HorseJump, pSVar8 == (Settings_KeybindSetting_o *)0x0))
      goto LAB_03f8dc2b;
      bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
      if ((char)bVar18 == '\0') goto LAB_03f8e106;
      if ((*ppCVar1 == (Characters_Human_o *)0x0) ||
         (__this_02 = (Characters_Horse_o *)((*ppCVar1)->fields).HookLeft,
         __this_02 == (Characters_Horse_o *)0x0)) goto LAB_03f8dc2b;
      Characters_Horse__Jump(__this_02,(MethodInfo *)0x0);
      pCVar6 = *ppCVar1;
    }
    else {
      pCVar6 = *ppCVar1;
      if (pCVar6 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
      if ((pCVar6->fields).FinishSetup != 0) goto LAB_03f8de89;
      Characters_Human__Unmount(pCVar6,0,(MethodInfo *)0x0);
LAB_03f8e106:
      pCVar6 = *ppCVar1;
    }
    if (pCVar6 != (Characters_Human_o *)0x0) {
      if ((pCVar6->fields).FinishSetup != 0) {
        return;
      }
      if (*(char *)((long)&(pCVar6->fields)._mountedVelocity.fields.x + 2) == '\0') {
        return;
      }
      pSVar7 = (__this->fields)._humanInput;
      if ((pSVar7 != (Settings_HumanInputSettings_o *)0x0) &&
         (pSVar8 = (pSVar7->fields).Reload, pSVar8 != (Settings_KeybindSetting_o *)0x0)) {
        bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
        if ((char)bVar18 == '\0') {
          return;
        }
        if (*ppCVar1 != (Characters_Human_o *)0x0) {
          Characters_Human__Reload(*ppCVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    goto LAB_03f8dc2b;
  }
  if (iVar5 != 0) {
    return;
  }
  bVar18 = Characters_Human__CanJump(pCVar6,(MethodInfo *)0x0);
  if ((char)bVar18 == '\0') {
LAB_03f8dfec:
    pCVar6 = *ppCVar1;
  }
  else {
    pSVar7 = (__this->fields)._humanInput;
    if ((pSVar7 == (Settings_HumanInputSettings_o *)0x0) ||
       (pSVar8 = (pSVar7->fields).Jump, pSVar8 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_03f8dc2b;
    bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
    if ((char)bVar18 == '\0') {
      pSVar7 = (__this->fields)._humanInput;
      if ((pSVar7 == (Settings_HumanInputSettings_o *)0x0) ||
         (pSVar8 = (pSVar7->fields).HorseMount, pSVar8 == (Settings_KeybindSetting_o *)0x0))
      goto LAB_03f8dc2b;
      bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        if (*ppCVar1 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
        pCVar15 = ((*ppCVar1)->fields).HookLeft;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar18 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,
                            (MethodInfo *)0x0);
        if ((char)bVar18 != '\0') {
          pCVar6 = *ppCVar1;
          if (pCVar6 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
          if (*(int *)&(pCVar6->fields).Weapon == 0) {
            pCVar15 = (pCVar6->fields).HookLeft;
            if (((pCVar15 == (Characters_HookUseable_o *)0x0) ||
                (lVar16 = *(long *)&pCVar15[1].fields, lVar16 == 0)) ||
               (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
               pUVar17 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f8dc2b;
            UVar27 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
            if (((*ppCVar1 == (Characters_Human_o *)0x0) ||
                (lVar16 = *(long *)&((*ppCVar1)->fields).Dead, lVar16 == 0)) ||
               (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
               pUVar17 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f8dc2b;
            UVar28 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
            if (DAT_056fdea6 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Math);
              DAT_056fdea6 = '\x01';
            }
            fStack_68 = UVar27.fields.x;
            fStack_64 = UVar27.fields.y;
            fStack_64 = fStack_64 - UVar28.fields.y;
            fVar26 = UVar27.fields.z - UVar28.fields.z;
            fStack_68 = fStack_68 - UVar28.fields.x;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_init_class();
            }
            fVar26 = fStack_68 * fStack_68 + fStack_64 * fStack_64 + fVar26 * fVar26;
            if (fVar26 < 0.0) {
              fVar26 = sqrtf(fVar26);
            }
            else {
              fVar26 = SQRT(fVar26);
            }
            if (fVar26 < 15.0) {
              pCVar6 = *ppCVar1;
              if (pCVar6 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
              if (*(char *)((long)&(pCVar6->fields).Detection + 4) == '\0') {
                Characters_Human__MountHorse(pCVar6,(MethodInfo *)0x0);
                pCVar6 = *ppCVar1;
                goto joined_r0x03f8dff2;
              }
            }
          }
        }
      }
      pSVar7 = (__this->fields)._humanInput;
      if ((pSVar7 == (Settings_HumanInputSettings_o *)0x0) ||
         (pSVar8 = (pSVar7->fields).Dodge, pSVar8 == (Settings_KeybindSetting_o *)0x0))
      goto LAB_03f8dc2b;
      bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        pCVar6 = *ppCVar1;
        if (pCVar6 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
        fVar26 = *(float *)&(pCVar6->fields).Detection;
        if (*(char *)((long)&(pCVar6->fields).Detection + 4) != '\0') {
          fVar26 = fVar26 + 180.0;
        }
        Characters_Human__Dodge(pCVar6,fVar26,(MethodInfo *)0x0);
      }
      goto LAB_03f8dfec;
    }
    if (*ppCVar1 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
    Characters_Human__Jump(*ppCVar1,(MethodInfo *)0x0);
    pCVar6 = *ppCVar1;
  }
joined_r0x03f8dff2:
  if (pCVar6 != (Characters_Human_o *)0x0) {
    if ((pCVar6->fields).FinishSetup == 0) {
      pSVar7 = (__this->fields)._humanInput;
      if ((pSVar7 == (Settings_HumanInputSettings_o *)0x0) ||
         (pSVar8 = (pSVar7->fields).Reload, pSVar8 == (Settings_KeybindSetting_o *)0x0))
      goto LAB_03f8dc2b;
      bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
      if ((char)bVar18 != '\0') {
        if (*ppCVar1 == (Characters_Human_o *)0x0) goto LAB_03f8dc2b;
        Characters_Human__Reload(*ppCVar1,(MethodInfo *)0x0);
      }
    }
    if (*ppCVar1 != (Characters_Human_o *)0x0) {
      if (*(int *)((long)&((*ppCVar1)->fields).Weapon + 4) != 1) {
        return;
      }
      pSVar7 = (__this->fields)._humanInput;
      if ((pSVar7 != (Settings_HumanInputSettings_o *)0x0) &&
         (pSVar8 = (pSVar7->fields).HorseMount, pSVar8 != (Settings_KeybindSetting_o *)0x0)) {
        bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
        if ((char)bVar18 == '\0') {
          return;
        }
        if ((*ppCVar1 != (Characters_Human_o *)0x0) &&
           (lVar16 = *(long *)&((*ppCVar1)->fields).Dead, lVar16 != 0)) {
          __this_03 = *(Photon_Pun_PhotonView_o **)(lVar16 + 0x20);
          pSVar20 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
          if (__this_03 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_03,"UncarryRPC",0,pSVar20,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_03f8dc2b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$ToggleUI
// il2cpp: void Controllers_HumanPlayerController__ToggleUI (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f8fb90

void Controllers_HumanPlayerController__ToggleUI
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Behaviour_o *__this_00;
  UnityEngine_Behaviour_o *__this_01;
  
  if (DAT_05703f9b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_GetComponent_Canvas);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"DefaultMenu(Clone)");
    DAT_05703f9b = '\x01';
  }
  x = (UnityEngine_Object_o *)UnityEngine_GameObject__Find("DefaultMenu(Clone)",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (x != (UnityEngine_Object_o *)0x0) {
      __this_00 = (UnityEngine_Behaviour_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            ((UnityEngine_GameObject_o *)x,MethodInfo_Canvas_GetComponent_Canvas);
      __this_01 = (UnityEngine_Behaviour_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            ((UnityEngine_GameObject_o *)x,MethodInfo_Canvas_GetComponent_Canvas);
      if (__this_01 != (UnityEngine_Behaviour_o *)0x0) {
        bVar1 = UnityEngine_Behaviour__get_enabled(__this_01,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
          UnityEngine_Behaviour__set_enabled
                    (__this_00,(uint)(byte)((byte)bVar1 ^ 1),(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Controllers.HumanPlayerController$$UpdateReelInput
// il2cpp: void Controllers_HumanPlayerController__UpdateReelInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f8e2e0

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
  bool bVar5;
  bool_conflict bVar6;
  Characters_Human_o *pCVar7;
  float fVar8;
  float fVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Settings_InputKey_o *pSVar12;
  Settings_InputKey_o *pSVar13;
  undefined1 local_48 [16];
  Settings_InputKey_o *local_38;
  
  if (DAT_05703f9c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_InputKey_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata();
    DAT_05703f9c = '\x01';
  }
  fVar9 = (__this->fields)._reelOutScrollTimeLeft;
  fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar9 = fVar9 - fVar8;
  (__this->fields)._reelOutScrollTimeLeft = fVar9;
  if (fVar9 <= 0.0) {
    pCVar7 = (__this->fields)._human;
    if (pCVar7 == (Characters_Human_o *)0x0) goto LAB_03f8e724;
    (pCVar7->fields).CanMountedAttack = 0;
  }
  pSVar1 = (__this->fields)._humanInput;
  if ((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ReelIn, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f8e724;
  bVar6 = Settings_KeybindSetting__GetKey(pSVar2,0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    fVar9 = (__this->fields)._reelInScrollCooldownLeft;
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._reelInScrollCooldownLeft = fVar9 - fVar8;
    pSVar1 = (__this->fields)._humanInput;
    if (((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
        (pSVar2 = (pSVar1->fields).ReelIn, pSVar2 == (Settings_KeybindSetting_o *)0x0)) ||
       (pSVar3 = (pSVar2->fields).InputKeys,
       pSVar3 == (System_Collections_Generic_List_InputKey__o *)0x0)) goto LAB_03f8e724;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    bVar5 = false;
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar11 = (Il2CppType *)local_48._8_8_;
    pSVar12 = local_38;
    while (__this_00.fields._8_8_ = pIVar11,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar10,
          __this_00.fields._current = (Il2CppObject *)pSVar12,
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
          (char)bVar6 != '\0') {
      if (pSVar12 == (Settings_InputKey_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar6 = Settings_InputKey__IsWheel(pSVar12,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        bVar5 = true;
      }
    }
    __this_01.fields._8_8_ = pIVar11;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_01.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    pSVar1 = (__this->fields)._humanInput;
    if (((pSVar1 == (Settings_HumanInputSettings_o *)0x0) ||
        (pSVar2 = (pSVar1->fields).ReelIn, pSVar2 == (Settings_KeybindSetting_o *)0x0)) ||
       (pSVar3 = (pSVar2->fields).InputKeys,
       pSVar3 == (System_Collections_Generic_List_InputKey__o *)0x0)) goto LAB_03f8e724;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar11 = (Il2CppType *)local_48._8_8_;
    pSVar12 = local_38;
    if (!bVar5) {
LAB_03f8e5b4:
      __this_03.fields._8_8_ = pIVar11;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
      __this_03.fields._current = (Il2CppObject *)pSVar12;
      bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar6 != '\0') {
        if (pSVar12 != (Settings_InputKey_o *)0x0) {
          bVar6 = Settings_InputKey__IsWheel(pSVar12,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') goto code_r0x03f8e5dd;
          pCVar7 = (__this->fields)._human;
          if (pCVar7 != (Characters_Human_o *)0x0) goto LAB_03f8e5ad;
          goto LAB_03f8e738;
        }
        goto LAB_03f8e71f;
      }
      goto LAB_03f8e5f5;
    }
LAB_03f8e534:
    while (__this_02.fields._8_8_ = pIVar11,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar10,
          __this_02.fields._current = (Il2CppObject *)pSVar12,
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
          (char)bVar6 != '\0') {
      if (pSVar12 == (Settings_InputKey_o *)0x0) {
LAB_03f8e71f:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar13 = pSVar12;
      bVar6 = Settings_InputKey__IsWheel(pSVar12,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') goto LAB_03f8e570;
      pSVar12 = pSVar13;
      if ((__this->fields)._reelInScrollCooldownLeft <= 0.0) {
        pCVar7 = (__this->fields)._human;
        if (pCVar7 == (Characters_Human_o *)0x0) {
LAB_03f8e5f0:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        goto LAB_03f8e52d;
      }
    }
LAB_03f8e5f5:
    __this_04.fields._8_8_ = pIVar11;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
    __this_04.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    pSVar1 = (__this->fields)._humanInput;
  }
  else {
    pCVar7 = (__this->fields)._human;
    if (pCVar7 == (Characters_Human_o *)0x0) goto LAB_03f8e724;
    if (*(char *)((long)&(pCVar7->fields).LastGoodHeadAngle.fields.x + 2) == '\0') {
      (pCVar7->fields).InvincibleTimeLeft = -1.0;
    }
    (__this->fields)._reelInScrollCooldownLeft = (__this->fields)._reelInScrollCooldown;
    pSVar1 = (__this->fields)._humanInput;
  }
  if (((pSVar1 != (Settings_HumanInputSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).ReelOut, pSVar2 != (Settings_KeybindSetting_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).InputKeys,
     pSVar3 != (System_Collections_Generic_List_InputKey__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar11 = (Il2CppType *)local_48._8_8_;
    while( true ) {
      do {
        do {
          pSVar12 = local_38;
          __this_05.fields._8_8_ = pIVar11;
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
          __this_05.fields._current = (Il2CppObject *)pSVar12;
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_05,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
          if ((char)bVar6 == '\0') {
            __this_06.fields._8_8_ = pIVar11;
            __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
            __this_06.fields._current = (Il2CppObject *)pSVar12;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_06,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
            return;
          }
          if (pSVar12 == (Settings_InputKey_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar13 = pSVar12;
          bVar6 = Settings_InputKey__GetKey(pSVar12,(MethodInfo *)0x0);
          local_38 = pSVar13;
        } while ((char)bVar6 == '\0');
        pCVar7 = (__this->fields)._human;
        if (pCVar7 == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (pCVar7->fields).CanMountedAttack = 0x3f800000;
        bVar6 = Settings_InputKey__IsWheel(pSVar12,(MethodInfo *)0x0);
        local_38 = pSVar13;
      } while ((char)bVar6 == '\0');
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 == 0) break;
      lVar4 = *(long *)(lVar4 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (__this->fields)._reelOutScrollTimeLeft = *(float *)(lVar4 + 0x14);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f8e724:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
code_r0x03f8e5dd:
  if ((__this->fields)._reelInScrollCooldownLeft <= 0.0) {
    pCVar7 = (__this->fields)._human;
    if (pCVar7 == (Characters_Human_o *)0x0) goto LAB_03f8e5f0;
LAB_03f8e5ad:
    *(undefined1 *)((long)&(pCVar7->fields).LastGoodHeadAngle.fields.x + 2) = 0;
  }
  goto LAB_03f8e5b4;
LAB_03f8e570:
  bVar6 = Settings_InputKey__GetKeyUp(pSVar12,(MethodInfo *)0x0);
  pSVar12 = pSVar13;
  if ((char)bVar6 != '\0') {
    pCVar7 = (__this->fields)._human;
    if (pCVar7 == (Characters_Human_o *)0x0) {
LAB_03f8e738:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_03f8e52d:
    *(undefined1 *)((long)&(pCVar7->fields).LastGoodHeadAngle.fields.x + 2) = 0;
    pSVar12 = pSVar13;
  }
  goto LAB_03f8e534;
}


// Controllers.HumanPlayerController$$UpdateDashInput
// il2cpp: void Controllers_HumanPlayerController__UpdateDashInput (Controllers_HumanPlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f8e950

void Controllers_HumanPlayerController__UpdateDashInput
               (Controllers_HumanPlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  float *pfVar1;
  undefined8 uVar2;
  Characters_Human_o *pCVar3;
  Settings_HumanInputSettings_o *pSVar4;
  System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *pSVar5;
  Characters_Horse_o *pCVar6;
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *pAVar7;
  long lVar8;
  UnityEngine_Camera_o *__this_00;
  System_String_o *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  System_Collections_Generic_Dictionary_HumanDashDirection__float__o *pSVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  undefined1 auVar15 [16];
  System_Nullable_Vector3__o percentPower;
  System_Nullable_Vector3__o percentPower_00;
  undefined1 auVar16 [16];
  int32_t key;
  char cVar17;
  bool_conflict bVar18;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar19;
  Settings_KeybindSetting_o *pSVar20;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar21;
  MethodInfo *extraout_RDX_08;
  int iVar22;
  long *plVar23;
  uint uVar24;
  float fVar25;
  float fVar29;
  uint uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  uint extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 uVar32;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined4 uVar33;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined1 auVar34 [12];
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar35 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o direction;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o direction_00;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o direction_01;
  System_Nullable_Vector3__o __this_06;
  System_Nullable_Vector3__o __this_07;
  float in_stack_ffffffffffffff28;
  float in_stack_ffffffffffffff2c;
  float in_stack_ffffffffffffff30;
  float in_stack_ffffffffffffff34;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff3c;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [20];
  float fStack_84;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  
  if (DAT_05703f9d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&MethodInfo_KeybindSetting_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_Characte);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_HumanDashDirection_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05703f9d = '\x01';
  }
  local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  local_68 = (InvokerMethod)0x0;
  pCVar3 = (__this->fields)._human;
  if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03f8f929;
  if (*(char *)((long)&(pCVar3->fields).Animation + 4) != '\0') {
    return;
  }
  iVar22 = (pCVar3->fields).FinishSetup;
  if (iVar22 == 3) {
    return;
  }
  if (iVar22 == 7) {
    return;
  }
  if (*(int *)&(pCVar3->fields).Weapon != 0) {
    return;
  }
  if (*(int *)((long)&(pCVar3->fields).Weapon + 4) == 1) {
    return;
  }
  if (iVar22 == 8) {
    return;
  }
  if (iVar22 == 0xf) {
    return;
  }
  if (iVar22 == 10) {
    return;
  }
  if ((char)inMenu != '\0') {
    return;
  }
  if (*(char *)&(pCVar3->fields).FeedVictimName != '\0') {
    return;
  }
  pSVar4 = (__this->fields)._humanInput;
  if ((pSVar4 == (Settings_HumanInputSettings_o *)0x0) ||
     (pSVar20 = (pSVar4->fields).Dash, pSVar20 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_03f8f929;
  iVar22 = 0;
  bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar20,0,(MethodInfo *)0x0);
  pMVar21 = extraout_RDX;
  if ((char)bVar18 != '\0') {
    pSVar5 = (__this->fields)._dashKeys;
    if ((pSVar5 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)
                   0x0) ||
       (pSVar19 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                             MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_Characte),
       pSVar19 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto LAB_03f8f929;
    System_Collections_Generic_Dictionary_KeyCollection<Int32Enum__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               local_98,pSVar19,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
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
      bVar18 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Int32Enum__object>__MoveNext
                         (__this_01,(MethodInfo_31C84A0 *)&local_78);
      if ((char)bVar18 == '\0') {
        __this_03.fields._dictionary._4_4_ = in_stack_ffffffffffffff2c;
        __this_03.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
        __this_03.fields._index = (int32_t)in_stack_ffffffffffffff30;
        __this_03.fields._version = (int32_t)in_stack_ffffffffffffff34;
        __this_03.fields._currentKey._0_4_ = in_stack_ffffffffffffff38;
        __this_03.fields._currentKey._4_4_ = in_stack_ffffffffffffff3c;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Int32Enum__object>__Dispose
                  (__this_03,(MethodInfo_31C8490 *)&local_78);
        goto LAB_03f8eb94;
      }
      pSVar5 = (__this->fields)._dashKeys;
      if (pSVar5 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)
                    0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar22 = (int32_t)local_68;
      pSVar20 = (Settings_KeybindSetting_o *)
                System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                           (int32_t)local_68,MethodInfo_KeybindSetting_get_Item);
      if (pSVar20 == (Settings_KeybindSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar18 = Settings_KeybindSetting__GetKey(pSVar20,0,(MethodInfo *)0x0);
    } while ((char)bVar18 == '\0');
    __this_02.fields._dictionary._4_4_ = in_stack_ffffffffffffff2c;
    __this_02.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
    __this_02.fields._index = (int32_t)in_stack_ffffffffffffff30;
    __this_02.fields._version = (int32_t)in_stack_ffffffffffffff34;
    __this_02.fields._currentKey._0_4_ = in_stack_ffffffffffffff38;
    __this_02.fields._currentKey._4_4_ = in_stack_ffffffffffffff3c;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Int32Enum__object>__Dispose
              (__this_02,(MethodInfo_31C8490 *)&local_78);
    pMVar21 = extraout_RDX_00;
    if (iVar22 != 0) goto LAB_03f8f6b1;
LAB_03f8eb94:
    pCVar3 = (__this->fields)._human;
    if (((pCVar3 == (Characters_Human_o *)0x0) ||
        (pCVar6 = (pCVar3->fields).Horse, pCVar6 == (Characters_Horse_o *)0x0)) ||
       (plVar23 = *(long **)&(pCVar6->fields).HasExplicitNameTag, plVar23 == (long *)0x0))
    goto LAB_03f8f929;
    cVar17 = (**(code **)(*plVar23 + 0x238))();
    if (cVar17 == '\0') {
LAB_03f8ed06:
      pCVar3 = (__this->fields)._human;
      if (((pCVar3 == (Characters_Human_o *)0x0) ||
          (pCVar6 = (pCVar3->fields).Horse, pCVar6 == (Characters_Horse_o *)0x0)) ||
         (pSVar9 = (pCVar6->fields).VisibleName, pSVar9 == (System_String_o *)0x0))
      goto LAB_03f8f929;
      cVar17 = (*(pSVar9->klass->vtable)._16_System_IConvertible_ToInt32.methodPtr)();
      iVar22 = 0;
      pMVar21 = extraout_RDX_01;
      if (cVar17 != '\0') {
        pCVar3 = (__this->fields)._human;
        if (((pCVar3 == (Characters_Human_o *)0x0) ||
            (pCVar6 = (pCVar3->fields).Horse, pCVar6 == (Characters_Horse_o *)0x0)) ||
           (pAVar7 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
                     (pCVar6->fields).VisibleName,
           pAVar7 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0))
        goto LAB_03f8f929;
        iVar22 = 0;
        bVar18 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                           (pAVar7,(MethodInfo *)0x0);
        pMVar21 = extraout_RDX_02;
        if ((char)bVar18 != '\0') {
          pCVar3 = (__this->fields)._human;
          if (((pCVar3 == (Characters_Human_o *)0x0) ||
              (pCVar6 = (pCVar3->fields).Horse, pCVar6 == (Characters_Horse_o *)0x0)) ||
             (pAVar7 = *(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o **)
                        &(pCVar6->fields).HasExplicitNameTag,
             pAVar7 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0))
          goto LAB_03f8f929;
          iVar22 = 0;
          bVar18 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                             (pAVar7,(MethodInfo *)0x0);
          pMVar21 = extraout_RDX_03;
          if ((char)bVar18 == '\0') {
            lVar8 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
            if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x28), lVar8 == 0)) ||
               (pUVar10 = *(UnityEngine_Transform_o **)(lVar8 + 0x10),
               pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f8f929;
            rotation = UnityEngine_Transform__get_rotation(pUVar10,(MethodInfo *)0x0);
            UVar43 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
            euler.fields.x = UVar43.fields.x * 57.29578;
            euler.fields.y = UVar43.fields.y * 57.29578;
            euler.fields.z = UVar43.fields.z * 57.29578;
            UVar43 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            fVar29 = UVar43.fields.x;
            local_a8._4_4_ = UVar43.fields.y;
            lVar8 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
            if (lVar8 == 0) goto LAB_03f8f929;
            pMVar21 = *(MethodInfo **)(lVar8 + 0x20);
            if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UVar43 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
            if (pMVar21 == (MethodInfo *)0x0) goto LAB_03f8f929;
            fVar25 = 360.0;
            local_a8._0_4_ =
                 (float)(~-(uint)(fVar29 < 0.0) & (uint)fVar29 |
                        (uint)(fVar29 + 360.0) & -(uint)(fVar29 < 0.0));
            uStack_a0 = extraout_XMM0_Dc;
            uStack_9c = extraout_XMM0_Dd;
            UnityEngine_Camera__ScreenPointToRay
                      ((UnityEngine_Ray_o *)local_98,(UnityEngine_Camera_o *)pMVar21,UVar43,
                       (MethodInfo *)0x0);
            fVar29 = fStack_84;
            fVar27 = (float)local_98._12_4_;
            fVar28 = (float)local_98._16_4_;
            if (DAT_056fde20 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Math);
              DAT_056fde20 = '\x01';
            }
            uVar24 = -(uint)((float)local_a8 < fVar25);
            local_58._4_12_ = local_a8._4_12_;
            local_58._0_4_ = (float)local_a8 + -360.0;
            plVar23 = (long *)TypeInfo_Math;
            if (*(int *)((long)&TypeInfo_Math[2].fields._inGameMenu + 4) == 0) {
              il2cpp_init_class();
            }
            uVar26 = ~uVar24 & local_58._0_4_;
            uVar31 = 0;
            uVar33 = 0;
            fVar25 = fVar29 * fVar29 + fVar28 * fVar28 + fVar27 * fVar27;
            if (fVar25 < 0.0) {
              fVar25 = sqrtf(fVar25);
              uVar31 = extraout_XMM0_Dc_05;
              uVar33 = extraout_XMM0_Dd_04;
            }
            else {
              fVar25 = SQRT(fVar25);
            }
            fVar42 = (float)(uVar26 | uVar24 & (uint)(float)local_a8);
            if (fVar25 <= 1e-05) {
              if (DAT_056fdd15 == '\0') {
                plVar23 = &TypeInfo_Vector3;
                il2cpp_init_method_metadata();
                DAT_056fdd15 = '\x01';
              }
              uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              uVar31 = (undefined4)uVar2;
              in_stack_ffffffffffffff3c = (undefined4)((ulong)uVar2 >> 0x20);
              fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            }
            else {
              fVar29 = fVar29 / fVar25;
              auVar15._4_4_ = fVar28;
              auVar15._0_4_ = fVar27;
              auVar15._8_8_ = 0;
              auVar41._4_4_ = fVar25;
              auVar41._0_4_ = fVar25;
              auVar41._8_4_ = uVar31;
              auVar41._12_4_ = uVar33;
              auVar41 = divps(auVar15,auVar41);
              uVar31 = auVar41._0_4_;
              in_stack_ffffffffffffff3c = auVar41._4_4_;
            }
            if (DAT_056fe077 == '\0') {
              plVar23 = &TypeInfo_Vector3;
              il2cpp_init_method_metadata();
              DAT_056fe077 = '\x01';
            }
            local_a8 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            local_48._0_4_ = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
            fVar27 = 0.0;
            auVar16._12_4_ = 0;
            auVar16._0_12_ = local_58._4_12_;
            local_58 = auVar16 << 0x20;
            if ((fVar42 <= 0.0) || (180.0 <= fVar42)) {
              pCVar3 = (__this->fields)._human;
              if ((pCVar3 == (Characters_Human_o *)0x0) ||
                 ((pCVar6 = (pCVar3->fields).Horse, pCVar6 == (Characters_Horse_o *)0x0 ||
                  (plVar23 = *(long **)&(pCVar6->fields).HasExplicitNameTag,
                  (Controllers_BasePlayerController_o *)plVar23 ==
                  (Controllers_BasePlayerController_o *)0x0)))) goto LAB_03f8f929;
              pMVar21 = (MethodInfo *)0x0;
              fVar28 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio
                                 ((Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
                                  plVar23,(MethodInfo *)0x0);
              local_58._0_4_ = 0x3f800000;
              local_a8 = CONCAT44(fVar28,(float)local_a8);
            }
            pCVar3 = (__this->fields)._human;
            UVar43.fields.y = (float)in_stack_ffffffffffffff3c;
            UVar43.fields.x = (float)uVar31;
            UVar43.fields.z = fVar29;
            fVar29 = Controllers_BasePlayerController__GetTargetAngle
                               ((Controllers_BasePlayerController_o *)plVar23,UVar43,pMVar21);
            if ((fVar42 <= 0.0) || (180.0 <= fVar42)) {
              if (DAT_056fde1f == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_056fde1f = '\x01';
              }
              uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
              in_stack_ffffffffffffff28 = (float)uVar2;
              in_stack_ffffffffffffff2c = (float)((ulong)uVar2 >> 0x20);
              fVar28 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
            }
            else {
              if (DAT_0570266b == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_0570266b = '\x01';
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
            value_00.fields.z = fVar27;
            __this_07.fields.value.fields.y = (float)(int)local_a8;
            __this_07.fields.value.fields.z = (float)(int)((ulong)local_a8 >> 0x20);
            __this_07.fields._0_8_ = local_98;
            System_Nullable<Vector3>___ctor(__this_07,value_00,MethodInfo_Nullable_1_UnityEngine_Vector3);
            if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03f8f929;
            percentPower_00.fields.value.fields.y = (float)local_98._8_4_;
            percentPower_00.fields.hasValue = local_98._0_4_;
            percentPower_00.fields.value.fields.x = (float)local_98._4_4_;
            percentPower_00.fields.value.fields.z = (float)local_98._12_4_;
            iVar22 = 0;
            direction_01.fields.y = in_stack_ffffffffffffff2c;
            direction_01.fields.x = in_stack_ffffffffffffff28;
            direction_01.fields.z = fVar28;
            bVar18 = Characters_Human__DashVertical
                               (pCVar3,fVar29,direction_01,percentPower_00,(MethodInfo *)0x0);
            pMVar21 = extraout_RDX_06;
            if ((char)bVar18 != '\0') {
              pCVar3 = (__this->fields)._human;
              if (((pCVar3 == (Characters_Human_o *)0x0) ||
                  (pCVar6 = (pCVar3->fields).Horse, pCVar6 == (Characters_Horse_o *)0x0)) ||
                 (pSVar9 = (pCVar6->fields).VisibleName, pSVar9 == (System_String_o *)0x0))
              goto LAB_03f8f929;
              (*(pSVar9->klass->vtable)._18_System_IConvertible_ToInt64.methodPtr)
                        (local_58._0_4_,pSVar9,
                         (pSVar9->klass->vtable)._18_System_IConvertible_ToInt64.method);
              iVar22 = 0;
              pMVar21 = extraout_RDX_07;
            }
          }
        }
      }
      goto LAB_03f8f6b1;
    }
    pCVar3 = (__this->fields)._human;
    if (((pCVar3 == (Characters_Human_o *)0x0) ||
        (pCVar6 = (pCVar3->fields).Horse, pCVar6 == (Characters_Horse_o *)0x0)) ||
       (pAVar7 = *(Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o **)
                  &(pCVar6->fields).HasExplicitNameTag,
       pAVar7 == (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)0x0))
    goto LAB_03f8f929;
    bVar18 = Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__get_PerkEnabled
                       (pAVar7,(MethodInfo *)0x0);
    if ((char)bVar18 == '\0') goto LAB_03f8ed06;
    lVar8 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (lVar8 == 0) goto LAB_03f8f929;
    __this_00 = *(UnityEngine_Camera_o **)(lVar8 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar43 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Camera_o *)0x0) goto LAB_03f8f929;
    UnityEngine_Camera__ScreenPointToRay
              ((UnityEngine_Ray_o *)local_98,__this_00,UVar43,(MethodInfo *)0x0);
    auVar37._4_4_ = local_98._16_4_;
    auVar37._0_4_ = local_98._12_4_;
    auVar37._8_8_ = 0;
    uVar31 = 0;
    uVar33 = 0;
    fVar27 = (float)local_98._12_4_;
    fVar28 = (float)local_98._16_4_;
    fVar29 = fStack_84;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      auVar37._4_4_ = fVar28;
      auVar37._0_4_ = fVar27;
      auVar37._8_4_ = uVar31;
      auVar37._12_4_ = uVar33;
      DAT_056fde20 = '\x01';
    }
    if (*(int *)((long)&TypeInfo_Math[2].fields._inGameMenu + 4) == 0) {
      il2cpp_init_class();
      auVar37._4_4_ = fVar28;
      auVar37._0_4_ = fVar27;
      auVar37._8_4_ = uVar31;
      auVar37._12_4_ = uVar33;
    }
    uVar30 = 0;
    uVar32 = 0;
    fVar25 = fVar29 * fVar29 + auVar37._4_4_ * auVar37._4_4_ + auVar37._0_4_ * auVar37._0_4_;
    auVar35 = ZEXT816(0);
    if (fVar25 < 0.0) {
      fVar25 = sqrtf(fVar25);
      auVar37._4_4_ = fVar28;
      auVar37._0_4_ = fVar27;
      auVar37._8_4_ = uVar31;
      auVar37._12_4_ = uVar33;
      uVar30 = extraout_XMM0_Dc_00;
      uVar32 = extraout_XMM0_Dd_00;
      if (1e-05 < fVar25) goto LAB_03f8ef7f;
LAB_03f8ef99:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        auVar35._8_8_ = extraout_XMM1_Qb;
        auVar35._0_8_ = extraout_XMM1_Qa;
        DAT_056fdd15 = '\x01';
      }
      auVar38._8_8_ = 0;
      auVar38._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar29 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
      pCVar3 = (__this->fields)._human;
    }
    else {
      fVar25 = SQRT(fVar25);
      if (fVar25 <= 1e-05) goto LAB_03f8ef99;
LAB_03f8ef7f:
      fVar29 = fVar29 / fVar25;
      auVar13._4_4_ = fVar25;
      auVar13._0_4_ = fVar25;
      auVar13._8_4_ = uVar30;
      auVar13._12_4_ = uVar32;
      auVar38 = divps(auVar37,auVar13);
      pCVar3 = (__this->fields)._human;
    }
    if ((pCVar3 == (Characters_Human_o *)0x0) ||
       (lVar8 = *(long *)&(pCVar3->fields).Dead, lVar8 == 0)) goto LAB_03f8f929;
    in_stack_ffffffffffffff28 = auVar38._0_4_;
    in_stack_ffffffffffffff2c = auVar38._4_4_;
    in_stack_ffffffffffffff30 = auVar38._8_4_;
    in_stack_ffffffffffffff34 = auVar38._12_4_;
    pUVar10 = *(UnityEngine_Transform_o **)(lVar8 + 0x10);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto LAB_03f8f929;
    UVar43 = UnityEngine_Transform__get_right(pUVar10,(MethodInfo *)0x0);
    auVar36._4_12_ = auVar35._4_12_;
    auVar36._0_4_ = UVar43.fields.z;
    fVar27 = UVar43.fields.x;
    fVar28 = UVar43.fields.y;
    if (DAT_05702992 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Mathf);
      auVar36 = ZEXT416((uint)auVar36._0_4_);
      DAT_05702992 = '\x01';
    }
    fVar25 = auVar36._0_4_;
    fVar42 = fVar25 * fVar25 + fVar28 * fVar28 + fVar27 * fVar27;
    local_b8._4_4_ = in_stack_ffffffffffffff2c;
    local_b8._0_4_ = in_stack_ffffffffffffff28;
    local_b8._8_4_ = in_stack_ffffffffffffff30;
    local_b8._12_4_ = in_stack_ffffffffffffff34;
    if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar42) {
      fVar39 = fVar29 * fVar25 +
               fVar28 * in_stack_ffffffffffffff2c + in_stack_ffffffffffffff28 * fVar27;
      auVar40._0_4_ = fVar39 * fVar27;
      auVar40._4_4_ = fVar39 * fVar28;
      auVar40._8_4_ = extraout_XMM0_Dc_01 * 0.0;
      auVar40._12_4_ = extraout_XMM0_Dd_01 * 0.0;
      auVar14._4_4_ = fVar42;
      auVar14._0_4_ = fVar42;
      auVar14._8_4_ = auVar36._8_4_;
      auVar14._12_4_ = auVar36._12_4_;
      auVar41 = divps(auVar40,auVar14);
      local_b8._0_4_ = in_stack_ffffffffffffff28 - auVar41._0_4_;
      local_b8._4_4_ = in_stack_ffffffffffffff2c - auVar41._4_4_;
      local_b8._8_4_ = in_stack_ffffffffffffff30 - auVar41._8_4_;
      local_b8._12_4_ = in_stack_ffffffffffffff34 - auVar41._12_4_;
      fVar27 = fVar29 - (fVar25 * fVar39) / fVar42;
      if (DAT_056fde20 == '\0') goto LAB_03f8f149;
LAB_03f8f098:
      iVar22 = *(int *)((long)&TypeInfo_Math[2].fields._inGameMenu + 4);
    }
    else {
      fVar27 = fVar29;
      if (DAT_056fde20 != '\0') goto LAB_03f8f098;
LAB_03f8f149:
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      iVar22 = *(int *)((long)&TypeInfo_Math[2].fields._inGameMenu + 4);
    }
    if (iVar22 == 0) {
      il2cpp_init_class();
    }
    uVar31 = 0;
    uVar33 = 0;
    fVar27 = fVar27 * fVar27 + local_b8._4_4_ * local_b8._4_4_ + local_b8._0_4_ * local_b8._0_4_;
    if (fVar27 < 0.0) {
      fVar27 = sqrtf(fVar27);
      uVar31 = extraout_XMM0_Dc_02;
      uVar33 = extraout_XMM0_Dd_02;
      if (1e-05 < fVar27) goto LAB_03f8f1a5;
LAB_03f8f1bf:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      pCVar3 = (__this->fields)._human;
    }
    else {
      fVar27 = SQRT(fVar27);
      if (fVar27 <= 1e-05) goto LAB_03f8f1bf;
LAB_03f8f1a5:
      auVar12._4_4_ = fVar27;
      auVar12._0_4_ = fVar27;
      auVar12._8_4_ = uVar31;
      auVar12._12_4_ = uVar33;
      divps(local_b8,auVar12);
      pCVar3 = (__this->fields)._human;
    }
    if (((pCVar3 == (Characters_Human_o *)0x0) ||
        (lVar8 = *(long *)&(pCVar3->fields).Dead, lVar8 == 0)) ||
       (pUVar10 = *(UnityEngine_Transform_o **)(lVar8 + 0x10),
       pUVar10 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f8f929;
    UVar43 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
    pCVar3 = (__this->fields)._human;
    if ((pCVar3 == (Characters_Human_o *)0x0) ||
       (lVar8 = *(long *)&(pCVar3->fields).Dead, lVar8 == 0)) goto LAB_03f8f929;
    local_48._0_4_ = UVar43.fields.z;
    local_58._8_4_ = extraout_XMM0_Dc_03;
    local_58._0_8_ = UVar43.fields._0_8_;
    local_58._12_4_ = extraout_XMM0_Dd_03;
    pUVar10 = *(UnityEngine_Transform_o **)(lVar8 + 0x10);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto LAB_03f8f929;
    pMVar21 = (MethodInfo *)0x0;
    UnityEngine_Transform__get_right(pUVar10,(MethodInfo *)0x0);
    plVar23 = (long *)0x0;
    fVar27 = (float)il2cpp_glue_03ddae10(local_58._0_4_);
    fVar27 = fVar27 / 90.0;
    auVar34 = ZEXT812(0x3f800000);
    if (fVar27 <= 1.0) {
      auVar34._4_8_ = 0;
      auVar34._0_4_ = fVar27;
    }
    fVar27 = (float)(-(uint)(0.0 <= fVar27) & auVar34._0_4_);
    local_48._4_4_ = 0;
    local_48._0_4_ = fVar27;
    local_48._8_4_ = extraout_XMM0_Dc_04 & auVar34._8_4_;
    local_48._12_4_ = 0;
    if (DAT_056fe077 == '\0') {
      plVar23 = &TypeInfo_Vector3;
      il2cpp_init_method_metadata();
      DAT_056fe077 = '\x01';
      fVar27 = (float)local_48._0_4_;
    }
    pfVar1 = (float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    fVar28 = *pfVar1;
    local_b8._0_8_ = *(undefined8 *)pfVar1;
    uVar24 = *(uint *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
    fVar25 = fVar28;
    if (0.0 < fVar27) {
      pCVar3 = (__this->fields)._human;
      if (((pCVar3 == (Characters_Human_o *)0x0) ||
          (pCVar6 = (pCVar3->fields).Horse, pCVar6 == (Characters_Horse_o *)0x0)) ||
         (plVar23 = *(long **)&(pCVar6->fields).HasExplicitNameTag,
         (Controllers_BasePlayerController_o *)plVar23 == (Controllers_BasePlayerController_o *)0x0)
         ) goto LAB_03f8f929;
      pMVar21 = (MethodInfo *)0x0;
      local_b8._4_4_ =
           Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk__GetPowerRatio
                     ((Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)plVar23,
                      (MethodInfo *)0x0);
      local_b8._0_4_ = fVar28;
    }
    direction.fields.y = in_stack_ffffffffffffff2c;
    direction.fields.x = in_stack_ffffffffffffff28;
    pCVar3 = (__this->fields)._human;
    direction.fields.z = fVar29;
    fVar27 = Controllers_BasePlayerController__GetTargetAngle
                       ((Controllers_BasePlayerController_o *)plVar23,direction,pMVar21);
    local_58._0_4_ = fVar27;
    local_98._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_98._8_4_ = 0.0;
    local_98._12_4_ = 0.0;
    value.fields.y = 0.0;
    value.fields.x = (float)uVar24;
    value.fields.z = fVar25;
    __this_06.fields.value.fields.y = (float)(int)local_b8._0_8_;
    __this_06.fields.value.fields.z = (float)(int)((ulong)local_b8._0_8_ >> 0x20);
    __this_06.fields._0_8_ = local_98;
    System_Nullable<Vector3>___ctor(__this_06,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
    if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03f8f929;
    percentPower.fields.value.fields.y = (float)local_98._8_4_;
    percentPower.fields.hasValue = local_98._0_4_;
    percentPower.fields.value.fields.x = (float)local_98._4_4_;
    percentPower.fields.value.fields.z = (float)local_98._12_4_;
    iVar22 = 0;
    direction_00.fields.y = in_stack_ffffffffffffff2c;
    direction_00.fields.x = in_stack_ffffffffffffff28;
    direction_00.fields.z = fVar29;
    bVar18 = Characters_Human__DashVertical
                       (pCVar3,(float)local_58._0_4_,direction_00,percentPower,(MethodInfo *)0x0);
    pMVar21 = extraout_RDX_04;
    if ((char)bVar18 != '\0') {
      pCVar3 = (__this->fields)._human;
      if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03f8f929;
      pCVar6 = (pCVar3->fields).Horse;
      if ((pCVar6 == (Characters_Horse_o *)0x0) ||
         (plVar23 = *(long **)&(pCVar6->fields).HasExplicitNameTag, plVar23 == (long *)0x0))
      goto LAB_03f8f929;
      (**(code **)(*plVar23 + 600))(local_48._0_4_,plVar23,*(undefined8 *)(*plVar23 + 0x260));
      pMVar21 = extraout_RDX_05;
    }
  }
LAB_03f8f6b1:
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) &&
     (lVar8 = *(long *)(lVar8 + 0xa0), lVar8 != 0)) {
    if (*(char *)(lVar8 + 0x11) != '\0') {
      pSVar5 = (__this->fields)._dashKeys;
      if ((pSVar5 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *)
                     0x0) ||
         (pSVar19 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Keys
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                               MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_Characte),
         pSVar19 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
      goto LAB_03f8f929;
      System_Collections_Generic_Dictionary_KeyCollection<Int32Enum__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 local_98,pSVar19,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
      local_68 = (InvokerMethod)CONCAT44(fStack_84,local_98._16_4_);
      pIStack_70 = (Il2CppMethodPointer)CONCAT44(local_98._12_4_,local_98._8_4_);
      local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_98._0_8_;
      while (__this_04.fields._dictionary._4_4_ = in_stack_ffffffffffffff2c,
            __this_04.fields._dictionary._0_4_ = in_stack_ffffffffffffff28,
            __this_04.fields._index = (int32_t)in_stack_ffffffffffffff30,
            __this_04.fields._version = (int32_t)in_stack_ffffffffffffff34,
            __this_04.fields._currentKey._0_4_ = iVar22,
            __this_04.fields._currentKey._4_4_ = in_stack_ffffffffffffff3c,
            bVar18 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Int32Enum__object>__MoveNext
                               (__this_04,(MethodInfo_31C84A0 *)&local_78), (char)bVar18 != '\0') {
        pSVar11 = (__this->fields)._dashTimes;
        if (pSVar11 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        key = (int32_t)local_68;
        fVar29 = System_Collections_Generic_Dictionary<Int32Enum__float>__get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                            (int32_t)local_68,MethodInfo_Single_get_Item);
        if (0.0 <= fVar29) {
          pSVar11 = (__this->fields)._dashTimes;
          if (pSVar11 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          in_stack_ffffffffffffff28 =
               System_Collections_Generic_Dictionary<Int32Enum__float>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,
                          MethodInfo_Single_get_Item);
          fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          System_Collections_Generic_Dictionary<Int32Enum__float>__set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,
                     in_stack_ffffffffffffff28 + fVar29,MethodInfo_Void_set_Item);
          pSVar11 = (__this->fields)._dashTimes;
          if (pSVar11 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          fVar29 = System_Collections_Generic_Dictionary<Int32Enum__float>__get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,
                              MethodInfo_Single_get_Item);
          if (0.2 < fVar29) {
            pSVar11 = (__this->fields)._dashTimes;
            if (pSVar11 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0
               ) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary<Int32Enum__float>__set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,-1.0,
                       MethodInfo_Void_set_Item);
          }
        }
        pSVar5 = (__this->fields)._dashKeys;
        if (pSVar5 == (System_Collections_Generic_Dictionary_HumanDashDirection__KeybindSetting__o *
                      )0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar20 = (Settings_KeybindSetting_o *)
                  System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,key,
                             MethodInfo_KeybindSetting_get_Item);
        if (pSVar20 == (Settings_KeybindSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar18 = Settings_KeybindSetting__GetKeyDown(pSVar20,0,(MethodInfo *)0x0);
        if ((char)bVar18 != '\0') {
          pSVar11 = (__this->fields)._dashTimes;
          if (pSVar11 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          fVar29 = System_Collections_Generic_Dictionary<Int32Enum__float>__get_Item
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,
                              MethodInfo_Single_get_Item);
          pSVar11 = (__this->fields)._dashTimes;
          if ((fVar29 != -1.0) || (NAN(fVar29))) {
            if (pSVar11 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0
               ) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            fVar29 = System_Collections_Generic_Dictionary<Int32Enum__float>__get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key
                                ,MethodInfo_Single_get_Item);
            if (0.0 < fVar29) {
              iVar22 = key;
            }
          }
          else {
            if (pSVar11 == (System_Collections_Generic_Dictionary_HumanDashDirection__float__o *)0x0
               ) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary<Int32Enum__float>__set_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,key,0.0,
                       MethodInfo_Void_set_Item);
          }
        }
      }
      __this_05.fields._dictionary._4_4_ = in_stack_ffffffffffffff2c;
      __this_05.fields._dictionary._0_4_ = in_stack_ffffffffffffff28;
      __this_05.fields._index = (int32_t)in_stack_ffffffffffffff30;
      __this_05.fields._version = (int32_t)in_stack_ffffffffffffff34;
      __this_05.fields._currentKey._0_4_ = iVar22;
      __this_05.fields._currentKey._4_4_ = in_stack_ffffffffffffff3c;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Int32Enum__object>__Dispose
                (__this_05,(MethodInfo_31C8490 *)&local_78);
      pMVar21 = extraout_RDX_08;
    }
    if (iVar22 != 0) {
      pCVar3 = (__this->fields)._human;
      fVar29 = Controllers_HumanPlayerController__GetDashAngle(__this,iVar22,pMVar21);
      if (pCVar3 == (Characters_Human_o *)0x0) goto LAB_03f8f929;
      Characters_Human__Dash(pCVar3,fVar29,(MethodInfo *)0x0);
    }
    return;
  }
LAB_03f8f929:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$GetDashAngle
// il2cpp: float Controllers_HumanPlayerController__GetDashAngle (Controllers_HumanPlayerController_o* __this, int32_t direction, const MethodInfo* method);
// 0x3f8fc60

float Controllers_HumanPlayerController__GetDashAngle
                (Controllers_HumanPlayerController_o *__this,int32_t direction,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler_02;
  UnityEngine_Quaternion_o UVar4;
  
  switch(direction) {
  case 1:
    if (DAT_05703f5a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_05703f5a = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
       (pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar4 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
      UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar4,(MethodInfo *)0x0);
      euler.fields.x = UVar3.fields.x * 57.29578;
      euler.fields.y = UVar3.fields.y * 57.29578;
      euler.fields.z = UVar3.fields.z * 57.29578;
      UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      atan2f(1.0,0.0);
      return UVar3.fields.y + 90.0 + -90.0;
    }
    break;
  case 2:
    if (DAT_05703f5a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_05703f5a = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
       (pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar4 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
      UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar4,(MethodInfo *)0x0);
      euler_01.fields.x = UVar3.fields.x * 57.29578;
      euler_01.fields.y = UVar3.fields.y * 57.29578;
      euler_01.fields.z = UVar3.fields.z * 57.29578;
      UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
      atan2f(-1.0,0.0);
      return UVar3.fields.y + 90.0 + 90.0;
    }
    break;
  case 3:
    if (DAT_05703f5a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_05703f5a = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
       (pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar4 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
      UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar4,(MethodInfo *)0x0);
      euler_00.fields.x = UVar3.fields.x * 57.29578;
      euler_00.fields.y = UVar3.fields.y * 57.29578;
      euler_00.fields.z = UVar3.fields.z * 57.29578;
      UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
      atan2f(0.0,-1.0);
      return UVar3.fields.y + 90.0 + -180.0;
    }
    break;
  case 4:
    if (DAT_05703f5a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
      DAT_05703f5a = '\x01';
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
       (pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar4 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
      UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar4,(MethodInfo *)0x0);
      euler_02.fields.x = UVar3.fields.x * 57.29578;
      euler_02.fields.y = UVar3.fields.y * 57.29578;
      euler_02.fields.z = UVar3.fields.z * 57.29578;
      UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler_02,(MethodInfo *)0x0);
      atan2f(0.0,1.0);
      return UVar3.fields.y + 90.0;
    }
    break;
  default:
    return 0.0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$IsSpin3Special
// il2cpp: bool Controllers_HumanPlayerController__IsSpin3Special (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f8d4c0

bool_conflict
Controllers_HumanPlayerController__IsSpin3Special
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *pCVar2;
  System_Action_Hashtable__o *pSVar3;
  System_Action_Hashtable__c *pSVar4;
  
  if (DAT_05703f9e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Spin3Special);
    DAT_05703f9e = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    if (((pCVar2->fields).FinishSetup == 9) &&
       (pSVar3 = (pCVar2->fields).OnPlayerPropertiesChanged,
       pSVar3 != (System_Action_Hashtable__o *)0x0)) {
      pSVar4 = pSVar3->klass;
      bVar1 = (TypeInfo_Spin3Special->_2).naturalAligment;
      if (bVar1 <= (pSVar4->_2).naturalAligment) {
        return (bool_conflict)
               CONCAT71((int7)((ulong)TypeInfo_Spin3Special >> 8),
                        (pSVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Spin3Special);
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$MovingLeft
// il2cpp: bool Controllers_HumanPlayerController__MovingLeft (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f8ff20

bool_conflict
Controllers_HumanPlayerController__MovingLeft
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_KeybindSetting_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05703f9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703f9f = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) &&
     (__this_00 = *(Settings_KeybindSetting_o **)(lVar1 + 0x30),
     __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar2 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$MovingRight
// il2cpp: bool Controllers_HumanPlayerController__MovingRight (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f8ff80

bool_conflict
Controllers_HumanPlayerController__MovingRight
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_KeybindSetting_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05703fa0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703fa0 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) &&
     (__this_00 = *(Settings_KeybindSetting_o **)(lVar1 + 0x38),
     __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar2 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$UsingGas
// il2cpp: bool Controllers_HumanPlayerController__UsingGas (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f8ffe0

bool_conflict
Controllers_HumanPlayerController__UsingGas
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_KeybindSetting_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05703fa1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703fa1 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
     (__this_00 = *(Settings_KeybindSetting_o **)(lVar1 + 0x68),
     __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar2 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$HookingLeft
// il2cpp: bool Controllers_HumanPlayerController__HookingLeft (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f90040

bool_conflict
Controllers_HumanPlayerController__HookingLeft
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_KeybindSetting_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05703fa2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703fa2 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
     (__this_00 = *(Settings_KeybindSetting_o **)(lVar1 + 0x30),
     __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar2 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$HookingRight
// il2cpp: bool Controllers_HumanPlayerController__HookingRight (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f900a0

bool_conflict
Controllers_HumanPlayerController__HookingRight
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_KeybindSetting_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05703fa3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703fa3 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
     (__this_00 = *(Settings_KeybindSetting_o **)(lVar1 + 0x38),
     __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar2 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$HookingBoth
// il2cpp: bool Controllers_HumanPlayerController__HookingBoth (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f90100

bool_conflict
Controllers_HumanPlayerController__HookingBoth
          (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_KeybindSetting_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05703fa4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703fa4 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
     (__this_00 = *(Settings_KeybindSetting_o **)(lVar1 + 0x40),
     __this_00 != (Settings_KeybindSetting_o *)0x0)) {
    bVar2 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$.ctor
// il2cpp: void Controllers_HumanPlayerController___ctor (Controllers_HumanPlayerController_o* __this, const MethodInfo* method);
// 0x3f90160

void Controllers_HumanPlayerController___ctor
               (Controllers_HumanPlayerController_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (DAT_05703fa5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_HumanState);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_HumanState);
    DAT_05703fa5 = '\x01';
  }
  (__this->fields)._reelInScrollCooldown = 0.2;
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_HashSet_HumanState);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)method_00,MethodInfo_HashSet_1_Characters_HumanState);
  if (method_00 != (MethodInfo *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,7,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,10,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,8,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,9,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)method_00,0xf,MethodInfo_Boolean_Add);
    (__this->fields)._illegalWeaponStates =
         (System_Collections_Generic_HashSet_HumanState__o *)method_00;
    il2cpp_runtime_glue(&(__this->fields)._illegalWeaponStates);
    Controllers_BasePlayerController___ctor
              ((Controllers_ErenShifterPlayerController_o *)__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.HumanPlayerController$$.cctor
// il2cpp: void Controllers_HumanPlayerController___cctor (const MethodInfo* method);
// 0x3f90260

/* WARNING: Type propagation algorithm not settling */

void Controllers_HumanPlayerController___cctor(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *layers;
  
  if (DAT_05703fa6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanPlayerController);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05703fa6 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
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
              UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              (*(UnityEngine_LayerMask_Fields **)(TypeInfo_HumanPlayerController + 0xb8))->m_Mask =
                   (int32_t)UVar3.fields.m_Mask;
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


